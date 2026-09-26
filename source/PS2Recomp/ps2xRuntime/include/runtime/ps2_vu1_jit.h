#ifndef PS2_VU1_JIT_H
#define PS2_VU1_JIT_H

// Support for ahead-of-time recompiled VU1 microprograms.
//
// Generated code (project/tools/vu1/vu1_recomp.py) reproduces the timing model
// of VU1Interpreter exactly:
//  * VF/VI/ACC reads interlock in the interpreter, so a read always observes
//    the most recently issued write. Generated code therefore writes those
//    registers immediately and only tracks per-lane ready cycles for stalls,
//    using the interpreter's own ready arrays.
//  * Q, P, MAC/status/clip flags and stores become visible after a latency
//    without interlocks. They are queued here and committed lazily, in the
//    interpreter's order, whenever generated code reads them.
//  * XGKICK copies one qword every two cycles from live VU memory. The copy
//    is advanced lazily to the current cycle before any store and at the end.
// At any pair boundary the state can be handed back to the interpreter, which
// continues the program exactly (budget exhaustion, unknown jump targets).

#include "runtime/ps2_vu1.h"

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <limits>

#if defined(__AVX__)
#include <immintrin.h>
#define VU1_JIT_SIMD 1
#else
#define VU1_JIT_SIMD 0
#endif

#if defined(_MSC_VER)
#define VU1_JIT_INLINE __forceinline
#else
#define VU1_JIT_INLINE inline __attribute__((always_inline))
#endif

struct Vu1Jit;
using Vu1CompiledEntry = bool (*)(Vu1Jit &jit, uint32_t pc);

struct Vu1CompiledProgram
{
    uint64_t hash;
    Vu1CompiledEntry run;
    const char *name;
};

// Registered by generated translation units at static-initialization time.
void registerVu1CompiledProgram(const Vu1CompiledProgram &program);
// TS_VU1_TRACE=<file>: both engines log every pair start (pc, cycle, state
// hash) so the first divergence can be found by diffing the two logs.
void traceVu1Pair(const VU1State &state, uint32_t pc, uint64_t cycle);
extern const bool g_vu1Trace;
uint64_t hashVu1Code(const uint8_t *code, uint32_t size);

struct Vu1Jit
{
    using VU = VU1Interpreter;

    VU &vu;
    VU1State &s;
    uint8_t *data;
    uint64_t cyc;
    uint64_t budgetSafe;
    uint64_t budgetEnd = UINT64_MAX;
    uint64_t pendingMax;

    // Branch-read quirk: a branch immediately after an integer write reads
    // the register's previous value (VU1Interpreter::readBranchVi).
    uint8_t bkReg = 0;
    int32_t bkVal = 0;

    // Lazily committed flag writes, in issue order (all have FMAC latency).
    struct FlagEntry
    {
        uint64_t ready;
        uint32_t mac, status, extraSticky, clip;
        bool writesMac, writesStatus, writesSticky, writesClip;
        // FMAC entries from the SIMD path: component bit masks (bit c = x..w)
        // of zero/sign/underflow/overflow; mac/status derived on apply.
        bool rawMasks;
        uint8_t zero, negative, under, over;
        // DI status bits of an FDIV result retired early (see queueQ).
        bool qStatus;
        uint32_t di;
    };
    static constexpr unsigned kFlagCapacity = 64u; // power of two
    FlagEntry flags[kFlagCapacity];
    unsigned flagHead = 0, flagCount = 0;

    bool qPending = false;      // FDIV result not fully retired (value and/or status)
    bool qValueApplied = false; // value already copied to s.q by readQ()
    uint64_t qReady = 0;
    float qValue = 0.0f;
    uint32_t qDi = 0;

    struct EfuEntry
    {
        uint64_t ready;
        float value;
        bool valid;
    };
    EfuEntry efu[2]{};

    uint64_t kickBoundary = 0;
    // Sticky status bits (<< 6) of FMAC ops whose flag entries were elided.
    uint32_t stickyAccum = 0;

    // The interpreter's interlock ready cycles (absolute), shared so a
    // handoff needs no conversion.
    uint64_t (*vfReady)[4];
    uint64_t *viReady;
    uint64_t *accReady;

