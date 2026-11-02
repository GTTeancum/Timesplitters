// The sweep's ANIM package (xbox_sweep.h, TS_SWEEP_ANIM): animation and its
// matrices.
//
// animUpdate (0x212cf8) and calMatrices (0x212e08), the skeleton's bone
// matrices for the frame. The current implementation is a transcription of
// the original (ts_native_game2/3.cpp) that makes every one of the
// original's guest calls: per bone two or four extractAnimData, one or three
// quaternionSlerp (each with acosf and three sinf calls, through the acosf
// wrapper and its own calls), quaternionToMatrix; then the hit reaction,
// calGlobalMatrices (generated, a call per node and per product), the
// fillets, the aim rotations and the cheat scales. Each call stores and
// reloads twenty to forty registers through the context and its callee does
// the same. This version is host code with no guest call at all: the whole
// call tree (keyframe search, extraction, slerp, quaternion to matrix, the
// matrix products, the rotations, fdlibm's sinf/cosf/acosf) is here, every
// float operation the original's, in its order (bit-identical results). The
// matrix products are SSE1 (four lanes at once: each lane is the scalar
// operation, so the bits are the same).
//
// Exactness and the scheduler. The work of one call is short (bounded by the
// skeleton's bone and node counts, at most 127), so it runs with no
// checkpoint, like any leaf native. Before anything is written the call is
// checked in a dry run of its first part (the animation clocks: the state
// block skel+0x60..0xFF and the two root-motion buffers worked on host
// copies): if a clock wrap needs more than 64 steps, the blend weight is
// negative or NaN (the original then reads stale stack), or a sine argument
// could leave the range fdlibm reduces without __kernel_rem_pio2f (|x| >
// 2^7*pi/2; the slerp weights, the aim and the hit-reaction angles are all
// known at that point), the previous implementation runs the call from its
// start instead (it keeps the original's checkpoints and unwinding). The one
// argument not known up front is a slerp's (1-t)*a/sin(a) with a = acos of
// the keyframe dot: for unit quaternions it is below 98 once |t| <= 60 is
// checked (the hemisphere flip keeps a <= pi/2); a quaternion so far from
// unit that it got past that would take the x87 fsin/fcos instead of the
// table reduction (the only place a result could differ, in the last bit).
//
// The six extraction buffers the original keeps in its frame (sp-0x310+0x70
// .. +0x12C) are read from and written back to the guest frame: an animation
// channel kind with no data leaves them as they were and scales them again,
// and the original then uses what the previous bone or call left there.
//
// animMtxTick (0x273bb0): the per-viewport matrices of the animated props
// (camera * prop matrix * part matrix). Host code with SSE products; the
// prop loop keeps the original's back-edge checkpoint (a due checkpoint
// hands the rest to the original at its loop head 0x273be0 with the
// registers and frame it has there), and a prop whose angles leave the
// fdlibm range or whose matrix mode is unknown is handed to the original the
// same way. Its frame matrix (sp+0, read stale by the original for a mode
// above 4) is kept in the guest frame.
//
// matrixRotY (0x2b4a58), matrixTransRotY (0x2b4c50): unit matrix, sinf and
// cosf in host code (the original makes three guest calls); an angle beyond
// the fdlibm range goes to the previous implementation.
//
// Left as the original would not: caller-saved registers (other than f0/f1
// of the two rotations), the VU0 registers and ACC, lo/hi, the FPU condition
// bit (all dead at the return: compiled callers never read them), the dead
// scratch below the caller's sp other than the slots named above, and the
// guest cycle charges of the calls that are no longer made. The FPU's
// divide-by-zero flag is set as the original sets it.
//
// TS_SWEEP_ANIM_CHECK 1 (diagnostic): every calMatrices runs the previous
// implementation first, then this one from the same state, and any
// difference in what they wrote is logged ([sweep-anim]).
#include "xbox_sweep.h"

#if defined(PLATFORM_XBOX)
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"

#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <xmmintrin.h>

#ifndef TS_SWEEP_ANIM_CHECK
#define TS_SWEEP_ANIM_CHECK 0
#endif

namespace
{
    using Fn = PS2Runtime::RecompiledFunction;

#define SA_INL inline __attribute__((always_inline))
#define SA_OUT __attribute__((noinline))
#define SA_ARGS uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime
#define SA_PASS rdram, ctx, runtime

    // What implemented the routines before this package.
    Fn s_prevCalMatrices = nullptr, s_prevRotY = nullptr, s_prevTransRotY = nullptr;
    // The original animMtxTick at its prop-loop head.
    Fn s_mtxTickLoop = nullptr;

    constexpr uint32_t kAnimTable = 0x0032AB60u;  // animation pointers
    constexpr uint32_t kNpio2Hw = 0x003AAF90u;    // __ieee754_rem_pio2f's table
    constexpr uint32_t kPlayerProp = 0x00353710u; // the local player's prop
    constexpr uint32_t kMtxModeTable = 0x003A80C0u;
    constexpr uint32_t kDivZero = 0x100000u;      // fcr31's divide-by-zero flag
    constexpr int kWrapLimit = 64;

    SA_INL uint32_t bitsOf(float value)
    {
        uint32_t bits;
        std::memcpy(&bits, &value, sizeof(bits));
        return bits;
    }

    SA_INL float floatOf(uint32_t bits)
    {
        float value;
        std::memcpy(&value, &bits, sizeof(value));
        return value;
    }

    // Guest memory: RAM inline, anything else through the shared slow
    // accessors (out of line, the call's context kept here so a slow access
    // costs its call site one register argument).
    struct GuestState
    {
        uint8_t *rdram;
        R5900Context *ctx;
        PS2Runtime *runtime;
    };
    GuestState s_guest;

    SA_INL void enterGuest(SA_ARGS) { s_guest = {rdram, ctx, runtime}; }

#define SA_SLOW_SCOPE                    \
    uint8_t *rdram = s_guest.rdram;      \
    R5900Context *ctx = s_guest.ctx;     \
    PS2Runtime *runtime = s_guest.runtime
    __attribute__((noinline, cold)) uint32_t slowRead32(uint32_t a)
    {
        SA_SLOW_SCOPE;
        return READ32(a);
    }
    __attribute__((noinline, cold)) uint32_t slowRead16(uint32_t a)
    {
        SA_SLOW_SCOPE;
        return READ16(a);
    }
    __attribute__((noinline, cold)) uint32_t slowRead8(uint32_t a)
    {
        SA_SLOW_SCOPE;
        return READ8(a);
    }
    __attribute__((noinline, cold)) void slowWrite32(uint32_t a, uint32_t v)
    {
        SA_SLOW_SCOPE;
        WRITE32(a, v);
    }
#undef SA_SLOW_SCOPE

    SA_INL uint32_t rd32(const uint8_t *rdram, uint32_t a)
    {
        return Ps2XboxInRam<uint32_t>(a) ? Ps2XboxLoad<uint32_t>(rdram, a) : slowRead32(a);
    }
    SA_INL uint32_t rd16(const uint8_t *rdram, uint32_t a)
    {
        return Ps2XboxInRam<uint16_t>(a) ? Ps2XboxLoad<uint16_t>(rdram, a) : slowRead16(a);
    }
    SA_INL uint32_t rd8(const uint8_t *rdram, uint32_t a) { return Ps2XboxInRam<uint8_t>(a) ? rdram[a] : slowRead8(a); }
    SA_INL void wr32(uint8_t *rdram, uint32_t a, uint32_t v)
    {
        if (Ps2XboxInRam<uint32_t>(a))
            Ps2XboxStore<uint32_t>(rdram, a, v);
        else
            slowWrite32(a, v);
    }

#define RU(a) rd32(rdram, (a))
#define RS(a) static_cast<int32_t>(rd32(rdram, (a)))
#define RF(a) floatOf(rd32(rdram, (a)))
#define RS8(a) static_cast<int32_t>(static_cast<int8_t>(rd8(rdram, (a))))
#define RS16(a) static_cast<int32_t>(static_cast<int16_t>(rd16(rdram, (a))))
#define WU(a, v) wr32(rdram, (a), (v))
#define WF(a, f) wr32(rdram, (a), bitsOf(f))

    SA_INL bool inRam(uint32_t addr, uint32_t bytes) { return addr <= PS2_RAM_SIZE - bytes; }

    // div.s as the recompiler has it: a zero divisor sets the flag and gives
    // the infinity with the sign of (a * 0).
    SA_INL float divS(float a, float b, uint32_t &flags)
    {
        if (b == 0.0f)
        {
            flags |= kDivZero;
            return copysignf(INFINITY, a * 0.0f);
        }
        return a / b;
    }

    // ---- fdlibm single precision (the game's sinf, cosf, __ieee754_acosf)

    // Beyond 2^7*pi/2 (finite) fdlibm reduces through __kernel_rem_pio2f.
    SA_INL bool trigOk(float x)
    {
        const uint32_t ix = bitsOf(x) & 0x7FFFFFFFu;
        return ix <= 0x43490F80u || ix >= 0x7F800000u;
    }

    // |w| <= 60, or not finite (an infinity or NaN weight gives arguments
    // fdlibm handles without reduction).
    SA_INL bool weightOk(float w)
    {
        const uint32_t ix = bitsOf(w) & 0x7FFFFFFFu;
        return ix <= 0x42700000u || ix >= 0x7F800000u;
    }

    // Only for an argument that trigOk rejects (see the header).
    __attribute__((noinline)) void bigSinCos(float x, float *s, float *c)
    {
        double sn, cs;
        __asm__("fsincos" : "=t"(cs), "=u"(sn) : "0"(static_cast<double>(x)));
        *s = static_cast<float>(sn);
        *c = static_cast<float>(cs);
    }

    // __kernel_sinf(x, y, iy) at 0x2dbb20.
    SA_INL float kernelSinf(float x, float y, int iy)
    {
        const uint32_t ix = bitsOf(x) & 0x7FFFFFFFu;
        if (ix <= 0x31FFFFFFu && FPU_CVT_W_S(x) == 0)
            return x;
        const float z = x * x;
        const float v = z * x;
        float f0 = z * floatOf(0x2F2EC9D3u);
        f0 = f0 + floatOf(0xB2D72F34u);
        f0 = z * f0;
        f0 = f0 + floatOf(0x3638EF1Bu);
        f0 = z * f0;
        f0 = f0 + floatOf(0xB9500D01u);
        f0 = z * f0;
        const float r = f0 + floatOf(0x3C088889u);
        if (iy == 0)
        {
            f0 = z * r;
            f0 = f0 + floatOf(0xBE2AAAABu);
            f0 = v * f0;
            return x + f0;
        }
        f0 = y * 0.5f;
        const float f2 = v * r;
        const float f1 = v * floatOf(0xBE2AAAABu);
        f0 = f0 - f2;
        f0 = z * f0;
        f0 = f0 - y;
        f0 = f0 - f1;
        return x - f0;
    }

