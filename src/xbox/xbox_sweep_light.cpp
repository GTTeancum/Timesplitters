// The sweep's LIGHT package (xbox_sweep.h): object lighting.
//
// obInstLightUpdate (0x25c160) lights one object instance: its two nearest
// level lights (bglightGet), the nearest bullet flash (bgBulletGetClosest),
// a blend of the instance's light state towards them, the ambient colour
// (obinstCalcAmbientLight), and for every matrix of the instance's model the
// three light directions rotated into that matrix's space, then the colour
// block. The current implementation (ts_native_math.cpp) runs those steps
// through about ten guest calls per object plus six per model matrix, each
// leaving every register as the original does. This one does the common case
// in host code with no guest call at all:
//
// - bglightGet in host code (its search over the level's lights is bounded:
//   bglightAdd stops at 300 lights, so it needs no checkpoint).
// - bgBulletGetClosest and obinstCalcAmbientLight: host fast paths for
//   everything but their expensive parts (the explosion search on its frame
//   in four, the floor ray cast on its frame in four for a moving object).
//   Those, and anything unusual (an unknown jump-table target, a NaN square
//   root), go to the previous implementation from the call's start, with the
//   guest state exactly the original's at that call.
// - matrixTransRotY's sine and cosine come from an exact cache keyed on the
//   angle's bits (sinf/cosf are pure); a miss makes the original call.
// - The per-matrix work is SSE in registers: L = chrM * R is loop-invariant
//   (computed once), S = L * M only for the three columns the result uses,
//   and transpose + three matrixVecRotAligned become three broadcast rows.
//   Every float operation is the one the original makes, in its order, so
//   every value written is bit-identical.
//
// Guest-call contract: every guest call this file makes is made with the
// frame (sp - 0x2C0), the callee-saved registers and the arguments the
// original has at that call, so a callee that unwinds to the scheduler is
// resumed by the original at the call's return address (those resume entries
// are the original function in the table). A NaN normalisation hands the rest
// to the original at 0x25cd48 the same way.
//
// Left as the original would not: caller-saved registers other than v0/at/
// f0/f1, the VU0 registers and ACC, lo/hi, and the FPU condition bit (all dead
// at the return: compiled callers never read them), and the dead scratch the
// original leaves in its own frame below the caller's sp.
#include "xbox_sweep.h"

#if defined(PLATFORM_XBOX)
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_direct_call_xbox.h"

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <cstring>

extern const uint32_t g_ps2RecompiledFunctionAddresses[];

namespace
{
    using Fn = PS2Runtime::RecompiledFunction;

#define SL_INLINE inline __attribute__((always_inline))
#define SL_ARGS uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime
#define SL_PASS rdram, ctx, runtime

    // The implementations installed before this package (the shared natives).
    Fn s_prevLight = nullptr, s_prevAmbient = nullptr, s_prevBullet = nullptr;
    // The original's resume entry after obinstCalcAmbientLight.
    Fn s_resumeAfterAmbient = nullptr;
    // Table slots of the two leaf calls (sqrtf, matrixTransRotY).
    uint32_t s_slotSqrtf = UINT32_MAX, s_slotTransRotY = UINT32_MAX;

    SL_INLINE uint32_t bitsOf(float value)
    {
        uint32_t bits;
        std::memcpy(&bits, &value, sizeof(bits));
        return bits;
    }
    SL_INLINE float floatOf(uint32_t bits)
    {
        float value;
        std::memcpy(&value, &bits, sizeof(value));
        return value;
    }
    SL_INLINE uint64_t sext32(uint32_t v) { return static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(v))); }
    SL_INLINE float u8f(uint32_t v) { return FPU_CVT_S_W(static_cast<int32_t>(v & 0xFFu)); }

