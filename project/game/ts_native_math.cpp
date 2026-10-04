// Native versions of the game's hot leaf math routines (Xbox only).
//
// The recompiled originals store the guest pc before every instruction,
// dispatch each call through the function table and run a scheduler
// checkpoint at every loop back-edge. These do the same arithmetic in host
// registers and leave exactly the guest state the original leaves: return
// values, every register the original (and its callees) writes, ACC and the
// vf registers, the guest memory it writes (stack frames included) and
// ctx->pc = $ra. Float operations use the recompiler's own macros in the
// original's order, so results are bit-identical (SSE single precision on
// both sides, no flush to zero). Rare paths (huge sine/cosine arguments,
// negative or NaN square roots, overflow traps) call the original.
//
// The lighting update (obInstLightUpdate) is not a leaf: its calls go
// through the dispatcher like the original's. The function table keeps the
// original under every resume address (the pc after each call and each
// loop head), so a callee that unwinds to the scheduler is resumed by the
// original from the registers the native code stored before the call.
//
// TS_NATIVE_MATH_SELFTEST: at boot each function runs against its original
// on the same random inputs; one that differs is put back to the original.
// The callees of obInstLightUpdate that read the level (the bullet and
// ambient lookups) are stood in for by a deterministic stub during its
// test, which clobbers every caller-saved register.
#include "ts_native_math.h"

#if defined(PLATFORM_XBOX)
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_recompiled_functions.h"
#include "runtime/ee_scheduler.h"

#include <chrono>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstring>

#ifndef TS_NATIVE_MATH_SELFTEST
#define TS_NATIVE_MATH_SELFTEST 0
#endif

TsNativeMathStatus g_tsNativeMath;

namespace
{
    using GuestFunction = PS2Runtime::RecompiledFunction;

#define TS_ALWAYS_INLINE inline __attribute__((always_inline))
#define TS_LANE(v, lane) _mm_shuffle_ps((v), (v), _MM_SHUFFLE(lane, lane, lane, lane))

