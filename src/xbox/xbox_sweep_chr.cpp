// The sweep's CHR package (xbox_sweep.h): the characters' AI tick.
//
// Where a character's ~370 us a frame goes (chrPropTick, inclusive): the
// AI's movement step (enemyTick -> updatePos) collides the character
// against the level (moveTestDoSlide, the PLAYER package's), and turns it
// (rotateChr). rotateChr is the largest piece this package owns: it works
// out two bearings a frame with the game's double-precision atan2, and the
// PS2 has no double FPU, so every double operation is a call into libgcc's
// soft-float routines. atan2 alone is about 55 of those calls (fdlibm's
// atan: a polynomial of 11 terms in double, plus the argument reduction),
// each a dispatched call through unpack/operate/pack, and rotateChr makes
// ~20 more for its comparisons (fptodp + dpcmp pairs). That is ~130 soft
// double calls per character per frame.
//
// What this file installs:
//
// rotateChr (0x2bc5d0): the same function with its soft doubles done in
//   place. The double operations are an exact re-implementation of the
//   fp-bit routines on their fast path: operands zero or normal, results
//   zero or normal. There fp-bit rounds to nearest even with guard and
//   sticky bits (its multiply folds the low product bits into the
//   rounding, its divide keeps the remainder, its add shifts with a sticky
//   bit, dptofp keeps a sticky bit), i.e. it is IEEE-754 binary64, and so
//   is the integer arithmetic here. Anything else (NaN, infinity, a
//   denormal operand or result, a division by zero, atan2's error path,
//   a NaN square root) abandons the native run before it has written
//   anything and runs the previous implementation from the start, on the
//   untouched context: the same result by construction. atan2 / atan are
//   the guest's own fdlibm control flow, constants read from the game's
//   tables, every operation in the guest's order. atan2f / atanf (float)
//   are transcribed the same way on host floats (SSE: one IEEE single
//   operation per guest operation, in the guest's order). anglediff and
//   curAnim are inlined leaves. All writes are staged and done at the end:
//   prop +0x4C/+0x50/+0x54, the character's +0xADC/+0xAE0/+0xB98/+0xB9C,
//   the function's own stack frame (saved registers, and the aim vector at
//   sp+0..8 that a later call can read back uninitialised). Not reproduced:
//   the dead stack below the frame (the soft-double callees' frames) and
//   the caller-saved registers (v0/v1/a*/t*, f0-f19, LO/HI, the FPU
//   condition bit); rotateChr is void and its compiled callers never read
//   those after the call.
//
// findpadslinked2pad (0x264a18): the scan of the whole pad-link table for
//   one pad's neighbours (four players every frame in aiTickBefore, every
//   bot in updateNPCPadPos): a tight native loop with the original's
//   register results, the same stores in the same order, the loop's
//   checkpoint cycles charged once at the end.
//
// closestpadinlist (0x266c58): the nearest of those pads (float distance
//   and sqrt in the guest's order), registers and frame as the original.
//
// atan2 (0x2d7510), atan (0x2d6ba8), atan2f (0x2d7d68), atanf (0x2dc2f8):
//   the same kernels installed globally (bulletTick's six atan2 calls, the
//   camera, the HUD radar, the AI's atan2f). Off the fast path: the
//   previous implementation from the start.
//
// TS_SWEEP_CHR_SOFTDOUBLE (default 0, no package owns them): dpadd, dpsub,
//   dpmul, dpdiv, dpcmp, fptodp and dptofp themselves on the same kernel,
//   so every soft-double caller (updatePos, setAnimation, attack, camTick,
//   bulletTick, ...) pays a dispatch instead of an unpack/operate/pack.
//   Their own frames' saved-register slots are stored; fp-bit's unpack
//   records inside those frames are not.
//
// TS_SWEEP_CHR_SELFTEST (default 1): at boot each replacement runs against
// the implementation it replaces on random inputs (the soft-double kernel
// and atan2/atan2f against the guest routines too); one that differs is
// not installed.
#include "xbox_sweep.h"

#if defined(PLATFORM_XBOX)
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "runtime/ee_scheduler.h"
#include "../../project/game/ts_native_selftest.h"

#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#ifndef TS_SWEEP_CHR_SELFTEST
#define TS_SWEEP_CHR_SELFTEST 1
#endif
// 1: also install the soft-double routines (dpadd, dpsub, dpmul, dpdiv,
// dpcmp, fptodp, dptofp) globally. Off: no package owns them yet.
#ifndef TS_SWEEP_CHR_SOFTDOUBLE
#define TS_SWEEP_CHR_SOFTDOUBLE 0
#endif

namespace
{
    using GuestFunction = PS2Runtime::RecompiledFunction;

#define SC_INL inline __attribute__((always_inline))
#define G_ARGS uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime
#define G_PASS rdram, ctx, runtime

    constexpr uint32_t kRotateChr = 0x2BC5D0u, kFindPads = 0x264A18u, kClosestPad = 0x266C58u;

    GuestFunction g_prevRotateChr = nullptr, g_prevClosestPad = nullptr;
    uint32_t g_rotateFast = 0; // native runs that finished (the self-test reports it)

    SC_INL uint32_t lo32(uint64_t v) { return static_cast<uint32_t>(v); }
    SC_INL uint64_t sext32(uint32_t v) { return static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(v))); }
    SC_INL uint64_t addiu(uint64_t rs, int32_t imm) { return sext32(lo32(rs) + static_cast<uint32_t>(imm)); }
    SC_INL uint64_t addu(uint64_t a, uint64_t b) { return sext32(lo32(a) + lo32(b)); }
    SC_INL uint64_t slt(uint64_t a, uint64_t b) { return static_cast<int64_t>(a) < static_cast<int64_t>(b) ? 1u : 0u; }
    SC_INL uint32_t fbits(float f)
    {
        uint32_t b;
        std::memcpy(&b, &f, 4);
        return b;
    }
    SC_INL float bfloat(uint32_t b)
    {
        float f;
        std::memcpy(&f, &b, 4);
        return f;
    }
    // A float register's bits, copied as bits (a NaN stays as it is).
    SC_INL uint32_t fregBits(const R5900Context *ctx, int n)
    {
        uint32_t b;
        std::memcpy(&b, &ctx->f[n], 4);
        return b;
    }
    SC_INL void setFreg(R5900Context *ctx, int n, float f) { std::memcpy(&ctx->f[n], &f, 4); }