#define RF(addr) floatOf(READ32(addr))
#define WF(addr, value) WRITE32((addr), bitsOf(value))

    // The recompiled div.s: a zero divisor raises DZ and gives the infinity
    // whose sign is that of (numerator * 0).
    SL_INLINE float divS(float a, float b, uint32_t &fcr31)
    {
        if (b == 0.0f)
        {
            fcr31 |= 0x100000u;
            return copysignf(INFINITY, a * 0.0f);
        }
        return a / b;
    }

    SL_INLINE __m128 lane(__m128 v, int k)
    {
        switch (k)
        {
        case 0: return _mm_shuffle_ps(v, v, _MM_SHUFFLE(0, 0, 0, 0));
        case 1: return _mm_shuffle_ps(v, v, _MM_SHUFFLE(1, 1, 1, 1));
        case 2: return _mm_shuffle_ps(v, v, _MM_SHUFFLE(2, 2, 2, 2));
        default: return _mm_shuffle_ps(v, v, _MM_SHUFFLE(3, 3, 3, 3));
        }
    }

    // One column of sceVu0MulMatrix: ((c0*x + c1*y) + c2*z) + c3*w.
    SL_INLINE __m128 mulColumn(const __m128 *left, __m128 column)
    {
        __m128 acc = PS2_VMUL(left[0], lane(column, 0));
        acc = PS2_VADD(acc, PS2_VMUL(left[1], lane(column, 1)));
        acc = PS2_VADD(acc, PS2_VMUL(left[2], lane(column, 2)));
        return PS2_VADD(acc, PS2_VMUL(left[3], lane(column, 3)));
    }

    SL_INLINE __m128 load4(SL_ARGS, uint32_t addr) { return _mm_castsi128_ps(READ128(addr)); }

    // Four word stores (the original's sw) as one when the block is in RAM.
    SL_INLINE void store4(SL_ARGS, uint32_t addr, __m128 v)
    {
        if (Ps2XboxInRam<__m128i>(addr))
        {
            Ps2XboxStore128(rdram, addr, v);
            return;
        }
        alignas(16) float f[4];
        _mm_store_ps(f, v);
        WF(addr, f[0]);
        WF(addr + 4u, f[1]);
        WF(addr + 8u, f[2]);
        WF(addr + 12u, f[3]);
    }

    // A guest call through a function-table entry (the lean protocol: ra,
    // pc, the 8-cycle checkpoint, the call, the post-call tests). false: the
    // caller unwinds (ctx holds the original's state at the call).
    SL_INLINE bool callEntry(SL_ARGS, const Fn *entry, uint32_t target, uint32_t next)
    {
        SET_GPR_U32(ctx, 31, next);
        return ps2xDirectCall(rdram, ctx, runtime, entry, target, next);
    }

    SL_INLINE bool callSlot(SL_ARGS, uint32_t slot, uint32_t target, uint32_t next)
    {
        if (slot == UINT32_MAX)
        {
            SET_GPR_U32(ctx, 31, next);
            return runtime->dispatchGuestBranch(rdram, ctx, target, next - 8u, next,
                                                PS2Runtime::GuestBranchKind::DirectCall, "JAL");
        }
        return callEntry(SL_PASS, &g_ps2RecompiledFunctionTable[slot], target, next);
    }

    // The per-instance frame hash the three lighting routines share:
    // ((inst - base) * 0xC18F9C19) >> 3 against the frame counter (divided by
    // gp-0x4BA0 when that is positive; the ambient's "< 2" test gives the
    // same value for 1).
    SL_INLINE void frameHash(SL_ARGS, uint32_t gp, uint32_t inst, uint32_t &hash, uint32_t &frame)
    {
        const uint32_t base = READ32(gp - 0x5D6Cu);
        hash = static_cast<uint32_t>(static_cast<int32_t>((inst - base) * 0xC18F9C19u) >> 3);
        const int32_t divisor = static_cast<int32_t>(READ32(gp - 0x4BA0u));
        int32_t count = static_cast<int32_t>(READ32(gp - 0x6258u));
        if (divisor > 0)
            count /= divisor;
        frame = static_cast<uint32_t>(count);
    }

    SL_INLINE uint32_t characterOf(SL_ARGS, uint32_t gp, uint32_t room)
    {
        return READ32(gp - 0x4DD0u) + room * 0x71Cu + 0xFFFA6B04u;
    }

    // ---- bglightGet (0x25a7d0)
    //
    // The two nearest level lights to a position, as pointers to two of the
    // three static records at 0x1FC63C8 (light, offset, squared distance).
    // Writes what the original writes, in its order where order matters.

    SL_INLINE bool bglightMeasure(SL_ARGS, uint32_t pos, uint32_t index, uint32_t rec)
    {
        const uint32_t light = READ32(0x01FC5F18u + (index << 2));
        const float lx = RF(light + 0x44u);
        WRITE32(rec, light);
        const float dx = FPU_SUB_S(RF(pos), lx);
        WF(rec + 4u, dx);
        const float dy = FPU_SUB_S(RF(pos + 4u), RF(light + 0x48u));
        WF(rec + 8u, dy);
        const float dz = FPU_SUB_S(RF(pos + 8u), RF(light + 0x4Cu));
        WF(rec + 0xCu, dz);
        const float d2 = FPU_ADD_S(FPU_ADD_S(FPU_MUL_S(dx, dx), FPU_MUL_S(dy, dy)), FPU_MUL_S(dz, dz));
        WF(rec + 0x10u, d2);
        return FPU_C_OLE_S(400.0f, d2);
    }

    void bglightCore(SL_ARGS, uint32_t inst, uint32_t pos, uint32_t outFirst, uint32_t outSecond)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        uint32_t hash, frame;
        frameHash(SL_PASS, gp, inst, hash, frame);
        WRITE32(0x01FC63E0u, 0u);
        WRITE32(0x01FC63C8u, 0u);
        uint32_t t3 = 0x01FC63C8u, t2 = 0x01FC63E0u, t1 = 0x01FC63F8u;
        bool search = true;
        if ((hash & 7u) != (frame & 7u))
        {
            // Measure the two cached lights again; search when one is 20 units away.
            const uint32_t def = READ32(inst + 0xF4u);
            const int32_t second = static_cast<int16_t>(READ16(def + 0x222u));
            const int32_t first = static_cast<int16_t>(READ16(def + 0x220u));
            search = false;
            if (first >= 0 && bglightMeasure(SL_PASS, pos, static_cast<uint32_t>(first), t3))
                search = true;
            if (second >= 0 && bglightMeasure(SL_PASS, pos, static_cast<uint32_t>(second), t2))
                search = true;
        }
        if (search)
        {
            // Every light of the level (at most 300: bglightAdd's limit).
            const uint32_t def = READ32(inst + 0xF4u);
            WRITE32(t3, 0u);
            const int32_t count = static_cast<int32_t>(READ32(gp - 0x5D68u));
            WRITE16(def + 0x222u, 0xFFFFu);
            WRITE32(t2, 0u);
            WRITE16(def + 0x220u, 0xFFFFu);
            const float px = RF(pos), py = RF(pos + 4u), pz = RF(pos + 8u);
            const float infinite = RF(0x003B0000u - 0x1574u);
            for (int32_t i = 0; i < count; ++i)
            {
                const uint32_t light = READ32(0x01FC5F18u + (static_cast<uint32_t>(i) << 2));
                const uint32_t spare = t1;
                WRITE32(spare, light);
                const float dx = FPU_SUB_S(px, RF(light + 0x44u));
                WF(spare + 4u, dx);
                const float dy = FPU_SUB_S(py, RF(light + 0x48u));
                WF(spare + 8u, dy);
                const float dz = FPU_SUB_S(pz, RF(light + 0x4Cu));
                WF(spare + 0xCu, dz);
                float d2;
                bool behind = false;
                if (static_cast<int16_t>(READ16(light + 6u)) != 0)
                {
                    // A directional light: behind its plane it is infinitely far.
                    const float dot = FPU_ADD_S(FPU_ADD_S(FPU_MUL_S(dx, RF(light + 0x80u)), FPU_MUL_S(dy, RF(light + 0x84u))),
                                                FPU_MUL_S(dz, RF(light + 0x88u)));
                    behind = FPU_C_OLE_S(dot, 0.0f);
                }
                if (behind)
                    d2 = infinite;
                else
                    d2 = FPU_ADD_S(FPU_ADD_S(FPU_MUL_S(dx, dx), FPU_MUL_S(dy, dy)), FPU_MUL_S(dz, dz));
                WF(spare + 0x10u, d2);
                if (!FPU_C_OLT_S(d2, 400.0f))
                    continue;
                // Rank it against the two kept so far.
                bool second = false;
                if (READ32(t3) != 0u && !FPU_C_OLT_S(d2, RF(t3 + 0x10u)))
                    second = true;
                if (!second)
                {
                    // Nearer than the first: the first moves to second.
                    const uint32_t oldFirst = t3;
                    const uint32_t haveSecond = READ32(t2);
                    t3 = t1;
                    t1 = oldFirst;
                    bool replaceFirst = true;
                    if (haveSecond != 0u && !FPU_C_OLT_S(RF(oldFirst + 0x10u), RF(t2 + 0x10u)))
                    {
                        WRITE16(def + 0x220u, static_cast<uint16_t>(i));
                        replaceFirst = false;
                    }
                    if (replaceFirst)
                    {
                        const uint16_t oldIndex = READ16(def + 0x220u);
                        const uint32_t oldSecond = t2;
                        t2 = t1;
                        WRITE16(def + 0x222u, oldIndex);
                        t1 = oldSecond;
                        WRITE16(def + 0x220u, static_cast<uint16_t>(i));
                    }
                }
                else
                {
                    // Between the two, or second when there is none.
                    const uint32_t oldSecond = t2;
                    if (READ32(t2) == 0u || FPU_C_OLT_S(d2, RF(t2 + 0x10u)))
                    {
                        WRITE16(def + 0x222u, static_cast<uint16_t>(i));
                        t2 = t1;
                        t1 = oldSecond;
                    }
                }
            }
        }
        WRITE32(outFirst, t3);
        WRITE32(outSecond, t2);
    }

    void sweepBglightGet(SL_ARGS)
    {
        bglightCore(SL_PASS, GPR_U32(ctx, 4), GPR_U32(ctx, 5), GPR_U32(ctx, 6), GPR_U32(ctx, 7));
        ctx->pc = GPR_U32(ctx, 31);
    }

    // ---- The small leaves bgBulletGetClosest and the ambient light call

    // gunGetBulletType (0x2906a0): the bullet type of a gun's current weapon.
    SL_INLINE uint32_t gunBulletType(SL_ARGS, uint32_t gun)
    {
        const uint32_t weapon = READ32(READ32(gun + 0xACu));
        return READ32(0x00366218u + weapon * 0x190u + 0x34u);
    }

    // bulletGetBulletColour (0x28d038): its jump table (0x3A8B10) mapped to
    // the cases' colours. false: a target that is not one of its cases.
    SL_INLINE bool bulletColour(SL_ARGS, uint32_t gp, uint32_t type, float &r, float &g, float &b)
    {
        const uint32_t index = type - 2u;
        const uint32_t target = index < 0x11u ? READ32(0x003A8B10u + (index << 2)) : 0x28D0ECu;
        switch (target)
        {
        case 0x28D060u: r = 1.0f; g = 1.0f; b = RF(gp - 0x7554u); return true;
        case 0x28D07Cu: r = 1.0f; g = 0.0f; b = 0.0f; return true;
        case 0x28D094u: r = 0.0f; g = 1.0f; b = 0.0f; return true;
        case 0x28D0ACu: r = 0.0f; g = 0.0f; b = 1.0f; return true;
        case 0x28D0C4u: r = 1.0f; g = 1.0f; b = 0.5f; return true;
        case 0x28D0DCu: r = RF(gp - 0x7550u); g = r; b = RF(gp - 0x754Cu); return true;
        case 0x28D0ECu: r = 0.0f; g = 0.0f; b = 0.0f; return true;
        default: return false;
        }
    }

    // A character's lit gun: (chr+0x1A4's object, its flag), (chr+0x264's).
    struct GunState
    {
        uint32_t first, second; // the 0x124 & 1 flags
    };
    SL_INLINE GunState gunState(SL_ARGS, uint32_t chr)
    {
        GunState s{0u, 0u};
        const uint32_t a = READ32(chr + 0x1A4u);
        if (a != 0u)
            s.first = READ16(READ32(a + 0x20u) + 0x124u) & 1u;
        const uint32_t b = READ32(chr + 0x264u);
        if (b != 0u)
            s.second = READ16(READ32(b + 0x20u) + 0x124u) & 1u;
        return s;
    }

    // ---- bgBulletGetClosest (0x25bc88)
    //
    // bgBulletGetClosest(inst, pos, &strength): the light a bullet, the
    // character's own gun or a nearby explosion casts, as a record (colour
    // at +0xC, position at +0x18; the static one at 0x1FC5E00 or a bullet).
    // The fast path computes everything before it writes; false: nothing was
    // written and the previous implementation must run (the explosion search
    // on its frame in four, an unknown jump-table target, a NaN distance).

    bool bulletFast(SL_ARGS, uint32_t inst, uint32_t pos, uint32_t strength, uint32_t &result)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t def = READ32(inst + 0xF4u);
        const uint32_t room = READ32(def + 0xCu);
        if (room - 0xC9u < 4u)
        {
            // A character's object: its gun's glow while it fires.
            const uint32_t chr = characterOf(SL_PASS, gp, room);
            const GunState guns = gunState(SL_PASS, chr);
            const uint32_t gun = guns.first ? chr + 0x198u : (guns.second ? chr + 0x258u : 0u);
            if (gun != 0u)
            {
                const uint32_t type = gunBulletType(SL_PASS, gun);
                if (type != 0u)
                {
                    float r, g, b;
                    if (!bulletColour(SL_PASS, gp, type, r, g, b))
                        return false;
                    const uint32_t rec = 0x01FC5E00u;
                    WF(rec + 0xCu, r);
                    WF(rec + 0x10u, g);
                    WF(rec + 0x14u, b);
                    WF(rec + 0x18u, FPU_ADD_S(RF(gun + 0x10u), FPU_MUL_S(RF(chr + 0xE4u), 0.5f)));
                    WF(rec + 0x1Cu, FPU_ADD_S(RF(gun + 0x14u), FPU_MUL_S(RF(chr + 0xE8u), 0.5f)));
                    WF(rec + 0x20u, FPU_ADD_S(RF(gun + 0x18u), FPU_MUL_S(RF(chr + 0xECu), 0.5f)));
                    WF(strength, 1.0f);
                    result = rec;
                    return true;
                }
            }
        }

        // bulletGetClosest (0x28d100): the nearest of the 20 bullets.
        const float px = RF(pos), py = RF(pos + 4u), pz = RF(pos + 8u);
        const uint32_t bullets = READ32(gp - 0x46B8u);
        float best = RF(0x003B0000u - 0x5A0u);
        uint32_t nearest = 0u;
        for (uint32_t i = 0; i < 20u; ++i)
        {
            const uint32_t bullet = bullets + i * 0x114u;
            const uint32_t index = READ32(bullet) - 2u;
            if (index >= 0x11u)
                continue;
            const uint32_t target = READ32(0x003A8B60u + (index << 2));
            if (target == 0x28D1BCu)
                continue;
            if (target != 0x28D164u)
                return false;
            const float dx = FPU_SUB_S(RF(bullet + 0x18u), px);
            const float dy = FPU_SUB_S(RF(bullet + 0x1Cu), py);
            const float dz = FPU_SUB_S(RF(bullet + 0x20u), pz);
            const float d2 = FPU_ADD_S(FPU_ADD_S(FPU_MUL_S(dx, dx), FPU_MUL_S(dy, dy)), FPU_MUL_S(dz, dz));
            if (FPU_C_OLT_S(d2, best))
            {
                best = d2;
                nearest = bullet;
            }
        }
        uint32_t fcr31 = ctx->fcr31;
        float bulletStrength = 0.0f;
        if (nearest != 0u)
        {
            const float distance = FPU_SQRT_S(best);
            if (distance != distance)
                return false; // sqrtf's own path
            if (FPU_C_OLE_S(distance, 3.0f))
                bulletStrength = 1.0f;
            else
                bulletStrength = divS(1.0f, FPU_SUB_S(distance, 2.0f), fcr31);
        }

        uint32_t hash, frame;
        frameHash(SL_PASS, gp, inst, hash, frame);
        if ((hash & 3u) == (frame & 3u))
            return false; // the explosion search's frame

        // The explosion cached in the definition (+0x224 colour, +0x228 position).
        const uint32_t cached = READ32(def + 0x224u);
        if (cached == 0xFFFFFFFFu)
        {
            if (nearest != 0u)
                WF(strength, bulletStrength);
            ctx->fcr31 = fcr31;
            result = nearest;
            return true;
        }
        const float ex = RF(def + 0x228u), ey = RF(def + 0x22Cu), ez = RF(def + 0x230u);
        const float dx = FPU_SUB_S(px, ex), dy = FPU_SUB_S(py, ey), dz = FPU_SUB_S(pz, ez);
        const float cr = FPU_MUL_S(u8f(cached >> 24), RF(gp - 0x7CC4u));
        const float cg = FPU_MUL_S(u8f(cached >> 16), RF(gp - 0x7CC0u));
        const float cb = FPU_MUL_S(u8f(cached >> 8), RF(gp - 0x7CBCu));
        const float d2 = FPU_ADD_S(FPU_ADD_S(FPU_MUL_S(dx, dx), FPU_MUL_S(dy, dy)), FPU_MUL_S(dz, dz));
        const float distance = FPU_SQRT_S(d2);
        if (distance != distance)
            return false;
        const float half = FPU_MUL_S(distance, 0.5f);
        float glow = 1.0f;
        if (!FPU_C_OLE_S(half, 2.0f))
            glow = divS(1.0f, FPU_SUB_S(half, 1.0f), fcr31);
        ctx->fcr31 = fcr31;
        if (nearest != 0u)
        {
            WF(strength, bulletStrength);
            if (!FPU_C_OLT_S(bulletStrength, glow))
            {
                result = nearest;
                return true;
            }
        }
        const uint32_t rec = 0x01FC5E00u;
        WF(strength, glow);
        WF(rec + 0xCu, cr);
        WF(rec + 0x10u, cg);
        WF(rec + 0x14u, cb);
        WF(rec + 0x18u, ex);
        WF(rec + 0x1Cu, ey);
        WF(rec + 0x20u, ez);
        result = rec;
        return true;
    }

    void sweepBgBulletGetClosest(SL_ARGS)
    {
        uint32_t result;
        if (bulletFast(SL_PASS, GPR_U32(ctx, 4), GPR_U32(ctx, 5), GPR_U32(ctx, 6), result))
        {
            SET_GPR_U64(ctx, 2, sext32(result));
            ctx->pc = GPR_U32(ctx, 31);
            return;
        }
        s_prevBullet(SL_PASS);
    }

    // ---- obinstCalcAmbientLight (0x25aae0)
    //
    // obinstCalcAmbientLight(inst, out): the ambient colour. The colour the
    // floor under the object last gave (packed in def+0x21C) is reused on
    // three frames in four, for a child object (its parent's), and while the
    // object has not moved in x and z (outside lift rooms); otherwise the
    // floor is ray cast. Then a character's firing gun adds its glow and the
    // instance's fade blends towards its fade colour. The fast path is all
    // but the ray cast, computed before anything is written; false: nothing
    // was written and the previous implementation must run.

    bool ambientFast(SL_ARGS, uint32_t inst, uint32_t out)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t def = READ32(inst + 0xF4u);
        uint32_t hash, frame;
        frameHash(SL_PASS, gp, inst, hash, frame);
        uint32_t room = READ32(def + 0xCu);
        uint32_t last = def + 0x70u; // the position last frame
        const uint32_t type = READ32(def + 8u);
        bool isChar = false;
        uint32_t chr = 0u, posAddr = def + 0x30u;
        float px = 0.0f, pz = 0.0f;
        bool localPos = false;
        if (type == 0x800u)
        {
            const uint32_t parent = READ32(inst + 4u);
            px = FPU_ADD_S(RF(def + 0x30u), RF(parent + 0x30u));
            pz = FPU_ADD_S(RF(def + 0x38u), RF(parent + 0x38u));
            localPos = true;
        }
        else if (type == 8u)
        {
            const uint32_t owner = READ32(def + 0x164u);
            posAddr = owner != 0u ? owner + 0x98u : READ32(def + 0x160u) + 0xAF8u;
        }
        else if (room - 0xC9u < 4u)
        {
            chr = characterOf(SL_PASS, gp, room);
            isChar = true;
            posAddr = chr + 0x98u;
            last = chr + 0x158u;
            room = READ32(chr + 0x31Cu);
        }

        const uint32_t packedOwn = READ32(def + 0x21Cu);
        uint32_t packed;
        bool fromParent = false;
        if (packedOwn != 0xFFFFFFFFu && (hash & 3u) != (frame & 3u))
        {
            packed = packedOwn;
        }
        else
        {
            const uint32_t parentInst = READ32(def + 0xBCu);
            if (parentInst != 0u)
            {
                packed = READ32(READ32(parentInst + 0xF4u) + 0x21Cu);
                fromParent = true;
            }
            else
            {
                bool lift = false;
                const uint32_t rooms = READ32(gp - 0x4CCCu);
                if (rooms != 0u)
                    lift = READ32(rooms + room * 0x18u - 0x18u) - 1u < 3u;
                if (packedOwn == 0xFFFFFFFFu || lift)
                    return false;
                if (!localPos)
                {
                    px = RF(posAddr);
                    pz = RF(posAddr + 8u);
                }
                if (!FPU_C_EQ_S(px, RF(last)) || !FPU_C_EQ_S(RF(last + 8u), pz))
                    return false; // moved: the ray cast
                packed = packedOwn;
            }
        }
        float ox = FPU_MUL_S(u8f(packed), RF(gp - 0x7CDCu));
        float oy = FPU_MUL_S(u8f(packed >> 8), RF(gp - 0x7CD8u));
        float oz = FPU_MUL_S(u8f(packed >> 16), RF(gp - 0x7CD4u));

        if (isChar)
        {
            const GunState guns = gunState(SL_PASS, chr);
            uint32_t bulletType = 0u;
            if (guns.first)
                bulletType = gunBulletType(SL_PASS, chr + 0x198u);
            else if (guns.second)
                bulletType = gunBulletType(SL_PASS, chr + 0x258u);
            if (bulletType != 0u)
            {
                float r, g, b;
                if (!bulletColour(SL_PASS, gp, bulletType, r, g, b))
                    return false;
                const bool own = (guns.first && READ32(READ32(chr + 0x1A4u) + 0x20u) == inst) ||
                                 (guns.second && READ32(READ32(chr + 0x264u) + 0x20u) == inst);
                const float k = RF(gp - (own ? 0x7CD0u : 0x7CCCu));
                ox = FPU_ADD_S(ox, FPU_MUL_S(r, k));
                oy = FPU_ADD_S(oy, FPU_MUL_S(g, k));
                oz = FPU_ADD_S(oz, FPU_MUL_S(b, k));
                if (FPU_C_OLT_S(1.0f, ox))
                    ox = 1.0f;
                if (FPU_C_OLT_S(1.0f, oy))
                    oy = 1.0f;
                if (FPU_C_OLT_S(1.0f, oz))
                    oz = 1.0f;
            }
        }

        const float fade = RF(inst + 0x138u);
        if (FPU_C_OLT_S(0.0f, fade))
        {
            const float keep = FPU_SUB_S(1.0f, fade);
            const float k = RF(gp - 0x7CC8u);
            const float fr = FPU_CVT_S_W(static_cast<int32_t>(READ32(inst + 0x13Cu)));
            const float fg = FPU_CVT_S_W(static_cast<int32_t>(READ32(inst + 0x140u)));
            const float fb = FPU_CVT_S_W(static_cast<int32_t>(READ32(inst + 0x144u)));
            ox = FPU_ADD_S(FPU_MUL_S(ox, keep), FPU_MUL_S(FPU_MUL_S(fr, fade), k));
            oy = FPU_ADD_S(FPU_MUL_S(oy, keep), FPU_MUL_S(FPU_MUL_S(fg, fade), k));
            oz = FPU_ADD_S(FPU_MUL_S(oz, keep), FPU_MUL_S(FPU_MUL_S(fb, fade), k));
        }

        if (fromParent)
            WRITE32(def + 0x21Cu, packed);
        WF(out, ox);
        WF(out + 4u, oy);
        WF(out + 8u, oz);
        return true;
    }

    void sweepObinstCalcAmbientLight(SL_ARGS)
    {
        if (ambientFast(SL_PASS, GPR_U32(ctx, 4), GPR_U32(ctx, 5)))
        {
            ctx->pc = GPR_U32(ctx, 31);
            return;
        }
        s_prevAmbient(SL_PASS);
    }

    // ---- obInstLightUpdate (0x25c160)

    // matrixTransRotY's sine and cosine by angle bits (any instance whose
    // slot it is: sinf and cosf are pure functions of the angle).
    struct RotEntry
    {
        uint32_t angle, sine, cosine;
    };
    constexpr uint32_t kRotEntries = 256u;
    RotEntry s_rot[kRotEntries];

    SL_INLINE uint32_t rotSlot(uint32_t inst) { return ((inst >> 4) ^ (inst >> 12)) & (kRotEntries - 1u); }

    // The frame offsets of one of the two lights' terms.
    struct LightSlot
    {
        uint32_t record;  // frame: the record pointer bglightGet returned
        uint32_t prevOff; // the instance's light from last frame
        uint32_t posOff;  // its blended light position
        uint32_t colOff;  // its blended light colour
        uint32_t rateOff; // gp offset of the blend rate
        uint32_t resume;  // the original's pc after the sqrtf call
    };
    constexpr LightSlot kLight0{0x1F0u, 0x20u, 0x28u, 0x40u, 0x7CB4u, 0x25C78Cu};
    constexpr LightSlot kLight1{0x1F4u, 0x24u, 0x34u, 0x4Cu, 0x7CB0u, 0x25CA50u};

    // One light's direction (from the object) and colour; false: a guest
    // call unwound (only a NaN distance calls sqrtf).
    bool lightTerm(SL_ARGS, const LightSlot &slot, uint32_t frame, uint32_t obj, uint32_t gp, float px, float py,
                   float pz, uint32_t &fcr31, float dir[3], float col[3])
    {
        const uint32_t rec = READ32(frame + slot.record);
        const uint32_t light = READ32(rec);
        if (light == 0u)
        {
            dir[0] = 1.0f;
            dir[1] = 0.0f;
            dir[2] = 0.0f;
            col[0] = col[1] = col[2] = 0.0f;
            return true;
        }
        // Full strength within 3 units, then (20 - distance) / 17.
        const float d2 = RF(rec + 0x10u);
        float s;
        if (FPU_C_OLE_S(d2, 9.0f))
        {
            s = 1.0f;
        }
        else
        {
            float distance = FPU_SQRT_S(d2);
            if (distance != distance)
            {
                ctx->f[12] = d2;
                ctx->fcr31 = fcr31;
                if (!callSlot(SL_PASS, s_slotSqrtf, 0x2D8398u, slot.resume))
                    return false;
                distance = ctx->f[0];
                fcr31 = ctx->fcr31;
            }
            s = divS(FPU_SUB_S(20.0f, distance), 17.0f, fcr31);
        }
        const float inv256 = floatOf(0x3B800000u);
        s = FPU_MUL_S(s, inv256);
        s = FPU_MUL_S(s, FPU_MUL_S(u8f(READ8(light + 0x94u)), inv256));
        const float r = u8f(READ8(light + 0x8Fu));
        const float g = u8f(READ16(light + 0x8Eu));
        const float b = u8f(READ32(light + 0x8Cu) >> 8);
        const uint32_t P = obj + slot.posOff, C = obj + slot.colOff;
        float cr, cg, cb;
        if (READ32(obj + slot.prevOff) != 0u)
        {
            // Blend position and colour towards this light, direction from the position.
            const float rate = RF(gp - slot.rateOff);
            const float Px = RF(P), Py = RF(P + 4u), Pz = RF(P + 8u);
            const float Cr = RF(C), Cg = RF(C + 4u), Cb = RF(C + 8u);
            const float nx = FPU_ADD_S(Px, FPU_MUL_S(FPU_SUB_S(RF(light + 0x44u), Px), rate));
            const float ny = FPU_ADD_S(Py, FPU_MUL_S(FPU_SUB_S(RF(light + 0x48u), Py), rate));
            const float nz = FPU_ADD_S(Pz, FPU_MUL_S(FPU_SUB_S(RF(light + 0x4Cu), Pz), rate));
            cr = FPU_ADD_S(Cr, FPU_MUL_S(FPU_SUB_S(r, Cr), rate));
            cg = FPU_ADD_S(Cg, FPU_MUL_S(FPU_SUB_S(g, Cg), rate));
            cb = FPU_ADD_S(Cb, FPU_MUL_S(FPU_SUB_S(b, Cb), rate));
            WF(P, nx);
            WF(P + 4u, ny);
            WF(P + 8u, nz);
            WF(C, cr);
            WF(C + 4u, cg);
            WF(C + 8u, cb);
            dir[0] = FPU_SUB_S(nx, px);
            dir[1] = FPU_SUB_S(ny, py);
            dir[2] = FPU_SUB_S(nz, pz);
        }
        else
        {
            // No light yet: take this one's position and colour as they are.
            WRITE32(P, READ32(light + 0x44u));
            WRITE32(P + 4u, READ32(light + 0x48u));
            WRITE32(P + 8u, READ32(light + 0x4Cu));
            cr = r;
            cg = g;
            cb = b;
            WF(C, cr);
            WF(C + 4u, cg);
            WF(C + 8u, cb);
            dir[0] = RF(rec + 4u);
            dir[1] = RF(rec + 8u);
            dir[2] = RF(rec + 0xCu);
        }
        col[0] = FPU_MUL_S(cr, s);
        col[1] = FPU_MUL_S(cg, s);
        col[2] = FPU_MUL_S(cb, s);
        WRITE32(obj + slot.prevOff, light);
        return true;
    }

    SL_INLINE void writeTerm(SL_ARGS, uint32_t dirAddr, uint32_t colAddr, const float dir[3], const float col[3])
    {
        WF(dirAddr, dir[0]);
        WF(dirAddr + 4u, dir[1]);
        WF(dirAddr + 8u, dir[2]);
        WF(colAddr, col[0]);
        WF(colAddr + 4u, col[1]);
        WF(colAddr + 8u, col[2]);
    }

    void sweepObInstLightUpdate(SL_ARGS)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        if (READ32(gp - 0x6090u) == 0x66u)
        {
            // Level 0x66 lights its objects from a fixed table: the original.
            s_prevLight(SL_PASS);
            return;
        }

        // 0x25c160: the frame and the callee-saved registers saved into it
        // (the original's epilogue reads them if a callee unwinds).
        const uint32_t sp0 = GPR_U32(ctx, 29);
        const uint32_t frame = sp0 - 0x2C0u;
        const uint64_t savedS[8] = {GPR_U64(ctx, 16), GPR_U64(ctx, 17), GPR_U64(ctx, 18), GPR_U64(ctx, 19),
                                    GPR_U64(ctx, 20), GPR_U64(ctx, 21), GPR_U64(ctx, 22), GPR_U64(ctx, 23)};
        const uint64_t savedFp = GPR_U64(ctx, 30), savedRa = GPR_U64(ctx, 31);
        const float savedF[4] = {ctx->f[20], ctx->f[21], ctx->f[22], ctx->f[23]};
        WRITE64(frame + 0x280u, savedFp);
        WRITE64(frame + 0x290u, savedRa);
        for (uint32_t i = 0; i < 8u; ++i)
            WRITE64(frame + 0x200u + i * 0x10u, savedS[i]);
        WF(frame + 0x2A0u, savedF[0]);
        WF(frame + 0x2A8u, savedF[1]);
        WF(frame + 0x2B0u, savedF[2]);
        WF(frame + 0x2B8u, savedF[3]);

        const uint32_t obj = GPR_U32(ctx, 4);
        const uint32_t def = READ32(obj + 0xF4u);
        WRITE32(frame + 0x1FCu, 0u);
        const uint32_t type = READ32(def + 8u);
        const uint32_t room = READ32(def + 0xCu);
        WRITE32(frame + 0x1F0u, 0u);
        WRITE32(frame + 0x1F4u, 0u);

        // 0x25c5dc: the position the lights are measured from.
        uint32_t chr = 0u;
        bool isChar = false;
        float px, py, pz;
        if (type == 0x800u)
        {
            const uint32_t parent = READ32(obj + 4u);
            px = FPU_ADD_S(RF(def + 0x30u), RF(parent + 0x30u));
            py = FPU_ADD_S(RF(def + 0x34u), RF(parent + 0x34u));
            pz = FPU_ADD_S(RF(def + 0x38u), RF(parent + 0x38u));
        }
        else if (room - 0xC9u < 4u)
        {
            // A character's object, lit from the character's position.
            chr = characterOf(SL_PASS, gp, room);
            isChar = true;
            WRITE32(frame + 0x1FCu, 1u);
            px = RF(chr + 0x98u);
            py = RF(chr + 0x9Cu);
            pz = RF(chr + 0xA0u);
        }
        else
        {
            px = RF(def + 0x30u);
            py = RF(def + 0x34u);
            pz = RF(def + 0x38u);
        }
        if (type == 8u || type == 0x1000u || type == 0x800u)
            py = FPU_ADD_S(py, 1.0f); // one unit above
        const uint32_t pos = frame + 0x1A0u;
        WF(pos, px);
        WF(pos + 4u, py);
        WF(pos + 8u, pz);

        // The original's registers from here on: sp, fp (the character),
        // s5 (the instance), s6 (the definition), s0 (the position).
        SET_GPR_U64(ctx, 29, sext32(frame));
        SET_GPR_U64(ctx, 30, sext32(chr));
        SET_GPR_U64(ctx, 21, sext32(obj));
        SET_GPR_U64(ctx, 22, sext32(def));
        SET_GPR_U64(ctx, 16, sext32(pos));

        // bglightGet(inst, position, &first, &second).
        bglightCore(SL_PASS, obj, pos, frame + 0x1F0u, frame + 0x1F4u);

        // bgBulletGetClosest(inst, position, &strength).
        uint32_t flash;
        if (!bulletFast(SL_PASS, obj, pos, frame + 0x1F8u, flash))
        {
            SET_GPR_U64(ctx, 4, sext32(obj));
            SET_GPR_U64(ctx, 5, sext32(pos));
            SET_GPR_U64(ctx, 6, sext32(frame + 0x1F8u));
            if (!callEntry(SL_PASS, &s_prevBullet, 0x25BC88u, 0x25C6E4u))
                return;
            flash = GPR_U32(ctx, 2);
        }
        SET_GPR_U64(ctx, 16, sext32(flash)); // 0x25c6e4: s0 is the flash from here on

        // 0x25c6e4: keep the light the object already has first, if it is still one of the two.
        {
            uint32_t recA = READ32(frame + 0x1F0u);
            const uint32_t lightA = READ32(recA);
            if (lightA != 0u && lightA == READ32(obj + 0x24u))
            {
                const uint32_t recB = READ32(frame + 0x1F4u);
                WRITE32(frame + 0x1F4u, recA);
                WRITE32(frame + 0x1F0u, recB);
                recA = recB;
            }
            const uint32_t recB = READ32(frame + 0x1F4u);
            const uint32_t lightB = READ32(recB);
            if (lightB != 0u && lightB == READ32(obj + 0x20u))
            {
                WRITE32(frame + 0x1F4u, recA);
                WRITE32(frame + 0x1F0u, recB);
            }
        }

        uint32_t fcr31 = ctx->fcr31;
        float dirA[3], colA[3], dirB[3], colB[3], dirC[3], colC[3];
        if (!lightTerm(SL_PASS, kLight0, frame, obj, gp, px, py, pz, fcr31, dirA, colA))
            return;
        writeTerm(SL_PASS, frame + 0x30u, frame + 0x60u, dirA, colA);
        if (!lightTerm(SL_PASS, kLight1, frame, obj, gp, px, py, pz, fcr31, dirB, colB))
            return;
        writeTerm(SL_PASS, frame + 0x40u, frame + 0x70u, dirB, colB);

        // 0x25ccbc: the bullet flash, direction from its position, colour by its strength.
        if (flash != 0u)
        {
            dirC[0] = FPU_SUB_S(RF(flash + 0x18u), px);
            dirC[1] = FPU_SUB_S(RF(flash + 0x1Cu), py);
            dirC[2] = FPU_SUB_S(RF(flash + 0x20u), pz);
            const float strength = RF(frame + 0x1F8u);
            colC[0] = FPU_MUL_S(RF(flash + 0xCu), strength);
            colC[1] = FPU_MUL_S(RF(flash + 0x10u), strength);
            colC[2] = FPU_MUL_S(RF(flash + 0x14u), strength);
        }
        else
        {
            dirC[0] = 1.0f;
            dirC[1] = dirC[2] = 0.0f;
            colC[0] = colC[1] = colC[2] = 0.0f;
        }
        writeTerm(SL_PASS, frame + 0x50u, frame + 0x80u, dirC, colC);

        // 0x25cd3c: obinstCalcAmbientLight(inst, &ambient).
        const uint32_t ambient = frame + 0x90u;
        ctx->fcr31 = fcr31;
        if (!ambientFast(SL_PASS, obj, ambient))
        {
            SET_GPR_U64(ctx, 4, sext32(obj));
            SET_GPR_U64(ctx, 5, sext32(ambient));
            if (!callEntry(SL_PASS, &s_prevAmbient, 0x25AAE0u, 0x25CD48u))
                return;
            fcr31 = ctx->fcr31;
        }

        // 0x25cd48: the three directions' lengths. A NaN (sqrtf's own path)
        // hands the rest to the original here: nothing after this point has
        // been written yet.
        const float lenA = FPU_SQRT_S(FPU_ADD_S(FPU_ADD_S(FPU_MUL_S(dirA[0], dirA[0]), FPU_MUL_S(dirA[1], dirA[1])),
                                                FPU_MUL_S(dirA[2], dirA[2])));
        const float lenB = FPU_SQRT_S(FPU_ADD_S(FPU_ADD_S(FPU_MUL_S(dirB[0], dirB[0]), FPU_MUL_S(dirB[1], dirB[1])),
                                                FPU_MUL_S(dirB[2], dirB[2])));
        const float lenC = FPU_SQRT_S(FPU_ADD_S(FPU_ADD_S(FPU_MUL_S(dirC[0], dirC[0]), FPU_MUL_S(dirC[1], dirC[1])),
                                                FPU_MUL_S(dirC[2], dirC[2])));
        if (lenA != lenA || lenB != lenB || lenC != lenC)
        {
            SET_GPR_U32(ctx, 31, 0x25CD48u);
            ctx->fcr31 = fcr31;
            ctx->pc = 0x25CD48u;
            s_resumeAfterAmbient(SL_PASS);
            return;
        }
        float n[9];
        {
            const float ia = divS(1.0f, lenA, fcr31);
            const float ib = divS(1.0f, lenB, fcr31);
            const float ic = divS(1.0f, lenC, fcr31);
            for (int k = 0; k < 3; ++k)
            {
                n[k] = FPU_MUL_S(dirA[k], ia);
                n[3 + k] = FPU_MUL_S(dirB[k], ib);
                n[6 + k] = FPU_MUL_S(dirC[k], ic);
            }
        }

        // 0x25ce7c: matrixTransRotY(R, position, yaw in radians): the unit
        // matrix with (cos, 0, -sin), (sin, 0, cos) and the translation.
        const float defX = RF(def + 0x30u), defY = RF(def + 0x34u), defZ = RF(def + 0x38u);
        const float angle = divS(FPU_MUL_S(RF(def + 0x4Cu), RF(gp - 0x7CACu)), 180.0f, fcr31);
        const uint32_t angleBits = bitsOf(angle);
        RotEntry &entry = s_rot[rotSlot(obj)];
        __m128 R[4];
        if (entry.angle == angleBits)
        {
            const float sine = floatOf(entry.sine), cosine = floatOf(entry.cosine);
            const float negSine = floatOf(entry.sine ^ 0x80000000u); // neg.s
            R[0] = _mm_setr_ps(cosine, 0.0f, negSine, 0.0f);
            R[1] = _mm_setr_ps(0.0f, 1.0f, 0.0f, 0.0f);
            R[2] = _mm_setr_ps(sine, 0.0f, cosine, 0.0f);
            R[3] = _mm_setr_ps(defX, defY, defZ, 1.0f);
        }
        else
        {
            // The original's call, with its state: the normalised directions
            // in the frame, s7 = a0 = the matrix, f12-f15, f20 = 1.
            for (int k = 0; k < 3; ++k)
            {
                WF(frame + 0x30u + 4u * k, n[k]);
                WF(frame + 0x40u + 4u * k, n[3 + k]);
                WF(frame + 0x50u + 4u * k, n[6 + k]);
            }
            const uint32_t matrix = frame + 0xA0u;
            SET_GPR_U64(ctx, 23, sext32(matrix));
            SET_GPR_U64(ctx, 4, sext32(matrix));
            ctx->f[12] = defX;
            ctx->f[13] = defY;
            ctx->f[14] = defZ;
            ctx->f[15] = angle;
            ctx->f[20] = 1.0f;
            ctx->fcr31 = fcr31;
            if (!callSlot(SL_PASS, s_slotTransRotY, 0x2B4C50u, 0x25CEE4u))
                return;
            fcr31 = ctx->fcr31;
            for (uint32_t c = 0; c < 4u; ++c)
                R[c] = load4(SL_PASS, matrix + c * 16u);
            if (std::isfinite(angle))
                entry = {angleBits, READ32(matrix + 0x20u), READ32(matrix)};
        }

        // The left factor: R, or the character's matrix times R (the
        // original multiplies them again for every matrix: the same value).
        __m128 L[4];
        if (isChar)
        {
            const uint32_t chrMatrix = READ32(chr + 0x6ECu);
            __m128 C[4];
            for (uint32_t c = 0; c < 4u; ++c)
                C[c] = load4(SL_PASS, chrMatrix + c * 16u);
            for (uint32_t c = 0; c < 4u; ++c)
                L[c] = mulColumn(C, R[c]);
        }
        else
        {
            for (uint32_t c = 0; c < 4u; ++c)
                L[c] = R[c];
        }

        // 0x25cee4: one pass per matrix of the model (at least one). Each
        // writes the three directions rotated into the matrix's space as the
        // rows of a 0x40-byte block (w = 0), then (0, 0, 0, 1). Row r, lane j
        // is matrixVecRotAligned's lane r for direction j on the transposed
        // S = L * M: (S.c_r.x * d.x + S.c_r.y * d.y) + S.c_r.z * d.z.
        int32_t count = static_cast<int32_t>(READ32(READ32(obj) + 4u));
        if (count <= 0)
            count = 1;
        const __m128 dx = _mm_setr_ps(n[0], n[3], n[6], 0.0f);
        const __m128 dy = _mm_setr_ps(n[1], n[4], n[7], 0.0f);
        const __m128 dz = _mm_setr_ps(n[2], n[5], n[8], 0.0f);
        const __m128 keepXYZ = _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1));
        const __m128 lastRow = _mm_setr_ps(0.0f, 0.0f, 0.0f, 1.0f);
        uint32_t offset = 0u;
        for (int32_t i = 0; i < count; ++i, offset += 0x40u)
        {
            const uint32_t matrices = READ32(obj + 4u);
            __m128 row[3];
            if (matrices != 0u)
            {
                const uint32_t m = matrices + offset;
                for (uint32_t r = 0; r < 3u; ++r)
                {
                    const __m128 s = mulColumn(L, load4(SL_PASS, m + r * 16u));
                    __m128 v = PS2_VMUL(lane(s, 0), dx);
                    v = PS2_VADD(v, PS2_VMUL(lane(s, 1), dy));
                    v = PS2_VADD(v, PS2_VMUL(lane(s, 2), dz));
                    row[r] = _mm_and_ps(v, keepXYZ);
                }
            }
            else
            {
                row[0] = dx;
                row[1] = dy;
                row[2] = dz;
            }
            const uint32_t block = READ32(obj + 0x18u) + offset;
            store4(SL_PASS, block, row[0]);
            store4(SL_PASS, block + 16u, row[1]);
            store4(SL_PASS, block + 32u, row[2]);
            store4(SL_PASS, block + 48u, lastRow);
        }

        // 0x25d090: the colours: first, second and bullet light, then the
        // ambient one, each (r, g, b, 0) but the last (r, g, b, 1).
        const uint32_t colours = READ32(obj + 0x1Cu);
        const float ar = RF(ambient), ag = RF(ambient + 4u), ab = RF(ambient + 8u);
        store4(SL_PASS, colours, _mm_setr_ps(colA[0], colA[1], colA[2], 0.0f));
        store4(SL_PASS, colours + 16u, _mm_setr_ps(colB[0], colB[1], colB[2], 0.0f));
        store4(SL_PASS, colours + 32u, _mm_setr_ps(colC[0], colC[1], colC[2], 0.0f));
        store4(SL_PASS, colours + 48u, _mm_setr_ps(ar, ag, ab, 1.0f));

        // 0x25d144: the epilogue (the caller's registers back, the values the
        // original leaves in v0, at, f0 and f1).
        for (uint32_t i = 0; i < 8u; ++i)
            SET_GPR_U64(ctx, 16 + i, savedS[i]);
        SET_GPR_U64(ctx, 30, savedFp);
        SET_GPR_U64(ctx, 31, savedRa);
        ctx->f[20] = savedF[0];
        ctx->f[21] = savedF[1];
        ctx->f[22] = savedF[2];
        ctx->f[23] = savedF[3];
        SET_GPR_U64(ctx, 2, sext32(colours + 0x38u));
        SET_GPR_U64(ctx, 1, 0x3F800000u);
        ctx->f[0] = ab;
        ctx->f[1] = 1.0f;
        ctx->fcr31 = fcr31 | 0x800000u;
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(sp0));
        ctx->pc = static_cast<uint32_t>(savedRa);
    }

    uint32_t slotOf(uint32_t address)
    {
        const uint32_t *first = g_ps2RecompiledFunctionAddresses;
        const uint32_t *last = first + g_ps2RecompiledFunctionTableSlotCount;
        const uint32_t *found = std::lower_bound(first, last, address);
        if (found == last || *found != address || g_ps2RecompiledFunctionTable[found - first] == nullptr)
            return UINT32_MAX;
        return static_cast<uint32_t>(found - first);
    }
} // namespace

void registerSweepLight(PS2Runtime &runtime)
{
    s_prevLight = runtime.lookupFunction(0x25C160u);
    s_prevAmbient = runtime.lookupFunction(0x25AAE0u);
    s_prevBullet = runtime.lookupFunction(0x25BC88u);
    s_resumeAfterAmbient = runtime.lookupFunction(0x25CD48u);
    s_slotSqrtf = slotOf(0x2D8398u);
    s_slotTransRotY = slotOf(0x2B4C50u);
    for (RotEntry &e : s_rot)
        e = {0x7FC00001u, 0u, 0u}; // a NaN: never a cached angle
    runtime.replaceFunction(0x25A7D0u, &sweepBglightGet);
    runtime.replaceFunction(0x25BC88u, &sweepBgBulletGetClosest);
    runtime.replaceFunction(0x25AAE0u, &sweepObinstCalcAmbientLight);
    runtime.replaceFunction(0x25C160u, &sweepObInstLightUpdate);
}

#else
void registerSweepLight(PS2Runtime &) {}
#endif