    // __kernel_cosf(x, y) at 0x2db078.
    SA_INL float kernelCosf(float x, float y)
    {
        const uint32_t ix = bitsOf(x) & 0x7FFFFFFFu;
        if (ix <= 0x31FFFFFFu && FPU_CVT_W_S(x) == 0)
            return 1.0f;
        const float z = x * x;
        float f0 = z * floatOf(0xAD47D74Eu);
        f0 = f0 + floatOf(0x310F74F6u);
        f0 = z * f0;
        f0 = f0 + floatOf(0xB493F27Cu);
        f0 = z * f0;
        f0 = f0 + floatOf(0x37D00D01u);
        f0 = z * f0;
        f0 = f0 + floatOf(0xBAB60B61u);
        f0 = z * f0;
        f0 = f0 + floatOf(0x3D2AAAABu);
        float f1 = z * f0;
        if (ix <= 0x3E999999u)
        {
            f1 = z * f1;
            f0 = z * 0.5f;
            const float f2 = x * y;
            f1 = f1 - f2;
            f0 = f0 - f1;
            return 1.0f - f0;
        }
        const float qx = ix <= 0x3F480000u ? floatOf(ix - 0x01000000u) : floatOf(0x3E900000u);
        float f2 = z * f1;
        const float f3 = x * y;
        f0 = z * 0.5f;
        f2 = f2 - f3;
        f0 = f0 - qx;
        f1 = 1.0f - qx;
        f0 = f0 - f2;
        return f1 - f0;
    }

    // __ieee754_rem_pio2f(x) at 0x2dab60 for |x| <= 2^7*pi/2: n, y0, y1.
    SA_INL int32_t remPio2f(const uint8_t *rdram, float x, float &y0, float &y1)
    {
        const uint32_t hx = bitsOf(x), ix = hx & 0x7FFFFFFFu;
        if (ix <= 0x3F490FD8u)
        {
            y0 = x;
            y1 = 0.0f;
            return 0;
        }
        const float pio2_1 = floatOf(0x3FC90F80u), pio2_1t = floatOf(0x37354443u);
        const float pio2_2 = floatOf(0x37354400u), pio2_2t = floatOf(0x2E85A308u);
        if (ix <= 0x4016CBE3u)
        {
            const bool nearPio2 = (ix & 0xFFFFFFF0u) == 0x3FC90FD0u;
            if (static_cast<int32_t>(hx) > 0)
            {
                float z = x - pio2_1;
                float t = pio2_1t;
                if (nearPio2)
                {
                    z = z - pio2_2;
                    t = pio2_2t;
                }
                y0 = z - t;
                y1 = (z - y0) - t;
                return 1;
            }
            float z = x + pio2_1;
            float t = pio2_1t;
            if (nearPio2)
            {
                z = z + pio2_2;
                t = pio2_2t;
            }
            y0 = z + t;
            y1 = (z - y0) + t;
            return -1;
        }
        const float t = floatOf(ix);
        float f1 = t * floatOf(0x3F22F984u);
        f1 = f1 + 0.5f;
        const int32_t n = FPU_CVT_W_S(f1);
        const float fn = FPU_CVT_S_W(n);
        float r = t - fn * pio2_1;
        float w = fn * pio2_1t;
        bool quick = false;
        if (n < 32)
        {
            uint32_t hw;
            std::memcpy(&hw, rdram + kNpio2Hw + static_cast<uint32_t>(n - 1) * 4u, 4);
            quick = (ix & 0xFFFFFF00u) != hw;
        }
        float y = r - w;
        if (!quick)
        {
            const int32_t j = static_cast<int32_t>(ix) >> 23;
            int32_t i = j - static_cast<int32_t>((bitsOf(y) >> 23) & 0xFFu);
            if (i >= 9)
            {
                // Second step, good to 57 bits.
                float tt = r;
                float ww = fn * pio2_2;
                const float f1b = fn * pio2_2t;
                r = r - ww;
                float f0 = tt - r;
                f0 = f0 - ww;
                w = f1b - f0;
                y = r - w;
                i = j - static_cast<int32_t>((bitsOf(y) >> 23) & 0xFFu);
                if (i >= 0x1A)
                {
                    // Third step, 74 bits.
                    tt = r;
                    ww = fn * floatOf(0x2E85A300u);
                    const float f2b = fn * floatOf(0x248D3132u);
                    r = r - ww;
                    f0 = tt - r;
                    f0 = f0 - ww;
                    w = f2b - f0;
                    y = r - w;
                }
            }
        }
        float lo = r - y;
        lo = lo - w;
        if (static_cast<int32_t>(hx) >= 0)
        {
            y0 = y;
            y1 = lo;
            return n;
        }
        y0 = -y;
        y1 = -lo;
        return -n;
    }

    // sinf and cosf of one argument (each reduces it the same way, so one
    // reduction serves both). Out of line: they have many callers.
    SA_OUT void sinCos(const uint8_t *rdram, float x, float *sOut, float *cOut)
    {
        const uint32_t ix = bitsOf(x) & 0x7FFFFFFFu;
        if (ix <= 0x3F490FD8u)
        {
            *sOut = kernelSinf(x, 0.0f, 0);
            *cOut = kernelCosf(x, 0.0f);
            return;
        }
        if (ix > 0x7F7FFFFFu)
        {
            *sOut = x - x;
            *cOut = x - x;
            return;
        }
        if (ix > 0x43490F80u)
        {
            bigSinCos(x, sOut, cOut);
            return;
        }
        float y0, y1;
        const int32_t n = remPio2f(rdram, x, y0, y1);
        const float ks = kernelSinf(y0, y1, 1), kc = kernelCosf(y0, y1);
        switch (n & 3)
        {
        case 0:
            *sOut = ks;
            *cOut = kc;
            break;
        case 1:
            *sOut = kc;
            *cOut = -ks;
            break;
        case 2:
            *sOut = -ks;
            *cOut = -kc;
            break;
        default:
            *sOut = -kc;
            *cOut = ks;
            break;
        }
    }

    SA_OUT void sinOnly(const uint8_t *rdram, float x, float *sOut)
    {
        const uint32_t ix = bitsOf(x) & 0x7FFFFFFFu;
        if (ix <= 0x3F490FD8u)
        {
            *sOut = kernelSinf(x, 0.0f, 0);
            return;
        }
        if (ix > 0x7F7FFFFFu)
        {
            *sOut = x - x;
            return;
        }
        if (ix > 0x43490F80u)
        {
            float c;
            bigSinCos(x, sOut, &c);
            return;
        }
        float y0, y1;
        const int32_t n = remPio2f(rdram, x, y0, y1);
        switch (n & 3)
        {
        case 0:
            *sOut = kernelSinf(y0, y1, 1);
            break;
        case 1:
            *sOut = kernelCosf(y0, y1);
            break;
        case 2:
            *sOut = -kernelSinf(y0, y1, 1);
            break;
        default:
            *sOut = -kernelCosf(y0, y1);
            break;
        }
    }

    SA_INL float sinF(const uint8_t *rdram, float x)
    {
        float s;
        sinOnly(rdram, x, &s);
        return s;
    }

    // __ieee754_acosf's rational approximation, in its operation order.
    SA_INL void acosPQ(float z, float &p, float &q)
    {
        float f0 = z * floatOf(0x3811EF08u); // P5
        float f1 = z * floatOf(0x3D9DC62Eu); // Q4
        f0 = f0 + floatOf(0x3A4F7F04u);      // P4
        f1 = f1 + floatOf(0xBF303361u);      // Q3
        f0 = z * f0;
        f1 = z * f1;
        f0 = f0 + floatOf(0xBD241146u); // P3
        f1 = f1 + floatOf(0x4001572Du); // Q2
        f0 = z * f0;
        f1 = z * f1;
        f0 = f0 + floatOf(0x3E4E0AA8u); // P2
        f1 = f1 + floatOf(0xC019D139u); // Q1
        f0 = z * f0;
        f1 = z * f1;
        f0 = f0 + floatOf(0xBEA6B090u); // P1
        q = f1 + 1.0f;
        f0 = z * f0;
        f0 = f0 + floatOf(0x3E2AAAABu); // P0
        p = z * f0;
    }

