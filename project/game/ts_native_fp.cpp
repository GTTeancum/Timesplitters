// Native versions of the game's software double-precision routines (Xbox
// only): libgcc's fp-bit (dpadd, dpsub, dpmul, dpdiv, dpcmp, the int and
// float conversions) as the PS2 toolchain compiled it, with the unpack,
// pack, _fpadd_parts and __fpcmp_parts_d helpers they call.
//
// The PS2 has no double-precision FPU, so every double operation in the
// game is a call into these routines: an unpack of each operand into a
// {class, sign, exponent, fraction} record on the stack, the operation on
// those records, and a pack of the result. Recompiled, each such call is
// three or four dispatched guest calls, a few hundred guest instructions
// with a pc store before every one, and scheduler checkpoints at every
// loop back-edge.
//
// Each native function here is a transcription of the translated
// instructions, in their order, on host integers with the recompiler's
// semantics (32-bit results sign-extended, 64-bit shifts and compares,
// movn/movz copying the whole 128-bit register). The results are therefore
// the same bits as the translation produces on every input, NaN payloads,
// denormals, rounding and overflow included: nothing here uses host double
// arithmetic. Every register the original and its callees write is written
// the same way (callee-saved ones through the same stack slots), the stack
// frames hold the same bytes, and pc ends at $ra.
//
// TS_NATIVE_MATH_SELFTEST: at boot each function runs against its original
// on random inputs of every class before it replaces it; one that differs
// is left on the original. The outcome is added to g_tsNativeMath.
#include "ts_native_fp.h"

#if defined(PLATFORM_XBOX)
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_recompiled_functions.h"
#include "runtime/ee_scheduler.h"
#include "ts_native_math.h"

#include <chrono>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstring>

#ifndef TS_NATIVE_MATH_SELFTEST
#define TS_NATIVE_MATH_SELFTEST 0
#endif

namespace
{
    using GuestFunction = PS2Runtime::RecompiledFunction;

#define TS_FP_INLINE inline __attribute__((always_inline))
#define FP_ARGS uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime
#define FP_PASS rdram, ctx, runtime

    // ---- The recompiler's integer semantics

    TS_FP_INLINE uint32_t lo32(uint64_t v) { return static_cast<uint32_t>(v); }
    TS_FP_INLINE uint64_t sext32(uint32_t v) { return static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(v))); }
    TS_FP_INLINE uint64_t addiu(uint64_t rs, int32_t imm) { return sext32(lo32(rs) + static_cast<uint32_t>(imm)); }
    TS_FP_INLINE uint64_t addu(uint64_t a, uint64_t b) { return sext32(lo32(a) + lo32(b)); }
    TS_FP_INLINE uint64_t subu(uint64_t a, uint64_t b) { return sext32(lo32(a) - lo32(b)); }
    TS_FP_INLINE uint64_t lui(uint32_t imm) { return sext32(imm << 16); }
    TS_FP_INLINE uint64_t slt(uint64_t a, uint64_t b) { return static_cast<int64_t>(a) < static_cast<int64_t>(b) ? 1u : 0u; }
    TS_FP_INLINE uint64_t sltu(uint64_t a, uint64_t b) { return a < b ? 1u : 0u; }
    TS_FP_INLINE uint64_t slti(uint64_t a, int32_t imm) { return static_cast<int64_t>(a) < static_cast<int64_t>(imm) ? 1u : 0u; }
    TS_FP_INLINE uint64_t sltiu(uint64_t a, int32_t imm) { return a < static_cast<uint64_t>(static_cast<int64_t>(imm)) ? 1u : 0u; }
    TS_FP_INLINE uint64_t srl32(uint64_t a, uint32_t sa) { return sext32(lo32(a) >> sa); }
    TS_FP_INLINE uint64_t sll32(uint64_t a, uint32_t sa) { return sext32(lo32(a) << sa); }
    TS_FP_INLINE uint64_t sra32w(uint64_t a) { return static_cast<uint64_t>(static_cast<int64_t>(a) >> 32); } // dsra32 by 0

    // lw: a sign-extended word.
#define LW(addr) sext32(READ32(addr))

    // movn/movz copy the whole 128-bit register: the upper half of the
    // destination becomes the source's. Upper halves change through nothing
    // else here, so the copy goes straight to the context.
    TS_FP_INLINE void copyHigh(R5900Context *ctx, int dst, int src)
    {
        std::memcpy(reinterpret_cast<uint8_t *>(&ctx->r[dst]) + 8, reinterpret_cast<const uint8_t *>(&ctx->r[src]) + 8, 8);
    }

    // The registers this family touches, held here from entry to exit.
    struct FpRegs
    {
        uint64_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, s0, s1, s2, s3, s4, s5, s6, s7, sp, ra;
    };

    enum : int
    {
        R_V0 = 2, R_V1 = 3, R_A0 = 4, R_A1 = 5, R_A2 = 6, R_A3 = 7, R_T0 = 8, R_T1 = 9, R_T2 = 10, R_T3 = 11,
        R_S0 = 16, R_S1 = 17, R_S2 = 18, R_S3 = 19, R_S4 = 20, R_S5 = 21, R_S6 = 22, R_S7 = 23, R_SP = 29, R_RA = 31,
    };

