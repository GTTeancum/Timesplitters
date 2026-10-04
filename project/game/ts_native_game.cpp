// Native versions of a third batch of the game's hot routines (Xbox only):
// the matrix, portal, movement, animation and display-list helpers that
// take most of a match frame's remaining game-code time after the math and
// soft-double batches (ts_native_math.cpp, ts_native_fp.cpp).
//
// Each one is a transcription of the translated instructions, in their
// order, with the recompiler's semantics (32-bit results sign-extended,
// 64-bit compares, movz copying the whole 128-bit register, the FPU macros
// for every float operation so results are bit-identical), and leaves the
// state the original leaves: every register it writes, the memory it
// writes (stack frames included), pc = $ra.
//
// Calls go through the function table like the original's (the same
// 8-cycle checkpoint charge, through dispatchGuestBranch): before each call
// every register the original holds is stored, so a callee that unwinds to
// the scheduler leaves this function the same way, and the original resumes
// at the return address from those registers (the function table keeps the
// original under every resume address). After each call the registers are
// read back from the context, whatever the callee did to them. Loop
// back-edges keep the original's scheduler checkpoint: when it comes due
// the state is stored and pc is the loop head, where the original resumes.
//
// __ieee754_acosf's two square roots are a transcription of
// __ieee754_sqrtf inlined (the one callee of a leaf-like routine: no charge).
// calDoubleFillets' self-call is a host recursion; the translation makes it
// a goto and bounces each return through the scheduler.
//
// TS_NATIVE_MATH_SELFTEST: at boot each function runs against its original
// on the same random inputs (ts_native_selftest.h), laid out as the game
// lays out its structures; one that differs is put back to the original.
#include "ts_native_game.h"

#if defined(PLATFORM_XBOX)
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_recompiled_functions.h"
#include "runtime/ee_scheduler.h"
#include "ts_native_math.h"
#include "ts_native_selftest.h"

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

#define TS_INL inline __attribute__((always_inline))
#define G_ARGS uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime
#define G_PASS rdram, ctx, runtime

    // ---- The recompiler's integer semantics

    TS_INL uint32_t lo32(uint64_t v) { return static_cast<uint32_t>(v); }
    TS_INL uint64_t sext32(uint32_t v) { return static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(v))); }
    TS_INL uint64_t addiu(uint64_t rs, int32_t imm) { return sext32(lo32(rs) + static_cast<uint32_t>(imm)); }
    TS_INL uint64_t addu(uint64_t a, uint64_t b) { return sext32(lo32(a) + lo32(b)); }
    TS_INL uint64_t subu(uint64_t a, uint64_t b) { return sext32(lo32(a) - lo32(b)); }
    TS_INL uint64_t slt(uint64_t a, uint64_t b) { return static_cast<int64_t>(a) < static_cast<int64_t>(b) ? 1u : 0u; }
    TS_INL uint64_t sltu(uint64_t a, uint64_t b) { return a < b ? 1u : 0u; }
    TS_INL uint64_t slti(uint64_t a, int32_t imm) { return static_cast<int64_t>(a) < static_cast<int64_t>(imm) ? 1u : 0u; }
    TS_INL uint64_t sll32(uint64_t a, uint32_t sa) { return sext32(lo32(a) << sa); }
    TS_INL uint64_t sra32(uint64_t a, uint32_t sa) { return sext32(static_cast<uint32_t>(static_cast<int32_t>(lo32(a)) >> sa)); }
    TS_INL bool neg64(uint64_t a) { return static_cast<int64_t>(a) < 0; }
    TS_INL bool lez64(uint64_t a) { return static_cast<int64_t>(a) <= 0; }

    // mult rd, rs, rt: the 64-bit product in HI/LO, its low word in rd.
    TS_INL uint64_t mult(uint64_t rs, uint64_t rt, uint64_t &lo, uint64_t &hi)
    {
        const int64_t result = static_cast<int64_t>(static_cast<int32_t>(lo32(rs))) * static_cast<int32_t>(lo32(rt));
        lo = sext32(static_cast<uint32_t>(result));
        hi = sext32(static_cast<uint32_t>(static_cast<uint64_t>(result) >> 32));
        return lo;
    }

    // Loads as the recompiled code forms them.
#define LW(addr) sext32(READ32(addr))
#define LBU(addr) static_cast<uint64_t>(READ8(addr))
#define LB(addr) sext32(static_cast<uint32_t>(static_cast<int32_t>(static_cast<int8_t>(READ8(addr)))))
#define LHU(addr) static_cast<uint64_t>(READ16(addr))
#define LH(addr) sext32(static_cast<uint32_t>(static_cast<int32_t>(static_cast<int16_t>(READ16(addr)))))

    // Inline only: a float returned from a call travels through the x87,
    // which would quiet a signalling NaN that lwc1/swc1/mtc1 copy as is.
    TS_INL uint32_t bitsOf(float value)
    {
        uint32_t bits;
        std::memcpy(&bits, &value, sizeof(bits));
        return bits;
    }

    TS_INL float floatOf(uint32_t bits)
    {
        float value;
        std::memcpy(&value, &bits, sizeof(value));
        return value;
    }

#define LWC1(addr) floatOf(READ32(addr))
#define SWC1(addr, f) WRITE32(addr, bitsOf(f))

    // The recompiled div.s: a zero divisor raises DZ and gives the infinity
    // whose sign is that of (numerator * 0).
    TS_INL float divS(float a, float b, uint32_t &fcr31)
    {
        if (b == 0.0f)
        {
            fcr31 |= 0x100000u;
            return copysignf(INFINITY, a * 0.0f);
        }
        return a / b;
    }

    constexpr uint32_t kCondition = 0x800000u;

    TS_INL uint32_t conditionBit(uint32_t fcr31, bool set) { return set ? (fcr31 | kCondition) : (fcr31 & ~kCondition); }

    // movz/movn copy the whole 128-bit register: the upper half of the
    // destination becomes the source's. The upper halves change through
    // nothing else here (the 32- and 64-bit stores leave them), so the copy
    // goes straight to the context.
    TS_INL void copyHigh(R5900Context *ctx, int dst, int src)
    {
        std::memcpy(reinterpret_cast<uint8_t *>(&ctx->r[dst]) + 8, reinterpret_cast<const uint8_t *>(&ctx->r[src]) + 8, 8);
    }

    TS_INL void zeroHigh(R5900Context *ctx, int dst)
    {
        std::memset(reinterpret_cast<uint8_t *>(&ctx->r[dst]) + 8, 0, 8);
    }

    // A guest call through the function table, as the translation makes it
    // (the dispatcher's checkpoint charge included). false: the callee did
    // not return to `next`; the caller's state is in the context and the
    // native function returns at once.
    TS_INL bool guestCall(G_ARGS, uint32_t target, uint32_t source, uint32_t next)
    {
        SET_GPR_U32(ctx, 31, next);
        return runtime->dispatchGuestBranch(rdram, ctx, target, source, next, PS2Runtime::GuestBranchKind::DirectCall,
                                            "JAL");
    }

    // A loop back-edge's scheduler checkpoint: pc is the loop head, where
    // the original resumes if the checkpoint is due (the state is stored).
    TS_INL bool loopCheckpoint(R5900Context *ctx, PS2Runtime *runtime, uint32_t head)
    {
        ctx->pc = head;
        return runtime->eeCheckpointDue();
    }

    TS_INL void returnToCaller(R5900Context *ctx) { ctx->pc = GPR_U32(ctx, 31); }