    // __ieee754_sqrtf is bit by bit, correctly rounded: sqrtss gives the
    // same bits (its arguments here are positive normal numbers).
    SA_INL float sqrtExact(float x) { return _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(x))); }

    // __ieee754_acosf at 0x2d9818 (the acosf wrapper returns it unchanged
    // for |x| < 1, the only arguments it gets here).
    SA_INL float acosF(float x, uint32_t &flags)
    {
        const uint32_t hx = bitsOf(x), ix = hx & 0x7FFFFFFFu;
        if (ix == 0x3F800000u)
            return static_cast<int32_t>(hx) > 0 ? 0.0f : floatOf(0x40490FDBu);
        if (ix > 0x3F800000u)
        {
            const float d = x - x;
            return divS(d, d, flags);
        }
        float p, q;
        if (ix <= 0x3EFFFFFFu)
        {
            if (ix <= 0x23000000u)
                return floatOf(0x3FC90FDBu);
            acosPQ(x * x, p, q);
            const float r = divS(p, q, flags);
            float f0 = floatOf(0x33A22168u) - x * r;
            f0 = x - f0;
            return floatOf(0x3FC90FDAu) - f0;
        }
        if (static_cast<int32_t>(hx) < 0)
        {
            const float z = (x + 1.0f) * 0.5f;
            acosPQ(z, p, q);
            const float s = sqrtExact(z);
            const float r = divS(p, q, flags);
            float f0 = r * s;
            f0 = f0 - floatOf(0x33A22168u);
            f0 = s + f0;
            f0 = f0 + f0;
            return floatOf(0x40490FDAu) - f0;
        }
        const float z = (1.0f - x) * 0.5f;
        const float s = sqrtExact(z);
        const float df = floatOf(bitsOf(s) & 0xFFFFF000u);
        float c = z - df * df;
        c = divS(c, s + df, flags);
        acosPQ(z, p, q);
        const float r = divS(p, q, flags);
        float f0 = r * s;
        f0 = f0 + c;
        f0 = df + f0;
        return f0 + f0;
    }

    // ---- Matrices (16 floats, four quadwords; a product's column j is
    // left * right[j])

    SA_INL void unitHost(float *m)
    {
        static const float kUnit[16] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};
        std::memcpy(m, kUnit, sizeof(kUnit));
    }

    // out = left * right, sceVu0MulMatrix's order: left read whole, then
    // each column of right read after the previous column of out is stored
    // (out may be either operand).
    SA_OUT void mulCore(void *out, const void *left, const void *right)
    {
        const float *l = static_cast<const float *>(left);
        const float *r = static_cast<const float *>(right);
        float *o = static_cast<float *>(out);
        const __m128 c0 = _mm_loadu_ps(l), c1 = _mm_loadu_ps(l + 4), c2 = _mm_loadu_ps(l + 8), c3 = _mm_loadu_ps(l + 12);
        for (int j = 0; j < 16; j += 4)
        {
            const __m128 col = _mm_loadu_ps(r + j);
            __m128 acc = _mm_mul_ps(c0, _mm_shuffle_ps(col, col, 0x00));
            acc = _mm_add_ps(acc, _mm_mul_ps(c1, _mm_shuffle_ps(col, col, 0x55)));
            acc = _mm_add_ps(acc, _mm_mul_ps(c2, _mm_shuffle_ps(col, col, 0xAA)));
            acc = _mm_add_ps(acc, _mm_mul_ps(c3, _mm_shuffle_ps(col, col, 0xFF)));
            _mm_storeu_ps(o + j, acc);
        }
    }

    // A matrix outside RAM (never in practice): word by word.
    __attribute__((noinline, cold)) void storeMatSlow(SA_ARGS, uint32_t addr, const float *m)
    {
        for (uint32_t i = 0; i < 16u; ++i)
            WF(addr + i * 4u, m[i]);
    }

    __attribute__((noinline, cold)) void loadMatSlow(SA_ARGS, uint32_t addr, float *m)
    {
        for (uint32_t i = 0; i < 16u; ++i)
            m[i] = RF(addr + i * 4u);
    }

    SA_INL void copy64(void *dst, const void *src)
    {
        const float *s = static_cast<const float *>(src);
        float *d = static_cast<float *>(dst);
        const __m128 a = _mm_loadu_ps(s), b = _mm_loadu_ps(s + 4), c = _mm_loadu_ps(s + 8), e = _mm_loadu_ps(s + 12);
        _mm_storeu_ps(d, a);
        _mm_storeu_ps(d + 4, b);
        _mm_storeu_ps(d + 8, c);
        _mm_storeu_ps(d + 12, e);
    }

    SA_INL void storeMat(SA_ARGS, uint32_t addr, const float *m)
    {
        if (inRam(addr, 64u))
            copy64(rdram + addr, m);
        else
            storeMatSlow(SA_PASS, addr, m);
    }

    SA_INL void loadMat(SA_ARGS, uint32_t addr, float *m)
    {
        if (inRam(addr, 64u))
            copy64(m, rdram + addr);
        else
            loadMatSlow(SA_PASS, addr, m);
    }

    // Guest words to host and back (the state block, the frame buffers).
    SA_OUT void loadWords(SA_ARGS, uint32_t addr, uint32_t *to, uint32_t count)
    {
        if (inRam(addr, count * 4u))
        {
            std::memcpy(to, rdram + addr, count * 4u);
            return;
        }
        for (uint32_t i = 0; i < count; ++i)
            to[i] = RU(addr + i * 4u);
    }

    SA_OUT void storeWords(SA_ARGS, uint32_t addr, const uint32_t *from, uint32_t count)
    {
        if (inRam(addr, count * 4u))
        {
            std::memcpy(rdram + addr, from, count * 4u);
            return;
        }
        for (uint32_t i = 0; i < count; ++i)
            WU(addr + i * 4u, from[i]);
    }

    // A guest matrix as host memory: RAM in place, anything else copied in.
    SA_INL float *gmat(SA_ARGS, uint32_t addr, float *tmp)
    {
        if (inRam(addr, 64u))
            return reinterpret_cast<float *>(rdram + addr);
        loadMatSlow(SA_PASS, addr, tmp);
        return tmp;
    }

    // After writing through gmat: a copied-in matrix goes back out.
    SA_INL void gmatDone(SA_ARGS, uint32_t addr, const float *p, const float *tmp)
    {
        if (p == tmp)
            storeMatSlow(SA_PASS, addr, tmp);
    }

    // Guest out = guest left * guest right.
    SA_OUT void mulGuest(SA_ARGS, uint32_t out, uint32_t left, uint32_t right)
    {
        if (inRam(out, 64u) && inRam(left, 64u) && inRam(right, 64u))
        {
            mulCore(rdram + out, rdram + left, rdram + right);
            return;
        }
        float l[16], r[16], o[16];
        loadMat(SA_PASS, left, l);
        loadMat(SA_PASS, right, r);
        mulCore(o, l, r);
        storeMat(SA_PASS, out, o);
    }

    // sceVu0CopyMatrix: all four quadwords read, then written.
    void copyGuest(SA_ARGS, uint32_t dst, uint32_t src)
    {
        float m[16];
        loadMat(SA_PASS, src, m);
        storeMat(SA_PASS, dst, m);
    }

    // anglediff(a, b) at 0x284e38: b - a wrapped into [-180, 180].
    SA_INL float angleDiff(float a, float b)
    {
        const float d = b - a;
        if (d < -180.0f)
            return d + 360.0f;
        if (180.0f < d)
            return d - 360.0f;
        return d;
    }

    // matrixRotZXY (0x2b4b18) and matrixTransRotZXY (0x2b4ce0).
    SA_OUT void rotZXY(const uint8_t *rdram, float *m, float a, float b, float c, float x, float y, float z)
    {
        float sa, ca, sb, cb, sc, cc;
        sinCos(rdram, a, &sa, &ca);
        sinCos(rdram, b, &sb, &cb);
        sinCos(rdram, c, &sc, &cc);
        float f6 = sa * sb;
        float f5 = sa * cb;
        float f4 = -sb;
        float f2 = -sc;
        const float f8 = cc * f5;
        const float f7 = cc * f6;
        float f3 = sc * sb;
        float f1 = cc * cb;
        f6 = sc * f6;
        f5 = sc * f5;
        f4 = cc * f4;
        f2 = f2 * cb;
        m[10] = ca * cb;
        m[8] = ca * sb;
        m[1] = sc * ca;
        m[5] = cc * ca;
        m[4] = f2 + f7;
        m[0] = f1 + f6;
        m[2] = f4 + f5;
        m[6] = f3 + f8;
        m[9] = -sa;
        m[3] = 0.0f;
        m[7] = 0.0f;
        m[11] = 0.0f;
        m[12] = x;
        m[13] = y;
        m[14] = z;
        m[15] = 1.0f;
    }

    // sinf and cosf of the angles of the rotations about Y, cached on the
    // angle's bits (both are pure: a hit is exact). Every entry is valid from
    // the start: angle +0 has sine +0 and cosine 1.
    struct RotCache
    {
        uint32_t bits;
        float s, c;
    };
    RotCache s_rotCache[64] = {};
    SA_INL void rotYSinCos(const uint8_t *rdram, float angle, float &s, float &c)
    {
        const uint32_t bits = bitsOf(angle);
        RotCache &e = s_rotCache[(bits ^ (bits >> 11) ^ (bits >> 19)) & 63u];
        if (e.bits == bits)
        {
            s = e.s;
            c = e.c;
            return;
        }
        sinCos(rdram, angle, &s, &c);
        e.bits = bits;
        e.s = s;
        e.c = c;
    }

    // matrixTransRotY (0x2b4c50); matrixRotY is it at the origin.
    SA_INL void transRotY(const uint8_t *rdram, float *m, float x, float y, float z, float angle)
    {
        unitHost(m);
        float s, c;
        rotYSinCos(rdram, angle, s, c);
        m[14] = z;
        m[12] = x;
        m[13] = y;
        m[8] = s;
        m[0] = c;
        m[2] = -s;
        m[10] = c;
    }

    // matrixRotZ (0x2b4ab8).
    SA_INL void rotZ(const uint8_t *rdram, float *m, float angle)
    {
        unitHost(m);
        float s, c;
        sinCos(rdram, angle, &s, &c);
        m[1] = s;
        m[5] = c;
        m[0] = c;
        m[4] = -s;
    }

    // matrixroll (0x2b5c28): the rotation by angle (degrees * k / 180)
    // about the axis v.
    SA_INL void roll(const uint8_t *rdram, float *m, float vx, float vy, float vz, float angle, float k)
    {
        float a = angle * k;
        a = a / 180.0f;
        float s, c;
        sinCos(rdram, a, &s, &c);
        const float t = 1.0f - c;
        float f1 = t * vx;
        float f4 = t * vy;
        float f0 = vz * vz;
        float f2 = vx * vx;
        float f5 = f1 * vz;
        float f3 = vy * vy;
        f4 = f4 * vz;
        f0 = t * f0;
        const float sx = s * vx, sz = s * vz, sy = s * vy;
        f1 = f1 * vy;
        f2 = t * f2;
        f0 = f0 + c;
        float f21 = t * f3;
        m[10] = f0;
        m[9] = f4 + sx;
        m[4] = f1 + sz;
        m[8] = f5 - sy;
        m[0] = f2 + c;
        m[5] = f21 + c;
        m[1] = f1 - sz;
        m[2] = f5 + sy;
        m[6] = f4 - sx;
        m[3] = 0.0f;
        m[7] = 0.0f;
        m[11] = 0.0f;
        m[12] = 0.0f;
        m[13] = 0.0f;
        m[14] = 0.0f;
        m[15] = 1.0f;
    }

    // matrixScaleSet (0x2b4f20).
    SA_INL void scaleSet(float *m, float sx, float sy, float sz)
    {
        unitHost(m);
        m[10] = sz;
        m[0] = sx;
        m[5] = sy;
    }

    // quaternionToMatrix (0x2b3f90): scaled by 2 / |q|^2.
    SA_OUT void quatToMatrix(float *m, const float *q, uint32_t &flags)
    {
        float f4 = q[0], f8 = q[1], f2 = q[2], f6 = q[3];
        float f1 = f4 * f4, f0 = f8 * f8, f5 = f2 * f2, f7 = f6 * f6;
        f1 = f1 + f0;
        f1 = f1 + f5;
        f1 = f1 + f7;
        float f3 = divS(2.0f, f1, flags);
        f0 = f2 * f3;
        f1 = f8 * f3;
        f3 = f4 * f3;
        f2 = f2 * f0;
        f5 = f8 * f1;
        f7 = f4 * f3;
        const float f11 = f6 * f0;
        float f9 = f4 * f0;
        const float f12 = f7 + f5;
        f3 = f6 * f3;
        f8 = f8 * f0;
        f6 = f6 * f1;
        f7 = f7 + f2;
        f4 = f4 * f1;
        f5 = f5 + f2;
        m[8] = f9 + f6;
        m[4] = f4 - f11;
        m[9] = f8 - f3;
        m[0] = 1.0f - f5;
        m[5] = 1.0f - f7;
        m[10] = 1.0f - f12;
        m[1] = f4 + f11;
        m[2] = f9 - f6;
        m[6] = f8 + f3;
        m[3] = 0.0f;
        m[7] = 0.0f;
        m[11] = 0.0f;
        m[12] = 0.0f;
        m[13] = 0.0f;
        m[14] = 0.0f;
        m[15] = 1.0f;
    }

    // quaternionSlerp (0x2b4080), its weights as the game computes them:
    // sin((1-t)a / sin a) and sin(ta) / sin a.
    SA_OUT void slerp(const uint8_t *rdram, uint32_t gp, const float *q0, const float *q1, float *out, float t,
                      uint32_t &flags)
    {
        if (t == 0.0f)
        {
            std::memcpy(out, q0, 16);
            return;
        }
        if (t == 1.0f)
        {
            std::memcpy(out, q1, 16);
            return;
        }
        float d[4], s[4];
        for (int i = 0; i < 4; ++i)
        {
            d[i] = q0[i] - q1[i];
            d[i] = d[i] * d[i];
            s[i] = q0[i] + q1[i];
            s[i] = s[i] * s[i];
        }
        const float dd = ((d[0] + d[1]) + d[2]) + d[3];
        const float ss = ((s[0] + s[1]) + s[2]) + s[3];
        float qb[4];
        if (ss < dd)
            for (int i = 0; i < 4; ++i)
                qb[i] = 0.0f - q1[i];
        else
            std::memcpy(qb, q1, 16);
        float dot = q0[0] * qb[0];
        dot = dot + q0[1] * qb[1];
        dot = dot + q0[2] * qb[2];
        dot = dot + q0[3] * qb[3];
        const float eps = floatOf(0x34000000u);
        float w0, w1;
        if (!(eps < dot + 1.0f))
        {
            float k;
            std::memcpy(&k, rdram + gp - 0x703Cu, 4);
            w0 = sinF(rdram, (1.0f - t) * k);
            w1 = sinF(rdram, t * k);
            for (int i = 0; i < 4; ++i)
                out[i] = w0 * q0[i] - w1 * qb[i];
            return;
        }
        if (!(eps < 1.0f - dot))
        {
            w0 = 1.0f - t;
            w1 = t;
        }
        else
        {
            const float a = acosF(dot, flags);
            const float sa = sinF(rdram, a);
            w0 = sinF(rdram, divS((1.0f - t) * a, sa, flags));
            w1 = divS(sinF(rdram, t * a), sa, flags);
        }
        for (int i = 0; i < 4; ++i)
            out[i] = w0 * q0[i] + w1 * qb[i];
    }

    // ---- The skeleton

    // Per-call constants of the extraction.
    struct AnimCall
    {
        uint32_t gp, skel;
        float scale;   // the character's animation scale (f22)
        bool fbOne;    // skel->0x58 set with its +0xC == 1
        float fbScale; // gp-0x7FB8
        int32_t ch0Anim;
    };

    // extractAnimData(skel, anim, bone, key, out) at 0x215280: a 28-byte
    // record (translation, quaternion) by the bone channel's kind; other
    // kinds leave out as it was. The translation is then scaled.
    SA_OUT void extract(SA_ARGS, const AnimCall &k, uint32_t anim, int32_t bone, int32_t key, uint32_t *out)
    {
        const uint32_t rec = RU(anim + 0x20u) + (static_cast<uint32_t>(bone) << 5);
        const int32_t kind = RS(rec + 4u);
        const uint32_t data = RU(rec + 0x14u);
        auto copy7 = [&](uint32_t src) {
            for (uint32_t i = 0; i < 7u; ++i)
                out[i] = RU(src + i * 4u);
        };
        if (kind == 2)
        {
            out[0] = RU(data);
            out[1] = RU(data + 4u);
            out[2] = RU(data + 8u);
            const uint32_t v1 = data + (static_cast<uint32_t>(key) << 4);
            for (uint32_t i = 3; i < 7u; ++i)
                out[i] = RU(v1 + i * 4u);
        }
        else if (kind == 0)
        {
            copy7(data);
        }
        else if (kind == 4)
        {
            if (key != 0)
            {
                const uint32_t v1 = data + static_cast<uint32_t>(key - 1) * 12u;
                out[0] = RU(v1 + 0x1Cu);
                out[1] = RU(v1 + 0x20u);
                out[2] = RU(v1 + 0x24u);
                for (uint32_t i = 3; i < 7u; ++i)
                    out[i] = RU(data + i * 4u);
            }
            else
            {
                copy7(data);
            }
        }
        else if (kind == 8)
        {
            copy7(data + static_cast<uint32_t>(key) * 28u);
        }
        float scale = k.scale;
        if (k.fbOne && (k.ch0Anim < 566 || bone <= 0))
            scale = scale * k.fbScale;
        for (int i = 0; i < 3; ++i)
            out[i] = bitsOf(floatOf(out[i]) * scale);
    }

    // getKeyFrames(skel, channel, &lo, &hi) at 0x214c50.
    SA_OUT void getKeyFrames(SA_ARGS, int32_t animIndex, float frame, int32_t &lo, int32_t &hi)
    {
        const uint32_t anim = RU(kAnimTable + static_cast<uint32_t>(animIndex) * 4u);
        const float length = RF(anim + 0x10u);
        lo = hi = 0;
        if (frame == 0.0f)
            return;
        const int32_t n = RS(anim + 4u);
        if (n == 1)
            return;
        if (frame == length)
        {
            lo = hi = n - 1;
            return;
        }
        const uint32_t keys = RU(anim + 0x14u);
        for (int32_t i = n - 2; i >= 0; --i)
        {
            float key = FPU_CVT_S_W(RS(keys + static_cast<uint32_t>(i) * 4u));
            key = key / 60.0f;
            if (key < frame)
            {
                lo = i;
                hi = i + 1;
                return;
            }
            if (frame == key)
            {
                lo = hi = i;
                return;
            }
        }
    }

    // The interpolation weight between two keys of an animation.
    SA_INL float keyWeight(SA_ARGS, uint32_t anim, float frame, int32_t lo, int32_t hi, uint32_t &flags)
    {
        if (lo == hi)
            return 0.0f;
        const uint32_t keys = RU(anim + 0x14u);
        float f2 = FPU_CVT_S_W(RS(keys + static_cast<uint32_t>(lo) * 4u));
        float f0 = FPU_CVT_S_W(RS(keys + static_cast<uint32_t>(hi) * 4u));
        f2 = f2 / 60.0f;
        f0 = f0 / 60.0f;
        const float f1 = frame - f2;
        f0 = f0 - f2;
        return divS(f1, f0, flags);
    }

    // a + (b - a) * t on two extraction records' translations.
    SA_INL float lerp(const uint32_t *lo, const uint32_t *hi, int i, float t)
    {
        const float a = floatOf(lo[i]);
        float d = floatOf(hi[i]) - a;
        d = d * t;
        return a + d;
    }

    // The node table: skel->0 is the header word (the node count) after the
    // 0x50-byte nodes (kind, matrix, -, child, sibling bytes).
    SA_INL uint32_t nodeBase(SA_ARGS, uint32_t skel)
    {
        const uint32_t header = RU(skel);
        return header - RU(header) * 0x50u;
    }

    // calGlobalMatrices(skel, mats, node, parent) at 0x2149b0: each kind-0
    // node's matrix times its parent's, down the tree (a node of another
    // kind passes its parent on; kind 3 ends a branch).
    void calGlobalMatrices(SA_ARGS, uint32_t skel, uint32_t mats, int32_t node, int32_t parent, int depth)
    {
        if (depth > 256)
            return;
        for (;;)
        {
            const uint32_t nodes = nodeBase(SA_PASS, skel);
            const uint32_t s0 = nodes + static_cast<uint32_t>(node) * 0x50u;
            int32_t childParent = parent;
            if (RS8(s0) == 0)
            {
                if (parent >= 0)
                {
                    const uint32_t me = mats + (static_cast<uint32_t>(RS8(s0 + 1u)) << 6);
                    const uint32_t up = mats + (static_cast<uint32_t>(RS8(nodes + static_cast<uint32_t>(parent) * 0x50u + 1u)) << 6);
                    mulGuest(SA_PASS, me, up, me);
                }
                childParent = node;
            }
            const int32_t child = RS8(s0 + 3u);
            if (child >= 0 && RS8(s0) != 3)
                calGlobalMatrices(SA_PASS, skel, mats, child, childParent, depth + 1);
            const int32_t sibling = RS8(s0 + 4u);
            if (sibling < 0)
                return;
            node = sibling;
        }
    }

    // calDoubleFillets(skel, node) at 0x214a88: a kind-2 node takes its
    // child's matrix (calInbetweenMatrix copies it).
    void calDoubleFillets(SA_ARGS, uint32_t skel, int32_t node, int depth)
    {
        if (depth > 256)
            return;
        for (;;)
        {
            const uint32_t nodes = nodeBase(SA_PASS, skel);
            const uint32_t s0 = nodes + static_cast<uint32_t>(node) * 0x50u;
            if (RS8(s0) == 2)
            {
                const int32_t ch = RS8(s0 + 3u);
                const uint32_t mats = RU(skel + 4u);
                const uint32_t dst = mats + (static_cast<uint32_t>(RS8(s0 + 1u)) << 6);
                const uint32_t src = mats + (static_cast<uint32_t>(RS8(nodes + static_cast<uint32_t>(ch) * 0x50u + 1u)) << 6);
                (void)RU(RU(skel + 0x58u)); // the fillet base the original reads and does not use
                copyGuest(SA_PASS, dst, src);
            }
            const int32_t child = RS8(s0 + 3u);
            if (child >= 0 && RS8(s0) != 3)
                calDoubleFillets(SA_PASS, skel, child, depth + 1);
            const int32_t sibling = RS8(s0 + 4u);
            if (sibling < 0)
                return;
            node = sibling;
        }
    }

    // The state block skel+0x60..0xFF as host words.