#define LW(addr) sext32(READ32(addr))
#define LWC1(addr) bfloat(READ32(addr))

    // ---- Soft doubles: fp-bit's results on its fast path (see the top).
    // `ok` turns false (and stays false) on anything off that path.
    namespace sd
    {
        constexpr uint64_t kSign = 0x8000000000000000ull, kFrac = 0x000FFFFFFFFFFFFFull, kHidden = 1ull << 52;
        constexpr uint64_t kOne = 0x3FF0000000000000ull, kTwo = 0x4000000000000000ull, kOneHalf = 0x3FF8000000000000ull,
                           kMinusOne = 0xBFF0000000000000ull, k46 = 0x4047000000000000ull;

        SC_INL uint32_t expo(uint64_t a) { return static_cast<uint32_t>(a >> 52) & 0x7FFu; }
        SC_INL bool zero(uint64_t a) { return (a << 1) == 0u; }
        SC_INL bool normal(uint64_t a) { return expo(a) - 1u < 0x7FEu; }
        SC_INL bool usable(uint64_t a) { return zero(a) || normal(a); }

        // mant: the rounded 53-bit mantissa (2^53 after a carry).
        SC_INL uint64_t finish(uint64_t sign, int32_t e, uint64_t mant, bool &ok)
        {
            if ((mant >> 53) != 0u)
            {
                mant >>= 1;
                ++e;
            }
            if (e <= 0 || e >= 0x7FF)
            {
                ok = false;
                return 0u;
            }
            return sign | (static_cast<uint64_t>(e) << 52) | (mant & kFrac);
        }

        inline uint64_t add(uint64_t a, uint64_t b, bool &ok)
        {
            if (!usable(a) || !usable(b))
            {
                ok = false;
                return 0u;
            }
            if (zero(a))
                return zero(b) ? (a & b) : b; // -0 only when both are
            if (zero(b))
                return a;
            if ((a & ~kSign) < (b & ~kSign))
            {
                const uint64_t t = a;
                a = b;
                b = t;
            }
            const uint32_t ea = expo(a), d = ea - expo(b);
            const uint64_t xa = ((a & kFrac) | kHidden) << 10; // leading one at bit 62
            uint64_t xb = ((b & kFrac) | kHidden) << 10;
            if (d != 0u)
                xb = d > 62u ? 1u : ((xb >> d) | ((xb & ((1ull << d) - 1u)) != 0u ? 1u : 0u));
            int32_t e = static_cast<int32_t>(ea);
            uint64_t x;
            if (((a ^ b) & kSign) != 0u)
            {
                x = xa - xb;
                if (x == 0u)
                    return 0u; // x - x = +0
                const int shift = __builtin_clzll(x) - 1;
                x <<= shift;
                e -= shift;
            }
            else
            {
                x = xa + xb;
                if ((x >> 63) != 0u)
                {
                    x = (x >> 1) | (x & 1u);
                    ++e;
                }
            }
            uint64_t mant = x >> 10;
            const uint32_t rem = static_cast<uint32_t>(x) & 0x3FFu;
            if (rem > 0x200u || (rem == 0x200u && (mant & 1u) != 0u))
                ++mant;
            return finish(a & kSign, e, mant, ok);
        }

        SC_INL uint64_t sub(uint64_t a, uint64_t b, bool &ok) { return add(a, b ^ kSign, ok); }

        inline uint64_t mul(uint64_t a, uint64_t b, bool &ok)
        {
            if (!usable(a) || !usable(b))
            {
                ok = false;
                return 0u;
            }
            const uint64_t sign = (a ^ b) & kSign;
            if (zero(a) || zero(b))
                return sign;
            const uint64_t ma = (a & kFrac) | kHidden, mb = (b & kFrac) | kHidden;
            const uint32_t al = static_cast<uint32_t>(ma), ah = static_cast<uint32_t>(ma >> 32);
            const uint32_t bl = static_cast<uint32_t>(mb), bh = static_cast<uint32_t>(mb >> 32);
            const uint64_t ll = static_cast<uint64_t>(al) * bl, mid = static_cast<uint64_t>(al) * bh + static_cast<uint64_t>(ah) * bl;
            const uint64_t lo = ll + (mid << 32);
            const uint64_t hi = static_cast<uint64_t>(ah) * bh + (mid >> 32) + (lo < ll ? 1u : 0u);
            int32_t e = static_cast<int32_t>(expo(a)) + static_cast<int32_t>(expo(b)) - 1023;
            uint32_t shift = 52; // the product (2^104..2^106) to 53 bits
            if ((hi >> 41) != 0u)
            {
                shift = 53;
                ++e;
            }
            uint64_t mant = (hi << (64u - shift)) | (lo >> shift);
            const uint64_t rem = lo & ((1ull << shift) - 1u), half = 1ull << (shift - 1u);
            if (rem > half || (rem == half && (mant & 1u) != 0u))
                ++mant;
            return finish(sign, e, mant, ok);
        }

        inline uint64_t div(uint64_t a, uint64_t b, bool &ok)
        {
            if (!usable(a) || !normal(b))
            {
                ok = false;
                return 0u;
            }
            const uint64_t sign = (a ^ b) & kSign;
            if (zero(a))
                return sign;
            uint64_t n = (a & kFrac) | kHidden;
            const uint64_t d = (b & kFrac) | kHidden;
            int32_t e = static_cast<int32_t>(expo(a)) - static_cast<int32_t>(expo(b)) + 1023;
            if (n < d)
            {
                n <<= 1;
                --e;
            }
            uint64_t q = 0; // 55 quotient bits: 53, a guard and a round bit
            for (int i = 0; i < 55; ++i)
            {
                q <<= 1;
                if (n >= d)
                {
                    n -= d;
                    q |= 1u;
                }
                n <<= 1;
            }
            uint64_t mant = q >> 2;
            const uint32_t g = static_cast<uint32_t>(q) & 3u;
            if (g > 2u || (g == 2u && (n != 0u || (mant & 1u) != 0u)))
                ++mant;
            return finish(sign, e, mant, ok);
        }

        // dpcmp's sign (finite values; -0 == +0).
        SC_INL int64_t key(uint64_t a) { return (a & kSign) != 0u ? -static_cast<int64_t>(a & ~kSign) : static_cast<int64_t>(a); }
        SC_INL int cmp(uint64_t a, uint64_t b, bool &ok)
        {
            if ((a & ~kSign) >= 0x7FF0000000000000ull || (b & ~kSign) >= 0x7FF0000000000000ull)
            {
                ok = false;
                return 1;
            }
            const int64_t ka = key(a), kb = key(b);
            return ka < kb ? -1 : (ka > kb ? 1 : 0);
        }

        // fptodp: exact (zero and normal floats).
        SC_INL uint64_t fromFloat(uint32_t f, bool &ok)
        {
            const uint64_t sign = static_cast<uint64_t>(f & 0x80000000u) << 32;
            const uint32_t e = (f >> 23) & 0xFFu;
            if (e == 0u)
            {
                if ((f & 0x7FFFFFu) != 0u)
                    ok = false;
                return sign;
            }
            if (e == 0xFFu)
            {
                ok = false;
                return 0u;
            }
            return sign | (static_cast<uint64_t>(e - 127u + 1023u) << 52) | (static_cast<uint64_t>(f & 0x7FFFFFu) << 29);
        }

        // dptofp: to nearest even, normal float results.
        SC_INL uint32_t toFloat(uint64_t d, bool &ok)
        {
            const uint32_t sign = static_cast<uint32_t>(d >> 32) & 0x80000000u;
            if (zero(d))
                return sign;
            if (!normal(d))
            {
                ok = false;
                return 0u;
            }
            int32_t e = static_cast<int32_t>(expo(d)) - 1023;
            const uint64_t m53 = (d & kFrac) | kHidden;
            uint32_t m = static_cast<uint32_t>(m53 >> 29);
            const uint32_t rem = static_cast<uint32_t>(m53) & 0x1FFFFFFFu;
            if (rem > 0x10000000u || (rem == 0x10000000u && (m & 1u) != 0u))
                ++m;
            if ((m >> 24) != 0u)
            {
                m >>= 1;
                ++e;
            }
            if (e < -126 || e > 127)
            {
                ok = false;
                return 0u;
            }
            return sign | (static_cast<uint32_t>(e + 127) << 23) | (m & 0x7FFFFFu);
        }

        // (double)f, then "if (d < 0) d = 0 - d" as the game writes fabs.
        SC_INL uint64_t absOf(float f, bool &ok)
        {
            const uint64_t d = fromFloat(fbits(f), ok);
            return cmp(d, 0u, ok) < 0 ? sub(0u, d, ok) : d;
        }
    }

    // ---- fdlibm in the guest's soft doubles (atan 0x2d6ba8, __ieee754_atan2
    // 0x2d84b0, atan2 0x2d7510): the guest's control flow and constants.
    constexpr uint32_t kAtanHi = 0x003AA788u, kAtanLo = 0x003AA7A8u, kAtanT = 0x003AA7C8u, kAtanHuge = 0x003AA830u;
    constexpr uint32_t kLibVersion = 0x003AB118u;

    uint64_t atanD(G_ARGS, uint64_t x, bool &ok)
    {
        using namespace sd;
        const int32_t hx = static_cast<int32_t>(x >> 32);
        const uint32_t ix = static_cast<uint32_t>(hx) & 0x7FFFFFFFu;
        if (ix > 0x440FFFFFu)
        {
            if (ix > 0x7FF00000u || (ix == 0x7FF00000u && static_cast<uint32_t>(x) != 0u))
            {
                ok = false; // NaN: x + x
                return 0u;
            }
            const uint64_t hi3 = READ64(kAtanHi + 24u), lo3 = READ64(kAtanLo + 24u);
            if (hx > 0)
                return add(hi3, lo3, ok);
            return sub(sub(0u, hi3, ok), lo3, ok);
        }
        int id;
        if (ix < 0x3FDC0000u)
        {
            if (ix < 0x3E200000u && cmp(add(x, READ64(kAtanHuge), ok), kOne, ok) > 0)
                return x;
            id = -1;
        }
        else
        {
            x &= ~kSign;
            if (ix < 0x3FF30000u)
            {
                if (ix < 0x3FE60000u)
                {
                    id = 0;
                    const uint64_t t = sub(add(x, x, ok), kOne, ok);
                    x = div(t, add(x, kTwo, ok), ok);
                }
                else
                {
                    id = 1;
                    const uint64_t t = sub(x, kOne, ok);
                    x = div(t, add(x, kOne, ok), ok);
                }
            }
            else if (ix < 0x40038000u)
            {
                id = 2;
                const uint64_t t = sub(x, kOneHalf, ok);
                x = div(t, add(mul(x, kOneHalf, ok), kOne, ok), ok);
            }
            else
            {
                id = 3;
                x = div(kMinusOne, x, ok);
            }
        }
        const uint64_t z = mul(x, x, ok), w = mul(z, z, ok);
        uint64_t s1 = mul(w, READ64(kAtanT + 80u), ok);
        s1 = mul(w, add(READ64(kAtanT + 64u), s1, ok), ok);
        s1 = mul(w, add(READ64(kAtanT + 48u), s1, ok), ok);
        s1 = mul(w, add(READ64(kAtanT + 32u), s1, ok), ok);
        s1 = mul(w, add(READ64(kAtanT + 16u), s1, ok), ok);
        s1 = mul(z, add(READ64(kAtanT), s1, ok), ok);
        uint64_t s2 = mul(w, READ64(kAtanT + 72u), ok);
        s2 = mul(w, add(READ64(kAtanT + 56u), s2, ok), ok);
        s2 = mul(w, add(READ64(kAtanT + 40u), s2, ok), ok);
        s2 = mul(w, add(READ64(kAtanT + 24u), s2, ok), ok);
        s2 = mul(w, add(READ64(kAtanT + 8u), s2, ok), ok);
        if (id < 0)
            return sub(x, mul(x, add(s1, s2, ok), ok), ok);
        const uint32_t k = static_cast<uint32_t>(id) * 8u;
        uint64_t r = sub(mul(x, add(s1, s2, ok), ok), READ64(kAtanLo + k), ok);
        r = sub(READ64(kAtanHi + k), sub(r, x, ok), ok);
        return hx < 0 ? sub(0u, r, ok) : r;
    }

    // atan2(y, x). false: off the fast path (the caller falls back).
    bool atan2D(G_ARGS, uint64_t y, uint64_t x, uint64_t &out)
    {
        using namespace sd;
        bool ok = true;
        const int32_t hx = static_cast<int32_t>(x >> 32), hy = static_cast<int32_t>(y >> 32);
        const uint32_t lx = static_cast<uint32_t>(x), ly = static_cast<uint32_t>(y);
        const uint32_t ix = static_cast<uint32_t>(hx) & 0x7FFFFFFFu, iy = static_cast<uint32_t>(hy) & 0x7FFFFFFFu;
        if (ix >= 0x7FF00000u || iy >= 0x7FF00000u)
            return false;
        uint64_t z;
        if (hx == 0x3FF00000 && lx == 0u)
        {
            z = atanD(G_PASS, y, ok);
        }
        else
        {
            const uint32_t m = (static_cast<uint32_t>(hy) >> 31) | (static_cast<uint32_t>(hx >> 30) & 2u);
            if ((iy | ly) == 0u)
            {
                z = m < 2u ? y : READ64(m == 2u ? 0x003AA938u : 0x003AA940u);
            }
            else if ((ix | lx) == 0u)
            {
                z = READ64(hy < 0 ? 0x003AA910u : 0x003AA908u);
            }
            else
            {
                const int32_t k = static_cast<int32_t>(iy - ix) >> 20;
                uint64_t a;
                if (k > 60)
                    a = READ64(0x003AA958u);
                else if (hx < 0 && k < -60)
                    a = 0u;
                else
                    a = atanD(G_PASS, div(y, x, ok) & ~kSign, ok);
                switch (m)
                {
                case 0: z = a; break;
                case 1: z = a ^ kSign; break;
                case 2: z = sub(READ64(0x003AA968u), sub(a, READ64(0x003AA960u), ok), ok); break;
                default: z = sub(sub(a, READ64(0x003AA970u), ok), READ64(0x003AA978u), ok); break;
                }
            }
        }
        if (!ok)
            return false;
        // The wrapper: atan2(0, 0) is its domain error (matherr, errno).
        if (static_cast<int32_t>(READ32(kLibVersion)) != -1 && zero(x) && zero(y))
            return false;
        out = z;
        return true;
    }

    // ---- atanf (0x2dc2f8) and __ieee754_atan2f (0x2d9fe8) in floats.
    constexpr uint32_t kAtanfHi = 0x003AB160u, kAtanfLo = 0x003AB170u, kAtanfT = 0x003AB180u;

    float atanF(G_ARGS, float x)
    {
        const uint32_t hx = fbits(x), ix = hx & 0x7FFFFFFFu;
        if (ix > 0x507FFFFFu) // |x| >= 2^34 (no NaN here)
        {
            const float hi3 = LWC1(kAtanfHi + 12u), lo3 = LWC1(kAtanfLo + 12u);
            if (static_cast<int32_t>(hx) > 0)
                return hi3 + lo3;
            return -hi3 - lo3;
        }
        int id;
        if (ix < 0x3EE00000u)
        {
            if (ix < 0x31000000u && 1.0f < x + bfloat(0x7149F2CAu))
                return x;
            id = -1;
        }
        else
        {
            x = bfloat(fbits(x) & 0x7FFFFFFFu);
            if (ix < 0x3F980000u)
            {
                if (ix < 0x3F300000u)
                {
                    id = 0;
                    x = (x + x - 1.0f) / (x + 2.0f);
                }
                else
                {
                    id = 1;
                    const float den = x + 1.0f;
                    x = (x - 1.0f) / den;
                }
            }
            else if (ix < 0x401C0000u)
            {
                id = 2;
                const float den = x * 1.5f + 1.0f;
                x = (x - 1.5f) / den;
            }
            else
            {
                id = 3;
                x = -1.0f / x;
            }
        }
        const float z = x * x, w = z * z;
        const uint32_t t = kAtanfT;
        float f5 = LWC1(t + 0x20u) + w * LWC1(t + 0x28u);
        float f1 = LWC1(t + 0x1Cu) + w * LWC1(t + 0x24u);
        float f6 = LWC1(t + 0x18u) + w * f5;
        float f2 = LWC1(t + 0x14u) + w * f1;
        float f7 = LWC1(t + 0x10u) + w * f6;
        float f3 = LWC1(t + 0x0Cu) + w * f2;
        float f8 = LWC1(t + 0x08u) + w * f7;
        float f4 = LWC1(t + 0x04u) + w * f3;
        const float s2 = w * f4;
        const float s1 = z * (LWC1(t) + w * f8);
        if (id < 0)
            return x - x * (s1 + s2);
        float r = x * (s1 + s2) - LWC1(kAtanfLo + static_cast<uint32_t>(id) * 4u);
        r = LWC1(kAtanfHi + static_cast<uint32_t>(id) * 4u) - (r - x);
        return static_cast<int32_t>(hx) < 0 ? -r : r;
    }

    // atan2f(y, x) (0x2d7d68). false: off the fast path.
    bool atan2F(G_ARGS, float y, float x, float &out)
    {
        const uint32_t hx = fbits(x), hy = fbits(y), ix = hx & 0x7FFFFFFFu, iy = hy & 0x7FFFFFFFu;
        if (ix >= 0x7F800000u || iy >= 0x7F800000u)
            return false;
        float z;
        if (hx == 0x3F800000u)
        {
            z = atanF(G_PASS, y);
        }
        else
        {
            const uint32_t m = (hy >> 31) | (static_cast<uint32_t>(static_cast<int32_t>(hx) >> 30) & 2u);
            if (iy == 0u)
            {
                z = m < 2u ? y : bfloat(m == 2u ? 0x40490FDAu : 0xC0490FDAu);
            }
            else if (ix == 0u)
            {
                z = bfloat(static_cast<int32_t>(hy) < 0 ? 0xBFC90FDBu : 0x3FC90FDBu);
            }
            else
            {
                const int32_t k = static_cast<int32_t>(iy - ix) >> 23;
                float a;
                if (k > 60)
                    a = bfloat(0x3FC90FDCu);
                else if (static_cast<int32_t>(hx) < 0 && k < -60)
                    a = 0.0f;
                else
                    a = atanF(G_PASS, bfloat(fbits(y / x) & 0x7FFFFFFFu));
                switch (m)
                {
                case 0: z = a; break;
                case 1: z = bfloat(fbits(a) ^ 0x80000000u); break;
                case 2: z = bfloat(0x40490FDAu) - (a - bfloat(0x34222168u)); break;
                default: z = (a - bfloat(0x34222168u)) - bfloat(0x40490FDAu); break;
                }
            }
        }
        if (static_cast<int32_t>(READ32(kLibVersion)) != -1 && x == 0.0f && y == 0.0f)
            return false;
        out = z;
        return true;
    }

    // ---- Leaves inlined from rotateChr's calls.

    // anglediff (0x284e38): b - a wrapped into -180..180.
    SC_INL float angleDiff(float a, float b)
    {
        const float d = b - a;
        if (d < -180.0f)
            return d + 360.0f;
        if (180.0f < d)
            return d - 360.0f;
        return d;
    }

    // curAnim (0x215820): whether prop's animation (either channel) is `anim`.
    uint32_t curAnim(G_ARGS, uint32_t prop, uint32_t anim)
    {
        uint32_t a1 = anim;
        const uint32_t chr = READ32(prop + 0x160u);
        if (chr != 0u && READ32(chr + 8u) == 0u && (a1 - 3u < 11u || a1 - 0x71u < 11u))
            a1 = READ32(prop + 0x158u) * 11u + a1;
        const uint32_t state = READ32(prop + 0x20u);
        if (a1 - 0x1BBu < 0x20u && READ32(READ32(state + 0x58u) + 0xCu) == 1u)
            a1 += 0x26u;
        if (READ32(state + 0x60u) == a1)
            return 1u;
        return READ32(state + 0xA0u) == a1 ? 1u : 0u;
    }

    // The game's bearing: (float)(atan2((double)y, (double)x) * c1 / c2).
    bool bearing(G_ARGS, float y, float x, uint32_t c1, uint32_t c2, float &out)
    {
        bool ok = true;
        const uint64_t dy = sd::fromFloat(fbits(y), ok), dx = sd::fromFloat(fbits(x), ok);
        uint64_t z;
        if (!ok || !atan2D(G_PASS, dy, dx, z))
            return false;
        const uint32_t f = sd::toFloat(sd::div(sd::mul(z, READ64(c1), ok), READ64(c2), ok), ok);
        if (!ok)
            return false;
        out = bfloat(f);
        return true;
    }

    // ---- rotateChr (0x2bc5d0)

    void sweepRotateChr(G_ARGS)
    {
        const uint32_t gp = GPR_U32(ctx, 28), sp = GPR_U32(ctx, 29), frame = sp - 0x80u;
        const uint32_t prop = GPR_U32(ctx, 4);
        const uint32_t chr = READ32(prop + 0x160u);
        bool ok = true;
#define SC_ABORT                                                   \
    do                                                             \
    {                                                              \
        ctx->pc = kRotateChr;                                      \
        g_prevRotateChr(rdram, ctx, runtime);                      \
        return;                                                    \
    } while (0)

        // Staged fields: the values the original reads back after writing.
        float p4C = LWC1(prop + 0x4Cu), p50 = 0.0f, p54 = 0.0f;
        float cADC = 0.0f, cAE0 = 0.0f, cB98 = 0.0f, cB9C = 0.0f;
        bool w4C = false, aimed = false, w54 = false, w50 = false;
        float aim0 = 0.0f, aim4 = 0.0f, aim8 = 0.0f;
        float f22 = LWC1(gp - 0x6FD8u);

        if (p4C < 0.0f)
        {
            uint32_t turns = 0;
            do
            {
                p4C = p4C + 360.0f;
                if (++turns > 8u)
                    SC_ABORT; // far out of range: the original's own loop
            } while (p4C < 0.0f);
            w4C = true;
        }
        if ((READ32(chr + 0xA94u) & 0x1000u) == 0u)
        {
            p50 = LWC1(prop + 0x50u);
            p54 = LWC1(prop + 0x54u);
            const uint32_t target = READ32(chr + 0xAE4u);
            if (target == 0u)
            {
                cADC = LWC1(gp - 0x6FD4u);
            }
            else
            {
                const float dx = LWC1(target + 0x30u) - LWC1(prop + 0x30u);
                const float dz = LWC1(target + 0x38u) - LWC1(prop + 0x38u);
                const bool flip = (READ32(chr + 0xA9Cu) & 0x600000u) != 0u;
                if (!bearing(G_PASS, flip ? -dx : dx, flip ? -dz : dz, 0x003A9CC0u, 0x003A9CC8u, f22))
                    SC_ABORT;
                if (f22 < 0.0f)
                    f22 = f22 + 360.0f;
                cADC = angleDiff(p50, f22);
            }
            {
                const float ex = LWC1(chr + 0xAECu) - LWC1(prop + 0x30u);
                const float ez = LWC1(chr + 0xAF4u) - LWC1(prop + 0x38u);
                const bool flip = (READ32(chr + 0xA94u) & 0x80u) != 0u;
                float f13;
                if (!bearing(G_PASS, flip ? -ex : ex, flip ? -ez : ez, 0x003A9CD0u, 0x003A9CD8u, f13))
                    SC_ABORT;
                if (f13 < 0.0f)
                    f13 = f13 + 360.0f;
                cAE0 = angleDiff(p4C, f13);
            }
            const uint32_t anim = READ32(READ32(prop + 0x20u) + 0x60u);
            if (!(anim - 0x236u < 0x29u || anim == 0x1D8u || anim == 0x1D7u || anim == 0x1FEu || anim == 0x1FDu ||
                  anim - 0x20Cu < 6u))
            {
                // The rest runs: +0x50, +0xB98, +0xB9C (and maybe +0x54) are written.
                uint32_t mode = READ32(chr + 0xA9Cu);
                if (mode == 0x20000u)
                {
                    const uint32_t pad = READ32(gp - 0x5D14u) + READ32(chr + 0x2A8u) * 0x1Cu;
                    cAE0 = cADC = angleDiff(p50, LWC1(pad + 0x18u));
                    f22 = LWC1(pad + 0x18u);
                    mode = READ32(chr + 0xA9Cu);
                }
                if (mode == 4u && (READ32(chr + 0xA94u) & 8u) != 0u)
                {
                    const int32_t count = static_cast<int32_t>(READ32(gp - 0x4B10u));
                    int32_t found = -1;
                    if (count > 0)
                    {
                        const uint32_t key = READ32(chr + 0x18u);
                        for (int32_t i = 0; i < count; ++i)
                        {
                            if (READ32(READ32(READ32(0x003823ECu + static_cast<uint32_t>(i) * 8u) + 0x160u) + 0x10u) == key)
                            {
                                found = i;
                                break;
                            }
                        }
                    }
                    const uint32_t entry = 0x003823ECu + static_cast<uint32_t>(found) * 8u;
                    const uint32_t pad = READ32(gp - 0x5D14u) + READ32(READ32(READ32(entry) + 0x160u) + 0x24u) * 0x1Cu;
                    cAE0 = cADC = angleDiff(p50, LWC1(pad + 0x18u));
                    f22 = LWC1(pad + 0x18u);
                }
                float f21 = angleDiff(p4C, f22);
                const uint32_t flags = READ32(chr + 0xA94u);
                bool turnBody = (flags & 0x583u) != 0u;
                if (!turnBody && (flags & 0x208u) != 0u)
                    turnBody = sd::cmp(sd::absOf(f21, ok), sd::k46, ok) >= 0;
                if (turnBody)
                {
                    // +0x54 turned toward +0xAE0 at the turn speed.
                    f21 = cAE0;
                    const uint64_t a = sd::absOf(f21, ok);
                    const float f20 = LWC1(chr + 0xB40u) * LWC1(gp - 0x4B98u);
                    if (sd::cmp(a, sd::fromFloat(fbits(f20), ok), ok) <= 0)
                        p54 = p54 + f21;
                    else
                        p54 = 0.0f < f21 ? p54 + f20 : p54 - f20;
                    if (360.0f < p54)
                        p54 = p54 - 360.0f;
                    if (p54 < 0.0f)
                        p54 = p54 + 360.0f;
                    w54 = true;
                }
                // The head (+0x50): toward +0x54, or toward the target.
                float f13 = p54;
                if (READ32(chr + 0xAE4u) != 0u && READ32(chr + 0xAD4u) != 0u && (READ32(chr + 0xA9Cu) & 0x61C000u) == 0u)
                {
                    f21 = angleDiff(p4C, f22);
                    if (sd::cmp(sd::absOf(f21, ok), sd::k46, ok) <= 0)
                    {
                        f13 = f22;
                    }
                    else if (0.0f < f21)
                    {
                        f13 = p4C + 46.0f;
                        if (360.0f < f13)
                            f13 = f13 - 360.0f;
                    }
                    else
                    {
                        f13 = p4C - 46.0f;
                        if (f13 < 0.0f)
                            f13 = f13 + 360.0f;
                    }
                }
                f21 = angleDiff(p50, f13);
                {
                    const uint64_t a = sd::absOf(f21, ok);
                    const float f20 = LWC1(chr + 0xB40u) * LWC1(gp - 0x4B98u);
                    if (sd::cmp(a, sd::fromFloat(fbits(f20), ok), ok) <= 0)
                        p50 = p50 + f21;
                    else
                        p50 = 0.0f < f21 ? p50 + f20 : p50 - f20;
                    if (360.0f < p50)
                        p50 = p50 - 360.0f;
                    if (p50 < 0.0f)
                        p50 = p50 + 360.0f;
                    w50 = true;
                }
                // The aim pitch (+0xB98), toward the target's eye height.
                float pitch = 0.0f;
                const uint32_t target2 = READ32(chr + 0xAE4u);
                if (target2 != 0u && READ32(chr + 0xAD4u) != 0u && READ32(chr + 0xA9Cu) != 0x20000u)
                {
                    const uint32_t kind = READ32(target2 + 8u);
                    float v0 = LWC1(frame), v4 = LWC1(frame + 4u), v8 = LWC1(frame + 8u); // other kinds: as left
                    if (kind == 8u)
                    {
                        const uint32_t ck = READ32(chr + 0x178u);
                        if ((ck == 8u || ck == 11u || ck == 13u || ck == 25u || ck - 14u < 5u) &&
                            LWC1(target2 + 0x34u) < LWC1(prop + 0x34u) - LWC1(gp - 0x6FD0u))
                        {
                            v0 = LWC1(target2 + 0x30u) - LWC1(chr + 0xBC0u);
                            v4 = LWC1(target2 + 0x34u) - LWC1(chr + 0xBC4u);
                        }
                        else
                        {
                            v0 = LWC1(target2 + 0x30u) - LWC1(chr + 0xBC0u);
                            v4 = LWC1(READ32(target2 + 0x160u) + 0xBC4u) - LWC1(chr + 0xBC4u);
                        }
                        v8 = LWC1(target2 + 0x38u) - LWC1(chr + 0xBC8u);
                    }
                    else if (kind == 1u || kind == 0x40u)
                    {
                        if (READ32(target2 + 4u) - 0xC9u < 2u)
                        {
                            v0 = (LWC1(target2 + 0x30u) + LWC1(target2 + 0x1FCu)) - LWC1(chr + 0xBC0u);
                            v4 = LWC1(target2 + 0x34u) - LWC1(chr + 0xBC4u);
                        }
                        else
                        {
                            v0 = (LWC1(target2 + 0x30u) + LWC1(target2 + 0x1FCu)) - LWC1(chr + 0xBC0u);
                            v4 = (LWC1(target2 + 0x34u) + LWC1(target2 + 0x200u)) - LWC1(chr + 0xBC4u);
                        }
                        v8 = (LWC1(target2 + 0x38u) + LWC1(target2 + 0x204u)) - LWC1(chr + 0xBC8u);
                    }
                    else if (kind == 0x100u)
                    {
                        v0 = LWC1(target2 + 0x30u) - LWC1(chr + 0xBC0u);
                        v4 = (LWC1(target2 + 0x34u) + 0.5f) - LWC1(chr + 0xBC4u);
                        v8 = LWC1(target2 + 0x38u) - LWC1(chr + 0xBC8u);
                    }
                    const float len = sqrtf((v0 * v0 + v4 * v4) + v8 * v8);
                    if (len != len || len == 0.0f)
                        SC_ABORT; // the guest's sqrtf call, a division by zero
                    const float inv = 1.0f / len;
                    aim8 = v8 * inv;
                    aim0 = v0 * inv;
                    aim4 = v4 * inv;
                    const float flat = sqrtf(aim0 * aim0 + aim8 * aim8);
                    float z;
                    if (flat != flat || !atan2F(G_PASS, aim4, flat, z))
                        SC_ABORT;
                    const float scale = LWC1(gp - 0x6FCCu);
                    if (scale == 0.0f)
                        SC_ABORT;
                    pitch = (z * 180.0f) / scale;
                    aimed = true;
                }
                cB98 = LWC1(chr + 0xB98u);
                f21 = angleDiff(cB98, pitch);
                {
                    const uint64_t a = sd::absOf(f21, ok);
                    const float f20 = (LWC1(chr + 0xB40u) * 0.25f) * LWC1(gp - 0x4B98u);
                    if (sd::cmp(a, sd::fromFloat(fbits(f20), ok), ok) <= 0)
                        cB98 = cB98 + f21;
                    else
                        cB98 = 0.0f < f21 ? cB98 + f20 : cB98 - f20;
                }
                const float limit = LWC1(gp - 0x6FC8u);
                if (cB98 < limit && (curAnim(G_PASS, prop, 0x1DDu) != 0u || curAnim(G_PASS, prop, 0x1DEu) != 0u))
                    cB98 = limit;
                cB9C = p50;
                if (!ok)
                    SC_ABORT;
                // Commit (all reads are done).
                WRITE32(chr + 0xB98u, fbits(cB98));
                WRITE32(chr + 0xB9Cu, fbits(cB9C));
                if (aimed)
                {
                    WRITE32(frame, fbits(aim0));
                    WRITE32(frame + 4u, fbits(aim4));
                    WRITE32(frame + 8u, fbits(aim8));
                }
            }
            else if (!ok)
            {
                SC_ABORT;
            }
            WRITE32(chr + 0xADCu, fbits(cADC));
            WRITE32(chr + 0xAE0u, fbits(cAE0));
            if (w54)
                WRITE32(prop + 0x54u, fbits(p54));
            if (w50)
                WRITE32(prop + 0x50u, fbits(p50));
        }
        if (w4C)
            WRITE32(prop + 0x4Cu, fbits(p4C));
        // The frame's saved registers, as the prologue stores them.
        WRITE64(frame + 0x40u, GPR_U64(ctx, 19));
        WRITE32(frame + 0x70u, fregBits(ctx, 22));
        WRITE64(frame + 0x50u, GPR_U64(ctx, 31));
        WRITE64(frame + 0x30u, GPR_U64(ctx, 18));
        WRITE64(frame + 0x20u, GPR_U64(ctx, 17));
        WRITE64(frame + 0x10u, GPR_U64(ctx, 16));
        WRITE32(frame + 0x68u, fregBits(ctx, 21));
        WRITE32(frame + 0x60u, fregBits(ctx, 20));
        ++g_rotateFast;
        ctx->pc = GPR_U32(ctx, 31);
#undef SC_ABORT
    }

    // ---- findpadslinked2pad (0x264a18)
    //
    // findpadslinked2pad(pad, out, max): the pads linked to `pad` (the
    // link table at gp-0x5D10, its count at gp-0x5CB4; 0x14 bytes each:
    // flags (1 enabled, 2 one-way), from, to) into out[], until max.

    void sweepFindPadsLinked2Pad(G_ARGS)
    {
        const uint64_t a0 = GPR_U64(ctx, 4), a1 = GPR_U64(ctx, 5), a2 = GPR_U64(ctx, 6);
        const uint32_t gp = GPR_U32(ctx, 28);
        uint64_t v0 = LW(gp - 0x5CB4u), t1 = 0, t0 = 0;
        if (static_cast<int64_t>(v0) <= 0)
        {
            SET_GPR_U64(ctx, 2, 0u);
            SET_GPR_U64(ctx, 8, 0u);
            SET_GPR_U64(ctx, 9, 0u);
            ctx->pc = GPR_U32(ctx, 31);
            return;
        }
        const uint64_t t2 = LW(gp - 0x5D10u);
        uint64_t v1 = 20u, a3 = 0u, lo = 0u, hi = 0u;
        uint32_t backEdges = 0;
        for (;;)
        {
            const int64_t product = static_cast<int64_t>(static_cast<int32_t>(lo32(t1))) * 20;
            lo = sext32(static_cast<uint32_t>(product));
            hi = sext32(static_cast<uint32_t>(static_cast<uint64_t>(product) >> 32));
            a3 = addu(lo, t2);
            const uint32_t link = lo32(a3);
            if ((READ32(link) & 1u) == 0u)
            {
                v0 = slt(t0, a2);
            }
            else
            {
                v0 = LW(link + 4u);
                if (v0 != a0)
                {
                    v0 = LW(link + 8u);
                }
                else
                {
                    const uint32_t slot = lo32(addu(sext32(lo32(t0) << 2), a1));
                    v1 = LW(link + 8u);
                    t0 = addiu(t0, 1);
                    WRITE32(slot, lo32(v1));
                    v0 = LW(link + 8u);
                }
                if (v0 != a0 || (READ32(link) & 2u) != 0u)
                {
                    v0 = slt(t0, a2);
                }
                else
                {
                    const uint32_t slot = lo32(addu(sext32(lo32(t0) << 2), a1));
                    v1 = LW(link + 4u);
                    t0 = addiu(t0, 1);
                    WRITE32(slot, lo32(v1));
                    v0 = slt(t0, a2);
                }
            }
            const bool more = v0 != 0u;
            v0 = LW(gp - 0x5CB4u);
            if (!more)
                break;
            t1 = addiu(t1, 1);
            v0 = slt(t1, v0);
            v1 = 20u;
            if (v0 == 0u)
                break;
            ++backEdges;
        }
        SET_GPR_U64(ctx, 2, t0);
        SET_GPR_U64(ctx, 3, v1);
        SET_GPR_U64(ctx, 7, a3);
        SET_GPR_U64(ctx, 8, t0);
        SET_GPR_U64(ctx, 9, t1);
        SET_GPR_U64(ctx, 10, t2);
        ctx->lo = lo;
        ctx->hi = hi;
        ctx->pc = GPR_U32(ctx, 31);
        if (backEdges != 0u)
            (void)runtime->eeCheckpointDue(backEdges * 32u); // the loop's checkpoint charges; one due fires at the caller's next
    }

    // ---- closestpadinlist (0x266c58)
    //
    // closestpadinlist(pos, count, list): of the pads in list[] (gp-0x5D14,
    // 0x1C bytes each, the position at +0xC), the nearest to pos.

    void sweepClosestPadInList(G_ARGS)
    {
        const uint32_t gp = GPR_U32(ctx, 28), sp = GPR_U32(ctx, 29), frame = sp - 0x80u;
        const uint32_t pos = GPR_U32(ctx, 4);
        const uint64_t a1 = GPR_U64(ctx, 5);
        float best = LWC1(0x003AEB34u);
        uint64_t s4 = 0;
        float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0;
        uint64_t v1 = GPR_U64(ctx, 3), lo = ctx->lo, hi = ctx->hi;
        bool any = false, closer = false;
        uint32_t backEdges = 0;
        if (static_cast<int64_t>(a1) > 0)
        {
            uint64_t s1 = a1, s2 = GPR_U64(ctx, 6);
            for (;;)
            {
                const uint64_t s0 = LW(lo32(s2));
                v1 = LW(gp - 0x5D14u);
                const int64_t product = static_cast<int64_t>(static_cast<int32_t>(lo32(s0))) * 28;
                lo = sext32(static_cast<uint32_t>(product));
                hi = sext32(static_cast<uint32_t>(static_cast<uint64_t>(product) >> 32));
                f3 = LWC1(pos);
                f4 = LWC1(pos + 4u);
                f5 = LWC1(pos + 8u);
                const uint32_t pad = lo32(addu(lo, v1));
                f0 = LWC1(pad + 0xCu);
                f2 = LWC1(pad + 0x10u);
                f0 = f0 - f3;
                f1 = LWC1(pad + 0x14u);
                f2 = f2 - f4;
                f1 = f1 - f5;
                f0 = f0 * f0;
                f2 = f2 * f2;
                f1 = f1 * f1;
                f0 = f0 + f2;
                f12 = f0 + f1;
                f0 = sqrtf(f12);
                if (f0 != f0)
                {
                    // The guest's sqrtf call: the previous implementation from the start.
                    ctx->pc = kClosestPad;
                    g_prevClosestPad(rdram, ctx, runtime);
                    return;
                }
                any = true;
                closer = f0 < best;
                s1 = sext32(lo32(s1) - 1u);
                if (closer)
                {
                    best = f0;
                    s4 = s0;
                }
                s2 = addiu(s2, 4);
                if (s1 == 0u)
                    break;
                ++backEdges;
            }
        }
        WRITE64(frame + 0x40u, GPR_U64(ctx, 20));
        WRITE64(frame + 0x30u, GPR_U64(ctx, 19));
        WRITE32(frame + 0x70u, fregBits(ctx, 20));
        WRITE64(frame + 0x60u, GPR_U64(ctx, 31));
        WRITE64(frame + 0x50u, GPR_U64(ctx, 21));
        WRITE64(frame + 0x20u, GPR_U64(ctx, 18));
        WRITE64(frame + 0x10u, GPR_U64(ctx, 17));
        WRITE64(frame, GPR_U64(ctx, 16));
        SET_GPR_U64(ctx, 2, s4);
        if (any)
        {
            SET_GPR_U64(ctx, 3, v1);
            setFreg(ctx, 0, f0);
            setFreg(ctx, 1, f1);
            setFreg(ctx, 2, f2);
            setFreg(ctx, 3, f3);
            setFreg(ctx, 4, f4);
            setFreg(ctx, 5, f5);
            setFreg(ctx, 12, f12);
            ctx->lo = lo;
            ctx->hi = hi;
            ctx->fcr31 = closer ? (ctx->fcr31 | 0x800000u) : (ctx->fcr31 & ~0x800000u);
        }
        ctx->pc = GPR_U32(ctx, 31);
        if (backEdges != 0u)
            (void)runtime->eeCheckpointDue(backEdges * 32u);
    }

    // ---- atan2, atan, atan2f, atanf, and (TS_SWEEP_CHR_SOFTDOUBLE) the
    // soft-double routines, installed globally (bulletTick, the camera, the
    // AI). Each computes its result with the kernels above; off the fast
    // path it runs the previous implementation from the start on the
    // untouched context. Results: v0 or f0 as the original's; its own
    // frame's saved-register slots as its prologue stores them; the
    // callee-saved registers untouched. Not reproduced: the nested callees'
    // frames below (fp-bit's unpack records) and dead temporaries.

    enum : uint32_t
    {
        kAtan2 = 0x2D7510u,
        kAtan = 0x2D6BA8u,
        kAtan2f = 0x2D7D68u,
        kAtanf = 0x2DC2F8u,
        kDpadd = 0x2E3180u,
        kDpsub = 0x2E31D8u,
        kDpmul = 0x2E3240u,
        kDpdiv = 0x2E34E8u,
        kDpcmp = 0x2E3768u,
        kFptodp = 0x2E4608u,
        kDptofp = 0x2E3A10u,
    };

    struct Prev
    {
        uint32_t address;
        GuestFunction fn;
    };
    Prev g_prev[11];

    SC_INL GuestFunction prevOf(uint32_t address)
    {
        for (const Prev &p : g_prev)
            if (p.address == address)
                return p.fn;
        return nullptr;
    }

    // A saved-register slot: 64-bit GPR (sd) or float (swc1).
    struct Slot
    {
        uint16_t offset;
        int8_t reg;    // GPR number, or -1 - float register
    };

    template <uint32_t Address>
    __attribute__((noinline)) void fallBack(G_ARGS)
    {
        ctx->pc = Address;
        prevOf(Address)(rdram, ctx, runtime);
    }

    SC_INL void storeFrame(G_ARGS, uint32_t size, const Slot *slots, uint32_t count)
    {
        const uint32_t frame = GPR_U32(ctx, 29) - size;
        for (uint32_t i = 0; i < count; ++i)
        {
            if (slots[i].reg >= 0)
                WRITE64(frame + slots[i].offset, GPR_U64(ctx, slots[i].reg));
            else
                WRITE32(frame + slots[i].offset, fregBits(ctx, -1 - slots[i].reg));
        }
    }

    const Slot kAtan2Slots[] = {{0x40, 17}, {0x30, 16}, {0x70, 20}, {0x60, 19}, {0x80, 31}, {0x50, 18}};
    const Slot kAtanSlots[] = {{0x40, 20}, {0x70, 31}, {0x60, 22}, {0x50, 21}, {0x30, 19}, {0x20, 18}, {0x10, 17}, {0x00, 16}};
    const Slot kAtan2fSlots[] = {{0x58, -1 - 21}, {0x50, -1 - 20}, {0x30, 16}, {0x60, -1 - 22}, {0x40, 31}};
    const Slot kAtanfSlots[] = {{0x10, 17}, {0x20, 31}, {0x00, 16}};
    const Slot kFptodpSlots[] = {{0x20, 31}, {0x10, -1 - 12}};
    const Slot kDptofpSlots[] = {{0x20, 4}, {0x30, 31}};

    void sweepAtan2(G_ARGS)
    {
        uint64_t z;
        if (!atan2D(G_PASS, GPR_U64(ctx, 4), GPR_U64(ctx, 5), z))
            return fallBack<kAtan2>(G_PASS);
        storeFrame(G_PASS, 0x90u, kAtan2Slots, 6u);
        SET_GPR_U64(ctx, 2, z);
        ctx->pc = GPR_U32(ctx, 31);
    }

    void sweepAtan(G_ARGS)
    {
        bool ok = true;
        const uint64_t z = atanD(G_PASS, GPR_U64(ctx, 4), ok);
        if (!ok)
            return fallBack<kAtan>(G_PASS);
        storeFrame(G_PASS, 0x80u, kAtanSlots, 8u);
        SET_GPR_U64(ctx, 2, z);
        ctx->pc = GPR_U32(ctx, 31);
    }

    void sweepAtan2f(G_ARGS)
    {
        float z;
        if (!atan2F(G_PASS, ctx->f[12], ctx->f[13], z))
            return fallBack<kAtan2f>(G_PASS);
        storeFrame(G_PASS, 0x70u, kAtan2fSlots, 5u);
        setFreg(ctx, 0, z);
        ctx->pc = GPR_U32(ctx, 31);
    }

    void sweepAtanf(G_ARGS)
    {
        if ((fregBits(ctx, 12) & 0x7FFFFFFFu) > 0x7F800000u)
            return fallBack<kAtanf>(G_PASS); // NaN: x + x
        const float z = atanF(G_PASS, ctx->f[12]);
        storeFrame(G_PASS, 0x30u, kAtanfSlots, 3u);
        setFreg(ctx, 0, z);
        ctx->pc = GPR_U32(ctx, 31);
    }

    // The soft-double routines' own frames: the operand copies, s0 (s0-s7
    // for dpmul) and ra.
    const Slot kAddSlots[] = {{0x60, 4}, {0x68, 5}, {0x70, 16}, {0x80, 31}};
    const Slot kDivSlots[] = {{0x40, 4}, {0x48, 5}, {0x50, 16}, {0x60, 31}};
    const Slot kMulSlots[] = {{0x60, 4}, {0x68, 5}, {0xE0, 23}, {0x70, 16}, {0xF0, 31}, {0xD0, 22},
                              {0xC0, 21}, {0xB0, 20}, {0xA0, 19}, {0x90, 18}, {0x80, 17}};

    template <uint32_t Address>
    void sweepDpBinary(G_ARGS)
    {
        bool ok = true;
        const uint64_t a = GPR_U64(ctx, 4), b = GPR_U64(ctx, 5);
        uint64_t r;
        switch (Address)
        {
        case kDpadd: r = sd::add(a, b, ok); break;
        case kDpsub: r = sd::sub(a, b, ok); break;
        case kDpmul: r = sd::mul(a, b, ok); break;
        case kDpdiv: r = sd::div(a, b, ok); break;
        default: r = static_cast<uint64_t>(static_cast<int64_t>(sd::cmp(a, b, ok))); break; // dpcmp: -1, 0, 1
        }
        if (!ok)
            return fallBack<Address>(G_PASS);
        if (Address == kDpadd || Address == kDpsub)
            storeFrame(G_PASS, 0x90u, kAddSlots, 4u);
        else if (Address == kDpmul)
            storeFrame(G_PASS, 0x100u, kMulSlots, 11u);
        else
            storeFrame(G_PASS, 0x70u, kDivSlots, 4u);
        SET_GPR_U64(ctx, 2, r);
        ctx->pc = GPR_U32(ctx, 31);
    }

    void sweepFptodp(G_ARGS)
    {
        bool ok = true;
        const uint64_t r = sd::fromFloat(fregBits(ctx, 12), ok);
        if (!ok)
            return fallBack<kFptodp>(G_PASS);
        storeFrame(G_PASS, 0x30u, kFptodpSlots, 2u);
        SET_GPR_U64(ctx, 2, r);
        ctx->pc = GPR_U32(ctx, 31);
    }

    void sweepDptofp(G_ARGS)
    {
        bool ok = true;
        const uint32_t r = sd::toFloat(GPR_U64(ctx, 4), ok);
        if (!ok)
            return fallBack<kDptofp>(G_PASS);
        storeFrame(G_PASS, 0x40u, kDptofpSlots, 2u);
        std::memcpy(&ctx->f[0], &r, 4);
        ctx->pc = GPR_U32(ctx, 31);
    }

    // The global replacements, in test and install order.
    struct GlobalEntry
    {
        const char *name;
        uint32_t address;
        GuestFunction native;
        uint8_t args;   // 0: a0/a1 doubles, 1: f12/f13 floats, 2: f12 float, 3: a0 double
        uint8_t result; // 0: v0, 1: f0
        uint16_t frame;
        const Slot *slots;
        uint8_t slotCount;
        bool softDouble; // TS_SWEEP_CHR_SOFTDOUBLE
    };
    const GlobalEntry kGlobalNatives[] = {
        {"atan2", kAtan2, &sweepAtan2, 0, 0, 0x90, kAtan2Slots, 6, false},
        {"atan", kAtan, &sweepAtan, 3, 0, 0x80, kAtanSlots, 8, false},
        {"atan2f", kAtan2f, &sweepAtan2f, 1, 1, 0x70, kAtan2fSlots, 5, false},
        {"atanf", kAtanf, &sweepAtanf, 2, 1, 0x30, kAtanfSlots, 3, false},
        {"dpadd", kDpadd, &sweepDpBinary<kDpadd>, 0, 0, 0x90, kAddSlots, 4, true},
        {"dpsub", kDpsub, &sweepDpBinary<kDpsub>, 0, 0, 0x90, kAddSlots, 4, true},
        {"dpmul", kDpmul, &sweepDpBinary<kDpmul>, 0, 0, 0x100, kMulSlots, 11, true},
        {"dpdiv", kDpdiv, &sweepDpBinary<kDpdiv>, 0, 0, 0x70, kDivSlots, 4, true},
        {"dpcmp", kDpcmp, &sweepDpBinary<kDpcmp>, 0, 0, 0x70, kDivSlots, 4, true},
        {"fptodp", kFptodp, &sweepFptodp, 2, 0, 0x30, kFptodpSlots, 2, true},
        {"dptofp", kDptofp, &sweepDptofp, 3, 1, 0x40, kDptofpSlots, 2, true},
    };
    constexpr uint32_t kGlobalNativeCount = sizeof(kGlobalNatives) / sizeof(kGlobalNatives[0]);

    // ---- The boot-time differential test