    Vu1Jit(VU &interpreter, uint8_t *vuData);

    // ---------------------------------------------------------------- floats
    VU1_JIT_INLINE static float normOp(float value)
    {
        uint32_t bits;
        std::memcpy(&bits, &value, 4);
        const uint32_t exponent = (bits >> 23) & 0xFFu;
        if (exponent == 0u)
            bits &= 0x80000000u;
        else if (exponent == 0xFFu)
            bits = (bits & 0x80000000u) | 0x7F7FFFFFu;
        std::memcpy(&value, &bits, 4);
        return value;
    }

    VU1_JIT_INLINE static float normResult(float value)
    {
        uint32_t bits;
        std::memcpy(&bits, &value, 4);
        const uint32_t sign = bits & 0x80000000u;
        const uint32_t exponent = (bits >> 23) & 0xFFu;
        if ((bits & 0x7FFFFFFFu) != 0u)
        {
            if (exponent == 0u)
                bits = sign;
            else if (exponent == 0xFFu)
                bits = sign | 0x7F7FFFFFu;
        }
        std::memcpy(&value, &bits, 4);
        return value;
    }

    VU1_JIT_INLINE static uint8_t normExact(float &value, long double exact)
    {
        const bool negative = std::signbit(exact);
        const long double magnitude = std::fabs(exact);
        uint8_t result = negative ? 0x2u : 0u;
        const uint32_t bits = negative ? 0x80000000u : 0u;
        if (magnitude == 0.0L)
        {
            result |= 0x1u;
            std::memcpy(&value, &bits, 4);
        }
        else if (magnitude > static_cast<long double>(std::numeric_limits<float>::max()))
        {
            result |= 0x8u;
            const uint32_t clamped = bits | 0x7F7FFFFFu;
            std::memcpy(&value, &clamped, 4);
        }
        else if (magnitude < static_cast<long double>(std::numeric_limits<float>::min()))
        {
            result |= 0x5u;
            std::memcpy(&value, &bits, 4);
        }
        return result;
    }

    static constexpr uint8_t lane(unsigned component) { return static_cast<uint8_t>(1u << (3u - component)); }

    // FMAC operation kinds.
    enum : int
    {
        kAdd,
        kSub,
        kMadd,
        kMsub,
        kMul,
        kOpmsub,
        kOpmula
    };
    // Second-operand sources.
    enum : int
    {
        kSrcBcX,
        kSrcBcY,
        kSrcBcZ,
        kSrcBcW,
        kSrcQ,
        kSrcI,
        kSrcVec
    };

    template <int Src>
    VU1_JIT_INLINE float second(const float *vt, unsigned component) const
    {
        if constexpr (Src <= kSrcBcW)
            return normOp(vt[Src]);
        else if constexpr (Src == kSrcQ)
            return normOp(s.q);
        else if constexpr (Src == kSrcI)
            return normOp(s.i);
        else
            return normOp(vt[component]);
    }

    // Computes an FMAC result into out (lanes in dest only) and queues its
    // flags. Reads operands before anything is written, like the interpreter.
    // PushFlags == false: the recompiler proved no instruction can observe
    // this operation's MAC/status entry; only its sticky status bits are kept
    // (stickyAccum, merged at finish/handoff).
    template <int Kind, int Src, int Dest, bool PushFlags = true>
    VU1_JIT_INLINE void fmac(float *out, uint8_t fs, uint8_t ft)
    {
#if VU1_JIT_SIMD
        fmacSimd<Kind, Src, Dest, PushFlags>(out, fs, ft);
#else
        fmacScalar<Kind, Src, Dest, PushFlags>(out, fs, ft);
#endif
    }