#define SI(off) st[((off) - 0x60u) >> 2]
#define SF(off) floatOf(SI(off))
#define SSF(off, v) (SI(off) = bitsOf(v))

    // One animation channel's clock for the frame (state words at ch:
    // +0 animation, +4 frame, +0x14 root translation, +0x2C speed, +0x38
    // the wrapped flag): advance, wrap or clamp, and across a loop's wrap
    // the root motion (channel 0: last key minus first; channel 1, as the
    // original has it: the first key added and taken away). false: a wrap
    // needs more than kWrapLimit steps.
    SA_OUT bool advanceChannel(SA_ARGS, const AnimCall &k, uint32_t *st, uint32_t ch, uint32_t anim, float len,
                               float clampLen, float ft, int &iterations, uint32_t *bF0, uint32_t *b110)
    {
        if (!(0.0f < len))
            return true;
        float f0 = ft * SF(ch + 0x2Cu);
        f0 = f0 / 60.0f;
        const float f3 = SF(ch + 4u) + f0;
        SI(ch + 0x38u) = 0u;
        SSF(ch + 4u, f3);
        if ((RU(anim + 0xCu) & 1u) != 0u)
        {
            if (len < f3)
            {
                do
                {
                    SI(ch + 0x38u) = 1u;
                    SSF(ch + 4u, SF(ch + 4u) - len);
                    if (++iterations > kWrapLimit)
                        return false;
                } while (len < SF(ch + 4u));
            }
        }
        else if (len < f3)
        {
            SSF(ch + 4u, clampLen);
            SI(ch + 0x38u) = 1u;
        }
        float f1 = SF(ch + 4u);
        if (f1 < 0.0f)
        {
            float fz;
            do
            {
                fz = f1 + len;
                f1 = fz;
                if (++iterations > kWrapLimit)
                    return false;
            } while (fz < 0.0f);
            SSF(ch + 4u, fz);
            SI(ch + 0x38u) = 1u;
        }
        if (SI(ch + 0x38u) != 0u && (RU(anim + 0xCu) & 1u) != 0u)
        {
            extract(SA_PASS, k, anim, 0, RS(anim + 4u) - 1, bF0);
            extract(SA_PASS, k, anim, 0, 0, b110);
            const uint32_t *const minus = ch == 0x60u ? bF0 : b110;
            for (uint32_t i = 0; i < 3u; ++i)
            {
                float v = floatOf(b110[i]) + SF(ch + 0x14u + i * 4u);
                v = v - floatOf(minus[i]);
                SSF(ch + 0x14u + i * 4u, v);
            }
        }
        return true;
    }

    // Turning with an animation's first frames: frame <= limit turns the
    // character by the change of (frame / limit) * 90.
    SA_OUT void turnWithFrame(SA_ARGS, uint32_t *st, uint32_t skel, uint32_t c, uint32_t frameOff, uint32_t angleOff,
                              bool add, float limit, uint32_t &flags)
    {
        float f1 = SF(frameOff);
        if (!(f1 <= limit))
            return;
        f1 = divS(f1, limit, flags);
        const float a = f1 * 90.0f;
        const float d = angleDiff(SF(angleOff), a);
        float v = RF(c + 0x54u);
        if (add)
        {
            v = v + d;
            WF(c + 0x54u, v);
            if (360.0f < v)
                WF(c + 0x54u, v - 360.0f);
        }
        else
        {
            v = v - d;
            WF(c + 0x54u, v);
            if (v < 0.0f)
                WF(c + 0x54u, v + 360.0f);
        }
        SSF(angleOff, a);
        WF(skel + angleOff, a);
    }

    // calMatrices' host work. false: the previous implementation must run
    // the call (nothing has been written).
    bool calMatricesFast(SA_ARGS, uint32_t skel)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t frame = GPR_U32(ctx, 29) - 0x310u;
        const uint32_t c = RU(skel + 0xF4u);
        const uint32_t pd = RU(c + 0x160u);
        const bool kind1000 = RU(c + 8u) == 0x1000u;
        const float ft = RF(gp - 0x4B98u);
        uint32_t flags = 0;

        AnimCall k;
        k.gp = gp;
        k.skel = skel;
        k.scale = kind1000 ? RF(pd + 0xCu) : RF(pd + 0xB18u);
        {
            const uint32_t fb = RU(skel + 0x58u);
            k.fbOne = fb != 0u && RS(fb + 0xCu) == 1;
            k.fbScale = RF(gp - 0x7FB8u);
        }

        uint32_t st[40];
        loadWords(SA_PASS, skel + 0x60u, st, 40u);
        // The frame's extraction buffers: +0x70, 0x90, 0xB0, 0xD0, 0xF0, 0x110.
        uint32_t fr[48];
        const uint32_t frBase = frame + 0x70u;
        loadWords(SA_PASS, frBase, fr, 48u);
        uint32_t *const b70 = fr, *const b90 = fr + 8, *const bB0 = fr + 16, *const bD0 = fr + 24;
        uint32_t *const bF0 = fr + 32, *const b110 = fr + 40;

        // ---- The dry run: the clocks on host copies.
        {
            const float e0 = SF(0xE0u);
            if (0.0f < e0)
            {
                const float f1 = ft / 60.0f;
                const float e8 = SF(0xE8u) + f1;
                const float e4 = divS(e8, e0, flags);
                SSF(0xE8u, e8);
                SSF(0xE4u, e4);
                if (1.0f <= e4)
                {
                    // The blend is over: channel 1 becomes channel 0.
                    const uint32_t v1 = SI(0xA0u), a0 = SI(0xDCu), a2 = SI(0xD8u);
                    const uint32_t w0 = SI(0xA4u), w1 = SI(0xB4u), w2 = SI(0xB8u), w3 = SI(0xBCu), w4 = SI(0xA8u),
                                   w5 = SI(0xACu), w6 = SI(0xB0u), w7 = SI(0xC0u), w8 = SI(0xC4u), w9 = SI(0xC8u),
                                   w10 = SI(0xCCu), w11 = SI(0xD4u);
                    SI(0xF0u) = 1u;
                    SI(0x60u) = v1;
                    SI(0x64u) = w0;
                    SI(0x9Cu) = a0;
                    SI(0xDCu) = 0xFFFFFFFFu;
                    SI(0x74u) = w1;
                    SI(0x78u) = w2;
                    SI(0x7Cu) = w3;
                    SI(0x68u) = w4;
                    SI(0x6Cu) = w5;
                    SI(0x70u) = w6;
                    SI(0x80u) = w7;
                    SI(0x84u) = w8;
                    SI(0x88u) = w9;
                    SI(0x8Cu) = w10;
                    SI(0x94u) = w11;
                    SI(0xE0u) = 0u;
                    SI(0xA0u) = 0u;
                    SI(0x98u) = a2;
                    SI(0xE8u) = 0u;
                    SI(0xE4u) = 0u;
                }
            }
        }
        k.ch0Anim = static_cast<int32_t>(SI(0x60u));
        const uint32_t anim0 = RU(kAnimTable + static_cast<uint32_t>(k.ch0Anim) * 4u);
        const float len0 = RF(anim0 + 0x10u);
        int iterations = 0;
        if (!advanceChannel(SA_PASS, k, st, 0x60u, anim0, len0, len0, ft, iterations, bF0, b110))
            return false;
        int32_t lo0, hi0, lo1 = 0, hi1 = 0;
        getKeyFrames(SA_PASS, k.ch0Anim, SF(0x64u), lo0, hi0);
        uint32_t anim1 = 0u;
        if (0.0f < SF(0xE0u))
        {
            anim1 = RU(kAnimTable + SI(0xA0u) * 4u);
            // A channel 1 that does not loop is clamped to channel 0's length.
            if (!advanceChannel(SA_PASS, k, st, 0xA0u, anim1, RF(anim1 + 0x10u), len0, ft, iterations, bF0, b110))
                return false;
            getKeyFrames(SA_PASS, static_cast<int32_t>(SI(0xA0u)), SF(0xA4u), lo1, hi1);
        }

        // The bones animated: one for a far character that is not flagged.
        int32_t boneCount = RS(anim0 + 8u);
        if (!kind1000 && !(RS(pd) < RS(gp - 0x608Cu)) && (RU(c + 0x10u) & 0x0F000000u) == 0u)
            boneCount = 1;

        const float e0 = SF(0xE0u);
        const bool blend = !(e0 == 0.0f);
        if (blend && !(0.0f < e0))
            return false; // a negative or NaN blend: the original reads stale stack
        const float t0 = keyWeight(SA_PASS, anim0, SF(0x64u), lo0, hi0, flags);
        const float t1 = blend ? keyWeight(SA_PASS, anim1, SF(0xA4u), lo1, hi1, flags) : 0.0f;
        const float tb = SF(0xE4u);
        if (!weightOk(t0) || (blend && (!weightOk(t1) || !weightOk(tb))))
            return false;
        {
            const uint32_t kb = bitsOf(RF(gp - 0x703Cu)) & 0x7FFFFFFFu;
            if (kb > 0x40400000u && kb < 0x7F800000u) // |k| > 3: the slerp's opposite-quaternion angles
                return false;
        }

        // The aim rotations' angles (inputs the call does not change first).
        float f21in, f26;
        if (kind1000)
        {
            f26 = RF(pd + 8u);
            f21in = RF(pd + 4u);
        }
        else
        {
            f21in = RF(pd + 0xB98u);
            f26 = RF(pd + 0xB9Cu);
        }
        const int32_t chrIndex = RS(c + 0xCu);
        const bool aimA = !(chrIndex < 201) && chrIndex < RS(gp - 0x608Cu) + 201;
        const float c4C = RF(c + 0x54u), c50 = RF(c + 0x50u);
        const float ad1 = angleDiff(c4C, c50), ad2 = angleDiff(f26, c50);
        float aimX1, aimY1, aimX2 = 0.0f, aimY2 = 0.0f;
        if (aimA)
        {
            const float f23 = RF(gp - 0x7FC8u);
            float f21 = f21in * f23;
            f21 = f21 / 180.0f;
            aimX1 = -f21;
            float f0 = ad2 * f23, f20 = ad1 * f23;
            f0 = f0 / 180.0f;
            f20 = f20 / 180.0f;
            aimY1 = f20 - f0;
            if (!trigOk(aimX1) || !trigOk(aimY1))
                return false;
        }
        else
        {
            const float f23 = RF(gp - 0x7FC0u);
            float f22 = f21in * f23;
            f22 = f22 / 180.0f;
            aimX1 = f22 * -0.5f;
            aimX2 = -f22;
            float f0 = ad2 * f23, f20 = ad1 * f23;
            f0 = f0 / 180.0f;
            f20 = f20 / 180.0f;
            f20 = f20 - f0;
            aimY1 = f20 * 0.5f;
            aimY2 = f20;
            if (!trigOk(aimX1) || !trigOk(aimY1) || !trigOk(aimX2) || !trigOk(aimY2))
                return false;
        }

        // The hit reaction (animHitReactUpdate, 0x215b50) when its timer runs.
        const float hitTimer = RF(c + 0xC8u);
        const bool hit = 0.0f < hitTimer;
        float hitC8 = 0.0f, hitA1 = 0.0f, hitA2 = 0.0f;
        if (hit)
        {
            float f0 = ft / 60.0f;
            float f1 = hitTimer - f0;
            if (f1 < 0.0f)
                f1 = 0.0f;
            hitC8 = f1;
            f1 = divS(f1, RF(gp - 0x7FA8u), flags);
            hitA1 = f1 * RF(gp - 0x7FA4u);
            const float f12 = RF(gp - 0x7FA0u);
            f1 = hitC8;
            if (f12 < f1)
            {
                f1 = f1 - f12;
                f1 = divS(f1, RF(gp - 0x7F9Cu), flags);
                if (0.5f < f1)
                {
                    float a = f1 + f1;
                    a = a - 1.0f;
                    hitA2 = a * RF(gp - 0x7F98u);
                }
                else
                {
                    float a = 0.5f - f1;
                    a = a + a;
                    hitA2 = a * RF(gp - 0x7F94u);
                }
            }
            else
            {
                f1 = divS(f1, f12, flags);
                float a = f1 * RF(gp - 0x7F90u);
                a = a * f1;
                hitA2 = a * f1;
            }
            if (!trigOk(hitA1) || !trigOk(hitA2))
                return false;
        }

        // ---- Commit the clocks.
        WU(c + 0x4Cu, RU(c + 0x54u));
        storeWords(SA_PASS, skel + 0x60u, st, 40u);
        // A state word written from here on goes to both.
        auto stW = [&](uint32_t off, float v) {
            SSF(off, v);
            WF(skel + off, v);
        };

        const uint32_t mats = RU(skel + 4u);
        const uint32_t model = RU(skel + 0x5Cu);
        const uint32_t remap = RU(model);
        const bool rootFlag = (RU(anim0 + 0xCu) & 2u) != 0u;
        float m[16];

        // ---- The bones.
        if (!blend)
        {
            for (int32_t b = 0; b < boneCount; ++b)
            {
                const uint32_t idx = RU(remap + static_cast<uint32_t>(b) * 4u);
                extract(SA_PASS, k, anim0, b, lo0, b70);
                extract(SA_PASS, k, anim0, b, hi0, b90);
                const uint32_t bm = mats + (idx << 6);
                float q0[4], q1[4], q[4];
                std::memcpy(q0, b70 + 3, 16);
                std::memcpy(q1, b90 + 3, 16);
                slerp(rdram, gp, q0, q1, q, t0, flags);
                quatToMatrix(m, q, flags);
                storeMat(SA_PASS, bm, m);
                if (b != 0)
                {
                    WU(bm + 0x30u, b70[0]);
                    WU(bm + 0x34u, b70[1]);
                    WU(bm + 0x38u, b70[2]);
                }
                else if (rootFlag)
                {
                    float p[3];
                    for (int i = 0; i < 3; ++i)
                    {
                        const float a = floatOf(b70[i]);
                        float d = floatOf(b90[i]) - a;
                        d = d * t0;
                        p[i] = a + d;
                    }
                    stW(0x68u, p[0]);
                    stW(0x6Cu, p[1]);
                    stW(0x70u, p[2]);
                    WU(mats + 0x30u, 0u);
                    WF(mats + 0x34u, p[1]);
                    WU(mats + 0x38u, 0u);
                }
                else
                {
                    const float a = floatOf(b70[1]);
                    float d = floatOf(b90[1]) - a;
                    d = d * t0;
                    WU(mats + 0x30u, 0u);
                    WF(mats + 0x34u, a + d);
                    WU(mats + 0x38u, 0u);
                }
            }
        }
        else
        {
            for (int32_t b = 0; b < boneCount; ++b)
            {
                const uint32_t idx = RU(remap + static_cast<uint32_t>(b) * 4u);
                extract(SA_PASS, k, anim0, b, lo0, b70);
                extract(SA_PASS, k, anim0, b, hi0, b90);
                extract(SA_PASS, k, anim1, b, lo1, bB0);
                extract(SA_PASS, k, anim1, b, hi1, bD0);
                const uint32_t bm = mats + (idx << 6);
                float qa0[4], qa1[4], qb0[4], qb1[4], qa[4], qb[4], q[4];
                std::memcpy(qa0, b70 + 3, 16);
                std::memcpy(qa1, b90 + 3, 16);
                std::memcpy(qb0, bB0 + 3, 16);
                std::memcpy(qb1, bD0 + 3, 16);
                slerp(rdram, gp, qa0, qa1, qa, t0, flags);
                slerp(rdram, gp, qb0, qb1, qb, t1, flags);
                slerp(rdram, gp, qa, qb, q, tb, flags);
                quatToMatrix(m, q, flags);
                storeMat(SA_PASS, bm, m);
                if (b != 0)
                {
                    const float x = lerp(b70, b90, 0, t0), y = lerp(b70, b90, 1, t0), z = lerp(b70, b90, 2, t0);
                    WF(bm + 0x30u, x);
                    WF(bm + 0x34u, y);
                    WF(bm + 0x38u, z);
                }
                else if (rootFlag)
                {
                    const float y0 = lerp(b70, b90, 1, t0), y1 = lerp(bB0, bD0, 1, t1);
                    const float x0 = lerp(b70, b90, 0, t0), x1 = lerp(bB0, bD0, 0, t1);
                    const float z0 = lerp(b70, b90, 2, t0), z1 = lerp(bB0, bD0, 2, t1);
                    float y = y1 - y0;
                    y = y * tb;
                    y = y0 + y;
                    stW(0xACu, y1);
                    stW(0x70u, z0);
                    stW(0x6Cu, y);
                    stW(0xB0u, z1);
                    stW(0x68u, -x0);
                    stW(0xA8u, -x1);
                    WU(mats + 0x30u, 0u);
                    WF(mats + 0x34u, y);
                    WU(mats + 0x38u, 0u);
                }
                else
                {
                    const float y0 = lerp(b70, b90, 1, t0), y1 = lerp(bB0, bD0, 1, t1);
                    float y = y1 - y0;
                    y = y * tb;
                    WU(bm + 0x30u, 0u);
                    WF(bm + 0x34u, y0 + y);
                    WU(bm + 0x38u, 0u);
                }
            }
        }

        // ---- Turning with the animation's first frames.
        {
            float limit = 0.5f;
            if (!kind1000 && RS(pd + 8u) == 1)
                limit = RF(gp - 0x7FCCu);
            if (SI(0x9Cu) == 0u)
                turnWithFrame(SA_PASS, st, skel, c, 0x64u, 0x94u, true, limit, flags);
            if (SI(0xDCu) == 0u)
                turnWithFrame(SA_PASS, st, skel, c, 0xA4u, 0xD4u, true, limit, flags);
            if (SI(0x9Cu) == 1u)
                turnWithFrame(SA_PASS, st, skel, c, 0x64u, 0x94u, false, limit, flags);
            if (SI(0xDCu) == 1u)
                turnWithFrame(SA_PASS, st, skel, c, 0xA4u, 0xD4u, false, limit, flags);
        }

        // ---- The hit reaction.
        if (hit)
        {
            const uint32_t hmodel = RU(RU(c + 0x20u) + 0x5Cu);
            WF(c + 0xC8u, hitC8);
            WU(c + 0x150u, RU(hmodel + 0x10u));
            rotZ(rdram, m, hitA1);
            storeMat(SA_PASS, c + 0xD0u, m);
            WU(c + 0x154u, RU(hmodel + 0x14u));
            rotZ(rdram, m, hitA2);
            storeMat(SA_PASS, c + 0x110u, m);
            const int32_t i0 = RS(c + 0x150u);
            if (i0 >= 0)
            {
                const uint32_t bm = mats + (static_cast<uint32_t>(i0) << 6);
                mulGuest(SA_PASS, bm, bm, c + 0xD0u);
            }
            const int32_t i1 = RS(c + 0x154u);
            if (i1 >= 0)
            {
                const uint32_t bm = mats + (static_cast<uint32_t>(i1) << 6);
                mulGuest(SA_PASS, bm, bm, c + 0x110u);
            }
        }
        calGlobalMatrices(SA_PASS, skel, RU(skel + 4u), 0, -1, 0);
        calDoubleFillets(SA_PASS, skel, 0, 0);

        // ---- The aim.
        float aim[16], tmp[16], tmpIn[16];
        const uint32_t s4 = kind1000 ? 0u : pd;
        if (aimA)
        {
            // The look up/down and sideways for a local player's character:
            // the upper body bones (node kinds 7..10) turned about the
            // shoulders' height.
            rotZXY(rdram, aim, aimX1, aimY1, 0.0f, 0.0f, 0.0f, 0.0f);
            const uint32_t header = RU(skel);
            const int32_t nodeCount = RS(header);
            const uint32_t nodes = header - static_cast<uint32_t>(nodeCount) * 0x50u;
            if (nodeCount > 0)
            {
                const float lift = RF(gp - 0x7FC4u);
                const bool special = s4 != 0u && RS16(s4 + 4u) == 0x18;
                for (int32_t i = 0; i < nodeCount; ++i)
                {
                    const uint32_t kinds = RU(RU(skel + 0x5Cu) + 0x20u);
                    const uint32_t kind = RU(kinds + static_cast<uint32_t>(i) * 4u);
                    if (kind - 7u >= 4u)
                        continue;
                    const int32_t mi = RS8(nodes + static_cast<uint32_t>(i) * 0x50u + 1u);
                    if (mi < 0 || !(mi < RS(RU(skel) + 4u)))
                        continue;
                    const uint32_t bm = RU(skel + 4u) + (static_cast<uint32_t>(mi) << 6);
                    WF(bm + 0x34u, RF(bm + 0x34u) - lift);
                    if (special)
                        WF(bm + 0x34u, RF(bm + 0x34u) - RF(gp - 0x62B0u));
                    float *bp = gmat(SA_PASS, bm, tmpIn);
                    mulCore(tmp, aim, bp);
                    tmp[13] = tmp[13] + lift;
                    if (special)
                        tmp[13] = tmp[13] + RF(gp - 0x62B0u);
                    storeMat(SA_PASS, bm, tmp);
                }
            }
        }
        else
        {
            // The whole body turned about the root; the bones between the
            // model's +0x10 and +0x14 turned again about it.
            const uint32_t root = mats + (RU(model + 0xCu) << 6);
            const uint32_t rx = RU(root + 0x30u), ry = RU(root + 0x34u), rz = RU(root + 0x38u);
            WU(root + 0x30u, 0u);
            WU(root + 0x34u, 0u);
            WU(root + 0x38u, 0u);
            rotZXY(rdram, aim, aimX1, aimY1, 0.0f, 0.0f, 0.0f, 0.0f);
            {
                float *rp = gmat(SA_PASS, root, tmpIn);
                mulCore(tmp, aim, rp);
            }
            tmp[12] = floatOf(rx);
            tmp[13] = floatOf(ry);
            tmp[14] = floatOf(rz);
            storeMat(SA_PASS, root, tmp);
            rotZXY(rdram, aim, aimX2, aimY2, 0.0f, 0.0f, 0.0f, 0.0f);
            int32_t i = RS(model + 0x10u);
            if (!(RS(model + 0x14u) < i))
            {
                do
                {
                    const uint32_t bm = mats + (static_cast<uint32_t>(i) << 6);
                    ++i;
                    WF(bm + 0x30u, RF(bm + 0x30u) - RF(root + 0x30u));
                    WF(bm + 0x34u, RF(bm + 0x34u) - RF(root + 0x34u));
                    WF(bm + 0x38u, RF(bm + 0x38u) - RF(root + 0x38u));
                    float *bp = gmat(SA_PASS, bm, tmpIn);
                    mulCore(tmp, aim, bp);
                    tmp[12] = tmp[12] + RF(root + 0x30u);
                    tmp[13] = tmp[13] + RF(root + 0x34u);
                    tmp[14] = tmp[14] + RF(root + 0x38u);
                    storeMat(SA_PASS, bm, tmp);
                } while (!(RS(RU(skel + 0x5Cu) + 0x14u) < i));
            }
        }

        // ---- The cheats' scales (big head, small head, big hands and feet).
        {
            auto cheat = [&](uint32_t bit) {
                return (RU(gp - 0x60ACu) & bit & RU(gp - 0x60B4u) & RU(gp - 0x60B0u)) != 0u;
            };
            auto scaleBone = [&](uint32_t off, float s) {
                scaleSet(tmp, s, s, s);
                const uint32_t bm = mats + (RU(model + off) << 6);
                float *bp = gmat(SA_PASS, bm, tmpIn);
                mulCore(bp, bp, tmp);
                gmatDone(SA_PASS, bm, bp, tmpIn);
            };
            if (cheat(1u))
                scaleBone(0x14u, 2.0f);
            if (cheat(2u))
                scaleBone(0x14u, 0.5f);
            if (cheat(4u))
            {
                scaleBone(0x18u, 2.0f);
                scaleBone(0x1Cu, 2.0f);
            }
            if ((RU(c + 0x10u) & 0x10000000u) != 0u || cheat(0x2000u))
                scaleBone(0x14u, RF(gp - 0x7FBCu));
        }

        // ---- The root motion for the frame.
        if ((RU(anim0 + 0xCu) & 2u) == 0u)
        {
            stW(0xC8u, 0.0f);
            stW(0x80u, 0.0f);
            stW(0x84u, 0.0f);
            stW(0x88u, 0.0f);
            stW(0xC0u, 0.0f);
            stW(0xC4u, 0.0f);
        }
        else
        {
            const float f8 = SF(0x68u), f9 = SF(0x6Cu), f7 = SF(0x70u);
            const float f6 = SF(0xA8u), f5 = SF(0xACu), f4 = SF(0xB0u);
            const float f14 = f8 - SF(0x74u), f12 = f7 - SF(0x7Cu), f11 = f6 - SF(0xB4u);
            const float f2 = f9 - SF(0x78u), f1 = f5 - SF(0xB8u), f10 = f4 - SF(0xBCu);
            const float e0b = SF(0xE0u);
            stW(0x84u, f2);
            stW(0x74u, f8);
            stW(0x78u, f9);
            stW(0x7Cu, f7);
            stW(0xC4u, f1);
            stW(0xB4u, f6);
            stW(0xB8u, f5);
            stW(0xBCu, f4);
            stW(0x80u, f14);
            stW(0x88u, f12);
            stW(0xC0u, f11);
            stW(0xC8u, f10);
            if (0.0f < e0b)
            {
                const float e4 = SF(0xE4u);
                const float inv = 1.0f - e4;
                stW(0x84u, 0.0f);
                stW(0x88u, inv * f12 + e4 * f10);
                stW(0x80u, inv * f14 + e4 * f11);
            }
        }

        // The extraction buffers back to the frame.
        storeWords(SA_PASS, frBase, fr, 48u);
        ctx->fcr31 |= flags;
        return true;
    }

