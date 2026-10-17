// Host test of the x87 double kernels (project/game/native/ts_fp_x87.h;
// B-LOGIC, src/xbox/PUSH-BC-PLAN.md section 3.6 item 7). `make host-tests`
// (src/xbox/test/host_tests.mk, listed by src/xbox/mk/b_logic.mk) builds
// it with -I project/game/native and runs it.
//
// For 3,000,000 inputs per routine, aimed at the edges the kernels must
// refuse (exponent fields 0, 1, 2 and the top, NaN, infinity, denormals,
// cancellation, results crossing into the denormal range or overflowing),
// every result a kernel accepts is compared with the host's IEEE double
// arithmetic (SSE2: one correctly rounded operation, the result fp-bit
// produces in the normal range); fp-bit's own conventions are checked
// where they differ from IEEE (an exponent field of 0 is a zero to its
// unpack; 0 + 0 takes the sign a & b). Each case runs under two x87 control
// words, the kernels' own and the host's 64-bit-precision default, so
// CwScope's reload is exercised. Exit status 1 on any difference.
#define TS_FP_X87_HOST_TEST 1
#include "ts_fp_x87.h"

#include <cmath>
#include <cstdio>
#include <cstring>

namespace
{
    using namespace ts_fp_x87;

    struct Rng
    {
        uint64_t s = 0x9E3779B97F4A7C15ull;
        uint64_t next()
        {
            s ^= s << 13;
            s ^= s >> 7;
            s ^= s << 17;
            return s;
        }
    };

    double asDouble(uint64_t b)
    {
        double d;
        std::memcpy(&d, &b, 8);
        return d;
    }
    uint64_t bitsOf(double d)
    {
        uint64_t b;
        std::memcpy(&b, &d, 8);
        return b;
    }
    float asFloat(uint32_t b)
    {
        float f;
        std::memcpy(&f, &b, 4);
        return f;
    }
    uint32_t bitsOfF(float f)
    {
        uint32_t b;
        std::memcpy(&b, &f, 4);
        return b;
    }

    uint64_t randomDouble(Rng &rng)
    {
        const uint64_t pick = rng.next() % 20u;
        const uint64_t sign = (rng.next() & 1u) != 0u ? kSign : 0u;
        const uint64_t mant = rng.next() & kMant;
        switch (pick)
        {
        case 0: return sign;
        case 1: return sign | 0x7FF0000000000000ull;
        case 2: return sign | 0x7FF0000000000000ull | mant | 1u;
        case 3: return sign | mant | 1u;
        case 4: return sign | (static_cast<uint64_t>(1u + rng.next() % 3u) << 52) | mant;
        case 5: return sign | (static_cast<uint64_t>(0x7FCu + rng.next() % 3u) << 52) | mant;
        case 6: return sign | (static_cast<uint64_t>(rng.next() % 60u) << 52) | mant;          // small
        case 7: return sign | (static_cast<uint64_t>(0x7C0u + rng.next() % 63u) << 52) | mant; // large
        case 8: return rng.next();
        case 9: return bitsOf(static_cast<double>(static_cast<int32_t>(rng.next() >> 40) - (1 << 23)) / 1024.0);
        default: return sign | (static_cast<uint64_t>(1023u - 60u + rng.next() % 120u) << 52) | mant;
        }
    }

    // A second operand near the first (cancellation, equal, nearby).
    uint64_t partner(Rng &rng, uint64_t a)
    {
        switch (rng.next() % 6u)
        {
        case 0: return a ^ kSign;
        case 1: return (a ^ kSign) ^ (rng.next() & 0xFFu);
        case 2: return a;
        default: return randomDouble(rng);
        }
    }

    uint32_t randomFloat(Rng &rng)
    {
        const uint64_t pick = rng.next() % 8u;
        const uint32_t sign = (rng.next() & 1u) != 0u ? 0x80000000u : 0u;
        const uint32_t mant = static_cast<uint32_t>(rng.next()) & 0x7FFFFFu;
        switch (pick)
        {
        case 0: return sign;
        case 1: return sign | 0x7F800000u | ((rng.next() & 1u) != 0u ? mant : 0u); // infinity or NaN
        case 2: return sign | mant | 1u;
        case 3: return static_cast<uint32_t>(rng.next());
        default: return sign | ((1u + static_cast<uint32_t>(rng.next() % 253u)) << 23) | mant;
        }
    }

    // fp-bit's reading of a double: an exponent field of 0 is a zero.
    double fpbitValue(uint64_t b) { return expOf(b) == 0u ? asDouble(b & kSign) : asDouble(b); }