    template <int Kind, int Src, int Dest, bool PushFlags = true>
    VU1_JIT_INLINE void fmacScalar(float *out, uint8_t fs, uint8_t ft)
    {
        static constexpr uint8_t crossLeft[4] = {1u, 2u, 0u, 3u};
        static constexpr uint8_t crossRight[4] = {2u, 0u, 1u, 3u};
        const float *vs = s.vf[fs];
        const float *vt = s.vf[ft];
        uint8_t laneFlags[4]{};
        uint32_t extraSticky = 0u;
        for (unsigned c = 0; c < 4u; ++c)
        {
            if ((Dest & lane(c)) == 0)
                continue;
            float result;
            long double exact;
            if constexpr (Kind == kOpmsub || Kind == kOpmula)
            {
                const float a = normOp(vs[crossLeft[c]]);
                const float b = normOp(vt[crossRight[c]]);
                if constexpr (Kind == kOpmsub)
                {
                    const float accumulator = normOp(s.acc[c]);
                    result = c == 3u ? 0.0f : accumulator - a * b;
                    exact = c == 3u ? 0.0L
                                    : static_cast<long double>(accumulator) -
                                          static_cast<long double>(a) * static_cast<long double>(b);
                    // Product sticky uses the crossed operands for every lane.
                    float product = a * b;
                    extraSticky |= normExact(product, static_cast<long double>(a) * static_cast<long double>(b)) & 0xFu;
                }
                else
                {
                    result = c == 3u ? 0.0f : a * b;
                    exact = c == 3u ? 0.0L : static_cast<long double>(a) * static_cast<long double>(b);
                }
            }
            else
            {
                const float a = normOp(vs[c]);
                const float b = second<Src>(vt, c);
                if constexpr (Kind == kAdd)
                {
                    result = a + b;
                    exact = static_cast<long double>(a) + static_cast<long double>(b);
                }
                else if constexpr (Kind == kSub)
                {
                    result = a - b;
                    exact = static_cast<long double>(a) - static_cast<long double>(b);
                }
                else if constexpr (Kind == kMul)
                {
                    result = a * b;
                    exact = static_cast<long double>(a) * static_cast<long double>(b);
                }
                else
                {
                    const float accumulator = normOp(s.acc[c]);
                    if constexpr (Kind == kMadd)
                    {
                        result = accumulator + a * b;
                        exact = static_cast<long double>(accumulator) +
                                static_cast<long double>(a) * static_cast<long double>(b);
                    }
                    else
                    {
                        result = accumulator - a * b;
                        exact = static_cast<long double>(accumulator) -
                                static_cast<long double>(a) * static_cast<long double>(b);
                    }
                    float product = a * b;
                    extraSticky |= normExact(product, static_cast<long double>(a) * static_cast<long double>(b)) & 0xFu;
                }
            }
            laneFlags[c] = normExact(result, exact);
            out[c] = result;
        }
        if constexpr (Dest != 0)
        {
            if constexpr (PushFlags)
                queueFmacFlags(laneFlags, Dest, extraSticky);
            else
            {
                uint32_t current = 0u;
                for (unsigned c = 0; c < 4u; ++c)
                    if (Dest & lane(c))
                        current |= laneFlags[c];
                stickyAccum |= ((current & 0xFu) | extraSticky) << 6;
            }
        }
    }

#if VU1_JIT_SIMD
    // x86 AVX implementation of the same arithmetic: four lanes at once, with
    // the interpreter's long double "exact" checks done in double (MSVC's long
    // double is double, so results are identical there).
    static VU1_JIT_INLINE __m128 normOp4(__m128 value)
    {
        const __m128i bits = _mm_castps_si128(value);
        const __m128i expMask = _mm_set1_epi32(0x7F800000);
        const __m128i sign = _mm_and_si128(bits, _mm_set1_epi32(static_cast<int>(0x80000000u)));
        const __m128i exponent = _mm_and_si128(bits, expMask);
        __m128i result = _mm_blendv_epi8(bits, sign, _mm_cmpeq_epi32(exponent, _mm_setzero_si128()));
        result = _mm_blendv_epi8(result, _mm_or_si128(sign, _mm_set1_epi32(0x7F7FFFFF)),
                                 _mm_cmpeq_epi32(exponent, expMask));
        return _mm_castsi128_ps(result);
    }

    template <int Src>
    VU1_JIT_INLINE __m128 second4(const float *vt) const
    {
        if constexpr (Src <= kSrcBcW)
            return _mm_set1_ps(normOp(vt[Src]));
        else if constexpr (Src == kSrcQ)
            return _mm_set1_ps(normOp(s.q));
        else if constexpr (Src == kSrcI)
            return _mm_set1_ps(normOp(s.i));
        else
            return normOp4(_mm_loadu_ps(vt));
    }