#define FP_LOAD(field, n) r.field = GPR_U64(ctx, n)
#define FP_STORE(field, n) SET_GPR_U64(ctx, n, r.field)

    // The fp-bit record: class (0 SNAN, 1 QNAN, 2 ZERO, 3 NUMBER, 4 INF) at
    // +0, sign +4, exponent +8, fraction +16 (double) or +12 (float).

    // __unpack_d(src a0, dst a1) at 0x2e2ea0. Writes v0, v1, a0.
    TS_FP_INLINE void unpackD(FpRegs &r, FP_ARGS)
    {
        const uint32_t dst = lo32(r.a1);
        r.v0 = READ64(lo32(r.a0));
        r.v1 = 0x000FFFFFFFFFFFFFull;
        r.a0 = r.v0 >> 63;
        r.v1 &= r.v0;
        r.v0 >>= 52;
        WRITE32(dst + 4u, lo32(r.a0));
        r.a0 = r.v0 & 0x7FFu;
        r.v0 = 0x7FFu;
        if (r.a0 == 0u)
        {
            r.v0 = 2u;
            WRITE32(dst, 2u);
            return;
        }
        if (r.a0 != r.v0)
        {
            r.v1 <<= 8;
            r.v0 = 0x1000000000000000ull;
            r.v1 |= r.v0;
            r.a0 = addiu(r.a0, -0x3FF);
            r.v0 = 3u;
            WRITE64(dst + 16u, r.v1);
            WRITE32(dst + 8u, lo32(r.a0));
            WRITE32(dst, 3u);
            return;
        }
        r.v0 = 4u;
        if (r.v1 == 0u)
        {
            WRITE32(dst, 4u);
            return;
        }
        r.v0 = r.v1 & 0x0008000000000000ull;
        const bool quiet = r.v0 != 0u;
        r.v0 = 1u;
        WRITE32(dst, quiet ? 1u : 0u);
        WRITE64(dst + 16u, r.v1);
    }

    // __pack_d(record a0) at 0x2e2d70: v0 = the double. Writes v0, v1, a0,
    // a1, a2, a3, t0; a2 enters as the union the result is built in.
    TS_FP_INLINE void packD(FpRegs &r, FP_ARGS)
    {
        const uint32_t p = lo32(r.a0);
        r.v1 = LW(p);
        r.a3 = 0u;
        r.t0 = LW(p + 4u);
        r.v0 = sltiu(r.v1, 2);
        r.a1 = READ64(p + 16u);
        if (r.v0 != 0u)
        {
            // NaN: quiet bit set, all-ones exponent.
            r.v0 = 0x0008000000000000ull;
            r.a3 = 0x7FFu;
            r.a1 |= r.v0;
            goto pack;
        }
        r.v0 = r.v1 ^ 4u;
        if (r.v0 == 0u)
        {
            r.a3 = 0x7FFu;
            r.a1 = 0u;
            goto pack;
        }
        r.v0 = r.v1 ^ 2u;
        if (r.v0 == 0u)
        {
            r.a1 = 0u;
            goto pack;
        }
        if (r.a1 == 0u)
            goto pack;
        r.v1 = LW(p + 8u);
        r.v0 = slti(r.v1, -0x3FE);
        {
            const bool normal = r.v0 == 0u;
            r.v0 = sext32(0xFFFFFC02u);
            if (!normal)
            {
                // Denormal: shift the fraction down by the exponent deficit.
                r.v0 = subu(r.v0, r.v1);
                r.v1 = slti(r.v0, 0x39);
                const bool representable = r.v1 != 0u;
                r.a1 >>= (lo32(r.v0) & 63u);
                if (!representable)
                    r.a1 = 0u;
                r.a1 >>= 8;
                goto pack;
            }
        }
        r.v0 = slti(r.v1, 0x400);
        {
            const bool fits = r.v0 != 0u;
            r.a3 = addiu(r.v1, 0x3FF);
            if (!fits)
            {
                r.a3 = 0x7FFu;
                r.a1 = 0u;
                goto pack;
            }
        }
        // Round to nearest, ties to even, on the 8 guard bits.
        r.v0 = 0x80u;
        r.v1 = r.a1 & 0xFFu;
        if (r.v1 != r.v0)
        {
            r.a1 += 0x7Fu;
        }
        else
        {
            r.v1 = r.a1 & 0x100u;
            r.v0 = r.a1 + 0x80u;
            if (r.v1 != 0u)
            {
                r.a1 = r.v0;
                copyHigh(ctx, R_A1, R_V0);
            }
        }
        r.v0 = 0x1FFFFFFFFFFFFFFFull;
        r.v0 = sltu(r.v0, r.a1);
        if (r.v0 == 0u)
        {
            r.a1 >>= 8;
            goto pack;
        }
        r.a1 >>= 1;
        r.a3 = addiu(r.a3, 1);
        r.a1 >>= 8;
    pack:
        r.v1 = 0xFFF0000000000000ull;
        r.v0 = 0x000FFFFFFFFFFFFFull;
        r.v0 &= r.a1;
        r.a2 &= r.v1;
        r.a2 |= r.v0;
        r.v1 = r.a3 & 0x7FFu;
        r.v0 = 0x800FFFFFFFFFFFFFull;
        r.v1 <<= 52;
        r.a2 &= r.v0;
        r.a0 = 0x7FFFFFFFFFFFFFFFull;
        r.a2 |= r.v1;
        r.v0 = r.t0 << 63;
        r.a2 &= r.a0;
        r.v0 = r.a2 | r.v0;
    }

    // _fpadd_parts(a a0, b a1, tmp a2) at 0x2e2f40: v0 = the record to
    // pack. Writes v0, v1, a0, a1, a3, t0, t1, t2, t3.
    TS_FP_INLINE void fpaddParts(FpRegs &r, FP_ARGS)
    {
        r.t0 = r.a0;
        const uint32_t pa = lo32(r.t0), pb = lo32(r.a1), pt = lo32(r.a2);
        r.a0 = LW(pa);
        r.v0 = sltiu(r.a0, 2);
        if (r.v0 != 0u)
        {
            r.v0 = r.t0; // a is a NaN
            return;
        }
        r.v1 = LW(pb);
        r.v0 = sltiu(r.v1, 2);
        {
            const bool bNan = r.v0 != 0u;
            r.v0 = r.a0 ^ 4u;
            if (bNan)
            {
                r.v0 = r.a1;
                return;
            }
        }
        {
            const bool aNotInf = r.v0 != 0u;
            r.v0 = r.v1 ^ 4u;
            if (!aNotInf)
            {
                if (r.v0 != 0u)
                {
                    r.v0 = r.t0; // inf + finite
                    return;
                }
                r.v1 = LW(pb + 4u);
                r.v0 = LW(pa + 4u);
                const bool sameSign = r.v0 == r.v1;
                r.v0 = lui(0x1FF);
                if (sameSign)
                {
                    r.v0 = r.t0;
                    return;
                }
                r.v0 = addiu(r.v0, 0x5368); // inf - inf: the static NaN record
                return;
            }
        }
        {
            const bool bInf = r.v0 == 0u;
            r.v0 = r.v1 ^ 2u;
            if (bInf)
            {
                r.v0 = r.a1;
                return;
            }
        }
        {
            const bool bNotZero = r.v0 != 0u;
            r.v0 = r.a0 ^ 2u;
            if (!bNotZero)
            {
                const bool aNotZero = r.v0 != 0u;
                r.v0 = r.a2;
                if (aNotZero)
                {
                    r.v0 = r.t0;
                    return;
                }
                // Both zero: a copied, the sign is the and of both.
                r.a0 = READ64(pa);
                WRITE64(pt, r.a0);
                r.v1 = READ64(pa + 8u);
                WRITE64(pt + 8u, r.v1);
                r.a0 = READ64(pa + 16u);
                WRITE64(pt + 16u, r.a0);
                r.v1 = LW(pa + 4u);
                r.a0 = LW(pb + 4u);
                r.v1 &= r.a0;
                WRITE32(pt + 4u, lo32(r.v1));
                return;
            }
        }
        {
            const bool aZero = r.v0 == 0u;
            r.v0 = ~0ull;
            if (aZero)
            {
                r.v0 = r.a1;
                return;
            }
        }
        r.a3 = LW(pa + 8u);
        r.t1 = LW(pb + 8u);
        r.t3 = READ64(pa + 16u);
        r.v1 = subu(r.a3, r.t1);
        r.v0 = slt(r.v0, r.v1);
        r.a0 = subu(0u, r.v1);
        if (r.v0 == 0u)
        {
            r.v1 = r.a0;
            copyHigh(ctx, R_V1, R_A0);
        }
        r.v1 = slti(r.v1, 0x40);
        {
            const bool far = r.v1 == 0u;
            r.t2 = READ64(pb + 16u);
            if (far)
                goto exponentsFar;
        }
        r.v0 = slt(r.t1, r.a3);
        {
            const bool bSmaller = r.v0 != 0u;
            r.t0 = LW(pa + 4u);
            if (!bSmaller)
                goto shiftA;
        }
        r.a1 = LW(pb + 4u);
        do
        {
            r.v0 = r.t2 >> 1;
            r.t1 = addiu(r.t1, 1);
            r.v1 = r.t2 & 1u;
            r.a0 = slt(r.t1, r.a3);
            r.t2 = r.v1 | r.v0;
        } while (r.a0 != 0u);
        r.v0 = slt(r.a3, r.t1);
        goto shiftATest;
    shiftA:
        r.a1 = LW(pb + 4u);
        r.v0 = slt(r.a3, r.t1);
    shiftATest:
        if (r.v0 == 0u)
            goto add;
        r.a3 = subu(r.t1, r.a3);
        do
        {
            r.v1 = r.t3 >> 1;
            r.v0 = r.t3 & 1u;
            r.t3 = r.v0 | r.v1;
            r.a3 = addiu(r.a3, -1);
        } while (r.a3 != 0u);
        r.a3 = r.t1;
        goto add;
    exponentsFar:
        r.v0 = slt(r.t1, r.a3);
        {
            const bool bSmaller = r.v0 != 0u;
            r.t0 = LW(pa + 4u);
            if (!bSmaller)
            {
                r.a3 = r.t1;
                r.a1 = LW(pb + 4u);
                r.t3 = 0u;
                goto add;
            }
        }
        r.t2 = 0u;
        r.a1 = LW(pb + 4u);
    add:
        {
            const bool sameSign = r.t0 == r.a1;
            r.v0 = r.t3 + r.t2;
            if (sameSign)
                goto store;
        }
        {
            const bool aNegative = r.t0 != 0u;
            r.v0 = r.t2 - r.t3;
            if (!aNegative)
                r.v0 = r.t3 - r.t2;
        }
        {
            const bool negative = static_cast<int64_t>(r.v0) < 0;
            r.v1 = 0u - r.v0;
            WRITE32(pt + 8u, lo32(r.a3));
            if (!negative)
            {
                WRITE64(pt + 16u, r.v0);
                WRITE32(pt + 4u, 0u);
            }
            else
            {
                r.v0 = 1u;
                WRITE64(pt + 16u, r.v1);
                WRITE32(pt + 4u, 1u);
            }
        }
        r.a1 = READ64(pt + 16u);
        r.v0 = 0x0FFFFFFFFFFFFFFEull;
        r.v1 = r.a1 - 1u;
        r.v0 = sltu(r.v0, r.v1);
        {
            const bool normalized = r.v0 != 0u;
            r.a3 = r.a1;
            if (normalized)
                goto finish;
        }
        r.a1 = 0x0FFFFFFFFFFFFFFEull;
        for (;;)
        {
            r.v0 = LW(pt + 8u);
            r.a0 = r.a3 << 1;
            r.v1 = r.a0 - 1u;
            WRITE64(pt + 16u, r.a0);
            r.v0 = addiu(r.v0, -1);
            r.v1 = sltu(r.a1, r.v1);
            WRITE32(pt + 8u, lo32(r.v0));
            const bool again = r.v1 == 0u;
            r.a3 = r.a0;
            if (!again)
                break;
        }
        r.a1 = r.a0;
        goto finish;
    store:
        WRITE32(pt + 4u, lo32(r.t0));
        WRITE32(pt + 8u, lo32(r.a3));
        r.a1 = r.v0;
        WRITE64(pt + 16u, r.v0);
    finish:
        r.v1 = 3u;
        r.v0 = 0x1FFFFFFFFFFFFFFFull;
        r.v0 = sltu(r.v0, r.a1);
        {
            const bool carried = r.v0 != 0u;
            WRITE32(pt, 3u);
            if (!carried)
            {
                r.v0 = r.a2;
                return;
            }
        }
        r.v0 = LW(pt + 8u);
        r.a0 = r.a1 >> 1;
        r.v1 = r.a1 & 1u;
        r.v1 |= r.a0;
        r.v0 = addiu(r.v0, 1);
        WRITE64(pt + 16u, r.v1);
        WRITE32(pt + 8u, lo32(r.v0));
        r.v0 = r.a2;
    }

    // __muldi3(a0, a1) at 0x2e4648: v0 = the 64-bit product. Writes v0, v1,
    // a0, a1, a2 and HI/LO, HI1/LO1.
    TS_FP_INLINE void muldi3(FpRegs &r, R5900Context *ctx)
    {
        r.a2 = sra32w(r.a0);
        r.v1 = sra32w(r.a1);
        r.a0 = sext32(lo32(r.a0));
        r.a1 = sext32(lo32(r.a1));
        {
            const uint64_t p = static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(lo32(r.a0))) *
                                                     static_cast<int64_t>(static_cast<int32_t>(lo32(r.v1))));
            ctx->lo = sext32(lo32(p));
            ctx->hi = sext32(lo32(p >> 32));
            r.v1 = sext32(lo32(p));
        }
        {
            const uint64_t p = static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(lo32(r.a2))) *
                                                     static_cast<int64_t>(static_cast<int32_t>(lo32(r.a1))));
            ctx->lo1 = sext32(lo32(p));
            ctx->hi1 = sext32(lo32(p >> 32));
            r.a2 = sext32(lo32(p));
        }
        {
            const uint64_t p = static_cast<uint64_t>(lo32(r.a0)) * static_cast<uint64_t>(lo32(r.a1));
            ctx->lo = sext32(lo32(p));
            ctx->hi = sext32(lo32(p >> 32));
        }
        r.a0 = ctx->lo;
        r.v0 = ctx->hi;
        r.a0 <<= 32;
        r.v0 <<= 32;
        r.a0 >>= 32;
        r.v1 = addu(r.v1, r.a2);
        r.a0 |= r.v0;
        r.a1 = 0xFFFFFFFFull;
        r.v0 = sra32w(r.a0);
        r.v0 = addu(r.v0, r.v1);
        r.a0 &= r.a1;
        r.v0 <<= 32;
        r.v0 = r.a0 | r.v0;
    }

    // __fpcmp_parts_d(a a0, b a1) at 0x2e3650: v0 = -1, 0, 1 (1 for NaNs).
    // Writes v0, v1, a0, a2, a3.
    TS_FP_INLINE void fpcmpPartsD(FpRegs &r, FP_ARGS)
    {
        const uint32_t pa = lo32(r.a0), pb = lo32(r.a1);
        r.a2 = LW(pa);
        r.v0 = sltiu(r.a2, 2);
        if (r.v0 != 0u)
        {
            r.v0 = 1u;
            return;
        }
        r.v1 = LW(pb);
        r.v0 = sltiu(r.v1, 2);
        {
            const bool bNan = r.v0 != 0u;
            r.v0 = r.a2 ^ 4u;
            if (bNan)
            {
                r.v0 = 1u;
                return;
            }
        }
        {
            const bool aNotInf = r.v0 != 0u;
            r.v0 = r.v1 ^ 4u;
            if (!aNotInf)
            {
                if (r.v0 != 0u)
                {
                    r.a0 = LW(pa + 4u);
                    goto bySignA0;
                }
                r.v1 = LW(pb + 4u);
                r.v0 = LW(pa + 4u);
                r.v0 = subu(r.v1, r.v0);
                return;
            }
        }
        if (r.v0 != 0u)
        {
            r.v0 = r.a2 ^ 2u;
            goto zeros;
        }
        r.a0 = LW(pb + 4u);
        r.v1 = ~0ull;
        r.v0 = 1u;
        if (r.a0 == 0u)
        {
            r.v0 = r.v1;
            copyHigh(ctx, R_V0, R_V1);
        }
        return;
    zeros:
        {
            const bool aNotZero = r.v0 != 0u;
            r.v0 = r.v1 ^ 2u;
            if (!aNotZero)
            {
                if (r.v0 != 0u)
                {
                    r.a0 = LW(pb + 4u);
                    r.v1 = 1u;
                    r.v0 = ~0ull;
                    if (r.a0 != 0u)
                    {
                        r.v0 = r.v1;
                        copyHigh(ctx, R_V0, R_V1);
                    }
                    return;
                }
                r.v0 = 0u;
                return;
            }
        }
        if (r.v0 == 0u)
        {
            r.a0 = LW(pa + 4u);
            goto bySignA0;
        }
        r.a3 = LW(pa + 4u);
        r.v0 = LW(pb + 4u);
        if (r.a3 == r.v0)
        {
            r.a2 = LW(pa + 8u);
            goto magnitudes;
        }
        r.v1 = 1u;
        r.v0 = ~0ull;
        goto bySignA3;
    magnitudes:
        r.v1 = LW(pb + 8u);
        r.v0 = slt(r.v1, r.a2);
        if (r.v0 != 0u)
        {
            r.v1 = 1u;
            r.v0 = ~0ull;
            goto bySignA3;
        }
        r.v0 = slt(r.a2, r.v1);
        if (r.v0 == 0u)
        {
            r.v1 = READ64(pa + 16u);
            goto fractions;
        }
        r.v1 = ~0ull;
        r.v0 = 1u;
        goto bySignA3;
    fractions:
        r.a0 = READ64(pb + 16u);
        r.v0 = sltu(r.a0, r.v1);
        if (r.v0 != 0u)
        {
            r.v1 = 1u;
            r.v0 = ~0ull;
            goto bySignA3;
        }
        r.v0 = sltu(r.v1, r.a0);
        {
            const bool less = r.v0 != 0u;
            r.v1 = ~0ull;
            if (less)
            {
                r.v0 = 1u;
                goto bySignA3;
            }
        }
        r.v0 = 0u;
        return;
    bySignA0:
        r.v1 = 1u;
        r.v0 = ~0ull;
        if (r.a0 == 0u)
        {
            r.v0 = r.v1;
            copyHigh(ctx, R_V0, R_V1);
        }
        return;
    bySignA3:
        if (r.a3 == 0u)
        {
            r.v0 = r.v1;
            copyHigh(ctx, R_V0, R_V1);
        }
    }

    // __unpack_f(src a0, dst a1) at 0x2e3b78. Writes v0, v1, a0, a2.
    TS_FP_INLINE void unpackF(FpRegs &r, FP_ARGS)
    {
        const uint32_t dst = lo32(r.a1);
        r.v0 = LW(lo32(r.a0));
        r.v1 = 0x007FFFFFu;
        r.a0 = srl32(r.v0, 31);
        r.a2 = srl32(r.v0, 23);
        r.v1 &= r.v0;
        r.a2 &= 0xFFu;
        {
            const bool nonZeroExp = r.a2 != 0u;
            WRITE32(dst + 4u, lo32(r.a0));
            if (!nonZeroExp)
            {
                r.v0 = 2u;
                WRITE32(dst, 2u);
                return;
            }
        }
        r.v0 = 0xFFu;
        {
            const bool finite = r.a2 != r.v0;
            r.v0 = lui(0x4000);
            if (finite)
            {
                r.v1 = sll32(r.v1, 7);
                r.v1 |= r.v0;
                r.a0 = addiu(r.a2, -0x7F);
                r.v0 = 3u;
                WRITE32(dst + 12u, lo32(r.v1));
                WRITE32(dst + 8u, lo32(r.a0));
                WRITE32(dst, 3u);
                return;
            }
        }
        {
            const bool nan = r.v1 != 0u;
            r.v0 = lui(0x10);
            if (!nan)
            {
                r.v0 = 4u;
                WRITE32(dst, 4u);
                return;
            }
        }
        r.v0 = r.v1 & r.v0;
        const bool quiet = r.v0 != 0u;
        r.v0 = 1u;
        WRITE32(dst, quiet ? 1u : 0u);
        WRITE32(dst + 12u, lo32(r.v1));
    }

    // __pack_f(record a0) at 0x2e3a68: f0 = the float. Writes v0, v1, a0,
    // a1, a2, a3, t0, f0.
    TS_FP_INLINE void packF(FpRegs &r, FP_ARGS)
    {
        const uint32_t p = lo32(r.a0);
        r.v1 = LW(p);
        r.a3 = 0u;
        r.t0 = LW(p + 4u);
        r.v0 = sltiu(r.v1, 2);
        r.a1 = LW(p + 12u);
        if (r.v0 != 0u)
        {
            r.v0 = lui(0x10);
            r.a3 = 0xFFu;
            r.a1 |= r.v0;
            goto pack;
        }
        r.v0 = r.v1 ^ 4u;
        {
            const bool notInf = r.v0 != 0u;
            r.v0 = r.v1 ^ 2u;
            if (!notInf)
                goto infinity;
        }
        if (r.v0 == 0u)
        {
            r.a1 = 0u;
            goto pack;
        }
        {
            const bool zeroFraction = r.a1 == 0u;
            r.v1 = lui(0xFF80);
            if (zeroFraction)
                goto packMasked;
        }
        r.v1 = LW(p + 8u);
        r.v0 = slti(r.v1, -0x7E);
        {
            const bool normal = r.v0 == 0u;
            r.v0 = sext32(0xFFFFFF82u);
            if (!normal)
            {
                r.v0 = subu(r.v0, r.v1);
                r.v1 = slti(r.v0, 0x1A);
                const bool representable = r.v1 != 0u;
                r.a1 = srl32(r.a1, lo32(r.v0) & 31u);
                if (!representable)
                    r.a1 = 0u;
                goto shiftOut;
            }
        }
        r.v0 = slti(r.v1, 0x80);
        {
            const bool fits = r.v0 != 0u;
            r.a3 = addiu(r.v1, 0x7F);
            if (fits)
                goto round;
        }
    infinity:
        r.a3 = 0xFFu;
        r.a1 = 0u;
        goto pack;
    round:
        r.v0 = 0x40u;
        r.v1 = r.a1 & 0x7Fu;
        if (r.v1 != r.v0)
        {
            r.a1 = addiu(r.a1, 0x3F);
        }
        else
        {
            r.v1 = r.a1 & 0x80u;
            r.v0 = addiu(r.a1, 0x40);
            if (r.v1 != 0u)
            {
                r.a1 = r.v0;
                copyHigh(ctx, R_A1, R_V0);
            }
        }
        if (static_cast<int64_t>(r.a1) >= 0)
        {
            r.a1 = srl32(r.a1, 7);
            goto pack;
        }
        r.a1 = srl32(r.a1, 1);
        r.a3 = addiu(r.a3, 1);
    shiftOut:
        r.a1 = srl32(r.a1, 7);
    pack:
        r.v1 = lui(0xFF80);
    packMasked:
        r.v0 = lui(0x7F);
        r.a2 &= r.v1;
        r.v0 |= 0xFFFFu;
        r.v0 = r.a1 & r.v0;
        r.v1 = lui(0x807F);
        r.a2 |= r.v0;
        r.v1 |= 0xFFFFu;
        r.a0 = r.a3 & 0xFFu;
        r.a2 &= r.v1;
        r.a0 = sll32(r.a0, 23);
        r.v0 = lui(0x7FFF);
        r.a2 |= r.a0;
        r.v0 |= 0xFFFFu;
        r.v1 = sll32(r.t0, 31);
        r.a2 &= r.v0;
        r.a2 |= r.v1;
        {
            const uint32_t bits = lo32(r.a2);
            std::memcpy(&ctx->f[0], &bits, sizeof(bits));
        }
    }

    // __make_dp(class a0, sign a1, exp a2, fraction a3) at 0x2e39e0.
    TS_FP_INLINE void makeDp(FpRegs &r, FP_ARGS)
    {
        r.sp = addiu(r.sp, -0x30);
        const uint32_t sp = lo32(r.sp);
        WRITE32(sp, lo32(r.a0));
        WRITE64(sp + 0x20u, r.ra);
        r.a0 = r.sp;
        WRITE32(sp + 4u, lo32(r.a1));
        WRITE32(sp + 8u, lo32(r.a2));
        r.ra = 0x2E3A00u;
        WRITE64(sp + 0x10u, r.a3);
        packD(r, FP_PASS);
        r.ra = READ64(sp + 0x20u);
        r.sp = addiu(r.sp, 0x30);
    }

    // __make_fp(class a0, sign a1, exp a2, fraction a3) at 0x2e45d8.
    TS_FP_INLINE void makeFp(FpRegs &r, FP_ARGS)
    {
        r.sp = addiu(r.sp, -0x20);
        const uint32_t sp = lo32(r.sp);
        WRITE32(sp, lo32(r.a0));
        WRITE64(sp + 0x10u, r.ra);
        r.a0 = r.sp;
        WRITE32(sp + 4u, lo32(r.a1));
        WRITE32(sp + 8u, lo32(r.a2));
        r.ra = 0x2E45F8u;
        WRITE32(sp + 12u, lo32(r.a3));
        packF(r, FP_PASS);
        r.ra = READ64(sp + 0x10u);
        r.sp = addiu(r.sp, 0x20);
    }

    // ---- Register sets per entry point

    TS_FP_INLINE void loadArith(FpRegs &r, const R5900Context *ctx)
    {
        FP_LOAD(v0, R_V0); FP_LOAD(v1, R_V1); FP_LOAD(a0, R_A0); FP_LOAD(a1, R_A1); FP_LOAD(a2, R_A2);
        FP_LOAD(a3, R_A3); FP_LOAD(t0, R_T0); FP_LOAD(t1, R_T1); FP_LOAD(t2, R_T2); FP_LOAD(t3, R_T3);
        FP_LOAD(s0, R_S0); FP_LOAD(sp, R_SP); FP_LOAD(ra, R_RA);
    }

    TS_FP_INLINE void storeArith(const FpRegs &r, R5900Context *ctx)
    {
        FP_STORE(v0, R_V0); FP_STORE(v1, R_V1); FP_STORE(a0, R_A0); FP_STORE(a1, R_A1); FP_STORE(a2, R_A2);
        FP_STORE(a3, R_A3); FP_STORE(t0, R_T0); FP_STORE(t1, R_T1); FP_STORE(t2, R_T2); FP_STORE(t3, R_T3);
        FP_STORE(s0, R_S0); FP_STORE(sp, R_SP); FP_STORE(ra, R_RA);
        ctx->pc = lo32(r.ra);
    }

    TS_FP_INLINE void loadConv(FpRegs &r, const R5900Context *ctx)
    {
        FP_LOAD(v0, R_V0); FP_LOAD(v1, R_V1); FP_LOAD(a0, R_A0); FP_LOAD(a1, R_A1); FP_LOAD(a2, R_A2);
        FP_LOAD(a3, R_A3); FP_LOAD(t0, R_T0); FP_LOAD(sp, R_SP); FP_LOAD(ra, R_RA);
    }

    TS_FP_INLINE void storeConv(const FpRegs &r, R5900Context *ctx)
    {
        FP_STORE(v0, R_V0); FP_STORE(v1, R_V1); FP_STORE(a0, R_A0); FP_STORE(a1, R_A1); FP_STORE(a2, R_A2);
        FP_STORE(a3, R_A3); FP_STORE(t0, R_T0); FP_STORE(sp, R_SP); FP_STORE(ra, R_RA);
        ctx->pc = lo32(r.ra);
    }

    // ---- Entry points

    // dpadd(a0, a1) at 0x2e3180 and dpsub at 0x2e31d8 (b's sign flipped
    // in its record).
    template <bool kSubtract>
    TS_FP_INLINE void dpAddSub(FP_ARGS)
    {
        FpRegs r;
        loadArith(r, ctx);
        r.sp = addiu(r.sp, -0x90);
        const uint32_t sp = lo32(r.sp);
        WRITE64(sp + 0x60u, r.a0);
        WRITE64(sp + 0x68u, r.a1);
        r.a0 = addiu(r.sp, 0x60);
        WRITE64(sp + 0x70u, r.s0);
        WRITE64(sp + 0x80u, r.ra);
        r.ra = kSubtract ? 0x2E31F8u : 0x2E31A0u;
        r.a1 = r.sp;
        unpackD(r, FP_PASS);
        r.s0 = addiu(r.sp, 0x20);
        r.a0 = addiu(r.sp, 0x68);
        r.ra = kSubtract ? 0x2E3208u : 0x2E31B0u;
        r.a1 = r.s0;
        unpackD(r, FP_PASS);
        if (kSubtract)
        {
            r.v0 = LW(sp + 0x24u);
            r.a1 = r.s0;
            r.a2 = addiu(r.sp, 0x40);
            r.a0 = r.sp;
            r.v0 ^= 1u;
            r.ra = 0x2E3224u;
            WRITE32(sp + 0x24u, lo32(r.v0));
        }
        else
        {
            r.a1 = r.s0;
            r.a2 = addiu(r.sp, 0x40);
            r.ra = 0x2E31C0u;
            r.a0 = r.sp;
        }
        fpaddParts(r, FP_PASS);
        r.ra = kSubtract ? 0x2E322Cu : 0x2E31C8u;
        r.a0 = r.v0;
        packD(r, FP_PASS);
        r.ra = READ64(sp + 0x80u);
        r.s0 = READ64(sp + 0x70u);
        r.sp = addiu(r.sp, 0x90);
        storeArith(r, ctx);
    }

    void nativeDpadd(FP_ARGS) { dpAddSub<false>(FP_PASS); }
    void nativeDpsub(FP_ARGS) { dpAddSub<true>(FP_PASS); }

    // dpmul(a0, a1) at 0x2e3240: the 64x64 fraction product from four
    // __muldi3 calls, then the rounding of the 128-bit result.
    void nativeDpmul(FP_ARGS)
    {
        FpRegs r;
        loadArith(r, ctx);
        FP_LOAD(s1, R_S1); FP_LOAD(s2, R_S2); FP_LOAD(s3, R_S3); FP_LOAD(s4, R_S4);
        FP_LOAD(s5, R_S5); FP_LOAD(s6, R_S6); FP_LOAD(s7, R_S7);
        r.sp = addiu(r.sp, -0x100);
        const uint32_t sp = lo32(r.sp);
        WRITE64(sp + 0x60u, r.a0);
        WRITE64(sp + 0x68u, r.a1);
        r.a0 = addiu(r.sp, 0x60);
        WRITE64(sp + 0xE0u, r.s7);
        r.a1 = r.sp;
        WRITE64(sp + 0x70u, r.s0);
        WRITE64(sp + 0xF0u, r.ra);
        WRITE64(sp + 0xD0u, r.s6);
        WRITE64(sp + 0xC0u, r.s5);
        WRITE64(sp + 0xB0u, r.s4);
        WRITE64(sp + 0xA0u, r.s3);
        WRITE64(sp + 0x90u, r.s2);
        r.ra = 0x2E327Cu;
        WRITE64(sp + 0x80u, r.s1);
        unpackD(r, FP_PASS);
        r.s0 = addiu(r.sp, 0x20);
        r.a0 = addiu(r.sp, 0x68);
        r.ra = 0x2E328Cu;
        r.a1 = r.s0;
        unpackD(r, FP_PASS);
        r.a0 = LW(sp);
        r.v0 = sltiu(r.a0, 2);
        {
            const bool aNan = r.v0 != 0u;
            r.s7 = addiu(r.sp, 0x40);
            if (aNan)
                goto signIntoA;
        }
        r.v1 = LW(sp + 0x20u);
        r.v0 = sltiu(r.v1, 2);
        if (r.v0 != 0u)
        {
            r.v1 = LW(sp + 0x24u);
            goto signIntoB;
        }
        r.v0 = r.a0 ^ 4u;
        {
            const bool aNotInf = r.v0 != 0u;
            r.v0 = r.v1 ^ 4u;
            if (aNotInf)
                goto aFinite;
        }
        r.v0 = r.v1 ^ 2u;
        {
            const bool bNotZero = r.v0 != 0u;
            r.v0 = LW(sp + 4u);
            if (!bNotZero)
                goto nanResult;
        }
        r.a0 = r.sp;
        goto xorSignIntoA;
    aFinite:
        {
            const bool bNotInf = r.v0 != 0u;
            r.v0 = r.a0 ^ 2u;
            if (bNotInf)
                goto bothFinite;
        }
        {
            const bool aNotZero = r.v0 != 0u;
            r.v1 = LW(sp + 0x24u);
            if (aNotZero)
                goto signIntoB;
        }
    nanResult:
        r.v0 = lui(0x1FF);
        r.a0 = addiu(r.v0, 0x5368);
        goto pack;
    bothFinite:
        {
            const bool aNotZero = r.v0 != 0u;
            r.v0 = r.v1 ^ 2u;
            if (aNotZero)
                goto bNonZero;
        }
    signIntoA:
        r.v0 = LW(sp + 4u);
        r.a0 = r.sp;
    xorSignIntoA:
        r.v1 = LW(sp + 0x24u);
        r.v0 ^= r.v1;
        r.v0 = sltu(0u, r.v0);
        WRITE32(sp + 4u, lo32(r.v0));
        goto pack;
    bNonZero:
        {
            const bool bNotZero = r.v0 != 0u;
            r.s3 = READ64(sp + 0x10u);
            if (bNotZero)
                goto multiply;
        }
        r.v1 = LW(sp + 0x24u);
    signIntoB:
        r.a0 = r.s0;
        r.v0 = LW(sp + 4u);
        r.v0 ^= r.v1;
        r.v0 = sltu(0u, r.v0);
        WRITE32(sp + 0x24u, lo32(r.v0));
        goto pack;
    multiply:
        r.s6 = 0xFFFFFFFFull;
        r.s2 = READ64(sp + 0x30u);
        r.s0 = r.s3 & r.s6;
        r.s5 = r.s2 & r.s6;
        r.s3 >>= 32;
        r.s2 >>= 32;
        r.a1 = r.s0;
        r.ra = 0x2E3358u;
        r.a0 = r.s5;
        muldi3(r, ctx);
        r.s4 = r.v0;
        r.a1 = r.s0;
        r.ra = 0x2E3368u;
        r.a0 = r.s2;
        muldi3(r, ctx);
        r.s1 = r.v0;
        r.a0 = r.s5;
        r.ra = 0x2E3378u;
        r.a1 = r.s3;
        muldi3(r, ctx);
        r.s0 = r.v0;
        r.a0 = r.s2;
        r.ra = 0x2E3388u;
        r.a1 = r.s3;
        muldi3(r, ctx);
        r.s0 = r.s1 + r.s0;
        r.a1 = LW(sp + 8u);
        r.a0 = r.s0 << 32;
        r.s1 = sltu(r.s0, r.s1);
        r.a0 = r.s4 + r.a0;
        r.s0 >>= 32;
        r.a3 = LW(sp + 0x28u);
        r.s0 &= r.s6;
        r.v1 = LW(sp + 4u);
        r.s1 <<= 32;
        r.a2 = LW(sp + 0x24u);
        r.s4 = sltu(r.a0, r.s4);
        r.s0 += r.v0;
        r.a1 = addu(r.a1, r.a3);
        r.v1 ^= r.a2;
        r.s1 |= r.s4;
        r.a1 = addiu(r.a1, 4);
        r.s1 += r.s0;
        r.v1 = sltu(0u, r.v1);
        r.v0 = 0x1FFFFFFFFFFFFFFFull;
        WRITE32(sp + 0x44u, lo32(r.v1));
        r.v0 = sltu(r.v0, r.s1);
        {
            const bool overLong = r.v0 != 0u;
            WRITE32(sp + 0x48u, lo32(r.a1));
            if (!overLong)
                goto normalize;
        }
        // Shift right until the high word fits, keeping a sticky bit.
        r.a2 = 0x8000000000000000ull;
        r.v1 = 0x1FFFFFFFFFFFFFFFull;
        r.v0 = r.s1 & 1u;
        for (;;)
        {
            r.v0 = sext32(lo32(r.v0));
            {
                const bool bit = r.v0 != 0u;
                r.a1 = addiu(r.a1, 1);
                if (bit)
                {
                    r.a0 >>= 1;
                    r.a0 |= r.a2;
                }
            }
            r.s1 >>= 1;
            r.v0 = sltu(r.v1, r.s1);
            const bool again = r.v0 != 0u;
            r.v0 = r.s1 & 1u;
            if (!again)
                break;
        }
        WRITE32(sp + 0x48u, lo32(r.a1));
    normalize:
        r.v0 = 0x0FFFFFFFFFFFFFFFull;
        r.v0 = sltu(r.v0, r.s1);
        {
            const bool normalized = r.v0 != 0u;
            r.v1 = r.s1 & 0xFFu;
            if (normalized)
                goto round;
        }
        r.a1 = LW(sp + 0x48u);
        r.t0 = 0x8000000000000000ull;
        r.a3 = 1u;
        r.a2 = 0x0FFFFFFFFFFFFFFFull;
        for (;;)
        {
            r.s1 <<= 1;
            r.v1 = r.a0 & r.t0;
            r.v0 = r.s1 | r.a3;
            r.a1 = addiu(r.a1, -1);
            if (r.v1 != 0u)
            {
                r.s1 = r.v0;
                copyHigh(ctx, R_S1, R_V0);
            }
            r.v0 = sltu(r.a2, r.s1);
            const bool again = r.v0 == 0u;
            r.a0 <<= 1;
            if (!again)
                break;
        }
        WRITE32(sp + 0x48u, lo32(r.a1));
        r.v1 = r.s1 & 0xFFu;
    round:
        r.v0 = 0x80u;
        if (r.v1 != r.v0)
        {
            WRITE64(sp + 0x50u, r.s1);
        }
        else
        {
            r.v0 = r.s1 & 0x100u;
            const bool odd = r.v0 != 0u;
            r.v0 = r.s1 + 0x80u;
            if (odd)
            {
                r.s1 += 0x80u;
            }
            else if (r.a0 != 0u)
            {
                r.s1 = r.v0;
                copyHigh(ctx, R_S1, R_V0);
            }
            WRITE64(sp + 0x50u, r.s1);
        }
        r.v0 = 3u;
        WRITE32(lo32(r.s7), 3u);
        r.a0 = r.s7;
    pack:
        r.ra = 0x2E34BCu;
        packD(r, FP_PASS);
        r.ra = READ64(sp + 0xF0u);
        r.s7 = READ64(sp + 0xE0u);
        r.s6 = READ64(sp + 0xD0u);
        r.s5 = READ64(sp + 0xC0u);
        r.s4 = READ64(sp + 0xB0u);
        r.s3 = READ64(sp + 0xA0u);
        r.s2 = READ64(sp + 0x90u);
        r.s1 = READ64(sp + 0x80u);
        r.s0 = READ64(sp + 0x70u);
        r.sp = addiu(r.sp, 0x100);
        storeArith(r, ctx);
        FP_STORE(s1, R_S1); FP_STORE(s2, R_S2); FP_STORE(s3, R_S3); FP_STORE(s4, R_S4);
        FP_STORE(s5, R_S5); FP_STORE(s6, R_S6); FP_STORE(s7, R_S7);
    }

    // dpdiv(a0, a1) at 0x2e34e8: a bit-by-bit 53-step division.
    void nativeDpdiv(FP_ARGS)
    {
        FpRegs r;
        loadArith(r, ctx);
        r.sp = addiu(r.sp, -0x70);
        const uint32_t sp = lo32(r.sp);
        WRITE64(sp + 0x40u, r.a0);
        WRITE64(sp + 0x48u, r.a1);
        r.a0 = addiu(r.sp, 0x40);
        WRITE64(sp + 0x50u, r.s0);
        WRITE64(sp + 0x60u, r.ra);
        r.ra = 0x2E3508u;
        r.a1 = r.sp;
        unpackD(r, FP_PASS);
        r.s0 = addiu(r.sp, 0x20);
        r.a0 = addiu(r.sp, 0x48);
        r.ra = 0x2E3518u;
        r.a1 = r.s0;
        unpackD(r, FP_PASS);
        r.a3 = LW(sp);
        r.v0 = sltiu(r.a3, 2);
        {
            const bool aNan = r.v0 != 0u;
            r.a1 = r.sp;
            if (aNan)
            {
                r.a0 = r.sp;
                goto pack;
            }
        }
        r.a2 = LW(sp + 0x20u);
        r.v0 = sltiu(r.a2, 2);
        {
            const bool bNan = r.v0 != 0u;
            r.a0 = r.s0;
            if (bNan)
                goto pack;
        }
        r.v0 = LW(sp + 4u);
        r.a0 = r.a3 ^ 4u;
        r.v1 = LW(sp + 0x24u);
        r.v0 ^= r.v1;
        {
            const bool aInf = r.a0 == 0u;
            WRITE32(sp + 4u, lo32(r.v0));
            if (aInf)
                goto aInfOrZero;
        }
        r.v0 = r.a3 ^ 2u;
        {
            const bool aNotZero = r.v0 != 0u;
            r.v0 = r.a2 ^ 4u;
            if (aNotZero)
                goto aNumber;
        }
    aInfOrZero:
        {
            const bool differ = r.a3 != r.a2;
            r.a0 = r.sp;
            if (differ)
                goto pack;
        }
        r.v0 = lui(0x1FF);
        r.a0 = addiu(r.v0, 0x5368);
        goto pack;
    aNumber:
        {
            const bool bNotInf = r.v0 != 0u;
            r.v0 = r.a2 ^ 2u;
            if (bNotInf)
                goto bNotInfinite;
        }
        WRITE64(sp + 0x10u, 0u);
        r.a0 = r.sp;
        WRITE32(sp + 8u, 0u);
        goto pack;
    bNotInfinite:
        {
            const bool bNotZero = r.v0 != 0u;
            r.v1 = LW(sp + 8u);
            if (bNotZero)
                goto divide;
        }
        r.v0 = 4u;
        r.a0 = r.sp;
        WRITE32(sp, 4u);
        goto pack;
    divide:
        r.v0 = LW(sp + 0x28u);
        r.a0 = READ64(sp + 0x10u);
        r.t0 = READ64(sp + 0x30u);
        r.v0 = subu(r.v1, r.v0);
        r.a2 = sltu(r.a0, r.t0);
        {
            const bool smaller = r.a2 != 0u;
            WRITE32(sp + 8u, lo32(r.v0));
            if (smaller)
            {
                r.v0 = addiu(r.v0, -1);
                r.a0 <<= 1;
                WRITE32(sp + 8u, lo32(r.v0));
                r.a2 = sltu(r.a0, r.t0);
            }
        }
        r.v0 = 0x1000000000000000ull;
        r.a3 = 0u;
        for (;;)
        {
            if (r.a2 != 0u)
            {
                r.v0 >>= 1;
            }
            else
            {
                r.a3 |= r.v0;
                r.a0 -= r.t0;
                r.v0 >>= 1;
            }
            const bool again = r.v0 != 0u;
            r.a0 <<= 1;
            if (!again)
                break;
            r.a2 = sltu(r.a0, r.t0);
        }
        r.v1 = r.a3 & 0xFFu;
        r.v0 = 0x80u;
        if (r.v1 != r.v0)
        {
            WRITE64(lo32(r.a1) + 0x10u, r.a3);
        }
        else
        {
            r.v0 = r.a3 & 0x100u;
            const bool odd = r.v0 != 0u;
            r.v0 = r.a3 + 0x80u;
            if (odd)
            {
                r.a3 += 0x80u;
            }
            else if (r.a0 != 0u)
            {
                r.a3 = r.v0;
                copyHigh(ctx, R_A3, R_V0);
            }
            WRITE64(lo32(r.a1) + 0x10u, r.a3);
        }
        r.a0 = r.a1;
    pack:
        r.ra = 0x2E3640u;
        packD(r, FP_PASS);
        r.ra = READ64(sp + 0x60u);
        r.s0 = READ64(sp + 0x50u);
        r.sp = addiu(r.sp, 0x70);
        storeArith(r, ctx);
    }

    // dpcmp(a0, a1) at 0x2e3768: v0 = -1, 0, 1.
    void nativeDpcmp(FP_ARGS)
    {
        FpRegs r;
        loadArith(r, ctx);
        r.sp = addiu(r.sp, -0x70);
        const uint32_t sp = lo32(r.sp);
        WRITE64(sp + 0x40u, r.a0);
        WRITE64(sp + 0x48u, r.a1);
        r.a0 = addiu(r.sp, 0x40);
        WRITE64(sp + 0x50u, r.s0);
        WRITE64(sp + 0x60u, r.ra);
        r.ra = 0x2E3788u;
        r.a1 = r.sp;
        unpackD(r, FP_PASS);
        r.s0 = addiu(r.sp, 0x20);
        r.a0 = addiu(r.sp, 0x48);
        r.ra = 0x2E3798u;
        r.a1 = r.s0;
        unpackD(r, FP_PASS);
        r.a1 = r.s0;
        r.ra = 0x2E37A4u;
        r.a0 = r.sp;
        fpcmpPartsD(r, FP_PASS);
        r.ra = READ64(sp + 0x60u);
        r.s0 = READ64(sp + 0x50u);
        r.sp = addiu(r.sp, 0x70);
        storeArith(r, ctx);
    }

    // fptodp(f12) at 0x2e4608: v0 = the double.
    void nativeFptodp(FP_ARGS)
    {
        FpRegs r;
        loadConv(r, ctx);
        r.sp = addiu(r.sp, -0x30);
        const uint32_t sp = lo32(r.sp);
        WRITE64(sp + 0x20u, r.ra);
        r.a0 = addiu(r.sp, 0x10);
        {
            uint32_t bits;
            std::memcpy(&bits, &ctx->f[12], sizeof(bits));
            WRITE32(sp + 0x10u, bits);
        }
        r.ra = 0x2E4620u;
        r.a1 = r.sp;
        unpackF(r, FP_PASS);
        r.a3 = LW(sp + 12u);
        r.a0 = LW(sp);
        r.a3 <<= 32;
        r.a1 = LW(sp + 4u);
        r.a2 = LW(sp + 8u);
        r.ra = 0x2E463Cu;
        r.a3 >>= 2;
        makeDp(r, FP_PASS);
        r.ra = READ64(sp + 0x20u);
        r.sp = addiu(r.sp, 0x30);
        storeConv(r, ctx);
    }

    // dptofp(a0) at 0x2e3a10: f0 = the float.
    void nativeDptofp(FP_ARGS)
    {
        FpRegs r;
        loadConv(r, ctx);
        r.sp = addiu(r.sp, -0x40);
        const uint32_t sp = lo32(r.sp);
        WRITE64(sp + 0x20u, r.a0);
        r.a1 = r.sp;
        WRITE64(sp + 0x30u, r.ra);
        r.ra = 0x2E3A28u;
        r.a0 = addiu(r.sp, 0x20);
        unpackD(r, FP_PASS);
        r.v0 = READ64(sp + 0x10u);
        r.v1 = 0x3FFFFFFFu;
        r.a0 = LW(sp);
        r.t0 = sra32w(r.v0 << 2); // the fraction's top 30 bits, 7 guard bits included
        r.a1 = LW(sp + 4u);
        r.v0 &= r.v1;
        r.a3 = r.t0 | 1u;
        r.a2 = LW(sp + 8u);
        r.ra = 0x2E3A58u;
        if (r.v0 == 0u)
        {
            r.a3 = r.t0;
            copyHigh(ctx, R_A3, R_T0);
        }
        makeFp(r, FP_PASS);
        r.ra = READ64(sp + 0x30u);
        r.sp = addiu(r.sp, 0x40);
        storeConv(r, ctx);
    }

    // fptoui(f12) at 0x2e4508: v0 = the unsigned int (0 below zero, all
    // ones beyond the range). Writes v0, v1, a0, a1, a2, sp, ra.
    void nativeFptoui(FP_ARGS)
    {
        FpRegs r;
        FP_LOAD(v0, R_V0); FP_LOAD(v1, R_V1); FP_LOAD(a0, R_A0); FP_LOAD(a1, R_A1); FP_LOAD(a2, R_A2);
        FP_LOAD(sp, R_SP); FP_LOAD(ra, R_RA);
        r.sp = addiu(r.sp, -0x30);
        const uint32_t sp = lo32(r.sp);
        WRITE64(sp + 0x20u, r.ra);
        r.a0 = addiu(r.sp, 0x10);
        {
            uint32_t bits;
            std::memcpy(&bits, &ctx->f[12], sizeof(bits));
            WRITE32(sp + 0x10u, bits);
        }
        r.ra = 0x2E4520u;
        r.a1 = r.sp;
        unpackF(r, FP_PASS);
        r.v1 = LW(sp);
        r.v0 = r.v1 ^ 2u;
        {
            const bool zero = r.v0 == 0u;
            r.v0 = sltiu(r.v1, 2);
            if (zero)
                goto zeroResult;
        }
        {
            const bool nan = r.v0 != 0u;
            r.v0 = LW(sp + 4u);
            if (nan)
                goto zeroResult;
        }
        {
            const bool negative = r.v0 != 0u;
            r.v0 = 0u;
            if (negative)
                goto done;
        }
        r.v0 = r.v1 ^ 4u;
        {
            const bool inf = r.v0 == 0u;
            r.a0 = LW(sp + 8u);
            if (inf)
                goto saturate;
        }
        {
            const bool belowOne = static_cast<int64_t>(r.a0) < 0;
            r.v0 = slti(r.a0, 0x20);
            if (belowOne)
                goto zeroResult;
        }
        if (r.v0 != 0u)
        {
            r.v0 = slti(r.a0, 0x1F);
            if (r.v0 != 0u)
            {
                r.v0 = 0x1Eu;
                r.v1 = LW(sp + 12u);
                r.v0 = subu(r.v0, r.a0);
                r.v0 = srl32(r.v1, lo32(r.v0) & 31u);
                goto done;
            }
            r.v1 = LW(sp + 12u);
            r.v0 = addiu(r.a0, -0x1E);
            r.v0 = sll32(r.v1, lo32(r.v0) & 31u);
            goto done;
        }
    saturate:
        r.v0 = lui(0xFFFF);
        r.v0 |= 0xFFFFu;
        goto done;
    zeroResult:
        r.v0 = 0u;
    done:
        r.ra = READ64(sp + 0x20u);
        r.sp = addiu(r.sp, 0x30);
        FP_STORE(v0, R_V0); FP_STORE(v1, R_V1); FP_STORE(a0, R_A0); FP_STORE(a1, R_A1); FP_STORE(a2, R_A2);
        FP_STORE(sp, R_SP); FP_STORE(ra, R_RA);
        ctx->pc = lo32(r.ra);
    }

    // dptoli(a0) at 0x2e3870: v0 = the int (saturated). Writes v0, v1, a0,
    // a1, sp, ra.
    void nativeDptoli(FP_ARGS)
    {
        FpRegs r;
        FP_LOAD(v0, R_V0); FP_LOAD(v1, R_V1); FP_LOAD(a0, R_A0); FP_LOAD(a1, R_A1);
        FP_LOAD(sp, R_SP); FP_LOAD(ra, R_RA);
        r.sp = addiu(r.sp, -0x40);
        const uint32_t sp = lo32(r.sp);
        WRITE64(sp + 0x20u, r.a0);
        r.a1 = r.sp;
        WRITE64(sp + 0x30u, r.ra);
        r.ra = 0x2E3888u;
        r.a0 = addiu(r.sp, 0x20);
        unpackD(r, FP_PASS);
        r.v1 = LW(sp);
        r.v0 = r.v1 ^ 2u;
        {
            const bool zero = r.v0 == 0u;
            r.v0 = sltiu(r.v1, 2);
            if (zero)
                goto zeroResult;
        }
        {
            const bool nan = r.v0 != 0u;
            r.v0 = r.v1 ^ 4u;
            if (nan)
                goto zeroResult;
        }
        {
            const bool inf = r.v0 == 0u;
            r.a0 = LW(sp + 8u);
            if (inf)
                goto saturate;
        }
        {
            const bool belowOne = static_cast<int64_t>(r.a0) < 0;
            r.v0 = slti(r.a0, 0x1F);
            if (belowOne)
                goto zeroResult;
        }
        {
            const bool fits = r.v0 != 0u;
            r.v1 = 0x3Cu;
            if (fits)
                goto convert;
        }
    saturate:
        r.v1 = LW(sp + 4u);
        r.v0 = 0x7FFFFFFFu;
        r.a0 = lui(0x8000);
        if (r.v1 != 0u)
        {
            r.v0 = r.a0;
            copyHigh(ctx, R_V0, R_A0);
        }
        goto done;
    convert:
        r.v0 = READ64(sp + 0x10u);
        r.v1 = subu(r.v1, r.a0);
        r.v0 >>= (lo32(r.v1) & 63u);
        r.a0 = LW(sp + 4u);
        r.v0 = sext32(lo32(r.v0));
        r.v1 = subu(0u, r.v0);
        if (r.a0 != 0u)
        {
            r.v0 = r.v1;
            copyHigh(ctx, R_V0, R_V1);
        }
        goto done;
    zeroResult:
        r.v0 = 0u;
    done:
        r.ra = READ64(sp + 0x30u);
        r.sp = addiu(r.sp, 0x40);
        FP_STORE(v0, R_V0); FP_STORE(v1, R_V1); FP_STORE(a0, R_A0); FP_STORE(a1, R_A1);
        FP_STORE(sp, R_SP); FP_STORE(ra, R_RA);
        ctx->pc = lo32(r.ra);
    }

    // dptoul(a0) at 0x2e3908: v0 = the unsigned int. Writes v0, v1, a0,
    // a1, sp, ra.
    void nativeDptoul(FP_ARGS)
    {
        FpRegs r;
        FP_LOAD(v0, R_V0); FP_LOAD(v1, R_V1); FP_LOAD(a0, R_A0); FP_LOAD(a1, R_A1);
        FP_LOAD(sp, R_SP); FP_LOAD(ra, R_RA);
        r.sp = addiu(r.sp, -0x40);
        const uint32_t sp = lo32(r.sp);
        WRITE64(sp + 0x20u, r.a0);
        r.a1 = r.sp;
        WRITE64(sp + 0x30u, r.ra);
        r.ra = 0x2E3920u;
        r.a0 = addiu(r.sp, 0x20);
        unpackD(r, FP_PASS);
        r.v1 = LW(sp);
        r.v0 = r.v1 ^ 2u;
        {
            const bool zero = r.v0 == 0u;
            r.v0 = sltiu(r.v1, 2);
            if (zero)
                goto zeroResult;
        }
        {
            const bool nan = r.v0 != 0u;
            r.v0 = LW(sp + 4u);
            if (nan)
                goto zeroResult;
        }
        {
            const bool negative = r.v0 != 0u;
            r.v0 = 0u;
            if (negative)
                goto done;
        }
        r.v0 = r.v1 ^ 4u;
        {
            const bool inf = r.v0 == 0u;
            r.a0 = LW(sp + 8u);
            if (inf)
                goto saturate;
        }
        {
            const bool belowOne = static_cast<int64_t>(r.a0) < 0;
            r.v0 = slti(r.a0, 0x20);
            if (belowOne)
                goto zeroResult;
        }
        if (r.v0 != 0u)
        {
            r.v0 = slti(r.a0, 0x3D);
            {
                const bool shiftRight = r.v0 != 0u;
                r.v1 = 0x3Cu;
                if (shiftRight)
                {
                    r.v0 = READ64(sp + 0x10u);
                    r.v1 = subu(r.v1, r.a0);
                    r.v0 >>= (lo32(r.v1) & 63u);
                    r.v0 = sext32(lo32(r.v0));
                    goto done;
                }
            }
            r.v0 = READ64(sp + 0x10u);
            r.v1 = addiu(r.a0, -0x3C);
            r.v0 <<= (lo32(r.v1) & 63u);
            r.v0 = sext32(lo32(r.v0));
            goto done;
        }
    saturate:
        r.v0 = lui(0xFFFF);
        r.v0 |= 0xFFFFu;
        goto done;
    zeroResult:
        r.v0 = 0u;
    done:
        r.ra = READ64(sp + 0x30u);
        r.sp = addiu(r.sp, 0x40);
        FP_STORE(v0, R_V0); FP_STORE(v1, R_V1); FP_STORE(a0, R_A0); FP_STORE(a1, R_A1);
        FP_STORE(sp, R_SP); FP_STORE(ra, R_RA);
        ctx->pc = lo32(r.ra);
    }

    // The helpers as entry points of their own: other translated code
    // (litodp, the single-precision soft-float set) calls them too.
    void nativeUnpackD(FP_ARGS)
    {
        FpRegs r;
        FP_LOAD(v0, R_V0); FP_LOAD(v1, R_V1); FP_LOAD(a0, R_A0); FP_LOAD(a1, R_A1); FP_LOAD(ra, R_RA);
        unpackD(r, FP_PASS);
        FP_STORE(v0, R_V0); FP_STORE(v1, R_V1); FP_STORE(a0, R_A0);
        ctx->pc = lo32(r.ra);
    }

    void nativePackD(FP_ARGS)
    {
        FpRegs r;
        loadConv(r, ctx);
        packD(r, FP_PASS);
        storeConv(r, ctx);
    }

    void nativeFpaddParts(FP_ARGS)
    {
        FpRegs r;
        loadArith(r, ctx);
        fpaddParts(r, FP_PASS);
        storeArith(r, ctx);
    }

    void nativeFpcmpPartsD(FP_ARGS)
    {
        FpRegs r;
        loadConv(r, ctx);
        fpcmpPartsD(r, FP_PASS);
        storeConv(r, ctx);
    }

    void nativeMakeDp(FP_ARGS)
    {
        FpRegs r;
        loadConv(r, ctx);
        makeDp(r, FP_PASS);
        storeConv(r, ctx);
    }

    void nativeUnpackF(FP_ARGS)
    {
        FpRegs r;
        FP_LOAD(v0, R_V0); FP_LOAD(v1, R_V1); FP_LOAD(a0, R_A0); FP_LOAD(a1, R_A1); FP_LOAD(a2, R_A2);
        FP_LOAD(ra, R_RA);
        unpackF(r, FP_PASS);
        FP_STORE(v0, R_V0); FP_STORE(v1, R_V1); FP_STORE(a0, R_A0); FP_STORE(a2, R_A2);
        ctx->pc = lo32(r.ra);
    }

    void nativePackF(FP_ARGS)
    {
        FpRegs r;
        loadConv(r, ctx);
        packF(r, FP_PASS);
        storeConv(r, ctx);
    }

    void nativeMakeFp(FP_ARGS)
    {
        FpRegs r;
        loadConv(r, ctx);
        makeFp(r, FP_PASS);
        storeConv(r, ctx);
    }

    // ---- The boot-time differential test (the same scheme as
    // ts_native_math.cpp: random context and scratch memory, the original
    // and the native version run from the same state, every context word
    // and scratch byte compared). All results here are integer bits, so
    // NaN payloads must match too.

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
        uint64_t next64() { return static_cast<uint64_t>(next()) << 32 | next(); }
    };

    constexpr uint32_t kScratch = 0x000C0000u; // the HLE kernel's callback-stack arena, unused at boot
    constexpr uint32_t kScratchBytes = 0x480u;
    constexpr uint32_t kOperandBytes = 0x100u; // record slots at the bottom; the stack above
    constexpr uint32_t kTestReturn = 0x00012340u;
    constexpr uint32_t kGameGp = 0x003B47F0u;
    constexpr int kTestCases = 10000;

    // Doubles of every class: everyday values, zeros, infinities, quiet and
    // signalling NaNs with payloads, denormals, the top and bottom of the
    // exponent range, short mantissas (exact halfway cases in the sums and
    // products) and plain random bits.
    uint64_t randomDoubleBits(TestRng &rng)
    {
        const uint32_t pick = rng.next();
        const uint64_t sign = static_cast<uint64_t>(pick & 1u) << 63;
        const uint64_t bits = rng.next64();
        switch ((pick >> 1) & 15u)
        {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        {
            // Everyday: an exponent within +-40 of 1, a random mantissa.
            const uint64_t exponent = 0x3FFu - 40u + (pick >> 8) % 81u;
            return sign | exponent << 52 | (bits & 0x000FFFFFFFFFFFFFull);
        }
        case 5: return sign;                                                  // +-0
        case 6: return sign | 0x7FF0000000000000ull;                          // +-Inf
        case 7: return sign | 0x7FF0000000000000ull | (bits & 0x000FFFFFFFFFFFFFull) | 1u; // NaN, quiet or signalling
        case 8: return sign | (bits & 0x000FFFFFFFFFFFFFull) | 1u;            // denormal
        case 9: return sign | (0x7FFull - (pick >> 8) % 60u) << 52 | (bits & 0x000FFFFFFFFFFFFFull); // huge
        case 10: return sign | (1ull + (pick >> 8) % 60u) << 52 | (bits & 0x000FFFFFFFFFFFFFull);    // tiny
        case 11:
        case 12:
        {
            // Short mantissa: 1 to 30 significant bits, exponent near 1.
            const uint32_t keep = 1u + (pick >> 8) % 30u;
            const uint64_t exponent = 0x3FFu - 30u + (pick >> 13) % 61u;
            return sign | exponent << 52 | ((bits & 0x000FFFFFFFFFFFFFull) & ~((1ull << (52u - keep)) - 1u));
        }
        case 13:
        {
            // Integers up to 2^63: the int conversions' boundaries.
            const uint64_t exponent = 0x3FFu + (pick >> 8) % 68u;
            return sign | exponent << 52 | (bits & 0x000FFFFFFFFFFFFFull);
        }
        default: return bits;
        }
    }

    uint32_t randomFloatBits(TestRng &rng)
    {
        const uint32_t pick = rng.next(), bits = rng.next();
        const uint32_t sign = pick & 0x80000000u;
        switch ((pick >> 1) & 7u)
        {
        case 0:
        case 1:
        case 2: return sign | (0x7Fu - 20u + (pick >> 8) % 60u) << 23 | (bits & 0x7FFFFFu); // everyday
        case 3: return sign;                                                             // +-0
        case 4: return sign | 0x7F800000u;                                               // +-Inf
        case 5: return sign | 0x7F800000u | (bits & 0x7FFFFFu) | 1u;                     // NaN
        case 6: return sign | (bits & 0x7FFFFFu) | 1u;                                   // subnormal
        default: return bits;
        }
    }

    void setGpr(R5900Context &c, int reg, uint64_t value)
    {
        R5900Context *ctx = &c;
        SET_GPR_U64(ctx, reg, value);
    }

    void setFloat(R5900Context &c, int reg, uint32_t bits) { std::memcpy(&c.f[reg], &bits, sizeof(bits)); }

    void write32(uint8_t *rdram, uint32_t address, uint32_t value) { std::memcpy(rdram + address, &value, sizeof(value)); }
    void write64(uint8_t *rdram, uint32_t address, uint64_t value) { std::memcpy(rdram + address, &value, sizeof(value)); }

    // A pointer argument: one of four 64-byte slots, with junk above bit 31
    // now and then (the originals' 32-bit address arithmetic drops it).
    uint64_t slotPointer(TestRng &rng, uint32_t slot)
    {
        const uint64_t high = (rng.next() & 7u) == 0u ? static_cast<uint64_t>(rng.next()) << 32 : 0u;
        return high | (kScratch + slot * 64u);
    }

    // A record as the unpack routines produce it, now and then a stray one.
    void writeRecord(TestRng &rng, uint8_t *rdram, uint32_t at, bool single)
    {
        const uint32_t pick = rng.next();
        const uint32_t cls = (pick & 31u) == 0u ? rng.next() : pick % 5u;
        write32(rdram, at, cls);
        write32(rdram, at + 4u, (pick >> 8) & 1u);
        int32_t exponent;
        switch ((pick >> 9) & 7u)
        {
        case 0: exponent = static_cast<int32_t>(rng.next()); break;
        case 1: exponent = static_cast<int32_t>(rng.next() % 2400u) - 1200; break;
        default: exponent = static_cast<int32_t>(rng.next() % 200u) - 100; break;
        }
        write32(rdram, at + 8u, static_cast<uint32_t>(exponent));
        if (single)
        {
            uint32_t fraction = rng.next();
            if ((pick & 0x3000u) != 0u)
                fraction = 0x40000000u | (fraction & 0x3FFFFFFFu); // normalized, 7 guard bits
            if ((pick & 0xC000u) == 0u)
                fraction &= ~0x7Fu;
            write32(rdram, at + 12u, fraction);
        }
        else
        {
            uint64_t fraction = rng.next64();
            if ((pick & 0x3000u) != 0u)
                fraction = 0x1000000000000000ull | (fraction & 0x0FFFFFFFFFFFFFFFull); // bit 60: normalized
            if ((pick & 0xC000u) == 0u)
                fraction &= ~0xFFull; // exact halfway cases in the rounding
            write64(rdram, at + 16u, fraction);
        }
    }

    void setupDoublePair(TestRng &rng, R5900Context &c, uint8_t *)
    {
        setGpr(c, R_A0, randomDoubleBits(rng));
        setGpr(c, R_A1, randomDoubleBits(rng));
    }

    void setupDouble(TestRng &rng, R5900Context &c, uint8_t *) { setGpr(c, R_A0, randomDoubleBits(rng)); }

    void setupFloat(TestRng &rng, R5900Context &c, uint8_t *) { setFloat(c, 12, randomFloatBits(rng)); }

    // unpack: a double in slot 0, the record to slot 1.
    void setupUnpackD(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        write64(rdram, kScratch, randomDoubleBits(rng));
        setGpr(c, R_A0, slotPointer(rng, 0));
        setGpr(c, R_A1, slotPointer(rng, 1));
    }

    void setupUnpackF(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        write32(rdram, kScratch, randomFloatBits(rng));
        setGpr(c, R_A0, slotPointer(rng, 0));
        setGpr(c, R_A1, slotPointer(rng, 1));
    }

    void setupPackD(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        writeRecord(rng, rdram, kScratch, false);
        setGpr(c, R_A0, slotPointer(rng, 0));
    }

    void setupPackF(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        writeRecord(rng, rdram, kScratch, true);
        setGpr(c, R_A0, slotPointer(rng, 0));
    }

    // Two records in slots 0 and 1, the result slot 2 (or one of the
    // operands: dpadd never does that, but the routine must not care).
    void setupTwoRecords(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        writeRecord(rng, rdram, kScratch, false);
        writeRecord(rng, rdram, kScratch + 64u, false);
        setGpr(c, R_A0, slotPointer(rng, 0));
        setGpr(c, R_A1, slotPointer(rng, 1));
        setGpr(c, R_A2, slotPointer(rng, 2));
    }

    // make_dp / make_fp: class, sign, exponent and fraction in a0-a3.
    void setupParts(TestRng &rng, R5900Context &c, uint8_t *)
    {
        const uint32_t pick = rng.next();
        setGpr(c, R_A0, (pick & 31u) == 0u ? rng.next64() : pick % 5u);
        setGpr(c, R_A1, rng.next64() & ((pick & 32u) != 0u ? ~0ull : 1ull));
        setGpr(c, R_A2, static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(rng.next() % 2400u) - 1200)));
        setGpr(c, R_A3, (pick & 64u) != 0u ? rng.next64() : static_cast<uint64_t>(rng.next()));
    }

    struct NativeFp
    {
        const char *name;
        uint32_t address;
        GuestFunction original, native;
        void (*setup)(TestRng &, R5900Context &, uint8_t *rdram);
    };

    const NativeFp kNativeFp[] = {
        {"__unpack_d", 0x2E2EA0u, &ps2___unpack_d_0x2e2ea0, &nativeUnpackD, &setupUnpackD},
        {"__pack_d", 0x2E2D70u, &ps2___pack_d_0x2e2d70, &nativePackD, &setupPackD},
        {"_fpadd_parts", 0x2E2F40u, &_fpadd_parts_0x2e2f40, &nativeFpaddParts, &setupTwoRecords},
        {"__fpcmp_parts_d", 0x2E3650u, &ps2___fpcmp_parts_d_0x2e3650, &nativeFpcmpPartsD, &setupTwoRecords},
        {"__make_dp", 0x2E39E0u, &ps2___make_dp_0x2e39e0, &nativeMakeDp, &setupParts},
        {"__unpack_f", 0x2E3B78u, &ps2___unpack_f_0x2e3b78, &nativeUnpackF, &setupUnpackF},
        {"__pack_f", 0x2E3A68u, &ps2___pack_f_0x2e3a68, &nativePackF, &setupPackF},
        {"__make_fp", 0x2E45D8u, &ps2___make_fp_0x2e45d8, &nativeMakeFp, &setupParts},
        {"dpadd", 0x2E3180u, &dpadd_0x2e3180, &nativeDpadd, &setupDoublePair},
        {"dpsub", 0x2E31D8u, &dpsub_0x2e31d8, &nativeDpsub, &setupDoublePair},
        {"dpmul", 0x2E3240u, &dpmul_0x2e3240, &nativeDpmul, &setupDoublePair},
        {"dpdiv", 0x2E34E8u, &dpdiv_0x2e34e8, &nativeDpdiv, &setupDoublePair},
        {"dpcmp", 0x2E3768u, &dpcmp_0x2e3768, &nativeDpcmp, &setupDoublePair},
        {"fptodp", 0x2E4608u, &fptodp_0x2e4608, &nativeFptodp, &setupFloat},
        {"dptofp", 0x2E3A10u, &dptofp_0x2e3a10, &nativeDptofp, &setupDouble},
        {"fptoui", 0x2E4508u, &fptoui_0x2e4508, &nativeFptoui, &setupFloat},
        {"dptoli", 0x2E3870u, &dptoli_0x2e3870, &nativeDptoli, &setupDouble},
        {"dptoul", 0x2E3908u, &dptoul_0x2e3908, &nativeDptoul, &setupDouble},
    };
    constexpr uint32_t kNativeFpCount = sizeof(kNativeFp) / sizeof(kNativeFp[0]);