    // Register values as the recompiled code forms them.
    TS_ALWAYS_INLINE uint64_t sext32(uint64_t value)
    {
        return static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(static_cast<uint32_t>(value))));
    }

    TS_ALWAYS_INLINE uint64_t slt(uint64_t a, uint64_t b)
    {
        return static_cast<int64_t>(a) < static_cast<int64_t>(b) ? 1u : 0u;
    }

    TS_ALWAYS_INLINE uint32_t lo32(uint64_t value) { return static_cast<uint32_t>(value); }

    // Inline only: a float returned from a call travels through the x87,
    // which would quiet a signalling NaN that mfc1/mtc1/lwc1/swc1 copy as is.
    TS_ALWAYS_INLINE uint32_t bitsOf(float value)
    {
        uint32_t bits;
        std::memcpy(&bits, &value, sizeof(bits));
        return bits;
    }

    TS_ALWAYS_INLINE float floatOf(uint32_t bits)
    {
        float value;
        std::memcpy(&value, &bits, sizeof(value));
        return value;
    }

    TS_ALWAYS_INLINE void returnToCaller(R5900Context *ctx) { ctx->pc = GPR_U32(ctx, 31); }

    // vf write masks as the recompiler builds them (w, z, y, x).
    TS_ALWAYS_INLINE __m128 maskXYZ() { return _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1)); }
    TS_ALWAYS_INLINE __m128 maskW() { return _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0)); }

    // ---- VU0 macro-mode matrices (libvu0)

    // sceVu0MulMatrix(m0, m1, m2): m0 = m1 * m2, one column of m2 at a time.
    // Leaves m1 in vf4-vf7, the last column in vf8, its result in vf9 and
    // ACC, a3 = 0 and a0, a2 past the matrices.
    void nativeVu0MulMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t out = GPR_U32(ctx, 4), right = GPR_U32(ctx, 6);
        // a0/a2 step with addi, which traps on signed overflow: pointers
        // within 64 bytes of 2 GB (never a matrix) keep the original.
        if (static_cast<int32_t>(out) > 0x7FFFFFBF || static_cast<int32_t>(right) > 0x7FFFFFBF)
        {
            sceVu0MulMatrix_0x2d5e98(rdram, ctx, runtime);
            return;
        }
        const uint32_t left = GPR_U32(ctx, 5);
        const __m128 c0 = _mm_castsi128_ps(READ128(left));
        const __m128 c1 = _mm_castsi128_ps(READ128(left + 16u));
        const __m128 c2 = _mm_castsi128_ps(READ128(left + 32u));
        const __m128 c3 = _mm_castsi128_ps(READ128(left + 48u));
        __m128 column = ctx->vu0_vf[8], result = ctx->vu0_vf[9], acc = ctx->vu0_acc;
        for (uint32_t offset = 0; offset < 64u; offset += 16u)
        {
            // Each column is read after the previous one is stored: m0 may overlap m2.
            column = _mm_castsi128_ps(READ128(right + offset));
            acc = PS2_VMUL(c0, TS_LANE(column, 0));
            acc = PS2_VADD(acc, PS2_VMUL(c1, TS_LANE(column, 1)));
            acc = PS2_VADD(acc, PS2_VMUL(c2, TS_LANE(column, 2)));
            result = PS2_VADD(acc, PS2_VMUL(c3, TS_LANE(column, 3)));
            WRITE128(out + offset, _mm_castps_si128(result));
        }
        ctx->vu0_vf[4] = c0;
        ctx->vu0_vf[5] = c1;
        ctx->vu0_vf[6] = c2;
        ctx->vu0_vf[7] = c3;
        ctx->vu0_vf[8] = column;
        ctx->vu0_vf[9] = result;
        ctx->vu0_acc = acc;
        SET_GPR_S32(ctx, 7, 0);
        SET_GPR_S32(ctx, 6, static_cast<int32_t>(right + 64u));
        SET_GPR_S32(ctx, 4, static_cast<int32_t>(out + 64u));
        returnToCaller(ctx);
    }

    // sceVu0CopyMatrix(dst, src) through a2, a3, t0, t1 (whole quadwords).
    void nativeVu0CopyMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t dst = GPR_U32(ctx, 4), src = GPR_U32(ctx, 5);
        const __m128i r0 = READ128(src), r1 = READ128(src + 16u), r2 = READ128(src + 32u), r3 = READ128(src + 48u);
        SET_GPR_VEC(ctx, 6, r0);
        SET_GPR_VEC(ctx, 7, r1);
        SET_GPR_VEC(ctx, 8, r2);
        SET_GPR_VEC(ctx, 9, r3);
        WRITE128(dst, r0);
        WRITE128(dst + 16u, r1);
        WRITE128(dst + 32u, r2);
        WRITE128(dst + 48u, r3);
        returnToCaller(ctx);
    }

    // sceVu0UnitMatrix(m): built from vf0 in vf4-vf7, stored last row first.
    void nativeVu0UnitMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const __m128 vf0 = ctx->vu0_vf[0];
        __m128 row3 = PS2_VSUB(vf0, vf0);
        row3 = PS2_VBLEND(row3, PS2_VADD(row3, vf0), maskW());
        const __m128 row2 = _mm_shuffle_ps(row3, row3, _MM_SHUFFLE(0, 3, 2, 1));
        const __m128 row1 = _mm_shuffle_ps(row2, row2, _MM_SHUFFLE(0, 3, 2, 1));
        const __m128 row0 = _mm_shuffle_ps(row1, row1, _MM_SHUFFLE(0, 3, 2, 1));
        ctx->vu0_vf[4] = row3;
        ctx->vu0_vf[5] = row2;
        ctx->vu0_vf[6] = row1;
        ctx->vu0_vf[7] = row0;
        const uint32_t m = GPR_U32(ctx, 4);
        WRITE128(m + 48u, _mm_castps_si128(row3));
        WRITE128(m + 32u, _mm_castps_si128(row2));
        WRITE128(m + 16u, _mm_castps_si128(row1));
        WRITE128(m, _mm_castps_si128(row0));
        returnToCaller(ctx);
    }

    // sceVu0TransposeMatrix(dst, src) with MMI word shuffles in t0-t7.
    void nativeVu0TransposeMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t dst = GPR_U32(ctx, 4), src = GPR_U32(ctx, 5);
        const __m128i t0 = READ128(src), t1 = READ128(src + 16u), t2 = READ128(src + 32u), t3 = READ128(src + 48u);
        const __m128i t4 = PS2_PEXTLW(t1, t0), t5 = PS2_PEXTUW(t1, t0);
        const __m128i t6 = PS2_PEXTLW(t3, t2), t7 = PS2_PEXTUW(t3, t2);
        const __m128i r0 = PS2_PCPYLD(t6, t4), r1 = _mm_unpackhi_epi64(t4, t6);
        const __m128i r2 = PS2_PCPYLD(t7, t5), r3 = _mm_unpackhi_epi64(t5, t7);
        SET_GPR_VEC(ctx, 8, r0);
        SET_GPR_VEC(ctx, 9, r1);
        SET_GPR_VEC(ctx, 10, r2);
        SET_GPR_VEC(ctx, 11, r3);
        SET_GPR_VEC(ctx, 12, t4);
        SET_GPR_VEC(ctx, 13, t5);
        SET_GPR_VEC(ctx, 14, t6);
        SET_GPR_VEC(ctx, 15, t7);
        WRITE128(dst, r0);
        WRITE128(dst + 16u, r1);
        WRITE128(dst + 32u, r2);
        WRITE128(dst + 48u, r3);
        returnToCaller(ctx);
    }

    // ---- The game's own matrix helpers

    // matrixVecRotAligned(m, v): v.xyz = m3x3 * v in place (VU0, w kept;
    // ACC.w and vf8.w keep their old values).
    void nativeMatrixVecRotAligned(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t m = GPR_U32(ctx, 4), v = GPR_U32(ctx, 5);
        __m128 vec = _mm_castsi128_ps(READ128(v));
        const __m128 c0 = _mm_castsi128_ps(READ128(m));
        const __m128 c1 = _mm_castsi128_ps(READ128(m + 16u));
        const __m128 c2 = _mm_castsi128_ps(READ128(m + 32u));
        __m128 acc = PS2_VBLEND(ctx->vu0_acc, PS2_VMUL(c0, TS_LANE(vec, 0)), maskXYZ());
        acc = PS2_VBLEND(acc, PS2_VADD(acc, PS2_VMUL(c1, TS_LANE(vec, 1))), maskXYZ());
        vec = PS2_VBLEND(vec, PS2_VADD(acc, PS2_VMUL(c2, TS_LANE(vec, 2))), maskXYZ());
        ctx->vu0_vf[4] = c0;
        ctx->vu0_vf[5] = c1;
        ctx->vu0_vf[6] = c2;
        ctx->vu0_vf[8] = vec;
        ctx->vu0_acc = acc;
        WRITE128(v, _mm_castps_si128(vec));
        returnToCaller(ctx);
    }

    // matrixVec3Mul4Aligned(m, v, out): out = m * (v.xyz, vf0.w) (VU0).
    void nativeMatrixVec3Mul4Aligned(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t m = GPR_U32(ctx, 4), v = GPR_U32(ctx, 5);
        const __m128 vec = _mm_castsi128_ps(READ128(v));
        const __m128 c0 = _mm_castsi128_ps(READ128(m));
        const __m128 c1 = _mm_castsi128_ps(READ128(m + 16u));
        const __m128 c2 = _mm_castsi128_ps(READ128(m + 32u));
        const __m128 c3 = _mm_castsi128_ps(READ128(m + 48u));
        const __m128 vf0 = ctx->vu0_vf[0];
        __m128 acc = PS2_VMUL(c0, TS_LANE(vec, 0));
        acc = PS2_VADD(acc, PS2_VMUL(c1, TS_LANE(vec, 1)));
        acc = PS2_VADD(acc, PS2_VMUL(c2, TS_LANE(vec, 2)));
        const __m128 result = PS2_VADD(acc, PS2_VMUL(c3, TS_LANE(vf0, 3)));
        ctx->vu0_vf[4] = c0;
        ctx->vu0_vf[5] = c1;
        ctx->vu0_vf[6] = c2;
        ctx->vu0_vf[7] = c3;
        ctx->vu0_vf[8] = vec;
        ctx->vu0_vf[9] = result;
        ctx->vu0_acc = acc;
        WRITE128(GPR_U32(ctx, 6), _mm_castps_si128(result));
        returnToCaller(ctx);
    }

    // matrixVec3Mul4(m, v, out): the FPU version, out[i] = v.x*m[0][i] +
    // v.y*m[1][i] + v.z*m[2][i] + m[3][i] for i = 0..3. v is read again for
    // every element (out may overlap it).
    void nativeMatrixVec3Mul4(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t m = GPR_U32(ctx, 4), v = GPR_U32(ctx, 5);
        uint32_t out = GPR_U32(ctx, 6);
        uint32_t row0 = m, row1 = m + 16u, row2 = m + 32u, row3 = m + 48u; // a3, a0, v0, v1
        float f0 = 0.0f, f1 = 0.0f, f2 = 0.0f, f3 = 0.0f, f4 = 0.0f;
        for (int i = 0; i < 4; ++i)
        {
            f1 = floatOf(READ32(row0));
            f4 = floatOf(READ32(row1));
            f0 = floatOf(READ32(v));
            f2 = floatOf(READ32(v + 4u));
            f0 = FPU_MUL_S(f0, f1);
            f3 = floatOf(READ32(row2));
            f2 = FPU_MUL_S(f2, f4);
            f1 = floatOf(READ32(v + 8u));
            f4 = floatOf(READ32(row3));
            f1 = FPU_MUL_S(f1, f3);
            f0 = FPU_ADD_S(f0, f2);
            f0 = FPU_ADD_S(f0, f1);
            f0 = FPU_ADD_S(f0, f4);
            WRITE32(out, bitsOf(f0));
            row0 += 4u;
            row1 += 4u;
            row2 += 4u;
            row3 += 4u;
            out += 4u;
        }
        ctx->f[0] = f0;
        ctx->f[1] = f1;
        ctx->f[2] = f2;
        ctx->f[3] = f3;
        ctx->f[4] = f4;
        SET_GPR_S32(ctx, 7, static_cast<int32_t>(row0));
        SET_GPR_S32(ctx, 4, static_cast<int32_t>(row1));
        SET_GPR_S32(ctx, 2, static_cast<int32_t>(row2));
        SET_GPR_S32(ctx, 3, static_cast<int32_t>(row3));
        SET_GPR_S32(ctx, 8, -1);
        SET_GPR_S32(ctx, 6, static_cast<int32_t>(out));
        returnToCaller(ctx);
    }

    // matrixVecMul(m, v): v.xyz = m * (v.xyz, 1) through a 16-byte stack
    // temporary, then copied back.
    void nativeMatrixVecMul(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t m = GPR_U32(ctx, 4), sp = GPR_U32(ctx, 29) - 16u;
        uint32_t v = GPR_U32(ctx, 5);
        uint32_t row0 = m, row1 = m + 16u, row3 = m + 48u, row2 = m + 32u; // t0, a0, a2, v0
        const float x = floatOf(READ32(v)), y = floatOf(READ32(v + 4u)), z = floatOf(READ32(v + 8u));
        uint32_t temp = sp;
        float f0 = 0.0f, f1 = 0.0f, f2 = 0.0f, f3 = 0.0f;
        for (int i = 0; i < 3; ++i)
        {
            f0 = floatOf(READ32(row0));
            f2 = floatOf(READ32(row1));
            f0 = FPU_MUL_S(x, f0);
            f1 = floatOf(READ32(row2));
            f2 = FPU_MUL_S(y, f2);
            f3 = floatOf(READ32(row3));
            f1 = FPU_MUL_S(z, f1);
            f0 = FPU_ADD_S(f0, f2);
            f0 = FPU_ADD_S(f0, f1);
            f0 = FPU_ADD_S(f0, f3);
            WRITE32(temp, bitsOf(f0));
            row0 += 4u;
            row1 += 4u;
            row2 += 4u;
            row3 += 4u;
            temp += 4u;
        }
        uint32_t copied = sp, bits = 0;
        for (int i = 0; i < 3; ++i)
        {
            bits = READ32(copied);
            WRITE32(v, bits);
            copied += 4u;
            v += 4u;
        }
        std::memcpy(&ctx->f[0], &bits, sizeof(bits));
        ctx->f[1] = f1;
        ctx->f[2] = f2;
        ctx->f[3] = f3;
        ctx->f[4] = z;
        ctx->f[5] = y;
        ctx->f[6] = x;
        SET_GPR_S32(ctx, 8, static_cast<int32_t>(row0));
        SET_GPR_S32(ctx, 4, static_cast<int32_t>(row1));
        SET_GPR_S32(ctx, 6, static_cast<int32_t>(row3));
        SET_GPR_S32(ctx, 7, static_cast<int32_t>(temp));
        SET_GPR_S32(ctx, 2, static_cast<int32_t>(copied));
        SET_GPR_S32(ctx, 3, -1);
        SET_GPR_S32(ctx, 5, static_cast<int32_t>(v));
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(sp + 16u));
        returnToCaller(ctx);
    }

    // ---- Scalar helpers

    // anglediff(a, b): b - a wrapped into [-180, 180] once.
    void nativeAnglediff(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const float diff = FPU_SUB_S(ctx->f[13], ctx->f[12]);
        uint32_t fcr31 = ctx->fcr31;
        uint32_t at = 0x43B40000u; // 360
        float result;
        const bool below = FPU_C_OLT_S(diff, floatOf(0xC3340000u)); // < -180
        fcr31 = below ? (fcr31 | 0x800000u) : (fcr31 & ~0x800000u);
        if (below)
        {
            result = FPU_ADD_S(diff, floatOf(0x43B40000u));
        }
        else
        {
            const bool above = FPU_C_OLT_S(floatOf(0x43340000u), diff); // 180 <
            fcr31 = above ? (fcr31 | 0x800000u) : (fcr31 & ~0x800000u);
            if (above)
            {
                result = FPU_SUB_S(diff, floatOf(0x43B40000u));
            }
            else
            {
                at = 0x43340000u;
                result = FPU_MOV_S(diff);
            }
        }
        ctx->f[13] = diff;
        ctx->f[0] = result;
        ctx->fcr31 = fcr31;
        SET_GPR_U64(ctx, 1, sext32(at));
        returnToCaller(ctx);
    }

    // fabsf(x) as the library does it: through v1 with a 0x7FFFFFFF mask in v0.
    void nativeFabsf(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        uint32_t bits;
        std::memcpy(&bits, &ctx->f[12], sizeof(bits));
        bits &= 0x7FFFFFFFu;
        SET_GPR_U64(ctx, 3, bits);
        SET_GPR_U64(ctx, 2, 0x7FFFFFFFu);
        std::memcpy(&ctx->f[0], &bits, sizeof(bits));
        returnToCaller(ctx);
    }

    // __muldi3(a, b): the 64-bit product from three 32-bit multiplies
    // (mult, mult1, multu), with the same HI/LO, HI1/LO1 and scratch values.
    void nativeMuldi3(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint64_t a = GPR_U64(ctx, 4), b = GPR_U64(ctx, 5);
        const uint64_t aHigh = static_cast<uint64_t>(static_cast<int64_t>(a) >> 32);
        const uint64_t bHigh = static_cast<uint64_t>(static_cast<int64_t>(b) >> 32);
        const uint64_t aLow = sext32(a), bLow = sext32(b);
        const int64_t cross0 = static_cast<int64_t>(static_cast<int32_t>(aLow)) * static_cast<int32_t>(bHigh);
        const int64_t cross1 = static_cast<int64_t>(static_cast<int32_t>(aHigh)) * static_cast<int32_t>(bLow);
        const uint64_t low = static_cast<uint64_t>(lo32(aLow)) * lo32(bLow);
        ctx->lo1 = sext32(static_cast<uint64_t>(cross1));
        ctx->hi1 = sext32(static_cast<uint64_t>(cross1 >> 32));
        ctx->lo = sext32(low);
        ctx->hi = sext32(low >> 32);
        const uint64_t crossSum = sext32(lo32(static_cast<uint64_t>(cross0)) + lo32(static_cast<uint64_t>(cross1)));
        const uint64_t lowWords = (ctx->lo << 32 >> 32) | (ctx->hi << 32);
        const uint64_t high = sext32(lo32(static_cast<uint64_t>(static_cast<int64_t>(lowWords) >> 32)) + lo32(crossSum));
        SET_GPR_U64(ctx, 2, (lowWords & 0xFFFFFFFFu) | (high << 32));
        SET_GPR_U64(ctx, 3, crossSum);
        SET_GPR_U64(ctx, 4, lowWords & 0xFFFFFFFFu);
        SET_GPR_U64(ctx, 5, 0xFFFFFFFFu);
        SET_GPR_U64(ctx, 6, sext32(static_cast<uint64_t>(cross1)));
        returnToCaller(ctx);
    }

    // ---- sinf / cosf (fdlibm single precision)
    //
    // sinf and cosf with __kernel_sinf, __kernel_cosf, __ieee754_rem_pio2f and
    // fabsf, transcribed instruction by instruction. The registers they touch
    // live in TrigRegs from entry to exit; ones a path leaves alone are
    // stored back unchanged. |x| > 2^7*pi/2 (the __kernel_rem_pio2f path)
    // keeps the original.

    struct TrigRegs
    {
        uint64_t at, v0, v1, a0, a1, s0, s1, s2, sp, ra;
        float f0, f1, f2, f3, f4, f5, f6, f12, f13;
    };

    TS_ALWAYS_INLINE void loadTrig(TrigRegs &r, const R5900Context *ctx)
    {
        r.at = GPR_U64(ctx, 1);
        r.v0 = GPR_U64(ctx, 2);
        r.v1 = GPR_U64(ctx, 3);
        r.a0 = GPR_U64(ctx, 4);
        r.a1 = GPR_U64(ctx, 5);
        r.s0 = GPR_U64(ctx, 16);
        r.s1 = GPR_U64(ctx, 17);
        r.s2 = GPR_U64(ctx, 18);
        r.sp = GPR_U64(ctx, 29);
        r.ra = GPR_U64(ctx, 31);
        r.f0 = ctx->f[0];
        r.f1 = ctx->f[1];
        r.f2 = ctx->f[2];
        r.f3 = ctx->f[3];
        r.f4 = ctx->f[4];
        r.f5 = ctx->f[5];
        r.f6 = ctx->f[6];
        r.f12 = ctx->f[12];
        r.f13 = ctx->f[13];
    }

    TS_ALWAYS_INLINE void storeTrig(const TrigRegs &r, R5900Context *ctx)
    {
        SET_GPR_U64(ctx, 1, r.at);
        SET_GPR_U64(ctx, 2, r.v0);
        SET_GPR_U64(ctx, 3, r.v1);
        SET_GPR_U64(ctx, 4, r.a0);
        SET_GPR_U64(ctx, 5, r.a1);
        SET_GPR_U64(ctx, 16, r.s0);
        SET_GPR_U64(ctx, 17, r.s1);
        SET_GPR_U64(ctx, 18, r.s2);
        SET_GPR_U64(ctx, 29, r.sp);
        SET_GPR_U64(ctx, 31, r.ra);
        ctx->f[0] = r.f0;
        ctx->f[1] = r.f1;
        ctx->f[2] = r.f2;
        ctx->f[3] = r.f3;
        ctx->f[4] = r.f4;
        ctx->f[5] = r.f5;
        ctx->f[6] = r.f6;
        ctx->f[12] = r.f12;
        ctx->f[13] = r.f13;
    }

    // __kernel_sinf(x f12, y f13, iy a0) at 0x2dbb20.
    inline void kernelSinf(TrigRegs &r)
    {
        r.a1 = r.a0;
        r.v0 = sext32(bitsOf(r.f12));
        r.v1 = 0x7FFFFFFFu;
        r.a0 = r.v0 & r.v1;
        r.v0 = slt(0x31FFFFFFu, r.a0);
        if (r.v0 == 0u)
        {
            // |x| < 2^-27: (int)x == 0 returns x.
            const int32_t whole = FPU_CVT_W_S(r.f12);
            r.f0 = floatOf(static_cast<uint32_t>(whole));
            r.v0 = sext32(static_cast<uint32_t>(whole));
            if (r.v0 == 0u)
            {
                r.f0 = FPU_MOV_S(r.f12);
                return;
            }
        }
        r.f5 = FPU_MUL_S(r.f12, r.f12); // z
        r.f0 = floatOf(0x2F2EC9D3u);   // S6
        r.f1 = floatOf(0xB2D72F34u);   // S5
        r.f2 = floatOf(0x3638EF1Bu);   // S4
        r.f0 = FPU_MUL_S(r.f5, r.f0);
        r.f3 = floatOf(0xB9500D01u);   // S3
        r.f4 = floatOf(0x3C088889u);   // S2
        r.f6 = FPU_MUL_S(r.f5, r.f12); // v
        r.f0 = FPU_ADD_S(r.f0, r.f1);
        r.f0 = FPU_MUL_S(r.f5, r.f0);
        r.f0 = FPU_ADD_S(r.f0, r.f2);
        r.f0 = FPU_MUL_S(r.f5, r.f0);
        r.f0 = FPU_ADD_S(r.f0, r.f3);
        r.f0 = FPU_MUL_S(r.f5, r.f0);
        r.f1 = FPU_ADD_S(r.f0, r.f4);  // r
        r.at = sext32(0xBE2AAAABu);    // S1, last of the constants on both paths
        if (r.a1 == 0u)
        {
            r.f0 = FPU_MUL_S(r.f5, r.f1);
            r.f1 = floatOf(0xBE2AAAABu);
            r.f0 = FPU_ADD_S(r.f0, r.f1);
            r.f0 = FPU_MUL_S(r.f6, r.f0);
            r.f0 = FPU_ADD_S(r.f12, r.f0);
            return;
        }
        r.f0 = floatOf(0x3F000000u);
        r.f2 = FPU_MUL_S(r.f6, r.f1);
        r.f1 = floatOf(0xBE2AAAABu);
        r.f0 = FPU_MUL_S(r.f13, r.f0);
        r.f1 = FPU_MUL_S(r.f6, r.f1);
        r.f0 = FPU_SUB_S(r.f0, r.f2);
        r.f0 = FPU_MUL_S(r.f5, r.f0);
        r.f0 = FPU_SUB_S(r.f0, r.f13);
        r.f0 = FPU_SUB_S(r.f0, r.f1);
        r.f0 = FPU_SUB_S(r.f12, r.f0);
    }

    // __kernel_cosf(x f12, y f13) at 0x2db078.
    inline void kernelCosf(TrigRegs &r)
    {
        r.v0 = sext32(bitsOf(r.f12));
        r.v1 = 0x7FFFFFFFu;
        r.a0 = r.v0 & r.v1;
        r.v0 = slt(0x31FFFFFFu, r.a0);
        r.at = 0x3F800000u; // the last constant on every path
        if (r.v0 == 0u)
        {
            const int32_t whole = FPU_CVT_W_S(r.f12);
            r.f0 = floatOf(static_cast<uint32_t>(whole));
            r.v0 = sext32(static_cast<uint32_t>(whole));
            if (r.v0 == 0u)
            {
                r.f0 = floatOf(0x3F800000u);
                return;
            }
        }
        r.f6 = FPU_MUL_S(r.f12, r.f12); // z
        r.f0 = floatOf(0xAD47D74Eu);    // C6
        r.f2 = floatOf(0x310F74F6u);    // C5
        r.f3 = floatOf(0xB493F27Cu);    // C4
        r.f0 = FPU_MUL_S(r.f6, r.f0);
        r.f1 = floatOf(0x37D00D01u);    // C3
        r.f4 = floatOf(0xBAB60B61u);    // C2
        r.v0 = slt(0x3E999999u, r.a0);
        r.f5 = floatOf(0x3D2AAAABu);    // C1
        r.f0 = FPU_ADD_S(r.f0, r.f2);
        r.f0 = FPU_MUL_S(r.f6, r.f0);
        r.f0 = FPU_ADD_S(r.f0, r.f3);
        r.f0 = FPU_MUL_S(r.f6, r.f0);
        r.f0 = FPU_ADD_S(r.f0, r.f1);
        r.f0 = FPU_MUL_S(r.f6, r.f0);
        r.f0 = FPU_ADD_S(r.f0, r.f4);
        r.f0 = FPU_MUL_S(r.f6, r.f0);
        r.f0 = FPU_ADD_S(r.f0, r.f5);
        r.f1 = FPU_MUL_S(r.f6, r.f0);
        if (r.v0 == 0u)
        {
            // |x| < 0.3
            r.f1 = FPU_MUL_S(r.f6, r.f1);
            r.f0 = floatOf(0x3F000000u);
            r.f2 = FPU_MUL_S(r.f12, r.f13);
            r.f3 = floatOf(0x3F800000u);
            r.f0 = FPU_MUL_S(r.f6, r.f0);
            r.f1 = FPU_SUB_S(r.f1, r.f2);
            r.f0 = FPU_SUB_S(r.f0, r.f1);
            r.f0 = FPU_SUB_S(r.f3, r.f0);
            return;
        }
        // qx: 0.28125 above 0.78125, else x/4 (exponent - 2).
        const bool small = slt(0x3F480000u, r.a0) == 0u;
        r.v0 = small ? sext32(lo32(r.a0) + 0xFF000000u) : 0x3E900000u;
        r.f0 = floatOf(0x3F000000u);
        r.f2 = FPU_MUL_S(r.f6, r.f1);
        r.f3 = FPU_MUL_S(r.f12, r.f13);
        r.f1 = floatOf(0x3F800000u);
        r.f0 = FPU_MUL_S(r.f6, r.f0);
        r.f4 = floatOf(lo32(r.v0));
        r.f2 = FPU_SUB_S(r.f2, r.f3);
        r.f0 = FPU_SUB_S(r.f0, r.f4);
        r.f1 = FPU_SUB_S(r.f1, r.f4);
        r.f0 = FPU_SUB_S(r.f0, r.f2);
        r.f0 = FPU_SUB_S(r.f1, r.f0);
    }

    // __ieee754_rem_pio2f(x f12, y a0) at 0x2dab60, for |x| <= 2^7*pi/2
    // (the callers keep larger arguments on the original). Returns n in v0,
    // y[0], y[1] in guest memory.
    inline void remPio2f(TrigRegs &r, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        r.sp = sext32(lo32(r.sp) - 0x50u);
        const uint32_t sp = lo32(r.sp);
        WRITE64(sp + 0x20u, r.s1);
        WRITE64(sp + 0x40u, r.ra);
        WRITE64(sp + 0x30u, r.s2);
        WRITE64(sp + 0x10u, r.s0);
        r.s2 = sext32(bitsOf(r.f12)); // hx
        r.v1 = 0x7FFFFFFFu;
        r.s0 = r.s2 & r.v1; // ix
        r.v0 = slt(0x3F490FD8u, r.s0);
        r.s1 = r.a0;
        const uint32_t y = lo32(r.s1);
        if (r.v0 == 0u)
        {
            // |x| <= pi/4
            WRITE32(y, bitsOf(r.f12));
            r.v0 = 0u;
            WRITE32(y + 4u, 0u);
        }
        else if (slt(0x4016CBE3u, r.s0) == 0u)
        {
            // |x| < 3pi/4: n = +-1
            const bool positive = static_cast<int64_t>(r.s2) > 0;
            r.v1 = 0x3FC90FD0u;
            r.f0 = floatOf(0x3FC90F80u); // pio2_1
            r.v0 = r.s0 & 0xFFFFFFFFFFFFFFF0ull;
            const bool nearPio2 = r.v0 == r.v1;
            if (positive)
            {
                r.f12 = FPU_SUB_S(r.f12, r.f0);
                if (!nearPio2)
                {
                    r.at = 0x37354443u;
                    r.f2 = floatOf(0x37354443u); // pio2_1t
                    r.f1 = FPU_SUB_S(r.f12, r.f2);
                }
                else
                {
                    r.f0 = floatOf(0x37354400u); // pio2_2
                    r.at = 0x2E85A308u;
                    r.f2 = floatOf(0x2E85A308u); // pio2_2t
                    r.f12 = FPU_SUB_S(r.f12, r.f0);
                    r.f1 = FPU_SUB_S(r.f12, r.f2);
                }
                r.f0 = FPU_SUB_S(r.f12, r.f1);
                WRITE32(y, bitsOf(r.f1));
                r.f0 = FPU_SUB_S(r.f0, r.f2);
                WRITE32(y + 4u, bitsOf(r.f0));
                r.v0 = 1u;
            }
            else
            {
                r.f12 = FPU_ADD_S(r.f12, r.f0);
                if (!nearPio2)
                {
                    r.at = 0x37354443u;
                    r.f2 = floatOf(0x37354443u);
                    r.f1 = FPU_ADD_S(r.f12, r.f2);
                }
                else
                {
                    r.f0 = floatOf(0x37354400u);
                    r.at = 0x2E85A308u;
                    r.f2 = floatOf(0x2E85A308u);
                    r.f12 = FPU_ADD_S(r.f12, r.f0);
                    r.f1 = FPU_ADD_S(r.f12, r.f2);
                }
                r.f0 = FPU_SUB_S(r.f12, r.f1);
                WRITE32(y, bitsOf(r.f1));
                r.f0 = FPU_ADD_S(r.f0, r.f2);
                WRITE32(y + 4u, bitsOf(r.f0));
                r.v0 = ~0ull;
            }
        }
        else
        {
            // Medium: n = (int)(|x| * 2/pi + 0.5), up to three reduction steps.
            // fabsf (0x2dc5a0), inlined:
            r.v1 = bitsOf(r.f12) & 0x7FFFFFFFu;
            r.v0 = 0x7FFFFFFFu;
            r.f0 = floatOf(lo32(r.v1));
            r.f1 = floatOf(0x3F22F984u); // invpio2
            r.f5 = FPU_MOV_S(r.f0);      // t
            r.f2 = floatOf(0x3F000000u);
            r.f1 = FPU_MUL_S(r.f5, r.f1);
            r.f0 = floatOf(0x3FC90F80u); // pio2_1
            r.at = 0x37354443u;
            r.f3 = floatOf(0x37354443u); // pio2_1t
            r.f1 = FPU_ADD_S(r.f1, r.f2);
            const int32_t n = FPU_CVT_W_S(r.f1);
            r.f2 = floatOf(static_cast<uint32_t>(n));
            r.a1 = sext32(static_cast<uint32_t>(n));
            r.f6 = FPU_CVT_S_W(n); // fn
            r.v0 = slt(r.a1, 32u);
            r.f0 = FPU_MUL_S(r.f6, r.f0);
            r.f3 = FPU_MUL_S(r.f6, r.f3);   // w
            r.f4 = FPU_SUB_S(r.f5, r.f0);   // r
            bool quick = false;
            if (r.v0 != 0u)
            {
                r.v1 = sext32((lo32(r.a1) - 1u) << 2);
                r.a0 = 0x003AAF90u; // npio2_hw
                r.v1 = sext32(lo32(r.v1) + lo32(r.a0));
                r.a0 = sext32(READ32(lo32(r.v1)));
                r.v0 = r.s0 & 0xFFFFFFFFFFFFFF00ull;
                quick = r.v0 != r.a0;
            }
            r.f0 = FPU_SUB_S(r.f4, r.f3);
            if (quick)
            {
                WRITE32(y, bitsOf(r.f0));
                r.f1 = floatOf(READ32(y));
            }
            else
            {
                r.a0 = sext32(static_cast<uint32_t>(static_cast<int32_t>(lo32(r.s0)) >> 23)); // j
                r.v0 = sext32(bitsOf(r.f0));
                WRITE32(y, lo32(r.v0));
                r.v1 = sext32(lo32(r.v0) >> 23) & 0xFFu;
                r.v1 = sext32(lo32(r.a0) - lo32(r.v1));
                r.v0 = slt(r.v1, 9u);
                if (r.v0 != 0u)
                {
                    r.f1 = floatOf(READ32(y));
                }
                else
                {
                    // Second step, good to 57 bits.
                    r.f0 = floatOf(0x37354400u); // pio2_2
                    r.f5 = FPU_MOV_S(r.f4);
                    r.at = 0x2E85A308u;
                    r.f1 = floatOf(0x2E85A308u); // pio2_2t
                    r.f3 = FPU_MUL_S(r.f6, r.f0);
                    r.f1 = FPU_MUL_S(r.f6, r.f1);
                    r.f4 = FPU_SUB_S(r.f4, r.f3);
                    r.f0 = FPU_SUB_S(r.f5, r.f4);
                    r.f0 = FPU_SUB_S(r.f0, r.f3);
                    r.f3 = FPU_SUB_S(r.f1, r.f0);
                    r.f2 = FPU_SUB_S(r.f4, r.f3);
                    r.v0 = sext32(bitsOf(r.f2));
                    WRITE32(y, lo32(r.v0));
                    r.v1 = sext32(lo32(r.v0) >> 23) & 0xFFu;
                    r.v1 = sext32(lo32(r.a0) - lo32(r.v1));
                    r.v0 = slt(r.v1, 0x1Au);
                    if (r.v0 != 0u)
                    {
                        r.f1 = floatOf(READ32(y));
                    }
                    else
                    {
                        // Third step, 74 bits.
                        r.f0 = floatOf(0x2E85A300u); // pio2_3
                        r.f5 = FPU_MOV_S(r.f4);
                        r.at = 0x248D3132u;
                        r.f2 = floatOf(0x248D3132u); // pio2_3t
                        r.f3 = FPU_MUL_S(r.f6, r.f0);
                        r.f2 = FPU_MUL_S(r.f6, r.f2);
                        r.f4 = FPU_SUB_S(r.f4, r.f3);
                        r.f0 = FPU_SUB_S(r.f5, r.f4);
                        r.f0 = FPU_SUB_S(r.f0, r.f3);
                        r.f3 = FPU_SUB_S(r.f2, r.f0);
                        r.f1 = FPU_SUB_S(r.f4, r.f3);
                        WRITE32(y, bitsOf(r.f1));
                        r.f1 = floatOf(READ32(y));
                    }
                }
            }
            r.f0 = FPU_SUB_S(r.f4, r.f1);
            r.f0 = FPU_SUB_S(r.f0, r.f3); // y[1]
            WRITE32(y + 4u, bitsOf(r.f0));
            if (static_cast<int64_t>(r.s2) >= 0)
            {
                r.v0 = r.a1;
            }
            else
            {
                r.f1 = FPU_NEG_S(r.f1);
                r.v0 = sext32(0u - lo32(r.a1));
                r.f0 = FPU_NEG_S(r.f0);
                WRITE32(y, bitsOf(r.f1));
                WRITE32(y + 4u, bitsOf(r.f0));
            }
        }
        r.ra = READ64(sp + 0x40u);
        r.s2 = READ64(sp + 0x30u);
        r.s1 = READ64(sp + 0x20u);
        r.s0 = READ64(sp + 0x10u);
        r.sp = sext32(sp + 0x50u);
    }

    // Beyond 2^7*pi/2 (finite): __kernel_rem_pio2f, left to the original.
    TS_ALWAYS_INLINE bool trigNeedsOriginal(uint32_t hx)
    {
        const uint32_t ix = hx & 0x7FFFFFFFu;
        return ix > 0x43490F80u && ix < 0x7F800000u;
    }

    // The common start of sinf and cosf: frame, $ra saved, a0 = |x| bits,
    // v0 = (|x| > pi/4).
    TS_ALWAYS_INLINE void trigEnter(TrigRegs &r, uint32_t hx, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        r.sp = sext32(lo32(r.sp) - 0x20u);
        r.v1 = 0x7FFFFFFFu;
        r.a0 = sext32(hx) & r.v1;
        r.v0 = slt(0x3F490FD8u, r.a0);
        WRITE64(lo32(r.sp) + 16u, r.ra);
    }

    TS_ALWAYS_INLINE void trigLeave(TrigRegs &r, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        r.ra = READ64(lo32(r.sp) + 16u);
        r.sp = sext32(lo32(r.sp) + 0x20u);
        storeTrig(r, ctx);
        ctx->pc = lo32(r.ra);
    }

    void nativeSinf(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        uint32_t hx;
        std::memcpy(&hx, &ctx->f[12], sizeof(hx));
        if (trigNeedsOriginal(hx))
        {
            sinf_0x2d7398(rdram, ctx, runtime);
            return;
        }
        TrigRegs r;
        loadTrig(r, ctx);
        trigEnter(r, hx, rdram, ctx, runtime);
        const uint32_t sp = lo32(r.sp);
        if (r.v0 == 0u)
        {
            r.f13 = floatOf(0u);
            r.ra = 0x2D73D0u;
            r.a0 = 0u;
            kernelSinf(r);
        }
        else if (slt(0x7F7FFFFFu, r.a0) != 0u)
        {
            r.v0 = 1u;
            r.f0 = FPU_SUB_S(r.f12, r.f12); // Inf or NaN
        }
        else
        {
            r.ra = 0x2D73FCu;
            r.a0 = r.sp;
            remPio2f(r, rdram, ctx, runtime);
            const uint64_t quadrant = r.v0 & 3u;
            r.v1 = quadrant;
            r.v0 = slt(quadrant, 2u);
            if (quadrant == 1u)
            {
                r.f12 = floatOf(READ32(sp));
                r.ra = 0x2D7454u;
                r.f13 = floatOf(READ32(sp + 4u));
                kernelCosf(r);
            }
            else
            {
                r.v0 = 2u;
                r.f12 = floatOf(READ32(sp));
                if (quadrant == 0u)
                {
                    r.a0 = 1u;
                    r.ra = 0x2D7440u;
                    r.f13 = floatOf(READ32(sp + 4u));
                    kernelSinf(r);
                }
                else if (quadrant == 2u)
                {
                    r.a0 = 1u;
                    r.ra = 0x2D7468u;
                    r.f13 = floatOf(READ32(sp + 4u));
                    kernelSinf(r);
                    r.f0 = FPU_NEG_S(r.f0);
                }
                else
                {
                    r.ra = 0x2D7478u;
                    r.f13 = floatOf(READ32(sp + 4u));
                    kernelCosf(r);
                    r.f0 = FPU_NEG_S(r.f0);
                }
            }
        }
        trigLeave(r, rdram, ctx, runtime);
    }

    void nativeCosf(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        uint32_t hx;
        std::memcpy(&hx, &ctx->f[12], sizeof(hx));
        if (trigNeedsOriginal(hx))
        {
            cosf_0x2d71c8(rdram, ctx, runtime);
            return;
        }
        TrigRegs r;
        loadTrig(r, ctx);
        trigEnter(r, hx, rdram, ctx, runtime);
        const uint32_t sp = lo32(r.sp);
        if (r.v0 == 0u)
        {
            r.f13 = floatOf(0u);
            r.ra = 0x2D7200u;
            kernelCosf(r);
        }
        else if (slt(0x7F7FFFFFu, r.a0) != 0u)
        {
            r.v0 = 1u;
            r.f0 = FPU_SUB_S(r.f12, r.f12); // Inf or NaN
        }
        else
        {
            r.ra = 0x2D722Cu;
            r.a0 = r.sp;
            remPio2f(r, rdram, ctx, runtime);
            const uint64_t quadrant = r.v0 & 3u;
            r.v1 = quadrant;
            r.v0 = slt(quadrant, 2u);
            if (quadrant == 1u)
            {
                r.f12 = floatOf(READ32(sp));
                r.a0 = 1u;
                r.ra = 0x2D7284u;
                r.f13 = floatOf(READ32(sp + 4u));
                kernelSinf(r);
                r.f0 = FPU_NEG_S(r.f0);
            }
            else
            {
                r.v0 = 2u;
                r.f12 = floatOf(READ32(sp));
                if (quadrant == 0u)
                {
                    r.ra = 0x2D726Cu;
                    r.f13 = floatOf(READ32(sp + 4u));
                    kernelCosf(r);
                }
                else if (quadrant == 2u)
                {
                    r.ra = 0x2D7294u;
                    r.f13 = floatOf(READ32(sp + 4u));
                    kernelCosf(r);
                    r.f0 = FPU_NEG_S(r.f0);
                }
                else
                {
                    r.a0 = 1u;
                    r.ra = 0x2D72A4u;
                    r.f13 = floatOf(READ32(sp + 4u));
                    kernelSinf(r);
                }
            }
        }
        trigLeave(r, rdram, ctx, runtime);
    }

    // ---- sqrtf (fdlibm wrapper and the bit-by-bit __ieee754_sqrtf)
    //
    // __ieee754_sqrtf rounds to nearest whatever the FPU mode, one result
    // bit per loop pass; the loop runs here as integer code to leave a0-a3,
    // t0 as it does. NaN and x < 0 (-0 included) keep the original: below
    // zero it calls matherr and sets errno.

    struct SqrtRegs
    {
        uint64_t v0, v1, a0, a1, a2, a3, t0, s0, s1, sp, ra;
        float f0, f12, f20, f21;
    };

    // __ieee754_sqrtf(x f12) at 0x2daf40, for +0 <= x <= +Inf.
    TS_ALWAYS_INLINE void ieeeSqrtf(SqrtRegs &r)
    {
        const uint32_t hx = bitsOf(r.f12);
        r.a1 = hx;
        r.v1 = 0x7F800000u;
        r.v0 = hx & 0x7F800000u;
        if (r.v0 == r.v1)
        {
            r.f0 = FPU_MUL_S(r.f12, r.f12); // +Inf
            r.f0 = FPU_ADD_S(r.f0, r.f12);
            return;
        }
        int32_t m = static_cast<int32_t>(hx) >> 23;
        r.a2 = static_cast<uint32_t>(m);
        if (hx == 0u)
        {
            r.v0 = 0u;
            r.f0 = FPU_MOV_S(r.f12); // sqrt(+0) = +0
            return;
        }
        uint32_t ix = hx;
        if (m == 0)
        {
            // Subnormal: shift up to the hidden bit.
            uint32_t shifts = 0;
            do
            {
                ix <<= 1;
                ++shifts;
            } while ((ix & 0x00800000u) == 0u);
            m = static_cast<int32_t>(1u - shifts);
        }
        m -= 127;
        const uint32_t odd = static_cast<uint32_t>(m) & 1u;
        m >>= 1;
        ix = (((ix & 0x007FFFFFu) | 0x00800000u) << odd) << 1; // odd m doubles x
        uint32_t q = 0, s = 0, bit = 0x01000000u;
        do
        {
            const uint32_t t = s + bit;
            if (!(static_cast<int32_t>(ix) < static_cast<int32_t>(t)))
            {
                ix -= t;
                s = t + bit;
                q += bit;
            }
            bit >>= 1;
            ix <<= 1;
        } while (bit != 0u);
        if (ix != 0u)
            q += q & 1u; // round to nearest
        q = static_cast<uint32_t>(static_cast<int32_t>(q) >> 1);
        const uint32_t exponent = static_cast<uint32_t>(m) << 23;
        r.t0 = sext32(exponent);
        r.a0 = sext32(q);
        r.a1 = sext32(q + 0x3F000000u);
        r.a2 = 0u;
        r.a3 = sext32(s);
        r.v1 = 0x3F000000u;
        r.v0 = sext32(q + 0x3F000000u + exponent);
        r.f0 = floatOf(lo32(r.v0));
    }

    void nativeSqrtf(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        uint32_t hx;
        std::memcpy(&hx, &ctx->f[12], sizeof(hx));
        if (hx > 0x7F800000u)
        {
            sqrtf_0x2d8398(rdram, ctx, runtime);
            return;
        }
        SqrtRegs r;
        r.v0 = GPR_U64(ctx, 2);
        r.v1 = GPR_U64(ctx, 3);
        r.a0 = GPR_U64(ctx, 4);
        r.a1 = GPR_U64(ctx, 5);
        r.a2 = GPR_U64(ctx, 6);
        r.a3 = GPR_U64(ctx, 7);
        r.t0 = GPR_U64(ctx, 8);
        r.s0 = GPR_U64(ctx, 16);
        r.s1 = GPR_U64(ctx, 17);
        r.sp = GPR_U64(ctx, 29);
        r.ra = GPR_U64(ctx, 31);
        r.f0 = ctx->f[0];
        r.f12 = ctx->f[12];
        r.f20 = ctx->f[20];
        r.f21 = ctx->f[21];
        uint32_t fcr31 = ctx->fcr31;

        r.sp = sext32(lo32(r.sp) - 0x70u);
        const uint32_t sp = lo32(r.sp);
        WRITE32(sp + 0x60u, bitsOf(r.f20));
        r.f20 = FPU_MOV_S(r.f12);
        WRITE64(sp + 0x40u, r.s1);
        WRITE64(sp + 0x30u, r.s0);
        WRITE32(sp + 0x68u, bitsOf(r.f21));
        WRITE64(sp + 0x50u, r.ra);
        r.ra = 0x2D83BCu;
        r.s1 = 0x003B0000u;
        ieeeSqrtf(r);
        r.s0 = sext32(READ32(0x003AB118u)); // _LIB_VERSION
        r.v0 = ~0ull;
        r.f21 = FPU_MOV_S(r.f0);
        if (r.s0 != r.v0)
        {
            // Not _IEEE_: isnanf (0x2dc5e8) and the x < 0 test, both false here.
            r.ra = 0x2D83D4u;
            r.f12 = FPU_MOV_S(r.f20);
            const uint32_t bits = bitsOf(r.f12);
            r.a0 = 0x7FFFFFFFu;
            r.v1 = 0x7F800000u;
            r.v0 = sext32((0x7F800000u - (bits & 0x7FFFFFFFu)) >> 31);
            r.f0 = FPU_MOV_S(r.f21);
            r.f0 = floatOf(0u);
            fcr31 = FPU_C_OLT_S(r.f20, r.f0) ? (fcr31 | 0x800000u) : (fcr31 & ~0x800000u);
            r.v0 = 0x003B0000u;
        }
        r.f0 = FPU_MOV_S(r.f21);
        r.ra = READ64(sp + 0x50u);
        r.s1 = READ64(sp + 0x40u);
        r.s0 = READ64(sp + 0x30u);
        r.f21 = floatOf(READ32(sp + 0x68u));
        r.f20 = floatOf(READ32(sp + 0x60u));
        r.sp = sext32(sp + 0x70u);

        SET_GPR_U64(ctx, 2, r.v0);
        SET_GPR_U64(ctx, 3, r.v1);
        SET_GPR_U64(ctx, 4, r.a0);
        SET_GPR_U64(ctx, 5, r.a1);
        SET_GPR_U64(ctx, 6, r.a2);
        SET_GPR_U64(ctx, 7, r.a3);
        SET_GPR_U64(ctx, 8, r.t0);
        SET_GPR_U64(ctx, 16, r.s0);
        SET_GPR_U64(ctx, 17, r.s1);
        SET_GPR_U64(ctx, 29, r.sp);
        SET_GPR_U64(ctx, 31, r.ra);
        ctx->f[0] = r.f0;
        ctx->f[12] = r.f12;
        ctx->f[20] = r.f20;
        ctx->f[21] = r.f21;
        ctx->fcr31 = fcr31;
        ctx->pc = lo32(r.ra);
    }

    // ---- obInstLightUpdate (0x25c160)
    //
    // Chooses an object's two nearest lights and its nearest bullet flash
    // (bglightGet, bgBulletGetClosest), blends the object's lighting towards
    // them, normalises the three light directions, and for each of the
    // object's matrices writes those directions rotated into the matrix's
    // space, then the three colours and the ambient one. Level 0x66 lights
    // its objects from a fixed table instead (the sinf/cosf block at the top
    // of the original): that keeps the original.
    //
    // The calls go through dispatchGuestBranch like the original's (the same
    // 8-cycle charge), so a callee that does not return normally unwinds
    // this function the same way: ctx holds the original's state at every
    // call, and the dispatcher resumes the original at the return address.
    // Between calls the guest registers live in host variables: each block
    // loads the caller-saved registers it reads and stores every register it
    // writes before the next call, merge point or return.

    // The recompiled div.s: a zero divisor raises DZ and gives the infinity
    // whose sign is that of (numerator * 0).
    TS_ALWAYS_INLINE float divS(float a, float b, uint32_t &fcr31)
    {
        if (b == 0.0f)
        {
            fcr31 |= 0x100000u;
            return copysignf(INFINITY, a * 0.0f);
        }
        return a / b;
    }

    TS_ALWAYS_INLINE uint32_t conditionBit(uint32_t fcr31, bool set)
    {
        return set ? (fcr31 | 0x800000u) : (fcr31 & ~0x800000u);
    }

    TS_ALWAYS_INLINE float cvtSW(uint32_t bits) { return FPU_CVT_S_W(static_cast<int32_t>(bits)); }

    TS_ALWAYS_INLINE bool lightCall(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t target,
                                    uint32_t source, uint32_t next)
    {
        SET_GPR_U32(ctx, 31, next);
        return runtime->dispatchGuestBranch(rdram, ctx, target, source, next, PS2Runtime::GuestBranchKind::DirectCall,
                                            "JAL");
    }

    void nativeObInstLightUpdate(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t level = READ32(gp - 0x6090u); // the original's first load
        if (level == 0x66u)
        {
            obInstLightUpdate_0x25c160(rdram, ctx, runtime);
            return;
        }

        uint64_t at, v0, v1, a0, a1, a2, s0, s1, s2, s3, s4, s5, s6, s7, fp;
        float f0, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f20;
        uint32_t fcr31;

        // 0x25c160: the frame, the callee-saved registers saved into it.
        const uint64_t sp = sext32(GPR_U32(ctx, 29) - 0x2C0u);
        const uint32_t frame = lo32(sp);
        v1 = sext32(level);
        WRITE64(frame + 0x280u, GPR_U64(ctx, 30));
        v0 = 0x66u;
        WRITE64(frame + 0x250u, GPR_U64(ctx, 21));
        fp = 0u;
        WRITE64(frame + 0x290u, GPR_U64(ctx, 31));
        s5 = GPR_U64(ctx, 4);
        WRITE64(frame + 0x270u, GPR_U64(ctx, 23));
        WRITE64(frame + 0x240u, GPR_U64(ctx, 20));
        WRITE64(frame + 0x230u, GPR_U64(ctx, 19));
        WRITE64(frame + 0x220u, GPR_U64(ctx, 18));
        WRITE64(frame + 0x210u, GPR_U64(ctx, 17));
        WRITE64(frame + 0x200u, GPR_U64(ctx, 16));
        WRITE32(frame + 0x2B8u, bitsOf(ctx->f[23]));
        WRITE32(frame + 0x2B0u, bitsOf(ctx->f[22]));
        WRITE32(frame + 0x2A8u, bitsOf(ctx->f[21]));
        WRITE32(frame + 0x2A0u, bitsOf(ctx->f[20]));
        WRITE64(frame + 0x260u, GPR_U64(ctx, 22));
        const uint32_t object = lo32(s5);
        s6 = sext32(READ32(object + 0xF4u));
        const uint32_t def = lo32(s6);
        WRITE32(frame + 0x1FCu, 0u); // not a character's light (yet)

        // 0x25c5dc: the light type, and the position the lights are measured from.
        a1 = sext32(READ32(def + 8u));
        v0 = 0x800u;
        WRITE32(frame + 0x1F0u, 0u);
        WRITE32(frame + 0x1F4u, 0u);
        a2 = a1;
        a0 = sext32(READ32(def + 0xCu));
        SET_GPR_U64(ctx, 29, sp);
        SET_GPR_U64(ctx, 3, v1);
        SET_GPR_U64(ctx, 30, fp);
        SET_GPR_U64(ctx, 21, s5);
        SET_GPR_U64(ctx, 22, s6);
        SET_GPR_U64(ctx, 5, a1);
        SET_GPR_U64(ctx, 6, a2);
        SET_GPR_U64(ctx, 4, a0);
        if (a1 == 0x800u)
        {
            // 0x25c5f8: a type-0x800 light sits at the object's position plus its parent's.
            v0 = sext32(READ32(object + 4u));
            const uint32_t parent = lo32(v0);
            f0 = floatOf(READ32(def + 0x30u));
            f1 = floatOf(READ32(parent + 0x30u));
            f0 = FPU_ADD_S(f0, f1);
            WRITE32(frame + 0x1A0u, bitsOf(f0));
            f0 = floatOf(READ32(parent + 0x34u));
            f1 = floatOf(READ32(def + 0x34u));
            f1 = FPU_ADD_S(f1, f0);
            WRITE32(frame + 0x1A4u, bitsOf(f1));
            f2 = floatOf(READ32(parent + 0x38u));
            f0 = floatOf(READ32(def + 0x38u));
            f0 = FPU_ADD_S(f0, f2);
            ctx->f[2] = f2;
        }
        else
        {
            // 0x25c62c: object types 0xC9-0xCC are characters, lit from the
            // character's own position (0x71C-byte entries from gp-0x4DD0).
            v0 = sext32(lo32(a0) - 0xC9u);
            const bool character = v0 < 4u; // sltiu
            v0 = 0x71Cu;
            if (character)
            {
                v1 = sext32(0xFFFA0000u);
                const int64_t product =
                    static_cast<int64_t>(static_cast<int32_t>(lo32(a0))) * static_cast<int32_t>(lo32(v0));
                ctx->lo = sext32(static_cast<uint64_t>(product));
                ctx->hi = sext32(static_cast<uint64_t>(product >> 32));
                v0 = sext32(static_cast<uint64_t>(product));
                v1 |= 0x6B04u;
                a0 = sext32(READ32(gp - 0x4DD0u));
                WRITE32(frame + 0x1FCu, 1u);
                v0 = sext32(lo32(v0) + lo32(v1));
                fp = sext32(lo32(a0) + lo32(v0));
                const uint32_t character = lo32(fp);
                f0 = floatOf(READ32(character + 0x98u));
                WRITE32(frame + 0x1A0u, bitsOf(f0));
                f1 = floatOf(READ32(character + 0x9Cu));
                WRITE32(frame + 0x1A4u, bitsOf(f1));
                f0 = floatOf(READ32(character + 0xA0u));
                SET_GPR_U64(ctx, 3, v1);
                SET_GPR_U64(ctx, 4, a0);
                SET_GPR_U64(ctx, 7, 1u);
                SET_GPR_U64(ctx, 30, fp);
            }
            else
            {
                // 0x25c674: from the object's own position.
                f0 = floatOf(READ32(def + 0x30u));
                WRITE32(frame + 0x1A0u, bitsOf(f0));
                f1 = floatOf(READ32(def + 0x34u));
                WRITE32(frame + 0x1A4u, bitsOf(f1));
                f0 = floatOf(READ32(def + 0x38u));
            }
        }
        // 0x25c688: types 8, 0x1000 and 0x800 measure from one unit above.
        v0 = 8u;
        WRITE32(frame + 0x1A8u, bitsOf(f0));
        ctx->f[0] = f0;
        ctx->f[1] = f1;
        if (a2 != 8u)
        {
            v0 = 0x1000u;
            const bool high = a1 == 0x1000u;
            v0 = 0x800u;
            if (!high && a1 != 0x800u)
            {
                // bnel, taken: its delay slot sets s0.
                s0 = sext32(frame + 0x1A0u);
                SET_GPR_U64(ctx, 2, v0);
                SET_GPR_U64(ctx, 16, s0);
                goto L25c6c0;
            }
        }
        // 0x25c6a8
        f0 = floatOf(READ32(frame + 0x1A4u));
        at = 0x3F800000u;
        f1 = floatOf(0x3F800000u);
        f0 = FPU_ADD_S(f0, f1);
        WRITE32(frame + 0x1A4u, bitsOf(f0));
        s0 = sext32(frame + 0x1A0u);
        SET_GPR_U64(ctx, 2, v0);
        SET_GPR_U64(ctx, 1, at);
        ctx->f[0] = f0;
        ctx->f[1] = f1;
        SET_GPR_U64(ctx, 16, s0);
    L25c6c0:
        // bglightGet(inst, position, &first, &second): the two nearest lights.
        SET_GPR_U64(ctx, 4, s5);
        SET_GPR_U64(ctx, 5, s0);
        SET_GPR_U64(ctx, 6, sext32(frame + 0x1F0u));
        SET_GPR_U64(ctx, 7, sext32(frame + 0x1F4u));
        if (!lightCall(rdram, ctx, runtime, 0x25A7D0u, 0x25C6CCu, 0x25C6D4u))
            return;
        // 0x25c6d4: bgBulletGetClosest(inst, position, &strength): the nearest bullet flash.
        SET_GPR_U64(ctx, 5, s0);
        SET_GPR_U64(ctx, 4, s5);
        SET_GPR_U64(ctx, 6, sext32(frame + 0x1F8u));
        if (!lightCall(rdram, ctx, runtime, 0x25BC88u, 0x25C6DCu, 0x25C6E4u))
            return;

        // 0x25c6e4: keep the light the object already has first, if it is still one of the two.
        a1 = sext32(READ32(frame + 0x1F0u));
        v1 = sext32(READ32(lo32(a1)));
        s0 = GPR_U64(ctx, 2); // the bullet flash
        SET_GPR_U64(ctx, 5, a1);
        SET_GPR_U64(ctx, 3, v1);
        SET_GPR_U64(ctx, 16, s0);
        if (v1 != 0u)
        {
            v0 = sext32(READ32(object + 0x24u));
            const bool wasSecond = v1 == v0;
            v1 = sext32(READ32(frame + 0x1F4u));
            SET_GPR_U64(ctx, 2, v0);
            SET_GPR_U64(ctx, 3, v1);
            if (wasSecond)
            {
                // 0x25c700: swap the two.
                v0 = sext32(READ32(frame + 0x1F4u));
                WRITE32(frame + 0x1F4u, lo32(a1));
                WRITE32(frame + 0x1F0u, lo32(v0));
                a1 = v0;
                SET_GPR_U64(ctx, 2, v0);
                SET_GPR_U64(ctx, 5, a1);
            }
        }
        // 0x25c710
        v1 = sext32(READ32(frame + 0x1F4u));
        a0 = sext32(READ32(lo32(v1)));
        SET_GPR_U64(ctx, 3, v1);
        SET_GPR_U64(ctx, 4, a0);
        if (a0 == 0u)
        {
            v0 = sext32(READ32(lo32(a1)));
        }
        else
        {
            v0 = sext32(READ32(object + 0x20u));
            SET_GPR_U64(ctx, 2, v0);
            if (a0 != v0)
            {
                v0 = sext32(READ32(lo32(a1)));
            }
            else
            {
                // 0x25c72c: the second is the one the object had first: swap.
                WRITE32(frame + 0x1F4u, lo32(a1));
                WRITE32(frame + 0x1F0u, lo32(v1));
                a1 = v1;
                v0 = sext32(READ32(lo32(a1)));
                SET_GPR_U64(ctx, 5, a1);
            }
        }
        SET_GPR_U64(ctx, 2, v0);
        // 0x25c73c
        if (v0 == 0u)
        {
            WRITE32(frame + 0x34u, 0u);
            goto L25c9dc;
        }
        // 0x25c744: the first light's strength from its distance: full within 3 units.
        f12 = floatOf(READ32(lo32(a1) + 0x10u));
        at = 0x41100000u;
        f0 = floatOf(0x41100000u);
        fcr31 = conditionBit(ctx->fcr31, FPU_C_OLE_S(f12, f0));
        ctx->f[12] = f12;
        ctx->f[0] = f0;
        ctx->fcr31 = fcr31;
        if ((fcr31 & 0x800000u) != 0u)
        {
            // 0x25c75c
            at = 0x3F800000u;
            f17 = floatOf(0x3F800000u);
            v0 = sext32(READ32(lo32(a1)));
            SET_GPR_U64(ctx, 1, at);
            ctx->f[17] = f17;
            SET_GPR_U64(ctx, 2, v0);
            goto L25c7b8;
        }
        // 0x25c76c: sqrt.s, then sqrtf for a NaN (a negative distance).
        SET_GPR_U64(ctx, 1, at);
        f2 = FPU_SQRT_S(f12);
        fcr31 = conditionBit(fcr31, FPU_C_EQ_S(f2, f2));
        ctx->f[2] = f2;
        ctx->fcr31 = fcr31;
        if ((fcr31 & 0x800000u) == 0u)
        {
            if (!lightCall(rdram, ctx, runtime, 0x2D8398u, 0x25C784u, 0x25C78Cu))
                return;
            // 0x25c78c
            a1 = sext32(READ32(frame + 0x1F0u));
            f2 = FPU_MOV_S(ctx->f[0]);
            SET_GPR_U64(ctx, 5, a1);
            ctx->f[2] = f2;
        }
        // 0x25c794: (20 - distance) / 17
        at = 0x41A00000u;
        f0 = floatOf(0x41A00000u);
        at = 0x41880000u;
        f1 = floatOf(0x41880000u);
        f0 = FPU_SUB_S(f0, f2);
        fcr31 = ctx->fcr31;
        f17 = divS(f0, f1, fcr31);
        v0 = sext32(READ32(lo32(a1)));
        SET_GPR_U64(ctx, 1, at);
        ctx->f[0] = f0;
        ctx->f[1] = f1;
        ctx->f[17] = f17;
        ctx->fcr31 = fcr31;
        SET_GPR_U64(ctx, 2, v0);
    L25c7b8:
        // The light's colour bytes (0x8F, 0x8E, 0x8D) and intensity (0x94)
        // as floats; a byte read as negative (never: they are zero-extended)
        // would be halved and doubled.
        {
            const uint32_t light = lo32(v0);
            at = 0x3B800000u;
            f1 = floatOf(0x3B800000u); // 1/256
            v1 = READ8(light + 0x94u);
            f17 = FPU_MUL_S(f17, f1);
            a2 = READ8(light + 0x8Fu);
            f0 = cvtSW(lo32(v1));
            a0 = a2 & 0xFFu;
            f0 = FPU_MUL_S(f0, f1);
            const bool negative = static_cast<int64_t>(a0) < 0;
            f17 = FPU_MUL_S(f17, f0);
            SET_GPR_U64(ctx, 1, at);
            ctx->f[1] = f1;
            SET_GPR_U64(ctx, 3, v1);
            SET_GPR_U64(ctx, 6, a2);
            SET_GPR_U64(ctx, 4, a0);
            ctx->f[17] = f17;
            if (negative)
            {
                // 0x25c7f4
                v0 = a2 & 1u;
                v1 = sext32(lo32(a0) >> 1);
                v0 |= v1;
                f0 = cvtSW(lo32(v0));
                f0 = FPU_ADD_S(f0, f0);
                WRITE32(frame + 0x1B0u, bitsOf(f0));
                SET_GPR_U64(ctx, 2, v0);
                SET_GPR_U64(ctx, 3, v1);
            }
            else
            {
                // 0x25c7e4
                f0 = cvtSW(lo32(a0));
                WRITE32(frame + 0x1B0u, bitsOf(f0));
            }
            ctx->f[0] = f0;
            // 0x25c810
            v0 = sext32(READ32(lo32(a1)));
            v0 = READ16(lo32(v0) + 0x8Eu);
            v1 = v0 & 0xFFu;
            const bool negativeG = static_cast<int64_t>(v1) < 0;
            v0 &= 1u;
            if (negativeG)
            {
                // 0x25c834
                v1 = sext32(lo32(v1) >> 1);
                v0 |= v1;
                f0 = cvtSW(lo32(v0));
                f0 = FPU_ADD_S(f0, f0);
                v1 = sext32(READ32(lo32(a1)));
            }
            else
            {
                // 0x25c824
                f0 = cvtSW(lo32(v1));
                v1 = sext32(READ32(lo32(a1)));
            }
            // 0x25c84c
            WRITE32(frame + 0x1B4u, bitsOf(f0));
            v0 = sext32(READ32(lo32(v1) + 0x8Cu));
            v0 = sext32(lo32(v0) >> 8);
            v1 = v0 & 0xFFu;
            const bool negativeB = static_cast<int64_t>(v1) < 0;
            v0 &= 1u;
            if (negativeB)
            {
                // 0x25c874
                v1 = sext32(lo32(v1) >> 1);
                v0 |= v1;
                f12 = cvtSW(lo32(v0));
                f12 = FPU_ADD_S(f12, f12);
                v0 = sext32(READ32(object + 0x20u));
            }
            else
            {
                // 0x25c864
                f12 = cvtSW(lo32(v1));
                v0 = sext32(READ32(object + 0x20u));
            }
            // 0x25c88c
            WRITE32(frame + 0x1B8u, bitsOf(f12));
            ctx->f[0] = f0;
            ctx->f[12] = f12;
            SET_GPR_U64(ctx, 2, v0);
            SET_GPR_U64(ctx, 3, v1);
        }
        if (v0 != 0u)
        {
            // 0x25c894: the object had a light: blend its position and colour
            // towards this one (gp-0x7CB4 per frame), direction from the position.
            v0 = sext32(READ32(lo32(a1)));
            const uint32_t light = lo32(v0);
            f3 = floatOf(READ32(object + 0x28u));
            f0 = floatOf(READ32(light + 0x44u));
            f4 = floatOf(READ32(object + 0x2Cu));
            f0 = FPU_SUB_S(f0, f3);
            f8 = floatOf(READ32(object + 0x30u));
            f11 = floatOf(READ32(object + 0x40u));
            f6 = floatOf(READ32(gp - 0x7CB4u));
            WRITE32(frame + 0x1C0u, bitsOf(f0));
            f0 = FPU_MUL_S(f0, f6);
            f2 = floatOf(READ32(frame + 0x1B0u));
            f1 = floatOf(READ32(light + 0x48u));
            f9 = floatOf(READ32(object + 0x44u));
            f2 = FPU_SUB_S(f2, f11);
            f1 = FPU_SUB_S(f1, f4);
            f10 = floatOf(READ32(object + 0x48u));
            f3 = FPU_ADD_S(f3, f0);
            f5 = floatOf(READ32(frame + 0x1B4u));
            f12 = FPU_SUB_S(f12, f10);
            f15 = floatOf(READ32(frame + 0x1A0u));
            WRITE32(frame + 0x1C4u, bitsOf(f1));
            f5 = FPU_SUB_S(f5, f9);
            f1 = FPU_MUL_S(f1, f6);
            f14 = floatOf(READ32(frame + 0x1A4u));
            f0 = floatOf(READ32(light + 0x4Cu));
            f13 = FPU_MUL_S(f2, f6);
            f7 = floatOf(READ32(frame + 0x1A8u));
            f16 = FPU_MUL_S(f12, f6);
            f0 = FPU_SUB_S(f0, f8);
            WRITE32(object + 0x28u, bitsOf(f3));
            f4 = FPU_ADD_S(f4, f1);
            WRITE32(frame + 0x1C0u, bitsOf(f2));
            WRITE32(frame + 0x1C4u, bitsOf(f5));
            f1 = FPU_MUL_S(f5, f6);
            f0 = FPU_MUL_S(f0, f6);
            WRITE32(frame + 0x1C8u, bitsOf(f12));
            WRITE32(object + 0x2Cu, bitsOf(f4));
            f3 = FPU_SUB_S(f3, f15);
            f4 = FPU_SUB_S(f4, f14);
            f8 = FPU_ADD_S(f8, f0);
            f11 = FPU_ADD_S(f11, f13);
            WRITE32(frame + 0x30u, bitsOf(f3));
            f9 = FPU_ADD_S(f9, f1);
            WRITE32(frame + 0x34u, bitsOf(f4));
            f7 = FPU_SUB_S(f8, f7);
            WRITE32(object + 0x30u, bitsOf(f8));
            f10 = FPU_ADD_S(f10, f16);
            WRITE32(object + 0x40u, bitsOf(f11));
            WRITE32(object + 0x44u, bitsOf(f9));
            WRITE32(frame + 0x38u, bitsOf(f7));
            WRITE32(object + 0x48u, bitsOf(f10));
            SET_GPR_U64(ctx, 2, v0);
            ctx->f[0] = f0;
            ctx->f[1] = f1;
            ctx->f[2] = f2;
            ctx->f[3] = f3;
            ctx->f[4] = f4;
            ctx->f[5] = f5;
            ctx->f[6] = f6;
            ctx->f[7] = f7;
            ctx->f[8] = f8;
            ctx->f[9] = f9;
            ctx->f[10] = f10;
            ctx->f[11] = f11;
            ctx->f[12] = f12;
            ctx->f[13] = f13;
            ctx->f[14] = f14;
            ctx->f[15] = f15;
            ctx->f[16] = f16;
        }
        else
        {
            // 0x25c964: no light yet: take this one's position and colour as they are.
            v0 = sext32(READ32(lo32(a1)));
            const uint32_t light = lo32(v0);
            f2 = floatOf(READ32(frame + 0x1B0u));
            f1 = floatOf(READ32(light + 0x44u));
            f3 = floatOf(READ32(frame + 0x1B4u));
            WRITE32(object + 0x28u, bitsOf(f1));
            f0 = floatOf(READ32(light + 0x48u));
            WRITE32(object + 0x2Cu, bitsOf(f0));
            f1 = floatOf(READ32(light + 0x4Cu));
            WRITE32(object + 0x30u, bitsOf(f1));
            f0 = floatOf(READ32(lo32(a1) + 4u));
            WRITE32(frame + 0x30u, bitsOf(f0));
            f1 = floatOf(READ32(lo32(a1) + 8u));
            WRITE32(frame + 0x34u, bitsOf(f1));
            f0 = floatOf(READ32(lo32(a1) + 0xCu));
            WRITE32(object + 0x40u, bitsOf(f2));
            WRITE32(frame + 0x38u, bitsOf(f0));
            WRITE32(object + 0x44u, bitsOf(f3));
            WRITE32(object + 0x48u, bitsOf(f12));
            SET_GPR_U64(ctx, 2, v0);
            ctx->f[0] = f0;
            ctx->f[1] = f1;
            ctx->f[2] = f2;
            ctx->f[3] = f3;
        }
        // 0x25c9ac: the colour scaled by the strength; the light is now the object's.
        f0 = floatOf(READ32(object + 0x40u));
        f1 = floatOf(READ32(object + 0x44u));
        f2 = floatOf(READ32(object + 0x48u));
        f0 = FPU_MUL_S(f0, f17);
        f1 = FPU_MUL_S(f1, f17);
        v0 = sext32(READ32(lo32(a1)));
        f2 = FPU_MUL_S(f2, f17);
        WRITE32(frame + 0x60u, bitsOf(f0));
        WRITE32(frame + 0x64u, bitsOf(f1));
        WRITE32(frame + 0x68u, bitsOf(f2));
        WRITE32(object + 0x20u, lo32(v0));
        ctx->f[0] = f0;
        ctx->f[1] = f1;
        ctx->f[2] = f2;
        SET_GPR_U64(ctx, 2, v0);
        goto L25c9f8;
    L25c9dc:
        // No first light: direction (1, ?, 0), colour black.
        at = 0x3F800000u;
        f0 = floatOf(0x3F800000u);
        WRITE32(frame + 0x30u, bitsOf(f0));
        WRITE32(frame + 0x38u, 0u);
        WRITE32(frame + 0x60u, 0u);
        WRITE32(frame + 0x64u, 0u);
        WRITE32(frame + 0x68u, 0u);
        SET_GPR_U64(ctx, 1, at);
        ctx->f[0] = f0;
    L25c9f8:
        // The second light, the same way (0x1F4, object +0x34/+0x4C, +0x24,
        // frame +0x40/+0x70/+0x1D0, gp-0x7CB0).
        a2 = sext32(READ32(frame + 0x1F4u));
        v0 = sext32(READ32(lo32(a2)));
        SET_GPR_U64(ctx, 6, a2);
        SET_GPR_U64(ctx, 2, v0);
        if (v0 == 0u)
        {
            WRITE32(frame + 0x44u, 0u);
            goto L25cca0;
        }
        // 0x25ca08
        f12 = floatOf(READ32(lo32(a2) + 0x10u));
        at = 0x41100000u;
        f0 = floatOf(0x41100000u);
        fcr31 = conditionBit(ctx->fcr31, FPU_C_OLE_S(f12, f0));
        ctx->f[12] = f12;
        ctx->f[0] = f0;
        ctx->fcr31 = fcr31;
        if ((fcr31 & 0x800000u) != 0u)
        {
            // 0x25ca20
            at = 0x3F800000u;
            f17 = floatOf(0x3F800000u);
            SET_GPR_U64(ctx, 1, at);
            ctx->f[17] = f17;
            goto L25ca78;
        }
        // 0x25ca30
        SET_GPR_U64(ctx, 1, at);
        f2 = FPU_SQRT_S(f12);
        fcr31 = conditionBit(fcr31, FPU_C_EQ_S(f2, f2));
        ctx->f[2] = f2;
        ctx->fcr31 = fcr31;
        if ((fcr31 & 0x800000u) == 0u)
        {
            if (!lightCall(rdram, ctx, runtime, 0x2D8398u, 0x25CA48u, 0x25CA50u))
                return;
            // 0x25ca50
            a2 = sext32(READ32(frame + 0x1F4u));
            f2 = FPU_MOV_S(ctx->f[0]);
            SET_GPR_U64(ctx, 6, a2);
            ctx->f[2] = f2;
        }
        // 0x25ca58
        at = 0x41A00000u;
        f0 = floatOf(0x41A00000u);
        at = 0x41880000u;
        f1 = floatOf(0x41880000u);
        f0 = FPU_SUB_S(f0, f2);
        fcr31 = ctx->fcr31;
        f17 = divS(f0, f1, fcr31);
        SET_GPR_U64(ctx, 1, at);
        ctx->f[0] = f0;
        ctx->f[1] = f1;
        ctx->f[17] = f17;
        ctx->fcr31 = fcr31;
    L25ca78:
        {
            v0 = sext32(READ32(lo32(a2)));
            const uint32_t light = lo32(v0);
            at = 0x3B800000u;
            f1 = floatOf(0x3B800000u);
            v1 = READ8(light + 0x94u);
            f17 = FPU_MUL_S(f17, f1);
            a1 = READ8(light + 0x8Fu);
            f0 = cvtSW(lo32(v1));
            a0 = a1 & 0xFFu;
            f0 = FPU_MUL_S(f0, f1);
            const bool negative = static_cast<int64_t>(a0) < 0;
            f17 = FPU_MUL_S(f17, f0);
            SET_GPR_U64(ctx, 2, v0);
            SET_GPR_U64(ctx, 1, at);
            ctx->f[1] = f1;
            SET_GPR_U64(ctx, 3, v1);
            SET_GPR_U64(ctx, 5, a1);
            SET_GPR_U64(ctx, 4, a0);
            ctx->f[17] = f17;
            if (negative)
            {
                // 0x25cab8
                v0 = a1 & 1u;
                v1 = sext32(lo32(a0) >> 1);
                v0 |= v1;
                f0 = cvtSW(lo32(v0));
                f0 = FPU_ADD_S(f0, f0);
                WRITE32(frame + 0x1B0u, bitsOf(f0));
                SET_GPR_U64(ctx, 2, v0);
                SET_GPR_U64(ctx, 3, v1);
            }
            else
            {
                // 0x25caa8
                f0 = cvtSW(lo32(a0));
                WRITE32(frame + 0x1B0u, bitsOf(f0));
            }
            ctx->f[0] = f0;
            // 0x25cad4
            v0 = sext32(READ32(lo32(a2)));
            v0 = READ16(lo32(v0) + 0x8Eu);
            v1 = v0 & 0xFFu;
            const bool negativeG = static_cast<int64_t>(v1) < 0;
            v0 &= 1u;
            if (negativeG)
            {
                // 0x25caf8
                v1 = sext32(lo32(v1) >> 1);
                v0 |= v1;
                f0 = cvtSW(lo32(v0));
                f0 = FPU_ADD_S(f0, f0);
                v1 = sext32(READ32(lo32(a2)));
            }
            else
            {
                // 0x25cae8
                f0 = cvtSW(lo32(v1));
                v1 = sext32(READ32(lo32(a2)));
            }
            // 0x25cb10
            WRITE32(frame + 0x1B4u, bitsOf(f0));
            v0 = sext32(READ32(lo32(v1) + 0x8Cu));
            v0 = sext32(lo32(v0) >> 8);
            v1 = v0 & 0xFFu;
            const bool negativeB = static_cast<int64_t>(v1) < 0;
            v0 &= 1u;
            if (negativeB)
            {
                // 0x25cb38
                v1 = sext32(lo32(v1) >> 1);
                v0 |= v1;
                f12 = cvtSW(lo32(v0));
                f12 = FPU_ADD_S(f12, f12);
                v0 = sext32(READ32(object + 0x24u));
            }
            else
            {
                // 0x25cb28
                f12 = cvtSW(lo32(v1));
                v0 = sext32(READ32(object + 0x24u));
            }
            // 0x25cb50
            WRITE32(frame + 0x1B8u, bitsOf(f12));
            ctx->f[0] = f0;
            ctx->f[12] = f12;
            SET_GPR_U64(ctx, 2, v0);
            SET_GPR_U64(ctx, 3, v1);
        }
        if (v0 != 0u)
        {
            // 0x25cb58
            v0 = sext32(READ32(lo32(a2)));
            const uint32_t light = lo32(v0);
            f3 = floatOf(READ32(object + 0x34u));
            f0 = floatOf(READ32(light + 0x44u));
            f4 = floatOf(READ32(object + 0x38u));
            f0 = FPU_SUB_S(f0, f3);
            f8 = floatOf(READ32(object + 0x3Cu));
            f11 = floatOf(READ32(object + 0x4Cu));
            f6 = floatOf(READ32(gp - 0x7CB0u));
            WRITE32(frame + 0x1D0u, bitsOf(f0));
            f0 = FPU_MUL_S(f0, f6);
            f2 = floatOf(READ32(frame + 0x1B0u));
            f1 = floatOf(READ32(light + 0x48u));
            f9 = floatOf(READ32(object + 0x50u));
            f2 = FPU_SUB_S(f2, f11);
            f1 = FPU_SUB_S(f1, f4);
            f10 = floatOf(READ32(object + 0x54u));
            f3 = FPU_ADD_S(f3, f0);
            f5 = floatOf(READ32(frame + 0x1B4u));
            f12 = FPU_SUB_S(f12, f10);
            f15 = floatOf(READ32(frame + 0x1A0u));
            WRITE32(frame + 0x1D4u, bitsOf(f1));
            f5 = FPU_SUB_S(f5, f9);
            f1 = FPU_MUL_S(f1, f6);
            f14 = floatOf(READ32(frame + 0x1A4u));
            f0 = floatOf(READ32(light + 0x4Cu));
            f13 = FPU_MUL_S(f2, f6);
            f7 = floatOf(READ32(frame + 0x1A8u));
            f16 = FPU_MUL_S(f12, f6);
            f0 = FPU_SUB_S(f0, f8);
            WRITE32(object + 0x34u, bitsOf(f3));
            f4 = FPU_ADD_S(f4, f1);
            WRITE32(frame + 0x1D0u, bitsOf(f2));
            WRITE32(frame + 0x1D4u, bitsOf(f5));
            f1 = FPU_MUL_S(f5, f6);
            f0 = FPU_MUL_S(f0, f6);
            WRITE32(frame + 0x1D8u, bitsOf(f12));
            WRITE32(object + 0x38u, bitsOf(f4));
            f3 = FPU_SUB_S(f3, f15);
            f4 = FPU_SUB_S(f4, f14);
            f8 = FPU_ADD_S(f8, f0);
            f11 = FPU_ADD_S(f11, f13);
            WRITE32(frame + 0x40u, bitsOf(f3));
            f9 = FPU_ADD_S(f9, f1);
            WRITE32(frame + 0x44u, bitsOf(f4));
            f7 = FPU_SUB_S(f8, f7);
            WRITE32(object + 0x3Cu, bitsOf(f8));
            f10 = FPU_ADD_S(f10, f16);
            WRITE32(object + 0x4Cu, bitsOf(f11));
            WRITE32(object + 0x50u, bitsOf(f9));
            WRITE32(frame + 0x48u, bitsOf(f7));
            WRITE32(object + 0x54u, bitsOf(f10));
            SET_GPR_U64(ctx, 2, v0);
            ctx->f[0] = f0;
            ctx->f[1] = f1;
            ctx->f[2] = f2;
            ctx->f[3] = f3;
            ctx->f[4] = f4;
            ctx->f[5] = f5;
            ctx->f[6] = f6;
            ctx->f[7] = f7;
            ctx->f[8] = f8;
            ctx->f[9] = f9;
            ctx->f[10] = f10;
            ctx->f[11] = f11;
            ctx->f[12] = f12;
            ctx->f[13] = f13;
            ctx->f[14] = f14;
            ctx->f[15] = f15;
            ctx->f[16] = f16;
        }
        else
        {
            // 0x25cc28
            v0 = sext32(READ32(lo32(a2)));
            const uint32_t light = lo32(v0);
            f2 = floatOf(READ32(frame + 0x1B0u));
            f1 = floatOf(READ32(light + 0x44u));
            f3 = floatOf(READ32(frame + 0x1B4u));
            WRITE32(object + 0x34u, bitsOf(f1));
            f0 = floatOf(READ32(light + 0x48u));
            WRITE32(object + 0x38u, bitsOf(f0));
            f1 = floatOf(READ32(light + 0x4Cu));
            WRITE32(object + 0x3Cu, bitsOf(f1));
            f0 = floatOf(READ32(lo32(a2) + 4u));
            WRITE32(frame + 0x40u, bitsOf(f0));
            f1 = floatOf(READ32(lo32(a2) + 8u));
            WRITE32(frame + 0x44u, bitsOf(f1));
            f0 = floatOf(READ32(lo32(a2) + 0xCu));
            WRITE32(object + 0x4Cu, bitsOf(f2));
            WRITE32(frame + 0x48u, bitsOf(f0));
            WRITE32(object + 0x50u, bitsOf(f3));
            WRITE32(object + 0x54u, bitsOf(f12));
            SET_GPR_U64(ctx, 2, v0);
            ctx->f[0] = f0;
            ctx->f[1] = f1;
            ctx->f[2] = f2;
            ctx->f[3] = f3;
        }
        // 0x25cc70
        f0 = floatOf(READ32(object + 0x4Cu));
        f1 = floatOf(READ32(object + 0x50u));
        f2 = floatOf(READ32(object + 0x54u));
        f0 = FPU_MUL_S(f0, f17);
        f1 = FPU_MUL_S(f1, f17);
        v0 = sext32(READ32(lo32(a2)));
        f2 = FPU_MUL_S(f2, f17);
        WRITE32(frame + 0x70u, bitsOf(f0));
        WRITE32(frame + 0x74u, bitsOf(f1));
        WRITE32(frame + 0x78u, bitsOf(f2));
        WRITE32(object + 0x24u, lo32(v0));
        ctx->f[0] = f0;
        ctx->f[1] = f1;
        ctx->f[2] = f2;
        SET_GPR_U64(ctx, 2, v0);
        goto L25ccbc;
    L25cca0:
        at = 0x3F800000u;
        f0 = floatOf(0x3F800000u);
        WRITE32(frame + 0x40u, bitsOf(f0));
        WRITE32(frame + 0x48u, 0u);
        WRITE32(frame + 0x70u, 0u);
        WRITE32(frame + 0x74u, 0u);
        WRITE32(frame + 0x78u, 0u);
        SET_GPR_U64(ctx, 1, at);
        ctx->f[0] = f0;
    L25ccbc:
        // The bullet flash: direction from its position, colour by its strength.
        f0 = floatOf(READ32(frame + 0x1A0u));
        if (s0 != 0u)
        {
            const uint32_t flash = lo32(s0);
            f1 = floatOf(READ32(flash + 0x18u));
            f3 = floatOf(READ32(frame + 0x1A4u));
            f1 = FPU_SUB_S(f1, f0);
            f4 = floatOf(READ32(frame + 0x1A8u));
            f2 = floatOf(READ32(frame + 0x1F8u));
            WRITE32(frame + 0x50u, bitsOf(f1));
            f0 = floatOf(READ32(flash + 0x1Cu));
            f0 = FPU_SUB_S(f0, f3);
            WRITE32(frame + 0x54u, bitsOf(f0));
            f1 = floatOf(READ32(flash + 0x20u));
            f1 = FPU_SUB_S(f1, f4);
            WRITE32(frame + 0x58u, bitsOf(f1));
            f0 = floatOf(READ32(flash + 0xCu));
            f0 = FPU_MUL_S(f0, f2);
            WRITE32(frame + 0x80u, bitsOf(f0));
            f1 = floatOf(READ32(flash + 0x10u));
            f1 = FPU_MUL_S(f1, f2);
            WRITE32(frame + 0x84u, bitsOf(f1));
            f0 = floatOf(READ32(flash + 0x14u));
            f0 = FPU_MUL_S(f0, f2);
            WRITE32(frame + 0x88u, bitsOf(f0));
            ctx->f[1] = f1;
            ctx->f[2] = f2;
            ctx->f[3] = f3;
            ctx->f[4] = f4;
        }
        else
        {
            // 0x25cd1c (f1 stays what the last call left in it)
            at = 0x3F800000u;
            f0 = floatOf(0x3F800000u);
            WRITE32(frame + 0x54u, 0u);
            WRITE32(frame + 0x50u, bitsOf(f0));
            WRITE32(frame + 0x58u, 0u);
            WRITE32(frame + 0x80u, 0u);
            WRITE32(frame + 0x84u, 0u);
            WRITE32(frame + 0x88u, 0u);
            SET_GPR_U64(ctx, 1, at);
        }
        ctx->f[0] = f0;
        // 0x25cd3c: obinstCalcAmbientLight(inst, &ambient)
        SET_GPR_U64(ctx, 4, s5);
        SET_GPR_U64(ctx, 5, sext32(frame + 0x90u));
        if (!lightCall(rdram, ctx, runtime, 0x25AAE0u, 0x25CD40u, 0x25CD48u))
            return;

        // 0x25cd48: normalise the first direction (sqrtf again for a NaN).
        f8 = floatOf(READ32(frame + 0x30u));
        f7 = floatOf(READ32(frame + 0x34u));
        f0 = FPU_MUL_S(f8, f8);
        f5 = floatOf(READ32(frame + 0x38u));
        f1 = FPU_MUL_S(f7, f7);
        f2 = FPU_MUL_S(f5, f5);
        f0 = FPU_ADD_S(f0, f1);
        f12 = FPU_ADD_S(f0, f2);
        f3 = FPU_SQRT_S(f12);
        fcr31 = conditionBit(ctx->fcr31, FPU_C_EQ_S(f3, f3));
        f10 = floatOf(READ32(frame + 0x40u));
        ctx->f[8] = f8;
        ctx->f[7] = f7;
        ctx->f[0] = f0;
        ctx->f[5] = f5;
        ctx->f[1] = f1;
        ctx->f[2] = f2;
        ctx->f[12] = f12;
        ctx->f[3] = f3;
        ctx->fcr31 = fcr31;
        ctx->f[10] = f10;
        if ((fcr31 & 0x800000u) == 0u)
        {
            if (!lightCall(rdram, ctx, runtime, 0x2D8398u, 0x25CD84u, 0x25CD8Cu))
                return;
            // 0x25cd8c
            f8 = floatOf(READ32(frame + 0x30u));
            f3 = FPU_MOV_S(ctx->f[0]);
            f7 = floatOf(READ32(frame + 0x34u));
            f5 = floatOf(READ32(frame + 0x38u));
            f10 = floatOf(READ32(frame + 0x40u));
            fcr31 = ctx->fcr31;
            ctx->f[8] = f8;
            ctx->f[3] = f3;
            ctx->f[7] = f7;
            ctx->f[5] = f5;
            ctx->f[10] = f10;
        }
        // 0x25cda0: divide by the length, square the second direction meanwhile.
        f4 = floatOf(READ32(frame + 0x44u));
        f0 = FPU_MUL_S(f10, f10);
        at = 0x3F800000u;
        f20 = floatOf(0x3F800000u);
        f2 = FPU_MUL_S(f4, f4);
        f9 = floatOf(READ32(frame + 0x48u));
        f6 = divS(f20, f3, fcr31);
        f1 = FPU_MUL_S(f9, f9);
        f0 = FPU_ADD_S(f0, f2);
        f12 = FPU_ADD_S(f0, f1);
        f2 = FPU_MUL_S(f5, f6);
        f0 = FPU_MUL_S(f8, f6);
        f5 = FPU_SQRT_S(f12);
        f1 = FPU_MUL_S(f7, f6);
        WRITE32(frame + 0x38u, bitsOf(f2));
        WRITE32(frame + 0x30u, bitsOf(f0));
        fcr31 = conditionBit(fcr31, FPU_C_EQ_S(f5, f5));
        WRITE32(frame + 0x34u, bitsOf(f1));
        ctx->f[4] = f4;
        ctx->f[0] = f0;
        SET_GPR_U64(ctx, 1, at);
        ctx->f[20] = f20;
        ctx->f[2] = f2;
        ctx->f[9] = f9;
        ctx->f[6] = f6;
        ctx->f[1] = f1;
        ctx->f[12] = f12;
        ctx->f[5] = f5;
        ctx->fcr31 = fcr31;
        if ((fcr31 & 0x800000u) == 0u)
        {
            if (!lightCall(rdram, ctx, runtime, 0x2D8398u, 0x25CE00u, 0x25CE08u))
                return;
            // 0x25ce08
            f10 = floatOf(READ32(frame + 0x40u));
            f5 = FPU_MOV_S(ctx->f[0]);
            f4 = floatOf(READ32(frame + 0x44u));
            f9 = floatOf(READ32(frame + 0x48u));
            fcr31 = ctx->fcr31;
            ctx->f[10] = f10;
            ctx->f[5] = f5;
            ctx->f[4] = f4;
            ctx->f[9] = f9;
        }
        // 0x25ce18: the second direction divided, the third squared.
        f8 = floatOf(READ32(frame + 0x50u));
        f6 = divS(f20, f5, fcr31);
        f7 = floatOf(READ32(frame + 0x54u));
        f0 = FPU_MUL_S(f8, f8);
        f5 = floatOf(READ32(frame + 0x58u));
        f1 = FPU_MUL_S(f7, f7);
        f2 = FPU_MUL_S(f5, f5);
        f0 = FPU_ADD_S(f0, f1);
        f3 = FPU_MUL_S(f9, f6);
        f1 = FPU_MUL_S(f10, f6);
        f12 = FPU_ADD_S(f0, f2);
        f4 = FPU_MUL_S(f4, f6);
        WRITE32(frame + 0x48u, bitsOf(f3));
        WRITE32(frame + 0x40u, bitsOf(f1));
        f0 = FPU_SQRT_S(f12);
        fcr31 = conditionBit(fcr31, FPU_C_EQ_S(f0, f0));
        WRITE32(frame + 0x44u, bitsOf(f4));
        ctx->f[8] = f8;
        ctx->f[6] = f6;
        ctx->f[7] = f7;
        ctx->f[0] = f0;
        ctx->f[5] = f5;
        ctx->f[1] = f1;
        ctx->f[2] = f2;
        ctx->f[3] = f3;
        ctx->f[12] = f12;
        ctx->f[4] = f4;
        ctx->fcr31 = fcr31;
        if ((fcr31 & 0x800000u) == 0u)
        {
            if (!lightCall(rdram, ctx, runtime, 0x2D8398u, 0x25CE74u, 0x25CE7Cu))
                return;
            // 0x25ce7c
            f0 = ctx->f[0];
            fcr31 = ctx->fcr31;
        }
        // 0x25ce7c: the third direction divided; the object's rotation
        // matrix (matrixTransRotY: position 0, yaw from the definition in
        // degrees) at frame+0xA0.
        f8 = floatOf(READ32(frame + 0x50u));
        f7 = floatOf(READ32(frame + 0x54u));
        f5 = floatOf(READ32(frame + 0x58u));
        f6 = divS(f20, f0, fcr31);
        f3 = floatOf(READ32(gp - 0x7CACu));
        at = 0x43340000u;
        f4 = floatOf(0x43340000u); // 180
        s7 = sext32(frame + 0xA0u);
        f0 = FPU_MUL_S(f5, f6);
        f1 = FPU_MUL_S(f8, f6);
        f2 = FPU_MUL_S(f7, f6);
        WRITE32(frame + 0x58u, bitsOf(f0));
        WRITE32(frame + 0x50u, bitsOf(f1));
        WRITE32(frame + 0x54u, bitsOf(f2));
        f15 = floatOf(READ32(def + 0x4Cu));
        f14 = floatOf(READ32(def + 0x38u));
        f15 = FPU_MUL_S(f15, f3);
        f12 = floatOf(READ32(def + 0x30u));
        f15 = divS(f15, f4, fcr31);
        f13 = floatOf(READ32(def + 0x34u));
        ctx->f[8] = f8;
        ctx->f[7] = f7;
        ctx->f[5] = f5;
        ctx->f[6] = f6;
        ctx->fcr31 = fcr31;
        ctx->f[3] = f3;
        SET_GPR_U64(ctx, 1, at);
        ctx->f[4] = f4;
        SET_GPR_U64(ctx, 23, s7);
        SET_GPR_U64(ctx, 4, s7);
        ctx->f[0] = f0;
        ctx->f[1] = f1;
        ctx->f[2] = f2;
        ctx->f[15] = f15;
        ctx->f[14] = f14;
        ctx->f[12] = f12;
        ctx->f[13] = f13;
        if (!lightCall(rdram, ctx, runtime, 0x2B4C50u, 0x25CEDCu, 0x25CEE4u))
            return;

        // 0x25cee4: one pass per matrix of the object (at least one).
        v1 = sext32(READ32(object));
        a0 = 1u;
        SET_GPR_U64(ctx, 4, a0); // before the movz: it copies the whole of a0
        v1 = sext32(READ32(lo32(v1) + 4u));
        v0 = slt(0u, v1);
        SET_GPR_U64(ctx, 3, v1);
        if (v0 == 0u)
            SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4)); // movz: all 128 bits, as the original copies them
        v1 = GPR_U64(ctx, 3);
        s3 = v1;
        SET_GPR_U64(ctx, 2, v0);
        SET_GPR_U64(ctx, 19, s3);
        if (static_cast<int64_t>(v1) <= 0)
            goto L25d090; // blez: never, the count was clamped to one
        s6 = sext32(frame + 0x160u);
        s4 = sext32(frame + 0xE0u);
        s1 = sext32(frame + 0x120u);
        s2 = 0u;
        SET_GPR_U64(ctx, 22, s6);
        SET_GPR_U64(ctx, 20, s4);
        SET_GPR_U64(ctx, 17, s1);
        SET_GPR_U64(ctx, 18, s2);
        for (;;)
        {
            // 0x25cf10: the three directions, copied for this matrix.
            f0 = floatOf(READ32(frame + 0x30u));
            f1 = floatOf(READ32(frame + 0x34u));
            f2 = floatOf(READ32(frame + 0x38u));
            f3 = floatOf(READ32(frame + 0x40u));
            f4 = floatOf(READ32(frame + 0x44u));
            f5 = floatOf(READ32(frame + 0x48u));
            f6 = floatOf(READ32(frame + 0x50u));
            f7 = floatOf(READ32(frame + 0x54u));
            f8 = floatOf(READ32(frame + 0x58u));
            a2 = sext32(READ32(object + 4u));
            WRITE32(frame + 0x1B0u, bitsOf(f0));
            WRITE32(frame + 0x1B4u, bitsOf(f1));
            WRITE32(frame + 0x1B8u, bitsOf(f2));
            WRITE32(frame + 0x1C0u, bitsOf(f3));
            WRITE32(frame + 0x1C4u, bitsOf(f4));
            WRITE32(frame + 0x1C8u, bitsOf(f5));
            WRITE32(frame + 0x1E0u, bitsOf(f6));
            WRITE32(frame + 0x1E4u, bitsOf(f7));
            WRITE32(frame + 0x1E8u, bitsOf(f8));
            ctx->f[0] = f0;
            ctx->f[1] = f1;
            ctx->f[2] = f2;
            ctx->f[3] = f3;
            ctx->f[4] = f4;
            ctx->f[5] = f5;
            ctx->f[6] = f6;
            ctx->f[7] = f7;
            ctx->f[8] = f8;
            SET_GPR_U64(ctx, 6, a2);
            if (a2 != 0u)
            {
                // The matrix set: rotation times this matrix (times the
                // character's matrix for a character's light), transposed,
                // applied to the three directions.
                v0 = sext32(READ32(frame + 0x1FCu));
                s0 = s4;
                SET_GPR_U64(ctx, 2, v0);
                SET_GPR_U64(ctx, 16, s0);
                if (v0 != 0u)
                {
                    // 0x25cf6c
                    a1 = sext32(READ32(lo32(fp) + 0x6ECu));
                    SET_GPR_U64(ctx, 5, a1);
                    SET_GPR_U64(ctx, 4, s6);
                    SET_GPR_U64(ctx, 6, s7);
                    if (!lightCall(rdram, ctx, runtime, 0x2D5E98u, 0x25CF74u, 0x25CF7Cu))
                        return;
                    // 0x25cf7c
                    a2 = sext32(READ32(object + 4u));
                    SET_GPR_U64(ctx, 4, s0);
                    SET_GPR_U64(ctx, 5, s6);
                    a2 = sext32(lo32(a2) + lo32(s2));
                    SET_GPR_U64(ctx, 6, a2);
                    if (!lightCall(rdram, ctx, runtime, 0x2D5E98u, 0x25CF88u, 0x25CF90u))
                        return;
                    // 0x25cf90
                    SET_GPR_U64(ctx, 5, s0);
                }
                else
                {
                    // 0x25cf98
                    a2 = sext32(lo32(a2) + lo32(s2));
                    SET_GPR_U64(ctx, 6, a2);
                    SET_GPR_U64(ctx, 4, s0);
                    SET_GPR_U64(ctx, 5, s7);
                    if (!lightCall(rdram, ctx, runtime, 0x2D5E98u, 0x25CFA0u, 0x25CFA8u))
                        return;
                    // 0x25cfa8
                    SET_GPR_U64(ctx, 5, s0);
                }
                // 0x25cfac: sceVu0TransposeMatrix(s1, s0)
                SET_GPR_U64(ctx, 4, s1);
                if (!lightCall(rdram, ctx, runtime, 0x2D5F60u, 0x25CFACu, 0x25CFB4u))
                    return;
                // 0x25cfb4: matrixVecRotAligned(s1, direction) three times.
                SET_GPR_U64(ctx, 4, s1);
                SET_GPR_U64(ctx, 5, sext32(frame + 0x1B0u));
                if (!lightCall(rdram, ctx, runtime, 0x2B5638u, 0x25CFB8u, 0x25CFC0u))
                    return;
                SET_GPR_U64(ctx, 4, s1);
                SET_GPR_U64(ctx, 5, sext32(frame + 0x1C0u));
                if (!lightCall(rdram, ctx, runtime, 0x2B5638u, 0x25CFC4u, 0x25CFCCu))
                    return;
                SET_GPR_U64(ctx, 4, s1);
                SET_GPR_U64(ctx, 5, sext32(frame + 0x1E0u));
                if (!lightCall(rdram, ctx, runtime, 0x2B5638u, 0x25CFD0u, 0x25CFD8u))
                    return;
            }
            // 0x25cfd8: the three directions as the rows of this matrix's
            // light block (0x40 bytes each), w = 0, and (0, 0, 0, 1) last.
            v0 = sext32(READ32(object + 0x18u));
            s3 = sext32(lo32(s3) - 1u);
            f0 = floatOf(READ32(frame + 0x1B0u));
            v0 = sext32(lo32(v0) + lo32(s2));
            at = 0x3F800000u;
            f1 = floatOf(0x3F800000u);
            WRITE32(lo32(v0), bitsOf(f0));
            s2 = sext32(lo32(s2) + 0x40u);
            v0 = sext32(lo32(v0) + 4u);
            f0 = floatOf(READ32(frame + 0x1C0u));
            WRITE32(lo32(v0), bitsOf(f0));
            v0 = sext32(lo32(v0) + 4u);
            f0 = floatOf(READ32(frame + 0x1E0u));
            WRITE32(lo32(v0), bitsOf(f0));
            v0 = sext32(lo32(v0) + 4u);
            WRITE32(lo32(v0), 0u);
            v0 = sext32(lo32(v0) + 4u);
            f0 = floatOf(READ32(frame + 0x1B4u));
            WRITE32(lo32(v0), bitsOf(f0));
            v0 = sext32(lo32(v0) + 4u);
            f0 = floatOf(READ32(frame + 0x1C4u));
            WRITE32(lo32(v0), bitsOf(f0));
            v0 = sext32(lo32(v0) + 4u);
            f0 = floatOf(READ32(frame + 0x1E4u));
            WRITE32(lo32(v0), bitsOf(f0));
            v0 = sext32(lo32(v0) + 4u);
            WRITE32(lo32(v0), 0u);
            v0 = sext32(lo32(v0) + 4u);
            f0 = floatOf(READ32(frame + 0x1B8u));
            WRITE32(lo32(v0), bitsOf(f0));
            v0 = sext32(lo32(v0) + 4u);
            f0 = floatOf(READ32(frame + 0x1C8u));
            WRITE32(lo32(v0), bitsOf(f0));
            v0 = sext32(lo32(v0) + 4u);
            f0 = floatOf(READ32(frame + 0x1E8u));
            WRITE32(lo32(v0), bitsOf(f0));
            v0 = sext32(lo32(v0) + 4u);
            WRITE32(lo32(v0), 0u);
            v0 = sext32(lo32(v0) + 4u);
            WRITE32(lo32(v0), 0u);
            v0 = sext32(lo32(v0) + 4u);
            WRITE32(lo32(v0), 0u);
            v0 = sext32(lo32(v0) + 4u);
            WRITE32(lo32(v0) + 4u, bitsOf(f1));
            WRITE32(lo32(v0), 0u);
            SET_GPR_U64(ctx, 2, v0);
            SET_GPR_U64(ctx, 19, s3);
            ctx->f[0] = f0;
            SET_GPR_U64(ctx, 1, at);
            ctx->f[1] = f1;
            SET_GPR_U64(ctx, 18, s2);
            if (s3 == 0u)
                break;
            // The loop's back edge: the original's checkpoint, resumed at the
            // loop head by the original if it is due.
            ctx->pc = 0x25CF10u;
            if (runtime->eeCheckpointDue())
                return;
        }
    L25d090:
        // The colours: first, second and bullet light, then the ambient one
        // from obinstCalcAmbientLight, each (r, g, b, 0) but the last (r, g, b, 1).
        f0 = floatOf(READ32(frame + 0x60u));
        v0 = sext32(READ32(object + 0x1Cu));
        at = 0x3F800000u;
        f1 = floatOf(0x3F800000u);
        WRITE32(lo32(v0), bitsOf(f0));
        v0 = sext32(lo32(v0) + 4u);
        f0 = floatOf(READ32(frame + 0x64u));
        WRITE32(lo32(v0), bitsOf(f0));
        v0 = sext32(lo32(v0) + 4u);
        f0 = floatOf(READ32(frame + 0x68u));
        WRITE32(lo32(v0), bitsOf(f0));
        v0 = sext32(lo32(v0) + 4u);
        WRITE32(lo32(v0), 0u);
        v0 = sext32(lo32(v0) + 4u);
        f0 = floatOf(READ32(frame + 0x70u));
        WRITE32(lo32(v0), bitsOf(f0));
        v0 = sext32(lo32(v0) + 4u);
        f0 = floatOf(READ32(frame + 0x74u));
        WRITE32(lo32(v0), bitsOf(f0));
        v0 = sext32(lo32(v0) + 4u);
        f0 = floatOf(READ32(frame + 0x78u));
        WRITE32(lo32(v0), bitsOf(f0));
        v0 = sext32(lo32(v0) + 4u);
        WRITE32(lo32(v0), 0u);
        v0 = sext32(lo32(v0) + 4u);
        f0 = floatOf(READ32(frame + 0x80u));
        WRITE32(lo32(v0), bitsOf(f0));
        v0 = sext32(lo32(v0) + 4u);
        f0 = floatOf(READ32(frame + 0x84u));
        WRITE32(lo32(v0), bitsOf(f0));
        v0 = sext32(lo32(v0) + 4u);
        f0 = floatOf(READ32(frame + 0x88u));
        WRITE32(lo32(v0), bitsOf(f0));
        v0 = sext32(lo32(v0) + 4u);
        WRITE32(lo32(v0), 0u);
        v0 = sext32(lo32(v0) + 4u);
        f0 = floatOf(READ32(frame + 0x90u));
        WRITE32(lo32(v0), bitsOf(f0));
        v0 = sext32(lo32(v0) + 4u);
        f0 = floatOf(READ32(frame + 0x94u));
        WRITE32(lo32(v0), bitsOf(f0));
        v0 = sext32(lo32(v0) + 4u);
        f0 = floatOf(READ32(frame + 0x98u));
        WRITE32(lo32(v0) + 4u, bitsOf(f1));
        WRITE32(lo32(v0), bitsOf(f0));
        ctx->f[0] = f0;
        SET_GPR_U64(ctx, 2, v0);
        SET_GPR_U64(ctx, 1, at);
        ctx->f[1] = f1;
        // 0x25d144: the epilogue.
        SET_GPR_U64(ctx, 31, READ64(frame + 0x290u));
        SET_GPR_U64(ctx, 30, READ64(frame + 0x280u));
        SET_GPR_U64(ctx, 23, READ64(frame + 0x270u));
        SET_GPR_U64(ctx, 22, READ64(frame + 0x260u));
        SET_GPR_U64(ctx, 21, READ64(frame + 0x250u));
        SET_GPR_U64(ctx, 20, READ64(frame + 0x240u));
        SET_GPR_U64(ctx, 19, READ64(frame + 0x230u));
        SET_GPR_U64(ctx, 18, READ64(frame + 0x220u));
        SET_GPR_U64(ctx, 17, READ64(frame + 0x210u));
        SET_GPR_U64(ctx, 16, READ64(frame + 0x200u));
        ctx->f[23] = floatOf(READ32(frame + 0x2B8u));
        ctx->f[22] = floatOf(READ32(frame + 0x2B0u));
        ctx->f[21] = floatOf(READ32(frame + 0x2A8u));
        ctx->f[20] = floatOf(READ32(frame + 0x2A0u));
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(frame + 0x2C0u));
        returnToCaller(ctx);
    }

    // ---- bglightGet (0x25a7d0)
    //
    // bglightGet(inst, position, &first, &second): the two nearest lights of
    // the level to a position. Every eighth frame (a hash of the instance
    // pointer against the frame counter), or when a cached light has moved
    // beyond 20 units, the level's light table (0x1FC5F18, gp-0x5D68
    // entries) is searched; otherwise the two cached indices in the
    // definition (+0x220, +0x222) are measured again. The three candidate
    // records live at 0x1FC63C8 (static), the two results are pointers to
    // them. A leaf; the search loop keeps the original's checkpoint at its
    // back edge (the original resumes at the loop head if it fires).

    struct BglightRegs
    {
        uint64_t at, v0, v1, a0, t0, t1, t2, t3, t4, t5, t6;
        float f0, f1, f2, f3, f4, f5;
        uint32_t fcr31;
    };

    TS_ALWAYS_INLINE void storeBglight(const BglightRegs &r, R5900Context *ctx)
    {
        SET_GPR_U64(ctx, 1, r.at);
        SET_GPR_U64(ctx, 2, r.v0);
        SET_GPR_U64(ctx, 3, r.v1);
        SET_GPR_U64(ctx, 4, r.a0);
        SET_GPR_U64(ctx, 8, r.t0);
        SET_GPR_U64(ctx, 9, r.t1);
        SET_GPR_U64(ctx, 10, r.t2);
        SET_GPR_U64(ctx, 11, r.t3);
        SET_GPR_U64(ctx, 12, r.t4);
        SET_GPR_U64(ctx, 13, r.t5);
        SET_GPR_U64(ctx, 14, r.t6);
        ctx->f[0] = r.f0;
        ctx->f[1] = r.f1;
        ctx->f[2] = r.f2;
        ctx->f[3] = r.f3;
        ctx->f[4] = r.f4;
        ctx->f[5] = r.f5;
        ctx->fcr31 = r.fcr31;
    }

    // The squared distance from the position to a cached light, into one of
    // the static records; true when it is 400 or more (the light moved away).
    TS_ALWAYS_INLINE bool bglightMeasureCached(BglightRegs &r, uint32_t index, uint32_t record, uint8_t *rdram,
                                               R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t position = lo32(GPR_U64(ctx, 5));
        r.v0 = sext32(index << 2);
        r.v1 = 0x01FC5F18u;
        r.f2 = floatOf(READ32(position));
        r.v0 = sext32(lo32(r.v0) + lo32(r.v1));
        r.at = 0x43C80000u;
        r.f4 = floatOf(0x43C80000u); // 400
        r.v1 = sext32(READ32(lo32(r.v0)));
        const uint32_t light = lo32(r.v1);
        r.f0 = floatOf(READ32(light + 0x44u));
        WRITE32(record, light);
        r.f2 = FPU_SUB_S(r.f2, r.f0);
        WRITE32(record + 4u, bitsOf(r.f2));
        r.f2 = FPU_MUL_S(r.f2, r.f2);
        r.f1 = floatOf(READ32(light + 0x48u));
        r.f0 = floatOf(READ32(position + 4u));
        r.f0 = FPU_SUB_S(r.f0, r.f1);
        WRITE32(record + 8u, bitsOf(r.f0));
        r.f0 = FPU_MUL_S(r.f0, r.f0);
        r.f3 = floatOf(READ32(light + 0x4Cu));
        r.f1 = floatOf(READ32(position + 8u));
        r.f2 = FPU_ADD_S(r.f2, r.f0);
        r.f1 = FPU_SUB_S(r.f1, r.f3);
        r.f0 = FPU_MUL_S(r.f1, r.f1);
        WRITE32(record + 0xCu, bitsOf(r.f1));
        r.f2 = FPU_ADD_S(r.f2, r.f0);
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f4, r.f2));
        WRITE32(record + 0x10u, bitsOf(r.f2));
        return (r.fcr31 & 0x800000u) != 0u;
    }

    void nativeBglightGet(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t position = GPR_U32(ctx, 5);
        BglightRegs r;
        r.at = GPR_U64(ctx, 1); // at, t6 and f3-f5 are left alone on some paths
        r.v0 = GPR_U64(ctx, 2);
        r.v1 = GPR_U64(ctx, 3);
        r.a0 = GPR_U64(ctx, 4);
        r.t0 = GPR_U64(ctx, 8);
        r.t1 = GPR_U64(ctx, 9);
        r.t2 = GPR_U64(ctx, 10);
        r.t3 = GPR_U64(ctx, 11);
        r.t4 = GPR_U64(ctx, 12);
        r.t5 = GPR_U64(ctx, 13);
        r.t6 = GPR_U64(ctx, 14);
        r.f0 = ctx->f[0];
        r.f1 = ctx->f[1];
        r.f2 = ctx->f[2];
        r.f3 = ctx->f[3];
        r.f4 = ctx->f[4];
        r.f5 = ctx->f[5];
        r.fcr31 = ctx->fcr31;

        // 0x25a7d0: the frame hash of this instance against the frame counter.
        r.v1 = sext32(READ32(gp - 0x5D6Cu));
        r.v0 = sext32(0xC18F9C19u);
        r.t4 = 0x01FC0000u;
        r.v1 = sext32(lo32(r.a0) - lo32(r.v1));
        r.t5 = 0x01FC0000u;
        const int64_t product = static_cast<int64_t>(static_cast<int32_t>(lo32(r.v1))) *
                                static_cast<int64_t>(static_cast<int32_t>(lo32(r.v0)));
        ctx->lo = sext32(static_cast<uint64_t>(product));
        ctx->hi = sext32(static_cast<uint64_t>(product >> 32));
        r.v1 = sext32(static_cast<uint64_t>(product));
        r.t0 = sext32(READ32(gp - 0x4BA0u));
        r.v0 = 0x01FC0000u;
        r.t3 = 0x01FC63C8u;
        r.t1 = 0x01FC63F8u;
        r.t2 = 0x01FC63E0u;
        r.v0 = sext32(READ32(gp - 0x6258u));
        const bool noDivisor = static_cast<int64_t>(r.t0) <= 0;
        r.v1 = sext32(static_cast<uint32_t>(static_cast<int32_t>(lo32(r.v1)) >> 3));
        if (!noDivisor)
        {
            // div: the divisor is positive here, so no break.
            const int32_t divisor = static_cast<int32_t>(lo32(r.t0)), dividend = static_cast<int32_t>(lo32(r.v0));
            if (divisor == -1 && dividend == INT32_MIN)
            {
                ctx->lo = static_cast<uint64_t>(static_cast<int64_t>(INT32_MIN));
                ctx->hi = 0u;
            }
            else
            {
                ctx->lo = static_cast<uint64_t>(static_cast<int64_t>(dividend / divisor));
                ctx->hi = static_cast<uint64_t>(static_cast<int64_t>(dividend % divisor));
            }
            r.v0 = ctx->lo;
        }
        // 0x25a81c
        WRITE32(lo32(r.t5) + 0x63E0u, 0u);
        r.v1 &= 7u;
        r.v0 &= 7u;
        r.t5 = 1u;
        const bool thisFrame = r.v1 == r.v0;
        WRITE32(lo32(r.t4) + 0x63C8u, 0u);
        if (!thisFrame)
        {
            // 0x25a834: measure the two cached lights again.
            r.v0 = sext32(READ32(lo32(r.a0) + 0xF4u));
            r.t0 = sext32(static_cast<uint32_t>(static_cast<int16_t>(READ16(lo32(r.v0) + 0x222u))));
            r.v0 = sext32(static_cast<uint32_t>(static_cast<int16_t>(READ16(lo32(r.v0) + 0x220u))));
            r.t5 = 0u;
            if (static_cast<int64_t>(r.v0) >= 0)
            {
                r.t6 = 0x01FC0000u;
                if (bglightMeasureCached(r, lo32(r.v0), lo32(r.t3), rdram, ctx, runtime))
                    r.t5 = 1u;
            }
            // 0x25a8c0
            r.t6 = 0x01FC0000u;
            if (static_cast<int64_t>(r.t0) >= 0)
            {
                if (bglightMeasureCached(r, lo32(r.t0), lo32(r.t2), rdram, ctx, runtime))
                    r.t5 = 1u;
            }
        }
        // 0x25a93c
        r.v0 = ~0ull;
        if (r.t5 != 0u)
        {
            // 0x25a944: the search over every light of the level.
            r.a0 = sext32(READ32(lo32(r.a0) + 0xF4u));
            const uint32_t def = lo32(r.a0);
            WRITE32(lo32(r.t3), 0u);
            r.t0 = 0u;
            r.t4 = sext32(READ32(gp - 0x5D68u));
            WRITE16(def + 0x222u, 0xFFFFu);
            WRITE32(lo32(r.t2), 0u);
            WRITE16(def + 0x220u, 0xFFFFu);
            if (static_cast<int64_t>(r.t4) > 0)
            {
                r.t6 = 0x01FC0000u;
                r.v1 = 0x01FC5F18u;
                for (;;)
                {
                    // 0x25a970: this light's offset from the position, into the spare record (t1).
                    r.v0 = sext32(lo32(r.t0) << 2);
                    r.v0 = sext32(lo32(r.v0) + lo32(r.v1));
                    r.f1 = floatOf(READ32(position));
                    r.v1 = sext32(READ32(lo32(r.v0)));
                    const uint32_t light = lo32(r.v1), spare = lo32(r.t1);
                    r.f0 = floatOf(READ32(light + 0x44u));
                    WRITE32(spare, light);
                    r.f5 = FPU_SUB_S(r.f1, r.f0);
                    WRITE32(spare + 4u, bitsOf(r.f5));
                    r.f1 = floatOf(READ32(position + 4u));
                    r.f0 = floatOf(READ32(light + 0x48u));
                    r.f4 = FPU_SUB_S(r.f1, r.f0);
                    WRITE32(spare + 8u, bitsOf(r.f4));
                    r.f1 = floatOf(READ32(position + 8u));
                    r.f0 = floatOf(READ32(light + 0x4Cu));
                    r.f3 = FPU_SUB_S(r.f1, r.f0);
                    WRITE32(spare + 0xCu, bitsOf(r.f3));
                    r.v0 = sext32(static_cast<uint32_t>(static_cast<int16_t>(READ16(light + 6u))));
                    bool infinite = false;
                    if (r.v0 == 0u)
                    {
                        // beql: the point light's squared distance.
                        r.f0 = floatOf(READ32(spare + 4u));
                    }
                    else
                    {
                        // A directional light: behind its plane it is infinitely far.
                        r.f0 = floatOf(READ32(light + 0x80u));
                        r.f2 = floatOf(READ32(light + 0x84u));
                        r.f0 = FPU_MUL_S(r.f5, r.f0);
                        r.f1 = floatOf(READ32(light + 0x88u));
                        r.f2 = FPU_MUL_S(r.f4, r.f2);
                        r.f1 = FPU_MUL_S(r.f3, r.f1);
                        r.f3 = floatOf(0u);
                        r.f0 = FPU_ADD_S(r.f0, r.f2);
                        r.f0 = FPU_ADD_S(r.f0, r.f1);
                        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f0, r.f3));
                        r.v0 = 0x003B0000u;
                        if ((r.fcr31 & 0x800000u) != 0u)
                        {
                            r.f0 = floatOf(READ32(0x003B0000u - 0x1574u));
                            infinite = true;
                        }
                        else
                        {
                            r.f0 = floatOf(READ32(spare + 4u));
                        }
                    }
                    if (!infinite)
                    {
                        // 0x25a9fc
                        r.f2 = floatOf(READ32(spare + 8u));
                        r.f0 = FPU_MUL_S(r.f0, r.f0);
                        r.f1 = floatOf(READ32(spare + 0xCu));
                        r.f2 = FPU_MUL_S(r.f2, r.f2);
                        r.f1 = FPU_MUL_S(r.f1, r.f1);
                        r.f0 = FPU_ADD_S(r.f0, r.f2);
                        r.f0 = FPU_ADD_S(r.f0, r.f1);
                    }
                    // 0x25aa18: within 20 units, rank it against the two kept so far.
                    WRITE32(spare + 0x10u, bitsOf(r.f0));
                    r.f1 = floatOf(READ32(spare + 0x10u));
                    r.at = 0x43C80000u;
                    r.f0 = floatOf(0x43C80000u);
                    r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0));
                    if ((r.fcr31 & 0x800000u) == 0u)
                    {
                        r.t0 = sext32(lo32(r.t0) + 1u); // bc1fl
                    }
                    else
                    {
                        r.v0 = sext32(READ32(lo32(r.t3)));
                        r.v1 = r.t3;
                        bool second = false, replaceFirst = true;
                        if (r.v0 != 0u)
                        {
                            r.f0 = floatOf(READ32(lo32(r.t3) + 0x10u));
                            r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0));
                            if ((r.fcr31 & 0x800000u) == 0u)
                            {
                                r.v0 = sext32(READ32(lo32(r.t2))); // bc1fl
                                second = true;
                            }
                        }
                        if (!second)
                        {
                            // 0x25aa58: nearer than the first: the first moves to second.
                            r.v0 = sext32(READ32(lo32(r.t2)));
                            r.t3 = r.t1;
                            r.t1 = r.v1;
                            if (r.v0 != 0u)
                            {
                                r.f1 = floatOf(READ32(lo32(r.v1) + 0x10u));
                                r.f0 = floatOf(READ32(lo32(r.t2) + 0x10u));
                                r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0));
                                if ((r.fcr31 & 0x800000u) == 0u)
                                {
                                    WRITE16(def + 0x220u, static_cast<uint16_t>(lo32(r.t0))); // bc1fl
                                    replaceFirst = false;
                                }
                            }
                            if (replaceFirst)
                            {
                                // 0x25aa80
                                r.v0 = READ16(def + 0x220u);
                                r.v1 = r.t2;
                                r.t2 = r.t1;
                                WRITE16(def + 0x222u, static_cast<uint16_t>(lo32(r.v0)));
                                r.t1 = r.v1;
                                WRITE16(def + 0x220u, static_cast<uint16_t>(lo32(r.t0)));
                            }
                            r.t0 = sext32(lo32(r.t0) + 1u); // 0x25aac4
                        }
                        else
                        {
                            // 0x25aa9c: between the two, or second when there is none.
                            r.v1 = r.t2;
                            bool skip = false;
                            if (r.v0 != 0u)
                            {
                                r.f0 = floatOf(READ32(lo32(r.t2) + 0x10u));
                                r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0));
                                if ((r.fcr31 & 0x800000u) == 0u)
                                {
                                    r.t0 = sext32(lo32(r.t0) + 1u); // bc1fl
                                    skip = true;
                                }
                            }
                            if (!skip)
                            {
                                WRITE16(def + 0x222u, static_cast<uint16_t>(lo32(r.t0)));
                                r.t2 = r.t1;
                                r.t1 = r.v1;
                                r.t0 = sext32(lo32(r.t0) + 1u);
                            }
                        }
                    }
                    // 0x25aac8: the back edge, with the original's checkpoint.
                    r.v0 = slt(r.t0, r.t4);
                    r.v1 = 0x01FC5F18u;
                    if (r.v0 == 0u)
                        break;
                    if (runtime->eeCheckpointDue())
                    {
                        storeBglight(r, ctx);
                        ctx->pc = 0x25A970u;
                        return;
                    }
                }
            }
        }
        // 0x25aad4
        WRITE32(GPR_U32(ctx, 6), lo32(r.t3));
        WRITE32(GPR_U32(ctx, 7), lo32(r.t2));
        storeBglight(r, ctx);
        returnToCaller(ctx);
    }

    // ---- hittestLineTri (0x209818)
    //
    // hittestLineTri(p, dir, v0, v1, v2, hit, normal): where the ray from p
    // along dir meets the triangle's plane, and whether that point is inside
    // the triangle (the three edge tests); 1 with the point and the plane
    // normal written, else 0. A leaf with a 0xA0-byte frame that saves
    // f20-f27 and keeps the edge vectors.

    void nativeHittestLineTri(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t p = GPR_U32(ctx, 4), dir = GPR_U32(ctx, 5), v0 = GPR_U32(ctx, 6), v1 = GPR_U32(ctx, 7);
        const uint32_t v2 = GPR_U32(ctx, 8), hit = GPR_U32(ctx, 9), normal = GPR_U32(ctx, 10);
        // beqz tests the whole 64-bit register (a pointer never has only its high word set).
        const bool hasHit = GPR_U64(ctx, 9) != 0u, hasNormal = GPR_U64(ctx, 10) != 0u;
        const uint32_t frame = GPR_U32(ctx, 29) - 0xA0u;
        float f[28];
        for (int i = 0; i < 28; ++i)
            f[i] = ctx->f[i];
        uint32_t fcr31 = ctx->fcr31;
        uint64_t result;

        f[9] = floatOf(READ32(v1));
        WRITE32(frame + 0x98u, bitsOf(f[27]));
        WRITE32(frame + 0x88u, bitsOf(f[25]));
        WRITE32(frame + 0x68u, bitsOf(f[21]));
        WRITE32(frame + 0x60u, bitsOf(f[20]));
        WRITE32(frame + 0x90u, bitsOf(f[26]));
        WRITE32(frame + 0x80u, bitsOf(f[24]));
        WRITE32(frame + 0x78u, bitsOf(f[23]));
        WRITE32(frame + 0x70u, bitsOf(f[22]));
        f[22] = floatOf(READ32(v0 + 4u));
        f[24] = floatOf(READ32(v0 + 8u));
        f[14] = floatOf(READ32(v1 + 8u));
        f[26] = floatOf(READ32(v2 + 8u));
        f[13] = floatOf(READ32(v1 + 4u));
        f[20] = FPU_SUB_S(f[14], f[24]);
        f[23] = floatOf(READ32(v2 + 4u));
        f[4] = FPU_SUB_S(f[26], f[24]);
        f[21] = floatOf(READ32(v0));
        f[19] = FPU_SUB_S(f[13], f[22]);
        f[25] = floatOf(READ32(v2));
        f[0] = FPU_SUB_S(f[23], f[22]);
        f[18] = FPU_SUB_S(f[9], f[21]);
        f[16] = floatOf(READ32(dir + 8u));
        f[2] = FPU_SUB_S(f[25], f[21]);
        f[12] = floatOf(READ32(dir + 4u));
        f[1] = FPU_MUL_S(f[20], f[0]);
        f[15] = floatOf(READ32(dir));
        f[7] = FPU_MUL_S(f[18], f[4]);
        WRITE32(frame + 0x14u, bitsOf(f[0]));
        f[3] = FPU_MUL_S(f[20], f[2]);
        WRITE32(frame + 0x10u, bitsOf(f[2]));
        f[5] = FPU_MUL_S(f[19], f[4]);
        WRITE32(frame + 0x18u, bitsOf(f[4]));
        f[6] = FPU_MUL_S(f[18], f[0]);
        WRITE32(frame, bitsOf(f[18]));
        f[7] = FPU_SUB_S(f[3], f[7]);
        WRITE32(frame + 4u, bitsOf(f[19]));
        f[5] = FPU_SUB_S(f[5], f[1]);
        WRITE32(frame + 8u, bitsOf(f[20]));
        f[2] = FPU_MUL_S(f[19], f[2]);
        f[3] = FPU_MUL_S(f[7], f[12]);
        WRITE32(frame + 0x24u, bitsOf(f[7]));
        f[0] = FPU_MUL_S(f[5], f[15]);
        WRITE32(frame + 0x20u, bitsOf(f[5]));
        f[6] = FPU_SUB_S(f[6], f[2]);
        f[1] = FPU_MUL_S(f[5], f[21]);
        f[0] = FPU_ADD_S(f[0], f[3]);
        f[4] = FPU_MUL_S(f[6], f[16]);
        WRITE32(frame + 0x28u, bitsOf(f[6]));
        f[2] = FPU_MUL_S(f[7], f[22]);
        f[27] = floatOf(0u);
        f[3] = FPU_ADD_S(f[0], f[4]);
        f[1] = FPU_ADD_S(f[1], f[2]);
        f[0] = FPU_MUL_S(f[6], f[24]);
        fcr31 = conditionBit(fcr31, FPU_C_EQ_S(f[3], f[27]));
        f[4] = FPU_ADD_S(f[1], f[0]);
        if ((fcr31 & 0x800000u) != 0u)
        {
            result = 0u; // parallel to the plane
        }
        else
        {
            f[10] = floatOf(READ32(p));
            f[11] = floatOf(READ32(p + 4u));
            f[0] = FPU_MUL_S(f[5], f[10]);
            f[8] = floatOf(READ32(p + 8u));
            f[1] = FPU_MUL_S(f[7], f[11]);
            f[2] = FPU_MUL_S(f[6], f[8]);
            f[0] = FPU_ADD_S(f[0], f[1]);
            f[0] = FPU_ADD_S(f[0], f[2]);
            f[0] = FPU_SUB_S(f[4], f[0]);
            f[2] = divS(f[0], f[3], fcr31);
            fcr31 = conditionBit(fcr31, FPU_C_OLT_S(f[2], f[27]));
            result = 0u;
            if ((fcr31 & 0x800000u) == 0u)
            {
                // The point on the plane, and the first two edge tests.
                f[0] = FPU_MUL_S(f[2], f[16]);
                f[1] = FPU_MUL_S(f[2], f[15]);
                f[2] = FPU_MUL_S(f[2], f[12]);
                f[17] = FPU_ADD_S(f[8], f[0]);
                f[15] = FPU_ADD_S(f[10], f[1]);
                f[16] = FPU_ADD_S(f[11], f[2]);
                f[3] = FPU_SUB_S(f[25], f[9]);
                WRITE32(frame + 0x38u, bitsOf(f[17]));
                f[6] = FPU_SUB_S(f[26], f[14]);
                WRITE32(frame + 0x30u, bitsOf(f[15]));
                f[12] = FPU_SUB_S(f[25], f[15]);
                WRITE32(frame + 0x34u, bitsOf(f[16]));
                f[0] = FPU_SUB_S(f[26], f[17]);
                WRITE32(frame, bitsOf(f[3]));
                f[10] = FPU_SUB_S(f[23], f[13]);
                WRITE32(frame + 8u, bitsOf(f[6]));
                f[11] = FPU_SUB_S(f[23], f[16]);
                WRITE32(frame + 0x10u, bitsOf(f[12]));
                f[1] = FPU_SUB_S(f[14], f[17]);
                WRITE32(frame + 0x18u, bitsOf(f[0]));
                f[9] = FPU_SUB_S(f[9], f[15]);
                WRITE32(frame + 4u, bitsOf(f[10]));
                f[7] = FPU_SUB_S(f[13], f[16]);
                WRITE32(frame + 0x14u, bitsOf(f[11]));
                f[13] = FPU_MUL_S(f[3], f[0]);
                f[4] = FPU_MUL_S(f[6], f[12]);
                f[8] = FPU_MUL_S(f[20], f[9]);
                f[2] = FPU_MUL_S(f[18], f[1]);
                f[0] = FPU_MUL_S(f[10], f[0]);
                f[6] = FPU_MUL_S(f[6], f[11]);
                f[1] = FPU_MUL_S(f[19], f[1]);
                f[5] = FPU_MUL_S(f[20], f[7]);
                f[14] = FPU_SUB_S(f[8], f[2]);
                f[4] = FPU_SUB_S(f[4], f[13]);
                f[0] = FPU_SUB_S(f[0], f[6]);
                f[8] = FPU_SUB_S(f[1], f[5]);
                WRITE32(frame + 0x44u, bitsOf(f[14]));
                f[7] = FPU_MUL_S(f[18], f[7]);
                WRITE32(frame + 0x54u, bitsOf(f[4]));
                f[9] = FPU_MUL_S(f[19], f[9]);
                WRITE32(frame + 0x50u, bitsOf(f[0]));
                f[3] = FPU_MUL_S(f[3], f[11]);
                WRITE32(frame + 0x40u, bitsOf(f[8]));
                f[10] = FPU_MUL_S(f[10], f[12]);
                f[9] = FPU_SUB_S(f[7], f[9]);
                f[0] = FPU_MUL_S(f[8], f[0]);
                f[3] = FPU_SUB_S(f[3], f[10]);
                f[4] = FPU_MUL_S(f[14], f[4]);
                WRITE32(frame + 0x48u, bitsOf(f[9]));
                f[1] = FPU_MUL_S(f[9], f[3]);
                f[0] = FPU_ADD_S(f[0], f[4]);
                f[0] = FPU_ADD_S(f[0], f[1]);
                fcr31 = conditionBit(fcr31, FPU_C_OLT_S(f[0], f[27]));
                WRITE32(frame + 0x58u, bitsOf(f[3]));
                if ((fcr31 & 0x800000u) == 0u)
                {
                    // The third edge.
                    f[2] = FPU_SUB_S(f[21], f[25]);
                    f[0] = FPU_SUB_S(f[24], f[26]);
                    f[6] = FPU_SUB_S(f[21], f[15]);
                    f[1] = FPU_SUB_S(f[24], f[17]);
                    WRITE32(frame, bitsOf(f[2]));
                    f[4] = FPU_SUB_S(f[22], f[16]);
                    WRITE32(frame + 8u, bitsOf(f[0]));
                    f[5] = FPU_SUB_S(f[22], f[23]);
                    WRITE32(frame + 0x10u, bitsOf(f[6]));
                    f[7] = FPU_MUL_S(f[2], f[1]);
                    WRITE32(frame + 0x18u, bitsOf(f[1]));
                    f[3] = FPU_MUL_S(f[0], f[6]);
                    WRITE32(frame + 0x14u, bitsOf(f[4]));
                    f[0] = FPU_MUL_S(f[0], f[4]);
                    WRITE32(frame + 4u, bitsOf(f[5]));
                    f[1] = FPU_MUL_S(f[5], f[1]);
                    f[2] = FPU_MUL_S(f[2], f[4]);
                    f[3] = FPU_SUB_S(f[3], f[7]);
                    f[1] = FPU_SUB_S(f[1], f[0]);
                    f[5] = FPU_MUL_S(f[5], f[6]);
                    f[4] = FPU_MUL_S(f[14], f[3]);
                    WRITE32(frame + 0x54u, bitsOf(f[3]));
                    f[0] = FPU_MUL_S(f[8], f[1]);
                    WRITE32(frame + 0x50u, bitsOf(f[1]));
                    f[2] = FPU_SUB_S(f[2], f[5]);
                    f[0] = FPU_ADD_S(f[0], f[4]);
                    f[1] = FPU_MUL_S(f[9], f[2]);
                    f[0] = FPU_ADD_S(f[0], f[1]);
                    fcr31 = conditionBit(fcr31, FPU_C_OLT_S(f[0], f[27]));
                    WRITE32(frame + 0x58u, bitsOf(f[2]));
                    if ((fcr31 & 0x800000u) == 0u)
                    {
                        // Inside: the point and the normal to the callers that want them.
                        if (hasHit)
                        {
                            WRITE32(hit + 8u, bitsOf(f[17]));
                            WRITE32(hit, bitsOf(f[15]));
                            WRITE32(hit + 4u, bitsOf(f[16]));
                        }
                        f[0] = floatOf(READ32(frame + 0x20u));
                        if (hasNormal)
                        {
                            f[2] = floatOf(READ32(frame + 0x24u));
                            f[1] = floatOf(READ32(frame + 0x28u));
                            WRITE32(normal, bitsOf(f[0]));
                            WRITE32(normal + 8u, bitsOf(f[1]));
                            WRITE32(normal + 4u, bitsOf(f[2]));
                        }
                        result = 1u;
                    }
                }
            }
        }
        // 0x209ae0
        f[27] = floatOf(READ32(frame + 0x98u));
        f[26] = floatOf(READ32(frame + 0x90u));
        f[25] = floatOf(READ32(frame + 0x88u));
        f[24] = floatOf(READ32(frame + 0x80u));
        f[23] = floatOf(READ32(frame + 0x78u));
        f[22] = floatOf(READ32(frame + 0x70u));
        f[21] = floatOf(READ32(frame + 0x68u));
        f[20] = floatOf(READ32(frame + 0x60u));
        for (int i = 0; i < 28; ++i)
            ctx->f[i] = f[i];
        ctx->fcr31 = fcr31;
        SET_GPR_U64(ctx, 2, result);
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(frame + 0xA0u));
        returnToCaller(ctx);
    }

    // ---- quaternionToMatrix (0x2b3f90)
    //
    // quaternionToMatrix(m, q): the rotation matrix of a quaternion, scaled
    // by 2 / |q|^2 (a zero quaternion divides by zero: the recompiled div.s
    // gives an infinity and sets the DZ flag).

    void nativeQuaternionToMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t m = GPR_U32(ctx, 4), q = GPR_U32(ctx, 5);
        uint32_t fcr31 = ctx->fcr31;
        float f0, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12;
        f4 = floatOf(READ32(q));
        f8 = floatOf(READ32(q + 4u));
        f1 = FPU_MUL_S(f4, f4);
        f2 = floatOf(READ32(q + 8u));
        f0 = FPU_MUL_S(f8, f8);
        f6 = floatOf(READ32(q + 0xCu));
        f5 = FPU_MUL_S(f2, f2);
        f3 = floatOf(0x40000000u); // 2
        f7 = FPU_MUL_S(f6, f6);
        f10 = floatOf(0x3F800000u); // 1
        f1 = FPU_ADD_S(f1, f0);
        f0 = floatOf(0u);
        WRITE32(m + 0x3Cu, bitsOf(f10));
        f1 = FPU_ADD_S(f1, f5);
        WRITE32(m + 0x30u, bitsOf(f0));
        WRITE32(m + 0x2Cu, bitsOf(f0));
        WRITE32(m + 0x1Cu, bitsOf(f0));
        f1 = FPU_ADD_S(f1, f7);
        WRITE32(m + 0xCu, bitsOf(f0));
        WRITE32(m + 0x38u, bitsOf(f0));
        WRITE32(m + 0x34u, bitsOf(f0));
        f3 = divS(f3, f1, fcr31);
        f0 = FPU_MUL_S(f2, f3);
        f1 = FPU_MUL_S(f8, f3);
        f3 = FPU_MUL_S(f4, f3);
        f2 = FPU_MUL_S(f2, f0);
        f5 = FPU_MUL_S(f8, f1);
        f7 = FPU_MUL_S(f4, f3);
        f11 = FPU_MUL_S(f6, f0);
        f9 = FPU_MUL_S(f4, f0);
        f12 = FPU_ADD_S(f7, f5);
        f3 = FPU_MUL_S(f6, f3);
        f8 = FPU_MUL_S(f8, f0);
        f6 = FPU_MUL_S(f6, f1);
        f7 = FPU_ADD_S(f7, f2);
        f4 = FPU_MUL_S(f4, f1);
        f5 = FPU_ADD_S(f5, f2);
        f0 = FPU_ADD_S(f9, f6);
        f1 = FPU_SUB_S(f4, f11);
        f2 = FPU_SUB_S(f8, f3);
        f5 = FPU_SUB_S(f10, f5);
        WRITE32(m + 0x20u, bitsOf(f0));
        f7 = FPU_SUB_S(f10, f7);
        WRITE32(m + 0x10u, bitsOf(f1));
        f10 = FPU_SUB_S(f10, f12);
        WRITE32(m + 0x24u, bitsOf(f2));
        f4 = FPU_ADD_S(f4, f11);
        WRITE32(m, bitsOf(f5));
        f9 = FPU_SUB_S(f9, f6);
        WRITE32(m + 0x14u, bitsOf(f7));
        f8 = FPU_ADD_S(f8, f3);
        WRITE32(m + 0x28u, bitsOf(f10));
        WRITE32(m + 4u, bitsOf(f4));
        WRITE32(m + 8u, bitsOf(f9));
        WRITE32(m + 0x18u, bitsOf(f8));
        ctx->f[0] = f0;
        ctx->f[1] = f1;
        ctx->f[2] = f2;
        ctx->f[3] = f3;
        ctx->f[4] = f4;
        ctx->f[5] = f5;
        ctx->f[6] = f6;
        ctx->f[7] = f7;
        ctx->f[8] = f8;
        ctx->f[9] = f9;
        ctx->f[10] = f10;
        ctx->f[11] = f11;
        ctx->f[12] = f12;
        ctx->fcr31 = fcr31;
        SET_GPR_U64(ctx, 1, 0x3F800000u);
        returnToCaller(ctx);
    }

    // ---- bgPortalBackFaceTest (0x257860)
    //
    // bgPortalBackFaceTest(room, position, portal): 1 when the position is
    // on the portal's open side (the plane test's sense depends on whether
    // the portal belongs to the room), else 0. A leaf; it keeps the offset
    // from the portal in a 16-byte frame.

    void nativeBgPortalBackFaceTest(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t position = GPR_U32(ctx, 5), portal = GPR_U32(ctx, 6);
        const uint32_t frame = GPR_U32(ctx, 29) - 0x10u;
        uint32_t fcr31 = ctx->fcr31;
        float f0, f1, f2, f3, f4, f5, f6;
        f0 = floatOf(READ32(portal + 0x18u));
        f1 = floatOf(READ32(portal + 0x1Cu));
        f4 = floatOf(READ32(position + 4u));
        f6 = floatOf(READ32(position));
        f4 = FPU_SUB_S(f4, f1);
        f3 = floatOf(READ32(position + 8u));
        f6 = FPU_SUB_S(f6, f0);
        f5 = floatOf(READ32(portal + 0x20u));
        f0 = floatOf(READ32(portal + 8u));
        f2 = floatOf(READ32(portal + 0xCu));
        f3 = FPU_SUB_S(f3, f5);
        f0 = FPU_MUL_S(f6, f0);
        f1 = floatOf(READ32(portal + 0x10u));
        f2 = FPU_MUL_S(f4, f2);
        uint64_t v0 = sext32(READ32(portal));
        f1 = FPU_MUL_S(f3, f1);
        WRITE32(frame, bitsOf(f6));
        WRITE32(frame + 4u, bitsOf(f4));
        f0 = FPU_ADD_S(f0, f2);
        WRITE32(frame + 8u, bitsOf(f3));
        const bool otherRoom = v0 != GPR_U64(ctx, 4); // the whole register, as the original compares it
        f1 = FPU_ADD_S(f0, f1);
        f0 = floatOf(0u);
        v0 = 1u;
        fcr31 = conditionBit(fcr31, otherRoom ? FPU_C_OLT_S(f1, f0) : FPU_C_OLT_S(f0, f1));
        if ((fcr31 & 0x800000u) == 0u)
            v0 = 0u; // bc1fl
        ctx->f[0] = f0;
        ctx->f[1] = f1;
        ctx->f[2] = f2;
        ctx->f[3] = f3;
        ctx->f[4] = f4;
        ctx->f[5] = f5;
        ctx->f[6] = f6;
        ctx->fcr31 = fcr31;
        SET_GPR_U64(ctx, 2, v0);
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(frame + 0x10u));
        returnToCaller(ctx);
    }

    // ---- The boot-time differential test
    //
    // Each case: a random context and random guest scratch memory; the
    // original runs on one copy, the native version on another from the same
    // memory, then every context word and every scratch byte are compared.
    // Words where both sides hold a NaN count separately and do not fail a
    // function: which operand's NaN an SSE operation returns depends on the
    // order the compiler puts commutative operands in, and the recompiled
    // originals themselves get no fixed order (the PS2 FPU has no NaNs).

    struct TestRng
    {
        uint32_t state;
        uint32_t next()
        {
            state ^= state << 13;
            state ^= state >> 17;
            state ^= state << 5;
            return state;
        }
    };

    // Guest scratch: the HLE kernel's callback-stack arena, unused before the
    // game runs; saved and restored around the test. Operand slots at the
    // bottom, the lighting test's objects above them, the stack ($sp at the
    // top) above those: 0x2C0 bytes for obInstLightUpdate's frame plus its
    // callees', or 0x2A0 for the deepest math path (a huge sinf argument
    // through __kernel_rem_pio2f).
    constexpr uint32_t kScratch = 0x000C0000u;
    constexpr uint32_t kScratchBytes = 0x1A00u; // the deepest callee stack (sinf/cosf) stays above the data
    constexpr uint32_t kOperandBytes = 0x180u; // five 64-byte slots, plus room to shift one
    constexpr uint32_t kTestReturn = 0x00012340u; // $ra: no function there, so a run ends on it
    constexpr uint32_t kGameGp = 0x003B47F0u;
    constexpr uint32_t kLibVersion = 0x003AB118u; // fdlibm _LIB_VERSION: sqrtf's error handling
    constexpr int kTestCases = 10000;

    // The lighting tests' objects (offsets into the scratch), laid out as
    // obInstLightUpdate and bglightGet read them.
    constexpr uint32_t kLightObject = 0x200u;          // the instance: pointers at +0, +4, +0x18, +0x1C, +0xF4
    constexpr uint32_t kLightModel = 0x300u;           // its model: the matrix count at +4
    constexpr uint32_t kLightDef = 0x320u;             // its definition: type +8, kind +0xC, position +0x30, yaw +0x4C
    constexpr uint32_t kLightMatrices = 0x560u;        // up to three 64-byte matrices
    constexpr uint32_t kLightBlock = 0x640u;           // the light block written per matrix (0x40 each)
    constexpr uint32_t kLightColours = 0x700u;         // the four colours written
    constexpr uint32_t kLightRecords = 0x740u;         // the level's lights (0xA0 bytes each, six)
    constexpr uint32_t kLightRecordBytes = 0xA0u;
    constexpr uint32_t kLightRecordCount = 6u;
    constexpr uint32_t kLightFlash = 0xB00u;           // the bullet flash the stub returns
    constexpr uint32_t kLightCharacter = 0xB40u;       // a character's entry: position +0x98, matrix pointer +0x6EC
    constexpr uint32_t kLightCharacterMatrix = 0x1240u;
    constexpr uint32_t kLightDataEnd = 0x1280u;
    constexpr uint32_t kLightMaxMatrices = 3u;

    // Game globals the two lighting functions read, randomised per case and
    // put back after the test, and the static records bglightGet writes.
    constexpr uint32_t kLevelAddress = kGameGp - 0x6090u;            // the level number (0x66 keeps the original)
    constexpr uint32_t kLightBlendAddress = kGameGp - 0x7CB4u;        // three per-frame blend factors
    constexpr uint32_t kCharacterTableAddress = kGameGp - 0x4DD0u;    // the character entries' base
    constexpr uint32_t kLightHashBaseAddress = kGameGp - 0x5D6Cu;     // bglightGet: instance hash base, light count, far distance
    constexpr uint32_t kLightDivisorAddress = kGameGp - 0x4BA0u;      // bglightGet: frames per refresh
    constexpr uint32_t kFrameCounterAddress = kGameGp - 0x6258u;
    constexpr uint32_t kLightTable = 0x01FC5F18u;                     // bglightGet: the level's light pointers
    constexpr uint32_t kLightTableEntries = 8u;
    constexpr uint32_t kLightStatic = 0x01FC63C8u;                    // bglightGet: its three candidate records
    constexpr uint32_t kLightStaticBytes = 0x48u;
    constexpr uint32_t kBulletGetClosest = 0x25BC88u, kCalcAmbientLight = 0x25AAE0u; // stood in for by the stub

    struct SavedRegion
    {
        uint32_t address, bytes;
    };
    constexpr SavedRegion kTestGlobals[] = {
        {kLibVersion, 4u},          {kLevelAddress, 4u},         {kLightBlendAddress, 12u},
        {kCharacterTableAddress, 4u}, {kLightHashBaseAddress, 12u}, {kLightDivisorAddress, 4u},
        {kFrameCounterAddress, 4u}, {kLightTable, kLightTableEntries * 4u}, {kLightStatic, kLightStaticBytes},
    };
    constexpr uint32_t kTestGlobalBytes = 4u + 4u + 12u + 4u + 12u + 4u + 4u + kLightTableEntries * 4u + kLightStaticBytes;

    uint32_t g_testLibVersion = 0;

    void writeTestWord(uint8_t *rdram, uint32_t address, uint32_t value) { std::memcpy(rdram + address, &value, sizeof(value)); }

    uint32_t readTestWord(const uint8_t *rdram, uint32_t address)
    {
        uint32_t value;
        std::memcpy(&value, rdram + address, sizeof(value));
        return value;
    }

    uint32_t randomFloatBits(TestRng &rng)
    {
        const uint32_t pick = rng.next();
        if ((pick & 3u) != 0u) // everyday values, three times in four
            return bitsOf(static_cast<float>(static_cast<int32_t>(pick >> 16) - 32768) * (1.0f / 1024.0f));
        const uint32_t sign = pick & 0x80000000u, bits = rng.next();
        switch ((pick >> 2) & 7u)
        {
        case 0: return sign;                                                         // +-0
        case 1: return sign | 0x7F800000u;                                           // +-Inf
        case 2: return sign | 0x7F800000u | (bits & 0x7FFFFFu) | 1u;                 // NaN, quiet or signalling
        case 3: return sign | (bits & 0x7FFFFFu) | 1u;                               // subnormal
        case 4: return sign | ((0xF0u + (bits >> 23) % 15u) << 23) | (bits & 0x7FFFFFu); // huge
        case 5: return sign | ((1u + (bits >> 23) % 16u) << 23) | (bits & 0x7FFFFFu);    // tiny
        default: return bits;                                                        // any bits
        }
    }

    // sinf/cosf arguments: every reduction path, near multiples of pi/2
    // (cancellation: second and third steps), and large ones (the original).
    uint32_t randomAngleBits(TestRng &rng)
    {
        const uint32_t pick = rng.next(), sign = rng.next() & 0x80000000u;
        switch (pick % 8u)
        {
        case 0: return randomFloatBits(rng);
        case 1: return sign | rng.next() % 0x3F490FD9u;                              // |x| <= pi/4
        case 2: return sign | (0x3F490FD9u + rng.next() % (0x4016CBE4u - 0x3F490FD9u)); // < 3pi/4
        case 3: return sign | (0x3FC90FD0u + rng.next() % 32u);                       // next to pi/2
        case 4:
        case 5:
        {
            const float n = static_cast<float>(1u + rng.next() % 160u);
            return sign | (bitsOf(n * 1.57079632679489661923f) + rng.next() % 9u - 4u);
        }
        case 6: return sign | (0x4016CBE4u + rng.next() % (0x43490F81u - 0x4016CBE4u)); // up to 2^7*pi/2
        default: return sign | (0x43490F81u + rng.next() % (0x7F800000u - 0x43490F81u)); // larger
        }
    }

    // sqrtf arguments. No finite negatives: their error path sets errno,
    // outside the scratch memory.
    uint32_t randomSqrtBits(TestRng &rng)
    {
        const uint32_t pick = rng.next();
        switch (pick % 8u)
        {
        case 0: return 0u;
        case 1: return 0x7F800000u;
        case 2: return (pick >> 3) & 0x7FFFFFu;                                       // subnormal
        case 3: return (rng.next() & 0x80000000u) | 0x7F800000u | ((pick >> 3) & 0x7FFFFFu) | 1u; // NaN
        case 4: return 0x80000000u;                                                   // -0
        default: return rng.next() % 0x7F800000u;
        }
    }

    uint64_t randomWord64(TestRng &rng)
    {
        static const uint64_t kSpecial[] = {0u, 1u, ~0ull, 0x7FFFFFFFu, 0x80000000u, 0xFFFFFFFFu,
                                            0x100000000ull, 0x8000000000000000ull, 0x7FFFFFFFFFFFFFFFull,
                                            0xFFFFFFFF80000000ull};
        const uint32_t pick = rng.next() % 32u;
        if (pick < 10u)
            return kSpecial[pick];
        const uint64_t value = static_cast<uint64_t>(rng.next()) << 32 | rng.next();
        return pick < 20u ? sext32(value) : value;
    }

    void setFloat(R5900Context &c, int reg, uint32_t bits) { std::memcpy(&c.f[reg], &bits, sizeof(bits)); }

    // Pointer arguments: one of five slots, now and then a word or three off
    // (partly overlapping operands) or with junk above bit 31, which the
    // originals' 32-bit address arithmetic drops.
    void setOperand(TestRng &rng, R5900Context &c, int reg)
    {
        R5900Context *ctx = &c;
        uint32_t address = kScratch + (rng.next() % 5u) * 64u;
        if ((rng.next() & 7u) == 0u)
            address += (1u + rng.next() % 3u) * 4u;
        const uint64_t high = (rng.next() & 7u) == 0u ? static_cast<uint64_t>(rng.next()) << 32 : 0u;
        SET_GPR_U64(ctx, reg, high | address);
    }

    void setupOneOperand(TestRng &rng, R5900Context &c, uint8_t *) { setOperand(rng, c, 4); }

    void setupTwoOperands(TestRng &rng, R5900Context &c, uint8_t *)
    {
        setOperand(rng, c, 4);
        setOperand(rng, c, 5);
    }

    void setupThreeOperands(TestRng &rng, R5900Context &c, uint8_t *)
    {
        setOperand(rng, c, 4);
        setOperand(rng, c, 5);
        setOperand(rng, c, 6);
    }

    void setupFloatArgument(TestRng &rng, R5900Context &c, uint8_t *) { setFloat(c, 12, randomFloatBits(rng)); }

    void setupAngles(TestRng &rng, R5900Context &c, uint8_t *)
    {
        for (int reg = 12; reg <= 13; ++reg)
        {
            const float degrees = static_cast<float>(static_cast<int32_t>(rng.next() % 1441u) - 720) +
                                  static_cast<float>(rng.next() % 1024u) / 1024.0f;
            setFloat(c, reg, (rng.next() & 3u) != 0u ? bitsOf(degrees) : randomFloatBits(rng));
        }
    }

    void setupWords64(TestRng &rng, R5900Context &c, uint8_t *)
    {
        R5900Context *ctx = &c;
        SET_GPR_U64(ctx, 4, randomWord64(rng));
        SET_GPR_U64(ctx, 5, randomWord64(rng));
    }

    void setupAngle(TestRng &rng, R5900Context &c, uint8_t *) { setFloat(c, 12, randomAngleBits(rng)); }

    void setupSqrt(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        setFloat(c, 12, randomSqrtBits(rng));
        const uint32_t version = (rng.next() & 1u) != 0u ? 0xFFFFFFFFu : g_testLibVersion; // _IEEE_ or the game's
        std::memcpy(rdram + kLibVersion, &version, sizeof(version));
    }

    // ---- The lighting tests' inputs

    // The level's lights and bglightGet's globals: a light table of
    // records in the scratch (some repeated), a count of up to seven, the
    // hash base, the refresh divisor (zero skips the division) and the
    // frame counter. Half the time the lights sit within a few units of the
    // position, so the cached pair is kept rather than searched again.
    void setupLightLevel(TestRng &rng, uint8_t *rdram, uint32_t positionAddress)
    {
        for (uint32_t offset = kLightRecords; offset < kLightRecords + kLightRecordCount * kLightRecordBytes; offset += 4u)
            writeTestWord(rdram, kScratch + offset, randomFloatBits(rng));
        if ((rng.next() & 1u) != 0u)
        {
            for (uint32_t i = 0; i < kLightRecordCount; ++i)
                for (uint32_t axis = 0; axis < 3u; ++axis)
                {
                    const float near = floatOf(readTestWord(rdram, positionAddress + axis * 4u)) +
                                       static_cast<float>(static_cast<int32_t>(rng.next() % 8193u) - 4096) * (1.0f / 256.0f);
                    writeTestWord(rdram, kScratch + kLightRecords + i * kLightRecordBytes + 0x44u + axis * 4u, bitsOf(near));
                }
        }
        for (uint32_t i = 0; i < kLightTableEntries; ++i)
            writeTestWord(rdram, kLightTable + i * 4u, kScratch + kLightRecords + (rng.next() % kLightRecordCount) * kLightRecordBytes);
        writeTestWord(rdram, kLightHashBaseAddress, rng.next());
        writeTestWord(rdram, kLightHashBaseAddress + 4u, rng.next() % 8u);
        writeTestWord(rdram, kLightHashBaseAddress + 8u, randomFloatBits(rng));
        static const uint32_t kDivisors[] = {0u, 1u, 8u, 0xFFFFFFFDu};
        const uint32_t pick = rng.next() % 5u;
        writeTestWord(rdram, kLightDivisorAddress, pick < 4u ? kDivisors[pick] : rng.next());
        writeTestWord(rdram, kFrameCounterAddress, rng.next());
    }

    // A cached light index for the definition: none, or one of the table's.
    uint16_t randomLightIndex(TestRng &rng)
    {
        const uint32_t pick = rng.next() % 10u;
        return pick < 2u ? 0xFFFFu : static_cast<uint16_t>(pick - 2u);
    }

    // bglightGet(inst, position, &first, &second)
    void setupBglightGet(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        R5900Context *ctx = &c;
        setOperand(rng, c, 5);
        setOperand(rng, c, 6);
        setOperand(rng, c, 7);
        setupLightLevel(rng, rdram, GPR_U32(ctx, 5));
        const uint64_t high = (rng.next() & 7u) == 0u ? static_cast<uint64_t>(rng.next()) << 32 : 0u;
        SET_GPR_U64(ctx, 4, high | (kScratch + kLightObject));
        writeTestWord(rdram, kScratch + kLightObject + 0xF4u, kScratch + kLightDef);
        const uint32_t indices = randomLightIndex(rng) | static_cast<uint32_t>(randomLightIndex(rng)) << 16;
        writeTestWord(rdram, kScratch + kLightDef + 0x220u, indices);
    }

    // obInstLightUpdate(inst): the instance, its model and definition, up to
    // three matrices (or none), the lights, the blend factors, a character
    // entry for the character kinds, and now and then the level that keeps
    // the original.
    void setupLightUpdate(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        R5900Context *ctx = &c;
        for (uint32_t offset = kLightObject; offset < kLightDataEnd; offset += 4u)
            writeTestWord(rdram, kScratch + offset, randomFloatBits(rng));
        const uint32_t object = kScratch + kLightObject, def = kScratch + kLightDef;
        setupLightLevel(rng, rdram, def + 0x30u);
        writeTestWord(rdram, kLevelAddress, (rng.next() % 8u) == 0u ? 0x66u : rng.next());
        for (uint32_t i = 0; i < 3u; ++i)
            writeTestWord(rdram, kLightBlendAddress + i * 4u, randomFloatBits(rng));
        writeTestWord(rdram, object, kScratch + kLightModel);
        writeTestWord(rdram, object + 4u, (rng.next() % 4u) == 0u ? 0u : kScratch + kLightMatrices);
        writeTestWord(rdram, object + 0x18u, kScratch + kLightBlock);
        writeTestWord(rdram, object + 0x1Cu, kScratch + kLightColours);
        for (uint32_t slot = 0x20u; slot <= 0x24u; slot += 4u)
            writeTestWord(rdram, object + slot,
                          (rng.next() & 1u) != 0u ? kScratch + kLightRecords + (rng.next() % kLightRecordCount) * kLightRecordBytes : 0u);
        writeTestWord(rdram, object + 0xF4u, def);
        writeTestWord(rdram, kScratch + kLightModel + 4u, static_cast<uint32_t>(static_cast<int32_t>(rng.next() % 5u) - 1));
        static const uint32_t kTypes[] = {0x800u, 8u, 0x1000u};
        uint32_t pick = rng.next() % 4u;
        writeTestWord(rdram, def + 8u, pick < 3u ? kTypes[pick] : rng.next());
        pick = rng.next() % 6u;
        const uint32_t kind = pick < 4u ? 0xC9u + pick : rng.next();
        writeTestWord(rdram, def + 0xCu, kind);
        writeTestWord(rdram, def + 0x220u, randomLightIndex(rng) | static_cast<uint32_t>(randomLightIndex(rng)) << 16);
        // Level 0x66 (the original, on both sides) lights from a fixed table by this index: none, or a small one.
        writeTestWord(rdram, def + 0x240u, (rng.next() % 4u) == 0u ? 0xFFFFFFFFu : rng.next() % 48u);
        // The character entry: the table base that puts this kind's entry in the scratch.
        writeTestWord(rdram, kCharacterTableAddress, (kScratch + kLightCharacter) - (kind * 0x71Cu + 0xFFFA6B04u));
        writeTestWord(rdram, kScratch + kLightCharacter + 0x6ECu, kScratch + kLightCharacterMatrix);
        const uint64_t high = (rng.next() & 7u) == 0u ? static_cast<uint64_t>(rng.next()) << 32 : 0u;
        SET_GPR_U64(ctx, 4, high | object);
    }

    // hittestLineTri(p, dir, v0, v1, v2, hit, normal): the two results are wanted or not.
    void setupHittest(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        R5900Context *ctx = &c;
        for (int reg = 4; reg <= 8; ++reg)
            setOperand(rng, c, reg);
        for (int reg = 9; reg <= 10; ++reg)
        {
            setOperand(rng, c, reg);
            if ((rng.next() & 1u) != 0u)
                SET_GPR_U64(ctx, reg, 0u);
        }
    }

    // bgPortalBackFaceTest(room, position, portal): the portal's room is this one half the time.
    void setupPortal(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        R5900Context *ctx = &c;
        setOperand(rng, c, 5);
        setOperand(rng, c, 6);
        if ((rng.next() & 1u) != 0u)
            SET_GPR_U64(ctx, 4, sext32(readTestWord(rdram, GPR_U32(ctx, 6))));
    }

    // Stands in for bgBulletGetClosest and obinstCalcAmbientLight in the
    // lighting test (they read the level's bullets and geometry). It is a
    // function of its arguments, so both sides see the same callee, and it
    // clobbers every caller-saved register and the stack below $sp, which
    // a native caller must not rely on either.