    // Component bit masks (bit c = component c) of the normExact conditions.
    struct ExactMasks
    {
        int zero, negative, under, over;
    };
    static VU1_JIT_INLINE ExactMasks exactMasks(__m256d exact)
    {
        const __m256d magnitude =
            _mm256_and_pd(exact, _mm256_castsi256_pd(_mm256_set1_epi64x(0x7FFFFFFFFFFFFFFFll)));
        ExactMasks m;
        m.zero = _mm256_movemask_pd(_mm256_cmp_pd(magnitude, _mm256_setzero_pd(), _CMP_EQ_OQ));
        m.over = _mm256_movemask_pd(
            _mm256_cmp_pd(magnitude, _mm256_set1_pd(3.40282346638528859812e+38), _CMP_GT_OQ));
        m.under = _mm256_movemask_pd(
                      _mm256_cmp_pd(magnitude, _mm256_set1_pd(1.17549435082228750797e-38), _CMP_LT_OQ)) &
                  ~m.zero;
        m.negative = _mm256_movemask_pd(exact);
        return m;
    }

    static VU1_JIT_INLINE uint32_t reverse4(uint32_t bits)
    {
        return ((bits & 1u) << 3) | ((bits & 2u) << 1) | ((bits & 4u) >> 1) | ((bits & 8u) >> 3);
    }

    template <int Kind, int Src, int Dest, bool PushFlags = true>
    VU1_JIT_INLINE void fmacSimd(float *out, uint8_t fs, uint8_t ft)
    {
        constexpr uint32_t components = ((Dest & 8) >> 3) | ((Dest & 4) >> 1) | ((Dest & 2) << 1) | ((Dest & 1) << 3);
        __m128 a = normOp4(_mm_loadu_ps(s.vf[fs]));
        __m128 b;
        if constexpr (Kind == kOpmsub || Kind == kOpmula)
        {
            b = normOp4(_mm_loadu_ps(s.vf[ft]));
            a = _mm_shuffle_ps(a, a, _MM_SHUFFLE(3, 0, 2, 1));
            b = _mm_shuffle_ps(b, b, _MM_SHUFFLE(3, 1, 0, 2));
        }
        else
            b = second4<Src>(s.vf[ft]);
        const __m256d ad = _mm256_cvtps_pd(a);
        const __m256d bd = _mm256_cvtps_pd(b);
        __m128 result;
        __m256d exact;
        uint32_t sticky = 0u;
        if constexpr (Kind == kAdd)
        {
            result = _mm_add_ps(a, b);
            exact = _mm256_add_pd(ad, bd);
        }
        else if constexpr (Kind == kSub)
        {
            result = _mm_sub_ps(a, b);
            exact = _mm256_sub_pd(ad, bd);
        }
        else if constexpr (Kind == kMul || Kind == kOpmula)
        {
            result = _mm_mul_ps(a, b);
            exact = _mm256_mul_pd(ad, bd);
        }
        else
        {
            const __m128 acc = normOp4(_mm_loadu_ps(s.acc));
            const __m128 product = _mm_mul_ps(a, b);
            const __m256d productExact = _mm256_mul_pd(ad, bd);
            if constexpr (Kind == kMadd)
            {
                result = _mm_add_ps(acc, product);
                exact = _mm256_add_pd(_mm256_cvtps_pd(acc), productExact);
            }
            else
            {
                result = _mm_sub_ps(acc, product);
                exact = _mm256_sub_pd(_mm256_cvtps_pd(acc), productExact);
            }
            const ExactMasks p = exactMasks(productExact);
            sticky = (((p.zero | p.under) & components) ? 1u : 0u) | ((p.negative & components) ? 2u : 0u) |
                     ((p.under & components) ? 4u : 0u) | ((p.over & components) ? 8u : 0u);
        }
        if constexpr (Kind == kOpmsub || Kind == kOpmula)
        {
            // w is defined as +0 for the outer-product instructions.
            result = _mm_blend_ps(result, _mm_setzero_ps(), 0x8);
            exact = _mm256_blend_pd(exact, _mm256_setzero_pd(), 0x8);
        }
        const ExactMasks m = exactMasks(exact);
        _mm_storeu_ps(out, result);
        const int fix = (m.zero | m.under | m.over) & static_cast<int>(components);
        if (fix)
        {
            for (unsigned c = 0; c < 4u; ++c)
            {
                if (!(fix >> c & 1))
                    continue;
                uint32_t bits = (m.negative >> c & 1) ? 0x80000000u : 0u;
                if (m.over >> c & 1)
                    bits |= 0x7F7FFFFFu;
                std::memcpy(out + c, &bits, 4);
            }
        }
        if constexpr (Dest != 0)
        {
            const uint32_t z = static_cast<uint32_t>(m.zero | m.under) & components;
            const uint32_t n = static_cast<uint32_t>(m.negative) & components;
            const uint32_t u = static_cast<uint32_t>(m.under) & components;
            const uint32_t o = static_cast<uint32_t>(m.over) & components;
            if constexpr (!PushFlags)
            {
                const uint32_t current = (z ? 1u : 0u) | (n ? 2u : 0u) | (u ? 4u : 0u) | (o ? 8u : 0u);
                stickyAccum |= (current | sticky) << 6;
                return;
            }
            FlagEntry &e = pushFlag();
            e.rawMasks = true;
            e.zero = static_cast<uint8_t>(z);
            e.negative = static_cast<uint8_t>(n);
            e.under = static_cast<uint8_t>(u);
            e.over = static_cast<uint8_t>(o);
            e.extraSticky = sticky;
            e.writesMac = true;
            e.writesStatus = true;
        }
    }
#endif