#if TS_NATIVE_MATH_SELFTEST
    __m128 randomVector(TestRng &rng)
    {
        return _mm_castsi128_ps(
            _mm_set_epi32(randomFloatBits(rng), randomFloatBits(rng), randomFloatBits(rng), randomFloatBits(rng)));
    }

    // The registers these functions read, new for every case (whole 128
    // bits: movn/movz copy the upper half). The rest of the context is
    // randomised once per function.
    void randomInputs(TestRng &rng, R5900Context &c)
    {
        for (int i : {R_V0, R_V1, R_A0, R_A1, R_A2, R_A3, R_T0, R_S0, R_S1})
            c.r[i] = _mm_set_epi32(rng.next(), rng.next(), rng.next(), rng.next());
        setFloat(c, 12, randomFloatBits(rng));
        c.hi = rng.next64();
        c.lo = rng.next64();
    }

    void randomContext(TestRng &rng, R5900Context &c)
    {
        for (int i = 1; i < 32; ++i)
            c.r[i] = _mm_set_epi32(rng.next(), rng.next(), rng.next(), rng.next());
        c.hi1 = rng.next64();
        c.lo1 = rng.next64();
        for (__m128 &vf : c.vu0_vf)
            vf = randomVector(rng);
        for (int i = 0; i < 32; ++i)
            setFloat(c, i, randomFloatBits(rng));
        c.fcr31 = rng.next();
        c.branch_pc = rng.next();
        R5900Context *ctx = &c;
        SET_GPR_U32(ctx, 28, kGameGp);
        SET_GPR_U32(ctx, R_SP, kScratch + kScratchBytes);
        SET_GPR_U32(ctx, R_RA, kTestReturn);
        randomInputs(rng, c);
    }

    struct Difference
    {
        uint32_t words = 0;
        uint32_t where = 0, want = 0, got = 0;
    };

    // branch_pc is read only for an exception in a delay slot; the original
    // leaves its last branch there, the native code nothing.
    bool ignoredWord(size_t offset)
    {
        return offset >= offsetof(R5900Context, branch_pc) &&
               offset < offsetof(R5900Context, branch_pc) + sizeof(R5900Context::branch_pc);
    }

    void compareWords(const uint8_t *want, const uint8_t *got, uint32_t bytes, bool context, Difference &difference)
    {
        if (std::memcmp(want, got, bytes) == 0)
            return;
        for (uint32_t offset = 0; offset < bytes; offset += 4u)
        {
            uint32_t a, b;
            std::memcpy(&a, want + offset, sizeof(a));
            std::memcpy(&b, got + offset, sizeof(b));
            if (a == b || (context && ignoredWord(offset)))
                continue;
            if (difference.words++ == 0u)
            {
                difference.where = offset;
                difference.want = a;
                difference.got = b;
            }
        }
    }

    void runGuest(PS2Runtime &runtime, uint8_t *rdram, R5900Context &ctx, GuestFunction function, uint32_t entry)
    {
        ctx.pc = entry;
        function(rdram, &ctx, &runtime);
        for (uint32_t n = 0; ctx.pc != kTestReturn && n < 100000u && runtime.hasFunction(ctx.pc); ++n)
            runtime.lookupFunction(ctx.pc)(rdram, &ctx, &runtime);
    }

    // The originals' loops and calls run scheduler checkpoints; none may
    // come due or charge cycles before the game runs (see
    // ts_native_math.cpp).
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

    uint32_t g_testSeed = 0; // a host harness varies it between batches

    uint32_t testFunction(PS2Runtime &runtime, uint8_t *rdram, const NativeFp &fn, int cases)
    {
        static R5900Context base, want, got;
        static uint8_t before[kScratchBytes], wantMemory[kScratchBytes];
        TestRng rng{0x9E3779B9u ^ fn.address ^ g_testSeed};
        uint32_t mismatches = 0;
        for (uint32_t offset = 0; offset < kScratchBytes; offset += 4u)
            write32(rdram, kScratch + offset, rng.next());
        randomContext(rng, base);
        for (int i = 0; i < cases; ++i)
        {
            randomInputs(rng, base);
            for (uint32_t offset = 0; offset < kOperandBytes; offset += 4u)
                write32(rdram, kScratch + offset, rng.next());
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
                         sizeof(R5900Context), true, regs);
            compareWords(wantMemory, rdram + kScratch, kScratchBytes, false, memory);
            if (regs.words != 0u || memory.words != 0u)
            {
                if (mismatches++ == 0u)
                {
                    const Difference &first = regs.words != 0u ? regs : memory;
                    uint32_t f12;
                    std::memcpy(&f12, &base.f[12], sizeof(f12));
                    R5900Context *in = &base;
                    std::fprintf(stderr,
                                 "[TS:fp] %s case %d: %s0x%x want %08x got %08x (a0=%08x%08x a1=%08x%08x f12=%08x)\n",
                                 fn.name, i, regs.words != 0u ? "ctx+" : "mem ",
                                 regs.words != 0u ? first.where : kScratch + first.where, first.want, first.got,
                                 static_cast<uint32_t>(GPR_U64(in, R_A0) >> 32), GPR_U32(in, R_A0),
                                 static_cast<uint32_t>(GPR_U64(in, R_A1) >> 32), GPR_U32(in, R_A1), f12);
                }
            }
        }
        return mismatches;
    }

    // Tests every function against its original before any replacement
    // (the originals call one another through the function table).
    // Returns the set of functions that passed.
    uint32_t selfTest(PS2Runtime &runtime)
    {
        uint8_t *rdram = runtime.memory().getRDRAM();
        const auto start = std::chrono::steady_clock::now();
        static uint8_t saved[kScratchBytes];
        std::memcpy(saved, rdram + kScratch, kScratchBytes);
        uint32_t passed = 0, failed = 0, mismatches = 0;
        {
            ClockHold hold(runtime);
            for (uint32_t i = 0; i < kNativeFpCount; ++i)
            {
                const NativeFp &fn = kNativeFp[i];
                const uint32_t differ = testFunction(runtime, rdram, fn, kTestCases);
                mismatches += differ;
                if (differ == 0u)
                {
                    passed |= 1u << i;
                }
                else
                {
                    ++failed;
                    if (!g_tsNativeMath.firstFailed)
                        g_tsNativeMath.firstFailed = fn.name;
                }
                std::fprintf(stderr, "[TS:fp] %-16s %s: %d cases, %u differ\n", fn.name, differ != 0u ? "ORIGINAL" : "native",
                             kTestCases, differ);
            }
        }
        std::memcpy(rdram + kScratch, saved, kScratchBytes);
        g_tsNativeMath.mismatches += mismatches;
        g_tsNativeMath.failed += failed;
        const auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - start);
        std::fprintf(stderr, "[TS:fp] self-test: %u of %u native, %u cases differ, %u ms\n", kNativeFpCount - failed,
                     kNativeFpCount, mismatches, static_cast<uint32_t>(ms.count()));
        return passed;
    }
#endif
}

void registerTsNativeFp(PS2Runtime &runtime)
{
    uint32_t enabled = (1u << kNativeFpCount) - 1u;
#if TS_NATIVE_MATH_SELFTEST
    enabled = selfTest(runtime);
#endif
    uint32_t native = 0;
    for (uint32_t i = 0; i < kNativeFpCount; ++i)
    {
        if ((enabled & (1u << i)) != 0u)
        {
            runtime.replaceFunction(kNativeFp[i].address, kNativeFp[i].native);
            ++native;
        }
    }
    g_tsNativeMath.native += native;
}
#endif