#if TS_NATIVE_MATH_VERBOSE
    int g_mathTraceCase = -1; // a harness sets it: that case's stub calls are printed
    bool g_mathTracing = false;
#endif

    void stubCallee(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t entry = ctx->pc, sp = GPR_U32(ctx, 29);
#if TS_NATIVE_MATH_VERBOSE
        if (g_mathTracing)
            std::fprintf(stderr, "[TS:math]   stub %06x a0=%08x a1=%08x a2=%08x sp=%08x\n", entry, GPR_U32(ctx, 4),
                         GPR_U32(ctx, 5), GPR_U32(ctx, 6), sp);
#endif
        // Seeded from guest state both runs see alike (the arguments are the
        // same in every case: the per-case frame counter decides the coin flips).
        TestRng rng{(entry * 0x9E3779B9u) ^ (GPR_U32(ctx, 4) * 0x85EBCA6Bu) ^ (GPR_U32(ctx, 5) * 0xC2B2AE35u) ^
                    GPR_U32(ctx, 6) ^ (sp << 7) ^ 0x5bd1e995u ^ (READ32(kFrameCounterAddress) * 0x27D4EB2Fu)};
        if (rng.state == 0u)
            rng.state = 1u;
        for (uint32_t offset = 4u; offset <= 0x40u; offset += 4u)
            WRITE32(sp - offset, rng.next());
        uint64_t v0 = randomWord64(rng);
        if (entry == kBulletGetClosest)
        {
            WRITE32(GPR_U32(ctx, 6), randomFloatBits(rng));
            v0 = (rng.next() & 1u) != 0u ? kScratch + kLightFlash : 0u;
        }
        else if (entry == kCalcAmbientLight)
        {
            for (uint32_t i = 0; i < 3u; ++i)
                WRITE32(GPR_U32(ctx, 5) + i * 4u, randomFloatBits(rng));
        }
        for (int reg : {1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 24, 25})
            SET_GPR_U64(ctx, reg, randomWord64(rng));
        SET_GPR_U64(ctx, 2, v0);
        for (int reg = 0; reg < 20; ++reg)
            setFloat(*ctx, reg, randomFloatBits(rng));
        ctx->fcr31 = rng.next();
        ctx->hi = randomWord64(rng);
        ctx->lo = randomWord64(rng);
        returnToCaller(ctx);
    }

    struct NativeMath
    {
        const char *name;
        uint32_t address;
        GuestFunction original, native;
        void (*setup)(TestRng &, R5900Context &, uint8_t *rdram);
        bool floats;       // float results: NaN payloads may differ (see above)
        bool stubCallees;  // the lighting stub stands in for the bullet and ambient lookups
        uint32_t extraBase, extraBytes; // static memory the function writes, compared like the scratch
    };

    // fabsf before sinf/cosf: __ieee754_rem_pio2f calls it; bglightGet and
    // the matrix helpers before obInstLightUpdate, which calls them.
    const NativeMath kNativeMath[] = {
        {"fabsf", 0x2DC5A0u, &fabsf_0x2dc5a0, &nativeFabsf, &setupFloatArgument, false},
        {"__muldi3", 0x2E4648u, &ps2___muldi3_0x2e4648, &nativeMuldi3, &setupWords64, false},
        {"anglediff", 0x284E38u, &anglediff_0x284e38, &nativeAnglediff, &setupAngles, true},
        {"sceVu0MulMatrix", 0x2D5E98u, &sceVu0MulMatrix_0x2d5e98, &nativeVu0MulMatrix, &setupThreeOperands, true},
        {"sceVu0CopyMatrix", 0x2D6120u, &sceVu0CopyMatrix_0x2d6120, &nativeVu0CopyMatrix, &setupTwoOperands, false},
        {"sceVu0UnitMatrix", 0x2D6188u, &sceVu0UnitMatrix_0x2d6188, &nativeVu0UnitMatrix, &setupOneOperand, true},
        {"sceVu0TransposeMatrix", 0x2D5F60u, &sceVu0TransposeMatrix_0x2d5f60, &nativeVu0TransposeMatrix,
         &setupTwoOperands, false},
        {"matrixVecRotAligned", 0x2B5638u, &matrixVecRotAligned_0x2b5638, &nativeMatrixVecRotAligned,
         &setupTwoOperands, true},
        {"matrixVec3Mul4Aligned", 0x2B5570u, &matrixVec3Mul4Aligned_0x2b5570, &nativeMatrixVec3Mul4Aligned,
         &setupThreeOperands, true},
        {"matrixVec3Mul4", 0x2B54F8u, &matrixVec3Mul4_0x2b54f8, &nativeMatrixVec3Mul4, &setupThreeOperands, true},
        {"matrixVecMul", 0x2B5428u, &matrixVecMul_0x2b5428, &nativeMatrixVecMul, &setupTwoOperands, true},
        {"sinf", 0x2D7398u, &sinf_0x2d7398, &nativeSinf, &setupAngle, true},
        {"cosf", 0x2D71C8u, &cosf_0x2d71c8, &nativeCosf, &setupAngle, true},
        {"sqrtf", 0x2D8398u, &sqrtf_0x2d8398, &nativeSqrtf, &setupSqrt, true},
        {"hittestLineTri", 0x209818u, &hittestLineTri_0x209818, &nativeHittestLineTri, &setupHittest, true},
        {"quaternionToMatrix", 0x2B3F90u, &quaternionToMatrix_0x2b3f90, &nativeQuaternionToMatrix, &setupTwoOperands,
         true},
        {"bgPortalBackFaceTest", 0x257860u, &bgPortalBackFaceTest_0x257860, &nativeBgPortalBackFaceTest, &setupPortal,
         true},
        {"bglightGet", 0x25A7D0u, &bglightGet_0x25a7d0, &nativeBglightGet, &setupBglightGet, true, false, kLightStatic,
         kLightStaticBytes},
        {"obInstLightUpdate", 0x25C160u, &obInstLightUpdate_0x25c160, &nativeObInstLightUpdate, &setupLightUpdate, true,
         true, kLightStatic, kLightStaticBytes},
    };
    constexpr uint32_t kNativeMathCount = sizeof(kNativeMath) / sizeof(kNativeMath[0]);