    template <int Src, bool Max>
    VU1_JIT_INLINE void minmax(float *out, uint8_t dest, uint8_t fs, uint8_t ft) const
    {
#if VU1_JIT_SIMD
        (void)dest;
        const __m128 a = normOp4(_mm_loadu_ps(s.vf[fs]));
        const __m128 b = second4<Src>(s.vf[ft]);
        _mm_storeu_ps(out, Max ? _mm_max_ps(a, b) : _mm_min_ps(a, b));
        return;
#endif
        const float *vs = s.vf[fs];
        const float *vt = s.vf[ft];
        for (unsigned c = 0; c < 4u; ++c)
        {
            if ((dest & lane(c)) == 0)
                continue;
            const float a = normOp(vs[c]);
            const float b = second<Src>(vt, c);
            out[c] = Max ? (a > b ? a : b) : (a < b ? a : b);
        }
    }

    VU1_JIT_INLINE static int32_t floatToInt(float value, float scale)
    {
        const double scaled = static_cast<double>(value) * static_cast<double>(scale);
        if (scaled >= static_cast<double>(std::numeric_limits<int32_t>::max()))
            return std::numeric_limits<int32_t>::max();
        if (scaled <= static_cast<double>(std::numeric_limits<int32_t>::min()))
            return std::numeric_limits<int32_t>::min();
        return static_cast<int32_t>(scaled);
    }

    void clip(uint8_t fs, uint8_t ft);

    // ----------------------------------------------------------- pipelines
    VU1_JIT_INLINE void queueFmacFlags(const uint8_t laneFlags[4], uint8_t dest, uint32_t extraSticky)
    {
        uint32_t mac = 0u, status = 0u;
        for (unsigned c = 0; c < 4u; ++c)
        {
            const uint32_t l = lane(c);
            if ((dest & l) == 0u)
                continue;
            const uint32_t f = laneFlags[c];
            if (f & 1u) mac |= l;
            if (f & 2u) mac |= l << 4;
            if (f & 4u) mac |= l << 8;
            if (f & 8u) mac |= l << 12;
            status |= f;
        }
        FlagEntry &e = pushFlag();
        e.mac = mac;
        e.status = status;
        e.extraSticky = extraSticky;
        e.writesMac = true;
        e.writesStatus = true;
    }

    VU1_JIT_INLINE FlagEntry &pushFlag()
    {
        // At most two flag writes issue per cycle with a 4-cycle latency, so
        // a full queue always holds due entries; retire those (only).
        if (flagCount == kFlagCapacity)
            commitFlagsUpTo(cyc);
        FlagEntry &e = flags[(flagHead + flagCount++) & (kFlagCapacity - 1u)];
        e.ready = cyc + 4u;
        e.writesMac = e.writesStatus = e.writesSticky = e.writesClip = false;
        e.rawMasks = false;
        e.qStatus = false;
        e.extraSticky = 0u;
        return e;
    }