#undef SI
#undef SF
#undef SSF

    void runCalMatrices(SA_ARGS, uint32_t skel)
    {
        if (calMatricesFast(SA_PASS, skel))
        {
            ctx->pc = GPR_U32(ctx, 31);
            return;
        }
        ctx->pc = 0x212E08u;
        s_prevCalMatrices(SA_PASS);
    }

#if TS_SWEEP_ANIM_CHECK
    // The regions a calMatrices call writes, for the differential check.
    struct CheckRegions
    {
        uint32_t addr[5], size[5];
    };

    SA_INL bool checkRegions(SA_ARGS, uint32_t skel, CheckRegions &r)
    {
        const uint32_t c = RU(skel + 0xF4u), mats = RU(skel + 4u);
        int32_t count = RS(RU(skel) + 4u);
        if (count < 1)
            count = 1;
        if (count > 64)
            count = 64;
        const uint32_t frame = GPR_U32(ctx, 29) - 0x310u;
        const uint32_t a[5] = {skel + 0x60u, c + 0x4Cu, c + 0xC8u, mats, frame + 0x70u};
        const uint32_t s[5] = {0xA0u, 0x0Cu, 0x90u, static_cast<uint32_t>(count) * 64u, 0xC0u};
        for (int i = 0; i < 5; ++i)
        {
            if (!inRam(a[i], s[i]))
                return false;
            r.addr[i] = a[i];
            r.size[i] = s[i];
        }
        return true;
    }

    uint8_t s_before[0xA0 + 0x0C + 0x90 + 64 * 64 + 0xC0];
    uint8_t s_afterPrev[sizeof(s_before)];
    R5900Context s_ctxBefore;
    uint32_t s_checkCalls = 0, s_checkDiffs = 0;

    void saveRegions(const uint8_t *rdram, const CheckRegions &r, uint8_t *to)
    {
        for (int i = 0; i < 5; ++i)
        {
            std::memcpy(to, rdram + r.addr[i], r.size[i]);
            to += r.size[i];
        }
    }

    void loadRegions(uint8_t *rdram, const CheckRegions &r, const uint8_t *from)
    {
        for (int i = 0; i < 5; ++i)
        {
            std::memcpy(rdram + r.addr[i], from, r.size[i]);
            from += r.size[i];
        }
    }

    // false: the previous implementation unwound (it owns the call now).
    bool checkedCalMatrices(SA_ARGS, uint32_t skel)
    {
        CheckRegions r;
        if (!checkRegions(SA_PASS, skel, r))
        {
            runCalMatrices(SA_PASS, skel);
            return true;
        }
        const uint32_t ra = GPR_U32(ctx, 31);
        saveRegions(rdram, r, s_before);
        s_ctxBefore = *ctx;
        ctx->pc = 0x212E08u;
        s_prevCalMatrices(SA_PASS);
        if (ctx->pc != ra)
            return false;
        saveRegions(rdram, r, s_afterPrev);
        loadRegions(rdram, r, s_before);
        *ctx = s_ctxBefore;
        runCalMatrices(SA_PASS, skel);
        if (ctx->pc != ra)
            return true; // it went to the previous implementation, which unwound
        ++s_checkCalls;
        const uint8_t *p = s_afterPrev;
        for (int i = 0; i < 5; ++i)
        {
            for (uint32_t o = 0; o < r.size[i]; o += 4u)
            {
                uint32_t want, got;
                std::memcpy(&want, p + o, 4);
                std::memcpy(&got, rdram + r.addr[i] + o, 4);
                if (want != got && s_checkDiffs < 200u)
                {
                    ++s_checkDiffs;
                    std::printf("[sweep-anim] calMatrices(0x%x) call %u: region %d +0x%x is 0x%08x, the previous wrote 0x%08x\n",
                                skel, s_checkCalls, i, o, got, want);
                }
            }
            p += r.size[i];
        }
        if ((s_checkCalls & 0xFFFu) == 0u)
            std::printf("[sweep-anim] %u calMatrices checked, %u differences\n", s_checkCalls, s_checkDiffs);
        return true;
    }
