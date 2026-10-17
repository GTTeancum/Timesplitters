// M7.1, x87 doubles (src/xbox/PUSH-BC-PLAN.md section 3.6 item 7;
// owned by B-LOGIC, sub-owner L1): the game's software double routines
// (libgcc fp-bit: dpadd, dpsub, dpmul, dpdiv, dpcmp, fptodp, dptofp,
// dptoli; newlib's __ieee754_sqrt, and fdlibm's atan and __ieee754_atan2
// lifted call for call) computed on the x87 at 53-bit
// precision, round to nearest, every exception masked. One x87 operation
// rounds once to the same bits fp-bit's integer code produces, for every
// input and result in the normal range; everything else (NaN, infinity,
// denormal inputs, results at the bottom of the exponent range or beyond
// the top) is refused and the caller runs the fp-bit transcription.
//
// fp-bit specifics the kernels follow:
//   * __unpack_d / __unpack_f treat an exponent field of 0 as zero (a
//     denormal input is a signed zero to fp-bit; refused here, kept on the
//     transcription, except where the zero reading is spelled out below).
//   * Rounding is to nearest, ties to even, with a sticky bit (pack_d's
//     8 guard bits, _fpadd_parts' and dpmul's sticky ors): the same as
//     IEEE for normal results.
//   * x + 0 returns x's record; 0 + 0 has the sign a & b; 0 * x and 0 / x
//     are zeros with the sign a ^ b.
// Results are refused when the exponent field is 1 or less (a result that
// x87 rounds once at 53 bits and again when denormalising at the store,
// and pack_d's own denormal path), or all ones.
//
// Header-only and free of the runtime so that src/xbox/test/fp_x87_test.cpp
// runs the same kernels on the host.
#pragma once
#include <cstdint>
#include <cstring>

namespace ts_fp_x87
{
    // ---- The x87 control word

    inline uint16_t readCw()
    {
        uint16_t cw;
        __asm__ volatile("fnstcw %0" : "=m"(cw));
        return cw;
    }

    inline void loadCw(uint16_t cw) { __asm__ volatile("fldcw %0" : : "m"(cw)); }

    // 53-bit significand (PC = 10), round to nearest (RC = 00), every
    // exception masked (the low six bits): the state the kernels need.
    constexpr uint16_t kCwFields = 0x0F3Fu;
    constexpr uint16_t kCwWanted = 0x023Fu;

    // The control word for the scope of one kernel: left alone when it is
    // already right (the usual case: one fnstcw and a compare), else set
    // and put back.
    class CwScope
    {
    public:
        CwScope() : m_saved(readCw())
        {
            if ((m_saved & kCwFields) != kCwWanted)
            {
                m_changed = true;
                loadCw(static_cast<uint16_t>((m_saved & ~kCwFields) | kCwWanted));
            }
        }
        ~CwScope()
        {
            if (m_changed)
                loadCw(m_saved);
        }
        CwScope(const CwScope &) = delete;
        CwScope &operator=(const CwScope &) = delete;
        bool changed() const { return m_changed; }

    private:
        uint16_t m_saved;
        bool m_changed = false;
    };

    // ---- One x87 operation each, double in, double out (memory operands:
    // the result is rounded by the operation at PC=53 and stored exactly)

    inline uint64_t x87Add(uint64_t a, uint64_t b)
    {
        uint64_t r;
        __asm__ volatile("fldl %1\n\tfaddl %2\n\tfstpl %0" : "=m"(r) : "m"(a), "m"(b) : "st");
        return r;
    }

    inline uint64_t x87Sub(uint64_t a, uint64_t b)
    {
        uint64_t r;
        __asm__ volatile("fldl %1\n\tfsubl %2\n\tfstpl %0" : "=m"(r) : "m"(a), "m"(b) : "st");
        return r;
    }

    inline uint64_t x87Mul(uint64_t a, uint64_t b)
    {
        uint64_t r;
        __asm__ volatile("fldl %1\n\tfmull %2\n\tfstpl %0" : "=m"(r) : "m"(a), "m"(b) : "st");
        return r;
    }