    // FSSET/FCSET cancel same-cycle status/clip writes of earlier entries.
    void cancelSameCycle(bool status, bool clipFlags)
    {
        for (unsigned n = 0; n < flagCount; ++n)
        {
            FlagEntry &e = flags[(flagHead + n) % kFlagCapacity];
            if (e.ready == cyc + 4u)
            {
                if (status) e.writesStatus = false;
                if (clipFlags) e.writesClip = false;
            }
        }
    }

    void fsset(uint32_t immediate)
    {
        cancelSameCycle(true, false);
        FlagEntry &e = pushFlag();
        e.status = immediate & 0xFC0u;
        e.writesSticky = true;
    }

    void fcset(uint32_t value);

    static uint32_t reverse4Bits(uint32_t bits)
    {
        return ((bits & 1u) << 3) | ((bits & 2u) << 1) | ((bits & 4u) >> 1) | ((bits & 8u) >> 3);
    }

    void applyFlag(FlagEntry e)
    {
        if (e.rawMasks)
        {
            e.mac = reverse4Bits(e.zero) | (reverse4Bits(e.negative) << 4) | (reverse4Bits(e.under) << 8) |
                    (reverse4Bits(e.over) << 12);
            e.status = (e.zero ? 1u : 0u) | (e.negative ? 2u : 0u) | (e.under ? 4u : 0u) | (e.over ? 8u : 0u);
        }
        if (e.writesMac)
            s.mac = e.mac;
        if (e.writesStatus)
        {
            const uint32_t current = e.status & 0xFu;
            s.status = (s.status & 0xFF0u) | current | ((current | e.extraSticky) << 6);
        }
        if (e.writesSticky)
            s.status = (s.status & 0x03Fu) | (e.status & 0xFC0u);
        if (e.writesClip)
            s.clip = e.clip;
    }

    void applyQ()
    {
        if (!qValueApplied)
            s.q = qValue;
        s.status = (s.status & 0xFCFu) | qDi | (qDi << 6);
        qPending = false;
    }

    // Commit flags and Q in the interpreter's order: by ready cycle, flags
    // before FDIV on the same cycle.
    void commitFlagsUpTo(uint64_t cycle)
    {
        // Entries apply in order; MAC only needs converting for the last
        // raw-mask entry of the run (earlier ones are overwritten), while the
        // status word (sticky bits) is updated by every entry.
        const FlagEntry *lastRawMac = nullptr;
        while (flagCount && flags[flagHead].ready <= cycle)
        {
            FlagEntry &e = flags[flagHead];
            if (qPending && qReady < e.ready)
                applyQ();
            if (e.qStatus)
            {
                s.status = (s.status & 0xFCFu) | e.di | (e.di << 6);
            }
            else if (e.rawMasks)
            {
                if (e.writesMac)
                    lastRawMac = &e;
                if (e.writesStatus)
                {
                    const uint32_t current = (e.zero ? 1u : 0u) | (e.negative ? 2u : 0u) |
                                             (e.under ? 4u : 0u) | (e.over ? 8u : 0u);
                    s.status = (s.status & 0xFF0u) | current | ((current | e.extraSticky) << 6);
                }
            }
            else
            {
                if (e.writesMac)
                    lastRawMac = nullptr;
                applyFlag(e);
            }
            flagHead = (flagHead + 1u) & (kFlagCapacity - 1u);
            --flagCount;
        }
        if (lastRawMac)
            s.mac = reverse4Bits(lastRawMac->zero) | (reverse4Bits(lastRawMac->negative) << 4) |
                    (reverse4Bits(lastRawMac->under) << 8) | (reverse4Bits(lastRawMac->over) << 12);
        if (qPending && qReady <= cycle)
            applyQ();
    }

    VU1_JIT_INLINE void commitNow()
    {
        if ((flagCount && flags[flagHead].ready <= cyc) || (qPending && qReady <= cyc))
            commitFlagsUpTo(cyc);
    }