#endif

    void calMatricesEntry(SA_ARGS, uint32_t skel)
    {
#if TS_SWEEP_ANIM_CHECK
        checkedCalMatrices(SA_PASS, skel);
#else
        runCalMatrices(SA_PASS, skel);
#endif
    }

    // ---- calMatrices (0x212e08)
    void sweepCalMatrices(SA_ARGS)
    {
        enterGuest(SA_PASS);
        calMatricesEntry(SA_PASS, GPR_U32(ctx, 4));
    }

    // ---- animUpdate (0x212cf8)
    //
    // A skeleton on screen (the viewport has a camera) whose character is
    // animated gets calMatrices (the original's tail jump); otherwise, unless
    // its first channel plays animation 1, its matrices become unit matrices.
    void sweepAnimUpdate(SA_ARGS)
    {
        enterGuest(SA_PASS);
        const uint32_t skel = GPR_U32(ctx, 4);
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t ra = GPR_U32(ctx, 31);
        const uint32_t header = RU(skel);
        if (header == 0u || RU(RU(gp - 0x4DCCu) + 0x6E4u) == 0u || RU(header + 4u) == 0u)
        {
            ctx->pc = ra;
            return;
        }
        const uint32_t c = RU(skel + 0xF4u);
        const uint32_t kind = RU(c + 8u);
        bool animate = false;
        if (kind == 8u)
            animate = RS(RU(c + 0x160u) + 8u) != 3;
        else if (kind == 16u || kind == 4096u)
            animate = RS(c + 4u) < 80;
        if (animate && RU(skel + 4u) != 0u)
        {
            calMatricesEntry(SA_PASS, skel); // the tail jump
            return;
        }
        if (RS(skel + 0x60u) != 1 && RS(header + 4u) > 0)
        {
            static const float kUnit[16] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};
            int32_t i = 0;
            do
            {
                storeMat(SA_PASS, RU(skel + 4u) + (static_cast<uint32_t>(i) << 6), kUnit);
                ++i;
            } while (i < RS(RU(skel) + 4u));
        }
        ctx->pc = ra;
    }

    // ---- matrixRotY (0x2b4a58), matrixTransRotY (0x2b4c50)

    void sweepMatrixRotY(SA_ARGS)
    {
        enterGuest(SA_PASS);
        const float angle = ctx->f[12];
        if (!trigOk(angle))
        {
            ctx->pc = 0x2B4A58u;
            s_prevRotY(SA_PASS);
            return;
        }
        float m[16];
        transRotY(rdram, m, 0.0f, 0.0f, 0.0f, angle);
        m[12] = m[13] = m[14] = 0.0f;
        storeMat(SA_PASS, GPR_U32(ctx, 4), m);
        ctx->f[0] = m[0];
        ctx->f[1] = m[2];
        ctx->pc = GPR_U32(ctx, 31);
    }

    void sweepMatrixTransRotY(SA_ARGS)
    {
        enterGuest(SA_PASS);
        const float angle = ctx->f[15];
        if (!trigOk(angle))
        {
            ctx->pc = 0x2B4C50u;
            s_prevTransRotY(SA_PASS);
            return;
        }
        float m[16];
        transRotY(rdram, m, ctx->f[12], ctx->f[13], ctx->f[14], angle);
        storeMat(SA_PASS, GPR_U32(ctx, 4), m);
        ctx->f[0] = m[0];
        ctx->f[1] = m[2];
        ctx->pc = GPR_U32(ctx, 31);
    }

    // ---- animMtxTick (0x273bb0)

    constexpr uint32_t kCameraOff[4] = {0x6E4u, 0xE00u, 0x151Cu, 0x1C38u}; // the players' (0x71C apart)

    // The original's state at its prop-loop head 0x273be0 for prop i: its
    // frame (sp - 0xE0) with the caller's s0-s4 and ra saved, s4 = i,
    // v0 = 0x250. run: the original goes on from there now; otherwise the
    // scheduler resumes it there (a due checkpoint).
    void mtxTickHandOff(SA_ARGS, uint32_t frame, const float *m0, int32_t i, bool run)
    {
        storeMat(SA_PASS, frame, m0);
        WRITE64(frame + 0x80u, GPR_U64(ctx, 16));
        WRITE64(frame + 0x90u, GPR_U64(ctx, 17));
        WRITE64(frame + 0xA0u, GPR_U64(ctx, 18));
        WRITE64(frame + 0xB0u, GPR_U64(ctx, 19));
        WRITE64(frame + 0xC0u, GPR_U64(ctx, 20));
        WRITE64(frame + 0xD0u, GPR_U64(ctx, 31));
        SET_GPR_S32(ctx, 20, i);
        SET_GPR_S32(ctx, 2, 0x250);
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(frame));
        ctx->pc = 0x273BE0u;
        if (run)
            s_mtxTickLoop(SA_PASS);
    }

    void sweepAnimMtxTick(SA_ARGS)
    {
        enterGuest(SA_PASS);
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t ra = GPR_U32(ctx, 31);
        const uint32_t frame = GPR_U32(ctx, 29) - 0xE0u;
        float m0[16], s[16], tmpIn[16];
        loadMat(SA_PASS, frame, m0); // sp+0: read stale for a mode above 4
        for (int32_t i = 0; i < RS(gp - 0x4EA4u); ++i)
        {
            if (i > 0 && runtime->eeCheckpointDue())
            {
                mtxTickHandOff(SA_PASS, frame, m0, i, false);
                return;
            }
            const uint32_t prop = RU(gp - 0x4F84u) + static_cast<uint32_t>(i) * 0x250u;
            if (RS(prop + 0x10u) < 0)
                continue;
            const uint32_t obj = RU(prop + 0x20u);
            if (RU(obj + 4u) == 0u)
                continue;
            const bool camAlways = RS(prop + 8u) == 8 || prop == RU(kPlayerProp);
            if (camAlways)
            {
                float a = RF(prop + 0x4Cu) * RF(gp - 0x7A64u);
                a = a / 180.0f;
                if (!trigOk(a))
                {
                    mtxTickHandOff(SA_PASS, frame, m0, i, true);
                    return;
                }
                transRotY(rdram, m0, RF(prop + 0x30u), RF(prop + 0x34u), RF(prop + 0x38u), a);
            }
            else
            {
                if (RS(RU(obj) + 4u) <= 0 || RU(prop + 0xBCu) != 0u)
                    continue;
                const uint32_t mode = RU(prop + 0x8Cu);
                if (mode == 4u)
                    continue;
                if (mode < 5u)
                {
                    const uint32_t target = RU(kMtxModeTable + mode * 4u);
                    if (target == 0x273E70u)
                    {
                        unitHost(m0);
                    }
                    else if (target == 0x273E80u || target == 0x273F20u || target == 0x273F5Cu)
                    {
                        const uint32_t kOff = target == 0x273E80u ? 0x7A60u : target == 0x273F20u ? 0x7A58u : 0x7A54u;
                        float a = RF(prop + 0x4Cu) * RF(gp - kOff);
                        a = a / 180.0f;
                        const bool withRoll = target == 0x273F5Cu;
                        if (!trigOk(a) ||
                            (withRoll && !trigOk((RF(prop + 0x5Cu) * RF(gp - 0x7034u)) / 180.0f)))
                        {
                            mtxTickHandOff(SA_PASS, frame, m0, i, true);
                            return;
                        }
                        transRotY(rdram, m0, RF(prop + 0x30u), RF(prop + 0x34u), RF(prop + 0x38u), a);
                        if (withRoll)
                        {
                            // The roll about the axis at prop+0x64 into the
                            // object's first matrix, then into the prop's.
                            const uint32_t om = RU(obj + 4u);
                            roll(rdram, s, RF(prop + 0x64u), RF(prop + 0x68u), RF(prop + 0x6Cu), RF(prop + 0x5Cu),
                                 RF(gp - 0x7034u));
                            storeMat(SA_PASS, om, s);
                            float *op = gmat(SA_PASS, om, tmpIn);
                            mulCore(m0, m0, op);
                        }
                    }
                    else if (target == 0x273EBCu)
                    {
                        const float k = RF(gp - 0x7A5Cu);
                        float a = RF(prop + 0x48u) * k, b = RF(prop + 0x4Cu) * k, cc = RF(prop + 0x58u) * k;
                        a = a / 180.0f;
                        b = b / 180.0f;
                        cc = cc / 180.0f;
                        if (!trigOk(a) || !trigOk(b) || !trigOk(cc))
                        {
                            mtxTickHandOff(SA_PASS, frame, m0, i, true);
                            return;
                        }
                        rotZXY(rdram, m0, a, b, cc, RF(prop + 0x30u), RF(prop + 0x34u), RF(prop + 0x38u));
                    }
                    else
                    {
                        mtxTickHandOff(SA_PASS, frame, m0, i, true);
                        return;
                    }
                }
            }
            // Each viewport the prop is in: its parts' matrices for it.
            for (uint32_t v = 0; v < 4u; ++v)
            {
                if ((RU(prop + 0x10u) & (0x01000000u << v)) == 0u)
                    continue;
                const float *sp;
                if (camAlways || RS(prop + 0x88u) == 1)
                {
                    const uint32_t cam = RU(RU(gp - 0x4DD0u) + kCameraOff[v]);
                    float *cp = gmat(SA_PASS, cam, tmpIn);
                    mulCore(s, cp, m0);
                    sp = s;
                }
                else
                {
                    sp = m0; // sceVu0CopyMatrix(sp+0x40, sp)
                }
                for (int32_t p = 0; p < RS(RU(obj) + 4u); ++p)
                {
                    const uint32_t out = RU(obj + 8u + v * 4u) + (static_cast<uint32_t>(p) << 6);
                    const uint32_t part = RU(obj + 4u) + (static_cast<uint32_t>(p) << 6);
                    if (inRam(out, 64u) && inRam(part, 64u))
                    {
                        mulCore(rdram + out, sp, rdram + part);
                    }
                    else
                    {
                        float r[16], o[16];
                        loadMat(SA_PASS, part, r);
                        mulCore(o, sp, r);
                        storeMat(SA_PASS, out, o);
                    }
                }
            }
        }
        storeMat(SA_PASS, frame, m0);
        ctx->pc = ra;
    }
} // namespace