    inline uint64_t x87Div(uint64_t a, uint64_t b)
    {
        uint64_t r;
        __asm__ volatile("fldl %1\n\tfdivl %2\n\tfstpl %0" : "=m"(r) : "m"(a), "m"(b) : "st");
        return r;
    }

    inline uint64_t x87Sqrt(uint64_t a)
    {
        uint64_t r;
        __asm__ volatile("fldl %1\n\tfsqrt\n\tfstpl %0" : "=m"(r) : "m"(a) : "st");
        return r;
    }

    // Double to float: the store rounds once (RC), whatever PC is.
    inline uint32_t x87ToFloat(uint64_t a)
    {
        uint32_t r;
        __asm__ volatile("fldl %1\n\tfstps %0" : "=m"(r) : "m"(a) : "st");
        return r;
    }

    // ---- Classes

    constexpr uint64_t kSign = 0x8000000000000000ull;
    constexpr uint64_t kMant = 0x000FFFFFFFFFFFFFull;
    constexpr uint64_t kImplicit = 0x0010000000000000ull;

    inline uint32_t expOf(uint64_t b) { return static_cast<uint32_t>(b >> 52) & 0x7FFu; }
    inline bool isZero(uint64_t b) { return (b << 1) == 0u; }
    inline bool isNormal(uint64_t b) { return expOf(b) != 0u && expOf(b) != 0x7FFu; }
    inline bool normalOrZero(uint64_t b) { return isNormal(b) || isZero(b); }
    // A result the kernels hand back: normal, exponent field 2 or more.
    inline bool safeResult(uint64_t r) { return expOf(r) >= 2u && expOf(r) != 0x7FFu; }
    // pack_d's final $a1 for a normal result: the 53-bit significand.
    inline uint64_t significand(uint64_t r) { return kImplicit | (r & kMant); }

    // ---- The kernels: true and the result, or false (the caller runs the
    // transcription). Each expects a CwScope to be open.

    // dpadd / dpsub (subtract: b's sign flipped first, as dpsub does).
    // zeroResult: true when the result is a zero from two zero operands
    // (pack_d's zero path: $a1 = 0).
    inline bool addSub(uint64_t a, uint64_t b, bool subtract, uint64_t &r, bool &zeroResult)
    {
        zeroResult = false;
        if (!normalOrZero(a) || !normalOrZero(b))
            return false;
        if (subtract)
            b ^= kSign;
        const bool za = isZero(a), zb = isZero(b);
        if (za && zb)
        {
            r = a & b & kSign; // 0 + 0: the sign is a.sign & b.sign
            zeroResult = true;
            return true;
        }
        if (za || zb)
        {
            r = za ? b : a; // fp-bit returns the other operand's record
            return safeResult(r);
        }
        r = x87Add(a, b);
        return safeResult(r);
    }

    // dpmul. zeroResult as for addSub (a zero operand: no partial products).
    inline bool mul(uint64_t a, uint64_t b, uint64_t &r, bool &zeroResult)
    {
        zeroResult = false;
        if (!normalOrZero(a) || !normalOrZero(b))
            return false;
        if (isZero(a) || isZero(b))
        {
            r = (a ^ b) & kSign;
            zeroResult = true;
            return true;
        }
        r = x87Mul(a, b);
        return safeResult(r);
    }