    // A new FDIV op issues only after the previous result is due (the stall
    // guarantees it): take its value now and queue its DI status update among
    // the flag entries at its interpreter commit position (after entries with
    // ready <= qReady), instead of retiring every queued flag.
    void retireQEarly()
    {
        if (!qValueApplied)
            s.q = qValue;
        if (flagCount == kFlagCapacity)
            commitFlagsUpTo(cyc);
        unsigned position = flagCount;
        while (position > 0 && flags[(flagHead + position - 1u) & (kFlagCapacity - 1u)].ready > qReady)
            --position;
        for (unsigned n = flagCount; n > position; --n)
            flags[(flagHead + n) & (kFlagCapacity - 1u)] = flags[(flagHead + n - 1u) & (kFlagCapacity - 1u)];
        FlagEntry &e = flags[(flagHead + position) & (kFlagCapacity - 1u)];
        e.ready = qReady;
        e.writesMac = e.writesStatus = e.writesSticky = e.writesClip = false;
        e.rawMasks = false;
        e.qStatus = true;
        e.di = qDi;
        ++flagCount;
        qPending = false;
    }

    // Only the value is needed here; the DI status bits still retire in
    // order with the flag entries (commitFlagsUpTo).
    VU1_JIT_INLINE float readQ()
    {
        if (qPending && !qValueApplied && qReady <= cyc)
        {
            s.q = qValue;
            qValueApplied = true;
        }
        return s.q;
    }

    void queueQ(float value, uint32_t latency, uint32_t di)
    {
        if (qPending)
            retireQEarly();
        qPending = true;
        qValueApplied = false;
        qReady = cyc + latency;
        qValue = normResult(value);
        qDi = di & 0x30u;
    }

    // EFU results retire by ready cycle; slot order breaks ties.
    void retireEfu(uint64_t upTo)
    {
        for (;;)
        {
            int pick = -1;
            for (int i = 0; i < 2; ++i)
                if (efu[i].valid && efu[i].ready <= upTo && (pick < 0 || efu[i].ready < efu[pick].ready))
                    pick = i;
            if (pick < 0)
                return;
            s.p = efu[pick].value;
            efu[pick].valid = false;
        }
    }

    float readP()
    {
        retireEfu(cyc);
        return s.p;
    }

    void queueP(float value, uint32_t latency)
    {
        readP(); // retire finished entries so a slot is free
        for (EfuEntry &e : efu)
            if (!e.valid)
            {
                e = {cyc + latency, normResult(value), true};
                vu.m_efuResourceReady = cyc + (latency ? latency - 1u : 0u);
                return;
            }
    }

    uint64_t efuWaitAll() const
    {
        uint64_t ready = 0;
        for (const EfuEntry &e : efu)
            if (e.valid)
                ready = std::max(ready, e.ready);
        return ready;
    }

    uint64_t vu_efuResourceReady() const;

    void div(float numerator, float denominator)
    {
        const float num = normOp(numerator);
        const float den = normOp(denominator);
        uint32_t di = 0u;
        float result;
        if (den == 0.0f)
        {
            di = num == 0.0f ? 0x10u : 0x20u;
            result = std::signbit(num) != std::signbit(den) ? -std::numeric_limits<float>::max()
                                                            : std::numeric_limits<float>::max();
        }
        else
            result = num / den;
        queueQ(normResult(result), 7u, di);
    }

    void sqrtQ(float value)
    {
        const float val = normOp(value);
        queueQ(std::sqrt(std::fabs(val)), 7u, val < 0.0f ? 0x10u : 0u);
    }

    void rsqrt(float numerator, float radicand)
    {
        const float num = normOp(numerator);
        const float rad = normOp(radicand);
        const float den = std::sqrt(std::fabs(rad));
        uint32_t di = rad < 0.0f ? 0x10u : 0u;
        float result;
        if (den != 0.0f)
            result = num / den;
        else
        {
            di = num == 0.0f ? 0x10u : 0x20u;
            result = std::signbit(num) ? -std::numeric_limits<float>::max() : std::numeric_limits<float>::max();
        }
        queueQ(normResult(result), 13u, di);
    }

    void rnext()
    {
        const uint32_t x = (s.r >> 4) & 1u;
        const uint32_t y = (s.r >> 22) & 1u;
        s.r = (((s.r << 1) ^ x ^ y) & 0x007FFFFFu) | 0x3F800000u;
    }