#define LOAD_GPR(field, n) r.field = GPR_U64(ctx, n)
#define STORE_GPR(field, n) SET_GPR_U64(ctx, n, r.field)
#define LOAD_F(n) r.f##n = ctx->f[n]
#define STORE_F(n) ctx->f[n] = r.f##n

    // ---- matrixScaleSet (0x2b4f20)
    //
    // matrixScaleSet(m, x, y, z): the unit matrix (sceVu0UnitMatrix, a
    // native) with the scales on its diagonal.

    void nativeMatrixScaleSet(G_ARGS)
    {
        const uint32_t sp = GPR_U32(ctx, 29) - 0x40u;
        WRITE64(sp, GPR_U64(ctx, 16));
        const uint64_t s0 = GPR_U64(ctx, 4);
        SWC1(sp + 0x30u, ctx->f[22]);
        SWC1(sp + 0x28u, ctx->f[21]);
        ctx->f[22] = FPU_MOV_S(ctx->f[13]);
        SWC1(sp + 0x20u, ctx->f[20]);
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        WRITE64(sp + 0x10u, GPR_U64(ctx, 31));
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(sp));
        SET_GPR_U64(ctx, 16, s0);
        if (!guestCall(G_PASS, 0x2D6188u, 0x2B4F44u, 0x2B4F4Cu))
            return;
        // 0x2b4f4c
        const uint32_t m = GPR_U32(ctx, 16), frame = GPR_U32(ctx, 29);
        SWC1(m + 0x28u, ctx->f[20]);
        SWC1(m, ctx->f[21]);
        SWC1(m + 0x14u, ctx->f[22]);
        SET_GPR_U64(ctx, 31, READ64(frame + 0x10u));
        SET_GPR_U64(ctx, 16, READ64(frame));
        ctx->f[22] = LWC1(frame + 0x30u);
        ctx->f[21] = LWC1(frame + 0x28u);
        ctx->f[20] = LWC1(frame + 0x20u);
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(frame + 0x40u));
        returnToCaller(ctx);
    }

    // ---- extractAnimData (0x215280)
    //
    // extractAnimData(obj, anim, channel, frame, out, scale): the seven
    // floats (a position and a quaternion) of one channel's frame, from the
    // channel's data in its own format (type 2: a shared position and
    // per-frame rotations; 4: per-frame positions and a shared rotation;
    // 8: per-frame records; 0: one record), then the position scaled when
    // the object is in a certain state and the channel is the root.

    void nativeExtractAnimData(G_ARGS)
    {
        uint64_t v0 = GPR_U64(ctx, 2), v1, a0 = GPR_U64(ctx, 4), a1 = GPR_U64(ctx, 5);
        const uint64_t a2 = GPR_U64(ctx, 6), a3 = GPR_U64(ctx, 7);
        uint64_t t1;
        float f0 = ctx->f[0], f1 = ctx->f[1], f2 = ctx->f[2], f12 = ctx->f[12];
        const uint32_t out = GPR_U32(ctx, 8), gp = GPR_U32(ctx, 28);

        v1 = LW(lo32(a1) + 0x20u);
        v0 = sll32(a2, 5);
        a1 = addu(v1, v0);
        v1 = LW(lo32(a1) + 4u);
        v0 = 2u;
        t1 = a0;
        const uint32_t channel = lo32(a1), object = lo32(t1);
        // Seven floats copied from a record (loads and stores interleaved: the output may overlap).
        auto copyRecord = [&](uint32_t src) {
            f0 = LWC1(src);
            SWC1(out, f0);
            f1 = LWC1(src + 4u);
            SWC1(out + 4u, f1);
            f0 = LWC1(src + 8u);
            SWC1(out + 8u, f0);
            f1 = LWC1(src + 0xCu);
            SWC1(out + 0xCu, f1);
            f0 = LWC1(src + 0x10u);
            SWC1(out + 0x10u, f0);
            f1 = LWC1(src + 0x14u);
            SWC1(out + 0x14u, f1);
            f0 = LWC1(src + 0x18u);
            SWC1(out + 0x18u, f0);
        };
        if (v1 == v0)
        {
            // 0x2152d0: type 2
            v0 = LW(channel + 0x14u);
            v1 = sll32(a3, 4);
            const uint32_t shared = lo32(v0);
            f1 = LWC1(shared);
            v1 = addu(v1, v0);
            const uint32_t rotation = lo32(v1);
            SWC1(out, f1);
            f0 = LWC1(shared + 4u);
            SWC1(out + 4u, f0);
            f1 = LWC1(shared + 8u);
            SWC1(out + 8u, f1);
            f0 = LWC1(rotation + 0xCu);
            SWC1(out + 0xCu, f0);
            f1 = LWC1(rotation + 0x10u);
            SWC1(out + 0x10u, f1);
            f0 = LWC1(rotation + 0x14u);
            SWC1(out + 0x14u, f0);
            f1 = LWC1(rotation + 0x18u);
            SWC1(out + 0x18u, f1);
            v0 = LW(object + 0x58u);
        }
        else
        {
            v0 = slti(v1, 3);
            if (v0 == 0u)
            {
                v0 = 4u;
                const bool type4 = v1 == v0;
                v0 = 8u;
                if (type4)
                {
                    // 0x215318: per-frame positions before a shared rotation.
                    a0 = addiu(a3, -1);
                    if (a3 != 0u)
                    {
                        a1 = LW(channel + 0x14u);
                        v0 = sll32(a0, 1);
                        v0 = addu(v0, a0);
                        v1 = sll32(v0, 2);
                        v1 = addu(v1, a1);
                        const uint32_t position = lo32(v1), shared = lo32(a1);
                        f0 = LWC1(position + 0x1Cu);
                        SWC1(out, f0);
                        f1 = LWC1(position + 0x20u);
                        SWC1(out + 4u, f1);
                        f0 = LWC1(position + 0x24u);
                        SWC1(out + 8u, f0);
                        f1 = LWC1(shared + 0xCu);
                        SWC1(out + 0xCu, f1);
                        f0 = LWC1(shared + 0x10u);
                        SWC1(out + 0x10u, f0);
                        f1 = LWC1(shared + 0x14u);
                        SWC1(out + 0x14u, f1);
                        f0 = LWC1(shared + 0x18u);
                        SWC1(out + 0x18u, f0);
                    }
                    else
                    {
                        v0 = LW(channel + 0x14u);
                        copyRecord(lo32(v0));
                    }
                    v0 = LW(object + 0x58u);
                }
                else
                {
                    const bool type8 = v1 == v0;
                    v1 = sll32(a3, 3);
                    if (type8)
                    {
                        // 0x215374: record `frame` of 28 bytes.
                        a0 = LW(channel + 0x14u);
                        v0 = subu(v1, a3);
                        v0 = sll32(v0, 2);
                        v0 = addu(v0, a0);
                        copyRecord(lo32(v0));
                    }
                    v0 = LW(object + 0x58u);
                }
            }
            else
            {
                v0 = 4u;
                if (v1 == 0u)
                {
                    v0 = LW(channel + 0x14u);
                    copyRecord(lo32(v0));
                }
                v0 = LW(object + 0x58u);
            }
        }
        // 0x2153c0: the root channel's position is scaled for a mounted object.
        bool scaled = false;
        if (v0 != 0u)
        {
            v1 = LW(lo32(v0) + 0xCu);
            v0 = 1u;
            if (v1 == v0)
            {
                v0 = LW(object + 0x60u);
                v0 = slti(v0, 0x236);
                scaled = v0 != 0u || !(static_cast<int64_t>(a2) > 0);
            }
        }
        if (scaled)
        {
            f0 = LWC1(gp - 0x7FB8u);
            f12 = FPU_MUL_S(f12, f0);
        }
        f0 = LWC1(out);
        f1 = LWC1(out + 4u);
        f2 = LWC1(out + 8u);
        f0 = FPU_MUL_S(f0, f12);
        f1 = FPU_MUL_S(f1, f12);
        f2 = FPU_MUL_S(f2, f12);
        SWC1(out, f0);
        SWC1(out + 4u, f1);
        SWC1(out + 8u, f2);
        SET_GPR_U64(ctx, 2, v0);
        SET_GPR_U64(ctx, 3, v1);
        SET_GPR_U64(ctx, 4, a0);
        SET_GPR_U64(ctx, 5, a1);
        SET_GPR_U64(ctx, 9, t1);
        ctx->f[0] = f0;
        ctx->f[1] = f1;
        ctx->f[2] = f2;
        ctx->f[12] = f12;
        returnToCaller(ctx);
    }

    // ---- hittestLinePoly (0x209b08)
    //
    // hittestLinePoly(p, dir, vertices, indices, count, normal, hit,
    // hitNormal): the intersection of the segment p + t*dir with a convex
    // polygon (vertices indexed by bytes), 1 and the hit point and the
    // polygon's normal when it is inside every edge, else 0. The point is
    // kept on a 0x50-byte frame; a leaf.

    struct LinePolyRegs
    {
        uint64_t v0, v1, a0, a1, a2, t4, t5, t6, sp, lo, hi;
        float f0, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15;
        uint32_t fcr31;
    };

    TS_INL void storeLinePoly(const LinePolyRegs &r, R5900Context *ctx)
    {
        STORE_GPR(v0, 2);
        STORE_GPR(v1, 3);
        STORE_GPR(a0, 4);
        STORE_GPR(a1, 5);
        STORE_GPR(a2, 6);
        STORE_GPR(t4, 12);
        STORE_GPR(t5, 13);
        STORE_GPR(t6, 14);
        STORE_GPR(sp, 29);
        ctx->lo = r.lo;
        ctx->hi = r.hi;
        STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7);
        STORE_F(8); STORE_F(9); STORE_F(10); STORE_F(11); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15);
        ctx->fcr31 = r.fcr31;
    }

    void nativeHittestLinePoly(G_ARGS)
    {
        LinePolyRegs r;
        LOAD_GPR(v0, 2);
        LOAD_GPR(v1, 3);
        LOAD_GPR(a0, 4);
        LOAD_GPR(a1, 5);
        LOAD_GPR(a2, 6);
        LOAD_GPR(t4, 12);
        LOAD_GPR(t5, 13);
        LOAD_GPR(t6, 14);
        r.lo = ctx->lo;
        r.hi = ctx->hi;
        LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7);
        LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(13); LOAD_F(14); LOAD_F(15);
        r.fcr31 = ctx->fcr31;
        const uint64_t a3 = GPR_U64(ctx, 7), t0 = GPR_U64(ctx, 8), t2 = GPR_U64(ctx, 10), t3 = GPR_U64(ctx, 11);
        const uint32_t p = lo32(r.a0), dir = lo32(r.a1), normal = GPR_U32(ctx, 9), indices = lo32(a3);
        const uint32_t entrySp = GPR_U32(ctx, 29), sp = entrySp - 0x50u;
        r.sp = sext32(sp);

        r.f7 = LWC1(normal);
        r.f13 = LWC1(dir);
        r.t6 = r.a2;
        r.f6 = LWC1(normal + 4u);
        r.f10 = LWC1(dir + 4u);
        r.f0 = FPU_MUL_S(r.f7, r.f13);
        r.f14 = LWC1(dir + 8u);
        r.f2 = FPU_MUL_S(r.f6, r.f10);
        r.f5 = LWC1(normal + 8u);
        r.f15 = floatOf(0u);
        r.f1 = FPU_MUL_S(r.f5, r.f14);
        r.f0 = FPU_ADD_S(r.f0, r.f2);
        r.f8 = FPU_ADD_S(r.f0, r.f1);
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f15, r.f8));
        r.v0 = 0u;
        if ((r.fcr31 & kCondition) == 0u)
        {
            // The segment points into the plane: where it meets it.
            r.v0 = LBU(indices);
            r.t5 = 0xCu;
            r.f12 = LWC1(p);
            r.v0 = mult(r.v0, r.t5, r.lo, r.hi);
            r.f11 = LWC1(p + 4u);
            r.f3 = FPU_MUL_S(r.f7, r.f12);
            r.f9 = LWC1(p + 8u);
            r.f1 = FPU_MUL_S(r.f6, r.f11);
            r.f4 = FPU_MUL_S(r.f5, r.f9);
            r.a2 = addu(r.t6, r.v0);
            const uint32_t first = lo32(r.a2);
            r.f0 = LWC1(first);
            r.f3 = FPU_ADD_S(r.f3, r.f1);
            r.f2 = LWC1(first + 4u);
            r.f0 = FPU_MUL_S(r.f7, r.f0);
            r.f1 = LWC1(first + 8u);
            r.f2 = FPU_MUL_S(r.f6, r.f2);
            r.f1 = FPU_MUL_S(r.f5, r.f1);
            r.f3 = FPU_ADD_S(r.f3, r.f4);
            r.f0 = FPU_ADD_S(r.f0, r.f2);
            r.f0 = FPU_ADD_S(r.f0, r.f1);
            r.f0 = FPU_SUB_S(r.f0, r.f3);
            r.f0 = divS(r.f0, r.f8, r.fcr31);
            r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f15));
            if ((r.fcr31 & kCondition) == 0u)
            {
                r.f1 = FPU_MUL_S(r.f0, r.f14);
                // 0x209bc8: the hit point, and the first edge's cross product with it.
                r.a1 = addu(r.t6, r.v0);
                r.f2 = FPU_MUL_S(r.f0, r.f13);
                r.v1 = addu(t0, a3);
                r.f0 = FPU_MUL_S(r.f0, r.f10);
                r.t4 = 1u;
                r.f10 = FPU_ADD_S(r.f9, r.f1);
                r.a0 = slt(r.t4, t0);
                r.f8 = FPU_ADD_S(r.f12, r.f2);
                r.f9 = FPU_ADD_S(r.f11, r.f0);
                SWC1(sp + 0x28u, r.f10);
                SWC1(sp + 0x20u, r.f8);
                SWC1(sp + 0x24u, r.f9);
                r.v0 = LBU(lo32(r.v1) - 1u);
                const uint32_t current = lo32(r.a1);
                r.f6 = LWC1(current);
                r.v1 = mult(r.v0, r.t5, r.lo, r.hi);
                r.a2 = addu(r.v1, r.t6);
                const uint32_t previous = lo32(r.a2);
                r.f0 = LWC1(previous);
                r.f6 = FPU_SUB_S(r.f6, r.f0);
                SWC1(sp, r.f6);
                r.f0 = LWC1(previous + 4u);
                r.f5 = LWC1(current + 4u);
                r.f5 = FPU_SUB_S(r.f5, r.f0);
                SWC1(sp + 4u, r.f5);
                r.f0 = LWC1(previous + 8u);
                r.f4 = LWC1(current + 8u);
                r.a2 = r.a1;
                r.f4 = FPU_SUB_S(r.f4, r.f0);
                SWC1(sp + 8u, r.f4);
                r.f3 = LWC1(current);
                r.f3 = FPU_SUB_S(r.f3, r.f8);
                SWC1(sp + 0x10u, r.f3);
                r.f7 = FPU_MUL_S(r.f5, r.f3);
                r.f3 = FPU_MUL_S(r.f4, r.f3);
                r.f0 = LWC1(current + 4u);
                r.f0 = FPU_SUB_S(r.f0, r.f9);
                SWC1(sp + 0x14u, r.f0);
                r.f2 = FPU_MUL_S(r.f6, r.f0);
                r.f4 = FPU_MUL_S(r.f4, r.f0);
                r.f1 = LWC1(current + 8u);
                r.f2 = FPU_SUB_S(r.f2, r.f7);
                r.f1 = FPU_SUB_S(r.f1, r.f10);
                SWC1(sp + 0x38u, r.f2);
                r.f6 = FPU_MUL_S(r.f6, r.f1);
                SWC1(sp + 0x18u, r.f1);
                r.f5 = FPU_MUL_S(r.f5, r.f1);
                r.f3 = FPU_SUB_S(r.f3, r.f6);
                r.f5 = FPU_SUB_S(r.f5, r.f4);
                SWC1(sp + 0x34u, r.f3);
                SWC1(sp + 0x30u, r.f5);
                bool inside = true;
                if (r.a0 != 0u)
                {
                    r.f13 = FPU_MOV_S(r.f8);
                    r.f12 = FPU_MOV_S(r.f9);
                    r.f11 = FPU_MOV_S(r.f10);
                    for (;;)
                    {
                        // 0x209ca0: the next edge's cross product; the hit is outside when they disagree.
                        r.v0 = addu(a3, r.t4);
                        r.a0 = 0xCu;
                        r.v1 = LBU(lo32(r.v0));
                        const uint32_t last = lo32(r.a2);
                        r.f0 = LWC1(last);
                        r.v0 = mult(r.v1, r.a0, r.lo, r.hi);
                        r.f6 = LWC1(sp + 0x30u);
                        r.f7 = LWC1(sp + 0x34u);
                        r.f8 = LWC1(sp + 0x38u);
                        r.f10 = floatOf(0u);
                        r.a1 = addu(r.v0, r.t6);
                        const uint32_t vertex = lo32(r.a1);
                        r.f5 = LWC1(vertex);
                        r.f5 = FPU_SUB_S(r.f5, r.f0);
                        SWC1(sp, r.f5);
                        r.f0 = LWC1(last + 4u);
                        r.f4 = LWC1(vertex + 4u);
                        r.f4 = FPU_SUB_S(r.f4, r.f0);
                        SWC1(sp + 4u, r.f4);
                        r.f0 = LWC1(last + 8u);
                        r.f3 = LWC1(vertex + 8u);
                        r.f3 = FPU_SUB_S(r.f3, r.f0);
                        SWC1(sp + 8u, r.f3);
                        r.f2 = LWC1(vertex);
                        r.f2 = FPU_SUB_S(r.f2, r.f13);
                        SWC1(sp + 0x10u, r.f2);
                        r.f9 = FPU_MUL_S(r.f3, r.f2);
                        r.f2 = FPU_MUL_S(r.f4, r.f2);
                        r.f0 = LWC1(vertex + 4u);
                        r.f0 = FPU_SUB_S(r.f0, r.f12);
                        SWC1(sp + 0x14u, r.f0);
                        r.f3 = FPU_MUL_S(r.f3, r.f0);
                        r.f0 = FPU_MUL_S(r.f5, r.f0);
                        r.f1 = LWC1(vertex + 8u);
                        r.f1 = FPU_SUB_S(r.f1, r.f11);
                        r.f2 = FPU_SUB_S(r.f0, r.f2);
                        r.f5 = FPU_MUL_S(r.f5, r.f1);
                        SWC1(sp + 0x18u, r.f1);
                        r.f4 = FPU_MUL_S(r.f4, r.f1);
                        SWC1(sp + 0x48u, r.f2);
                        r.f8 = FPU_MUL_S(r.f8, r.f2);
                        r.f9 = FPU_SUB_S(r.f9, r.f5);
                        r.f0 = FPU_SUB_S(r.f4, r.f3);
                        r.f7 = FPU_MUL_S(r.f7, r.f9);
                        SWC1(sp + 0x44u, r.f9);
                        r.f6 = FPU_MUL_S(r.f6, r.f0);
                        r.f6 = FPU_ADD_S(r.f6, r.f7);
                        r.f6 = FPU_ADD_S(r.f6, r.f8);
                        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f6, r.f10));
                        SWC1(sp + 0x40u, r.f0);
                        if ((r.fcr31 & kCondition) != 0u)
                        {
                            // Outside: the backward branch to the "no hit" exit is a checkpoint.
                            storeLinePoly(r, ctx);
                            if (loopCheckpoint(ctx, runtime, 0x209BC0u))
                                return;
                            r.v0 = 0u;
                            inside = false;
                            break;
                        }
                        r.t4 = addiu(r.t4, 1);
                        SWC1(sp + 0x30u, r.f0);
                        SWC1(sp + 0x34u, r.f9);
                        r.a2 = r.a1;
                        r.v0 = slt(r.t4, t0);
                        SWC1(sp + 0x38u, r.f2);
                        if (r.v0 == 0u)
                            break;
                        storeLinePoly(r, ctx);
                        if (loopCheckpoint(ctx, runtime, 0x209CA0u))
                            return;
                    }
                }
                if (inside)
                {
                    // 0x209d84: the results that are wanted.
                    r.f0 = LWC1(sp + 0x20u);
                    if (t2 != 0u)
                    {
                        const uint32_t hit = lo32(t2);
                        r.f2 = LWC1(sp + 0x24u);
                        r.f1 = LWC1(sp + 0x28u);
                        SWC1(hit, r.f0);
                        SWC1(hit + 8u, r.f1);
                        SWC1(hit + 4u, r.f2);
                    }
                    r.v0 = 1u;
                    if (t3 != 0u)
                    {
                        const uint32_t hitNormal = lo32(t3);
                        r.f0 = LWC1(normal);
                        SWC1(hitNormal, r.f0);
                        r.f1 = LWC1(normal + 4u);
                        SWC1(hitNormal + 4u, r.f1);
                        r.f0 = LWC1(normal + 8u);
                        SWC1(hitNormal + 8u, r.f0);
                    }
                }
            }
            else
            {
                r.v0 = 0u; // behind the start
            }
        }
        r.sp = sext32(entrySp);
        storeLinePoly(r, ctx);
        returnToCaller(ctx);
    }

    // ---- dlSetClip (0x2b8050), dlSetBlend (0x2b7ea8)
    //
    // Display-list builders: memdbAlloc(size) (a call) takes a block from
    // the frame's packet memory, the words of a GS register packet are
    // written into it, and the packet is appended to the current list
    // (gp-0x6C60: a list record of a tag halfword, a type byte, the
    // pointer, 16 bytes per entry). dlSetClip(x0, y0, x1, y1) writes a
    // SCISSOR packet with the corners clamped to the screen; dlSetBlend(mode)
    // records the mode (gp-0x4B58) and, unless it is one of the three
    // register-only modes, writes an ALPHA/TEST packet; it returns the
    // previous mode.

    void nativeDlSetClip(G_ARGS)
    {
        const uint32_t sp = GPR_U32(ctx, 29) - 0x50u;
        WRITE64(sp + 0x20u, GPR_U64(ctx, 18));
        uint64_t s2 = GPR_U64(ctx, 4);
        WRITE64(sp + 0x30u, GPR_U64(ctx, 19));
        WRITE64(sp + 0x10u, GPR_U64(ctx, 17));
        uint64_t s3 = GPR_U64(ctx, 5);
        WRITE64(sp, GPR_U64(ctx, 16));
        uint64_t s1 = GPR_U64(ctx, 7);
        uint64_t s0 = GPR_U64(ctx, 6);
        WRITE64(sp + 0x40u, GPR_U64(ctx, 31));
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(sp));
        SET_GPR_U64(ctx, 16, s0);
        SET_GPR_U64(ctx, 17, s1);
        SET_GPR_U64(ctx, 18, s2);
        SET_GPR_U64(ctx, 19, s3);
        SET_GPR_U64(ctx, 4, 0x30u);
        if (!guestCall(G_PASS, 0x201F78u, 0x2B8078u, 0x2B8080u))
            return;
        // 0x2b8080
        const uint32_t gp = GPR_U32(ctx, 28);
        s0 = GPR_U64(ctx, 16);
        s1 = GPR_U64(ctx, 17);
        s2 = GPR_U64(ctx, 18);
        s3 = GPR_U64(ctx, 19);
        uint64_t v0 = GPR_U64(ctx, 2);
        uint64_t a1 = LW(gp - 0x6C60u);
        uint64_t a0 = 0x30u;
        uint64_t v1 = sext32(0x6C020000u);
        uint64_t a2 = 0x8001u;
        WRITE8(lo32(a1) + 3u, 0x30u);
        v1 |= 0x8000u;
        WRITE32(lo32(v0), lo32(v1));
        const uint64_t t0 = sext32(0x10000000u);
        const uint64_t a3 = LW(gp - 0x6C60u);
        a0 = slti(s0, 0x280);
        v1 = 0x27Fu;
        const uint64_t t1 = 0xEu;
        WRITE32(lo32(a3) + 4u, lo32(v0));
        if (a0 == 0u)
        {
            s0 = v1;
            copyHigh(ctx, 16, 3);
        }
        v0 = addiu(v0, 4);
        a1 = ~0ull;
        WRITE32(lo32(v0), lo32(a2));
        v1 = slt(a1, s2);
        v0 = addiu(v0, 4);
        if (v1 == 0u)
        {
            s2 = 0u;
            zeroHigh(ctx, 18);
        }
        WRITE32(lo32(v0), lo32(t0));
        s0 = sll32(s0, 16);
        v0 = addiu(v0, 4);
        a0 = slti(s1, 0xE0);
        WRITE32(lo32(v0), lo32(t1));
        v1 = 0xDFu;
        v0 = addiu(v0, 4);
        if (a0 == 0u)
        {
            s1 = v1;
            copyHigh(ctx, 17, 3);
        }
        WRITE32(lo32(v0), 0u);
        s2 |= s0;
        a1 = slt(a1, s3);
        v0 = addiu(v0, 4);
        WRITE32(lo32(v0), lo32(s2));
        if (a1 == 0u)
        {
            s3 = 0u;
            zeroHigh(ctx, 19);
        }
        s1 = sll32(s1, 16);
        v0 = addiu(v0, 4);
        s3 |= s1;
        a0 = 0x40u;
        WRITE32(lo32(v0), lo32(s3));
        v1 = sext32(0x14000000u);
        v0 = addiu(v0, 4);
        v1 |= 0x7FCu;
        WRITE32(lo32(v0), lo32(a0));
        a2 = addiu(a3, 0x10);
        v0 = addiu(v0, 4);
        a0 = 3u;
        WRITE32(lo32(v0), 0u);
        a1 = sext32(0x11000000u);
        v0 = addiu(v0, 4);
        const uint64_t ra = READ64(sp + 0x40u);
        WRITE32(lo32(v0), lo32(v1));
        v0 = addiu(v0, 4);
        s3 = READ64(sp + 0x30u);
        s2 = READ64(sp + 0x20u);
        s1 = READ64(sp + 0x10u);
        s0 = READ64(sp);
        WRITE16(lo32(a3), 3u);
        WRITE32(gp - 0x6C60u, lo32(a2));
        WRITE32(lo32(v0), lo32(a1));
        WRITE32(lo32(v0) + 4u, 0u);
        SET_GPR_U64(ctx, 2, v0);
        SET_GPR_U64(ctx, 3, v1);
        SET_GPR_U64(ctx, 4, a0);
        SET_GPR_U64(ctx, 5, a1);
        SET_GPR_U64(ctx, 6, a2);
        SET_GPR_U64(ctx, 7, a3);
        SET_GPR_U64(ctx, 8, t0);
        SET_GPR_U64(ctx, 9, t1);
        SET_GPR_U64(ctx, 16, s0);
        SET_GPR_U64(ctx, 17, s1);
        SET_GPR_U64(ctx, 18, s2);
        SET_GPR_U64(ctx, 19, s3);
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(sp + 0x50u));
        SET_GPR_U64(ctx, 31, ra);
        ctx->pc = lo32(ra);
    }

    struct BlendRegs
    {
        uint64_t v0, v1, a0, a1, a2, a3, t0, s0, s1, sp, ra, lo, hi;
    };

    TS_INL void storeBlend(const BlendRegs &r, R5900Context *ctx)
    {
        STORE_GPR(v0, 2);
        STORE_GPR(v1, 3);
        STORE_GPR(a0, 4);
        STORE_GPR(a1, 5);
        STORE_GPR(a2, 6);
        STORE_GPR(a3, 7);
        STORE_GPR(t0, 8);
        STORE_GPR(s0, 16);
        STORE_GPR(s1, 17);
        STORE_GPR(sp, 29);
        STORE_GPR(ra, 31);
        ctx->lo = r.lo;
        ctx->hi = r.hi;
    }

    void nativeDlSetBlend(G_ARGS)
    {
        BlendRegs r;
        LOAD_GPR(v0, 2);
        LOAD_GPR(v1, 3);
        LOAD_GPR(a0, 4);
        LOAD_GPR(a1, 5);
        LOAD_GPR(a2, 6);
        LOAD_GPR(a3, 7);
        LOAD_GPR(t0, 8);
        LOAD_GPR(ra, 31);
        r.lo = ctx->lo;
        r.hi = ctx->hi;
        const uint32_t gp = GPR_U32(ctx, 28), sp = GPR_U32(ctx, 29) - 0x30u;
        r.sp = sext32(sp);
        WRITE64(sp + 0x10u, GPR_U64(ctx, 17));
        WRITE64(sp, GPR_U64(ctx, 16));
        r.s1 = LW(gp - 0x4B58u);
        r.s0 = r.a0;
        WRITE64(sp + 0x20u, r.ra);
        bool packet = false;
        if (r.s0 != r.s1)
        {
            r.v0 = ~0ull;
            const bool none = r.s0 == r.v0;
            r.v0 = slti(r.s0, 3);
            if (!none)
            {
                WRITE32(gp - 0x4B58u, lo32(r.s0));
                if (r.v0 != 0u)
                {
                    // 0x2b7ed8: a register-only mode: the list entry points at a fixed packet.
                    r.a1 = LW(gp - 0x6C60u);
                    r.v1 = 0x30u;
                    r.a0 = 0x50u;
                    r.v0 = sext32(0x380000u);
                    WRITE8(lo32(r.a1) + 3u, 0x30u);
                    r.a0 = mult(r.s0, r.a0, r.lo, r.hi);
                    r.v0 = addiu(r.v0, 0x800);
                    r.a2 = 5u;
                    r.v1 = LW(gp - 0x6C60u);
                    r.a0 = addu(r.a0, r.v0);
                    r.a1 = addiu(r.v1, 0x10);
                    WRITE32(lo32(r.v1) + 4u, lo32(r.a0));
                    WRITE16(lo32(r.v1), 5u);
                    WRITE32(gp - 0x6C60u, lo32(r.a1));
                }
                else
                {
                    packet = true;
                }
            }
        }
        if (packet)
        {
            r.a0 = 0x50u;
            storeBlend(r, ctx);
            if (!guestCall(G_PASS, 0x201F78u, 0x2B7F14u, 0x2B7F1Cu))
                return;
            // 0x2b7f1c
            r.v0 = GPR_U64(ctx, 2);
            r.s0 = GPR_U64(ctx, 16);
            r.s1 = GPR_U64(ctx, 17);
            r.lo = ctx->lo;
            r.hi = ctx->hi;
            r.a1 = LW(gp - 0x6C60u);
            r.a0 = 0x30u;
            r.t0 = r.v0;
            r.v1 = sext32(0x6C040000u);
            WRITE8(lo32(r.a1) + 3u, 0x30u);
            r.v1 |= 0x8000u;
            WRITE32(lo32(r.t0), lo32(r.v1));
            r.a1 = 0x8003u;
            r.v0 = LW(gp - 0x6C60u);
            r.a2 = sext32(0x10000000u);
            r.a3 = 0xEu;
            r.v1 = 5u;
            WRITE32(lo32(r.v0) + 4u, lo32(r.t0));
            r.a0 = addiu(r.v0, 0x10);
            r.t0 = addiu(r.t0, 4);
            WRITE16(lo32(r.v0), 5u);
            WRITE32(lo32(r.t0), lo32(r.a1));
            r.v0 = 3u;
            r.t0 = addiu(r.t0, 4);
            WRITE32(gp - 0x6C60u, lo32(r.a0));
            WRITE32(lo32(r.t0), lo32(r.a2));
            r.t0 = addiu(r.t0, 4);
            WRITE32(lo32(r.t0), lo32(r.a3));
            r.t0 = addiu(r.t0, 4);
            WRITE32(lo32(r.t0), 0u);
            const bool three = r.s0 == r.v0;
            r.t0 = addiu(r.t0, 4);
            bool testWord = three;
            if (three)
            {
                r.v0 = 0x64u;
            }
            else
            {
                r.v0 = 4u;
                const bool four = r.s0 == r.v0;
                r.v0 = LW(gp - 0x464Cu);
                if (four)
                {
                    r.v0 = 0x68u;
                    testWord = true;
                }
                else
                {
                    r.a0 = 0x42u;
                }
            }
            if (testWord)
            {
                // 0x2b7fa8
                WRITE32(lo32(r.t0), lo32(r.v0));
                r.t0 = addiu(r.t0, 4);
                r.v0 = LW(gp - 0x464Cu);
                r.a0 = 0x42u;
            }
            // 0x2b7fb8
            r.a1 = 0x49u;
            r.a2 = 0x3Bu;
            WRITE32(lo32(r.t0), lo32(r.v0));
            r.v1 = sext32(0x14000000u);
            r.t0 = addiu(r.t0, 4);
            r.v1 |= 0x7FCu;
            WRITE32(lo32(r.t0), lo32(r.a0));
            r.v0 = sext32(0x11000000u);
            for (int i = 0; i < 3; ++i)
            {
                r.t0 = addiu(r.t0, 4);
                WRITE32(lo32(r.t0), 0u);
            }
            r.t0 = addiu(r.t0, 4);
            WRITE32(lo32(r.t0), lo32(r.a1));
            for (int i = 0; i < 3; ++i)
            {
                r.t0 = addiu(r.t0, 4);
                WRITE32(lo32(r.t0), 0u);
            }
            r.t0 = addiu(r.t0, 4);
            WRITE32(lo32(r.t0), lo32(r.a2));
            r.t0 = addiu(r.t0, 4);
            WRITE32(lo32(r.t0), 0u);
            r.t0 = addiu(r.t0, 4);
            WRITE32(lo32(r.t0), lo32(r.v1));
            r.t0 = addiu(r.t0, 4);
            WRITE32(lo32(r.t0), lo32(r.v0));
            WRITE32(lo32(r.t0) + 4u, 0u);
        }
        // 0x2b8034
        r.v0 = r.s1;
        r.ra = READ64(sp + 0x20u);
        r.s1 = READ64(sp + 0x10u);
        r.s0 = READ64(sp);
        r.sp = sext32(sp + 0x30u);
        storeBlend(r, ctx);
        ctx->pc = lo32(r.ra);
    }

    // ---- bgPortalPlaneClip (0x257f20)
    //
    // bgPortalPlaneClip(in, out, axis, outcodeBit, a, b): clips a portal
    // polygon (a list of vertex pointers, count at +0x50) against the plane
    // a*v[axis] + b*v.w = 0, as one step of Sutherland-Hodgman. Each
    // crossing edge gets a new vertex from the frame's vertex pool
    // (gp-0x4758, counter gp-0x4754) with its outcode from
    // bgPortalCalcOutCode (a call); the vertices inside are kept.

    struct ClipRegs
    {
        uint64_t v0, v1, a0, a1, a2, a3, s0, s1, s2, s3, s4, s5, sp, ra, lo, hi;
        float f0, f1, f2, f3, f20, f21;
        uint32_t fcr31;
    };

    TS_INL void loadClip(ClipRegs &r, const R5900Context *ctx)
    {
        LOAD_GPR(v0, 2);
        LOAD_GPR(v1, 3);
        LOAD_GPR(a0, 4);
        LOAD_GPR(a1, 5);
        LOAD_GPR(a2, 6);
        LOAD_GPR(a3, 7);
        LOAD_GPR(s0, 16);
        LOAD_GPR(s1, 17);
        LOAD_GPR(s2, 18);
        LOAD_GPR(s3, 19);
        LOAD_GPR(s4, 20);
        LOAD_GPR(s5, 21);
        LOAD_GPR(sp, 29);
        LOAD_GPR(ra, 31);
        r.lo = ctx->lo;
        r.hi = ctx->hi;
        LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); LOAD_F(21);
        r.fcr31 = ctx->fcr31;
    }

    TS_INL void storeClip(const ClipRegs &r, R5900Context *ctx)
    {
        STORE_GPR(v0, 2);
        STORE_GPR(v1, 3);
        STORE_GPR(a0, 4);
        STORE_GPR(a1, 5);
        STORE_GPR(a2, 6);
        STORE_GPR(a3, 7);
        STORE_GPR(s0, 16);
        STORE_GPR(s1, 17);
        STORE_GPR(s2, 18);
        STORE_GPR(s3, 19);
        STORE_GPR(s4, 20);
        STORE_GPR(s5, 21);
        STORE_GPR(sp, 29);
        STORE_GPR(ra, 31);
        ctx->lo = r.lo;
        ctx->hi = r.hi;
        STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(20); STORE_F(21);
        ctx->fcr31 = r.fcr31;
    }

    void nativeBgPortalPlaneClip(G_ARGS)
    {
        ClipRegs r;
        loadClip(r, ctx);
        const uint32_t gp = GPR_U32(ctx, 28), frame = lo32(r.sp) - 0x80u;
        r.sp = sext32(frame);
        WRITE64(frame + 0x30u, r.s3);
        WRITE64(frame + 0x20u, r.s2);
        r.s3 = r.a3;
        WRITE64(frame + 0x10u, r.s1);
        r.s2 = r.a0;
        SWC1(frame + 0x78u, r.f21);
        r.s1 = r.a1;
        SWC1(frame + 0x70u, r.f20);
        r.f21 = FPU_MOV_S(ctx->f[12]);
        WRITE64(frame + 0x60u, r.ra);
        WRITE64(frame + 0x50u, r.s5);
        WRITE64(frame + 0x40u, r.s4);
        WRITE64(frame, r.s0);
        const uint32_t in = lo32(r.s2), out = lo32(r.s1);
        r.v0 = LW(in + 0x50u);
        r.f20 = FPU_MOV_S(ctx->f[13]);
        if (!lez64(r.v0))
        {
            WRITE32(out + 0x50u, 0u);
            r.v0 = LW(in + 0x50u);
            r.v1 = 0u;
            if (!lez64(r.v0))
            {
                r.s5 = sll32(r.a2, 2);
                r.v0 = sll32(r.v1, 2);
                for (;;)
                {
                    // 0x257f80: the edge from vertex v1 to v1 + 1.
                    r.s4 = addiu(r.v1, 1);
                    r.v1 = sll32(r.s4, 2);
                    r.v0 = addu(r.s2, r.v0);
                    r.v1 = addu(r.s2, r.v1);
                    r.a3 = LW(lo32(r.v0));
                    r.s0 = LW(lo32(r.v1));
                    const uint32_t from = lo32(r.a3), to = lo32(r.s0);
                    r.a0 = LW(from + 0x10u);
                    r.v1 = LW(to + 0x10u);
                    r.a0 &= r.s3;
                    r.v0 = r.v1 & r.s3;
                    const bool sameSide = r.a0 == r.v0;
                    r.v0 = addu(r.a3, r.s5);
                    if (!sameSide)
                    {
                        // The crossing: a new vertex interpolated on the plane.
                        r.v1 = addu(r.s0, r.s5);
                        r.f3 = LWC1(lo32(r.v0));
                        r.a2 = 0x14u;
                        r.f0 = LWC1(lo32(r.v1));
                        r.f1 = LWC1(from + 0xCu);
                        r.f3 = FPU_MUL_S(r.f21, r.f3);
                        r.f2 = LWC1(to + 0xCu);
                        r.f0 = FPU_MUL_S(r.f21, r.f0);
                        r.v0 = LW(gp - 0x4754u);
                        r.f1 = FPU_MUL_S(r.f1, r.f20);
                        r.f2 = FPU_MUL_S(r.f2, r.f20);
                        r.a0 = LW(out + 0x50u);
                        r.a2 = mult(r.v0, r.a2, r.lo, r.hi);
                        r.a1 = LW(gp - 0x4758u);
                        r.f3 = FPU_ADD_S(r.f3, r.f1);
                        r.v1 = sll32(r.a0, 2);
                        r.f0 = FPU_ADD_S(r.f0, r.f2);
                        r.v0 = addiu(r.v0, 1);
                        WRITE32(gp - 0x4754u, lo32(r.v0));
                        r.v1 = addu(r.s1, r.v1);
                        r.a1 = addu(r.a1, r.a2);
                        r.a0 = addiu(r.a0, 1);
                        r.f0 = FPU_SUB_S(r.f3, r.f0);
                        WRITE32(lo32(r.v1), lo32(r.a1));
                        WRITE32(out + 0x50u, lo32(r.a0));
                        r.a0 = r.a1;
                        const uint32_t vertex = lo32(r.a1);
                        r.f3 = divS(r.f3, r.f0, r.fcr31);
                        r.f1 = LWC1(from);
                        r.f0 = LWC1(to);
                        r.f0 = FPU_SUB_S(r.f0, r.f1);
                        r.f0 = FPU_MUL_S(r.f3, r.f0);
                        r.f1 = FPU_ADD_S(r.f1, r.f0);
                        SWC1(vertex, r.f1);
                        r.f2 = LWC1(from + 4u);
                        r.f0 = LWC1(to + 4u);
                        r.f0 = FPU_SUB_S(r.f0, r.f2);
                        r.f0 = FPU_MUL_S(r.f3, r.f0);
                        r.f2 = FPU_ADD_S(r.f2, r.f0);
                        SWC1(vertex + 4u, r.f2);
                        r.f1 = LWC1(from + 8u);
                        r.f0 = LWC1(to + 8u);
                        r.f0 = FPU_SUB_S(r.f0, r.f1);
                        r.f0 = FPU_MUL_S(r.f3, r.f0);
                        r.f1 = FPU_ADD_S(r.f1, r.f0);
                        SWC1(vertex + 8u, r.f1);
                        r.f2 = LWC1(from + 0xCu);
                        r.f0 = LWC1(to + 0xCu);
                        r.f0 = FPU_SUB_S(r.f0, r.f2);
                        r.f3 = FPU_MUL_S(r.f3, r.f0);
                        r.f2 = FPU_ADD_S(r.f2, r.f3);
                        SWC1(vertex + 0xCu, r.f2);
                        storeClip(r, ctx);
                        if (!guestCall(G_PASS, 0x257E38u, 0x258080u, 0x258088u))
                            return;
                        loadClip(r, ctx);
                        r.v1 = LW(lo32(r.s0) + 0x10u);
                    }
                    // 0x25808c: the edge's end vertex is kept when it is inside.
                    r.v0 = r.v1 & r.s3;
                    if (r.v0 == 0u)
                    {
                        r.v1 = LW(out + 0x50u);
                        r.v0 = sll32(r.v1, 2);
                        r.v0 = addu(r.s1, r.v0);
                        r.v1 = addiu(r.v1, 1);
                        WRITE32(lo32(r.v0), lo32(r.s0));
                        WRITE32(out + 0x50u, lo32(r.v1));
                    }
                    r.v0 = LW(in + 0x50u);
                    r.v1 = r.s4;
                    r.v0 = slt(r.v1, r.v0);
                    const bool more = r.v0 != 0u;
                    r.v0 = sll32(r.v1, 2);
                    if (!more)
                        break;
                    storeClip(r, ctx);
                    if (loopCheckpoint(ctx, runtime, 0x257F80u))
                        return;
                }
            }
            // 0x2580c4: the list wraps: its first vertex is repeated after the last.
            r.v0 = LW(out + 0x50u);
            r.v1 = LW(out);
            r.v0 = sll32(r.v0, 2);
            r.v0 = addu(r.s1, r.v0);
            WRITE32(lo32(r.v0), lo32(r.v1));
        }
        // 0x2580d8
        r.ra = READ64(frame + 0x60u);
        r.s5 = READ64(frame + 0x50u);
        r.s4 = READ64(frame + 0x40u);
        r.s3 = READ64(frame + 0x30u);
        r.s2 = READ64(frame + 0x20u);
        r.s1 = READ64(frame + 0x10u);
        r.s0 = READ64(frame);
        r.f21 = LWC1(frame + 0x78u);
        r.f20 = LWC1(frame + 0x70u);
        r.sp = sext32(frame + 0x80u);
        storeClip(r, ctx);
        ctx->pc = lo32(r.ra);
    }

    // ---- moveFindFloorHeight (0x27c578)
    //
    // moveFindFloorHeight(polygons, mask, position, &found): the highest
    // floor polygon under the position, among the polygons (a null-ended
    // pointer list) whose flags match the mask: the position's x,z must be
    // inside the polygon (an even-odd test, one edge at a time) and its
    // height (calcfloorheight, a call, for sloped polygons; the first
    // vertex's for flat ones) must lie between the stored start height
    // (0x3AF9C0) and the position's y. Returns the height.

    struct FloorRegs
    {
        uint64_t v0, v1, a0, a1, a2, a3, t0, t1, t2, s0, s1, s2, s3, s4, s5, s6, s7, sp, ra, lo, hi;
        float f0, f1, f2, f3, f4, f5, f6, f12, f13, f20;
        uint32_t fcr31;
    };

    TS_INL void loadFloor(FloorRegs &r, const R5900Context *ctx)
    {
        LOAD_GPR(v0, 2);
        LOAD_GPR(v1, 3);
        LOAD_GPR(a0, 4);
        LOAD_GPR(a1, 5);
        LOAD_GPR(a2, 6);
        LOAD_GPR(a3, 7);
        LOAD_GPR(t0, 8);
        LOAD_GPR(t1, 9);
        LOAD_GPR(t2, 10);
        LOAD_GPR(s0, 16);
        LOAD_GPR(s1, 17);
        LOAD_GPR(s2, 18);
        LOAD_GPR(s3, 19);
        LOAD_GPR(s4, 20);
        LOAD_GPR(s5, 21);
        LOAD_GPR(s6, 22);
        LOAD_GPR(s7, 23);
        LOAD_GPR(sp, 29);
        LOAD_GPR(ra, 31);
        r.lo = ctx->lo;
        r.hi = ctx->hi;
        LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(12); LOAD_F(13); LOAD_F(20);
        r.fcr31 = ctx->fcr31;
    }

    TS_INL void storeFloor(const FloorRegs &r, R5900Context *ctx)
    {
        STORE_GPR(v0, 2);
        STORE_GPR(v1, 3);
        STORE_GPR(a0, 4);
        STORE_GPR(a1, 5);
        STORE_GPR(a2, 6);
        STORE_GPR(a3, 7);
        STORE_GPR(t0, 8);
        STORE_GPR(t1, 9);
        STORE_GPR(t2, 10);
        STORE_GPR(s0, 16);
        STORE_GPR(s1, 17);
        STORE_GPR(s2, 18);
        STORE_GPR(s3, 19);
        STORE_GPR(s4, 20);
        STORE_GPR(s5, 21);
        STORE_GPR(s6, 22);
        STORE_GPR(s7, 23);
        STORE_GPR(sp, 29);
        STORE_GPR(ra, 31);
        ctx->lo = r.lo;
        ctx->hi = r.hi;
        STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(12); STORE_F(13); STORE_F(20);
        ctx->fcr31 = r.fcr31;
    }

    void nativeMoveFindFloorHeight(G_ARGS)
    {
        FloorRegs r;
        loadFloor(r, ctx);
        const uint32_t frame = lo32(r.sp) - 0xA0u;
        r.sp = sext32(frame);
        r.v0 = sext32(0x3B0000u);
        WRITE64(frame + 0x70u, r.s7);
        WRITE64(frame + 0x60u, r.s6);
        r.s7 = r.a3;
        WRITE64(frame + 0x50u, r.s5);
        r.s6 = r.a1;
        WRITE64(frame + 0x30u, r.s3);
        r.s5 = 0u;
        WRITE64(frame + 0x20u, r.s2);
        r.s3 = r.a0;
        SWC1(frame + 0x90u, r.f20);
        r.s2 = r.a2;
        WRITE64(frame + 0x80u, r.ra);
        r.a0 = 0u;
        WRITE64(frame + 0x40u, r.s4);
        WRITE64(frame + 0x10u, r.s1);
        WRITE64(frame, r.s0);
        r.s0 = LW(lo32(r.s3));
        r.f20 = LWC1(lo32(r.v0) - 0x640u);
        const uint32_t position = lo32(r.s2);
        if (r.s0 != 0u)
        {
            r.s4 = 0xCu;
            r.v0 = LHU(lo32(r.s0) + 4u);
            for (;;)
            {
                // 0x27c5d8: one polygon.
                const uint32_t polygon = lo32(r.s0);
                const bool anyFlags = r.v0 != 0u;
                r.v0 &= r.s6;
                bool skip = false;
                if (anyFlags)
                {
                    const bool unmatched = r.v0 == 0u;
                    r.s1 = addiu(r.a0, 1);
                    skip = unmatched;
                }
                if (!skip)
                {
                    // 0x27c5e8: a sloped polygon is rejected above the position by its first vertex.
                    r.t2 = LHU(polygon + 6u);
                    r.v0 = r.t2 & 0x10u;
                    if (r.v0 != 0u)
                    {
                        r.f1 = LWC1(polygon + 0xCu);
                        r.f0 = LWC1(position + 4u);
                        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0));
                        r.s1 = addiu(r.a0, 1);
                        skip = (r.fcr31 & kCondition) == 0u;
                    }
                }
                if (!skip)
                {
                    r.t0 = LW(polygon);
                    // 0x27c614: the even-odd test against every edge, the last vertex first.
                    r.t1 = 0u;
                    r.f5 = LWC1(position + 8u);
                    r.a2 = 1u;
                    r.v0 = mult(r.t0, r.s4, r.lo, r.hi);
                    r.v0 = addiu(r.v0, -4);
                    r.v1 = addu(r.s0, r.v0);
                    r.f0 = LWC1(lo32(r.v1) + 8u);
                    r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f5, r.f0));
                    r.f6 = FPU_MOV_S(r.f5);
                    if ((r.fcr31 & kCondition) == 0u)
                        r.a2 = 0u;
                    r.a3 = 0u;
                    if (r.t0 != 0u)
                    {
                        r.s1 = addiu(r.a0, 1);
                        for (;;)
                        {
                            // 0x27c650
                            r.v0 = mult(r.a3, r.s4, r.lo, r.hi);
                            r.v0 = addiu(r.v0, 8);
                            r.a0 = addu(r.s0, r.v0);
                            const uint32_t vertex = lo32(r.a0), previous = lo32(r.v1);
                            r.f2 = LWC1(vertex + 8u);
                            r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f6, r.f2));
                            r.a1 = 1u;
                            if ((r.fcr31 & kCondition) == 0u)
                                r.a1 = 0u;
                            if (r.a2 == r.a1)
                            {
                                r.a3 = addiu(r.a3, 1);
                            }
                            else
                            {
                                r.f3 = LWC1(previous + 8u);
                                r.f4 = FPU_SUB_S(r.f2, r.f5);
                                r.f1 = LWC1(vertex);
                                r.f3 = FPU_SUB_S(r.f3, r.f2);
                                r.f0 = LWC1(previous);
                                r.f2 = LWC1(position);
                                r.f0 = FPU_SUB_S(r.f0, r.f1);
                                r.f1 = FPU_SUB_S(r.f1, r.f2);
                                r.f0 = FPU_MUL_S(r.f0, r.f4);
                                r.f1 = FPU_MUL_S(r.f1, r.f3);
                                r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f1, r.f0));
                                r.v0 = 1u;
                                if ((r.fcr31 & kCondition) == 0u)
                                    r.v0 = 0u;
                                const bool crossed = r.v0 == r.a1;
                                r.a3 = addiu(r.a3, 1);
                                if (crossed)
                                {
                                    r.v0 = 1u;
                                    r.t1 = subu(r.v0, r.t1);
                                }
                            }
                            // 0x27c6c8
                            r.v1 = r.a0;
                            r.v0 = sltu(r.a3, r.t0);
                            const bool more = r.v0 != 0u;
                            r.a2 = r.a1;
                            if (!more)
                                break;
                            storeFloor(r, ctx);
                            if (loopCheckpoint(ctx, runtime, 0x27C650u))
                                return;
                        }
                    }
                    else
                    {
                        r.s1 = addiu(r.a0, 1);
                    }
                    // 0x27c6e4: inside: the floor height there.
                    r.v0 = r.t2 & 0x10u;
                    if (r.t1 != 0u)
                    {
                        if (r.v0 == 0u)
                        {
                            r.f12 = LWC1(position);
                            r.a0 = addiu(r.s0, 8);
                            r.f13 = LWC1(position + 8u);
                            r.a1 = addiu(r.s0, 0x14);
                            r.a2 = addiu(r.s0, 0x20);
                            storeFloor(r, ctx);
                            if (!guestCall(G_PASS, 0x27C4A8u, 0x27C708u, 0x27C710u))
                                return;
                            loadFloor(r, ctx);
                            r.f1 = FPU_MOV_S(r.f0);
                        }
                        else
                        {
                            r.f1 = LWC1(lo32(r.s0) + 0xCu);
                        }
                        // 0x27c714: the highest so far, below the position.
                        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f20, r.f1));
                        r.a0 = r.s1;
                        if ((r.fcr31 & kCondition) != 0u)
                        {
                            r.f0 = LWC1(position + 4u);
                            r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0));
                            r.v0 = sll32(r.a0, 2);
                            if ((r.fcr31 & kCondition) != 0u)
                            {
                                r.f20 = FPU_MOV_S(r.f1);
                                r.s5 = r.s0;
                            }
                        }
                        else
                        {
                            r.v0 = sll32(r.a0, 2);
                        }
                    }
                    else
                    {
                        r.a0 = r.s1;
                        r.v0 = sll32(r.a0, 2);
                    }
                }
                else
                {
                    // 0x27c744
                    r.a0 = r.s1;
                    r.v0 = sll32(r.a0, 2);
                }
                // 0x27c74c: the next polygon.
                r.v0 = addu(r.v0, r.s3);
                r.s0 = LW(lo32(r.v0));
                if (r.s0 == 0u)
                    break;
                r.v0 = LHU(lo32(r.s0) + 4u);
                storeFloor(r, ctx);
                if (loopCheckpoint(ctx, runtime, 0x27C5D8u))
                    return;
            }
        }
        // 0x27c75c
        if (r.s7 != 0u)
            WRITE32(lo32(r.s7), lo32(r.s5));
        r.f0 = FPU_MOV_S(r.f20);
        r.ra = READ64(frame + 0x80u);
        r.s7 = READ64(frame + 0x70u);
        r.s6 = READ64(frame + 0x60u);
        r.s5 = READ64(frame + 0x50u);
        r.s4 = READ64(frame + 0x40u);
        r.s3 = READ64(frame + 0x30u);
        r.s2 = READ64(frame + 0x20u);
        r.s1 = READ64(frame + 0x10u);
        r.s0 = READ64(frame);
        r.f20 = LWC1(frame + 0x90u);
        r.sp = sext32(frame + 0xA0u);
        storeFloor(r, ctx);
        ctx->pc = lo32(r.ra);
    }

    // ---- quaternionSlerp (0x2b4080)
    //
    // quaternionSlerp(q0, q1, out, t): the spherical interpolation. t = 0
    // and t = 1 copy an input (VU0 quadwords). Otherwise q1 is negated when
    // the two are farther apart than their sum (VU0 squares, summed on the
    // FPU), and the weights are sin((1-t)a)/sin(a), sin(ta)/sin(a) with
    // a = acosf(dot) (calls) when the dot keeps it away from both 1 and -1,
    // linear weights near 1, and sin((1-t)pi/2), sin(t pi/2) weights
    // (gp-0x703C) against the perpendicular near -1.

    struct SlerpRegs
    {
        uint64_t at, v0, v1, s0, s1, sp, ra;
        float f0, f1, f2, f3, f4, f5, f6, f7, f8, f9, f12, f20, f21, f22;
        __m128 vf1, vf2;
        uint32_t fcr31;
    };

    TS_INL void loadSlerp(SlerpRegs &r, const R5900Context *ctx)
    {
        LOAD_GPR(at, 1);
        LOAD_GPR(v0, 2);
        LOAD_GPR(v1, 3);
        LOAD_GPR(s0, 16);
        LOAD_GPR(s1, 17);
        LOAD_GPR(sp, 29);
        LOAD_GPR(ra, 31);
        LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9);
        LOAD_F(12); LOAD_F(20); LOAD_F(21); LOAD_F(22);
        r.vf1 = ctx->vu0_vf[1];
        r.vf2 = ctx->vu0_vf[2];
        r.fcr31 = ctx->fcr31;
    }

    TS_INL void storeSlerp(const SlerpRegs &r, R5900Context *ctx)
    {
        STORE_GPR(at, 1);
        STORE_GPR(v0, 2);
        STORE_GPR(v1, 3);
        STORE_GPR(s0, 16);
        STORE_GPR(s1, 17);
        STORE_GPR(sp, 29);
        STORE_GPR(ra, 31);
        STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9);
        STORE_F(12); STORE_F(20); STORE_F(21); STORE_F(22);
        ctx->vu0_vf[1] = r.vf1;
        ctx->vu0_vf[2] = r.vf2;
        ctx->fcr31 = r.fcr31;
    }

    void nativeQuaternionSlerp(G_ARGS)
    {
        SlerpRegs r;
        loadSlerp(r, ctx);
        const uint32_t gp = GPR_U32(ctx, 28), frame = lo32(r.sp) - 0x80u;
        const uint64_t a1 = GPR_U64(ctx, 5);
        const uint32_t q1 = lo32(a1);
        r.sp = sext32(frame);
        r.f0 = floatOf(0u);
        SWC1(frame + 0x70u, r.f22);
        r.f22 = FPU_MOV_S(r.f12);
        WRITE64(frame + 0x40u, r.s1);
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f22, r.f0));
        WRITE64(frame + 0x30u, r.s0);
        WRITE64(frame + 0x50u, r.ra);
        r.s0 = GPR_U64(ctx, 4);
        SWC1(frame + 0x68u, r.f21);
        r.s1 = GPR_U64(ctx, 6);
        SWC1(frame + 0x60u, r.f20);
        const uint32_t q0 = lo32(r.s0), out = lo32(r.s1);
        bool copied = false;
        if ((r.fcr31 & kCondition) != 0u)
        {
            r.vf1 = _mm_castsi128_ps(READ128(q0));
            WRITE128(out, _mm_castps_si128(r.vf1));
            copied = true;
        }
        else
        {
            r.at = 0x3F800000u;
            r.f0 = floatOf(0x3F800000u);
            r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f22, r.f0));
            r.v0 = addiu(frame, 0x10);
            if ((r.fcr31 & kCondition) != 0u)
            {
                r.vf1 = _mm_castsi128_ps(READ128(q1));
                WRITE128(out, _mm_castps_si128(r.vf1));
                copied = true;
            }
        }
        if (copied)
        {
            r.ra = READ64(frame + 0x50u);
        }
        else
        {
            // 0x2b40ec: |q0 - q1|^2 and |q0 + q1|^2 on the frame.
            r.vf1 = _mm_castsi128_ps(READ128(q0));
            r.vf2 = _mm_castsi128_ps(READ128(q1));
            r.vf1 = PS2_VSUB(r.vf1, r.vf2);
            r.vf1 = PS2_VMUL(r.vf1, r.vf1);
            WRITE128(lo32(r.v0), _mm_castps_si128(r.vf1));
            r.v1 = addiu(frame, 0x20);
            r.vf1 = _mm_castsi128_ps(READ128(q0));
            r.vf2 = _mm_castsi128_ps(READ128(q1));
            r.vf1 = PS2_VADD(r.vf1, r.vf2);
            r.vf1 = PS2_VMUL(r.vf1, r.vf1);
            WRITE128(lo32(r.v1), _mm_castps_si128(r.vf1));
            r.f2 = LWC1(frame + 0x14u);
            r.f3 = LWC1(frame + 0x24u);
            r.f1 = LWC1(frame + 0x10u);
            r.f0 = LWC1(frame + 0x20u);
            r.f1 = FPU_ADD_S(r.f1, r.f2);
            r.f4 = LWC1(frame + 0x18u);
            r.f0 = FPU_ADD_S(r.f0, r.f3);
            r.f5 = LWC1(frame + 0x28u);
            r.f2 = LWC1(frame + 0x1Cu);
            r.f1 = FPU_ADD_S(r.f1, r.f4);
            r.f3 = LWC1(frame + 0x2Cu);
            r.f0 = FPU_ADD_S(r.f0, r.f5);
            r.f1 = FPU_ADD_S(r.f1, r.f2);
            r.f0 = FPU_ADD_S(r.f0, r.f3);
            r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f1));
            if ((r.fcr31 & kCondition) != 0u)
            {
                r.vf1 = _mm_castsi128_ps(READ128(q1));
                r.vf2 = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]);
                r.vf2 = PS2_VSUB(r.vf2, r.vf1);
                WRITE128(frame, _mm_castps_si128(r.vf2));
            }
            else
            {
                r.vf1 = _mm_castsi128_ps(READ128(q1));
                WRITE128(frame, _mm_castps_si128(r.vf1));
            }
            r.f8 = LWC1(q0);
            // 0x2b4180: the dot product.
            r.f7 = LWC1(frame);
            r.f0 = LWC1(q0 + 4u);
            r.f6 = LWC1(frame + 4u);
            r.f1 = FPU_MUL_S(r.f8, r.f7);
            r.f3 = LWC1(q0 + 8u);
            r.f0 = FPU_MUL_S(r.f0, r.f6);
            r.f5 = LWC1(frame + 8u);
            r.f2 = LWC1(q0 + 0xCu);
            r.f3 = FPU_MUL_S(r.f3, r.f5);
            r.f4 = LWC1(frame + 0xCu);
            r.f1 = FPU_ADD_S(r.f1, r.f0);
            r.at = 0x3F800000u;
            r.f21 = floatOf(0x3F800000u);
            r.f2 = FPU_MUL_S(r.f2, r.f4);
            r.at = 0x34000000u;
            r.f9 = floatOf(0x34000000u);
            r.f1 = FPU_ADD_S(r.f1, r.f3);
            r.f12 = FPU_ADD_S(r.f1, r.f2);
            r.f0 = FPU_ADD_S(r.f12, r.f21);
            r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f9, r.f0));
            if ((r.fcr31 & kCondition) == 0u)
            {
                // 0x2b42a4: opposite quaternions: against the perpendicular.
                r.f12 = FPU_SUB_S(r.f21, r.f22);
                r.f20 = LWC1(gp - 0x703Cu);
                r.f12 = FPU_MUL_S(r.f12, r.f20);
                storeSlerp(r, ctx);
                if (!guestCall(G_PASS, 0x2D7398u, 0x2B42A8u, 0x2B42B0u))
                    return;
                loadSlerp(r, ctx);
                r.f12 = FPU_MUL_S(r.f22, r.f20);
                r.f20 = FPU_MOV_S(r.f0);
                storeSlerp(r, ctx);
                if (!guestCall(G_PASS, 0x2D7398u, 0x2B42B4u, 0x2B42BCu))
                    return;
                loadSlerp(r, ctx);
                r.f12 = FPU_MOV_S(r.f0);
                r.f1 = LWC1(q0);
                r.f0 = LWC1(frame);
                r.f1 = FPU_MUL_S(r.f20, r.f1);
                r.f2 = LWC1(frame + 4u);
                r.f0 = FPU_MUL_S(r.f12, r.f0);
                r.f3 = LWC1(frame + 8u);
                r.f4 = LWC1(frame + 0xCu);
                r.f2 = FPU_MUL_S(r.f12, r.f2);
                r.f3 = FPU_MUL_S(r.f12, r.f3);
                r.f1 = FPU_SUB_S(r.f1, r.f0);
                r.f4 = FPU_MUL_S(r.f12, r.f4);
                SWC1(out, r.f1);
                r.f0 = LWC1(q0 + 4u);
                r.f0 = FPU_MUL_S(r.f20, r.f0);
                r.f0 = FPU_SUB_S(r.f0, r.f2);
                SWC1(out + 4u, r.f0);
                r.f1 = LWC1(q0 + 8u);
                r.f1 = FPU_MUL_S(r.f20, r.f1);
                r.f1 = FPU_SUB_S(r.f1, r.f3);
                SWC1(out + 8u, r.f1);
                r.f0 = LWC1(q0 + 0xCu);
                r.f0 = FPU_MUL_S(r.f20, r.f0);
                r.f0 = FPU_SUB_S(r.f0, r.f4);
            }
            else
            {
                r.f0 = FPU_SUB_S(r.f21, r.f12);
                r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f9, r.f0));
                if ((r.fcr31 & kCondition) == 0u)
                {
                    // Nearly equal: linear weights.
                    r.f20 = FPU_SUB_S(r.f21, r.f22);
                    r.f12 = FPU_MOV_S(r.f22);
                }
                else
                {
                    storeSlerp(r, ctx);
                    if (!guestCall(G_PASS, 0x2D7B68u, 0x2B41F0u, 0x2B41F8u))
                        return;
                    loadSlerp(r, ctx);
                    r.f20 = FPU_MOV_S(r.f0);
                    r.f12 = FPU_MOV_S(r.f20);
                    storeSlerp(r, ctx);
                    if (!guestCall(G_PASS, 0x2D7398u, 0x2B41FCu, 0x2B4204u))
                        return;
                    loadSlerp(r, ctx);
                    r.f12 = FPU_SUB_S(r.f21, r.f22);
                    r.f21 = FPU_MOV_S(r.f0);
                    r.f12 = FPU_MUL_S(r.f12, r.f20);
                    r.f12 = divS(r.f12, r.f21, r.fcr31);
                    storeSlerp(r, ctx);
                    if (!guestCall(G_PASS, 0x2D7398u, 0x2B421Cu, 0x2B4224u))
                        return;
                    loadSlerp(r, ctx);
                    r.f12 = FPU_MUL_S(r.f22, r.f20);
                    r.f20 = FPU_MOV_S(r.f0);
                    storeSlerp(r, ctx);
                    if (!guestCall(G_PASS, 0x2D7398u, 0x2B4228u, 0x2B4230u))
                        return;
                    loadSlerp(r, ctx);
                    r.f12 = divS(r.f0, r.f21, r.fcr31);
                    r.f8 = LWC1(q0);
                    r.f7 = LWC1(frame);
                    r.f6 = LWC1(frame + 4u);
                    r.f5 = LWC1(frame + 8u);
                    r.f4 = LWC1(frame + 0xCu);
                }
                // 0x2b4258
                r.f0 = FPU_MUL_S(r.f12, r.f7);
                r.f1 = FPU_MUL_S(r.f20, r.f8);
                r.f2 = FPU_MUL_S(r.f12, r.f6);
                r.f3 = FPU_MUL_S(r.f12, r.f5);
                r.f1 = FPU_ADD_S(r.f1, r.f0);
                r.f4 = FPU_MUL_S(r.f12, r.f4);
                SWC1(out, r.f1);
                r.f0 = LWC1(q0 + 4u);
                r.f0 = FPU_MUL_S(r.f20, r.f0);
                r.f0 = FPU_ADD_S(r.f0, r.f2);
                SWC1(out + 4u, r.f0);
                r.f1 = LWC1(q0 + 8u);
                r.f1 = FPU_MUL_S(r.f20, r.f1);
                r.f1 = FPU_ADD_S(r.f1, r.f3);
                SWC1(out + 8u, r.f1);
                r.f0 = LWC1(q0 + 0xCu);
                r.f0 = FPU_MUL_S(r.f20, r.f0);
                r.f0 = FPU_ADD_S(r.f0, r.f4);
            }
            // 0x2b431c
            SWC1(out + 0xCu, r.f0);
            r.ra = READ64(frame + 0x50u);
        }
        // 0x2b4324
        r.s1 = READ64(frame + 0x40u);
        r.s0 = READ64(frame + 0x30u);
        r.f22 = LWC1(frame + 0x70u);
        r.f21 = LWC1(frame + 0x68u);
        r.f20 = LWC1(frame + 0x60u);
        r.sp = sext32(frame + 0x80u);
        storeSlerp(r, ctx);
        ctx->pc = lo32(r.ra);
    }

    // ---- __ieee754_acosf (0x2d9818)
    //
    // fdlibm's acosf: pi/2 - x*(1 + p(x^2)/q(x^2)) for |x| < 0.5, and for
    // larger |x| through sqrt((1 - |x|)/2) (the square root is
    // __ieee754_sqrtf, transcribed below and inlined). The register
    // side-effects of the two square roots are the original's.

    struct SqrtRegs
    {
        uint64_t v0, v1, a0, a1, a2, a3, t0;
        float f0, f12;
    };

    // __ieee754_sqrtf(x f12) at 0x2daf40, for +0 <= x <= +Inf: round to
    // nearest whatever the FPU mode, one result bit per pass, as integers.
    TS_INL void ieeeSqrtf(SqrtRegs &r)
    {
        const uint32_t hx = bitsOf(r.f12);
        r.a1 = sext32(hx); // mfc1 + daddu
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

    // The polynomial coefficients.
    constexpr uint32_t kAcosP0 = 0x3E2AAAABu, kAcosP1 = 0xBEA6B090u, kAcosP2 = 0x3E4E0AA8u, kAcosP3 = 0xBD241146u,
                       kAcosP4 = 0x3A4F7F04u, kAcosP5 = 0x3811EF08u;
    constexpr uint32_t kAcosQ1 = 0xC019D139u, kAcosQ2 = 0x4001572Du, kAcosQ3 = 0xBF303361u, kAcosQ4 = 0x3D9DC62Eu;
    constexpr uint32_t kOne = 0x3F800000u, kHalf = 0x3F000000u, kPiLow = 0x33A22168u, kPio2Hi = 0x3FC90FDAu,
                       kPio2 = 0x3FC90FDBu, kPi = 0x40490FDBu, kPiHi = 0x40490FDAu;

    void nativeIeee754Acosf(G_ARGS)
    {
        uint64_t at = GPR_U64(ctx, 1), v0, v1, a0, a1, a2 = GPR_U64(ctx, 6), a3 = GPR_U64(ctx, 7), t0 = GPR_U64(ctx, 8), ra;
        float f0 = ctx->f[0], f1 = ctx->f[1], f2 = ctx->f[2], f3 = ctx->f[3], f4 = ctx->f[4], f5 = ctx->f[5], f6 = ctx->f[6],
              f7 = ctx->f[7], f8 = ctx->f[8], f9 = ctx->f[9], f10 = ctx->f[10], f11, f12 = ctx->f[12], f20, f21, f22;
        uint32_t fcr31 = ctx->fcr31;
        const uint32_t sp = GPR_U32(ctx, 29) - 0x30u;
        f11 = FPU_MOV_S(f12);
        WRITE64(sp, GPR_U64(ctx, 31));
        SWC1(sp + 0x20u, ctx->f[22]);
        SWC1(sp + 0x18u, ctx->f[21]);
        f22 = ctx->f[22];
        f21 = ctx->f[21];
        f20 = ctx->f[20];
        v0 = sext32(bitsOf(f11));
        a0 = v0;
        v0 = 0x7FFFFFFFu;
        a1 = 0x3F800000u;
        v1 = a0 & v0;
        SWC1(sp + 0x10u, f20);
        ra = GPR_U64(ctx, 31);
        // Where the restore starts: the ra load, the f22 load, or the f21 load.
        enum
        {
            kFromRa,
            kFromF22,
            kFromF21
        } exit = kFromRa;
        if (v1 == a1)
        {
            // |x| == 1: 0 or pi.
            f0 = floatOf(0u);
            ra = READ64(sp);
            if (static_cast<int64_t>(a0) > 0)
            {
                exit = kFromF22;
            }
            else
            {
                at = kPi;
                f0 = floatOf(kPi);
                f22 = LWC1(sp + 0x20u);
                exit = kFromF21;
            }
        }
        else
        {
            v0 = slt(a1, v1);
            ra = READ64(sp);
            if (v0 != 0u)
            {
                // |x| > 1 (or NaN): NaN through (x - x) / (x - x).
                f0 = FPU_SUB_S(f11, f11);
                f0 = divS(f0, f0, fcr31);
                f22 = LWC1(sp + 0x20u);
                exit = kFromF21;
            }
            else
            {
                v0 = 0x3EFFFFFFu;
                v0 = slt(v0, v1);
                const bool large = v0 != 0u;
                v0 = sext32(0x23000000u);
                if (!large)
                {
                    v0 = slt(v0, v1);
                    if (v0 == 0u)
                    {
                        // |x| < 2^-57: pi/2.
                        at = kPio2;
                        f0 = floatOf(kPio2);
                        ra = READ64(sp);
                        exit = kFromF22;
                    }
                    else
                    {
                        // 0x2d98c8: |x| < 0.5
                        f21 = FPU_MUL_S(f11, f11);
                        f1 = floatOf(kAcosP5);
                        f3 = floatOf(kAcosP4);
                        f6 = floatOf(kAcosP3);
                        f1 = FPU_MUL_S(f21, f1);
                        f2 = floatOf(kAcosQ4);
                        f0 = floatOf(kAcosQ3);
                        f2 = FPU_MUL_S(f21, f2);
                        f7 = floatOf(kAcosP2);
                        f1 = FPU_ADD_S(f1, f3);
                        f4 = floatOf(kAcosQ2);
                        f9 = floatOf(kAcosP1);
                        f2 = FPU_ADD_S(f2, f0);
                        f3 = floatOf(kAcosQ1);
                        f1 = FPU_MUL_S(f21, f1);
                        f8 = floatOf(kAcosP0);
                        f5 = floatOf(kOne);
                        f2 = FPU_MUL_S(f21, f2);
                        f0 = floatOf(kPiLow);
                        f1 = FPU_ADD_S(f1, f6);
                        at = kPio2Hi;
                        f10 = floatOf(kPio2Hi);
                        f2 = FPU_ADD_S(f2, f4);
                        f1 = FPU_MUL_S(f21, f1);
                        f2 = FPU_MUL_S(f21, f2);
                        f1 = FPU_ADD_S(f1, f7);
                        f2 = FPU_ADD_S(f2, f3);
                        f1 = FPU_MUL_S(f21, f1);
                        f2 = FPU_MUL_S(f21, f2);
                        f1 = FPU_ADD_S(f1, f9);
                        f22 = FPU_ADD_S(f2, f5);
                        f1 = FPU_MUL_S(f21, f1);
                        f1 = FPU_ADD_S(f1, f8);
                        f20 = FPU_MUL_S(f21, f1);
                        f12 = divS(f20, f22, fcr31);
                        f1 = FPU_MUL_S(f11, f12);
                        f0 = FPU_SUB_S(f0, f1);
                        f0 = FPU_SUB_S(f11, f0);
                        f0 = FPU_SUB_S(f10, f0);
                        ra = READ64(sp);
                        exit = kFromF22;
                    }
                }
                else if (neg64(a0))
                {
                    // 0x2d99d4: x <= -0.5: pi - 2*asin(sqrt((1 + x)/2))
                    at = kOne;
                    f10 = floatOf(kOne);
                    at = kHalf;
                    f3 = floatOf(kHalf);
                    f2 = FPU_ADD_S(f11, f10);
                    f0 = floatOf(kAcosP5);
                    f4 = floatOf(kAcosP4);
                    f7 = floatOf(kAcosP3);
                    f21 = FPU_MUL_S(f2, f3);
                    f1 = floatOf(kAcosQ4);
                    f2 = floatOf(kAcosQ3);
                    f8 = floatOf(kAcosP2);
                    f0 = FPU_MUL_S(f21, f0);
                    f3 = floatOf(kAcosQ2);
                    f1 = FPU_MUL_S(f21, f1);
                    f9 = floatOf(kAcosP1);
                    f5 = floatOf(kAcosQ1);
                    f12 = FPU_MOV_S(f21);
                    f0 = FPU_ADD_S(f0, f4);
                    at = kAcosP0;
                    f6 = floatOf(kAcosP0);
                    f1 = FPU_ADD_S(f1, f2);
                    f0 = FPU_MUL_S(f21, f0);
                    f1 = FPU_MUL_S(f21, f1);
                    f0 = FPU_ADD_S(f0, f7);
                    f1 = FPU_ADD_S(f1, f3);
                    f0 = FPU_MUL_S(f21, f0);
                    f1 = FPU_MUL_S(f21, f1);
                    f0 = FPU_ADD_S(f0, f8);
                    f1 = FPU_ADD_S(f1, f5);
                    f0 = FPU_MUL_S(f21, f0);
                    f1 = FPU_MUL_S(f21, f1);
                    f0 = FPU_ADD_S(f0, f9);
                    f22 = FPU_ADD_S(f1, f10);
                    f0 = FPU_MUL_S(f21, f0);
                    f0 = FPU_ADD_S(f0, f6);
                    f20 = FPU_MUL_S(f21, f0);
                    SqrtRegs s;
                    s.f12 = f12;
                    s.v0 = v0;
                    s.v1 = v1;
                    s.a0 = a0;
                    s.a1 = a1;
                    s.a2 = a2;
                    s.a3 = a3;
                    s.t0 = t0;
                    ieeeSqrtf(s);
                    v0 = s.v0;
                    v1 = s.v1;
                    a0 = s.a0;
                    a1 = s.a1;
                    a2 = s.a2;
                    a3 = s.a3;
                    t0 = s.t0;
                    f0 = s.f0;
                    ra = 0x2D9AB8u;
                    // 0x2d9ab8
                    f10 = FPU_MOV_S(f0);
                    at = kPiLow;
                    f1 = floatOf(kPiLow);
                    f12 = divS(f20, f22, fcr31);
                    at = kPiHi;
                    f2 = floatOf(kPiHi);
                    f0 = FPU_MUL_S(f12, f10);
                    f0 = FPU_SUB_S(f0, f1);
                    f0 = FPU_ADD_S(f10, f0);
                    f0 = FPU_ADD_S(f0, f0);
                    f0 = FPU_SUB_S(f2, f0);
                    ra = READ64(sp);
                    exit = kFromF22;
                }
                else
                {
                    // 0x2d9af8: x >= 0.5: 2*asin(sqrt((1 - x)/2)), the root split into halves.
                    at = kOne;
                    f20 = floatOf(kOne);
                    at = kHalf;
                    f1 = floatOf(kHalf);
                    f0 = FPU_SUB_S(f20, f11);
                    f21 = FPU_MUL_S(f0, f1);
                    f12 = FPU_MOV_S(f21);
                    SqrtRegs s;
                    s.f12 = f12;
                    s.v0 = v0;
                    s.v1 = v1;
                    s.a0 = a0;
                    s.a1 = a1;
                    s.a2 = a2;
                    s.a3 = a3;
                    s.t0 = t0;
                    ieeeSqrtf(s);
                    v0 = s.v0;
                    v1 = s.v1;
                    a0 = s.a0;
                    a1 = s.a1;
                    a2 = s.a2;
                    a3 = s.a3;
                    t0 = s.t0;
                    f0 = s.f0;
                    ra = 0x2D9B18u;
                    // 0x2d9b18
                    v1 = sext32(bitsOf(f0));
                    f10 = floatOf(lo32(v1));
                    v0 = sext32(0xFFFFF000u);
                    v1 &= v0;
                    f0 = floatOf(lo32(v1));
                    f2 = FPU_MUL_S(f0, f0);
                    f0 = floatOf(kAcosP5);
                    f4 = floatOf(kAcosP4);
                    f0 = FPU_MUL_S(f21, f0);
                    f1 = floatOf(kAcosQ4);
                    f9 = floatOf(kAcosP3);
                    f2 = FPU_SUB_S(f21, f2);
                    f1 = FPU_MUL_S(f21, f1);
                    f5 = floatOf(kAcosQ3);
                    f0 = FPU_ADD_S(f0, f4);
                    f8 = floatOf(kAcosP1);
                    f6 = floatOf(lo32(v1));
                    f1 = FPU_ADD_S(f1, f5);
                    f4 = floatOf(kAcosQ2);
                    f0 = FPU_MUL_S(f21, f0);
                    f7 = floatOf(kAcosP0);
                    f3 = FPU_ADD_S(f10, f6);
                    f6 = floatOf(kAcosP2);
                    f1 = FPU_MUL_S(f21, f1);
                    f0 = FPU_ADD_S(f0, f9);
                    f2 = divS(f2, f3, fcr31);
                    f1 = FPU_ADD_S(f1, f4);
                    at = sext32(kAcosQ1);
                    f3 = floatOf(kAcosQ1);
                    f0 = FPU_MUL_S(f21, f0);
                    f1 = FPU_MUL_S(f21, f1);
                    f0 = FPU_ADD_S(f0, f6);
                    f1 = FPU_ADD_S(f1, f3);
                    f0 = FPU_MUL_S(f21, f0);
                    f1 = FPU_MUL_S(f21, f1);
                    f0 = FPU_ADD_S(f0, f8);
                    f22 = FPU_ADD_S(f1, f20);
                    f0 = FPU_MUL_S(f21, f0);
                    f1 = floatOf(lo32(v1));
                    f0 = FPU_ADD_S(f0, f7);
                    f20 = FPU_MUL_S(f21, f0);
                    f12 = divS(f20, f22, fcr31);
                    f0 = FPU_MUL_S(f12, f10);
                    f0 = FPU_ADD_S(f0, f2);
                    f0 = FPU_ADD_S(f1, f0);
                    f0 = FPU_ADD_S(f0, f0);
                    ra = READ64(sp);
                    exit = kFromF22;
                }
            }
        }
        if (exit != kFromF21)
            f22 = LWC1(sp + 0x20u);
        f21 = LWC1(sp + 0x18u);
        f20 = LWC1(sp + 0x10u);
        SET_GPR_U64(ctx, 1, at);
        SET_GPR_U64(ctx, 2, v0);
        SET_GPR_U64(ctx, 3, v1);
        SET_GPR_U64(ctx, 4, a0);
        SET_GPR_U64(ctx, 5, a1);
        SET_GPR_U64(ctx, 6, a2);
        SET_GPR_U64(ctx, 7, a3);
        SET_GPR_U64(ctx, 8, t0);
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(sp + 0x30u));
        SET_GPR_U64(ctx, 31, ra);
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
        ctx->f[20] = f20;
        ctx->f[21] = f21;
        ctx->f[22] = f22;
        ctx->fcr31 = fcr31;
        ctx->pc = lo32(ra);
    }

    // ---- bgPortalCrossed (0x258cf0)
    //
    // bgPortalCrossed(from, to, room, previousRoom, strict): the room the
    // segment from..to ends in. For each portal of the room (the room table
    // at gp-0x5DC0, 0x2C bytes each, its portal index list at +4; the
    // portal pointers at gp-0x5DBC) that is not the way back and faces the
    // start (bgPortalBackFaceTest, a call), the segment's crossing of the
    // portal's plane within [0, 1] is tested against every portal edge
    // (each cross product against the previous one's); the first portal
    // crossed gives the room on its other side. A zero segment, no
    // crossing: the room itself.

    struct CrossedRegs
    {
        uint64_t at, v0, v1, a0, a1, a2, a3, s0, s1, s2, s3, s4, s5, s6, s7, fp, sp, ra, lo, hi;
        float f0, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14;
        uint32_t fcr31;
    };

    TS_INL void loadCrossed(CrossedRegs &r, const R5900Context *ctx)
    {
        LOAD_GPR(at, 1);
        LOAD_GPR(v0, 2);
        LOAD_GPR(v1, 3);
        LOAD_GPR(a0, 4);
        LOAD_GPR(a1, 5);
        LOAD_GPR(a2, 6);
        LOAD_GPR(a3, 7);
        LOAD_GPR(s0, 16);
        LOAD_GPR(s1, 17);
        LOAD_GPR(s2, 18);
        LOAD_GPR(s3, 19);
        LOAD_GPR(s4, 20);
        LOAD_GPR(s5, 21);
        LOAD_GPR(s6, 22);
        LOAD_GPR(s7, 23);
        LOAD_GPR(fp, 30);
        LOAD_GPR(sp, 29);
        LOAD_GPR(ra, 31);
        r.lo = ctx->lo;
        r.hi = ctx->hi;
        LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9);
        LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(13); LOAD_F(14);
        r.fcr31 = ctx->fcr31;
    }

    TS_INL void storeCrossed(const CrossedRegs &r, R5900Context *ctx)
    {
        STORE_GPR(at, 1);
        STORE_GPR(v0, 2);
        STORE_GPR(v1, 3);
        STORE_GPR(a0, 4);
        STORE_GPR(a1, 5);
        STORE_GPR(a2, 6);
        STORE_GPR(a3, 7);
        STORE_GPR(s0, 16);
        STORE_GPR(s1, 17);
        STORE_GPR(s2, 18);
        STORE_GPR(s3, 19);
        STORE_GPR(s4, 20);
        STORE_GPR(s5, 21);
        STORE_GPR(s6, 22);
        STORE_GPR(s7, 23);
        STORE_GPR(fp, 30);
        STORE_GPR(sp, 29);
        STORE_GPR(ra, 31);
        ctx->lo = r.lo;
        ctx->hi = r.hi;
        STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9);
        STORE_F(10); STORE_F(11); STORE_F(12); STORE_F(13); STORE_F(14);
        ctx->fcr31 = r.fcr31;
    }

    void nativeBgPortalCrossed(G_ARGS)
    {
        CrossedRegs r;
        loadCrossed(r, ctx);
        const uint32_t gp = GPR_U32(ctx, 28), frame = lo32(r.sp) - 0x100u;
        const uint64_t t0 = GPR_U64(ctx, 8);
        r.sp = sext32(frame);
        r.v0 = 0x2Cu;
        WRITE64(frame + 0xA0u, r.s4);
        WRITE64(frame + 0x90u, r.s3);
        r.s4 = r.a2;
        WRITE64(frame + 0x80u, r.s2);
        r.v0 = mult(r.s4, r.v0, r.lo, r.hi);
        WRITE64(frame + 0xF0u, r.ra);
        r.s2 = r.a1;
        WRITE64(frame + 0xE0u, r.fp);
        r.s3 = r.a0;
        WRITE64(frame + 0xD0u, r.s7);
        WRITE64(frame + 0xC0u, r.s6);
        WRITE64(frame + 0xB0u, r.s5);
        WRITE64(frame + 0x70u, r.s1);
        WRITE64(frame + 0x60u, r.s0);
        const uint32_t from = lo32(r.s3), to = lo32(r.s2);
        r.f1 = floatOf(0u);
        r.f0 = LWC1(to);
        r.v1 = LW(gp - 0x5DC0u);
        WRITE32(frame + 0x50u, lo32(r.a3));
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f0, r.f1));
        WRITE32(frame + 0x54u, lo32(t0));
        r.v0 = addu(r.v0, r.v1);
        const bool xZero = (r.fcr31 & kCondition) != 0u;
        r.v0 = LW(lo32(r.v0) + 4u);
        bool search = true;
        if (xZero)
        {
            r.f0 = LWC1(to + 4u);
            r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f0, r.f1));
            if ((r.fcr31 & kCondition) != 0u)
            {
                r.f0 = LWC1(to + 8u);
                r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f0, r.f1));
                search = (r.fcr31 & kCondition) == 0u;
            }
        }
        if (search)
        {
            // 0x258d84
            r.s7 = LW(lo32(r.v0));
            r.s6 = 0u;
            if (!lez64(r.s7))
            {
                r.s5 = addiu(r.v0, 4);
                r.fp = 0xCu;
                for (;;)
                {
                    // 0x258d98: one portal of the room.
                    r.v0 = LW(lo32(r.s5));
                    r.v1 = LW(gp - 0x5DBCu);
                    r.v0 = sll32(r.v0, 2);
                    r.v0 = addu(r.v0, r.v1);
                    r.s0 = LW(lo32(r.v0));
                    const uint32_t portal = lo32(r.s0);
                    r.s1 = LW(portal);
                    if (r.s1 == r.s4)
                        r.s1 = LW(portal + 4u);
                    r.v0 = LW(frame + 0x50u);
                    bool crossed = false;
                    if (r.s1 != r.v0)
                    {
                        r.a0 = r.s4;
                        r.a1 = r.s3;
                        r.a2 = r.s0;
                        storeCrossed(r, ctx);
                        if (!guestCall(G_PASS, 0x257860u, 0x258DCCu, 0x258DD4u))
                            return;
                        loadCrossed(r, ctx);
                        if (r.v0 == 0u)
                        {
                            // 0x258ddc: where the segment meets the portal's plane.
                            r.v0 = addiu(r.s0, 8);
                            const uint32_t normal = lo32(r.v0);
                            r.f6 = LWC1(portal + 8u);
                            r.f7 = LWC1(normal + 4u);
                            r.f13 = LWC1(to);
                            r.f14 = LWC1(to + 4u);
                            r.f3 = FPU_MUL_S(r.f6, r.f13);
                            r.f8 = LWC1(normal + 8u);
                            r.f4 = FPU_MUL_S(r.f7, r.f14);
                            r.f11 = LWC1(to + 8u);
                            r.f0 = LWC1(portal + 0x18u);
                            r.f1 = LWC1(portal + 0x1Cu);
                            r.f5 = FPU_MUL_S(r.f8, r.f11);
                            r.f3 = FPU_ADD_S(r.f3, r.f4);
                            r.f2 = LWC1(portal + 0x20u);
                            r.f0 = FPU_MUL_S(r.f6, r.f0);
                            r.f1 = FPU_MUL_S(r.f7, r.f1);
                            r.f3 = FPU_ADD_S(r.f3, r.f5);
                            r.f12 = floatOf(0u);
                            r.f0 = FPU_ADD_S(r.f0, r.f1);
                            r.f2 = FPU_MUL_S(r.f8, r.f2);
                            r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f3, r.f12));
                            r.f4 = FPU_ADD_S(r.f0, r.f2);
                            if ((r.fcr31 & kCondition) == 0u)
                            {
                                r.f9 = LWC1(from);
                                r.f10 = LWC1(from + 4u);
                                r.f0 = FPU_MUL_S(r.f6, r.f9);
                                r.f5 = LWC1(from + 8u);
                                r.f1 = FPU_MUL_S(r.f7, r.f10);
                                r.f2 = FPU_MUL_S(r.f8, r.f5);
                                r.f0 = FPU_ADD_S(r.f0, r.f1);
                                r.f0 = FPU_ADD_S(r.f0, r.f2);
                                r.f0 = FPU_SUB_S(r.f4, r.f0);
                                r.f3 = divS(r.f0, r.f3, r.fcr31);
                                r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f3, r.f12));
                                bool within = (r.fcr31 & kCondition) == 0u;
                                if (within)
                                {
                                    r.at = 0x3F800000u;
                                    r.f0 = floatOf(0x3F800000u);
                                    r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f3));
                                    r.v0 = LW(frame + 0x54u);
                                    if ((r.fcr31 & kCondition) != 0u)
                                        within = r.v0 != 0u;
                                }
                                if (within)
                                {
                                    // 0x258e9c: the crossing point, then the edges.
                                    r.f2 = FPU_MUL_S(r.f3, r.f11);
                                    r.a3 = LHU(portal + 0x14u);
                                    r.f1 = FPU_MUL_S(r.f3, r.f13);
                                    r.a1 = 0u;
                                    r.f0 = FPU_MUL_S(r.f3, r.f14);
                                    r.a2 = 0u;
                                    r.f2 = FPU_ADD_S(r.f5, r.f2);
                                    r.f6 = FPU_ADD_S(r.f9, r.f1);
                                    r.f0 = FPU_ADD_S(r.f10, r.f0);
                                    SWC1(frame + 0x18u, r.f2);
                                    SWC1(frame + 0x10u, r.f6);
                                    SWC1(frame + 0x14u, r.f0);
                                    r.v1 = LH(portal + 0x14u);
                                    r.v0 = mult(r.v1, r.fp, r.lo, r.hi);
                                    r.v0 = addiu(r.v0, 0xC);
                                    const bool edges = !lez64(r.v1);
                                    r.a0 = addu(r.s0, r.v0);
                                    if (edges)
                                    {
                                        r.f10 = FPU_MOV_S(r.f6);
                                        r.f9 = FPU_MOV_S(r.f0);
                                        r.f8 = FPU_MOV_S(r.f2);
                                        r.v0 = mult(r.a1, r.fp, r.lo, r.hi);
                                        for (;;)
                                        {
                                            // 0x258ef0: edge a1 (from the previous vertex), its cross product with the point.
                                            const uint32_t previous = lo32(r.a0);
                                            r.f0 = LWC1(previous);
                                            r.v0 = addiu(r.v0, 0x18);
                                            r.v1 = addu(r.s0, r.v0);
                                            const uint32_t vertex = lo32(r.v1);
                                            r.f6 = LWC1(vertex);
                                            r.f6 = FPU_SUB_S(r.f6, r.f0);
                                            SWC1(frame + 0x20u, r.f6);
                                            r.f0 = LWC1(previous + 4u);
                                            r.f5 = LWC1(vertex + 4u);
                                            r.f5 = FPU_SUB_S(r.f5, r.f0);
                                            SWC1(frame + 0x24u, r.f5);
                                            r.f0 = LWC1(previous + 8u);
                                            r.f3 = LWC1(vertex + 8u);
                                            r.f3 = FPU_SUB_S(r.f3, r.f0);
                                            SWC1(frame + 0x28u, r.f3);
                                            r.f2 = LWC1(vertex);
                                            r.f2 = FPU_SUB_S(r.f2, r.f10);
                                            SWC1(frame + 0x30u, r.f2);
                                            r.f7 = FPU_MUL_S(r.f5, r.f2);
                                            r.f2 = FPU_MUL_S(r.f3, r.f2);
                                            r.f0 = LWC1(vertex + 4u);
                                            r.f0 = FPU_SUB_S(r.f0, r.f9);
                                            SWC1(frame + 0x34u, r.f0);
                                            r.f4 = FPU_MUL_S(r.f6, r.f0);
                                            r.f3 = FPU_MUL_S(r.f3, r.f0);
                                            r.f1 = LWC1(vertex + 8u);
                                            r.f4 = FPU_SUB_S(r.f4, r.f7);
                                            r.f1 = FPU_SUB_S(r.f1, r.f8);
                                            SWC1(frame + 0x48u, r.f4);
                                            r.f6 = FPU_MUL_S(r.f6, r.f1);
                                            SWC1(frame + 0x38u, r.f1);
                                            r.f5 = FPU_MUL_S(r.f5, r.f1);
                                            r.f6 = FPU_SUB_S(r.f2, r.f6);
                                            r.f5 = FPU_SUB_S(r.f5, r.f3);
                                            SWC1(frame + 0x44u, r.f6);
                                            const bool first = lez64(r.a1);
                                            SWC1(frame + 0x40u, r.f5);
                                            if (!first)
                                            {
                                                // Against the previous edge's: a sign change puts the point outside.
                                                r.f0 = LWC1(frame);
                                                r.f2 = LWC1(frame + 4u);
                                                r.f0 = FPU_MUL_S(r.f0, r.f5);
                                                r.f1 = LWC1(frame + 8u);
                                                r.f2 = FPU_MUL_S(r.f2, r.f6);
                                                r.f1 = FPU_MUL_S(r.f1, r.f4);
                                                r.f3 = floatOf(0u);
                                                r.f0 = FPU_ADD_S(r.f0, r.f2);
                                                r.f0 = FPU_ADD_S(r.f0, r.f1);
                                                r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f3));
                                                if ((r.fcr31 & kCondition) != 0u)
                                                    r.a2 = 1u;
                                            }
                                            // 0x258fb4
                                            r.f0 = LWC1(frame + 0x40u);
                                            r.v0 = sll32(r.a3, 16);
                                            r.f1 = LWC1(frame + 0x44u);
                                            r.v0 = sra32(r.v0, 16);
                                            r.f2 = LWC1(frame + 0x48u);
                                            r.a1 = addiu(r.a1, 1);
                                            SWC1(frame, r.f0);
                                            r.a0 = r.v1;
                                            SWC1(frame + 4u, r.f1);
                                            r.v0 = slt(r.a1, r.v0);
                                            const bool more = r.v0 != 0u;
                                            SWC1(frame + 8u, r.f2);
                                            if (!more)
                                                break;
                                            const bool outside = r.a2 != 0u;
                                            r.v0 = mult(r.a1, r.fp, r.lo, r.hi);
                                            if (outside)
                                                break;
                                            storeCrossed(r, ctx);
                                            if (loopCheckpoint(ctx, runtime, 0x258EF0u))
                                                return;
                                        }
                                    }
                                    // 0x258fec
                                    const bool inside = r.a2 == 0u;
                                    r.v0 = r.s1;
                                    if (inside)
                                    {
                                        crossed = true;
                                    }
                                }
                            }
                        }
                    }
                    if (crossed)
                        break;
                    // 0x258ff4: the next portal.
                    r.s6 = addiu(r.s6, 1);
                    r.v0 = slt(r.s6, r.s7);
                    const bool more = r.v0 != 0u;
                    r.s5 = addiu(r.s5, 4);
                    if (!more)
                    {
                        r.v0 = r.s4;
                        break;
                    }
                    storeCrossed(r, ctx);
                    if (loopCheckpoint(ctx, runtime, 0x258D98u))
                        return;
                }
            }
            else
            {
                r.v0 = r.s4;
            }
        }
        else
        {
            r.v0 = r.s4;
        }
        // 0x259008
        r.ra = READ64(frame + 0xF0u);
        r.fp = READ64(frame + 0xE0u);
        r.s7 = READ64(frame + 0xD0u);
        r.s6 = READ64(frame + 0xC0u);
        r.s5 = READ64(frame + 0xB0u);
        r.s4 = READ64(frame + 0xA0u);
        r.s3 = READ64(frame + 0x90u);
        r.s2 = READ64(frame + 0x80u);
        r.s1 = READ64(frame + 0x70u);
        r.s0 = READ64(frame + 0x60u);
        r.sp = sext32(frame + 0x100u);
        storeCrossed(r, ctx);
        ctx->pc = lo32(r.ra);
    }

    // ---- calDoubleFillets (0x214a88)
    //
    // calDoubleFillets(skeleton, bone, t): walks the bone tree (0x50-byte
    // nodes, index-relative to the first word of the node table; a node's
    // kind at +0, its matrix index at +1, its child at +3 and its sibling at
    // +4, as signed bytes). A kind-2 node's matrix is a copy of its child's
    // (calInbetweenMatrix, a call); every node's children are walked unless
    // it is kind 3. The self-call is a host recursion here: the translation
    // makes it a goto and bounces each return through the scheduler.

    struct FilletRegs
    {
        uint64_t v0, v1, a0, a1, a2, a3, t0, t1, s0, s1, sp, ra, lo, hi;
        float f12, f20;
    };

    TS_INL void loadFillet(FilletRegs &r, const R5900Context *ctx)
    {
        LOAD_GPR(v0, 2);
        LOAD_GPR(v1, 3);
        LOAD_GPR(a0, 4);
        LOAD_GPR(a1, 5);
        LOAD_GPR(a2, 6);
        LOAD_GPR(a3, 7);
        LOAD_GPR(t0, 8);
        LOAD_GPR(t1, 9);
        LOAD_GPR(s0, 16);
        LOAD_GPR(s1, 17);
        LOAD_GPR(sp, 29);
        LOAD_GPR(ra, 31);
        r.lo = ctx->lo;
        r.hi = ctx->hi;
        LOAD_F(12);
        LOAD_F(20);
    }

    TS_INL void storeFillet(const FilletRegs &r, R5900Context *ctx)
    {
        STORE_GPR(v0, 2);
        STORE_GPR(v1, 3);
        STORE_GPR(a0, 4);
        STORE_GPR(a1, 5);
        STORE_GPR(a2, 6);
        STORE_GPR(a3, 7);
        STORE_GPR(t0, 8);
        STORE_GPR(t1, 9);
        STORE_GPR(s0, 16);
        STORE_GPR(s1, 17);
        STORE_GPR(sp, 29);
        STORE_GPR(ra, 31);
        ctx->lo = r.lo;
        ctx->hi = r.hi;
        STORE_F(12);
        STORE_F(20);
    }

    // One level: the registers are the context's on entry and on return.
    // false: a callee did not return (the state is in the context).
    bool filletsLevel(G_ARGS, uint32_t depth)
    {
        FilletRegs r;
        loadFillet(r, ctx);
        const uint32_t frame = lo32(r.sp) - 0x40u;
        r.sp = sext32(frame);
        WRITE64(frame + 0x10u, r.s1);
        SWC1(frame + 0x30u, r.f20);
        r.s1 = r.a0;
        WRITE64(frame + 0x20u, r.ra);
        r.f20 = FPU_MOV_S(r.f12);
        WRITE64(frame, r.s0);
        const uint32_t skeleton = lo32(r.s1);
        r.v1 = LW(skeleton);
        for (;;)
        {
            // 0x214aa8: the node.
            r.t0 = 0x50u;
            r.a0 = mult(r.a1, r.t0, r.lo, r.hi);
            r.v0 = LW(lo32(r.v1));
            r.a1 = 2u;
            r.v0 = mult(r.v0, r.t0, r.lo, r.hi);
            r.a2 = subu(r.v1, r.v0);
            r.s0 = addu(r.a2, r.a0);
            const uint32_t node = lo32(r.s0);
            r.v0 = LB(node);
            if (r.v0 != r.a1)
            {
                r.a1 = LB(node + 3u);
            }
            else
            {
                // 0x214ad0: the matrix from the child's.
                r.v0 = LB(node + 3u);
                r.f12 = FPU_MOV_S(r.f20);
                r.v1 = LW(skeleton + 0x58u);
                r.a3 = r.s1;
                r.a0 = mult(r.v0, r.t0, r.lo, r.hi);
                r.t1 = LW(skeleton + 4u);
                r.t0 = LB(node + 1u);
                r.v0 = addu(r.a0, r.a2);
                r.a1 = LB(lo32(r.v0) + 1u);
                r.a2 = sll32(r.t0, 6);
                r.a0 = LW(lo32(r.v1));
                r.a2 = addu(r.t1, r.a2);
                r.a1 = sll32(r.a1, 6);
                r.a0 = addu(r.a0, r.a1);
                r.a1 = addu(r.t1, r.a1);
                storeFillet(r, ctx);
                if (!guestCall(G_PASS, 0x2B5C08u, 0x214B08u, 0x214B10u))
                    return false;
                loadFillet(r, ctx);
                r.a1 = LB(lo32(r.s0) + 3u);
            }
            // 0x214b14: the children, unless kind 3.
            r.v0 = 3u;
            if (!neg64(r.a1))
            {
                r.v1 = LB(lo32(r.s0));
                r.a0 = r.s1;
                if (r.v1 != r.v0)
                {
                    r.f12 = FPU_MOV_S(r.f20);
                    r.ra = 0x214B30u;
                    storeFillet(r, ctx);
                    if (depth >= 64u)
                    {
                        // Deeper than any bone tree: the original takes over this
                        // level and, through the scheduler's bounce via 0x214B30
                        // (every native level above stored its state with that
                        // $ra), every pending level above it.
                        ctx->pc = 0x214A88u;
                        calDoubleFillets_0x214a88(G_PASS);
                        return false;
                    }
                    else if (!filletsLevel(G_PASS, depth + 1u))
                    {
                        return false;
                    }
                    loadFillet(r, ctx);
                }
            }
            // 0x214b30: the sibling.
            r.a1 = LB(lo32(r.s0) + 4u);
            if (neg64(r.a1))
                break;
            r.v1 = LW(skeleton);
            storeFillet(r, ctx);
            if (loopCheckpoint(ctx, runtime, 0x214AA8u))
                return false;
        }
        r.ra = READ64(frame + 0x20u);
        r.s1 = READ64(frame + 0x10u);
        r.s0 = READ64(frame);
        r.f20 = LWC1(frame + 0x30u);
        r.sp = sext32(frame + 0x40u);
        storeFillet(r, ctx);
        ctx->pc = lo32(r.ra);
        return true;
    }

    void nativeCalDoubleFillets(G_ARGS) { filletsLevel(G_PASS, 0u); }

    // ---- The boot-time differential test

    using namespace ts_native_test;

    // Game globals the functions read or write, randomised per case and
    // put back after the test.
    constexpr uint32_t kDlListAddress = kGameGp - 0x6C60u;        // the current display list entry
    constexpr uint32_t kMemdbPointerAddress = kGameGp - 0x49DCu;  // memdbAlloc: the next block
    constexpr uint32_t kMemdbUsedAddress = kGameGp - 0x6570u;     // memdbAlloc: bytes used
    constexpr uint32_t kBlendModeAddress = kGameGp - 0x4B58u;     // dlSetBlend: the current mode
    constexpr uint32_t kBlendTestAddress = kGameGp - 0x464Cu;     // dlSetBlend: the TEST register value
    constexpr uint32_t kClipCountAddress = kGameGp - 0x4754u;     // bgPortalPlaneClip: vertices taken from the pool
    constexpr uint32_t kClipPoolAddress = kGameGp - 0x4758u;      // bgPortalPlaneClip: the vertex pool
    constexpr uint32_t kClipPlanesAddress = kGameGp - 0x4768u;    // bgPortalCalcOutCode: four plane constants
    constexpr uint32_t kFloorStartAddress = 0x003AF9C0u;          // moveFindFloorHeight: the start height
    constexpr uint32_t kSlerpHalfPiAddress = kGameGp - 0x703Cu;   // quaternionSlerp: pi/2
    constexpr uint32_t kAnimScaleAddress = kGameGp - 0x7FB8u;     // extractAnimData: the mounted scale
    constexpr uint32_t kRoomTableAddress = kGameGp - 0x5DC0u;     // bgPortalCrossed: the rooms
    constexpr uint32_t kPortalTableAddress = kGameGp - 0x5DBCu;   // bgPortalCrossed: the portal pointers

    constexpr SavedRegion kTestGlobals[] = {
        {kLibVersion, 4u},        {kDlListAddress, 4u},    {kMemdbPointerAddress, 4u}, {kMemdbUsedAddress, 4u},
        {kBlendModeAddress, 4u},  {kBlendTestAddress, 4u}, {kClipPoolAddress, 8u},    {kClipPlanesAddress, 16u},
        {kFloorStartAddress, 4u}, {kSlerpHalfPiAddress, 4u}, {kAnimScaleAddress, 4u},  {kRoomTableAddress, 8u},
    };
    constexpr uint32_t kTestGlobalBytes = 4u * 9u + 8u + 16u + 8u;

    // The regions outside the scratch each function writes.
    constexpr SavedRegion kDlExtra[] = {{kDlListAddress, 4u}, {kMemdbPointerAddress, 4u}, {kMemdbUsedAddress, 4u}};
    constexpr SavedRegion kBlendExtra[] = {{kDlListAddress, 4u}, {kMemdbPointerAddress, 4u}, {kMemdbUsedAddress, 4u},
                                           {kBlendModeAddress, 4u}};
    constexpr SavedRegion kClipExtra[] = {{kClipCountAddress, 4u}};

    // Scratch layout (offsets from kScratch): the operand slots below 0x180,
    // then each test's structures.
    constexpr uint32_t kAnimObject = 0x200u, kAnimState = 0x2C0u, kAnimChannels = 0x300u, kAnimTable = 0x380u,
                       kAnimData = 0x400u;
    constexpr uint32_t kPolyVertices = 0x400u, kPolyIndices = 0x500u;
    constexpr uint32_t kDlList = 0x600u, kDlBlock = 0x700u;
    constexpr uint32_t kClipIn = 0x600u, kClipOut = 0x700u, kClipVertices = 0x800u, kClipPool = 0x900u;
    constexpr uint32_t kFloorList = 0x600u, kFloorPolygons = 0x700u;
    constexpr uint32_t kRooms = 0x600u, kRoomPortalLists = 0x700u, kPortalPointers = 0x800u, kPortals = 0x900u;
    constexpr uint32_t kFilletSkeleton = 0x500u, kFilletMatrixBase = 0x5F0u, kFilletNodes = 0x700u,
                       kFilletMatrices = 0xA00u, kFilletMatrices2 = 0xB00u, kFilletNodeCount = 8u;

    void fillSane(TestRng &rng, uint8_t *rdram, uint32_t address, uint32_t bytes)
    {
        for (uint32_t offset = 0; offset < bytes; offset += 4u)
            writeTestWord(rdram, address + offset, randomSaneFloatBits(rng));
    }

    void fillAny(TestRng &rng, uint8_t *rdram, uint32_t address, uint32_t bytes)
    {
        for (uint32_t offset = 0; offset < bytes; offset += 4u)
            writeTestWord(rdram, address + offset, randomFloatBits(rng));
    }

    // A small signed value in a register; with `junk`, now and then with
    // junk above bit 31 (which the originals' 32-bit arithmetic drops, and
    // their 64-bit compares keep): only for values that bound no loop.
    void setSmall(TestRng &rng, R5900Context &c, int reg, int32_t low, int32_t high, bool junk = false)
    {
        R5900Context *ctx = &c;
        const int32_t value = low + static_cast<int32_t>(rng.next() % static_cast<uint32_t>(high - low + 1));
        uint64_t bits = sext32(static_cast<uint32_t>(value));
        if (junk && (rng.next() & 15u) == 0u)
            bits = static_cast<uint32_t>(value) | static_cast<uint64_t>(rng.next()) << 32;
        SET_GPR_U64(ctx, reg, bits);
    }

    // matrixScaleSet(m, x, y, z)
    void setupMatrixScale(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        setOperand(rng, c, 4);
        for (int reg = 12; reg <= 14; ++reg)
            setFloat(c, reg, randomFloatBits(rng));
    }

    // extractAnimData(obj, anim, channel, frame, out, scale)
    void setupExtractAnim(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        R5900Context *ctx = &c;
        const uint32_t object = kScratch + kAnimObject, anim = kScratch + kAnimChannels, table = kScratch + kAnimTable;
        fillAny(rng, rdram, kScratch + kAnimData, 0x400u);
        writeTestWord(rdram, object + 0x58u, (rng.next() & 1u) != 0u ? kScratch + kAnimState : 0u);
        writeTestWord(rdram, object + 0x60u, static_cast<uint32_t>(static_cast<int32_t>(rng.next() % 0x300u) - 0x40));
        writeTestWord(rdram, kScratch + kAnimState + 0xCu, (rng.next() & 1u) != 0u ? 1u : rng.next() % 4u);
        writeTestWord(rdram, anim + 0x20u, table);
        static const uint32_t kTypes[] = {0u, 2u, 4u, 8u, 1u, 3u};
        for (uint32_t i = 0; i < 4u; ++i)
        {
            const uint32_t pick = rng.next() % 8u;
            writeTestWord(rdram, table + i * 32u + 4u, pick < 6u ? kTypes[pick] : rng.next());
            writeTestWord(rdram, table + i * 32u + 0x14u, kScratch + kAnimData + i * 0x100u);
        }
        writeTestWord(rdram, kAnimScaleAddress, randomFloatBits(rng));
        setPointer(rng, c, 4, object);
        setPointer(rng, c, 5, anim);
        setSmall(rng, c, 6, 0, 3);
        setSmall(rng, c, 7, 0, 3);
        setOperand(rng, c, 8);
        setFloat(c, 12, randomFloatBits(rng));
        (void)ctx;
    }

    // hittestLinePoly(p, dir, vertices, indices, count, normal, hit, hitNormal)
    void setupLinePoly(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        R5900Context *ctx = &c;
        setOperand(rng, c, 4);
        setOperand(rng, c, 5);
        setOperand(rng, c, 9);
        fillSane(rng, rdram, kScratch + kPolyVertices, 16u * 12u);
        if ((rng.next() & 3u) == 0u)
            fillAny(rng, rdram, kScratch + kPolyVertices, 16u * 12u);
        for (uint32_t i = 0; i < 16u; ++i)
            rdram[kScratch + kPolyIndices + i] = static_cast<uint8_t>(rng.next() % 16u);
        setPointer(rng, c, 6, kScratch + kPolyVertices);
        setPointer(rng, c, 7, kScratch + kPolyIndices + 1u + rng.next() % 4u);
        setSmall(rng, c, 8, -1, 7);
        for (int reg = 10; reg <= 11; ++reg)
        {
            setOperand(rng, c, reg);
            if ((rng.next() & 1u) != 0u)
                SET_GPR_U64(ctx, reg, 0u);
        }
    }

    void setupDisplayList(TestRng &rng, uint8_t *rdram)
    {
        writeTestWord(rdram, kDlListAddress, kScratch + kDlList + (rng.next() % 4u) * 16u);
        writeTestWord(rdram, kMemdbPointerAddress, kScratch + kDlBlock + (rng.next() % 4u) * 16u);
        writeTestWord(rdram, kMemdbUsedAddress, rng.next());
    }

    // dlSetClip(x0, y0, x1, y1)
    void setupDlSetClip(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        setupDisplayList(rng, rdram);
        setSmall(rng, c, 4, -2, 0x290, true);
        setSmall(rng, c, 5, -2, 0xF0, true);
        setSmall(rng, c, 6, -2, 0x290, true);
        setSmall(rng, c, 7, -2, 0xF0, true);
    }

    // dlSetBlend(mode)
    void setupDlSetBlend(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        R5900Context *ctx = &c;
        setupDisplayList(rng, rdram);
        setSmall(rng, c, 4, -1, 6, true);
        const uint32_t pick = rng.next() % 4u;
        writeTestWord(rdram, kBlendModeAddress, pick == 0u ? GPR_U32(ctx, 4) : static_cast<uint32_t>(static_cast<int32_t>(rng.next() % 8u) - 1));
        writeTestWord(rdram, kBlendTestAddress, rng.next());
    }

    // bgPortalPlaneClip(in, out, axis, outcodeBit, a, b)
    void setupPlaneClip(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        const uint32_t in = kScratch + kClipIn, out = kScratch + kClipOut, vertices = kScratch + kClipVertices;
        fillSane(rng, rdram, vertices, 8u * 0x14u);
        for (uint32_t i = 0; i < 8u; ++i)
            writeTestWord(rdram, vertices + i * 0x14u + 0x10u, rng.next() % 32u);
        const uint32_t count = rng.next() % 7u;
        writeTestWord(rdram, in + 0x50u, (rng.next() & 15u) == 0u ? rng.next() | 0x80000000u : count);
        for (uint32_t i = 0; i <= count; ++i)
            writeTestWord(rdram, in + i * 4u, vertices + (rng.next() % 8u) * 0x14u);
        writeTestWord(rdram, out + 0x50u, rng.next() % 4u);
        writeTestWord(rdram, kClipCountAddress, rng.next() % 4u);
        writeTestWord(rdram, kClipPoolAddress, kScratch + kClipPool);
        fillSane(rng, rdram, kClipPlanesAddress, 16u);
        setPointer(rng, c, 4, in);
        setPointer(rng, c, 5, out);
        setSmall(rng, c, 6, 0, 3);
        static const uint32_t kBits[] = {1u, 2u, 4u, 8u, 0x10u};
        const uint32_t pick = rng.next() % 6u;
        setSmall(rng, c, 7, 0, 0);
        R5900Context *ctx = &c;
        SET_GPR_U64(ctx, 7, pick < 5u ? kBits[pick] : rng.next64());
        setFloat(c, 12, randomSaneFloatBits(rng));
        setFloat(c, 13, randomSaneFloatBits(rng));
    }

    // moveFindFloorHeight(polygons, mask, position, &found)
    void setupFloorHeight(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        R5900Context *ctx = &c;
        setOperand(rng, c, 6);
        fillSane(rng, rdram, GPR_U32(ctx, 6), 12u);
        const uint32_t list = kScratch + kFloorList;
        const uint32_t count = rng.next() % 5u;
        for (uint32_t i = 0; i < count; ++i)
        {
            const uint32_t polygon = kScratch + kFloorPolygons + i * 0x80u;
            writeTestWord(rdram, list + i * 4u, polygon);
            const uint32_t vertices = rng.next() % 6u;
            writeTestWord(rdram, polygon, vertices);
            const uint32_t flags = (rng.next() & 1u) != 0u ? 0u : rng.next() & 0xFFFFu;
            const uint32_t sloped = (rng.next() & 1u) != 0u ? 0x10u : 0u;
            writeTestWord(rdram, polygon + 4u, flags | (sloped | (rng.next() & 0xFFEFu)) << 16);
            fillSane(rng, rdram, polygon + 8u, 6u * 12u);
            // Vertices around the position, so the point is often inside.
            for (uint32_t v = 0; v < 6u; ++v)
                for (uint32_t axis = 0; axis < 3u; ++axis)
                {
                    const float near = floatOf(readTestWord(rdram, GPR_U32(ctx, 6) + axis * 4u)) +
                                       static_cast<float>(static_cast<int32_t>(rng.next() % 1025u) - 512) * (1.0f / 128.0f);
                    writeTestWord(rdram, polygon + 8u + v * 12u + axis * 4u, bitsOf(near));
                }
        }
        writeTestWord(rdram, list + count * 4u, 0u);
        writeTestWord(rdram, kFloorStartAddress, (rng.next() & 1u) != 0u ? bitsOf(-1.0e9f) : randomFloatBits(rng));
        setPointer(rng, c, 4, list);
        SET_GPR_U64(ctx, 5, (rng.next() & 3u) != 0u ? rng.next() & 0xFFFFu : rng.next64());
        setOperand(rng, c, 7);
        if ((rng.next() & 1u) != 0u)
            SET_GPR_U64(ctx, 7, 0u);
    }

    uint32_t randomUnit(TestRng &rng, uint8_t *rdram, uint32_t address)
    {
        float q[4];
        float length = 0.0f;
        for (float &x : q)
        {
            x = static_cast<float>(static_cast<int32_t>(rng.next() % 2001u) - 1000) * (1.0f / 1000.0f);
            length += x * x;
        }
        if (length < 1.0e-6f)
            q[3] = length = 1.0f;
        const float scale = 1.0f / sqrtf(length);
        for (int i = 0; i < 4; ++i)
            writeTestWord(rdram, address + i * 4u, bitsOf(q[i] * scale));
        return address;
    }

    // quaternionSlerp(q0, q1, out, t)
    void setupSlerp(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        R5900Context *ctx = &c;
        setOperand(rng, c, 4);
        setOperand(rng, c, 5);
        setOperand(rng, c, 6);
        const uint32_t pick = rng.next() % 8u;
        if (pick != 0u)
        {
            randomUnit(rng, rdram, GPR_U32(ctx, 4));
            randomUnit(rng, rdram, GPR_U32(ctx, 5));
            if (pick == 1u) // the same, or the opposite: the near-1 and near-(-1) paths
                for (uint32_t i = 0; i < 4u; ++i)
                    writeTestWord(rdram, GPR_U32(ctx, 5) + i * 4u,
                                  readTestWord(rdram, GPR_U32(ctx, 4) + i * 4u) ^ ((rng.next() & 1u) != 0u ? 0x80000000u : 0u));
        }
        const uint32_t t = rng.next() % 6u;
        setFloat(c, 12, t == 0u ? 0u : t == 1u ? 0x3F800000u : t < 5u ? bitsOf(static_cast<float>(rng.next() % 1025u) * (1.0f / 1024.0f)) : randomFloatBits(rng));
        writeTestWord(rdram, kSlerpHalfPiAddress, (rng.next() & 3u) != 0u ? 0x3FC90FDBu : randomFloatBits(rng));
        writeTestWord(rdram, kLibVersion, 0xFFFFFFFFu); // _IEEE_: acosf's wrapper skips matherr for |x| > 1
    }

    // __ieee754_acosf(x)
    void setupAcosf(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        const uint32_t pick = rng.next() % 8u;
        uint32_t bits;
        switch (pick)
        {
        case 0: bits = randomFloatBits(rng); break;
        case 1: bits = (rng.next() & 0x80000000u) | 0x3F800000u; break;                   // +-1
        case 2: bits = (rng.next() & 0x80000000u) | (0x3F7FFF00u + rng.next() % 0x100u); break; // next to +-1
        case 3: bits = (rng.next() & 0x80000000u) | (rng.next() % 0x23000010u); break;    // tiny
        case 4: bits = (rng.next() & 0x80000000u) | (0x3EFFFFF0u + rng.next() % 0x20u); break; // next to 0.5
        default: bits = randomSaneFloatBits(rng); break;
        }
        setFloat(c, 12, bits);
    }

    // bgPortalCrossed(from, to, room, previousRoom, strict)
    void setupPortalCrossed(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        R5900Context *ctx = &c;
        setOperand(rng, c, 4);
        setOperand(rng, c, 5);
        fillSane(rng, rdram, GPR_U32(ctx, 4), 12u);
        fillSane(rng, rdram, GPR_U32(ctx, 5), 12u);
        if ((rng.next() & 7u) == 0u)
            writeTestWord(rdram, GPR_U32(ctx, 5) + (rng.next() % 3u) * 4u, (rng.next() & 1u) != 0u ? 0u : 0x80000000u);
        const uint32_t rooms = kScratch + kRooms, lists = kScratch + kRoomPortalLists, pointers = kScratch + kPortalPointers;
        writeTestWord(rdram, kRoomTableAddress, rooms);
        writeTestWord(rdram, kPortalTableAddress, pointers);
        for (uint32_t room = 0; room < 4u; ++room)
        {
            writeTestWord(rdram, rooms + room * 0x2Cu + 4u, lists + room * 0x20u);
            const uint32_t count = rng.next() % 5u;
            writeTestWord(rdram, lists + room * 0x20u, (rng.next() & 15u) == 0u ? rng.next() | 0x80000000u : count);
            for (uint32_t i = 0; i < count; ++i)
                writeTestWord(rdram, lists + room * 0x20u + 4u + i * 4u, rng.next() % 6u);
        }
        for (uint32_t i = 0; i < 6u; ++i)
        {
            const uint32_t portal = kScratch + kPortals + i * 0x80u;
            writeTestWord(rdram, pointers + i * 4u, portal);
            writeTestWord(rdram, portal, rng.next() % 4u);
            writeTestWord(rdram, portal + 4u, rng.next() % 4u);
            fillSane(rng, rdram, portal + 8u, 12u);
            const uint32_t vertices = rng.next() % 6u;
            writeTestWord(rdram, portal + 0x14u, vertices | (rng.next() << 16));
            fillSane(rng, rdram, portal + 0x18u, 6u * 12u);
            // Vertices around the segment's end, so the crossing is often inside.
            for (uint32_t v = 0; v < 6u; ++v)
                for (uint32_t axis = 0; axis < 3u; ++axis)
                {
                    const float near = floatOf(readTestWord(rdram, GPR_U32(ctx, 5) + axis * 4u)) +
                                       static_cast<float>(static_cast<int32_t>(rng.next() % 1025u) - 512) * (1.0f / 128.0f);
                    writeTestWord(rdram, portal + 0x18u + v * 12u + axis * 4u, bitsOf(near));
                }
        }
        setSmall(rng, c, 6, 0, 3);
        setSmall(rng, c, 7, -1, 3);
        setSmall(rng, c, 8, 0, 1);
    }

    // calDoubleFillets(skeleton, bone, t)
    void setupFillets(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        const uint32_t skeleton = kScratch + kFilletSkeleton, nodes = kScratch + kFilletNodes;
        writeTestWord(rdram, skeleton, nodes);
        writeTestWord(rdram, skeleton + 4u, kScratch + kFilletMatrices);
        writeTestWord(rdram, skeleton + 0x58u, kScratch + kFilletMatrixBase);
        writeTestWord(rdram, kScratch + kFilletMatrixBase, kScratch + kFilletMatrices2);
        fillAny(rng, rdram, kScratch + kFilletMatrices, 0x200u);
        // Node 0 is the table's header (its first word is the base index,
        // 0); the tree is over nodes 1..7, children and siblings pointing
        // to higher indices so that it ends. Node -1 (the one a kind-2
        // node with no child names) lies just below the table.
        writeTestWord(rdram, nodes, 0u);
        for (uint32_t i = 0; i < kFilletNodeCount + 1u; ++i)
        {
            const uint32_t node = nodes + i * 0x50u - 0x50u; // nodes -1 .. 7
            const uint32_t index = i - 1u;
            uint8_t kind = static_cast<uint8_t>(rng.next() % 5u);
            if (kind == 4u)
                kind = static_cast<uint8_t>(rng.next());
            int8_t child = -1, sibling = -1;
            if (index + 1u < kFilletNodeCount && (rng.next() & 3u) != 0u)
                child = static_cast<int8_t>(index + 1u + rng.next() % (kFilletNodeCount - index - 1u));
            if (index + 1u < kFilletNodeCount && (rng.next() & 3u) != 0u)
                sibling = static_cast<int8_t>(index + 1u + rng.next() % (kFilletNodeCount - index - 1u));
            if (i == 1u) // the header word
            {
                kind = 0u;
                child = 0;
            }
            rdram[node] = kind;
            rdram[node + 1u] = static_cast<uint8_t>(rng.next() % 4u);
            rdram[node + 2u] = static_cast<uint8_t>(rng.next());
            rdram[node + 3u] = static_cast<uint8_t>(child);
            rdram[node + 4u] = static_cast<uint8_t>(sibling);
            if (i == 1u)
                rdram[node + 1u] = rdram[node + 2u] = rdram[node + 3u] = 0u;
        }
        setPointer(rng, c, 4, skeleton);
        setSmall(rng, c, 5, 1, kFilletNodeCount - 1u);
        setFloat(c, 12, randomFloatBits(rng));
    }

    const NativeEntry kNativeGame[] = {
        {"matrixScaleSet", 0x2B4F20u, &matrixScaleSet_0x2b4f20, &nativeMatrixScaleSet, &setupMatrixScale, true, nullptr, 0u},
        {"extractAnimData", 0x215280u, &extractAnimData_0x215280, &nativeExtractAnimData, &setupExtractAnim, true, nullptr, 0u},
        {"hittestLinePoly", 0x209B08u, &hittestLinePoly_0x209b08, &nativeHittestLinePoly, &setupLinePoly, true, nullptr, 0u},
        {"dlSetClip", 0x2B8050u, &dlSetClip_0x2b8050, &nativeDlSetClip, &setupDlSetClip, false, kDlExtra, 3u},
        {"dlSetBlend", 0x2B7EA8u, &dlSetBlend_0x2b7ea8, &nativeDlSetBlend, &setupDlSetBlend, false, kBlendExtra, 4u},
        {"bgPortalPlaneClip", 0x257F20u, &bgPortalPlaneClip_0x257f20, &nativeBgPortalPlaneClip, &setupPlaneClip, true, kClipExtra, 1u},
        {"moveFindFloorHeight", 0x27C578u, &moveFindFloorHeight_0x27c578, &nativeMoveFindFloorHeight, &setupFloorHeight, true, nullptr, 0u},
        {"__ieee754_acosf", 0x2D9818u, &ps2___ieee754_acosf_0x2d9818, &nativeIeee754Acosf, &setupAcosf, true, nullptr, 0u},
        {"quaternionSlerp", 0x2B4080u, &quaternionSlerp_0x2b4080, &nativeQuaternionSlerp, &setupSlerp, true, nullptr, 0u},
        {"bgPortalCrossed", 0x258CF0u, &bgPortalCrossed_0x258cf0, &nativeBgPortalCrossed, &setupPortalCrossed, true, nullptr, 0u},
        {"calDoubleFillets", 0x214A88u, &calDoubleFillets_0x214a88, &nativeCalDoubleFillets, &setupFillets, true, nullptr, 0u},
    };
    constexpr uint32_t kNativeGameCount = sizeof(kNativeGame) / sizeof(kNativeGame[0]);

