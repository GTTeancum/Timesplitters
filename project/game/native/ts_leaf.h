// Exact inline leaf cores (src/xbox/PUSH-BC-PLAN.md section 3.6 item 4;
// section 6, I-12; owned by B-LOGIC, sub-owner L1). B-CODEGEN's
// direct_calls.py emits inline calls to the cores listed in
// src/xbox/tools/leaf_whitelist.txt at translated call sites
// (PS2X_LEAF_CALL), respecting the per-callee observed-register sets of
// ts_abi_observed.h.
//
// The contract (B-CODEGEN's PS2X_LEAF_CALL):
//     void core(uint8_t *rdram, R5900Context *ctx);
// the exact register and memory effects of the original, never yields,
// never unwinds, never touches ctx->pc (the call site sets it). Each core
// here is the body of the boot-tested native in project/game/ts_native_math.cpp
// (same operations, same order, same scratch registers), lifted into a
// plain inline function; the natives there stay the table entries.
// TS_LEAF_BOOTTEST=1 (src/xbox/mk/b_logic.mk) tests each core against its
// translated original at boot (ts_native_idiom.cpp, [TS:leaf]).
#pragma once
#include <cstdint>

#if defined(PLATFORM_XBOX)
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"

#include <cstring>

namespace ts_leaf
{
    namespace detail
    {
        inline float floatOf(uint32_t bits)
        {
            float f;
            std::memcpy(&f, &bits, sizeof(f));
            return f;
        }
        inline uint32_t lo32(uint64_t v) { return static_cast<uint32_t>(v); }
        inline uint64_t sext32(uint64_t v)
        {
            return static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(static_cast<uint32_t>(v))));
        }
    }

    // fabsf(x) at 0x2dc5a0, as the library does it: through $v1 with a
    // 0x7FFFFFFF mask in $v0.
    inline void fabsfCore(uint8_t *rdram, R5900Context *ctx)
    {
        (void)rdram;
        uint32_t bits;
        std::memcpy(&bits, &ctx->f[12], sizeof(bits));
        bits &= 0x7FFFFFFFu;
        SET_GPR_U64(ctx, 3, bits);
        SET_GPR_U64(ctx, 2, 0x7FFFFFFFu);
        std::memcpy(&ctx->f[0], &bits, sizeof(bits));
    }

    // anglediff(a, b) at 0x284e38: b - a wrapped into [-180, 180] once.
    // Writes $f0, $f13, $at and the FPU condition.
    inline void anglediffCore(uint8_t *rdram, R5900Context *ctx)
    {
        (void)rdram;
        using detail::floatOf;
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
        SET_GPR_U64(ctx, 1, detail::sext32(at));
    }

    // __muldi3(a, b) at 0x2e4648: the 64-bit product from three 32-bit
    // multiplies (mult, mult1, multu), with the same HI/LO, HI1/LO1 and
    // scratch values.
    inline void muldi3Core(uint8_t *rdram, R5900Context *ctx)
    {
        (void)rdram;
        using detail::lo32;
        using detail::sext32;
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
    }
}
#endif