    // --------------------------------------------------------------- memory
    VU1_JIT_INLINE void kickTo(uint64_t boundary)
    {
        if (!vu.m_xgkick.active)
        {
            kickBoundary = boundary > kickBoundary ? boundary : kickBoundary;
            return;
        }
        while (kickBoundary < boundary && vu.m_xgkick.active)
        {
            ++kickBoundary;
            vu.progressXgkick();
        }
        if (kickBoundary < boundary)
            kickBoundary = boundary;
    }

    VU1_JIT_INLINE void storeQword(int32_t qword, const float *value, uint8_t dest)
    {
        kickTo(cyc);
        const uint32_t address = (static_cast<uint32_t>(qword) * 16u) & (PS2_VU1_DATA_SIZE_JIT - 1u);
        uint32_t words[4];
        std::memcpy(words, value, 16);
        uint8_t *target = data + address;
        for (unsigned c = 0; c < 4u; ++c)
            if (dest & lane(c))
                std::memcpy(target + c * 4u, &words[c], 4);
    }

    VU1_JIT_INLINE void storeInteger(int32_t qword, int32_t value, uint8_t dest)
    {
        kickTo(cyc);
        const uint32_t address = (static_cast<uint32_t>(qword) * 16u) & (PS2_VU1_DATA_SIZE_JIT - 1u);
        const uint32_t word = static_cast<uint16_t>(value & 0xFFFF);
        for (unsigned c = 0; c < 4u; ++c)
            if (dest & lane(c))
                std::memcpy(data + address + c * 4u, &word, 4);
    }

    VU1_JIT_INLINE void loadQword(float *out, int32_t qword, uint8_t dest) const
    {
        const uint32_t address = (static_cast<uint32_t>(qword) * 16u) & (PS2_VU1_DATA_SIZE_JIT - 1u);
        float value[4];
        std::memcpy(value, data + address, 16);
        for (unsigned c = 0; c < 4u; ++c)
            if (dest & lane(c))
                out[c] = value[c];
    }

    VU1_JIT_INLINE int32_t loadInteger(int32_t qword, uint8_t dest) const
    {
        const uint32_t address = (static_cast<uint32_t>(qword) * 16u) & (PS2_VU1_DATA_SIZE_JIT - 1u);
        const unsigned component = (dest & 8u) ? 0u : (dest & 4u) ? 1u : (dest & 2u) ? 2u : 3u;
        uint32_t word;
        std::memcpy(&word, data + address + component * 4u, 4);
        return static_cast<int16_t>(word & 0xFFFFu);
    }

    // XGKICK stalls while the previous transfer is active. Returns false when
    // the stall reaches the cycle budget; the interpreter then takes over at
    // this pair (it re-evaluates the stall itself).
    bool kickWait()
    {
        kickTo(cyc);
        while (vu.m_xgkick.active)
        {
            if (cyc + 1u >= budgetEnd)
                return false;
            ++cyc;
            kickTo(cyc);
        }
        return true;
    }

    void kickStart(int32_t qword)
    {
        vu.m_cycle = cyc;
        vu.startXgkick(static_cast<uint32_t>(static_cast<uint16_t>(qword)));
        kickBoundary = cyc;
    }

    // ------------------------------------------------------------ lifecycle
    static constexpr uint32_t PS2_VU1_DATA_SIZE_JIT = 0x4000u;

    // Program end: drain every pipeline like VU1Interpreter::flushPipelines.
    void finish(uint32_t nextPc);
    // Resume in the interpreter at pc (a pair that is not a delay slot).
    bool handoff(uint32_t pc);
    // Handoff at a delay slot: the interpreter must still take the branch or
    // end the program after this pair.
    bool handoffDelay(uint32_t pc, bool branchTaken, uint32_t target, bool endAfter)
    {
        if (branchTaken)
        {
            s.branchPending = true;
            s.branchTarget = target;
            s.branchDelay = 0;
        }
        if (endAfter)
            s.ebit = true;
        return handoff(pc);
    }
    VU1_JIT_INLINE void noteWrite(uint64_t ready) { pendingMax = ready > pendingMax ? ready : pendingMax; }
};

#endif