    // dpmul's last partial product (__muldi3 of the two fractions' high
    // words, fraction = significand << 8): HI and LO as the multu leaves
    // them, sign-extended words.
    inline void mulHiLo(uint64_t a, uint64_t b, uint64_t &hi, uint64_t &lo)
    {
        const uint64_t fa = significand(a) << 8, fb = significand(b) << 8;
        const uint64_t p = (fb >> 32) * (fa >> 32);
        lo = static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(static_cast<uint32_t>(p))));
        hi = static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(static_cast<uint32_t>(p >> 32))));
    }

    // dpdiv.
    inline bool div(uint64_t a, uint64_t b, uint64_t &r)
    {
        if (!normalOrZero(a) || !isNormal(b))
            return false;
        if (isZero(a))
        {
            r = (a ^ b) & kSign;
            return true;
        }
        r = x87Div(a, b);
        return safeResult(r);
    }

    // dpcmp (__fpcmp_parts_d's order): -1, 0 or 1. NaN refused. An
    // exponent field of 0 is a zero (fp-bit's unpack); infinities compare
    // by sign.
    inline bool cmp(uint64_t a, uint64_t b, int32_t &result)
    {
        const uint32_t ea = expOf(a), eb = expOf(b);
        if ((ea == 0x7FFu && (a & kMant) != 0u) || (eb == 0x7FFu && (b & kMant) != 0u))
            return false;
        const int32_t sa = static_cast<int32_t>(a >> 63), sb = static_cast<int32_t>(b >> 63);
        const bool infA = ea == 0x7FFu, infB = eb == 0x7FFu;
        const bool zeroA = ea == 0u, zeroB = eb == 0u;
        if (infA && infB)
            result = sb - sa;
        else if (infA)
            result = sa ? -1 : 1;
        else if (infB)
            result = sb ? 1 : -1;
        else if (zeroA && zeroB)
            result = 0;
        else if (zeroA)
            result = sb ? 1 : -1;
        else if (zeroB)
            result = sa ? -1 : 1;
        else if (sa != sb)
            result = sa ? -1 : 1;
        else
        {
            const uint64_t ma = a & ~kSign, mb = b & ~kSign; // exponent, then fraction
            result = ma > mb ? (sa ? -1 : 1) : ma < mb ? (sa ? 1 : -1) : 0;
        }
        return true;
    }

    // fptodp: exact. Denormal floats (a zero to fp-bit's unpack), NaN and
    // infinity refused.
    inline bool floatToDouble(uint32_t f, uint64_t &r)
    {
        const uint32_t e = (f >> 23) & 0xFFu;
        const uint64_t sign = static_cast<uint64_t>(f >> 31) << 63;
        if (e == 0u)
        {
            if ((f & 0x7FFFFFu) != 0u)
                return false;
            r = sign;
            return true;
        }
        if (e == 0xFFu)
            return false;
        r = sign | (static_cast<uint64_t>(e - 127u + 1023u) << 52) | (static_cast<uint64_t>(f & 0x7FFFFFu) << 29);
        return true;
    }

    // dptofp: one rounding at the store. Zeros keep their sign; denormal,
    // NaN and infinite inputs and float results at the bottom (exponent
    // field 1 or less) or the top of the range are refused.
    inline bool doubleToFloat(uint64_t a, uint32_t &r)
    {
        if (isZero(a))
        {
            r = static_cast<uint32_t>(a >> 32) & 0x80000000u;
            return true;
        }
        if (!isNormal(a))
            return false;
        r = x87ToFloat(a);
        const uint32_t e = (r >> 23) & 0xFFu;
        return e >= 2u && e != 0xFFu;
    }

    // dptoli: exact for every class (integer work, no x87). NaN and zero
    // (exponent 0) give 0, below one gives 0, 2^31 and beyond (and
    // infinity) saturate. negative: the result came from negation or the
    // negative saturation (the original's movn copies a register's upper
    // half then; see ts_fp_x87.cpp).
    enum class ToIntPath : uint8_t
    {
        Zero,
        Positive,
        Negated,
        SaturatedNegative,
    };
    inline uint64_t doubleToInt(uint64_t a, ToIntPath &path)
    {
        const uint32_t e = expOf(a);
        const bool sign = (a >> 63) != 0u;
        if (e == 0u || (e == 0x7FFu && (a & kMant) != 0u))
        {
            path = ToIntPath::Zero;
            return 0u;
        }
        const int32_t ne = static_cast<int32_t>(e) - 1023;
        if (e != 0x7FFu && ne < 0)
        {
            path = ToIntPath::Zero;
            return 0u;
        }
        if (e == 0x7FFu || ne >= 31)
        {
            path = sign ? ToIntPath::SaturatedNegative : ToIntPath::Positive;
            return sign ? 0xFFFFFFFF80000000ull : 0x7FFFFFFFull;
        }
        const uint64_t magnitude = significand(a) >> (52 - ne);
        const uint64_t low = static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(static_cast<uint32_t>(magnitude))));
        if (!sign)
        {
            path = ToIntPath::Positive;
            return low;
        }
        path = ToIntPath::Negated;
        return static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(0u - static_cast<uint32_t>(low))));
    }

    // __ieee754_sqrt: positive normal inputs through fsqrt (correctly
    // rounded, as newlib's bit-by-bit loop is); +-0 returns x. Negative,
    // denormal, NaN and infinite inputs refused.
    inline bool sqrt(uint64_t a, uint64_t &r)
    {
        if (isZero(a))
        {
            r = a;
            return true;
        }
        if (!isNormal(a) || (a >> 63) != 0u)
            return false;
        r = x87Sqrt(a);
        return safeResult(r);
    }

    // ---- The double libm routines, lifted call for call: each dp* call of
    // the listing is one checked kernel above, in the listing's order (the
    // operations are pure, so the order in which C++ evaluates the
    // arguments does not matter); any refused step refuses the whole call.

    constexpr uint64_t kOne = 0x3FF0000000000000ull, kTwo = 0x4000000000000000ull;
    constexpr uint64_t kOneAndHalf = 0x3FF8000000000000ull; // 1.5
    constexpr uint64_t kMinusOne = 0xBFF0000000000000ull;

    struct Ops
    {
        bool ok = true;
        uint64_t add(uint64_t a, uint64_t b) { return step(a, b, false); }
        uint64_t sub(uint64_t a, uint64_t b) { return step(a, b, true); }
        uint64_t mul(uint64_t a, uint64_t b)
        {
            uint64_t r = 0;
            bool zero;
            if (ok && !ts_fp_x87::mul(a, b, r, zero))
                ok = false;
            return r;
        }
        uint64_t div(uint64_t a, uint64_t b)
        {
            uint64_t r = 0;
            if (ok && !ts_fp_x87::div(a, b, r))
                ok = false;
            return r;
        }

    private:
        uint64_t step(uint64_t a, uint64_t b, bool subtract)
        {
            uint64_t r = 0;
            bool zero;
            if (ok && !addSub(a, b, subtract, r, zero))
                ok = false;
            return r;
        }
    };

    // fdlibm atan's tables (s_atan.c), as the game's data holds them.
    struct AtanConsts
    {
        uint64_t atanhi[4], atanlo[4], aT[11], huge;
    };

    // atan at 0x2d6ba8 (fdlibm s_atan.c; the listing checked against it).
    inline bool atan(const AtanConsts &c, uint64_t x, uint64_t &r)
    {
        const int32_t hx = static_cast<int32_t>(x >> 32);
        const uint32_t ix = static_cast<uint32_t>(hx) & 0x7FFFFFFFu;
        Ops o;
        if (ix >= 0x44100000u) // |x| >= 2^66
        {
            if (ix > 0x7FF00000u || (ix == 0x7FF00000u && static_cast<uint32_t>(x) != 0u))
                return false; // NaN: x + x
            r = hx > 0 ? o.add(c.atanhi[3], c.atanlo[3]) : o.sub(o.sub(0u, c.atanhi[3]), c.atanlo[3]);
            return o.ok;
        }
        int id;
        if (ix < 0x3FDC0000u) // |x| < 0.4375
        {
            if (ix < 0x3E200000u) // |x| < 2^-29: huge + x > one returns x
            {
                const uint64_t t = o.add(c.huge, x);
                int32_t order;
                if (!o.ok || !cmp(t, kOne, order))
                    return false;
                if (order > 0)
                {
                    r = x;
                    return true;
                }
            }
            id = -1;
        }
        else
        {
            x &= ~kSign; // fabs
            if (ix < 0x3FF30000u) // |x| < 1.1875
            {
                if (ix < 0x3FE60000u) // 7/16 <= |x| < 11/16: (2x - 1) / (2 + x)
                {
                    id = 0;
                    x = o.div(o.sub(o.add(x, x), kOne), o.add(x, kTwo));
                }
                else // 11/16 <= |x| < 19/16: (x - 1) / (x + 1)
                {
                    id = 1;
                    x = o.div(o.sub(x, kOne), o.add(x, kOne));
                }
            }
            else if (ix < 0x40038000u) // |x| < 2.4375: (x - 1.5) / (1 + 1.5x)
            {
                id = 2;
                x = o.div(o.sub(x, kOneAndHalf), o.add(o.mul(x, kOneAndHalf), kOne));
            }
            else // 2.4375 <= |x| < 2^66: -1 / x
            {
                id = 3;
                x = o.div(kMinusOne, x);
            }
            if (!o.ok)
                return false;
        }
        const uint64_t z = o.mul(x, x);
        const uint64_t w = o.mul(z, z);
        // s1 = z*(aT[0]+w*(aT[2]+w*(aT[4]+w*(aT[6]+w*(aT[8]+w*aT[10])))))
        uint64_t s1 = o.mul(w, c.aT[10]);
        s1 = o.mul(w, o.add(c.aT[8], s1));
        s1 = o.mul(w, o.add(c.aT[6], s1));
        s1 = o.mul(w, o.add(c.aT[4], s1));
        s1 = o.mul(w, o.add(c.aT[2], s1));
        s1 = o.mul(z, o.add(c.aT[0], s1));
        // s2 = w*(aT[1]+w*(aT[3]+w*(aT[5]+w*(aT[7]+w*aT[9]))))
        uint64_t s2 = o.mul(w, c.aT[9]);
        s2 = o.mul(w, o.add(c.aT[7], s2));
        s2 = o.mul(w, o.add(c.aT[5], s2));
        s2 = o.mul(w, o.add(c.aT[3], s2));
        s2 = o.mul(w, o.add(c.aT[1], s2));
        if (id < 0)
        {
            r = o.sub(x, o.mul(x, o.add(s1, s2)));
            return o.ok;
        }
        const uint64_t zz = o.sub(c.atanhi[id], o.sub(o.sub(o.mul(x, o.add(s1, s2)), c.atanlo[id]), x));
        r = hx < 0 ? o.sub(0u, zz) : zz;
        return o.ok;
    }

    // __ieee754_atan2's constants (e_atan2.c; the compiler folded pi + tiny
    // and friends): bigK = pi_o_2 + 0.5 * pi_lo, and the two copies of pi
    // and pi_lo its last two cases load.
    struct Atan2Consts
    {
        AtanConsts atan;
        uint64_t bigK, pi2, piLo2, pi3, piLo3;
    };

    // __ieee754_atan2(y, x) at 0x2d84b0 (fdlibm e_atan2.c): the general
    // case, both operands finite, nonzero and normal; every special case
    // (NaN, zero, infinity, denormal) refused.
    inline bool atan2(const Atan2Consts &c, uint64_t y, uint64_t x, uint64_t &r)
    {
        if (!isNormal(x) || !isNormal(y))
            return false;
        if (x == kOne)
            return atan(c.atan, y, r);
        const int32_t hx = static_cast<int32_t>(x >> 32), hy = static_cast<int32_t>(y >> 32);
        const int32_t ix = hx & 0x7FFFFFFF, iy = hy & 0x7FFFFFFF;
        const int32_t m = ((hy >> 31) & 1) | ((hx >> 30) & 2);
        const int32_t k = static_cast<int32_t>(static_cast<uint32_t>(iy) - static_cast<uint32_t>(ix)) >> 20;
        uint64_t z;
        if (k > 60)
            z = c.bigK;
        else if (hx < 0 && k < -60)
            z = 0u;
        else
        {
            Ops o;
            const uint64_t q = o.div(y, x);
            if (!o.ok || !atan(c.atan, q & ~kSign, z))
                return false;
        }
        Ops o;
        switch (m)
        {
        case 0: r = z; break;
        case 1: r = z ^ kSign; break;
        case 2: r = o.sub(c.pi2, o.sub(z, c.piLo2)); break;
        default: r = o.sub(o.sub(z, c.piLo3), c.pi3); break;
        }
        return o.ok;
    }
}

#if defined(PLATFORM_XBOX) && !defined(TS_FP_X87_HOST_TEST)
class PS2Runtime;
struct XboxReportLine;

#ifndef TS_FP_X87
#define TS_FP_X87 0
#endif

namespace ts_fp_x87
{
    // Registers the module (with TS_FP_X87_BOOTTEST, after each routine
    // passed its boot differential test in Abi mode). False: nothing
    // registered.
    bool registerModule(PS2Runtime &runtime);
    // The x87 fields of [TS:idiom]: fpdiff (TS_FP_X87_SELFCHECK) and the
    // control-word reloads.
    void addReport(XboxReportLine &line);
}
#endif