void registerSweepAnim(PS2Runtime &runtime)
{
    s_prevCalMatrices = runtime.lookupFunction(0x212E08u);
    s_prevRotY = runtime.lookupFunction(0x2B4A58u);
    s_prevTransRotY = runtime.lookupFunction(0x2B4C50u);
    s_mtxTickLoop = runtime.lookupFunction(0x273BE0u);
    for (RotCache &e : s_rotCache)
        e = {0u, 0.0f, 1.0f};
    if (s_prevCalMatrices == nullptr || s_prevRotY == nullptr || s_prevTransRotY == nullptr || s_mtxTickLoop == nullptr)
    {
        std::printf("[sweep-anim] a routine is missing from the function table: nothing installed\n");
        return;
    }
    runtime.replaceFunction(0x212E08u, &sweepCalMatrices);
    runtime.replaceFunction(0x212CF8u, &sweepAnimUpdate);
    runtime.replaceFunction(0x273BB0u, &sweepAnimMtxTick);
    runtime.replaceFunction(0x2B4A58u, &sweepMatrixRotY);
    runtime.replaceFunction(0x2B4C50u, &sweepMatrixTransRotY);
    std::printf("[sweep-anim] 5 natives installed%s\n", TS_SWEEP_ANIM_CHECK ? " (checked against the previous calMatrices)" : "");
}

#else
void registerSweepAnim(PS2Runtime &) {}
#endif