#if TS_SWEEP_CHR_SELFTEST
    using namespace ts_native_test;

    constexpr uint32_t kHeap = 0x000A0000u, kHeapBytes = 0x4000u; // in the unused HLE arena, like game2's
    constexpr uint32_t kErrnoAddress = 0x00383020u;
    constexpr uint32_t kFrameTimeAddress = kGameGp - 0x4B98u, kTurnTableAddress = kGameGp - 0x5D14u,
                       kPlayerCountAddress = kGameGp - 0x4B10u, kPlayerListAddress = 0x003823E8u,
                       kLinkCountAddress = kGameGp - 0x5CB4u, kLinkTableAddress = kGameGp - 0x5D10u;
    constexpr SavedRegion kGlobals[] = {{kFrameTimeAddress, 4u},   {kTurnTableAddress, 4u}, {kPlayerCountAddress, 4u},
                                        {kPlayerListAddress, 32u}, {kLinkCountAddress, 4u}, {kLinkTableAddress, 4u},
                                        {kErrnoAddress, 4u}};

    void fillSane(TestRng &rng, uint8_t *rdram, uint32_t address, uint32_t bytes)
    {
        for (uint32_t offset = 0; offset < bytes; offset += 4u)
            writeTestWord(rdram, address + offset, randomSaneFloatBits(rng));
    }
    void fillWords(TestRng &rng, uint8_t *rdram, uint32_t address, uint32_t bytes)
    {
        for (uint32_t offset = 0; offset < bytes; offset += 4u)
            writeTestWord(rdram, address + offset, rng.next());
    }
    uint32_t smallInt(TestRng &rng, int32_t low, int32_t high)
    {
        return static_cast<uint32_t>(low + static_cast<int32_t>(rng.next() % static_cast<uint32_t>(high - low + 1)));
    }
    uint32_t nearFloat(TestRng &rng, float centre, float spread)
    {
        return ts_native_test::bitsOf(centre + spread * (static_cast<float>(rng.next() % 2049u) * (1.0f / 1024.0f) - 1.0f));
    }
    uint64_t randomDouble(TestRng &rng, int spread)
    {
        const uint32_t pick = rng.next();
        if ((pick & 31u) == 0u)
            return static_cast<uint64_t>(pick & 0x80000000u) << 32; // +-0
        const uint64_t e = static_cast<uint64_t>(1023 + static_cast<int32_t>(rng.next() % (2u * spread + 1u)) - spread);
        return (static_cast<uint64_t>(pick & 0x80000000u) << 32) | (e << 52) | (rng.next64() & sd::kFrac);
    }

    // rotateChr's structures (game2's setupRotateChr layout).
    constexpr uint32_t kRcChr = kHeap + 0x000u, kRcPlayer = kHeap + 0x400u, kRcTarget = kHeap + 0x1000u,
                       kRcState = kHeap + 0x1300u, kRcMount = kHeap + 0x1400u, kRcTurns = kHeap + 0x1500u,
                       kRcOthers = kHeap + 0x1800u, kRcOtherData = kHeap + 0x1E00u;

    void setupRotateChr(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        fillWords(rng, rdram, kHeap, kHeapBytes);
        fillSane(rng, rdram, kRcChr, 0x210u);
        for (uint32_t a = 0; a < 3u; ++a)
            writeTestWord(rdram, kRcChr + 0x4Cu + a * 4u, nearFloat(rng, 180.0f, (rng.next() & 7u) == 0u ? 400.0f : 180.0f));
        writeTestWord(rdram, kRcChr + 0x20u, kRcState);
        writeTestWord(rdram, kRcChr + 0x158u, rng.next() % 4u);
        writeTestWord(rdram, kRcChr + 0x160u, kRcPlayer);
        fillWords(rng, rdram, kRcState, 0x100u);
        static const uint32_t kAnims[] = {0x236u, 0x24Au, 0x25Eu, 0x1D7u, 0x1D8u, 0x1FDu, 0x1FEu, 0x20Cu, 0x211u, 0x1DDu, 0x1DEu, 0x1BBu};
        for (uint32_t ch = 0; ch < 2u; ++ch)
            writeTestWord(rdram, kRcState + 0x60u + ch * 0x40u, (rng.next() & 1u) != 0u ? kAnims[rng.next() % 12u] : rng.next() % 0x280u);
        writeTestWord(rdram, kRcState + 0x58u, kRcMount);
        writeTestWord(rdram, kRcMount + 0xCu, rng.next() % 3u);
        fillSane(rng, rdram, kRcPlayer, 0xBD0u);
        writeTestWord(rdram, kRcPlayer + 8u, (rng.next() & 1u) != 0u ? 0u : rng.next() % 3u);
        writeTestWord(rdram, kRcPlayer + 0x10u, rng.next() % 4u);
        writeTestWord(rdram, kRcPlayer + 0x18u, rng.next() % 4u);
        writeTestWord(rdram, kRcPlayer + 0x24u, rng.next() % 8u);
        writeTestWord(rdram, kRcPlayer + 0x178u, smallInt(rng, 0, 0x1A));
        writeTestWord(rdram, kRcPlayer + 0x2A8u, rng.next() % 8u);
        writeTestWord(rdram, kRcPlayer + 0xA94u, (rng.next() % 8u) == 0u ? 0x1000u : rng.next() & 0xFFFu);
        static const uint32_t kModes[] = {0x20000u, 4u, 0x200000u, 0x400000u, 0x4000u, 0x8000u, 0x10000u, 0u};
        writeTestWord(rdram, kRcPlayer + 0xA9Cu, (rng.next() & 3u) != 0u ? kModes[rng.next() % 8u] : rng.next());
        writeTestWord(rdram, kRcPlayer + 0xAD4u, rng.next() % 2u);
        writeTestWord(rdram, kRcPlayer + 0xAE4u, (rng.next() % 3u) != 0u ? kRcTarget : 0u);
        writeTestWord(rdram, kRcPlayer + 0xB40u, nearFloat(rng, 4.0f, 4.0f));
        writeTestWord(rdram, kRcPlayer + 0xB98u, nearFloat(rng, 0.0f, 90.0f));
        fillSane(rng, rdram, kRcTarget, 0x210u);
        writeTestWord(rdram, kRcTarget + 4u, (rng.next() & 1u) != 0u ? 0xC9u + rng.next() % 2u : rng.next() % 0x100u);
        static const uint32_t kKinds[] = {1u, 8u, 0x40u, 0x100u, 2u, 0x20u};
        writeTestWord(rdram, kRcTarget + 8u, kKinds[rng.next() % 6u]);
        writeTestWord(rdram, kRcTarget + 0x160u, kRcPlayer);
        writeTestWord(rdram, kTurnTableAddress, kRcTurns);
        fillSane(rng, rdram, kRcTurns, 8u * 0x1Cu);
        writeTestWord(rdram, kPlayerCountAddress, rng.next() % 5u);
        for (uint32_t k = 0; k < 4u; ++k)
        {
            writeTestWord(rdram, kPlayerListAddress + k * 8u, rng.next());
            writeTestWord(rdram, kPlayerListAddress + k * 8u + 4u, kRcOthers + k * 0x170u);
            writeTestWord(rdram, kRcOtherData + k * 0x30u + 0x10u, rng.next() % 4u);
            writeTestWord(rdram, kRcOtherData + k * 0x30u + 0x24u, rng.next() % 8u);
            writeTestWord(rdram, kRcOthers + k * 0x170u + 0x160u, kRcOtherData + k * 0x30u);
        }
        writeTestWord(rdram, kFrameTimeAddress, nearFloat(rng, 1.0f, 1.0f));
        setPointer(rng, c, 4, kRcChr);
    }

    // findpadslinked2pad: links at scratch+0x200 (up to 40), out[] at +0x600.
    void setupFindPads(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        R5900Context *ctx = &c;
        const uint32_t links = 1u + rng.next() % 40u;
        for (uint32_t i = 0; i < links; ++i)
        {
            const uint32_t at = kScratch + 0x200u + i * 0x14u;
            writeTestWord(rdram, at, (rng.next() & 7u) != 0u ? rng.next() % 4u : rng.next());
            writeTestWord(rdram, at + 4u, rng.next() % 6u);
            writeTestWord(rdram, at + 8u, rng.next() % 6u);
        }
        writeTestWord(rdram, kLinkCountAddress, (rng.next() & 15u) != 0u ? links : static_cast<uint32_t>(-static_cast<int32_t>(rng.next() % 2u)));
        writeTestWord(rdram, kLinkTableAddress, kScratch + 0x200u);
        uint64_t pad = rng.next() % 6u;
        if ((rng.next() & 15u) == 0u)
            pad |= static_cast<uint64_t>(rng.next()) << 32;
        SET_GPR_U64(ctx, 4, pad);
        SET_GPR_U64(ctx, 5, kScratch + 0x600u);
        SET_GPR_U64(ctx, 6, sext32(smallInt(rng, -1, 20)));
    }

    // closestpadinlist: pads at scratch+0x700 (16), the list at +0x900, pos at +0xA00.
    void setupClosestPad(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        R5900Context *ctx = &c;
        for (uint32_t i = 0; i < 16u * 0x1Cu; i += 4u)
            writeTestWord(rdram, kScratch + 0x700u + i, (rng.next() % 64u) == 0u ? randomFloatBits(rng) : nearFloat(rng, 0.0f, 900.0f));
        writeTestWord(rdram, kTurnTableAddress, kScratch + 0x700u);
        const uint32_t count = rng.next() % 21u;
        for (uint32_t i = 0; i < 21u; ++i)
            writeTestWord(rdram, kScratch + 0x900u + i * 4u, rng.next() % 16u);
        for (uint32_t i = 0; i < 3u; ++i)
            writeTestWord(rdram, kScratch + 0xA00u + i * 4u, nearFloat(rng, 0.0f, 900.0f));
        SET_GPR_U64(ctx, 4, kScratch + 0xA00u);
        SET_GPR_U64(ctx, 5, (rng.next() & 15u) != 0u ? count : sext32(static_cast<uint32_t>(-static_cast<int32_t>(rng.next() % 3u))));
        SET_GPR_U64(ctx, 6, kScratch + 0x900u);
    }

    struct Buffers
    {
        uint8_t scratch[kScratchBytes], heap[kHeapBytes], globals[64];
        uint8_t before[kScratchBytes], want[kScratchBytes];
        R5900Context base, a, b;
    };

    uint64_t gpr(const R5900Context &c, int reg) { return static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(c.r[reg])); }

    // A whole-context, whole-scratch comparison (functions that reproduce
    // every register and store): returns the cases that differ.
    uint32_t testExact(PS2Runtime &runtime, uint8_t *rdram, Buffers &buf, const char *name, uint32_t address, GuestFunction original,
                       GuestFunction native, void (*setup)(TestRng &, R5900Context &, uint8_t *), bool floats, int cases)
    {
        TestRng rng{0x5EC0C412u ^ address};
        uint32_t mismatches = 0;
        for (uint32_t offset = 0; offset < kScratchBytes; offset += 4u)
            writeTestWord(rdram, kScratch + offset, rng.next());
        randomContext(rng, buf.base);
        for (int i = 0; i < cases; ++i)
        {
            randomInputs(rng, buf.base);
            setup(rng, buf.base, rdram);
            std::memcpy(buf.before, rdram + kScratch, kScratchBytes);
            std::memcpy(&buf.a, &buf.base, sizeof(R5900Context));
            std::memcpy(&buf.b, &buf.base, sizeof(R5900Context));
            runGuest(runtime, rdram, buf.a, original, address);
            std::memcpy(buf.want, rdram + kScratch, kScratchBytes);
            std::memcpy(rdram + kScratch, buf.before, kScratchBytes);
            runGuest(runtime, rdram, buf.b, native, address);
            Difference regs, memory;
            compareWords(reinterpret_cast<const uint8_t *>(&buf.a), reinterpret_cast<const uint8_t *>(&buf.b), sizeof(R5900Context),
                         contextWordKinds(), floats, regs);
            compareWords(buf.want, rdram + kScratch, kScratchBytes, nullptr, floats, memory);
            if (regs.words != 0u || memory.words != 0u)
            {
                if (mismatches++ == 0u)
                {
                    const Difference &d = regs.words != 0u ? regs : memory;
                    std::fprintf(stderr, "[TS:sweep-chr] %s case %d: %s0x%x want %08x got %08x\n", name, i,
                                 regs.words != 0u ? "ctx+" : "mem ", regs.words != 0u ? d.where : kScratch + d.where, d.want, d.got);
                }
            }
        }
        return mismatches;
    }

    // One guest call of a soft-double routine: v0 (or f0) for a0/a1 (or f12).
    uint64_t guestDouble(PS2Runtime &runtime, uint8_t *rdram, R5900Context &c, uint32_t address, uint64_t a0, uint64_t a1)
    {
        R5900Context *ctx = &c;
        SET_GPR_U64(ctx, 4, a0);
        SET_GPR_U64(ctx, 5, a1);
        SET_GPR_U32(ctx, 29, kScratch + kScratchBytes);
        SET_GPR_U32(ctx, 31, kTestReturn);
        runGuest(runtime, rdram, c, runtime.lookupFunction(address), address);
        return GPR_U64(ctx, 2);
    }

    // The soft-double kernel and atan2/atan2f against the guest routines.
    uint32_t testKernel(PS2Runtime &runtime, uint8_t *rdram, Buffers &buf)
    {
        TestRng rng{0x0A7A2D15u};
        R5900Context &c = buf.a;
        randomContext(rng, c);
        R5900Context *ctx = &c;
        PS2Runtime *rt = &runtime;
        uint32_t mismatches = 0, tested = 0;
        auto report = [&](const char *what, uint64_t x, uint64_t y, uint64_t want, uint64_t got) {
            if (mismatches++ < 4u)
                std::fprintf(stderr, "[TS:sweep-chr] %s(%016llx, %016llx): want %016llx got %016llx\n", what,
                             static_cast<unsigned long long>(x), static_cast<unsigned long long>(y),
                             static_cast<unsigned long long>(want), static_cast<unsigned long long>(got));
        };
        static const uint32_t kOps[] = {0x2E3180u, 0x2E31D8u, 0x2E3240u, 0x2E34E8u};
        for (int i = 0; i < 6000; ++i)
        {
            const uint32_t op = static_cast<uint32_t>(i) & 3u;
            const uint64_t x = randomDouble(rng, 40);
            uint64_t y = randomDouble(rng, 40);
            if ((rng.next() & 3u) == 0u) // close magnitudes: cancellation, carries
                y = (x & ~0xFFFull) ^ (rng.next() & 0xFFFu) ^ ((rng.next() & 1u) != 0u ? sd::kSign : 0u);
            bool ok = true;
            const uint64_t mine = op == 0u ? sd::add(x, y, ok) : op == 1u ? sd::sub(x, y, ok) : op == 2u ? sd::mul(x, y, ok) : sd::div(x, y, ok);
            if (!ok)
                continue;
            ++tested;
            const uint64_t want = guestDouble(runtime, rdram, c, kOps[op], x, y);
            if (want != mine)
                report(op == 0u ? "dpadd" : op == 1u ? "dpsub" : op == 2u ? "dpmul" : "dpdiv", x, y, want, mine);
        }
        for (int i = 0; i < 3000; ++i)
        {
            const uint64_t x = randomDouble(rng, (i & 1) != 0 ? 150 : 20);
            bool ok = true;
            const uint32_t mine = sd::toFloat(x, ok);
            if (ok)
            {
                ++tested;
                guestDouble(runtime, rdram, c, 0x2E3A10u, x, 0u);
                const uint32_t want = ts_native_test::bitsOf(c.f[0]);
                if (want != mine)
                    report("dptofp", x, 0u, want, mine);
            }
            const uint32_t f = randomSaneFloatBits(rng);
            ok = true;
            const uint64_t d = sd::fromFloat(f, ok);
            if (ok)
            {
                ++tested;
                setFloat(c, 12, f);
                const uint64_t want = guestDouble(runtime, rdram, c, 0x2E4608u, 0u, 0u);
                if (want != d)
                    report("fptodp", f, 0u, want, d);
            }
            const uint64_t y = randomDouble(rng, 4);
            ok = true;
            const int mc = sd::cmp(x, y, ok);
            const int64_t wc = static_cast<int64_t>(guestDouble(runtime, rdram, c, 0x2E3768u, x, y));
            ++tested;
            if ((wc < 0) != (mc < 0) || (wc == 0) != (mc == 0))
                report("dpcmp", x, y, static_cast<uint64_t>(wc), static_cast<uint64_t>(mc));
        }
        for (int i = 0; i < 3000; ++i)
        {
            const float fy = ts_native_test::floatOf((i & 3) == 0 ? nearFloat(rng, 0.0f, 0.001f) : randomSaneFloatBits(rng));
            const float fx = ts_native_test::floatOf((i & 7) == 1 ? 0u : (i & 7) == 2 ? 0x3F800000u : randomSaneFloatBits(rng));
            bool ok = true;
            const uint64_t y = sd::fromFloat(ts_native_test::bitsOf(fy), ok), x = sd::fromFloat(ts_native_test::bitsOf(fx), ok);
            uint64_t mine;
            if (ok && atan2D(rdram, ctx, rt, y, x, mine))
            {
                ++tested;
                const uint64_t want = guestDouble(runtime, rdram, c, 0x2D7510u, y, x);
                if (want != mine)
                    report("atan2", y, x, want, mine);
            }
            float mf;
            const float gy = fy * 0.01f, gx = fabsf(fx);
            if (atan2F(rdram, ctx, rt, gy, gx, mf))
            {
                ++tested;
                ctx->f[12] = gy;
                ctx->f[13] = gx;
                guestDouble(runtime, rdram, c, 0x2D7D68u, 0u, 0u);
                if (ts_native_test::bitsOf(c.f[0]) != ts_native_test::bitsOf(mf))
                    report("atan2f", ts_native_test::bitsOf(gy), ts_native_test::bitsOf(gx), ts_native_test::bitsOf(c.f[0]),
                           ts_native_test::bitsOf(mf));
            }
        }
        std::fprintf(stderr, "[TS:sweep-chr] soft doubles, atan2, atan2f: %u cases, %u differ\n", tested, mismatches);
        return mismatches;
    }

    // rotateChr: the fields it writes, its frame, errno and the registers
    // a caller keeps (s0-s7, gp, sp, fp, ra, f20-f31, pc).
    uint32_t testRotateChr(PS2Runtime &runtime, uint8_t *rdram, Buffers &buf, GuestFunction original, int cases)
    {
        static const uint32_t kFields[] = {kRcChr + 0x4Cu,     kRcChr + 0x50u,     kRcChr + 0x54u,     kRcPlayer + 0xADCu,
                                           kRcPlayer + 0xAE0u, kRcPlayer + 0xB98u, kRcPlayer + 0xB9Cu, kErrnoAddress};
        constexpr uint32_t kFields_ = sizeof(kFields) / sizeof(kFields[0]);
        const uint32_t frame = kScratch + kScratchBytes - 0x80u;
        TestRng rng{0x2BC5D0C4u};
        uint32_t mismatches = 0;
        const uint32_t fastBefore = g_rotateFast;
        for (uint32_t offset = 0; offset < kScratchBytes; offset += 4u)
            writeTestWord(rdram, kScratch + offset, rng.next());
        randomContext(rng, buf.base);
        uint32_t want[kFields_], frameBefore[32], frameWant[32];
        for (int i = 0; i < cases; ++i)
        {
            randomInputs(rng, buf.base);
            const TestRng snapshot = rng;
            setupRotateChr(rng, buf.base, rdram);
            std::memcpy(frameBefore, rdram + frame, sizeof(frameBefore));
            const uint32_t errnoBefore = readTestWord(rdram, kErrnoAddress);
            std::memcpy(&buf.a, &buf.base, sizeof(R5900Context));
            std::memcpy(&buf.b, &buf.base, sizeof(R5900Context));
            runGuest(runtime, rdram, buf.a, original, kRotateChr);
            for (uint32_t k = 0; k < kFields_; ++k)
                want[k] = readTestWord(rdram, kFields[k]);
            std::memcpy(frameWant, rdram + frame, sizeof(frameWant));
            // The same inputs again (the setup rewrites every structure).
            TestRng again = snapshot;
            R5900Context scratchCtx;
            std::memcpy(&scratchCtx, &buf.base, sizeof(R5900Context));
            setupRotateChr(again, scratchCtx, rdram);
            std::memcpy(rdram + frame, frameBefore, sizeof(frameBefore));
            writeTestWord(rdram, kErrnoAddress, errnoBefore);
            runGuest(runtime, rdram, buf.b, &sweepRotateChr, kRotateChr);
            bool same = std::memcmp(frameWant, rdram + frame, sizeof(frameWant)) == 0 && buf.a.pc == buf.b.pc;
            uint32_t where = 0, w = 0, g = 0;
            for (uint32_t k = 0; k < kFields_ && same; ++k)
            {
                const uint32_t got = readTestWord(rdram, kFields[k]);
                if (got != want[k] && !(isNanBits(got) && isNanBits(want[k])))
                {
                    same = false;
                    where = kFields[k];
                    w = want[k];
                    g = got;
                }
            }
            for (int reg : {16, 17, 18, 19, 20, 21, 22, 23, 28, 29, 30, 31})
                same = same && gpr(buf.a, reg) == gpr(buf.b, reg);
            for (int reg = 20; reg < 32; ++reg)
                same = same && ts_native_test::bitsOf(buf.a.f[reg]) == ts_native_test::bitsOf(buf.b.f[reg]);
            if (!same && mismatches++ == 0u)
                std::fprintf(stderr, "[TS:sweep-chr] rotateChr case %d: 0x%x want %08x got %08x\n", i, where, w, g);
        }
        std::fprintf(stderr, "[TS:sweep-chr] rotateChr: %d cases (%u native to the end), %u differ\n", cases,
                     g_rotateFast - fastBefore, mismatches);
        return mismatches;
    }

    // A global replacement against the implementation it replaces: the
    // result register, the caller's registers, pc, errno and the slots of
    // its own frame.
    uint64_t testDouble(TestRng &rng)
    {
        const uint32_t pick = rng.next() % 20u;
        static const uint64_t kSpecial[] = {0u, sd::kSign, 0x7FF0000000000000ull, 0xFFF0000000000000ull, 0x7FF8000000000001ull,
                                            0x000FFFFFFFFFFFFFull, sd::kOne, 0x3FF0000000000001ull, 0xBFF0000000000000ull};
        if (pick < 8u)
            return randomDouble(rng, 40);
        if (pick < 11u)
            return randomDouble(rng, 1000);
        if (pick < 16u)
        {
            bool ok = true;
            return sd::fromFloat(randomSaneFloatBits(rng), ok);
        }
        return kSpecial[rng.next() % 9u];
    }

    uint32_t testGlobal(PS2Runtime &runtime, uint8_t *rdram, Buffers &buf, const GlobalEntry &e, GuestFunction prev, int cases)
    {
        TestRng rng{0x61A7A2u ^ e.address};
        uint32_t mismatches = 0;
        randomContext(rng, buf.base);
        const uint32_t sp = kScratch + kScratchBytes, frame = sp - e.frame;
        uint8_t frameBefore[0x100], frameWant[0x100];
        for (int i = 0; i < cases; ++i)
        {
            randomInputs(rng, buf.base);
            R5900Context *ctx = &buf.base;
            if (e.args == 0u || e.args == 3u)
            {
                SET_GPR_U64(ctx, 4, testDouble(rng));
                SET_GPR_U64(ctx, 5, testDouble(rng));
            }
            else
            {
                for (int reg : {12, 13})
                    setFloat(buf.base, reg, (rng.next() & 1u) != 0u ? randomFloatBits(rng) : randomSaneFloatBits(rng));
                if ((rng.next() & 7u) == 0u)
                    setFloat(buf.base, 13, 0u);
            }
            SET_GPR_U32(ctx, 29, sp);
            SET_GPR_U32(ctx, 31, kTestReturn);
            std::memcpy(frameBefore, rdram + frame, e.frame);
            const uint32_t errnoBefore = readTestWord(rdram, kErrnoAddress);
            std::memcpy(&buf.a, &buf.base, sizeof(R5900Context));
            std::memcpy(&buf.b, &buf.base, sizeof(R5900Context));
            runGuest(runtime, rdram, buf.a, prev, e.address);
            std::memcpy(frameWant, rdram + frame, e.frame);
            const uint32_t errnoWant = readTestWord(rdram, kErrnoAddress);
            std::memcpy(rdram + frame, frameBefore, e.frame);
            writeTestWord(rdram, kErrnoAddress, errnoBefore);
            runGuest(runtime, rdram, buf.b, e.native, e.address);
            bool same = buf.a.pc == buf.b.pc && readTestWord(rdram, kErrnoAddress) == errnoWant;
            if (e.result == 0u)
                same = same && gpr(buf.a, 2) == gpr(buf.b, 2);
            else
            {
                const uint32_t w = ts_native_test::bitsOf(buf.a.f[0]), g = ts_native_test::bitsOf(buf.b.f[0]);
                same = same && (w == g || (isNanBits(w) && isNanBits(g)));
            }
            for (int reg : {16, 17, 18, 19, 20, 21, 22, 23, 28, 29, 30, 31})
                same = same && gpr(buf.a, reg) == gpr(buf.b, reg);
            for (int reg = 20; reg < 32; ++reg)
                same = same && ts_native_test::bitsOf(buf.a.f[reg]) == ts_native_test::bitsOf(buf.b.f[reg]);
            for (uint32_t k = 0; k < e.slotCount && same; ++k)
                same = std::memcmp(frameWant + e.slots[k].offset, rdram + frame + e.slots[k].offset, e.slots[k].reg >= 0 ? 8u : 4u) == 0;
            if (!same && mismatches++ == 0u)
                std::fprintf(stderr, "[TS:sweep-chr] %s case %d: a0 %016llx a1 %016llx f12 %08x f13 %08x: v0 %016llx/%016llx f0 %08x/%08x\n",
                             e.name, i, static_cast<unsigned long long>(gpr(buf.base, 4)), static_cast<unsigned long long>(gpr(buf.base, 5)),
                             ts_native_test::bitsOf(buf.base.f[12]), ts_native_test::bitsOf(buf.base.f[13]),
                             static_cast<unsigned long long>(gpr(buf.a, 2)), static_cast<unsigned long long>(gpr(buf.b, 2)),
                             ts_native_test::bitsOf(buf.a.f[0]), ts_native_test::bitsOf(buf.b.f[0]));
        }
        return mismatches;
    }

    // Bit 0 findpadslinked2pad, 1 closestpadinlist, 2 rotateChr, 3+i
    // kGlobalNatives[i]: passed.
    uint32_t selfTest(PS2Runtime &runtime, GuestFunction prevFind, GuestFunction prevClosest, GuestFunction prevRotate)
    {
        // Zeroed contexts, 16-byte aligned (their vector registers are stored
        // with movaps; calloc only promises 8): freed below.
        void *block = std::calloc(1, sizeof(Buffers) + alignof(Buffers));
        if (block == nullptr)
            return 0u;
        Buffers *buf = reinterpret_cast<Buffers *>((reinterpret_cast<uintptr_t>(block) + alignof(Buffers) - 1u) &
                                                   ~uintptr_t(alignof(Buffers) - 1u));
        uint8_t *rdram = runtime.memory().getRDRAM();
        constexpr uint32_t kGlobalCount = sizeof(kGlobals) / sizeof(kGlobals[0]);
        std::memcpy(buf->scratch, rdram + kScratch, kScratchBytes);
        std::memcpy(buf->heap, rdram + kHeap, kHeapBytes);
        uint32_t used = 0;
        for (uint32_t i = 0; i < kGlobalCount; ++i)
        {
            std::memcpy(buf->globals + used, rdram + kGlobals[i].address, kGlobals[i].bytes);
            used += kGlobals[i].bytes;
        }
        uint32_t passed = 0;
        {
            ClockHold hold(runtime);
            const uint32_t find = testExact(runtime, rdram, *buf, "findpadslinked2pad", kFindPads, prevFind, &sweepFindPadsLinked2Pad,
                                            &setupFindPads, false, 4000);
            const uint32_t closest = testExact(runtime, rdram, *buf, "closestpadinlist", kClosestPad, prevClosest,
                                               &sweepClosestPadInList, &setupClosestPad, true, 4000);
            const uint32_t kernel = testKernel(runtime, rdram, *buf);
            const uint32_t rotate = kernel == 0u ? testRotateChr(runtime, rdram, *buf, prevRotate, 3000) : 1u;
            std::fprintf(stderr, "[TS:sweep-chr] findpadslinked2pad %s, closestpadinlist %s, rotateChr %s\n",
                         find == 0u ? "native" : "ORIGINAL", closest == 0u ? "native" : "ORIGINAL",
                         rotate == 0u ? "native" : "ORIGINAL");
            passed = (find == 0u ? 1u : 0u) | (closest == 0u ? 2u : 0u) | (rotate == 0u ? 4u : 0u);
            for (uint32_t g = 0; g < kGlobalNativeCount; ++g)
            {
                const GlobalEntry &e = kGlobalNatives[g];
                if (e.softDouble && !TS_SWEEP_CHR_SOFTDOUBLE)
                    continue;
                const uint32_t bad = kernel == 0u ? testGlobal(runtime, rdram, *buf, e, prevOf(e.address), 3000) : 1u;
                std::fprintf(stderr, "[TS:sweep-chr] %-7s %s (%u of 3000 differ)\n", e.name, bad == 0u ? "native" : "ORIGINAL", bad);
                passed |= bad == 0u ? (8u << g) : 0u;
            }
        }
        std::memcpy(rdram + kScratch, buf->scratch, kScratchBytes);
        std::memcpy(rdram + kHeap, buf->heap, kHeapBytes);
        used = 0;
        for (uint32_t i = 0; i < kGlobalCount; ++i)
        {
            std::memcpy(rdram + kGlobals[i].address, buf->globals + used, kGlobals[i].bytes);
            used += kGlobals[i].bytes;
        }
        std::free(block);
        return passed;
    }