    uint32_t g_failures = 0;
    void fail(const char *what, uint64_t a, uint64_t b, uint64_t got, uint64_t want)
    {
        if (g_failures++ < 20u)
            std::printf("FAIL %s a=%016llx b=%016llx got=%016llx want=%016llx\n", what, (unsigned long long)a,
                        (unsigned long long)b, (unsigned long long)got, (unsigned long long)want);
    }

    constexpr int kCases = 3000000;
    const uint16_t kControlWords[2] = {0x027Fu, 0x037Fu}; // 53-bit (the kernels'), 64-bit (the host default)

    // fdlibm's atan tables (s_atan.c) and atan2 constants (e_atan2.c), as
    // the game's data holds them.
    const AtanConsts kAtan = {
        {0x3FDDAC670561BB4Full, 0x3FE921FB54442D18ull, 0x3FEF730BD281F69Bull, 0x3FF921FB54442D18ull},
        {0x3C7A2B7F222F65E2ull, 0x3C81A62633145C07ull, 0x3C7007887AF0CBBDull, 0x3C91A62633145C07ull},
        {0x3FD555555555550Dull, 0xBFC999999998EBC4ull, 0x3FC24924920083FFull, 0xBFBC71C6FE231671ull,
         0x3FB745CDC54C206Eull, 0xBFB3B0F2AF749A6Dull, 0x3FB10D66A0D03D51ull, 0xBFADDE2D52DEFD9Aull,
         0x3FA97B4B24760DEBull, 0xBFA2B4442C6A6C2Full, 0x3F90AD3AE322DA11ull},
        0x7E37E43C8800759Cull,
    };
    const Atan2Consts kAtan2 = {kAtan, 0x3FF921FB54442D18ull, 0x400921FB54442D18ull, 0x3CA1A62633145C07ull,
                                0x400921FB54442D18ull, 0x3CA1A62633145C07ull};

    // The same algorithms in the host's IEEE double arithmetic (one
    // correctly rounded SSE2 operation per step): what fp-bit computes when
    // every step stays in the normal range.
    double refAtan(double x)
    {
        double atanhi[4], atanlo[4], aT[11];
        std::memcpy(atanhi, kAtan.atanhi, sizeof(atanhi));
        std::memcpy(atanlo, kAtan.atanlo, sizeof(atanlo));
        std::memcpy(aT, kAtan.aT, sizeof(aT));
        const int32_t hx = static_cast<int32_t>(bitsOf(x) >> 32);
        const uint32_t ix = static_cast<uint32_t>(hx) & 0x7FFFFFFFu;
        if (ix >= 0x44100000u)
            return hx > 0 ? atanhi[3] + atanlo[3] : (0.0 - atanhi[3]) - atanlo[3];
        int id;
        if (ix < 0x3FDC0000u)
        {
            if (ix < 0x3E200000u)
                return x; // huge + x > one
            id = -1;
        }
        else
        {
            x = std::fabs(x);
            if (ix < 0x3FF30000u)
            {
                if (ix < 0x3FE60000u)
                {
                    id = 0;
                    x = ((x + x) - 1.0) / (x + 2.0);
                }
                else
                {
                    id = 1;
                    x = (x - 1.0) / (x + 1.0);
                }
            }
            else if (ix < 0x40038000u)
            {
                id = 2;
                x = (x - 1.5) / (x * 1.5 + 1.0);
            }
            else
            {
                id = 3;
                x = -1.0 / x;
            }
        }
        const double z = x * x, w = z * z;
        const double s1 = z * (aT[0] + w * (aT[2] + w * (aT[4] + w * (aT[6] + w * (aT[8] + w * aT[10])))));
        const double s2 = w * (aT[1] + w * (aT[3] + w * (aT[5] + w * (aT[7] + w * aT[9]))));
        if (id < 0)
            return x - x * (s1 + s2);
        const double zz = atanhi[id] - ((x * (s1 + s2) - atanlo[id]) - x);
        return hx < 0 ? 0.0 - zz : zz;
    }

    double refAtan2(double y, double x)
    {
        if (bitsOf(x) == kOne)
            return refAtan(y);
        const int32_t hx = static_cast<int32_t>(bitsOf(x) >> 32), hy = static_cast<int32_t>(bitsOf(y) >> 32);
        const int32_t ix = hx & 0x7FFFFFFF, iy = hy & 0x7FFFFFFF;
        const int32_t m = ((hy >> 31) & 1) | ((hx >> 30) & 2);
        const int32_t k = static_cast<int32_t>(static_cast<uint32_t>(iy) - static_cast<uint32_t>(ix)) >> 20;
        double z;
        if (k > 60)
            z = asDouble(kAtan2.bigK);
        else if (hx < 0 && k < -60)
            z = 0.0;
        else
            z = refAtan(std::fabs(y / x));
        switch (m)
        {
        case 0: return z;
        case 1: return asDouble(bitsOf(z) ^ kSign);
        case 2: return asDouble(kAtan2.pi2) - (z - asDouble(kAtan2.piLo2));
        default: return (z - asDouble(kAtan2.piLo3)) - asDouble(kAtan2.pi3);
        }
    }
}

