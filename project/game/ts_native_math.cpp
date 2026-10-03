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
// TS_NATIVE_MATH_SELFTEST: at boot each function runs against its original
// on the same random inputs; one that differs is put back to the original.
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
    // bottom, the stack ($sp at the top) above them: 0x2A0 bytes deep for
    // the deepest path (a huge sinf argument through __kernel_rem_pio2f).
    constexpr uint32_t kScratch = 0x000C0000u;
    constexpr uint32_t kScratchBytes = 0x480u;
    constexpr uint32_t kOperandBytes = 0x180u; // five 64-byte slots, plus room to shift one
    constexpr uint32_t kTestReturn = 0x00012340u; // $ra: no function there, so a run ends on it
    constexpr uint32_t kGameGp = 0x003B47F0u;
    constexpr uint32_t kLibVersion = 0x003AB118u; // fdlibm _LIB_VERSION: sqrtf's error handling
    constexpr int kTestCases = 10000;

    uint32_t g_testLibVersion = 0;

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

    struct NativeMath
    {
        const char *name;
        uint32_t address;
        GuestFunction original, native;
        void (*setup)(TestRng &, R5900Context &, uint8_t *rdram);
        bool floats; // float results: NaN payloads may differ (see above)
    };

    // fabsf before sinf/cosf: __ieee754_rem_pio2f calls it.
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

    void compareWords(const uint8_t *want, const uint8_t *got, uint32_t bytes, const uint8_t *kinds, bool floats,
                      Difference &difference)
    {
        if (std::memcmp(want, got, bytes) == 0)
            return;
        for (uint32_t word = 0; word < bytes / 4u; ++word)
        {
            uint32_t a, b;
            std::memcpy(&a, want + word * 4u, sizeof(a));
            std::memcpy(&b, got + word * 4u, sizeof(b));
            if (a == b)
                continue;
            const uint8_t kind = kinds ? kinds[word] : kWordFloat;
            if (kind == kWordIgnored)
                continue;
            if (floats && kind == kWordFloat && isNanBits(a) && isNanBits(b))
            {
                ++difference.nans;
                continue;
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

    TestOutcome testFunction(PS2Runtime &runtime, uint8_t *rdram, const NativeMath &fn)
    {
        static R5900Context base, want, got;
        static uint8_t before[kScratchBytes], wantMemory[kScratchBytes];
        TestRng rng{0x2545F491u ^ fn.address};
        TestOutcome outcome;
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
            std::memcpy(&want, &base, sizeof(base));
            std::memcpy(&got, &base, sizeof(base));
            runGuest(runtime, rdram, want, fn.original, fn.address);
            std::memcpy(wantMemory, rdram + kScratch, kScratchBytes);
            std::memcpy(rdram + kScratch, before, kScratchBytes);
            runGuest(runtime, rdram, got, fn.native, fn.address);

            Difference regs, memory;
            compareWords(reinterpret_cast<const uint8_t *>(&want), reinterpret_cast<const uint8_t *>(&got),
                         sizeof(R5900Context), contextWordKinds(), fn.floats, regs);
            compareWords(wantMemory, rdram + kScratch, kScratchBytes, nullptr, fn.floats, memory);
            if (regs.words != 0u || memory.words != 0u)
            {
                if (outcome.mismatches++ == 0u)
                {
                    const Difference &first = regs.words != 0u ? regs : memory;
                    uint32_t f12, f13;
                    std::memcpy(&f12, &base.f[12], sizeof(f12));
                    std::memcpy(&f13, &base.f[13], sizeof(f13));
                    R5900Context *in = &base;
                    std::fprintf(stderr,
                                 "[TS:math] %s case %d: %s0x%x want %08x got %08x (a0=%08x a1=%08x a2=%08x "
                                 "f12=%08x f13=%08x)\n",
                                 fn.name, i, regs.words != 0u ? "ctx+" : "mem ",
                                 regs.words != 0u ? first.where : kScratch + first.where, first.want, first.got,
                                 GPR_U32(in, 4), GPR_U32(in, 5), GPR_U32(in, 6), f12, f13);
                }
            }
            else if (regs.nans != 0u || memory.nans != 0u)
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
        static uint8_t saved[kScratchBytes];
        std::memcpy(saved, rdram + kScratch, kScratchBytes);
        std::memcpy(&g_testLibVersion, rdram + kLibVersion, sizeof(g_testLibVersion));
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
        std::memcpy(rdram + kLibVersion, &g_testLibVersion, sizeof(g_testLibVersion));
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