#endif
}

void registerSweepChr(PS2Runtime &runtime)
{
    const GuestFunction prevFind = runtime.lookupFunction(kFindPads);
    g_prevClosestPad = runtime.lookupFunction(kClosestPad);
    g_prevRotateChr = runtime.lookupFunction(kRotateChr);
    for (uint32_t g = 0; g < kGlobalNativeCount; ++g)
        g_prev[g] = {kGlobalNatives[g].address, runtime.lookupFunction(kGlobalNatives[g].address)};
    uint32_t enabled = 0xFFFFFFFFu;
#if TS_SWEEP_CHR_SELFTEST
    enabled = selfTest(runtime, prevFind, g_prevClosestPad, g_prevRotateChr);
#else
    (void)prevFind;
#endif
    if ((enabled & 1u) != 0u)
        runtime.replaceFunction(kFindPads, &sweepFindPadsLinked2Pad);
    if ((enabled & 2u) != 0u)
        runtime.replaceFunction(kClosestPad, &sweepClosestPadInList);
    if ((enabled & 4u) != 0u)
        runtime.replaceFunction(kRotateChr, &sweepRotateChr);
    for (uint32_t g = 0; g < kGlobalNativeCount; ++g)
    {
        const GlobalEntry &e = kGlobalNatives[g];
        if ((enabled & (8u << g)) != 0u && (!e.softDouble || TS_SWEEP_CHR_SOFTDOUBLE))
            runtime.replaceFunction(e.address, e.native);
    }
}
#else
void registerSweepChr(PS2Runtime &) {}
#endif