int main()
{
    Rng rng;
    const uint16_t hostCw = readCw();
    for (uint16_t cw : kControlWords)
    {
        uint32_t accepted[11] = {};
        for (int i = 0; i < kCases; ++i)
        {
            const uint64_t a = randomDouble(rng), b = partner(rng, a);
            uint64_t r;
            bool zero;
            loadCw(cw);
            // add / sub
            for (int s = 0; s < 2; ++s)
            {
                bool ok;
                {
                    CwScope scope;
                    ok = addSub(a, b, s != 0, r, zero);
                }
                if (readCw() != cw)
                    fail("cw not restored", a, b, readCw(), cw);
                if (!ok)
                    continue;
                ++accepted[s];
                const uint64_t bb = s ? b ^ kSign : b;
                const uint64_t want = (isZero(a) && isZero(bb)) ? (a & bb & kSign) : bitsOf(asDouble(a) + asDouble(bb));
                if (r != want)
                    fail(s ? "sub" : "add", a, b, r, want);
                if (!zero && !safeResult(r))
                    fail("add result range", a, b, r, 0);
            }
            {
                CwScope scope;
                if (mul(a, b, r, zero))
                {
                    ++accepted[2];
                    const uint64_t want = bitsOf(asDouble(a) * asDouble(b));
                    if (r != want)
                        fail("mul", a, b, r, want);
                }
                if (div(a, b, r))
                {
                    ++accepted[3];
                    const uint64_t want = bitsOf(asDouble(a) / asDouble(b));
                    if (r != want)
                        fail("div", a, b, r, want);
                }
                if (sqrt(a, r))
                {
                    ++accepted[4];
                    const uint64_t want = isZero(a) ? a : bitsOf(std::sqrt(asDouble(a)));
                    if (r != want)
                        fail("sqrt", a, 0, r, want);
                }
                if (atan(kAtan, a, r))
                {
                    ++accepted[9];
                    const uint64_t want = bitsOf(refAtan(asDouble(a)));
                    if (r != want)
                        fail("atan", a, 0, r, want);
                }
                if (atan2(kAtan2, a, b, r))
                {
                    ++accepted[10];
                    const uint64_t want = bitsOf(refAtan2(asDouble(a), asDouble(b)));
                    if (r != want)
                        fail("atan2", a, b, r, want);
                }
                uint32_t f;
                if (doubleToFloat(a, f))
                {
                    ++accepted[5];
                    const uint32_t want = bitsOfF(static_cast<float>(asDouble(a)));
                    if (f != want)
                        fail("dptofp", a, 0, f, want);
                }
            }
            int32_t c;
            if (cmp(a, b, c))
            {
                ++accepted[6];
                const double x = fpbitValue(a), y = fpbitValue(b);
                const int32_t want = x < y ? -1 : x > y ? 1 : 0;
                if (c != want)
                    fail("dpcmp", a, b, static_cast<uint64_t>(c), static_cast<uint64_t>(want));
            }
            {
                ToIntPath path;
                const uint64_t got = doubleToInt(a, path);
                ++accepted[7];
                const double x = fpbitValue(a);
                int64_t want;
                if (std::isnan(asDouble(a)) || expOf(a) == 0u || std::fabs(x) < 1.0)
                    want = 0;
                else if (x >= 2147483648.0)
                    want = 0x7FFFFFFF;
                else if (x <= -2147483648.0)
                    want = static_cast<int64_t>(0xFFFFFFFF80000000ull);
                else
                    want = static_cast<int32_t>(x); // truncation
                if (got != static_cast<uint64_t>(want))
                    fail("dptoli", a, 0, got, static_cast<uint64_t>(want));
            }
            {
                const uint32_t fb = randomFloat(rng);
                uint64_t d;
                if (floatToDouble(fb, d))
                {
                    ++accepted[8];
                    const uint64_t want = bitsOf(static_cast<double>(asFloat(fb)));
                    if (d != want)
                        fail("fptodp", fb, 0, d, want);
                }
            }
        }
        std::printf("cw %04x: accepted add %u sub %u mul %u div %u sqrt %u dptofp %u dpcmp %u dptoli %u fptodp %u "
                    "atan %u atan2 %u of %d\n",
                    cw, accepted[0], accepted[1], accepted[2], accepted[3], accepted[4], accepted[5], accepted[6],
                    accepted[7], accepted[8], accepted[9], accepted[10], kCases);
    }
    loadCw(hostCw);
    std::printf("fp_x87_test: %u failure(s)\n", g_failures);
    return g_failures == 0u ? 0 : 1;
}