#if TS_NATIVE_MATH_SELFTEST
    TS_ALWAYS_INLINE __m128 randomVector(TestRng &rng)
    {
        return _mm_castsi128_ps(
            _mm_set_epi32(randomFloatBits(rng), randomFloatBits(rng), randomFloatBits(rng), randomFloatBits(rng)));
    }

    // The registers these functions read or save, new for every case. The
    // rest of the context is randomised once per function: a stray write
    // shows against it just the same.
    void randomInputs(TestRng &rng, R5900Context &c)
    {
        for (int i : {4, 5, 6, 7, 16, 17, 18})
            c.r[i] = _mm_set_epi32(rng.next(), rng.next(), rng.next(), rng.next());
        for (int i : {12, 13, 20, 21})
            setFloat(c, i, randomFloatBits(rng));
        c.vu0_vf[0] = (rng.next() & 7u) != 0u ? _mm_set_ps(1.0f, 0.0f, 0.0f, 0.0f) // as the hardware has it
                                               : randomVector(rng);
        c.vu0_acc = randomVector(rng);
        c.fcr31 = rng.next();
    }

    void randomContext(TestRng &rng, R5900Context &c)
    {
        for (int i = 1; i < 32; ++i)
            c.r[i] = _mm_set_epi32(rng.next(), rng.next(), rng.next(), rng.next());
        c.hi = static_cast<uint64_t>(rng.next()) << 32 | rng.next();
        c.lo = static_cast<uint64_t>(rng.next()) << 32 | rng.next();
        c.hi1 = static_cast<uint64_t>(rng.next()) << 32 | rng.next();
        c.lo1 = static_cast<uint64_t>(rng.next()) << 32 | rng.next();
        for (__m128 &vf : c.vu0_vf)
            vf = randomVector(rng);
        for (int i = 0; i < 32; ++i)
            setFloat(c, i, randomFloatBits(rng));
        c.branch_pc = rng.next();
        R5900Context *ctx = &c;
        SET_GPR_U32(ctx, 28, kGameGp);
        SET_GPR_U32(ctx, 29, kScratch + kScratchBytes);
        SET_GPR_U32(ctx, 31, kTestReturn);
        randomInputs(rng, c);
    }

    enum : uint8_t
    {
        kWordExact,
        kWordFloat,
        kWordIgnored,
        kWordGprLow,  // the low word of a general register: a NaN moved into it is a float
        kWordGprHigh, // its sign extension
    };

    // How each 32-bit word of R5900Context is compared.
    const uint8_t *contextWordKinds()
    {
        static uint8_t kinds[sizeof(R5900Context) / 4u];
        static bool built = false;
        if (!built)
        {
            auto mark = [](size_t offset, size_t bytes, uint8_t kind) {
                for (size_t word = offset / 4u; word < (offset + bytes) / 4u; ++word)
                    kinds[word] = kind;
            };
            for (size_t reg = 0; reg < 32u; ++reg)
            {
                mark(offsetof(R5900Context, r) + reg * 16u, 4u, kWordGprLow);
                mark(offsetof(R5900Context, r) + reg * 16u + 4u, 4u, kWordGprHigh);
            }
            mark(offsetof(R5900Context, vu0_vf), sizeof(R5900Context::vu0_vf), kWordFloat);
            mark(offsetof(R5900Context, vu0_acc), sizeof(R5900Context::vu0_acc), kWordFloat);
            mark(offsetof(R5900Context, f), sizeof(R5900Context::f), kWordFloat);
            // Read only for an exception raised in a delay slot; the original
            // leaves its last branch there, the native code nothing.
            mark(offsetof(R5900Context, branch_pc), sizeof(R5900Context::branch_pc), kWordIgnored);
            built = true;
        }
        return kinds;
    }

    struct Difference
    {
        uint32_t words = 0; // words that differ (NaN payloads aside)
        uint32_t nans = 0;  // float words holding different NaNs
        uint32_t where = 0, want = 0, got = 0;
    };

    TS_ALWAYS_INLINE bool isNanBits(uint32_t bits) { return (bits & 0x7FFFFFFFu) > 0x7F800000u; }
    TS_ALWAYS_INLINE uint32_t signWord(uint32_t bits) { return (bits & 0x80000000u) != 0u ? 0xFFFFFFFFu : 0u; }

    void compareWords(const uint8_t *want, const uint8_t *got, uint32_t bytes, const uint8_t *kinds, bool floats,
                      Difference &difference)
    {
        if (std::memcmp(want, got, bytes) == 0)
            return;
        bool nanHigh = false; // the previous word was a NaN in a general register
        for (uint32_t word = 0; word < bytes / 4u; ++word)
        {
            uint32_t a, b;
            std::memcpy(&a, want + word * 4u, sizeof(a));
            std::memcpy(&b, got + word * 4u, sizeof(b));
            const bool skipHigh = nanHigh;
            nanHigh = false;
            if (a == b)
                continue;
            const uint8_t kind = kinds ? kinds[word] : kWordFloat;
            if (kind == kWordIgnored || (kind == kWordGprHigh && skipHigh))
                continue;
            if (floats && kind == kWordFloat && isNanBits(a) && isNanBits(b))
            {
                ++difference.nans;
                continue;
            }
            if (floats && kind == kWordGprLow && isNanBits(a) && isNanBits(b) && word + 1u < bytes / 4u)
            {
                // A NaN moved into an integer register (mfc1, or a load of a
                // float), sign-extended: only its payload differs.
                uint32_t highA, highB;
                std::memcpy(&highA, want + word * 4u + 4u, sizeof(highA));
                std::memcpy(&highB, got + word * 4u + 4u, sizeof(highB));
                if (highA == signWord(a) && highB == signWord(b))
                {
                    ++difference.nans;
                    nanHigh = true;
                    continue;
                }
            }
            if (difference.words++ == 0u)
            {
                difference.where = word * 4u;
                difference.want = a;
                difference.got = b;
            }
        }
    }

    // Runs one guest call to its return. An original stopped at a checkpoint
    // (none should be: the clock is held) carries on where it stopped.
    void runGuest(PS2Runtime &runtime, uint8_t *rdram, R5900Context &ctx, GuestFunction function, uint32_t entry)
    {
        ctx.pc = entry;
        function(rdram, &ctx, &runtime);
        for (uint32_t n = 0; ctx.pc != kTestReturn && n < 100000u && runtime.hasFunction(ctx.pc); ++n)
            runtime.lookupFunction(ctx.pc)(rdram, &ctx, &runtime);
    }

    // The originals' loops and calls run scheduler checkpoints. Before the
    // game starts none may come due or charge cycles (that would run the
    // IOP and the EE timers): the fast path's bound is lifted for the test
    // and the clock put back afterwards. The base class is protected; a
    // C-style cast is the one conversion that may name it.
    class ClockHold
    {
    public:
        explicit ClockHold(PS2Runtime &runtime)
            : m_clock((EeCheckpointClock &)runtime.eeScheduler()), m_cycle(m_clock.m_eeCycle),
              m_fastUntil(m_clock.m_fastUntil),
              m_pending(m_clock.m_checkpointPending.exchange(false, std::memory_order_acq_rel))
        {
            m_clock.m_fastUntil = UINT64_MAX;
        }

        ~ClockHold()
        {
            m_clock.m_eeCycle = m_cycle;
            m_clock.m_fastUntil = m_fastUntil;
            if (m_pending)
                m_clock.m_checkpointPending.store(true, std::memory_order_release);
        }

    private:
        EeCheckpointClock &m_clock;
        uint64_t m_cycle, m_fastUntil;
        bool m_pending;
    };

    struct TestOutcome
    {
        uint32_t mismatches = 0, nanOnly = 0;
    };

    // The stub in place of the lighting callees for one test, the game's
    // entries put back afterwards.
    class StubbedCallees
    {
    public:
        StubbedCallees(PS2Runtime &runtime, bool active) : m_runtime(runtime), m_active(active)
        {
            if (!m_active)
                return;
            for (uint32_t i = 0; i < 2u; ++i)
            {
                m_saved[i] = m_runtime.lookupFunction(kAddresses[i]);
                m_runtime.replaceFunction(kAddresses[i], &stubCallee);
            }
        }

        ~StubbedCallees()
        {
            if (!m_active)
                return;
            for (uint32_t i = 0; i < 2u; ++i)
                m_runtime.replaceFunction(kAddresses[i], m_saved[i]);
        }

    private:
        static constexpr uint32_t kAddresses[2] = {kBulletGetClosest, kCalcAmbientLight};
        PS2Runtime &m_runtime;
        bool m_active;
        GuestFunction m_saved[2] = {nullptr, nullptr};
    };

    constexpr uint32_t kExtraBytesMax = 0x80u;

    TestOutcome testFunction(PS2Runtime &runtime, uint8_t *rdram, const NativeMath &fn)
    {
        static R5900Context base, want, got;
        static uint8_t before[kScratchBytes], wantMemory[kScratchBytes];
        static uint8_t beforeExtra[kExtraBytesMax], wantExtra[kExtraBytesMax];
        TestRng rng{0x2545F491u ^ fn.address};
        TestOutcome outcome;
        const uint32_t extraBytes = fn.extraBytes <= kExtraBytesMax ? fn.extraBytes : 0u;
        StubbedCallees stubs(runtime, fn.stubCallees);
        for (uint32_t offset = 0; offset < kScratchBytes; offset += 4u)
        {
            const uint32_t bits = rng.next();
            std::memcpy(rdram + kScratch + offset, &bits, sizeof(bits));
        }
        randomContext(rng, base);
        for (int i = 0; i < kTestCases; ++i)
        {
            randomInputs(rng, base);
            for (uint32_t offset = 0; offset < kOperandBytes; offset += 4u)
            {
                const uint32_t bits = randomFloatBits(rng);
                std::memcpy(rdram + kScratch + offset, &bits, sizeof(bits));
            }
            fn.setup(rng, base, rdram);
            std::memcpy(before, rdram + kScratch, kScratchBytes);
            std::memcpy(beforeExtra, rdram + fn.extraBase, extraBytes);
            std::memcpy(&want, &base, sizeof(base));
            std::memcpy(&got, &base, sizeof(base));
#if TS_NATIVE_MATH_VERBOSE
            g_mathTracing = i == g_mathTraceCase;
            if (g_mathTracing)
                std::fprintf(stderr, "[TS:math] %s case %d: the original\n", fn.name, i);
#endif
            runGuest(runtime, rdram, want, fn.original, fn.address);
            std::memcpy(wantMemory, rdram + kScratch, kScratchBytes);
            std::memcpy(wantExtra, rdram + fn.extraBase, extraBytes);
            std::memcpy(rdram + kScratch, before, kScratchBytes);
            std::memcpy(rdram + fn.extraBase, beforeExtra, extraBytes);
#if TS_NATIVE_MATH_VERBOSE
            if (g_mathTracing)
                std::fprintf(stderr, "[TS:math] %s case %d: the native\n", fn.name, i);
#endif
            runGuest(runtime, rdram, got, fn.native, fn.address);
#if TS_NATIVE_MATH_VERBOSE
            g_mathTracing = false;
#endif

            Difference regs, memory, extra;
            compareWords(reinterpret_cast<const uint8_t *>(&want), reinterpret_cast<const uint8_t *>(&got),
                         sizeof(R5900Context), contextWordKinds(), fn.floats, regs);
            compareWords(wantMemory, rdram + kScratch, kScratchBytes, nullptr, fn.floats, memory);
            compareWords(wantExtra, rdram + fn.extraBase, extraBytes, nullptr, fn.floats, extra);
            if (regs.words != 0u || memory.words != 0u || extra.words != 0u)
            {
                if (outcome.mismatches++ == 0u)
                {
                    const Difference &first = regs.words != 0u ? regs : memory.words != 0u ? memory : extra;
                    const uint32_t where = regs.words != 0u ? first.where
                                           : memory.words != 0u ? kScratch + first.where
                                                                : fn.extraBase + first.where;
                    uint32_t f12, f13;
                    std::memcpy(&f12, &base.f[12], sizeof(f12));
                    std::memcpy(&f13, &base.f[13], sizeof(f13));
                    R5900Context *in = &base;
                    std::fprintf(stderr,
                                 "[TS:math] %s case %d: %s0x%x want %08x got %08x (a0=%08x a1=%08x a2=%08x "
                                 "f12=%08x f13=%08x)\n",
                                 fn.name, i, regs.words != 0u ? "ctx+" : "mem ", where, first.want, first.got,
                                 GPR_U32(in, 4), GPR_U32(in, 5), GPR_U32(in, 6), f12, f13);
#if TS_NATIVE_MATH_VERBOSE
                    // Every differing word of this case (the context, then the memory).
                    auto dump = [&](const char *what, const uint8_t *a, const uint8_t *b, uint32_t bytes, uint32_t base) {
                        for (uint32_t word = 0; word < bytes / 4u; ++word)
                        {
                            uint32_t x, y;
                            std::memcpy(&x, a + word * 4u, sizeof(x));
                            std::memcpy(&y, b + word * 4u, sizeof(y));
                            if (x != y)
                                std::fprintf(stderr, "[TS:math]   %s+0x%x want %08x got %08x\n", what, base + word * 4u, x, y);
                        }
                    };
                    dump("ctx", reinterpret_cast<const uint8_t *>(&want), reinterpret_cast<const uint8_t *>(&got),
                         sizeof(R5900Context), 0u);
                    dump("mem", wantMemory, rdram + kScratch, kScratchBytes, kScratch);
                    dump("mem", wantExtra, rdram + fn.extraBase, extraBytes, fn.extraBase);
#endif
                }
            }
            else if (regs.nans != 0u || memory.nans != 0u || extra.nans != 0u)
            {
                ++outcome.nanOnly;
            }
        }
        return outcome;
    }

    void selfTest(PS2Runtime &runtime)
    {
        uint8_t *rdram = runtime.memory().getRDRAM();
        const auto start = std::chrono::steady_clock::now();
        static uint8_t saved[kScratchBytes], savedGlobals[kTestGlobalBytes];
        std::memcpy(saved, rdram + kScratch, kScratchBytes);
        std::memcpy(&g_testLibVersion, rdram + kLibVersion, sizeof(g_testLibVersion));
        uint32_t savedOffset = 0;
        for (const SavedRegion &region : kTestGlobals)
        {
            std::memcpy(savedGlobals + savedOffset, rdram + region.address, region.bytes);
            savedOffset += region.bytes;
        }
        {
            ClockHold hold(runtime);
            for (const NativeMath &fn : kNativeMath)
            {
                const TestOutcome outcome = testFunction(runtime, rdram, fn);
                g_tsNativeMath.mismatches += outcome.mismatches;
                g_tsNativeMath.nanPayloads += outcome.nanOnly;
                if (outcome.mismatches != 0u)
                {
                    runtime.replaceFunction(fn.address, fn.original); // the game keeps the original
                    ++g_tsNativeMath.failed;
                    if (!g_tsNativeMath.firstFailed)
                        g_tsNativeMath.firstFailed = fn.name;
                }
                std::fprintf(stderr, "[TS:math] %-22s %s: %d cases, %u differ, %u only in NaN payloads\n", fn.name,
                             outcome.mismatches != 0u ? "ORIGINAL" : "native", kTestCases, outcome.mismatches,
                             outcome.nanOnly);
            }
        }
        std::memcpy(rdram + kScratch, saved, kScratchBytes);
        savedOffset = 0;
        for (const SavedRegion &region : kTestGlobals)
        {
            std::memcpy(rdram + region.address, savedGlobals + savedOffset, region.bytes);
            savedOffset += region.bytes;
        }
        const auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - start);
        std::fprintf(stderr, "[TS:math] self-test: %u of %u native, mathdiff=%u, NaN-only=%u, %u ms\n",
                     kNativeMathCount - g_tsNativeMath.failed, kNativeMathCount, g_tsNativeMath.mismatches,
                     g_tsNativeMath.nanPayloads, static_cast<uint32_t>(ms.count()));
    }
#endif
}

void registerTsNativeMath(PS2Runtime &runtime)
{
    for (const NativeMath &fn : kNativeMath)
        runtime.replaceFunction(fn.address, fn.native);
#if TS_NATIVE_MATH_SELFTEST
    selfTest(runtime);
#endif
    g_tsNativeMath.native = kNativeMathCount - g_tsNativeMath.failed;
}
#endif