#if TS_NATIVE_MATH_SELFTEST
    // Tests every function against its original before any replacement
    // (the originals call one another through the function table).
    // Returns the set of functions that passed.
    uint32_t selfTest(PS2Runtime &runtime)
    {
        uint8_t *rdram = runtime.memory().getRDRAM();
        const auto start = std::chrono::steady_clock::now();
        static uint8_t saved[kScratchBytes], savedGlobals[kTestGlobalBytes];
        std::memcpy(saved, rdram + kScratch, kScratchBytes);
        uint32_t savedOffset = 0;
        for (const SavedRegion &region : kTestGlobals)
        {
            std::memcpy(savedGlobals + savedOffset, rdram + region.address, region.bytes);
            savedOffset += region.bytes;
        }
        uint32_t passed = 0, failed = 0, mismatches = 0, nanOnly = 0;
        {
            ClockHold hold(runtime);
            for (uint32_t i = 0; i < kNativeGameCount; ++i)
            {
                const NativeEntry &fn = kNativeGame[i];
                const TestOutcome outcome = testFunction(runtime, rdram, fn, "game");
                mismatches += outcome.mismatches;
                nanOnly += outcome.nanOnly;
                if (outcome.mismatches == 0u)
                {
                    passed |= 1u << i;
                }
                else
                {
                    ++failed;
                    if (!g_tsNativeMath.firstFailed)
                        g_tsNativeMath.firstFailed = fn.name;
                }
                std::fprintf(stderr, "[TS:game] %-20s %s: %d cases, %u differ, %u only in NaN payloads\n", fn.name,
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
        g_tsNativeMath.mismatches += mismatches;
        g_tsNativeMath.nanPayloads += nanOnly;
        g_tsNativeMath.failed += failed;
        const auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - start);
        std::fprintf(stderr, "[TS:game] self-test: %u of %u native, %u cases differ, %u NaN-only, %u ms\n",
                     kNativeGameCount - failed, kNativeGameCount, mismatches, nanOnly, static_cast<uint32_t>(ms.count()));
        return passed;
    }
#endif
}

void registerTsNativeGame(PS2Runtime &runtime)
{
    uint32_t enabled = (1u << kNativeGameCount) - 1u;
#if TS_NATIVE_MATH_SELFTEST
    enabled = selfTest(runtime);
#endif
    uint32_t native = 0;
    for (uint32_t i = 0; i < kNativeGameCount; ++i)
    {
        if ((enabled & (1u << i)) != 0u)
        {
            runtime.replaceFunction(kNativeGame[i].address, kNativeGame[i].native);
            ++native;
        }
    }
    g_tsNativeMath.native += native;
}
#endif
