// Native versions of a fourth batch of the game's hot routines (Xbox only):
// the largest translated functions of a match frame, after the math,
// soft-double and game batches (ts_native_math.cpp, ts_native_fp.cpp,
// ts_native_game.cpp): the particle/display-list builder, the skeleton and
// animation matrix routines, the ambient-light and portal calculations.
//
// Each one is a transcription of the translated instructions, one native
// statement per instruction in the original's order and with the
// recompiler's semantics (32-bit results sign-extended into the 64-bit
// registers, 64-bit compares, movz/movn copying the whole 128-bit register,
// the FPU macros for every float operation so results are bit-identical;
// the EE's sqrt.s takes its operand from the ft field). The registers a
// function touches live in a struct of locals for its whole run; control
// flow is the original's (its branches, including the likely ones that
// skip their delay slot, as gotos; its jump tables as switches on the word
// read from the table), so the state it leaves is the original's: every
// register it writes, the memory it writes (stack frames included),
// pc = $ra.
//
// Calls go through the function table like the original's (the same
// 8-cycle checkpoint charge, through dispatchGuestBranch): before each call
// every register is stored, so a callee that unwinds to the scheduler
// leaves this function the same way, and the original resumes at the
// return address from those registers (the function table keeps the
// original under every resume address). After each call the registers are
// read back from the context, whatever the callee did to them. Backward
// branches keep the original's scheduler checkpoint: when it comes due the
// state is stored and pc is the branch target, where the original resumes.
// A self-call (partGfx draws a part's children and siblings with itself,
// moveTest retries a slide) is a host recursion, without the dispatcher
// (the translation's is a goto); past kSelfCallDepth levels the original
// takes the call and the native levels above it return, their remaining
// work resuming in the original through the scheduler.
//
// The routines were transcribed mechanically from the listings (the
// instruction comments of the generated files) and are checked against the
// originals by the boot-time test below.
//
// TS_NATIVE_MATH_SELFTEST: at boot each function runs against its original
// on the same random inputs (ts_native_selftest.h), laid out as the game
// lays out its structures; one that differs is put back to the original.
#include "ts_native_game2.h"

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
    TS_INL uint64_t srl32(uint64_t a, uint32_t sa) { return sext32(lo32(a) >> sa); }
    TS_INL uint64_t sra32(uint64_t a, uint32_t sa) { return sext32(static_cast<uint32_t>(static_cast<int32_t>(lo32(a)) >> sa)); }
    TS_INL bool neg64(uint64_t a) { return static_cast<int64_t>(a) < 0; }
    TS_INL bool lez64(uint64_t a) { return static_cast<int64_t>(a) <= 0; }
    TS_INL bool gtz64(uint64_t a) { return static_cast<int64_t>(a) > 0; }

    // mult rd, rs, rt: the 64-bit product in HI/LO, its low word in rd.
    TS_INL uint64_t mult(uint64_t rs, uint64_t rt, uint64_t &lo, uint64_t &hi)
    {
        const int64_t result = static_cast<int64_t>(static_cast<int32_t>(lo32(rs))) * static_cast<int32_t>(lo32(rt));
        lo = sext32(static_cast<uint32_t>(result));
        hi = sext32(static_cast<uint32_t>(static_cast<uint64_t>(result) >> 32));
        return lo;
    }

    // madd rd, rs, rt: the product added to HI:LO.
    TS_INL uint64_t madd(uint64_t rs, uint64_t rt, uint64_t &lo, uint64_t &hi)
    {
        const uint64_t acc = ((hi & 0xFFFFFFFFull) << 32) | (lo & 0xFFFFFFFFull);
        const int64_t product = static_cast<int64_t>(static_cast<int32_t>(lo32(rs))) * static_cast<int32_t>(lo32(rt));
        const uint64_t result = acc + static_cast<uint64_t>(product);
        lo = sext32(static_cast<uint32_t>(result));
        hi = sext32(static_cast<uint32_t>(result >> 32));
        return lo;
    }

    // div rs, rt: the quotient in LO, the remainder in HI (the recompiled
    // results for a zero divisor and for INT_MIN / -1).
    TS_INL void divide(uint64_t rs, uint64_t rt, uint64_t &lo, uint64_t &hi)
    {
        const int32_t dividend = static_cast<int32_t>(lo32(rs)), divisor = static_cast<int32_t>(lo32(rt));
        if (divisor != 0)
        {
            if (divisor == -1 && dividend == INT32_MIN)
            {
                lo = sext32(0x80000000u);
                hi = 0u;
            }
            else
            {
                lo = sext32(static_cast<uint32_t>(dividend / divisor));
                hi = sext32(static_cast<uint32_t>(dividend % divisor));
            }
        }
        else
        {
            lo = dividend < 0 ? 1ull : 0xFFFFFFFFFFFFFFFFull;
            hi = sext32(static_cast<uint32_t>(dividend));
        }
    }

    TS_INL void divideU(uint64_t rs, uint64_t rt, uint64_t &lo, uint64_t &hi)
    {
        const uint32_t dividend = lo32(rs), divisor = lo32(rt);
        if (divisor != 0u)
        {
            lo = sext32(dividend / divisor);
            hi = sext32(dividend % divisor);
        }
        else
        {
            lo = 0xFFFFFFFFFFFFFFFFull;
            hi = sext32(dividend);
        }
    }

    // Loads as the recompiled code forms them.
#define LW(addr) sext32(READ32(addr))
#define LBU(addr) static_cast<uint64_t>(READ8(addr))
#define LB(addr) sext32(static_cast<uint32_t>(static_cast<int32_t>(static_cast<int8_t>(READ8(addr)))))
#define LHU(addr) static_cast<uint64_t>(READ16(addr))
#define LH(addr) sext32(static_cast<uint32_t>(static_cast<int32_t>(static_cast<int16_t>(READ16(addr)))))

    // The unaligned doubleword loads and stores (ldl/ldr, sdl/sdr), as the
    // recompiler emits them.
#define ldl(address, reg)                                                                                      \
    do                                                                                                         \
    {                                                                                                          \
        const uint32_t _addr = (address), _aligned = _addr & ~7u, _offset = _addr & 7u;                       \
        const uint64_t _mem = READ64(_aligned);                                                                \
        const uint32_t _shift = (7u - _offset) << 3;                                                           \
        const uint64_t _keep = _shift == 0u ? 0ull : ((1ull << _shift) - 1ull);                                \
        reg = (reg & _keep) | (_mem << _shift);                                                                \
    } while (0)
#define ldr(address, reg)                                                                                      \
    do                                                                                                         \
    {                                                                                                          \
        const uint32_t _addr = (address), _aligned = _addr & ~7u, _offset = _addr & 7u;                       \
        const uint64_t _mem = READ64(_aligned);                                                                \
        const uint32_t _shift = _offset << 3;                                                                  \
        const uint64_t _keep = _offset == 0u ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - _offset) << 3));        \
        reg = (reg & _keep) | (_mem >> _shift);                                                                \
    } while (0)
#define sdl(address, value)                                                                                    \
    do                                                                                                         \
    {                                                                                                          \
        const uint32_t _addr = (address), _aligned = _addr & ~7u, _offset = _addr & 7u;                       \
        const uint32_t _shift = (7u - _offset) << 3;                                                           \
        const uint64_t _mask = 0xFFFFFFFFFFFFFFFFull >> _shift;                                                \
        const uint64_t _old = READ64(_aligned), _val = (value);                                                 \
        WRITE64(_aligned, (_old & ~_mask) | ((_val >> _shift) & _mask));                                       \
    } while (0)
#define sdr(address, value)                                                                                    \
    do                                                                                                         \
    {                                                                                                          \
        const uint32_t _addr = (address), _aligned = _addr & ~7u, _offset = _addr & 7u;                       \
        const uint32_t _shift = _offset << 3;                                                                  \
        const uint64_t _mask = 0xFFFFFFFFFFFFFFFFull << _shift;                                                \
        const uint64_t _old = READ64(_aligned), _val = (value);                                                 \
        WRITE64(_aligned, (_old & ~_mask) | ((_val << _shift) & _mask));                                       \
    } while (0)

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
    // nothing else here but lq (which goes to the context too), so the
    // copy goes straight to the context.
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

    // A backward branch's scheduler checkpoint: pc is the branch target,
    // where the original resumes if the checkpoint is due (the caller then
    // stores the state and returns).
    TS_INL bool loopCheckpoint(R5900Context *ctx, PS2Runtime *runtime, uint32_t head)
    {
        ctx->pc = head;
        return runtime->eeCheckpointDue();
    }

    // Host recursion depth of a native self-call (partGfx, moveTest) before
    // the original takes over: bounds the host stack.
#ifndef TS_NATIVE_GAME2_SELF_DEPTH
#define TS_NATIVE_GAME2_SELF_DEPTH 32
#endif
    constexpr uint32_t kSelfCallDepth = TS_NATIVE_GAME2_SELF_DEPTH;

#define LOAD_GPR(field, n) r.field = GPR_U64(ctx, n)
#define STORE_GPR(field, n) SET_GPR_U64(ctx, n, r.field)
#define LOAD_F(n) r.f##n = ctx->f[n]
#define STORE_F(n) ctx->f[n] = r.f##n

    // ---- bgPortalCalcPos (0x258108)
    //
    // bgPortalCalcPos(room, matrix): the screen rectangles of the room's
    // portals for the current viewport (its index through gp-0x4DCC, its
    // per-room records (0x14 bytes: order, then the rectangle) in the table
    // at 0x357330). Each portal (room table gp-0x5DC0, portal pointers
    // gp-0x5DBC) leading to a room ordered before this one has its vertices
    // transformed (matrixVec3Mul4) into the frame's vertex pool (the
    // scratchpad, gp-0x4758/-0x4754), coded against the four frustum planes
    // (bgPortalCalcOutCode; the plane constants at gp-0x4768 come from the
    // room's rectangle and the viewport at 0x3299F0), and, unless wholly
    // outside one plane, clipped against the five planes
    // (bgPortalPlaneClip) and projected; the rectangle of the result goes to
    // the portal's record (gp-0x5DD0, 0x30 bytes each: +0x18 the rectangle,
    // +0x2C set when nothing is left). Returns the number of portals with a
    // rectangle.

    struct BgPortalCalcPosRegs
    {
        uint64_t at, v0, v1, a0, a1, a2, a3, t0, t1, t2, s0, s1, s2, s3, s4, s5, s6, s7, gp, sp, fp, ra;
        float f0, f1, f2, f3, f4, f5, f6, f12, f13, f20, f21;
        uint32_t fcr31;
        uint64_t lo, hi;
    };

    void nativeBgPortalCalcPos(G_ARGS)
    {
        BgPortalCalcPosRegs r;
        bool t;
        uint32_t jt;
        (void)t;
        (void)jt;
        LOAD_GPR(at, 1); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(t0, 8); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_GPR(ra, 31); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(20); LOAD_F(21); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
        r.sp = addiu(r.sp, -592);                                // 258108 addiu $sp, $sp, -0x250
        r.a3 = LW(lo32(r.gp) - 0x4dccu);                         // 25810c lw $a3, -0x4DCC($gp)
        WRITE32(lo32(r.sp) + 0x180u, lo32(r.a0));                // 258110 sw $a0, 0x180($sp)
        r.a2 = sext32(0x350000u);                                // 258114 lui $a2, 0x35
        WRITE64(lo32(r.sp) + 0x230u, r.ra);                      // 258118 sd $ra, 0x230($sp)
        r.t2 = addiu(r.a2, 29488);                               // 25811c addiu $t2, $a2, 0x7330
        WRITE64(lo32(r.sp) + 0x220u, r.fp);                      // 258120 sd $fp, 0x220($sp)
        r.a0 = addiu(0u, 44);                                    // 258124 addiu $a0, $zero, 0x2C
        WRITE64(lo32(r.sp) + 0x210u, r.s7);                      // 258128 sd $s7, 0x210($sp)
        WRITE64(lo32(r.sp) + 0x200u, r.s6);                      // 25812c sd $s6, 0x200($sp)
        WRITE64(lo32(r.sp) + 0x1f0u, r.s5);                      // 258130 sd $s5, 0x1F0($sp)
        WRITE64(lo32(r.sp) + 0x1e0u, r.s4);                      // 258134 sd $s4, 0x1E0($sp)
        WRITE64(lo32(r.sp) + 0x1d0u, r.s3);                      // 258138 sd $s3, 0x1D0($sp)
        WRITE64(lo32(r.sp) + 0x1c0u, r.s2);                      // 25813c sd $s2, 0x1C0($sp)
        WRITE64(lo32(r.sp) + 0x1b0u, r.s1);                      // 258140 sd $s1, 0x1B0($sp)
        WRITE64(lo32(r.sp) + 0x1a0u, r.s0);                      // 258144 sd $s0, 0x1A0($sp)
        SWC1(lo32(r.sp) + 0x248u, r.f21);                        // 258148 swc1 $f21, 0x248($sp)
        SWC1(lo32(r.sp) + 0x240u, r.f20);                        // 25814c swc1 $f20, 0x240($sp)
        r.v0 = LW(lo32(r.sp) + 0x180u);                          // 258150 lw $v0, 0x180($sp)
        r.v1 = LW(lo32(r.a3));                                   // 258154 lw $v1, 0x0($a3)
        r.a0 = mult(r.v0, r.a0, r.lo, r.hi);                     // 258158 mult $a0, $v0, $a0
        r.a2 = LW(lo32(r.sp) + 0x180u);                          // 25815c lw $a2, 0x180($sp)
        r.v0 = addiu(0u, 20);                                    // 258160 addiu $v0, $zero, 0x14
        r.v1 = sll32(r.v1, 2);                                   // 258164 sll $v1, $v1, 2
        r.t1 = mult(r.a2, r.v0, r.lo, r.hi);                     // 258168 mult $t1, $a2, $v0
        r.v1 = addu(r.v1, r.t2);                                 // 25816c addu $v1, $v1, $t2
        r.a2 = LW(lo32(r.v1));                                   // 258170 lw $a2, 0x0($v1)
        r.v0 = LW(lo32(r.gp) - 0x5dc0u);                         // 258174 lw $v0, -0x5DC0($gp)
        WRITE32(lo32(r.sp) + 0x184u, lo32(r.a1));                // 258178 sw $a1, 0x184($sp)
        WRITE32(lo32(r.sp) + 0x190u, lo32(0u));                  // 25817c sw $zero, 0x190($sp)
        r.a0 = addu(r.a0, r.v0);                                 // 258180 addu $a0, $a0, $v0
        r.v1 = addu(r.t1, r.a2);                                 // 258184 addu $v1, $t1, $a2
        r.a0 = LW(lo32(r.a0) + 0x4u);                            // 258188 lw $a0, 0x4($a0)
        WRITE32(lo32(r.sp) + 0x188u, lo32(r.a0));                // 25818c sw $a0, 0x188($sp)
        r.a0 = LW(lo32(r.a0));                                   // 258190 lw $a0, 0x0($a0)
        r.v0 = LW(lo32(r.v1) + 0xcu);                            // 258194 lw $v0, 0xC($v1)
        t = !neg64(r.v0);                                        // 258198 bgez $v0, . + 4 + (0x3 << 2)
        WRITE32(lo32(r.sp) + 0x18cu, lo32(r.a0));                // 25819c sw $a0, 0x18C($sp)
        if (t) goto L_2581a8;
        // 2581a0 b . + 4 + (0x138 << 2)
        r.v0 = 0u;                                               // 2581a4 daddu $v0, $zero, $zero
        goto L_258684;
    L_2581a8:
        r.v1 = LW(lo32(r.v1) + 0x4u);                            // 2581a8 lw $v1, 0x4($v1)
        r.v0 = sext32(0x330000u);                                // 2581ac lui $v0, 0x33
        r.a0 = addiu(r.v0, -26128);                              // 2581b0 addiu $a0, $v0, -0x6610
        r.a2 = LW(lo32(r.sp) + 0x18cu);                          // 2581b4 lw $a2, 0x18C($sp)
        r.f3 = LWC1(lo32(r.a0) + 0x8u);                          // 2581b8 lwc1 $f3, 0x8($a0)
        r.f3 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f3))); // 2581bc cvt.s.w $f3, $f3
        r.v1 = addiu(r.v1, -1);                                  // 2581c0 addiu $v1, $v1, -0x1
        WRITE32(lo32(r.sp), lo32(r.v1));                         // 2581c4 sw $v1, 0x0($sp)
        r.f1 = floatOf(lo32(r.v1));                              // 2581c8 mtc1 $v1, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 2581cc cvt.s.w $f1, $f1
        r.t0 = 0u;                                               // 2581d0 daddu $t0, $zero, $zero
        r.v0 = LW(lo32(r.a3));                                   // 2581d4 lw $v0, 0x0($a3)
        r.f5 = LWC1(lo32(r.a0) + 0x1cu);                         // 2581d8 lwc1 $f5, 0x1C($a0)
        r.f5 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f5))); // 2581dc cvt.s.w $f5, $f5
        r.f2 = LWC1(lo32(r.a0) + 0x10u);                         // 2581e0 lwc1 $f2, 0x10($a0)
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 2581e4 cvt.s.w $f2, $f2
        r.v0 = sll32(r.v0, 2);                                   // 2581e8 sll $v0, $v0, 2
        r.f4 = LWC1(lo32(r.a0) + 0x24u);                         // 2581ec lwc1 $f4, 0x24($a0)
        r.f4 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f4))); // 2581f0 cvt.s.w $f4, $f4
        r.v0 = addu(r.v0, r.t2);                                 // 2581f4 addu $v0, $v0, $t2
        r.f1 = FPU_SUB_S(r.f1, r.f3);                            // 2581f8 sub.s $f1, $f1, $f3
        r.v1 = LW(lo32(r.v0));                                   // 2581fc lw $v1, 0x0($v0)
        r.v1 = addu(r.t1, r.v1);                                 // 258200 addu $v1, $t1, $v1
        r.f1 = divS(r.f1, r.f2, r.fcr31);                        // 25820c div.s $f1, $f1, $f2
        r.v0 = LW(lo32(r.v1) + 0x8u);                            // 258210 lw $v0, 0x8($v1)
        r.v0 = addiu(r.v0, -1);                                  // 258214 addiu $v0, $v0, -0x1
        WRITE32(lo32(r.sp) + 0x4u, lo32(r.v0));                  // 258218 sw $v0, 0x4($sp)
        r.f0 = floatOf(lo32(r.v0));                              // 25821c mtc1 $v0, $f0
        r.f0 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f0))); // 258220 cvt.s.w $f0, $f0
        r.v0 = LW(lo32(r.a3));                                   // 258224 lw $v0, 0x0($a3)
        SWC1(lo32(r.gp) - 0x4768u, r.f1);                        // 258228 swc1 $f1, -0x4768($gp)
        r.f0 = FPU_SUB_S(r.f0, r.f5);                            // 25822c sub.s $f0, $f0, $f5
        r.v0 = sll32(r.v0, 2);                                   // 258230 sll $v0, $v0, 2
        r.v0 = addu(r.v0, r.t2);                                 // 258234 addu $v0, $v0, $t2
        r.v1 = LW(lo32(r.v0));                                   // 258238 lw $v1, 0x0($v0)
        r.f0 = divS(r.f0, r.f4, r.fcr31);                        // 258244 div.s $f0, $f0, $f4
        r.v1 = addu(r.t1, r.v1);                                 // 258248 addu $v1, $t1, $v1
        r.v0 = LW(lo32(r.v1) + 0xcu);                            // 25824c lw $v0, 0xC($v1)
        r.v0 = addiu(r.v0, 1);                                   // 258250 addiu $v0, $v0, 0x1
        WRITE32(lo32(r.sp) + 0x10u, lo32(r.v0));                 // 258254 sw $v0, 0x10($sp)
        r.f1 = floatOf(lo32(r.v0));                              // 258258 mtc1 $v0, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25825c cvt.s.w $f1, $f1
        SWC1(lo32(r.gp) - 0x4760u, r.f0);                        // 258260 swc1 $f0, -0x4760($gp)
        r.v0 = LW(lo32(r.a3));                                   // 258264 lw $v0, 0x0($a3)
        r.f1 = FPU_SUB_S(r.f1, r.f3);                            // 258268 sub.s $f1, $f1, $f3
        r.v0 = sll32(r.v0, 2);                                   // 25826c sll $v0, $v0, 2
        r.v0 = addu(r.v0, r.t2);                                 // 258270 addu $v0, $v0, $t2
        r.v1 = LW(lo32(r.v0));                                   // 258274 lw $v1, 0x0($v0)
        r.f1 = divS(r.f1, r.f2, r.fcr31);                        // 258280 div.s $f1, $f1, $f2
        r.v1 = addu(r.t1, r.v1);                                 // 258284 addu $v1, $t1, $v1
        r.v0 = LW(lo32(r.v1) + 0x10u);                           // 258288 lw $v0, 0x10($v1)
        r.v0 = addiu(r.v0, 1);                                   // 25828c addiu $v0, $v0, 0x1
        r.f0 = floatOf(lo32(r.v0));                              // 258290 mtc1 $v0, $f0
        r.f0 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f0))); // 258294 cvt.s.w $f0, $f0
        SWC1(lo32(r.gp) - 0x4764u, r.f1);                        // 258298 swc1 $f1, -0x4764($gp)
        WRITE32(lo32(r.sp) + 0x14u, lo32(r.v0));                 // 25829c sw $v0, 0x14($sp)
        r.f0 = FPU_SUB_S(r.f0, r.f5);                            // 2582a0 sub.s $f0, $f0, $f5
        r.f0 = divS(r.f0, r.f4, r.fcr31);                        // 2582ac div.s $f0, $f0, $f4
        t = lez64(r.a2);                                         // 2582b0 blez $a2, . + 4 + (0xF3 << 2)
        SWC1(lo32(r.gp) - 0x475cu, r.f0);                        // 2582b4 swc1 $f0, -0x475C($gp)
        if (t) goto L_258680;
        r.at = sext32(0xbf800000u);                              // 2582b8 lui $at, 0xBF80
        r.f20 = floatOf(lo32(r.at));                             // 2582bc mtc1 $at, $f20
        r.s7 = r.a0;                                             // 2582c0 daddu $s7, $a0, $zero
        WRITE32(lo32(r.sp) + 0x194u, lo32(r.t1));                // 2582c4 sw $t1, 0x194($sp)
        r.at = sext32(0x3f800000u);                              // 2582c8 lui $at, 0x3F80
        r.f21 = floatOf(lo32(r.at));                             // 2582cc mtc1 $at, $f21
        r.fp = addiu(0u, 20);                                    // 2582d0 addiu $fp, $zero, 0x14
    L_2582d8:
        r.v1 = LW(lo32(r.sp) + 0x188u);                          // 2582d8 lw $v1, 0x188($sp)
        r.v0 = sll32(r.t0, 2);                                   // 2582dc sll $v0, $t0, 2
        r.a0 = addiu(0u, 48);                                    // 2582e0 addiu $a0, $zero, 0x30
        r.a2 = LW(lo32(r.gp) - 0x5dbcu);                         // 2582e4 lw $a2, -0x5DBC($gp)
        r.v0 = addu(r.v0, r.v1);                                 // 2582e8 addu $v0, $v0, $v1
        r.a1 = LW(lo32(r.gp) - 0x5dd0u);                         // 2582ec lw $a1, -0x5DD0($gp)
        r.v1 = LW(lo32(r.v0) + 0x4u);                            // 2582f0 lw $v1, 0x4($v0)
        r.v0 = sll32(r.v1, 2);                                   // 2582f4 sll $v0, $v1, 2
        r.v1 = mult(r.v1, r.a0, r.lo, r.hi);                     // 2582f8 mult $v1, $v1, $a0
        r.v0 = addu(r.v0, r.a2);                                 // 2582fc addu $v0, $v0, $a2
        r.s3 = LW(lo32(r.v0));                                   // 258300 lw $s3, 0x0($v0)
        r.a0 = LW(lo32(r.sp) + 0x180u);                          // 258304 lw $a0, 0x180($sp)
        r.s2 = addu(r.a1, r.v1);                                 // 258308 addu $s2, $a1, $v1
        r.a1 = LW(lo32(r.s3));                                   // 25830c lw $a1, 0x0($s3)
        if (r.a1 == r.a0)                                        // 258310 beql $a1, $a0, . + 4 + (0x1 << 2)
        {
            r.a1 = LW(lo32(r.s3) + 0x4u);                            // 258314 lw $a1, 0x4($s3)
            goto L_258318;
        }
    L_258318:
        r.v0 = LW(lo32(r.a3));                                   // 258318 lw $v0, 0x0($a3)
        r.a2 = sext32(0x350000u);                                // 25831c lui $a2, 0x35
        r.a1 = mult(r.a1, r.fp, r.lo, r.hi);                     // 258320 mult $a1, $a1, $fp
        r.a2 = addiu(r.a2, 29488);                               // 258324 addiu $a2, $a2, 0x7330
        r.v0 = sll32(r.v0, 2);                                   // 258328 sll $v0, $v0, 2
        r.v1 = sext32(0x70000000u);                              // 25832c lui $v1, 0x7000
        r.v0 = addu(r.v0, r.a2);                                 // 258330 addu $v0, $v0, $a2
        WRITE32(lo32(r.gp) - 0x4758u, lo32(r.v1));               // 258334 sw $v1, -0x4758($gp)
        r.a0 = LW(lo32(r.v0));                                   // 258338 lw $a0, 0x0($v0)
        r.v0 = LW(lo32(r.sp) + 0x194u);                          // 25833c lw $v0, 0x194($sp)
        r.a1 = addu(r.a1, r.a0);                                 // 258340 addu $a1, $a1, $a0
        WRITE32(lo32(r.gp) - 0x4754u, lo32(r.fp));               // 258344 sw $fp, -0x4754($gp)
        r.a0 = addu(r.v0, r.a0);                                 // 258348 addu $a0, $v0, $a0
        r.v0 = LW(lo32(r.a1));                                   // 25834c lw $v0, 0x0($a1)
        r.v1 = LW(lo32(r.a0));                                   // 258350 lw $v1, 0x0($a0)
        r.v0 = slt(r.v0, r.v1);                                  // 258354 slt $v0, $v0, $v1
        t = r.v0 != 0u;                                          // 258358 bnez $v0, . + 4 + (0xC4 << 2)
        r.s6 = addiu(r.t0, 1);                                   // 25835c addiu $s6, $t0, 0x1
        if (t) goto L_25866c;
        r.v0 = LH(lo32(r.s3) + 0x14u);                           // 258360 lh $v0, 0x14($s3)
        r.v1 = addiu(0u, 10000);                                 // 258364 addiu $v1, $zero, 0x2710
        r.a0 = addiu(0u, -1);                                    // 258368 addiu $a0, $zero, -0x1
        WRITE32(lo32(r.s2) + 0x1cu, lo32(r.v1));                 // 25836c sw $v1, 0x1C($s2)
        WRITE32(lo32(r.s2) + 0x24u, lo32(r.a0));                 // 258370 sw $a0, 0x24($s2)
        r.s5 = addiu(0u, -1);                                    // 258374 addiu $s5, $zero, -0x1
        r.a1 = LHU(lo32(r.s3) + 0x14u);                          // 258378 lhu $a1, 0x14($s3)
        r.s1 = 0u;                                               // 25837c daddu $s1, $zero, $zero
        WRITE32(lo32(r.s2) + 0x18u, lo32(r.v1));                 // 258380 sw $v1, 0x18($s2)
        t = lez64(r.v0);                                         // 258384 blez $v0, . + 4 + (0x1D << 2)
        WRITE32(lo32(r.s2) + 0x20u, lo32(r.a0));                 // 258388 sw $a0, 0x20($s2)
        if (t) goto L_2583fc;
        r.s6 = addiu(r.t0, 1);                                   // 25838c addiu $s6, $t0, 0x1
        r.s4 = addiu(r.sp, 32);                                  // 258390 addiu $s4, $sp, 0x20
    L_258398:
        r.v0 = mult(r.s1, r.fp, r.lo, r.hi);                     // 258398 mult $v0, $s1, $fp
        r.a1 = addiu(0u, 12);                                    // 25839c addiu $a1, $zero, 0xC
        r.a1 = mult(r.s1, r.a1, r.lo, r.hi);                     // 2583a0 mult $a1, $s1, $a1
        r.s0 = LW(lo32(r.gp) - 0x4758u);                         // 2583a4 lw $s0, -0x4758($gp)
        r.a0 = LW(lo32(r.sp) + 0x184u);                          // 2583a8 lw $a0, 0x184($sp)
        r.s0 = addu(r.s0, r.v0);                                 // 2583ac addu $s0, $s0, $v0
        r.a1 = addiu(r.a1, 24);                                  // 2583b0 addiu $a1, $a1, 0x18
        WRITE32(lo32(r.s0) + 0x10u, lo32(0u));                   // 2583b4 sw $zero, 0x10($s0)
        r.a1 = addu(r.s3, r.a1);                                 // 2583b8 addu $a1, $s3, $a1
        r.ra = 0x2583c4u;                                        // 2583bc jal func_2B54F8
        r.a2 = r.s0;                                             // 2583c0 daddu $a2, $s0, $zero
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(20); STORE_F(21); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b54f8u, 0x2583bcu, 0x2583c4u)) return;
        LOAD_GPR(s0, 16);
    L_2583c4:
        r.ra = 0x2583ccu;                                        // 2583c4 jal func_257E38
        r.a0 = r.s0;                                             // 2583c8 daddu $a0, $s0, $zero
        STORE_GPR(a0, 4); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x257e38u, 0x2583c4u, 0x2583ccu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(20); LOAD_F(21); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2583cc:
        r.v0 = sll32(r.s1, 2);                                   // 2583cc sll $v0, $s1, 2
        r.v1 = LW(lo32(r.s0) + 0x10u);                           // 2583d0 lw $v1, 0x10($s0)
        r.v0 = addu(r.s4, r.v0);                                 // 2583d4 addu $v0, $s4, $v0
        r.s1 = addiu(r.s1, 1);                                   // 2583d8 addiu $s1, $s1, 0x1
        WRITE32(lo32(r.v0), lo32(r.s0));                         // 2583dc sw $s0, 0x0($v0)
        r.s5 = r.s5 & r.v1;                                      // 2583e0 and $s5, $s5, $v1
        r.v0 = LH(lo32(r.s3) + 0x14u);                           // 2583e4 lh $v0, 0x14($s3)
        r.v0 = slt(r.s1, r.v0);                                  // 2583e8 slt $v0, $s1, $v0
        t = r.v0 != 0u;                                          // 2583ec bnez $v0, . + 4 + (-0x16 << 2)
        r.a1 = LHU(lo32(r.s3) + 0x14u);                          // 2583f0 lhu $a1, 0x14($s3)
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x258398u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a1, 5); STORE_GPR(s1, 17); STORE_GPR(s5, 21); return; }
            goto L_258398;
        }
        // 2583f4 b . + 4 + (0x3 << 2)
        r.v0 = sll32(r.a1, 16);                                  // 2583f8 sll $v0, $a1, 16
        goto L_258404;
    L_2583fc:
        r.s4 = addiu(r.sp, 32);                                  // 2583fc addiu $s4, $sp, 0x20
        r.v0 = sll32(r.a1, 16);                                  // 258400 sll $v0, $a1, 16
    L_258404:
        r.a0 = LW(lo32(r.sp) + 0x20u);                           // 258404 lw $a0, 0x20($sp)
        r.v0 = sra32(r.v0, 16);                                  // 258408 sra $v0, $v0, 16
        r.v1 = sll32(r.v0, 2);                                   // 25840c sll $v1, $v0, 2
        WRITE32(lo32(r.sp) + 0x70u, lo32(r.v0));                 // 258410 sw $v0, 0x70($sp)
        r.v1 = addu(r.s4, r.v1);                                 // 258414 addu $v1, $s4, $v1
        t = r.s5 == 0u;                                          // 258418 beqz $s5, . + 4 + (0x4 << 2)
        WRITE32(lo32(r.v1), lo32(r.a0));                         // 25841c sw $a0, 0x0($v1)
        if (t) goto L_25842c;
        r.v1 = addiu(0u, 1);                                     // 258420 addiu $v1, $zero, 0x1
        // 258424 b . + 4 + (0x91 << 2)
        WRITE32(lo32(r.s2) + 0x2cu, lo32(r.v1));                 // 258428 sw $v1, 0x2C($s2)
        goto L_25866c;
    L_25842c:
        r.s0 = addiu(r.sp, 128);                                 // 25842c addiu $s0, $sp, 0x80
        r.f13 = floatOf(lo32(0u));                               // 258430 mtc1 $zero, $f13
        r.a0 = r.s4;                                             // 258434 daddu $a0, $s4, $zero
        r.a1 = r.s0;                                             // 258438 daddu $a1, $s0, $zero
        r.f12 = FPU_MOV_S(r.f20);                                // 25843c mov.s $f12, $f20
        r.a2 = addiu(0u, 3);                                     // 258440 addiu $a2, $zero, 0x3
        r.ra = 0x25844cu;                                        // 258444 jal func_257F20
        r.a3 = addiu(0u, 16);                                    // 258448 addiu $a3, $zero, 0x10
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(12); STORE_F(13); STORE_F(20); STORE_F(21); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x257f20u, 0x258444u, 0x25844cu)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_F(20);
    L_25844c:
        r.f13 = LWC1(lo32(r.gp) - 0x4768u);                      // 25844c lwc1 $f13, -0x4768($gp)
        r.a0 = r.s0;                                             // 258450 daddu $a0, $s0, $zero
        r.a1 = r.s4;                                             // 258454 daddu $a1, $s4, $zero
        r.f12 = FPU_MOV_S(r.f20);                                // 258458 mov.s $f12, $f20
        r.a2 = 0u;                                               // 25845c daddu $a2, $zero, $zero
        r.ra = 0x258468u;                                        // 258460 jal func_257F20
        r.a3 = addiu(0u, 4);                                     // 258464 addiu $a3, $zero, 0x4
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x257f20u, 0x258460u, 0x258468u)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_F(20);
    L_258468:
        r.f13 = LWC1(lo32(r.gp) - 0x4764u);                      // 258468 lwc1 $f13, -0x4764($gp)
        r.a0 = r.s4;                                             // 25846c daddu $a0, $s4, $zero
        r.a1 = r.s0;                                             // 258470 daddu $a1, $s0, $zero
        r.f12 = FPU_MOV_S(r.f20);                                // 258474 mov.s $f12, $f20
        r.a2 = 0u;                                               // 258478 daddu $a2, $zero, $zero
        r.ra = 0x258484u;                                        // 25847c jal func_257F20
        r.a3 = addiu(0u, 8);                                     // 258480 addiu $a3, $zero, 0x8
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x257f20u, 0x25847cu, 0x258484u)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_F(21);
    L_258484:
        r.f13 = LWC1(lo32(r.gp) - 0x4760u);                      // 258484 lwc1 $f13, -0x4760($gp)
        r.a0 = r.s0;                                             // 258488 daddu $a0, $s0, $zero
        r.a1 = r.s4;                                             // 25848c daddu $a1, $s4, $zero
        r.f12 = FPU_MOV_S(r.f21);                                // 258490 mov.s $f12, $f21
        r.a2 = addiu(0u, 1);                                     // 258494 addiu $a2, $zero, 0x1
        r.ra = 0x2584a0u;                                        // 258498 jal func_257F20
        r.a3 = addiu(0u, 1);                                     // 25849c addiu $a3, $zero, 0x1
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x257f20u, 0x258498u, 0x2584a0u)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_F(21);
    L_2584a0:
        r.f13 = LWC1(lo32(r.gp) - 0x475cu);                      // 2584a0 lwc1 $f13, -0x475C($gp)
        r.a0 = r.s4;                                             // 2584a4 daddu $a0, $s4, $zero
        r.a1 = r.s0;                                             // 2584a8 daddu $a1, $s0, $zero
        r.f12 = FPU_MOV_S(r.f21);                                // 2584ac mov.s $f12, $f21
        r.a2 = addiu(0u, 1);                                     // 2584b0 addiu $a2, $zero, 0x1
        r.ra = 0x2584bcu;                                        // 2584b4 jal func_257F20
        r.a3 = addiu(0u, 2);                                     // 2584b8 addiu $a3, $zero, 0x2
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x257f20u, 0x2584b4u, 0x2584bcu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(20); LOAD_F(21); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2584bc:
        r.v0 = LW(lo32(r.sp) + 0xd0u);                           // 2584bc lw $v0, 0xD0($sp)
        t = r.v0 != 0u;                                          // 2584c0 bnez $v0, . + 4 + (0x3 << 2)
        r.a0 = addiu(0u, 1);                                     // 2584c4 addiu $a0, $zero, 0x1
        if (t) goto L_2584d0;
        // 2584c8 b . + 4 + (0x68 << 2)
        WRITE32(lo32(r.s2) + 0x2cu, lo32(r.a0));                 // 2584cc sw $a0, 0x2C($s2)
        goto L_25866c;
    L_2584d0:
        t = lez64(r.v0);                                         // 2584d0 blez $v0, . + 4 + (0x3C << 2)
        r.s1 = 0u;                                               // 2584d4 daddu $s1, $zero, $zero
        if (t) goto L_2585c4;
        r.a3 = addiu(r.sp, 224);                                 // 2584d8 addiu $a3, $sp, 0xE0
        r.a2 = addiu(r.sp, 228);                                 // 2584dc addiu $a2, $sp, 0xE4
        r.v0 = sll32(r.s1, 2);                                   // 2584e0 sll $v0, $s1, 2
    L_2584e8:
        r.f6 = LWC1(lo32(r.s7) + 0x10u);                         // 2584e8 lwc1 $f6, 0x10($s7)
        r.f6 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f6))); // 2584ec cvt.s.w $f6, $f6
        r.v0 = addu(r.s0, r.v0);                                 // 2584f0 addu $v0, $s0, $v0
        r.f5 = LWC1(lo32(r.s7) + 0x24u);                         // 2584f4 lwc1 $f5, 0x24($s7)
        r.f5 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f5))); // 2584f8 cvt.s.w $f5, $f5
        r.v1 = LW(lo32(r.v0));                                   // 2584fc lw $v1, 0x0($v0)
        r.f3 = LWC1(lo32(r.s7) + 0x8u);                          // 258500 lwc1 $f3, 0x8($s7)
        r.f3 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f3))); // 258504 cvt.s.w $f3, $f3
        r.f4 = LWC1(lo32(r.s7) + 0x1cu);                         // 258508 lwc1 $f4, 0x1C($s7)
        r.f4 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f4))); // 25850c cvt.s.w $f4, $f4
        r.v0 = sll32(r.s1, 3);                                   // 258510 sll $v0, $s1, 3
        r.f2 = LWC1(lo32(r.v1) + 0xcu);                          // 258514 lwc1 $f2, 0xC($v1)
        r.a0 = addu(r.a3, r.v0);                                 // 258518 addu $a0, $a3, $v0
        r.f1 = LWC1(lo32(r.v1));                                 // 25851c lwc1 $f1, 0x0($v1)
        r.a1 = addu(r.a2, r.v0);                                 // 258520 addu $a1, $a2, $v0
        r.f0 = LWC1(lo32(r.v1) + 0x4u);                          // 258524 lwc1 $f0, 0x4($v1)
        r.f1 = divS(r.f1, r.f2, r.fcr31);                        // 258530 div.s $f1, $f1, $f2
        r.f0 = divS(r.f0, r.f2, r.fcr31);                        // 25853c div.s $f0, $f0, $f2
        r.f6 = FPU_MUL_S(r.f6, r.f1);                            // 258540 mul.s $f6, $f6, $f1
        r.f5 = FPU_MUL_S(r.f5, r.f0);                            // 258544 mul.s $f5, $f5, $f0
        r.f3 = FPU_ADD_S(r.f3, r.f6);                            // 258548 add.s $f3, $f3, $f6
        r.f4 = FPU_SUB_S(r.f4, r.f5);                            // 25854c sub.s $f4, $f4, $f5
        r.f0 = floatOf(static_cast<uint32_t>(PS2_FPU_ROUND_NEAREST_W(r.f3))); // 258550 cvt.w.s $f0, $f3
        SWC1(lo32(r.a0), r.f0);                                  // 258554 swc1 $f0, 0x0($a0)
        r.f0 = floatOf(static_cast<uint32_t>(PS2_FPU_ROUND_NEAREST_W(r.f4))); // 258558 cvt.w.s $f0, $f4
        SWC1(lo32(r.a1), r.f0);                                  // 25855c swc1 $f0, 0x0($a1)
        r.v1 = LW(lo32(r.a0));                                   // 258560 lw $v1, 0x0($a0)
        r.v0 = LW(lo32(r.s2) + 0x18u);                           // 258564 lw $v0, 0x18($s2)
        r.v0 = slt(r.v1, r.v0);                                  // 258568 slt $v0, $v1, $v0
        if (r.v0 != 0u)                                          // 25856c bnel $v0, $zero, . + 4 + (0x1 << 2)
        {
            WRITE32(lo32(r.s2) + 0x18u, lo32(r.v1));                 // 258570 sw $v1, 0x18($s2)
            goto L_258574;
        }
    L_258574:
        r.v1 = LW(lo32(r.a1));                                   // 258574 lw $v1, 0x0($a1)
        r.v0 = LW(lo32(r.s2) + 0x1cu);                           // 258578 lw $v0, 0x1C($s2)
        r.v0 = slt(r.v1, r.v0);                                  // 25857c slt $v0, $v1, $v0
        if (r.v0 != 0u)                                          // 258580 bnel $v0, $zero, . + 4 + (0x1 << 2)
        {
            WRITE32(lo32(r.s2) + 0x1cu, lo32(r.v1));                 // 258584 sw $v1, 0x1C($s2)
            goto L_258588;
        }
    L_258588:
        r.v1 = LW(lo32(r.a0));                                   // 258588 lw $v1, 0x0($a0)
        r.v0 = LW(lo32(r.s2) + 0x20u);                           // 25858c lw $v0, 0x20($s2)
        r.v0 = slt(r.v0, r.v1);                                  // 258590 slt $v0, $v0, $v1
        if (r.v0 != 0u)                                          // 258594 bnel $v0, $zero, . + 4 + (0x1 << 2)
        {
            WRITE32(lo32(r.s2) + 0x20u, lo32(r.v1));                 // 258598 sw $v1, 0x20($s2)
            goto L_25859c;
        }
    L_25859c:
        r.v1 = LW(lo32(r.a1));                                   // 25859c lw $v1, 0x0($a1)
        r.v0 = LW(lo32(r.s2) + 0x24u);                           // 2585a0 lw $v0, 0x24($s2)
        r.v0 = slt(r.v0, r.v1);                                  // 2585a4 slt $v0, $v0, $v1
        if (r.v0 != 0u)                                          // 2585a8 bnel $v0, $zero, . + 4 + (0x1 << 2)
        {
            WRITE32(lo32(r.s2) + 0x24u, lo32(r.v1));                 // 2585ac sw $v1, 0x24($s2)
            goto L_2585b0;
        }
    L_2585b0:
        r.v0 = LW(lo32(r.sp) + 0xd0u);                           // 2585b0 lw $v0, 0xD0($sp)
        r.s1 = addiu(r.s1, 1);                                   // 2585b4 addiu $s1, $s1, 0x1
        r.v0 = slt(r.s1, r.v0);                                  // 2585b8 slt $v0, $s1, $v0
        t = r.v0 != 0u;                                          // 2585bc bnez $v0, . + 4 + (-0x36 << 2)
        r.v0 = sll32(r.s1, 2);                                   // 2585c0 sll $v0, $s1, 2
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x2584e8u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(s1, 17); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); ctx->fcr31 = r.fcr31; return; }
            goto L_2584e8;
        }
    L_2585c4:
        r.a3 = LW(lo32(r.s2) + 0x20u);                           // 2585c4 lw $a3, 0x20($s2)
        t = neg64(r.a3);                                         // 2585c8 bltz $a3, . + 4 + (0x28 << 2)
        r.a0 = LW(lo32(r.sp));                                   // 2585cc lw $a0, 0x0($sp)
        if (t) goto L_25866c;
        r.v0 = slt(r.a3, r.a0);                                  // 2585d0 slt $v0, $a3, $a0
        t = r.v0 != 0u;                                          // 2585d4 bnez $v0, . + 4 + (0x10 << 2)
        r.v0 = addiu(0u, 1);                                     // 2585d8 addiu $v0, $zero, 0x1
        if (t) goto L_258618;
        r.t0 = LW(lo32(r.s2) + 0x24u);                           // 2585dc lw $t0, 0x24($s2)
        r.v1 = LW(lo32(r.sp) + 0x4u);                            // 2585e0 lw $v1, 0x4($sp)
        r.v0 = slt(r.t0, r.v1);                                  // 2585e4 slt $v0, $t0, $v1
        t = r.v0 != 0u;                                          // 2585e8 bnez $v0, . + 4 + (0xB << 2)
        r.v0 = addiu(0u, 1);                                     // 2585ec addiu $v0, $zero, 0x1
        if (t) goto L_258618;
        r.a1 = LW(lo32(r.s2) + 0x18u);                           // 2585f0 lw $a1, 0x18($s2)
        r.v0 = LW(lo32(r.sp) + 0x10u);                           // 2585f4 lw $v0, 0x10($sp)
        r.v0 = slt(r.v0, r.a1);                                  // 2585f8 slt $v0, $v0, $a1
        t = r.v0 != 0u;                                          // 2585fc bnez $v0, . + 4 + (0x6 << 2)
        r.v0 = addiu(0u, 1);                                     // 258600 addiu $v0, $zero, 0x1
        if (t) goto L_258618;
        r.a2 = LW(lo32(r.s2) + 0x1cu);                           // 258604 lw $a2, 0x1C($s2)
        r.v0 = LW(lo32(r.sp) + 0x14u);                           // 258608 lw $v0, 0x14($sp)
        r.v0 = slt(r.v0, r.a2);                                  // 25860c slt $v0, $v0, $a2
        t = r.v0 == 0u;                                          // 258610 beqz $v0, . + 4 + (0x3 << 2)
        r.v0 = addiu(0u, 1);                                     // 258614 addiu $v0, $zero, 0x1
        if (t) goto L_258620;
    L_258618:
        // 258618 b . + 4 + (0x14 << 2)
        WRITE32(lo32(r.s2) + 0x2cu, lo32(r.v0));                 // 25861c sw $v0, 0x2C($s2)
        goto L_25866c;
    L_258620:
        r.v0 = slt(r.a1, r.a0);                                  // 258620 slt $v0, $a1, $a0
        t = r.v0 == 0u;                                          // 258624 beqz $v0, . + 4 + (0x4 << 2)
        r.v0 = slt(r.a2, r.v1);                                  // 258628 slt $v0, $a2, $v1
        if (t) goto L_258638;
        WRITE32(lo32(r.s2) + 0x18u, lo32(r.a0));                 // 25862c sw $a0, 0x18($s2)
        r.v1 = LW(lo32(r.sp) + 0x4u);                            // 258630 lw $v1, 0x4($sp)
        r.v0 = slt(r.a2, r.v1);                                  // 258634 slt $v0, $a2, $v1
    L_258638:
        if (r.v0 != 0u)                                          // 258638 bnel $v0, $zero, . + 4 + (0x1 << 2)
        {
            WRITE32(lo32(r.s2) + 0x1cu, lo32(r.v1));                 // 25863c sw $v1, 0x1C($s2)
            goto L_258640;
        }
    L_258640:
        r.v1 = LW(lo32(r.sp) + 0x10u);                           // 258640 lw $v1, 0x10($sp)
        r.v0 = slt(r.v1, r.a3);                                  // 258644 slt $v0, $v1, $a3
        if (r.v0 != 0u)                                          // 258648 bnel $v0, $zero, . + 4 + (0x1 << 2)
        {
            WRITE32(lo32(r.s2) + 0x20u, lo32(r.v1));                 // 25864c sw $v1, 0x20($s2)
            goto L_258650;
        }
    L_258650:
        r.v1 = LW(lo32(r.sp) + 0x14u);                           // 258650 lw $v1, 0x14($sp)
        r.v0 = slt(r.v1, r.t0);                                  // 258654 slt $v0, $v1, $t0
        if (r.v0 != 0u)                                          // 258658 bnel $v0, $zero, . + 4 + (0x1 << 2)
        {
            WRITE32(lo32(r.s2) + 0x24u, lo32(r.v1));                 // 25865c sw $v1, 0x24($s2)
            goto L_258660;
        }
    L_258660:
        r.v1 = LW(lo32(r.sp) + 0x190u);                          // 258660 lw $v1, 0x190($sp)
        r.v1 = addiu(r.v1, 1);                                   // 258664 addiu $v1, $v1, 0x1
        WRITE32(lo32(r.sp) + 0x190u, lo32(r.v1));                // 258668 sw $v1, 0x190($sp)
    L_25866c:
        r.a0 = LW(lo32(r.sp) + 0x18cu);                          // 25866c lw $a0, 0x18C($sp)
        r.t0 = r.s6;                                             // 258670 daddu $t0, $s6, $zero
        r.v0 = slt(r.t0, r.a0);                                  // 258674 slt $v0, $t0, $a0
        t = r.v0 != 0u;                                          // 258678 bnez $v0, . + 4 + (-0xE9 << 2)
        r.a3 = LW(lo32(r.gp) - 0x4dccu);                         // 25867c lw $a3, -0x4DCC($gp)
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x2582d8u)) { STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(20); STORE_F(21); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi; return; }
            goto L_2582d8;
        }
    L_258680:
        r.v0 = LW(lo32(r.sp) + 0x190u);                          // 258680 lw $v0, 0x190($sp)
    L_258684:
        r.ra = READ64(lo32(r.sp) + 0x230u);                      // 258684 ld $ra, 0x230($sp)
        r.fp = READ64(lo32(r.sp) + 0x220u);                      // 258688 ld $fp, 0x220($sp)
        r.s7 = READ64(lo32(r.sp) + 0x210u);                      // 25868c ld $s7, 0x210($sp)
        r.s6 = READ64(lo32(r.sp) + 0x200u);                      // 258690 ld $s6, 0x200($sp)
        r.s5 = READ64(lo32(r.sp) + 0x1f0u);                      // 258694 ld $s5, 0x1F0($sp)
        r.s4 = READ64(lo32(r.sp) + 0x1e0u);                      // 258698 ld $s4, 0x1E0($sp)
        r.s3 = READ64(lo32(r.sp) + 0x1d0u);                      // 25869c ld $s3, 0x1D0($sp)
        r.s2 = READ64(lo32(r.sp) + 0x1c0u);                      // 2586a0 ld $s2, 0x1C0($sp)
        r.s1 = READ64(lo32(r.sp) + 0x1b0u);                      // 2586a4 ld $s1, 0x1B0($sp)
        r.s0 = READ64(lo32(r.sp) + 0x1a0u);                      // 2586a8 ld $s0, 0x1A0($sp)
        r.f21 = LWC1(lo32(r.sp) + 0x248u);                       // 2586ac lwc1 $f21, 0x248($sp)
        r.f20 = LWC1(lo32(r.sp) + 0x240u);                       // 2586b0 lwc1 $f20, 0x240($sp)
        jt = lo32(r.ra);                                         // 2586b4 jr $ra
        r.sp = addiu(r.sp, 592);                                 // 2586b8 addiu $sp, $sp, 0x250
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(20); STORE_F(21); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        ctx->pc = jt;
        return;
    }

    // ---- bgBulletGetClosest (0x25bc88)
    //
    // bgBulletGetClosest(chr, from, &distance): the closest bullet light
    // source for a character's lighting (the glow of its own gun's shot,
    // the nearest bullet, a nearby explosion), its colour fading over a
    // cached record in the character's light state.

    struct BgBulletGetClosestRegs
    {
        uint64_t at, v0, v1, a0, a1, a2, a3, t0, s0, s1, s2, s3, s4, s5, s6, s7, gp, sp, ra;
        float f0, f1, f2, f3, f4, f5, f6, f12, f20, f21;
        uint32_t fcr31;
        uint64_t lo, hi;
    };

    void nativeBgBulletGetClosest(G_ARGS)
    {
        BgBulletGetClosestRegs r;
        bool t;
        uint32_t jt;
        (void)t;
        (void)jt;
        LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(ra, 31); LOAD_F(20); LOAD_F(21); r.lo = ctx->lo; r.hi = ctx->hi;
        r.sp = addiu(r.sp, -224);                                // 25bc88 addiu $sp, $sp, -0xE0
        r.v1 = LW(lo32(r.gp) - 0x5d6cu);                         // 25bc8c lw $v1, -0x5D6C($gp)
        WRITE64(lo32(r.sp) + 0xa0u, r.s6);                       // 25bc90 sd $s6, 0xA0($sp)
        r.v0 = sext32(0xc18f0000u);                              // 25bc94 lui $v0, 0xC18F
        WRITE64(lo32(r.sp) + 0x90u, r.s5);                       // 25bc98 sd $s5, 0x90($sp)
        r.v0 = r.v0 | 0x9c19u;                                   // 25bc9c ori $v0, $v0, 0x9C19
        WRITE64(lo32(r.sp) + 0x80u, r.s4);                       // 25bca0 sd $s4, 0x80($sp)
        r.s5 = r.a2;                                             // 25bca4 daddu $s5, $a2, $zero
        WRITE64(lo32(r.sp) + 0x70u, r.s3);                       // 25bca8 sd $s3, 0x70($sp)
        r.s4 = r.a1;                                             // 25bcac daddu $s4, $a1, $zero
        SWC1(lo32(r.sp) + 0xd8u, r.f21);                         // 25bcb0 swc1 $f21, 0xD8($sp)
        WRITE64(lo32(r.sp) + 0xc0u, r.ra);                       // 25bcb4 sd $ra, 0xC0($sp)
        WRITE64(lo32(r.sp) + 0xb0u, r.s7);                       // 25bcb8 sd $s7, 0xB0($sp)
        WRITE64(lo32(r.sp) + 0x50u, r.s1);                       // 25bcbc sd $s1, 0x50($sp)
        WRITE64(lo32(r.sp) + 0x40u, r.s0);                       // 25bcc0 sd $s0, 0x40($sp)
        SWC1(lo32(r.sp) + 0xd0u, r.f20);                         // 25bcc4 swc1 $f20, 0xD0($sp)
        WRITE64(lo32(r.sp) + 0x60u, r.s2);                       // 25bcc8 sd $s2, 0x60($sp)
        r.s2 = LW(lo32(r.a0) + 0xf4u);                           // 25bccc lw $s2, 0xF4($a0)
        r.a0 = subu(r.a0, r.v1);                                 // 25bcd0 subu $a0, $a0, $v1
        r.a3 = LW(lo32(r.gp) - 0x4ba0u);                         // 25bcd4 lw $a3, -0x4BA0($gp)
        r.a0 = mult(r.a0, r.v0, r.lo, r.hi);                     // 25bcd8 mult $a0, $a0, $v0
        r.t0 = LW(lo32(r.s2) + 0xcu);                            // 25bcdc lw $t0, 0xC($s2)
        r.f21 = floatOf(lo32(0u));                               // 25bce0 mtc1 $zero, $f21
        r.s3 = LW(lo32(r.gp) - 0x6258u);                         // 25bce4 lw $s3, -0x6258($gp)
        t = lez64(r.a3);                                         // 25bce8 blez $a3, . + 4 + (0x6 << 2)
        r.s6 = sra32(r.a0, 3);                                   // 25bcec sra $s6, $a0, 3
        if (t) goto L_25bd04;
        divide(r.s3, r.a3, r.lo, r.hi);                          // 25bcf0 div $zero, $s3, $a3
        if (r.a3 == 0u)                                          // 25bcf4 beql $a3, $zero, . + 4 + (0x1 << 2)
        {
            STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(sp, 29); STORE_F(21); ctx->lo = r.lo; ctx->hi = r.hi;
            ctx->pc = 0x25bcf8u;                                     // 25bcf8 break 0, 7
            runtime->handleBreak(rdram, ctx);
            LOAD_GPR(v1, 3); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(21); r.lo = ctx->lo; r.hi = ctx->hi;
            goto L_25bcfc;
        }
    L_25bcfc:
        r.v0 = r.lo;                                             // 25bcfc mflo $v0
        r.s3 = r.v0;                                             // 25bd00 daddu $s3, $v0, $zero
    L_25bd04:
        r.v0 = addiu(r.t0, -201);                                // 25bd04 addiu $v0, $t0, -0xC9
        r.v0 = sltu(r.v0, sext32(4u));                           // 25bd08 sltiu $v0, $v0, 0x4
        t = r.v0 == 0u;                                          // 25bd0c beqz $v0, . + 4 + (0x41 << 2)
        r.s7 = addiu(0u, 1);                                     // 25bd10 addiu $s7, $zero, 0x1
        if (t) goto L_25be14;
        r.v0 = addiu(0u, 1820);                                  // 25bd14 addiu $v0, $zero, 0x71C
        r.v1 = sext32(0xfffa0000u);                              // 25bd18 lui $v1, 0xFFFA
        r.v0 = mult(r.t0, r.v0, r.lo, r.hi);                     // 25bd1c mult $v0, $t0, $v0
        r.v1 = r.v1 | 0x6b04u;                                   // 25bd20 ori $v1, $v1, 0x6B04
        r.a0 = LW(lo32(r.gp) - 0x4dd0u);                         // 25bd24 lw $a0, -0x4DD0($gp)
        r.v0 = addu(r.v0, r.v1);                                 // 25bd28 addu $v0, $v0, $v1
        r.s1 = addu(r.a0, r.v0);                                 // 25bd2c addu $s1, $a0, $v0
        r.v0 = LW(lo32(r.s1) + 0x1a4u);                          // 25bd30 lw $v0, 0x1A4($s1)
        t = r.v0 == 0u;                                          // 25bd34 beqz $v0, . + 4 + (0x4 << 2)
        r.a0 = 0u;                                               // 25bd38 daddu $a0, $zero, $zero
        if (t) goto L_25bd48;
        r.v0 = LW(lo32(r.v0) + 0x20u);                           // 25bd3c lw $v0, 0x20($v0)
        r.v1 = LHU(lo32(r.v0) + 0x124u);                         // 25bd40 lhu $v1, 0x124($v0)
        r.a0 = r.v1 & 0x1u;                                      // 25bd44 andi $a0, $v1, 0x1
    L_25bd48:
        r.v0 = LW(lo32(r.s1) + 0x264u);                          // 25bd48 lw $v0, 0x264($s1)
        if (r.v0 == 0u)                                          // 25bd4c beql $v0, $zero, . + 4 + (0x4 << 2)
        {
            r.v1 = 0u;                                               // 25bd50 daddu $v1, $zero, $zero
            goto L_25bd60;
        }
        r.v0 = LW(lo32(r.v0) + 0x20u);                           // 25bd54 lw $v0, 0x20($v0)
        r.v1 = LHU(lo32(r.v0) + 0x124u);                         // 25bd58 lhu $v1, 0x124($v0)
        r.v1 = r.v1 & 0x1u;                                      // 25bd5c andi $v1, $v1, 0x1
    L_25bd60:
        t = r.a0 != 0u;                                          // 25bd60 bnez $a0, . + 4 + (0x3 << 2)
        r.s0 = addiu(r.s1, 408);                                 // 25bd64 addiu $s0, $s1, 0x198
        if (t) goto L_25bd70;
        r.s0 = addiu(r.s1, 600);                                 // 25bd68 addiu $s0, $s1, 0x258
        if (r.v1 == 0u) { r.s0 = 0u; zeroHigh(ctx, 16); }        // 25bd6c movz $s0, $zero, $v1
    L_25bd70:
        t = r.s0 == 0u;                                          // 25bd70 beqz $s0, . + 4 + (0x29 << 2)
        r.a0 = r.s4;                                             // 25bd74 daddu $a0, $s4, $zero
        if (t) goto L_25be18;
        r.ra = 0x25bd80u;                                        // 25bd78 jal func_2906A0
        r.a0 = r.s0;                                             // 25bd7c daddu $a0, $s0, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(21); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2906a0u, 0x25bd78u, 0x25bd80u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(sp, 29); LOAD_F(21); r.lo = ctx->lo; r.hi = ctx->hi;
    L_25bd80:
        t = r.v0 == 0u;                                          // 25bd80 beqz $v0, . + 4 + (0x24 << 2)
        r.a0 = r.v0;                                             // 25bd84 daddu $a0, $v0, $zero
        if (t) goto L_25be14;
        r.ra = 0x25bd90u;                                        // 25bd88 jal func_28D038
        r.a1 = addiu(r.sp, 32);                                  // 25bd8c addiu $a1, $sp, 0x20
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x28d038u, 0x25bd88u, 0x25bd90u)) return;
        LOAD_GPR(a0, 4); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s5, 21); LOAD_GPR(sp, 29); LOAD_F(6); LOAD_F(12); r.fcr31 = ctx->fcr31;
    L_25bd90:
        r.f1 = LWC1(lo32(r.sp) + 0x20u);                         // 25bd90 lwc1 $f1, 0x20($sp)
        r.v1 = sext32(0x1fc0000u);                               // 25bd94 lui $v1, 0x1FC
        r.f2 = LWC1(lo32(r.sp) + 0x24u);                         // 25bd98 lwc1 $f2, 0x24($sp)
        r.v1 = addiu(r.v1, 24064);                               // 25bd9c addiu $v1, $v1, 0x5E00
        r.f0 = LWC1(lo32(r.sp) + 0x28u);                         // 25bda0 lwc1 $f0, 0x28($sp)
        r.v0 = r.v1;                                             // 25bda4 daddu $v0, $v1, $zero
        SWC1(lo32(r.v1) + 0xcu, r.f1);                           // 25bda8 swc1 $f1, 0xC($v1)
        SWC1(lo32(r.v1) + 0x10u, r.f2);                          // 25bdac swc1 $f2, 0x10($v1)
        SWC1(lo32(r.v1) + 0x14u, r.f0);                          // 25bdb0 swc1 $f0, 0x14($v1)
        r.at = sext32(0x3f000000u);                              // 25bdb4 lui $at, 0x3F00
        r.f4 = floatOf(lo32(r.at));                              // 25bdb8 mtc1 $at, $f4
        r.f1 = LWC1(lo32(r.s0) + 0x10u);                         // 25bdbc lwc1 $f1, 0x10($s0)
        r.at = sext32(0x3f800000u);                              // 25bdc0 lui $at, 0x3F80
        r.f5 = floatOf(lo32(r.at));                              // 25bdc4 mtc1 $at, $f5
        SWC1(lo32(r.v1) + 0x18u, r.f1);                          // 25bdc8 swc1 $f1, 0x18($v1)
        r.f2 = LWC1(lo32(r.s0) + 0x14u);                         // 25bdcc lwc1 $f2, 0x14($s0)
        SWC1(lo32(r.v1) + 0x1cu, r.f2);                          // 25bdd0 swc1 $f2, 0x1C($v1)
        r.f3 = LWC1(lo32(r.s0) + 0x18u);                         // 25bdd4 lwc1 $f3, 0x18($s0)
        SWC1(lo32(r.v1) + 0x20u, r.f3);                          // 25bdd8 swc1 $f3, 0x20($v1)
        r.f0 = LWC1(lo32(r.s1) + 0xe4u);                         // 25bddc lwc1 $f0, 0xE4($s1)
        r.f0 = FPU_MUL_S(r.f0, r.f4);                            // 25bde0 mul.s $f0, $f0, $f4
        r.f1 = FPU_ADD_S(r.f1, r.f0);                            // 25bde4 add.s $f1, $f1, $f0
        SWC1(lo32(r.v1) + 0x18u, r.f1);                          // 25bde8 swc1 $f1, 0x18($v1)
        r.f0 = LWC1(lo32(r.s1) + 0xe8u);                         // 25bdec lwc1 $f0, 0xE8($s1)
        r.f0 = FPU_MUL_S(r.f0, r.f4);                            // 25bdf0 mul.s $f0, $f0, $f4
        r.f2 = FPU_ADD_S(r.f2, r.f0);                            // 25bdf4 add.s $f2, $f2, $f0
        SWC1(lo32(r.v1) + 0x1cu, r.f2);                          // 25bdf8 swc1 $f2, 0x1C($v1)
        r.f0 = LWC1(lo32(r.s1) + 0xecu);                         // 25bdfc lwc1 $f0, 0xEC($s1)
        r.f0 = FPU_MUL_S(r.f0, r.f4);                            // 25be00 mul.s $f0, $f0, $f4
        r.f3 = FPU_ADD_S(r.f3, r.f0);                            // 25be04 add.s $f3, $f3, $f0
        SWC1(lo32(r.v1) + 0x20u, r.f3);                          // 25be08 swc1 $f3, 0x20($v1)
        // 25be0c b . + 4 + (0xC7 << 2)
        SWC1(lo32(r.s5), r.f5);                                  // 25be10 swc1 $f5, 0x0($s5)
        goto L_25c12c;
    L_25be14:
        r.a0 = r.s4;                                             // 25be14 daddu $a0, $s4, $zero
    L_25be18:
        r.ra = 0x25be20u;                                        // 25be18 jal func_28D100
        r.a1 = addiu(r.sp, 48);                                  // 25be1c addiu $a1, $sp, 0x30
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(21); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x28d100u, 0x25be18u, 0x25be20u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(12); LOAD_F(21); r.fcr31 = ctx->fcr31;
    L_25be20:
        r.s1 = r.v0;                                             // 25be20 daddu $s1, $v0, $zero
        t = r.s1 == 0u;                                          // 25be24 beqz $s1, . + 4 + (0x10 << 2)
        r.f2 = LWC1(lo32(r.sp) + 0x30u);                         // 25be28 lwc1 $f2, 0x30($sp)
        if (t) goto L_25be68;
        r.at = sext32(0x40400000u);                              // 25be2c lui $at, 0x4040
        r.f0 = floatOf(lo32(r.at));                              // 25be30 mtc1 $at, $f0
        r.at = sext32(0x3f800000u);                              // 25be34 lui $at, 0x3F80
        r.f1 = floatOf(lo32(r.at));                              // 25be38 mtc1 $at, $f1
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f2, r.f0)); // 25be3c c.le.s $f2, $f0
        if ((r.fcr31 & kCondition) != 0u)                        // 25be44 bc1tl . + 4 + (0x8 << 2)
        {
            SWC1(lo32(r.s5), r.f1);                                  // 25be48 swc1 $f1, 0x0($s5)
            goto L_25be68;
        }
        r.at = sext32(0x40000000u);                              // 25be4c lui $at, 0x4000
        r.f0 = floatOf(lo32(r.at));                              // 25be50 mtc1 $at, $f0
        r.f0 = FPU_SUB_S(r.f2, r.f0);                            // 25be54 sub.s $f0, $f2, $f0
        r.f1 = divS(r.f1, r.f0, r.fcr31);                        // 25be60 div.s $f1, $f1, $f0
        SWC1(lo32(r.s5), r.f1);                                  // 25be64 swc1 $f1, 0x0($s5)
    L_25be68:
        r.v1 = r.s6 & 0x3u;                                      // 25be68 andi $v1, $s6, 0x3
        r.v0 = r.s3 & 0x3u;                                      // 25be6c andi $v0, $s3, 0x3
        if (r.v1 == r.v0) goto L_25bff4;                         // 25be70 beq $v1, $v0, . + 4 + (0x60 << 2)
        r.v0 = sext32(0xffff0000u);                              // 25be78 lui $v0, 0xFFFF
        r.a0 = LW(lo32(r.s2) + 0x224u);                          // 25be7c lw $a0, 0x224($s2)
        r.v0 = r.v0 | 0xffffu;                                   // 25be80 ori $v0, $v0, 0xFFFF
        t = r.a0 == r.v0;                                        // 25be84 beq $a0, $v0, . + 4 + (0x5B << 2)
        r.s7 = 0u;                                               // 25be88 daddu $s7, $zero, $zero
        if (t) goto L_25bff4;
        r.f2 = LWC1(lo32(r.s4));                                 // 25be8c lwc1 $f2, 0x0($s4)
        r.v0 = srl32(r.a0, 24);                                  // 25be90 srl $v0, $a0, 24
        r.f0 = LWC1(lo32(r.s2) + 0x228u);                        // 25be94 lwc1 $f0, 0x228($s2)
        r.v1 = r.v0 & 0xffu;                                     // 25be98 andi $v1, $v0, 0xFF
        r.f3 = LWC1(lo32(r.s4) + 0x4u);                          // 25be9c lwc1 $f3, 0x4($s4)
        r.f6 = FPU_SUB_S(r.f2, r.f0);                            // 25bea0 sub.s $f6, $f2, $f0
        r.f1 = LWC1(lo32(r.s2) + 0x22cu);                        // 25bea4 lwc1 $f1, 0x22C($s2)
        r.f2 = LWC1(lo32(r.s4) + 0x8u);                          // 25bea8 lwc1 $f2, 0x8($s4)
        r.f0 = LWC1(lo32(r.s2) + 0x230u);                        // 25beac lwc1 $f0, 0x230($s2)
        r.f3 = FPU_SUB_S(r.f3, r.f1);                            // 25beb0 sub.s $f3, $f3, $f1
        t = neg64(r.v1);                                         // 25beb4 bltz $v1, . + 4 + (0x4 << 2)
        r.f5 = FPU_SUB_S(r.f2, r.f0);                            // 25beb8 sub.s $f5, $f2, $f0
        if (t) goto L_25bec8;
        r.f1 = floatOf(lo32(r.v1));                              // 25bebc mtc1 $v1, $f1
        // 25bec0 b . + 4 + (0x7 << 2)
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25bec4 cvt.s.w $f1, $f1
        goto L_25bee0;
    L_25bec8:
        r.v0 = r.v0 & 0x1u;                                      // 25bec8 andi $v0, $v0, 0x1
        r.v1 = srl32(r.v1, 1);                                   // 25becc srl $v1, $v1, 1
        r.v0 = r.v0 | r.v1;                                      // 25bed0 or $v0, $v0, $v1
        r.f1 = floatOf(lo32(r.v0));                              // 25bed4 mtc1 $v0, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25bed8 cvt.s.w $f1, $f1
        r.f1 = FPU_ADD_S(r.f1, r.f1);                            // 25bedc add.s $f1, $f1, $f1
    L_25bee0:
        r.f0 = LWC1(lo32(r.gp) - 0x7cc4u);                       // 25bee0 lwc1 $f0, -0x7CC4($gp)
        r.v0 = srl32(r.a0, 16);                                  // 25bee4 srl $v0, $a0, 16
        r.v1 = r.v0 & 0xffu;                                     // 25bee8 andi $v1, $v0, 0xFF
        r.f0 = FPU_MUL_S(r.f1, r.f0);                            // 25beec mul.s $f0, $f1, $f0
        t = neg64(r.v1);                                         // 25bef0 bltz $v1, . + 4 + (0x4 << 2)
        SWC1(lo32(r.sp) + 0x10u, r.f0);                          // 25bef4 swc1 $f0, 0x10($sp)
        if (t) goto L_25bf04;
        r.f1 = floatOf(lo32(r.v1));                              // 25bef8 mtc1 $v1, $f1
        // 25befc b . + 4 + (0x7 << 2)
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25bf00 cvt.s.w $f1, $f1
        goto L_25bf1c;
    L_25bf04:
        r.v0 = r.v0 & 0x1u;                                      // 25bf04 andi $v0, $v0, 0x1
        r.v1 = srl32(r.v1, 1);                                   // 25bf08 srl $v1, $v1, 1
        r.v0 = r.v0 | r.v1;                                      // 25bf0c or $v0, $v0, $v1
        r.f1 = floatOf(lo32(r.v0));                              // 25bf10 mtc1 $v0, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25bf14 cvt.s.w $f1, $f1
        r.f1 = FPU_ADD_S(r.f1, r.f1);                            // 25bf18 add.s $f1, $f1, $f1
    L_25bf1c:
        r.f0 = LWC1(lo32(r.gp) - 0x7cc0u);                       // 25bf1c lwc1 $f0, -0x7CC0($gp)
        r.v0 = srl32(r.a0, 8);                                   // 25bf20 srl $v0, $a0, 8
        r.v1 = r.v0 & 0xffu;                                     // 25bf24 andi $v1, $v0, 0xFF
        r.f0 = FPU_MUL_S(r.f1, r.f0);                            // 25bf28 mul.s $f0, $f1, $f0
        t = neg64(r.v1);                                         // 25bf2c bltz $v1, . + 4 + (0x5 << 2)
        SWC1(lo32(r.sp) + 0x14u, r.f0);                          // 25bf30 swc1 $f0, 0x14($sp)
        if (t) goto L_25bf44;
        r.f4 = floatOf(lo32(r.v1));                              // 25bf34 mtc1 $v1, $f4
        r.f4 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f4))); // 25bf38 cvt.s.w $f4, $f4
        // 25bf3c b . + 4 + (0x8 << 2)
        r.f2 = FPU_MUL_S(r.f3, r.f3);                            // 25bf40 mul.s $f2, $f3, $f3
        goto L_25bf60;
    L_25bf44:
        r.v0 = r.v0 & 0x1u;                                      // 25bf44 andi $v0, $v0, 0x1
        r.v1 = srl32(r.v1, 1);                                   // 25bf48 srl $v1, $v1, 1
        r.v0 = r.v0 | r.v1;                                      // 25bf4c or $v0, $v0, $v1
        r.f4 = floatOf(lo32(r.v0));                              // 25bf50 mtc1 $v0, $f4
        r.f4 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f4))); // 25bf54 cvt.s.w $f4, $f4
        r.f4 = FPU_ADD_S(r.f4, r.f4);                            // 25bf58 add.s $f4, $f4, $f4
        r.f2 = FPU_MUL_S(r.f3, r.f3);                            // 25bf5c mul.s $f2, $f3, $f3
    L_25bf60:
        r.f0 = LWC1(lo32(r.gp) - 0x7cbcu);                       // 25bf60 lwc1 $f0, -0x7CBC($gp)
        r.f1 = FPU_MUL_S(r.f6, r.f6);                            // 25bf64 mul.s $f1, $f6, $f6
        r.f0 = FPU_MUL_S(r.f4, r.f0);                            // 25bf68 mul.s $f0, $f4, $f0
        r.f3 = FPU_MUL_S(r.f5, r.f5);                            // 25bf6c mul.s $f3, $f5, $f5
        r.f1 = FPU_ADD_S(r.f1, r.f2);                            // 25bf70 add.s $f1, $f1, $f2
        SWC1(lo32(r.sp) + 0x18u, r.f0);                          // 25bf74 swc1 $f0, 0x18($sp)
        r.f12 = FPU_ADD_S(r.f1, r.f3);                           // 25bf78 add.s $f12, $f1, $f3
        r.f0 = LWC1(lo32(r.s2) + 0x228u);                        // 25bf7c lwc1 $f0, 0x228($s2)
        SWC1(lo32(r.sp), r.f0);                                  // 25bf80 swc1 $f0, 0x0($sp)
        r.f4 = FPU_SQRT_S(r.f12);                                // 25bf8c c1 0xC0104 (sqrt.s $f4, $f12)
        r.f0 = LWC1(lo32(r.s2) + 0x22cu);                        // 25bf90 lwc1 $f0, 0x22C($s2)
        SWC1(lo32(r.sp) + 0x4u, r.f0);                           // 25bf94 swc1 $f0, 0x4($sp)
        r.f1 = LWC1(lo32(r.s2) + 0x230u);                        // 25bf98 lwc1 $f1, 0x230($s2)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f4, r.f4)); // 25bf9c c.eq.s $f4, $f4
        t = (r.fcr31 & kCondition) != 0u;                        // 25bfa4 bc1t . + 4 + (0x4 << 2)
        SWC1(lo32(r.sp) + 0x8u, r.f1);                           // 25bfa8 swc1 $f1, 0x8($sp)
        if (t) goto L_25bfb8;
        r.ra = 0x25bfb4u;                                        // 25bfac jal func_2D8398
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s1, 17); STORE_GPR(s7, 23); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(12); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2d8398u, 0x25bfacu, 0x25bfb4u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s7, 23); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(2); LOAD_F(3); LOAD_F(5); LOAD_F(6); LOAD_F(12); r.fcr31 = ctx->fcr31;
    L_25bfb4:
        r.f4 = FPU_MOV_S(r.f0);                                  // 25bfb4 mov.s $f4, $f0
    L_25bfb8:
        r.at = sext32(0x3f000000u);                              // 25bfb8 lui $at, 0x3F00
        r.f0 = floatOf(lo32(r.at));                              // 25bfbc mtc1 $at, $f0
        r.at = sext32(0x40000000u);                              // 25bfc0 lui $at, 0x4000
        r.f1 = floatOf(lo32(r.at));                              // 25bfc4 mtc1 $at, $f1
        r.f0 = FPU_MUL_S(r.f4, r.f0);                            // 25bfc8 mul.s $f0, $f4, $f0
        r.at = sext32(0x3f800000u);                              // 25bfcc lui $at, 0x3F80
        r.f21 = floatOf(lo32(r.at));                             // 25bfd0 mtc1 $at, $f21
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f0, r.f1)); // 25bfd4 c.le.s $f0, $f1
        t = (r.fcr31 & kCondition) != 0u;                        // 25bfdc bc1t . + 4 + (0x5 << 2)
        SWC1(lo32(r.sp) + 0x34u, r.f0);                          // 25bfe0 swc1 $f0, 0x34($sp)
        if (t) goto L_25bff4;
        r.f0 = FPU_SUB_S(r.f0, r.f21);                           // 25bfe4 sub.s $f0, $f0, $f21
        r.f21 = divS(r.f21, r.f0, r.fcr31);                      // 25bff0 div.s $f21, $f21, $f0
    L_25bff4:
        t = r.s7 == 0u;                                          // 25bff4 beqz $s7, . + 4 + (0x32 << 2)
        r.a0 = r.s4;                                             // 25bff8 daddu $a0, $s4, $zero
        if (t) goto L_25c0c0;
        r.a1 = r.sp;                                             // 25bffc daddu $a1, $sp, $zero
        r.a2 = addiu(r.sp, 52);                                  // 25c000 addiu $a2, $sp, 0x34
        r.ra = 0x25c00cu;                                        // 25c004 jal func_2A1E98
        r.a3 = addiu(r.sp, 16);                                  // 25c008 addiu $a3, $sp, 0x10
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(s1, 17); STORE_GPR(s7, 23); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(12); STORE_F(21); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2a1e98u, 0x25c004u, 0x25c00cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(a0, 4); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s5, 21); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(21); r.fcr31 = ctx->fcr31;
    L_25c00c:
        t = r.v0 == 0u;                                          // 25c00c beqz $v0, . + 4 + (0x29 << 2)
        r.f12 = LWC1(lo32(r.sp) + 0x10u);                        // 25c010 lwc1 $f12, 0x10($sp)
        if (t) goto L_25c0b4;
        r.at = sext32(0x437f0000u);                              // 25c014 lui $at, 0x437F
        r.f20 = floatOf(lo32(r.at));                             // 25c018 mtc1 $at, $f20
        r.at = sext32(0x3f800000u);                              // 25c01c lui $at, 0x3F80
        r.f21 = floatOf(lo32(r.at));                             // 25c020 mtc1 $at, $f21
        r.ra = 0x25c02cu;                                        // 25c024 jal func_2E4508
        r.f12 = FPU_MUL_S(r.f12, r.f20);                         // 25c028 mul.s $f12, $f12, $f20
        STORE_GPR(at, 1); STORE_GPR(ra, 31); STORE_F(12); STORE_F(20); STORE_F(21);
        if (!guestCall(G_PASS, 0x2e4508u, 0x25c024u, 0x25c02cu)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(sp, 29); LOAD_F(20);
    L_25c02c:
        r.f12 = LWC1(lo32(r.sp) + 0x14u);                        // 25c02c lwc1 $f12, 0x14($sp)
        r.s0 = sll32(r.v0, 24);                                  // 25c030 sll $s0, $v0, 24
        r.ra = 0x25c03cu;                                        // 25c034 jal func_2E4508
        r.f12 = FPU_MUL_S(r.f12, r.f20);                         // 25c038 mul.s $f12, $f12, $f20
        STORE_GPR(s0, 16); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x2e4508u, 0x25c034u, 0x25c03cu)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16); LOAD_GPR(sp, 29); LOAD_F(20);
    L_25c03c:
        r.f12 = LWC1(lo32(r.sp) + 0x18u);                        // 25c03c lwc1 $f12, 0x18($sp)
        r.v0 = sll32(r.v0, 16);                                  // 25c040 sll $v0, $v0, 16
        r.s0 = r.s0 | r.v0;                                      // 25c044 or $s0, $s0, $v0
        r.ra = 0x25c050u;                                        // 25c048 jal func_2E4508
        r.f12 = FPU_MUL_S(r.f12, r.f20);                         // 25c04c mul.s $f12, $f12, $f20
        STORE_GPR(v0, 2); STORE_GPR(s0, 16); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x2e4508u, 0x25c048u, 0x25c050u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(a0, 4); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s5, 21); LOAD_GPR(sp, 29); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(12); LOAD_F(21); r.fcr31 = ctx->fcr31;
    L_25c050:
        r.f0 = LWC1(lo32(r.sp));                                 // 25c050 lwc1 $f0, 0x0($sp)
        r.v0 = sll32(r.v0, 8);                                   // 25c054 sll $v0, $v0, 8
        r.s0 = r.s0 | r.v0;                                      // 25c058 or $s0, $s0, $v0
        r.at = sext32(0x3f000000u);                              // 25c05c lui $at, 0x3F00
        r.f3 = floatOf(lo32(r.at));                              // 25c060 mtc1 $at, $f3
        SWC1(lo32(r.s2) + 0x228u, r.f0);                         // 25c064 swc1 $f0, 0x228($s2)
        r.at = sext32(0x40000000u);                              // 25c068 lui $at, 0x4000
        r.f2 = floatOf(lo32(r.at));                              // 25c06c mtc1 $at, $f2
        r.f1 = LWC1(lo32(r.sp) + 0x4u);                          // 25c070 lwc1 $f1, 0x4($sp)
        WRITE32(lo32(r.s2) + 0x224u, lo32(r.s0));                // 25c074 sw $s0, 0x224($s2)
        SWC1(lo32(r.s2) + 0x22cu, r.f1);                         // 25c078 swc1 $f1, 0x22C($s2)
        r.f0 = LWC1(lo32(r.sp) + 0x8u);                          // 25c07c lwc1 $f0, 0x8($sp)
        SWC1(lo32(r.s2) + 0x230u, r.f0);                         // 25c080 swc1 $f0, 0x230($s2)
        r.f1 = LWC1(lo32(r.sp) + 0x34u);                         // 25c084 lwc1 $f1, 0x34($sp)
        r.f0 = FPU_MUL_S(r.f1, r.f3);                            // 25c088 mul.s $f0, $f1, $f3
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f0, r.f2)); // 25c08c c.le.s $f0, $f2
        t = (r.fcr31 & kCondition) != 0u;                        // 25c094 bc1t . + 4 + (0xA << 2)
        SWC1(lo32(r.sp) + 0x34u, r.f0);                          // 25c098 swc1 $f0, 0x34($sp)
        if (t) goto L_25c0c0;
        r.f0 = FPU_SUB_S(r.f0, r.f21);                           // 25c09c sub.s $f0, $f0, $f21
        r.f21 = divS(r.f21, r.f0, r.fcr31);                      // 25c0a8 div.s $f21, $f21, $f0
        // 25c0ac b . + 4 + (0x4 << 2)
        goto L_25c0c0;
    L_25c0b4:
        r.v0 = sext32(0xffff0000u);                              // 25c0b4 lui $v0, 0xFFFF
        r.v0 = r.v0 | 0xffffu;                                   // 25c0b8 ori $v0, $v0, 0xFFFF
        WRITE32(lo32(r.s2) + 0x224u, lo32(r.v0));                // 25c0bc sw $v0, 0x224($s2)
    L_25c0c0:
        r.v0 = sext32(0xffff0000u);                              // 25c0c0 lui $v0, 0xFFFF
        r.v1 = LW(lo32(r.s2) + 0x224u);                          // 25c0c4 lw $v1, 0x224($s2)
        r.v0 = r.v0 | 0xffffu;                                   // 25c0c8 ori $v0, $v0, 0xFFFF
        if (r.v1 == r.v0)                                        // 25c0cc beql $v1, $v0, . + 4 + (0x17 << 2)
        {
            r.v0 = r.s1;                                             // 25c0d0 daddu $v0, $s1, $zero
            goto L_25c12c;
        }
        t = r.s1 == 0u;                                          // 25c0d4 beqz $s1, . + 4 + (0x6 << 2)
        r.f4 = LWC1(lo32(r.sp) + 0x10u);                         // 25c0d8 lwc1 $f4, 0x10($sp)
        if (t) goto L_25c0f0;
        r.f0 = LWC1(lo32(r.s5));                                 // 25c0dc lwc1 $f0, 0x0($s5)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f21)); // 25c0e0 c.lt.s $f0, $f21
        t = (r.fcr31 & kCondition) == 0u;                        // 25c0e8 bc1f . + 4 + (0x10 << 2)
        r.v0 = r.s1;                                             // 25c0ec daddu $v0, $s1, $zero
        if (t) goto L_25c12c;
    L_25c0f0:
        r.v1 = sext32(0x1fc0000u);                               // 25c0f0 lui $v1, 0x1FC
        r.f5 = LWC1(lo32(r.sp) + 0x14u);                         // 25c0f4 lwc1 $f5, 0x14($sp)
        r.v1 = addiu(r.v1, 24064);                               // 25c0f8 addiu $v1, $v1, 0x5E00
        r.f3 = LWC1(lo32(r.sp) + 0x18u);                         // 25c0fc lwc1 $f3, 0x18($sp)
        r.v0 = r.v1;                                             // 25c100 daddu $v0, $v1, $zero
        r.f0 = LWC1(lo32(r.sp));                                 // 25c104 lwc1 $f0, 0x0($sp)
        r.f1 = LWC1(lo32(r.sp) + 0x4u);                          // 25c108 lwc1 $f1, 0x4($sp)
        r.f2 = LWC1(lo32(r.sp) + 0x8u);                          // 25c10c lwc1 $f2, 0x8($sp)
        SWC1(lo32(r.s5), r.f21);                                 // 25c110 swc1 $f21, 0x0($s5)
        SWC1(lo32(r.v1) + 0xcu, r.f4);                           // 25c114 swc1 $f4, 0xC($v1)
        SWC1(lo32(r.v1) + 0x10u, r.f5);                          // 25c118 swc1 $f5, 0x10($v1)
        SWC1(lo32(r.v1) + 0x14u, r.f3);                          // 25c11c swc1 $f3, 0x14($v1)
        SWC1(lo32(r.v1) + 0x18u, r.f0);                          // 25c120 swc1 $f0, 0x18($v1)
        SWC1(lo32(r.v1) + 0x1cu, r.f1);                          // 25c124 swc1 $f1, 0x1C($v1)
        SWC1(lo32(r.v1) + 0x20u, r.f2);                          // 25c128 swc1 $f2, 0x20($v1)
    L_25c12c:
        r.ra = READ64(lo32(r.sp) + 0xc0u);                       // 25c12c ld $ra, 0xC0($sp)
        r.s7 = READ64(lo32(r.sp) + 0xb0u);                       // 25c130 ld $s7, 0xB0($sp)
        r.s6 = READ64(lo32(r.sp) + 0xa0u);                       // 25c134 ld $s6, 0xA0($sp)
        r.s5 = READ64(lo32(r.sp) + 0x90u);                       // 25c138 ld $s5, 0x90($sp)
        r.s4 = READ64(lo32(r.sp) + 0x80u);                       // 25c13c ld $s4, 0x80($sp)
        r.s3 = READ64(lo32(r.sp) + 0x70u);                       // 25c140 ld $s3, 0x70($sp)
        r.s2 = READ64(lo32(r.sp) + 0x60u);                       // 25c144 ld $s2, 0x60($sp)
        r.s1 = READ64(lo32(r.sp) + 0x50u);                       // 25c148 ld $s1, 0x50($sp)
        r.s0 = READ64(lo32(r.sp) + 0x40u);                       // 25c14c ld $s0, 0x40($sp)
        r.f21 = LWC1(lo32(r.sp) + 0xd8u);                        // 25c150 lwc1 $f21, 0xD8($sp)
        r.f20 = LWC1(lo32(r.sp) + 0xd0u);                        // 25c154 lwc1 $f20, 0xD0($sp)
        jt = lo32(r.ra);                                         // 25c158 jr $ra
        r.sp = addiu(r.sp, 224);                                 // 25c15c addiu $sp, $sp, 0xE0
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(12); STORE_F(20); STORE_F(21); ctx->fcr31 = r.fcr31;
        ctx->pc = jt;
        return;
    }

    // ---- animMtxTick (0x273bb0)
    //
    // animMtxTick(obj): the per-frame matrices of an animated object, by
    // its matrix mode (a five-way jump table: identity, rotation about Y,
    // rotation ZXY, either with a roll) multiplied into its parts' matrices.

    struct AnimMtxTickRegs
    {
        uint64_t at, v0, v1, a0, a1, a2, s0, s1, s2, s3, s4, gp, sp, ra;
        float f0, f1, f12, f13, f14, f15, f16, f17;
        uint32_t fcr31;
        uint64_t lo, hi;
    };

    void nativeAnimMtxTick(G_ARGS)
    {
        AnimMtxTickRegs r;
        bool t;
        uint32_t jt;
        (void)t;
        (void)jt;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(ra, 31); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
        r.sp = addiu(r.sp, -224);                                // 273bb0 addiu $sp, $sp, -0xE0
        r.a1 = LW(lo32(r.gp) - 0x4ea4u);                         // 273bb4 lw $a1, -0x4EA4($gp)
        WRITE64(lo32(r.sp) + 0xc0u, r.s4);                       // 273bb8 sd $s4, 0xC0($sp)
        WRITE64(lo32(r.sp) + 0xd0u, r.ra);                       // 273bbc sd $ra, 0xD0($sp)
        r.s4 = 0u;                                               // 273bc0 daddu $s4, $zero, $zero
        WRITE64(lo32(r.sp) + 0xb0u, r.s3);                       // 273bc4 sd $s3, 0xB0($sp)
        WRITE64(lo32(r.sp) + 0xa0u, r.s2);                       // 273bc8 sd $s2, 0xA0($sp)
        WRITE64(lo32(r.sp) + 0x90u, r.s1);                       // 273bcc sd $s1, 0x90($sp)
        t = lez64(r.a1);                                         // 273bd0 blez $a1, . + 4 + (0x193 << 2)
        WRITE64(lo32(r.sp) + 0x80u, r.s0);                       // 273bd4 sd $s0, 0x80($sp)
        if (t) goto L_274220;
        r.v0 = addiu(0u, 592);                                   // 273bd8 addiu $v0, $zero, 0x250
    L_273be0:
        r.v1 = LW(lo32(r.gp) - 0x4f84u);                         // 273be0 lw $v1, -0x4F84($gp)
        r.v0 = mult(r.s4, r.v0, r.lo, r.hi);                     // 273be4 mult $v0, $s4, $v0
        r.s2 = addu(r.v1, r.v0);                                 // 273be8 addu $s2, $v1, $v0
        r.a0 = LW(lo32(r.s2) + 0x10u);                           // 273bec lw $a0, 0x10($s2)
        if (neg64(r.a0))                                         // 273bf0 bltzl $a0, . + 4 + (0x188 << 2)
        {
            r.s4 = addiu(r.s4, 1);                                   // 273bf4 addiu $s4, $s4, 0x1
            goto L_274214;
        }
        r.s3 = LW(lo32(r.s2) + 0x20u);                           // 273bf8 lw $s3, 0x20($s2)
        r.v0 = LW(lo32(r.s3) + 0x4u);                            // 273bfc lw $v0, 0x4($s3)
        t = r.v0 == 0u;                                          // 273c00 beqz $v0, . + 4 + (0x181 << 2)
        r.v0 = addiu(0u, 8);                                     // 273c04 addiu $v0, $zero, 0x8
        if (t) goto L_274208;
        r.v1 = LW(lo32(r.s2) + 0x8u);                            // 273c08 lw $v1, 0x8($s2)
        t = r.v1 == r.v0;                                        // 273c0c beq $v1, $v0, . + 4 + (0x4 << 2)
        r.v0 = sext32(0x350000u);                                // 273c10 lui $v0, 0x35
        if (t) goto L_273c20;
        r.v1 = LW(lo32(r.v0) + 0x3710u);                         // 273c14 lw $v1, 0x3710($v0)
        if (r.s2 != r.v1)                                        // 273c18 bnel $s2, $v1, . + 4 + (0x83 << 2)
        {
            r.v0 = LW(lo32(r.s3));                                   // 273c1c lw $v0, 0x0($s3)
            goto L_273e28;
        }
    L_273c20:
        r.f15 = LWC1(lo32(r.s2) + 0x4cu);                        // 273c20 lwc1 $f15, 0x4C($s2)
        r.a0 = r.sp;                                             // 273c24 daddu $a0, $sp, $zero
        r.f0 = LWC1(lo32(r.gp) - 0x7a64u);                       // 273c28 lwc1 $f0, -0x7A64($gp)
        r.at = sext32(0x43340000u);                              // 273c2c lui $at, 0x4334
        r.f1 = floatOf(lo32(r.at));                              // 273c30 mtc1 $at, $f1
        r.f15 = FPU_MUL_S(r.f15, r.f0);                          // 273c34 mul.s $f15, $f15, $f0
        r.f12 = LWC1(lo32(r.s2) + 0x30u);                        // 273c38 lwc1 $f12, 0x30($s2)
        r.f13 = LWC1(lo32(r.s2) + 0x34u);                        // 273c3c lwc1 $f13, 0x34($s2)
        r.f15 = divS(r.f15, r.f1, r.fcr31);                      // 273c48 div.s $f15, $f15, $f1
        r.ra = 0x273c54u;                                        // 273c4c jal func_2B4C50
        r.f14 = LWC1(lo32(r.s2) + 0x38u);                        // 273c50 lwc1 $f14, 0x38($s2)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b4c50u, 0x273c4cu, 0x273c54u)) return;
        LOAD_GPR(v1, 3); LOAD_GPR(s0, 16); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_273c54:
        r.a0 = LW(lo32(r.s2) + 0x10u);                           // 273c54 lw $a0, 0x10($s2)
        r.v0 = sext32(0x1000000u);                               // 273c58 lui $v0, 0x100
        r.v0 = r.a0 & r.v0;                                      // 273c5c and $v0, $a0, $v0
        t = r.v0 == 0u;                                          // 273c60 beqz $v0, . + 4 + (0x1B << 2)
        r.v0 = LW(lo32(r.gp) - 0x4dd0u);                         // 273c64 lw $v0, -0x4DD0($gp)
        if (t) goto L_273cd0;
        r.s1 = addiu(r.sp, 64);                                  // 273c68 addiu $s1, $sp, 0x40
        r.a2 = r.sp;                                             // 273c6c daddu $a2, $sp, $zero
        r.a0 = r.s1;                                             // 273c70 daddu $a0, $s1, $zero
        r.a1 = LW(lo32(r.v0) + 0x6e4u);                          // 273c74 lw $a1, 0x6E4($v0)
        r.ra = 0x273c80u;                                        // 273c78 jal func_2D5E98
        r.s0 = 0u;                                               // 273c7c daddu $s0, $zero, $zero
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x273c78u, 0x273c80u)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_273c80:
        r.v0 = LW(lo32(r.s3));                                   // 273c80 lw $v0, 0x0($s3)
        r.v1 = LW(lo32(r.v0) + 0x4u);                            // 273c84 lw $v1, 0x4($v0)
        if (lez64(r.v1))                                         // 273c88 blezl $v1, . + 4 + (0x11 << 2)
        {
            r.a0 = LW(lo32(r.s2) + 0x10u);                           // 273c8c lw $a0, 0x10($s2)
            goto L_273cd0;
        }
        r.s4 = addiu(r.s4, 1);                                   // 273c90 addiu $s4, $s4, 0x1
        r.a0 = LW(lo32(r.s3) + 0x8u);                            // 273c94 lw $a0, 0x8($s3)
    L_273c98:
        r.v0 = sll32(r.s0, 6);                                   // 273c98 sll $v0, $s0, 6
        r.a2 = LW(lo32(r.s3) + 0x4u);                            // 273c9c lw $a2, 0x4($s3)
        r.a1 = r.s1;                                             // 273ca0 daddu $a1, $s1, $zero
        r.a0 = addu(r.a0, r.v0);                                 // 273ca4 addu $a0, $a0, $v0
        r.s0 = addiu(r.s0, 1);                                   // 273ca8 addiu $s0, $s0, 0x1
        r.ra = 0x273cb4u;                                        // 273cac jal func_2D5E98
        r.a2 = addu(r.a2, r.v0);                                 // 273cb0 addu $a2, $a2, $v0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s4, 20); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x273cacu, 0x273cb4u)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_273cb4:
        r.v1 = LW(lo32(r.s3));                                   // 273cb4 lw $v1, 0x0($s3)
        r.v0 = LW(lo32(r.v1) + 0x4u);                            // 273cb8 lw $v0, 0x4($v1)
        r.v0 = slt(r.s0, r.v0);                                  // 273cbc slt $v0, $s0, $v0
        if (r.v0 != 0u)                                          // 273cc0 bnel $v0, $zero, . + 4 + (-0xB << 2)
        {
            r.a0 = LW(lo32(r.s3) + 0x8u);                            // 273cc4 lw $a0, 0x8($s3)
            if (loopCheckpoint(ctx, runtime, 0x273c98u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); return; }
            goto L_273c98;
        }
        // 273cc8 b . + 4 + (0x2 << 2)
        r.a0 = LW(lo32(r.s2) + 0x10u);                           // 273ccc lw $a0, 0x10($s2)
        goto L_273cd4;
    L_273cd0:
        r.s4 = addiu(r.s4, 1);                                   // 273cd0 addiu $s4, $s4, 0x1
    L_273cd4:
        r.v0 = sext32(0x2000000u);                               // 273cd4 lui $v0, 0x200
        r.v0 = r.a0 & r.v0;                                      // 273cd8 and $v0, $a0, $v0
        t = r.v0 == 0u;                                          // 273cdc beqz $v0, . + 4 + (0x19 << 2)
        r.v0 = LW(lo32(r.gp) - 0x4dd0u);                         // 273ce0 lw $v0, -0x4DD0($gp)
        if (t) goto L_273d44;
        r.s1 = addiu(r.sp, 64);                                  // 273ce4 addiu $s1, $sp, 0x40
        r.a2 = r.sp;                                             // 273ce8 daddu $a2, $sp, $zero
        r.a0 = r.s1;                                             // 273cec daddu $a0, $s1, $zero
        r.a1 = LW(lo32(r.v0) + 0xe00u);                          // 273cf0 lw $a1, 0xE00($v0)
        r.ra = 0x273cfcu;                                        // 273cf4 jal func_2D5E98
        r.s0 = 0u;                                               // 273cf8 daddu $s0, $zero, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s4, 20); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x273cf4u, 0x273cfcu)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_273cfc:
        r.v0 = LW(lo32(r.s3));                                   // 273cfc lw $v0, 0x0($s3)
        r.v1 = LW(lo32(r.v0) + 0x4u);                            // 273d00 lw $v1, 0x4($v0)
        if (lez64(r.v1))                                         // 273d04 blezl $v1, . + 4 + (0xF << 2)
        {
            r.a0 = LW(lo32(r.s2) + 0x10u);                           // 273d08 lw $a0, 0x10($s2)
            goto L_273d44;
        }
        r.a0 = LW(lo32(r.s3) + 0xcu);                            // 273d0c lw $a0, 0xC($s3)
    L_273d10:
        r.v0 = sll32(r.s0, 6);                                   // 273d10 sll $v0, $s0, 6
        r.a2 = LW(lo32(r.s3) + 0x4u);                            // 273d14 lw $a2, 0x4($s3)
        r.a1 = r.s1;                                             // 273d18 daddu $a1, $s1, $zero
        r.a0 = addu(r.a0, r.v0);                                 // 273d1c addu $a0, $a0, $v0
        r.s0 = addiu(r.s0, 1);                                   // 273d20 addiu $s0, $s0, 0x1
        r.ra = 0x273d2cu;                                        // 273d24 jal func_2D5E98
        r.a2 = addu(r.a2, r.v0);                                 // 273d28 addu $a2, $a2, $v0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x273d24u, 0x273d2cu)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_273d2c:
        r.v1 = LW(lo32(r.s3));                                   // 273d2c lw $v1, 0x0($s3)
        r.v0 = LW(lo32(r.v1) + 0x4u);                            // 273d30 lw $v0, 0x4($v1)
        r.v0 = slt(r.s0, r.v0);                                  // 273d34 slt $v0, $s0, $v0
        if (r.v0 != 0u)                                          // 273d38 bnel $v0, $zero, . + 4 + (-0xB << 2)
        {
            r.a0 = LW(lo32(r.s3) + 0xcu);                            // 273d3c lw $a0, 0xC($s3)
            if (loopCheckpoint(ctx, runtime, 0x273d10u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); return; }
            goto L_273d10;
        }
        r.a0 = LW(lo32(r.s2) + 0x10u);                           // 273d40 lw $a0, 0x10($s2)
    L_273d44:
        r.v0 = sext32(0x4000000u);                               // 273d44 lui $v0, 0x400
        r.v0 = r.a0 & r.v0;                                      // 273d48 and $v0, $a0, $v0
        t = r.v0 == 0u;                                          // 273d4c beqz $v0, . + 4 + (0x19 << 2)
        r.v0 = LW(lo32(r.gp) - 0x4dd0u);                         // 273d50 lw $v0, -0x4DD0($gp)
        if (t) goto L_273db4;
        r.s1 = addiu(r.sp, 64);                                  // 273d54 addiu $s1, $sp, 0x40
        r.a2 = r.sp;                                             // 273d58 daddu $a2, $sp, $zero
        r.a0 = r.s1;                                             // 273d5c daddu $a0, $s1, $zero
        r.a1 = LW(lo32(r.v0) + 0x151cu);                         // 273d60 lw $a1, 0x151C($v0)
        r.ra = 0x273d6cu;                                        // 273d64 jal func_2D5E98
        r.s0 = 0u;                                               // 273d68 daddu $s0, $zero, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s4, 20); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x273d64u, 0x273d6cu)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_273d6c:
        r.v0 = LW(lo32(r.s3));                                   // 273d6c lw $v0, 0x0($s3)
        r.v1 = LW(lo32(r.v0) + 0x4u);                            // 273d70 lw $v1, 0x4($v0)
        if (lez64(r.v1))                                         // 273d74 blezl $v1, . + 4 + (0xF << 2)
        {
            r.a0 = LW(lo32(r.s2) + 0x10u);                           // 273d78 lw $a0, 0x10($s2)
            goto L_273db4;
        }
        r.a0 = LW(lo32(r.s3) + 0x10u);                           // 273d7c lw $a0, 0x10($s3)
    L_273d80:
        r.v0 = sll32(r.s0, 6);                                   // 273d80 sll $v0, $s0, 6
        r.a2 = LW(lo32(r.s3) + 0x4u);                            // 273d84 lw $a2, 0x4($s3)
        r.a1 = r.s1;                                             // 273d88 daddu $a1, $s1, $zero
        r.a0 = addu(r.a0, r.v0);                                 // 273d8c addu $a0, $a0, $v0
        r.s0 = addiu(r.s0, 1);                                   // 273d90 addiu $s0, $s0, 0x1
        r.ra = 0x273d9cu;                                        // 273d94 jal func_2D5E98
        r.a2 = addu(r.a2, r.v0);                                 // 273d98 addu $a2, $a2, $v0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x273d94u, 0x273d9cu)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_273d9c:
        r.v1 = LW(lo32(r.s3));                                   // 273d9c lw $v1, 0x0($s3)
        r.v0 = LW(lo32(r.v1) + 0x4u);                            // 273da0 lw $v0, 0x4($v1)
        r.v0 = slt(r.s0, r.v0);                                  // 273da4 slt $v0, $s0, $v0
        if (r.v0 != 0u)                                          // 273da8 bnel $v0, $zero, . + 4 + (-0xB << 2)
        {
            r.a0 = LW(lo32(r.s3) + 0x10u);                           // 273dac lw $a0, 0x10($s3)
            if (loopCheckpoint(ctx, runtime, 0x273d80u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); return; }
            goto L_273d80;
        }
        r.a0 = LW(lo32(r.s2) + 0x10u);                           // 273db0 lw $a0, 0x10($s2)
    L_273db4:
        r.v0 = sext32(0x8000000u);                               // 273db4 lui $v0, 0x800
        r.v0 = r.a0 & r.v0;                                      // 273db8 and $v0, $a0, $v0
        t = r.v0 == 0u;                                          // 273dbc beqz $v0, . + 4 + (0x114 << 2)
        r.v0 = LW(lo32(r.gp) - 0x4dd0u);                         // 273dc0 lw $v0, -0x4DD0($gp)
        if (t) goto L_274210;
        r.s1 = addiu(r.sp, 64);                                  // 273dc4 addiu $s1, $sp, 0x40
        r.a2 = r.sp;                                             // 273dc8 daddu $a2, $sp, $zero
        r.a0 = r.s1;                                             // 273dcc daddu $a0, $s1, $zero
        r.a1 = LW(lo32(r.v0) + 0x1c38u);                         // 273dd0 lw $a1, 0x1C38($v0)
        r.ra = 0x273ddcu;                                        // 273dd4 jal func_2D5E98
        r.s0 = 0u;                                               // 273dd8 daddu $s0, $zero, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s4, 20); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x273dd4u, 0x273ddcu)) return;
        LOAD_GPR(a0, 4); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_273ddc:
        r.v0 = LW(lo32(r.s3));                                   // 273ddc lw $v0, 0x0($s3)
        r.v1 = LW(lo32(r.v0) + 0x4u);                            // 273de0 lw $v1, 0x4($v0)
        t = lez64(r.v1);                                         // 273de4 blez $v1, . + 4 + (0x10B << 2)
        r.a1 = LW(lo32(r.gp) - 0x4ea4u);                         // 273de8 lw $a1, -0x4EA4($gp)
        if (t) goto L_274214;
        r.a0 = LW(lo32(r.s3) + 0x14u);                           // 273dec lw $a0, 0x14($s3)
    L_273df0:
        r.v0 = sll32(r.s0, 6);                                   // 273df0 sll $v0, $s0, 6
        r.a2 = LW(lo32(r.s3) + 0x4u);                            // 273df4 lw $a2, 0x4($s3)
        r.a1 = r.s1;                                             // 273df8 daddu $a1, $s1, $zero
        r.a0 = addu(r.a0, r.v0);                                 // 273dfc addu $a0, $a0, $v0
        r.s0 = addiu(r.s0, 1);                                   // 273e00 addiu $s0, $s0, 0x1
        r.ra = 0x273e0cu;                                        // 273e04 jal func_2D5E98
        r.a2 = addu(r.a2, r.v0);                                 // 273e08 addu $a2, $a2, $v0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x273e04u, 0x273e0cu)) return;
        LOAD_GPR(a0, 4); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_273e0c:
        r.v1 = LW(lo32(r.s3));                                   // 273e0c lw $v1, 0x0($s3)
        r.v0 = LW(lo32(r.v1) + 0x4u);                            // 273e10 lw $v0, 0x4($v1)
        r.v0 = slt(r.s0, r.v0);                                  // 273e14 slt $v0, $s0, $v0
        if (r.v0 != 0u)                                          // 273e18 bnel $v0, $zero, . + 4 + (-0xB << 2)
        {
            r.a0 = LW(lo32(r.s3) + 0x14u);                           // 273e1c lw $a0, 0x14($s3)
            if (loopCheckpoint(ctx, runtime, 0x273df0u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); return; }
            goto L_273df0;
        }
        // 273e20 b . + 4 + (0xFC << 2)
        r.a1 = LW(lo32(r.gp) - 0x4ea4u);                         // 273e24 lw $a1, -0x4EA4($gp)
        goto L_274214;
    L_273e28:
        r.v1 = LW(lo32(r.v0) + 0x4u);                            // 273e28 lw $v1, 0x4($v0)
        if (lez64(r.v1))                                         // 273e2c blezl $v1, . + 4 + (0xF9 << 2)
        {
            r.s4 = addiu(r.s4, 1);                                   // 273e30 addiu $s4, $s4, 0x1
            goto L_274214;
        }
        r.v0 = LW(lo32(r.s2) + 0xbcu);                           // 273e34 lw $v0, 0xBC($s2)
        if (r.v0 != 0u)                                          // 273e38 bnel $v0, $zero, . + 4 + (0xF6 << 2)
        {
            r.s4 = addiu(r.s4, 1);                                   // 273e3c addiu $s4, $s4, 0x1
            goto L_274214;
        }
        r.v1 = LW(lo32(r.s2) + 0x8cu);                           // 273e40 lw $v1, 0x8C($s2)
        r.v0 = addiu(0u, 4);                                     // 273e44 addiu $v0, $zero, 0x4
        t = r.v1 == r.v0;                                        // 273e48 beq $v1, $v0, . + 4 + (0xEF << 2)
        r.v0 = sltu(r.v1, sext32(5u));                           // 273e4c sltiu $v0, $v1, 0x5
        if (t) goto L_274208;
        t = r.v0 == 0u;                                          // 273e50 beqz $v0, . + 4 + (0x5A << 2)
        r.v0 = sext32(0x3b0000u);                                // 273e54 lui $v0, 0x3B
        if (t) goto L_273fbc;
        r.v1 = sll32(r.v1, 2);                                   // 273e58 sll $v1, $v1, 2
        r.v0 = addiu(r.v0, -32576);                              // 273e5c addiu $v0, $v0, -0x7F40
        r.v1 = addu(r.v1, r.v0);                                 // 273e60 addu $v1, $v1, $v0
        r.a0 = LW(lo32(r.v1));                                   // 273e64 lw $a0, 0x0($v1)
        jt = lo32(r.a0);                                         // 273e68 jr $a0 (jump table)
        switch (jt)
        {
        case 0x273e70u: goto L_273e70;
        case 0x273e80u: goto L_273e80;
        case 0x273ebcu: goto L_273ebc;
        case 0x273f20u: goto L_273f20;
        case 0x273f5cu: goto L_273f5c;
        default:
            STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); ctx->lo = r.lo; ctx->hi = r.hi;
            runtime->dispatchGuestBranch(rdram, ctx, jt, 0x273e68u, 0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR");
            return;
        }
    L_273e70:
        r.ra = 0x273e78u;                                        // 273e70 jal func_2D6188
        r.a0 = r.sp;                                             // 273e74 daddu $a0, $sp, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2d6188u, 0x273e70u, 0x273e78u)) return;
        LOAD_GPR(v1, 3); LOAD_GPR(s0, 16); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_273e78:
        // 273e78 b . + 4 + (0x50 << 2)
        r.a0 = LW(lo32(r.s2) + 0x10u);                           // 273e7c lw $a0, 0x10($s2)
        goto L_273fbc;
    L_273e80:
        r.f15 = LWC1(lo32(r.s2) + 0x4cu);                        // 273e80 lwc1 $f15, 0x4C($s2)
        r.a0 = r.sp;                                             // 273e84 daddu $a0, $sp, $zero
        r.f0 = LWC1(lo32(r.gp) - 0x7a60u);                       // 273e88 lwc1 $f0, -0x7A60($gp)
        r.at = sext32(0x43340000u);                              // 273e8c lui $at, 0x4334
        r.f1 = floatOf(lo32(r.at));                              // 273e90 mtc1 $at, $f1
        r.f15 = FPU_MUL_S(r.f15, r.f0);                          // 273e94 mul.s $f15, $f15, $f0
        r.f12 = LWC1(lo32(r.s2) + 0x30u);                        // 273e98 lwc1 $f12, 0x30($s2)
        r.f13 = LWC1(lo32(r.s2) + 0x34u);                        // 273e9c lwc1 $f13, 0x34($s2)
        r.f15 = divS(r.f15, r.f1, r.fcr31);                      // 273ea8 div.s $f15, $f15, $f1
        r.ra = 0x273eb4u;                                        // 273eac jal func_2B4C50
        r.f14 = LWC1(lo32(r.s2) + 0x38u);                        // 273eb0 lwc1 $f14, 0x38($s2)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b4c50u, 0x273eacu, 0x273eb4u)) return;
        LOAD_GPR(v1, 3); LOAD_GPR(s0, 16); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_273eb4:
        // 273eb4 b . + 4 + (0x41 << 2)
        r.a0 = LW(lo32(r.s2) + 0x10u);                           // 273eb8 lw $a0, 0x10($s2)
        goto L_273fbc;
    L_273ebc:
        r.f1 = LWC1(lo32(r.gp) - 0x7a5cu);                       // 273ebc lwc1 $f1, -0x7A5C($gp)
        r.a0 = r.sp;                                             // 273ec0 daddu $a0, $sp, $zero
        r.f15 = LWC1(lo32(r.s2) + 0x48u);                        // 273ec4 lwc1 $f15, 0x48($s2)
        r.f16 = LWC1(lo32(r.s2) + 0x4cu);                        // 273ec8 lwc1 $f16, 0x4C($s2)
        r.f17 = LWC1(lo32(r.s2) + 0x58u);                        // 273ecc lwc1 $f17, 0x58($s2)
        r.f15 = FPU_MUL_S(r.f15, r.f1);                          // 273ed0 mul.s $f15, $f15, $f1
        r.f16 = FPU_MUL_S(r.f16, r.f1);                          // 273ed4 mul.s $f16, $f16, $f1
        r.at = sext32(0x43340000u);                              // 273ed8 lui $at, 0x4334
        r.f0 = floatOf(lo32(r.at));                              // 273edc mtc1 $at, $f0
        r.f17 = FPU_MUL_S(r.f17, r.f1);                          // 273ee0 mul.s $f17, $f17, $f1
        r.f12 = LWC1(lo32(r.s2) + 0x30u);                        // 273ee4 lwc1 $f12, 0x30($s2)
        r.f15 = divS(r.f15, r.f0, r.fcr31);                      // 273ef0 div.s $f15, $f15, $f0
        r.f13 = LWC1(lo32(r.s2) + 0x34u);                        // 273ef4 lwc1 $f13, 0x34($s2)
        r.f16 = divS(r.f16, r.f0, r.fcr31);                      // 273f00 div.s $f16, $f16, $f0
        r.f17 = divS(r.f17, r.f0, r.fcr31);                      // 273f0c div.s $f17, $f17, $f0
        r.ra = 0x273f18u;                                        // 273f10 jal func_2B4CE0
        r.f14 = LWC1(lo32(r.s2) + 0x38u);                        // 273f14 lwc1 $f14, 0x38($s2)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); STORE_F(16); STORE_F(17); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b4ce0u, 0x273f10u, 0x273f18u)) return;
        LOAD_GPR(v1, 3); LOAD_GPR(s0, 16); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_273f18:
        // 273f18 b . + 4 + (0x28 << 2)
        r.a0 = LW(lo32(r.s2) + 0x10u);                           // 273f1c lw $a0, 0x10($s2)
        goto L_273fbc;
    L_273f20:
        r.f15 = LWC1(lo32(r.s2) + 0x4cu);                        // 273f20 lwc1 $f15, 0x4C($s2)
        r.a0 = r.sp;                                             // 273f24 daddu $a0, $sp, $zero
        r.f0 = LWC1(lo32(r.gp) - 0x7a58u);                       // 273f28 lwc1 $f0, -0x7A58($gp)
        r.at = sext32(0x43340000u);                              // 273f2c lui $at, 0x4334
        r.f1 = floatOf(lo32(r.at));                              // 273f30 mtc1 $at, $f1
        r.f15 = FPU_MUL_S(r.f15, r.f0);                          // 273f34 mul.s $f15, $f15, $f0
        r.f12 = LWC1(lo32(r.s2) + 0x30u);                        // 273f38 lwc1 $f12, 0x30($s2)
        r.f13 = LWC1(lo32(r.s2) + 0x34u);                        // 273f3c lwc1 $f13, 0x34($s2)
        r.f15 = divS(r.f15, r.f1, r.fcr31);                      // 273f48 div.s $f15, $f15, $f1
        r.ra = 0x273f54u;                                        // 273f4c jal func_2B4C50
        r.f14 = LWC1(lo32(r.s2) + 0x38u);                        // 273f50 lwc1 $f14, 0x38($s2)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b4c50u, 0x273f4cu, 0x273f54u)) return;
        LOAD_GPR(v1, 3); LOAD_GPR(s0, 16); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_273f54:
        // 273f54 b . + 4 + (0x19 << 2)
        r.a0 = LW(lo32(r.s2) + 0x10u);                           // 273f58 lw $a0, 0x10($s2)
        goto L_273fbc;
    L_273f5c:
        r.f15 = LWC1(lo32(r.s2) + 0x4cu);                        // 273f5c lwc1 $f15, 0x4C($s2)
        r.a0 = r.sp;                                             // 273f60 daddu $a0, $sp, $zero
        r.f0 = LWC1(lo32(r.gp) - 0x7a54u);                       // 273f64 lwc1 $f0, -0x7A54($gp)
        r.at = sext32(0x43340000u);                              // 273f68 lui $at, 0x4334
        r.f1 = floatOf(lo32(r.at));                              // 273f6c mtc1 $at, $f1
        r.f15 = FPU_MUL_S(r.f15, r.f0);                          // 273f70 mul.s $f15, $f15, $f0
        r.f12 = LWC1(lo32(r.s2) + 0x30u);                        // 273f74 lwc1 $f12, 0x30($s2)
        r.f13 = LWC1(lo32(r.s2) + 0x34u);                        // 273f78 lwc1 $f13, 0x34($s2)
        r.f15 = divS(r.f15, r.f1, r.fcr31);                      // 273f84 div.s $f15, $f15, $f1
        r.ra = 0x273f90u;                                        // 273f88 jal func_2B4C50
        r.f14 = LWC1(lo32(r.s2) + 0x38u);                        // 273f8c lwc1 $f14, 0x38($s2)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b4c50u, 0x273f88u, 0x273f90u)) return;
        LOAD_GPR(s2, 18);
    L_273f90:
        r.v0 = LW(lo32(r.s2) + 0x20u);                           // 273f90 lw $v0, 0x20($s2)
        r.a1 = addiu(r.s2, 100);                                 // 273f94 addiu $a1, $s2, 0x64
        r.f12 = LWC1(lo32(r.s2) + 0x5cu);                        // 273f98 lwc1 $f12, 0x5C($s2)
        r.ra = 0x273fa4u;                                        // 273f9c jal func_2B5C28
        r.a0 = LW(lo32(r.v0) + 0x4u);                            // 273fa0 lw $a0, 0x4($v0)
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x2b5c28u, 0x273f9cu, 0x273fa4u)) return;
        LOAD_GPR(s2, 18); LOAD_GPR(sp, 29);
    L_273fa4:
        r.v0 = LW(lo32(r.s2) + 0x20u);                           // 273fa4 lw $v0, 0x20($s2)
        r.a0 = r.sp;                                             // 273fa8 daddu $a0, $sp, $zero
        r.a1 = r.sp;                                             // 273fac daddu $a1, $sp, $zero
        r.ra = 0x273fb8u;                                        // 273fb0 jal func_2D5E98
        r.a2 = LW(lo32(r.v0) + 0x4u);                            // 273fb4 lw $a2, 0x4($v0)
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x273fb0u, 0x273fb8u)) return;
        LOAD_GPR(v1, 3); LOAD_GPR(s0, 16); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_273fb8:
        r.a0 = LW(lo32(r.s2) + 0x10u);                           // 273fb8 lw $a0, 0x10($s2)
    L_273fbc:
        r.v0 = sext32(0x1000000u);                               // 273fbc lui $v0, 0x100
        r.v0 = r.a0 & r.v0;                                      // 273fc0 and $v0, $a0, $v0
        t = r.v0 == 0u;                                          // 273fc4 beqz $v0, . + 4 + (0x23 << 2)
        r.v0 = addiu(0u, 1);                                     // 273fc8 addiu $v0, $zero, 0x1
        if (t) goto L_274054;
        r.v1 = LW(lo32(r.s2) + 0x88u);                           // 273fcc lw $v1, 0x88($s2)
        t = r.v1 != r.v0;                                        // 273fd0 bne $v1, $v0, . + 4 + (0x8 << 2)
        r.s1 = addiu(r.sp, 64);                                  // 273fd4 addiu $s1, $sp, 0x40
        if (t) goto L_273ff4;
        r.v0 = LW(lo32(r.gp) - 0x4dd0u);                         // 273fd8 lw $v0, -0x4DD0($gp)
        r.a0 = r.s1;                                             // 273fdc daddu $a0, $s1, $zero
        r.a2 = r.sp;                                             // 273fe0 daddu $a2, $sp, $zero
        r.ra = 0x273fecu;                                        // 273fe4 jal func_2D5E98
        r.a1 = LW(lo32(r.v0) + 0x6e4u);                          // 273fe8 lw $a1, 0x6E4($v0)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2d5e98u, 0x273fe4u, 0x273fecu)) return;
        LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_273fec:
        // 273fec b . + 4 + (0x5 << 2)
        r.v1 = LW(lo32(r.s3));                                   // 273ff0 lw $v1, 0x0($s3)
        goto L_274004;
    L_273ff4:
        r.a1 = r.sp;                                             // 273ff4 daddu $a1, $sp, $zero
        r.ra = 0x274000u;                                        // 273ff8 jal func_2D6120
        r.a0 = r.s1;                                             // 273ffc daddu $a0, $s1, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2d6120u, 0x273ff8u, 0x274000u)) return;
        LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_274000:
        r.v1 = LW(lo32(r.s3));                                   // 274000 lw $v1, 0x0($s3)
    L_274004:
        r.v0 = LW(lo32(r.v1) + 0x4u);                            // 274004 lw $v0, 0x4($v1)
        t = lez64(r.v0);                                         // 274008 blez $v0, . + 4 + (0x11 << 2)
        r.s0 = 0u;                                               // 27400c daddu $s0, $zero, $zero
        if (t) goto L_274050;
        r.s4 = addiu(r.s4, 1);                                   // 274010 addiu $s4, $s4, 0x1
        r.a0 = LW(lo32(r.s3) + 0x8u);                            // 274014 lw $a0, 0x8($s3)
    L_274018:
        r.v0 = sll32(r.s0, 6);                                   // 274018 sll $v0, $s0, 6
        r.a2 = LW(lo32(r.s3) + 0x4u);                            // 27401c lw $a2, 0x4($s3)
        r.a1 = r.s1;                                             // 274020 daddu $a1, $s1, $zero
        r.a0 = addu(r.a0, r.v0);                                 // 274024 addu $a0, $a0, $v0
        r.s0 = addiu(r.s0, 1);                                   // 274028 addiu $s0, $s0, 0x1
        r.ra = 0x274034u;                                        // 27402c jal func_2D5E98
        r.a2 = addu(r.a2, r.v0);                                 // 274030 addu $a2, $a2, $v0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s4, 20); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x27402cu, 0x274034u)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_274034:
        r.v1 = LW(lo32(r.s3));                                   // 274034 lw $v1, 0x0($s3)
        r.v0 = LW(lo32(r.v1) + 0x4u);                            // 274038 lw $v0, 0x4($v1)
        r.v0 = slt(r.s0, r.v0);                                  // 27403c slt $v0, $s0, $v0
        if (r.v0 != 0u)                                          // 274040 bnel $v0, $zero, . + 4 + (-0xB << 2)
        {
            r.a0 = LW(lo32(r.s3) + 0x8u);                            // 274044 lw $a0, 0x8($s3)
            if (loopCheckpoint(ctx, runtime, 0x274018u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); return; }
            goto L_274018;
        }
        // 274048 b . + 4 + (0x3 << 2)
        r.a0 = LW(lo32(r.s2) + 0x10u);                           // 27404c lw $a0, 0x10($s2)
        goto L_274058;
    L_274050:
        r.a0 = LW(lo32(r.s2) + 0x10u);                           // 274050 lw $a0, 0x10($s2)
    L_274054:
        r.s4 = addiu(r.s4, 1);                                   // 274054 addiu $s4, $s4, 0x1
    L_274058:
        r.v0 = sext32(0x2000000u);                               // 274058 lui $v0, 0x200
        r.v0 = r.a0 & r.v0;                                      // 27405c and $v0, $a0, $v0
        t = r.v0 == 0u;                                          // 274060 beqz $v0, . + 4 + (0x20 << 2)
        r.v0 = addiu(0u, 1);                                     // 274064 addiu $v0, $zero, 0x1
        if (t) goto L_2740e4;
        r.v1 = LW(lo32(r.s2) + 0x88u);                           // 274068 lw $v1, 0x88($s2)
        t = r.v1 != r.v0;                                        // 27406c bne $v1, $v0, . + 4 + (0x8 << 2)
        r.s1 = addiu(r.sp, 64);                                  // 274070 addiu $s1, $sp, 0x40
        if (t) goto L_274090;
        r.v0 = LW(lo32(r.gp) - 0x4dd0u);                         // 274074 lw $v0, -0x4DD0($gp)
        r.a0 = r.s1;                                             // 274078 daddu $a0, $s1, $zero
        r.a2 = r.sp;                                             // 27407c daddu $a2, $sp, $zero
        r.ra = 0x274088u;                                        // 274080 jal func_2D5E98
        r.a1 = LW(lo32(r.v0) + 0xe00u);                          // 274084 lw $a1, 0xE00($v0)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2d5e98u, 0x274080u, 0x274088u)) return;
        LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_274088:
        // 274088 b . + 4 + (0x5 << 2)
        r.v1 = LW(lo32(r.s3));                                   // 27408c lw $v1, 0x0($s3)
        goto L_2740a0;
    L_274090:
        r.a1 = r.sp;                                             // 274090 daddu $a1, $sp, $zero
        r.ra = 0x27409cu;                                        // 274094 jal func_2D6120
        r.a0 = r.s1;                                             // 274098 daddu $a0, $s1, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2d6120u, 0x274094u, 0x27409cu)) return;
        LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_27409c:
        r.v1 = LW(lo32(r.s3));                                   // 27409c lw $v1, 0x0($s3)
    L_2740a0:
        r.v0 = LW(lo32(r.v1) + 0x4u);                            // 2740a0 lw $v0, 0x4($v1)
        t = lez64(r.v0);                                         // 2740a4 blez $v0, . + 4 + (0xE << 2)
        r.s0 = 0u;                                               // 2740a8 daddu $s0, $zero, $zero
        if (t) goto L_2740e0;
        r.a0 = LW(lo32(r.s3) + 0xcu);                            // 2740ac lw $a0, 0xC($s3)
    L_2740b0:
        r.v0 = sll32(r.s0, 6);                                   // 2740b0 sll $v0, $s0, 6
        r.a2 = LW(lo32(r.s3) + 0x4u);                            // 2740b4 lw $a2, 0x4($s3)
        r.a1 = r.s1;                                             // 2740b8 daddu $a1, $s1, $zero
        r.a0 = addu(r.a0, r.v0);                                 // 2740bc addu $a0, $a0, $v0
        r.s0 = addiu(r.s0, 1);                                   // 2740c0 addiu $s0, $s0, 0x1
        r.ra = 0x2740ccu;                                        // 2740c4 jal func_2D5E98
        r.a2 = addu(r.a2, r.v0);                                 // 2740c8 addu $a2, $a2, $v0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x2740c4u, 0x2740ccu)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2740cc:
        r.v1 = LW(lo32(r.s3));                                   // 2740cc lw $v1, 0x0($s3)
        r.v0 = LW(lo32(r.v1) + 0x4u);                            // 2740d0 lw $v0, 0x4($v1)
        r.v0 = slt(r.s0, r.v0);                                  // 2740d4 slt $v0, $s0, $v0
        if (r.v0 != 0u)                                          // 2740d8 bnel $v0, $zero, . + 4 + (-0xB << 2)
        {
            r.a0 = LW(lo32(r.s3) + 0xcu);                            // 2740dc lw $a0, 0xC($s3)
            if (loopCheckpoint(ctx, runtime, 0x2740b0u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); return; }
            goto L_2740b0;
        }
    L_2740e0:
        r.a0 = LW(lo32(r.s2) + 0x10u);                           // 2740e0 lw $a0, 0x10($s2)
    L_2740e4:
        r.v0 = sext32(0x4000000u);                               // 2740e4 lui $v0, 0x400
        r.v0 = r.a0 & r.v0;                                      // 2740e8 and $v0, $a0, $v0
        t = r.v0 == 0u;                                          // 2740ec beqz $v0, . + 4 + (0x21 << 2)
        r.v0 = addiu(0u, 1);                                     // 2740f0 addiu $v0, $zero, 0x1
        if (t) goto L_274174;
        r.v1 = LW(lo32(r.s2) + 0x88u);                           // 2740f4 lw $v1, 0x88($s2)
        t = r.v1 != r.v0;                                        // 2740f8 bne $v1, $v0, . + 4 + (0x8 << 2)
        r.s1 = addiu(r.sp, 64);                                  // 2740fc addiu $s1, $sp, 0x40
        if (t) goto L_27411c;
        r.v0 = LW(lo32(r.gp) - 0x4dd0u);                         // 274100 lw $v0, -0x4DD0($gp)
        r.a0 = r.s1;                                             // 274104 daddu $a0, $s1, $zero
        r.a2 = r.sp;                                             // 274108 daddu $a2, $sp, $zero
        r.ra = 0x274114u;                                        // 27410c jal func_2D5E98
        r.a1 = LW(lo32(r.v0) + 0x151cu);                         // 274110 lw $a1, 0x151C($v0)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2d5e98u, 0x27410cu, 0x274114u)) return;
        LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_274114:
        // 274114 b . + 4 + (0x5 << 2)
        r.v1 = LW(lo32(r.s3));                                   // 274118 lw $v1, 0x0($s3)
        goto L_27412c;
    L_27411c:
        r.a1 = r.sp;                                             // 27411c daddu $a1, $sp, $zero
        r.ra = 0x274128u;                                        // 274120 jal func_2D6120
        r.a0 = r.s1;                                             // 274124 daddu $a0, $s1, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2d6120u, 0x274120u, 0x274128u)) return;
        LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_274128:
        r.v1 = LW(lo32(r.s3));                                   // 274128 lw $v1, 0x0($s3)
    L_27412c:
        r.v0 = LW(lo32(r.v1) + 0x4u);                            // 27412c lw $v0, 0x4($v1)
        t = lez64(r.v0);                                         // 274130 blez $v0, . + 4 + (0xF << 2)
        r.s0 = 0u;                                               // 274134 daddu $s0, $zero, $zero
        if (t) goto L_274170;
        r.a0 = LW(lo32(r.s3) + 0x10u);                           // 274138 lw $a0, 0x10($s3)
    L_274140:
        r.v0 = sll32(r.s0, 6);                                   // 274140 sll $v0, $s0, 6
        r.a2 = LW(lo32(r.s3) + 0x4u);                            // 274144 lw $a2, 0x4($s3)
        r.a1 = r.s1;                                             // 274148 daddu $a1, $s1, $zero
        r.a0 = addu(r.a0, r.v0);                                 // 27414c addu $a0, $a0, $v0
        r.s0 = addiu(r.s0, 1);                                   // 274150 addiu $s0, $s0, 0x1
        r.ra = 0x27415cu;                                        // 274154 jal func_2D5E98
        r.a2 = addu(r.a2, r.v0);                                 // 274158 addu $a2, $a2, $v0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x274154u, 0x27415cu)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_27415c:
        r.v1 = LW(lo32(r.s3));                                   // 27415c lw $v1, 0x0($s3)
        r.v0 = LW(lo32(r.v1) + 0x4u);                            // 274160 lw $v0, 0x4($v1)
        r.v0 = slt(r.s0, r.v0);                                  // 274164 slt $v0, $s0, $v0
        if (r.v0 != 0u)                                          // 274168 bnel $v0, $zero, . + 4 + (-0xB << 2)
        {
            r.a0 = LW(lo32(r.s3) + 0x10u);                           // 27416c lw $a0, 0x10($s3)
            if (loopCheckpoint(ctx, runtime, 0x274140u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); return; }
            goto L_274140;
        }
    L_274170:
        r.a0 = LW(lo32(r.s2) + 0x10u);                           // 274170 lw $a0, 0x10($s2)
    L_274174:
        r.v0 = sext32(0x8000000u);                               // 274174 lui $v0, 0x800
        r.v0 = r.a0 & r.v0;                                      // 274178 and $v0, $a0, $v0
        t = r.v0 == 0u;                                          // 27417c beqz $v0, . + 4 + (0x24 << 2)
        r.v0 = addiu(0u, 1);                                     // 274180 addiu $v0, $zero, 0x1
        if (t) goto L_274210;
        r.v1 = LW(lo32(r.s2) + 0x88u);                           // 274184 lw $v1, 0x88($s2)
        t = r.v1 != r.v0;                                        // 274188 bne $v1, $v0, . + 4 + (0x8 << 2)
        r.s1 = addiu(r.sp, 64);                                  // 27418c addiu $s1, $sp, 0x40
        if (t) goto L_2741ac;
        r.v0 = LW(lo32(r.gp) - 0x4dd0u);                         // 274190 lw $v0, -0x4DD0($gp)
        r.a0 = r.s1;                                             // 274194 daddu $a0, $s1, $zero
        r.a2 = r.sp;                                             // 274198 daddu $a2, $sp, $zero
        r.ra = 0x2741a4u;                                        // 27419c jal func_2D5E98
        r.a1 = LW(lo32(r.v0) + 0x1c38u);                         // 2741a0 lw $a1, 0x1C38($v0)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2d5e98u, 0x27419cu, 0x2741a4u)) return;
        LOAD_GPR(a0, 4); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2741a4:
        // 2741a4 b . + 4 + (0x5 << 2)
        r.v1 = LW(lo32(r.s3));                                   // 2741a8 lw $v1, 0x0($s3)
        goto L_2741bc;
    L_2741ac:
        r.a1 = r.sp;                                             // 2741ac daddu $a1, $sp, $zero
        r.ra = 0x2741b8u;                                        // 2741b0 jal func_2D6120
        r.a0 = r.s1;                                             // 2741b4 daddu $a0, $s1, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2d6120u, 0x2741b0u, 0x2741b8u)) return;
        LOAD_GPR(a0, 4); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2741b8:
        r.v1 = LW(lo32(r.s3));                                   // 2741b8 lw $v1, 0x0($s3)
    L_2741bc:
        r.v0 = LW(lo32(r.v1) + 0x4u);                            // 2741bc lw $v0, 0x4($v1)
        t = lez64(r.v0);                                         // 2741c0 blez $v0, . + 4 + (0x13 << 2)
        r.s0 = 0u;                                               // 2741c4 daddu $s0, $zero, $zero
        if (t) goto L_274210;
        r.a0 = LW(lo32(r.s3) + 0x14u);                           // 2741c8 lw $a0, 0x14($s3)
    L_2741d0:
        r.v0 = sll32(r.s0, 6);                                   // 2741d0 sll $v0, $s0, 6
        r.a2 = LW(lo32(r.s3) + 0x4u);                            // 2741d4 lw $a2, 0x4($s3)
        r.a1 = r.s1;                                             // 2741d8 daddu $a1, $s1, $zero
        r.a0 = addu(r.a0, r.v0);                                 // 2741dc addu $a0, $a0, $v0
        r.s0 = addiu(r.s0, 1);                                   // 2741e0 addiu $s0, $s0, 0x1
        r.ra = 0x2741ecu;                                        // 2741e4 jal func_2D5E98
        r.a2 = addu(r.a2, r.v0);                                 // 2741e8 addu $a2, $a2, $v0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x2741e4u, 0x2741ecu)) return;
        LOAD_GPR(a0, 4); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2741ec:
        r.v1 = LW(lo32(r.s3));                                   // 2741ec lw $v1, 0x0($s3)
        r.v0 = LW(lo32(r.v1) + 0x4u);                            // 2741f0 lw $v0, 0x4($v1)
        r.v0 = slt(r.s0, r.v0);                                  // 2741f4 slt $v0, $s0, $v0
        if (r.v0 != 0u)                                          // 2741f8 bnel $v0, $zero, . + 4 + (-0xB << 2)
        {
            r.a0 = LW(lo32(r.s3) + 0x14u);                           // 2741fc lw $a0, 0x14($s3)
            if (loopCheckpoint(ctx, runtime, 0x2741d0u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); return; }
            goto L_2741d0;
        }
        // 274200 b . + 4 + (0x4 << 2)
        r.a1 = LW(lo32(r.gp) - 0x4ea4u);                         // 274204 lw $a1, -0x4EA4($gp)
        goto L_274214;
    L_274208:
        // 274208 b . + 4 + (0x2 << 2)
        r.s4 = addiu(r.s4, 1);                                   // 27420c addiu $s4, $s4, 0x1
        goto L_274214;
    L_274210:
        r.a1 = LW(lo32(r.gp) - 0x4ea4u);                         // 274210 lw $a1, -0x4EA4($gp)
    L_274214:
        r.v0 = slt(r.s4, r.a1);                                  // 274214 slt $v0, $s4, $a1
        t = r.v0 != 0u;                                          // 274218 bnez $v0, . + 4 + (-0x18F << 2)
        r.v0 = addiu(0u, 592);                                   // 27421c addiu $v0, $zero, 0x250
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x273be0u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); ctx->lo = r.lo; ctx->hi = r.hi; return; }
            goto L_273be0;
        }
    L_274220:
        r.ra = READ64(lo32(r.sp) + 0xd0u);                       // 274220 ld $ra, 0xD0($sp)
        r.s4 = READ64(lo32(r.sp) + 0xc0u);                       // 274224 ld $s4, 0xC0($sp)
        r.s3 = READ64(lo32(r.sp) + 0xb0u);                       // 274228 ld $s3, 0xB0($sp)
        r.s2 = READ64(lo32(r.sp) + 0xa0u);                       // 27422c ld $s2, 0xA0($sp)
        r.s1 = READ64(lo32(r.sp) + 0x90u);                       // 274230 ld $s1, 0x90($sp)
        r.s0 = READ64(lo32(r.sp) + 0x80u);                       // 274234 ld $s0, 0x80($sp)
        jt = lo32(r.ra);                                         // 274238 jr $ra
        r.sp = addiu(r.sp, 224);                                 // 27423c addiu $sp, $sp, 0xE0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        ctx->pc = jt;
        return;
    }

    // ---- rotateChr (0x2bc5d0)
    //
    // rotateChr: a character's facing turned towards its target, in the
    // game's double-precision soft-float (the calls to the fp routines).

    struct RotateChrRegs
    {
        uint64_t at, v0, v1, a0, a1, a2, a3, t0, t1, t2, s0, s1, s2, s3, gp, sp, ra;
        float f0, f1, f2, f3, f4, f5, f12, f13, f20, f21, f22;
        uint32_t fcr31;
        uint64_t lo, hi;
    };

    void nativeRotateChr(G_ARGS)
    {
        RotateChrRegs r;
        bool t;
        uint32_t jt;
        (void)t;
        (void)jt;
        LOAD_GPR(at, 1); LOAD_GPR(a0, 4); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(ra, 31); LOAD_F(0); LOAD_F(20); LOAD_F(21); LOAD_F(22); r.fcr31 = ctx->fcr31;
        r.sp = addiu(r.sp, -128);                                // 2bc5d0 addiu $sp, $sp, -0x80
        r.f2 = floatOf(lo32(0u));                                // 2bc5d4 mtc1 $zero, $f2
        WRITE64(lo32(r.sp) + 0x40u, r.s3);                       // 2bc5d8 sd $s3, 0x40($sp)
        SWC1(lo32(r.sp) + 0x70u, r.f22);                         // 2bc5dc swc1 $f22, 0x70($sp)
        r.s3 = r.a0;                                             // 2bc5e0 daddu $s3, $a0, $zero
        WRITE64(lo32(r.sp) + 0x50u, r.ra);                       // 2bc5e4 sd $ra, 0x50($sp)
        WRITE64(lo32(r.sp) + 0x30u, r.s2);                       // 2bc5e8 sd $s2, 0x30($sp)
        WRITE64(lo32(r.sp) + 0x20u, r.s1);                       // 2bc5ec sd $s1, 0x20($sp)
        WRITE64(lo32(r.sp) + 0x10u, r.s0);                       // 2bc5f0 sd $s0, 0x10($sp)
        SWC1(lo32(r.sp) + 0x68u, r.f21);                         // 2bc5f4 swc1 $f21, 0x68($sp)
        SWC1(lo32(r.sp) + 0x60u, r.f20);                         // 2bc5f8 swc1 $f20, 0x60($sp)
        r.f22 = LWC1(lo32(r.gp) - 0x6fd8u);                      // 2bc5fc lwc1 $f22, -0x6FD8($gp)
        r.f1 = LWC1(lo32(r.s3) + 0x4cu);                         // 2bc600 lwc1 $f1, 0x4C($s3)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f2)); // 2bc604 c.lt.s $f1, $f2
        t = (r.fcr31 & kCondition) == 0u;                        // 2bc60c bc1f . + 4 + (0xD << 2)
        r.s2 = LW(lo32(r.s3) + 0x160u);                          // 2bc610 lw $s2, 0x160($s3)
        if (t) goto L_2bc644;
        r.v1 = LW(lo32(r.s2) + 0xa94u);                          // 2bc614 lw $v1, 0xA94($s2)
    L_2bc618:
        r.at = sext32(0x43b40000u);                              // 2bc618 lui $at, 0x43B4
        r.f0 = floatOf(lo32(r.at));                              // 2bc61c mtc1 $at, $f0
        r.f0 = FPU_ADD_S(r.f1, r.f0);                            // 2bc620 add.s $f0, $f1, $f0
        r.f1 = FPU_MOV_S(r.f0);                                  // 2bc624 mov.s $f1, $f0
        SWC1(lo32(r.s3) + 0x4cu, r.f0);                          // 2bc628 swc1 $f0, 0x4C($s3)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f2)); // 2bc62c c.lt.s $f1, $f2
        if ((r.fcr31 & kCondition) != 0u)                        // 2bc634 bc1t . + 4 + (-0x8 << 2)
        {
            if (loopCheckpoint(ctx, runtime, 0x2bc618u)) { STORE_GPR(at, 1); STORE_GPR(v1, 3); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(sp, 29); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(22); ctx->fcr31 = r.fcr31; return; }
            goto L_2bc618;
        }
        // 2bc63c b . + 4 + (0x3 << 2)
        r.v0 = r.v1 & 0x1000u;                                   // 2bc640 andi $v0, $v1, 0x1000
        goto L_2bc64c;
    L_2bc644:
        r.v1 = LW(lo32(r.s2) + 0xa94u);                          // 2bc644 lw $v1, 0xA94($s2)
        r.v0 = r.v1 & 0x1000u;                                   // 2bc648 andi $v0, $v1, 0x1000
    L_2bc64c:
        t = r.v0 != 0u;                                          // 2bc64c bnez $v0, . + 4 + (0x264 << 2)
        r.ra = READ64(lo32(r.sp) + 0x50u);                       // 2bc650 ld $ra, 0x50($sp)
        if (t) goto L_2bcfe0;
        r.v0 = LW(lo32(r.s2) + 0xae4u);                          // 2bc654 lw $v0, 0xAE4($s2)
        if (r.v0 == 0u) goto L_2bc720;                           // 2bc658 beqz $v0, . + 4 + (0x31 << 2)
        r.f3 = LWC1(lo32(r.v0) + 0x38u);                         // 2bc660 lwc1 $f3, 0x38($v0)
        r.v1 = sext32(0x600000u);                                // 2bc664 lui $v1, 0x60
        r.f2 = LWC1(lo32(r.v0) + 0x30u);                         // 2bc668 lwc1 $f2, 0x30($v0)
        r.f0 = LWC1(lo32(r.s3) + 0x30u);                         // 2bc66c lwc1 $f0, 0x30($s3)
        r.f1 = LWC1(lo32(r.s3) + 0x38u);                         // 2bc670 lwc1 $f1, 0x38($s3)
        r.v0 = LW(lo32(r.s2) + 0xa9cu);                          // 2bc674 lw $v0, 0xA9C($s2)
        r.f12 = FPU_SUB_S(r.f2, r.f0);                           // 2bc678 sub.s $f12, $f2, $f0
        r.v0 = r.v0 & r.v1;                                      // 2bc67c and $v0, $v0, $v1
        t = r.v0 == 0u;                                          // 2bc680 beqz $v0, . + 4 + (0x6 << 2)
        r.f20 = FPU_SUB_S(r.f3, r.f1);                           // 2bc684 sub.s $f20, $f3, $f1
        if (t) goto L_2bc69c;
        r.ra = 0x2bc690u;                                        // 2bc688 jal func_2E4608
        r.f12 = FPU_NEG_S(r.f12);                                // 2bc68c neg.s $f12, $f12
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(12); STORE_F(20); STORE_F(22); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2e4608u, 0x2bc688u, 0x2bc690u)) return;
        LOAD_GPR(v0, 2); LOAD_F(20);
    L_2bc690:
        r.f12 = FPU_NEG_S(r.f20);                                // 2bc690 neg.s $f12, $f20
        // 2bc694 b . + 4 + (0x5 << 2)
        r.s0 = r.v0;                                             // 2bc698 daddu $s0, $v0, $zero
        goto L_2bc6ac;
    L_2bc69c:
        r.ra = 0x2bc6a4u;                                        // 2bc69c jal func_2E4608
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(12); STORE_F(20); STORE_F(22); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2e4608u, 0x2bc69cu, 0x2bc6a4u)) return;
        LOAD_GPR(v0, 2); LOAD_F(20);
    L_2bc6a4:
        r.s0 = r.v0;                                             // 2bc6a4 daddu $s0, $v0, $zero
        r.f12 = FPU_MOV_S(r.f20);                                // 2bc6a8 mov.s $f12, $f20
    L_2bc6ac:
        r.ra = 0x2bc6b4u;                                        // 2bc6ac jal func_2E4608
        STORE_GPR(s0, 16); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x2e4608u, 0x2bc6acu, 0x2bc6b4u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16);
    L_2bc6b4:
        r.a0 = r.s0;                                             // 2bc6b4 daddu $a0, $s0, $zero
        r.ra = 0x2bc6c0u;                                        // 2bc6b8 jal func_2D7510
        r.a1 = r.v0;                                             // 2bc6bc daddu $a1, $v0, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d7510u, 0x2bc6b8u, 0x2bc6c0u)) return;
        LOAD_GPR(v0, 2);
    L_2bc6c0:
        r.at = sext32(0x3b0000u);                                // 2bc6c0 lui $at, 0x3B
        r.a1 = READ64(lo32(r.at) - 0x6340u);                     // 2bc6c4 ld $a1, -0x6340($at)
        r.ra = 0x2bc6d0u;                                        // 2bc6c8 jal func_2E3240
        r.a0 = r.v0;                                             // 2bc6cc daddu $a0, $v0, $zero
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3240u, 0x2bc6c8u, 0x2bc6d0u)) return;
        LOAD_GPR(v0, 2);
    L_2bc6d0:
        r.at = sext32(0x3b0000u);                                // 2bc6d0 lui $at, 0x3B
        r.a1 = READ64(lo32(r.at) - 0x6338u);                     // 2bc6d4 ld $a1, -0x6338($at)
        r.ra = 0x2bc6e0u;                                        // 2bc6d8 jal func_2E34E8
        r.a0 = r.v0;                                             // 2bc6dc daddu $a0, $v0, $zero
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e34e8u, 0x2bc6d8u, 0x2bc6e0u)) return;
        LOAD_GPR(v0, 2);
    L_2bc6e0:
        r.ra = 0x2bc6e8u;                                        // 2bc6e0 jal func_2E3A10
        r.a0 = r.v0;                                             // 2bc6e4 daddu $a0, $v0, $zero
        STORE_GPR(a0, 4); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3a10u, 0x2bc6e0u, 0x2bc6e8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(s3, 19); LOAD_F(0); r.fcr31 = ctx->fcr31;
    L_2bc6e8:
        r.f22 = FPU_MOV_S(r.f0);                                 // 2bc6e8 mov.s $f22, $f0
        r.f0 = floatOf(lo32(0u));                                // 2bc6ec mtc1 $zero, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f22, r.f0)); // 2bc6f0 c.lt.s $f22, $f0
        t = (r.fcr31 & kCondition) == 0u;                        // 2bc6f8 bc1f . + 4 + (0x4 << 2)
        r.f12 = LWC1(lo32(r.s3) + 0x50u);                        // 2bc6fc lwc1 $f12, 0x50($s3)
        if (t) goto L_2bc70c;
        r.at = sext32(0x43b40000u);                              // 2bc700 lui $at, 0x43B4
        r.f0 = floatOf(lo32(r.at));                              // 2bc704 mtc1 $at, $f0
        r.f22 = FPU_ADD_S(r.f22, r.f0);                          // 2bc708 add.s $f22, $f22, $f0
    L_2bc70c:
        r.ra = 0x2bc714u;                                        // 2bc70c jal func_284E38
        r.f13 = FPU_MOV_S(r.f22);                                // 2bc710 mov.s $f13, $f22
        STORE_GPR(at, 1); STORE_GPR(ra, 31); STORE_F(0); STORE_F(12); STORE_F(13); STORE_F(22); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x284e38u, 0x2bc70cu, 0x2bc714u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(22); r.fcr31 = ctx->fcr31;
    L_2bc714:
        SWC1(lo32(r.s2) + 0xadcu, r.f0);                         // 2bc714 swc1 $f0, 0xADC($s2)
        // 2bc718 b . + 4 + (0x3 << 2)
        r.v1 = LW(lo32(r.s2) + 0xa94u);                          // 2bc71c lw $v1, 0xA94($s2)
        goto L_2bc728;
    L_2bc720:
        r.f0 = LWC1(lo32(r.gp) - 0x6fd4u);                       // 2bc720 lwc1 $f0, -0x6FD4($gp)
        SWC1(lo32(r.s2) + 0xadcu, r.f0);                         // 2bc724 swc1 $f0, 0xADC($s2)
    L_2bc728:
        r.f3 = LWC1(lo32(r.s2) + 0xaecu);                        // 2bc728 lwc1 $f3, 0xAEC($s2)
        r.v0 = r.v1 & 0x80u;                                     // 2bc72c andi $v0, $v1, 0x80
        r.f1 = LWC1(lo32(r.s3) + 0x30u);                         // 2bc730 lwc1 $f1, 0x30($s3)
        r.f2 = LWC1(lo32(r.s2) + 0xaf4u);                        // 2bc734 lwc1 $f2, 0xAF4($s2)
        r.f0 = LWC1(lo32(r.s3) + 0x38u);                         // 2bc738 lwc1 $f0, 0x38($s3)
        r.f12 = FPU_SUB_S(r.f3, r.f1);                           // 2bc73c sub.s $f12, $f3, $f1
        t = r.v0 == 0u;                                          // 2bc740 beqz $v0, . + 4 + (0x6 << 2)
        r.f20 = FPU_SUB_S(r.f2, r.f0);                           // 2bc744 sub.s $f20, $f2, $f0
        if (t) goto L_2bc75c;
        r.ra = 0x2bc750u;                                        // 2bc748 jal func_2E4608
        r.f12 = FPU_NEG_S(r.f12);                                // 2bc74c neg.s $f12, $f12
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(12); STORE_F(20); STORE_F(22); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2e4608u, 0x2bc748u, 0x2bc750u)) return;
        LOAD_GPR(v0, 2); LOAD_F(20);
    L_2bc750:
        r.f12 = FPU_NEG_S(r.f20);                                // 2bc750 neg.s $f12, $f20
        // 2bc754 b . + 4 + (0x5 << 2)
        r.s0 = r.v0;                                             // 2bc758 daddu $s0, $v0, $zero
        goto L_2bc76c;
    L_2bc75c:
        r.ra = 0x2bc764u;                                        // 2bc75c jal func_2E4608
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(12); STORE_F(20); STORE_F(22); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2e4608u, 0x2bc75cu, 0x2bc764u)) return;
        LOAD_GPR(v0, 2); LOAD_F(20);
    L_2bc764:
        r.s0 = r.v0;                                             // 2bc764 daddu $s0, $v0, $zero
        r.f12 = FPU_MOV_S(r.f20);                                // 2bc768 mov.s $f12, $f20
    L_2bc76c:
        r.ra = 0x2bc774u;                                        // 2bc76c jal func_2E4608
        STORE_GPR(s0, 16); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x2e4608u, 0x2bc76cu, 0x2bc774u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16);
    L_2bc774:
        r.a0 = r.s0;                                             // 2bc774 daddu $a0, $s0, $zero
        r.ra = 0x2bc780u;                                        // 2bc778 jal func_2D7510
        r.a1 = r.v0;                                             // 2bc77c daddu $a1, $v0, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d7510u, 0x2bc778u, 0x2bc780u)) return;
        LOAD_GPR(v0, 2);
    L_2bc780:
        r.at = sext32(0x3b0000u);                                // 2bc780 lui $at, 0x3B
        r.a1 = READ64(lo32(r.at) - 0x6330u);                     // 2bc784 ld $a1, -0x6330($at)
        r.ra = 0x2bc790u;                                        // 2bc788 jal func_2E3240
        r.a0 = r.v0;                                             // 2bc78c daddu $a0, $v0, $zero
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3240u, 0x2bc788u, 0x2bc790u)) return;
        LOAD_GPR(v0, 2);
    L_2bc790:
        r.at = sext32(0x3b0000u);                                // 2bc790 lui $at, 0x3B
        r.a1 = READ64(lo32(r.at) - 0x6328u);                     // 2bc794 ld $a1, -0x6328($at)
        r.ra = 0x2bc7a0u;                                        // 2bc798 jal func_2E34E8
        r.a0 = r.v0;                                             // 2bc79c daddu $a0, $v0, $zero
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e34e8u, 0x2bc798u, 0x2bc7a0u)) return;
        LOAD_GPR(v0, 2);
    L_2bc7a0:
        r.ra = 0x2bc7a8u;                                        // 2bc7a0 jal func_2E3A10
        r.a0 = r.v0;                                             // 2bc7a4 daddu $a0, $v0, $zero
        STORE_GPR(a0, 4); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3a10u, 0x2bc7a0u, 0x2bc7a8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(s3, 19); LOAD_F(0); r.fcr31 = ctx->fcr31;
    L_2bc7a8:
        r.f13 = FPU_MOV_S(r.f0);                                 // 2bc7a8 mov.s $f13, $f0
        r.f0 = floatOf(lo32(0u));                                // 2bc7ac mtc1 $zero, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f13, r.f0)); // 2bc7b0 c.lt.s $f13, $f0
        if ((r.fcr31 & kCondition) == 0u) goto L_2bc7c8;         // 2bc7b4 bc1f . + 4 + (0x4 << 2)
        r.at = sext32(0x43b40000u);                              // 2bc7bc lui $at, 0x43B4
        r.f0 = floatOf(lo32(r.at));                              // 2bc7c0 mtc1 $at, $f0
        r.f13 = FPU_ADD_S(r.f13, r.f0);                          // 2bc7c4 add.s $f13, $f13, $f0
    L_2bc7c8:
        r.ra = 0x2bc7d0u;                                        // 2bc7c8 jal func_284E38
        r.f12 = LWC1(lo32(r.s3) + 0x4cu);                        // 2bc7cc lwc1 $f12, 0x4C($s3)
        STORE_GPR(at, 1); STORE_GPR(ra, 31); STORE_F(0); STORE_F(12); STORE_F(13); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x284e38u, 0x2bc7c8u, 0x2bc7d0u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(a0, 4); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t2, 10); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(22); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2bc7d0:
        r.v1 = LW(lo32(r.s3) + 0x20u);                           // 2bc7d0 lw $v1, 0x20($s3)
        SWC1(lo32(r.s2) + 0xae0u, r.f0);                         // 2bc7d4 swc1 $f0, 0xAE0($s2)
        r.v1 = LW(lo32(r.v1) + 0x60u);                           // 2bc7d8 lw $v1, 0x60($v1)
        r.v0 = addiu(r.v1, -566);                                // 2bc7dc addiu $v0, $v1, -0x236
        r.v0 = sltu(r.v0, sext32(41u));                          // 2bc7e0 sltiu $v0, $v0, 0x29
        t = r.v0 != 0u;                                          // 2bc7e4 bnez $v0, . + 4 + (0x1FE << 2)
        r.ra = READ64(lo32(r.sp) + 0x50u);                       // 2bc7e8 ld $ra, 0x50($sp)
        if (t) goto L_2bcfe0;
        r.v0 = addiu(0u, 472);                                   // 2bc7ec addiu $v0, $zero, 0x1D8
        t = r.v1 == r.v0;                                        // 2bc7f0 beq $v1, $v0, . + 4 + (0x1FB << 2)
        r.v0 = addiu(0u, 471);                                   // 2bc7f4 addiu $v0, $zero, 0x1D7
        if (t) goto L_2bcfe0;
        t = r.v1 == r.v0;                                        // 2bc7f8 beq $v1, $v0, . + 4 + (0x1F9 << 2)
        r.v0 = addiu(0u, 510);                                   // 2bc7fc addiu $v0, $zero, 0x1FE
        if (t) goto L_2bcfe0;
        t = r.v1 == r.v0;                                        // 2bc800 beq $v1, $v0, . + 4 + (0x1F7 << 2)
        r.v0 = addiu(0u, 509);                                   // 2bc804 addiu $v0, $zero, 0x1FD
        if (t) goto L_2bcfe0;
        t = r.v1 == r.v0;                                        // 2bc808 beq $v1, $v0, . + 4 + (0x1F5 << 2)
        r.v0 = addiu(r.v1, -524);                                // 2bc80c addiu $v0, $v1, -0x20C
        if (t) goto L_2bcfe0;
        r.v0 = sltu(r.v0, sext32(6u));                           // 2bc810 sltiu $v0, $v0, 0x6
        if (r.v0 != 0u)                                          // 2bc814 bnel $v0, $zero, . + 4 + (0x1F3 << 2)
        {
            r.s3 = READ64(lo32(r.sp) + 0x40u);                       // 2bc818 ld $s3, 0x40($sp)
            goto L_2bcfe4;
        }
        r.v1 = LW(lo32(r.s2) + 0xa9cu);                          // 2bc81c lw $v1, 0xA9C($s2)
        r.v0 = sext32(0x20000u);                                 // 2bc820 lui $v0, 0x2
        t = r.v1 != r.v0;                                        // 2bc824 bne $v1, $v0, . + 4 + (0x12 << 2)
        r.v0 = addiu(0u, 4);                                     // 2bc828 addiu $v0, $zero, 0x4
        if (t) goto L_2bc870;
        r.v0 = LW(lo32(r.s2) + 0x2a8u);                          // 2bc82c lw $v0, 0x2A8($s2)
        r.s0 = addiu(0u, 28);                                    // 2bc830 addiu $s0, $zero, 0x1C
        r.v1 = LW(lo32(r.gp) - 0x5d14u);                         // 2bc834 lw $v1, -0x5D14($gp)
        r.v0 = mult(r.v0, r.s0, r.lo, r.hi);                     // 2bc838 mult $v0, $v0, $s0
        r.f12 = LWC1(lo32(r.s3) + 0x50u);                        // 2bc83c lwc1 $f12, 0x50($s3)
        r.v0 = addu(r.v0, r.v1);                                 // 2bc840 addu $v0, $v0, $v1
        r.ra = 0x2bc84cu;                                        // 2bc844 jal func_284E38
        r.f13 = LWC1(lo32(r.v0) + 0x18u);                        // 2bc848 lwc1 $f13, 0x18($v0)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(s0, 16); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x284e38u, 0x2bc844u, 0x2bc84cu)) return;
        LOAD_GPR(a0, 4); LOAD_GPR(a2, 6); LOAD_GPR(t0, 8); LOAD_GPR(t2, 10); LOAD_GPR(s0, 16); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(gp, 28); LOAD_GPR(ra, 31); LOAD_F(0); r.lo = ctx->lo; r.hi = ctx->hi;
    L_2bc84c:
        r.v0 = LW(lo32(r.s2) + 0x2a8u);                          // 2bc84c lw $v0, 0x2A8($s2)
        r.a3 = LW(lo32(r.gp) - 0x5d14u);                         // 2bc850 lw $a3, -0x5D14($gp)
        r.v0 = mult(r.v0, r.s0, r.lo, r.hi);                     // 2bc854 mult $v0, $v0, $s0
        SWC1(lo32(r.s2) + 0xae0u, r.f0);                         // 2bc858 swc1 $f0, 0xAE0($s2)
        SWC1(lo32(r.s2) + 0xadcu, r.f0);                         // 2bc85c swc1 $f0, 0xADC($s2)
        r.v1 = LW(lo32(r.s2) + 0xa9cu);                          // 2bc860 lw $v1, 0xA9C($s2)
        r.v0 = addu(r.v0, r.a3);                                 // 2bc864 addu $v0, $v0, $a3
        r.f22 = LWC1(lo32(r.v0) + 0x18u);                        // 2bc868 lwc1 $f22, 0x18($v0)
        r.v0 = addiu(0u, 4);                                     // 2bc86c addiu $v0, $zero, 0x4
    L_2bc870:
        if (r.v1 != r.v0)                                        // 2bc870 bnel $v1, $v0, . + 4 + (0x3A << 2)
        {
            r.f12 = LWC1(lo32(r.s3) + 0x4cu);                        // 2bc874 lwc1 $f12, 0x4C($s3)
            goto L_2bc95c;
        }
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bc878 lw $v0, 0xA94($s2)
        r.v0 = r.v0 & 0x8u;                                      // 2bc87c andi $v0, $v0, 0x8
        t = r.v0 == 0u;                                          // 2bc880 beqz $v0, . + 4 + (0x35 << 2)
        r.t0 = LW(lo32(r.gp) - 0x4b10u);                         // 2bc884 lw $t0, -0x4B10($gp)
        if (t) goto L_2bc958;
        r.s0 = addiu(0u, -1);                                    // 2bc888 addiu $s0, $zero, -0x1
        t = lez64(r.t0);                                         // 2bc88c blez $t0, . + 4 + (0x1A << 2)
        r.a1 = 0u;                                               // 2bc890 daddu $a1, $zero, $zero
        if (t) goto L_2bc8f8;
        r.t1 = sext32(0x380000u);                                // 2bc894 lui $t1, 0x38
        r.a2 = LW(lo32(r.s2) + 0x18u);                           // 2bc898 lw $a2, 0x18($s2)
        r.v0 = addiu(r.t1, 9192);                                // 2bc89c addiu $v0, $t1, 0x23E8
        r.v1 = LW(lo32(r.v0) + 0x4u);                            // 2bc8a0 lw $v1, 0x4($v0)
        r.a0 = LW(lo32(r.v1) + 0x160u);                          // 2bc8a4 lw $a0, 0x160($v1)
        r.v0 = LW(lo32(r.a0) + 0x10u);                           // 2bc8a8 lw $v0, 0x10($a0)
        t = r.a2 != r.v0;                                        // 2bc8ac bne $a2, $v0, . + 4 + (0x4 << 2)
        r.t2 = r.t1;                                             // 2bc8b0 daddu $t2, $t1, $zero
        if (t) goto L_2bc8c0;
        r.s0 = 0u;                                               // 2bc8b4 daddu $s0, $zero, $zero
        // 2bc8b8 b . + 4 + (0x11 << 2)
        r.a3 = LW(lo32(r.gp) - 0x5d14u);                         // 2bc8bc lw $a3, -0x5D14($gp)
        goto L_2bc900;
    L_2bc8c0:
        r.a3 = LW(lo32(r.gp) - 0x5d14u);                         // 2bc8c0 lw $a3, -0x5D14($gp)
        r.a1 = addiu(r.a1, 1);                                   // 2bc8c4 addiu $a1, $a1, 0x1
    L_2bc8c8:
        r.v0 = slt(r.a1, r.t0);                                  // 2bc8c8 slt $v0, $a1, $t0
        t = r.v0 == 0u;                                          // 2bc8cc beqz $v0, . + 4 + (0xC << 2)
        r.v1 = sll32(r.a1, 3);                                   // 2bc8d0 sll $v1, $a1, 3
        if (t) goto L_2bc900;
        r.v0 = addiu(r.t2, 9192);                                // 2bc8d4 addiu $v0, $t2, 0x23E8
        r.v0 = addu(r.v0, r.v1);                                 // 2bc8d8 addu $v0, $v0, $v1
        r.a0 = LW(lo32(r.v0) + 0x4u);                            // 2bc8dc lw $a0, 0x4($v0)
        r.v1 = LW(lo32(r.a0) + 0x160u);                          // 2bc8e0 lw $v1, 0x160($a0)
        r.v0 = LW(lo32(r.v1) + 0x10u);                           // 2bc8e4 lw $v0, 0x10($v1)
        if (r.a2 != r.v0)                                        // 2bc8e8 bnel $a2, $v0, . + 4 + (-0x9 << 2)
        {
            r.a1 = addiu(r.a1, 1);                                   // 2bc8ec addiu $a1, $a1, 0x1
            if (loopCheckpoint(ctx, runtime, 0x2bc8c8u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(s0, 16); STORE_GPR(ra, 31); STORE_F(22); ctx->lo = r.lo; ctx->hi = r.hi; return; }
            goto L_2bc8c8;
        }
        // 2bc8f0 b . + 4 + (0x3 << 2)
        r.s0 = r.a1;                                             // 2bc8f4 daddu $s0, $a1, $zero
        goto L_2bc900;
    L_2bc8f8:
        r.a3 = LW(lo32(r.gp) - 0x5d14u);                         // 2bc8f8 lw $a3, -0x5D14($gp)
        r.t1 = sext32(0x380000u);                                // 2bc8fc lui $t1, 0x38
    L_2bc900:
        r.v0 = addiu(r.t1, 9192);                                // 2bc900 addiu $v0, $t1, 0x23E8
        r.s0 = sll32(r.s0, 3);                                   // 2bc904 sll $s0, $s0, 3
        r.v0 = addiu(r.v0, 4);                                   // 2bc908 addiu $v0, $v0, 0x4
        r.s1 = addiu(0u, 28);                                    // 2bc90c addiu $s1, $zero, 0x1C
        r.s0 = addu(r.s0, r.v0);                                 // 2bc910 addu $s0, $s0, $v0
        r.f12 = LWC1(lo32(r.s3) + 0x50u);                        // 2bc914 lwc1 $f12, 0x50($s3)
        r.v1 = LW(lo32(r.s0));                                   // 2bc918 lw $v1, 0x0($s0)
        r.a0 = LW(lo32(r.v1) + 0x160u);                          // 2bc91c lw $a0, 0x160($v1)
        r.v0 = LW(lo32(r.a0) + 0x24u);                           // 2bc920 lw $v0, 0x24($a0)
        r.v1 = mult(r.v0, r.s1, r.lo, r.hi);                     // 2bc924 mult $v1, $v0, $s1
        r.v0 = addu(r.v1, r.a3);                                 // 2bc928 addu $v0, $v1, $a3
        r.ra = 0x2bc934u;                                        // 2bc92c jal func_284E38
        r.f13 = LWC1(lo32(r.v0) + 0x18u);                        // 2bc930 lwc1 $f13, 0x18($v0)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13); STORE_F(22); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x284e38u, 0x2bc92cu, 0x2bc934u)) return;
        LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(gp, 28); LOAD_F(0); r.lo = ctx->lo; r.hi = ctx->hi;
    L_2bc934:
        r.v0 = LW(lo32(r.s0));                                   // 2bc934 lw $v0, 0x0($s0)
        r.a0 = LW(lo32(r.gp) - 0x5d14u);                         // 2bc938 lw $a0, -0x5D14($gp)
        r.v1 = LW(lo32(r.v0) + 0x160u);                          // 2bc93c lw $v1, 0x160($v0)
        SWC1(lo32(r.s2) + 0xae0u, r.f0);                         // 2bc940 swc1 $f0, 0xAE0($s2)
        r.v0 = LW(lo32(r.v1) + 0x24u);                           // 2bc944 lw $v0, 0x24($v1)
        SWC1(lo32(r.s2) + 0xadcu, r.f0);                         // 2bc948 swc1 $f0, 0xADC($s2)
        r.v0 = mult(r.v0, r.s1, r.lo, r.hi);                     // 2bc94c mult $v0, $v0, $s1
        r.v0 = addu(r.v0, r.a0);                                 // 2bc950 addu $v0, $v0, $a0
        r.f22 = LWC1(lo32(r.v0) + 0x18u);                        // 2bc954 lwc1 $f22, 0x18($v0)
    L_2bc958:
        r.f12 = LWC1(lo32(r.s3) + 0x4cu);                        // 2bc958 lwc1 $f12, 0x4C($s3)
    L_2bc95c:
        r.ra = 0x2bc964u;                                        // 2bc95c jal func_284E38
        r.f13 = FPU_MOV_S(r.f22);                                // 2bc960 mov.s $f13, $f22
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13); STORE_F(22); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x284e38u, 0x2bc95cu, 0x2bc964u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(22); r.fcr31 = ctx->fcr31;
    L_2bc964:
        r.v1 = LW(lo32(r.s2) + 0xa94u);                          // 2bc964 lw $v1, 0xA94($s2)
        r.v0 = r.v1 & 0x583u;                                    // 2bc968 andi $v0, $v1, 0x583
        t = r.v0 != 0u;                                          // 2bc96c bnez $v0, . + 4 + (0x15 << 2)
        r.f21 = FPU_MOV_S(r.f0);                                 // 2bc970 mov.s $f21, $f0
        if (t) goto L_2bc9c4;
        r.v0 = r.v1 & 0x208u;                                    // 2bc974 andi $v0, $v1, 0x208
        t = r.v0 == 0u;                                          // 2bc978 beqz $v0, . + 4 + (0x45 << 2)
        r.f12 = FPU_MOV_S(r.f21);                                // 2bc97c mov.s $f12, $f21
        if (t) goto L_2bca90;
        r.ra = 0x2bc988u;                                        // 2bc980 jal func_2E4608
        r.s1 = 0u;                                               // 2bc984 daddu $s1, $zero, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(s1, 17); STORE_GPR(ra, 31); STORE_F(12); STORE_F(21);
        if (!guestCall(G_PASS, 0x2e4608u, 0x2bc980u, 0x2bc988u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17);
    L_2bc988:
        r.s0 = r.v0;                                             // 2bc988 daddu $s0, $v0, $zero
        r.a1 = r.s1;                                             // 2bc98c daddu $a1, $s1, $zero
        r.ra = 0x2bc998u;                                        // 2bc990 jal func_2E3768
        r.a0 = r.s0;                                             // 2bc994 daddu $a0, $s0, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3768u, 0x2bc990u, 0x2bc998u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17);
    L_2bc998:
        t = !neg64(r.v0);                                        // 2bc998 bgez $v0, . + 4 + (0x4 << 2)
        r.a1 = r.s0;                                             // 2bc99c daddu $a1, $s0, $zero
        if (t) goto L_2bc9ac;
        r.ra = 0x2bc9a8u;                                        // 2bc9a0 jal func_2E31D8
        r.a0 = r.s1;                                             // 2bc9a4 daddu $a0, $s1, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e31d8u, 0x2bc9a0u, 0x2bc9a8u)) return;
        LOAD_GPR(v0, 2);
    L_2bc9a8:
        r.s0 = r.v0;                                             // 2bc9a8 daddu $s0, $v0, $zero
    L_2bc9ac:
        r.a1 = 0u | 0x808eu;                                     // 2bc9ac ori $a1, $zero, 0x808E
        r.a1 = r.a1 << 47;                                       // 2bc9b0 dsll32 $a1, $a1, 15
        r.ra = 0x2bc9bcu;                                        // 2bc9b4 jal func_2E3768
        r.a0 = r.s0;                                             // 2bc9b8 daddu $a0, $s0, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3768u, 0x2bc9b4u, 0x2bc9bcu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(21); LOAD_F(22); r.fcr31 = ctx->fcr31;
    L_2bc9bc:
        if (neg64(r.v0))                                         // 2bc9bc bltzl $v0, . + 4 + (0x35 << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xae4u);                          // 2bc9c0 lw $v0, 0xAE4($s2)
            goto L_2bca94;
        }
    L_2bc9c4:
        r.f21 = LWC1(lo32(r.s2) + 0xae0u);                       // 2bc9c4 lwc1 $f21, 0xAE0($s2)
        r.s1 = 0u;                                               // 2bc9c8 daddu $s1, $zero, $zero
        r.ra = 0x2bc9d4u;                                        // 2bc9cc jal func_2E4608
        r.f12 = FPU_MOV_S(r.f21);                                // 2bc9d0 mov.s $f12, $f21
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(s1, 17); STORE_GPR(ra, 31); STORE_F(12); STORE_F(21);
        if (!guestCall(G_PASS, 0x2e4608u, 0x2bc9ccu, 0x2bc9d4u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17);
    L_2bc9d4:
        r.s0 = r.v0;                                             // 2bc9d4 daddu $s0, $v0, $zero
        r.a1 = r.s1;                                             // 2bc9d8 daddu $a1, $s1, $zero
        r.ra = 0x2bc9e4u;                                        // 2bc9dc jal func_2E3768
        r.a0 = r.s0;                                             // 2bc9e0 daddu $a0, $s0, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3768u, 0x2bc9dcu, 0x2bc9e4u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(gp, 28);
    L_2bc9e4:
        if (!neg64(r.v0))                                        // 2bc9e4 bgezl $v0, . + 4 + (0x6 << 2)
        {
            r.f1 = LWC1(lo32(r.s2) + 0xb40u);                        // 2bc9e8 lwc1 $f1, 0xB40($s2)
            goto L_2bca00;
        }
        r.a1 = r.s0;                                             // 2bc9ec daddu $a1, $s0, $zero
        r.ra = 0x2bc9f8u;                                        // 2bc9f0 jal func_2E31D8
        r.a0 = r.s1;                                             // 2bc9f4 daddu $a0, $s1, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e31d8u, 0x2bc9f0u, 0x2bc9f8u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s2, 18); LOAD_GPR(gp, 28);
    L_2bc9f8:
        r.s0 = r.v0;                                             // 2bc9f8 daddu $s0, $v0, $zero
        r.f1 = LWC1(lo32(r.s2) + 0xb40u);                        // 2bc9fc lwc1 $f1, 0xB40($s2)
    L_2bca00:
        r.f0 = LWC1(lo32(r.gp) - 0x4b98u);                       // 2bca00 lwc1 $f0, -0x4B98($gp)
        r.f20 = FPU_MUL_S(r.f1, r.f0);                           // 2bca04 mul.s $f20, $f1, $f0
        r.ra = 0x2bca10u;                                        // 2bca08 jal func_2E4608
        r.f12 = FPU_MOV_S(r.f20);                                // 2bca0c mov.s $f12, $f20
        STORE_GPR(s0, 16); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(20);
        if (!guestCall(G_PASS, 0x2e4608u, 0x2bca08u, 0x2bca10u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16);
    L_2bca10:
        r.a0 = r.s0;                                             // 2bca10 daddu $a0, $s0, $zero
        r.ra = 0x2bca1cu;                                        // 2bca14 jal func_2E3768
        r.a1 = r.v0;                                             // 2bca18 daddu $a1, $v0, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3768u, 0x2bca14u, 0x2bca1cu)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_F(20); LOAD_F(21); LOAD_F(22); r.fcr31 = ctx->fcr31;
    L_2bca1c:
        if (lez64(r.v0))                                         // 2bca1c blezl $v0, . + 4 + (0xA << 2)
        {
            r.f0 = LWC1(lo32(r.s3) + 0x54u);                         // 2bca20 lwc1 $f0, 0x54($s3)
            goto L_2bca48;
        }
        r.f0 = floatOf(lo32(0u));                                // 2bca24 mtc1 $zero, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f21)); // 2bca28 c.lt.s $f0, $f21
        t = (r.fcr31 & kCondition) == 0u;                        // 2bca30 bc1f . + 4 + (0x3 << 2)
        r.f0 = LWC1(lo32(r.s3) + 0x54u);                         // 2bca34 lwc1 $f0, 0x54($s3)
        if (t) goto L_2bca40;
        // 2bca38 b . + 4 + (0x4 << 2)
        r.f0 = FPU_ADD_S(r.f0, r.f20);                           // 2bca3c add.s $f0, $f0, $f20
        goto L_2bca4c;
    L_2bca40:
        // 2bca40 b . + 4 + (0x2 << 2)
        r.f0 = FPU_SUB_S(r.f0, r.f20);                           // 2bca44 sub.s $f0, $f0, $f20
        goto L_2bca4c;
    L_2bca48:
        r.f0 = FPU_ADD_S(r.f0, r.f21);                           // 2bca48 add.s $f0, $f0, $f21
    L_2bca4c:
        SWC1(lo32(r.s3) + 0x54u, r.f0);                          // 2bca4c swc1 $f0, 0x54($s3)
        r.f1 = LWC1(lo32(r.s3) + 0x54u);                         // 2bca50 lwc1 $f1, 0x54($s3)
        r.at = sext32(0x43b40000u);                              // 2bca54 lui $at, 0x43B4
        r.f2 = floatOf(lo32(r.at));                              // 2bca58 mtc1 $at, $f2
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f2, r.f1)); // 2bca5c c.lt.s $f2, $f1
        if ((r.fcr31 & kCondition) == 0u) goto L_2bca74;         // 2bca60 bc1f . + 4 + (0x4 << 2)
        r.f0 = FPU_SUB_S(r.f1, r.f2);                            // 2bca68 sub.s $f0, $f1, $f2
        SWC1(lo32(r.s3) + 0x54u, r.f0);                          // 2bca6c swc1 $f0, 0x54($s3)
        r.f1 = FPU_MOV_S(r.f0);                                  // 2bca70 mov.s $f1, $f0
    L_2bca74:
        r.f0 = floatOf(lo32(0u));                                // 2bca74 mtc1 $zero, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 2bca78 c.lt.s $f1, $f0
        if ((r.fcr31 & kCondition) == 0u)                        // 2bca80 bc1fl . + 4 + (0x4 << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xae4u);                          // 2bca84 lw $v0, 0xAE4($s2)
            goto L_2bca94;
        }
        r.f0 = FPU_ADD_S(r.f1, r.f2);                            // 2bca88 add.s $f0, $f1, $f2
        SWC1(lo32(r.s3) + 0x54u, r.f0);                          // 2bca8c swc1 $f0, 0x54($s3)
    L_2bca90:
        r.v0 = LW(lo32(r.s2) + 0xae4u);                          // 2bca90 lw $v0, 0xAE4($s2)
    L_2bca94:
        if (r.v0 == 0u)                                          // 2bca94 beql $v0, $zero, . + 4 + (0x3B << 2)
        {
            r.f13 = LWC1(lo32(r.s3) + 0x54u);                        // 2bca98 lwc1 $f13, 0x54($s3)
            goto L_2bcb84;
        }
        r.v0 = LW(lo32(r.s2) + 0xad4u);                          // 2bca9c lw $v0, 0xAD4($s2)
        t = r.v0 == 0u;                                          // 2bcaa0 beqz $v0, . + 4 + (0x37 << 2)
        r.v0 = sext32(0x610000u);                                // 2bcaa4 lui $v0, 0x61
        if (t) goto L_2bcb80;
        r.v1 = LW(lo32(r.s2) + 0xa9cu);                          // 2bcaa8 lw $v1, 0xA9C($s2)
        r.v0 = r.v0 | 0xc000u;                                   // 2bcaac ori $v0, $v0, 0xC000
        r.v1 = r.v1 & r.v0;                                      // 2bcab0 and $v1, $v1, $v0
        if (r.v1 != 0u)                                          // 2bcab4 bnel $v1, $zero, . + 4 + (0x33 << 2)
        {
            r.f13 = LWC1(lo32(r.s3) + 0x54u);                        // 2bcab8 lwc1 $f13, 0x54($s3)
            goto L_2bcb84;
        }
        r.f12 = LWC1(lo32(r.s3) + 0x4cu);                        // 2bcabc lwc1 $f12, 0x4C($s3)
        r.f13 = FPU_MOV_S(r.f22);                                // 2bcac0 mov.s $f13, $f22
        r.ra = 0x2bcaccu;                                        // 2bcac4 jal func_284E38
        r.s1 = 0u;                                               // 2bcac8 daddu $s1, $zero, $zero
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(s1, 17); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(12); STORE_F(13); STORE_F(21); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x284e38u, 0x2bcac4u, 0x2bcaccu)) return;
        LOAD_F(0);
    L_2bcacc:
        r.f21 = FPU_MOV_S(r.f0);                                 // 2bcacc mov.s $f21, $f0
        r.ra = 0x2bcad8u;                                        // 2bcad0 jal func_2E4608
        r.f12 = FPU_MOV_S(r.f21);                                // 2bcad4 mov.s $f12, $f21
        STORE_GPR(ra, 31); STORE_F(12); STORE_F(21);
        if (!guestCall(G_PASS, 0x2e4608u, 0x2bcad0u, 0x2bcad8u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17);
    L_2bcad8:
        r.s0 = r.v0;                                             // 2bcad8 daddu $s0, $v0, $zero
        r.a1 = r.s1;                                             // 2bcadc daddu $a1, $s1, $zero
        r.ra = 0x2bcae8u;                                        // 2bcae0 jal func_2E3768
        r.a0 = r.s0;                                             // 2bcae4 daddu $a0, $s0, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3768u, 0x2bcae0u, 0x2bcae8u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17);
    L_2bcae8:
        t = !neg64(r.v0);                                        // 2bcae8 bgez $v0, . + 4 + (0x4 << 2)
        r.a1 = r.s0;                                             // 2bcaec daddu $a1, $s0, $zero
        if (t) goto L_2bcafc;
        r.ra = 0x2bcaf8u;                                        // 2bcaf0 jal func_2E31D8
        r.a0 = r.s1;                                             // 2bcaf4 daddu $a0, $s1, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e31d8u, 0x2bcaf0u, 0x2bcaf8u)) return;
        LOAD_GPR(v0, 2);
    L_2bcaf8:
        r.s0 = r.v0;                                             // 2bcaf8 daddu $s0, $v0, $zero
    L_2bcafc:
        r.a1 = 0u | 0x808eu;                                     // 2bcafc ori $a1, $zero, 0x808E
        r.a1 = r.a1 << 47;                                       // 2bcb00 dsll32 $a1, $a1, 15
        r.ra = 0x2bcb0cu;                                        // 2bcb04 jal func_2E3768
        r.a0 = r.s0;                                             // 2bcb08 daddu $a0, $s0, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3768u, 0x2bcb04u, 0x2bcb0cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s3, 19); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(21); LOAD_F(22); r.fcr31 = ctx->fcr31;
    L_2bcb0c:
        t = lez64(r.v0);                                         // 2bcb0c blez $v0, . + 4 + (0x1D << 2)
        r.f13 = FPU_MOV_S(r.f22);                                // 2bcb10 mov.s $f13, $f22
        if (t) goto L_2bcb84;
        r.f2 = floatOf(lo32(0u));                                // 2bcb14 mtc1 $zero, $f2
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f2, r.f21)); // 2bcb18 c.lt.s $f2, $f21
        t = (r.fcr31 & kCondition) == 0u;                        // 2bcb20 bc1f . + 4 + (0xC << 2)
        r.f1 = LWC1(lo32(r.s3) + 0x4cu);                         // 2bcb24 lwc1 $f1, 0x4C($s3)
        if (t) goto L_2bcb54;
        r.at = sext32(0x42380000u);                              // 2bcb28 lui $at, 0x4238
        r.f0 = floatOf(lo32(r.at));                              // 2bcb2c mtc1 $at, $f0
        r.at = sext32(0x43b40000u);                              // 2bcb30 lui $at, 0x43B4
        r.f2 = floatOf(lo32(r.at));                              // 2bcb34 mtc1 $at, $f2
        r.f13 = FPU_ADD_S(r.f1, r.f0);                           // 2bcb38 add.s $f13, $f1, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f2, r.f13)); // 2bcb3c c.lt.s $f2, $f13
        if ((r.fcr31 & kCondition) != 0u)                        // 2bcb44 bc1tl . + 4 + (0xF << 2)
        {
            r.f13 = FPU_SUB_S(r.f13, r.f2);                          // 2bcb48 sub.s $f13, $f13, $f2
            goto L_2bcb84;
        }
        // 2bcb4c b . + 4 + (0xE << 2)
        r.f12 = LWC1(lo32(r.s3) + 0x50u);                        // 2bcb50 lwc1 $f12, 0x50($s3)
        goto L_2bcb88;
    L_2bcb54:
        r.at = sext32(0x42380000u);                              // 2bcb54 lui $at, 0x4238
        r.f0 = floatOf(lo32(r.at));                              // 2bcb58 mtc1 $at, $f0
        r.f13 = FPU_SUB_S(r.f1, r.f0);                           // 2bcb5c sub.s $f13, $f1, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f13, r.f2)); // 2bcb60 c.lt.s $f13, $f2
        if ((r.fcr31 & kCondition) == 0u)                        // 2bcb68 bc1fl . + 4 + (0x7 << 2)
        {
            r.f12 = LWC1(lo32(r.s3) + 0x50u);                        // 2bcb6c lwc1 $f12, 0x50($s3)
            goto L_2bcb88;
        }
        r.at = sext32(0x43b40000u);                              // 2bcb70 lui $at, 0x43B4
        r.f0 = floatOf(lo32(r.at));                              // 2bcb74 mtc1 $at, $f0
        // 2bcb78 b . + 4 + (0x2 << 2)
        r.f13 = FPU_ADD_S(r.f13, r.f0);                          // 2bcb7c add.s $f13, $f13, $f0
        goto L_2bcb84;
    L_2bcb80:
        r.f13 = LWC1(lo32(r.s3) + 0x54u);                        // 2bcb80 lwc1 $f13, 0x54($s3)
    L_2bcb84:
        r.f12 = LWC1(lo32(r.s3) + 0x50u);                        // 2bcb84 lwc1 $f12, 0x50($s3)
    L_2bcb88:
        r.ra = 0x2bcb90u;                                        // 2bcb88 jal func_284E38
        r.s1 = 0u;                                               // 2bcb8c daddu $s1, $zero, $zero
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(s1, 17); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(12); STORE_F(13); STORE_F(21); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x284e38u, 0x2bcb88u, 0x2bcb90u)) return;
        LOAD_F(0);
    L_2bcb90:
        r.f21 = FPU_MOV_S(r.f0);                                 // 2bcb90 mov.s $f21, $f0
        r.ra = 0x2bcb9cu;                                        // 2bcb94 jal func_2E4608
        r.f12 = FPU_MOV_S(r.f21);                                // 2bcb98 mov.s $f12, $f21
        STORE_GPR(ra, 31); STORE_F(12); STORE_F(21);
        if (!guestCall(G_PASS, 0x2e4608u, 0x2bcb94u, 0x2bcb9cu)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17);
    L_2bcb9c:
        r.s0 = r.v0;                                             // 2bcb9c daddu $s0, $v0, $zero
        r.a1 = r.s1;                                             // 2bcba0 daddu $a1, $s1, $zero
        r.ra = 0x2bcbacu;                                        // 2bcba4 jal func_2E3768
        r.a0 = r.s0;                                             // 2bcba8 daddu $a0, $s0, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3768u, 0x2bcba4u, 0x2bcbacu)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(gp, 28);
    L_2bcbac:
        if (!neg64(r.v0))                                        // 2bcbac bgezl $v0, . + 4 + (0x6 << 2)
        {
            r.f1 = LWC1(lo32(r.s2) + 0xb40u);                        // 2bcbb0 lwc1 $f1, 0xB40($s2)
            goto L_2bcbc8;
        }
        r.a1 = r.s0;                                             // 2bcbb4 daddu $a1, $s0, $zero
        r.ra = 0x2bcbc0u;                                        // 2bcbb8 jal func_2E31D8
        r.a0 = r.s1;                                             // 2bcbbc daddu $a0, $s1, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e31d8u, 0x2bcbb8u, 0x2bcbc0u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s2, 18); LOAD_GPR(gp, 28);
    L_2bcbc0:
        r.s0 = r.v0;                                             // 2bcbc0 daddu $s0, $v0, $zero
        r.f1 = LWC1(lo32(r.s2) + 0xb40u);                        // 2bcbc4 lwc1 $f1, 0xB40($s2)
    L_2bcbc8:
        r.f0 = LWC1(lo32(r.gp) - 0x4b98u);                       // 2bcbc8 lwc1 $f0, -0x4B98($gp)
        r.f20 = FPU_MUL_S(r.f1, r.f0);                           // 2bcbcc mul.s $f20, $f1, $f0
        r.ra = 0x2bcbd8u;                                        // 2bcbd0 jal func_2E4608
        r.f12 = FPU_MOV_S(r.f20);                                // 2bcbd4 mov.s $f12, $f20
        STORE_GPR(s0, 16); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(20);
        if (!guestCall(G_PASS, 0x2e4608u, 0x2bcbd0u, 0x2bcbd8u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16);
    L_2bcbd8:
        r.a0 = r.s0;                                             // 2bcbd8 daddu $a0, $s0, $zero
        r.ra = 0x2bcbe4u;                                        // 2bcbdc jal func_2E3768
        r.a1 = r.v0;                                             // 2bcbe0 daddu $a1, $v0, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3768u, 0x2bcbdcu, 0x2bcbe4u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(20); LOAD_F(21); r.fcr31 = ctx->fcr31;
    L_2bcbe4:
        if (lez64(r.v0))                                         // 2bcbe4 blezl $v0, . + 4 + (0xA << 2)
        {
            r.f0 = LWC1(lo32(r.s3) + 0x50u);                         // 2bcbe8 lwc1 $f0, 0x50($s3)
            goto L_2bcc10;
        }
        r.f0 = floatOf(lo32(0u));                                // 2bcbec mtc1 $zero, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f21)); // 2bcbf0 c.lt.s $f0, $f21
        t = (r.fcr31 & kCondition) == 0u;                        // 2bcbf8 bc1f . + 4 + (0x3 << 2)
        r.f0 = LWC1(lo32(r.s3) + 0x50u);                         // 2bcbfc lwc1 $f0, 0x50($s3)
        if (t) goto L_2bcc08;
        // 2bcc00 b . + 4 + (0x4 << 2)
        r.f0 = FPU_ADD_S(r.f0, r.f20);                           // 2bcc04 add.s $f0, $f0, $f20
        goto L_2bcc14;
    L_2bcc08:
        // 2bcc08 b . + 4 + (0x2 << 2)
        r.f0 = FPU_SUB_S(r.f0, r.f20);                           // 2bcc0c sub.s $f0, $f0, $f20
        goto L_2bcc14;
    L_2bcc10:
        r.f0 = FPU_ADD_S(r.f0, r.f21);                           // 2bcc10 add.s $f0, $f0, $f21
    L_2bcc14:
        SWC1(lo32(r.s3) + 0x50u, r.f0);                          // 2bcc14 swc1 $f0, 0x50($s3)
        r.f1 = LWC1(lo32(r.s3) + 0x50u);                         // 2bcc18 lwc1 $f1, 0x50($s3)
        r.at = sext32(0x43b40000u);                              // 2bcc1c lui $at, 0x43B4
        r.f2 = floatOf(lo32(r.at));                              // 2bcc20 mtc1 $at, $f2
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f2, r.f1)); // 2bcc24 c.lt.s $f2, $f1
        if ((r.fcr31 & kCondition) == 0u) goto L_2bcc3c;         // 2bcc28 bc1f . + 4 + (0x4 << 2)
        r.f0 = FPU_SUB_S(r.f1, r.f2);                            // 2bcc30 sub.s $f0, $f1, $f2
        SWC1(lo32(r.s3) + 0x50u, r.f0);                          // 2bcc34 swc1 $f0, 0x50($s3)
        r.f1 = FPU_MOV_S(r.f0);                                  // 2bcc38 mov.s $f1, $f0
    L_2bcc3c:
        r.f0 = floatOf(lo32(0u));                                // 2bcc3c mtc1 $zero, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 2bcc40 c.lt.s $f1, $f0
        if ((r.fcr31 & kCondition) == 0u)                        // 2bcc48 bc1fl . + 4 + (0x4 << 2)
        {
            r.a2 = LW(lo32(r.s2) + 0xae4u);                          // 2bcc4c lw $a2, 0xAE4($s2)
            goto L_2bcc5c;
        }
        r.f0 = FPU_ADD_S(r.f1, r.f2);                            // 2bcc50 add.s $f0, $f1, $f2
        SWC1(lo32(r.s3) + 0x50u, r.f0);                          // 2bcc54 swc1 $f0, 0x50($s3)
        r.a2 = LW(lo32(r.s2) + 0xae4u);                          // 2bcc58 lw $a2, 0xAE4($s2)
    L_2bcc5c:
        t = r.a2 == 0u;                                          // 2bcc5c beqz $a2, . + 4 + (0xA5 << 2)
        r.a1 = r.a2;                                             // 2bcc60 daddu $a1, $a2, $zero
        if (t) goto L_2bcef4;
        r.v0 = LW(lo32(r.s2) + 0xad4u);                          // 2bcc64 lw $v0, 0xAD4($s2)
        t = r.v0 == 0u;                                          // 2bcc68 beqz $v0, . + 4 + (0xA2 << 2)
        r.v0 = sext32(0x20000u);                                 // 2bcc6c lui $v0, 0x2
        if (t) goto L_2bcef4;
        r.v1 = LW(lo32(r.s2) + 0xa9cu);                          // 2bcc70 lw $v1, 0xA9C($s2)
        t = r.v1 == r.v0;                                        // 2bcc74 beq $v1, $v0, . + 4 + (0x9F << 2)
        r.v0 = addiu(0u, 8);                                     // 2bcc78 addiu $v0, $zero, 0x8
        if (t) goto L_2bcef4;
        r.a0 = LW(lo32(r.a2) + 0x8u);                            // 2bcc7c lw $a0, 0x8($a2)
        t = r.a0 == r.v0;                                        // 2bcc80 beq $a0, $v0, . + 4 + (0xE << 2)
        r.v0 = slti(r.a0, 9);                                    // 2bcc84 slti $v0, $a0, 0x9
        if (t) goto L_2bccbc;
        t = r.v0 == 0u;                                          // 2bcc88 beqz $v0, . + 4 + (0x5 << 2)
        r.v0 = addiu(0u, 1);                                     // 2bcc8c addiu $v0, $zero, 0x1
        if (t) goto L_2bcca0;
        t = r.a0 == r.v0;                                        // 2bcc90 beq $a0, $v0, . + 4 + (0x30 << 2)
        r.f5 = LWC1(lo32(r.sp));                                 // 2bcc94 lwc1 $f5, 0x0($sp)
        if (t) goto L_2bcd54;
        // 2bcc98 b . + 4 + (0x61 << 2)
        r.f4 = LWC1(lo32(r.sp) + 0x4u);                          // 2bcc9c lwc1 $f4, 0x4($sp)
        goto L_2bce20;
    L_2bcca0:
        r.v0 = addiu(0u, 64);                                    // 2bcca0 addiu $v0, $zero, 0x40
        t = r.a0 == r.v0;                                        // 2bcca4 beq $a0, $v0, . + 4 + (0x2B << 2)
        r.v0 = addiu(0u, 256);                                   // 2bcca8 addiu $v0, $zero, 0x100
        if (t) goto L_2bcd54;
        t = r.a0 == r.v0;                                        // 2bccac beq $a0, $v0, . + 4 + (0x4B << 2)
        r.f5 = LWC1(lo32(r.sp));                                 // 2bccb0 lwc1 $f5, 0x0($sp)
        if (t) goto L_2bcddc;
        // 2bccb4 b . + 4 + (0x5A << 2)
        r.f4 = LWC1(lo32(r.sp) + 0x4u);                          // 2bccb8 lwc1 $f4, 0x4($sp)
        goto L_2bce20;
    L_2bccbc:
        r.v1 = LW(lo32(r.s2) + 0x178u);                          // 2bccbc lw $v1, 0x178($s2)
        t = r.v1 == r.a0;                                        // 2bccc0 beq $v1, $a0, . + 4 + (0xA << 2)
        r.v0 = addiu(0u, 11);                                    // 2bccc4 addiu $v0, $zero, 0xB
        if (t) goto L_2bccec;
        t = r.v1 == r.v0;                                        // 2bccc8 beq $v1, $v0, . + 4 + (0x8 << 2)
        r.v0 = addiu(0u, 13);                                    // 2bcccc addiu $v0, $zero, 0xD
        if (t) goto L_2bccec;
        t = r.v1 == r.v0;                                        // 2bccd0 beq $v1, $v0, . + 4 + (0x6 << 2)
        r.v0 = addiu(0u, 25);                                    // 2bccd4 addiu $v0, $zero, 0x19
        if (t) goto L_2bccec;
        t = r.v1 == r.v0;                                        // 2bccd8 beq $v1, $v0, . + 4 + (0x4 << 2)
        r.v0 = addiu(r.v1, -14);                                 // 2bccdc addiu $v0, $v1, -0xE
        if (t) goto L_2bccec;
        r.v0 = sltu(r.v0, sext32(5u));                           // 2bcce0 sltiu $v0, $v0, 0x5
        if (r.v0 == 0u)                                          // 2bcce4 beql $v0, $zero, . + 4 + (0x14 << 2)
        {
            r.f0 = LWC1(lo32(r.s2) + 0xbc0u);                        // 2bcce8 lwc1 $f0, 0xBC0($s2)
            goto L_2bcd38;
        }
    L_2bccec:
        r.f0 = LWC1(lo32(r.s3) + 0x34u);                         // 2bccec lwc1 $f0, 0x34($s3)
        r.f1 = LWC1(lo32(r.gp) - 0x6fd0u);                       // 2bccf0 lwc1 $f1, -0x6FD0($gp)
        r.f2 = LWC1(lo32(r.a2) + 0x34u);                         // 2bccf4 lwc1 $f2, 0x34($a2)
        r.f0 = FPU_SUB_S(r.f0, r.f1);                            // 2bccf8 sub.s $f0, $f0, $f1
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f2, r.f0)); // 2bccfc c.lt.s $f2, $f0
        if ((r.fcr31 & kCondition) == 0u)                        // 2bcd04 bc1fl . + 4 + (0xC << 2)
        {
            r.f0 = LWC1(lo32(r.s2) + 0xbc0u);                        // 2bcd08 lwc1 $f0, 0xBC0($s2)
            goto L_2bcd38;
        }
        r.f1 = LWC1(lo32(r.s2) + 0xbc0u);                        // 2bcd0c lwc1 $f1, 0xBC0($s2)
        r.f0 = LWC1(lo32(r.a1) + 0x30u);                         // 2bcd10 lwc1 $f0, 0x30($a1)
        r.f0 = FPU_SUB_S(r.f0, r.f1);                            // 2bcd14 sub.s $f0, $f0, $f1
        SWC1(lo32(r.sp), r.f0);                                  // 2bcd18 swc1 $f0, 0x0($sp)
        r.f0 = LWC1(lo32(r.s2) + 0xbc4u);                        // 2bcd1c lwc1 $f0, 0xBC4($s2)
        r.f1 = LWC1(lo32(r.a1) + 0x34u);                         // 2bcd20 lwc1 $f1, 0x34($a1)
        r.f1 = FPU_SUB_S(r.f1, r.f0);                            // 2bcd24 sub.s $f1, $f1, $f0
        SWC1(lo32(r.sp) + 0x4u, r.f1);                           // 2bcd28 swc1 $f1, 0x4($sp)
        r.f0 = LWC1(lo32(r.a1) + 0x38u);                         // 2bcd2c lwc1 $f0, 0x38($a1)
        // 2bcd30 b . + 4 + (0x27 << 2)
        r.f1 = LWC1(lo32(r.s2) + 0xbc8u);                        // 2bcd34 lwc1 $f1, 0xBC8($s2)
        goto L_2bcdd0;
    L_2bcd38:
        r.f1 = LWC1(lo32(r.a2) + 0x30u);                         // 2bcd38 lwc1 $f1, 0x30($a2)
        r.v0 = LW(lo32(r.a2) + 0x160u);                          // 2bcd3c lw $v0, 0x160($a2)
        r.f1 = FPU_SUB_S(r.f1, r.f0);                            // 2bcd40 sub.s $f1, $f1, $f0
        SWC1(lo32(r.sp), r.f1);                                  // 2bcd44 swc1 $f1, 0x0($sp)
        r.f1 = LWC1(lo32(r.s2) + 0xbc4u);                        // 2bcd48 lwc1 $f1, 0xBC4($s2)
        // 2bcd4c b . + 4 + (0x2C << 2)
        r.f0 = LWC1(lo32(r.v0) + 0xbc4u);                        // 2bcd50 lwc1 $f0, 0xBC4($v0)
        goto L_2bce00;
    L_2bcd54:
        r.v0 = LW(lo32(r.a2) + 0x4u);                            // 2bcd54 lw $v0, 0x4($a2)
        r.v0 = addiu(r.v0, -201);                                // 2bcd58 addiu $v0, $v0, -0xC9
        r.v0 = sltu(r.v0, sext32(2u));                           // 2bcd5c sltiu $v0, $v0, 0x2
        if (r.v0 == 0u)                                          // 2bcd60 beql $v0, $zero, . + 4 + (0xC << 2)
        {
            r.f1 = LWC1(lo32(r.a1) + 0x1fcu);                        // 2bcd64 lwc1 $f1, 0x1FC($a1)
            goto L_2bcd94;
        }
        r.f0 = LWC1(lo32(r.a1) + 0x1fcu);                        // 2bcd68 lwc1 $f0, 0x1FC($a1)
        r.f1 = LWC1(lo32(r.a1) + 0x30u);                         // 2bcd6c lwc1 $f1, 0x30($a1)
        r.f2 = LWC1(lo32(r.s2) + 0xbc0u);                        // 2bcd70 lwc1 $f2, 0xBC0($s2)
        r.f1 = FPU_ADD_S(r.f1, r.f0);                            // 2bcd74 add.s $f1, $f1, $f0
        r.f1 = FPU_SUB_S(r.f1, r.f2);                            // 2bcd78 sub.s $f1, $f1, $f2
        SWC1(lo32(r.sp), r.f1);                                  // 2bcd7c swc1 $f1, 0x0($sp)
        r.f1 = LWC1(lo32(r.s2) + 0xbc4u);                        // 2bcd80 lwc1 $f1, 0xBC4($s2)
        r.f0 = LWC1(lo32(r.a1) + 0x34u);                         // 2bcd84 lwc1 $f0, 0x34($a1)
        r.f0 = FPU_SUB_S(r.f0, r.f1);                            // 2bcd88 sub.s $f0, $f0, $f1
        // 2bcd8c b . + 4 + (0xC << 2)
        SWC1(lo32(r.sp) + 0x4u, r.f0);                           // 2bcd90 swc1 $f0, 0x4($sp)
        goto L_2bcdc0;
    L_2bcd94:
        r.f0 = LWC1(lo32(r.a1) + 0x30u);                         // 2bcd94 lwc1 $f0, 0x30($a1)
        r.f2 = LWC1(lo32(r.s2) + 0xbc0u);                        // 2bcd98 lwc1 $f2, 0xBC0($s2)
        r.f0 = FPU_ADD_S(r.f0, r.f1);                            // 2bcd9c add.s $f0, $f0, $f1
        r.f0 = FPU_SUB_S(r.f0, r.f2);                            // 2bcda0 sub.s $f0, $f0, $f2
        SWC1(lo32(r.sp), r.f0);                                  // 2bcda4 swc1 $f0, 0x0($sp)
        r.f0 = LWC1(lo32(r.a1) + 0x200u);                        // 2bcda8 lwc1 $f0, 0x200($a1)
        r.f1 = LWC1(lo32(r.a1) + 0x34u);                         // 2bcdac lwc1 $f1, 0x34($a1)
        r.f2 = LWC1(lo32(r.s2) + 0xbc4u);                        // 2bcdb0 lwc1 $f2, 0xBC4($s2)
        r.f1 = FPU_ADD_S(r.f1, r.f0);                            // 2bcdb4 add.s $f1, $f1, $f0
        r.f1 = FPU_SUB_S(r.f1, r.f2);                            // 2bcdb8 sub.s $f1, $f1, $f2
        SWC1(lo32(r.sp) + 0x4u, r.f1);                           // 2bcdbc swc1 $f1, 0x4($sp)
    L_2bcdc0:
        r.f2 = LWC1(lo32(r.a1) + 0x204u);                        // 2bcdc0 lwc1 $f2, 0x204($a1)
        r.f0 = LWC1(lo32(r.a1) + 0x38u);                         // 2bcdc4 lwc1 $f0, 0x38($a1)
        r.f1 = LWC1(lo32(r.s2) + 0xbc8u);                        // 2bcdc8 lwc1 $f1, 0xBC8($s2)
        r.f0 = FPU_ADD_S(r.f0, r.f2);                            // 2bcdcc add.s $f0, $f0, $f2
    L_2bcdd0:
        r.f0 = FPU_SUB_S(r.f0, r.f1);                            // 2bcdd0 sub.s $f0, $f0, $f1
        // 2bcdd4 b . + 4 + (0x10 << 2)
        SWC1(lo32(r.sp) + 0x8u, r.f0);                           // 2bcdd8 swc1 $f0, 0x8($sp)
        goto L_2bce18;
    L_2bcddc:
        r.f0 = LWC1(lo32(r.s2) + 0xbc0u);                        // 2bcddc lwc1 $f0, 0xBC0($s2)
        r.f1 = LWC1(lo32(r.a2) + 0x30u);                         // 2bcde0 lwc1 $f1, 0x30($a2)
        r.at = sext32(0x3f000000u);                              // 2bcde4 lui $at, 0x3F00
        r.f2 = floatOf(lo32(r.at));                              // 2bcde8 mtc1 $at, $f2
        r.f1 = FPU_SUB_S(r.f1, r.f0);                            // 2bcdec sub.s $f1, $f1, $f0
        SWC1(lo32(r.sp), r.f1);                                  // 2bcdf0 swc1 $f1, 0x0($sp)
        r.f0 = LWC1(lo32(r.a2) + 0x34u);                         // 2bcdf4 lwc1 $f0, 0x34($a2)
        r.f1 = LWC1(lo32(r.s2) + 0xbc4u);                        // 2bcdf8 lwc1 $f1, 0xBC4($s2)
        r.f0 = FPU_ADD_S(r.f0, r.f2);                            // 2bcdfc add.s $f0, $f0, $f2
    L_2bce00:
        r.f0 = FPU_SUB_S(r.f0, r.f1);                            // 2bce00 sub.s $f0, $f0, $f1
        SWC1(lo32(r.sp) + 0x4u, r.f0);                           // 2bce04 swc1 $f0, 0x4($sp)
        r.f1 = LWC1(lo32(r.a2) + 0x38u);                         // 2bce08 lwc1 $f1, 0x38($a2)
        r.f0 = LWC1(lo32(r.s2) + 0xbc8u);                        // 2bce0c lwc1 $f0, 0xBC8($s2)
        r.f1 = FPU_SUB_S(r.f1, r.f0);                            // 2bce10 sub.s $f1, $f1, $f0
        SWC1(lo32(r.sp) + 0x8u, r.f1);                           // 2bce14 swc1 $f1, 0x8($sp)
    L_2bce18:
        r.f5 = LWC1(lo32(r.sp));                                 // 2bce18 lwc1 $f5, 0x0($sp)
        r.f4 = LWC1(lo32(r.sp) + 0x4u);                          // 2bce1c lwc1 $f4, 0x4($sp)
    L_2bce20:
        r.f0 = FPU_MUL_S(r.f5, r.f5);                            // 2bce20 mul.s $f0, $f5, $f5
        r.f3 = LWC1(lo32(r.sp) + 0x8u);                          // 2bce24 lwc1 $f3, 0x8($sp)
        r.f1 = FPU_MUL_S(r.f4, r.f4);                            // 2bce28 mul.s $f1, $f4, $f4
        r.f2 = FPU_MUL_S(r.f3, r.f3);                            // 2bce2c mul.s $f2, $f3, $f3
        r.f0 = FPU_ADD_S(r.f0, r.f1);                            // 2bce30 add.s $f0, $f0, $f1
        r.f12 = FPU_ADD_S(r.f0, r.f2);                           // 2bce34 add.s $f12, $f0, $f2
        r.f1 = FPU_SQRT_S(r.f12);                                // 2bce40 c1 0xC0044 (sqrt.s $f1, $f12)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f1, r.f1)); // 2bce44 c.eq.s $f1, $f1
        if ((r.fcr31 & kCondition) != 0u) goto L_2bce68;         // 2bce48 bc1t . + 4 + (0x7 << 2)
        r.ra = 0x2bce58u;                                        // 2bce50 jal func_2D8398
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(12); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2d8398u, 0x2bce50u, 0x2bce58u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(sp, 29); LOAD_F(0); r.fcr31 = ctx->fcr31;
    L_2bce58:
        r.f5 = LWC1(lo32(r.sp));                                 // 2bce58 lwc1 $f5, 0x0($sp)
        r.f1 = FPU_MOV_S(r.f0);                                  // 2bce5c mov.s $f1, $f0
        r.f4 = LWC1(lo32(r.sp) + 0x4u);                          // 2bce60 lwc1 $f4, 0x4($sp)
        r.f3 = LWC1(lo32(r.sp) + 0x8u);                          // 2bce64 lwc1 $f3, 0x8($sp)
    L_2bce68:
        r.at = sext32(0x3f800000u);                              // 2bce68 lui $at, 0x3F80
        r.f0 = floatOf(lo32(r.at));                              // 2bce6c mtc1 $at, $f0
        r.f0 = divS(r.f0, r.f1, r.fcr31);                        // 2bce78 div.s $f0, $f0, $f1
        r.f1 = FPU_MUL_S(r.f3, r.f0);                            // 2bce7c mul.s $f1, $f3, $f0
        r.f2 = FPU_MUL_S(r.f5, r.f0);                            // 2bce80 mul.s $f2, $f5, $f0
        r.f0 = FPU_MUL_S(r.f4, r.f0);                            // 2bce84 mul.s $f0, $f4, $f0
        r.f4 = FPU_MUL_S(r.f1, r.f1);                            // 2bce88 mul.s $f4, $f1, $f1
        SWC1(lo32(r.sp) + 0x8u, r.f1);                           // 2bce8c swc1 $f1, 0x8($sp)
        r.f3 = FPU_MUL_S(r.f2, r.f2);                            // 2bce90 mul.s $f3, $f2, $f2
        SWC1(lo32(r.sp), r.f2);                                  // 2bce94 swc1 $f2, 0x0($sp)
        SWC1(lo32(r.sp) + 0x4u, r.f0);                           // 2bce98 swc1 $f0, 0x4($sp)
        r.f12 = FPU_ADD_S(r.f3, r.f4);                           // 2bce9c add.s $f12, $f3, $f4
        r.f0 = FPU_SQRT_S(r.f12);                                // 2bcea8 c1 0xC0004 (sqrt.s $f0, $f12)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f0, r.f0)); // 2bceac c.eq.s $f0, $f0
        if ((r.fcr31 & kCondition) != 0u)                        // 2bceb4 bc1tl . + 4 + (0x4 << 2)
        {
            r.f12 = LWC1(lo32(r.sp) + 0x4u);                         // 2bceb8 lwc1 $f12, 0x4($sp)
            goto L_2bcec8;
        }
        r.ra = 0x2bcec4u;                                        // 2bcebc jal func_2D8398
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(12); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2d8398u, 0x2bcebcu, 0x2bcec4u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); r.fcr31 = ctx->fcr31;
    L_2bcec4:
        r.f12 = LWC1(lo32(r.sp) + 0x4u);                         // 2bcec4 lwc1 $f12, 0x4($sp)
    L_2bcec8:
        r.ra = 0x2bced0u;                                        // 2bcec8 jal func_2D7D68
        r.f13 = FPU_MOV_S(r.f0);                                 // 2bcecc mov.s $f13, $f0
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(12); STORE_F(13); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2d7d68u, 0x2bcec8u, 0x2bced0u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(s2, 18); LOAD_GPR(gp, 28); LOAD_F(0); r.fcr31 = ctx->fcr31;
    L_2bced0:
        r.at = sext32(0x43340000u);                              // 2bced0 lui $at, 0x4334
        r.f1 = floatOf(lo32(r.at));                              // 2bced4 mtc1 $at, $f1
        r.f2 = LWC1(lo32(r.gp) - 0x6fccu);                       // 2bced8 lwc1 $f2, -0x6FCC($gp)
        r.f0 = FPU_MUL_S(r.f0, r.f1);                            // 2bcedc mul.s $f0, $f0, $f1
        r.f13 = divS(r.f0, r.f2, r.fcr31);                       // 2bcee8 div.s $f13, $f0, $f2
        // 2bceec b . + 4 + (0x3 << 2)
        r.f12 = LWC1(lo32(r.s2) + 0xb98u);                       // 2bcef0 lwc1 $f12, 0xB98($s2)
        goto L_2bcefc;
    L_2bcef4:
        r.f13 = floatOf(lo32(0u));                               // 2bcef4 mtc1 $zero, $f13
        r.f12 = LWC1(lo32(r.s2) + 0xb98u);                       // 2bcef8 lwc1 $f12, 0xB98($s2)
    L_2bcefc:
        r.ra = 0x2bcf04u;                                        // 2bcefc jal func_284E38
        r.s1 = 0u;                                               // 2bcf00 daddu $s1, $zero, $zero
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s1, 17); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(12); STORE_F(13); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x284e38u, 0x2bcefcu, 0x2bcf04u)) return;
        LOAD_F(0);
    L_2bcf04:
        r.f21 = FPU_MOV_S(r.f0);                                 // 2bcf04 mov.s $f21, $f0
        r.ra = 0x2bcf10u;                                        // 2bcf08 jal func_2E4608
        r.f12 = FPU_MOV_S(r.f21);                                // 2bcf0c mov.s $f12, $f21
        STORE_GPR(ra, 31); STORE_F(12); STORE_F(21);
        if (!guestCall(G_PASS, 0x2e4608u, 0x2bcf08u, 0x2bcf10u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17);
    L_2bcf10:
        r.s0 = r.v0;                                             // 2bcf10 daddu $s0, $v0, $zero
        r.a1 = r.s1;                                             // 2bcf14 daddu $a1, $s1, $zero
        r.ra = 0x2bcf20u;                                        // 2bcf18 jal func_2E3768
        r.a0 = r.s0;                                             // 2bcf1c daddu $a0, $s0, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3768u, 0x2bcf18u, 0x2bcf20u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(gp, 28);
    L_2bcf20:
        t = !neg64(r.v0);                                        // 2bcf20 bgez $v0, . + 4 + (0x4 << 2)
        r.a1 = r.s0;                                             // 2bcf24 daddu $a1, $s0, $zero
        if (t) goto L_2bcf34;
        r.ra = 0x2bcf30u;                                        // 2bcf28 jal func_2E31D8
        r.a0 = r.s1;                                             // 2bcf2c daddu $a0, $s1, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e31d8u, 0x2bcf28u, 0x2bcf30u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(a1, 5); LOAD_GPR(s2, 18); LOAD_GPR(gp, 28);
    L_2bcf30:
        r.s0 = r.v0;                                             // 2bcf30 daddu $s0, $v0, $zero
    L_2bcf34:
        r.at = sext32(0x3e800000u);                              // 2bcf34 lui $at, 0x3E80
        r.f1 = floatOf(lo32(r.at));                              // 2bcf38 mtc1 $at, $f1
        r.f0 = LWC1(lo32(r.s2) + 0xb40u);                        // 2bcf3c lwc1 $f0, 0xB40($s2)
        r.f2 = LWC1(lo32(r.gp) - 0x4b98u);                       // 2bcf40 lwc1 $f2, -0x4B98($gp)
        r.f0 = FPU_MUL_S(r.f0, r.f1);                            // 2bcf44 mul.s $f0, $f0, $f1
        r.f20 = FPU_MUL_S(r.f0, r.f2);                           // 2bcf48 mul.s $f20, $f0, $f2
        r.ra = 0x2bcf54u;                                        // 2bcf4c jal func_2E4608
        r.f12 = FPU_MOV_S(r.f20);                                // 2bcf50 mov.s $f12, $f20
        STORE_GPR(at, 1); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(12); STORE_F(20);
        if (!guestCall(G_PASS, 0x2e4608u, 0x2bcf4cu, 0x2bcf54u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16);
    L_2bcf54:
        r.a0 = r.s0;                                             // 2bcf54 daddu $a0, $s0, $zero
        r.ra = 0x2bcf60u;                                        // 2bcf58 jal func_2E3768
        r.a1 = r.v0;                                             // 2bcf5c daddu $a1, $v0, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3768u, 0x2bcf58u, 0x2bcf60u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(1); LOAD_F(2); LOAD_F(20); LOAD_F(21); r.fcr31 = ctx->fcr31;
    L_2bcf60:
        if (lez64(r.v0))                                         // 2bcf60 blezl $v0, . + 4 + (0xA << 2)
        {
            r.f0 = LWC1(lo32(r.s2) + 0xb98u);                        // 2bcf64 lwc1 $f0, 0xB98($s2)
            goto L_2bcf8c;
        }
        r.f0 = floatOf(lo32(0u));                                // 2bcf68 mtc1 $zero, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f21)); // 2bcf6c c.lt.s $f0, $f21
        t = (r.fcr31 & kCondition) == 0u;                        // 2bcf74 bc1f . + 4 + (0x3 << 2)
        r.f0 = LWC1(lo32(r.s2) + 0xb98u);                        // 2bcf78 lwc1 $f0, 0xB98($s2)
        if (t) goto L_2bcf84;
        // 2bcf7c b . + 4 + (0x4 << 2)
        r.f0 = FPU_ADD_S(r.f0, r.f20);                           // 2bcf80 add.s $f0, $f0, $f20
        goto L_2bcf90;
    L_2bcf84:
        // 2bcf84 b . + 4 + (0x2 << 2)
        r.f0 = FPU_SUB_S(r.f0, r.f20);                           // 2bcf88 sub.s $f0, $f0, $f20
        goto L_2bcf90;
    L_2bcf8c:
        r.f0 = FPU_ADD_S(r.f0, r.f21);                           // 2bcf8c add.s $f0, $f0, $f21
    L_2bcf90:
        SWC1(lo32(r.s2) + 0xb98u, r.f0);                         // 2bcf90 swc1 $f0, 0xB98($s2)
        r.f0 = LWC1(lo32(r.s2) + 0xb98u);                        // 2bcf94 lwc1 $f0, 0xB98($s2)
        r.f20 = LWC1(lo32(r.gp) - 0x6fc8u);                      // 2bcf98 lwc1 $f20, -0x6FC8($gp)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f20)); // 2bcf9c c.lt.s $f0, $f20
        t = (r.fcr31 & kCondition) == 0u;                        // 2bcfa4 bc1f . + 4 + (0xB << 2)
        r.a0 = r.s3;                                             // 2bcfa8 daddu $a0, $s3, $zero
        if (t) goto L_2bcfd4;
        r.ra = 0x2bcfb4u;                                        // 2bcfac jal func_215820
        r.a1 = addiu(0u, 477);                                   // 2bcfb0 addiu $a1, $zero, 0x1DD
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2bcfacu, 0x2bcfb4u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(sp, 29); LOAD_F(1); LOAD_F(2); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2bcfb4:
        if (r.v0 != 0u)                                          // 2bcfb4 bnel $v0, $zero, . + 4 + (0x7 << 2)
        {
            SWC1(lo32(r.s2) + 0xb98u, r.f20);                        // 2bcfb8 swc1 $f20, 0xB98($s2)
            goto L_2bcfd4;
        }
        r.a0 = r.s3;                                             // 2bcfbc daddu $a0, $s3, $zero
        r.ra = 0x2bcfc8u;                                        // 2bcfc0 jal func_215820
        r.a1 = addiu(0u, 478);                                   // 2bcfc4 addiu $a1, $zero, 0x1DE
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bcfc0u, 0x2bcfc8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(sp, 29); LOAD_F(1); LOAD_F(2); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2bcfc8:
        if (r.v0 == 0u)                                          // 2bcfc8 beql $v0, $zero, . + 4 + (0x3 << 2)
        {
            r.f0 = LWC1(lo32(r.s3) + 0x50u);                         // 2bcfcc lwc1 $f0, 0x50($s3)
            goto L_2bcfd8;
        }
        SWC1(lo32(r.s2) + 0xb98u, r.f20);                        // 2bcfd0 swc1 $f20, 0xB98($s2)
    L_2bcfd4:
        r.f0 = LWC1(lo32(r.s3) + 0x50u);                         // 2bcfd4 lwc1 $f0, 0x50($s3)
    L_2bcfd8:
        SWC1(lo32(r.s2) + 0xb9cu, r.f0);                         // 2bcfd8 swc1 $f0, 0xB9C($s2)
        r.ra = READ64(lo32(r.sp) + 0x50u);                       // 2bcfdc ld $ra, 0x50($sp)
    L_2bcfe0:
        r.s3 = READ64(lo32(r.sp) + 0x40u);                       // 2bcfe0 ld $s3, 0x40($sp)
    L_2bcfe4:
        r.s2 = READ64(lo32(r.sp) + 0x30u);                       // 2bcfe4 ld $s2, 0x30($sp)
        r.s1 = READ64(lo32(r.sp) + 0x20u);                       // 2bcfe8 ld $s1, 0x20($sp)
        r.s0 = READ64(lo32(r.sp) + 0x10u);                       // 2bcfec ld $s0, 0x10($sp)
        r.f22 = LWC1(lo32(r.sp) + 0x70u);                        // 2bcff0 lwc1 $f22, 0x70($sp)
        r.f21 = LWC1(lo32(r.sp) + 0x68u);                        // 2bcff4 lwc1 $f21, 0x68($sp)
        r.f20 = LWC1(lo32(r.sp) + 0x60u);                        // 2bcff8 lwc1 $f20, 0x60($sp)
        jt = lo32(r.ra);                                         // 2bcffc jr $ra
        r.sp = addiu(r.sp, 128);                                 // 2bd000 addiu $sp, $sp, 0x80
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(20); STORE_F(21); STORE_F(22); ctx->fcr31 = r.fcr31;
        ctx->pc = jt;
        return;
    }

    // ---- moveTest (0x27d0c0)
    //
    // moveTest: a move tested against the walls, floors and props of the
    // rooms it crosses (the room and prop tests are calls).

    struct MoveTestRegs
    {
        uint64_t at, v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, s0, s1, s2, s3, s4, s5, s6, s7, gp, sp, fp, ra;
        float f0, f1, f2, f3, f4, f5, f6, f7, f8, f12, f13, f20, f21, f22, f23, f24, f25;
        uint32_t fcr31;
        uint64_t lo, hi;
    };

    // A level of moveTest_0x27d0c0: true when it returned to its caller, false when it
    // stopped (a yield, or the original took over below it).
    bool nativeMoveTestLevel(G_ARGS, uint32_t depth)
    {
        MoveTestRegs r;
        bool t;
        uint32_t jt;
        (void)t;
        (void)jt;
        LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_GPR(ra, 31); LOAD_F(12); LOAD_F(13); LOAD_F(20); LOAD_F(21); LOAD_F(22); LOAD_F(23); LOAD_F(24); LOAD_F(25); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
        r.sp = addiu(r.sp, -560);                                // 27d0c0 addiu $sp, $sp, -0x230
        r.v0 = addiu(0u, 4624);                                  // 27d0c4 addiu $v0, $zero, 0x1210
        WRITE32(lo32(r.sp) + 0x138u, lo32(r.a0));                // 27d0c8 sw $a0, 0x138($sp)
        WRITE64(lo32(r.sp) + 0x190u, r.s3);                      // 27d0cc sd $s3, 0x190($sp)
        r.v0 = mult(r.a0, r.v0, r.lo, r.hi);                     // 27d0d0 mult $v0, $a0, $v0
        WRITE64(lo32(r.sp) + 0x180u, r.s2);                      // 27d0d4 sd $s2, 0x180($sp)
        SWC1(lo32(r.sp) + 0x218u, r.f23);                        // 27d0d8 swc1 $f23, 0x218($sp)
        r.s2 = r.a1;                                             // 27d0dc daddu $s2, $a1, $zero
        SWC1(lo32(r.sp) + 0x210u, r.f22);                        // 27d0e0 swc1 $f22, 0x210($sp)
        r.s3 = r.a2;                                             // 27d0e4 daddu $s3, $a2, $zero
        SWC1(lo32(r.sp) + 0x208u, r.f21);                        // 27d0e8 swc1 $f21, 0x208($sp)
        r.a0 = addiu(0u, 1);                                     // 27d0ec addiu $a0, $zero, 0x1
        SWC1(lo32(r.sp) + 0x200u, r.f20);                        // 27d0f0 swc1 $f20, 0x200($sp)
        r.f21 = FPU_MOV_S(r.f13);                                // 27d0f4 mov.s $f21, $f13
        WRITE64(lo32(r.sp) + 0x1f0u, r.ra);                      // 27d0f8 sd $ra, 0x1F0($sp)
        r.f23 = FPU_MOV_S(r.f12);                                // 27d0fc mov.s $f23, $f12
        WRITE64(lo32(r.sp) + 0x1e0u, r.fp);                      // 27d100 sd $fp, 0x1E0($sp)
        r.f20 = FPU_MOV_S(r.f21);                                // 27d104 mov.s $f20, $f21
        WRITE64(lo32(r.sp) + 0x1d0u, r.s7);                      // 27d108 sd $s7, 0x1D0($sp)
        WRITE64(lo32(r.sp) + 0x1c0u, r.s6);                      // 27d10c sd $s6, 0x1C0($sp)
        WRITE64(lo32(r.sp) + 0x1b0u, r.s5);                      // 27d110 sd $s5, 0x1B0($sp)
        WRITE64(lo32(r.sp) + 0x1a0u, r.s4);                      // 27d114 sd $s4, 0x1A0($sp)
        WRITE64(lo32(r.sp) + 0x170u, r.s1);                      // 27d118 sd $s1, 0x170($sp)
        WRITE64(lo32(r.sp) + 0x160u, r.s0);                      // 27d11c sd $s0, 0x160($sp)
        SWC1(lo32(r.sp) + 0x228u, r.f25);                        // 27d120 swc1 $f25, 0x228($sp)
        SWC1(lo32(r.sp) + 0x220u, r.f24);                        // 27d124 swc1 $f24, 0x220($sp)
        r.v1 = LW(lo32(r.gp) - 0x4dc8u);                         // 27d128 lw $v1, -0x4DC8($gp)
        r.f25 = LWC1(lo32(r.s2) + 0x4u);                         // 27d12c lwc1 $f25, 0x4($s2)
        r.f24 = LWC1(lo32(r.s3) + 0x4u);                         // 27d130 lwc1 $f24, 0x4($s3)
        r.v1 = addu(r.v1, r.v0);                                 // 27d134 addu $v1, $v1, $v0
        WRITE32(lo32(r.sp) + 0x150u, lo32(r.v1));                // 27d138 sw $v1, 0x150($sp)
        WRITE32(lo32(r.sp) + 0x13cu, lo32(r.a3));                // 27d13c sw $a3, 0x13C($sp)
        r.at = sext32(0x3f800000u);                              // 27d140 lui $at, 0x3F80
        r.f22 = floatOf(lo32(r.at));                             // 27d144 mtc1 $at, $f22
        r.v0 = LW(lo32(r.v1) + 0x1194u);                         // 27d148 lw $v0, 0x1194($v1)
        r.v1 = addiu(0u, -1);                                    // 27d14c addiu $v1, $zero, -0x1
        WRITE32(lo32(r.sp) + 0x140u, lo32(r.t0));                // 27d150 sw $t0, 0x140($sp)
        WRITE32(lo32(r.sp) + 0x144u, lo32(r.t1));                // 27d154 sw $t1, 0x144($sp)
        WRITE32(lo32(r.sp) + 0x14cu, lo32(0u));                  // 27d158 sw $zero, 0x14C($sp)
        WRITE32(lo32(r.sp) + 0x158u, lo32(r.v1));                // 27d15c sw $v1, 0x158($sp)
        t = r.v0 != 0u;                                          // 27d160 bnez $v0, . + 4 + (0x11 << 2)
        WRITE32(lo32(r.sp) + 0x154u, lo32(r.a0));                // 27d164 sw $a0, 0x154($sp)
        if (t) goto L_27d1a8;
        r.f5 = LWC1(lo32(r.s3));                                 // 27d168 lwc1 $f5, 0x0($s3)
        r.f4 = LWC1(lo32(r.s2));                                 // 27d16c lwc1 $f4, 0x0($s2)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f5, r.f4)); // 27d170 c.eq.s $f5, $f4
        t = (r.fcr31 & kCondition) == 0u;                        // 27d178 bc1f . + 4 + (0xE << 2)
        r.f3 = LWC1(lo32(r.s3) + 0x8u);                          // 27d17c lwc1 $f3, 0x8($s3)
        if (t) goto L_27d1b4;
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f24, r.f25)); // 27d180 c.eq.s $f24, $f25
        if ((r.fcr31 & kCondition) == 0u) goto L_27d1b4;         // 27d184 bc1f . + 4 + (0xB << 2)
        r.f2 = LWC1(lo32(r.s2) + 0x8u);                          // 27d18c lwc1 $f2, 0x8($s2)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f3, r.f2)); // 27d190 c.eq.s $f3, $f2
        if ((r.fcr31 & kCondition) != 0u)                        // 27d198 bc1tl . + 4 + (0x7 << 2)
        {
            WRITE32(lo32(r.sp) + 0x154u, lo32(0u));                  // 27d19c sw $zero, 0x154($sp)
            goto L_27d1b8;
        }
        // 27d1a0 b . + 4 + (0x6 << 2)
        r.f0 = FPU_SUB_S(r.f5, r.f4);                            // 27d1a4 sub.s $f0, $f5, $f4
        goto L_27d1bc;
    L_27d1a8:
        r.f5 = LWC1(lo32(r.s3));                                 // 27d1a8 lwc1 $f5, 0x0($s3)
        r.f4 = LWC1(lo32(r.s2));                                 // 27d1ac lwc1 $f4, 0x0($s2)
        r.f3 = LWC1(lo32(r.s3) + 0x8u);                          // 27d1b0 lwc1 $f3, 0x8($s3)
    L_27d1b4:
        r.f2 = LWC1(lo32(r.s2) + 0x8u);                          // 27d1b4 lwc1 $f2, 0x8($s2)
    L_27d1b8:
        r.f0 = FPU_SUB_S(r.f5, r.f4);                            // 27d1b8 sub.s $f0, $f5, $f4
    L_27d1bc:
        r.f1 = FPU_SUB_S(r.f3, r.f2);                            // 27d1bc sub.s $f1, $f3, $f2
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f4, r.f5)); // 27d1c0 c.lt.s $f4, $f5
        SWC1(lo32(r.sp) + 0x10u, r.f0);                          // 27d1c4 swc1 $f0, 0x10($sp)
        t = (r.fcr31 & kCondition) == 0u;                        // 27d1c8 bc1f . + 4 + (0x4 << 2)
        SWC1(lo32(r.sp) + 0x14u, r.f1);                          // 27d1cc swc1 $f1, 0x14($sp)
        if (t) goto L_27d1dc;
        r.f0 = FPU_SUB_S(r.f4, r.f21);                           // 27d1d0 sub.s $f0, $f4, $f21
        // 27d1d4 b . + 4 + (0x3 << 2)
        r.f1 = FPU_ADD_S(r.f5, r.f21);                           // 27d1d8 add.s $f1, $f5, $f21
        goto L_27d1e4;
    L_27d1dc:
        r.f0 = FPU_SUB_S(r.f5, r.f21);                           // 27d1dc sub.s $f0, $f5, $f21
        r.f1 = FPU_ADD_S(r.f4, r.f21);                           // 27d1e0 add.s $f1, $f4, $f21
    L_27d1e4:
        SWC1(lo32(r.sp) + 0x20u, r.f0);                          // 27d1e4 swc1 $f0, 0x20($sp)
        SWC1(lo32(r.sp) + 0x2cu, r.f1);                          // 27d1e8 swc1 $f1, 0x2C($sp)
        r.f0 = FPU_ADD_S(r.f25, r.f23);                          // 27d1ec add.s $f0, $f25, $f23
        SWC1(lo32(r.sp) + 0x24u, r.f25);                         // 27d1f0 swc1 $f25, 0x24($sp)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f2, r.f3)); // 27d1f4 c.lt.s $f2, $f3
        t = (r.fcr31 & kCondition) == 0u;                        // 27d1fc bc1f . + 4 + (0x4 << 2)
        SWC1(lo32(r.sp) + 0x30u, r.f0);                          // 27d200 swc1 $f0, 0x30($sp)
        if (t) goto L_27d210;
        r.f0 = FPU_SUB_S(r.f2, r.f21);                           // 27d204 sub.s $f0, $f2, $f21
        // 27d208 b . + 4 + (0x3 << 2)
        r.f1 = FPU_ADD_S(r.f3, r.f21);                           // 27d20c add.s $f1, $f3, $f21
        goto L_27d218;
    L_27d210:
        r.f0 = FPU_SUB_S(r.f3, r.f21);                           // 27d210 sub.s $f0, $f3, $f21
        r.f1 = FPU_ADD_S(r.f2, r.f21);                           // 27d214 add.s $f1, $f2, $f21
    L_27d218:
        SWC1(lo32(r.sp) + 0x28u, r.f0);                          // 27d218 swc1 $f0, 0x28($sp)
        SWC1(lo32(r.sp) + 0x34u, r.f1);                          // 27d21c swc1 $f1, 0x34($sp)
        r.v0 = LW(lo32(r.sp) + 0x154u);                          // 27d220 lw $v0, 0x154($sp)
        t = r.v0 == 0u;                                          // 27d224 beqz $v0, . + 4 + (0x3F << 2)
        r.v1 = addiu(r.sp, 80);                                  // 27d228 addiu $v1, $sp, 0x50
        if (t) goto L_27d324;
        r.s4 = addiu(r.sp, 32);                                  // 27d22c addiu $s4, $sp, 0x20
        WRITE32(lo32(r.sp) + 0x15cu, lo32(r.v1));                // 27d230 sw $v1, 0x15C($sp)
        r.a0 = r.s4;                                             // 27d234 daddu $a0, $s4, $zero
        r.a1 = r.v1;                                             // 27d238 daddu $a1, $v1, $zero
        r.ra = 0x27d244u;                                        // 27d23c jal func_2572B0
        r.a2 = addiu(0u, 20);                                    // 27d240 addiu $a2, $zero, 0x14
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(20); STORE_F(21); STORE_F(22); STORE_F(23); STORE_F(24); STORE_F(25); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2572b0u, 0x27d23cu, 0x27d244u)) return false;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s0, 16); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(20); LOAD_F(21); LOAD_F(22); LOAD_F(23); LOAD_F(24); LOAD_F(25); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_27d244:
        r.s1 = 0u;                                               // 27d244 daddu $s1, $zero, $zero
        t = lez64(r.v0);                                         // 27d248 blez $v0, . + 4 + (0x39 << 2)
        WRITE32(lo32(r.sp) + 0x148u, lo32(r.v0));                // 27d24c sw $v0, 0x148($sp)
        if (t) goto L_27d330;
        r.fp = addiu(r.sp, 288);                                 // 27d250 addiu $fp, $sp, 0x120
        r.s7 = addiu(r.sp, 192);                                 // 27d254 addiu $s7, $sp, 0xC0
        r.s6 = addiu(r.sp, 292);                                 // 27d258 addiu $s6, $sp, 0x124
        r.s5 = addiu(r.sp, 208);                                 // 27d25c addiu $s5, $sp, 0xD0
        r.s0 = sll32(r.s1, 2);                                   // 27d260 sll $s0, $s1, 2
    L_27d268:
        r.s0 = addu(r.s0, r.sp);                                 // 27d268 addu $s0, $s0, $sp
        r.s0 = addiu(r.s0, 80);                                  // 27d26c addiu $s0, $s0, 0x50
        r.ra = 0x27d278u;                                        // 27d270 jal func_257608
        r.a0 = LW(lo32(r.s0));                                   // 27d274 lw $a0, 0x0($s0)
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(20); STORE_F(22); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x257608u, 0x27d270u, 0x27d278u)) return false;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16); LOAD_GPR(s2, 18); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(21); LOAD_F(23);
    L_27d278:
        r.v1 = LW(lo32(r.s0));                                   // 27d278 lw $v1, 0x0($s0)
        r.a0 = r.v0;                                             // 27d27c daddu $a0, $v0, $zero
        r.v0 = LW(lo32(r.gp) - 0x5d90u);                         // 27d280 lw $v0, -0x5D90($gp)
        r.a2 = addiu(r.sp, 32);                                  // 27d284 addiu $a2, $sp, 0x20
        r.v1 = sll32(r.v1, 2);                                   // 27d288 sll $v1, $v1, 2
        r.a3 = r.s2;                                             // 27d28c daddu $a3, $s2, $zero
        r.v1 = addu(r.v1, r.v0);                                 // 27d290 addu $v1, $v1, $v0
        r.f12 = FPU_MOV_S(r.f21);                                // 27d294 mov.s $f12, $f21
        r.a1 = LW(lo32(r.v1));                                   // 27d298 lw $a1, 0x0($v1)
        r.f13 = FPU_MOV_S(r.f23);                                // 27d29c mov.s $f13, $f23
        r.t0 = addiu(r.sp, 16);                                  // 27d2a0 addiu $t0, $sp, 0x10
        r.t1 = r.fp;                                             // 27d2a4 daddu $t1, $fp, $zero
        r.v0 = LW(lo32(r.a1) + 0x20u);                           // 27d2a8 lw $v0, 0x20($a1)
        r.t2 = r.s7;                                             // 27d2ac daddu $t2, $s7, $zero
        r.t3 = r.s6;                                             // 27d2b0 daddu $t3, $s6, $zero
        r.a1 = LHU(lo32(r.v0) + 0x124u);                         // 27d2b4 lhu $a1, 0x124($v0)
        r.ra = 0x27d2c0u;                                        // 27d2b8 jal func_27CCE0
        WRITE32(lo32(r.sp), lo32(r.s5));                         // 27d2bc sw $s5, 0x0($sp)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x27cce0u, 0x27d2b8u, 0x27d2c0u)) return false;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(20); LOAD_F(21); LOAD_F(22); LOAD_F(23); LOAD_F(24); LOAD_F(25); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_27d2c0:
        r.f0 = LWC1(lo32(r.sp) + 0x124u);                        // 27d2c0 lwc1 $f0, 0x124($sp)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f20)); // 27d2c4 c.lt.s $f0, $f20
        t = (r.fcr31 & kCondition) == 0u;                        // 27d2cc bc1f . + 4 + (0x5 << 2)
        r.f1 = LWC1(lo32(r.sp) + 0xd0u);                         // 27d2d0 lwc1 $f1, 0xD0($sp)
        if (t) goto L_27d2e4;
        r.f20 = FPU_MOV_S(r.f0);                                 // 27d2d4 mov.s $f20, $f0
        r.f0 = LWC1(lo32(r.sp) + 0xd4u);                         // 27d2d8 lwc1 $f0, 0xD4($sp)
        SWC1(lo32(r.sp) + 0xb0u, r.f1);                          // 27d2dc swc1 $f1, 0xB0($sp)
        SWC1(lo32(r.sp) + 0xb4u, r.f0);                          // 27d2e0 swc1 $f0, 0xB4($sp)
    L_27d2e4:
        r.f0 = LWC1(lo32(r.sp) + 0x120u);                        // 27d2e4 lwc1 $f0, 0x120($sp)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f22)); // 27d2e8 c.lt.s $f0, $f22
        t = (r.fcr31 & kCondition) == 0u;                        // 27d2f0 bc1f . + 4 + (0x5 << 2)
        r.f1 = LWC1(lo32(r.sp) + 0xc0u);                         // 27d2f4 lwc1 $f1, 0xC0($sp)
        if (t) goto L_27d308;
        r.f22 = FPU_MOV_S(r.f0);                                 // 27d2f8 mov.s $f22, $f0
        r.f0 = LWC1(lo32(r.sp) + 0xc4u);                         // 27d2fc lwc1 $f0, 0xC4($sp)
        SWC1(lo32(r.sp) + 0x40u, r.f1);                          // 27d300 swc1 $f1, 0x40($sp)
        SWC1(lo32(r.sp) + 0x44u, r.f0);                          // 27d304 swc1 $f0, 0x44($sp)
    L_27d308:
        r.a0 = LW(lo32(r.sp) + 0x148u);                          // 27d308 lw $a0, 0x148($sp)
        r.s1 = addiu(r.s1, 1);                                   // 27d30c addiu $s1, $s1, 0x1
        r.v0 = slt(r.s1, r.a0);                                  // 27d310 slt $v0, $s1, $a0
        t = r.v0 != 0u;                                          // 27d314 bnez $v0, . + 4 + (-0x2C << 2)
        r.s0 = sll32(r.s1, 2);                                   // 27d318 sll $s0, $s1, 2
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x27d268u)) { STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_F(0); STORE_F(1); STORE_F(20); STORE_F(22); ctx->fcr31 = r.fcr31; return false; }
            goto L_27d268;
        }
        // 27d31c b . + 4 + (0x5 << 2)
        r.a1 = LW(lo32(r.sp) + 0x15cu);                          // 27d320 lw $a1, 0x15C($sp)
        goto L_27d334;
    L_27d324:
        r.v0 = addiu(r.sp, 80);                                  // 27d324 addiu $v0, $sp, 0x50
        r.s4 = addiu(r.sp, 32);                                  // 27d328 addiu $s4, $sp, 0x20
        WRITE32(lo32(r.sp) + 0x15cu, lo32(r.v0));                // 27d32c sw $v0, 0x15C($sp)
    L_27d330:
        r.a1 = LW(lo32(r.sp) + 0x15cu);                          // 27d330 lw $a1, 0x15C($sp)
    L_27d334:
        r.a0 = r.s4;                                             // 27d334 daddu $a0, $s4, $zero
        r.a2 = addiu(0u, 20);                                    // 27d338 addiu $a2, $zero, 0x14
        r.ra = 0x27d344u;                                        // 27d33c jal func_2571C8
        r.s1 = 0u;                                               // 27d340 daddu $s1, $zero, $zero
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(20); STORE_F(21); STORE_F(22); STORE_F(23); STORE_F(24); STORE_F(25); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2571c8u, 0x27d33cu, 0x27d344u)) return false;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(20); LOAD_F(21); LOAD_F(22); LOAD_F(23); LOAD_F(24); LOAD_F(25); r.fcr31 = ctx->fcr31;
    L_27d344:
        t = lez64(r.v0);                                         // 27d344 blez $v0, . + 4 + (0x54 << 2)
        WRITE32(lo32(r.sp) + 0x148u, lo32(r.v0));                // 27d348 sw $v0, 0x148($sp)
        if (t) goto L_27d498;
        r.fp = addiu(r.sp, 296);                                 // 27d34c addiu $fp, $sp, 0x128
        r.s7 = addiu(r.sp, 224);                                 // 27d350 addiu $s7, $sp, 0xE0
        r.s6 = addiu(r.sp, 300);                                 // 27d354 addiu $s6, $sp, 0x12C
        r.s5 = addiu(r.sp, 240);                                 // 27d358 addiu $s5, $sp, 0xF0
        r.v1 = LW(lo32(r.sp) + 0x154u);                          // 27d35c lw $v1, 0x154($sp)
    L_27d360:
        t = r.v1 == 0u;                                          // 27d360 beqz $v1, . + 4 + (0x24 << 2)
        r.a0 = LW(lo32(r.sp) + 0x15cu);                          // 27d364 lw $a0, 0x15C($sp)
        if (t) goto L_27d3f4;
        r.s0 = sll32(r.s1, 2);                                   // 27d368 sll $s0, $s1, 2
        WRITE32(lo32(r.sp), lo32(r.s5));                         // 27d36c sw $s5, 0x0($sp)
        r.a2 = r.s4;                                             // 27d370 daddu $a2, $s4, $zero
        WRITE32(lo32(r.sp) + 0x8u, lo32(0u));                    // 27d374 sw $zero, 0x8($sp)
        r.v0 = addu(r.a0, r.s0);                                 // 27d378 addu $v0, $a0, $s0
        r.a0 = LW(lo32(r.sp) + 0x138u);                          // 27d37c lw $a0, 0x138($sp)
        r.a3 = r.s2;                                             // 27d380 daddu $a3, $s2, $zero
        r.a1 = LW(lo32(r.v0));                                   // 27d384 lw $a1, 0x0($v0)
        r.f12 = FPU_MOV_S(r.f21);                                // 27d388 mov.s $f12, $f21
        r.f13 = FPU_MOV_S(r.f23);                                // 27d38c mov.s $f13, $f23
        r.t0 = addiu(r.sp, 16);                                  // 27d390 addiu $t0, $sp, 0x10
        r.t1 = r.fp;                                             // 27d394 daddu $t1, $fp, $zero
        r.t2 = r.s7;                                             // 27d398 daddu $t2, $s7, $zero
        r.ra = 0x27d3a4u;                                        // 27d39c jal func_270E08
        r.t3 = r.s6;                                             // 27d3a0 daddu $t3, $s6, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(13); STORE_F(20); STORE_F(22); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x270e08u, 0x27d39cu, 0x27d3a4u)) return false;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(20); LOAD_F(21); LOAD_F(22); LOAD_F(23); r.fcr31 = ctx->fcr31;
    L_27d3a4:
        r.f0 = LWC1(lo32(r.sp) + 0x12cu);                        // 27d3a4 lwc1 $f0, 0x12C($sp)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f20)); // 27d3a8 c.lt.s $f0, $f20
        t = (r.fcr31 & kCondition) == 0u;                        // 27d3b0 bc1f . + 4 + (0x5 << 2)
        r.f1 = LWC1(lo32(r.sp) + 0xf0u);                         // 27d3b4 lwc1 $f1, 0xF0($sp)
        if (t) goto L_27d3c8;
        r.f20 = FPU_MOV_S(r.f0);                                 // 27d3b8 mov.s $f20, $f0
        r.f0 = LWC1(lo32(r.sp) + 0xf4u);                         // 27d3bc lwc1 $f0, 0xF4($sp)
        SWC1(lo32(r.sp) + 0xb0u, r.f1);                          // 27d3c0 swc1 $f1, 0xB0($sp)
        SWC1(lo32(r.sp) + 0xb4u, r.f0);                          // 27d3c4 swc1 $f0, 0xB4($sp)
    L_27d3c8:
        r.f0 = LWC1(lo32(r.sp) + 0x128u);                        // 27d3c8 lwc1 $f0, 0x128($sp)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f22)); // 27d3cc c.lt.s $f0, $f22
        t = (r.fcr31 & kCondition) == 0u;                        // 27d3d4 bc1f . + 4 + (0x8 << 2)
        r.f1 = LWC1(lo32(r.sp) + 0xe0u);                         // 27d3d8 lwc1 $f1, 0xE0($sp)
        if (t) goto L_27d3f8;
        r.f22 = FPU_MOV_S(r.f0);                                 // 27d3dc mov.s $f22, $f0
        r.f0 = LWC1(lo32(r.sp) + 0xe4u);                         // 27d3e0 lwc1 $f0, 0xE4($sp)
        WRITE32(lo32(r.sp) + 0x158u, lo32(r.v0));                // 27d3e4 sw $v0, 0x158($sp)
        SWC1(lo32(r.sp) + 0x40u, r.f1);                          // 27d3e8 swc1 $f1, 0x40($sp)
        // 27d3ec b . + 4 + (0x2 << 2)
        SWC1(lo32(r.sp) + 0x44u, r.f0);                          // 27d3f0 swc1 $f0, 0x44($sp)
        goto L_27d3f8;
    L_27d3f4:
        r.s0 = sll32(r.s1, 2);                                   // 27d3f4 sll $s0, $s1, 2
    L_27d3f8:
        r.v0 = addiu(0u, 1);                                     // 27d3f8 addiu $v0, $zero, 0x1
        WRITE32(lo32(r.sp), lo32(r.s5));                         // 27d3fc sw $s5, 0x0($sp)
        WRITE32(lo32(r.sp) + 0x8u, lo32(r.v0));                  // 27d400 sw $v0, 0x8($sp)
        r.a2 = r.s4;                                             // 27d404 daddu $a2, $s4, $zero
        r.v0 = LW(lo32(r.sp) + 0x15cu);                          // 27d408 lw $v0, 0x15C($sp)
        r.a3 = r.s2;                                             // 27d40c daddu $a3, $s2, $zero
        r.a0 = LW(lo32(r.sp) + 0x138u);                          // 27d410 lw $a0, 0x138($sp)
        r.f12 = FPU_MOV_S(r.f21);                                // 27d414 mov.s $f12, $f21
        r.v1 = addu(r.v0, r.s0);                                 // 27d418 addu $v1, $v0, $s0
        r.f13 = FPU_MOV_S(r.f23);                                // 27d41c mov.s $f13, $f23
        r.a1 = LW(lo32(r.v1));                                   // 27d420 lw $a1, 0x0($v1)
        r.t0 = addiu(r.sp, 16);                                  // 27d424 addiu $t0, $sp, 0x10
        r.t1 = r.fp;                                             // 27d428 daddu $t1, $fp, $zero
        r.t2 = r.s7;                                             // 27d42c daddu $t2, $s7, $zero
        r.ra = 0x27d438u;                                        // 27d430 jal func_270E08
        r.t3 = r.s6;                                             // 27d434 daddu $t3, $s6, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(13); STORE_F(20); STORE_F(22); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x270e08u, 0x27d430u, 0x27d438u)) return false;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(20); LOAD_F(21); LOAD_F(22); LOAD_F(23); LOAD_F(24); LOAD_F(25); r.fcr31 = ctx->fcr31;
    L_27d438:
        r.f0 = LWC1(lo32(r.sp) + 0x12cu);                        // 27d438 lwc1 $f0, 0x12C($sp)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f20)); // 27d43c c.lt.s $f0, $f20
        t = (r.fcr31 & kCondition) == 0u;                        // 27d444 bc1f . + 4 + (0x5 << 2)
        r.f1 = LWC1(lo32(r.sp) + 0xf0u);                         // 27d448 lwc1 $f1, 0xF0($sp)
        if (t) goto L_27d45c;
        r.f20 = FPU_MOV_S(r.f0);                                 // 27d44c mov.s $f20, $f0
        r.f0 = LWC1(lo32(r.sp) + 0xf4u);                         // 27d450 lwc1 $f0, 0xF4($sp)
        SWC1(lo32(r.sp) + 0xb0u, r.f1);                          // 27d454 swc1 $f1, 0xB0($sp)
        SWC1(lo32(r.sp) + 0xb4u, r.f0);                          // 27d458 swc1 $f0, 0xB4($sp)
    L_27d45c:
        r.f0 = LWC1(lo32(r.sp) + 0x128u);                        // 27d45c lwc1 $f0, 0x128($sp)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f22)); // 27d460 c.lt.s $f0, $f22
        t = (r.fcr31 & kCondition) == 0u;                        // 27d468 bc1f . + 4 + (0x6 << 2)
        r.f1 = LWC1(lo32(r.sp) + 0xe0u);                         // 27d46c lwc1 $f1, 0xE0($sp)
        if (t) goto L_27d484;
        r.f22 = FPU_MOV_S(r.f0);                                 // 27d470 mov.s $f22, $f0
        r.f0 = LWC1(lo32(r.sp) + 0xe4u);                         // 27d474 lwc1 $f0, 0xE4($sp)
        WRITE32(lo32(r.sp) + 0x158u, lo32(r.v0));                // 27d478 sw $v0, 0x158($sp)
        SWC1(lo32(r.sp) + 0x40u, r.f1);                          // 27d47c swc1 $f1, 0x40($sp)
        SWC1(lo32(r.sp) + 0x44u, r.f0);                          // 27d480 swc1 $f0, 0x44($sp)
    L_27d484:
        r.v1 = LW(lo32(r.sp) + 0x148u);                          // 27d484 lw $v1, 0x148($sp)
        r.s1 = addiu(r.s1, 1);                                   // 27d488 addiu $s1, $s1, 0x1
        r.v0 = slt(r.s1, r.v1);                                  // 27d48c slt $v0, $s1, $v1
        t = r.v0 != 0u;                                          // 27d490 bnez $v0, . + 4 + (-0x4D << 2)
        r.v1 = LW(lo32(r.sp) + 0x154u);                          // 27d494 lw $v1, 0x154($sp)
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x27d360u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(s1, 17); STORE_F(0); STORE_F(1); STORE_F(20); STORE_F(22); ctx->fcr31 = r.fcr31; return false; }
            goto L_27d360;
        }
    L_27d498:
        r.at = sext32(0x3f800000u);                              // 27d498 lui $at, 0x3F80
        r.f0 = floatOf(lo32(r.at));                              // 27d49c mtc1 $at, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f22, r.f0)); // 27d4a0 c.lt.s $f22, $f0
        t = (r.fcr31 & kCondition) != 0u;                        // 27d4a8 bc1t . + 4 + (0x5 << 2)
        r.a0 = addiu(0u, 2);                                     // 27d4ac addiu $a0, $zero, 0x2
        if (t) goto L_27d4c0;
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f20, r.f21)); // 27d4b0 c.lt.s $f20, $f21
        if ((r.fcr31 & kCondition) == 0u)                        // 27d4b8 bc1fl . + 4 + (0x111 << 2)
        {
            r.a0 = LW(lo32(r.sp) + 0x144u);                          // 27d4bc lw $a0, 0x144($sp)
            goto L_27d900;
        }
    L_27d4c0:
        r.v0 = LW(lo32(r.sp) + 0x144u);                          // 27d4c0 lw $v0, 0x144($sp)
        t = r.v0 == 0u;                                          // 27d4c4 beqz $v0, . + 4 + (0x4 << 2)
        WRITE32(lo32(r.sp) + 0x14cu, lo32(r.a0));                // 27d4c8 sw $a0, 0x14C($sp)
        if (t) goto L_27d4d8;
        r.v1 = LW(lo32(r.sp) + 0x150u);                          // 27d4cc lw $v1, 0x150($sp)
        r.v0 = addiu(0u, 1);                                     // 27d4d0 addiu $v0, $zero, 0x1
        WRITE32(lo32(r.v1) + 0x1194u, lo32(r.v0));               // 27d4d4 sw $v0, 0x1194($v1)
    L_27d4d8:
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f22, r.f0)); // 27d4d8 c.lt.s $f22, $f0
        t = (r.fcr31 & kCondition) == 0u;                        // 27d4e0 bc1f . + 4 + (0x2 << 2)
        r.a0 = addiu(0u, 6);                                     // 27d4e4 addiu $a0, $zero, 0x6
        if (t) goto L_27d4ec;
        WRITE32(lo32(r.sp) + 0x14cu, lo32(r.a0));                // 27d4e8 sw $a0, 0x14C($sp)
    L_27d4ec:
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f20, r.f21)); // 27d4ec c.lt.s $f20, $f21
        t = (r.fcr31 & kCondition) == 0u;                        // 27d4f4 bc1f . + 4 + (0x3 << 2)
        r.v0 = LW(lo32(r.sp) + 0x14cu);                          // 27d4f8 lw $v0, 0x14C($sp)
        if (t) goto L_27d504;
        r.v0 = r.v0 | 0x8u;                                      // 27d4fc ori $v0, $v0, 0x8
        WRITE32(lo32(r.sp) + 0x14cu, lo32(r.v0));                // 27d500 sw $v0, 0x14C($sp)
    L_27d504:
        r.v1 = LW(lo32(r.sp) + 0x13cu);                          // 27d504 lw $v1, 0x13C($sp)
        t = r.v1 == 0u;                                          // 27d508 beqz $v1, . + 4 + (0xCA << 2)
        r.v0 = LW(lo32(r.sp) + 0x14cu);                          // 27d50c lw $v0, 0x14C($sp)
        if (t) goto L_27d834;
        r.v1 = r.v0 & 0xcu;                                      // 27d510 andi $v1, $v0, 0xC
        r.v0 = addiu(0u, 8);                                     // 27d514 addiu $v0, $zero, 0x8
        t = r.v1 != r.v0;                                        // 27d518 bne $v1, $v0, . + 4 + (0xF << 2)
        r.a0 = addiu(0u, 1);                                     // 27d51c addiu $a0, $zero, 0x1
        if (t) goto L_27d558;
        r.f1 = LWC1(lo32(r.sp) + 0x10u);                         // 27d520 lwc1 $f1, 0x10($sp)
        r.f2 = LWC1(lo32(r.sp) + 0xb0u);                         // 27d524 lwc1 $f2, 0xB0($sp)
        r.f0 = LWC1(lo32(r.sp) + 0x14u);                         // 27d528 lwc1 $f0, 0x14($sp)
        r.f3 = LWC1(lo32(r.sp) + 0xb4u);                         // 27d52c lwc1 $f3, 0xB4($sp)
        r.f1 = FPU_MUL_S(r.f1, r.f2);                            // 27d530 mul.s $f1, $f1, $f2
        r.f4 = floatOf(lo32(0u));                                // 27d534 mtc1 $zero, $f4
        r.f0 = FPU_MUL_S(r.f0, r.f3);                            // 27d538 mul.s $f0, $f0, $f3
        r.f1 = FPU_ADD_S(r.f1, r.f0);                            // 27d53c add.s $f1, $f1, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f4)); // 27d540 c.lt.s $f1, $f4
        if ((r.fcr31 & kCondition) == 0u) goto L_27d558;         // 27d544 bc1f . + 4 + (0x4 << 2)
        SWC1(lo32(r.sp) + 0x40u, r.f2);                          // 27d54c swc1 $f2, 0x40($sp)
        r.f22 = FPU_MOV_S(r.f4);                                 // 27d550 mov.s $f22, $f4
        SWC1(lo32(r.sp) + 0x44u, r.f3);                          // 27d554 swc1 $f3, 0x44($sp)
    L_27d558:
        t = r.v1 == 0u;                                          // 27d558 beqz $v1, . + 4 + (0x29 << 2)
        r.f6 = LWC1(lo32(r.sp) + 0x40u);                         // 27d55c lwc1 $f6, 0x40($sp)
        if (t) goto L_27d600;
        r.f3 = LWC1(lo32(r.sp) + 0x44u);                         // 27d560 lwc1 $f3, 0x44($sp)
        r.f2 = FPU_NEG_S(r.f6);                                  // 27d564 neg.s $f2, $f6
        r.f1 = LWC1(lo32(r.sp) + 0x10u);                         // 27d568 lwc1 $f1, 0x10($sp)
        r.f0 = LWC1(lo32(r.sp) + 0x14u);                         // 27d56c lwc1 $f0, 0x14($sp)
        r.f1 = FPU_MUL_S(r.f1, r.f3);                            // 27d570 mul.s $f1, $f1, $f3
        SWC1(lo32(r.sp) + 0x100u, r.f3);                         // 27d574 swc1 $f3, 0x100($sp)
        r.f0 = FPU_MUL_S(r.f0, r.f2);                            // 27d578 mul.s $f0, $f0, $f2
        r.f5 = floatOf(lo32(0u));                                // 27d57c mtc1 $zero, $f5
        r.f4 = FPU_ADD_S(r.f1, r.f0);                            // 27d580 add.s $f4, $f1, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f4, r.f5)); // 27d584 c.lt.s $f4, $f5
        t = (r.fcr31 & kCondition) == 0u;                        // 27d58c bc1f . + 4 + (0x5 << 2)
        SWC1(lo32(r.sp) + 0x104u, r.f2);                         // 27d590 swc1 $f2, 0x104($sp)
        if (t) goto L_27d5a4;
        r.f0 = FPU_NEG_S(r.f3);                                  // 27d594 neg.s $f0, $f3
        SWC1(lo32(r.sp) + 0x104u, r.f6);                         // 27d598 swc1 $f6, 0x104($sp)
        r.f4 = FPU_NEG_S(r.f4);                                  // 27d59c neg.s $f4, $f4
        SWC1(lo32(r.sp) + 0x100u, r.f0);                         // 27d5a0 swc1 $f0, 0x100($sp)
    L_27d5a4:
        r.f3 = LWC1(lo32(r.sp) + 0x100u);                        // 27d5a4 lwc1 $f3, 0x100($sp)
        r.f2 = LWC1(lo32(r.sp) + 0x104u);                        // 27d5a8 lwc1 $f2, 0x104($sp)
        r.f1 = FPU_MUL_S(r.f3, r.f3);                            // 27d5ac mul.s $f1, $f3, $f3
        r.f0 = FPU_MUL_S(r.f2, r.f2);                            // 27d5b0 mul.s $f0, $f2, $f2
        r.f1 = FPU_ADD_S(r.f1, r.f0);                            // 27d5b4 add.s $f1, $f1, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f5, r.f1)); // 27d5b8 c.lt.s $f5, $f1
        if ((r.fcr31 & kCondition) == 0u)                        // 27d5c0 bc1fl . + 4 + (0xD << 2)
        {
            SWC1(lo32(r.sp) + 0x100u, r.f5);                         // 27d5c4 swc1 $f5, 0x100($sp)
            goto L_27d5f8;
        }
        r.at = sext32(0x3f800000u);                              // 27d5c8 lui $at, 0x3F80
        r.f0 = floatOf(lo32(r.at));                              // 27d5cc mtc1 $at, $f0
        r.f0 = FPU_SUB_S(r.f0, r.f22);                           // 27d5d0 sub.s $f0, $f0, $f22
        r.f0 = FPU_MUL_S(r.f0, r.f4);                            // 27d5d4 mul.s $f0, $f0, $f4
        r.f0 = divS(r.f0, r.f1, r.fcr31);                        // 27d5e0 div.s $f0, $f0, $f1
        r.f1 = FPU_MUL_S(r.f2, r.f0);                            // 27d5e4 mul.s $f1, $f2, $f0
        r.f0 = FPU_MUL_S(r.f3, r.f0);                            // 27d5e8 mul.s $f0, $f3, $f0
        SWC1(lo32(r.sp) + 0x104u, r.f1);                         // 27d5ec swc1 $f1, 0x104($sp)
        // 27d5f0 b . + 4 + (0x6 << 2)
        SWC1(lo32(r.sp) + 0x100u, r.f0);                         // 27d5f4 swc1 $f0, 0x100($sp)
        goto L_27d60c;
    L_27d5f8:
        // 27d5f8 b . + 4 + (0x4 << 2)
        SWC1(lo32(r.sp) + 0x104u, r.f5);                         // 27d5fc swc1 $f5, 0x104($sp)
        goto L_27d60c;
    L_27d600:
        r.f0 = floatOf(lo32(0u));                                // 27d600 mtc1 $zero, $f0
        SWC1(lo32(r.sp) + 0x100u, r.f0);                         // 27d604 swc1 $f0, 0x100($sp)
        SWC1(lo32(r.sp) + 0x104u, r.f0);                         // 27d608 swc1 $f0, 0x104($sp)
    L_27d60c:
        r.v0 = addiu(0u, 12);                                    // 27d60c addiu $v0, $zero, 0xC
        if (r.v1 != r.v0)                                        // 27d610 bnel $v1, $v0, . + 4 + (0x24 << 2)
        {
            r.v1 = LW(lo32(r.sp) + 0x14cu);                          // 27d614 lw $v1, 0x14C($sp)
            goto L_27d6a4;
        }
        r.f1 = LWC1(lo32(r.sp) + 0x40u);                         // 27d618 lwc1 $f1, 0x40($sp)
        r.f4 = LWC1(lo32(r.sp) + 0xb0u);                         // 27d61c lwc1 $f4, 0xB0($sp)
        r.f0 = LWC1(lo32(r.sp) + 0x44u);                         // 27d620 lwc1 $f0, 0x44($sp)
        r.f3 = LWC1(lo32(r.sp) + 0xb4u);                         // 27d624 lwc1 $f3, 0xB4($sp)
        r.f1 = FPU_MUL_S(r.f1, r.f4);                            // 27d628 mul.s $f1, $f1, $f4
        r.f2 = floatOf(lo32(0u));                                // 27d62c mtc1 $zero, $f2
        r.f0 = FPU_MUL_S(r.f0, r.f3);                            // 27d630 mul.s $f0, $f0, $f3
        r.f1 = FPU_ADD_S(r.f1, r.f0);                            // 27d634 add.s $f1, $f1, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f1, r.f2)); // 27d638 c.le.s $f1, $f2
        t = (r.fcr31 & kCondition) == 0u;                        // 27d640 bc1f . + 4 + (0x17 << 2)
        r.f1 = LWC1(lo32(r.sp) + 0x100u);                        // 27d644 lwc1 $f1, 0x100($sp)
        if (t) goto L_27d6a0;
        r.f0 = LWC1(lo32(r.sp) + 0x104u);                        // 27d648 lwc1 $f0, 0x104($sp)
        r.f1 = FPU_MUL_S(r.f1, r.f4);                            // 27d64c mul.s $f1, $f1, $f4
        r.f0 = FPU_MUL_S(r.f0, r.f3);                            // 27d650 mul.s $f0, $f0, $f3
        r.f1 = FPU_ADD_S(r.f1, r.f0);                            // 27d654 add.s $f1, $f1, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f1, r.f2)); // 27d658 c.le.s $f1, $f2
        t = (r.fcr31 & kCondition) == 0u;                        // 27d660 bc1f . + 4 + (0xC << 2)
        r.v1 = LW(lo32(r.sp) + 0x13cu);                          // 27d664 lw $v1, 0x13C($sp)
        if (t) goto L_27d694;
        r.f0 = LWC1(lo32(r.s2));                                 // 27d668 lwc1 $f0, 0x0($s2)
        r.a0 = 0u;                                               // 27d66c daddu $a0, $zero, $zero
        SWC1(lo32(r.v1), r.f0);                                  // 27d670 swc1 $f0, 0x0($v1)
        SWC1(lo32(r.s3), r.f0);                                  // 27d674 swc1 $f0, 0x0($s3)
        r.f1 = LWC1(lo32(r.s2) + 0x4u);                          // 27d678 lwc1 $f1, 0x4($s2)
        SWC1(lo32(r.v1) + 0x4u, r.f1);                           // 27d67c swc1 $f1, 0x4($v1)
        SWC1(lo32(r.s3) + 0x4u, r.f1);                           // 27d680 swc1 $f1, 0x4($s3)
        r.f0 = LWC1(lo32(r.s2) + 0x8u);                          // 27d684 lwc1 $f0, 0x8($s2)
        SWC1(lo32(r.v1) + 0x8u, r.f0);                           // 27d688 swc1 $f0, 0x8($v1)
        // 27d68c b . + 4 + (0x2A << 2)
        SWC1(lo32(r.s3) + 0x8u, r.f0);                           // 27d690 swc1 $f0, 0x8($s3)
        goto L_27d738;
    L_27d694:
        SWC1(lo32(r.sp) + 0x110u, r.f2);                         // 27d694 swc1 $f2, 0x110($sp)
        // 27d698 b . + 4 + (0x27 << 2)
        SWC1(lo32(r.sp) + 0x114u, r.f2);                         // 27d69c swc1 $f2, 0x114($sp)
        goto L_27d738;
    L_27d6a0:
        r.v1 = LW(lo32(r.sp) + 0x14cu);                          // 27d6a0 lw $v1, 0x14C($sp)
    L_27d6a4:
        r.v0 = r.v1 & 0x8u;                                      // 27d6a4 andi $v0, $v1, 0x8
        t = r.v0 == 0u;                                          // 27d6a8 beqz $v0, . + 4 + (0x20 << 2)
        r.f7 = LWC1(lo32(r.gp) - 0x4b98u);                       // 27d6ac lwc1 $f7, -0x4B98($gp)
        if (t) goto L_27d72c;
        r.f0 = FPU_SUB_S(r.f21, r.f20);                          // 27d6b0 sub.s $f0, $f21, $f20
        r.at = sext32(0x40800000u);                              // 27d6b4 lui $at, 0x4080
        r.f6 = floatOf(lo32(r.at));                              // 27d6b8 mtc1 $at, $f6
        r.at = sext32(0x42700000u);                              // 27d6bc lui $at, 0x4270
        r.f8 = floatOf(lo32(r.at));                              // 27d6c0 mtc1 $at, $f8
        r.f0 = divS(r.f0, r.f21, r.fcr31);                       // 27d6cc div.s $f0, $f0, $f21
        r.f5 = LWC1(lo32(r.sp) + 0xb0u);                         // 27d6d0 lwc1 $f5, 0xB0($sp)
        r.f3 = LWC1(lo32(r.sp) + 0xb4u);                         // 27d6d4 lwc1 $f3, 0xB4($sp)
        r.f1 = LWC1(lo32(r.sp) + 0x10u);                         // 27d6d8 lwc1 $f1, 0x10($sp)
        r.f2 = LWC1(lo32(r.sp) + 0x14u);                         // 27d6dc lwc1 $f2, 0x14($sp)
        r.f4 = LWC1(lo32(r.gp) - 0x7848u);                       // 27d6e0 lwc1 $f4, -0x7848($gp)
        r.f1 = FPU_MUL_S(r.f1, r.f5);                            // 27d6e4 mul.s $f1, $f1, $f5
        r.f2 = FPU_MUL_S(r.f2, r.f3);                            // 27d6e8 mul.s $f2, $f2, $f3
        r.f0 = FPU_MUL_S(r.f0, r.f6);                            // 27d6ec mul.s $f0, $f0, $f6
        r.f6 = floatOf(lo32(0u));                                // 27d6f0 mtc1 $zero, $f6
        r.f1 = FPU_ADD_S(r.f1, r.f2);                            // 27d6f4 add.s $f1, $f1, $f2
        r.f0 = FPU_MUL_S(r.f0, r.f7);                            // 27d6f8 mul.s $f0, $f0, $f7
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f6)); // 27d6fc c.lt.s $f1, $f6
        r.f0 = divS(r.f0, r.f8, r.fcr31);                        // 27d708 div.s $f0, $f0, $f8
        r.f0 = FPU_ADD_S(r.f0, r.f4);                            // 27d70c add.s $f0, $f0, $f4
        r.f3 = FPU_MUL_S(r.f0, r.f3);                            // 27d710 mul.s $f3, $f0, $f3
        r.f0 = FPU_MUL_S(r.f0, r.f5);                            // 27d714 mul.s $f0, $f0, $f5
        SWC1(lo32(r.sp) + 0x114u, r.f3);                         // 27d718 swc1 $f3, 0x114($sp)
        t = (r.fcr31 & kCondition) == 0u;                        // 27d71c bc1f . + 4 + (0x6 << 2)
        SWC1(lo32(r.sp) + 0x110u, r.f0);                         // 27d720 swc1 $f0, 0x110($sp)
        if (t) goto L_27d738;
        // 27d724 b . + 4 + (0x4 << 2)
        r.f22 = FPU_MOV_S(r.f6);                                 // 27d728 mov.s $f22, $f6
        goto L_27d738;
    L_27d72c:
        r.f0 = floatOf(lo32(0u));                                // 27d72c mtc1 $zero, $f0
        SWC1(lo32(r.sp) + 0x110u, r.f0);                         // 27d730 swc1 $f0, 0x110($sp)
        SWC1(lo32(r.sp) + 0x114u, r.f0);                         // 27d734 swc1 $f0, 0x114($sp)
    L_27d738:
        t = r.a0 == 0u;                                          // 27d738 beqz $a0, . + 4 + (0x7D << 2)
        r.a0 = LW(lo32(r.sp) + 0x14cu);                          // 27d73c lw $a0, 0x14C($sp)
        if (t) goto L_27d930;
        r.v0 = r.a0 & 0x4u;                                      // 27d740 andi $v0, $a0, 0x4
        t = r.v0 == 0u;                                          // 27d744 beqz $v0, . + 4 + (0x17 << 2)
        r.f1 = LWC1(lo32(r.sp) + 0x10u);                         // 27d748 lwc1 $f1, 0x10($sp)
        if (t) goto L_27d7a4;
        r.f0 = LWC1(lo32(r.s2));                                 // 27d74c lwc1 $f0, 0x0($s2)
        r.f1 = FPU_MUL_S(r.f22, r.f1);                           // 27d750 mul.s $f1, $f22, $f1
        r.f2 = LWC1(lo32(r.sp) + 0x40u);                         // 27d754 lwc1 $f2, 0x40($sp)
        r.f5 = LWC1(lo32(r.gp) - 0x7844u);                       // 27d758 lwc1 $f5, -0x7844($gp)
        r.f6 = LWC1(lo32(r.sp) + 0x110u);                        // 27d75c lwc1 $f6, 0x110($sp)
        r.f0 = FPU_ADD_S(r.f0, r.f1);                            // 27d760 add.s $f0, $f0, $f1
        r.f4 = LWC1(lo32(r.sp) + 0x14u);                         // 27d764 lwc1 $f4, 0x14($sp)
        r.f2 = FPU_MUL_S(r.f2, r.f5);                            // 27d768 mul.s $f2, $f2, $f5
        r.f3 = LWC1(lo32(r.sp) + 0x44u);                         // 27d76c lwc1 $f3, 0x44($sp)
        r.f7 = LWC1(lo32(r.sp) + 0x114u);                        // 27d770 lwc1 $f7, 0x114($sp)
        r.f4 = FPU_MUL_S(r.f22, r.f4);                           // 27d774 mul.s $f4, $f22, $f4
        r.f3 = FPU_MUL_S(r.f3, r.f5);                            // 27d778 mul.s $f3, $f3, $f5
        r.f0 = FPU_ADD_S(r.f0, r.f2);                            // 27d77c add.s $f0, $f0, $f2
        r.f0 = FPU_ADD_S(r.f0, r.f6);                            // 27d780 add.s $f0, $f0, $f6
        SWC1(lo32(r.s3), r.f0);                                  // 27d784 swc1 $f0, 0x0($s3)
        r.f1 = LWC1(lo32(r.s2) + 0x4u);                          // 27d788 lwc1 $f1, 0x4($s2)
        SWC1(lo32(r.s3) + 0x4u, r.f1);                           // 27d78c swc1 $f1, 0x4($s3)
        r.f0 = LWC1(lo32(r.s2) + 0x8u);                          // 27d790 lwc1 $f0, 0x8($s2)
        r.f0 = FPU_ADD_S(r.f0, r.f4);                            // 27d794 add.s $f0, $f0, $f4
        r.f0 = FPU_ADD_S(r.f0, r.f3);                            // 27d798 add.s $f0, $f0, $f3
        // 27d79c b . + 4 + (0xF << 2)
        r.f0 = FPU_ADD_S(r.f0, r.f7);                            // 27d7a0 add.s $f0, $f0, $f7
        goto L_27d7dc;
    L_27d7a4:
        r.f0 = LWC1(lo32(r.s2));                                 // 27d7a4 lwc1 $f0, 0x0($s2)
        r.f1 = FPU_MUL_S(r.f22, r.f1);                           // 27d7a8 mul.s $f1, $f22, $f1
        r.f3 = LWC1(lo32(r.sp) + 0x110u);                        // 27d7ac lwc1 $f3, 0x110($sp)
        r.f2 = LWC1(lo32(r.sp) + 0x14u);                         // 27d7b0 lwc1 $f2, 0x14($sp)
        r.f4 = LWC1(lo32(r.sp) + 0x114u);                        // 27d7b4 lwc1 $f4, 0x114($sp)
        r.f0 = FPU_ADD_S(r.f0, r.f1);                            // 27d7b8 add.s $f0, $f0, $f1
        r.f2 = FPU_MUL_S(r.f22, r.f2);                           // 27d7bc mul.s $f2, $f22, $f2
        r.f0 = FPU_ADD_S(r.f0, r.f3);                            // 27d7c0 add.s $f0, $f0, $f3
        SWC1(lo32(r.s3), r.f0);                                  // 27d7c4 swc1 $f0, 0x0($s3)
        r.f1 = LWC1(lo32(r.s2) + 0x4u);                          // 27d7c8 lwc1 $f1, 0x4($s2)
        SWC1(lo32(r.s3) + 0x4u, r.f1);                           // 27d7cc swc1 $f1, 0x4($s3)
        r.f0 = LWC1(lo32(r.s2) + 0x8u);                          // 27d7d0 lwc1 $f0, 0x8($s2)
        r.f0 = FPU_ADD_S(r.f0, r.f2);                            // 27d7d4 add.s $f0, $f0, $f2
        r.f0 = FPU_ADD_S(r.f0, r.f4);                            // 27d7d8 add.s $f0, $f0, $f4
    L_27d7dc:
        SWC1(lo32(r.s3) + 0x8u, r.f0);                           // 27d7dc swc1 $f0, 0x8($s3)
        r.a0 = LW(lo32(r.sp) + 0x138u);                          // 27d7e0 lw $a0, 0x138($sp)
        r.a1 = r.s2;                                             // 27d7e4 daddu $a1, $s2, $zero
        r.a2 = r.s3;                                             // 27d7e8 daddu $a2, $s3, $zero
        r.f12 = FPU_MOV_S(r.f23);                                // 27d7ec mov.s $f12, $f23
        r.f13 = FPU_MOV_S(r.f21);                                // 27d7f0 mov.s $f13, $f21
        r.a3 = 0u;                                               // 27d7f4 daddu $a3, $zero, $zero
        r.t0 = 0u;                                               // 27d7f8 daddu $t0, $zero, $zero
        r.ra = 0x27d804u;                                        // 27d7fc jal func_27D0C0
        r.t1 = 0u;                                               // 27d800 daddu $t1, $zero, $zero
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(s1, 17); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(12); STORE_F(13); STORE_F(20); STORE_F(22); ctx->fcr31 = r.fcr31;
        ctx->pc = 0x27d0c0u;
        if (depth >= kSelfCallDepth) { moveTest_0x27d0c0(G_PASS); return false; }
        if (!nativeMoveTestLevel(G_PASS, depth + 1u) || ctx->pc != 0x27d804u) return false;
        LOAD_GPR(at, 1); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(20); LOAD_F(21); LOAD_F(22); LOAD_F(23); LOAD_F(24); LOAD_F(25); r.fcr31 = ctx->fcr31;
    L_27d804:
        r.f1 = LWC1(lo32(r.sp) + 0x100u);                        // 27d804 lwc1 $f1, 0x100($sp)
        r.f0 = LWC1(lo32(r.s3));                                 // 27d808 lwc1 $f0, 0x0($s3)
        r.v0 = LW(lo32(r.sp) + 0x13cu);                          // 27d80c lw $v0, 0x13C($sp)
        r.f0 = FPU_ADD_S(r.f0, r.f1);                            // 27d810 add.s $f0, $f0, $f1
        r.f2 = LWC1(lo32(r.sp) + 0x104u);                        // 27d814 lwc1 $f2, 0x104($sp)
        SWC1(lo32(r.v0), r.f0);                                  // 27d818 swc1 $f0, 0x0($v0)
        r.f1 = LWC1(lo32(r.s3) + 0x4u);                          // 27d81c lwc1 $f1, 0x4($s3)
        SWC1(lo32(r.v0) + 0x4u, r.f1);                           // 27d820 swc1 $f1, 0x4($v0)
        r.f0 = LWC1(lo32(r.s3) + 0x8u);                          // 27d824 lwc1 $f0, 0x8($s3)
        r.f0 = FPU_ADD_S(r.f0, r.f2);                            // 27d828 add.s $f0, $f0, $f2
        // 27d82c b . + 4 + (0x40 << 2)
        SWC1(lo32(r.v0) + 0x8u, r.f0);                           // 27d830 swc1 $f0, 0x8($v0)
        goto L_27d930;
    L_27d834:
        r.a0 = LW(lo32(r.sp) + 0x14cu);                          // 27d834 lw $a0, 0x14C($sp)
        r.v0 = addiu(0u, 12);                                    // 27d838 addiu $v0, $zero, 0xC
        r.v1 = r.a0 & 0xcu;                                      // 27d83c andi $v1, $a0, 0xC
        t = r.v1 != r.v0;                                        // 27d840 bne $v1, $v0, . + 4 + (0xE << 2)
        r.v1 = LW(lo32(r.sp) + 0x14cu);                          // 27d844 lw $v1, 0x14C($sp)
        if (t) goto L_27d87c;
        r.f1 = LWC1(lo32(r.sp) + 0x40u);                         // 27d848 lwc1 $f1, 0x40($sp)
        r.f2 = LWC1(lo32(r.sp) + 0xb0u);                         // 27d84c lwc1 $f2, 0xB0($sp)
        r.f0 = LWC1(lo32(r.sp) + 0x44u);                         // 27d850 lwc1 $f0, 0x44($sp)
        r.f3 = LWC1(lo32(r.sp) + 0xb4u);                         // 27d854 lwc1 $f3, 0xB4($sp)
        r.f1 = FPU_MUL_S(r.f1, r.f2);                            // 27d858 mul.s $f1, $f1, $f2
        r.f4 = floatOf(lo32(0u));                                // 27d85c mtc1 $zero, $f4
        r.f0 = FPU_MUL_S(r.f0, r.f3);                            // 27d860 mul.s $f0, $f0, $f3
        r.f1 = FPU_ADD_S(r.f1, r.f0);                            // 27d864 add.s $f1, $f1, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f1, r.f4)); // 27d868 c.le.s $f1, $f4
        if ((r.fcr31 & kCondition) != 0u)                        // 27d870 bc1tl . + 4 + (0x11 << 2)
        {
            r.f0 = LWC1(lo32(r.s2));                                 // 27d874 lwc1 $f0, 0x0($s2)
            goto L_27d8b8;
        }
        r.v1 = LW(lo32(r.sp) + 0x14cu);                          // 27d878 lw $v1, 0x14C($sp)
    L_27d87c:
        r.v0 = r.v1 & 0x8u;                                      // 27d87c andi $v0, $v1, 0x8
        t = r.v0 == 0u;                                          // 27d880 beqz $v0, . + 4 + (0x13 << 2)
        r.f3 = LWC1(lo32(r.sp) + 0x10u);                         // 27d884 lwc1 $f3, 0x10($sp)
        if (t) goto L_27d8d0;
        r.f0 = LWC1(lo32(r.sp) + 0xb0u);                         // 27d888 lwc1 $f0, 0xB0($sp)
        r.f4 = LWC1(lo32(r.sp) + 0x14u);                         // 27d88c lwc1 $f4, 0x14($sp)
        r.f1 = LWC1(lo32(r.sp) + 0xb4u);                         // 27d890 lwc1 $f1, 0xB4($sp)
        r.f0 = FPU_MUL_S(r.f3, r.f0);                            // 27d894 mul.s $f0, $f3, $f0
        r.f2 = floatOf(lo32(0u));                                // 27d898 mtc1 $zero, $f2
        r.f1 = FPU_MUL_S(r.f4, r.f1);                            // 27d89c mul.s $f1, $f4, $f1
        r.f0 = FPU_ADD_S(r.f0, r.f1);                            // 27d8a0 add.s $f0, $f0, $f1
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f2)); // 27d8a4 c.lt.s $f0, $f2
        if ((r.fcr31 & kCondition) == 0u)                        // 27d8ac bc1fl . + 4 + (0xA << 2)
        {
            r.f1 = FPU_MUL_S(r.f22, r.f3);                           // 27d8b0 mul.s $f1, $f22, $f3
            goto L_27d8d8;
        }
        r.f0 = LWC1(lo32(r.s2));                                 // 27d8b4 lwc1 $f0, 0x0($s2)
    L_27d8b8:
        SWC1(lo32(r.s3), r.f0);                                  // 27d8b8 swc1 $f0, 0x0($s3)
        r.f1 = LWC1(lo32(r.s2) + 0x4u);                          // 27d8bc lwc1 $f1, 0x4($s2)
        SWC1(lo32(r.s3) + 0x4u, r.f1);                           // 27d8c0 swc1 $f1, 0x4($s3)
        r.f0 = LWC1(lo32(r.s2) + 0x8u);                          // 27d8c4 lwc1 $f0, 0x8($s2)
        // 27d8c8 b . + 4 + (0x19 << 2)
        SWC1(lo32(r.s3) + 0x8u, r.f0);                           // 27d8cc swc1 $f0, 0x8($s3)
        goto L_27d930;
    L_27d8d0:
        r.f4 = LWC1(lo32(r.sp) + 0x14u);                         // 27d8d0 lwc1 $f4, 0x14($sp)
        r.f1 = FPU_MUL_S(r.f22, r.f3);                           // 27d8d4 mul.s $f1, $f22, $f3
    L_27d8d8:
        r.f0 = LWC1(lo32(r.s2));                                 // 27d8d8 lwc1 $f0, 0x0($s2)
        r.f2 = FPU_MUL_S(r.f22, r.f4);                           // 27d8dc mul.s $f2, $f22, $f4
        r.f0 = FPU_ADD_S(r.f0, r.f1);                            // 27d8e0 add.s $f0, $f0, $f1
        SWC1(lo32(r.s3), r.f0);                                  // 27d8e4 swc1 $f0, 0x0($s3)
        r.f1 = LWC1(lo32(r.s2) + 0x4u);                          // 27d8e8 lwc1 $f1, 0x4($s2)
        SWC1(lo32(r.s3) + 0x4u, r.f1);                           // 27d8ec swc1 $f1, 0x4($s3)
        r.f0 = LWC1(lo32(r.s2) + 0x8u);                          // 27d8f0 lwc1 $f0, 0x8($s2)
        r.f0 = FPU_ADD_S(r.f0, r.f2);                            // 27d8f4 add.s $f0, $f0, $f2
        // 27d8f8 b . + 4 + (0xD << 2)
        SWC1(lo32(r.s3) + 0x8u, r.f0);                           // 27d8fc swc1 $f0, 0x8($s3)
        goto L_27d930;
    L_27d900:
        t = r.a0 == 0u;                                          // 27d900 beqz $a0, . + 4 + (0x2 << 2)
        r.v0 = LW(lo32(r.sp) + 0x150u);                          // 27d904 lw $v0, 0x150($sp)
        if (t) goto L_27d90c;
        WRITE32(lo32(r.v0) + 0x1194u, lo32(0u));                 // 27d908 sw $zero, 0x1194($v0)
    L_27d90c:
        r.v1 = LW(lo32(r.sp) + 0x13cu);                          // 27d90c lw $v1, 0x13C($sp)
        t = r.v1 == 0u;                                          // 27d910 beqz $v1, . + 4 + (0x8 << 2)
        r.a0 = LW(lo32(r.sp) + 0x154u);                          // 27d914 lw $a0, 0x154($sp)
        if (t) goto L_27d934;
        r.f0 = LWC1(lo32(r.s3));                                 // 27d918 lwc1 $f0, 0x0($s3)
        SWC1(lo32(r.v1), r.f0);                                  // 27d91c swc1 $f0, 0x0($v1)
        r.f1 = LWC1(lo32(r.s3) + 0x4u);                          // 27d920 lwc1 $f1, 0x4($s3)
        SWC1(lo32(r.v1) + 0x4u, r.f1);                           // 27d924 swc1 $f1, 0x4($v1)
        r.f0 = LWC1(lo32(r.s3) + 0x8u);                          // 27d928 lwc1 $f0, 0x8($s3)
        SWC1(lo32(r.v1) + 0x8u, r.f0);                           // 27d92c swc1 $f0, 0x8($v1)
    L_27d930:
        r.a0 = LW(lo32(r.sp) + 0x154u);                          // 27d930 lw $a0, 0x154($sp)
    L_27d934:
        t = r.a0 == 0u;                                          // 27d934 beqz $a0, . + 4 + (0x10 << 2)
        r.v0 = LW(lo32(r.sp) + 0x144u);                          // 27d938 lw $v0, 0x144($sp)
        if (t) goto L_27d978;
        t = r.v0 == 0u;                                          // 27d93c beqz $v0, . + 4 + (0xE << 2)
        r.v1 = LW(lo32(r.sp) + 0x148u);                          // 27d940 lw $v1, 0x148($sp)
        if (t) goto L_27d978;
        t = lez64(r.v1);                                         // 27d944 blez $v1, . + 4 + (0xC << 2)
        r.s0 = LW(lo32(r.sp) + 0x15cu);                          // 27d948 lw $s0, 0x15C($sp)
        if (t) goto L_27d978;
        r.s1 = r.v1;                                             // 27d94c daddu $s1, $v1, $zero
    L_27d950:
        r.a1 = LW(lo32(r.s0));                                   // 27d950 lw $a1, 0x0($s0)
        r.a2 = r.s2;                                             // 27d954 daddu $a2, $s2, $zero
        r.a0 = LW(lo32(r.sp) + 0x138u);                          // 27d958 lw $a0, 0x138($sp)
        r.a3 = r.s3;                                             // 27d95c daddu $a3, $s3, $zero
        r.f12 = FPU_MOV_S(r.f23);                                // 27d960 mov.s $f12, $f23
        r.ra = 0x27d96cu;                                        // 27d964 jal func_259BF0
        r.f13 = FPU_MOV_S(r.f21);                                // 27d968 mov.s $f13, $f21
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(12); STORE_F(13); STORE_F(20); STORE_F(22); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x259bf0u, 0x27d964u, 0x27d96cu)) return false;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(20); LOAD_F(21); LOAD_F(22); LOAD_F(23); LOAD_F(24); LOAD_F(25); r.fcr31 = ctx->fcr31;
    L_27d96c:
        r.s1 = addiu(r.s1, -1);                                  // 27d96c addiu $s1, $s1, -0x1
        t = r.s1 != 0u;                                          // 27d970 bnez $s1, . + 4 + (-0x9 << 2)
        r.s0 = addiu(r.s0, 4);                                   // 27d974 addiu $s0, $s0, 0x4
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x27d950u)) { STORE_GPR(s0, 16); STORE_GPR(s1, 17); return false; }
            goto L_27d950;
        }
    L_27d978:
        r.s0 = LW(lo32(r.sp) + 0x13cu);                          // 27d978 lw $s0, 0x13C($sp)
        r.v0 = addiu(0u, 1);                                     // 27d97c addiu $v0, $zero, 0x1
        r.f1 = LWC1(lo32(r.s2));                                 // 27d980 lwc1 $f1, 0x0($s2)
        r.a0 = r.s0;                                             // 27d984 daddu $a0, $s0, $zero
        if (r.a0 == 0u) { r.s0 = r.s3; copyHigh(ctx, 16, 19); }  // 27d988 movz $s0, $s3, $a0
        r.f0 = LWC1(lo32(r.s0));                                 // 27d98c lwc1 $f0, 0x0($s0)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f0, r.f1)); // 27d990 c.eq.s $f0, $f1
        t = (r.fcr31 & kCondition) == 0u;                        // 27d998 bc1f . + 4 + (0x7 << 2)
        WRITE32(lo32(r.sp) + 0x154u, lo32(r.v0));                // 27d99c sw $v0, 0x154($sp)
        if (t) goto L_27d9b8;
        r.f1 = LWC1(lo32(r.s0) + 0x8u);                          // 27d9a0 lwc1 $f1, 0x8($s0)
        r.f0 = LWC1(lo32(r.s2) + 0x8u);                          // 27d9a4 lwc1 $f0, 0x8($s2)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f1, r.f0)); // 27d9a8 c.eq.s $f1, $f0
        if ((r.fcr31 & kCondition) != 0u)                        // 27d9b0 bc1tl . + 4 + (0x1 << 2)
        {
            WRITE32(lo32(r.sp) + 0x154u, lo32(0u));                  // 27d9b4 sw $zero, 0x154($sp)
            goto L_27d9b8;
        }
    L_27d9b8:
        r.v1 = LW(lo32(r.sp) + 0x154u);                          // 27d9b8 lw $v1, 0x154($sp)
        if (r.v1 != 0u)                                          // 27d9bc bnel $v1, $zero, . + 4 + (0x15 << 2)
        {
            SWC1(lo32(r.s0) + 0x4u, r.f25);                          // 27d9c0 swc1 $f25, 0x4($s0)
            goto L_27da14;
        }
        r.a0 = LW(lo32(r.sp) + 0x150u);                          // 27d9c4 lw $a0, 0x150($sp)
        r.f0 = LWC1(lo32(r.s2) + 0x4u);                          // 27d9c8 lwc1 $f0, 0x4($s2)
        r.f2 = LWC1(lo32(r.a0) + 0x1198u);                       // 27d9cc lwc1 $f2, 0x1198($a0)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f2, r.f0)); // 27d9d0 c.le.s $f2, $f0
        if ((r.fcr31 & kCondition) == 0u)                        // 27d9d8 bc1fl . + 4 + (0xE << 2)
        {
            SWC1(lo32(r.s0) + 0x4u, r.f25);                          // 27d9dc swc1 $f25, 0x4($s0)
            goto L_27da14;
        }
        SWC1(lo32(r.s0) + 0x4u, r.f2);                           // 27d9e0 swc1 $f2, 0x4($s0)
        r.v0 = LW(lo32(r.sp) + 0x140u);                          // 27d9e4 lw $v0, 0x140($sp)
        t = r.v0 == 0u;                                          // 27d9e8 beqz $v0, . + 4 + (0x3 << 2)
        r.v1 = LW(lo32(r.sp) + 0x140u);                          // 27d9ec lw $v1, 0x140($sp)
        if (t) goto L_27d9f8;
        r.v0 = LW(lo32(r.a0) + 0x119cu);                         // 27d9f0 lw $v0, 0x119C($a0)
        WRITE32(lo32(r.v1), lo32(r.v0));                         // 27d9f4 sw $v0, 0x0($v1)
    L_27d9f8:
        r.f0 = LWC1(lo32(r.s0) + 0x4u);                          // 27d9f8 lwc1 $f0, 0x4($s0)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f24)); // 27d9fc c.lt.s $f0, $f24
        if ((r.fcr31 & kCondition) != 0u)                        // 27da04 bc1tl . + 4 + (0x20 << 2)
        {
            SWC1(lo32(r.s0) + 0x4u, r.f24);                          // 27da08 swc1 $f24, 0x4($s0)
            goto L_27da88;
        }
        // 27da0c b . + 4 + (0x1C << 2)
        r.a0 = LW(lo32(r.sp) + 0x14cu);                          // 27da10 lw $a0, 0x14C($sp)
        goto L_27da80;
    L_27da14:
        r.f13 = FPU_MOV_S(r.f21);                                // 27da14 mov.s $f13, $f21
        r.f12 = LWC1(lo32(r.gp) - 0x7840u);                      // 27da18 lwc1 $f12, -0x7840($gp)
        r.a0 = r.s0;                                             // 27da1c daddu $a0, $s0, $zero
        r.a1 = addiu(r.sp, 304);                                 // 27da20 addiu $a1, $sp, 0x130
        r.ra = 0x27da2cu;                                        // 27da24 jal func_27C9F0
        r.a2 = addiu(r.sp, 308);                                 // 27da28 addiu $a2, $sp, 0x134
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(12); STORE_F(13); STORE_F(20); STORE_F(22); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x27c9f0u, 0x27da24u, 0x27da2cu)) return false;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s0, 16); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(24); r.fcr31 = ctx->fcr31;
    L_27da2c:
        SWC1(lo32(r.s0) + 0x4u, r.f0);                           // 27da2c swc1 $f0, 0x4($s0)
        r.v0 = LW(lo32(r.sp) + 0x144u);                          // 27da30 lw $v0, 0x144($sp)
        t = r.v0 == 0u;                                          // 27da34 beqz $v0, . + 4 + (0x6 << 2)
        r.v0 = LW(lo32(r.sp) + 0x130u);                          // 27da38 lw $v0, 0x130($sp)
        if (t) goto L_27da50;
        r.v1 = LW(lo32(r.sp) + 0x134u);                          // 27da3c lw $v1, 0x134($sp)
        r.a0 = LW(lo32(r.sp) + 0x150u);                          // 27da40 lw $a0, 0x150($sp)
        SWC1(lo32(r.a0) + 0x1198u, r.f0);                        // 27da44 swc1 $f0, 0x1198($a0)
        WRITE32(lo32(r.a0) + 0x119cu, lo32(r.v0));               // 27da48 sw $v0, 0x119C($a0)
        WRITE32(lo32(r.a0) + 0x11a0u, lo32(r.v1));               // 27da4c sw $v1, 0x11A0($a0)
    L_27da50:
        r.v0 = LW(lo32(r.sp) + 0x140u);                          // 27da50 lw $v0, 0x140($sp)
        t = r.v0 == 0u;                                          // 27da54 beqz $v0, . + 4 + (0x3 << 2)
        r.v0 = LW(lo32(r.sp) + 0x130u);                          // 27da58 lw $v0, 0x130($sp)
        if (t) goto L_27da64;
        r.v1 = LW(lo32(r.sp) + 0x140u);                          // 27da5c lw $v1, 0x140($sp)
        WRITE32(lo32(r.v1), lo32(r.v0));                         // 27da60 sw $v0, 0x0($v1)
    L_27da64:
        r.f0 = LWC1(lo32(r.s0) + 0x4u);                          // 27da64 lwc1 $f0, 0x4($s0)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f24)); // 27da68 c.lt.s $f0, $f24
        t = (r.fcr31 & kCondition) == 0u;                        // 27da70 bc1f . + 4 + (0x3 << 2)
        r.a0 = LW(lo32(r.sp) + 0x14cu);                          // 27da74 lw $a0, 0x14C($sp)
        if (t) goto L_27da80;
        // 27da78 b . + 4 + (0x3 << 2)
        SWC1(lo32(r.s0) + 0x4u, r.f24);                          // 27da7c swc1 $f24, 0x4($s0)
        goto L_27da88;
    L_27da80:
        r.a0 = r.a0 | 0x1u;                                      // 27da80 ori $a0, $a0, 0x1
        WRITE32(lo32(r.sp) + 0x14cu, lo32(r.a0));                // 27da84 sw $a0, 0x14C($sp)
    L_27da88:
        r.f0 = LWC1(lo32(r.sp) + 0x40u);                         // 27da88 lwc1 $f0, 0x40($sp)
        r.f1 = LWC1(lo32(r.sp) + 0x44u);                         // 27da8c lwc1 $f1, 0x44($sp)
        r.v0 = LW(lo32(r.sp) + 0x158u);                          // 27da90 lw $v0, 0x158($sp)
        SWC1(lo32(r.gp) - 0x46d8u, r.f0);                        // 27da94 swc1 $f0, -0x46D8($gp)
        SWC1(lo32(r.gp) - 0x46d4u, r.f1);                        // 27da98 swc1 $f1, -0x46D4($gp)
        t = neg64(r.v0);                                         // 27da9c bltz $v0, . + 4 + (0x6 << 2)
        r.a0 = LW(lo32(r.sp) + 0x158u);                          // 27daa0 lw $a0, 0x158($sp)
        if (t) goto L_27dab8;
        r.v0 = addiu(0u, 1);                                     // 27daa4 addiu $v0, $zero, 0x1
        r.v1 = LW(lo32(r.sp) + 0x150u);                          // 27daa8 lw $v1, 0x150($sp)
        WRITE32(lo32(r.v1) + 0x11bcu, lo32(r.a0));               // 27daac sw $a0, 0x11BC($v1)
        // 27dab0 b . + 4 + (0x3 << 2)
        WRITE32(lo32(r.v1) + 0x11b8u, lo32(r.v0));               // 27dab4 sw $v0, 0x11B8($v1)
        goto L_27dac0;
    L_27dab8:
        r.v0 = LW(lo32(r.sp) + 0x150u);                          // 27dab8 lw $v0, 0x150($sp)
        WRITE32(lo32(r.v0) + 0x11b8u, lo32(0u));                 // 27dabc sw $zero, 0x11B8($v0)
    L_27dac0:
        r.v0 = LW(lo32(r.sp) + 0x14cu);                          // 27dac0 lw $v0, 0x14C($sp)
        r.ra = READ64(lo32(r.sp) + 0x1f0u);                      // 27dac4 ld $ra, 0x1F0($sp)
        r.fp = READ64(lo32(r.sp) + 0x1e0u);                      // 27dac8 ld $fp, 0x1E0($sp)
        r.s7 = READ64(lo32(r.sp) + 0x1d0u);                      // 27dacc ld $s7, 0x1D0($sp)
        r.s6 = READ64(lo32(r.sp) + 0x1c0u);                      // 27dad0 ld $s6, 0x1C0($sp)
        r.s5 = READ64(lo32(r.sp) + 0x1b0u);                      // 27dad4 ld $s5, 0x1B0($sp)
        r.s4 = READ64(lo32(r.sp) + 0x1a0u);                      // 27dad8 ld $s4, 0x1A0($sp)
        r.s3 = READ64(lo32(r.sp) + 0x190u);                      // 27dadc ld $s3, 0x190($sp)
        r.s2 = READ64(lo32(r.sp) + 0x180u);                      // 27dae0 ld $s2, 0x180($sp)
        r.s1 = READ64(lo32(r.sp) + 0x170u);                      // 27dae4 ld $s1, 0x170($sp)
        r.s0 = READ64(lo32(r.sp) + 0x160u);                      // 27dae8 ld $s0, 0x160($sp)
        r.f25 = LWC1(lo32(r.sp) + 0x228u);                       // 27daec lwc1 $f25, 0x228($sp)
        r.f24 = LWC1(lo32(r.sp) + 0x220u);                       // 27daf0 lwc1 $f24, 0x220($sp)
        r.f23 = LWC1(lo32(r.sp) + 0x218u);                       // 27daf4 lwc1 $f23, 0x218($sp)
        r.f22 = LWC1(lo32(r.sp) + 0x210u);                       // 27daf8 lwc1 $f22, 0x210($sp)
        r.f21 = LWC1(lo32(r.sp) + 0x208u);                       // 27dafc lwc1 $f21, 0x208($sp)
        r.f20 = LWC1(lo32(r.sp) + 0x200u);                       // 27db00 lwc1 $f20, 0x200($sp)
        jt = lo32(r.ra);                                         // 27db04 jr $ra
        r.sp = addiu(r.sp, 560);                                 // 27db08 addiu $sp, $sp, 0x230
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(20); STORE_F(21); STORE_F(22); STORE_F(23); STORE_F(24); STORE_F(25); ctx->fcr31 = r.fcr31;
        ctx->pc = jt;
        return true;
    }

    void nativeMoveTest(G_ARGS) { nativeMoveTestLevel(G_PASS, 0u); }

    // ---- obinstCalcAmbientLight (0x25aae0)
    //
    // obinstCalcAmbientLight: an object instance's ambient light from its
    // room's lights and the bullets near it.

    struct ObinstCalcAmbientLightRegs
    {
        uint64_t at, v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, s0, s1, s2, s3, s4, s5, s6, s7, t9, gp, sp, fp, ra;
        float f0, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f20, f21, f22, f23, f24;
        uint32_t fcr31;
        uint64_t lo, hi;
    };

    void nativeObinstCalcAmbientLight(G_ARGS)
    {
        ObinstCalcAmbientLightRegs r;
        bool t;
        uint32_t jt;
        (void)t;
        (void)jt;
        LOAD_GPR(at, 1); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(t7, 15); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(t9, 25); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_GPR(ra, 31); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(13); LOAD_F(14); LOAD_F(15); LOAD_F(16); LOAD_F(17); LOAD_F(18); LOAD_F(19); LOAD_F(20); LOAD_F(21); LOAD_F(22); LOAD_F(23); LOAD_F(24); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
        r.sp = addiu(r.sp, -656);                                // 25aae0 addiu $sp, $sp, -0x290
        r.v1 = LW(lo32(r.gp) - 0x5d6cu);                         // 25aae4 lw $v1, -0x5D6C($gp)
        WRITE32(lo32(r.sp) + 0x120u, lo32(r.a0));                // 25aae8 sw $a0, 0x120($sp)
        WRITE64(lo32(r.sp) + 0x250u, r.ra);                      // 25aaec sd $ra, 0x250($sp)
        WRITE64(lo32(r.sp) + 0x240u, r.fp);                      // 25aaf0 sd $fp, 0x240($sp)
        r.v1 = subu(r.a0, r.v1);                                 // 25aaf4 subu $v1, $a0, $v1
        WRITE64(lo32(r.sp) + 0x230u, r.s7);                      // 25aaf8 sd $s7, 0x230($sp)
        WRITE64(lo32(r.sp) + 0x220u, r.s6);                      // 25aafc sd $s6, 0x220($sp)
        WRITE64(lo32(r.sp) + 0x210u, r.s5);                      // 25ab00 sd $s5, 0x210($sp)
        WRITE64(lo32(r.sp) + 0x200u, r.s4);                      // 25ab04 sd $s4, 0x200($sp)
        WRITE64(lo32(r.sp) + 0x1f0u, r.s3);                      // 25ab08 sd $s3, 0x1F0($sp)
        WRITE64(lo32(r.sp) + 0x1e0u, r.s2);                      // 25ab0c sd $s2, 0x1E0($sp)
        WRITE64(lo32(r.sp) + 0x1d0u, r.s1);                      // 25ab10 sd $s1, 0x1D0($sp)
        WRITE64(lo32(r.sp) + 0x1c0u, r.s0);                      // 25ab14 sd $s0, 0x1C0($sp)
        SWC1(lo32(r.sp) + 0x280u, r.f24);                        // 25ab18 swc1 $f24, 0x280($sp)
        SWC1(lo32(r.sp) + 0x278u, r.f23);                        // 25ab1c swc1 $f23, 0x278($sp)
        SWC1(lo32(r.sp) + 0x270u, r.f22);                        // 25ab20 swc1 $f22, 0x270($sp)
        SWC1(lo32(r.sp) + 0x268u, r.f21);                        // 25ab24 swc1 $f21, 0x268($sp)
        SWC1(lo32(r.sp) + 0x260u, r.f20);                        // 25ab28 swc1 $f20, 0x260($sp)
        r.v0 = LW(lo32(r.a0) + 0xf4u);                           // 25ab2c lw $v0, 0xF4($a0)
        WRITE32(lo32(r.sp) + 0x124u, lo32(r.a1));                // 25ab30 sw $a1, 0x124($sp)
        WRITE32(lo32(r.sp) + 0x128u, lo32(r.v0));                // 25ab34 sw $v0, 0x128($sp)
        r.v0 = sext32(0xc18f0000u);                              // 25ab38 lui $v0, 0xC18F
        r.a0 = LW(lo32(r.gp) - 0x4ba0u);                         // 25ab3c lw $a0, -0x4BA0($gp)
        r.v0 = r.v0 | 0x9c19u;                                   // 25ab40 ori $v0, $v0, 0x9C19
        r.a1 = LW(lo32(r.sp) + 0x128u);                          // 25ab44 lw $a1, 0x128($sp)
        r.v1 = mult(r.v1, r.v0, r.lo, r.hi);                     // 25ab48 mult $v1, $v1, $v0
        r.t1 = LW(lo32(r.sp) + 0x128u);                          // 25ab4c lw $t1, 0x128($sp)
        r.a1 = LW(lo32(r.a1) + 0xcu);                            // 25ab50 lw $a1, 0xC($a1)
        r.v0 = slti(r.a0, 2);                                    // 25ab54 slti $v0, $a0, 0x2
        r.a2 = LW(lo32(r.sp) + 0x128u);                          // 25ab58 lw $a2, 0x128($sp)
        r.t0 = addiu(r.t1, 112);                                 // 25ab5c addiu $t0, $t1, 0x70
        WRITE32(lo32(r.sp) + 0x12cu, lo32(r.a1));                // 25ab60 sw $a1, 0x12C($sp)
        r.a2 = addiu(r.a2, 48);                                  // 25ab64 addiu $a2, $a2, 0x30
        r.a1 = LW(lo32(r.gp) - 0x6258u);                         // 25ab68 lw $a1, -0x6258($gp)
        WRITE32(lo32(r.sp) + 0x130u, lo32(r.a2));                // 25ab6c sw $a2, 0x130($sp)
        t = r.v0 != 0u;                                          // 25ab70 bnez $v0, . + 4 + (0x6 << 2)
        r.t1 = sra32(r.v1, 3);                                   // 25ab74 sra $t1, $v1, 3
        if (t) goto L_25ab8c;
        divide(r.a1, r.a0, r.lo, r.hi);                          // 25ab78 div $zero, $a1, $a0
        if (r.a0 == 0u)                                          // 25ab7c beql $a0, $zero, . + 4 + (0x1 << 2)
        {
            STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(sp, 29); ctx->lo = r.lo; ctx->hi = r.hi;
            ctx->pc = 0x25ab80u;                                     // 25ab80 break 0, 7
            runtime->handleBreak(rdram, ctx);
            LOAD_GPR(at, 1); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(t7, 15); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(t9, 25); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(13); LOAD_F(14); LOAD_F(15); LOAD_F(16); LOAD_F(17); LOAD_F(18); LOAD_F(19); LOAD_F(20); LOAD_F(21); LOAD_F(22); LOAD_F(23); LOAD_F(24); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
            goto L_25ab84;
        }
    L_25ab84:
        r.v0 = r.lo;                                             // 25ab84 mflo $v0
        r.a1 = r.v0;                                             // 25ab88 daddu $a1, $v0, $zero
    L_25ab8c:
        r.v0 = LW(lo32(r.sp) + 0x128u);                          // 25ab8c lw $v0, 0x128($sp)
        r.a3 = 0u;                                               // 25ab90 daddu $a3, $zero, $zero
        r.t2 = 0u;                                               // 25ab94 daddu $t2, $zero, $zero
        r.v1 = LW(lo32(r.v0) + 0x8u);                            // 25ab98 lw $v1, 0x8($v0)
        WRITE32(lo32(r.sp) + 0x134u, lo32(0u));                  // 25ab9c sw $zero, 0x134($sp)
        r.v0 = addiu(0u, 2048);                                  // 25aba0 addiu $v0, $zero, 0x800
        t = r.v1 != r.v0;                                        // 25aba4 bne $v1, $v0, . + 4 + (0x12 << 2)
        WRITE32(lo32(r.sp) + 0x138u, lo32(0u));                  // 25aba8 sw $zero, 0x138($sp)
        if (t) goto L_25abf0;
        r.v1 = LW(lo32(r.sp) + 0x120u);                          // 25abac lw $v1, 0x120($sp)
        r.a0 = LW(lo32(r.sp) + 0x128u);                          // 25abb0 lw $a0, 0x128($sp)
        r.v0 = LW(lo32(r.v1) + 0x4u);                            // 25abb4 lw $v0, 0x4($v1)
        WRITE32(lo32(r.sp) + 0x130u, lo32(r.sp));                // 25abb8 sw $sp, 0x130($sp)
        r.f1 = LWC1(lo32(r.v0) + 0x30u);                         // 25abbc lwc1 $f1, 0x30($v0)
        r.f0 = LWC1(lo32(r.a0) + 0x30u);                         // 25abc0 lwc1 $f0, 0x30($a0)
        r.f0 = FPU_ADD_S(r.f0, r.f1);                            // 25abc4 add.s $f0, $f0, $f1
        SWC1(lo32(r.sp), r.f0);                                  // 25abc8 swc1 $f0, 0x0($sp)
        r.f0 = LWC1(lo32(r.v0) + 0x34u);                         // 25abcc lwc1 $f0, 0x34($v0)
        r.f1 = LWC1(lo32(r.a0) + 0x34u);                         // 25abd0 lwc1 $f1, 0x34($a0)
        r.f1 = FPU_ADD_S(r.f1, r.f0);                            // 25abd4 add.s $f1, $f1, $f0
        SWC1(lo32(r.sp) + 0x4u, r.f1);                           // 25abd8 swc1 $f1, 0x4($sp)
        r.f2 = LWC1(lo32(r.v0) + 0x38u);                         // 25abdc lwc1 $f2, 0x38($v0)
        r.f0 = LWC1(lo32(r.a0) + 0x38u);                         // 25abe0 lwc1 $f0, 0x38($a0)
        r.f0 = FPU_ADD_S(r.f0, r.f2);                            // 25abe4 add.s $f0, $f0, $f2
        // 25abe8 b . + 4 + (0x22 << 2)
        SWC1(lo32(r.sp) + 0x8u, r.f0);                           // 25abec swc1 $f0, 0x8($sp)
        goto L_25ac74;
    L_25abf0:
        r.v0 = addiu(0u, 8);                                     // 25abf0 addiu $v0, $zero, 0x8
        t = r.v1 != r.v0;                                        // 25abf4 bne $v1, $v0, . + 4 + (0xC << 2)
        r.v1 = LW(lo32(r.sp) + 0x12cu);                          // 25abf8 lw $v1, 0x12C($sp)
        if (t) goto L_25ac28;
        r.a2 = LW(lo32(r.sp) + 0x128u);                          // 25abfc lw $a2, 0x128($sp)
        r.v0 = LW(lo32(r.a2) + 0x164u);                          // 25ac00 lw $v0, 0x164($a2)
        t = r.v0 == 0u;                                          // 25ac04 beqz $v0, . + 4 + (0x3 << 2)
        r.v0 = addiu(r.v0, 152);                                 // 25ac08 addiu $v0, $v0, 0x98
        if (t) goto L_25ac14;
        // 25ac0c b . + 4 + (0x19 << 2)
        WRITE32(lo32(r.sp) + 0x130u, lo32(r.v0));                // 25ac10 sw $v0, 0x130($sp)
        goto L_25ac74;
    L_25ac14:
        r.t3 = LW(lo32(r.sp) + 0x128u);                          // 25ac14 lw $t3, 0x128($sp)
        r.v0 = LW(lo32(r.t3) + 0x160u);                          // 25ac18 lw $v0, 0x160($t3)
        r.v0 = addiu(r.v0, 2808);                                // 25ac1c addiu $v0, $v0, 0xAF8
        // 25ac20 b . + 4 + (0x14 << 2)
        WRITE32(lo32(r.sp) + 0x130u, lo32(r.v0));                // 25ac24 sw $v0, 0x130($sp)
        goto L_25ac74;
    L_25ac28:
        r.v0 = addiu(r.v1, -201);                                // 25ac28 addiu $v0, $v1, -0xC9
        r.v0 = sltu(r.v0, sext32(4u));                           // 25ac2c sltiu $v0, $v0, 0x4
        t = r.v0 == 0u;                                          // 25ac30 beqz $v0, . + 4 + (0x10 << 2)
        r.a0 = LW(lo32(r.sp) + 0x12cu);                          // 25ac34 lw $a0, 0x12C($sp)
        if (t) goto L_25ac74;
        r.v0 = addiu(0u, 1820);                                  // 25ac38 addiu $v0, $zero, 0x71C
        r.v1 = sext32(0xfffa0000u);                              // 25ac3c lui $v1, 0xFFFA
        r.a2 = addiu(0u, 1);                                     // 25ac40 addiu $a2, $zero, 0x1
        r.v0 = mult(r.a0, r.v0, r.lo, r.hi);                     // 25ac44 mult $v0, $a0, $v0
        r.v1 = r.v1 | 0x6b04u;                                   // 25ac48 ori $v1, $v1, 0x6B04
        r.a0 = LW(lo32(r.gp) - 0x4dd0u);                         // 25ac4c lw $a0, -0x4DD0($gp)
        WRITE32(lo32(r.sp) + 0x134u, lo32(r.a2));                // 25ac50 sw $a2, 0x134($sp)
        r.v0 = addu(r.v0, r.v1);                                 // 25ac54 addu $v0, $v0, $v1
        r.a0 = addu(r.a0, r.v0);                                 // 25ac58 addu $a0, $a0, $v0
        WRITE32(lo32(r.sp) + 0x138u, lo32(r.a0));                // 25ac5c sw $a0, 0x138($sp)
        r.v0 = addiu(r.a0, 152);                                 // 25ac60 addiu $v0, $a0, 0x98
        r.t0 = addiu(r.a0, 344);                                 // 25ac64 addiu $t0, $a0, 0x158
        r.t3 = LW(lo32(r.a0) + 0x31cu);                          // 25ac68 lw $t3, 0x31C($a0)
        WRITE32(lo32(r.sp) + 0x130u, lo32(r.v0));                // 25ac6c sw $v0, 0x130($sp)
        WRITE32(lo32(r.sp) + 0x12cu, lo32(r.t3));                // 25ac70 sw $t3, 0x12C($sp)
    L_25ac74:
        r.v1 = LW(lo32(r.sp) + 0x128u);                          // 25ac74 lw $v1, 0x128($sp)
        r.v0 = sext32(0xffff0000u);                              // 25ac78 lui $v0, 0xFFFF
        r.v0 = r.v0 | 0xffffu;                                   // 25ac7c ori $v0, $v0, 0xFFFF
        r.a0 = LW(lo32(r.v1) + 0x21cu);                          // 25ac80 lw $a0, 0x21C($v1)
        t = r.a0 == r.v0;                                        // 25ac84 beq $a0, $v0, . + 4 + (0x35 << 2)
        r.a2 = r.a0;                                             // 25ac88 daddu $a2, $a0, $zero
        if (t) goto L_25ad5c;
        r.v1 = r.t1 & 0x3u;                                      // 25ac8c andi $v1, $t1, 0x3
        r.v0 = r.a1 & 0x3u;                                      // 25ac90 andi $v0, $a1, 0x3
        t = r.v1 == r.v0;                                        // 25ac94 beq $v1, $v0, . + 4 + (0x31 << 2)
        r.v0 = r.a0 & 0xffu;                                     // 25ac98 andi $v0, $a0, 0xFF
        if (t) goto L_25ad5c;
        t = neg64(r.v0);                                         // 25ac9c bltz $v0, . + 4 + (0x4 << 2)
        r.v1 = srl32(r.v0, 1);                                   // 25aca0 srl $v1, $v0, 1
        if (t) goto L_25acb0;
        r.f1 = floatOf(lo32(r.v0));                              // 25aca4 mtc1 $v0, $f1
        // 25aca8 b . + 4 + (0x6 << 2)
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25acac cvt.s.w $f1, $f1
        goto L_25acc4;
    L_25acb0:
        r.v0 = r.a0 & 0x1u;                                      // 25acb0 andi $v0, $a0, 0x1
        r.v0 = r.v0 | r.v1;                                      // 25acb4 or $v0, $v0, $v1
        r.f1 = floatOf(lo32(r.v0));                              // 25acb8 mtc1 $v0, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25acbc cvt.s.w $f1, $f1
        r.f1 = FPU_ADD_S(r.f1, r.f1);                            // 25acc0 add.s $f1, $f1, $f1
    L_25acc4:
        r.f0 = LWC1(lo32(r.gp) - 0x7d20u);                       // 25acc4 lwc1 $f0, -0x7D20($gp)
        r.v0 = srl32(r.a2, 8);                                   // 25acc8 srl $v0, $a2, 8
        r.a1 = LW(lo32(r.sp) + 0x124u);                          // 25accc lw $a1, 0x124($sp)
        r.v1 = r.v0 & 0xffu;                                     // 25acd0 andi $v1, $v0, 0xFF
        r.f0 = FPU_MUL_S(r.f1, r.f0);                            // 25acd4 mul.s $f0, $f1, $f0
        t = neg64(r.v1);                                         // 25acd8 bltz $v1, . + 4 + (0x4 << 2)
        SWC1(lo32(r.a1), r.f0);                                  // 25acdc swc1 $f0, 0x0($a1)
        if (t) goto L_25acec;
        r.f1 = floatOf(lo32(r.v1));                              // 25ace0 mtc1 $v1, $f1
        // 25ace4 b . + 4 + (0x7 << 2)
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25ace8 cvt.s.w $f1, $f1
        goto L_25ad04;
    L_25acec:
        r.v0 = r.v0 & 0x1u;                                      // 25acec andi $v0, $v0, 0x1
        r.v1 = srl32(r.v1, 1);                                   // 25acf0 srl $v1, $v1, 1
        r.v0 = r.v0 | r.v1;                                      // 25acf4 or $v0, $v0, $v1
        r.f1 = floatOf(lo32(r.v0));                              // 25acf8 mtc1 $v0, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25acfc cvt.s.w $f1, $f1
        r.f1 = FPU_ADD_S(r.f1, r.f1);                            // 25ad00 add.s $f1, $f1, $f1
    L_25ad04:
        r.f0 = LWC1(lo32(r.gp) - 0x7d1cu);                       // 25ad04 lwc1 $f0, -0x7D1C($gp)
        r.v0 = srl32(r.a2, 16);                                  // 25ad08 srl $v0, $a2, 16
        r.a2 = LW(lo32(r.sp) + 0x124u);                          // 25ad0c lw $a2, 0x124($sp)
        r.v1 = r.v0 & 0xffu;                                     // 25ad10 andi $v1, $v0, 0xFF
        r.f0 = FPU_MUL_S(r.f1, r.f0);                            // 25ad14 mul.s $f0, $f1, $f0
        t = neg64(r.v1);                                         // 25ad18 bltz $v1, . + 4 + (0x4 << 2)
        SWC1(lo32(r.a2) + 0x4u, r.f0);                           // 25ad1c swc1 $f0, 0x4($a2)
        if (t) goto L_25ad2c;
        r.f1 = floatOf(lo32(r.v1));                              // 25ad20 mtc1 $v1, $f1
        // 25ad24 b . + 4 + (0x7 << 2)
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25ad28 cvt.s.w $f1, $f1
        goto L_25ad44;
    L_25ad2c:
        r.v0 = r.v0 & 0x1u;                                      // 25ad2c andi $v0, $v0, 0x1
        r.v1 = srl32(r.v1, 1);                                   // 25ad30 srl $v1, $v1, 1
        r.v0 = r.v0 | r.v1;                                      // 25ad34 or $v0, $v0, $v1
        r.f1 = floatOf(lo32(r.v0));                              // 25ad38 mtc1 $v0, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25ad3c cvt.s.w $f1, $f1
        r.f1 = FPU_ADD_S(r.f1, r.f1);                            // 25ad40 add.s $f1, $f1, $f1
    L_25ad44:
        r.f0 = LWC1(lo32(r.gp) - 0x7d18u);                       // 25ad44 lwc1 $f0, -0x7D18($gp)
        r.a3 = addiu(0u, 1);                                     // 25ad48 addiu $a3, $zero, 0x1
        r.t1 = LW(lo32(r.sp) + 0x124u);                          // 25ad4c lw $t1, 0x124($sp)
        r.f0 = FPU_MUL_S(r.f1, r.f0);                            // 25ad50 mul.s $f0, $f1, $f0
        // 25ad54 b . + 4 + (0x3C << 2)
        SWC1(lo32(r.t1) + 0x8u, r.f0);                           // 25ad58 swc1 $f0, 0x8($t1)
        goto L_25ae48;
    L_25ad5c:
        r.t3 = LW(lo32(r.sp) + 0x128u);                          // 25ad5c lw $t3, 0x128($sp)
        r.v0 = LW(lo32(r.t3) + 0xbcu);                           // 25ad60 lw $v0, 0xBC($t3)
        t = r.v0 == 0u;                                          // 25ad64 beqz $v0, . + 4 + (0x39 << 2)
        r.v1 = LW(lo32(r.gp) - 0x4cccu);                         // 25ad68 lw $v1, -0x4CCC($gp)
        if (t) goto L_25ae4c;
        r.v0 = LW(lo32(r.v0) + 0xf4u);                           // 25ad6c lw $v0, 0xF4($v0)
        r.v0 = LW(lo32(r.v0) + 0x21cu);                          // 25ad70 lw $v0, 0x21C($v0)
        r.v1 = r.v0 & 0xffu;                                     // 25ad74 andi $v1, $v0, 0xFF
        t = neg64(r.v1);                                         // 25ad78 bltz $v1, . + 4 + (0x5 << 2)
        WRITE32(lo32(r.t3) + 0x21cu, lo32(r.v0));                // 25ad7c sw $v0, 0x21C($t3)
        if (t) goto L_25ad90;
        r.f1 = floatOf(lo32(r.v1));                              // 25ad80 mtc1 $v1, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25ad84 cvt.s.w $f1, $f1
        // 25ad88 b . + 4 + (0x8 << 2)
        r.v0 = LW(lo32(r.sp) + 0x128u);                          // 25ad8c lw $v0, 0x128($sp)
        goto L_25adac;
    L_25ad90:
        r.v0 = r.v0 & 0x1u;                                      // 25ad90 andi $v0, $v0, 0x1
        r.v1 = srl32(r.v1, 1);                                   // 25ad94 srl $v1, $v1, 1
        r.v0 = r.v0 | r.v1;                                      // 25ad98 or $v0, $v0, $v1
        r.f1 = floatOf(lo32(r.v0));                              // 25ad9c mtc1 $v0, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25ada0 cvt.s.w $f1, $f1
        r.f1 = FPU_ADD_S(r.f1, r.f1);                            // 25ada4 add.s $f1, $f1, $f1
        r.v0 = LW(lo32(r.sp) + 0x128u);                          // 25ada8 lw $v0, 0x128($sp)
    L_25adac:
        r.f0 = LWC1(lo32(r.gp) - 0x7d14u);                       // 25adac lwc1 $f0, -0x7D14($gp)
        r.a0 = LW(lo32(r.v0) + 0x21cu);                          // 25adb0 lw $a0, 0x21C($v0)
        r.f0 = FPU_MUL_S(r.f1, r.f0);                            // 25adb4 mul.s $f0, $f1, $f0
        r.a2 = LW(lo32(r.sp) + 0x124u);                          // 25adb8 lw $a2, 0x124($sp)
        r.v0 = srl32(r.a0, 8);                                   // 25adbc srl $v0, $a0, 8
        r.a1 = r.a0;                                             // 25adc0 daddu $a1, $a0, $zero
        r.v1 = r.v0 & 0xffu;                                     // 25adc4 andi $v1, $v0, 0xFF
        t = neg64(r.v1);                                         // 25adc8 bltz $v1, . + 4 + (0x4 << 2)
        SWC1(lo32(r.a2), r.f0);                                  // 25adcc swc1 $f0, 0x0($a2)
        if (t) goto L_25addc;
        r.f1 = floatOf(lo32(r.v1));                              // 25add0 mtc1 $v1, $f1
        // 25add4 b . + 4 + (0x7 << 2)
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25add8 cvt.s.w $f1, $f1
        goto L_25adf4;
    L_25addc:
        r.v0 = r.v0 & 0x1u;                                      // 25addc andi $v0, $v0, 0x1
        r.v1 = srl32(r.v1, 1);                                   // 25ade0 srl $v1, $v1, 1
        r.v0 = r.v0 | r.v1;                                      // 25ade4 or $v0, $v0, $v1
        r.f1 = floatOf(lo32(r.v0));                              // 25ade8 mtc1 $v0, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25adec cvt.s.w $f1, $f1
        r.f1 = FPU_ADD_S(r.f1, r.f1);                            // 25adf0 add.s $f1, $f1, $f1
    L_25adf4:
        r.f0 = LWC1(lo32(r.gp) - 0x7d10u);                       // 25adf4 lwc1 $f0, -0x7D10($gp)
        r.v0 = srl32(r.a1, 16);                                  // 25adf8 srl $v0, $a1, 16
        r.t1 = LW(lo32(r.sp) + 0x124u);                          // 25adfc lw $t1, 0x124($sp)
        r.v1 = r.v0 & 0xffu;                                     // 25ae00 andi $v1, $v0, 0xFF
        r.f0 = FPU_MUL_S(r.f1, r.f0);                            // 25ae04 mul.s $f0, $f1, $f0
        t = neg64(r.v1);                                         // 25ae08 bltz $v1, . + 4 + (0x4 << 2)
        SWC1(lo32(r.t1) + 0x4u, r.f0);                           // 25ae0c swc1 $f0, 0x4($t1)
        if (t) goto L_25ae1c;
        r.f1 = floatOf(lo32(r.v1));                              // 25ae10 mtc1 $v1, $f1
        // 25ae14 b . + 4 + (0x7 << 2)
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25ae18 cvt.s.w $f1, $f1
        goto L_25ae34;
    L_25ae1c:
        r.v0 = r.v0 & 0x1u;                                      // 25ae1c andi $v0, $v0, 0x1
        r.v1 = srl32(r.v1, 1);                                   // 25ae20 srl $v1, $v1, 1
        r.v0 = r.v0 | r.v1;                                      // 25ae24 or $v0, $v0, $v1
        r.f1 = floatOf(lo32(r.v0));                              // 25ae28 mtc1 $v0, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25ae2c cvt.s.w $f1, $f1
        r.f1 = FPU_ADD_S(r.f1, r.f1);                            // 25ae30 add.s $f1, $f1, $f1
    L_25ae34:
        r.f0 = LWC1(lo32(r.gp) - 0x7d0cu);                       // 25ae34 lwc1 $f0, -0x7D0C($gp)
        r.a3 = addiu(0u, 1);                                     // 25ae38 addiu $a3, $zero, 0x1
        r.t3 = LW(lo32(r.sp) + 0x124u);                          // 25ae3c lw $t3, 0x124($sp)
        r.f0 = FPU_MUL_S(r.f1, r.f0);                            // 25ae40 mul.s $f0, $f1, $f0
        SWC1(lo32(r.t3) + 0x8u, r.f0);                           // 25ae44 swc1 $f0, 0x8($t3)
    L_25ae48:
        r.v1 = LW(lo32(r.gp) - 0x4cccu);                         // 25ae48 lw $v1, -0x4CCC($gp)
    L_25ae4c:
        t = r.v1 == 0u;                                          // 25ae4c beqz $v1, . + 4 + (0x7 << 2)
        r.a1 = LW(lo32(r.sp) + 0x12cu);                          // 25ae50 lw $a1, 0x12C($sp)
        if (t) goto L_25ae6c;
        r.v0 = addiu(0u, 24);                                    // 25ae54 addiu $v0, $zero, 0x18
        r.a1 = mult(r.a1, r.v0, r.lo, r.hi);                     // 25ae58 mult $a1, $a1, $v0
        r.v0 = addu(r.a1, r.v1);                                 // 25ae5c addu $v0, $a1, $v1
        r.v1 = LW(lo32(r.v0) - 0x18u);                           // 25ae60 lw $v1, -0x18($v0)
        r.v1 = addiu(r.v1, -1);                                  // 25ae64 addiu $v1, $v1, -0x1
        r.t2 = sltu(r.v1, sext32(3u));                           // 25ae68 sltiu $t2, $v1, 0x3
    L_25ae6c:
        t = r.a3 != 0u;                                          // 25ae6c bnez $a3, . + 4 + (0x2BC << 2)
        r.v0 = r.a0 & 0xffu;                                     // 25ae70 andi $v0, $a0, 0xFF
        if (t) goto L_25b960;
        r.v0 = sext32(0xffff0000u);                              // 25ae74 lui $v0, 0xFFFF
        r.v0 = r.v0 | 0xffffu;                                   // 25ae78 ori $v0, $v0, 0xFFFF
        if (r.a0 == r.v0)                                        // 25ae7c beql $a0, $v0, . + 4 + (0x11 << 2)
        {
            r.a0 = addiu(r.sp, 16);                                  // 25ae80 addiu $a0, $sp, 0x10
            goto L_25aec4;
        }
        if (r.t2 != 0u)                                          // 25ae84 bnel $t2, $zero, . + 4 + (0xF << 2)
        {
            r.a0 = addiu(r.sp, 16);                                  // 25ae88 addiu $a0, $sp, 0x10
            goto L_25aec4;
        }
        r.a2 = LW(lo32(r.sp) + 0x130u);                          // 25ae8c lw $a2, 0x130($sp)
        r.f0 = LWC1(lo32(r.t0));                                 // 25ae90 lwc1 $f0, 0x0($t0)
        r.f1 = LWC1(lo32(r.a2));                                 // 25ae94 lwc1 $f1, 0x0($a2)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f1, r.f0)); // 25ae98 c.eq.s $f1, $f0
        if ((r.fcr31 & kCondition) == 0u)                        // 25aea0 bc1fl . + 4 + (0x8 << 2)
        {
            r.a0 = addiu(r.sp, 16);                                  // 25aea4 addiu $a0, $sp, 0x10
            goto L_25aec4;
        }
        r.f1 = LWC1(lo32(r.t0) + 0x8u);                          // 25aea8 lwc1 $f1, 0x8($t0)
        r.f0 = LWC1(lo32(r.a2) + 0x8u);                          // 25aeac lwc1 $f0, 0x8($a2)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f0, r.f1)); // 25aeb0 c.eq.s $f0, $f1
        t = (r.fcr31 & kCondition) != 0u;                        // 25aeb8 bc1t . + 4 + (0x2A9 << 2)
        r.v0 = r.a0 & 0xffu;                                     // 25aebc andi $v0, $a0, 0xFF
        if (t) goto L_25b960;
        r.a0 = addiu(r.sp, 16);                                  // 25aec0 addiu $a0, $sp, 0x10
    L_25aec4:
        r.a1 = 0u;                                               // 25aec4 daddu $a1, $zero, $zero
        r.ra = 0x25aed0u;                                        // 25aec8 jal func_2E560C
        r.a2 = addiu(0u, 12);                                    // 25aecc addiu $a2, $zero, 0xC
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2e560cu, 0x25aec8u, 0x25aed0u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t2, 10); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(t7, 15); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(t9, 25); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(13); LOAD_F(14); LOAD_F(15); LOAD_F(16); LOAD_F(17); LOAD_F(18); LOAD_F(19); LOAD_F(20); LOAD_F(22); LOAD_F(23); LOAD_F(24); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_25aed0:
        r.t1 = addiu(r.sp, 128);                                 // 25aed0 addiu $t1, $sp, 0x80
        r.v0 = sext32(0x3a0000u);                                // 25aed4 lui $v0, 0x3A
        WRITE32(lo32(r.sp) + 0x14cu, lo32(r.t1));                // 25aed8 sw $t1, 0x14C($sp)
        r.a2 = sext32(0x3b0000u);                                // 25aedc lui $a2, 0x3B
        r.a0 = addiu(r.v0, 9856);                                // 25aee0 addiu $a0, $v0, 0x2680
        ldl(lo32(r.a0) + 0x7u, r.t2);                            // 25aee4 ldl $t2, 0x7($a0)
        ldr(lo32(r.a0), r.t2);                                   // 25aee8 ldr $t2, 0x0($a0)
        r.t3 = LW(lo32(r.a0) + 0x8u);                            // 25aeec lw $t3, 0x8($a0)
        sdl(lo32(r.sp) + 0x37u, r.t2);                           // 25aef0 sdl $t2, 0x37($sp)
        sdr(lo32(r.sp) + 0x30u, r.t2);                           // 25aef4 sdr $t2, 0x30($sp)
        WRITE32(lo32(r.sp) + 0x38u, lo32(r.t3));                 // 25aef8 sw $t3, 0x38($sp)
        r.f2 = LWC1(lo32(r.gp) - 0x7d08u);                       // 25aefc lwc1 $f2, -0x7D08($gp)
        r.a1 = LW(lo32(r.sp) + 0x130u);                          // 25af00 lw $a1, 0x130($sp)
        r.f21 = LWC1(lo32(r.a2) - 0x1570u);                      // 25af04 lwc1 $f21, -0x1570($a2)
        r.f1 = LWC1(lo32(r.a1));                                 // 25af08 lwc1 $f1, 0x0($a1)
        SWC1(lo32(r.sp) + 0x20u, r.f1);                          // 25af0c swc1 $f1, 0x20($sp)
        r.f0 = LWC1(lo32(r.a1) + 0x4u);                          // 25af10 lwc1 $f0, 0x4($a1)
        r.f0 = FPU_ADD_S(r.f0, r.f2);                            // 25af14 add.s $f0, $f0, $f2
        SWC1(lo32(r.sp) + 0x24u, r.f0);                          // 25af18 swc1 $f0, 0x24($sp)
        r.f1 = LWC1(lo32(r.a1) + 0x8u);                          // 25af1c lwc1 $f1, 0x8($a1)
        SWC1(lo32(r.sp) + 0x28u, r.f1);                          // 25af20 swc1 $f1, 0x28($sp)
        r.t1 = LW(lo32(r.sp) + 0x12cu);                          // 25af24 lw $t1, 0x12C($sp)
    L_25af28:
        t = lez64(r.t1);                                         // 25af28 blez $t1, . + 4 + (0x106 << 2)
        r.v0 = LW(lo32(r.gp) - 0x5d9cu);                         // 25af2c lw $v0, -0x5D9C($gp)
        if (t) goto L_25b344;
        r.v0 = slt(r.v0, r.t1);                                  // 25af30 slt $v0, $v0, $t1
        t = r.v0 != 0u;                                          // 25af34 bnez $v0, . + 4 + (0x103 << 2)
        r.t2 = sll32(r.t1, 2);                                   // 25af38 sll $t2, $t1, 2
        if (t) goto L_25b344;
        r.a0 = LW(lo32(r.gp) - 0x5d90u);                         // 25af3c lw $a0, -0x5D90($gp)
        WRITE32(lo32(r.sp) + 0x140u, lo32(r.t2));                // 25af40 sw $t2, 0x140($sp)
        r.t3 = addiu(0u, 80);                                    // 25af44 addiu $t3, $zero, 0x50
        r.a0 = addu(r.t2, r.a0);                                 // 25af48 addu $a0, $t2, $a0
        r.a2 = 0u;                                               // 25af4c daddu $a2, $zero, $zero
        r.v0 = LW(lo32(r.a0));                                   // 25af50 lw $v0, 0x0($a0)
        r.v1 = LW(lo32(r.v0) + 0x20u);                           // 25af54 lw $v1, 0x20($v0)
        r.v1 = LW(lo32(r.v1));                                   // 25af58 lw $v1, 0x0($v1)
        WRITE32(lo32(r.sp) + 0x13cu, lo32(r.v1));                // 25af5c sw $v1, 0x13C($sp)
        r.t0 = LW(lo32(r.v1));                                   // 25af60 lw $t0, 0x0($v1)
        r.v0 = mult(r.t0, r.t3, r.lo, r.hi);                     // 25af64 mult $v0, $t0, $t3
        r.v0 = subu(r.v1, r.v0);                                 // 25af68 subu $v0, $v1, $v0
        t = lez64(r.t0);                                         // 25af6c blez $t0, . + 4 + (0xDA << 2)
        WRITE32(lo32(r.sp) + 0x144u, lo32(r.v0));                // 25af70 sw $v0, 0x144($sp)
        if (t) goto L_25b2d8;
        r.v0 = LW(lo32(r.sp) + 0x144u);                          // 25af74 lw $v0, 0x144($sp)
    L_25af78:
        r.lo = r.v0;                                             // 25af78 mtlo $v0
        r.v0 = addiu(0u, 80);                                    // 25af7c addiu $v0, $zero, 0x50
        r.a3 = madd(r.a2, r.v0, r.lo, r.hi);                     // 25af80 madd $a3, $a2, $v0
        r.s3 = LW(lo32(r.a3) + 0x4cu);                           // 25af84 lw $s3, 0x4C($a3)
        t = r.s3 == 0u;                                          // 25af88 beqz $s3, . + 4 + (0xCF << 2)
        r.t3 = addiu(r.a2, 1);                                   // 25af8c addiu $t3, $a2, 0x1
        if (t) goto L_25b2c8;
        r.v0 = LW(lo32(r.s3) + 0x18u);                           // 25af90 lw $v0, 0x18($s3)
        t = r.v0 == 0u;                                          // 25af94 beqz $v0, . + 4 + (0xD << 2)
        r.a0 = LW(lo32(r.gp) - 0x5d90u);                         // 25af98 lw $a0, -0x5D90($gp)
        if (t) goto L_25afcc;
        r.v1 = addiu(0u, 48);                                    // 25af9c addiu $v1, $zero, 0x30
        r.t1 = LW(lo32(r.sp) + 0x140u);                          // 25afa0 lw $t1, 0x140($sp)
        r.a1 = mult(r.a2, r.v1, r.lo, r.hi);                     // 25afa4 mult $a1, $a2, $v1
        r.s0 = LW(lo32(r.a3) + 0xcu);                            // 25afa8 lw $s0, 0xC($a3)
        r.t5 = addiu(r.a3, 44);                                  // 25afac addiu $t5, $a3, 0x2C
        r.a0 = addu(r.t1, r.a0);                                 // 25afb0 addu $a0, $t1, $a0
        r.v0 = LW(lo32(r.a0));                                   // 25afb4 lw $v0, 0x0($a0)
        r.v1 = LW(lo32(r.v0) + 0x20u);                           // 25afb8 lw $v1, 0x20($v0)
        r.a0 = LW(lo32(r.v1) + 0xf8u);                           // 25afbc lw $a0, 0xF8($v1)
        r.a1 = addu(r.a1, r.a0);                                 // 25afc0 addu $a1, $a1, $a0
        // 25afc4 b . + 4 + (0xC << 2)
        r.t4 = LW(lo32(r.a1) + 0x24u);                           // 25afc8 lw $t4, 0x24($a1)
        goto L_25aff8;
    L_25afcc:
        r.t2 = addiu(0u, 48);                                    // 25afcc addiu $t2, $zero, 0x30
        r.t3 = LW(lo32(r.sp) + 0x140u);                          // 25afd0 lw $t3, 0x140($sp)
        r.a1 = mult(r.a2, r.t2, r.lo, r.hi);                     // 25afd4 mult $a1, $a2, $t2
        r.s0 = LW(lo32(r.a3) + 0x8u);                            // 25afd8 lw $s0, 0x8($a3)
        r.t5 = addiu(r.a3, 20);                                  // 25afdc addiu $t5, $a3, 0x14
        r.a0 = addu(r.t3, r.a0);                                 // 25afe0 addu $a0, $t3, $a0
        r.v0 = LW(lo32(r.a0));                                   // 25afe4 lw $v0, 0x0($a0)
        r.v1 = LW(lo32(r.v0) + 0x20u);                           // 25afe8 lw $v1, 0x20($v0)
        r.a0 = LW(lo32(r.v1) + 0xf8u);                           // 25afec lw $a0, 0xF8($v1)
        r.a1 = addu(r.a1, r.a0);                                 // 25aff0 addu $a1, $a1, $a0
        r.t4 = LW(lo32(r.a1) + 0xcu);                            // 25aff4 lw $t4, 0xC($a1)
    L_25aff8:
        if (r.t4 == 0u)                                          // 25aff8 beql $t4, $zero, . + 4 + (0x1 << 2)
        {
            r.t4 = LW(lo32(r.t5) + 0xcu);                            // 25affc lw $t4, 0xC($t5)
            goto L_25b000;
        }
    L_25b000:
        r.v1 = LHU(lo32(r.a3) + 0x44u);                          // 25b000 lhu $v1, 0x44($a3)
        t = r.v1 == 0u;                                          // 25b004 beqz $v1, . + 4 + (0x5 << 2)
        r.a0 = LW(lo32(r.sp) + 0x120u);                          // 25b008 lw $a0, 0x120($sp)
        if (t) goto L_25b01c;
        r.v0 = LHU(lo32(r.a0) + 0x124u);                         // 25b00c lhu $v0, 0x124($a0)
        r.v0 = r.v0 & r.v1;                                      // 25b010 and $v0, $v0, $v1
        t = r.v0 == 0u;                                          // 25b014 beqz $v0, . + 4 + (0xAC << 2)
        r.t3 = addiu(r.a2, 1);                                   // 25b018 addiu $t3, $a2, 0x1
        if (t) goto L_25b2c8;
    L_25b01c:
        t = r.s0 == 0u;                                          // 25b01c beqz $s0, . + 4 + (0xAA << 2)
        r.t3 = addiu(r.a2, 1);                                   // 25b020 addiu $t3, $a2, 0x1
        if (t) goto L_25b2c8;
        if (r.s3 == 0u)                                          // 25b024 beql $s3, $zero, . + 4 + (0xA9 << 2)
        {
            r.a2 = r.t3;                                             // 25b028 daddu $a2, $t3, $zero
            goto L_25b2cc;
        }
        r.v0 = LW(lo32(r.s0) + 0x14u);                           // 25b02c lw $v0, 0x14($s0)
        t = neg64(r.v0);                                         // 25b030 bltz $v0, . + 4 + (0xA5 << 2)
        r.a1 = addiu(r.sp, 32);                                  // 25b034 addiu $a1, $sp, 0x20
        if (t) goto L_25b2c8;
        r.a2 = addiu(r.sp, 48);                                  // 25b038 addiu $a2, $sp, 0x30
        WRITE32(lo32(r.sp) + 0x154u, lo32(r.a1));                // 25b03c sw $a1, 0x154($sp)
        WRITE32(lo32(r.sp) + 0x158u, lo32(r.a2));                // 25b040 sw $a2, 0x158($sp)
    L_25b048:
        r.v1 = LW(lo32(r.s0) + 0xcu);                            // 25b048 lw $v1, 0xC($s0)
        r.a1 = addiu(0u, 12);                                    // 25b04c addiu $a1, $zero, 0xC
        r.v0 = LW(lo32(r.s0) + 0x4u);                            // 25b050 lw $v0, 0x4($s0)
        r.a3 = addiu(r.s3, 12);                                  // 25b054 addiu $a3, $s3, 0xC
        r.a1 = mult(r.v1, r.a1, r.lo, r.hi);                     // 25b058 mult $a1, $v1, $a1
        WRITE32(lo32(r.sp) + 0x148u, lo32(0u));                  // 25b05c sw $zero, 0x148($sp)
        r.v0 = sll32(r.v0, 4);                                   // 25b060 sll $v0, $v0, 4
        r.v1 = sll32(r.v1, 2);                                   // 25b064 sll $v1, $v1, 2
        r.a0 = LW(lo32(r.t5));                                   // 25b068 lw $a0, 0x0($t5)
        r.s2 = addu(r.t4, r.v1);                                 // 25b06c addu $s2, $t4, $v1
        r.a2 = LW(lo32(r.t5) + 0x4u);                            // 25b070 lw $a2, 0x4($t5)
        r.t0 = 0u;                                               // 25b074 daddu $t0, $zero, $zero
        r.s7 = addu(r.a0, r.v0);                                 // 25b078 addu $s7, $a0, $v0
        r.t1 = 0u;                                               // 25b07c daddu $t1, $zero, $zero
        r.s1 = addu(r.a2, r.a1);                                 // 25b080 addu $s1, $a2, $a1
        r.a0 = LW(lo32(r.sp) + 0x154u);                          // 25b084 lw $a0, 0x154($sp)
        r.a1 = LW(lo32(r.sp) + 0x158u);                          // 25b088 lw $a1, 0x158($sp)
        r.a2 = r.s3;                                             // 25b08c daddu $a2, $s3, $zero
        SET_GPR_U64(ctx, 11, r.t3);                              // 25b090 sq $t3, 0x160($sp)
        WRITE128(lo32(r.sp) + 0x160u, ctx->r[11]);
        SET_GPR_U64(ctx, 12, r.t4);                              // 25b094 sq $t4, 0x170($sp)
        WRITE128(lo32(r.sp) + 0x170u, ctx->r[12]);
        r.ra = 0x25b0a0u;                                        // 25b098 jal func_20AA80
        SET_GPR_U64(ctx, 13, r.t5);                              // 25b09c sq $t5, 0x180($sp)
        WRITE128(lo32(r.sp) + 0x180u, ctx->r[13]);
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(t7, 15); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(t9, 25); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(20); STORE_F(21); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x20aa80u, 0x25b098u, 0x25b0a0u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t6, 14); LOAD_GPR(t7, 15); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(t9, 25); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(13); LOAD_F(14); LOAD_F(15); LOAD_F(16); LOAD_F(17); LOAD_F(18); LOAD_F(19); LOAD_F(20); LOAD_F(21); LOAD_F(22); LOAD_F(23); LOAD_F(24); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_25b0a0:
        ctx->r[11] = READ128(lo32(r.sp) + 0x160u);               // 25b0a0 lq $t3, 0x160($sp)
        r.t3 = GPR_U64(ctx, 11);
        ctx->r[12] = READ128(lo32(r.sp) + 0x170u);               // 25b0a4 lq $t4, 0x170($sp)
        r.t4 = GPR_U64(ctx, 12);
        t = r.v0 == 0u;                                          // 25b0a8 beqz $v0, . + 4 + (0x7D << 2)
        ctx->r[13] = READ128(lo32(r.sp) + 0x180u);               // 25b0ac lq $t5, 0x180($sp)
        r.t5 = GPR_U64(ctx, 13);
        if (t) goto L_25b2a0;
        r.v0 = LW(lo32(r.s7));                                   // 25b0b0 lw $v0, 0x0($s7)
        r.s0 = addiu(r.s0, 24);                                  // 25b0b4 addiu $s0, $s0, 0x18
        WRITE32(lo32(r.sp) + 0x15cu, lo32(r.s0));                // 25b0b8 sw $s0, 0x15C($sp)
        r.s3 = addiu(r.s3, 36);                                  // 25b0bc addiu $s3, $s3, 0x24
        r.s0 = sra32(r.v0, 16);                                  // 25b0c0 sra $s0, $v0, 16
        WRITE32(lo32(r.sp) + 0x150u, lo32(r.s3));                // 25b0c4 sw $s3, 0x150($sp)
        r.s0 = r.s0 ^ 0x1u;                                      // 25b0c8 xori $s0, $s0, 0x1
        r.t9 = r.v0 & 0x7fffu;                                   // 25b0cc andi $t9, $v0, 0x7FFF
        r.t6 = r.v0 & 0x8000u;                                   // 25b0d0 andi $t6, $v0, 0x8000
        r.s0 = r.s0 & 0x1u;                                      // 25b0d4 andi $s0, $s0, 0x1
        r.fp = addiu(r.t9, -2);                                  // 25b0d8 addiu $fp, $t9, -0x2
    L_25b0e0:
        t = lez64(r.fp);                                         // 25b0e0 blez $fp, . + 4 + (0x5D << 2)
        r.s6 = 0u;                                               // 25b0e4 daddu $s6, $zero, $zero
        if (t) goto L_25b258;
        r.t7 = addiu(r.sp, 128);                                 // 25b0e8 addiu $t7, $sp, 0x80
    L_25b0f0:
        r.s4 = addiu(r.s1, 24);                                  // 25b0f0 addiu $s4, $s1, 0x18
        r.s5 = addiu(r.s1, 12);                                  // 25b0f4 addiu $s5, $s1, 0xC
        r.s3 = r.s4;                                             // 25b0f8 daddu $s3, $s4, $zero
        r.a0 = LW(lo32(r.sp) + 0x154u);                          // 25b0fc lw $a0, 0x154($sp)
        r.a3 = r.s3;                                             // 25b100 daddu $a3, $s3, $zero
        r.a1 = LW(lo32(r.sp) + 0x158u);                          // 25b104 lw $a1, 0x158($sp)
        if (r.s0 == 0u) { r.s3 = r.s5; copyHigh(ctx, 19, 21); }  // 25b108 movz $s3, $s5, $s0
        if (r.s0 != 0u) { r.a3 = r.s5; copyHigh(ctx, 7, 21); }   // 25b10c movn $a3, $s5, $s0
        r.a2 = r.s1;                                             // 25b110 daddu $a2, $s1, $zero
        r.t0 = r.s3;                                             // 25b114 daddu $t0, $s3, $zero
        r.t1 = r.t7;                                             // 25b118 daddu $t1, $t7, $zero
        r.t2 = 0u;                                               // 25b11c daddu $t2, $zero, $zero
        SET_GPR_U64(ctx, 11, r.t3);                              // 25b120 sq $t3, 0x160($sp)
        WRITE128(lo32(r.sp) + 0x160u, ctx->r[11]);
        SET_GPR_U64(ctx, 12, r.t4);                              // 25b124 sq $t4, 0x170($sp)
        WRITE128(lo32(r.sp) + 0x170u, ctx->r[12]);
        SET_GPR_U64(ctx, 13, r.t5);                              // 25b128 sq $t5, 0x180($sp)
        WRITE128(lo32(r.sp) + 0x180u, ctx->r[13]);
        SET_GPR_U64(ctx, 14, r.t6);                              // 25b12c sq $t6, 0x190($sp)
        WRITE128(lo32(r.sp) + 0x190u, ctx->r[14]);
        SET_GPR_U64(ctx, 15, r.t7);                              // 25b130 sq $t7, 0x1A0($sp)
        WRITE128(lo32(r.sp) + 0x1a0u, ctx->r[15]);
        r.ra = 0x25b13cu;                                        // 25b134 jal func_209818
        SET_GPR_U64(ctx, 25, r.t9);                              // 25b138 sq $t9, 0x1B0($sp)
        WRITE128(lo32(r.sp) + 0x1b0u, ctx->r[25]);
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(t7, 15); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(t9, 25); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(21); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x209818u, 0x25b134u, 0x25b13cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a3, 7); LOAD_GPR(t1, 9); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(13); LOAD_F(14); LOAD_F(15); LOAD_F(16); LOAD_F(17); LOAD_F(18); LOAD_F(19); LOAD_F(20); LOAD_F(21); LOAD_F(22); LOAD_F(23); LOAD_F(24); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_25b13c:
        ctx->r[11] = READ128(lo32(r.sp) + 0x160u);               // 25b13c lq $t3, 0x160($sp)
        r.t3 = GPR_U64(ctx, 11);
        ctx->r[12] = READ128(lo32(r.sp) + 0x170u);               // 25b140 lq $t4, 0x170($sp)
        r.t4 = GPR_U64(ctx, 12);
        ctx->r[13] = READ128(lo32(r.sp) + 0x180u);               // 25b144 lq $t5, 0x180($sp)
        r.t5 = GPR_U64(ctx, 13);
        ctx->r[14] = READ128(lo32(r.sp) + 0x190u);               // 25b148 lq $t6, 0x190($sp)
        r.t6 = GPR_U64(ctx, 14);
        ctx->r[15] = READ128(lo32(r.sp) + 0x1a0u);               // 25b14c lq $t7, 0x1A0($sp)
        r.t7 = GPR_U64(ctx, 15);
        t = r.v0 == 0u;                                          // 25b150 beqz $v0, . + 4 + (0x39 << 2)
        ctx->r[25] = READ128(lo32(r.sp) + 0x1b0u);               // 25b154 lq $t9, 0x1B0($sp)
        r.t9 = GPR_U64(ctx, 25);
        if (t) goto L_25b238;
        r.f6 = LWC1(lo32(r.sp) + 0x80u);                         // 25b158 lwc1 $f6, 0x80($sp)
        r.f1 = LWC1(lo32(r.sp) + 0x20u);                         // 25b15c lwc1 $f1, 0x20($sp)
        r.f7 = LWC1(lo32(r.sp) + 0x84u);                         // 25b160 lwc1 $f7, 0x84($sp)
        r.f2 = LWC1(lo32(r.sp) + 0x24u);                         // 25b164 lwc1 $f2, 0x24($sp)
        r.f1 = FPU_SUB_S(r.f6, r.f1);                            // 25b168 sub.s $f1, $f6, $f1
        r.f5 = LWC1(lo32(r.sp) + 0x88u);                         // 25b16c lwc1 $f5, 0x88($sp)
        r.f2 = FPU_SUB_S(r.f7, r.f2);                            // 25b170 sub.s $f2, $f7, $f2
        r.f0 = LWC1(lo32(r.sp) + 0x28u);                         // 25b174 lwc1 $f0, 0x28($sp)
        r.f3 = FPU_MUL_S(r.f1, r.f1);                            // 25b178 mul.s $f3, $f1, $f1
        SWC1(lo32(r.sp) + 0x90u, r.f1);                          // 25b17c swc1 $f1, 0x90($sp)
        r.f0 = FPU_SUB_S(r.f5, r.f0);                            // 25b180 sub.s $f0, $f5, $f0
        r.f4 = FPU_MUL_S(r.f2, r.f2);                            // 25b184 mul.s $f4, $f2, $f2
        SWC1(lo32(r.sp) + 0x94u, r.f2);                          // 25b188 swc1 $f2, 0x94($sp)
        r.f1 = FPU_MUL_S(r.f0, r.f0);                            // 25b18c mul.s $f1, $f0, $f0
        r.f3 = FPU_ADD_S(r.f3, r.f4);                            // 25b190 add.s $f3, $f3, $f4
        r.f3 = FPU_ADD_S(r.f3, r.f1);                            // 25b194 add.s $f3, $f3, $f1
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f3, r.f21)); // 25b198 c.lt.s $f3, $f21
        t = (r.fcr31 & kCondition) == 0u;                        // 25b1a0 bc1f . + 4 + (0x25 << 2)
        SWC1(lo32(r.sp) + 0x98u, r.f0);                          // 25b1a4 swc1 $f0, 0x98($sp)
        if (t) goto L_25b238;
        SWC1(lo32(r.sp) + 0x10u, r.f6);                          // 25b1a8 swc1 $f6, 0x10($sp)
        r.a2 = addiu(r.s2, 4);                                   // 25b1ac addiu $a2, $s2, 0x4
        SWC1(lo32(r.sp) + 0x14u, r.f7);                          // 25b1b0 swc1 $f7, 0x14($sp)
        r.v0 = addiu(r.s2, 8);                                   // 25b1b4 addiu $v0, $s2, 0x8
        SWC1(lo32(r.sp) + 0x18u, r.f5);                          // 25b1b8 swc1 $f5, 0x18($sp)
        if (r.s0 != 0u) { r.v0 = r.a2; copyHigh(ctx, 2, 6); }    // 25b1bc movn $v0, $a2, $s0
        r.v1 = addiu(r.s2, 8);                                   // 25b1c0 addiu $v1, $s2, 0x8
        r.a1 = r.s5;                                             // 25b1c4 daddu $a1, $s5, $zero
        r.a0 = LW(lo32(r.s2));                                   // 25b1c8 lw $a0, 0x0($s2)
        if (r.s0 == 0u) { r.v1 = r.a2; copyHigh(ctx, 3, 6); }    // 25b1cc movz $v1, $a2, $s0
        r.f0 = LWC1(lo32(r.s1));                                 // 25b1d0 lwc1 $f0, 0x0($s1)
        if (r.s0 == 0u) { r.a1 = r.s4; copyHigh(ctx, 5, 20); }   // 25b1d4 movz $a1, $s4, $s0
        WRITE32(lo32(r.sp) + 0x70u, lo32(r.a0));                 // 25b1d8 sw $a0, 0x70($sp)
        r.f21 = FPU_MOV_S(r.f3);                                 // 25b1dc mov.s $f21, $f3
        SWC1(lo32(r.sp) + 0x40u, r.f0);                          // 25b1e0 swc1 $f0, 0x40($sp)
        r.a0 = LW(lo32(r.v0));                                   // 25b1e4 lw $a0, 0x0($v0)
        r.f0 = LWC1(lo32(r.s1) + 0x4u);                          // 25b1e8 lwc1 $f0, 0x4($s1)
        WRITE32(lo32(r.sp) + 0x74u, lo32(r.a0));                 // 25b1ec sw $a0, 0x74($sp)
        SWC1(lo32(r.sp) + 0x44u, r.f0);                          // 25b1f0 swc1 $f0, 0x44($sp)
        r.f1 = LWC1(lo32(r.s1) + 0x8u);                          // 25b1f4 lwc1 $f1, 0x8($s1)
        r.v0 = LW(lo32(r.v1));                                   // 25b1f8 lw $v0, 0x0($v1)
        SWC1(lo32(r.sp) + 0x48u, r.f1);                          // 25b1fc swc1 $f1, 0x48($sp)
        WRITE32(lo32(r.sp) + 0x78u, lo32(r.v0));                 // 25b200 sw $v0, 0x78($sp)
        r.f0 = LWC1(lo32(r.a1));                                 // 25b204 lwc1 $f0, 0x0($a1)
        SWC1(lo32(r.sp) + 0x4cu, r.f0);                          // 25b208 swc1 $f0, 0x4C($sp)
        r.f1 = LWC1(lo32(r.a1) + 0x4u);                          // 25b20c lwc1 $f1, 0x4($a1)
        SWC1(lo32(r.sp) + 0x50u, r.f1);                          // 25b210 swc1 $f1, 0x50($sp)
        r.f0 = LWC1(lo32(r.a1) + 0x8u);                          // 25b214 lwc1 $f0, 0x8($a1)
        SWC1(lo32(r.sp) + 0x54u, r.f0);                          // 25b218 swc1 $f0, 0x54($sp)
        r.f1 = LWC1(lo32(r.s3));                                 // 25b21c lwc1 $f1, 0x0($s3)
        SWC1(lo32(r.sp) + 0x58u, r.f1);                          // 25b220 swc1 $f1, 0x58($sp)
        r.f0 = LWC1(lo32(r.s3) + 0x4u);                          // 25b224 lwc1 $f0, 0x4($s3)
        SWC1(lo32(r.sp) + 0x5cu, r.f0);                          // 25b228 swc1 $f0, 0x5C($sp)
        r.f1 = LWC1(lo32(r.s3) + 0x8u);                          // 25b22c lwc1 $f1, 0x8($s3)
        // 25b230 b . + 4 + (0x2 << 2)
        SWC1(lo32(r.sp) + 0x60u, r.f1);                          // 25b234 swc1 $f1, 0x60($sp)
        goto L_25b23c;
    L_25b238:
        r.a2 = addiu(r.s2, 4);                                   // 25b238 addiu $a2, $s2, 0x4
    L_25b23c:
        r.v1 = addiu(0u, 1);                                     // 25b23c addiu $v1, $zero, 0x1
        r.s6 = addiu(r.s6, 1);                                   // 25b240 addiu $s6, $s6, 0x1
        r.s1 = r.s5;                                             // 25b244 daddu $s1, $s5, $zero
        r.s2 = r.a2;                                             // 25b248 daddu $s2, $a2, $zero
        r.v0 = slt(r.s6, r.fp);                                  // 25b24c slt $v0, $s6, $fp
        t = r.v0 != 0u;                                          // 25b250 bnez $v0, . + 4 + (-0x59 << 2)
        r.s0 = subu(r.v1, r.s0);                                 // 25b254 subu $s0, $v1, $s0
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x25b0f0u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(t7, 15); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s6, 22); STORE_GPR(t9, 25); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(21); ctx->fcr31 = r.fcr31; return; }
            goto L_25b0f0;
        }
    L_25b258:
        r.s1 = addiu(r.s1, 24);                                  // 25b258 addiu $s1, $s1, 0x18
        t = r.t6 != 0u;                                          // 25b25c bnez $t6, . + 4 + (0x9 << 2)
        r.s2 = addiu(r.s2, 8);                                   // 25b260 addiu $s2, $s2, 0x8
        if (t) goto L_25b284;
        r.s7 = addiu(r.s7, 16);                                  // 25b264 addiu $s7, $s7, 0x10
        r.v0 = LW(lo32(r.s7));                                   // 25b268 lw $v0, 0x0($s7)
        r.s0 = sra32(r.v0, 16);                                  // 25b26c sra $s0, $v0, 16
        r.t9 = r.v0 & 0x7fffu;                                   // 25b270 andi $t9, $v0, 0x7FFF
        r.s0 = r.s0 ^ 0x1u;                                      // 25b274 xori $s0, $s0, 0x1
        r.t6 = r.v0 & 0x8000u;                                   // 25b278 andi $t6, $v0, 0x8000
        // 25b27c b . + 4 + (0x3 << 2)
        r.s0 = r.s0 & 0x1u;                                      // 25b280 andi $s0, $s0, 0x1
        goto L_25b28c;
    L_25b284:
        r.t1 = addiu(0u, 1);                                     // 25b284 addiu $t1, $zero, 0x1
        WRITE32(lo32(r.sp) + 0x148u, lo32(r.t1));                // 25b288 sw $t1, 0x148($sp)
    L_25b28c:
        r.t2 = LW(lo32(r.sp) + 0x148u);                          // 25b28c lw $t2, 0x148($sp)
        if (r.t2 == 0u)                                          // 25b290 beql $t2, $zero, . + 4 + (-0x6D << 2)
        {
            r.fp = addiu(r.t9, -2);                                  // 25b294 addiu $fp, $t9, -0x2
            if (loopCheckpoint(ctx, runtime, 0x25b0e0u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(t7, 15); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(t9, 25); STORE_GPR(fp, 30); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(21); ctx->fcr31 = r.fcr31; return; }
            goto L_25b0e0;
        }
        // 25b298 b . + 4 + (0x6 << 2)
        r.s0 = LW(lo32(r.sp) + 0x15cu);                          // 25b29c lw $s0, 0x15C($sp)
        goto L_25b2b4;
    L_25b2a0:
        r.s0 = addiu(r.s0, 24);                                  // 25b2a0 addiu $s0, $s0, 0x18
        r.s3 = addiu(r.s3, 36);                                  // 25b2a4 addiu $s3, $s3, 0x24
        WRITE32(lo32(r.sp) + 0x15cu, lo32(r.s0));                // 25b2a8 sw $s0, 0x15C($sp)
        WRITE32(lo32(r.sp) + 0x150u, lo32(r.s3));                // 25b2ac sw $s3, 0x150($sp)
        r.s0 = LW(lo32(r.sp) + 0x15cu);                          // 25b2b0 lw $s0, 0x15C($sp)
    L_25b2b4:
        r.v0 = LW(lo32(r.s0) + 0x14u);                           // 25b2b4 lw $v0, 0x14($s0)
        t = !neg64(r.v0);                                        // 25b2b8 bgez $v0, . + 4 + (-0x9D << 2)
        r.s3 = LW(lo32(r.sp) + 0x150u);                          // 25b2bc lw $s3, 0x150($sp)
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x25b048u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(t7, 15); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(t9, 25); STORE_GPR(fp, 30); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(21); ctx->fcr31 = r.fcr31; return; }
            goto L_25b048;
        }
        r.v0 = LW(lo32(r.sp) + 0x13cu);                          // 25b2c0 lw $v0, 0x13C($sp)
        r.t0 = LW(lo32(r.v0));                                   // 25b2c4 lw $t0, 0x0($v0)
    L_25b2c8:
        r.a2 = r.t3;                                             // 25b2c8 daddu $a2, $t3, $zero
    L_25b2cc:
        r.v0 = slt(r.a2, r.t0);                                  // 25b2cc slt $v0, $a2, $t0
        t = r.v0 != 0u;                                          // 25b2d0 bnez $v0, . + 4 + (-0xD7 << 2)
        r.v0 = LW(lo32(r.sp) + 0x144u);                          // 25b2d4 lw $v0, 0x144($sp)
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x25af78u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(t7, 15); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(t9, 25); STORE_GPR(fp, 30); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(20); STORE_F(21); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi; return; }
            goto L_25af78;
        }
    L_25b2d8:
        r.v1 = sext32(0x3b0000u);                                // 25b2d8 lui $v1, 0x3B
        r.f20 = LWC1(lo32(r.v1) - 0x1570u);                      // 25b2dc lwc1 $f20, -0x1570($v1)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f21, r.f20)); // 25b2e0 c.eq.s $f21, $f20
        t = (r.fcr31 & kCondition) == 0u;                        // 25b2e8 bc1f . + 4 + (0x14 << 2)
        r.v0 = sext32(0x3a0000u);                                // 25b2ec lui $v0, 0x3A
        if (t) goto L_25b33c;
        r.a0 = LW(lo32(r.sp) + 0x130u);                          // 25b2f0 lw $a0, 0x130($sp)
        r.a1 = LW(lo32(r.sp) + 0x14cu);                          // 25b2f4 lw $a1, 0x14C($sp)
        r.a3 = 0u;                                               // 25b2f8 daddu $a3, $zero, $zero
        r.a2 = LW(lo32(r.sp) + 0x12cu);                          // 25b2fc lw $a2, 0x12C($sp)
        r.v1 = addiu(r.v0, 9872);                                // 25b300 addiu $v1, $v0, 0x2690
        ldl(lo32(r.v1) + 0x7u, r.t1);                            // 25b304 ldl $t1, 0x7($v1)
        ldr(lo32(r.v1), r.t1);                                   // 25b308 ldr $t1, 0x0($v1)
        r.t2 = LW(lo32(r.v1) + 0x8u);                            // 25b30c lw $t2, 0x8($v1)
        sdl(lo32(r.sp) + 0x87u, r.t1);                           // 25b310 sdl $t1, 0x87($sp)
        sdr(lo32(r.sp) + 0x80u, r.t1);                           // 25b314 sdr $t1, 0x80($sp)
        WRITE32(lo32(r.sp) + 0x88u, lo32(r.t2));                 // 25b318 sw $t2, 0x88($sp)
        r.ra = 0x25b324u;                                        // 25b31c jal func_258CF0
        r.t0 = 0u;                                               // 25b320 daddu $t0, $zero, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(t7, 15); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(t9, 25); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(20); STORE_F(21); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x258cf0u, 0x25b31cu, 0x25b324u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(t7, 15); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(t9, 25); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(13); LOAD_F(14); LOAD_F(15); LOAD_F(16); LOAD_F(17); LOAD_F(18); LOAD_F(19); LOAD_F(20); LOAD_F(21); LOAD_F(22); LOAD_F(23); LOAD_F(24); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_25b324:
        r.a0 = LW(lo32(r.sp) + 0x12cu);                          // 25b324 lw $a0, 0x12C($sp)
        t = r.a0 == r.v0;                                        // 25b328 beq $a0, $v0, . + 4 + (0x7 << 2)
        r.a1 = sext32(0x3b0000u);                                // 25b32c lui $a1, 0x3B
        if (t) goto L_25b348;
        WRITE32(lo32(r.sp) + 0x12cu, lo32(r.v0));                // 25b330 sw $v0, 0x12C($sp)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f21, r.f20)); // 25b334 c.eq.s $f21, $f20
    L_25b33c:
        t = (r.fcr31 & kCondition) != 0u;                        // 25b33c bc1t . + 4 + (-0x106 << 2)
        r.t1 = LW(lo32(r.sp) + 0x12cu);                          // 25b340 lw $t1, 0x12C($sp)
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x25af28u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(t7, 15); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(t9, 25); STORE_GPR(fp, 30); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(20); STORE_F(21); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi; return; }
            goto L_25af28;
        }
    L_25b344:
        r.a1 = sext32(0x3b0000u);                                // 25b344 lui $a1, 0x3B
    L_25b348:
        r.f0 = LWC1(lo32(r.a1) - 0x1570u);                       // 25b348 lwc1 $f0, -0x1570($a1)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f21, r.f0)); // 25b34c c.eq.s $f21, $f0
        t = (r.fcr31 & kCondition) != 0u;                        // 25b354 bc1t . + 4 + (0x179 << 2)
        r.v1 = LW(lo32(r.sp) + 0x128u);                          // 25b358 lw $v1, 0x128($sp)
        if (t) goto L_25b93c;
        r.a0 = LW(lo32(r.sp) + 0x70u);                           // 25b35c lw $a0, 0x70($sp)
        r.v0 = r.a0 & 0xffu;                                     // 25b360 andi $v0, $a0, 0xFF
        t = neg64(r.v0);                                         // 25b364 bltz $v0, . + 4 + (0x4 << 2)
        r.v1 = srl32(r.v0, 1);                                   // 25b368 srl $v1, $v0, 1
        if (t) goto L_25b378;
        r.f1 = floatOf(lo32(r.v0));                              // 25b36c mtc1 $v0, $f1
        // 25b370 b . + 4 + (0x6 << 2)
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25b374 cvt.s.w $f1, $f1
        goto L_25b38c;
    L_25b378:
        r.v0 = r.a0 & 0x1u;                                      // 25b378 andi $v0, $a0, 0x1
        r.v0 = r.v0 | r.v1;                                      // 25b37c or $v0, $v0, $v1
        r.f1 = floatOf(lo32(r.v0));                              // 25b380 mtc1 $v0, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25b384 cvt.s.w $f1, $f1
        r.f1 = FPU_ADD_S(r.f1, r.f1);                            // 25b388 add.s $f1, $f1, $f1
    L_25b38c:
        r.f0 = LWC1(lo32(r.gp) - 0x7d04u);                       // 25b38c lwc1 $f0, -0x7D04($gp)
        r.v0 = srl32(r.a0, 8);                                   // 25b390 srl $v0, $a0, 8
        r.v1 = r.v0 & 0xffu;                                     // 25b394 andi $v1, $v0, 0xFF
        r.f0 = FPU_MUL_S(r.f1, r.f0);                            // 25b398 mul.s $f0, $f1, $f0
        t = neg64(r.v1);                                         // 25b39c bltz $v1, . + 4 + (0x4 << 2)
        SWC1(lo32(r.sp) + 0xd0u, r.f0);                          // 25b3a0 swc1 $f0, 0xD0($sp)
        if (t) goto L_25b3b0;
        r.f1 = floatOf(lo32(r.v1));                              // 25b3a4 mtc1 $v1, $f1
        // 25b3a8 b . + 4 + (0x7 << 2)
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25b3ac cvt.s.w $f1, $f1
        goto L_25b3c8;
    L_25b3b0:
        r.v0 = r.v0 & 0x1u;                                      // 25b3b0 andi $v0, $v0, 0x1
        r.v1 = srl32(r.v1, 1);                                   // 25b3b4 srl $v1, $v1, 1
        r.v0 = r.v0 | r.v1;                                      // 25b3b8 or $v0, $v0, $v1
        r.f1 = floatOf(lo32(r.v0));                              // 25b3bc mtc1 $v0, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25b3c0 cvt.s.w $f1, $f1
        r.f1 = FPU_ADD_S(r.f1, r.f1);                            // 25b3c4 add.s $f1, $f1, $f1
    L_25b3c8:
        r.f0 = LWC1(lo32(r.gp) - 0x7d00u);                       // 25b3c8 lwc1 $f0, -0x7D00($gp)
        r.v0 = srl32(r.a0, 16);                                  // 25b3cc srl $v0, $a0, 16
        r.v1 = r.v0 & 0xffu;                                     // 25b3d0 andi $v1, $v0, 0xFF
        r.f0 = FPU_MUL_S(r.f1, r.f0);                            // 25b3d4 mul.s $f0, $f1, $f0
        t = neg64(r.v1);                                         // 25b3d8 bltz $v1, . + 4 + (0x4 << 2)
        SWC1(lo32(r.sp) + 0xd4u, r.f0);                          // 25b3dc swc1 $f0, 0xD4($sp)
        if (t) goto L_25b3ec;
        r.f1 = floatOf(lo32(r.v1));                              // 25b3e0 mtc1 $v1, $f1
        // 25b3e4 b . + 4 + (0x7 << 2)
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25b3e8 cvt.s.w $f1, $f1
        goto L_25b404;
    L_25b3ec:
        r.v0 = r.v0 & 0x1u;                                      // 25b3ec andi $v0, $v0, 0x1
        r.v1 = srl32(r.v1, 1);                                   // 25b3f0 srl $v1, $v1, 1
        r.v0 = r.v0 | r.v1;                                      // 25b3f4 or $v0, $v0, $v1
        r.f1 = floatOf(lo32(r.v0));                              // 25b3f8 mtc1 $v0, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25b3fc cvt.s.w $f1, $f1
        r.f1 = FPU_ADD_S(r.f1, r.f1);                            // 25b400 add.s $f1, $f1, $f1
    L_25b404:
        r.f0 = LWC1(lo32(r.gp) - 0x7cfcu);                       // 25b404 lwc1 $f0, -0x7CFC($gp)
        r.a0 = LW(lo32(r.sp) + 0x74u);                           // 25b408 lw $a0, 0x74($sp)
        r.f0 = FPU_MUL_S(r.f1, r.f0);                            // 25b40c mul.s $f0, $f1, $f0
        r.v0 = r.a0 & 0xffu;                                     // 25b410 andi $v0, $a0, 0xFF
        t = neg64(r.v0);                                         // 25b414 bltz $v0, . + 4 + (0x4 << 2)
        SWC1(lo32(r.sp) + 0xd8u, r.f0);                          // 25b418 swc1 $f0, 0xD8($sp)
        if (t) goto L_25b428;
        r.f1 = floatOf(lo32(r.v0));                              // 25b41c mtc1 $v0, $f1
        // 25b420 b . + 4 + (0x7 << 2)
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25b424 cvt.s.w $f1, $f1
        goto L_25b440;
    L_25b428:
        r.v1 = srl32(r.v0, 1);                                   // 25b428 srl $v1, $v0, 1
        r.v0 = r.a0 & 0x1u;                                      // 25b42c andi $v0, $a0, 0x1
        r.v0 = r.v0 | r.v1;                                      // 25b430 or $v0, $v0, $v1
        r.f1 = floatOf(lo32(r.v0));                              // 25b434 mtc1 $v0, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25b438 cvt.s.w $f1, $f1
        r.f1 = FPU_ADD_S(r.f1, r.f1);                            // 25b43c add.s $f1, $f1, $f1
    L_25b440:
        r.f0 = LWC1(lo32(r.gp) - 0x7cf8u);                       // 25b440 lwc1 $f0, -0x7CF8($gp)
        r.v0 = srl32(r.a0, 8);                                   // 25b444 srl $v0, $a0, 8
        r.v1 = r.v0 & 0xffu;                                     // 25b448 andi $v1, $v0, 0xFF
        r.f0 = FPU_MUL_S(r.f1, r.f0);                            // 25b44c mul.s $f0, $f1, $f0
        t = neg64(r.v1);                                         // 25b450 bltz $v1, . + 4 + (0x4 << 2)
        SWC1(lo32(r.sp) + 0xdcu, r.f0);                          // 25b454 swc1 $f0, 0xDC($sp)
        if (t) goto L_25b464;
        r.f1 = floatOf(lo32(r.v1));                              // 25b458 mtc1 $v1, $f1
        // 25b45c b . + 4 + (0x7 << 2)
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25b460 cvt.s.w $f1, $f1
        goto L_25b47c;
    L_25b464:
        r.v0 = r.v0 & 0x1u;                                      // 25b464 andi $v0, $v0, 0x1
        r.v1 = srl32(r.v1, 1);                                   // 25b468 srl $v1, $v1, 1
        r.v0 = r.v0 | r.v1;                                      // 25b46c or $v0, $v0, $v1
        r.f1 = floatOf(lo32(r.v0));                              // 25b470 mtc1 $v0, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25b474 cvt.s.w $f1, $f1
        r.f1 = FPU_ADD_S(r.f1, r.f1);                            // 25b478 add.s $f1, $f1, $f1
    L_25b47c:
        r.f0 = LWC1(lo32(r.gp) - 0x7cf4u);                       // 25b47c lwc1 $f0, -0x7CF4($gp)
        r.v0 = srl32(r.a0, 16);                                  // 25b480 srl $v0, $a0, 16
        r.v1 = r.v0 & 0xffu;                                     // 25b484 andi $v1, $v0, 0xFF
        r.f0 = FPU_MUL_S(r.f1, r.f0);                            // 25b488 mul.s $f0, $f1, $f0
        t = neg64(r.v1);                                         // 25b48c bltz $v1, . + 4 + (0x4 << 2)
        SWC1(lo32(r.sp) + 0xe0u, r.f0);                          // 25b490 swc1 $f0, 0xE0($sp)
        if (t) goto L_25b4a0;
        r.f1 = floatOf(lo32(r.v1));                              // 25b494 mtc1 $v1, $f1
        // 25b498 b . + 4 + (0x7 << 2)
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25b49c cvt.s.w $f1, $f1
        goto L_25b4b8;
    L_25b4a0:
        r.v0 = r.v0 & 0x1u;                                      // 25b4a0 andi $v0, $v0, 0x1
        r.v1 = srl32(r.v1, 1);                                   // 25b4a4 srl $v1, $v1, 1
        r.v0 = r.v0 | r.v1;                                      // 25b4a8 or $v0, $v0, $v1
        r.f1 = floatOf(lo32(r.v0));                              // 25b4ac mtc1 $v0, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25b4b0 cvt.s.w $f1, $f1
        r.f1 = FPU_ADD_S(r.f1, r.f1);                            // 25b4b4 add.s $f1, $f1, $f1
    L_25b4b8:
        r.f0 = LWC1(lo32(r.gp) - 0x7cf0u);                       // 25b4b8 lwc1 $f0, -0x7CF0($gp)
        r.a0 = LW(lo32(r.sp) + 0x78u);                           // 25b4bc lw $a0, 0x78($sp)
        r.f0 = FPU_MUL_S(r.f1, r.f0);                            // 25b4c0 mul.s $f0, $f1, $f0
        r.v0 = r.a0 & 0xffu;                                     // 25b4c4 andi $v0, $a0, 0xFF
        t = neg64(r.v0);                                         // 25b4c8 bltz $v0, . + 4 + (0x4 << 2)
        SWC1(lo32(r.sp) + 0xe4u, r.f0);                          // 25b4cc swc1 $f0, 0xE4($sp)
        if (t) goto L_25b4dc;
        r.f1 = floatOf(lo32(r.v0));                              // 25b4d0 mtc1 $v0, $f1
        // 25b4d4 b . + 4 + (0x7 << 2)
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25b4d8 cvt.s.w $f1, $f1
        goto L_25b4f4;
    L_25b4dc:
        r.v1 = srl32(r.v0, 1);                                   // 25b4dc srl $v1, $v0, 1
        r.v0 = r.a0 & 0x1u;                                      // 25b4e0 andi $v0, $a0, 0x1
        r.v0 = r.v0 | r.v1;                                      // 25b4e4 or $v0, $v0, $v1
        r.f1 = floatOf(lo32(r.v0));                              // 25b4e8 mtc1 $v0, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25b4ec cvt.s.w $f1, $f1
        r.f1 = FPU_ADD_S(r.f1, r.f1);                            // 25b4f0 add.s $f1, $f1, $f1
    L_25b4f4:
        r.f0 = LWC1(lo32(r.gp) - 0x7cecu);                       // 25b4f4 lwc1 $f0, -0x7CEC($gp)
        r.v0 = srl32(r.a0, 8);                                   // 25b4f8 srl $v0, $a0, 8
        r.v1 = r.v0 & 0xffu;                                     // 25b4fc andi $v1, $v0, 0xFF
        r.f0 = FPU_MUL_S(r.f1, r.f0);                            // 25b500 mul.s $f0, $f1, $f0
        t = neg64(r.v1);                                         // 25b504 bltz $v1, . + 4 + (0x4 << 2)
        SWC1(lo32(r.sp) + 0xe8u, r.f0);                          // 25b508 swc1 $f0, 0xE8($sp)
        if (t) goto L_25b518;
        r.f1 = floatOf(lo32(r.v1));                              // 25b50c mtc1 $v1, $f1
        // 25b510 b . + 4 + (0x7 << 2)
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25b514 cvt.s.w $f1, $f1
        goto L_25b530;
    L_25b518:
        r.v0 = r.v0 & 0x1u;                                      // 25b518 andi $v0, $v0, 0x1
        r.v1 = srl32(r.v1, 1);                                   // 25b51c srl $v1, $v1, 1
        r.v0 = r.v0 | r.v1;                                      // 25b520 or $v0, $v0, $v1
        r.f1 = floatOf(lo32(r.v0));                              // 25b524 mtc1 $v0, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25b528 cvt.s.w $f1, $f1
        r.f1 = FPU_ADD_S(r.f1, r.f1);                            // 25b52c add.s $f1, $f1, $f1
    L_25b530:
        r.f0 = LWC1(lo32(r.gp) - 0x7ce8u);                       // 25b530 lwc1 $f0, -0x7CE8($gp)
        r.v0 = srl32(r.a0, 16);                                  // 25b534 srl $v0, $a0, 16
        r.v1 = r.v0 & 0xffu;                                     // 25b538 andi $v1, $v0, 0xFF
        r.f0 = FPU_MUL_S(r.f1, r.f0);                            // 25b53c mul.s $f0, $f1, $f0
        t = neg64(r.v1);                                         // 25b540 bltz $v1, . + 4 + (0x5 << 2)
        SWC1(lo32(r.sp) + 0xecu, r.f0);                          // 25b544 swc1 $f0, 0xEC($sp)
        if (t) goto L_25b558;
        r.f6 = floatOf(lo32(r.v1));                              // 25b548 mtc1 $v1, $f6
        r.f6 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f6))); // 25b54c cvt.s.w $f6, $f6
        // 25b550 b . + 4 + (0x8 << 2)
        r.f0 = LWC1(lo32(r.sp) + 0x4cu);                         // 25b554 lwc1 $f0, 0x4C($sp)
        goto L_25b574;
    L_25b558:
        r.v0 = r.v0 & 0x1u;                                      // 25b558 andi $v0, $v0, 0x1
        r.v1 = srl32(r.v1, 1);                                   // 25b55c srl $v1, $v1, 1
        r.v0 = r.v0 | r.v1;                                      // 25b560 or $v0, $v0, $v1
        r.f6 = floatOf(lo32(r.v0));                              // 25b564 mtc1 $v0, $f6
        r.f6 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f6))); // 25b568 cvt.s.w $f6, $f6
        r.f6 = FPU_ADD_S(r.f6, r.f6);                            // 25b56c add.s $f6, $f6, $f6
        r.f0 = LWC1(lo32(r.sp) + 0x4cu);                         // 25b570 lwc1 $f0, 0x4C($sp)
    L_25b574:
        r.f15 = LWC1(lo32(r.sp) + 0x40u);                        // 25b574 lwc1 $f15, 0x40($sp)
        r.f1 = LWC1(lo32(r.sp) + 0x50u);                         // 25b578 lwc1 $f1, 0x50($sp)
        r.f19 = LWC1(lo32(r.sp) + 0x44u);                        // 25b57c lwc1 $f19, 0x44($sp)
        r.f0 = FPU_SUB_S(r.f0, r.f15);                           // 25b580 sub.s $f0, $f0, $f15
        r.f2 = LWC1(lo32(r.sp) + 0x54u);                         // 25b584 lwc1 $f2, 0x54($sp)
        r.f1 = FPU_SUB_S(r.f1, r.f19);                           // 25b588 sub.s $f1, $f1, $f19
        r.f20 = LWC1(lo32(r.sp) + 0x48u);                        // 25b58c lwc1 $f20, 0x48($sp)
        r.f4 = FPU_MUL_S(r.f0, r.f0);                            // 25b590 mul.s $f4, $f0, $f0
        SWC1(lo32(r.sp) + 0x80u, r.f0);                          // 25b594 swc1 $f0, 0x80($sp)
        r.f2 = FPU_SUB_S(r.f2, r.f20);                           // 25b598 sub.s $f2, $f2, $f20
        r.f3 = LWC1(lo32(r.gp) - 0x7ce4u);                       // 25b59c lwc1 $f3, -0x7CE4($gp)
        r.f5 = FPU_MUL_S(r.f1, r.f1);                            // 25b5a0 mul.s $f5, $f1, $f1
        SWC1(lo32(r.sp) + 0x84u, r.f1);                          // 25b5a4 swc1 $f1, 0x84($sp)
        r.f3 = FPU_MUL_S(r.f6, r.f3);                            // 25b5a8 mul.s $f3, $f6, $f3
        r.f0 = FPU_MUL_S(r.f2, r.f2);                            // 25b5ac mul.s $f0, $f2, $f2
        SWC1(lo32(r.sp) + 0x88u, r.f2);                          // 25b5b0 swc1 $f2, 0x88($sp)
        r.f4 = FPU_ADD_S(r.f4, r.f5);                            // 25b5b4 add.s $f4, $f4, $f5
        r.f12 = FPU_ADD_S(r.f4, r.f0);                           // 25b5b8 add.s $f12, $f4, $f0
        r.f1 = FPU_SQRT_S(r.f12);                                // 25b5c4 c1 0xC0044 (sqrt.s $f1, $f12)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f1, r.f1)); // 25b5c8 c.eq.s $f1, $f1
        t = (r.fcr31 & kCondition) != 0u;                        // 25b5d0 bc1t . + 4 + (0x7 << 2)
        SWC1(lo32(r.sp) + 0xf0u, r.f3);                          // 25b5d4 swc1 $f3, 0xF0($sp)
        if (t) goto L_25b5f0;
        r.ra = 0x25b5e0u;                                        // 25b5d8 jal func_2D8398
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(t7, 15); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(t9, 25); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(12); STORE_F(15); STORE_F(19); STORE_F(20); STORE_F(21); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2d8398u, 0x25b5d8u, 0x25b5e0u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(t7, 15); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(t9, 25); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_25b5e0:
        r.f15 = LWC1(lo32(r.sp) + 0x40u);                        // 25b5e0 lwc1 $f15, 0x40($sp)
        r.f1 = FPU_MOV_S(r.f0);                                  // 25b5e4 mov.s $f1, $f0
        r.f19 = LWC1(lo32(r.sp) + 0x44u);                        // 25b5e8 lwc1 $f19, 0x44($sp)
        r.f20 = LWC1(lo32(r.sp) + 0x48u);                        // 25b5ec lwc1 $f20, 0x48($sp)
    L_25b5f0:
        r.at = sext32(0x3f800000u);                              // 25b5f0 lui $at, 0x3F80
        r.f0 = floatOf(lo32(r.at));                              // 25b5f4 mtc1 $at, $f0
        r.f6 = LWC1(lo32(r.sp) + 0x80u);                         // 25b5f8 lwc1 $f6, 0x80($sp)
        r.f0 = divS(r.f0, r.f1, r.fcr31);                        // 25b604 div.s $f0, $f0, $f1
        r.f5 = LWC1(lo32(r.sp) + 0x84u);                         // 25b608 lwc1 $f5, 0x84($sp)
        r.f23 = LWC1(lo32(r.sp) + 0x10u);                        // 25b60c lwc1 $f23, 0x10($sp)
        r.f24 = LWC1(lo32(r.sp) + 0x14u);                        // 25b610 lwc1 $f24, 0x14($sp)
        r.f9 = FPU_SUB_S(r.f23, r.f15);                          // 25b614 sub.s $f9, $f23, $f15
        r.f4 = LWC1(lo32(r.sp) + 0x88u);                         // 25b618 lwc1 $f4, 0x88($sp)
        r.f11 = FPU_SUB_S(r.f24, r.f19);                         // 25b61c sub.s $f11, $f24, $f19
        r.f22 = LWC1(lo32(r.sp) + 0x18u);                        // 25b620 lwc1 $f22, 0x18($sp)
        r.f17 = LWC1(lo32(r.sp) + 0x58u);                        // 25b624 lwc1 $f17, 0x58($sp)
        r.f6 = FPU_MUL_S(r.f6, r.f0);                            // 25b628 mul.s $f6, $f6, $f0
        r.f16 = LWC1(lo32(r.sp) + 0x5cu);                        // 25b62c lwc1 $f16, 0x5C($sp)
        r.f5 = FPU_MUL_S(r.f5, r.f0);                            // 25b630 mul.s $f5, $f5, $f0
        r.f21 = LWC1(lo32(r.sp) + 0x60u);                        // 25b634 lwc1 $f21, 0x60($sp)
        r.f4 = FPU_MUL_S(r.f4, r.f0);                            // 25b638 mul.s $f4, $f4, $f0
        r.f7 = FPU_MUL_S(r.f9, r.f6);                            // 25b63c mul.s $f7, $f9, $f6
        SWC1(lo32(r.sp) + 0x80u, r.f6);                          // 25b640 swc1 $f6, 0x80($sp)
        r.f0 = FPU_MUL_S(r.f11, r.f5);                           // 25b644 mul.s $f0, $f11, $f5
        SWC1(lo32(r.sp) + 0x84u, r.f5);                          // 25b648 swc1 $f5, 0x84($sp)
        r.f10 = FPU_SUB_S(r.f22, r.f20);                         // 25b64c sub.s $f10, $f22, $f20
        SWC1(lo32(r.sp) + 0x88u, r.f4);                          // 25b650 swc1 $f4, 0x88($sp)
        r.f1 = FPU_SUB_S(r.f17, r.f15);                          // 25b654 sub.s $f1, $f17, $f15
        r.f2 = FPU_SUB_S(r.f16, r.f19);                          // 25b658 sub.s $f2, $f16, $f19
        r.f12 = FPU_MUL_S(r.f10, r.f4);                          // 25b65c mul.s $f12, $f10, $f4
        r.f7 = FPU_ADD_S(r.f7, r.f0);                            // 25b660 add.s $f7, $f7, $f0
        r.f8 = FPU_MUL_S(r.f2, r.f5);                            // 25b664 mul.s $f8, $f2, $f5
        r.f0 = FPU_MUL_S(r.f1, r.f6);                            // 25b668 mul.s $f0, $f1, $f6
        r.f3 = FPU_SUB_S(r.f21, r.f20);                          // 25b66c sub.s $f3, $f21, $f20
        r.f14 = FPU_ADD_S(r.f7, r.f12);                          // 25b670 add.s $f14, $f7, $f12
        r.f0 = FPU_ADD_S(r.f0, r.f8);                            // 25b674 add.s $f0, $f0, $f8
        r.f13 = FPU_MUL_S(r.f3, r.f4);                           // 25b678 mul.s $f13, $f3, $f4
        r.f12 = FPU_MUL_S(r.f14, r.f4);                          // 25b67c mul.s $f12, $f14, $f4
        r.f7 = FPU_MUL_S(r.f14, r.f6);                           // 25b680 mul.s $f7, $f14, $f6
        r.f8 = FPU_MUL_S(r.f14, r.f5);                           // 25b684 mul.s $f8, $f14, $f5
        r.f14 = FPU_ADD_S(r.f0, r.f13);                          // 25b688 add.s $f14, $f0, $f13
        r.f9 = FPU_SUB_S(r.f9, r.f7);                            // 25b68c sub.s $f9, $f9, $f7
        r.f11 = FPU_SUB_S(r.f11, r.f8);                          // 25b690 sub.s $f11, $f11, $f8
        r.f6 = FPU_MUL_S(r.f14, r.f6);                           // 25b694 mul.s $f6, $f14, $f6
        r.f5 = FPU_MUL_S(r.f14, r.f5);                           // 25b698 mul.s $f5, $f14, $f5
        r.f4 = FPU_MUL_S(r.f14, r.f4);                           // 25b69c mul.s $f4, $f14, $f4
        r.f1 = FPU_SUB_S(r.f1, r.f6);                            // 25b6a0 sub.s $f1, $f1, $f6
        r.f2 = FPU_SUB_S(r.f2, r.f5);                            // 25b6a4 sub.s $f2, $f2, $f5
        r.f3 = FPU_SUB_S(r.f3, r.f4);                            // 25b6a8 sub.s $f3, $f3, $f4
        SWC1(lo32(r.sp) + 0xa0u, r.f1);                          // 25b6ac swc1 $f1, 0xA0($sp)
        r.f10 = FPU_SUB_S(r.f10, r.f12);                         // 25b6b0 sub.s $f10, $f10, $f12
        SWC1(lo32(r.sp) + 0xa4u, r.f2);                          // 25b6b4 swc1 $f2, 0xA4($sp)
        r.f9 = FPU_MUL_S(r.f9, r.f9);                            // 25b6b8 mul.s $f9, $f9, $f9
        r.f11 = FPU_MUL_S(r.f11, r.f11);                         // 25b6bc mul.s $f11, $f11, $f11
        SWC1(lo32(r.sp) + 0xa8u, r.f3);                          // 25b6c0 swc1 $f3, 0xA8($sp)
        r.f1 = FPU_MUL_S(r.f1, r.f1);                            // 25b6c4 mul.s $f1, $f1, $f1
        r.f2 = FPU_MUL_S(r.f2, r.f2);                            // 25b6c8 mul.s $f2, $f2, $f2
        r.f9 = FPU_ADD_S(r.f9, r.f11);                           // 25b6cc add.s $f9, $f9, $f11
        r.f10 = FPU_MUL_S(r.f10, r.f10);                         // 25b6d0 mul.s $f10, $f10, $f10
        r.f1 = FPU_ADD_S(r.f1, r.f2);                            // 25b6d4 add.s $f1, $f1, $f2
        r.f3 = FPU_MUL_S(r.f3, r.f3);                            // 25b6d8 mul.s $f3, $f3, $f3
        r.f6 = FPU_ADD_S(r.f9, r.f10);                           // 25b6dc add.s $f6, $f9, $f10
        r.f3 = FPU_ADD_S(r.f1, r.f3);                            // 25b6e0 add.s $f3, $f1, $f3
        r.f12 = divS(r.f6, r.f3, r.fcr31);                       // 25b6ec div.s $f12, $f6, $f3
        r.f0 = FPU_SQRT_S(r.f12);                                // 25b6f8 c1 0xC0004 (sqrt.s $f0, $f12)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f0, r.f0)); // 25b6fc c.eq.s $f0, $f0
        t = (r.fcr31 & kCondition) != 0u;                        // 25b704 bc1t . + 4 + (0xD << 2)
        r.f3 = LWC1(lo32(r.sp) + 0x4cu);                         // 25b708 lwc1 $f3, 0x4C($sp)
        if (t) goto L_25b73c;
        r.ra = 0x25b714u;                                        // 25b70c jal func_2D8398
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(t7, 15); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(t9, 25); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(10); STORE_F(11); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); STORE_F(16); STORE_F(17); STORE_F(19); STORE_F(20); STORE_F(21); STORE_F(22); STORE_F(23); STORE_F(24); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2d8398u, 0x25b70cu, 0x25b714u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(t7, 15); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(t9, 25); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_25b714:
        r.f15 = LWC1(lo32(r.sp) + 0x40u);                        // 25b714 lwc1 $f15, 0x40($sp)
        r.f19 = LWC1(lo32(r.sp) + 0x44u);                        // 25b718 lwc1 $f19, 0x44($sp)
        r.f20 = LWC1(lo32(r.sp) + 0x48u);                        // 25b71c lwc1 $f20, 0x48($sp)
        r.f23 = LWC1(lo32(r.sp) + 0x10u);                        // 25b720 lwc1 $f23, 0x10($sp)
        r.f24 = LWC1(lo32(r.sp) + 0x14u);                        // 25b724 lwc1 $f24, 0x14($sp)
        r.f22 = LWC1(lo32(r.sp) + 0x18u);                        // 25b728 lwc1 $f22, 0x18($sp)
        r.f17 = LWC1(lo32(r.sp) + 0x58u);                        // 25b72c lwc1 $f17, 0x58($sp)
        r.f16 = LWC1(lo32(r.sp) + 0x5cu);                        // 25b730 lwc1 $f16, 0x5C($sp)
        r.f21 = LWC1(lo32(r.sp) + 0x60u);                        // 25b734 lwc1 $f21, 0x60($sp)
        r.f3 = LWC1(lo32(r.sp) + 0x4cu);                         // 25b738 lwc1 $f3, 0x4C($sp)
    L_25b73c:
        r.f1 = FPU_SUB_S(r.f17, r.f15);                          // 25b73c sub.s $f1, $f17, $f15
        r.f4 = LWC1(lo32(r.sp) + 0x50u);                         // 25b740 lwc1 $f4, 0x50($sp)
        r.f2 = FPU_SUB_S(r.f16, r.f19);                          // 25b744 sub.s $f2, $f16, $f19
        r.f7 = FPU_SUB_S(r.f17, r.f3);                           // 25b748 sub.s $f7, $f17, $f3
        r.f5 = LWC1(lo32(r.sp) + 0x54u);                         // 25b74c lwc1 $f5, 0x54($sp)
        r.f8 = FPU_SUB_S(r.f16, r.f4);                           // 25b750 sub.s $f8, $f16, $f4
        r.f18 = FPU_MOV_S(r.f0);                                 // 25b754 mov.s $f18, $f0
        r.f6 = FPU_SUB_S(r.f21, r.f5);                           // 25b758 sub.s $f6, $f21, $f5
        r.f11 = LWC1(lo32(r.sp) + 0xe8u);                        // 25b75c lwc1 $f11, 0xE8($sp)
        r.f7 = FPU_MUL_S(r.f18, r.f7);                           // 25b760 mul.s $f7, $f18, $f7
        r.f10 = LWC1(lo32(r.sp) + 0xecu);                        // 25b764 lwc1 $f10, 0xEC($sp)
        r.f8 = FPU_MUL_S(r.f18, r.f8);                           // 25b768 mul.s $f8, $f18, $f8
        r.f9 = LWC1(lo32(r.sp) + 0xf0u);                         // 25b76c lwc1 $f9, 0xF0($sp)
        r.f1 = FPU_MUL_S(r.f18, r.f1);                           // 25b770 mul.s $f1, $f18, $f1
        r.f13 = LWC1(lo32(r.sp) + 0xe0u);                        // 25b774 lwc1 $f13, 0xE0($sp)
        r.f2 = FPU_MUL_S(r.f18, r.f2);                           // 25b778 mul.s $f2, $f18, $f2
        r.f12 = LWC1(lo32(r.sp) + 0xe4u);                        // 25b77c lwc1 $f12, 0xE4($sp)
        r.f0 = FPU_SUB_S(r.f21, r.f20);                          // 25b780 sub.s $f0, $f21, $f20
        r.f17 = LWC1(lo32(r.sp) + 0xd0u);                        // 25b784 lwc1 $f17, 0xD0($sp)
        r.f3 = FPU_ADD_S(r.f3, r.f7);                            // 25b788 add.s $f3, $f3, $f7
        r.f16 = LWC1(lo32(r.sp) + 0xd4u);                        // 25b78c lwc1 $f16, 0xD4($sp)
        r.f4 = FPU_ADD_S(r.f4, r.f8);                            // 25b790 add.s $f4, $f4, $f8
        r.f14 = LWC1(lo32(r.sp) + 0xd8u);                        // 25b794 lwc1 $f14, 0xD8($sp)
        r.f6 = FPU_MUL_S(r.f18, r.f6);                           // 25b798 mul.s $f6, $f18, $f6
        r.f1 = FPU_ADD_S(r.f15, r.f1);                           // 25b79c add.s $f1, $f15, $f1
        SWC1(lo32(r.sp) + 0x10cu, r.f3);                         // 25b7a0 swc1 $f3, 0x10C($sp)
        r.f2 = FPU_ADD_S(r.f19, r.f2);                           // 25b7a4 add.s $f2, $f19, $f2
        SWC1(lo32(r.sp) + 0x110u, r.f4);                         // 25b7a8 swc1 $f4, 0x110($sp)
        r.f0 = FPU_MUL_S(r.f18, r.f0);                           // 25b7ac mul.s $f0, $f18, $f0
        r.f15 = LWC1(lo32(r.sp) + 0xdcu);                        // 25b7b0 lwc1 $f15, 0xDC($sp)
        r.f5 = FPU_ADD_S(r.f5, r.f6);                            // 25b7b4 add.s $f5, $f5, $f6
        SWC1(lo32(r.sp) + 0x100u, r.f1);                         // 25b7b8 swc1 $f1, 0x100($sp)
        r.f3 = FPU_SUB_S(r.f3, r.f1);                            // 25b7bc sub.s $f3, $f3, $f1
        SWC1(lo32(r.sp) + 0x104u, r.f2);                         // 25b7c0 swc1 $f2, 0x104($sp)
        r.f0 = FPU_ADD_S(r.f20, r.f0);                           // 25b7c4 add.s $f0, $f20, $f0
        r.f4 = FPU_SUB_S(r.f4, r.f2);                            // 25b7c8 sub.s $f4, $f4, $f2
        SWC1(lo32(r.sp) + 0x114u, r.f5);                         // 25b7cc swc1 $f5, 0x114($sp)
        r.f1 = FPU_SUB_S(r.f23, r.f1);                           // 25b7d0 sub.s $f1, $f23, $f1
        SWC1(lo32(r.sp) + 0xa0u, r.f3);                          // 25b7d4 swc1 $f3, 0xA0($sp)
        r.f2 = FPU_SUB_S(r.f24, r.f2);                           // 25b7d8 sub.s $f2, $f24, $f2
        SWC1(lo32(r.sp) + 0x108u, r.f0);                         // 25b7dc swc1 $f0, 0x108($sp)
        r.f5 = FPU_SUB_S(r.f5, r.f0);                            // 25b7e0 sub.s $f5, $f5, $f0
        SWC1(lo32(r.sp) + 0xa4u, r.f4);                          // 25b7e4 swc1 $f4, 0xA4($sp)
        r.f0 = FPU_SUB_S(r.f22, r.f0);                           // 25b7e8 sub.s $f0, $f22, $f0
        r.f2 = FPU_MUL_S(r.f2, r.f2);                            // 25b7ec mul.s $f2, $f2, $f2
        r.f1 = FPU_MUL_S(r.f1, r.f1);                            // 25b7f0 mul.s $f1, $f1, $f1
        SWC1(lo32(r.sp) + 0xa8u, r.f5);                          // 25b7f4 swc1 $f5, 0xA8($sp)
        r.f3 = FPU_MUL_S(r.f3, r.f3);                            // 25b7f8 mul.s $f3, $f3, $f3
        r.f4 = FPU_MUL_S(r.f4, r.f4);                            // 25b7fc mul.s $f4, $f4, $f4
        r.f1 = FPU_ADD_S(r.f1, r.f2);                            // 25b800 add.s $f1, $f1, $f2
        r.f0 = FPU_MUL_S(r.f0, r.f0);                            // 25b804 mul.s $f0, $f0, $f0
        r.f3 = FPU_ADD_S(r.f3, r.f4);                            // 25b808 add.s $f3, $f3, $f4
        r.f5 = FPU_MUL_S(r.f5, r.f5);                            // 25b80c mul.s $f5, $f5, $f5
        r.f6 = FPU_ADD_S(r.f1, r.f0);                            // 25b810 add.s $f6, $f1, $f0
        r.f2 = FPU_SUB_S(r.f11, r.f15);                          // 25b814 sub.s $f2, $f11, $f15
        r.f3 = FPU_ADD_S(r.f3, r.f5);                            // 25b818 add.s $f3, $f3, $f5
        r.f0 = FPU_SUB_S(r.f10, r.f13);                          // 25b81c sub.s $f0, $f10, $f13
        r.f1 = FPU_SUB_S(r.f9, r.f12);                           // 25b820 sub.s $f1, $f9, $f12
        r.f3 = divS(r.f6, r.f3, r.fcr31);                        // 25b82c div.s $f3, $f6, $f3
        r.f11 = FPU_SUB_S(r.f11, r.f17);                         // 25b830 sub.s $f11, $f11, $f17
        r.f10 = FPU_SUB_S(r.f10, r.f16);                         // 25b834 sub.s $f10, $f10, $f16
        r.f9 = FPU_SUB_S(r.f9, r.f14);                           // 25b838 sub.s $f9, $f9, $f14
        r.f1 = FPU_MUL_S(r.f18, r.f1);                           // 25b83c mul.s $f1, $f18, $f1
        r.f11 = FPU_MUL_S(r.f18, r.f11);                         // 25b840 mul.s $f11, $f18, $f11
        r.f19 = FPU_SQRT_S(r.f3);                                // 25b84c c1 0x304C4 (sqrt.s $f19, $f3)
        r.f10 = FPU_MUL_S(r.f18, r.f10);                         // 25b850 mul.s $f10, $f18, $f10
        r.f9 = FPU_MUL_S(r.f18, r.f9);                           // 25b854 mul.s $f9, $f18, $f9
        r.f2 = FPU_MUL_S(r.f18, r.f2);                           // 25b858 mul.s $f2, $f18, $f2
        r.f0 = FPU_MUL_S(r.f18, r.f0);                           // 25b85c mul.s $f0, $f18, $f0
        r.f17 = FPU_ADD_S(r.f17, r.f11);                         // 25b860 add.s $f17, $f17, $f11
        r.f16 = FPU_ADD_S(r.f16, r.f10);                         // 25b864 add.s $f16, $f16, $f10
        r.f14 = FPU_ADD_S(r.f14, r.f9);                          // 25b868 add.s $f14, $f14, $f9
        r.f15 = FPU_ADD_S(r.f15, r.f2);                          // 25b86c add.s $f15, $f15, $f2
        SWC1(lo32(r.sp) + 0xb0u, r.f17);                         // 25b870 swc1 $f17, 0xB0($sp)
        r.f13 = FPU_ADD_S(r.f13, r.f0);                          // 25b874 add.s $f13, $f13, $f0
        SWC1(lo32(r.sp) + 0xb4u, r.f16);                         // 25b878 swc1 $f16, 0xB4($sp)
        r.f12 = FPU_ADD_S(r.f12, r.f1);                          // 25b87c add.s $f12, $f12, $f1
        SWC1(lo32(r.sp) + 0xb8u, r.f14);                         // 25b880 swc1 $f14, 0xB8($sp)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f19, r.f19)); // 25b884 c.eq.s $f19, $f19
        SWC1(lo32(r.sp) + 0xbcu, r.f15);                         // 25b888 swc1 $f15, 0xBC($sp)
        SWC1(lo32(r.sp) + 0xc0u, r.f13);                         // 25b88c swc1 $f13, 0xC0($sp)
        t = (r.fcr31 & kCondition) != 0u;                        // 25b890 bc1t . + 4 + (0x4 << 2)
        SWC1(lo32(r.sp) + 0xc4u, r.f12);                         // 25b894 swc1 $f12, 0xC4($sp)
        if (t) goto L_25b8a4;
        r.ra = 0x25b8a0u;                                        // 25b898 jal func_2D8398
        r.f12 = FPU_MOV_S(r.f3);                                 // 25b89c mov.s $f12, $f3
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(t7, 15); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(t9, 25); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(10); STORE_F(11); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); STORE_F(16); STORE_F(17); STORE_F(18); STORE_F(19); STORE_F(20); STORE_F(21); STORE_F(22); STORE_F(23); STORE_F(24); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2d8398u, 0x25b898u, 0x25b8a0u)) return;
        LOAD_GPR(a1, 5); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(t7, 15); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(t9, 25); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(13); LOAD_F(14); LOAD_F(15); LOAD_F(16); LOAD_F(17); LOAD_F(20); LOAD_F(21); LOAD_F(22); LOAD_F(23); LOAD_F(24); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_25b8a0:
        r.f19 = FPU_MOV_S(r.f0);                                 // 25b8a0 mov.s $f19, $f0
    L_25b8a4:
        r.f5 = LWC1(lo32(r.sp) + 0xb4u);                         // 25b8a4 lwc1 $f5, 0xB4($sp)
        r.f18 = FPU_MOV_S(r.f19);                                // 25b8a8 mov.s $f18, $f19
        r.f2 = LWC1(lo32(r.sp) + 0xc0u);                         // 25b8ac lwc1 $f2, 0xC0($sp)
        r.f4 = LWC1(lo32(r.sp) + 0xb0u);                         // 25b8b0 lwc1 $f4, 0xB0($sp)
        r.f0 = LWC1(lo32(r.sp) + 0xbcu);                         // 25b8b4 lwc1 $f0, 0xBC($sp)
        r.f2 = FPU_SUB_S(r.f2, r.f5);                            // 25b8b8 sub.s $f2, $f2, $f5
        r.f6 = LWC1(lo32(r.sp) + 0xb8u);                         // 25b8bc lwc1 $f6, 0xB8($sp)
        r.f1 = LWC1(lo32(r.sp) + 0xc4u);                         // 25b8c0 lwc1 $f1, 0xC4($sp)
        r.f0 = FPU_SUB_S(r.f0, r.f4);                            // 25b8c4 sub.s $f0, $f0, $f4
        r.f2 = FPU_MUL_S(r.f18, r.f2);                           // 25b8c8 mul.s $f2, $f18, $f2
        r.at = sext32(0x437f0000u);                              // 25b8cc lui $at, 0x437F
        r.f3 = floatOf(lo32(r.at));                              // 25b8d0 mtc1 $at, $f3
        r.f1 = FPU_SUB_S(r.f1, r.f6);                            // 25b8d4 sub.s $f1, $f1, $f6
        r.a2 = LW(lo32(r.sp) + 0x124u);                          // 25b8d8 lw $a2, 0x124($sp)
        r.f0 = FPU_MUL_S(r.f18, r.f0);                           // 25b8dc mul.s $f0, $f18, $f0
        r.f5 = FPU_ADD_S(r.f5, r.f2);                            // 25b8e0 add.s $f5, $f5, $f2
        r.f1 = FPU_MUL_S(r.f18, r.f1);                           // 25b8e4 mul.s $f1, $f18, $f1
        r.f4 = FPU_ADD_S(r.f4, r.f0);                            // 25b8e8 add.s $f4, $f4, $f0
        r.f2 = FPU_MUL_S(r.f5, r.f3);                            // 25b8ec mul.s $f2, $f5, $f3
        SWC1(lo32(r.a2) + 0x4u, r.f5);                           // 25b8f0 swc1 $f5, 0x4($a2)
        r.f6 = FPU_ADD_S(r.f6, r.f1);                            // 25b8f4 add.s $f6, $f6, $f1
        r.f0 = FPU_MUL_S(r.f4, r.f3);                            // 25b8f8 mul.s $f0, $f4, $f3
        SWC1(lo32(r.a2), r.f4);                                  // 25b8fc swc1 $f4, 0x0($a2)
        r.f1 = floatOf(static_cast<uint32_t>(PS2_FPU_ROUND_NEAREST_W(r.f2))); // 25b900 cvt.w.s $f1, $f2
        r.v0 = sext32(bitsOf(r.f1));                             // 25b904 mfc1 $v0, $f1
        r.f3 = FPU_MUL_S(r.f6, r.f3);                            // 25b908 mul.s $f3, $f6, $f3
        SWC1(lo32(r.a2) + 0x8u, r.f6);                           // 25b90c swc1 $f6, 0x8($a2)
        r.f1 = floatOf(static_cast<uint32_t>(PS2_FPU_ROUND_NEAREST_W(r.f0))); // 25b910 cvt.w.s $f1, $f0
        r.v1 = sext32(bitsOf(r.f1));                             // 25b914 mfc1 $v1, $f1
        r.v0 = sll32(r.v0, 8);                                   // 25b918 sll $v0, $v0, 8
        r.f0 = floatOf(static_cast<uint32_t>(PS2_FPU_ROUND_NEAREST_W(r.f3))); // 25b91c cvt.w.s $f0, $f3
        r.a0 = sext32(bitsOf(r.f0));                             // 25b920 mfc1 $a0, $f0
        r.v1 = r.v1 | r.v0;                                      // 25b924 or $v1, $v1, $v0
        r.v0 = LW(lo32(r.sp) + 0x128u);                          // 25b928 lw $v0, 0x128($sp)
        r.a0 = sll32(r.a0, 16);                                  // 25b92c sll $a0, $a0, 16
        r.v1 = r.v1 | r.a0;                                      // 25b930 or $v1, $v1, $a0
        // 25b934 b . + 4 + (0x38 << 2)
        WRITE32(lo32(r.v0) + 0x21cu, lo32(r.v1));                // 25b938 sw $v1, 0x21C($v0)
        goto L_25ba18;
    L_25b93c:
        r.v0 = sext32(0x4c0000u);                                // 25b93c lui $v0, 0x4C
        r.v0 = r.v0 | 0x4c4cu;                                   // 25b940 ori $v0, $v0, 0x4C4C
        r.f0 = LWC1(lo32(r.gp) - 0x7ce0u);                       // 25b944 lwc1 $f0, -0x7CE0($gp)
        WRITE32(lo32(r.v1) + 0x21cu, lo32(r.v0));                // 25b948 sw $v0, 0x21C($v1)
        r.a0 = LW(lo32(r.sp) + 0x124u);                          // 25b94c lw $a0, 0x124($sp)
        SWC1(lo32(r.a0) + 0x8u, r.f0);                           // 25b950 swc1 $f0, 0x8($a0)
        SWC1(lo32(r.a0), r.f0);                                  // 25b954 swc1 $f0, 0x0($a0)
        // 25b958 b . + 4 + (0x2F << 2)
        SWC1(lo32(r.a0) + 0x4u, r.f0);                           // 25b95c swc1 $f0, 0x4($a0)
        goto L_25ba18;
    L_25b960:
        t = neg64(r.v0);                                         // 25b960 bltz $v0, . + 4 + (0x4 << 2)
        r.v1 = srl32(r.v0, 1);                                   // 25b964 srl $v1, $v0, 1
        if (t) goto L_25b974;
        r.f1 = floatOf(lo32(r.v0));                              // 25b968 mtc1 $v0, $f1
        // 25b96c b . + 4 + (0x6 << 2)
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25b970 cvt.s.w $f1, $f1
        goto L_25b988;
    L_25b974:
        r.v0 = r.a0 & 0x1u;                                      // 25b974 andi $v0, $a0, 0x1
        r.v0 = r.v0 | r.v1;                                      // 25b978 or $v0, $v0, $v1
        r.f1 = floatOf(lo32(r.v0));                              // 25b97c mtc1 $v0, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25b980 cvt.s.w $f1, $f1
        r.f1 = FPU_ADD_S(r.f1, r.f1);                            // 25b984 add.s $f1, $f1, $f1
    L_25b988:
        r.f0 = LWC1(lo32(r.gp) - 0x7cdcu);                       // 25b988 lwc1 $f0, -0x7CDC($gp)
        r.v0 = srl32(r.a0, 8);                                   // 25b98c srl $v0, $a0, 8
        r.a1 = LW(lo32(r.sp) + 0x124u);                          // 25b990 lw $a1, 0x124($sp)
        r.v1 = r.v0 & 0xffu;                                     // 25b994 andi $v1, $v0, 0xFF
        r.f0 = FPU_MUL_S(r.f1, r.f0);                            // 25b998 mul.s $f0, $f1, $f0
        t = neg64(r.v1);                                         // 25b99c bltz $v1, . + 4 + (0x4 << 2)
        SWC1(lo32(r.a1), r.f0);                                  // 25b9a0 swc1 $f0, 0x0($a1)
        if (t) goto L_25b9b0;
        r.f1 = floatOf(lo32(r.v1));                              // 25b9a4 mtc1 $v1, $f1
        // 25b9a8 b . + 4 + (0x7 << 2)
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25b9ac cvt.s.w $f1, $f1
        goto L_25b9c8;
    L_25b9b0:
        r.v0 = r.v0 & 0x1u;                                      // 25b9b0 andi $v0, $v0, 0x1
        r.v1 = srl32(r.v1, 1);                                   // 25b9b4 srl $v1, $v1, 1
        r.v0 = r.v0 | r.v1;                                      // 25b9b8 or $v0, $v0, $v1
        r.f1 = floatOf(lo32(r.v0));                              // 25b9bc mtc1 $v0, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25b9c0 cvt.s.w $f1, $f1
        r.f1 = FPU_ADD_S(r.f1, r.f1);                            // 25b9c4 add.s $f1, $f1, $f1
    L_25b9c8:
        r.f0 = LWC1(lo32(r.gp) - 0x7cd8u);                       // 25b9c8 lwc1 $f0, -0x7CD8($gp)
        r.v0 = srl32(r.a0, 16);                                  // 25b9cc srl $v0, $a0, 16
        r.a2 = LW(lo32(r.sp) + 0x124u);                          // 25b9d0 lw $a2, 0x124($sp)
        r.v1 = r.v0 & 0xffu;                                     // 25b9d4 andi $v1, $v0, 0xFF
        r.f0 = FPU_MUL_S(r.f1, r.f0);                            // 25b9d8 mul.s $f0, $f1, $f0
        t = neg64(r.v1);                                         // 25b9dc bltz $v1, . + 4 + (0x4 << 2)
        SWC1(lo32(r.a2) + 0x4u, r.f0);                           // 25b9e0 swc1 $f0, 0x4($a2)
        if (t) goto L_25b9f0;
        r.f1 = floatOf(lo32(r.v1));                              // 25b9e4 mtc1 $v1, $f1
        // 25b9e8 b . + 4 + (0x7 << 2)
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25b9ec cvt.s.w $f1, $f1
        goto L_25ba08;
    L_25b9f0:
        r.v0 = r.v0 & 0x1u;                                      // 25b9f0 andi $v0, $v0, 0x1
        r.v1 = srl32(r.v1, 1);                                   // 25b9f4 srl $v1, $v1, 1
        r.v0 = r.v0 | r.v1;                                      // 25b9f8 or $v0, $v0, $v1
        r.f1 = floatOf(lo32(r.v0));                              // 25b9fc mtc1 $v0, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 25ba00 cvt.s.w $f1, $f1
        r.f1 = FPU_ADD_S(r.f1, r.f1);                            // 25ba04 add.s $f1, $f1, $f1
    L_25ba08:
        r.f0 = LWC1(lo32(r.gp) - 0x7cd4u);                       // 25ba08 lwc1 $f0, -0x7CD4($gp)
        r.t1 = LW(lo32(r.sp) + 0x124u);                          // 25ba0c lw $t1, 0x124($sp)
        r.f0 = FPU_MUL_S(r.f1, r.f0);                            // 25ba10 mul.s $f0, $f1, $f0
        SWC1(lo32(r.t1) + 0x8u, r.f0);                           // 25ba14 swc1 $f0, 0x8($t1)
    L_25ba18:
        r.t2 = LW(lo32(r.sp) + 0x134u);                          // 25ba18 lw $t2, 0x134($sp)
        t = r.t2 == 0u;                                          // 25ba1c beqz $t2, . + 4 + (0x64 << 2)
        r.t3 = LW(lo32(r.sp) + 0x138u);                          // 25ba20 lw $t3, 0x138($sp)
        if (t) goto L_25bbb0;
        r.v0 = LW(lo32(r.t3) + 0x1a4u);                          // 25ba24 lw $v0, 0x1A4($t3)
        t = r.v0 == 0u;                                          // 25ba28 beqz $v0, . + 4 + (0x5 << 2)
        r.a0 = 0u;                                               // 25ba2c daddu $a0, $zero, $zero
        if (t) goto L_25ba40;
        r.v0 = LW(lo32(r.v0) + 0x20u);                           // 25ba30 lw $v0, 0x20($v0)
        r.v1 = LHU(lo32(r.v0) + 0x124u);                         // 25ba34 lhu $v1, 0x124($v0)
        // 25ba38 b . + 4 + (0x2 << 2)
        r.s1 = r.v1 & 0x1u;                                      // 25ba3c andi $s1, $v1, 0x1
        goto L_25ba44;
    L_25ba40:
        r.s1 = 0u;                                               // 25ba40 daddu $s1, $zero, $zero
    L_25ba44:
        r.v1 = LW(lo32(r.sp) + 0x138u);                          // 25ba44 lw $v1, 0x138($sp)
        r.v0 = LW(lo32(r.v1) + 0x264u);                          // 25ba48 lw $v0, 0x264($v1)
        t = r.v0 == 0u;                                          // 25ba4c beqz $v0, . + 4 + (0x4 << 2)
        r.s0 = 0u;                                               // 25ba50 daddu $s0, $zero, $zero
        if (t) goto L_25ba60;
        r.v0 = LW(lo32(r.v0) + 0x20u);                           // 25ba54 lw $v0, 0x20($v0)
        r.v1 = LHU(lo32(r.v0) + 0x124u);                         // 25ba58 lhu $v1, 0x124($v0)
        r.s0 = r.v1 & 0x1u;                                      // 25ba5c andi $s0, $v1, 0x1
    L_25ba60:
        t = r.s1 == 0u;                                          // 25ba60 beqz $s1, . + 4 + (0x5 << 2)
        r.a1 = LW(lo32(r.sp) + 0x138u);                          // 25ba64 lw $a1, 0x138($sp)
        if (t) goto L_25ba78;
        r.ra = 0x25ba70u;                                        // 25ba68 jal func_2906A0
        r.a0 = addiu(r.a1, 408);                                 // 25ba6c addiu $a0, $a1, 0x198
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(t7, 15); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(t9, 25); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(10); STORE_F(11); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); STORE_F(16); STORE_F(17); STORE_F(18); STORE_F(19); STORE_F(20); STORE_F(21); STORE_F(22); STORE_F(23); STORE_F(24); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2906a0u, 0x25ba68u, 0x25ba70u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(t7, 15); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(t9, 25); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(13); LOAD_F(14); LOAD_F(15); LOAD_F(16); LOAD_F(17); LOAD_F(18); LOAD_F(19); LOAD_F(20); LOAD_F(21); LOAD_F(22); LOAD_F(23); LOAD_F(24); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_25ba70:
        // 25ba70 b . + 4 + (0x6 << 2)
        r.a0 = r.v0;                                             // 25ba74 daddu $a0, $v0, $zero
        goto L_25ba8c;
    L_25ba78:
        t = r.s0 == 0u;                                          // 25ba78 beqz $s0, . + 4 + (0x4 << 2)
        r.a2 = LW(lo32(r.sp) + 0x138u);                          // 25ba7c lw $a2, 0x138($sp)
        if (t) goto L_25ba8c;
        r.ra = 0x25ba88u;                                        // 25ba80 jal func_2906A0
        r.a0 = addiu(r.a2, 600);                                 // 25ba84 addiu $a0, $a2, 0x258
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(t7, 15); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(t9, 25); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(10); STORE_F(11); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); STORE_F(16); STORE_F(17); STORE_F(18); STORE_F(19); STORE_F(20); STORE_F(21); STORE_F(22); STORE_F(23); STORE_F(24); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2906a0u, 0x25ba80u, 0x25ba88u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(t7, 15); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(t9, 25); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(13); LOAD_F(14); LOAD_F(15); LOAD_F(16); LOAD_F(17); LOAD_F(18); LOAD_F(19); LOAD_F(20); LOAD_F(21); LOAD_F(22); LOAD_F(23); LOAD_F(24); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_25ba88:
        r.a0 = r.v0;                                             // 25ba88 daddu $a0, $v0, $zero
    L_25ba8c:
        t = r.a0 == 0u;                                          // 25ba8c beqz $a0, . + 4 + (0x49 << 2)
        r.t2 = LW(lo32(r.sp) + 0x120u);                          // 25ba90 lw $t2, 0x120($sp)
        if (t) goto L_25bbb4;
        r.ra = 0x25ba9cu;                                        // 25ba94 jal func_28D038
        r.a1 = addiu(r.sp, 16);                                  // 25ba98 addiu $a1, $sp, 0x10
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(t7, 15); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(t9, 25); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(10); STORE_F(11); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); STORE_F(16); STORE_F(17); STORE_F(18); STORE_F(19); STORE_F(20); STORE_F(21); STORE_F(22); STORE_F(23); STORE_F(24); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x28d038u, 0x25ba94u, 0x25ba9cu)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(t7, 15); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(t9, 25); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(13); LOAD_F(14); LOAD_F(15); LOAD_F(16); LOAD_F(17); LOAD_F(18); LOAD_F(19); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_25ba9c:
        t = r.s1 == 0u;                                          // 25ba9c beqz $s1, . + 4 + (0x6 << 2)
        r.t1 = LW(lo32(r.sp) + 0x138u);                          // 25baa0 lw $t1, 0x138($sp)
        if (t) goto L_25bab8;
        r.t2 = LW(lo32(r.sp) + 0x120u);                          // 25baa4 lw $t2, 0x120($sp)
        r.v0 = LW(lo32(r.t1) + 0x1a4u);                          // 25baa8 lw $v0, 0x1A4($t1)
        r.v1 = LW(lo32(r.v0) + 0x20u);                           // 25baac lw $v1, 0x20($v0)
        if (r.v1 == r.t2) goto L_25bad4;                         // 25bab0 beq $v1, $t2, . + 4 + (0x8 << 2)
    L_25bab8:
        t = r.s0 == 0u;                                          // 25bab8 beqz $s0, . + 4 + (0x18 << 2)
        r.t3 = LW(lo32(r.sp) + 0x138u);                          // 25babc lw $t3, 0x138($sp)
        if (t) goto L_25bb1c;
        r.v0 = LW(lo32(r.t3) + 0x264u);                          // 25bac0 lw $v0, 0x264($t3)
        r.v1 = LW(lo32(r.v0) + 0x20u);                           // 25bac4 lw $v1, 0x20($v0)
        r.v0 = LW(lo32(r.sp) + 0x120u);                          // 25bac8 lw $v0, 0x120($sp)
        if (r.v1 != r.v0) goto L_25bb1c;                         // 25bacc bne $v1, $v0, . + 4 + (0x13 << 2)
    L_25bad4:
        r.f1 = LWC1(lo32(r.gp) - 0x7cd0u);                       // 25bad4 lwc1 $f1, -0x7CD0($gp)
        r.f3 = LWC1(lo32(r.sp) + 0x10u);                         // 25bad8 lwc1 $f3, 0x10($sp)
        r.f4 = LWC1(lo32(r.sp) + 0x14u);                         // 25badc lwc1 $f4, 0x14($sp)
        r.f5 = LWC1(lo32(r.sp) + 0x18u);                         // 25bae0 lwc1 $f5, 0x18($sp)
        r.f3 = FPU_MUL_S(r.f3, r.f1);                            // 25bae4 mul.s $f3, $f3, $f1
        r.v1 = LW(lo32(r.sp) + 0x124u);                          // 25bae8 lw $v1, 0x124($sp)
        r.f4 = FPU_MUL_S(r.f4, r.f1);                            // 25baec mul.s $f4, $f4, $f1
        r.f5 = FPU_MUL_S(r.f5, r.f1);                            // 25baf0 mul.s $f5, $f5, $f1
        r.f2 = LWC1(lo32(r.v1));                                 // 25baf4 lwc1 $f2, 0x0($v1)
        r.f0 = LWC1(lo32(r.v1) + 0x4u);                          // 25baf8 lwc1 $f0, 0x4($v1)
        r.f1 = LWC1(lo32(r.v1) + 0x8u);                          // 25bafc lwc1 $f1, 0x8($v1)
        r.f2 = FPU_ADD_S(r.f2, r.f3);                            // 25bb00 add.s $f2, $f2, $f3
        r.f0 = FPU_ADD_S(r.f0, r.f4);                            // 25bb04 add.s $f0, $f0, $f4
        r.f1 = FPU_ADD_S(r.f1, r.f5);                            // 25bb08 add.s $f1, $f1, $f5
        SWC1(lo32(r.v1), r.f2);                                  // 25bb0c swc1 $f2, 0x0($v1)
        SWC1(lo32(r.v1) + 0x4u, r.f0);                           // 25bb10 swc1 $f0, 0x4($v1)
        // 25bb14 b . + 4 + (0x12 << 2)
        SWC1(lo32(r.v1) + 0x8u, r.f1);                           // 25bb18 swc1 $f1, 0x8($v1)
        goto L_25bb60;
    L_25bb1c:
        r.f1 = LWC1(lo32(r.gp) - 0x7cccu);                       // 25bb1c lwc1 $f1, -0x7CCC($gp)
        r.f3 = LWC1(lo32(r.sp) + 0x10u);                         // 25bb20 lwc1 $f3, 0x10($sp)
        r.f4 = LWC1(lo32(r.sp) + 0x14u);                         // 25bb24 lwc1 $f4, 0x14($sp)
        r.f5 = LWC1(lo32(r.sp) + 0x18u);                         // 25bb28 lwc1 $f5, 0x18($sp)
        r.f3 = FPU_MUL_S(r.f3, r.f1);                            // 25bb2c mul.s $f3, $f3, $f1
        r.a0 = LW(lo32(r.sp) + 0x124u);                          // 25bb30 lw $a0, 0x124($sp)
        r.f4 = FPU_MUL_S(r.f4, r.f1);                            // 25bb34 mul.s $f4, $f4, $f1
        r.f5 = FPU_MUL_S(r.f5, r.f1);                            // 25bb38 mul.s $f5, $f5, $f1
        r.f2 = LWC1(lo32(r.a0));                                 // 25bb3c lwc1 $f2, 0x0($a0)
        r.f0 = LWC1(lo32(r.a0) + 0x4u);                          // 25bb40 lwc1 $f0, 0x4($a0)
        r.f1 = LWC1(lo32(r.a0) + 0x8u);                          // 25bb44 lwc1 $f1, 0x8($a0)
        r.f2 = FPU_ADD_S(r.f2, r.f3);                            // 25bb48 add.s $f2, $f2, $f3
        r.f0 = FPU_ADD_S(r.f0, r.f4);                            // 25bb4c add.s $f0, $f0, $f4
        r.f1 = FPU_ADD_S(r.f1, r.f5);                            // 25bb50 add.s $f1, $f1, $f5
        SWC1(lo32(r.a0), r.f2);                                  // 25bb54 swc1 $f2, 0x0($a0)
        SWC1(lo32(r.a0) + 0x4u, r.f0);                           // 25bb58 swc1 $f0, 0x4($a0)
        SWC1(lo32(r.a0) + 0x8u, r.f1);                           // 25bb5c swc1 $f1, 0x8($a0)
    L_25bb60:
        r.a1 = LW(lo32(r.sp) + 0x124u);                          // 25bb60 lw $a1, 0x124($sp)
        r.at = sext32(0x3f800000u);                              // 25bb64 lui $at, 0x3F80
        r.f1 = floatOf(lo32(r.at));                              // 25bb68 mtc1 $at, $f1
        r.f0 = LWC1(lo32(r.a1));                                 // 25bb6c lwc1 $f0, 0x0($a1)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 25bb70 c.lt.s $f1, $f0
        if ((r.fcr31 & kCondition) != 0u)                        // 25bb78 bc1tl . + 4 + (0x1 << 2)
        {
            SWC1(lo32(r.a1), r.f1);                                  // 25bb7c swc1 $f1, 0x0($a1)
            goto L_25bb80;
        }
    L_25bb80:
        r.a2 = LW(lo32(r.sp) + 0x124u);                          // 25bb80 lw $a2, 0x124($sp)
        r.f0 = LWC1(lo32(r.a2) + 0x4u);                          // 25bb84 lwc1 $f0, 0x4($a2)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 25bb88 c.lt.s $f1, $f0
        if ((r.fcr31 & kCondition) != 0u)                        // 25bb90 bc1tl . + 4 + (0x1 << 2)
        {
            SWC1(lo32(r.a2) + 0x4u, r.f1);                           // 25bb94 swc1 $f1, 0x4($a2)
            goto L_25bb98;
        }
    L_25bb98:
        r.t1 = LW(lo32(r.sp) + 0x124u);                          // 25bb98 lw $t1, 0x124($sp)
        r.f0 = LWC1(lo32(r.t1) + 0x8u);                          // 25bb9c lwc1 $f0, 0x8($t1)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 25bba0 c.lt.s $f1, $f0
        if ((r.fcr31 & kCondition) != 0u)                        // 25bba8 bc1tl . + 4 + (0x1 << 2)
        {
            SWC1(lo32(r.t1) + 0x8u, r.f1);                           // 25bbac swc1 $f1, 0x8($t1)
            goto L_25bbb0;
        }
    L_25bbb0:
        r.t2 = LW(lo32(r.sp) + 0x120u);                          // 25bbb0 lw $t2, 0x120($sp)
    L_25bbb4:
        r.f0 = floatOf(lo32(0u));                                // 25bbb4 mtc1 $zero, $f0
        r.f2 = LWC1(lo32(r.t2) + 0x138u);                        // 25bbb8 lwc1 $f2, 0x138($t2)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f2)); // 25bbbc c.lt.s $f0, $f2
        t = (r.fcr31 & kCondition) == 0u;                        // 25bbc4 bc1f . + 4 + (0x1F << 2)
        r.t3 = LW(lo32(r.sp) + 0x124u);                          // 25bbc8 lw $t3, 0x124($sp)
        if (t) goto L_25bc44;
        r.f3 = LWC1(lo32(r.t2) + 0x13cu);                        // 25bbcc lwc1 $f3, 0x13C($t2)
        r.f3 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f3))); // 25bbd0 cvt.s.w $f3, $f3
        r.at = sext32(0x3f800000u);                              // 25bbd4 lui $at, 0x3F80
        r.f0 = floatOf(lo32(r.at));                              // 25bbd8 mtc1 $at, $f0
        r.f4 = LWC1(lo32(r.t2) + 0x140u);                        // 25bbdc lwc1 $f4, 0x140($t2)
        r.f4 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f4))); // 25bbe0 cvt.s.w $f4, $f4
        r.f0 = FPU_SUB_S(r.f0, r.f2);                            // 25bbe4 sub.s $f0, $f0, $f2
        r.f7 = LWC1(lo32(r.gp) - 0x7cc8u);                       // 25bbe8 lwc1 $f7, -0x7CC8($gp)
        r.f3 = FPU_MUL_S(r.f3, r.f2);                            // 25bbec mul.s $f3, $f3, $f2
        r.f1 = LWC1(lo32(r.t3));                                 // 25bbf0 lwc1 $f1, 0x0($t3)
        r.f2 = LWC1(lo32(r.t3) + 0x4u);                          // 25bbf4 lwc1 $f2, 0x4($t3)
        r.f5 = LWC1(lo32(r.t2) + 0x144u);                        // 25bbf8 lwc1 $f5, 0x144($t2)
        r.f5 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f5))); // 25bbfc cvt.s.w $f5, $f5
        r.f1 = FPU_MUL_S(r.f1, r.f0);                            // 25bc00 mul.s $f1, $f1, $f0
        r.f6 = LWC1(lo32(r.t3) + 0x8u);                          // 25bc04 lwc1 $f6, 0x8($t3)
        r.f3 = FPU_MUL_S(r.f3, r.f7);                            // 25bc08 mul.s $f3, $f3, $f7
        r.f2 = FPU_MUL_S(r.f2, r.f0);                            // 25bc0c mul.s $f2, $f2, $f0
        r.f6 = FPU_MUL_S(r.f6, r.f0);                            // 25bc10 mul.s $f6, $f6, $f0
        r.f1 = FPU_ADD_S(r.f1, r.f3);                            // 25bc14 add.s $f1, $f1, $f3
        SWC1(lo32(r.t3), r.f1);                                  // 25bc18 swc1 $f1, 0x0($t3)
        r.f0 = LWC1(lo32(r.t2) + 0x138u);                        // 25bc1c lwc1 $f0, 0x138($t2)
        r.f4 = FPU_MUL_S(r.f4, r.f0);                            // 25bc20 mul.s $f4, $f4, $f0
        r.f4 = FPU_MUL_S(r.f4, r.f7);                            // 25bc24 mul.s $f4, $f4, $f7
        r.f2 = FPU_ADD_S(r.f2, r.f4);                            // 25bc28 add.s $f2, $f2, $f4
        SWC1(lo32(r.t3) + 0x4u, r.f2);                           // 25bc2c swc1 $f2, 0x4($t3)
        r.f0 = LWC1(lo32(r.t2) + 0x138u);                        // 25bc30 lwc1 $f0, 0x138($t2)
        r.f5 = FPU_MUL_S(r.f5, r.f0);                            // 25bc34 mul.s $f5, $f5, $f0
        r.f5 = FPU_MUL_S(r.f5, r.f7);                            // 25bc38 mul.s $f5, $f5, $f7
        r.f6 = FPU_ADD_S(r.f6, r.f5);                            // 25bc3c add.s $f6, $f6, $f5
        SWC1(lo32(r.t3) + 0x8u, r.f6);                           // 25bc40 swc1 $f6, 0x8($t3)
    L_25bc44:
        r.ra = READ64(lo32(r.sp) + 0x250u);                      // 25bc44 ld $ra, 0x250($sp)
        r.fp = READ64(lo32(r.sp) + 0x240u);                      // 25bc48 ld $fp, 0x240($sp)
        r.s7 = READ64(lo32(r.sp) + 0x230u);                      // 25bc4c ld $s7, 0x230($sp)
        r.s6 = READ64(lo32(r.sp) + 0x220u);                      // 25bc50 ld $s6, 0x220($sp)
        r.s5 = READ64(lo32(r.sp) + 0x210u);                      // 25bc54 ld $s5, 0x210($sp)
        r.s4 = READ64(lo32(r.sp) + 0x200u);                      // 25bc58 ld $s4, 0x200($sp)
        r.s3 = READ64(lo32(r.sp) + 0x1f0u);                      // 25bc5c ld $s3, 0x1F0($sp)
        r.s2 = READ64(lo32(r.sp) + 0x1e0u);                      // 25bc60 ld $s2, 0x1E0($sp)
        r.s1 = READ64(lo32(r.sp) + 0x1d0u);                      // 25bc64 ld $s1, 0x1D0($sp)
        r.s0 = READ64(lo32(r.sp) + 0x1c0u);                      // 25bc68 ld $s0, 0x1C0($sp)
        r.f24 = LWC1(lo32(r.sp) + 0x280u);                       // 25bc6c lwc1 $f24, 0x280($sp)
        r.f23 = LWC1(lo32(r.sp) + 0x278u);                       // 25bc70 lwc1 $f23, 0x278($sp)
        r.f22 = LWC1(lo32(r.sp) + 0x270u);                       // 25bc74 lwc1 $f22, 0x270($sp)
        r.f21 = LWC1(lo32(r.sp) + 0x268u);                       // 25bc78 lwc1 $f21, 0x268($sp)
        r.f20 = LWC1(lo32(r.sp) + 0x260u);                       // 25bc7c lwc1 $f20, 0x260($sp)
        jt = lo32(r.ra);                                         // 25bc80 jr $ra
        r.sp = addiu(r.sp, 656);                                 // 25bc84 addiu $sp, $sp, 0x290
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(t7, 15); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(t9, 25); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(10); STORE_F(11); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); STORE_F(16); STORE_F(17); STORE_F(18); STORE_F(19); STORE_F(20); STORE_F(21); STORE_F(22); STORE_F(23); STORE_F(24); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        ctx->pc = jt;
        return;
    }

    // ---- calMatrices (0x212e08)
    //
    // calMatrices: a skeleton's bone matrices for the frame from its
    // animations (key frames, slerps, fillets: calls).

    struct CalMatricesRegs
    {
        uint64_t at, v0, v1, a0, a1, a2, a3, t0, t1, s0, s1, s2, s3, s4, s5, s6, s7, gp, sp, fp, ra;
        float f0, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f20, f21, f22, f23, f24, f25, f26;
        uint32_t fcr31;
        uint64_t lo, hi;
    };

    void nativeCalMatrices(G_ARGS)
    {
        CalMatricesRegs r;
        bool t;
        uint32_t jt;
        (void)t;
        (void)jt;
        LOAD_GPR(at, 1); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_GPR(ra, 31); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(20); LOAD_F(21); LOAD_F(22); LOAD_F(23); LOAD_F(24); LOAD_F(25); LOAD_F(26); r.fcr31 = ctx->fcr31;
        r.sp = addiu(r.sp, -784);                                // 212e08 addiu $sp, $sp, -0x310
        r.v1 = addiu(0u, 4096);                                  // 212e0c addiu $v1, $zero, 0x1000
        WRITE64(lo32(r.sp) + 0x240u, r.s1);                      // 212e10 sd $s1, 0x240($sp)
        WRITE64(lo32(r.sp) + 0x2c0u, r.ra);                      // 212e14 sd $ra, 0x2C0($sp)
        r.s1 = r.a0;                                             // 212e18 daddu $s1, $a0, $zero
        WRITE64(lo32(r.sp) + 0x2b0u, r.fp);                      // 212e1c sd $fp, 0x2B0($sp)
        WRITE64(lo32(r.sp) + 0x2a0u, r.s7);                      // 212e20 sd $s7, 0x2A0($sp)
        WRITE64(lo32(r.sp) + 0x290u, r.s6);                      // 212e24 sd $s6, 0x290($sp)
        WRITE64(lo32(r.sp) + 0x280u, r.s5);                      // 212e28 sd $s5, 0x280($sp)
        WRITE64(lo32(r.sp) + 0x270u, r.s4);                      // 212e2c sd $s4, 0x270($sp)
        WRITE64(lo32(r.sp) + 0x260u, r.s3);                      // 212e30 sd $s3, 0x260($sp)
        WRITE64(lo32(r.sp) + 0x250u, r.s2);                      // 212e34 sd $s2, 0x250($sp)
        WRITE64(lo32(r.sp) + 0x230u, r.s0);                      // 212e38 sd $s0, 0x230($sp)
        SWC1(lo32(r.sp) + 0x300u, r.f26);                        // 212e3c swc1 $f26, 0x300($sp)
        SWC1(lo32(r.sp) + 0x2f8u, r.f25);                        // 212e40 swc1 $f25, 0x2F8($sp)
        SWC1(lo32(r.sp) + 0x2f0u, r.f24);                        // 212e44 swc1 $f24, 0x2F0($sp)
        SWC1(lo32(r.sp) + 0x2e8u, r.f23);                        // 212e48 swc1 $f23, 0x2E8($sp)
        SWC1(lo32(r.sp) + 0x2e0u, r.f22);                        // 212e4c swc1 $f22, 0x2E0($sp)
        SWC1(lo32(r.sp) + 0x2d8u, r.f21);                        // 212e50 swc1 $f21, 0x2D8($sp)
        SWC1(lo32(r.sp) + 0x2d0u, r.f20);                        // 212e54 swc1 $f20, 0x2D0($sp)
        r.a2 = LW(lo32(r.s1) + 0xf4u);                           // 212e58 lw $a2, 0xF4($s1)
        r.v0 = LW(lo32(r.a2) + 0x8u);                            // 212e5c lw $v0, 0x8($a2)
        t = r.v0 != r.v1;                                        // 212e60 bne $v0, $v1, . + 4 + (0x4 << 2)
        r.a0 = r.a2;                                             // 212e64 daddu $a0, $a2, $zero
        if (t) goto L_212e74;
        r.v0 = LW(lo32(r.a2) + 0x160u);                          // 212e68 lw $v0, 0x160($a2)
        // 212e6c b . + 4 + (0x3 << 2)
        r.f22 = LWC1(lo32(r.v0) + 0xcu);                         // 212e70 lwc1 $f22, 0xC($v0)
        goto L_212e7c;
    L_212e74:
        r.v0 = LW(lo32(r.a2) + 0x160u);                          // 212e74 lw $v0, 0x160($a2)
        r.f22 = LWC1(lo32(r.v0) + 0xb18u);                       // 212e78 lwc1 $f22, 0xB18($v0)
    L_212e7c:
        r.f0 = LWC1(lo32(r.a0) + 0x54u);                         // 212e7c lwc1 $f0, 0x54($a0)
        r.s0 = addiu(r.s1, 96);                                  // 212e80 addiu $s0, $s1, 0x60
        r.f12 = floatOf(lo32(0u));                               // 212e84 mtc1 $zero, $f12
        SWC1(lo32(r.a0) + 0x4cu, r.f0);                          // 212e88 swc1 $f0, 0x4C($a0)
        r.f4 = LWC1(lo32(r.s1) + 0xe0u);                         // 212e8c lwc1 $f4, 0xE0($s1)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f12, r.f4)); // 212e90 c.lt.s $f12, $f4
        t = (r.fcr31 & kCondition) == 0u;                        // 212e98 bc1f . + 4 + (0x39 << 2)
        r.s2 = addiu(r.s1, 160);                                 // 212e9c addiu $s2, $s1, 0xA0
        if (t) goto L_212f80;
        r.f1 = LWC1(lo32(r.gp) - 0x4b98u);                       // 212ea0 lwc1 $f1, -0x4B98($gp)
        r.at = sext32(0x42700000u);                              // 212ea4 lui $at, 0x4270
        r.f2 = floatOf(lo32(r.at));                              // 212ea8 mtc1 $at, $f2
        r.f0 = LWC1(lo32(r.s1) + 0xe8u);                         // 212eac lwc1 $f0, 0xE8($s1)
        r.f1 = divS(r.f1, r.f2, r.fcr31);                        // 212eb8 div.s $f1, $f1, $f2
        r.at = sext32(0x3f800000u);                              // 212ebc lui $at, 0x3F80
        r.f3 = floatOf(lo32(r.at));                              // 212ec0 mtc1 $at, $f3
        r.f0 = FPU_ADD_S(r.f0, r.f1);                            // 212ec4 add.s $f0, $f0, $f1
        r.f2 = divS(r.f0, r.f4, r.fcr31);                        // 212ed0 div.s $f2, $f0, $f4
        SWC1(lo32(r.s1) + 0xe8u, r.f0);                          // 212ed4 swc1 $f0, 0xE8($s1)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f3, r.f2)); // 212ed8 c.le.s $f3, $f2
        t = (r.fcr31 & kCondition) == 0u;                        // 212ee0 bc1f . + 4 + (0x27 << 2)
        SWC1(lo32(r.s1) + 0xe4u, r.f2);                          // 212ee4 swc1 $f2, 0xE4($s1)
        if (t) goto L_212f80;
        r.v1 = LW(lo32(r.s1) + 0xa0u);                           // 212ee8 lw $v1, 0xA0($s1)
        r.v0 = addiu(0u, 1);                                     // 212eec addiu $v0, $zero, 0x1
        r.a0 = LW(lo32(r.s1) + 0xdcu);                           // 212ef0 lw $a0, 0xDC($s1)
        r.a1 = addiu(0u, -1);                                    // 212ef4 addiu $a1, $zero, -0x1
        r.f0 = LWC1(lo32(r.s1) + 0xa4u);                         // 212ef8 lwc1 $f0, 0xA4($s1)
        r.f1 = LWC1(lo32(r.s1) + 0xb4u);                         // 212efc lwc1 $f1, 0xB4($s1)
        r.f2 = LWC1(lo32(r.s1) + 0xb8u);                         // 212f00 lwc1 $f2, 0xB8($s1)
        r.f3 = LWC1(lo32(r.s1) + 0xbcu);                         // 212f04 lwc1 $f3, 0xBC($s1)
        r.f4 = LWC1(lo32(r.s1) + 0xa8u);                         // 212f08 lwc1 $f4, 0xA8($s1)
        r.f5 = LWC1(lo32(r.s1) + 0xacu);                         // 212f0c lwc1 $f5, 0xAC($s1)
        r.f6 = LWC1(lo32(r.s1) + 0xb0u);                         // 212f10 lwc1 $f6, 0xB0($s1)
        r.f7 = LWC1(lo32(r.s1) + 0xc0u);                         // 212f14 lwc1 $f7, 0xC0($s1)
        r.f8 = LWC1(lo32(r.s1) + 0xc4u);                         // 212f18 lwc1 $f8, 0xC4($s1)
        r.f9 = LWC1(lo32(r.s1) + 0xc8u);                         // 212f1c lwc1 $f9, 0xC8($s1)
        r.f10 = LWC1(lo32(r.s1) + 0xccu);                        // 212f20 lwc1 $f10, 0xCC($s1)
        r.f11 = LWC1(lo32(r.s1) + 0xd4u);                        // 212f24 lwc1 $f11, 0xD4($s1)
        r.a2 = LW(lo32(r.s1) + 0xd8u);                           // 212f28 lw $a2, 0xD8($s1)
        WRITE32(lo32(r.s1) + 0xf0u, lo32(r.v0));                 // 212f2c sw $v0, 0xF0($s1)
        WRITE32(lo32(r.s1) + 0x60u, lo32(r.v1));                 // 212f30 sw $v1, 0x60($s1)
        SWC1(lo32(r.s1) + 0x64u, r.f0);                          // 212f34 swc1 $f0, 0x64($s1)
        WRITE32(lo32(r.s1) + 0x9cu, lo32(r.a0));                 // 212f38 sw $a0, 0x9C($s1)
        WRITE32(lo32(r.s1) + 0xdcu, lo32(r.a1));                 // 212f3c sw $a1, 0xDC($s1)
        SWC1(lo32(r.s1) + 0x74u, r.f1);                          // 212f40 swc1 $f1, 0x74($s1)
        SWC1(lo32(r.s1) + 0x78u, r.f2);                          // 212f44 swc1 $f2, 0x78($s1)
        SWC1(lo32(r.s1) + 0x7cu, r.f3);                          // 212f48 swc1 $f3, 0x7C($s1)
        SWC1(lo32(r.s1) + 0x68u, r.f4);                          // 212f4c swc1 $f4, 0x68($s1)
        SWC1(lo32(r.s1) + 0x6cu, r.f5);                          // 212f50 swc1 $f5, 0x6C($s1)
        SWC1(lo32(r.s1) + 0x70u, r.f6);                          // 212f54 swc1 $f6, 0x70($s1)
        SWC1(lo32(r.s1) + 0x80u, r.f7);                          // 212f58 swc1 $f7, 0x80($s1)
        SWC1(lo32(r.s1) + 0x84u, r.f8);                          // 212f5c swc1 $f8, 0x84($s1)
        SWC1(lo32(r.s1) + 0x88u, r.f9);                          // 212f60 swc1 $f9, 0x88($s1)
        SWC1(lo32(r.s1) + 0x8cu, r.f10);                         // 212f64 swc1 $f10, 0x8C($s1)
        SWC1(lo32(r.s1) + 0x94u, r.f11);                         // 212f68 swc1 $f11, 0x94($s1)
        SWC1(lo32(r.s1) + 0xe0u, r.f12);                         // 212f6c swc1 $f12, 0xE0($s1)
        WRITE32(lo32(r.s1) + 0xa0u, lo32(0u));                   // 212f70 sw $zero, 0xA0($s1)
        WRITE32(lo32(r.s1) + 0x98u, lo32(r.a2));                 // 212f74 sw $a2, 0x98($s1)
        SWC1(lo32(r.s1) + 0xe8u, r.f12);                         // 212f78 swc1 $f12, 0xE8($s1)
        SWC1(lo32(r.s1) + 0xe4u, r.f12);                         // 212f7c swc1 $f12, 0xE4($s1)
    L_212f80:
        r.v0 = LW(lo32(r.s0));                                   // 212f80 lw $v0, 0x0($s0)
        r.s5 = sext32(0x330000u);                                // 212f84 lui $s5, 0x33
        r.v1 = addiu(r.s5, -21664);                              // 212f88 addiu $v1, $s5, -0x54A0
        r.f0 = floatOf(lo32(0u));                                // 212f8c mtc1 $zero, $f0
        r.v0 = sll32(r.v0, 2);                                   // 212f90 sll $v0, $v0, 2
        r.v0 = addu(r.v0, r.v1);                                 // 212f94 addu $v0, $v0, $v1
        r.s7 = LW(lo32(r.v0));                                   // 212f98 lw $s7, 0x0($v0)
        r.f21 = LWC1(lo32(r.s7) + 0x10u);                        // 212f9c lwc1 $f21, 0x10($s7)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f21)); // 212fa0 c.lt.s $f0, $f21
        t = (r.fcr31 & kCondition) == 0u;                        // 212fa8 bc1f . + 4 + (0x6D << 2)
        r.f0 = LWC1(lo32(r.gp) - 0x4b98u);                       // 212fac lwc1 $f0, -0x4B98($gp)
        if (t) goto L_213160;
        r.f1 = LWC1(lo32(r.s0) + 0x2cu);                         // 212fb0 lwc1 $f1, 0x2C($s0)
        r.at = sext32(0x42700000u);                              // 212fb4 lui $at, 0x4270
        r.f2 = floatOf(lo32(r.at));                              // 212fb8 mtc1 $at, $f2
        r.f0 = FPU_MUL_S(r.f0, r.f1);                            // 212fbc mul.s $f0, $f0, $f1
        r.f3 = LWC1(lo32(r.s0) + 0x4u);                          // 212fc0 lwc1 $f3, 0x4($s0)
        WRITE32(lo32(r.s0) + 0x38u, lo32(0u));                   // 212fc4 sw $zero, 0x38($s0)
        r.f0 = divS(r.f0, r.f2, r.fcr31);                        // 212fd0 div.s $f0, $f0, $f2
        r.v0 = LW(lo32(r.s7) + 0xcu);                            // 212fd4 lw $v0, 0xC($s7)
        r.v0 = r.v0 & 0x1u;                                      // 212fd8 andi $v0, $v0, 0x1
        r.f3 = FPU_ADD_S(r.f3, r.f0);                            // 212fdc add.s $f3, $f3, $f0
        t = r.v0 == 0u;                                          // 212fe0 beqz $v0, . + 4 + (0x13 << 2)
        SWC1(lo32(r.s0) + 0x4u, r.f3);                           // 212fe4 swc1 $f3, 0x4($s0)
        if (t) goto L_213030;
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f21, r.f3)); // 212fe8 c.lt.s $f21, $f3
        t = (r.fcr31 & kCondition) == 0u;                        // 212ff0 bc1f . + 4 + (0x1A << 2)
        r.v0 = addiu(r.sp, 304);                                 // 212ff4 addiu $v0, $sp, 0x130
        if (t) goto L_21305c;
        r.s4 = addiu(r.sp, 512);                                 // 212ff8 addiu $s4, $sp, 0x200
        WRITE32(lo32(r.sp) + 0x22cu, lo32(r.v0));                // 212ffc sw $v0, 0x22C($sp)
        r.s3 = addiu(r.sp, 516);                                 // 213000 addiu $s3, $sp, 0x204
    L_213008:
        r.f0 = LWC1(lo32(r.s0) + 0x4u);                          // 213008 lwc1 $f0, 0x4($s0)
        r.v0 = addiu(0u, 1);                                     // 21300c addiu $v0, $zero, 0x1
        WRITE32(lo32(r.s0) + 0x38u, lo32(r.v0));                 // 213010 sw $v0, 0x38($s0)
        r.f0 = FPU_SUB_S(r.f0, r.f21);                           // 213014 sub.s $f0, $f0, $f21
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f21, r.f0)); // 213018 c.lt.s $f21, $f0
        SWC1(lo32(r.s0) + 0x4u, r.f0);                           // 21301c swc1 $f0, 0x4($s0)
        if ((r.fcr31 & kCondition) != 0u)                        // 213020 bc1t . + 4 + (-0x7 << 2)
        {
            if (loopCheckpoint(ctx, runtime, 0x213008u)) { STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(10); STORE_F(11); STORE_F(12); STORE_F(21); STORE_F(22); ctx->fcr31 = r.fcr31; return; }
            goto L_213008;
        }
        // 213028 b . + 4 + (0x16 << 2)
        r.f1 = LWC1(lo32(r.s0) + 0x4u);                          // 21302c lwc1 $f1, 0x4($s0)
        goto L_213084;
    L_213030:
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f21, r.f3)); // 213030 c.lt.s $f21, $f3
        t = (r.fcr31 & kCondition) == 0u;                        // 213038 bc1f . + 4 + (0xD << 2)
        r.v0 = addiu(0u, 1);                                     // 21303c addiu $v0, $zero, 0x1
        if (t) goto L_213070;
        SWC1(lo32(r.s0) + 0x4u, r.f21);                          // 213040 swc1 $f21, 0x4($s0)
        WRITE32(lo32(r.s0) + 0x38u, lo32(r.v0));                 // 213044 sw $v0, 0x38($s0)
        r.v1 = addiu(r.sp, 304);                                 // 213048 addiu $v1, $sp, 0x130
        r.s4 = addiu(r.sp, 512);                                 // 21304c addiu $s4, $sp, 0x200
        r.s3 = addiu(r.sp, 516);                                 // 213050 addiu $s3, $sp, 0x204
        // 213054 b . + 4 + (0xA << 2)
        WRITE32(lo32(r.sp) + 0x22cu, lo32(r.v1));                // 213058 sw $v1, 0x22C($sp)
        goto L_213080;
    L_21305c:
        r.a1 = addiu(r.sp, 304);                                 // 21305c addiu $a1, $sp, 0x130
        r.s4 = addiu(r.sp, 512);                                 // 213060 addiu $s4, $sp, 0x200
        r.s3 = addiu(r.sp, 516);                                 // 213064 addiu $s3, $sp, 0x204
        // 213068 b . + 4 + (0x5 << 2)
        WRITE32(lo32(r.sp) + 0x22cu, lo32(r.a1));                // 21306c sw $a1, 0x22C($sp)
        goto L_213080;
    L_213070:
        r.v0 = addiu(r.sp, 304);                                 // 213070 addiu $v0, $sp, 0x130
        r.s4 = addiu(r.sp, 512);                                 // 213074 addiu $s4, $sp, 0x200
        WRITE32(lo32(r.sp) + 0x22cu, lo32(r.v0));                // 213078 sw $v0, 0x22C($sp)
        r.s3 = addiu(r.sp, 516);                                 // 21307c addiu $s3, $sp, 0x204
    L_213080:
        r.f1 = LWC1(lo32(r.s0) + 0x4u);                          // 213080 lwc1 $f1, 0x4($s0)
    L_213084:
        r.f2 = floatOf(lo32(0u));                                // 213084 mtc1 $zero, $f2
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f2)); // 213088 c.lt.s $f1, $f2
        if ((r.fcr31 & kCondition) == 0u)                        // 213090 bc1fl . + 4 + (0xC << 2)
        {
            r.v0 = LW(lo32(r.s0) + 0x38u);                           // 213094 lw $v0, 0x38($s0)
            goto L_2130c4;
        }
    L_213098:
        r.f0 = FPU_ADD_S(r.f1, r.f21);                           // 213098 add.s $f0, $f1, $f21
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f2)); // 21309c c.lt.s $f0, $f2
        r.f1 = FPU_MOV_S(r.f0);                                  // 2130a0 mov.s $f1, $f0
        if ((r.fcr31 & kCondition) != 0u)                        // 2130ac bc1t . + 4 + (-0x6 << 2)
        {
            if (loopCheckpoint(ctx, runtime, 0x213098u)) { STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(10); STORE_F(11); STORE_F(12); STORE_F(21); STORE_F(22); ctx->fcr31 = r.fcr31; return; }
            goto L_213098;
        }
        r.v0 = addiu(0u, 1);                                     // 2130b4 addiu $v0, $zero, 0x1
        SWC1(lo32(r.s0) + 0x4u, r.f0);                           // 2130b8 swc1 $f0, 0x4($s0)
        WRITE32(lo32(r.s0) + 0x38u, lo32(r.v0));                 // 2130bc sw $v0, 0x38($s0)
        r.v0 = LW(lo32(r.s0) + 0x38u);                           // 2130c0 lw $v0, 0x38($s0)
    L_2130c4:
        t = r.v0 == 0u;                                          // 2130c4 beqz $v0, . + 4 + (0x2B << 2)
        r.a2 = r.s4;                                             // 2130c8 daddu $a2, $s4, $zero
        if (t) goto L_213174;
        r.v0 = LW(lo32(r.s7) + 0xcu);                            // 2130cc lw $v0, 0xC($s7)
        r.v0 = r.v0 & 0x1u;                                      // 2130d0 andi $v0, $v0, 0x1
        t = r.v0 == 0u;                                          // 2130d4 beqz $v0, . + 4 + (0x27 << 2)
        r.a0 = r.s1;                                             // 2130d8 daddu $a0, $s1, $zero
        if (t) goto L_213174;
        r.a3 = LW(lo32(r.s7) + 0x4u);                            // 2130dc lw $a3, 0x4($s7)
        r.a1 = r.s7;                                             // 2130e0 daddu $a1, $s7, $zero
        r.a2 = 0u;                                               // 2130e4 daddu $a2, $zero, $zero
        r.a3 = addiu(r.a3, -1);                                  // 2130e8 addiu $a3, $a3, -0x1
        r.t0 = addiu(r.sp, 240);                                 // 2130ec addiu $t0, $sp, 0xF0
        r.ra = 0x2130f8u;                                        // 2130f0 jal func_215280
        r.f12 = FPU_MOV_S(r.f22);                                // 2130f4 mov.s $f12, $f22
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(10); STORE_F(11); STORE_F(12); STORE_F(21); STORE_F(22); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215280u, 0x2130f0u, 0x2130f8u)) return;
        LOAD_GPR(s1, 17); LOAD_GPR(s7, 23); LOAD_GPR(sp, 29); LOAD_F(22);
    L_2130f8:
        r.a0 = r.s1;                                             // 2130f8 daddu $a0, $s1, $zero
        r.a1 = r.s7;                                             // 2130fc daddu $a1, $s7, $zero
        r.a2 = 0u;                                               // 213100 daddu $a2, $zero, $zero
        r.a3 = 0u;                                               // 213104 daddu $a3, $zero, $zero
        r.t0 = addiu(r.sp, 272);                                 // 213108 addiu $t0, $sp, 0x110
        r.ra = 0x213114u;                                        // 21310c jal func_215280
        r.f12 = FPU_MOV_S(r.f22);                                // 213110 mov.s $f12, $f22
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x215280u, 0x21310cu, 0x213114u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s7, 23); LOAD_GPR(sp, 29); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(21); LOAD_F(22); r.fcr31 = ctx->fcr31;
    L_213114:
        r.f0 = LWC1(lo32(r.sp) + 0x110u);                        // 213114 lwc1 $f0, 0x110($sp)
        r.f1 = LWC1(lo32(r.sp) + 0x114u);                        // 213118 lwc1 $f1, 0x114($sp)
        r.f2 = LWC1(lo32(r.sp) + 0x118u);                        // 21311c lwc1 $f2, 0x118($sp)
        r.f3 = LWC1(lo32(r.s0) + 0x14u);                         // 213120 lwc1 $f3, 0x14($s0)
        r.f4 = LWC1(lo32(r.s0) + 0x18u);                         // 213124 lwc1 $f4, 0x18($s0)
        r.f6 = LWC1(lo32(r.s0) + 0x1cu);                         // 213128 lwc1 $f6, 0x1C($s0)
        r.f0 = FPU_ADD_S(r.f0, r.f3);                            // 21312c add.s $f0, $f0, $f3
        r.f1 = FPU_ADD_S(r.f1, r.f4);                            // 213130 add.s $f1, $f1, $f4
        r.f5 = LWC1(lo32(r.sp) + 0xf0u);                         // 213134 lwc1 $f5, 0xF0($sp)
        r.f2 = FPU_ADD_S(r.f2, r.f6);                            // 213138 add.s $f2, $f2, $f6
        r.f3 = LWC1(lo32(r.sp) + 0xf4u);                         // 21313c lwc1 $f3, 0xF4($sp)
        r.f4 = LWC1(lo32(r.sp) + 0xf8u);                         // 213140 lwc1 $f4, 0xF8($sp)
        r.f0 = FPU_SUB_S(r.f0, r.f5);                            // 213144 sub.s $f0, $f0, $f5
        r.f1 = FPU_SUB_S(r.f1, r.f3);                            // 213148 sub.s $f1, $f1, $f3
        r.f2 = FPU_SUB_S(r.f2, r.f4);                            // 21314c sub.s $f2, $f2, $f4
        SWC1(lo32(r.s0) + 0x14u, r.f0);                          // 213150 swc1 $f0, 0x14($s0)
        SWC1(lo32(r.s0) + 0x18u, r.f1);                          // 213154 swc1 $f1, 0x18($s0)
        // 213158 b . + 4 + (0x5 << 2)
        SWC1(lo32(r.s0) + 0x1cu, r.f2);                          // 21315c swc1 $f2, 0x1C($s0)
        goto L_213170;
    L_213160:
        r.v1 = addiu(r.sp, 304);                                 // 213160 addiu $v1, $sp, 0x130
        r.s4 = addiu(r.sp, 512);                                 // 213164 addiu $s4, $sp, 0x200
        WRITE32(lo32(r.sp) + 0x22cu, lo32(r.v1));                // 213168 sw $v1, 0x22C($sp)
        r.s3 = addiu(r.sp, 516);                                 // 21316c addiu $s3, $sp, 0x204
    L_213170:
        r.a2 = r.s4;                                             // 213170 daddu $a2, $s4, $zero
    L_213174:
        r.a3 = r.s3;                                             // 213174 daddu $a3, $s3, $zero
        r.a0 = r.s1;                                             // 213178 daddu $a0, $s1, $zero
        r.a1 = r.s0;                                             // 21317c daddu $a1, $s0, $zero
        r.ra = 0x213188u;                                        // 213180 jal func_214C50
        r.f12 = FPU_MOV_S(r.f21);                                // 213184 mov.s $f12, $f21
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(10); STORE_F(11); STORE_F(12); STORE_F(21); STORE_F(22); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x214c50u, 0x213180u, 0x213188u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(a1, 5); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s5, 21); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(21); LOAD_F(22); r.fcr31 = ctx->fcr31;
    L_213188:
        r.f1 = floatOf(lo32(0u));                                // 213188 mtc1 $zero, $f1
        r.f0 = LWC1(lo32(r.s1) + 0xe0u);                         // 21318c lwc1 $f0, 0xE0($s1)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 213190 c.lt.s $f1, $f0
        t = (r.fcr31 & kCondition) == 0u;                        // 213198 bc1f . + 4 + (0x6F << 2)
        r.v1 = addiu(r.s5, -21664);                              // 21319c addiu $v1, $s5, -0x54A0
        if (t) goto L_213358;
        r.v0 = LW(lo32(r.s2));                                   // 2131a0 lw $v0, 0x0($s2)
        r.v0 = sll32(r.v0, 2);                                   // 2131a4 sll $v0, $v0, 2
        r.v0 = addu(r.v0, r.v1);                                 // 2131a8 addu $v0, $v0, $v1
        r.v0 = LW(lo32(r.v0));                                   // 2131ac lw $v0, 0x0($v0)
        WRITE32(lo32(r.sp) + 0x210u, lo32(r.v0));                // 2131b0 sw $v0, 0x210($sp)
        r.f20 = LWC1(lo32(r.v0) + 0x10u);                        // 2131b4 lwc1 $f20, 0x10($v0)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f20)); // 2131b8 c.lt.s $f1, $f20
        t = (r.fcr31 & kCondition) == 0u;                        // 2131c0 bc1f . + 4 + (0x5C << 2)
        r.f0 = LWC1(lo32(r.gp) - 0x4b98u);                       // 2131c4 lwc1 $f0, -0x4B98($gp)
        if (t) goto L_213334;
        r.f1 = LWC1(lo32(r.s2) + 0x2cu);                         // 2131c8 lwc1 $f1, 0x2C($s2)
        r.at = sext32(0x42700000u);                              // 2131cc lui $at, 0x4270
        r.f2 = floatOf(lo32(r.at));                              // 2131d0 mtc1 $at, $f2
        r.f0 = FPU_MUL_S(r.f0, r.f1);                            // 2131d4 mul.s $f0, $f0, $f1
        WRITE32(lo32(r.s2) + 0x38u, lo32(0u));                   // 2131d8 sw $zero, 0x38($s2)
        r.f3 = LWC1(lo32(r.s2) + 0x4u);                          // 2131dc lwc1 $f3, 0x4($s2)
        r.a1 = LW(lo32(r.sp) + 0x210u);                          // 2131e0 lw $a1, 0x210($sp)
        r.f0 = divS(r.f0, r.f2, r.fcr31);                        // 2131ec div.s $f0, $f0, $f2
        r.v0 = LW(lo32(r.a1) + 0xcu);                            // 2131f0 lw $v0, 0xC($a1)
        r.v0 = r.v0 & 0x1u;                                      // 2131f4 andi $v0, $v0, 0x1
        r.f3 = FPU_ADD_S(r.f3, r.f0);                            // 2131f8 add.s $f3, $f3, $f0
        t = r.v0 == 0u;                                          // 2131fc beqz $v0, . + 4 + (0x10 << 2)
        SWC1(lo32(r.s2) + 0x4u, r.f3);                           // 213200 swc1 $f3, 0x4($s2)
        if (t) goto L_213240;
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f20, r.f3)); // 213204 c.lt.s $f20, $f3
        t = (r.fcr31 & kCondition) == 0u;                        // 21320c bc1f . + 4 + (0x12 << 2)
        r.s4 = addiu(r.sp, 520);                                 // 213210 addiu $s4, $sp, 0x208
        if (t) goto L_213258;
        r.s3 = addiu(r.sp, 524);                                 // 213214 addiu $s3, $sp, 0x20C
    L_213218:
        r.f0 = LWC1(lo32(r.s2) + 0x4u);                          // 213218 lwc1 $f0, 0x4($s2)
        r.v0 = addiu(0u, 1);                                     // 21321c addiu $v0, $zero, 0x1
        WRITE32(lo32(r.s2) + 0x38u, lo32(r.v0));                 // 213220 sw $v0, 0x38($s2)
        r.f0 = FPU_SUB_S(r.f0, r.f20);                           // 213224 sub.s $f0, $f0, $f20
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f20, r.f0)); // 213228 c.lt.s $f20, $f0
        SWC1(lo32(r.s2) + 0x4u, r.f0);                           // 21322c swc1 $f0, 0x4($s2)
        if ((r.fcr31 & kCondition) != 0u)                        // 213230 bc1t . + 4 + (-0x7 << 2)
        {
            if (loopCheckpoint(ctx, runtime, 0x213218u)) { STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a1, 5); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(20); ctx->fcr31 = r.fcr31; return; }
            goto L_213218;
        }
        // 213238 b . + 4 + (0xA << 2)
        r.f1 = LWC1(lo32(r.s2) + 0x4u);                          // 21323c lwc1 $f1, 0x4($s2)
        goto L_213264;
    L_213240:
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f20, r.f3)); // 213240 c.lt.s $f20, $f3
        t = (r.fcr31 & kCondition) == 0u;                        // 213248 bc1f . + 4 + (0x3 << 2)
        r.v0 = addiu(0u, 1);                                     // 21324c addiu $v0, $zero, 0x1
        if (t) goto L_213258;
        SWC1(lo32(r.s2) + 0x4u, r.f21);                          // 213250 swc1 $f21, 0x4($s2)
        WRITE32(lo32(r.s2) + 0x38u, lo32(r.v0));                 // 213254 sw $v0, 0x38($s2)
    L_213258:
        r.s4 = addiu(r.sp, 520);                                 // 213258 addiu $s4, $sp, 0x208
        r.s3 = addiu(r.sp, 524);                                 // 21325c addiu $s3, $sp, 0x20C
        r.f1 = LWC1(lo32(r.s2) + 0x4u);                          // 213260 lwc1 $f1, 0x4($s2)
    L_213264:
        r.f2 = floatOf(lo32(0u));                                // 213264 mtc1 $zero, $f2
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f2)); // 213268 c.lt.s $f1, $f2
        if ((r.fcr31 & kCondition) == 0u)                        // 213270 bc1fl . + 4 + (0xC << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0x38u);                           // 213274 lw $v0, 0x38($s2)
            goto L_2132a4;
        }
    L_213278:
        r.f0 = FPU_ADD_S(r.f1, r.f20);                           // 213278 add.s $f0, $f1, $f20
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f2)); // 21327c c.lt.s $f0, $f2
        r.f1 = FPU_MOV_S(r.f0);                                  // 213280 mov.s $f1, $f0
        if ((r.fcr31 & kCondition) != 0u)                        // 21328c bc1t . + 4 + (-0x6 << 2)
        {
            if (loopCheckpoint(ctx, runtime, 0x213278u)) { STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a1, 5); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(20); ctx->fcr31 = r.fcr31; return; }
            goto L_213278;
        }
        r.v0 = addiu(0u, 1);                                     // 213294 addiu $v0, $zero, 0x1
        SWC1(lo32(r.s2) + 0x4u, r.f0);                           // 213298 swc1 $f0, 0x4($s2)
        WRITE32(lo32(r.s2) + 0x38u, lo32(r.v0));                 // 21329c sw $v0, 0x38($s2)
        r.v0 = LW(lo32(r.s2) + 0x38u);                           // 2132a0 lw $v0, 0x38($s2)
    L_2132a4:
        t = r.v0 == 0u;                                          // 2132a4 beqz $v0, . + 4 + (0x25 << 2)
        r.v1 = LW(lo32(r.sp) + 0x210u);                          // 2132a8 lw $v1, 0x210($sp)
        if (t) goto L_21333c;
        r.v0 = LW(lo32(r.v1) + 0xcu);                            // 2132ac lw $v0, 0xC($v1)
        r.v0 = r.v0 & 0x1u;                                      // 2132b0 andi $v0, $v0, 0x1
        t = r.v0 == 0u;                                          // 2132b4 beqz $v0, . + 4 + (0x21 << 2)
        r.a0 = r.s1;                                             // 2132b8 daddu $a0, $s1, $zero
        if (t) goto L_21333c;
        r.a3 = LW(lo32(r.v1) + 0x4u);                            // 2132bc lw $a3, 0x4($v1)
        r.a1 = r.v1;                                             // 2132c0 daddu $a1, $v1, $zero
        r.a2 = 0u;                                               // 2132c4 daddu $a2, $zero, $zero
        r.a3 = addiu(r.a3, -1);                                  // 2132c8 addiu $a3, $a3, -0x1
        r.t0 = addiu(r.sp, 240);                                 // 2132cc addiu $t0, $sp, 0xF0
        r.ra = 0x2132d8u;                                        // 2132d0 jal func_215280
        r.f12 = FPU_MOV_S(r.f22);                                // 2132d4 mov.s $f12, $f22
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(12); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215280u, 0x2132d0u, 0x2132d8u)) return;
        LOAD_GPR(s1, 17); LOAD_GPR(sp, 29); LOAD_F(22);
    L_2132d8:
        r.a1 = LW(lo32(r.sp) + 0x210u);                          // 2132d8 lw $a1, 0x210($sp)
        r.a0 = r.s1;                                             // 2132dc daddu $a0, $s1, $zero
        r.a2 = 0u;                                               // 2132e0 daddu $a2, $zero, $zero
        r.a3 = 0u;                                               // 2132e4 daddu $a3, $zero, $zero
        r.t0 = addiu(r.sp, 272);                                 // 2132e8 addiu $t0, $sp, 0x110
        r.ra = 0x2132f4u;                                        // 2132ec jal func_215280
        r.f12 = FPU_MOV_S(r.f22);                                // 2132f0 mov.s $f12, $f22
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x215280u, 0x2132ecu, 0x2132f4u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(sp, 29); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2132f4:
        r.f4 = LWC1(lo32(r.sp) + 0x110u);                        // 2132f4 lwc1 $f4, 0x110($sp)
        r.f5 = LWC1(lo32(r.sp) + 0x114u);                        // 2132f8 lwc1 $f5, 0x114($sp)
        r.f3 = LWC1(lo32(r.sp) + 0x118u);                        // 2132fc lwc1 $f3, 0x118($sp)
        r.f1 = LWC1(lo32(r.s2) + 0x14u);                         // 213300 lwc1 $f1, 0x14($s2)
        r.f2 = LWC1(lo32(r.s2) + 0x18u);                         // 213304 lwc1 $f2, 0x18($s2)
        r.f0 = LWC1(lo32(r.s2) + 0x1cu);                         // 213308 lwc1 $f0, 0x1C($s2)
        r.f1 = FPU_ADD_S(r.f4, r.f1);                            // 21330c add.s $f1, $f4, $f1
        r.f2 = FPU_ADD_S(r.f5, r.f2);                            // 213310 add.s $f2, $f5, $f2
        r.f0 = FPU_ADD_S(r.f3, r.f0);                            // 213314 add.s $f0, $f3, $f0
        r.f1 = FPU_SUB_S(r.f1, r.f4);                            // 213318 sub.s $f1, $f1, $f4
        r.f2 = FPU_SUB_S(r.f2, r.f5);                            // 21331c sub.s $f2, $f2, $f5
        r.f0 = FPU_SUB_S(r.f0, r.f3);                            // 213320 sub.s $f0, $f0, $f3
        SWC1(lo32(r.s2) + 0x14u, r.f1);                          // 213324 swc1 $f1, 0x14($s2)
        SWC1(lo32(r.s2) + 0x18u, r.f2);                          // 213328 swc1 $f2, 0x18($s2)
        // 21332c b . + 4 + (0x3 << 2)
        SWC1(lo32(r.s2) + 0x1cu, r.f0);                          // 213330 swc1 $f0, 0x1C($s2)
        goto L_21333c;
    L_213334:
        r.s4 = addiu(r.sp, 520);                                 // 213334 addiu $s4, $sp, 0x208
        r.s3 = addiu(r.sp, 524);                                 // 213338 addiu $s3, $sp, 0x20C
    L_21333c:
        r.f12 = FPU_MOV_S(r.f20);                                // 21333c mov.s $f12, $f20
        r.a2 = r.s4;                                             // 213340 daddu $a2, $s4, $zero
        r.a3 = r.s3;                                             // 213344 daddu $a3, $s3, $zero
        r.a0 = r.s1;                                             // 213348 daddu $a0, $s1, $zero
        r.ra = 0x213354u;                                        // 21334c jal func_214C50
        r.a1 = r.s2;                                             // 213350 daddu $a1, $s2, $zero
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(12); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x214c50u, 0x21334cu, 0x213354u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(a1, 5); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(22); r.fcr31 = ctx->fcr31;
    L_213354:
        r.f0 = LWC1(lo32(r.s1) + 0xe0u);                         // 213354 lwc1 $f0, 0xE0($s1)
    L_213358:
        r.a2 = LW(lo32(r.s1) + 0xf4u);                           // 213358 lw $a2, 0xF4($s1)
        r.v1 = addiu(0u, 4096);                                  // 21335c addiu $v1, $zero, 0x1000
        r.v0 = LW(lo32(r.a2) + 0x8u);                            // 213360 lw $v0, 0x8($a2)
        t = r.v0 == r.v1;                                        // 213364 beq $v0, $v1, . + 4 + (0xB << 2)
        r.a0 = LW(lo32(r.gp) - 0x608cu);                         // 213368 lw $a0, -0x608C($gp)
        if (t) goto L_213394;
        r.v0 = LW(lo32(r.a2) + 0x160u);                          // 21336c lw $v0, 0x160($a2)
        r.v1 = LW(lo32(r.v0));                                   // 213370 lw $v1, 0x0($v0)
        r.v1 = slt(r.v1, r.a0);                                  // 213374 slt $v1, $v1, $a0
        if (r.v1 != 0u)                                          // 213378 bnel $v1, $zero, . + 4 + (0x7 << 2)
        {
            r.fp = LW(lo32(r.s7) + 0x8u);                            // 21337c lw $fp, 0x8($s7)
            goto L_213398;
        }
        r.v0 = LW(lo32(r.a2) + 0x10u);                           // 213380 lw $v0, 0x10($a2)
        r.v1 = sext32(0xf000000u);                               // 213384 lui $v1, 0xF00
        r.v0 = r.v0 & r.v1;                                      // 213388 and $v0, $v0, $v1
        t = r.v0 == 0u;                                          // 21338c beqz $v0, . + 4 + (0x2 << 2)
        r.fp = addiu(0u, 1);                                     // 213390 addiu $fp, $zero, 0x1
        if (t) goto L_213398;
    L_213394:
        r.fp = LW(lo32(r.s7) + 0x8u);                            // 213394 lw $fp, 0x8($s7)
    L_213398:
        r.f12 = floatOf(lo32(0u));                               // 213398 mtc1 $zero, $f12
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f0, r.f12)); // 21339c c.eq.s $f0, $f12
        t = (r.fcr31 & kCondition) == 0u;                        // 2133a4 bc1f . + 4 + (0x8A << 2)
        r.a3 = LW(lo32(r.sp) + 0x200u);                          // 2133a8 lw $a3, 0x200($sp)
        if (t) goto L_2135d0;
        r.v1 = LW(lo32(r.sp) + 0x204u);                          // 2133ac lw $v1, 0x204($sp)
        t = r.a3 == r.v1;                                        // 2133b0 beq $a3, $v1, . + 4 + (0x19 << 2)
        r.v1 = sll32(r.v1, 2);                                   // 2133b4 sll $v1, $v1, 2
        if (t) goto L_213418;
        r.a0 = LW(lo32(r.s7) + 0x14u);                           // 2133b8 lw $a0, 0x14($s7)
        r.v0 = sll32(r.a3, 2);                                   // 2133bc sll $v0, $a3, 2
        r.at = sext32(0x42700000u);                              // 2133c0 lui $at, 0x4270
        r.f3 = floatOf(lo32(r.at));                              // 2133c4 mtc1 $at, $f3
        r.v1 = addu(r.v1, r.a0);                                 // 2133c8 addu $v1, $v1, $a0
        r.v0 = addu(r.v0, r.a0);                                 // 2133cc addu $v0, $v0, $a0
        r.f2 = LWC1(lo32(r.v0));                                 // 2133d0 lwc1 $f2, 0x0($v0)
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 2133d4 cvt.s.w $f2, $f2
        r.f1 = LWC1(lo32(r.s0) + 0x4u);                          // 2133d8 lwc1 $f1, 0x4($s0)
        r.f0 = LWC1(lo32(r.v1));                                 // 2133dc lwc1 $f0, 0x0($v1)
        r.f0 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f0))); // 2133e0 cvt.s.w $f0, $f0
        r.f2 = divS(r.f2, r.f3, r.fcr31);                        // 2133ec div.s $f2, $f2, $f3
        r.f0 = divS(r.f0, r.f3, r.fcr31);                        // 2133f8 div.s $f0, $f0, $f3
        r.f1 = FPU_SUB_S(r.f1, r.f2);                            // 2133fc sub.s $f1, $f1, $f2
        r.f0 = FPU_SUB_S(r.f0, r.f2);                            // 213400 sub.s $f0, $f0, $f2
        r.f20 = divS(r.f1, r.f0, r.fcr31);                       // 21340c div.s $f20, $f1, $f0
        // 213410 b . + 4 + (0x3 << 2)
        r.s3 = 0u;                                               // 213414 daddu $s3, $zero, $zero
        goto L_213420;
    L_213418:
        r.f20 = FPU_MOV_S(r.f12);                                // 213418 mov.s $f20, $f12
        r.s3 = 0u;                                               // 21341c daddu $s3, $zero, $zero
    L_213420:
        if (lez64(r.fp))                                         // 213420 blezl $fp, . + 4 + (0x179 << 2)
        {
            r.v1 = LW(lo32(r.a2) + 0x8u);                            // 213424 lw $v1, 0x8($a2)
            goto L_213a08;
        }
        r.s6 = addiu(r.sp, 112);                                 // 213428 addiu $s6, $sp, 0x70
        r.s5 = addiu(r.sp, 144);                                 // 21342c addiu $s5, $sp, 0x90
        r.s4 = addiu(r.sp, 16);                                  // 213430 addiu $s4, $sp, 0x10
        r.s2 = addiu(r.sp, 32);                                  // 213434 addiu $s2, $sp, 0x20
    L_213438:
        r.v1 = LW(lo32(r.s1) + 0x5cu);                           // 213438 lw $v1, 0x5C($s1)
        r.v0 = sll32(r.s3, 2);                                   // 21343c sll $v0, $s3, 2
        r.a0 = r.s1;                                             // 213440 daddu $a0, $s1, $zero
        r.a1 = r.s7;                                             // 213444 daddu $a1, $s7, $zero
        r.t1 = LW(lo32(r.v1));                                   // 213448 lw $t1, 0x0($v1)
        r.a2 = r.s3;                                             // 21344c daddu $a2, $s3, $zero
        r.t0 = r.s6;                                             // 213450 daddu $t0, $s6, $zero
        r.f12 = FPU_MOV_S(r.f22);                                // 213454 mov.s $f12, $f22
        r.v0 = addu(r.v0, r.t1);                                 // 213458 addu $v0, $v0, $t1
        r.ra = 0x213464u;                                        // 21345c jal func_215280
        r.s0 = LW(lo32(r.v0));                                   // 213460 lw $s0, 0x0($v0)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(s0, 16); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(12); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215280u, 0x21345cu, 0x213464u)) return;
        LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(s5, 21); LOAD_GPR(s7, 23); LOAD_GPR(sp, 29); LOAD_F(22);
    L_213464:
        r.a3 = LW(lo32(r.sp) + 0x204u);                          // 213464 lw $a3, 0x204($sp)
        r.a0 = r.s1;                                             // 213468 daddu $a0, $s1, $zero
        r.a1 = r.s7;                                             // 21346c daddu $a1, $s7, $zero
        r.a2 = r.s3;                                             // 213470 daddu $a2, $s3, $zero
        r.t0 = r.s5;                                             // 213474 daddu $t0, $s5, $zero
        r.ra = 0x213480u;                                        // 213478 jal func_215280
        r.f12 = FPU_MOV_S(r.f22);                                // 21347c mov.s $f12, $f22
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x215280u, 0x213478u, 0x213480u)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s2, 18); LOAD_GPR(s4, 20); LOAD_GPR(sp, 29); LOAD_F(20);
    L_213480:
        r.s0 = sll32(r.s0, 6);                                   // 213480 sll $s0, $s0, 6
        r.f7 = LWC1(lo32(r.sp) + 0x7cu);                         // 213484 lwc1 $f7, 0x7C($sp)
        r.a0 = r.s4;                                             // 213488 daddu $a0, $s4, $zero
        r.f6 = LWC1(lo32(r.sp) + 0x80u);                         // 21348c lwc1 $f6, 0x80($sp)
        r.a1 = r.s2;                                             // 213490 daddu $a1, $s2, $zero
        r.f5 = LWC1(lo32(r.sp) + 0x84u);                         // 213494 lwc1 $f5, 0x84($sp)
        r.f12 = FPU_MOV_S(r.f20);                                // 213498 mov.s $f12, $f20
        r.f4 = LWC1(lo32(r.sp) + 0x88u);                         // 21349c lwc1 $f4, 0x88($sp)
        r.a2 = r.sp;                                             // 2134a0 daddu $a2, $sp, $zero
        r.f0 = LWC1(lo32(r.sp) + 0x9cu);                         // 2134a4 lwc1 $f0, 0x9C($sp)
        r.f1 = LWC1(lo32(r.sp) + 0xa0u);                         // 2134a8 lwc1 $f1, 0xA0($sp)
        r.f2 = LWC1(lo32(r.sp) + 0xa4u);                         // 2134ac lwc1 $f2, 0xA4($sp)
        r.f3 = LWC1(lo32(r.sp) + 0xa8u);                         // 2134b0 lwc1 $f3, 0xA8($sp)
        SWC1(lo32(r.sp) + 0x10u, r.f7);                          // 2134b4 swc1 $f7, 0x10($sp)
        SWC1(lo32(r.sp) + 0x14u, r.f6);                          // 2134b8 swc1 $f6, 0x14($sp)
        SWC1(lo32(r.sp) + 0x18u, r.f5);                          // 2134bc swc1 $f5, 0x18($sp)
        SWC1(lo32(r.sp) + 0x1cu, r.f4);                          // 2134c0 swc1 $f4, 0x1C($sp)
        SWC1(lo32(r.sp) + 0x20u, r.f0);                          // 2134c4 swc1 $f0, 0x20($sp)
        SWC1(lo32(r.sp) + 0x24u, r.f1);                          // 2134c8 swc1 $f1, 0x24($sp)
        SWC1(lo32(r.sp) + 0x28u, r.f2);                          // 2134cc swc1 $f2, 0x28($sp)
        r.ra = 0x2134d8u;                                        // 2134d0 jal func_2B4080
        SWC1(lo32(r.sp) + 0x2cu, r.f3);                          // 2134d4 swc1 $f3, 0x2C($sp)
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(12);
        if (!guestCall(G_PASS, 0x2b4080u, 0x2134d0u, 0x2134d8u)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(sp, 29);
    L_2134d8:
        r.a0 = LW(lo32(r.s1) + 0x4u);                            // 2134d8 lw $a0, 0x4($s1)
        r.a1 = r.sp;                                             // 2134dc daddu $a1, $sp, $zero
        r.ra = 0x2134e8u;                                        // 2134e0 jal func_2B3F90
        r.a0 = addu(r.a0, r.s0);                                 // 2134e4 addu $a0, $a0, $s0
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2b3f90u, 0x2134e0u, 0x2134e8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(20); LOAD_F(22); r.fcr31 = ctx->fcr31;
    L_2134e8:
        if (r.s3 != 0u)                                          // 2134e8 bnel $s3, $zero, . + 4 + (0x28 << 2)
        {
            r.v0 = LW(lo32(r.s1) + 0x4u);                            // 2134ec lw $v0, 0x4($s1)
            goto L_21358c;
        }
        r.v0 = LW(lo32(r.s7) + 0xcu);                            // 2134f0 lw $v0, 0xC($s7)
        r.v0 = r.v0 & 0x2u;                                      // 2134f4 andi $v0, $v0, 0x2
        t = r.v0 == 0u;                                          // 2134f8 beqz $v0, . + 4 + (0x18 << 2)
        r.f3 = LWC1(lo32(r.sp) + 0x70u);                         // 2134fc lwc1 $f3, 0x70($sp)
        if (t) goto L_21355c;
        r.f4 = LWC1(lo32(r.sp) + 0x74u);                         // 213500 lwc1 $f4, 0x74($sp)
        r.f5 = LWC1(lo32(r.sp) + 0x78u);                         // 213504 lwc1 $f5, 0x78($sp)
        r.f0 = LWC1(lo32(r.sp) + 0x90u);                         // 213508 lwc1 $f0, 0x90($sp)
        r.f1 = LWC1(lo32(r.sp) + 0x94u);                         // 21350c lwc1 $f1, 0x94($sp)
        r.f2 = LWC1(lo32(r.sp) + 0x98u);                         // 213510 lwc1 $f2, 0x98($sp)
        r.f0 = FPU_SUB_S(r.f0, r.f3);                            // 213514 sub.s $f0, $f0, $f3
        r.f1 = FPU_SUB_S(r.f1, r.f4);                            // 213518 sub.s $f1, $f1, $f4
        r.v0 = LW(lo32(r.s1) + 0x4u);                            // 21351c lw $v0, 0x4($s1)
        r.f2 = FPU_SUB_S(r.f2, r.f5);                            // 213520 sub.s $f2, $f2, $f5
        r.f0 = FPU_MUL_S(r.f0, r.f20);                           // 213524 mul.s $f0, $f0, $f20
        r.f1 = FPU_MUL_S(r.f1, r.f20);                           // 213528 mul.s $f1, $f1, $f20
        r.f2 = FPU_MUL_S(r.f2, r.f20);                           // 21352c mul.s $f2, $f2, $f20
        r.f3 = FPU_ADD_S(r.f3, r.f0);                            // 213530 add.s $f3, $f3, $f0
        r.f4 = FPU_ADD_S(r.f4, r.f1);                            // 213534 add.s $f4, $f4, $f1
        r.f5 = FPU_ADD_S(r.f5, r.f2);                            // 213538 add.s $f5, $f5, $f2
        SWC1(lo32(r.s1) + 0x68u, r.f3);                          // 21353c swc1 $f3, 0x68($s1)
        SWC1(lo32(r.s1) + 0x6cu, r.f4);                          // 213540 swc1 $f4, 0x6C($s1)
        SWC1(lo32(r.s1) + 0x70u, r.f5);                          // 213544 swc1 $f5, 0x70($s1)
        WRITE32(lo32(r.v0) + 0x30u, lo32(0u));                   // 213548 sw $zero, 0x30($v0)
        r.v1 = LW(lo32(r.s1) + 0x4u);                            // 21354c lw $v1, 0x4($s1)
        r.f0 = LWC1(lo32(r.s1) + 0x6cu);                         // 213550 lwc1 $f0, 0x6C($s1)
        // 213554 b . + 4 + (0xA << 2)
        SWC1(lo32(r.v1) + 0x34u, r.f0);                          // 213558 swc1 $f0, 0x34($v1)
        goto L_213580;
    L_21355c:
        r.v0 = LW(lo32(r.s1) + 0x4u);                            // 21355c lw $v0, 0x4($s1)
        WRITE32(lo32(r.v0) + 0x30u, lo32(0u));                   // 213560 sw $zero, 0x30($v0)
        r.f1 = LWC1(lo32(r.sp) + 0x74u);                         // 213564 lwc1 $f1, 0x74($sp)
        r.f0 = LWC1(lo32(r.sp) + 0x94u);                         // 213568 lwc1 $f0, 0x94($sp)
        r.v1 = LW(lo32(r.s1) + 0x4u);                            // 21356c lw $v1, 0x4($s1)
        r.f0 = FPU_SUB_S(r.f0, r.f1);                            // 213570 sub.s $f0, $f0, $f1
        r.f0 = FPU_MUL_S(r.f0, r.f20);                           // 213574 mul.s $f0, $f0, $f20
        r.f1 = FPU_ADD_S(r.f1, r.f0);                            // 213578 add.s $f1, $f1, $f0
        SWC1(lo32(r.v1) + 0x34u, r.f1);                          // 21357c swc1 $f1, 0x34($v1)
    L_213580:
        r.v0 = LW(lo32(r.s1) + 0x4u);                            // 213580 lw $v0, 0x4($s1)
        // 213584 b . + 4 + (0xC << 2)
        WRITE32(lo32(r.v0) + 0x38u, lo32(0u));                   // 213588 sw $zero, 0x38($v0)
        goto L_2135b8;
    L_21358c:
        r.f0 = LWC1(lo32(r.sp) + 0x70u);                         // 21358c lwc1 $f0, 0x70($sp)
        r.v0 = addu(r.s0, r.v0);                                 // 213590 addu $v0, $s0, $v0
        SWC1(lo32(r.v0) + 0x30u, r.f0);                          // 213594 swc1 $f0, 0x30($v0)
        r.v1 = LW(lo32(r.s1) + 0x4u);                            // 213598 lw $v1, 0x4($s1)
        r.f0 = LWC1(lo32(r.sp) + 0x74u);                         // 21359c lwc1 $f0, 0x74($sp)
        r.v1 = addu(r.s0, r.v1);                                 // 2135a0 addu $v1, $s0, $v1
        SWC1(lo32(r.v1) + 0x34u, r.f0);                          // 2135a4 swc1 $f0, 0x34($v1)
        r.v0 = LW(lo32(r.s1) + 0x4u);                            // 2135a8 lw $v0, 0x4($s1)
        r.f0 = LWC1(lo32(r.sp) + 0x78u);                         // 2135ac lwc1 $f0, 0x78($sp)
        r.v0 = addu(r.s0, r.v0);                                 // 2135b0 addu $v0, $s0, $v0
        SWC1(lo32(r.v0) + 0x38u, r.f0);                          // 2135b4 swc1 $f0, 0x38($v0)
    L_2135b8:
        r.s3 = addiu(r.s3, 1);                                   // 2135b8 addiu $s3, $s3, 0x1
        r.v0 = slt(r.s3, r.fp);                                  // 2135bc slt $v0, $s3, $fp
        t = r.v0 != 0u;                                          // 2135c0 bnez $v0, . + 4 + (-0x63 << 2)
        r.a3 = LW(lo32(r.sp) + 0x200u);                          // 2135c4 lw $a3, 0x200($sp)
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x213438u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a3, 7); STORE_GPR(s3, 19); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); return; }
            goto L_213438;
        }
        // 2135c8 b . + 4 + (0x10E << 2)
        r.a2 = LW(lo32(r.s1) + 0xf4u);                           // 2135cc lw $a2, 0xF4($s1)
        goto L_213a04;
    L_2135d0:
        r.v1 = LW(lo32(r.sp) + 0x204u);                          // 2135d0 lw $v1, 0x204($sp)
        t = r.a3 == r.v1;                                        // 2135d4 beq $a3, $v1, . + 4 + (0x19 << 2)
        r.v1 = sll32(r.v1, 2);                                   // 2135d8 sll $v1, $v1, 2
        if (t) goto L_21363c;
        r.a0 = LW(lo32(r.s7) + 0x14u);                           // 2135dc lw $a0, 0x14($s7)
        r.v0 = sll32(r.a3, 2);                                   // 2135e0 sll $v0, $a3, 2
        r.at = sext32(0x42700000u);                              // 2135e4 lui $at, 0x4270
        r.f3 = floatOf(lo32(r.at));                              // 2135e8 mtc1 $at, $f3
        r.v1 = addu(r.v1, r.a0);                                 // 2135ec addu $v1, $v1, $a0
        r.v0 = addu(r.v0, r.a0);                                 // 2135f0 addu $v0, $v0, $a0
        r.f2 = LWC1(lo32(r.v0));                                 // 2135f4 lwc1 $f2, 0x0($v0)
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 2135f8 cvt.s.w $f2, $f2
        r.f1 = LWC1(lo32(r.s0) + 0x4u);                          // 2135fc lwc1 $f1, 0x4($s0)
        r.f0 = LWC1(lo32(r.v1));                                 // 213600 lwc1 $f0, 0x0($v1)
        r.f0 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f0))); // 213604 cvt.s.w $f0, $f0
        r.f2 = divS(r.f2, r.f3, r.fcr31);                        // 213610 div.s $f2, $f2, $f3
        r.f0 = divS(r.f0, r.f3, r.fcr31);                        // 21361c div.s $f0, $f0, $f3
        r.f1 = FPU_SUB_S(r.f1, r.f2);                            // 213620 sub.s $f1, $f1, $f2
        r.f0 = FPU_SUB_S(r.f0, r.f2);                            // 213624 sub.s $f0, $f0, $f2
        r.f20 = divS(r.f1, r.f0, r.fcr31);                       // 213630 div.s $f20, $f1, $f0
        // 213634 b . + 4 + (0x3 << 2)
        r.v0 = LW(lo32(r.sp) + 0x208u);                          // 213638 lw $v0, 0x208($sp)
        goto L_213644;
    L_21363c:
        r.f20 = FPU_MOV_S(r.f12);                                // 21363c mov.s $f20, $f12
        r.v0 = LW(lo32(r.sp) + 0x208u);                          // 213640 lw $v0, 0x208($sp)
    L_213644:
        r.v1 = LW(lo32(r.sp) + 0x20cu);                          // 213644 lw $v1, 0x20C($sp)
        r.f12 = floatOf(lo32(0u));                               // 213648 mtc1 $zero, $f12
        t = r.v0 == r.v1;                                        // 21364c beq $v0, $v1, . + 4 + (0x1A << 2)
        r.a1 = LW(lo32(r.sp) + 0x210u);                          // 213650 lw $a1, 0x210($sp)
        if (t) goto L_2136b8;
        r.v0 = sll32(r.v0, 2);                                   // 213654 sll $v0, $v0, 2
        r.v1 = sll32(r.v1, 2);                                   // 213658 sll $v1, $v1, 2
        r.at = sext32(0x42700000u);                              // 21365c lui $at, 0x4270
        r.f3 = floatOf(lo32(r.at));                              // 213660 mtc1 $at, $f3
        r.a0 = LW(lo32(r.a1) + 0x14u);                           // 213664 lw $a0, 0x14($a1)
        r.f1 = LWC1(lo32(r.s2) + 0x4u);                          // 213668 lwc1 $f1, 0x4($s2)
        r.v1 = addu(r.v1, r.a0);                                 // 21366c addu $v1, $v1, $a0
        r.v0 = addu(r.v0, r.a0);                                 // 213670 addu $v0, $v0, $a0
        r.f2 = LWC1(lo32(r.v0));                                 // 213674 lwc1 $f2, 0x0($v0)
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 213678 cvt.s.w $f2, $f2
        r.f0 = LWC1(lo32(r.v1));                                 // 21367c lwc1 $f0, 0x0($v1)
        r.f0 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f0))); // 213680 cvt.s.w $f0, $f0
        r.f2 = divS(r.f2, r.f3, r.fcr31);                        // 21368c div.s $f2, $f2, $f3
        r.f0 = divS(r.f0, r.f3, r.fcr31);                        // 213698 div.s $f0, $f0, $f3
        r.f1 = FPU_SUB_S(r.f1, r.f2);                            // 21369c sub.s $f1, $f1, $f2
        r.f0 = FPU_SUB_S(r.f0, r.f2);                            // 2136a0 sub.s $f0, $f0, $f2
        r.f21 = divS(r.f1, r.f0, r.fcr31);                       // 2136ac div.s $f21, $f1, $f0
        // 2136b0 b . + 4 + (0x3 << 2)
        r.s3 = 0u;                                               // 2136b4 daddu $s3, $zero, $zero
        goto L_2136c0;
    L_2136b8:
        r.f21 = FPU_MOV_S(r.f12);                                // 2136b8 mov.s $f21, $f12
        r.s3 = 0u;                                               // 2136bc daddu $s3, $zero, $zero
    L_2136c0:
        t = lez64(r.fp);                                         // 2136c0 blez $fp, . + 4 + (0xD0 << 2)
        r.v0 = addiu(r.sp, 176);                                 // 2136c4 addiu $v0, $sp, 0xB0
        if (t) goto L_213a04;
        r.v1 = addiu(r.sp, 208);                                 // 2136c8 addiu $v1, $sp, 0xD0
        r.a1 = addiu(r.sp, 80);                                  // 2136cc addiu $a1, $sp, 0x50
        WRITE32(lo32(r.sp) + 0x224u, lo32(r.v0));                // 2136d0 sw $v0, 0x224($sp)
        WRITE32(lo32(r.sp) + 0x228u, lo32(r.v1));                // 2136d4 sw $v1, 0x228($sp)
        r.v0 = addiu(r.sp, 48);                                  // 2136d8 addiu $v0, $sp, 0x30
        WRITE32(lo32(r.sp) + 0x21cu, lo32(r.a1));                // 2136dc sw $a1, 0x21C($sp)
        r.v1 = addiu(r.sp, 64);                                  // 2136e0 addiu $v1, $sp, 0x40
        r.a1 = addiu(r.sp, 96);                                  // 2136e4 addiu $a1, $sp, 0x60
        r.s6 = addiu(r.sp, 112);                                 // 2136e8 addiu $s6, $sp, 0x70
        r.s5 = addiu(r.sp, 144);                                 // 2136ec addiu $s5, $sp, 0x90
        r.s4 = addiu(r.sp, 16);                                  // 2136f0 addiu $s4, $sp, 0x10
        r.s2 = addiu(r.sp, 32);                                  // 2136f4 addiu $s2, $sp, 0x20
        WRITE32(lo32(r.sp) + 0x214u, lo32(r.v0));                // 2136f8 sw $v0, 0x214($sp)
        WRITE32(lo32(r.sp) + 0x218u, lo32(r.v1));                // 2136fc sw $v1, 0x218($sp)
        WRITE32(lo32(r.sp) + 0x220u, lo32(r.a1));                // 213700 sw $a1, 0x220($sp)
    L_213708:
        r.v1 = LW(lo32(r.s1) + 0x5cu);                           // 213708 lw $v1, 0x5C($s1)
        r.v0 = sll32(r.s3, 2);                                   // 21370c sll $v0, $s3, 2
        r.a0 = r.s1;                                             // 213710 daddu $a0, $s1, $zero
        r.a1 = r.s7;                                             // 213714 daddu $a1, $s7, $zero
        r.t1 = LW(lo32(r.v1));                                   // 213718 lw $t1, 0x0($v1)
        r.a2 = r.s3;                                             // 21371c daddu $a2, $s3, $zero
        r.t0 = r.s6;                                             // 213720 daddu $t0, $s6, $zero
        r.f12 = FPU_MOV_S(r.f22);                                // 213724 mov.s $f12, $f22
        r.v0 = addu(r.v0, r.t1);                                 // 213728 addu $v0, $v0, $t1
        r.ra = 0x213734u;                                        // 21372c jal func_215280
        r.s0 = LW(lo32(r.v0));                                   // 213730 lw $s0, 0x0($v0)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(s0, 16); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(10); STORE_F(11); STORE_F(12); STORE_F(20); STORE_F(21); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215280u, 0x21372cu, 0x213734u)) return;
        LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(s5, 21); LOAD_GPR(s7, 23); LOAD_GPR(sp, 29); LOAD_F(22);
    L_213734:
        r.a3 = LW(lo32(r.sp) + 0x204u);                          // 213734 lw $a3, 0x204($sp)
        r.a0 = r.s1;                                             // 213738 daddu $a0, $s1, $zero
        r.a1 = r.s7;                                             // 21373c daddu $a1, $s7, $zero
        r.a2 = r.s3;                                             // 213740 daddu $a2, $s3, $zero
        r.t0 = r.s5;                                             // 213744 daddu $t0, $s5, $zero
        r.ra = 0x213750u;                                        // 213748 jal func_215280
        r.f12 = FPU_MOV_S(r.f22);                                // 21374c mov.s $f12, $f22
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x215280u, 0x213748u, 0x213750u)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(sp, 29); LOAD_F(22);
    L_213750:
        r.s0 = sll32(r.s0, 6);                                   // 213750 sll $s0, $s0, 6
        r.a3 = LW(lo32(r.sp) + 0x208u);                          // 213754 lw $a3, 0x208($sp)
        r.a0 = r.s1;                                             // 213758 daddu $a0, $s1, $zero
        r.a1 = LW(lo32(r.sp) + 0x210u);                          // 21375c lw $a1, 0x210($sp)
        r.a2 = r.s3;                                             // 213760 daddu $a2, $s3, $zero
        r.t0 = LW(lo32(r.sp) + 0x224u);                          // 213764 lw $t0, 0x224($sp)
        r.ra = 0x213770u;                                        // 213768 jal func_215280
        r.f12 = FPU_MOV_S(r.f22);                                // 21376c mov.s $f12, $f22
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(s0, 16); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x215280u, 0x213768u, 0x213770u)) return;
        LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(sp, 29); LOAD_F(22);
    L_213770:
        r.a3 = LW(lo32(r.sp) + 0x20cu);                          // 213770 lw $a3, 0x20C($sp)
        r.a0 = r.s1;                                             // 213774 daddu $a0, $s1, $zero
        r.a1 = LW(lo32(r.sp) + 0x210u);                          // 213778 lw $a1, 0x210($sp)
        r.a2 = r.s3;                                             // 21377c daddu $a2, $s3, $zero
        r.t0 = LW(lo32(r.sp) + 0x228u);                          // 213780 lw $t0, 0x228($sp)
        r.ra = 0x21378cu;                                        // 213784 jal func_215280
        r.f12 = FPU_MOV_S(r.f22);                                // 213788 mov.s $f12, $f22
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x215280u, 0x213784u, 0x21378cu)) return;
        LOAD_GPR(s2, 18); LOAD_GPR(s4, 20); LOAD_GPR(sp, 29); LOAD_F(20);
    L_21378c:
        r.f16 = LWC1(lo32(r.sp) + 0x7cu);                        // 21378c lwc1 $f16, 0x7C($sp)
        r.a0 = r.s4;                                             // 213790 daddu $a0, $s4, $zero
        r.f15 = LWC1(lo32(r.sp) + 0x80u);                        // 213794 lwc1 $f15, 0x80($sp)
        r.a1 = r.s2;                                             // 213798 daddu $a1, $s2, $zero
        r.f14 = LWC1(lo32(r.sp) + 0x84u);                        // 21379c lwc1 $f14, 0x84($sp)
        r.f12 = FPU_MOV_S(r.f20);                                // 2137a0 mov.s $f12, $f20
        r.f13 = LWC1(lo32(r.sp) + 0x88u);                        // 2137a4 lwc1 $f13, 0x88($sp)
        r.f0 = LWC1(lo32(r.sp) + 0x9cu);                         // 2137a8 lwc1 $f0, 0x9C($sp)
        r.f1 = LWC1(lo32(r.sp) + 0xa0u);                         // 2137ac lwc1 $f1, 0xA0($sp)
        r.f2 = LWC1(lo32(r.sp) + 0xa4u);                         // 2137b0 lwc1 $f2, 0xA4($sp)
        r.f3 = LWC1(lo32(r.sp) + 0xa8u);                         // 2137b4 lwc1 $f3, 0xA8($sp)
        r.f4 = LWC1(lo32(r.sp) + 0xbcu);                         // 2137b8 lwc1 $f4, 0xBC($sp)
        r.f5 = LWC1(lo32(r.sp) + 0xc0u);                         // 2137bc lwc1 $f5, 0xC0($sp)
        r.f6 = LWC1(lo32(r.sp) + 0xc4u);                         // 2137c0 lwc1 $f6, 0xC4($sp)
        r.f7 = LWC1(lo32(r.sp) + 0xc8u);                         // 2137c4 lwc1 $f7, 0xC8($sp)
        r.f8 = LWC1(lo32(r.sp) + 0xdcu);                         // 2137c8 lwc1 $f8, 0xDC($sp)
        r.f9 = LWC1(lo32(r.sp) + 0xe0u);                         // 2137cc lwc1 $f9, 0xE0($sp)
        r.f10 = LWC1(lo32(r.sp) + 0xe4u);                        // 2137d0 lwc1 $f10, 0xE4($sp)
        r.f11 = LWC1(lo32(r.sp) + 0xe8u);                        // 2137d4 lwc1 $f11, 0xE8($sp)
        r.a2 = LW(lo32(r.sp) + 0x21cu);                          // 2137d8 lw $a2, 0x21C($sp)
        SWC1(lo32(r.sp) + 0x10u, r.f16);                         // 2137dc swc1 $f16, 0x10($sp)
        SWC1(lo32(r.sp) + 0x14u, r.f15);                         // 2137e0 swc1 $f15, 0x14($sp)
        SWC1(lo32(r.sp) + 0x18u, r.f14);                         // 2137e4 swc1 $f14, 0x18($sp)
        SWC1(lo32(r.sp) + 0x1cu, r.f13);                         // 2137e8 swc1 $f13, 0x1C($sp)
        SWC1(lo32(r.sp) + 0x20u, r.f0);                          // 2137ec swc1 $f0, 0x20($sp)
        SWC1(lo32(r.sp) + 0x24u, r.f1);                          // 2137f0 swc1 $f1, 0x24($sp)
        SWC1(lo32(r.sp) + 0x28u, r.f2);                          // 2137f4 swc1 $f2, 0x28($sp)
        SWC1(lo32(r.sp) + 0x2cu, r.f3);                          // 2137f8 swc1 $f3, 0x2C($sp)
        SWC1(lo32(r.sp) + 0x30u, r.f4);                          // 2137fc swc1 $f4, 0x30($sp)
        SWC1(lo32(r.sp) + 0x34u, r.f5);                          // 213800 swc1 $f5, 0x34($sp)
        SWC1(lo32(r.sp) + 0x38u, r.f6);                          // 213804 swc1 $f6, 0x38($sp)
        SWC1(lo32(r.sp) + 0x3cu, r.f7);                          // 213808 swc1 $f7, 0x3C($sp)
        SWC1(lo32(r.sp) + 0x40u, r.f8);                          // 21380c swc1 $f8, 0x40($sp)
        SWC1(lo32(r.sp) + 0x44u, r.f9);                          // 213810 swc1 $f9, 0x44($sp)
        SWC1(lo32(r.sp) + 0x48u, r.f10);                         // 213814 swc1 $f10, 0x48($sp)
        r.ra = 0x213820u;                                        // 213818 jal func_2B4080
        SWC1(lo32(r.sp) + 0x4cu, r.f11);                         // 21381c swc1 $f11, 0x4C($sp)
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(10); STORE_F(11); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); STORE_F(16);
        if (!guestCall(G_PASS, 0x2b4080u, 0x213818u, 0x213820u)) return;
        LOAD_GPR(sp, 29); LOAD_F(21);
    L_213820:
        r.a0 = LW(lo32(r.sp) + 0x214u);                          // 213820 lw $a0, 0x214($sp)
        r.f12 = FPU_MOV_S(r.f21);                                // 213824 mov.s $f12, $f21
        r.a1 = LW(lo32(r.sp) + 0x218u);                          // 213828 lw $a1, 0x218($sp)
        r.ra = 0x213834u;                                        // 21382c jal func_2B4080
        r.a2 = LW(lo32(r.sp) + 0x220u);                          // 213830 lw $a2, 0x220($sp)
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x2b4080u, 0x21382cu, 0x213834u)) return;
        LOAD_GPR(s1, 17); LOAD_GPR(sp, 29);
    L_213834:
        r.f12 = LWC1(lo32(r.s1) + 0xe4u);                        // 213834 lwc1 $f12, 0xE4($s1)
        r.a2 = r.sp;                                             // 213838 daddu $a2, $sp, $zero
        r.a0 = LW(lo32(r.sp) + 0x21cu);                          // 21383c lw $a0, 0x21C($sp)
        r.ra = 0x213848u;                                        // 213840 jal func_2B4080
        r.a1 = LW(lo32(r.sp) + 0x220u);                          // 213844 lw $a1, 0x220($sp)
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x2b4080u, 0x213840u, 0x213848u)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(sp, 29);
    L_213848:
        r.a0 = LW(lo32(r.s1) + 0x4u);                            // 213848 lw $a0, 0x4($s1)
        r.a1 = r.sp;                                             // 21384c daddu $a1, $sp, $zero
        r.ra = 0x213858u;                                        // 213850 jal func_2B3F90
        r.a0 = addu(r.a0, r.s0);                                 // 213854 addu $a0, $a0, $s0
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2b3f90u, 0x213850u, 0x213858u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(12); LOAD_F(20); LOAD_F(21); LOAD_F(22); r.fcr31 = ctx->fcr31;
    L_213858:
        t = r.s3 != 0u;                                          // 213858 bnez $s3, . + 4 + (0x4E << 2)
        r.f3 = LWC1(lo32(r.sp) + 0x70u);                         // 21385c lwc1 $f3, 0x70($sp)
        if (t) goto L_213994;
        r.v0 = LW(lo32(r.s7) + 0xcu);                            // 213860 lw $v0, 0xC($s7)
        r.v0 = r.v0 & 0x2u;                                      // 213864 andi $v0, $v0, 0x2
        t = r.v0 == 0u;                                          // 213868 beqz $v0, . + 4 + (0x32 << 2)
        r.f2 = LWC1(lo32(r.sp) + 0x74u);                         // 21386c lwc1 $f2, 0x74($sp)
        if (t) goto L_213934;
        r.f0 = LWC1(lo32(r.sp) + 0x94u);                         // 213870 lwc1 $f0, 0x94($sp)
        r.f9 = LWC1(lo32(r.sp) + 0xb4u);                         // 213874 lwc1 $f9, 0xB4($sp)
        r.f1 = LWC1(lo32(r.sp) + 0xd4u);                         // 213878 lwc1 $f1, 0xD4($sp)
        r.f0 = FPU_SUB_S(r.f0, r.f2);                            // 21387c sub.s $f0, $f0, $f2
        r.f8 = LWC1(lo32(r.sp) + 0x70u);                         // 213880 lwc1 $f8, 0x70($sp)
        r.f1 = FPU_SUB_S(r.f1, r.f9);                            // 213884 sub.s $f1, $f1, $f9
        r.f6 = LWC1(lo32(r.sp) + 0xb0u);                         // 213888 lwc1 $f6, 0xB0($sp)
        r.f0 = FPU_MUL_S(r.f0, r.f20);                           // 21388c mul.s $f0, $f0, $f20
        r.f5 = LWC1(lo32(r.sp) + 0x90u);                         // 213890 lwc1 $f5, 0x90($sp)
        r.f4 = LWC1(lo32(r.sp) + 0xd0u);                         // 213894 lwc1 $f4, 0xD0($sp)
        r.f1 = FPU_MUL_S(r.f1, r.f21);                           // 213898 mul.s $f1, $f1, $f21
        r.f10 = LWC1(lo32(r.sp) + 0x78u);                        // 21389c lwc1 $f10, 0x78($sp)
        r.f11 = FPU_ADD_S(r.f2, r.f0);                           // 2138a0 add.s $f11, $f2, $f0
        r.f3 = LWC1(lo32(r.sp) + 0x98u);                         // 2138a4 lwc1 $f3, 0x98($sp)
        r.f5 = FPU_SUB_S(r.f5, r.f8);                            // 2138a8 sub.s $f5, $f5, $f8
        r.f7 = LWC1(lo32(r.sp) + 0xb8u);                         // 2138ac lwc1 $f7, 0xB8($sp)
        r.f0 = FPU_ADD_S(r.f9, r.f1);                            // 2138b0 add.s $f0, $f9, $f1
        r.f2 = LWC1(lo32(r.sp) + 0xd8u);                         // 2138b4 lwc1 $f2, 0xD8($sp)
        r.f4 = FPU_SUB_S(r.f4, r.f6);                            // 2138b8 sub.s $f4, $f4, $f6
        r.f1 = LWC1(lo32(r.s1) + 0xe4u);                         // 2138bc lwc1 $f1, 0xE4($s1)
        r.f3 = FPU_SUB_S(r.f3, r.f10);                           // 2138c0 sub.s $f3, $f3, $f10
        r.v0 = LW(lo32(r.s1) + 0x4u);                            // 2138c4 lw $v0, 0x4($s1)
        SWC1(lo32(r.s1) + 0xacu, r.f0);                          // 2138c8 swc1 $f0, 0xAC($s1)
        r.f5 = FPU_MUL_S(r.f5, r.f20);                           // 2138cc mul.s $f5, $f5, $f20
        r.f2 = FPU_SUB_S(r.f2, r.f7);                            // 2138d0 sub.s $f2, $f2, $f7
        r.f4 = FPU_MUL_S(r.f4, r.f21);                           // 2138d4 mul.s $f4, $f4, $f21
        r.f0 = FPU_SUB_S(r.f0, r.f11);                           // 2138d8 sub.s $f0, $f0, $f11
        r.f3 = FPU_MUL_S(r.f3, r.f20);                           // 2138dc mul.s $f3, $f3, $f20
        r.f8 = FPU_ADD_S(r.f8, r.f5);                            // 2138e0 add.s $f8, $f8, $f5
        r.f6 = FPU_ADD_S(r.f6, r.f4);                            // 2138e4 add.s $f6, $f6, $f4
        r.f0 = FPU_MUL_S(r.f0, r.f1);                            // 2138e8 mul.s $f0, $f0, $f1
        r.f2 = FPU_MUL_S(r.f2, r.f21);                           // 2138ec mul.s $f2, $f2, $f21
        r.f5 = FPU_ADD_S(r.f10, r.f3);                           // 2138f0 add.s $f5, $f10, $f3
        r.f0 = FPU_ADD_S(r.f11, r.f0);                           // 2138f4 add.s $f0, $f11, $f0
        r.f7 = FPU_ADD_S(r.f7, r.f2);                            // 2138f8 add.s $f7, $f7, $f2
        r.f3 = FPU_NEG_S(r.f8);                                  // 2138fc neg.s $f3, $f8
        SWC1(lo32(r.s1) + 0x70u, r.f5);                          // 213900 swc1 $f5, 0x70($s1)
        r.f6 = FPU_NEG_S(r.f6);                                  // 213904 neg.s $f6, $f6
        SWC1(lo32(r.s1) + 0x6cu, r.f0);                          // 213908 swc1 $f0, 0x6C($s1)
        SWC1(lo32(r.s1) + 0xb0u, r.f7);                          // 21390c swc1 $f7, 0xB0($s1)
        SWC1(lo32(r.s1) + 0x68u, r.f3);                          // 213910 swc1 $f3, 0x68($s1)
        SWC1(lo32(r.s1) + 0xa8u, r.f6);                          // 213914 swc1 $f6, 0xA8($s1)
        WRITE32(lo32(r.v0) + 0x30u, lo32(0u));                   // 213918 sw $zero, 0x30($v0)
        r.v1 = LW(lo32(r.s1) + 0x4u);                            // 21391c lw $v1, 0x4($s1)
        r.f0 = LWC1(lo32(r.s1) + 0x6cu);                         // 213920 lwc1 $f0, 0x6C($s1)
        SWC1(lo32(r.v1) + 0x34u, r.f0);                          // 213924 swc1 $f0, 0x34($v1)
        r.v0 = LW(lo32(r.s1) + 0x4u);                            // 213928 lw $v0, 0x4($s1)
        // 21392c b . + 4 + (0x30 << 2)
        WRITE32(lo32(r.v0) + 0x38u, lo32(0u));                   // 213930 sw $zero, 0x38($v0)
        goto L_2139f0;
    L_213934:
        r.f3 = LWC1(lo32(r.sp) + 0x74u);                         // 213934 lwc1 $f3, 0x74($sp)
        r.f0 = LWC1(lo32(r.sp) + 0x94u);                         // 213938 lwc1 $f0, 0x94($sp)
        r.f4 = LWC1(lo32(r.sp) + 0xb4u);                         // 21393c lwc1 $f4, 0xB4($sp)
        r.f1 = LWC1(lo32(r.sp) + 0xd4u);                         // 213940 lwc1 $f1, 0xD4($sp)
        r.f0 = FPU_SUB_S(r.f0, r.f3);                            // 213944 sub.s $f0, $f0, $f3
        r.v0 = LW(lo32(r.s1) + 0x4u);                            // 213948 lw $v0, 0x4($s1)
        r.f1 = FPU_SUB_S(r.f1, r.f4);                            // 21394c sub.s $f1, $f1, $f4
        r.f0 = FPU_MUL_S(r.f0, r.f20);                           // 213950 mul.s $f0, $f0, $f20
        r.v0 = addu(r.s0, r.v0);                                 // 213954 addu $v0, $s0, $v0
        WRITE32(lo32(r.v0) + 0x30u, lo32(0u));                   // 213958 sw $zero, 0x30($v0)
        r.f1 = FPU_MUL_S(r.f1, r.f21);                           // 21395c mul.s $f1, $f1, $f21
        r.f11 = FPU_ADD_S(r.f3, r.f0);                           // 213960 add.s $f11, $f3, $f0
        r.f2 = LWC1(lo32(r.s1) + 0xe4u);                         // 213964 lwc1 $f2, 0xE4($s1)
        r.v1 = LW(lo32(r.s1) + 0x4u);                            // 213968 lw $v1, 0x4($s1)
        r.f0 = FPU_ADD_S(r.f4, r.f1);                            // 21396c add.s $f0, $f4, $f1
        r.v1 = addu(r.s0, r.v1);                                 // 213970 addu $v1, $s0, $v1
        r.f0 = FPU_SUB_S(r.f0, r.f11);                           // 213974 sub.s $f0, $f0, $f11
        r.f0 = FPU_MUL_S(r.f0, r.f2);                            // 213978 mul.s $f0, $f0, $f2
        r.f0 = FPU_ADD_S(r.f11, r.f0);                           // 21397c add.s $f0, $f11, $f0
        SWC1(lo32(r.v1) + 0x34u, r.f0);                          // 213980 swc1 $f0, 0x34($v1)
        r.v0 = LW(lo32(r.s1) + 0x4u);                            // 213984 lw $v0, 0x4($s1)
        r.v0 = addu(r.s0, r.v0);                                 // 213988 addu $v0, $s0, $v0
        // 21398c b . + 4 + (0x18 << 2)
        WRITE32(lo32(r.v0) + 0x38u, lo32(0u));                   // 213990 sw $zero, 0x38($v0)
        goto L_2139f0;
    L_213994:
        r.f2 = LWC1(lo32(r.sp) + 0x90u);                         // 213994 lwc1 $f2, 0x90($sp)
        r.f4 = LWC1(lo32(r.sp) + 0x74u);                         // 213998 lwc1 $f4, 0x74($sp)
        r.f2 = FPU_SUB_S(r.f2, r.f3);                            // 21399c sub.s $f2, $f2, $f3
        r.f1 = LWC1(lo32(r.sp) + 0x94u);                         // 2139a0 lwc1 $f1, 0x94($sp)
        r.v0 = LW(lo32(r.s1) + 0x4u);                            // 2139a4 lw $v0, 0x4($s1)
        r.f1 = FPU_SUB_S(r.f1, r.f4);                            // 2139a8 sub.s $f1, $f1, $f4
        r.f5 = LWC1(lo32(r.sp) + 0x78u);                         // 2139ac lwc1 $f5, 0x78($sp)
        r.f2 = FPU_MUL_S(r.f2, r.f20);                           // 2139b0 mul.s $f2, $f2, $f20
        r.f0 = LWC1(lo32(r.sp) + 0x98u);                         // 2139b4 lwc1 $f0, 0x98($sp)
        r.v0 = addu(r.s0, r.v0);                                 // 2139b8 addu $v0, $s0, $v0
        r.f1 = FPU_MUL_S(r.f1, r.f20);                           // 2139bc mul.s $f1, $f1, $f20
        r.f3 = FPU_ADD_S(r.f3, r.f2);                            // 2139c0 add.s $f3, $f3, $f2
        r.f0 = FPU_SUB_S(r.f0, r.f5);                            // 2139c4 sub.s $f0, $f0, $f5
        r.f11 = FPU_ADD_S(r.f4, r.f1);                           // 2139c8 add.s $f11, $f4, $f1
        SWC1(lo32(r.v0) + 0x30u, r.f3);                          // 2139cc swc1 $f3, 0x30($v0)
        r.f0 = FPU_MUL_S(r.f0, r.f20);                           // 2139d0 mul.s $f0, $f0, $f20
        r.v1 = LW(lo32(r.s1) + 0x4u);                            // 2139d4 lw $v1, 0x4($s1)
        r.v1 = addu(r.s0, r.v1);                                 // 2139d8 addu $v1, $s0, $v1
        r.f5 = FPU_ADD_S(r.f5, r.f0);                            // 2139dc add.s $f5, $f5, $f0
        SWC1(lo32(r.v1) + 0x34u, r.f11);                         // 2139e0 swc1 $f11, 0x34($v1)
        r.v0 = LW(lo32(r.s1) + 0x4u);                            // 2139e4 lw $v0, 0x4($s1)
        r.v0 = addu(r.s0, r.v0);                                 // 2139e8 addu $v0, $s0, $v0
        SWC1(lo32(r.v0) + 0x38u, r.f5);                          // 2139ec swc1 $f5, 0x38($v0)
    L_2139f0:
        r.s3 = addiu(r.s3, 1);                                   // 2139f0 addiu $s3, $s3, 0x1
        r.v0 = slt(r.s3, r.fp);                                  // 2139f4 slt $v0, $s3, $fp
        t = r.v0 != 0u;                                          // 2139f8 bnez $v0, . + 4 + (-0xBD << 2)
        r.a3 = LW(lo32(r.sp) + 0x200u);                          // 2139fc lw $a3, 0x200($sp)
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x213708u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a3, 7); STORE_GPR(s3, 19); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(10); STORE_F(11); return; }
            goto L_213708;
        }
        r.a2 = LW(lo32(r.s1) + 0xf4u);                           // 213a00 lw $a2, 0xF4($s1)
    L_213a04:
        r.v1 = LW(lo32(r.a2) + 0x8u);                            // 213a04 lw $v1, 0x8($a2)
    L_213a08:
        r.v0 = addiu(0u, 4096);                                  // 213a08 addiu $v0, $zero, 0x1000
        if (r.v1 != r.v0)                                        // 213a0c bnel $v1, $v0, . + 4 + (0x5 << 2)
        {
            r.v0 = LW(lo32(r.a2) + 0x160u);                          // 213a10 lw $v0, 0x160($a2)
            goto L_213a24;
        }
        r.at = sext32(0x3f000000u);                              // 213a14 lui $at, 0x3F00
        r.f21 = floatOf(lo32(r.at));                             // 213a18 mtc1 $at, $f21
        // 213a1c b . + 4 + (0x8 << 2)
        r.v0 = LW(lo32(r.s1) + 0x9cu);                           // 213a20 lw $v0, 0x9C($s1)
        goto L_213a40;
    L_213a24:
        r.a0 = addiu(0u, 1);                                     // 213a24 addiu $a0, $zero, 0x1
        r.at = sext32(0x3f000000u);                              // 213a28 lui $at, 0x3F00
        r.f21 = floatOf(lo32(r.at));                             // 213a2c mtc1 $at, $f21
        r.v1 = LW(lo32(r.v0) + 0x8u);                            // 213a30 lw $v1, 0x8($v0)
        t = r.v1 != r.a0;                                        // 213a34 bne $v1, $a0, . + 4 + (0x2 << 2)
        r.v0 = LW(lo32(r.s1) + 0x9cu);                           // 213a38 lw $v0, 0x9C($s1)
        if (t) goto L_213a40;
        r.f21 = LWC1(lo32(r.gp) - 0x7fccu);                      // 213a3c lwc1 $f21, -0x7FCC($gp)
    L_213a40:
        if (r.v0 != 0u)                                          // 213a40 bnel $v0, $zero, . + 4 + (0x1C << 2)
        {
            r.v0 = LW(lo32(r.s1) + 0xdcu);                           // 213a44 lw $v0, 0xDC($s1)
            goto L_213ab4;
        }
        r.f1 = LWC1(lo32(r.s1) + 0x64u);                         // 213a48 lwc1 $f1, 0x64($s1)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f1, r.f21)); // 213a4c c.le.s $f1, $f21
        if ((r.fcr31 & kCondition) == 0u)                        // 213a54 bc1fl . + 4 + (0x17 << 2)
        {
            r.v0 = LW(lo32(r.s1) + 0xdcu);                           // 213a58 lw $v0, 0xDC($s1)
            goto L_213ab4;
        }
        r.f1 = divS(r.f1, r.f21, r.fcr31);                       // 213a64 div.s $f1, $f1, $f21
        r.at = sext32(0x42b40000u);                              // 213a68 lui $at, 0x42B4
        r.f0 = floatOf(lo32(r.at));                              // 213a6c mtc1 $at, $f0
        r.f12 = LWC1(lo32(r.s1) + 0x94u);                        // 213a70 lwc1 $f12, 0x94($s1)
        r.f20 = FPU_MUL_S(r.f1, r.f0);                           // 213a74 mul.s $f20, $f1, $f0
        r.ra = 0x213a80u;                                        // 213a78 jal func_284E38
        r.f13 = FPU_MOV_S(r.f20);                                // 213a7c mov.s $f13, $f20
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(s3, 19); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(10); STORE_F(11); STORE_F(12); STORE_F(13); STORE_F(20); STORE_F(21); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x284e38u, 0x213a78u, 0x213a80u)) return;
        LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a3, 7); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(20); LOAD_F(21); r.fcr31 = ctx->fcr31;
    L_213a80:
        r.a2 = LW(lo32(r.s1) + 0xf4u);                           // 213a80 lw $a2, 0xF4($s1)
        r.at = sext32(0x43b40000u);                              // 213a84 lui $at, 0x43B4
        r.f2 = floatOf(lo32(r.at));                              // 213a88 mtc1 $at, $f2
        r.f1 = LWC1(lo32(r.a2) + 0x54u);                         // 213a8c lwc1 $f1, 0x54($a2)
        r.f0 = FPU_ADD_S(r.f1, r.f0);                            // 213a90 add.s $f0, $f1, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f2, r.f0)); // 213a94 c.lt.s $f2, $f0
        t = (r.fcr31 & kCondition) == 0u;                        // 213a9c bc1f . + 4 + (0x3 << 2)
        SWC1(lo32(r.a2) + 0x54u, r.f0);                          // 213aa0 swc1 $f0, 0x54($a2)
        if (t) goto L_213aac;
        r.f0 = FPU_SUB_S(r.f0, r.f2);                            // 213aa4 sub.s $f0, $f0, $f2
        SWC1(lo32(r.a2) + 0x54u, r.f0);                          // 213aa8 swc1 $f0, 0x54($a2)
    L_213aac:
        SWC1(lo32(r.s1) + 0x94u, r.f20);                         // 213aac swc1 $f20, 0x94($s1)
        r.v0 = LW(lo32(r.s1) + 0xdcu);                           // 213ab0 lw $v0, 0xDC($s1)
    L_213ab4:
        if (r.v0 != 0u)                                          // 213ab4 bnel $v0, $zero, . + 4 + (0x1C << 2)
        {
            r.v1 = LW(lo32(r.s1) + 0x9cu);                           // 213ab8 lw $v1, 0x9C($s1)
            goto L_213b28;
        }
        r.f1 = LWC1(lo32(r.s1) + 0xa4u);                         // 213abc lwc1 $f1, 0xA4($s1)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f1, r.f21)); // 213ac0 c.le.s $f1, $f21
        if ((r.fcr31 & kCondition) == 0u)                        // 213ac8 bc1fl . + 4 + (0x17 << 2)
        {
            r.v1 = LW(lo32(r.s1) + 0x9cu);                           // 213acc lw $v1, 0x9C($s1)
            goto L_213b28;
        }
        r.f1 = divS(r.f1, r.f21, r.fcr31);                       // 213ad8 div.s $f1, $f1, $f21
        r.at = sext32(0x42b40000u);                              // 213adc lui $at, 0x42B4
        r.f0 = floatOf(lo32(r.at));                              // 213ae0 mtc1 $at, $f0
        r.f12 = LWC1(lo32(r.s1) + 0xd4u);                        // 213ae4 lwc1 $f12, 0xD4($s1)
        r.f20 = FPU_MUL_S(r.f1, r.f0);                           // 213ae8 mul.s $f20, $f1, $f0
        r.ra = 0x213af4u;                                        // 213aec jal func_284E38
        r.f13 = FPU_MOV_S(r.f20);                                // 213af0 mov.s $f13, $f20
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(s3, 19); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(10); STORE_F(11); STORE_F(12); STORE_F(13); STORE_F(20); STORE_F(21); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x284e38u, 0x213aecu, 0x213af4u)) return;
        LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a3, 7); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(20); LOAD_F(21); r.fcr31 = ctx->fcr31;
    L_213af4:
        r.a2 = LW(lo32(r.s1) + 0xf4u);                           // 213af4 lw $a2, 0xF4($s1)
        r.at = sext32(0x43b40000u);                              // 213af8 lui $at, 0x43B4
        r.f2 = floatOf(lo32(r.at));                              // 213afc mtc1 $at, $f2
        r.f1 = LWC1(lo32(r.a2) + 0x54u);                         // 213b00 lwc1 $f1, 0x54($a2)
        r.f0 = FPU_ADD_S(r.f1, r.f0);                            // 213b04 add.s $f0, $f1, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f2, r.f0)); // 213b08 c.lt.s $f2, $f0
        t = (r.fcr31 & kCondition) == 0u;                        // 213b10 bc1f . + 4 + (0x3 << 2)
        SWC1(lo32(r.a2) + 0x54u, r.f0);                          // 213b14 swc1 $f0, 0x54($a2)
        if (t) goto L_213b20;
        r.f0 = FPU_SUB_S(r.f0, r.f2);                            // 213b18 sub.s $f0, $f0, $f2
        SWC1(lo32(r.a2) + 0x54u, r.f0);                          // 213b1c swc1 $f0, 0x54($a2)
    L_213b20:
        SWC1(lo32(r.s1) + 0xd4u, r.f20);                         // 213b20 swc1 $f20, 0xD4($s1)
        r.v1 = LW(lo32(r.s1) + 0x9cu);                           // 213b24 lw $v1, 0x9C($s1)
    L_213b28:
        r.v0 = addiu(0u, 1);                                     // 213b28 addiu $v0, $zero, 0x1
        if (r.v1 != r.v0)                                        // 213b2c bnel $v1, $v0, . + 4 + (0x1E << 2)
        {
            r.v1 = LW(lo32(r.s1) + 0xdcu);                           // 213b30 lw $v1, 0xDC($s1)
            goto L_213ba8;
        }
        r.f1 = LWC1(lo32(r.s1) + 0x64u);                         // 213b34 lwc1 $f1, 0x64($s1)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f1, r.f21)); // 213b38 c.le.s $f1, $f21
        if ((r.fcr31 & kCondition) == 0u)                        // 213b40 bc1fl . + 4 + (0x19 << 2)
        {
            r.v1 = LW(lo32(r.s1) + 0xdcu);                           // 213b44 lw $v1, 0xDC($s1)
            goto L_213ba8;
        }
        r.f1 = divS(r.f1, r.f21, r.fcr31);                       // 213b50 div.s $f1, $f1, $f21
        r.at = sext32(0x42b40000u);                              // 213b54 lui $at, 0x42B4
        r.f0 = floatOf(lo32(r.at));                              // 213b58 mtc1 $at, $f0
        r.f12 = LWC1(lo32(r.s1) + 0x94u);                        // 213b5c lwc1 $f12, 0x94($s1)
        r.f20 = FPU_MUL_S(r.f1, r.f0);                           // 213b60 mul.s $f20, $f1, $f0
        r.ra = 0x213b6cu;                                        // 213b64 jal func_284E38
        r.f13 = FPU_MOV_S(r.f20);                                // 213b68 mov.s $f13, $f20
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(s3, 19); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(10); STORE_F(11); STORE_F(12); STORE_F(13); STORE_F(20); STORE_F(21); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x284e38u, 0x213b64u, 0x213b6cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a3, 7); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(20); LOAD_F(21); r.fcr31 = ctx->fcr31;
    L_213b6c:
        r.a2 = LW(lo32(r.s1) + 0xf4u);                           // 213b6c lw $a2, 0xF4($s1)
        r.f2 = floatOf(lo32(0u));                                // 213b70 mtc1 $zero, $f2
        r.f1 = LWC1(lo32(r.a2) + 0x54u);                         // 213b74 lwc1 $f1, 0x54($a2)
        r.f1 = FPU_SUB_S(r.f1, r.f0);                            // 213b78 sub.s $f1, $f1, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f2)); // 213b7c c.lt.s $f1, $f2
        t = (r.fcr31 & kCondition) == 0u;                        // 213b84 bc1f . + 4 + (0x5 << 2)
        SWC1(lo32(r.a2) + 0x54u, r.f1);                          // 213b88 swc1 $f1, 0x54($a2)
        if (t) goto L_213b9c;
        r.at = sext32(0x43b40000u);                              // 213b8c lui $at, 0x43B4
        r.f0 = floatOf(lo32(r.at));                              // 213b90 mtc1 $at, $f0
        r.f0 = FPU_ADD_S(r.f1, r.f0);                            // 213b94 add.s $f0, $f1, $f0
        SWC1(lo32(r.a2) + 0x54u, r.f0);                          // 213b98 swc1 $f0, 0x54($a2)
    L_213b9c:
        SWC1(lo32(r.s1) + 0x94u, r.f20);                         // 213b9c swc1 $f20, 0x94($s1)
        r.v1 = LW(lo32(r.s1) + 0xdcu);                           // 213ba0 lw $v1, 0xDC($s1)
        r.v0 = addiu(0u, 1);                                     // 213ba4 addiu $v0, $zero, 0x1
    L_213ba8:
        if (r.v1 != r.v0)                                        // 213ba8 bnel $v1, $v0, . + 4 + (0x1D << 2)
        {
            r.f1 = LWC1(lo32(r.a2) + 0xc8u);                         // 213bac lwc1 $f1, 0xC8($a2)
            goto L_213c20;
        }
        r.f1 = LWC1(lo32(r.s1) + 0xa4u);                         // 213bb0 lwc1 $f1, 0xA4($s1)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f1, r.f21)); // 213bb4 c.le.s $f1, $f21
        if ((r.fcr31 & kCondition) == 0u)                        // 213bbc bc1fl . + 4 + (0x18 << 2)
        {
            r.f1 = LWC1(lo32(r.a2) + 0xc8u);                         // 213bc0 lwc1 $f1, 0xC8($a2)
            goto L_213c20;
        }
        r.f1 = divS(r.f1, r.f21, r.fcr31);                       // 213bcc div.s $f1, $f1, $f21
        r.at = sext32(0x42b40000u);                              // 213bd0 lui $at, 0x42B4
        r.f0 = floatOf(lo32(r.at));                              // 213bd4 mtc1 $at, $f0
        r.f12 = LWC1(lo32(r.s1) + 0xd4u);                        // 213bd8 lwc1 $f12, 0xD4($s1)
        r.f20 = FPU_MUL_S(r.f1, r.f0);                           // 213bdc mul.s $f20, $f1, $f0
        r.ra = 0x213be8u;                                        // 213be0 jal func_284E38
        r.f13 = FPU_MOV_S(r.f20);                                // 213be4 mov.s $f13, $f20
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(s3, 19); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(10); STORE_F(11); STORE_F(12); STORE_F(13); STORE_F(20); STORE_F(21); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x284e38u, 0x213be0u, 0x213be8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a1, 5); LOAD_GPR(a3, 7); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(20); LOAD_F(21); r.fcr31 = ctx->fcr31;
    L_213be8:
        r.a2 = LW(lo32(r.s1) + 0xf4u);                           // 213be8 lw $a2, 0xF4($s1)
        r.f2 = floatOf(lo32(0u));                                // 213bec mtc1 $zero, $f2
        r.f1 = LWC1(lo32(r.a2) + 0x54u);                         // 213bf0 lwc1 $f1, 0x54($a2)
        r.f1 = FPU_SUB_S(r.f1, r.f0);                            // 213bf4 sub.s $f1, $f1, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f2)); // 213bf8 c.lt.s $f1, $f2
        t = (r.fcr31 & kCondition) == 0u;                        // 213c00 bc1f . + 4 + (0x5 << 2)
        SWC1(lo32(r.a2) + 0x54u, r.f1);                          // 213c04 swc1 $f1, 0x54($a2)
        if (t) goto L_213c18;
        r.at = sext32(0x43b40000u);                              // 213c08 lui $at, 0x43B4
        r.f0 = floatOf(lo32(r.at));                              // 213c0c mtc1 $at, $f0
        r.f0 = FPU_ADD_S(r.f1, r.f0);                            // 213c10 add.s $f0, $f1, $f0
        SWC1(lo32(r.a2) + 0x54u, r.f0);                          // 213c14 swc1 $f0, 0x54($a2)
    L_213c18:
        SWC1(lo32(r.s1) + 0xd4u, r.f20);                         // 213c18 swc1 $f20, 0xD4($s1)
        r.f1 = LWC1(lo32(r.a2) + 0xc8u);                         // 213c1c lwc1 $f1, 0xC8($a2)
    L_213c20:
        r.f0 = floatOf(lo32(0u));                                // 213c20 mtc1 $zero, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f1)); // 213c24 c.lt.s $f0, $f1
        if ((r.fcr31 & kCondition) == 0u)                        // 213c2c bc1fl . + 4 + (0x16 << 2)
        {
            r.a1 = LW(lo32(r.s1) + 0x4u);                            // 213c30 lw $a1, 0x4($s1)
            goto L_213c88;
        }
        r.ra = 0x213c3cu;                                        // 213c34 jal func_215B50
        r.a0 = r.a2;                                             // 213c38 daddu $a0, $a2, $zero
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(s3, 19); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(10); STORE_F(11); STORE_F(12); STORE_F(20); STORE_F(21); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215b50u, 0x213c34u, 0x213c3cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(20); LOAD_F(21); r.fcr31 = ctx->fcr31;
    L_213c3c:
        r.a2 = LW(lo32(r.s1) + 0xf4u);                           // 213c3c lw $a2, 0xF4($s1)
        r.v0 = LW(lo32(r.a2) + 0x150u);                          // 213c40 lw $v0, 0x150($a2)
        t = neg64(r.v0);                                         // 213c44 bltz $v0, . + 4 + (0x7 << 2)
        r.v0 = sll32(r.v0, 6);                                   // 213c48 sll $v0, $v0, 6
        if (t) goto L_213c64;
        r.a0 = LW(lo32(r.s1) + 0x4u);                            // 213c4c lw $a0, 0x4($s1)
        r.a2 = addiu(r.a2, 208);                                 // 213c50 addiu $a2, $a2, 0xD0
        r.a0 = addu(r.a0, r.v0);                                 // 213c54 addu $a0, $a0, $v0
        r.ra = 0x213c60u;                                        // 213c58 jal func_2D5E98
        r.a1 = r.a0;                                             // 213c5c daddu $a1, $a0, $zero
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x213c58u, 0x213c60u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(20); LOAD_F(21); r.fcr31 = ctx->fcr31;
    L_213c60:
        r.a2 = LW(lo32(r.s1) + 0xf4u);                           // 213c60 lw $a2, 0xF4($s1)
    L_213c64:
        r.v0 = LW(lo32(r.a2) + 0x154u);                          // 213c64 lw $v0, 0x154($a2)
        t = neg64(r.v0);                                         // 213c68 bltz $v0, . + 4 + (0x6 << 2)
        r.v0 = sll32(r.v0, 6);                                   // 213c6c sll $v0, $v0, 6
        if (t) goto L_213c84;
        r.a0 = LW(lo32(r.s1) + 0x4u);                            // 213c70 lw $a0, 0x4($s1)
        r.a2 = addiu(r.a2, 272);                                 // 213c74 addiu $a2, $a2, 0x110
        r.a0 = addu(r.a0, r.v0);                                 // 213c78 addu $a0, $a0, $v0
        r.ra = 0x213c84u;                                        // 213c7c jal func_2D5E98
        r.a1 = r.a0;                                             // 213c80 daddu $a1, $a0, $zero
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x213c7cu, 0x213c84u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(20); LOAD_F(21); r.fcr31 = ctx->fcr31;
    L_213c84:
        r.a1 = LW(lo32(r.s1) + 0x4u);                            // 213c84 lw $a1, 0x4($s1)
    L_213c88:
        r.a0 = r.s1;                                             // 213c88 daddu $a0, $s1, $zero
        r.a2 = 0u;                                               // 213c8c daddu $a2, $zero, $zero
        r.ra = 0x213c98u;                                        // 213c90 jal func_2149B0
        r.a3 = addiu(0u, -1);                                    // 213c94 addiu $a3, $zero, -0x1
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(s3, 19); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(10); STORE_F(11); STORE_F(12); STORE_F(20); STORE_F(21); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2149b0u, 0x213c90u, 0x213c98u)) return;
        LOAD_GPR(s1, 17);
    L_213c98:
        r.s4 = 0u;                                               // 213c98 daddu $s4, $zero, $zero
        r.at = sext32(0x3f000000u);                              // 213c9c lui $at, 0x3F00
        r.f12 = floatOf(lo32(r.at));                             // 213ca0 mtc1 $at, $f12
        r.a0 = r.s1;                                             // 213ca4 daddu $a0, $s1, $zero
        r.ra = 0x213cb0u;                                        // 213ca8 jal func_214A88
        r.a1 = 0u;                                               // 213cac daddu $a1, $zero, $zero
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s4, 20); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x214a88u, 0x213ca8u, 0x213cb0u)) return;
        LOAD_GPR(s1, 17); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_213cb0:
        r.a2 = LW(lo32(r.s1) + 0xf4u);                           // 213cb0 lw $a2, 0xF4($s1)
        r.a0 = addiu(0u, 4096);                                  // 213cb4 addiu $a0, $zero, 0x1000
        r.v1 = LW(lo32(r.s1) + 0x5cu);                           // 213cb8 lw $v1, 0x5C($s1)
        r.v0 = LW(lo32(r.a2) + 0x8u);                            // 213cbc lw $v0, 0x8($a2)
        r.a1 = r.a2;                                             // 213cc0 daddu $a1, $a2, $zero
        t = r.v0 != r.a0;                                        // 213cc4 bne $v0, $a0, . + 4 + (0x5 << 2)
        r.a3 = LW(lo32(r.v1) + 0xcu);                            // 213cc8 lw $a3, 0xC($v1)
        if (t) goto L_213cdc;
        r.v0 = LW(lo32(r.a2) + 0x160u);                          // 213ccc lw $v0, 0x160($a2)
        r.f26 = LWC1(lo32(r.v0) + 0x8u);                         // 213cd0 lwc1 $f26, 0x8($v0)
        // 213cd4 b . + 4 + (0x4 << 2)
        r.f21 = LWC1(lo32(r.v0) + 0x4u);                         // 213cd8 lwc1 $f21, 0x4($v0)
        goto L_213ce8;
    L_213cdc:
        r.s4 = LW(lo32(r.a2) + 0x160u);                          // 213cdc lw $s4, 0x160($a2)
        r.f21 = LWC1(lo32(r.s4) + 0xb98u);                       // 213ce0 lwc1 $f21, 0xB98($s4)
        r.f26 = LWC1(lo32(r.s4) + 0xb9cu);                       // 213ce4 lwc1 $f26, 0xB9C($s4)
    L_213ce8:
        r.v1 = LW(lo32(r.a1) + 0xcu);                            // 213ce8 lw $v1, 0xC($a1)
        r.v0 = slti(r.v1, 201);                                  // 213cec slti $v0, $v1, 0xC9
        if (r.v0 != 0u)                                          // 213cf0 bnel $v0, $zero, . + 4 + (0x6A << 2)
        {
            r.v1 = LW(lo32(r.s1) + 0x4u);                            // 213cf4 lw $v1, 0x4($s1)
            goto L_213e9c;
        }
        r.v0 = LW(lo32(r.gp) - 0x608cu);                         // 213cf8 lw $v0, -0x608C($gp)
        r.v0 = addiu(r.v0, 201);                                 // 213cfc addiu $v0, $v0, 0xC9
        r.v0 = slt(r.v1, r.v0);                                  // 213d00 slt $v0, $v1, $v0
        t = r.v0 == 0u;                                          // 213d04 beqz $v0, . + 4 + (0x64 << 2)
        r.v0 = addiu(0u, 80);                                    // 213d08 addiu $v0, $zero, 0x50
        if (t) goto L_213e98;
        r.f23 = LWC1(lo32(r.gp) - 0x7fc8u);                      // 213d0c lwc1 $f23, -0x7FC8($gp)
        r.v1 = LW(lo32(r.s1));                                   // 213d10 lw $v1, 0x0($s1)
        r.s3 = 0u;                                               // 213d14 daddu $s3, $zero, $zero
        r.f21 = FPU_MUL_S(r.f21, r.f23);                         // 213d18 mul.s $f21, $f21, $f23
        r.at = sext32(0x43340000u);                              // 213d1c lui $at, 0x4334
        r.f22 = floatOf(lo32(r.at));                             // 213d20 mtc1 $at, $f22
        r.s5 = LW(lo32(r.v1));                                   // 213d24 lw $s5, 0x0($v1)
        r.f13 = LWC1(lo32(r.a2) + 0x50u);                        // 213d28 lwc1 $f13, 0x50($a2)
        r.f21 = divS(r.f21, r.f22, r.fcr31);                     // 213d34 div.s $f21, $f21, $f22
        r.v0 = mult(r.s5, r.v0, r.lo, r.hi);                     // 213d38 mult $v0, $s5, $v0
        r.f12 = LWC1(lo32(r.a2) + 0x4cu);                        // 213d3c lwc1 $f12, 0x4C($a2)
        r.fp = subu(r.v1, r.v0);                                 // 213d40 subu $fp, $v1, $v0
        r.ra = 0x213d4cu;                                        // 213d44 jal func_284E38
        r.f21 = FPU_NEG_S(r.f21);                                // 213d48 neg.s $f21, $f21
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13); STORE_F(21); STORE_F(22); STORE_F(23); STORE_F(26); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x284e38u, 0x213d44u, 0x213d4cu)) return;
        LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(26);
    L_213d4c:
        r.v0 = LW(lo32(r.s1) + 0xf4u);                           // 213d4c lw $v0, 0xF4($s1)
        r.f20 = FPU_MOV_S(r.f0);                                 // 213d50 mov.s $f20, $f0
        r.f12 = FPU_MOV_S(r.f26);                                // 213d54 mov.s $f12, $f26
        r.ra = 0x213d60u;                                        // 213d58 jal func_284E38
        r.f13 = LWC1(lo32(r.v0) + 0x50u);                        // 213d5c lwc1 $f13, 0x50($v0)
        STORE_GPR(v0, 2); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13); STORE_F(20);
        if (!guestCall(G_PASS, 0x284e38u, 0x213d58u, 0x213d60u)) return;
        LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(20); LOAD_F(21); LOAD_F(22); LOAD_F(23); r.fcr31 = ctx->fcr31;
    L_213d60:
        r.f0 = FPU_MUL_S(r.f0, r.f23);                           // 213d60 mul.s $f0, $f0, $f23
        r.a0 = LW(lo32(r.sp) + 0x22cu);                          // 213d64 lw $a0, 0x22C($sp)
        r.f20 = FPU_MUL_S(r.f20, r.f23);                         // 213d68 mul.s $f20, $f20, $f23
        r.f12 = FPU_MOV_S(r.f21);                                // 213d6c mov.s $f12, $f21
        r.f14 = floatOf(lo32(0u));                               // 213d70 mtc1 $zero, $f14
        r.f0 = divS(r.f0, r.f22, r.fcr31);                       // 213d7c div.s $f0, $f0, $f22
        r.f20 = divS(r.f20, r.f22, r.fcr31);                     // 213d88 div.s $f20, $f20, $f22
        r.ra = 0x213d94u;                                        // 213d8c jal func_2B4B18
        r.f13 = FPU_SUB_S(r.f20, r.f0);                          // 213d90 sub.s $f13, $f20, $f0
        STORE_GPR(a0, 4); STORE_GPR(ra, 31); STORE_F(0); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2b4b18u, 0x213d8cu, 0x213d94u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(13); LOAD_F(14); LOAD_F(20); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_213d94:
        t = lez64(r.s5);                                         // 213d94 blez $s5, . + 4 + (0xD5 << 2)
        r.s6 = addiu(0u, 24);                                    // 213d98 addiu $s6, $zero, 0x18
        if (t) goto L_2140ec;
        r.f20 = LWC1(lo32(r.gp) - 0x7fc4u);                      // 213d9c lwc1 $f20, -0x7FC4($gp)
        r.v0 = LW(lo32(r.s1) + 0x5cu);                           // 213da0 lw $v0, 0x5C($s1)
    L_213da8:
        r.v1 = sll32(r.s3, 2);                                   // 213da8 sll $v1, $s3, 2
        r.a0 = LW(lo32(r.v0) + 0x20u);                           // 213dac lw $a0, 0x20($v0)
        r.v1 = addu(r.v1, r.a0);                                 // 213db0 addu $v1, $v1, $a0
        r.v0 = LW(lo32(r.v1));                                   // 213db4 lw $v0, 0x0($v1)
        r.v0 = addiu(r.v0, -7);                                  // 213db8 addiu $v0, $v0, -0x7
        r.v0 = sltu(r.v0, sext32(4u));                           // 213dbc sltiu $v0, $v0, 0x4
        t = r.v0 == 0u;                                          // 213dc0 beqz $v0, . + 4 + (0x2F << 2)
        r.v0 = addiu(0u, 80);                                    // 213dc4 addiu $v0, $zero, 0x50
        if (t) goto L_213e80;
        r.v1 = mult(r.s3, r.v0, r.lo, r.hi);                     // 213dc8 mult $v1, $s3, $v0
        r.v0 = addu(r.v1, r.fp);                                 // 213dcc addu $v0, $v1, $fp
        r.a0 = LB(lo32(r.v0) + 0x1u);                            // 213dd0 lb $a0, 0x1($v0)
        if (neg64(r.a0))                                         // 213dd4 bltzl $a0, . + 4 + (0x2B << 2)
        {
            r.s3 = addiu(r.s3, 1);                                   // 213dd8 addiu $s3, $s3, 0x1
            goto L_213e84;
        }
        r.v1 = LW(lo32(r.s1));                                   // 213ddc lw $v1, 0x0($s1)
        r.v0 = LW(lo32(r.v1) + 0x4u);                            // 213de0 lw $v0, 0x4($v1)
        r.v0 = slt(r.a0, r.v0);                                  // 213de4 slt $v0, $a0, $v0
        if (r.v0 == 0u)                                          // 213de8 beql $v0, $zero, . + 4 + (0x26 << 2)
        {
            r.s3 = addiu(r.s3, 1);                                   // 213dec addiu $s3, $s3, 0x1
            goto L_213e84;
        }
        r.v0 = LW(lo32(r.s1) + 0x4u);                            // 213df0 lw $v0, 0x4($s1)
        r.s0 = sll32(r.a0, 6);                                   // 213df4 sll $s0, $a0, 6
        r.v0 = addu(r.s0, r.v0);                                 // 213df8 addu $v0, $s0, $v0
        r.f0 = LWC1(lo32(r.v0) + 0x34u);                         // 213dfc lwc1 $f0, 0x34($v0)
        r.f0 = FPU_SUB_S(r.f0, r.f20);                           // 213e00 sub.s $f0, $f0, $f20
        t = r.s4 == 0u;                                          // 213e04 beqz $s4, . + 4 + (0xA << 2)
        SWC1(lo32(r.v0) + 0x34u, r.f0);                          // 213e08 swc1 $f0, 0x34($v0)
        if (t) goto L_213e30;
        r.v0 = LH(lo32(r.s4) + 0x4u);                            // 213e0c lh $v0, 0x4($s4)
        if (r.v0 != r.s6)                                        // 213e10 bnel $v0, $s6, . + 4 + (0x8 << 2)
        {
            r.a2 = LW(lo32(r.s1) + 0x4u);                            // 213e14 lw $a2, 0x4($s1)
            goto L_213e34;
        }
        r.v0 = LW(lo32(r.s1) + 0x4u);                            // 213e18 lw $v0, 0x4($s1)
        r.f1 = LWC1(lo32(r.gp) - 0x62b0u);                       // 213e1c lwc1 $f1, -0x62B0($gp)
        r.v0 = addu(r.s0, r.v0);                                 // 213e20 addu $v0, $s0, $v0
        r.f0 = LWC1(lo32(r.v0) + 0x34u);                         // 213e24 lwc1 $f0, 0x34($v0)
        r.f0 = FPU_SUB_S(r.f0, r.f1);                            // 213e28 sub.s $f0, $f0, $f1
        SWC1(lo32(r.v0) + 0x34u, r.f0);                          // 213e2c swc1 $f0, 0x34($v0)
    L_213e30:
        r.a2 = LW(lo32(r.s1) + 0x4u);                            // 213e30 lw $a2, 0x4($s1)
    L_213e34:
        r.s2 = addiu(r.sp, 368);                                 // 213e34 addiu $s2, $sp, 0x170
        r.a1 = LW(lo32(r.sp) + 0x22cu);                          // 213e38 lw $a1, 0x22C($sp)
        r.a0 = r.s2;                                             // 213e3c daddu $a0, $s2, $zero
        r.ra = 0x213e48u;                                        // 213e40 jal func_2D5E98
        r.a2 = addu(r.a2, r.s0);                                 // 213e44 addu $a2, $a2, $s0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s6, 22); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(20); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2d5e98u, 0x213e40u, 0x213e48u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s4, 20); LOAD_GPR(s6, 22); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(20);
    L_213e48:
        r.f0 = LWC1(lo32(r.sp) + 0x1a4u);                        // 213e48 lwc1 $f0, 0x1A4($sp)
        r.f1 = FPU_ADD_S(r.f0, r.f20);                           // 213e4c add.s $f1, $f0, $f20
        t = r.s4 == 0u;                                          // 213e50 beqz $s4, . + 4 + (0x7 << 2)
        SWC1(lo32(r.sp) + 0x1a4u, r.f1);                         // 213e54 swc1 $f1, 0x1A4($sp)
        if (t) goto L_213e70;
        r.v0 = LH(lo32(r.s4) + 0x4u);                            // 213e58 lh $v0, 0x4($s4)
        if (r.v0 != r.s6)                                        // 213e5c bnel $v0, $s6, . + 4 + (0x5 << 2)
        {
            r.a0 = LW(lo32(r.s1) + 0x4u);                            // 213e60 lw $a0, 0x4($s1)
            goto L_213e74;
        }
        r.f0 = LWC1(lo32(r.gp) - 0x62b0u);                       // 213e64 lwc1 $f0, -0x62B0($gp)
        r.f0 = FPU_ADD_S(r.f1, r.f0);                            // 213e68 add.s $f0, $f1, $f0
        SWC1(lo32(r.sp) + 0x1a4u, r.f0);                         // 213e6c swc1 $f0, 0x1A4($sp)
    L_213e70:
        r.a0 = LW(lo32(r.s1) + 0x4u);                            // 213e70 lw $a0, 0x4($s1)
    L_213e74:
        r.a1 = r.s2;                                             // 213e74 daddu $a1, $s2, $zero
        r.ra = 0x213e80u;                                        // 213e78 jal func_2D6120
        r.a0 = addu(r.a0, r.s0);                                 // 213e7c addu $a0, $a0, $s0
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1);
        if (!guestCall(G_PASS, 0x2d6120u, 0x213e78u, 0x213e80u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(13); LOAD_F(14); LOAD_F(20); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_213e80:
        r.s3 = addiu(r.s3, 1);                                   // 213e80 addiu $s3, $s3, 0x1
    L_213e84:
        r.v0 = slt(r.s3, r.s5);                                  // 213e84 slt $v0, $s3, $s5
        if (r.v0 != 0u)                                          // 213e88 bnel $v0, $zero, . + 4 + (-0x39 << 2)
        {
            r.v0 = LW(lo32(r.s1) + 0x5cu);                           // 213e8c lw $v0, 0x5C($s1)
            if (loopCheckpoint(ctx, runtime, 0x213da8u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s3, 19); STORE_GPR(s6, 22); STORE_F(20); ctx->lo = r.lo; ctx->hi = r.hi; return; }
            goto L_213da8;
        }
        // 213e90 b . + 4 + (0x97 << 2)
        r.a2 = LW(lo32(r.gp) - 0x60acu);                         // 213e94 lw $a2, -0x60AC($gp)
        goto L_2140f0;
    L_213e98:
        r.v1 = LW(lo32(r.s1) + 0x4u);                            // 213e98 lw $v1, 0x4($s1)
    L_213e9c:
        r.s2 = sll32(r.a3, 6);                                   // 213e9c sll $s2, $a3, 6
        r.f25 = floatOf(lo32(0u));                               // 213ea0 mtc1 $zero, $f25
        r.v1 = addu(r.s2, r.v1);                                 // 213ea4 addu $v1, $s2, $v1
        r.f23 = LWC1(lo32(r.gp) - 0x7fc0u);                      // 213ea8 lwc1 $f23, -0x7FC0($gp)
        r.f0 = LWC1(lo32(r.v1) + 0x30u);                         // 213eac lwc1 $f0, 0x30($v1)
        r.f22 = FPU_MUL_S(r.f21, r.f23);                         // 213eb0 mul.s $f22, $f21, $f23
        r.at = sext32(0x43340000u);                              // 213eb4 lui $at, 0x4334
        r.f24 = floatOf(lo32(r.at));                             // 213eb8 mtc1 $at, $f24
        SWC1(lo32(r.sp) + 0x1f0u, r.f0);                         // 213ebc swc1 $f0, 0x1F0($sp)
        r.at = sext32(0xbf000000u);                              // 213ec0 lui $at, 0xBF00
        r.f21 = floatOf(lo32(r.at));                             // 213ec4 mtc1 $at, $f21
        r.f0 = LWC1(lo32(r.v1) + 0x34u);                         // 213ec8 lwc1 $f0, 0x34($v1)
        r.f22 = divS(r.f22, r.f24, r.fcr31);                     // 213ed4 div.s $f22, $f22, $f24
        SWC1(lo32(r.sp) + 0x1f4u, r.f0);                         // 213ed8 swc1 $f0, 0x1F4($sp)
        r.f1 = LWC1(lo32(r.v1) + 0x38u);                         // 213edc lwc1 $f1, 0x38($v1)
        SWC1(lo32(r.sp) + 0x1f8u, r.f1);                         // 213ee0 swc1 $f1, 0x1F8($sp)
        r.f21 = FPU_MUL_S(r.f22, r.f21);                         // 213ee4 mul.s $f21, $f22, $f21
        SWC1(lo32(r.v1) + 0x30u, r.f25);                         // 213ee8 swc1 $f25, 0x30($v1)
        r.f22 = FPU_NEG_S(r.f22);                                // 213eec neg.s $f22, $f22
        r.v0 = LW(lo32(r.s1) + 0x4u);                            // 213ef0 lw $v0, 0x4($s1)
        r.v0 = addu(r.s2, r.v0);                                 // 213ef4 addu $v0, $s2, $v0
        SWC1(lo32(r.v0) + 0x34u, r.f25);                         // 213ef8 swc1 $f25, 0x34($v0)
        r.v1 = LW(lo32(r.s1) + 0x4u);                            // 213efc lw $v1, 0x4($s1)
        r.v1 = addu(r.s2, r.v1);                                 // 213f00 addu $v1, $s2, $v1
        SWC1(lo32(r.v1) + 0x38u, r.f25);                         // 213f04 swc1 $f25, 0x38($v1)
        r.v0 = LW(lo32(r.s1) + 0xf4u);                           // 213f08 lw $v0, 0xF4($s1)
        r.f13 = LWC1(lo32(r.v0) + 0x50u);                        // 213f0c lwc1 $f13, 0x50($v0)
        r.ra = 0x213f18u;                                        // 213f10 jal func_284E38
        r.f12 = LWC1(lo32(r.v0) + 0x4cu);                        // 213f14 lwc1 $f12, 0x4C($v0)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(s2, 18); STORE_GPR(s4, 20); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(13); STORE_F(21); STORE_F(22); STORE_F(23); STORE_F(24); STORE_F(25); STORE_F(26); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x284e38u, 0x213f10u, 0x213f18u)) return;
        LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(26);
    L_213f18:
        r.v0 = LW(lo32(r.s1) + 0xf4u);                           // 213f18 lw $v0, 0xF4($s1)
        r.f20 = FPU_MOV_S(r.f0);                                 // 213f1c mov.s $f20, $f0
        r.f12 = FPU_MOV_S(r.f26);                                // 213f20 mov.s $f12, $f26
        r.ra = 0x213f2cu;                                        // 213f24 jal func_284E38
        r.f13 = LWC1(lo32(r.v0) + 0x50u);                        // 213f28 lwc1 $f13, 0x50($v0)
        STORE_GPR(v0, 2); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13); STORE_F(20);
        if (!guestCall(G_PASS, 0x284e38u, 0x213f24u, 0x213f2cu)) return;
        LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(20); LOAD_F(21); LOAD_F(23); LOAD_F(24); LOAD_F(25); r.fcr31 = ctx->fcr31;
    L_213f2c:
        r.f0 = FPU_MUL_S(r.f0, r.f23);                           // 213f2c mul.s $f0, $f0, $f23
        r.at = sext32(0x3f000000u);                              // 213f30 lui $at, 0x3F00
        r.f13 = floatOf(lo32(r.at));                             // 213f34 mtc1 $at, $f13
        r.f20 = FPU_MUL_S(r.f20, r.f23);                         // 213f38 mul.s $f20, $f20, $f23
        r.a0 = LW(lo32(r.sp) + 0x22cu);                          // 213f3c lw $a0, 0x22C($sp)
        r.f12 = FPU_MOV_S(r.f21);                                // 213f40 mov.s $f12, $f21
        r.f14 = FPU_MOV_S(r.f25);                                // 213f44 mov.s $f14, $f25
        r.f0 = divS(r.f0, r.f24, r.fcr31);                       // 213f50 div.s $f0, $f0, $f24
        r.f20 = divS(r.f20, r.f24, r.fcr31);                     // 213f5c div.s $f20, $f20, $f24
        r.f20 = FPU_SUB_S(r.f20, r.f0);                          // 213f60 sub.s $f20, $f20, $f0
        r.ra = 0x213f6cu;                                        // 213f64 jal func_2B4B18
        r.f13 = FPU_MUL_S(r.f20, r.f13);                         // 213f68 mul.s $f13, $f20, $f13
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(ra, 31); STORE_F(0); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2b4b18u, 0x213f64u, 0x213f6cu)) return;
        LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29);
    L_213f6c:
        r.a2 = LW(lo32(r.s1) + 0x4u);                            // 213f6c lw $a2, 0x4($s1)
        r.s0 = addiu(r.sp, 368);                                 // 213f70 addiu $s0, $sp, 0x170
        r.a1 = LW(lo32(r.sp) + 0x22cu);                          // 213f74 lw $a1, 0x22C($sp)
        r.a0 = r.s0;                                             // 213f78 daddu $a0, $s0, $zero
        r.ra = 0x213f84u;                                        // 213f7c jal func_2D5E98
        r.a2 = addu(r.a2, r.s2);                                 // 213f80 addu $a2, $a2, $s2
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x213f7cu, 0x213f84u)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29);
    L_213f84:
        r.a0 = LW(lo32(r.s1) + 0x4u);                            // 213f84 lw $a0, 0x4($s1)
        r.a1 = r.s0;                                             // 213f88 daddu $a1, $s0, $zero
        r.f1 = LWC1(lo32(r.sp) + 0x1f0u);                        // 213f8c lwc1 $f1, 0x1F0($sp)
        r.f0 = LWC1(lo32(r.sp) + 0x1f4u);                        // 213f90 lwc1 $f0, 0x1F4($sp)
        r.a0 = addu(r.a0, r.s2);                                 // 213f94 addu $a0, $a0, $s2
        r.f2 = LWC1(lo32(r.sp) + 0x1f8u);                        // 213f98 lwc1 $f2, 0x1F8($sp)
        SWC1(lo32(r.sp) + 0x1a0u, r.f1);                         // 213f9c swc1 $f1, 0x1A0($sp)
        SWC1(lo32(r.sp) + 0x1a4u, r.f0);                         // 213fa0 swc1 $f0, 0x1A4($sp)
        r.ra = 0x213facu;                                        // 213fa4 jal func_2D6120
        SWC1(lo32(r.sp) + 0x1a8u, r.f2);                         // 213fa8 swc1 $f2, 0x1A8($sp)
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2);
        if (!guestCall(G_PASS, 0x2d6120u, 0x213fa4u, 0x213facu)) return;
        LOAD_GPR(s1, 17);
    L_213fac:
        r.v0 = LW(lo32(r.s1) + 0xf4u);                           // 213fac lw $v0, 0xF4($s1)
        r.f13 = LWC1(lo32(r.v0) + 0x50u);                        // 213fb0 lwc1 $f13, 0x50($v0)
        r.ra = 0x213fbcu;                                        // 213fb4 jal func_284E38
        r.f12 = LWC1(lo32(r.v0) + 0x4cu);                        // 213fb8 lwc1 $f12, 0x4C($v0)
        STORE_GPR(v0, 2); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x284e38u, 0x213fb4u, 0x213fbcu)) return;
        LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(26);
    L_213fbc:
        r.v0 = LW(lo32(r.s1) + 0xf4u);                           // 213fbc lw $v0, 0xF4($s1)
        r.f20 = FPU_MOV_S(r.f0);                                 // 213fc0 mov.s $f20, $f0
        r.f12 = FPU_MOV_S(r.f26);                                // 213fc4 mov.s $f12, $f26
        r.ra = 0x213fd0u;                                        // 213fc8 jal func_284E38
        r.f13 = LWC1(lo32(r.v0) + 0x50u);                        // 213fcc lwc1 $f13, 0x50($v0)
        STORE_GPR(v0, 2); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13); STORE_F(20);
        if (!guestCall(G_PASS, 0x284e38u, 0x213fc8u, 0x213fd0u)) return;
        LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(20); LOAD_F(22); LOAD_F(23); LOAD_F(24); LOAD_F(25); r.fcr31 = ctx->fcr31;
    L_213fd0:
        r.f0 = FPU_MUL_S(r.f0, r.f23);                           // 213fd0 mul.s $f0, $f0, $f23
        r.a0 = LW(lo32(r.sp) + 0x22cu);                          // 213fd4 lw $a0, 0x22C($sp)
        r.f20 = FPU_MUL_S(r.f20, r.f23);                         // 213fd8 mul.s $f20, $f20, $f23
        r.f12 = FPU_MOV_S(r.f22);                                // 213fdc mov.s $f12, $f22
        r.f14 = FPU_MOV_S(r.f25);                                // 213fe0 mov.s $f14, $f25
        r.f0 = divS(r.f0, r.f24, r.fcr31);                       // 213fec div.s $f0, $f0, $f24
        r.f20 = divS(r.f20, r.f24, r.fcr31);                     // 213ff8 div.s $f20, $f20, $f24
        r.ra = 0x214004u;                                        // 213ffc jal func_2B4B18
        r.f13 = FPU_SUB_S(r.f20, r.f0);                          // 214000 sub.s $f13, $f20, $f0
        STORE_GPR(a0, 4); STORE_GPR(ra, 31); STORE_F(0); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2b4b18u, 0x213ffcu, 0x214004u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(13); LOAD_F(14); LOAD_F(20); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_214004:
        r.v1 = LW(lo32(r.s1) + 0x5cu);                           // 214004 lw $v1, 0x5C($s1)
        r.v0 = LW(lo32(r.v1) + 0x14u);                           // 214008 lw $v0, 0x14($v1)
        r.s3 = LW(lo32(r.v1) + 0x10u);                           // 21400c lw $s3, 0x10($v1)
        r.v0 = slt(r.v0, r.s3);                                  // 214010 slt $v0, $v0, $s3
        if (r.v0 != 0u)                                          // 214014 bnel $v0, $zero, . + 4 + (0x36 << 2)
        {
            r.a2 = LW(lo32(r.gp) - 0x60acu);                         // 214018 lw $a2, -0x60AC($gp)
            goto L_2140f0;
        }
        r.s4 = r.s0;                                             // 21401c daddu $s4, $s0, $zero
        r.v1 = LW(lo32(r.s1) + 0x4u);                            // 214020 lw $v1, 0x4($s1)
    L_214028:
        r.s0 = sll32(r.s3, 6);                                   // 214028 sll $s0, $s3, 6
        r.a1 = LW(lo32(r.sp) + 0x22cu);                          // 21402c lw $a1, 0x22C($sp)
        r.a0 = r.s4;                                             // 214030 daddu $a0, $s4, $zero
        r.v0 = addu(r.s2, r.v1);                                 // 214034 addu $v0, $s2, $v1
        r.s3 = addiu(r.s3, 1);                                   // 214038 addiu $s3, $s3, 0x1
        r.v1 = addu(r.s0, r.v1);                                 // 21403c addu $v1, $s0, $v1
        r.f1 = LWC1(lo32(r.v0) + 0x30u);                         // 214040 lwc1 $f1, 0x30($v0)
        r.f0 = LWC1(lo32(r.v1) + 0x30u);                         // 214044 lwc1 $f0, 0x30($v1)
        r.f0 = FPU_SUB_S(r.f0, r.f1);                            // 214048 sub.s $f0, $f0, $f1
        SWC1(lo32(r.v1) + 0x30u, r.f0);                          // 21404c swc1 $f0, 0x30($v1)
        r.v0 = LW(lo32(r.s1) + 0x4u);                            // 214050 lw $v0, 0x4($s1)
        r.v1 = addu(r.s2, r.v0);                                 // 214054 addu $v1, $s2, $v0
        r.v0 = addu(r.s0, r.v0);                                 // 214058 addu $v0, $s0, $v0
        r.f1 = LWC1(lo32(r.v1) + 0x34u);                         // 21405c lwc1 $f1, 0x34($v1)
        r.f0 = LWC1(lo32(r.v0) + 0x34u);                         // 214060 lwc1 $f0, 0x34($v0)
        r.f0 = FPU_SUB_S(r.f0, r.f1);                            // 214064 sub.s $f0, $f0, $f1
        SWC1(lo32(r.v0) + 0x34u, r.f0);                          // 214068 swc1 $f0, 0x34($v0)
        r.v1 = LW(lo32(r.s1) + 0x4u);                            // 21406c lw $v1, 0x4($s1)
        r.v0 = addu(r.s2, r.v1);                                 // 214070 addu $v0, $s2, $v1
        r.v1 = addu(r.s0, r.v1);                                 // 214074 addu $v1, $s0, $v1
        r.f1 = LWC1(lo32(r.v0) + 0x38u);                         // 214078 lwc1 $f1, 0x38($v0)
        r.f0 = LWC1(lo32(r.v1) + 0x38u);                         // 21407c lwc1 $f0, 0x38($v1)
        r.f0 = FPU_SUB_S(r.f0, r.f1);                            // 214080 sub.s $f0, $f0, $f1
        SWC1(lo32(r.v1) + 0x38u, r.f0);                          // 214084 swc1 $f0, 0x38($v1)
        r.a2 = LW(lo32(r.s1) + 0x4u);                            // 214088 lw $a2, 0x4($s1)
        r.ra = 0x214094u;                                        // 21408c jal func_2D5E98
        r.a2 = addu(r.a2, r.s0);                                 // 214090 addu $a2, $a2, $s0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x21408cu, 0x214094u)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s4, 20); LOAD_GPR(sp, 29);
    L_214094:
        r.a0 = LW(lo32(r.s1) + 0x4u);                            // 214094 lw $a0, 0x4($s1)
        r.a1 = r.s4;                                             // 214098 daddu $a1, $s4, $zero
        r.f1 = LWC1(lo32(r.sp) + 0x1a0u);                        // 21409c lwc1 $f1, 0x1A0($sp)
        r.v0 = addu(r.s2, r.a0);                                 // 2140a0 addu $v0, $s2, $a0
        r.f2 = LWC1(lo32(r.sp) + 0x1a4u);                        // 2140a4 lwc1 $f2, 0x1A4($sp)
        r.f0 = LWC1(lo32(r.v0) + 0x30u);                         // 2140a8 lwc1 $f0, 0x30($v0)
        r.a0 = addu(r.a0, r.s0);                                 // 2140ac addu $a0, $a0, $s0
        r.f3 = LWC1(lo32(r.sp) + 0x1a8u);                        // 2140b0 lwc1 $f3, 0x1A8($sp)
        r.f1 = FPU_ADD_S(r.f1, r.f0);                            // 2140b4 add.s $f1, $f1, $f0
        SWC1(lo32(r.sp) + 0x1a0u, r.f1);                         // 2140b8 swc1 $f1, 0x1A0($sp)
        r.f0 = LWC1(lo32(r.v0) + 0x34u);                         // 2140bc lwc1 $f0, 0x34($v0)
        r.f2 = FPU_ADD_S(r.f2, r.f0);                            // 2140c0 add.s $f2, $f2, $f0
        SWC1(lo32(r.sp) + 0x1a4u, r.f2);                         // 2140c4 swc1 $f2, 0x1A4($sp)
        r.f0 = LWC1(lo32(r.v0) + 0x38u);                         // 2140c8 lwc1 $f0, 0x38($v0)
        r.f3 = FPU_ADD_S(r.f3, r.f0);                            // 2140cc add.s $f3, $f3, $f0
        r.ra = 0x2140d8u;                                        // 2140d0 jal func_2D6120
        SWC1(lo32(r.sp) + 0x1a8u, r.f3);                         // 2140d4 swc1 $f3, 0x1A8($sp)
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3);
        if (!guestCall(G_PASS, 0x2d6120u, 0x2140d0u, 0x2140d8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(13); LOAD_F(14); LOAD_F(20); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2140d8:
        r.v1 = LW(lo32(r.s1) + 0x5cu);                           // 2140d8 lw $v1, 0x5C($s1)
        r.v0 = LW(lo32(r.v1) + 0x14u);                           // 2140dc lw $v0, 0x14($v1)
        r.v0 = slt(r.v0, r.s3);                                  // 2140e0 slt $v0, $v0, $s3
        if (r.v0 == 0u)                                          // 2140e4 beql $v0, $zero, . + 4 + (-0x30 << 2)
        {
            r.v1 = LW(lo32(r.s1) + 0x4u);                            // 2140e8 lw $v1, 0x4($s1)
            if (loopCheckpoint(ctx, runtime, 0x214028u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); return; }
            goto L_214028;
        }
    L_2140ec:
        r.a2 = LW(lo32(r.gp) - 0x60acu);                         // 2140ec lw $a2, -0x60AC($gp)
    L_2140f0:
        r.a1 = LW(lo32(r.gp) - 0x60b4u);                         // 2140f0 lw $a1, -0x60B4($gp)
        r.a0 = LW(lo32(r.gp) - 0x60b0u);                         // 2140f4 lw $a0, -0x60B0($gp)
        r.v0 = r.a2 & 0x1u;                                      // 2140f8 andi $v0, $a2, 0x1
        r.v1 = r.a1 & r.a0;                                      // 2140fc and $v1, $a1, $a0
        r.v0 = r.v0 & r.v1;                                      // 214100 and $v0, $v0, $v1
        t = r.v0 == 0u;                                          // 214104 beqz $v0, . + 4 + (0x12 << 2)
        r.s0 = addiu(r.sp, 432);                                 // 214108 addiu $s0, $sp, 0x1B0
        if (t) goto L_214150;
        r.at = sext32(0x40000000u);                              // 21410c lui $at, 0x4000
        r.f12 = floatOf(lo32(r.at));                             // 214110 mtc1 $at, $f12
        r.a0 = r.s0;                                             // 214114 daddu $a0, $s0, $zero
        r.f13 = FPU_MOV_S(r.f12);                                // 214118 mov.s $f13, $f12
        r.ra = 0x214124u;                                        // 21411c jal func_2B4F20
        r.f14 = FPU_MOV_S(r.f12);                                // 214120 mov.s $f14, $f12
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s3, 19); STORE_GPR(s6, 22); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(20); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b4f20u, 0x21411cu, 0x214124u)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s1, 17);
    L_214124:
        r.v1 = LW(lo32(r.s1) + 0x5cu);                           // 214124 lw $v1, 0x5C($s1)
        r.a2 = r.s0;                                             // 214128 daddu $a2, $s0, $zero
        r.a0 = LW(lo32(r.s1) + 0x4u);                            // 21412c lw $a0, 0x4($s1)
        r.v0 = LW(lo32(r.v1) + 0x14u);                           // 214130 lw $v0, 0x14($v1)
        r.v0 = sll32(r.v0, 6);                                   // 214134 sll $v0, $v0, 6
        r.a0 = addu(r.a0, r.v0);                                 // 214138 addu $a0, $a0, $v0
        r.ra = 0x214144u;                                        // 21413c jal func_2D5E98
        r.a1 = r.a0;                                             // 214140 daddu $a1, $a0, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x21413cu, 0x214144u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(13); LOAD_F(14); LOAD_F(20); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_214144:
        r.a2 = LW(lo32(r.gp) - 0x60acu);                         // 214144 lw $a2, -0x60AC($gp)
        r.a1 = LW(lo32(r.gp) - 0x60b4u);                         // 214148 lw $a1, -0x60B4($gp)
        r.a0 = LW(lo32(r.gp) - 0x60b0u);                         // 21414c lw $a0, -0x60B0($gp)
    L_214150:
        r.v0 = r.a2 & 0x2u;                                      // 214150 andi $v0, $a2, 0x2
        r.v1 = r.a1 & r.a0;                                      // 214154 and $v1, $a1, $a0
        r.v0 = r.v0 & r.v1;                                      // 214158 and $v0, $v0, $v1
        t = r.v0 == 0u;                                          // 21415c beqz $v0, . + 4 + (0x13 << 2)
        r.s0 = addiu(r.sp, 432);                                 // 214160 addiu $s0, $sp, 0x1B0
        if (t) goto L_2141ac;
        r.at = sext32(0x3f000000u);                              // 214164 lui $at, 0x3F00
        r.f12 = floatOf(lo32(r.at));                             // 214168 mtc1 $at, $f12
        r.a0 = r.s0;                                             // 21416c daddu $a0, $s0, $zero
        r.f13 = FPU_MOV_S(r.f12);                                // 214170 mov.s $f13, $f12
        r.ra = 0x21417cu;                                        // 214174 jal func_2B4F20
        r.f14 = FPU_MOV_S(r.f12);                                // 214178 mov.s $f14, $f12
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s3, 19); STORE_GPR(s6, 22); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(20); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b4f20u, 0x214174u, 0x21417cu)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s1, 17);
    L_21417c:
        r.v1 = LW(lo32(r.s1) + 0x5cu);                           // 21417c lw $v1, 0x5C($s1)
        r.a2 = r.s0;                                             // 214180 daddu $a2, $s0, $zero
        r.a0 = LW(lo32(r.s1) + 0x4u);                            // 214184 lw $a0, 0x4($s1)
        r.v0 = LW(lo32(r.v1) + 0x14u);                           // 214188 lw $v0, 0x14($v1)
        r.v0 = sll32(r.v0, 6);                                   // 21418c sll $v0, $v0, 6
        r.a0 = addu(r.a0, r.v0);                                 // 214190 addu $a0, $a0, $v0
        r.ra = 0x21419cu;                                        // 214194 jal func_2D5E98
        r.a1 = r.a0;                                             // 214198 daddu $a1, $a0, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x214194u, 0x21419cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(13); LOAD_F(14); LOAD_F(20); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_21419c:
        r.a2 = LW(lo32(r.gp) - 0x60acu);                         // 21419c lw $a2, -0x60AC($gp)
        r.a1 = LW(lo32(r.gp) - 0x60b4u);                         // 2141a0 lw $a1, -0x60B4($gp)
        r.a0 = LW(lo32(r.gp) - 0x60b0u);                         // 2141a4 lw $a0, -0x60B0($gp)
        r.v1 = r.a1 & r.a0;                                      // 2141a8 and $v1, $a1, $a0
    L_2141ac:
        r.v0 = r.a2 & 0x4u;                                      // 2141ac andi $v0, $a2, 0x4
        r.v0 = r.v0 & r.v1;                                      // 2141b0 and $v0, $v0, $v1
        t = r.v0 == 0u;                                          // 2141b4 beqz $v0, . + 4 + (0x17 << 2)
        r.s0 = addiu(r.sp, 432);                                 // 2141b8 addiu $s0, $sp, 0x1B0
        if (t) goto L_214214;
        r.at = sext32(0x40000000u);                              // 2141bc lui $at, 0x4000
        r.f12 = floatOf(lo32(r.at));                             // 2141c0 mtc1 $at, $f12
        r.a0 = r.s0;                                             // 2141c4 daddu $a0, $s0, $zero
        r.f13 = FPU_MOV_S(r.f12);                                // 2141c8 mov.s $f13, $f12
        r.ra = 0x2141d4u;                                        // 2141cc jal func_2B4F20
        r.f14 = FPU_MOV_S(r.f12);                                // 2141d0 mov.s $f14, $f12
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s3, 19); STORE_GPR(s6, 22); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(20); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b4f20u, 0x2141ccu, 0x2141d4u)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s1, 17);
    L_2141d4:
        r.v1 = LW(lo32(r.s1) + 0x5cu);                           // 2141d4 lw $v1, 0x5C($s1)
        r.a2 = r.s0;                                             // 2141d8 daddu $a2, $s0, $zero
        r.a0 = LW(lo32(r.s1) + 0x4u);                            // 2141dc lw $a0, 0x4($s1)
        r.v0 = LW(lo32(r.v1) + 0x18u);                           // 2141e0 lw $v0, 0x18($v1)
        r.v0 = sll32(r.v0, 6);                                   // 2141e4 sll $v0, $v0, 6
        r.a0 = addu(r.a0, r.v0);                                 // 2141e8 addu $a0, $a0, $v0
        r.ra = 0x2141f4u;                                        // 2141ec jal func_2D5E98
        r.a1 = r.a0;                                             // 2141f0 daddu $a1, $a0, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x2141ecu, 0x2141f4u)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s1, 17);
    L_2141f4:
        r.v1 = LW(lo32(r.s1) + 0x5cu);                           // 2141f4 lw $v1, 0x5C($s1)
        r.a2 = r.s0;                                             // 2141f8 daddu $a2, $s0, $zero
        r.a0 = LW(lo32(r.s1) + 0x4u);                            // 2141fc lw $a0, 0x4($s1)
        r.v0 = LW(lo32(r.v1) + 0x1cu);                           // 214200 lw $v0, 0x1C($v1)
        r.v0 = sll32(r.v0, 6);                                   // 214204 sll $v0, $v0, 6
        r.a0 = addu(r.a0, r.v0);                                 // 214208 addu $a0, $a0, $v0
        r.ra = 0x214214u;                                        // 21420c jal func_2D5E98
        r.a1 = r.a0;                                             // 214210 daddu $a1, $a0, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x21420cu, 0x214214u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(13); LOAD_F(14); LOAD_F(20); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_214214:
        r.v0 = LW(lo32(r.s1) + 0xf4u);                           // 214214 lw $v0, 0xF4($s1)
        r.a0 = sext32(0x10000000u);                              // 214218 lui $a0, 0x1000
        r.v1 = LW(lo32(r.v0) + 0x10u);                           // 21421c lw $v1, 0x10($v0)
        r.v1 = r.v1 & r.a0;                                      // 214220 and $v1, $v1, $a0
        t = r.v1 != 0u;                                          // 214224 bnez $v1, . + 4 + (0x8 << 2)
        r.v0 = LW(lo32(r.gp) - 0x60acu);                         // 214228 lw $v0, -0x60AC($gp)
        if (t) goto L_214248;
        r.v1 = LW(lo32(r.gp) - 0x60b4u);                         // 21422c lw $v1, -0x60B4($gp)
        r.a0 = LW(lo32(r.gp) - 0x60b0u);                         // 214230 lw $a0, -0x60B0($gp)
        r.v0 = r.v0 & 0x2000u;                                   // 214234 andi $v0, $v0, 0x2000
        r.v1 = r.v1 & r.a0;                                      // 214238 and $v1, $v1, $a0
        r.v0 = r.v0 & r.v1;                                      // 21423c and $v0, $v0, $v1
        if (r.v0 == 0u)                                          // 214240 beql $v0, $zero, . + 4 + (0x10 << 2)
        {
            r.v0 = LW(lo32(r.s7) + 0xcu);                            // 214244 lw $v0, 0xC($s7)
            goto L_214284;
        }
    L_214248:
        r.f12 = LWC1(lo32(r.gp) - 0x7fbcu);                      // 214248 lwc1 $f12, -0x7FBC($gp)
        r.s0 = addiu(r.sp, 432);                                 // 21424c addiu $s0, $sp, 0x1B0
        r.a0 = r.s0;                                             // 214250 daddu $a0, $s0, $zero
        r.f13 = FPU_MOV_S(r.f12);                                // 214254 mov.s $f13, $f12
        r.ra = 0x214260u;                                        // 214258 jal func_2B4F20
        r.f14 = FPU_MOV_S(r.f12);                                // 21425c mov.s $f14, $f12
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s3, 19); STORE_GPR(s6, 22); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(20); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b4f20u, 0x214258u, 0x214260u)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(s1, 17);
    L_214260:
        r.v1 = LW(lo32(r.s1) + 0x5cu);                           // 214260 lw $v1, 0x5C($s1)
        r.a2 = r.s0;                                             // 214264 daddu $a2, $s0, $zero
        r.a0 = LW(lo32(r.s1) + 0x4u);                            // 214268 lw $a0, 0x4($s1)
        r.v0 = LW(lo32(r.v1) + 0x14u);                           // 21426c lw $v0, 0x14($v1)
        r.v0 = sll32(r.v0, 6);                                   // 214270 sll $v0, $v0, 6
        r.a0 = addu(r.a0, r.v0);                                 // 214274 addu $a0, $a0, $v0
        r.ra = 0x214280u;                                        // 214278 jal func_2D5E98
        r.a1 = r.a0;                                             // 21427c daddu $a1, $a0, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x214278u, 0x214280u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(s1, 17); LOAD_GPR(s7, 23); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(10); LOAD_F(11); LOAD_F(12); LOAD_F(13); LOAD_F(14); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_214280:
        r.v0 = LW(lo32(r.s7) + 0xcu);                            // 214280 lw $v0, 0xC($s7)
    L_214284:
        r.v0 = r.v0 & 0x2u;                                      // 214284 andi $v0, $v0, 0x2
        if (r.v0 == 0u)                                          // 214288 beql $v0, $zero, . + 4 + (0x31 << 2)
        {
            WRITE32(lo32(r.s1) + 0xc8u, lo32(0u));                   // 21428c sw $zero, 0xC8($s1)
            goto L_214350;
        }
        r.f0 = LWC1(lo32(r.s1) + 0x74u);                         // 214290 lwc1 $f0, 0x74($s1)
        r.f8 = LWC1(lo32(r.s1) + 0x68u);                         // 214294 lwc1 $f8, 0x68($s1)
        r.f1 = LWC1(lo32(r.s1) + 0x7cu);                         // 214298 lwc1 $f1, 0x7C($s1)
        r.f14 = FPU_SUB_S(r.f8, r.f0);                           // 21429c sub.s $f14, $f8, $f0
        r.f7 = LWC1(lo32(r.s1) + 0x70u);                         // 2142a0 lwc1 $f7, 0x70($s1)
        r.f0 = LWC1(lo32(r.s1) + 0xb4u);                         // 2142a4 lwc1 $f0, 0xB4($s1)
        r.f6 = LWC1(lo32(r.s1) + 0xa8u);                         // 2142a8 lwc1 $f6, 0xA8($s1)
        r.f12 = FPU_SUB_S(r.f7, r.f1);                           // 2142ac sub.s $f12, $f7, $f1
        r.f9 = LWC1(lo32(r.s1) + 0x6cu);                         // 2142b0 lwc1 $f9, 0x6C($s1)
        r.f11 = FPU_SUB_S(r.f6, r.f0);                           // 2142b4 sub.s $f11, $f6, $f0
        r.f2 = LWC1(lo32(r.s1) + 0x78u);                         // 2142b8 lwc1 $f2, 0x78($s1)
        r.f5 = LWC1(lo32(r.s1) + 0xacu);                         // 2142bc lwc1 $f5, 0xAC($s1)
        r.f1 = LWC1(lo32(r.s1) + 0xb8u);                         // 2142c0 lwc1 $f1, 0xB8($s1)
        r.f2 = FPU_SUB_S(r.f9, r.f2);                            // 2142c4 sub.s $f2, $f9, $f2
        r.f4 = LWC1(lo32(r.s1) + 0xb0u);                         // 2142c8 lwc1 $f4, 0xB0($s1)
        r.f0 = LWC1(lo32(r.s1) + 0xbcu);                         // 2142cc lwc1 $f0, 0xBC($s1)
        r.f1 = FPU_SUB_S(r.f5, r.f1);                            // 2142d0 sub.s $f1, $f5, $f1
        r.f3 = LWC1(lo32(r.s1) + 0xe0u);                         // 2142d4 lwc1 $f3, 0xE0($s1)
        r.f13 = floatOf(lo32(0u));                               // 2142d8 mtc1 $zero, $f13
        r.f10 = FPU_SUB_S(r.f4, r.f0);                           // 2142dc sub.s $f10, $f4, $f0
        SWC1(lo32(r.s1) + 0x84u, r.f2);                          // 2142e0 swc1 $f2, 0x84($s1)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f13, r.f3)); // 2142e4 c.lt.s $f13, $f3
        SWC1(lo32(r.s1) + 0x74u, r.f8);                          // 2142e8 swc1 $f8, 0x74($s1)
        SWC1(lo32(r.s1) + 0x78u, r.f9);                          // 2142ec swc1 $f9, 0x78($s1)
        SWC1(lo32(r.s1) + 0x7cu, r.f7);                          // 2142f0 swc1 $f7, 0x7C($s1)
        SWC1(lo32(r.s1) + 0xc4u, r.f1);                          // 2142f4 swc1 $f1, 0xC4($s1)
        SWC1(lo32(r.s1) + 0xb4u, r.f6);                          // 2142f8 swc1 $f6, 0xB4($s1)
        SWC1(lo32(r.s1) + 0xb8u, r.f5);                          // 2142fc swc1 $f5, 0xB8($s1)
        SWC1(lo32(r.s1) + 0xbcu, r.f4);                          // 214300 swc1 $f4, 0xBC($s1)
        SWC1(lo32(r.s1) + 0x80u, r.f14);                         // 214304 swc1 $f14, 0x80($s1)
        SWC1(lo32(r.s1) + 0x88u, r.f12);                         // 214308 swc1 $f12, 0x88($s1)
        SWC1(lo32(r.s1) + 0xc0u, r.f11);                         // 21430c swc1 $f11, 0xC0($s1)
        t = (r.fcr31 & kCondition) == 0u;                        // 214310 bc1f . + 4 + (0x14 << 2)
        SWC1(lo32(r.s1) + 0xc8u, r.f10);                         // 214314 swc1 $f10, 0xC8($s1)
        if (t) goto L_214364;
        r.f2 = LWC1(lo32(r.s1) + 0xe4u);                         // 214318 lwc1 $f2, 0xE4($s1)
        r.at = sext32(0x3f800000u);                              // 21431c lui $at, 0x3F80
        r.f0 = floatOf(lo32(r.at));                              // 214320 mtc1 $at, $f0
        r.f3 = FPU_MUL_S(r.f2, r.f10);                           // 214324 mul.s $f3, $f2, $f10
        SWC1(lo32(r.s1) + 0x84u, r.f13);                         // 214328 swc1 $f13, 0x84($s1)
        r.f0 = FPU_SUB_S(r.f0, r.f2);                            // 21432c sub.s $f0, $f0, $f2
        r.f2 = FPU_MUL_S(r.f2, r.f11);                           // 214330 mul.s $f2, $f2, $f11
        r.f1 = FPU_MUL_S(r.f0, r.f12);                           // 214334 mul.s $f1, $f0, $f12
        r.f0 = FPU_MUL_S(r.f0, r.f14);                           // 214338 mul.s $f0, $f0, $f14
        r.f1 = FPU_ADD_S(r.f1, r.f3);                            // 21433c add.s $f1, $f1, $f3
        r.f0 = FPU_ADD_S(r.f0, r.f2);                            // 214340 add.s $f0, $f0, $f2
        SWC1(lo32(r.s1) + 0x88u, r.f1);                          // 214344 swc1 $f1, 0x88($s1)
        // 214348 b . + 4 + (0x6 << 2)
        SWC1(lo32(r.s1) + 0x80u, r.f0);                          // 21434c swc1 $f0, 0x80($s1)
        goto L_214364;
    L_214350:
        WRITE32(lo32(r.s1) + 0x80u, lo32(0u));                   // 214350 sw $zero, 0x80($s1)
        WRITE32(lo32(r.s1) + 0x84u, lo32(0u));                   // 214354 sw $zero, 0x84($s1)
        WRITE32(lo32(r.s1) + 0x88u, lo32(0u));                   // 214358 sw $zero, 0x88($s1)
        WRITE32(lo32(r.s1) + 0xc0u, lo32(0u));                   // 21435c sw $zero, 0xC0($s1)
        WRITE32(lo32(r.s1) + 0xc4u, lo32(0u));                   // 214360 sw $zero, 0xC4($s1)
    L_214364:
        r.ra = READ64(lo32(r.sp) + 0x2c0u);                      // 214364 ld $ra, 0x2C0($sp)
        r.fp = READ64(lo32(r.sp) + 0x2b0u);                      // 214368 ld $fp, 0x2B0($sp)
        r.s7 = READ64(lo32(r.sp) + 0x2a0u);                      // 21436c ld $s7, 0x2A0($sp)
        r.s6 = READ64(lo32(r.sp) + 0x290u);                      // 214370 ld $s6, 0x290($sp)
        r.s5 = READ64(lo32(r.sp) + 0x280u);                      // 214374 ld $s5, 0x280($sp)
        r.s4 = READ64(lo32(r.sp) + 0x270u);                      // 214378 ld $s4, 0x270($sp)
        r.s3 = READ64(lo32(r.sp) + 0x260u);                      // 21437c ld $s3, 0x260($sp)
        r.s2 = READ64(lo32(r.sp) + 0x250u);                      // 214380 ld $s2, 0x250($sp)
        r.s1 = READ64(lo32(r.sp) + 0x240u);                      // 214384 ld $s1, 0x240($sp)
        r.s0 = READ64(lo32(r.sp) + 0x230u);                      // 214388 ld $s0, 0x230($sp)
        r.f26 = LWC1(lo32(r.sp) + 0x300u);                       // 21438c lwc1 $f26, 0x300($sp)
        r.f25 = LWC1(lo32(r.sp) + 0x2f8u);                       // 214390 lwc1 $f25, 0x2F8($sp)
        r.f24 = LWC1(lo32(r.sp) + 0x2f0u);                       // 214394 lwc1 $f24, 0x2F0($sp)
        r.f23 = LWC1(lo32(r.sp) + 0x2e8u);                       // 214398 lwc1 $f23, 0x2E8($sp)
        r.f22 = LWC1(lo32(r.sp) + 0x2e0u);                       // 21439c lwc1 $f22, 0x2E0($sp)
        r.f21 = LWC1(lo32(r.sp) + 0x2d8u);                       // 2143a0 lwc1 $f21, 0x2D8($sp)
        r.f20 = LWC1(lo32(r.sp) + 0x2d0u);                       // 2143a4 lwc1 $f20, 0x2D0($sp)
        jt = lo32(r.ra);                                         // 2143a8 jr $ra
        r.sp = addiu(r.sp, 784);                                 // 2143ac addiu $sp, $sp, 0x310
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(10); STORE_F(11); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(20); STORE_F(21); STORE_F(22); STORE_F(23); STORE_F(24); STORE_F(25); STORE_F(26); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        ctx->pc = jt;
        return;
    }

    // ---- partGfx (0x260ae0)
    //
    // partGfx(inst, part, level): the display list of one part of an
    // object instance: its matrix by the part's mode (a jump table), its
    // texture, blend and strip packets appended at the list pointer
    // (gp-0x6C60), then by the part's effect (a second jump table) its
    // glow, flare or children (a self-call).

    struct PartGfxRegs
    {
        uint64_t at, v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, s0, s1, s2, s3, s4, s5, s6, s7, gp, sp, fp, ra;
        float f0, f1, f2, f3, f4, f5, f6, f7, f8, f9, f12, f13, f14, f15, f16, f17, f20, f21;
        uint32_t fcr31;
        uint64_t lo, hi;
    };

    // A level of partGfx_0x260ae0: true when it returned to its caller, false when it
    // stopped (a yield, or the original took over below it).
    bool nativePartGfxLevel(G_ARGS, uint32_t depth)
    {
        PartGfxRegs r;
        bool t;
        uint32_t jt;
        (void)t;
        (void)jt;
        // Render counters (ps2_render_counters.h): the list each part's
        // model goes by, counted at L_261c38 (precalc CALL), L_261c74
        // (Dbuf CALL) and the three REF loops.
        TS_RENDER_COUNT(++g_renderCounters.partGfx);
        LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(t5, 13); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_GPR(ra, 31); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); LOAD_F(20); LOAD_F(21); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
        r.sp = addiu(r.sp, -944);                                // 260ae0 addiu $sp, $sp, -0x3B0
        r.v1 = addiu(0u, 80);                                    // 260ae4 addiu $v1, $zero, 0x50
        WRITE32(lo32(r.sp) + 0x2b8u, lo32(r.a0));                // 260ae8 sw $a0, 0x2B8($sp)
        WRITE64(lo32(r.sp) + 0x390u, r.ra);                      // 260aec sd $ra, 0x390($sp)
        WRITE64(lo32(r.sp) + 0x380u, r.fp);                      // 260af0 sd $fp, 0x380($sp)
        WRITE64(lo32(r.sp) + 0x370u, r.s7);                      // 260af4 sd $s7, 0x370($sp)
        WRITE64(lo32(r.sp) + 0x360u, r.s6);                      // 260af8 sd $s6, 0x360($sp)
        WRITE64(lo32(r.sp) + 0x350u, r.s5);                      // 260afc sd $s5, 0x350($sp)
        WRITE64(lo32(r.sp) + 0x340u, r.s4);                      // 260b00 sd $s4, 0x340($sp)
        WRITE64(lo32(r.sp) + 0x330u, r.s3);                      // 260b04 sd $s3, 0x330($sp)
        WRITE64(lo32(r.sp) + 0x320u, r.s2);                      // 260b08 sd $s2, 0x320($sp)
        WRITE64(lo32(r.sp) + 0x310u, r.s1);                      // 260b0c sd $s1, 0x310($sp)
        WRITE64(lo32(r.sp) + 0x300u, r.s0);                      // 260b10 sd $s0, 0x300($sp)
        SWC1(lo32(r.sp) + 0x3a8u, r.f21);                        // 260b14 swc1 $f21, 0x3A8($sp)
        SWC1(lo32(r.sp) + 0x3a0u, r.f20);                        // 260b18 swc1 $f20, 0x3A0($sp)
        r.t0 = LW(lo32(r.a0));                                   // 260b1c lw $t0, 0x0($a0)
        WRITE32(lo32(r.sp) + 0x2bcu, lo32(r.a1));                // 260b20 sw $a1, 0x2BC($sp)
        r.v0 = LW(lo32(r.t0));                                   // 260b24 lw $v0, 0x0($t0)
        r.s5 = LW(lo32(r.a0) + 0xf4u);                           // 260b28 lw $s5, 0xF4($a0)
        r.v0 = mult(r.v0, r.v1, r.lo, r.hi);                     // 260b2c mult $v0, $v0, $v1
        r.a0 = mult(r.a1, r.v1, r.lo, r.hi);                     // 260b30 mult $a0, $a1, $v1
        WRITE32(lo32(r.sp) + 0x2c0u, lo32(r.a2));                // 260b34 sw $a2, 0x2C0($sp)
        r.t2 = r.s5;                                             // 260b38 daddu $t2, $s5, $zero
        r.a1 = LW(lo32(r.t0) + 0x10u);                           // 260b3c lw $a1, 0x10($t0)
        r.t6 = subu(r.t0, r.v0);                                 // 260b40 subu $t6, $t0, $v0
        r.a0 = addu(r.t6, r.a0);                                 // 260b44 addu $a0, $t6, $a0
        WRITE32(lo32(r.sp) + 0x2c8u, lo32(r.a1));                // 260b48 sw $a1, 0x2C8($sp)
        t = r.a1 != 0u;                                          // 260b4c bnez $a1, . + 4 + (0x3 << 2)
        WRITE32(lo32(r.sp) + 0x2c4u, lo32(r.a0));                // 260b50 sw $a0, 0x2C4($sp)
        if (t) goto L_260b5c;
        r.t4 = LW(lo32(r.t0) + 0xcu);                            // 260b54 lw $t4, 0xC($t0)
        WRITE32(lo32(r.sp) + 0x2c8u, lo32(r.t4));                // 260b58 sw $t4, 0x2C8($sp)
    L_260b5c:
        r.v0 = LW(lo32(r.sp) + 0x2b8u);                          // 260b5c lw $v0, 0x2B8($sp)
        r.a0 = LW(lo32(r.v0) + 0xf8u);                           // 260b60 lw $a0, 0xF8($v0)
        t = r.a0 == 0u;                                          // 260b64 beqz $a0, . + 4 + (0x9 << 2)
        r.a1 = LW(lo32(r.sp) + 0x2c0u);                          // 260b68 lw $a1, 0x2C0($sp)
        if (t) goto L_260b8c;
        r.v0 = addiu(0u, 24);                                    // 260b6c addiu $v0, $zero, 0x18
        r.v1 = addiu(0u, 48);                                    // 260b70 addiu $v1, $zero, 0x30
        r.v0 = mult(r.a1, r.v0, r.lo, r.hi);                     // 260b74 mult $v0, $a1, $v0
        r.a1 = LW(lo32(r.sp) + 0x2bcu);                          // 260b78 lw $a1, 0x2BC($sp)
        r.a1 = mult(r.a1, r.v1, r.lo, r.hi);                     // 260b7c mult $a1, $a1, $v1
        r.v1 = addu(r.a1, r.a0);                                 // 260b80 addu $v1, $a1, $a0
        // 260b84 b . + 4 + (0x2 << 2)
        r.a3 = addu(r.v1, r.v0);                                 // 260b88 addu $a3, $v1, $v0
        goto L_260b90;
    L_260b8c:
        r.a3 = 0u;                                               // 260b8c daddu $a3, $zero, $zero
    L_260b90:
        r.t3 = 0u;                                               // 260b90 daddu $t3, $zero, $zero
        r.a2 = addiu(0u, 1);                                     // 260b94 addiu $a2, $zero, 0x1
        t = r.a3 == 0u;                                          // 260b98 beqz $a3, . + 4 + (0x14 << 2)
        WRITE32(lo32(r.sp) + 0x2d4u, lo32(0u));                  // 260b9c sw $zero, 0x2D4($sp)
        if (t) goto L_260bec;
        r.v0 = LW(lo32(r.a3));                                   // 260ba0 lw $v0, 0x0($a3)
        t = r.v0 != 0u;                                          // 260ba4 bnez $v0, . + 4 + (0x10 << 2)
        r.t4 = addiu(0u, 1);                                     // 260ba8 addiu $t4, $zero, 0x1
        if (t) goto L_260be8;
        r.v0 = LW(lo32(r.a3) + 0x4u);                            // 260bac lw $v0, 0x4($a3)
        if (r.v0 != 0u)                                          // 260bb0 bnel $v0, $zero, . + 4 + (0xE << 2)
        {
            WRITE32(lo32(r.sp) + 0x2d4u, lo32(r.t4));                // 260bb4 sw $t4, 0x2D4($sp)
            goto L_260bec;
        }
        r.v0 = LW(lo32(r.a3) + 0x8u);                            // 260bb8 lw $v0, 0x8($a3)
        if (r.v0 != 0u)                                          // 260bbc bnel $v0, $zero, . + 4 + (0xB << 2)
        {
            WRITE32(lo32(r.sp) + 0x2d4u, lo32(r.t4));                // 260bc0 sw $t4, 0x2D4($sp)
            goto L_260bec;
        }
        r.v0 = LW(lo32(r.a3) + 0xcu);                            // 260bc4 lw $v0, 0xC($a3)
        if (r.v0 != 0u)                                          // 260bc8 bnel $v0, $zero, . + 4 + (0x8 << 2)
        {
            WRITE32(lo32(r.sp) + 0x2d4u, lo32(r.t4));                // 260bcc sw $t4, 0x2D4($sp)
            goto L_260bec;
        }
        r.v0 = LW(lo32(r.a3) + 0x10u);                           // 260bd0 lw $v0, 0x10($a3)
        if (r.v0 != 0u)                                          // 260bd4 bnel $v0, $zero, . + 4 + (0x5 << 2)
        {
            WRITE32(lo32(r.sp) + 0x2d4u, lo32(r.t4));                // 260bd8 sw $t4, 0x2D4($sp)
            goto L_260bec;
        }
        r.v0 = LW(lo32(r.a3) + 0x14u);                           // 260bdc lw $v0, 0x14($a3)
        t = r.v0 == 0u;                                          // 260be0 beqz $v0, . + 4 + (0x3 << 2)
        r.v0 = LW(lo32(r.sp) + 0x2c0u);                          // 260be4 lw $v0, 0x2C0($sp)
        if (t) goto L_260bf0;
    L_260be8:
        WRITE32(lo32(r.sp) + 0x2d4u, lo32(r.t4));                // 260be8 sw $t4, 0x2D4($sp)
    L_260bec:
        r.v0 = LW(lo32(r.sp) + 0x2c0u);                          // 260bec lw $v0, 0x2C0($sp)
    L_260bf0:
        r.a1 = LW(lo32(r.gp) - 0x4dccu);                         // 260bf0 lw $a1, -0x4DCC($gp)
        r.v0 = sll32(r.v0, 2);                                   // 260bf4 sll $v0, $v0, 2
        WRITE32(lo32(r.sp) + 0x2d8u, lo32(r.v0));                // 260bf8 sw $v0, 0x2D8($sp)
        r.v1 = addu(r.t0, r.v0);                                 // 260bfc addu $v1, $t0, $v0
        r.v0 = LW(lo32(r.v1) + 0x14u);                           // 260c00 lw $v0, 0x14($v1)
        r.a0 = r.v1;                                             // 260c04 daddu $a0, $v1, $zero
        r.v1 = LW(lo32(r.a0) + 0x1cu);                           // 260c08 lw $v1, 0x1C($a0)
        r.t1 = r.a1;                                             // 260c0c daddu $t1, $a1, $zero
        r.a0 = LW(lo32(r.sp) + 0x2bcu);                          // 260c10 lw $a0, 0x2BC($sp)
        r.a0 = sll32(r.a0, 2);                                   // 260c14 sll $a0, $a0, 2
        WRITE32(lo32(r.sp) + 0x2dcu, lo32(r.a0));                // 260c18 sw $a0, 0x2DC($sp)
        r.a0 = LW(lo32(r.a1));                                   // 260c1c lw $a0, 0x0($a1)
        r.t4 = LW(lo32(r.sp) + 0x2dcu);                          // 260c20 lw $t4, 0x2DC($sp)
        r.v0 = addu(r.t4, r.v0);                                 // 260c24 addu $v0, $t4, $v0
        r.v1 = addu(r.t4, r.v1);                                 // 260c28 addu $v1, $t4, $v1
        r.v0 = LW(lo32(r.v0));                                   // 260c2c lw $v0, 0x0($v0)
        WRITE32(lo32(r.sp) + 0x2ccu, lo32(r.v0));                // 260c30 sw $v0, 0x2CC($sp)
        r.v0 = addiu(0u, 1);                                     // 260c34 addiu $v0, $zero, 0x1
        r.v1 = LW(lo32(r.v1));                                   // 260c38 lw $v1, 0x0($v1)
        t = r.a0 == r.v0;                                        // 260c3c beq $a0, $v0, . + 4 + (0x11 << 2)
        WRITE32(lo32(r.sp) + 0x2d0u, lo32(r.v1));                // 260c40 sw $v1, 0x2D0($sp)
        if (t) goto L_260c84;
        r.v0 = slti(r.a0, 2);                                    // 260c44 slti $v0, $a0, 0x2
        t = r.v0 == 0u;                                          // 260c48 beqz $v0, . + 4 + (0x5 << 2)
        r.v0 = addiu(0u, 2);                                     // 260c4c addiu $v0, $zero, 0x2
        if (t) goto L_260c60;
        t = r.a0 == 0u;                                          // 260c50 beqz $a0, . + 4 + (0x9 << 2)
        r.v0 = LW(lo32(r.sp) + 0x2c4u);                          // 260c54 lw $v0, 0x2C4($sp)
        if (t) goto L_260c78;
        // 260c58 b . + 4 + (0x14 << 2)
        r.v1 = LHU(lo32(r.v0) + 0x44u);                          // 260c5c lhu $v1, 0x44($v0)
        goto L_260cac;
    L_260c60:
        t = r.a0 == r.v0;                                        // 260c60 beq $a0, $v0, . + 4 + (0xB << 2)
        r.v0 = addiu(0u, 3);                                     // 260c64 addiu $v0, $zero, 0x3
        if (t) goto L_260c90;
        t = r.a0 == r.v0;                                        // 260c68 beq $a0, $v0, . + 4 + (0xC << 2)
        r.v0 = LW(lo32(r.sp) + 0x2c4u);                          // 260c6c lw $v0, 0x2C4($sp)
        if (t) goto L_260c9c;
        // 260c70 b . + 4 + (0xE << 2)
        r.v1 = LHU(lo32(r.v0) + 0x44u);                          // 260c74 lhu $v1, 0x44($v0)
        goto L_260cac;
    L_260c78:
        r.v0 = LW(lo32(r.sp) + 0x2b8u);                          // 260c78 lw $v0, 0x2B8($sp)
        // 260c7c b . + 4 + (0x9 << 2)
        r.t3 = LW(lo32(r.v0) + 0x8u);                            // 260c80 lw $t3, 0x8($v0)
        goto L_260ca4;
    L_260c84:
        r.v1 = LW(lo32(r.sp) + 0x2b8u);                          // 260c84 lw $v1, 0x2B8($sp)
        // 260c88 b . + 4 + (0x6 << 2)
        r.t3 = LW(lo32(r.v1) + 0xcu);                            // 260c8c lw $t3, 0xC($v1)
        goto L_260ca4;
    L_260c90:
        r.a0 = LW(lo32(r.sp) + 0x2b8u);                          // 260c90 lw $a0, 0x2B8($sp)
        // 260c94 b . + 4 + (0x3 << 2)
        r.t3 = LW(lo32(r.a0) + 0x10u);                           // 260c98 lw $t3, 0x10($a0)
        goto L_260ca4;
    L_260c9c:
        r.t4 = LW(lo32(r.sp) + 0x2b8u);                          // 260c9c lw $t4, 0x2B8($sp)
        r.t3 = LW(lo32(r.t4) + 0x14u);                           // 260ca0 lw $t3, 0x14($t4)
    L_260ca4:
        r.v0 = LW(lo32(r.sp) + 0x2c4u);                          // 260ca4 lw $v0, 0x2C4($sp)
        r.v1 = LHU(lo32(r.v0) + 0x44u);                          // 260ca8 lhu $v1, 0x44($v0)
    L_260cac:
        t = r.v1 == 0u;                                          // 260cac beqz $v1, . + 4 + (0x4 << 2)
        r.a0 = LW(lo32(r.sp) + 0x2b8u);                          // 260cb0 lw $a0, 0x2B8($sp)
        if (t) goto L_260cc0;
        r.v0 = LHU(lo32(r.a0) + 0x124u);                         // 260cb4 lhu $v0, 0x124($a0)
        r.v0 = r.v0 & r.v1;                                      // 260cb8 and $v0, $v0, $v1
        if (r.v0 == 0u) { r.a2 = 0u; zeroHigh(ctx, 6); }         // 260cbc movz $a2, $zero, $v0
    L_260cc0:
        t = r.a2 == 0u;                                          // 260cc0 beqz $a2, . + 4 + (0x74A << 2)
        r.t4 = LW(lo32(r.sp) + 0x2c0u);                          // 260cc4 lw $t4, 0x2C0($sp)
        if (t) goto L_2629ec;
        if (r.t4 != 0u)                                          // 260cc8 bnel $t4, $zero, . + 4 + (0x1D << 2)
        {
            r.t4 = LW(lo32(r.sp) + 0x2c4u);                          // 260ccc lw $t4, 0x2C4($sp)
            goto L_260d40;
        }
        r.v1 = LW(lo32(r.sp) + 0x2c4u);                          // 260cd0 lw $v1, 0x2C4($sp)
        r.v0 = LW(lo32(r.gp) - 0x6ce0u);                         // 260cd4 lw $v0, -0x6CE0($gp)
        r.a2 = LHU(lo32(r.v1) + 0x46u);                          // 260cd8 lhu $a2, 0x46($v1)
        r.v1 = LW(lo32(r.t1));                                   // 260cdc lw $v1, 0x0($t1)
        r.v0 = addu(r.v0, r.a2);                                 // 260ce0 addu $v0, $v0, $a2
        t = r.v1 != 0u;                                          // 260ce4 bnez $v1, . + 4 + (0xF << 2)
        WRITE32(lo32(r.gp) - 0x6ce0u, lo32(r.v0));               // 260ce8 sw $v0, -0x6CE0($gp)
        if (t) goto L_260d24;
        r.v1 = LW(lo32(r.s5) + 0x8u);                            // 260cec lw $v1, 0x8($s5)
        r.v0 = addiu(0u, 2);                                     // 260cf0 addiu $v0, $zero, 0x2
        t = r.v1 != r.v0;                                        // 260cf4 bne $v1, $v0, . + 4 + (0xC << 2)
        r.a0 = LW(lo32(r.sp) + 0x2c0u);                          // 260cf8 lw $a0, 0x2C0($sp)
        if (t) goto L_260d28;
        r.v0 = LW(lo32(r.gp) - 0x6cdcu);                         // 260cfc lw $v0, -0x6CDC($gp)
        r.v1 = LW(lo32(r.t2) + 0x4u);                            // 260d00 lw $v1, 0x4($t2)
        r.v0 = addu(r.v0, r.a2);                                 // 260d04 addu $v0, $v0, $a2
        r.a0 = LW(lo32(r.a1) + 0x31cu);                          // 260d08 lw $a0, 0x31C($a1)
        r.v1 = addiu(r.v1, -512);                                // 260d0c addiu $v1, $v1, -0x200
        t = r.a0 != r.v1;                                        // 260d10 bne $a0, $v1, . + 4 + (0x4 << 2)
        WRITE32(lo32(r.gp) - 0x6cdcu, lo32(r.v0));               // 260d14 sw $v0, -0x6CDC($gp)
        if (t) goto L_260d24;
        r.v0 = LW(lo32(r.gp) - 0x6cd8u);                         // 260d18 lw $v0, -0x6CD8($gp)
        r.v0 = addu(r.v0, r.a2);                                 // 260d1c addu $v0, $v0, $a2
        WRITE32(lo32(r.gp) - 0x6cd8u, lo32(r.v0));               // 260d20 sw $v0, -0x6CD8($gp)
    L_260d24:
        r.a0 = LW(lo32(r.sp) + 0x2c0u);                          // 260d24 lw $a0, 0x2C0($sp)
    L_260d28:
        t = r.a0 != 0u;                                          // 260d28 bnez $a0, . + 4 + (0x5 << 2)
        r.t4 = LW(lo32(r.sp) + 0x2c4u);                          // 260d2c lw $t4, 0x2C4($sp)
        if (t) goto L_260d40;
        r.a1 = LW(lo32(r.sp) + 0x2c4u);                          // 260d30 lw $a1, 0x2C4($sp)
        r.s1 = LW(lo32(r.a1) + 0x8u);                            // 260d34 lw $s1, 0x8($a1)
        // 260d38 b . + 4 + (0x3 << 2)
        r.s3 = addiu(r.a1, 20);                                  // 260d3c addiu $s3, $a1, 0x14
        goto L_260d48;
    L_260d40:
        r.s1 = LW(lo32(r.t4) + 0xcu);                            // 260d40 lw $s1, 0xC($t4)
        r.s3 = addiu(r.t4, 44);                                  // 260d44 addiu $s3, $t4, 0x2C
    L_260d48:
        t = r.s1 == 0u;                                          // 260d48 beqz $s1, . + 4 + (0x481 << 2)
        r.t4 = LW(lo32(r.sp) + 0x2c0u);                          // 260d4c lw $t4, 0x2C0($sp)
        if (t) goto L_261f50;
        if (r.a3 == 0u)                                          // 260d50 beql $a3, $zero, . + 4 + (0x4 << 2)
        {
            r.fp = LW(lo32(r.s3) + 0x4u);                            // 260d54 lw $fp, 0x4($s3)
            goto L_260d64;
        }
        r.fp = LW(lo32(r.a3) + 0x4u);                            // 260d58 lw $fp, 0x4($a3)
        if (r.fp == 0u)                                          // 260d5c beql $fp, $zero, . + 4 + (0x1 << 2)
        {
            r.fp = LW(lo32(r.s3) + 0x4u);                            // 260d60 lw $fp, 0x4($s3)
            goto L_260d64;
        }
    L_260d64:
        if (r.a3 == 0u)                                          // 260d64 beql $a3, $zero, . + 4 + (0x4 << 2)
        {
            r.s7 = LW(lo32(r.s3) + 0x8u);                            // 260d68 lw $s7, 0x8($s3)
            goto L_260d78;
        }
        r.s7 = LW(lo32(r.a3) + 0x8u);                            // 260d6c lw $s7, 0x8($a3)
        if (r.s7 == 0u)                                          // 260d70 beql $s7, $zero, . + 4 + (0x1 << 2)
        {
            r.s7 = LW(lo32(r.s3) + 0x8u);                            // 260d74 lw $s7, 0x8($s3)
            goto L_260d78;
        }
    L_260d78:
        if (r.a3 == 0u)                                          // 260d78 beql $a3, $zero, . + 4 + (0x5 << 2)
        {
            r.s6 = LW(lo32(r.s3) + 0xcu);                            // 260d7c lw $s6, 0xC($s3)
            goto L_260d90;
        }
        r.s6 = LW(lo32(r.a3) + 0xcu);                            // 260d80 lw $s6, 0xC($a3)
        if (r.s6 != 0u)                                          // 260d84 bnel $s6, $zero, . + 4 + (0x3 << 2)
        {
            r.v0 = LW(lo32(r.t0) + 0x4u);                            // 260d88 lw $v0, 0x4($t0)
            goto L_260d94;
        }
        r.s6 = LW(lo32(r.s3) + 0xcu);                            // 260d8c lw $s6, 0xC($s3)
    L_260d90:
        r.v0 = LW(lo32(r.t0) + 0x4u);                            // 260d90 lw $v0, 0x4($t0)
    L_260d94:
        t = r.v0 == 0u;                                          // 260d94 beqz $v0, . + 4 + (0x7 << 2)
        r.s4 = 0u;                                               // 260d98 daddu $s4, $zero, $zero
        if (t) goto L_260db4;
        r.v0 = LW(lo32(r.s5) + 0xbcu);                           // 260d9c lw $v0, 0xBC($s5)
        t = r.v0 != 0u;                                          // 260da0 bnez $v0, . + 4 + (0x4 << 2)
        r.t4 = addiu(0u, 4);                                     // 260da4 addiu $t4, $zero, 0x4
        if (t) goto L_260db4;
        r.v0 = LW(lo32(r.s5) + 0x8cu);                           // 260da8 lw $v0, 0x8C($s5)
        t = r.v0 != r.t4;                                        // 260dac bne $v0, $t4, . + 4 + (0x1AB << 2)
        r.v1 = LW(lo32(r.sp) + 0x2c4u);                          // 260db0 lw $v1, 0x2C4($sp)
        if (t) goto L_26145c;
    L_260db4:
        r.ra = 0x260dbcu;                                        // 260db4 jal func_201F78
        r.a0 = addiu(0u, 64);                                    // 260db8 addiu $a0, $zero, 0x40
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t6, 14); STORE_GPR(s1, 17); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x201f78u, 0x260db4u, 0x260dbcu)) return false;
        LOAD_GPR(v0, 2); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_260dbc:
        r.v1 = LW(lo32(r.s5) + 0x8cu);                           // 260dbc lw $v1, 0x8C($s5)
        r.s2 = r.v0;                                             // 260dc0 daddu $s2, $v0, $zero
        r.v0 = sltu(r.v1, sext32(5u));                           // 260dc4 sltiu $v0, $v1, 0x5
        t = r.v0 == 0u;                                          // 260dc8 beqz $v0, . + 4 + (0x9D << 2)
        r.v0 = sext32(0x3a0000u);                                // 260dcc lui $v0, 0x3A
        if (t) goto L_261040;
        r.v1 = sll32(r.v1, 2);                                   // 260dd0 sll $v1, $v1, 2
        r.v0 = addiu(r.v0, 9888);                                // 260dd4 addiu $v0, $v0, 0x26A0
        r.v1 = addu(r.v1, r.v0);                                 // 260dd8 addu $v1, $v1, $v0
        r.a0 = LW(lo32(r.v1));                                   // 260ddc lw $a0, 0x0($v1)
        jt = lo32(r.a0);                                         // 260de0 jr $a0 (jump table)
        switch (jt)
        {
        case 0x260de8u: goto L_260de8;
        case 0x260e0cu: goto L_260e0c;
        case 0x260e48u: goto L_260e48;
        case 0x260ed0u: goto L_260ed0;
        case 0x260f9cu: goto L_260f9c;
        default:
            STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s2, 18);
            runtime->dispatchGuestBranch(rdram, ctx, jt, 0x260de0u, 0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR");
            return false;
        }
    L_260de8:
        r.v0 = LW(lo32(r.s5) + 0x88u);                           // 260de8 lw $v0, 0x88($s5)
        t = r.v0 != 0u;                                          // 260dec bnez $v0, . + 4 + (0x95 << 2)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 260df0 lw $v0, -0x6C60($gp)
        if (t) goto L_261044;
        r.v0 = LW(lo32(r.gp) - 0x4dccu);                         // 260df4 lw $v0, -0x4DCC($gp)
        r.a0 = r.s2;                                             // 260df8 daddu $a0, $s2, $zero
        r.ra = 0x260e04u;                                        // 260dfc jal func_2D6120
        r.a1 = LW(lo32(r.v0) + 0x6e4u);                          // 260e00 lw $a1, 0x6E4($v0)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s2, 18); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d6120u, 0x260dfcu, 0x260e04u)) return false;
        LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_260e04:
        // 260e04 b . + 4 + (0x8F << 2)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 260e08 lw $v0, -0x6C60($gp)
        goto L_261044;
    L_260e0c:
        r.f15 = LWC1(lo32(r.s5) + 0x4cu);                        // 260e0c lwc1 $f15, 0x4C($s5)
        r.a0 = r.sp;                                             // 260e10 daddu $a0, $sp, $zero
        r.f0 = LWC1(lo32(r.gp) - 0x7c90u);                       // 260e14 lwc1 $f0, -0x7C90($gp)
        r.at = sext32(0x43340000u);                              // 260e18 lui $at, 0x4334
        r.f1 = floatOf(lo32(r.at));                              // 260e1c mtc1 $at, $f1
        r.f15 = FPU_MUL_S(r.f15, r.f0);                          // 260e20 mul.s $f15, $f15, $f0
        r.f12 = LWC1(lo32(r.s5) + 0x30u);                        // 260e24 lwc1 $f12, 0x30($s5)
        r.f13 = LWC1(lo32(r.s5) + 0x34u);                        // 260e28 lwc1 $f13, 0x34($s5)
        r.f15 = divS(r.f15, r.f1, r.fcr31);                      // 260e34 div.s $f15, $f15, $f1
        r.ra = 0x260e40u;                                        // 260e38 jal func_2B4C50
        r.f14 = LWC1(lo32(r.s5) + 0x38u);                        // 260e3c lwc1 $f14, 0x38($s5)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s2, 18); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2b4c50u, 0x260e38u, 0x260e40u)) return false;
        LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_260e40:
        // 260e40 b . + 4 + (0x19 << 2)
        r.v1 = LW(lo32(r.s5) + 0x88u);                           // 260e44 lw $v1, 0x88($s5)
        goto L_260ea8;
    L_260e48:
        r.f1 = LWC1(lo32(r.gp) - 0x7c8cu);                       // 260e48 lwc1 $f1, -0x7C8C($gp)
        r.a0 = r.sp;                                             // 260e4c daddu $a0, $sp, $zero
        r.f15 = LWC1(lo32(r.s5) + 0x48u);                        // 260e50 lwc1 $f15, 0x48($s5)
        r.f16 = LWC1(lo32(r.s5) + 0x4cu);                        // 260e54 lwc1 $f16, 0x4C($s5)
        r.f17 = LWC1(lo32(r.s5) + 0x58u);                        // 260e58 lwc1 $f17, 0x58($s5)
        r.f15 = FPU_MUL_S(r.f15, r.f1);                          // 260e5c mul.s $f15, $f15, $f1
        r.f16 = FPU_MUL_S(r.f16, r.f1);                          // 260e60 mul.s $f16, $f16, $f1
        r.at = sext32(0x43340000u);                              // 260e64 lui $at, 0x4334
        r.f0 = floatOf(lo32(r.at));                              // 260e68 mtc1 $at, $f0
        r.f17 = FPU_MUL_S(r.f17, r.f1);                          // 260e6c mul.s $f17, $f17, $f1
        r.f12 = LWC1(lo32(r.s5) + 0x30u);                        // 260e70 lwc1 $f12, 0x30($s5)
        r.f15 = divS(r.f15, r.f0, r.fcr31);                      // 260e7c div.s $f15, $f15, $f0
        r.f13 = LWC1(lo32(r.s5) + 0x34u);                        // 260e80 lwc1 $f13, 0x34($s5)
        r.f16 = divS(r.f16, r.f0, r.fcr31);                      // 260e8c div.s $f16, $f16, $f0
        r.f17 = divS(r.f17, r.f0, r.fcr31);                      // 260e98 div.s $f17, $f17, $f0
        r.ra = 0x260ea4u;                                        // 260e9c jal func_2B4CE0
        r.f14 = LWC1(lo32(r.s5) + 0x38u);                        // 260ea0 lwc1 $f14, 0x38($s5)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s2, 18); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); STORE_F(16); STORE_F(17); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2b4ce0u, 0x260e9cu, 0x260ea4u)) return false;
        LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_260ea4:
        r.v1 = LW(lo32(r.s5) + 0x88u);                           // 260ea4 lw $v1, 0x88($s5)
    L_260ea8:
        r.v0 = addiu(0u, 1);                                     // 260ea8 addiu $v0, $zero, 0x1
        t = r.v1 == r.v0;                                        // 260eac beq $v1, $v0, . + 4 + (0x5A << 2)
        r.v0 = addiu(0u, 2);                                     // 260eb0 addiu $v0, $zero, 0x2
        if (t) goto L_261018;
        t = r.v1 != r.v0;                                        // 260eb4 bne $v1, $v0, . + 4 + (0x63 << 2)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 260eb8 lw $v0, -0x6C60($gp)
        if (t) goto L_261044;
        r.a0 = r.s2;                                             // 260ebc daddu $a0, $s2, $zero
        r.ra = 0x260ec8u;                                        // 260ec0 jal func_2D6120
        r.a1 = r.sp;                                             // 260ec4 daddu $a1, $sp, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d6120u, 0x260ec0u, 0x260ec8u)) return false;
        LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_260ec8:
        // 260ec8 b . + 4 + (0x5E << 2)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 260ecc lw $v0, -0x6C60($gp)
        goto L_261044;
    L_260ed0:
        r.f15 = LWC1(lo32(r.s5) + 0x4cu);                        // 260ed0 lwc1 $f15, 0x4C($s5)
        r.a0 = r.sp;                                             // 260ed4 daddu $a0, $sp, $zero
        r.f0 = LWC1(lo32(r.gp) - 0x7c88u);                       // 260ed8 lwc1 $f0, -0x7C88($gp)
        r.at = sext32(0x43340000u);                              // 260edc lui $at, 0x4334
        r.f1 = floatOf(lo32(r.at));                              // 260ee0 mtc1 $at, $f1
        r.f15 = FPU_MUL_S(r.f15, r.f0);                          // 260ee4 mul.s $f15, $f15, $f0
        r.f12 = LWC1(lo32(r.s5) + 0x30u);                        // 260ee8 lwc1 $f12, 0x30($s5)
        r.f13 = LWC1(lo32(r.s5) + 0x34u);                        // 260eec lwc1 $f13, 0x34($s5)
        r.f15 = divS(r.f15, r.f1, r.fcr31);                      // 260ef8 div.s $f15, $f15, $f1
        r.ra = 0x260f04u;                                        // 260efc jal func_2B4C50
        r.f14 = LWC1(lo32(r.s5) + 0x38u);                        // 260f00 lwc1 $f14, 0x38($s5)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s2, 18); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2b4c50u, 0x260efcu, 0x260f04u)) return false;
        LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_260f04:
        r.v1 = LW(lo32(r.s5) + 0x88u);                           // 260f04 lw $v1, 0x88($s5)
        r.v0 = addiu(0u, 1);                                     // 260f08 addiu $v0, $zero, 0x1
        t = r.v1 == r.v0;                                        // 260f0c beq $v1, $v0, . + 4 + (0x5 << 2)
        r.v0 = addiu(0u, 2);                                     // 260f10 addiu $v0, $zero, 0x2
        if (t) goto L_260f24;
        t = r.v1 == r.v0;                                        // 260f14 beq $v1, $v0, . + 4 + (0x1A << 2)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 260f18 lw $v0, -0x6C60($gp)
        if (t) goto L_260f80;
        // 260f1c b . + 4 + (0x4A << 2)
        r.t1 = addiu(0u, 48);                                    // 260f20 addiu $t1, $zero, 0x30
        goto L_261048;
    L_260f24:
        r.v0 = LW(lo32(r.gp) - 0x4dccu);                         // 260f24 lw $v0, -0x4DCC($gp)
        r.s0 = addiu(r.sp, 64);                                  // 260f28 addiu $s0, $sp, 0x40
        r.a0 = r.s0;                                             // 260f2c daddu $a0, $s0, $zero
        r.a2 = r.sp;                                             // 260f30 daddu $a2, $sp, $zero
        r.ra = 0x260f3cu;                                        // 260f34 jal func_2D5E98
        r.a1 = LW(lo32(r.v0) + 0x6e4u);                          // 260f38 lw $a1, 0x6E4($v0)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x260f34u, 0x260f3cu)) return false;
        LOAD_GPR(s0, 16); LOAD_GPR(s2, 18); LOAD_GPR(s5, 21);
    L_260f3c:
        r.v0 = LW(lo32(r.s5) + 0x20u);                           // 260f3c lw $v0, 0x20($s5)
        r.a1 = r.s0;                                             // 260f40 daddu $a1, $s0, $zero
        r.a0 = r.s2;                                             // 260f44 daddu $a0, $s2, $zero
        r.ra = 0x260f50u;                                        // 260f48 jal func_2D5E98
        r.a2 = LW(lo32(r.v0) + 0x4u);                            // 260f4c lw $a2, 0x4($v0)
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x260f48u, 0x260f50u)) return false;
        LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_260f50:
        r.v0 = LW(lo32(r.sp) + 0x2bcu);                          // 260f50 lw $v0, 0x2BC($sp)
        t = r.v0 == 0u;                                          // 260f54 beqz $v0, . + 4 + (0x3A << 2)
        r.a1 = r.s2;                                             // 260f58 daddu $a1, $s2, $zero
        if (t) goto L_261040;
        r.v0 = LW(lo32(r.s5) + 0x20u);                           // 260f5c lw $v0, 0x20($s5)
        r.a0 = LW(lo32(r.sp) + 0x2bcu);                          // 260f60 lw $a0, 0x2BC($sp)
        r.a2 = LW(lo32(r.v0) + 0x4u);                            // 260f64 lw $a2, 0x4($v0)
        r.v1 = sll32(r.a0, 6);                                   // 260f68 sll $v1, $a0, 6
        r.a0 = r.s2;                                             // 260f6c daddu $a0, $s2, $zero
        r.ra = 0x260f78u;                                        // 260f70 jal func_2D5E98
        r.a2 = addu(r.a2, r.v1);                                 // 260f74 addu $a2, $a2, $v1
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x260f70u, 0x260f78u)) return false;
        LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_260f78:
        // 260f78 b . + 4 + (0x32 << 2)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 260f7c lw $v0, -0x6C60($gp)
        goto L_261044;
    L_260f80:
        r.v0 = LW(lo32(r.s5) + 0x20u);                           // 260f80 lw $v0, 0x20($s5)
        r.a0 = r.s2;                                             // 260f84 daddu $a0, $s2, $zero
        r.a1 = r.sp;                                             // 260f88 daddu $a1, $sp, $zero
        r.ra = 0x260f94u;                                        // 260f8c jal func_2D5E98
        r.a2 = LW(lo32(r.v0) + 0x4u);                            // 260f90 lw $a2, 0x4($v0)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x260f8cu, 0x260f94u)) return false;
        LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_260f94:
        // 260f94 b . + 4 + (0x2B << 2)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 260f98 lw $v0, -0x6C60($gp)
        goto L_261044;
    L_260f9c:
        r.f15 = LWC1(lo32(r.s5) + 0x4cu);                        // 260f9c lwc1 $f15, 0x4C($s5)
        r.a0 = r.sp;                                             // 260fa0 daddu $a0, $sp, $zero
        r.f0 = LWC1(lo32(r.gp) - 0x7c84u);                       // 260fa4 lwc1 $f0, -0x7C84($gp)
        r.at = sext32(0x43340000u);                              // 260fa8 lui $at, 0x4334
        r.f1 = floatOf(lo32(r.at));                              // 260fac mtc1 $at, $f1
        r.f15 = FPU_MUL_S(r.f15, r.f0);                          // 260fb0 mul.s $f15, $f15, $f0
        r.f12 = LWC1(lo32(r.s5) + 0x30u);                        // 260fb4 lwc1 $f12, 0x30($s5)
        r.f13 = LWC1(lo32(r.s5) + 0x34u);                        // 260fb8 lwc1 $f13, 0x34($s5)
        r.f15 = divS(r.f15, r.f1, r.fcr31);                      // 260fc4 div.s $f15, $f15, $f1
        r.ra = 0x260fd0u;                                        // 260fc8 jal func_2B4C50
        r.f14 = LWC1(lo32(r.s5) + 0x38u);                        // 260fcc lwc1 $f14, 0x38($s5)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s2, 18); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2b4c50u, 0x260fc8u, 0x260fd0u)) return false;
        LOAD_GPR(s5, 21);
    L_260fd0:
        r.v0 = LW(lo32(r.s5) + 0x20u);                           // 260fd0 lw $v0, 0x20($s5)
        r.a1 = addiu(r.s5, 100);                                 // 260fd4 addiu $a1, $s5, 0x64
        r.f12 = LWC1(lo32(r.s5) + 0x5cu);                        // 260fd8 lwc1 $f12, 0x5C($s5)
        r.ra = 0x260fe4u;                                        // 260fdc jal func_2B5C28
        r.a0 = LW(lo32(r.v0) + 0x4u);                            // 260fe0 lw $a0, 0x4($v0)
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x2b5c28u, 0x260fdcu, 0x260fe4u)) return false;
        LOAD_GPR(s5, 21); LOAD_GPR(sp, 29);
    L_260fe4:
        r.v0 = LW(lo32(r.s5) + 0x20u);                           // 260fe4 lw $v0, 0x20($s5)
        r.a0 = r.sp;                                             // 260fe8 daddu $a0, $sp, $zero
        r.a1 = r.sp;                                             // 260fec daddu $a1, $sp, $zero
        r.ra = 0x260ff8u;                                        // 260ff0 jal func_2D5E98
        r.a2 = LW(lo32(r.v0) + 0x4u);                            // 260ff4 lw $a2, 0x4($v0)
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x260ff0u, 0x260ff8u)) return false;
        LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_260ff8:
        r.v1 = LW(lo32(r.s5) + 0x88u);                           // 260ff8 lw $v1, 0x88($s5)
        r.v0 = addiu(0u, 1);                                     // 260ffc addiu $v0, $zero, 0x1
        t = r.v1 == r.v0;                                        // 261000 beq $v1, $v0, . + 4 + (0x5 << 2)
        r.v0 = addiu(0u, 2);                                     // 261004 addiu $v0, $zero, 0x2
        if (t) goto L_261018;
        t = r.v1 == r.v0;                                        // 261008 beq $v1, $v0, . + 4 + (0xA << 2)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 26100c lw $v0, -0x6C60($gp)
        if (t) goto L_261034;
        // 261010 b . + 4 + (0xD << 2)
        r.t1 = addiu(0u, 48);                                    // 261014 addiu $t1, $zero, 0x30
        goto L_261048;
    L_261018:
        r.v0 = LW(lo32(r.gp) - 0x4dccu);                         // 261018 lw $v0, -0x4DCC($gp)
        r.a0 = r.s2;                                             // 26101c daddu $a0, $s2, $zero
        r.a2 = r.sp;                                             // 261020 daddu $a2, $sp, $zero
        r.ra = 0x26102cu;                                        // 261024 jal func_2D5E98
        r.a1 = LW(lo32(r.v0) + 0x6e4u);                          // 261028 lw $a1, 0x6E4($v0)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x261024u, 0x26102cu)) return false;
        LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_26102c:
        // 26102c b . + 4 + (0x5 << 2)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261030 lw $v0, -0x6C60($gp)
        goto L_261044;
    L_261034:
        r.a0 = r.s2;                                             // 261034 daddu $a0, $s2, $zero
        r.ra = 0x261040u;                                        // 261038 jal func_2D6120
        r.a1 = r.sp;                                             // 26103c daddu $a1, $sp, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d6120u, 0x261038u, 0x261040u)) return false;
        LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_261040:
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261040 lw $v0, -0x6C60($gp)
    L_261044:
        r.t1 = addiu(0u, 48);                                    // 261044 addiu $t1, $zero, 0x30
    L_261048:
        r.v1 = sext32(0x360000u);                                // 261048 lui $v1, 0x36
        r.t2 = addiu(0u, 1);                                     // 26104c addiu $t2, $zero, 0x1
        WRITE8(lo32(r.v0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261050 sb $t1, 0x3($v0)
        r.v1 = addiu(r.v1, -28736);                              // 261054 addiu $v1, $v1, -0x7040
        r.t3 = addiu(0u, 4);                                     // 261058 addiu $t3, $zero, 0x4
        r.a1 = sext32(0x360000u);                                // 26105c lui $a1, 0x36
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261060 lw $v0, -0x6C60($gp)
        r.a1 = addiu(r.a1, -28688);                              // 261064 addiu $a1, $a1, -0x7010
        r.a0 = addiu(r.v0, 16);                                  // 261068 addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.v1));                  // 26106c sw $v1, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261070 sw $a0, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t2));        // 261074 sh $t2, 0x0($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261078 sb $t1, 0x3($a0)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 26107c lw $v0, -0x6C60($gp)
        r.v1 = addiu(r.v0, 16);                                  // 261080 addiu $v1, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.s2));                  // 261084 sw $s2, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 261088 sw $v1, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t3));        // 26108c sh $t3, 0x0($v0)
        WRITE8(lo32(r.v1) + 0x3u, static_cast<uint8_t>(r.t1));   // 261090 sb $t1, 0x3($v1)
        r.t4 = LW(lo32(r.sp) + 0x2b8u);                          // 261094 lw $t4, 0x2B8($sp)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261098 lw $v0, -0x6C60($gp)
        r.v1 = LW(lo32(r.t4));                                   // 26109c lw $v1, 0x0($t4)
        r.a2 = addiu(r.v0, 16);                                  // 2610a0 addiu $a2, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a1));                  // 2610a4 sw $a1, 0x4($v0)
        r.a0 = LW(lo32(r.v1) + 0x8u);                            // 2610a8 lw $a0, 0x8($v1)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t2));        // 2610ac sh $t2, 0x0($v0)
        t = r.a0 == 0u;                                          // 2610b0 beqz $a0, . + 4 + (0x34 << 2)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a2));               // 2610b4 sw $a2, -0x6C60($gp)
        if (t) goto L_261184;
        r.v0 = LW(lo32(r.t4) + 0x18u);                           // 2610b8 lw $v0, 0x18($t4)
        t = r.v0 == 0u;                                          // 2610bc beqz $v0, . + 4 + (0x32 << 2)
        r.v0 = LW(lo32(r.sp) + 0x2d4u);                          // 2610c0 lw $v0, 0x2D4($sp)
        if (t) goto L_261188;
        r.v0 = LW(lo32(r.t4) + 0x1cu);                           // 2610c4 lw $v0, 0x1C($t4)
        t = r.v0 == 0u;                                          // 2610c8 beqz $v0, . + 4 + (0x2E << 2)
        r.v0 = sext32(0x360000u);                                // 2610cc lui $v0, 0x36
        if (t) goto L_261184;
        WRITE8(lo32(r.a2) + 0x3u, static_cast<uint8_t>(r.t1));   // 2610d0 sb $t1, 0x3($a2)
        r.v0 = addiu(r.v0, -28864);                              // 2610d4 addiu $v0, $v0, -0x70C0
        r.a1 = sext32(0x360000u);                                // 2610d8 lui $a1, 0x36
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 2610dc lw $v1, -0x6C60($gp)
        r.a1 = addiu(r.a1, -28784);                              // 2610e0 addiu $a1, $a1, -0x7070
        r.t0 = LW(lo32(r.t4) + 0x18u);                           // 2610e4 lw $t0, 0x18($t4)
        r.a2 = sext32(0x360000u);                                // 2610e8 lui $a2, 0x36
        r.a0 = addiu(r.v1, 16);                                  // 2610ec addiu $a0, $v1, 0x10
        WRITE32(lo32(r.v1) + 0x4u, lo32(r.v0));                  // 2610f0 sw $v0, 0x4($v1)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 2610f4 sw $a0, -0x6C60($gp)
        r.a2 = addiu(r.a2, -28816);                              // 2610f8 addiu $a2, $a2, -0x7090
        WRITE16(lo32(r.v1), static_cast<uint16_t>(r.t2));        // 2610fc sh $t2, 0x0($v1)
        r.a3 = sext32(0x360000u);                                // 261100 lui $a3, 0x36
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261104 sb $t1, 0x3($a0)
        r.a3 = addiu(r.a3, -28800);                              // 261108 addiu $a3, $a3, -0x7080
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 26110c lw $v0, -0x6C60($gp)
        r.v1 = addiu(r.v0, 16);                                  // 261110 addiu $v1, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.t0));                  // 261114 sw $t0, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 261118 sw $v1, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t3));        // 26111c sh $t3, 0x0($v0)
        WRITE8(lo32(r.v1) + 0x3u, static_cast<uint8_t>(r.t1));   // 261120 sb $t1, 0x3($v1)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261124 lw $v0, -0x6C60($gp)
        r.v1 = addiu(r.v0, 16);                                  // 261128 addiu $v1, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a1));                  // 26112c sw $a1, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 261130 sw $v1, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t2));        // 261134 sh $t2, 0x0($v0)
        WRITE8(lo32(r.v1) + 0x3u, static_cast<uint8_t>(r.t1));   // 261138 sb $t1, 0x3($v1)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 26113c lw $v0, -0x6C60($gp)
        r.a0 = LW(lo32(r.t4) + 0x1cu);                           // 261140 lw $a0, 0x1C($t4)
        r.v1 = addiu(r.v0, 16);                                  // 261144 addiu $v1, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a2));                  // 261148 sw $a2, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 26114c sw $v1, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t2));        // 261150 sh $t2, 0x0($v0)
        WRITE8(lo32(r.v1) + 0x3u, static_cast<uint8_t>(r.t1));   // 261154 sb $t1, 0x3($v1)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261158 lw $v0, -0x6C60($gp)
        r.v1 = addiu(r.v0, 16);                                  // 26115c addiu $v1, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a0));                  // 261160 sw $a0, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 261164 sw $v1, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t3));        // 261168 sh $t3, 0x0($v0)
        WRITE8(lo32(r.v1) + 0x3u, static_cast<uint8_t>(r.t1));   // 26116c sb $t1, 0x3($v1)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261170 lw $v0, -0x6C60($gp)
        r.v1 = addiu(r.v0, 16);                                  // 261174 addiu $v1, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a3));                  // 261178 sw $a3, 0x4($v0)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t2));        // 26117c sh $t2, 0x0($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 261180 sw $v1, -0x6C60($gp)
    L_261184:
        r.v0 = LW(lo32(r.sp) + 0x2d4u);                          // 261184 lw $v0, 0x2D4($sp)
    L_261188:
        t = r.v0 != 0u;                                          // 261188 bnez $v0, . + 4 + (0xB << 2)
        r.a1 = LW(lo32(r.sp) + 0x2b8u);                          // 26118c lw $a1, 0x2B8($sp)
        if (t) goto L_2611b8;
        r.v1 = LW(lo32(r.sp) + 0x2d0u);                          // 261190 lw $v1, 0x2D0($sp)
        t = r.v1 == 0u;                                          // 261194 beqz $v1, . + 4 + (0x8 << 2)
        r.a0 = LW(lo32(r.gp) - 0x6c60u);                         // 261198 lw $a0, -0x6C60($gp)
        if (t) goto L_2611b8;
        r.v0 = addiu(0u, 80);                                    // 26119c addiu $v0, $zero, 0x50
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.v0));   // 2611a0 sb $v0, 0x3($a0)
        r.a0 = LW(lo32(r.sp) + 0x2d0u);                          // 2611a4 lw $a0, 0x2D0($sp)
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 2611a8 lw $v1, -0x6C60($gp)
        r.v0 = addiu(r.v1, 16);                                  // 2611ac addiu $v0, $v1, 0x10
        // 2611b0 b . + 4 + (0x2A1 << 2)
        WRITE32(lo32(r.v1) + 0x4u, lo32(r.a0));                  // 2611b4 sw $a0, 0x4($v1)
        goto L_261c38;
    L_2611b8:
        r.v0 = LW(lo32(r.a1) + 0x11cu);                          // 2611b8 lw $v0, 0x11C($a1)
        t = r.v0 == 0u;                                          // 2611bc beqz $v0, . + 4 + (0xC << 2)
        r.a2 = addiu(0u, 80);                                    // 2611c0 addiu $a2, $zero, 0x50
        if (t) goto L_2611f0;
        r.v0 = LW(lo32(r.a1) + 0x120u);                          // 2611c4 lw $v0, 0x120($a1)
        r.t4 = LW(lo32(r.sp) + 0x2d8u);                          // 2611c8 lw $t4, 0x2D8($sp)
        r.v1 = LW(lo32(r.sp) + 0x2b8u);                          // 2611cc lw $v1, 0x2B8($sp)
        r.v0 = sll32(r.v0, 3);                                   // 2611d0 sll $v0, $v0, 3
        r.v0 = addu(r.t4, r.v0);                                 // 2611d4 addu $v0, $t4, $v0
        r.a0 = LW(lo32(r.sp) + 0x2dcu);                          // 2611d8 lw $a0, 0x2DC($sp)
        r.v0 = addu(r.v1, r.v0);                                 // 2611dc addu $v0, $v1, $v0
        r.a1 = LW(lo32(r.gp) - 0x6c60u);                         // 2611e0 lw $a1, -0x6C60($gp)
        r.v1 = LW(lo32(r.v0) + 0xfcu);                           // 2611e4 lw $v1, 0xFC($v0)
        // 2611e8 b . + 4 + (0x2A2 << 2)
        r.v1 = addu(r.a0, r.v1);                                 // 2611ec addu $v1, $a0, $v1
        goto L_261c74;
    L_2611f0:
        r.v0 = LW(lo32(r.s1) + 0x14u);                           // 2611f0 lw $v0, 0x14($s1)
        t = neg64(r.v0);                                         // 2611f4 bltz $v0, . + 4 + (0x356 << 2)
        r.t4 = LW(lo32(r.sp) + 0x2c0u);                          // 2611f8 lw $t4, 0x2C0($sp)
        if (t) goto L_261f50;
        r.t5 = sext32(0x380000u);                                // 2611fc lui $t5, 0x38
        TS_RENDER_COUNT(++g_renderCounters.partRef[0]);
    L_261200:
        TS_RENDER_COUNT(++g_renderCounters.partRefBatches);
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 261200 lw $v1, -0x6C60($gp)
        r.t1 = addiu(0u, 48);                                    // 261204 addiu $t1, $zero, 0x30
        r.v0 = addiu(0u, 80);                                    // 261208 addiu $v0, $zero, 0x50
        r.t3 = addiu(0u, 1);                                     // 26120c addiu $t3, $zero, 0x1
        WRITE8(lo32(r.v1) + 0x3u, static_cast<uint8_t>(r.t1));   // 261210 sb $t1, 0x3($v1)
        r.t2 = sext32(0xffff0000u);                              // 261214 lui $t2, 0xFFFF
        r.v1 = LW(lo32(r.sp) + 0x2ccu);                          // 261218 lw $v1, 0x2CC($sp)
        r.t2 = r.t2 | 0xfffcu;                                   // 26121c ori $t2, $t2, 0xFFFC
        r.a2 = LW(lo32(r.s1) + 0x8u);                            // 261220 lw $a2, 0x8($s1)
        r.t4 = addiu(0u, 12);                                    // 261224 addiu $t4, $zero, 0xC
        r.lo = r.v1;                                             // 261228 mtlo $v1
        r.a1 = LW(lo32(r.s1) + 0x4u);                            // 26122c lw $a1, 0x4($s1)
        r.t0 = madd(r.s4, r.v0, r.lo, r.hi);                     // 261230 madd $t0, $s4, $v0
        r.v1 = LW(lo32(r.s3));                                   // 261234 lw $v1, 0x0($s3)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261238 lw $v0, -0x6C60($gp)
        r.a1 = sll32(r.a1, 4);                                   // 26123c sll $a1, $a1, 4
        r.a1 = addu(r.a1, r.v1);                                 // 261240 addu $a1, $a1, $v1
        r.a3 = addiu(0u, 3);                                     // 261244 addiu $a3, $zero, 0x3
        r.a0 = addiu(r.v0, 16);                                  // 261248 addiu $a0, $v0, 0x10
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t3));        // 26124c sh $t3, 0x0($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261250 sw $a0, -0x6C60($gp)
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.t0));                  // 261254 sw $t0, 0x4($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261258 sb $t1, 0x3($a0)
        r.t0 = addiu(r.t0, 16);                                  // 26125c addiu $t0, $t0, 0x10
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261260 lw $v0, -0x6C60($gp)
        r.a0 = addiu(r.v0, 16);                                  // 261264 addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a1));                  // 261268 sw $a1, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 26126c sw $a0, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.a2));        // 261270 sh $a2, 0x0($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261274 sb $t1, 0x3($a0)
        r.v0 = LW(lo32(r.s1) + 0x10u);                           // 261278 lw $v0, 0x10($s1)
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 26127c lw $v1, -0x6C60($gp)
        r.v0 = addiu(r.v0, 3);                                   // 261280 addiu $v0, $v0, 0x3
        r.a1 = LW(lo32(r.s1) + 0xcu);                            // 261284 lw $a1, 0xC($s1)
        WRITE32(lo32(r.v1) + 0x4u, lo32(r.t0));                  // 261288 sw $t0, 0x4($v1)
        r.a0 = addiu(r.v1, 16);                                  // 26128c addiu $a0, $v1, 0x10
        WRITE16(lo32(r.v1), static_cast<uint16_t>(r.t3));        // 261290 sh $t3, 0x0($v1)
        r.v0 = r.v0 & r.t2;                                      // 261294 and $v0, $v0, $t2
        r.v1 = sll32(r.v0, 1);                                   // 261298 sll $v1, $v0, 1
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 26129c sw $a0, -0x6C60($gp)
        r.v1 = addu(r.v1, r.v0);                                 // 2612a0 addu $v1, $v1, $v0
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 2612a4 sb $t1, 0x3($a0)
        r.v0 = mult(r.a1, r.t4, r.lo, r.hi);                     // 2612a8 mult $v0, $a1, $t4
        r.v1 = srl32(r.v1, 2);                                   // 2612ac srl $v1, $v1, 2
        r.t0 = addiu(r.t0, 16);                                  // 2612b0 addiu $t0, $t0, 0x10
        r.a1 = addu(r.v0, r.fp);                                 // 2612b4 addu $a1, $v0, $fp
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 2612b8 lw $v0, -0x6C60($gp)
        r.a0 = addiu(r.v0, 16);                                  // 2612bc addiu $a0, $v0, 0x10
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.v1));        // 2612c0 sh $v1, 0x0($v0)
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a1));                  // 2612c4 sw $a1, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 2612c8 sw $a0, -0x6C60($gp)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 2612cc sb $t1, 0x3($a0)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 2612d0 lw $v0, -0x6C60($gp)
        r.a1 = LW(lo32(r.s1) + 0x10u);                           // 2612d4 lw $a1, 0x10($s1)
        r.a0 = addiu(r.v0, 16);                                  // 2612d8 addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.t0));                  // 2612dc sw $t0, 0x4($v0)
        r.v1 = LW(lo32(r.s1) + 0xcu);                            // 2612e0 lw $v1, 0xC($s1)
        r.t0 = addiu(r.t0, 16);                                  // 2612e4 addiu $t0, $t0, 0x10
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t3));        // 2612e8 sh $t3, 0x0($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 2612ec sw $a0, -0x6C60($gp)
        r.v1 = sll32(r.v1, 4);                                   // 2612f0 sll $v1, $v1, 4
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 2612f4 sb $t1, 0x3($a0)
        r.v1 = addu(r.v1, r.s7);                                 // 2612f8 addu $v1, $v1, $s7
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 2612fc lw $v0, -0x6C60($gp)
        r.a0 = addiu(r.v0, 16);                                  // 261300 addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.v1));                  // 261304 sw $v1, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261308 sw $a0, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.a1));        // 26130c sh $a1, 0x0($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261310 sb $t1, 0x3($a0)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261314 lw $v0, -0x6C60($gp)
        r.a0 = LW(lo32(r.s1) + 0xcu);                            // 261318 lw $a0, 0xC($s1)
        r.a1 = addiu(r.v0, 16);                                  // 26131c addiu $a1, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.t0));                  // 261320 sw $t0, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a1));               // 261324 sw $a1, -0x6C60($gp)
        r.a0 = sll32(r.a0, 2);                                   // 261328 sll $a0, $a0, 2
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t3));        // 26132c sh $t3, 0x0($v0)
        r.a0 = addu(r.a0, r.s6);                                 // 261330 addu $a0, $a0, $s6
        r.v1 = LW(lo32(r.s1) + 0x10u);                           // 261334 lw $v1, 0x10($s1)
        r.t0 = addiu(r.t0, 16);                                  // 261338 addiu $t0, $t0, 0x10
        WRITE8(lo32(r.a1) + 0x3u, static_cast<uint8_t>(r.t1));   // 26133c sb $t1, 0x3($a1)
        r.v1 = addiu(r.v1, 3);                                   // 261340 addiu $v1, $v1, 0x3
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261344 lw $v0, -0x6C60($gp)
        r.v1 = sra32(r.v1, 2);                                   // 261348 sra $v1, $v1, 2
        r.a1 = LW(lo32(r.s1) + 0x14u);                           // 26134c lw $a1, 0x14($s1)
        r.a2 = addiu(r.v0, 16);                                  // 261350 addiu $a2, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a0));                  // 261354 sw $a0, 0x4($v0)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.v1));        // 261358 sh $v1, 0x0($v0)
        t = r.a1 != r.a3;                                        // 26135c bne $a1, $a3, . + 4 + (0x17 << 2)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a2));               // 261360 sw $a2, -0x6C60($gp)
        if (t) goto L_2613bc;
        WRITE8(lo32(r.a2) + 0x3u, static_cast<uint8_t>(r.t1));   // 261364 sb $t1, 0x3($a2)
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 261368 lw $v1, -0x6C60($gp)
        r.v0 = LW(lo32(r.s1) + 0x10u);                           // 26136c lw $v0, 0x10($s1)
        r.a1 = LW(lo32(r.s1) + 0xcu);                            // 261370 lw $a1, 0xC($s1)
        r.a2 = addiu(r.v1, 16);                                  // 261374 addiu $a2, $v1, 0x10
        r.v0 = addiu(r.v0, 3);                                   // 261378 addiu $v0, $v0, 0x3
        WRITE32(lo32(r.v1) + 0x4u, lo32(r.t0));                  // 26137c sw $t0, 0x4($v1)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a2));               // 261380 sw $a2, -0x6C60($gp)
        r.v0 = r.v0 & r.t2;                                      // 261384 and $v0, $v0, $t2
        WRITE16(lo32(r.v1), static_cast<uint16_t>(r.t3));        // 261388 sh $t3, 0x0($v1)
        r.a1 = mult(r.a1, r.t4, r.lo, r.hi);                     // 26138c mult $a1, $a1, $t4
        r.a0 = LW(lo32(r.s3) + 0x14u);                           // 261390 lw $a0, 0x14($s3)
        r.v1 = sll32(r.v0, 1);                                   // 261394 sll $v1, $v0, 1
        WRITE8(lo32(r.a2) + 0x3u, static_cast<uint8_t>(r.t1));   // 261398 sb $t1, 0x3($a2)
        r.v1 = addu(r.v1, r.v0);                                 // 26139c addu $v1, $v1, $v0
        r.v1 = srl32(r.v1, 2);                                   // 2613a0 srl $v1, $v1, 2
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 2613a4 lw $v0, -0x6C60($gp)
        r.a1 = addu(r.a1, r.a0);                                 // 2613a8 addu $a1, $a1, $a0
        r.a0 = addiu(r.v0, 16);                                  // 2613ac addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a1));                  // 2613b0 sw $a1, 0x4($v0)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.v1));        // 2613b4 sh $v1, 0x0($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 2613b8 sw $a0, -0x6C60($gp)
    L_2613bc:
        r.v1 = LW(lo32(r.s1));                                   // 2613bc lw $v1, 0x0($s1)
        t = neg64(r.v1);                                         // 2613c0 bltz $v1, . + 4 + (0x15 << 2)
        r.a1 = LW(lo32(r.sp) + 0x2c8u);                          // 2613c4 lw $a1, 0x2C8($sp)
        if (t) goto L_261418;
        r.v1 = sll32(r.v1, 4);                                   // 2613c8 sll $v1, $v1, 4
        r.a0 = addiu(0u, -1);                                    // 2613cc addiu $a0, $zero, -0x1
        r.a3 = addiu(0u, 40);                                    // 2613d0 addiu $a3, $zero, 0x28
        r.v1 = addu(r.v1, r.a1);                                 // 2613d4 addu $v1, $v1, $a1
        r.a2 = LW(lo32(r.gp) - 0x6c60u);                         // 2613d8 lw $a2, -0x6C60($gp)
        r.v0 = LW(lo32(r.v1));                                   // 2613dc lw $v0, 0x0($v1)
        r.t0 = addiu(0u, 8);                                     // 2613e0 addiu $t0, $zero, 0x8
        r.a1 = LW(lo32(r.gp) - 0x4b68u);                         // 2613e4 lw $a1, -0x4B68($gp)
        r.a0 = slt(r.a0, r.v0);                                  // 2613e8 slt $a0, $a0, $v0
        if (r.a0 == 0u) { r.v0 = 0u; zeroHigh(ctx, 2); }         // 2613ec movz $v0, $zero, $a0
        r.v1 = LW(lo32(r.a1) + 0x4u);                            // 2613f0 lw $v1, 0x4($a1)
        r.v0 = mult(r.v0, r.a3, r.lo, r.hi);                     // 2613f4 mult $v0, $v0, $a3
        r.v0 = addu(r.v0, r.v1);                                 // 2613f8 addu $v0, $v0, $v1
        r.a0 = LW(lo32(r.v0) + 0x20u);                           // 2613fc lw $a0, 0x20($v0)
        WRITE8(lo32(r.a2) + 0x3u, static_cast<uint8_t>(r.t1));   // 261400 sb $t1, 0x3($a2)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261404 lw $v0, -0x6C60($gp)
        r.v1 = addiu(r.v0, 16);                                  // 261408 addiu $v1, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a0));                  // 26140c sw $a0, 0x4($v0)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t0));        // 261410 sh $t0, 0x0($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 261414 sw $v1, -0x6C60($gp)
    L_261418:
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261418 lw $v0, -0x6C60($gp)
        r.a0 = addiu(r.t5, 1120);                                // 26141c addiu $a0, $t5, 0x460
        r.v1 = LW(lo32(r.s1) + 0x14u);                           // 261420 lw $v1, 0x14($s1)
        r.s4 = addiu(r.s4, 1);                                   // 261424 addiu $s4, $s4, 0x1
        WRITE8(lo32(r.v0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261428 sb $t1, 0x3($v0)
        r.s1 = addiu(r.s1, 24);                                  // 26142c addiu $s1, $s1, 0x18
        r.v1 = sll32(r.v1, 5);                                   // 261430 sll $v1, $v1, 5
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261434 lw $v0, -0x6C60($gp)
        r.v1 = addu(r.v1, r.a0);                                 // 261438 addu $v1, $v1, $a0
        r.a1 = LW(lo32(r.s1) + 0x14u);                           // 26143c lw $a1, 0x14($s1)
        r.a0 = addiu(r.v0, 16);                                  // 261440 addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.v1));                  // 261444 sw $v1, 0x4($v0)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t3));        // 261448 sh $t3, 0x0($v0)
        t = !neg64(r.a1);                                        // 26144c bgez $a1, . + 4 + (-0x94 << 2)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261450 sw $a0, -0x6C60($gp)
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x261200u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s4, 20); ctx->lo = r.lo; ctx->hi = r.hi; return false; }
            goto L_261200;
        }
        // 261454 b . + 4 + (0x2BE << 2)
        r.t4 = LW(lo32(r.sp) + 0x2c0u);                          // 261458 lw $t4, 0x2C0($sp)
        goto L_261f50;
    L_26145c:
        r.v0 = LB(lo32(r.v1));                                   // 26145c lb $v0, 0x0($v1)
        t = r.v0 != 0u;                                          // 261460 bnez $v0, . + 4 + (0x112 << 2)
        r.v1 = LBU(lo32(r.v1));                                  // 261464 lbu $v1, 0x0($v1)
        if (t) goto L_2618ac;
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 261468 lw $v1, -0x6C60($gp)
        r.t1 = addiu(0u, 48);                                    // 26146c addiu $t1, $zero, 0x30
        r.v0 = sext32(0x360000u);                                // 261470 lui $v0, 0x36
        r.t2 = addiu(0u, 1);                                     // 261474 addiu $t2, $zero, 0x1
        WRITE8(lo32(r.v1) + 0x3u, static_cast<uint8_t>(r.t1));   // 261478 sb $t1, 0x3($v1)
        r.v0 = addiu(r.v0, -28736);                              // 26147c addiu $v0, $v0, -0x7040
        r.a1 = sext32(0x360000u);                                // 261480 lui $a1, 0x36
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 261484 lw $v1, -0x6C60($gp)
        r.a1 = addiu(r.a1, -28688);                              // 261488 addiu $a1, $a1, -0x7010
        WRITE32(lo32(r.v1) + 0x4u, lo32(r.v0));                  // 26148c sw $v0, 0x4($v1)
        r.a0 = addiu(r.v1, 16);                                  // 261490 addiu $a0, $v1, 0x10
        WRITE16(lo32(r.v1), static_cast<uint16_t>(r.t2));        // 261494 sh $t2, 0x0($v1)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261498 sw $a0, -0x6C60($gp)
        r.v1 = LW(lo32(r.sp) + 0x2c4u);                          // 26149c lw $v1, 0x2C4($sp)
        r.v0 = LB(lo32(r.v1) + 0x1u);                            // 2614a0 lb $v0, 0x1($v1)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 2614a4 sb $t1, 0x3($a0)
        r.v0 = sll32(r.v0, 6);                                   // 2614a8 sll $v0, $v0, 6
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 2614ac lw $v1, -0x6C60($gp)
        r.v0 = addu(r.v0, r.t3);                                 // 2614b0 addu $v0, $v0, $t3
        r.a0 = addiu(r.v1, 16);                                  // 2614b4 addiu $a0, $v1, 0x10
        WRITE32(lo32(r.v1) + 0x4u, lo32(r.v0));                  // 2614b8 sw $v0, 0x4($v1)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 2614bc sw $a0, -0x6C60($gp)
        WRITE16(lo32(r.v1), static_cast<uint16_t>(r.t4));        // 2614c0 sh $t4, 0x0($v1)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 2614c4 sb $t1, 0x3($a0)
        r.a0 = LW(lo32(r.sp) + 0x2b8u);                          // 2614c8 lw $a0, 0x2B8($sp)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 2614cc lw $v0, -0x6C60($gp)
        r.v1 = LW(lo32(r.a0));                                   // 2614d0 lw $v1, 0x0($a0)
        r.a2 = addiu(r.v0, 16);                                  // 2614d4 addiu $a2, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a1));                  // 2614d8 sw $a1, 0x4($v0)
        r.a0 = LW(lo32(r.v1) + 0x8u);                            // 2614dc lw $a0, 0x8($v1)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t2));        // 2614e0 sh $t2, 0x0($v0)
        t = r.a0 == 0u;                                          // 2614e4 beqz $a0, . + 4 + (0x3B << 2)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a2));               // 2614e8 sw $a2, -0x6C60($gp)
        if (t) goto L_2615d4;
        r.a1 = LW(lo32(r.sp) + 0x2b8u);                          // 2614ec lw $a1, 0x2B8($sp)
        r.v0 = LW(lo32(r.a1) + 0x18u);                           // 2614f0 lw $v0, 0x18($a1)
        if (r.v0 == 0u)                                          // 2614f4 beql $v0, $zero, . + 4 + (0x38 << 2)
        {
            r.t4 = LW(lo32(r.sp) + 0x2d4u);                          // 2614f8 lw $t4, 0x2D4($sp)
            goto L_2615d8;
        }
        r.v0 = LW(lo32(r.a1) + 0x1cu);                           // 2614fc lw $v0, 0x1C($a1)
        t = r.v0 == 0u;                                          // 261500 beqz $v0, . + 4 + (0x34 << 2)
        r.v0 = sext32(0x360000u);                                // 261504 lui $v0, 0x36
        if (t) goto L_2615d4;
        WRITE8(lo32(r.a2) + 0x3u, static_cast<uint8_t>(r.t1));   // 261508 sb $t1, 0x3($a2)
        r.v0 = addiu(r.v0, -28864);                              // 26150c addiu $v0, $v0, -0x70C0
        r.a1 = sext32(0x360000u);                                // 261510 lui $a1, 0x36
        r.a0 = LW(lo32(r.sp) + 0x2b8u);                          // 261514 lw $a0, 0x2B8($sp)
        r.a1 = addiu(r.a1, -28784);                              // 261518 addiu $a1, $a1, -0x7070
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 26151c lw $v1, -0x6C60($gp)
        r.a2 = sext32(0x360000u);                                // 261520 lui $a2, 0x36
        r.t0 = LW(lo32(r.a0) + 0x18u);                           // 261524 lw $t0, 0x18($a0)
        r.a2 = addiu(r.a2, -28816);                              // 261528 addiu $a2, $a2, -0x7090
        WRITE16(lo32(r.v1), static_cast<uint16_t>(r.t2));        // 26152c sh $t2, 0x0($v1)
        r.a0 = addiu(r.v1, 16);                                  // 261530 addiu $a0, $v1, 0x10
        WRITE32(lo32(r.v1) + 0x4u, lo32(r.v0));                  // 261534 sw $v0, 0x4($v1)
        r.a3 = sext32(0x360000u);                                // 261538 lui $a3, 0x36
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 26153c sw $a0, -0x6C60($gp)
        r.a3 = addiu(r.a3, -28800);                              // 261540 addiu $a3, $a3, -0x7080
        r.v1 = LW(lo32(r.sp) + 0x2c4u);                          // 261544 lw $v1, 0x2C4($sp)
        r.v0 = LB(lo32(r.v1) + 0x1u);                            // 261548 lb $v0, 0x1($v1)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 26154c sb $t1, 0x3($a0)
        r.v0 = sll32(r.v0, 6);                                   // 261550 sll $v0, $v0, 6
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 261554 lw $v1, -0x6C60($gp)
        r.v0 = addu(r.v0, r.t0);                                 // 261558 addu $v0, $v0, $t0
        r.a0 = addiu(r.v1, 16);                                  // 26155c addiu $a0, $v1, 0x10
        WRITE32(lo32(r.v1) + 0x4u, lo32(r.v0));                  // 261560 sw $v0, 0x4($v1)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261564 sw $a0, -0x6C60($gp)
        WRITE16(lo32(r.v1), static_cast<uint16_t>(r.t4));        // 261568 sh $t4, 0x0($v1)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 26156c sb $t1, 0x3($a0)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261570 lw $v0, -0x6C60($gp)
        r.v1 = addiu(r.v0, 16);                                  // 261574 addiu $v1, $v0, 0x10
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t2));        // 261578 sh $t2, 0x0($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 26157c sw $v1, -0x6C60($gp)
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a1));                  // 261580 sw $a1, 0x4($v0)
        WRITE8(lo32(r.v1) + 0x3u, static_cast<uint8_t>(r.t1));   // 261584 sb $t1, 0x3($v1)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261588 lw $v0, -0x6C60($gp)
        r.a1 = LW(lo32(r.sp) + 0x2b8u);                          // 26158c lw $a1, 0x2B8($sp)
        r.v1 = addiu(r.v0, 16);                                  // 261590 addiu $v1, $v0, 0x10
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t2));        // 261594 sh $t2, 0x0($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 261598 sw $v1, -0x6C60($gp)
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a2));                  // 26159c sw $a2, 0x4($v0)
        r.a0 = LW(lo32(r.a1) + 0x1cu);                           // 2615a0 lw $a0, 0x1C($a1)
        WRITE8(lo32(r.v1) + 0x3u, static_cast<uint8_t>(r.t1));   // 2615a4 sb $t1, 0x3($v1)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 2615a8 lw $v0, -0x6C60($gp)
        r.v1 = addiu(r.v0, 16);                                  // 2615ac addiu $v1, $v0, 0x10
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t4));        // 2615b0 sh $t4, 0x0($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 2615b4 sw $v1, -0x6C60($gp)
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a0));                  // 2615b8 sw $a0, 0x4($v0)
        WRITE8(lo32(r.v1) + 0x3u, static_cast<uint8_t>(r.t1));   // 2615bc sb $t1, 0x3($v1)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 2615c0 lw $v0, -0x6C60($gp)
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a3));                  // 2615c4 sw $a3, 0x4($v0)
        r.v1 = addiu(r.v0, 16);                                  // 2615c8 addiu $v1, $v0, 0x10
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t2));        // 2615cc sh $t2, 0x0($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 2615d0 sw $v1, -0x6C60($gp)
    L_2615d4:
        r.t4 = LW(lo32(r.sp) + 0x2d4u);                          // 2615d4 lw $t4, 0x2D4($sp)
    L_2615d8:
        t = r.t4 != 0u;                                          // 2615d8 bnez $t4, . + 4 + (0xB << 2)
        r.a1 = LW(lo32(r.sp) + 0x2b8u);                          // 2615dc lw $a1, 0x2B8($sp)
        if (t) goto L_261608;
        r.v0 = LW(lo32(r.sp) + 0x2d0u);                          // 2615e0 lw $v0, 0x2D0($sp)
        t = r.v0 == 0u;                                          // 2615e4 beqz $v0, . + 4 + (0x8 << 2)
        r.a0 = LW(lo32(r.gp) - 0x6c60u);                         // 2615e8 lw $a0, -0x6C60($gp)
        if (t) goto L_261608;
        r.v0 = addiu(0u, 80);                                    // 2615ec addiu $v0, $zero, 0x50
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.v0));   // 2615f0 sb $v0, 0x3($a0)
        r.a0 = LW(lo32(r.sp) + 0x2d0u);                          // 2615f4 lw $a0, 0x2D0($sp)
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 2615f8 lw $v1, -0x6C60($gp)
        r.v0 = addiu(r.v1, 16);                                  // 2615fc addiu $v0, $v1, 0x10
        // 261600 b . + 4 + (0x18D << 2)
        WRITE32(lo32(r.v1) + 0x4u, lo32(r.a0));                  // 261604 sw $a0, 0x4($v1)
        goto L_261c38;
    L_261608:
        r.v0 = LW(lo32(r.a1) + 0x11cu);                          // 261608 lw $v0, 0x11C($a1)
        t = r.v0 == 0u;                                          // 26160c beqz $v0, . + 4 + (0xC << 2)
        r.a2 = addiu(0u, 80);                                    // 261610 addiu $a2, $zero, 0x50
        if (t) goto L_261640;
        r.v0 = LW(lo32(r.a1) + 0x120u);                          // 261614 lw $v0, 0x120($a1)
        r.t4 = LW(lo32(r.sp) + 0x2d8u);                          // 261618 lw $t4, 0x2D8($sp)
        r.v1 = LW(lo32(r.sp) + 0x2b8u);                          // 26161c lw $v1, 0x2B8($sp)
        r.v0 = sll32(r.v0, 3);                                   // 261620 sll $v0, $v0, 3
        r.v0 = addu(r.t4, r.v0);                                 // 261624 addu $v0, $t4, $v0
        r.a0 = LW(lo32(r.sp) + 0x2dcu);                          // 261628 lw $a0, 0x2DC($sp)
        r.v0 = addu(r.v1, r.v0);                                 // 26162c addu $v0, $v1, $v0
        r.a1 = LW(lo32(r.gp) - 0x6c60u);                         // 261630 lw $a1, -0x6C60($gp)
        r.v1 = LW(lo32(r.v0) + 0xfcu);                           // 261634 lw $v1, 0xFC($v0)
        // 261638 b . + 4 + (0x18E << 2)
        r.v1 = addu(r.a0, r.v1);                                 // 26163c addu $v1, $a0, $v1
        goto L_261c74;
    L_261640:
        r.v0 = LW(lo32(r.s1) + 0x14u);                           // 261640 lw $v0, 0x14($s1)
        t = neg64(r.v0);                                         // 261644 bltz $v0, . + 4 + (0x242 << 2)
        r.t4 = LW(lo32(r.sp) + 0x2c0u);                          // 261648 lw $t4, 0x2C0($sp)
        if (t) goto L_261f50;
        r.t5 = sext32(0x380000u);                                // 26164c lui $t5, 0x38
        TS_RENDER_COUNT(++g_renderCounters.partRef[1]);
    L_261650:
        TS_RENDER_COUNT(++g_renderCounters.partRefBatches);
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 261650 lw $v1, -0x6C60($gp)
        r.t1 = addiu(0u, 48);                                    // 261654 addiu $t1, $zero, 0x30
        r.v0 = addiu(0u, 80);                                    // 261658 addiu $v0, $zero, 0x50
        r.t3 = addiu(0u, 1);                                     // 26165c addiu $t3, $zero, 0x1
        WRITE8(lo32(r.v1) + 0x3u, static_cast<uint8_t>(r.t1));   // 261660 sb $t1, 0x3($v1)
        r.t2 = sext32(0xffff0000u);                              // 261664 lui $t2, 0xFFFF
        r.v1 = LW(lo32(r.sp) + 0x2ccu);                          // 261668 lw $v1, 0x2CC($sp)
        r.t2 = r.t2 | 0xfffcu;                                   // 26166c ori $t2, $t2, 0xFFFC
        r.a2 = LW(lo32(r.s1) + 0x8u);                            // 261670 lw $a2, 0x8($s1)
        r.t4 = addiu(0u, 12);                                    // 261674 addiu $t4, $zero, 0xC
        r.lo = r.v1;                                             // 261678 mtlo $v1
        r.a1 = LW(lo32(r.s1) + 0x4u);                            // 26167c lw $a1, 0x4($s1)
        r.t0 = madd(r.s4, r.v0, r.lo, r.hi);                     // 261680 madd $t0, $s4, $v0
        r.v1 = LW(lo32(r.s3));                                   // 261684 lw $v1, 0x0($s3)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261688 lw $v0, -0x6C60($gp)
        r.a1 = sll32(r.a1, 4);                                   // 26168c sll $a1, $a1, 4
        r.a1 = addu(r.a1, r.v1);                                 // 261690 addu $a1, $a1, $v1
        r.a3 = addiu(0u, 3);                                     // 261694 addiu $a3, $zero, 0x3
        r.a0 = addiu(r.v0, 16);                                  // 261698 addiu $a0, $v0, 0x10
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t3));        // 26169c sh $t3, 0x0($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 2616a0 sw $a0, -0x6C60($gp)
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.t0));                  // 2616a4 sw $t0, 0x4($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 2616a8 sb $t1, 0x3($a0)
        r.t0 = addiu(r.t0, 16);                                  // 2616ac addiu $t0, $t0, 0x10
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 2616b0 lw $v0, -0x6C60($gp)
        r.a0 = addiu(r.v0, 16);                                  // 2616b4 addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a1));                  // 2616b8 sw $a1, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 2616bc sw $a0, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.a2));        // 2616c0 sh $a2, 0x0($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 2616c4 sb $t1, 0x3($a0)
        r.v0 = LW(lo32(r.s1) + 0x10u);                           // 2616c8 lw $v0, 0x10($s1)
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 2616cc lw $v1, -0x6C60($gp)
        r.v0 = addiu(r.v0, 3);                                   // 2616d0 addiu $v0, $v0, 0x3
        r.a1 = LW(lo32(r.s1) + 0xcu);                            // 2616d4 lw $a1, 0xC($s1)
        WRITE32(lo32(r.v1) + 0x4u, lo32(r.t0));                  // 2616d8 sw $t0, 0x4($v1)
        r.a0 = addiu(r.v1, 16);                                  // 2616dc addiu $a0, $v1, 0x10
        WRITE16(lo32(r.v1), static_cast<uint16_t>(r.t3));        // 2616e0 sh $t3, 0x0($v1)
        r.v0 = r.v0 & r.t2;                                      // 2616e4 and $v0, $v0, $t2
        r.v1 = sll32(r.v0, 1);                                   // 2616e8 sll $v1, $v0, 1
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 2616ec sw $a0, -0x6C60($gp)
        r.v1 = addu(r.v1, r.v0);                                 // 2616f0 addu $v1, $v1, $v0
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 2616f4 sb $t1, 0x3($a0)
        r.v0 = mult(r.a1, r.t4, r.lo, r.hi);                     // 2616f8 mult $v0, $a1, $t4
        r.v1 = srl32(r.v1, 2);                                   // 2616fc srl $v1, $v1, 2
        r.t0 = addiu(r.t0, 16);                                  // 261700 addiu $t0, $t0, 0x10
        r.a1 = addu(r.v0, r.fp);                                 // 261704 addu $a1, $v0, $fp
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261708 lw $v0, -0x6C60($gp)
        r.a0 = addiu(r.v0, 16);                                  // 26170c addiu $a0, $v0, 0x10
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.v1));        // 261710 sh $v1, 0x0($v0)
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a1));                  // 261714 sw $a1, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261718 sw $a0, -0x6C60($gp)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 26171c sb $t1, 0x3($a0)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261720 lw $v0, -0x6C60($gp)
        r.a1 = LW(lo32(r.s1) + 0x10u);                           // 261724 lw $a1, 0x10($s1)
        r.a0 = addiu(r.v0, 16);                                  // 261728 addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.t0));                  // 26172c sw $t0, 0x4($v0)
        r.v1 = LW(lo32(r.s1) + 0xcu);                            // 261730 lw $v1, 0xC($s1)
        r.t0 = addiu(r.t0, 16);                                  // 261734 addiu $t0, $t0, 0x10
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t3));        // 261738 sh $t3, 0x0($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 26173c sw $a0, -0x6C60($gp)
        r.v1 = sll32(r.v1, 4);                                   // 261740 sll $v1, $v1, 4
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261744 sb $t1, 0x3($a0)
        r.v1 = addu(r.v1, r.s7);                                 // 261748 addu $v1, $v1, $s7
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 26174c lw $v0, -0x6C60($gp)
        r.a0 = addiu(r.v0, 16);                                  // 261750 addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.v1));                  // 261754 sw $v1, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261758 sw $a0, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.a1));        // 26175c sh $a1, 0x0($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261760 sb $t1, 0x3($a0)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261764 lw $v0, -0x6C60($gp)
        r.a0 = LW(lo32(r.s1) + 0xcu);                            // 261768 lw $a0, 0xC($s1)
        r.a1 = addiu(r.v0, 16);                                  // 26176c addiu $a1, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.t0));                  // 261770 sw $t0, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a1));               // 261774 sw $a1, -0x6C60($gp)
        r.a0 = sll32(r.a0, 2);                                   // 261778 sll $a0, $a0, 2
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t3));        // 26177c sh $t3, 0x0($v0)
        r.a0 = addu(r.a0, r.s6);                                 // 261780 addu $a0, $a0, $s6
        r.v1 = LW(lo32(r.s1) + 0x10u);                           // 261784 lw $v1, 0x10($s1)
        r.t0 = addiu(r.t0, 16);                                  // 261788 addiu $t0, $t0, 0x10
        WRITE8(lo32(r.a1) + 0x3u, static_cast<uint8_t>(r.t1));   // 26178c sb $t1, 0x3($a1)
        r.v1 = addiu(r.v1, 3);                                   // 261790 addiu $v1, $v1, 0x3
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261794 lw $v0, -0x6C60($gp)
        r.v1 = sra32(r.v1, 2);                                   // 261798 sra $v1, $v1, 2
        r.a1 = LW(lo32(r.s1) + 0x14u);                           // 26179c lw $a1, 0x14($s1)
        r.a2 = addiu(r.v0, 16);                                  // 2617a0 addiu $a2, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a0));                  // 2617a4 sw $a0, 0x4($v0)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.v1));        // 2617a8 sh $v1, 0x0($v0)
        t = r.a1 != r.a3;                                        // 2617ac bne $a1, $a3, . + 4 + (0x17 << 2)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a2));               // 2617b0 sw $a2, -0x6C60($gp)
        if (t) goto L_26180c;
        WRITE8(lo32(r.a2) + 0x3u, static_cast<uint8_t>(r.t1));   // 2617b4 sb $t1, 0x3($a2)
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 2617b8 lw $v1, -0x6C60($gp)
        r.v0 = LW(lo32(r.s1) + 0x10u);                           // 2617bc lw $v0, 0x10($s1)
        r.a1 = LW(lo32(r.s1) + 0xcu);                            // 2617c0 lw $a1, 0xC($s1)
        r.a2 = addiu(r.v1, 16);                                  // 2617c4 addiu $a2, $v1, 0x10
        r.v0 = addiu(r.v0, 3);                                   // 2617c8 addiu $v0, $v0, 0x3
        WRITE32(lo32(r.v1) + 0x4u, lo32(r.t0));                  // 2617cc sw $t0, 0x4($v1)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a2));               // 2617d0 sw $a2, -0x6C60($gp)
        r.v0 = r.v0 & r.t2;                                      // 2617d4 and $v0, $v0, $t2
        WRITE16(lo32(r.v1), static_cast<uint16_t>(r.t3));        // 2617d8 sh $t3, 0x0($v1)
        r.a1 = mult(r.a1, r.t4, r.lo, r.hi);                     // 2617dc mult $a1, $a1, $t4
        r.a0 = LW(lo32(r.s3) + 0x14u);                           // 2617e0 lw $a0, 0x14($s3)
        r.v1 = sll32(r.v0, 1);                                   // 2617e4 sll $v1, $v0, 1
        WRITE8(lo32(r.a2) + 0x3u, static_cast<uint8_t>(r.t1));   // 2617e8 sb $t1, 0x3($a2)
        r.v1 = addu(r.v1, r.v0);                                 // 2617ec addu $v1, $v1, $v0
        r.v1 = srl32(r.v1, 2);                                   // 2617f0 srl $v1, $v1, 2
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 2617f4 lw $v0, -0x6C60($gp)
        r.a1 = addu(r.a1, r.a0);                                 // 2617f8 addu $a1, $a1, $a0
        r.a0 = addiu(r.v0, 16);                                  // 2617fc addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a1));                  // 261800 sw $a1, 0x4($v0)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.v1));        // 261804 sh $v1, 0x0($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261808 sw $a0, -0x6C60($gp)
    L_26180c:
        r.v1 = LW(lo32(r.s1));                                   // 26180c lw $v1, 0x0($s1)
        t = neg64(r.v1);                                         // 261810 bltz $v1, . + 4 + (0x15 << 2)
        r.a1 = LW(lo32(r.sp) + 0x2c8u);                          // 261814 lw $a1, 0x2C8($sp)
        if (t) goto L_261868;
        r.v1 = sll32(r.v1, 4);                                   // 261818 sll $v1, $v1, 4
        r.a0 = addiu(0u, -1);                                    // 26181c addiu $a0, $zero, -0x1
        r.a3 = addiu(0u, 40);                                    // 261820 addiu $a3, $zero, 0x28
        r.v1 = addu(r.v1, r.a1);                                 // 261824 addu $v1, $v1, $a1
        r.a2 = LW(lo32(r.gp) - 0x6c60u);                         // 261828 lw $a2, -0x6C60($gp)
        r.v0 = LW(lo32(r.v1));                                   // 26182c lw $v0, 0x0($v1)
        r.t0 = addiu(0u, 8);                                     // 261830 addiu $t0, $zero, 0x8
        r.a1 = LW(lo32(r.gp) - 0x4b68u);                         // 261834 lw $a1, -0x4B68($gp)
        r.a0 = slt(r.a0, r.v0);                                  // 261838 slt $a0, $a0, $v0
        if (r.a0 == 0u) { r.v0 = 0u; zeroHigh(ctx, 2); }         // 26183c movz $v0, $zero, $a0
        r.v1 = LW(lo32(r.a1) + 0x4u);                            // 261840 lw $v1, 0x4($a1)
        r.v0 = mult(r.v0, r.a3, r.lo, r.hi);                     // 261844 mult $v0, $v0, $a3
        r.v0 = addu(r.v0, r.v1);                                 // 261848 addu $v0, $v0, $v1
        r.a0 = LW(lo32(r.v0) + 0x20u);                           // 26184c lw $a0, 0x20($v0)
        WRITE8(lo32(r.a2) + 0x3u, static_cast<uint8_t>(r.t1));   // 261850 sb $t1, 0x3($a2)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261854 lw $v0, -0x6C60($gp)
        r.v1 = addiu(r.v0, 16);                                  // 261858 addiu $v1, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a0));                  // 26185c sw $a0, 0x4($v0)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t0));        // 261860 sh $t0, 0x0($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 261864 sw $v1, -0x6C60($gp)
    L_261868:
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261868 lw $v0, -0x6C60($gp)
        r.a0 = addiu(r.t5, 1120);                                // 26186c addiu $a0, $t5, 0x460
        r.v1 = LW(lo32(r.s1) + 0x14u);                           // 261870 lw $v1, 0x14($s1)
        r.s4 = addiu(r.s4, 1);                                   // 261874 addiu $s4, $s4, 0x1
        WRITE8(lo32(r.v0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261878 sb $t1, 0x3($v0)
        r.s1 = addiu(r.s1, 24);                                  // 26187c addiu $s1, $s1, 0x18
        r.v1 = sll32(r.v1, 5);                                   // 261880 sll $v1, $v1, 5
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261884 lw $v0, -0x6C60($gp)
        r.v1 = addu(r.v1, r.a0);                                 // 261888 addu $v1, $v1, $a0
        r.a1 = LW(lo32(r.s1) + 0x14u);                           // 26188c lw $a1, 0x14($s1)
        r.a0 = addiu(r.v0, 16);                                  // 261890 addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.v1));                  // 261894 sw $v1, 0x4($v0)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t3));        // 261898 sh $t3, 0x0($v0)
        t = !neg64(r.a1);                                        // 26189c bgez $a1, . + 4 + (-0x94 << 2)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 2618a0 sw $a0, -0x6C60($gp)
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x261650u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(s1, 17); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); ctx->lo = r.lo; ctx->hi = r.hi; return false; }
            goto L_261650;
        }
        // 2618a4 b . + 4 + (0x1AA << 2)
        r.t4 = LW(lo32(r.sp) + 0x2c0u);                          // 2618a8 lw $t4, 0x2C0($sp)
        goto L_261f50;
    L_2618ac:
        r.v0 = addiu(r.v1, -1);                                  // 2618ac addiu $v0, $v1, -0x1
        r.v0 = r.v0 & 0xffu;                                     // 2618b0 andi $v0, $v0, 0xFF
        r.v0 = sltu(r.v0, sext32(3u));                           // 2618b4 sltiu $v0, $v0, 0x3
        t = r.v0 == 0u;                                          // 2618b8 beqz $v0, . + 4 + (0x1A4 << 2)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 2618bc lw $v0, -0x6C60($gp)
        if (t) goto L_261f4c;
        r.t1 = addiu(0u, 48);                                    // 2618c0 addiu $t1, $zero, 0x30
        r.t2 = addiu(0u, 1);                                     // 2618c4 addiu $t2, $zero, 0x1
        r.v1 = sext32(0x360000u);                                // 2618c8 lui $v1, 0x36
        WRITE8(lo32(r.v0) + 0x3u, static_cast<uint8_t>(r.t1));   // 2618cc sb $t1, 0x3($v0)
        r.v1 = addiu(r.v1, -28736);                              // 2618d0 addiu $v1, $v1, -0x7040
        r.t5 = addiu(0u, 80);                                    // 2618d4 addiu $t5, $zero, 0x50
        r.a1 = sext32(0x360000u);                                // 2618d8 lui $a1, 0x36
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 2618dc lw $v0, -0x6C60($gp)
        r.a1 = addiu(r.a1, -28688);                              // 2618e0 addiu $a1, $a1, -0x7010
        r.a2 = sext32(0x360000u);                                // 2618e4 lui $a2, 0x36
        r.a3 = sext32(0x360000u);                                // 2618e8 lui $a3, 0x36
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t2));        // 2618ec sh $t2, 0x0($v0)
        r.a0 = addiu(r.v0, 16);                                  // 2618f0 addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.v1));                  // 2618f4 sw $v1, 0x4($v0)
        r.a2 = addiu(r.a2, -28720);                              // 2618f8 addiu $a2, $a2, -0x7030
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 2618fc sw $a0, -0x6C60($gp)
        r.a3 = addiu(r.a3, -28672);                              // 261900 addiu $a3, $a3, -0x7000
        r.v1 = LW(lo32(r.sp) + 0x2c4u);                          // 261904 lw $v1, 0x2C4($sp)
        r.v0 = LB(lo32(r.v1) + 0x2u);                            // 261908 lb $v0, 0x2($v1)
        r.v1 = mult(r.v0, r.t5, r.lo, r.hi);                     // 26190c mult $v1, $v0, $t5
        r.v0 = addu(r.v1, r.t6);                                 // 261910 addu $v0, $v1, $t6
        r.v1 = LB(lo32(r.v0) + 0x1u);                            // 261914 lb $v1, 0x1($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261918 sb $t1, 0x3($a0)
        r.v1 = sll32(r.v1, 6);                                   // 26191c sll $v1, $v1, 6
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261920 lw $v0, -0x6C60($gp)
        r.v1 = addu(r.v1, r.t3);                                 // 261924 addu $v1, $v1, $t3
        r.a0 = addiu(r.v0, 16);                                  // 261928 addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.v1));                  // 26192c sw $v1, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261930 sw $a0, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t4));        // 261934 sh $t4, 0x0($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261938 sb $t1, 0x3($a0)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 26193c lw $v0, -0x6C60($gp)
        r.a0 = addiu(r.v0, 16);                                  // 261940 addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a1));                  // 261944 sw $a1, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261948 sw $a0, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t2));        // 26194c sh $t2, 0x0($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261950 sb $t1, 0x3($a0)
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 261954 lw $v1, -0x6C60($gp)
        WRITE32(lo32(r.v1) + 0x4u, lo32(r.a2));                  // 261958 sw $a2, 0x4($v1)
        r.a0 = addiu(r.v1, 16);                                  // 26195c addiu $a0, $v1, 0x10
        WRITE16(lo32(r.v1), static_cast<uint16_t>(r.t2));        // 261960 sh $t2, 0x0($v1)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261964 sw $a0, -0x6C60($gp)
        r.a1 = LW(lo32(r.sp) + 0x2c4u);                          // 261968 lw $a1, 0x2C4($sp)
        r.v0 = LB(lo32(r.a1) + 0x3u);                            // 26196c lb $v0, 0x3($a1)
        r.v1 = mult(r.v0, r.t5, r.lo, r.hi);                     // 261970 mult $v1, $v0, $t5
        r.v0 = addu(r.v1, r.t6);                                 // 261974 addu $v0, $v1, $t6
        r.v1 = LB(lo32(r.v0) + 0x1u);                            // 261978 lb $v1, 0x1($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 26197c sb $t1, 0x3($a0)
        r.v1 = sll32(r.v1, 6);                                   // 261980 sll $v1, $v1, 6
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261984 lw $v0, -0x6C60($gp)
        r.v1 = addu(r.v1, r.t3);                                 // 261988 addu $v1, $v1, $t3
        r.a0 = addiu(r.v0, 16);                                  // 26198c addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.v1));                  // 261990 sw $v1, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261994 sw $a0, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t4));        // 261998 sh $t4, 0x0($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 26199c sb $t1, 0x3($a0)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 2619a0 lw $v0, -0x6C60($gp)
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a3));                  // 2619a4 sw $a3, 0x4($v0)
        r.v1 = addiu(r.v0, 16);                                  // 2619a8 addiu $v1, $v0, 0x10
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t2));        // 2619ac sh $t2, 0x0($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 2619b0 sw $v1, -0x6C60($gp)
        r.v0 = LB(lo32(r.a1) + 0x1u);                            // 2619b4 lb $v0, 0x1($a1)
        t = neg64(r.v0);                                         // 2619b8 bltz $v0, . + 4 + (0x1A << 2)
        r.v0 = sext32(0x360000u);                                // 2619bc lui $v0, 0x36
        if (t) goto L_261a24;
        WRITE8(lo32(r.v1) + 0x3u, static_cast<uint8_t>(r.t1));   // 2619c0 sb $t1, 0x3($v1)
        r.v0 = addiu(r.v0, -28704);                              // 2619c4 addiu $v0, $v0, -0x7020
        r.a1 = sext32(0x360000u);                                // 2619c8 lui $a1, 0x36
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 2619cc lw $v1, -0x6C60($gp)
        r.a1 = addiu(r.a1, -28656);                              // 2619d0 addiu $a1, $a1, -0x6FF0
        WRITE32(lo32(r.v1) + 0x4u, lo32(r.v0));                  // 2619d4 sw $v0, 0x4($v1)
        r.a0 = addiu(r.v1, 16);                                  // 2619d8 addiu $a0, $v1, 0x10
        WRITE16(lo32(r.v1), static_cast<uint16_t>(r.t2));        // 2619dc sh $t2, 0x0($v1)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 2619e0 sw $a0, -0x6C60($gp)
        r.v1 = LW(lo32(r.sp) + 0x2c4u);                          // 2619e4 lw $v1, 0x2C4($sp)
        r.v0 = LB(lo32(r.v1) + 0x1u);                            // 2619e8 lb $v0, 0x1($v1)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 2619ec sb $t1, 0x3($a0)
        r.v0 = sll32(r.v0, 6);                                   // 2619f0 sll $v0, $v0, 6
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 2619f4 lw $v1, -0x6C60($gp)
        r.v0 = addu(r.v0, r.t3);                                 // 2619f8 addu $v0, $v0, $t3
        r.a0 = addiu(r.v1, 16);                                  // 2619fc addiu $a0, $v1, 0x10
        WRITE32(lo32(r.v1) + 0x4u, lo32(r.v0));                  // 261a00 sw $v0, 0x4($v1)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261a04 sw $a0, -0x6C60($gp)
        WRITE16(lo32(r.v1), static_cast<uint16_t>(r.t4));        // 261a08 sh $t4, 0x0($v1)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261a0c sb $t1, 0x3($a0)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261a10 lw $v0, -0x6C60($gp)
        r.v1 = addiu(r.v0, 16);                                  // 261a14 addiu $v1, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a1));                  // 261a18 sw $a1, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 261a1c sw $v1, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t2));        // 261a20 sh $t2, 0x0($v0)
    L_261a24:
        r.a0 = LW(lo32(r.sp) + 0x2b8u);                          // 261a24 lw $a0, 0x2B8($sp)
        r.v0 = LW(lo32(r.a0));                                   // 261a28 lw $v0, 0x0($a0)
        r.v1 = LW(lo32(r.v0) + 0x8u);                            // 261a2c lw $v1, 0x8($v0)
        t = r.v1 == 0u;                                          // 261a30 beqz $v1, . + 4 + (0x76 << 2)
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 261a34 lw $v1, -0x6C60($gp)
        if (t) goto L_261c0c;
        r.v0 = sext32(0x360000u);                                // 261a38 lui $v0, 0x36
        r.v0 = addiu(r.v0, -28864);                              // 261a3c addiu $v0, $v0, -0x70C0
        r.a1 = sext32(0x360000u);                                // 261a40 lui $a1, 0x36
        WRITE8(lo32(r.v1) + 0x3u, static_cast<uint8_t>(r.t1));   // 261a44 sb $t1, 0x3($v1)
        r.a1 = addiu(r.a1, -28784);                              // 261a48 addiu $a1, $a1, -0x7070
        r.a2 = sext32(0x360000u);                                // 261a4c lui $a2, 0x36
        r.a3 = sext32(0x360000u);                                // 261a50 lui $a3, 0x36
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 261a54 lw $v1, -0x6C60($gp)
        r.a2 = addiu(r.a2, -28848);                              // 261a58 addiu $a2, $a2, -0x70B0
        r.t0 = LW(lo32(r.a0) + 0x18u);                           // 261a5c lw $t0, 0x18($a0)
        r.a3 = addiu(r.a3, -28768);                              // 261a60 addiu $a3, $a3, -0x7060
        WRITE32(lo32(r.v1) + 0x4u, lo32(r.v0));                  // 261a64 sw $v0, 0x4($v1)
        r.a0 = addiu(r.v1, 16);                                  // 261a68 addiu $a0, $v1, 0x10
        WRITE16(lo32(r.v1), static_cast<uint16_t>(r.t2));        // 261a6c sh $t2, 0x0($v1)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261a70 sw $a0, -0x6C60($gp)
        r.v1 = LW(lo32(r.sp) + 0x2c4u);                          // 261a74 lw $v1, 0x2C4($sp)
        r.v0 = LB(lo32(r.v1) + 0x2u);                            // 261a78 lb $v0, 0x2($v1)
        r.v1 = mult(r.v0, r.t5, r.lo, r.hi);                     // 261a7c mult $v1, $v0, $t5
        r.v0 = addu(r.v1, r.t6);                                 // 261a80 addu $v0, $v1, $t6
        r.v1 = LB(lo32(r.v0) + 0x1u);                            // 261a84 lb $v1, 0x1($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261a88 sb $t1, 0x3($a0)
        r.v1 = sll32(r.v1, 6);                                   // 261a8c sll $v1, $v1, 6
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261a90 lw $v0, -0x6C60($gp)
        r.v1 = addu(r.v1, r.t0);                                 // 261a94 addu $v1, $v1, $t0
        r.a0 = addiu(r.v0, 16);                                  // 261a98 addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.v1));                  // 261a9c sw $v1, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261aa0 sw $a0, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t4));        // 261aa4 sh $t4, 0x0($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261aa8 sb $t1, 0x3($a0)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261aac lw $v0, -0x6C60($gp)
        r.a0 = addiu(r.v0, 16);                                  // 261ab0 addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a1));                  // 261ab4 sw $a1, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261ab8 sw $a0, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t2));        // 261abc sh $t2, 0x0($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261ac0 sb $t1, 0x3($a0)
        r.a0 = LW(lo32(r.sp) + 0x2b8u);                          // 261ac4 lw $a0, 0x2B8($sp)
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 261ac8 lw $v1, -0x6C60($gp)
        r.a1 = LW(lo32(r.a0) + 0x18u);                           // 261acc lw $a1, 0x18($a0)
        WRITE32(lo32(r.v1) + 0x4u, lo32(r.a2));                  // 261ad0 sw $a2, 0x4($v1)
        r.a0 = addiu(r.v1, 16);                                  // 261ad4 addiu $a0, $v1, 0x10
        WRITE16(lo32(r.v1), static_cast<uint16_t>(r.t2));        // 261ad8 sh $t2, 0x0($v1)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261adc sw $a0, -0x6C60($gp)
        r.v1 = LW(lo32(r.sp) + 0x2c4u);                          // 261ae0 lw $v1, 0x2C4($sp)
        r.v0 = LB(lo32(r.v1) + 0x3u);                            // 261ae4 lb $v0, 0x3($v1)
        r.v1 = mult(r.v0, r.t5, r.lo, r.hi);                     // 261ae8 mult $v1, $v0, $t5
        r.v0 = addu(r.v1, r.t6);                                 // 261aec addu $v0, $v1, $t6
        r.v1 = LB(lo32(r.v0) + 0x1u);                            // 261af0 lb $v1, 0x1($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261af4 sb $t1, 0x3($a0)
        r.v1 = sll32(r.v1, 6);                                   // 261af8 sll $v1, $v1, 6
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261afc lw $v0, -0x6C60($gp)
        r.v1 = addu(r.v1, r.a1);                                 // 261b00 addu $v1, $v1, $a1
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.v1));                  // 261b04 sw $v1, 0x4($v0)
        r.a0 = addiu(r.v0, 16);                                  // 261b08 addiu $a0, $v0, 0x10
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261b0c sw $a0, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t4));        // 261b10 sh $t4, 0x0($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261b14 sb $t1, 0x3($a0)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261b18 lw $v0, -0x6C60($gp)
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a3));                  // 261b1c sw $a3, 0x4($v0)
        r.v1 = addiu(r.v0, 16);                                  // 261b20 addiu $v1, $v0, 0x10
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t2));        // 261b24 sh $t2, 0x0($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 261b28 sw $v1, -0x6C60($gp)
        r.a0 = LW(lo32(r.sp) + 0x2c4u);                          // 261b2c lw $a0, 0x2C4($sp)
        r.v0 = LB(lo32(r.a0) + 0x1u);                            // 261b30 lb $v0, 0x1($a0)
        t = neg64(r.v0);                                         // 261b34 bltz $v0, . + 4 + (0x1C << 2)
        r.v0 = sext32(0x360000u);                                // 261b38 lui $v0, 0x36
        if (t) goto L_261ba8;
        WRITE8(lo32(r.v1) + 0x3u, static_cast<uint8_t>(r.t1));   // 261b3c sb $t1, 0x3($v1)
        r.v0 = addiu(r.v0, -28832);                              // 261b40 addiu $v0, $v0, -0x70A0
        r.a1 = sext32(0x360000u);                                // 261b44 lui $a1, 0x36
        r.a0 = LW(lo32(r.sp) + 0x2b8u);                          // 261b48 lw $a0, 0x2B8($sp)
        r.a1 = addiu(r.a1, -28752);                              // 261b4c addiu $a1, $a1, -0x7050
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 261b50 lw $v1, -0x6C60($gp)
        r.a2 = LW(lo32(r.a0) + 0x18u);                           // 261b54 lw $a2, 0x18($a0)
        WRITE32(lo32(r.v1) + 0x4u, lo32(r.v0));                  // 261b58 sw $v0, 0x4($v1)
        r.a0 = addiu(r.v1, 16);                                  // 261b5c addiu $a0, $v1, 0x10
        WRITE16(lo32(r.v1), static_cast<uint16_t>(r.t2));        // 261b60 sh $t2, 0x0($v1)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261b64 sw $a0, -0x6C60($gp)
        r.v1 = LW(lo32(r.sp) + 0x2c4u);                          // 261b68 lw $v1, 0x2C4($sp)
        r.v0 = LB(lo32(r.v1) + 0x1u);                            // 261b6c lb $v0, 0x1($v1)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261b70 sb $t1, 0x3($a0)
        r.v0 = sll32(r.v0, 6);                                   // 261b74 sll $v0, $v0, 6
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 261b78 lw $v1, -0x6C60($gp)
        r.v0 = addu(r.v0, r.a2);                                 // 261b7c addu $v0, $v0, $a2
        r.a0 = addiu(r.v1, 16);                                  // 261b80 addiu $a0, $v1, 0x10
        WRITE32(lo32(r.v1) + 0x4u, lo32(r.v0));                  // 261b84 sw $v0, 0x4($v1)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261b88 sw $a0, -0x6C60($gp)
        WRITE16(lo32(r.v1), static_cast<uint16_t>(r.t4));        // 261b8c sh $t4, 0x0($v1)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261b90 sb $t1, 0x3($a0)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261b94 lw $v0, -0x6C60($gp)
        r.v1 = addiu(r.v0, 16);                                  // 261b98 addiu $v1, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a1));                  // 261b9c sw $a1, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 261ba0 sw $v1, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t2));        // 261ba4 sh $t2, 0x0($v0)
    L_261ba8:
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261ba8 lw $v0, -0x6C60($gp)
        r.v1 = sext32(0x360000u);                                // 261bac lui $v1, 0x36
        r.v1 = addiu(r.v1, -28816);                              // 261bb0 addiu $v1, $v1, -0x7090
        r.a1 = sext32(0x360000u);                                // 261bb4 lui $a1, 0x36
        WRITE8(lo32(r.v0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261bb8 sb $t1, 0x3($v0)
        r.a1 = addiu(r.a1, -28800);                              // 261bbc addiu $a1, $a1, -0x7080
        r.a0 = LW(lo32(r.sp) + 0x2b8u);                          // 261bc0 lw $a0, 0x2B8($sp)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261bc4 lw $v0, -0x6C60($gp)
        r.a2 = LW(lo32(r.a0) + 0x1cu);                           // 261bc8 lw $a2, 0x1C($a0)
        r.a0 = addiu(r.v0, 16);                                  // 261bcc addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.v1));                  // 261bd0 sw $v1, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261bd4 sw $a0, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t2));        // 261bd8 sh $t2, 0x0($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261bdc sb $t1, 0x3($a0)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261be0 lw $v0, -0x6C60($gp)
        r.v1 = addiu(r.v0, 16);                                  // 261be4 addiu $v1, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a2));                  // 261be8 sw $a2, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 261bec sw $v1, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t4));        // 261bf0 sh $t4, 0x0($v0)
        WRITE8(lo32(r.v1) + 0x3u, static_cast<uint8_t>(r.t1));   // 261bf4 sb $t1, 0x3($v1)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261bf8 lw $v0, -0x6C60($gp)
        r.v1 = addiu(r.v0, 16);                                  // 261bfc addiu $v1, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a1));                  // 261c00 sw $a1, 0x4($v0)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t2));        // 261c04 sh $t2, 0x0($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 261c08 sw $v1, -0x6C60($gp)
    L_261c0c:
        r.a1 = LW(lo32(r.sp) + 0x2d4u);                          // 261c0c lw $a1, 0x2D4($sp)
        t = r.a1 != 0u;                                          // 261c10 bnez $a1, . + 4 + (0xC << 2)
        r.v1 = LW(lo32(r.sp) + 0x2b8u);                          // 261c14 lw $v1, 0x2B8($sp)
        if (t) goto L_261c44;
        r.t4 = LW(lo32(r.sp) + 0x2d0u);                          // 261c18 lw $t4, 0x2D0($sp)
        t = r.t4 == 0u;                                          // 261c1c beqz $t4, . + 4 + (0x9 << 2)
        r.a0 = LW(lo32(r.gp) - 0x6c60u);                         // 261c20 lw $a0, -0x6C60($gp)
        if (t) goto L_261c44;
        r.v0 = addiu(0u, 80);                                    // 261c24 addiu $v0, $zero, 0x50
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.v0));   // 261c28 sb $v0, 0x3($a0)
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 261c2c lw $v1, -0x6C60($gp)
        r.v0 = addiu(r.v1, 16);                                  // 261c30 addiu $v0, $v1, 0x10
        WRITE32(lo32(r.v1) + 0x4u, lo32(r.t4));                  // 261c34 sw $t4, 0x4($v1)
    L_261c38:
        TS_RENDER_COUNT(++g_renderCounters.partPrecalc);
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v0));               // 261c38 sw $v0, -0x6C60($gp)
        // 261c3c b . + 4 + (0xC3 << 2)
        WRITE16(lo32(r.v1), static_cast<uint16_t>(0u));          // 261c40 sh $zero, 0x0($v1)
        goto L_261f4c;
    L_261c44:
        r.v0 = LW(lo32(r.v1) + 0x11cu);                          // 261c44 lw $v0, 0x11C($v1)
        t = r.v0 == 0u;                                          // 261c48 beqz $v0, . + 4 + (0x12 << 2)
        r.a2 = addiu(0u, 80);                                    // 261c4c addiu $a2, $zero, 0x50
        if (t) goto L_261c94;
        r.v0 = LW(lo32(r.v1) + 0x120u);                          // 261c50 lw $v0, 0x120($v1)
        r.a0 = LW(lo32(r.sp) + 0x2d8u);                          // 261c54 lw $a0, 0x2D8($sp)
        r.v0 = sll32(r.v0, 3);                                   // 261c58 sll $v0, $v0, 3
        r.t4 = LW(lo32(r.sp) + 0x2dcu);                          // 261c5c lw $t4, 0x2DC($sp)
        r.v0 = addu(r.a0, r.v0);                                 // 261c60 addu $v0, $a0, $v0
        r.a1 = LW(lo32(r.gp) - 0x6c60u);                         // 261c64 lw $a1, -0x6C60($gp)
        r.v0 = addu(r.v1, r.v0);                                 // 261c68 addu $v0, $v1, $v0
        r.v1 = LW(lo32(r.v0) + 0xfcu);                           // 261c6c lw $v1, 0xFC($v0)
        r.v1 = addu(r.t4, r.v1);                                 // 261c70 addu $v1, $t4, $v1
    L_261c74:
        TS_RENDER_COUNT(++g_renderCounters.partDbuf);
        r.a0 = LW(lo32(r.v1));                                   // 261c74 lw $a0, 0x0($v1)
        WRITE8(lo32(r.a1) + 0x3u, static_cast<uint8_t>(r.a2));   // 261c78 sb $a2, 0x3($a1)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261c7c lw $v0, -0x6C60($gp)
        r.v1 = addiu(r.v0, 16);                                  // 261c80 addiu $v1, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a0));                  // 261c84 sw $a0, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 261c88 sw $v1, -0x6C60($gp)
        // 261c8c b . + 4 + (0xAF << 2)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(0u));          // 261c90 sh $zero, 0x0($v0)
        goto L_261f4c;
    L_261c94:
        r.v0 = LW(lo32(r.s1) + 0x14u);                           // 261c94 lw $v0, 0x14($s1)
        t = neg64(r.v0);                                         // 261c98 bltz $v0, . + 4 + (0xAD << 2)
        r.t4 = LW(lo32(r.sp) + 0x2c0u);                          // 261c9c lw $t4, 0x2C0($sp)
        if (t) goto L_261f50;
        r.t5 = sext32(0x380000u);                                // 261ca0 lui $t5, 0x38
        TS_RENDER_COUNT(++g_renderCounters.partRef[2]);
    L_261ca8:
        TS_RENDER_COUNT(++g_renderCounters.partRefBatches);
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 261ca8 lw $v1, -0x6C60($gp)
        r.t1 = addiu(0u, 48);                                    // 261cac addiu $t1, $zero, 0x30
        r.v0 = addiu(0u, 96);                                    // 261cb0 addiu $v0, $zero, 0x60
        r.t3 = addiu(0u, 1);                                     // 261cb4 addiu $t3, $zero, 0x1
        WRITE8(lo32(r.v1) + 0x3u, static_cast<uint8_t>(r.t1));   // 261cb8 sb $t1, 0x3($v1)
        r.t2 = sext32(0xffff0000u);                              // 261cbc lui $t2, 0xFFFF
        r.v1 = LW(lo32(r.sp) + 0x2ccu);                          // 261cc0 lw $v1, 0x2CC($sp)
        r.t2 = r.t2 | 0xfffcu;                                   // 261cc4 ori $t2, $t2, 0xFFFC
        r.a2 = LW(lo32(r.s1) + 0x8u);                            // 261cc8 lw $a2, 0x8($s1)
        r.t4 = addiu(0u, 12);                                    // 261ccc addiu $t4, $zero, 0xC
        r.lo = r.v1;                                             // 261cd0 mtlo $v1
        r.a1 = LW(lo32(r.s1) + 0x4u);                            // 261cd4 lw $a1, 0x4($s1)
        r.t0 = madd(r.s4, r.v0, r.lo, r.hi);                     // 261cd8 madd $t0, $s4, $v0
        r.v1 = LW(lo32(r.s3));                                   // 261cdc lw $v1, 0x0($s3)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261ce0 lw $v0, -0x6C60($gp)
        r.a1 = sll32(r.a1, 4);                                   // 261ce4 sll $a1, $a1, 4
        r.a1 = addu(r.a1, r.v1);                                 // 261ce8 addu $a1, $a1, $v1
        r.a3 = addiu(0u, 4);                                     // 261cec addiu $a3, $zero, 0x4
        r.a0 = addiu(r.v0, 16);                                  // 261cf0 addiu $a0, $v0, 0x10
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t3));        // 261cf4 sh $t3, 0x0($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261cf8 sw $a0, -0x6C60($gp)
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.t0));                  // 261cfc sw $t0, 0x4($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261d00 sb $t1, 0x3($a0)
        r.t0 = addiu(r.t0, 16);                                  // 261d04 addiu $t0, $t0, 0x10
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261d08 lw $v0, -0x6C60($gp)
        r.a0 = addiu(r.v0, 16);                                  // 261d0c addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a1));                  // 261d10 sw $a1, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261d14 sw $a0, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.a2));        // 261d18 sh $a2, 0x0($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261d1c sb $t1, 0x3($a0)
        r.v0 = LW(lo32(r.s1) + 0x10u);                           // 261d20 lw $v0, 0x10($s1)
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 261d24 lw $v1, -0x6C60($gp)
        r.v0 = addiu(r.v0, 3);                                   // 261d28 addiu $v0, $v0, 0x3
        r.a1 = LW(lo32(r.s1) + 0xcu);                            // 261d2c lw $a1, 0xC($s1)
        WRITE32(lo32(r.v1) + 0x4u, lo32(r.t0));                  // 261d30 sw $t0, 0x4($v1)
        r.a0 = addiu(r.v1, 16);                                  // 261d34 addiu $a0, $v1, 0x10
        WRITE16(lo32(r.v1), static_cast<uint16_t>(r.t3));        // 261d38 sh $t3, 0x0($v1)
        r.v0 = r.v0 & r.t2;                                      // 261d3c and $v0, $v0, $t2
        r.v1 = sll32(r.v0, 1);                                   // 261d40 sll $v1, $v0, 1
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261d44 sw $a0, -0x6C60($gp)
        r.v1 = addu(r.v1, r.v0);                                 // 261d48 addu $v1, $v1, $v0
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261d4c sb $t1, 0x3($a0)
        r.v0 = mult(r.a1, r.t4, r.lo, r.hi);                     // 261d50 mult $v0, $a1, $t4
        r.v1 = srl32(r.v1, 2);                                   // 261d54 srl $v1, $v1, 2
        r.t0 = addiu(r.t0, 16);                                  // 261d58 addiu $t0, $t0, 0x10
        r.a1 = addu(r.v0, r.fp);                                 // 261d5c addu $a1, $v0, $fp
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261d60 lw $v0, -0x6C60($gp)
        r.a0 = addiu(r.v0, 16);                                  // 261d64 addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a1));                  // 261d68 sw $a1, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261d6c sw $a0, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.v1));        // 261d70 sh $v1, 0x0($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261d74 sb $t1, 0x3($a0)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261d78 lw $v0, -0x6C60($gp)
        r.a0 = LW(lo32(r.s3) + 0x10u);                           // 261d7c lw $a0, 0x10($s3)
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.t0));                  // 261d80 sw $t0, 0x4($v0)
        r.a2 = addiu(r.v0, 16);                                  // 261d84 addiu $a2, $v0, 0x10
        r.a1 = LW(lo32(r.s1) + 0xcu);                            // 261d88 lw $a1, 0xC($s1)
        r.t0 = addiu(r.t0, 16);                                  // 261d8c addiu $t0, $t0, 0x10
        r.v1 = LW(lo32(r.s1) + 0x10u);                           // 261d90 lw $v1, 0x10($s1)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t3));        // 261d94 sh $t3, 0x0($v0)
        r.a1 = sll32(r.a1, 2);                                   // 261d98 sll $a1, $a1, 2
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a2));               // 261d9c sw $a2, -0x6C60($gp)
        r.a1 = addu(r.a1, r.a0);                                 // 261da0 addu $a1, $a1, $a0
        WRITE8(lo32(r.a2) + 0x3u, static_cast<uint8_t>(r.t1));   // 261da4 sb $t1, 0x3($a2)
        r.v1 = addiu(r.v1, 3);                                   // 261da8 addiu $v1, $v1, 0x3
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261dac lw $v0, -0x6C60($gp)
        r.v1 = sra32(r.v1, 2);                                   // 261db0 sra $v1, $v1, 2
        r.a0 = addiu(r.v0, 16);                                  // 261db4 addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a1));                  // 261db8 sw $a1, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261dbc sw $a0, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.v1));        // 261dc0 sh $v1, 0x0($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261dc4 sb $t1, 0x3($a0)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261dc8 lw $v0, -0x6C60($gp)
        r.a1 = LW(lo32(r.s1) + 0x10u);                           // 261dcc lw $a1, 0x10($s1)
        r.a0 = addiu(r.v0, 16);                                  // 261dd0 addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.t0));                  // 261dd4 sw $t0, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261dd8 sw $a0, -0x6C60($gp)
        r.t0 = addiu(r.t0, 16);                                  // 261ddc addiu $t0, $t0, 0x10
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t3));        // 261de0 sh $t3, 0x0($v0)
        r.v1 = LW(lo32(r.s1) + 0xcu);                            // 261de4 lw $v1, 0xC($s1)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261de8 sb $t1, 0x3($a0)
        r.v1 = sll32(r.v1, 4);                                   // 261dec sll $v1, $v1, 4
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261df0 lw $v0, -0x6C60($gp)
        r.v1 = addu(r.v1, r.s7);                                 // 261df4 addu $v1, $v1, $s7
        r.a0 = addiu(r.v0, 16);                                  // 261df8 addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.v1));                  // 261dfc sw $v1, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261e00 sw $a0, -0x6C60($gp)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.a1));        // 261e04 sh $a1, 0x0($v0)
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261e08 sb $t1, 0x3($a0)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261e0c lw $v0, -0x6C60($gp)
        r.a0 = LW(lo32(r.s1) + 0xcu);                            // 261e10 lw $a0, 0xC($s1)
        r.a1 = addiu(r.v0, 16);                                  // 261e14 addiu $a1, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.t0));                  // 261e18 sw $t0, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a1));               // 261e1c sw $a1, -0x6C60($gp)
        r.a0 = sll32(r.a0, 2);                                   // 261e20 sll $a0, $a0, 2
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t3));        // 261e24 sh $t3, 0x0($v0)
        r.a0 = addu(r.a0, r.s6);                                 // 261e28 addu $a0, $a0, $s6
        r.v1 = LW(lo32(r.s1) + 0x10u);                           // 261e2c lw $v1, 0x10($s1)
        r.t0 = addiu(r.t0, 16);                                  // 261e30 addiu $t0, $t0, 0x10
        WRITE8(lo32(r.a1) + 0x3u, static_cast<uint8_t>(r.t1));   // 261e34 sb $t1, 0x3($a1)
        r.v1 = addiu(r.v1, 3);                                   // 261e38 addiu $v1, $v1, 0x3
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261e3c lw $v0, -0x6C60($gp)
        r.v1 = sra32(r.v1, 2);                                   // 261e40 sra $v1, $v1, 2
        r.a1 = LW(lo32(r.s1) + 0x14u);                           // 261e44 lw $a1, 0x14($s1)
        r.a2 = addiu(r.v0, 16);                                  // 261e48 addiu $a2, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a0));                  // 261e4c sw $a0, 0x4($v0)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.v1));        // 261e50 sh $v1, 0x0($v0)
        t = r.a1 != r.a3;                                        // 261e54 bne $a1, $a3, . + 4 + (0x17 << 2)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a2));               // 261e58 sw $a2, -0x6C60($gp)
        if (t) goto L_261eb4;
        WRITE8(lo32(r.a2) + 0x3u, static_cast<uint8_t>(r.t1));   // 261e5c sb $t1, 0x3($a2)
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 261e60 lw $v1, -0x6C60($gp)
        r.v0 = LW(lo32(r.s1) + 0x10u);                           // 261e64 lw $v0, 0x10($s1)
        r.a1 = LW(lo32(r.s1) + 0xcu);                            // 261e68 lw $a1, 0xC($s1)
        r.a2 = addiu(r.v1, 16);                                  // 261e6c addiu $a2, $v1, 0x10
        r.v0 = addiu(r.v0, 3);                                   // 261e70 addiu $v0, $v0, 0x3
        WRITE32(lo32(r.v1) + 0x4u, lo32(r.t0));                  // 261e74 sw $t0, 0x4($v1)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a2));               // 261e78 sw $a2, -0x6C60($gp)
        r.v0 = r.v0 & r.t2;                                      // 261e7c and $v0, $v0, $t2
        WRITE16(lo32(r.v1), static_cast<uint16_t>(r.t3));        // 261e80 sh $t3, 0x0($v1)
        r.a1 = mult(r.a1, r.t4, r.lo, r.hi);                     // 261e84 mult $a1, $a1, $t4
        r.a0 = LW(lo32(r.s3) + 0x14u);                           // 261e88 lw $a0, 0x14($s3)
        r.v1 = sll32(r.v0, 1);                                   // 261e8c sll $v1, $v0, 1
        WRITE8(lo32(r.a2) + 0x3u, static_cast<uint8_t>(r.t1));   // 261e90 sb $t1, 0x3($a2)
        r.v1 = addu(r.v1, r.v0);                                 // 261e94 addu $v1, $v1, $v0
        r.v1 = srl32(r.v1, 2);                                   // 261e98 srl $v1, $v1, 2
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261e9c lw $v0, -0x6C60($gp)
        r.a1 = addu(r.a1, r.a0);                                 // 261ea0 addu $a1, $a1, $a0
        r.a0 = addiu(r.v0, 16);                                  // 261ea4 addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a1));                  // 261ea8 sw $a1, 0x4($v0)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.v1));        // 261eac sh $v1, 0x0($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261eb0 sw $a0, -0x6C60($gp)
    L_261eb4:
        r.v1 = LW(lo32(r.s1));                                   // 261eb4 lw $v1, 0x0($s1)
        t = neg64(r.v1);                                         // 261eb8 bltz $v1, . + 4 + (0x15 << 2)
        r.a1 = LW(lo32(r.sp) + 0x2c8u);                          // 261ebc lw $a1, 0x2C8($sp)
        if (t) goto L_261f10;
        r.v1 = sll32(r.v1, 4);                                   // 261ec0 sll $v1, $v1, 4
        r.a0 = addiu(0u, -1);                                    // 261ec4 addiu $a0, $zero, -0x1
        r.a3 = addiu(0u, 40);                                    // 261ec8 addiu $a3, $zero, 0x28
        r.v1 = addu(r.v1, r.a1);                                 // 261ecc addu $v1, $v1, $a1
        r.a2 = LW(lo32(r.gp) - 0x6c60u);                         // 261ed0 lw $a2, -0x6C60($gp)
        r.v0 = LW(lo32(r.v1));                                   // 261ed4 lw $v0, 0x0($v1)
        r.t0 = addiu(0u, 8);                                     // 261ed8 addiu $t0, $zero, 0x8
        r.a1 = LW(lo32(r.gp) - 0x4b68u);                         // 261edc lw $a1, -0x4B68($gp)
        r.a0 = slt(r.a0, r.v0);                                  // 261ee0 slt $a0, $a0, $v0
        if (r.a0 == 0u) { r.v0 = 0u; zeroHigh(ctx, 2); }         // 261ee4 movz $v0, $zero, $a0
        r.v1 = LW(lo32(r.a1) + 0x4u);                            // 261ee8 lw $v1, 0x4($a1)
        r.v0 = mult(r.v0, r.a3, r.lo, r.hi);                     // 261eec mult $v0, $v0, $a3
        r.v0 = addu(r.v0, r.v1);                                 // 261ef0 addu $v0, $v0, $v1
        r.a0 = LW(lo32(r.v0) + 0x20u);                           // 261ef4 lw $a0, 0x20($v0)
        WRITE8(lo32(r.a2) + 0x3u, static_cast<uint8_t>(r.t1));   // 261ef8 sb $t1, 0x3($a2)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261efc lw $v0, -0x6C60($gp)
        r.v1 = addiu(r.v0, 16);                                  // 261f00 addiu $v1, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a0));                  // 261f04 sw $a0, 0x4($v0)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t0));        // 261f08 sh $t0, 0x0($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 261f0c sw $v1, -0x6C60($gp)
    L_261f10:
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261f10 lw $v0, -0x6C60($gp)
        r.a0 = addiu(r.t5, 1120);                                // 261f14 addiu $a0, $t5, 0x460
        r.v1 = LW(lo32(r.s1) + 0x14u);                           // 261f18 lw $v1, 0x14($s1)
        r.s4 = addiu(r.s4, 1);                                   // 261f1c addiu $s4, $s4, 0x1
        WRITE8(lo32(r.v0) + 0x3u, static_cast<uint8_t>(r.t1));   // 261f20 sb $t1, 0x3($v0)
        r.s1 = addiu(r.s1, 24);                                  // 261f24 addiu $s1, $s1, 0x18
        r.v1 = sll32(r.v1, 5);                                   // 261f28 sll $v1, $v1, 5
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261f2c lw $v0, -0x6C60($gp)
        r.v1 = addu(r.v1, r.a0);                                 // 261f30 addu $v1, $v1, $a0
        r.a1 = LW(lo32(r.s1) + 0x14u);                           // 261f34 lw $a1, 0x14($s1)
        r.a0 = addiu(r.v0, 16);                                  // 261f38 addiu $a0, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.v1));                  // 261f3c sw $v1, 0x4($v0)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(r.t3));        // 261f40 sh $t3, 0x0($v0)
        t = !neg64(r.a1);                                        // 261f44 bgez $a1, . + 4 + (-0xA8 << 2)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261f48 sw $a0, -0x6C60($gp)
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x261ca8u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(s1, 17); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); ctx->lo = r.lo; ctx->hi = r.hi; return false; }
            goto L_261ca8;
        }
    L_261f4c:
        r.t4 = LW(lo32(r.sp) + 0x2c0u);                          // 261f4c lw $t4, 0x2C0($sp)
    L_261f50:
        t = r.t4 != 0u;                                          // 261f50 bnez $t4, . + 4 + (0x2A7 << 2)
        r.a0 = LW(lo32(r.sp) + 0x2c4u);                          // 261f54 lw $a0, 0x2C4($sp)
        if (t) goto L_2629f0;
        r.v1 = LW(lo32(r.sp) + 0x2c4u);                          // 261f58 lw $v1, 0x2C4($sp)
        r.v0 = LB(lo32(r.v1) + 0x6u);                            // 261f5c lb $v0, 0x6($v1)
        t = lez64(r.v0);                                         // 261f60 blez $v0, . + 4 + (0x2A3 << 2)
        r.a1 = LBU(lo32(r.v1) + 0x6u);                           // 261f64 lbu $a1, 0x6($v1)
        if (t) goto L_2629f0;
        r.v1 = LW(lo32(r.s5) + 0x8cu);                           // 261f68 lw $v1, 0x8C($s5)
        r.a0 = LW(lo32(r.sp) + 0x2c4u);                          // 261f6c lw $a0, 0x2C4($sp)
        r.v0 = sltu(r.v1, sext32(5u));                           // 261f70 sltiu $v0, $v1, 0x5
        t = r.v0 == 0u;                                          // 261f74 beqz $v0, . + 4 + (0xB6 << 2)
        r.s2 = LW(lo32(r.a0) + 0x10u);                           // 261f78 lw $s2, 0x10($a0)
        if (t) goto L_262250;
        r.v0 = sext32(0x3a0000u);                                // 261f7c lui $v0, 0x3A
        r.v1 = sll32(r.v1, 2);                                   // 261f80 sll $v1, $v1, 2
        r.v0 = addiu(r.v0, 9920);                                // 261f84 addiu $v0, $v0, 0x26C0
        r.v1 = addu(r.v1, r.v0);                                 // 261f88 addu $v1, $v1, $v0
        r.a0 = LW(lo32(r.v1));                                   // 261f8c lw $a0, 0x0($v1)
        jt = lo32(r.a0);                                         // 261f90 jr $a0 (jump table)
        switch (jt)
        {
        case 0x261f98u: goto L_261f98;
        case 0x261fbcu: goto L_261fbc;
        case 0x262040u: goto L_262040;
        case 0x2620ecu: goto L_2620ec;
        case 0x262190u: goto L_262190;
        default:
            STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); ctx->lo = r.lo; ctx->hi = r.hi;
            runtime->dispatchGuestBranch(rdram, ctx, jt, 0x261f90u, 0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR");
            return false;
        }
    L_261f98:
        r.v0 = LW(lo32(r.s5) + 0x88u);                           // 261f98 lw $v0, 0x88($s5)
        t = r.v0 != 0u;                                          // 261f9c bnez $v0, . + 4 + (0xAD << 2)
        r.v0 = sll32(r.a1, 24);                                  // 261fa0 sll $v0, $a1, 24
        if (t) goto L_262254;
        r.v0 = LW(lo32(r.gp) - 0x4dccu);                         // 261fa4 lw $v0, -0x4DCC($gp)
        r.a0 = addiu(r.sp, 128);                                 // 261fa8 addiu $a0, $sp, 0x80
        r.ra = 0x261fb4u;                                        // 261fac jal func_2D6120
        r.a1 = LW(lo32(r.v0) + 0x6e8u);                          // 261fb0 lw $a1, 0x6E8($v0)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2d6120u, 0x261facu, 0x261fb4u)) return false;
        LOAD_GPR(v1, 3); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_261fb4:
        // 261fb4 b . + 4 + (0xA5 << 2)
        r.t4 = LW(lo32(r.sp) + 0x2c4u);                          // 261fb8 lw $t4, 0x2C4($sp)
        goto L_26224c;
    L_261fbc:
        r.f15 = LWC1(lo32(r.s5) + 0x4cu);                        // 261fbc lwc1 $f15, 0x4C($s5)
        r.a0 = r.sp;                                             // 261fc0 daddu $a0, $sp, $zero
        r.f0 = LWC1(lo32(r.gp) - 0x7c80u);                       // 261fc4 lwc1 $f0, -0x7C80($gp)
        r.at = sext32(0x43340000u);                              // 261fc8 lui $at, 0x4334
        r.f1 = floatOf(lo32(r.at));                              // 261fcc mtc1 $at, $f1
        r.f15 = FPU_MUL_S(r.f15, r.f0);                          // 261fd0 mul.s $f15, $f15, $f0
        r.f12 = LWC1(lo32(r.s5) + 0x30u);                        // 261fd4 lwc1 $f12, 0x30($s5)
        r.f13 = LWC1(lo32(r.s5) + 0x34u);                        // 261fd8 lwc1 $f13, 0x34($s5)
        r.f15 = divS(r.f15, r.f1, r.fcr31);                      // 261fe4 div.s $f15, $f15, $f1
        r.ra = 0x261ff0u;                                        // 261fe8 jal func_2B4C50
        r.f14 = LWC1(lo32(r.s5) + 0x38u);                        // 261fec lwc1 $f14, 0x38($s5)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b4c50u, 0x261fe8u, 0x261ff0u)) return false;
        LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_261ff0:
        r.v1 = LW(lo32(r.s5) + 0x88u);                           // 261ff0 lw $v1, 0x88($s5)
        r.v0 = addiu(0u, 1);                                     // 261ff4 addiu $v0, $zero, 0x1
        t = r.v1 == r.v0;                                        // 261ff8 beq $v1, $v0, . + 4 + (0x5 << 2)
        r.v0 = addiu(0u, 2);                                     // 261ffc addiu $v0, $zero, 0x2
        if (t) goto L_262010;
        t = r.v1 == r.v0;                                        // 262000 beq $v1, $v0, . + 4 + (0xA << 2)
        r.v0 = LW(lo32(r.sp) + 0x2c4u);                          // 262004 lw $v0, 0x2C4($sp)
        if (t) goto L_26202c;
        // 262008 b . + 4 + (0x91 << 2)
        r.a1 = LBU(lo32(r.v0) + 0x6u);                           // 26200c lbu $a1, 0x6($v0)
        goto L_262250;
    L_262010:
        r.v0 = LW(lo32(r.gp) - 0x4dccu);                         // 262010 lw $v0, -0x4DCC($gp)
        r.a0 = addiu(r.sp, 128);                                 // 262014 addiu $a0, $sp, 0x80
        r.a2 = r.sp;                                             // 262018 daddu $a2, $sp, $zero
        r.ra = 0x262024u;                                        // 26201c jal func_2D5E98
        r.a1 = LW(lo32(r.v0) + 0x6e8u);                          // 262020 lw $a1, 0x6E8($v0)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x26201cu, 0x262024u)) return false;
        LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_262024:
        // 262024 b . + 4 + (0x77 << 2)
        r.v1 = LW(lo32(r.sp) + 0x2c4u);                          // 262028 lw $v1, 0x2C4($sp)
        goto L_262204;
    L_26202c:
        r.v0 = LW(lo32(r.gp) - 0x4dccu);                         // 26202c lw $v0, -0x4DCC($gp)
        r.a0 = addiu(r.sp, 128);                                 // 262030 addiu $a0, $sp, 0x80
        r.a2 = r.sp;                                             // 262034 daddu $a2, $sp, $zero
        // 262038 b . + 4 + (0x78 << 2)
        r.a1 = LW(lo32(r.v0) + 0x6e0u);                          // 26203c lw $a1, 0x6E0($v0)
        goto L_26221c;
    L_262040:
        r.f1 = LWC1(lo32(r.gp) - 0x7c7cu);                       // 262040 lwc1 $f1, -0x7C7C($gp)
        r.a0 = r.sp;                                             // 262044 daddu $a0, $sp, $zero
        r.f15 = LWC1(lo32(r.s5) + 0x48u);                        // 262048 lwc1 $f15, 0x48($s5)
        r.f16 = LWC1(lo32(r.s5) + 0x4cu);                        // 26204c lwc1 $f16, 0x4C($s5)
        r.f17 = LWC1(lo32(r.s5) + 0x58u);                        // 262050 lwc1 $f17, 0x58($s5)
        r.f15 = FPU_MUL_S(r.f15, r.f1);                          // 262054 mul.s $f15, $f15, $f1
        r.f16 = FPU_MUL_S(r.f16, r.f1);                          // 262058 mul.s $f16, $f16, $f1
        r.at = sext32(0x43340000u);                              // 26205c lui $at, 0x4334
        r.f0 = floatOf(lo32(r.at));                              // 262060 mtc1 $at, $f0
        r.f17 = FPU_MUL_S(r.f17, r.f1);                          // 262064 mul.s $f17, $f17, $f1
        r.f12 = LWC1(lo32(r.s5) + 0x30u);                        // 262068 lwc1 $f12, 0x30($s5)
        r.f15 = divS(r.f15, r.f0, r.fcr31);                      // 262074 div.s $f15, $f15, $f0
        r.f13 = LWC1(lo32(r.s5) + 0x34u);                        // 262078 lwc1 $f13, 0x34($s5)
        r.f16 = divS(r.f16, r.f0, r.fcr31);                      // 262084 div.s $f16, $f16, $f0
        r.f17 = divS(r.f17, r.f0, r.fcr31);                      // 262090 div.s $f17, $f17, $f0
        r.ra = 0x26209cu;                                        // 262094 jal func_2B4CE0
        r.f14 = LWC1(lo32(r.s5) + 0x38u);                        // 262098 lwc1 $f14, 0x38($s5)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); STORE_F(16); STORE_F(17); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b4ce0u, 0x262094u, 0x26209cu)) return false;
        LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_26209c:
        r.v1 = LW(lo32(r.s5) + 0x88u);                           // 26209c lw $v1, 0x88($s5)
        r.v0 = addiu(0u, 1);                                     // 2620a0 addiu $v0, $zero, 0x1
        t = r.v1 == r.v0;                                        // 2620a4 beq $v1, $v0, . + 4 + (0x5 << 2)
        r.v0 = addiu(0u, 2);                                     // 2620a8 addiu $v0, $zero, 0x2
        if (t) goto L_2620bc;
        t = r.v1 == r.v0;                                        // 2620ac beq $v1, $v0, . + 4 + (0x8 << 2)
        r.t4 = LW(lo32(r.sp) + 0x2c4u);                          // 2620b0 lw $t4, 0x2C4($sp)
        if (t) goto L_2620d0;
        // 2620b4 b . + 4 + (0x66 << 2)
        r.a1 = LBU(lo32(r.t4) + 0x6u);                           // 2620b8 lbu $a1, 0x6($t4)
        goto L_262250;
    L_2620bc:
        r.v0 = LW(lo32(r.gp) - 0x4dccu);                         // 2620bc lw $v0, -0x4DCC($gp)
        r.a0 = addiu(r.sp, 128);                                 // 2620c0 addiu $a0, $sp, 0x80
        r.a2 = r.sp;                                             // 2620c4 daddu $a2, $sp, $zero
        // 2620c8 b . + 4 + (0x2C << 2)
        r.a1 = LW(lo32(r.v0) + 0x6e8u);                          // 2620cc lw $a1, 0x6E8($v0)
        goto L_26217c;
    L_2620d0:
        r.v0 = LW(lo32(r.gp) - 0x4dccu);                         // 2620d0 lw $v0, -0x4DCC($gp)
        r.a0 = addiu(r.sp, 128);                                 // 2620d4 addiu $a0, $sp, 0x80
        r.a2 = r.sp;                                             // 2620d8 daddu $a2, $sp, $zero
        r.ra = 0x2620e4u;                                        // 2620dc jal func_2D5E98
        r.a1 = LW(lo32(r.v0) + 0x6e0u);                          // 2620e0 lw $a1, 0x6E0($v0)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(t4, 12); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x2620dcu, 0x2620e4u)) return false;
        LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2620e4:
        // 2620e4 b . + 4 + (0x47 << 2)
        r.v1 = LW(lo32(r.sp) + 0x2c4u);                          // 2620e8 lw $v1, 0x2C4($sp)
        goto L_262204;
    L_2620ec:
        r.f15 = LWC1(lo32(r.s5) + 0x4cu);                        // 2620ec lwc1 $f15, 0x4C($s5)
        r.a0 = r.sp;                                             // 2620f0 daddu $a0, $sp, $zero
        r.f0 = LWC1(lo32(r.gp) - 0x7c78u);                       // 2620f4 lwc1 $f0, -0x7C78($gp)
        r.at = sext32(0x43340000u);                              // 2620f8 lui $at, 0x4334
        r.f1 = floatOf(lo32(r.at));                              // 2620fc mtc1 $at, $f1
        r.f15 = FPU_MUL_S(r.f15, r.f0);                          // 262100 mul.s $f15, $f15, $f0
        r.f12 = LWC1(lo32(r.s5) + 0x30u);                        // 262104 lwc1 $f12, 0x30($s5)
        r.f13 = LWC1(lo32(r.s5) + 0x34u);                        // 262108 lwc1 $f13, 0x34($s5)
        r.f15 = divS(r.f15, r.f1, r.fcr31);                      // 262114 div.s $f15, $f15, $f1
        r.ra = 0x262120u;                                        // 262118 jal func_2B4C50
        r.f14 = LWC1(lo32(r.s5) + 0x38u);                        // 26211c lwc1 $f14, 0x38($s5)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b4c50u, 0x262118u, 0x262120u)) return false;
        LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_262120:
        r.v1 = LW(lo32(r.s5) + 0x88u);                           // 262120 lw $v1, 0x88($s5)
        r.v0 = addiu(0u, 1);                                     // 262124 addiu $v0, $zero, 0x1
        t = r.v1 == r.v0;                                        // 262128 beq $v1, $v0, . + 4 + (0x5 << 2)
        r.v0 = addiu(0u, 2);                                     // 26212c addiu $v0, $zero, 0x2
        if (t) goto L_262140;
        t = r.v1 == r.v0;                                        // 262130 beq $v1, $v0, . + 4 + (0xE << 2)
        r.a0 = LW(lo32(r.sp) + 0x2c4u);                          // 262134 lw $a0, 0x2C4($sp)
        if (t) goto L_26216c;
        // 262138 b . + 4 + (0x45 << 2)
        r.a1 = LBU(lo32(r.a0) + 0x6u);                           // 26213c lbu $a1, 0x6($a0)
        goto L_262250;
    L_262140:
        r.v0 = LW(lo32(r.gp) - 0x4dccu);                         // 262140 lw $v0, -0x4DCC($gp)
        r.s0 = addiu(r.sp, 64);                                  // 262144 addiu $s0, $sp, 0x40
        r.a0 = r.s0;                                             // 262148 daddu $a0, $s0, $zero
        r.a2 = r.sp;                                             // 26214c daddu $a2, $sp, $zero
        r.ra = 0x262158u;                                        // 262150 jal func_2D5E98
        r.a1 = LW(lo32(r.v0) + 0x6e4u);                          // 262154 lw $a1, 0x6E4($v0)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x262150u, 0x262158u)) return false;
        LOAD_GPR(v1, 3); LOAD_GPR(s0, 16); LOAD_GPR(s5, 21); LOAD_GPR(sp, 29);
    L_262158:
        r.v0 = LW(lo32(r.s5) + 0x20u);                           // 262158 lw $v0, 0x20($s5)
        r.a1 = r.s0;                                             // 26215c daddu $a1, $s0, $zero
        r.a0 = addiu(r.sp, 128);                                 // 262160 addiu $a0, $sp, 0x80
        // 262164 b . + 4 + (0x36 << 2)
        r.a2 = LW(lo32(r.v0) + 0x4u);                            // 262168 lw $a2, 0x4($v0)
        goto L_262240;
    L_26216c:
        r.v0 = LW(lo32(r.s5) + 0x20u);                           // 26216c lw $v0, 0x20($s5)
        r.a0 = addiu(r.sp, 128);                                 // 262170 addiu $a0, $sp, 0x80
        r.a1 = r.sp;                                             // 262174 daddu $a1, $sp, $zero
        r.a2 = LW(lo32(r.v0) + 0x4u);                            // 262178 lw $a2, 0x4($v0)
    L_26217c:
        r.ra = 0x262184u;                                        // 26217c jal func_2D5E98
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x26217cu, 0x262184u)) return false;
        LOAD_GPR(v1, 3); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_262184:
        r.v0 = LW(lo32(r.sp) + 0x2c4u);                          // 262184 lw $v0, 0x2C4($sp)
        // 262188 b . + 4 + (0x31 << 2)
        r.a1 = LBU(lo32(r.v0) + 0x6u);                           // 26218c lbu $a1, 0x6($v0)
        goto L_262250;
    L_262190:
        r.f15 = LWC1(lo32(r.s5) + 0x4cu);                        // 262190 lwc1 $f15, 0x4C($s5)
        r.a0 = r.sp;                                             // 262194 daddu $a0, $sp, $zero
        r.f0 = LWC1(lo32(r.gp) - 0x7c74u);                       // 262198 lwc1 $f0, -0x7C74($gp)
        r.at = sext32(0x43340000u);                              // 26219c lui $at, 0x4334
        r.f1 = floatOf(lo32(r.at));                              // 2621a0 mtc1 $at, $f1
        r.f15 = FPU_MUL_S(r.f15, r.f0);                          // 2621a4 mul.s $f15, $f15, $f0
        r.f12 = LWC1(lo32(r.s5) + 0x30u);                        // 2621a8 lwc1 $f12, 0x30($s5)
        r.f13 = LWC1(lo32(r.s5) + 0x34u);                        // 2621ac lwc1 $f13, 0x34($s5)
        r.f15 = divS(r.f15, r.f1, r.fcr31);                      // 2621b8 div.s $f15, $f15, $f1
        r.ra = 0x2621c4u;                                        // 2621bc jal func_2B4C50
        r.f14 = LWC1(lo32(r.s5) + 0x38u);                        // 2621c0 lwc1 $f14, 0x38($s5)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b4c50u, 0x2621bcu, 0x2621c4u)) return false;
        LOAD_GPR(s5, 21);
    L_2621c4:
        r.v0 = LW(lo32(r.s5) + 0x20u);                           // 2621c4 lw $v0, 0x20($s5)
        r.a1 = addiu(r.s5, 100);                                 // 2621c8 addiu $a1, $s5, 0x64
        r.f12 = LWC1(lo32(r.s5) + 0x5cu);                        // 2621cc lwc1 $f12, 0x5C($s5)
        r.ra = 0x2621d8u;                                        // 2621d0 jal func_2B5C28
        r.a0 = LW(lo32(r.v0) + 0x4u);                            // 2621d4 lw $a0, 0x4($v0)
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x2b5c28u, 0x2621d0u, 0x2621d8u)) return false;
        LOAD_GPR(s5, 21); LOAD_GPR(sp, 29);
    L_2621d8:
        r.v0 = LW(lo32(r.s5) + 0x20u);                           // 2621d8 lw $v0, 0x20($s5)
        r.a0 = r.sp;                                             // 2621dc daddu $a0, $sp, $zero
        r.a1 = r.sp;                                             // 2621e0 daddu $a1, $sp, $zero
        r.ra = 0x2621ecu;                                        // 2621e4 jal func_2D5E98
        r.a2 = LW(lo32(r.v0) + 0x4u);                            // 2621e8 lw $a2, 0x4($v0)
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x2621e4u, 0x2621ecu)) return false;
        LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2621ec:
        r.v1 = LW(lo32(r.s5) + 0x88u);                           // 2621ec lw $v1, 0x88($s5)
        r.v0 = addiu(0u, 1);                                     // 2621f0 addiu $v0, $zero, 0x1
        t = r.v1 == r.v0;                                        // 2621f4 beq $v1, $v0, . + 4 + (0x5 << 2)
        r.v0 = addiu(0u, 2);                                     // 2621f8 addiu $v0, $zero, 0x2
        if (t) goto L_26220c;
        t = r.v1 == r.v0;                                        // 2621fc beq $v1, $v0, . + 4 + (0xC << 2)
        r.v1 = LW(lo32(r.sp) + 0x2c4u);                          // 262200 lw $v1, 0x2C4($sp)
        if (t) goto L_262230;
    L_262204:
        // 262204 b . + 4 + (0x12 << 2)
        r.a1 = LBU(lo32(r.v1) + 0x6u);                           // 262208 lbu $a1, 0x6($v1)
        goto L_262250;
    L_26220c:
        r.v0 = LW(lo32(r.gp) - 0x4dccu);                         // 26220c lw $v0, -0x4DCC($gp)
        r.a0 = addiu(r.sp, 128);                                 // 262210 addiu $a0, $sp, 0x80
        r.a2 = r.sp;                                             // 262214 daddu $a2, $sp, $zero
        r.a1 = LW(lo32(r.v0) + 0x6e8u);                          // 262218 lw $a1, 0x6E8($v0)
    L_26221c:
        r.ra = 0x262224u;                                        // 26221c jal func_2D5E98
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x26221cu, 0x262224u)) return false;
        LOAD_GPR(v1, 3); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_262224:
        r.a0 = LW(lo32(r.sp) + 0x2c4u);                          // 262224 lw $a0, 0x2C4($sp)
        // 262228 b . + 4 + (0x9 << 2)
        r.a1 = LBU(lo32(r.a0) + 0x6u);                           // 26222c lbu $a1, 0x6($a0)
        goto L_262250;
    L_262230:
        r.v0 = LW(lo32(r.gp) - 0x4dccu);                         // 262230 lw $v0, -0x4DCC($gp)
        r.a0 = addiu(r.sp, 128);                                 // 262234 addiu $a0, $sp, 0x80
        r.a2 = r.sp;                                             // 262238 daddu $a2, $sp, $zero
        r.a1 = LW(lo32(r.v0) + 0x6e0u);                          // 26223c lw $a1, 0x6E0($v0)
    L_262240:
        r.ra = 0x262248u;                                        // 262240 jal func_2D5E98
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x262240u, 0x262248u)) return false;
        LOAD_GPR(v1, 3); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_262248:
        r.t4 = LW(lo32(r.sp) + 0x2c4u);                          // 262248 lw $t4, 0x2C4($sp)
    L_26224c:
        r.a1 = LBU(lo32(r.t4) + 0x6u);                           // 26224c lbu $a1, 0x6($t4)
    L_262250:
        r.v0 = sll32(r.a1, 24);                                  // 262250 sll $v0, $a1, 24
    L_262254:
        t = lez64(r.v0);                                         // 262254 blez $v0, . + 4 + (0x1E5 << 2)
        r.s0 = 0u;                                               // 262258 daddu $s0, $zero, $zero
        if (t) goto L_2629ec;
        r.v0 = addiu(r.sp, 192);                                 // 26225c addiu $v0, $sp, 0xC0
        WRITE32(lo32(r.sp) + 0x2e8u, lo32(r.v0));                // 262260 sw $v0, 0x2E8($sp)
    L_262268:
        r.v1 = LW(lo32(r.s2));                                   // 262268 lw $v1, 0x0($s2)
        r.v0 = addiu(0u, 1);                                     // 26226c addiu $v0, $zero, 0x1
        t = r.v1 != r.v0;                                        // 262270 bne $v1, $v0, . + 4 + (0x7 << 2)
        r.a0 = addiu(0u, 1);                                     // 262274 addiu $a0, $zero, 0x1
        if (t) goto L_262290;
        r.v1 = addiu(r.s2, 152);                                 // 262278 addiu $v1, $s2, 0x98
        r.v0 = addiu(0u, 255);                                   // 26227c addiu $v0, $zero, 0xFF
        WRITE32(lo32(r.sp) + 0x2f0u, lo32(r.v1));                // 262280 sw $v1, 0x2F0($sp)
        r.s0 = addiu(r.s0, 1);                                   // 262284 addiu $s0, $s0, 0x1
        // 262288 b . + 4 + (0x1D1 << 2)
        WRITE8(lo32(r.s2) + 0x94u, static_cast<uint8_t>(r.v0));  // 26228c sb $v0, 0x94($s2)
        goto L_2629d0;
    L_262290:
        r.ra = 0x262298u;                                        // 262290 jal func_2A6DB0
        WRITE32(lo32(r.sp) + 0x2e4u, lo32(r.a0));                // 262294 sw $a0, 0x2E4($sp)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(9); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2a6db0u, 0x262290u, 0x262298u)) return false;
        LOAD_GPR(v0, 2); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_262298:
        if (r.v0 == 0u)                                          // 262298 beql $v0, $zero, . + 4 + (0x1CB << 2)
        {
            r.s2 = addiu(r.s2, 152);                                 // 26229c addiu $s2, $s2, 0x98
            goto L_2629c8;
        }
        r.v0 = LW(lo32(r.s5) + 0x20u);                           // 2622a0 lw $v0, 0x20($s5)
        r.v0 = LW(lo32(r.v0) + 0x4u);                            // 2622a4 lw $v0, 0x4($v0)
        t = r.v0 == 0u;                                          // 2622a8 beqz $v0, . + 4 + (0x9 << 2)
        r.a1 = LW(lo32(r.sp) + 0x2bcu);                          // 2622ac lw $a1, 0x2BC($sp)
        if (t) goto L_2622d0;
        r.a0 = LW(lo32(r.sp) + 0x2e8u);                          // 2622b0 lw $a0, 0x2E8($sp)
        r.a2 = sll32(r.a1, 6);                                   // 2622b4 sll $a2, $a1, 6
        r.a2 = addu(r.v0, r.a2);                                 // 2622b8 addu $a2, $v0, $a2
        r.ra = 0x2622c4u;                                        // 2622bc jal func_2D5E98
        r.a1 = addiu(r.sp, 128);                                 // 2622c0 addiu $a1, $sp, 0x80
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x2622bcu, 0x2622c4u)) return false;
        LOAD_GPR(s0, 16); LOAD_GPR(s2, 18); LOAD_GPR(s5, 21); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31;
    L_2622c4:
        r.t4 = LW(lo32(r.sp) + 0x2e8u);                          // 2622c4 lw $t4, 0x2E8($sp)
        // 2622c8 b . + 4 + (0x3 << 2)
        WRITE32(lo32(r.sp) + 0x2e0u, lo32(r.t4));                // 2622cc sw $t4, 0x2E0($sp)
        goto L_2622d8;
    L_2622d0:
        r.v0 = addiu(r.sp, 128);                                 // 2622d0 addiu $v0, $sp, 0x80
        WRITE32(lo32(r.sp) + 0x2e0u, lo32(r.v0));                // 2622d4 sw $v0, 0x2E0($sp)
    L_2622d8:
        r.t5 = LW(lo32(r.s2));                                   // 2622d8 lw $t5, 0x0($s2)
        r.s0 = addiu(r.s0, 1);                                   // 2622dc addiu $s0, $s0, 0x1
        r.v1 = addiu(r.s2, 152);                                 // 2622e0 addiu $v1, $s2, 0x98
        r.s1 = addiu(r.sp, 400);                                 // 2622e4 addiu $s1, $sp, 0x190
        r.t4 = addiu(r.s2, 68);                                  // 2622e8 addiu $t4, $s2, 0x44
        r.t2 = addiu(r.sp, 404);                                 // 2622ec addiu $t2, $sp, 0x194
        r.t3 = addiu(r.s2, 72);                                  // 2622f0 addiu $t3, $s2, 0x48
        r.t0 = addiu(r.sp, 408);                                 // 2622f4 addiu $t0, $sp, 0x198
        r.t1 = addiu(r.s2, 76);                                  // 2622f8 addiu $t1, $s2, 0x4C
        WRITE32(lo32(r.sp) + 0x2ecu, lo32(r.s0));                // 2622fc sw $s0, 0x2EC($sp)
        WRITE32(lo32(r.sp) + 0x2f0u, lo32(r.v1));                // 262300 sw $v1, 0x2F0($sp)
        r.s3 = addiu(r.sp, 256);                                 // 262304 addiu $s3, $sp, 0x100
        r.s0 = addiu(r.sp, 268);                                 // 262308 addiu $s0, $sp, 0x10C
        r.a3 = r.t0;                                             // 26230c daddu $a3, $t0, $zero
        r.a0 = r.t1;                                             // 262310 daddu $a0, $t1, $zero
        r.a2 = r.t2;                                             // 262314 daddu $a2, $t2, $zero
        r.v1 = r.t3;                                             // 262318 daddu $v1, $t3, $zero
        r.a1 = r.s1;                                             // 26231c daddu $a1, $s1, $zero
        r.v0 = r.t4;                                             // 262320 daddu $v0, $t4, $zero
        r.s4 = addiu(0u, 4);                                     // 262324 addiu $s4, $zero, 0x4
    L_262328:
        r.f0 = LWC1(lo32(r.v0));                                 // 262328 lwc1 $f0, 0x0($v0)
        r.s4 = addiu(r.s4, -1);                                  // 26232c addiu $s4, $s4, -0x1
        r.v0 = addiu(r.v0, 12);                                  // 262330 addiu $v0, $v0, 0xC
        SWC1(lo32(r.a1), r.f0);                                  // 262334 swc1 $f0, 0x0($a1)
        r.a1 = addiu(r.a1, 16);                                  // 262338 addiu $a1, $a1, 0x10
        r.f0 = LWC1(lo32(r.v1));                                 // 26233c lwc1 $f0, 0x0($v1)
        r.v1 = addiu(r.v1, 12);                                  // 262340 addiu $v1, $v1, 0xC
        SWC1(lo32(r.a2), r.f0);                                  // 262344 swc1 $f0, 0x0($a2)
        r.a2 = addiu(r.a2, 16);                                  // 262348 addiu $a2, $a2, 0x10
        r.f0 = LWC1(lo32(r.a0));                                 // 26234c lwc1 $f0, 0x0($a0)
        r.a0 = addiu(r.a0, 12);                                  // 262350 addiu $a0, $a0, 0xC
        SWC1(lo32(r.a3), r.f0);                                  // 262354 swc1 $f0, 0x0($a3)
        t = !neg64(r.s4);                                        // 262358 bgez $s4, . + 4 + (-0xD << 2)
        r.a3 = addiu(r.a3, 16);                                  // 26235c addiu $a3, $a3, 0x10
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x262328u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_F(0); return false; }
            goto L_262328;
        }
        r.at = sext32(0x3f000000u);                              // 262360 lui $at, 0x3F00
        r.f2 = floatOf(lo32(r.at));                              // 262364 mtc1 $at, $f2
        r.t0 = addiu(r.t0, 80);                                  // 262368 addiu $t0, $t0, 0x50
        r.a3 = addiu(r.t1, 12);                                  // 26236c addiu $a3, $t1, 0xC
        r.a2 = addiu(r.t2, 80);                                  // 262370 addiu $a2, $t2, 0x50
        r.a1 = addiu(r.t3, 12);                                  // 262374 addiu $a1, $t3, 0xC
        r.a0 = addiu(r.t4, 12);                                  // 262378 addiu $a0, $t4, 0xC
        r.s4 = 0u;                                               // 26237c daddu $s4, $zero, $zero
        r.v1 = addiu(r.s1, 80);                                  // 262380 addiu $v1, $s1, 0x50
    L_262388:
        r.f0 = LWC1(lo32(r.a0));                                 // 262388 lwc1 $f0, 0x0($a0)
        r.s4 = addiu(r.s4, 1);                                   // 26238c addiu $s4, $s4, 0x1
        r.f1 = LWC1(lo32(r.s2) + 0x44u);                         // 262390 lwc1 $f1, 0x44($s2)
        r.a0 = addiu(r.a0, 12);                                  // 262394 addiu $a0, $a0, 0xC
        r.v0 = slti(r.s4, 4);                                    // 262398 slti $v0, $s4, 0x4
        r.f0 = FPU_SUB_S(r.f0, r.f1);                            // 26239c sub.s $f0, $f0, $f1
        r.f0 = FPU_MUL_S(r.f0, r.f2);                            // 2623a0 mul.s $f0, $f0, $f2
        r.f1 = FPU_ADD_S(r.f1, r.f0);                            // 2623a4 add.s $f1, $f1, $f0
        SWC1(lo32(r.v1), r.f1);                                  // 2623a8 swc1 $f1, 0x0($v1)
        r.v1 = addiu(r.v1, 16);                                  // 2623ac addiu $v1, $v1, 0x10
        r.f0 = LWC1(lo32(r.a1));                                 // 2623b0 lwc1 $f0, 0x0($a1)
        r.f1 = LWC1(lo32(r.s2) + 0x48u);                         // 2623b4 lwc1 $f1, 0x48($s2)
        r.a1 = addiu(r.a1, 12);                                  // 2623b8 addiu $a1, $a1, 0xC
        r.f0 = FPU_SUB_S(r.f0, r.f1);                            // 2623bc sub.s $f0, $f0, $f1
        r.f0 = FPU_MUL_S(r.f0, r.f2);                            // 2623c0 mul.s $f0, $f0, $f2
        r.f1 = FPU_ADD_S(r.f1, r.f0);                            // 2623c4 add.s $f1, $f1, $f0
        SWC1(lo32(r.a2), r.f1);                                  // 2623c8 swc1 $f1, 0x0($a2)
        r.a2 = addiu(r.a2, 16);                                  // 2623cc addiu $a2, $a2, 0x10
        r.f0 = LWC1(lo32(r.a3));                                 // 2623d0 lwc1 $f0, 0x0($a3)
        r.f1 = LWC1(lo32(r.s2) + 0x4cu);                         // 2623d4 lwc1 $f1, 0x4C($s2)
        r.a3 = addiu(r.a3, 12);                                  // 2623d8 addiu $a3, $a3, 0xC
        r.f0 = FPU_SUB_S(r.f0, r.f1);                            // 2623dc sub.s $f0, $f0, $f1
        r.f0 = FPU_MUL_S(r.f0, r.f2);                            // 2623e0 mul.s $f0, $f0, $f2
        r.f1 = FPU_ADD_S(r.f1, r.f0);                            // 2623e4 add.s $f1, $f1, $f0
        SWC1(lo32(r.t0), r.f1);                                  // 2623e8 swc1 $f1, 0x0($t0)
        t = r.v0 != 0u;                                          // 2623ec bnez $v0, . + 4 + (-0x1A << 2)
        r.t0 = addiu(r.t0, 16);                                  // 2623f0 addiu $t0, $t0, 0x10
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x262388u)) { STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_F(0); STORE_F(1); STORE_F(2); return false; }
            goto L_262388;
        }
        r.v0 = addiu(0u, 2);                                     // 2623f4 addiu $v0, $zero, 0x2
        t = r.t5 == r.v0;                                        // 2623f8 beq $t5, $v0, . + 4 + (0xC << 2)
        r.v0 = addiu(0u, 255);                                   // 2623fc addiu $v0, $zero, 0xFF
        if (t) goto L_26242c;
        r.a1 = addiu(r.sp, 688);                                 // 262400 addiu $a1, $sp, 0x2B0
        WRITE8(lo32(r.s2) + 0x94u, static_cast<uint8_t>(r.v0));  // 262404 sb $v0, 0x94($s2)
        r.a2 = addiu(r.sp, 692);                                 // 262408 addiu $a2, $sp, 0x2B4
        r.ra = 0x262414u;                                        // 26240c jal func_2A7CC8
        r.a0 = LW(lo32(r.s5) + 0xcu);                            // 262410 lw $a0, 0xC($s5)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2);
        if (!guestCall(G_PASS, 0x2a7cc8u, 0x26240cu, 0x262414u)) return false;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31;
    L_262414:
        t = r.v0 == 0u;                                          // 262414 beqz $v0, . + 4 + (0x1A << 2)
        r.v0 = LW(lo32(r.sp) + 0x2b0u);                          // 262418 lw $v0, 0x2B0($sp)
        if (t) goto L_262480;
        WRITE32(lo32(r.s2) + 0x8cu, lo32(r.v0));                 // 26241c sw $v0, 0x8C($s2)
        r.v1 = LBU(lo32(r.sp) + 0x2b4u);                         // 262420 lbu $v1, 0x2B4($sp)
        // 262424 b . + 4 + (0x16 << 2)
        WRITE8(lo32(r.s2) + 0x94u, static_cast<uint8_t>(r.v1));  // 262428 sb $v1, 0x94($s2)
        goto L_262480;
    L_26242c:
        r.v0 = LW(lo32(r.gp) - 0x4ba0u);                         // 26242c lw $v0, -0x4BA0($gp)
        if (lez64(r.v0)) goto L_262480;                          // 262430 blez $v0, . + 4 + (0x13 << 2)
        r.ra = 0x262440u;                                        // 262438 jal func_2B68D0
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2);
        if (!guestCall(G_PASS, 0x2b68d0u, 0x262438u, 0x262440u)) return false;
        LOAD_GPR(v0, 2); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31;
    L_262440:
        r.v0 = r.v0 & 0x1fu;                                     // 262440 andi $v0, $v0, 0x1F
        if (r.v0 != 0u)                                          // 262444 bnel $v0, $zero, . + 4 + (0x4 << 2)
        {
            r.v0 = LBU(lo32(r.s2) + 0x94u);                          // 262448 lbu $v0, 0x94($s2)
            goto L_262458;
        }
        r.v0 = addiu(0u, 160);                                   // 26244c addiu $v0, $zero, 0xA0
        WRITE8(lo32(r.s2) + 0x94u, static_cast<uint8_t>(r.v0));  // 262450 sb $v0, 0x94($s2)
        r.v0 = LBU(lo32(r.s2) + 0x94u);                          // 262454 lbu $v0, 0x94($s2)
    L_262458:
        r.a0 = addiu(0u, -1);                                    // 262458 addiu $a0, $zero, -0x1
        r.v1 = addiu(0u, 8);                                     // 26245c addiu $v1, $zero, 0x8
        r.a1 = addiu(0u, 255);                                   // 262460 addiu $a1, $zero, 0xFF
        r.v0 = addiu(r.v0, 8);                                   // 262464 addiu $v0, $v0, 0x8
        WRITE8(lo32(r.s2) + 0x95u, static_cast<uint8_t>(r.v1));  // 262468 sb $v1, 0x95($s2)
        r.a0 = slt(r.a0, r.v0);                                  // 26246c slt $a0, $a0, $v0
        if (r.a0 == 0u) { r.v0 = 0u; zeroHigh(ctx, 2); }         // 262470 movz $v0, $zero, $a0
        r.v1 = slti(r.v0, 256);                                  // 262474 slti $v1, $v0, 0x100
        if (r.v1 == 0u) { r.v0 = r.a1; copyHigh(ctx, 2, 5); }    // 262478 movz $v0, $a1, $v1
        WRITE8(lo32(r.s2) + 0x94u, static_cast<uint8_t>(r.v0));  // 26247c sb $v0, 0x94($s2)
    L_262480:
        r.at = sext32(0x3f000000u);                              // 262480 lui $at, 0x3F00
        r.f21 = floatOf(lo32(r.at));                             // 262484 mtc1 $at, $f21
        r.fp = r.s0;                                             // 262488 daddu $fp, $s0, $zero
        r.s6 = r.s3;                                             // 26248c daddu $s6, $s3, $zero
        r.s7 = r.s1;                                             // 262490 daddu $s7, $s1, $zero
        r.s4 = 0u;                                               // 262494 daddu $s4, $zero, $zero
    L_262498:
        r.a0 = LW(lo32(r.sp) + 0x2e0u);                          // 262498 lw $a0, 0x2E0($sp)
        r.a1 = r.s7;                                             // 26249c daddu $a1, $s7, $zero
        r.a2 = r.s6;                                             // 2624a0 daddu $a2, $s6, $zero
        r.ra = 0x2624acu;                                        // 2624a4 jal func_2B5570
        r.s0 = sll32(r.s4, 4);                                   // 2624a8 sll $s0, $s4, 4
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(9); STORE_F(21); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2b5570u, 0x2624a4u, 0x2624acu)) return false;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(9); LOAD_F(21); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2624ac:
        r.f2 = LWC1(lo32(r.s6));                                 // 2624ac lwc1 $f2, 0x0($s6)
        r.f3 = LWC1(lo32(r.fp));                                 // 2624b0 lwc1 $f3, 0x0($fp)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f2, r.f3)); // 2624b4 c.lt.s $f2, $f3
        if ((r.fcr31 & kCondition) == 0u)                        // 2624bc bc1fl . + 4 + (0x136 << 2)
        {
            r.s4 = addiu(r.s4, 1);                                   // 2624c0 addiu $s4, $s4, 0x1
            goto L_262998;
        }
        r.f0 = FPU_NEG_S(r.f3);                                  // 2624c4 neg.s $f0, $f3
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f2)); // 2624c8 c.lt.s $f0, $f2
        t = (r.fcr31 & kCondition) == 0u;                        // 2624d0 bc1f . + 4 + (0x130 << 2)
        r.v0 = addu(r.sp, r.s0);                                 // 2624d4 addu $v0, $sp, $s0
        if (t) goto L_262994;
        r.f1 = LWC1(lo32(r.v0) + 0x104u);                        // 2624d8 lwc1 $f1, 0x104($v0)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f3)); // 2624dc c.lt.s $f1, $f3
        if ((r.fcr31 & kCondition) == 0u)                        // 2624e4 bc1fl . + 4 + (0x12C << 2)
        {
            r.s4 = addiu(r.s4, 1);                                   // 2624e8 addiu $s4, $s4, 0x1
            goto L_262998;
        }
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f1)); // 2624ec c.lt.s $f0, $f1
        if ((r.fcr31 & kCondition) == 0u)                        // 2624f4 bc1fl . + 4 + (0x128 << 2)
        {
            r.s4 = addiu(r.s4, 1);                                   // 2624f8 addiu $s4, $s4, 0x1
            goto L_262998;
        }
        r.f9 = LWC1(lo32(r.v0) + 0x108u);                        // 2624fc lwc1 $f9, 0x108($v0)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f9, r.f3)); // 262500 c.lt.s $f9, $f3
        if ((r.fcr31 & kCondition) == 0u)                        // 262508 bc1fl . + 4 + (0x123 << 2)
        {
            r.s4 = addiu(r.s4, 1);                                   // 26250c addiu $s4, $s4, 0x1
            goto L_262998;
        }
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f9)); // 262510 c.lt.s $f0, $f9
        t = (r.fcr31 & kCondition) == 0u;                        // 262518 bc1f . + 4 + (0x11E << 2)
        r.a0 = sext32(0x330000u);                                // 26251c lui $a0, 0x33
        if (t) goto L_262994;
        r.at = sext32(0x3f800000u);                              // 262520 lui $at, 0x3F80
        r.f0 = floatOf(lo32(r.at));                              // 262524 mtc1 $at, $f0
        r.a0 = addiu(r.a0, -26128);                              // 262528 addiu $a0, $a0, -0x6610
        r.v0 = addiu(0u, 12);                                    // 26252c addiu $v0, $zero, 0xC
        r.f0 = divS(r.f0, r.f3, r.fcr31);                        // 262538 div.s $f0, $f0, $f3
        r.f8 = LWC1(lo32(r.gp) - 0x7c70u);                       // 26253c lwc1 $f8, -0x7C70($gp)
        r.f5 = LWC1(lo32(r.a0) + 0x10u);                         // 262540 lwc1 $f5, 0x10($a0)
        r.f5 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f5))); // 262544 cvt.s.w $f5, $f5
        r.v0 = mult(r.s4, r.v0, r.lo, r.hi);                     // 262548 mult $v0, $s4, $v0
        r.f6 = LWC1(lo32(r.a0) + 0x24u);                         // 26254c lwc1 $f6, 0x24($a0)
        r.f6 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f6))); // 262550 cvt.s.w $f6, $f6
        r.at = sext32(0x47000000u);                              // 262554 lui $at, 0x4700
        r.f7 = floatOf(lo32(r.at));                              // 262558 mtc1 $at, $f7
        r.f4 = LWC1(lo32(r.a0) + 0x8u);                          // 26255c lwc1 $f4, 0x8($a0)
        r.f4 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f4))); // 262560 cvt.s.w $f4, $f4
        r.s1 = addiu(r.sp, 544);                                 // 262564 addiu $s1, $sp, 0x220
        r.f3 = LWC1(lo32(r.a0) + 0x1cu);                         // 262568 lwc1 $f3, 0x1C($a0)
        r.f3 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f3))); // 26256c cvt.s.w $f3, $f3
        r.s3 = addiu(r.sp, 548);                                 // 262570 addiu $s3, $sp, 0x224
        r.v1 = addu(r.s1, r.v0);                                 // 262574 addu $v1, $s1, $v0
        r.a0 = addu(r.s3, r.v0);                                 // 262578 addu $a0, $s3, $v0
        r.f2 = FPU_MUL_S(r.f2, r.f0);                            // 26257c mul.s $f2, $f2, $f0
        r.s0 = addiu(r.sp, 552);                                 // 262580 addiu $s0, $sp, 0x228
        r.f1 = FPU_MUL_S(r.f1, r.f0);                            // 262584 mul.s $f1, $f1, $f0
        r.v0 = addu(r.s0, r.v0);                                 // 262588 addu $v0, $s0, $v0
        r.f0 = FPU_MUL_S(r.f9, r.f0);                            // 26258c mul.s $f0, $f9, $f0
        r.a1 = LW(lo32(r.s2));                                   // 262590 lw $a1, 0x0($s2)
        r.f5 = FPU_MUL_S(r.f5, r.f2);                            // 262594 mul.s $f5, $f5, $f2
        r.f6 = FPU_MUL_S(r.f6, r.f1);                            // 262598 mul.s $f6, $f6, $f1
        r.f0 = FPU_MUL_S(r.f0, r.f8);                            // 26259c mul.s $f0, $f0, $f8
        r.f4 = FPU_ADD_S(r.f4, r.f5);                            // 2625a0 add.s $f4, $f4, $f5
        r.f3 = FPU_SUB_S(r.f3, r.f6);                            // 2625a4 sub.s $f3, $f3, $f6
        r.f7 = FPU_SUB_S(r.f7, r.f0);                            // 2625a8 sub.s $f7, $f7, $f0
        SWC1(lo32(r.v1), r.f4);                                  // 2625ac swc1 $f4, 0x0($v1)
        SWC1(lo32(r.a0), r.f3);                                  // 2625b0 swc1 $f3, 0x0($a0)
        t = r.a1 != 0u;                                          // 2625b4 bnez $a1, . + 4 + (0x19 << 2)
        SWC1(lo32(r.v0), r.f7);                                  // 2625b8 swc1 $f7, 0x0($v0)
        if (t) goto L_26261c;
        r.v0 = LW(lo32(r.gp) - 0x4dccu);                         // 2625bc lw $v0, -0x4DCC($gp)
        r.at = sext32(0x42700000u);                              // 2625c0 lui $at, 0x4270
        r.f1 = floatOf(lo32(r.at));                              // 2625c4 mtc1 $at, $f1
        r.f2 = LWC1(lo32(r.v0) + 0x104u);                        // 2625c8 lwc1 $f2, 0x104($v0)
        r.f0 = LWC1(lo32(r.gp) - 0x7c6cu);                       // 2625cc lwc1 $f0, -0x7C6C($gp)
        r.f1 = divS(r.f1, r.f2, r.fcr31);                        // 2625d8 div.s $f1, $f1, $f2
        r.f0 = FPU_MUL_S(r.f7, r.f0);                            // 2625dc mul.s $f0, $f7, $f0
        r.ra = 0x2625e8u;                                        // 2625e0 jal func_2CDDE0
        r.f20 = FPU_MUL_S(r.f0, r.f1);                           // 2625e4 mul.s $f20, $f0, $f1
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s3, 19); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(20); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2cdde0u, 0x2625e0u, 0x2625e8u)) return false;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(20); LOAD_F(21); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2625e8:
        r.v0 = slti(r.v0, 2);                                    // 2625e8 slti $v0, $v0, 0x2
        if (r.v0 != 0u) goto L_262608;                           // 2625ec bnez $v0, . + 4 + (0x6 << 2)
        r.f0 = FPU_MUL_S(r.f20, r.f21);                          // 2625f4 mul.s $f0, $f20, $f21
        r.f1 = floatOf(static_cast<uint32_t>(PS2_FPU_ROUND_NEAREST_W(r.f0))); // 2625f8 cvt.w.s $f1, $f0
        r.v0 = sext32(bitsOf(r.f1));                             // 2625fc mfc1 $v0, $f1
        // 262600 b . + 4 + (0x4 << 2)
        r.v0 = slti(r.v0, 8);                                    // 262604 slti $v0, $v0, 0x8
        goto L_262614;
    L_262608:
        r.f0 = floatOf(static_cast<uint32_t>(PS2_FPU_ROUND_NEAREST_W(r.f20))); // 262608 cvt.w.s $f0, $f20
        r.v0 = sext32(bitsOf(r.f0));                             // 26260c mfc1 $v0, $f0
        r.v0 = slti(r.v0, 8);                                    // 262610 slti $v0, $v0, 0x8
    L_262614:
        if (r.v0 != 0u)                                          // 262614 bnel $v0, $zero, . + 4 + (0xE5 << 2)
        {
            WRITE32(lo32(r.sp) + 0x2e4u, lo32(0u));                  // 262618 sw $zero, 0x2E4($sp)
            goto L_2629ac;
        }
    L_26261c:
        t = r.s4 == 0u;                                          // 26261c beqz $s4, . + 4 + (0x6 << 2)
        r.t2 = addiu(0u, 100);                                   // 262620 addiu $t2, $zero, 0x64
        if (t) goto L_262638;
        r.v1 = addiu(0u, 4);                                     // 262624 addiu $v1, $zero, 0x4
        r.t2 = addiu(0u, 25);                                    // 262628 addiu $t2, $zero, 0x19
        r.v1 = slt(r.v1, r.s4);                                  // 26262c slt $v1, $v1, $s4
        r.v0 = addiu(0u, 10);                                    // 262630 addiu $v0, $zero, 0xA
        if (r.v1 == 0u) { r.t2 = r.v0; copyHigh(ctx, 10, 2); }   // 262634 movz $t2, $v0, $v1
    L_262638:
        r.v0 = addiu(0u, 12);                                    // 262638 addiu $v0, $zero, 0xC
        r.v1 = LW(lo32(r.gp) - 0x4dccu);                         // 26263c lw $v1, -0x4DCC($gp)
        r.v0 = mult(r.s4, r.v0, r.lo, r.hi);                     // 262640 mult $v0, $s4, $v0
        r.a2 = LW(lo32(r.sp) + 0x2b8u);                          // 262644 lw $a2, 0x2B8($sp)
        r.a0 = LW(lo32(r.v1));                                   // 262648 lw $a0, 0x0($v1)
        r.a3 = addu(r.s0, r.v0);                                 // 26264c addu $a3, $s0, $v0
        r.v1 = addu(r.s1, r.v0);                                 // 262650 addu $v1, $s1, $v0
        r.v0 = addu(r.s3, r.v0);                                 // 262654 addu $v0, $s3, $v0
        r.f0 = LWC1(lo32(r.v1));                                 // 262658 lwc1 $f0, 0x0($v1)
        r.f1 = LWC1(lo32(r.v0));                                 // 26265c lwc1 $f1, 0x0($v0)
        r.f2 = LWC1(lo32(r.a3));                                 // 262660 lwc1 $f2, 0x0($a3)
        r.f3 = floatOf(static_cast<uint32_t>(PS2_FPU_ROUND_NEAREST_W(r.f0))); // 262664 cvt.w.s $f3, $f0
        r.a3 = sext32(bitsOf(r.f3));                             // 262668 mfc1 $a3, $f3
        r.f0 = floatOf(static_cast<uint32_t>(PS2_FPU_ROUND_NEAREST_W(r.f1))); // 26266c cvt.w.s $f0, $f1
        r.t0 = sext32(bitsOf(r.f0));                             // 262670 mfc1 $t0, $f0
        r.f0 = floatOf(static_cast<uint32_t>(PS2_FPU_ROUND_NEAREST_W(r.f2))); // 262674 cvt.w.s $f0, $f2
        r.t1 = sext32(bitsOf(r.f0));                             // 262678 mfc1 $t1, $f0
        r.ra = 0x262684u;                                        // 26267c jal func_2A6E60
        r.a1 = r.s2;                                             // 262680 daddu $a1, $s2, $zero
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s3, 19); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2a6e60u, 0x26267cu, 0x262684u)) return false;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); LOAD_F(21); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_262684:
        t = r.s4 != 0u;                                          // 262684 bnez $s4, . + 4 + (0x6 << 2)
        r.v0 = addiu(0u, 8);                                     // 262688 addiu $v0, $zero, 0x8
        if (t) goto L_2626a0;
        r.v1 = LW(lo32(r.s2));                                   // 26268c lw $v1, 0x0($s2)
        t = r.v1 == 0u;                                          // 262690 beqz $v1, . + 4 + (0x9 << 2)
        r.v0 = addiu(0u, 3);                                     // 262694 addiu $v0, $zero, 0x3
        if (t) goto L_2626b8;
        t = r.v1 == r.v0;                                        // 262698 beq $v1, $v0, . + 4 + (0x7 << 2)
        r.v0 = addiu(0u, 8);                                     // 26269c addiu $v0, $zero, 0x8
        if (t) goto L_2626b8;
    L_2626a0:
        if (r.s4 != r.v0)                                        // 2626a0 bnel $s4, $v0, . + 4 + (0xBD << 2)
        {
            r.s4 = addiu(r.s4, 1);                                   // 2626a4 addiu $s4, $s4, 0x1
            goto L_262998;
        }
        r.v1 = LW(lo32(r.s2));                                   // 2626a8 lw $v1, 0x0($s2)
        r.v0 = addiu(0u, 2);                                     // 2626ac addiu $v0, $zero, 0x2
        if (r.v1 != r.v0)                                        // 2626b0 bnel $v1, $v0, . + 4 + (0xB9 << 2)
        {
            r.s4 = addiu(r.s4, 1);                                   // 2626b4 addiu $s4, $s4, 0x1
            goto L_262998;
        }
    L_2626b8:
        r.a1 = LW(lo32(r.gp) - 0x4dccu);                         // 2626b8 lw $a1, -0x4DCC($gp)
        r.f0 = LWC1(lo32(r.s2) + 0x44u);                         // 2626bc lwc1 $f0, 0x44($s2)
        r.f5 = LWC1(lo32(r.a1) + 0x374u);                        // 2626c0 lwc1 $f5, 0x374($a1)
        r.f5 = FPU_SUB_S(r.f5, r.f0);                            // 2626c4 sub.s $f5, $f5, $f0
        SWC1(lo32(r.sp) + 0x290u, r.f5);                         // 2626c8 swc1 $f5, 0x290($sp)
        r.f6 = FPU_MUL_S(r.f5, r.f5);                            // 2626cc mul.s $f6, $f5, $f5
        r.f0 = LWC1(lo32(r.s2) + 0x48u);                         // 2626d0 lwc1 $f0, 0x48($s2)
        r.f4 = LWC1(lo32(r.a1) + 0x378u);                        // 2626d4 lwc1 $f4, 0x378($a1)
        r.f4 = FPU_SUB_S(r.f4, r.f0);                            // 2626d8 sub.s $f4, $f4, $f0
        SWC1(lo32(r.sp) + 0x294u, r.f4);                         // 2626dc swc1 $f4, 0x294($sp)
        r.f1 = FPU_MUL_S(r.f4, r.f4);                            // 2626e0 mul.s $f1, $f4, $f4
        r.f0 = LWC1(lo32(r.s2) + 0x4cu);                         // 2626e4 lwc1 $f0, 0x4C($s2)
        r.f2 = LWC1(lo32(r.a1) + 0x37cu);                        // 2626e8 lwc1 $f2, 0x37C($a1)
        r.f6 = FPU_ADD_S(r.f6, r.f1);                            // 2626ec add.s $f6, $f6, $f1
        r.f2 = FPU_SUB_S(r.f2, r.f0);                            // 2626f0 sub.s $f2, $f2, $f0
        r.f1 = FPU_MUL_S(r.f2, r.f2);                            // 2626f4 mul.s $f1, $f2, $f2
        SWC1(lo32(r.sp) + 0x298u, r.f2);                         // 2626f8 swc1 $f2, 0x298($sp)
        r.f3 = LWC1(lo32(r.s2) + 0x84u);                         // 2626fc lwc1 $f3, 0x84($s2)
        r.f12 = FPU_ADD_S(r.f6, r.f1);                           // 262700 add.s $f12, $f6, $f1
        r.f0 = LWC1(lo32(r.s2) + 0x80u);                         // 262704 lwc1 $f0, 0x80($s2)
        r.f3 = FPU_MUL_S(r.f3, r.f4);                            // 262708 mul.s $f3, $f3, $f4
        r.f1 = LWC1(lo32(r.s2) + 0x88u);                         // 26270c lwc1 $f1, 0x88($s2)
        r.f0 = FPU_MUL_S(r.f0, r.f5);                            // 262710 mul.s $f0, $f0, $f5
        r.f4 = FPU_SQRT_S(r.f12);                                // 26271c c1 0xC0104 (sqrt.s $f4, $f12)
        r.f1 = FPU_MUL_S(r.f1, r.f2);                            // 262720 mul.s $f1, $f1, $f2
        r.f0 = FPU_ADD_S(r.f0, r.f3);                            // 262724 add.s $f0, $f0, $f3
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f4, r.f4)); // 262728 c.eq.s $f4, $f4
        t = (r.fcr31 & kCondition) != 0u;                        // 262730 bc1t . + 4 + (0x5 << 2)
        r.f20 = FPU_ADD_S(r.f0, r.f1);                           // 262734 add.s $f20, $f0, $f1
        if (t) goto L_262748;
        r.ra = 0x262740u;                                        // 262738 jal func_2D8398
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(12); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2d8398u, 0x262738u, 0x262740u)) return false;
        LOAD_GPR(v1, 3); LOAD_GPR(s2, 18); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(3); LOAD_F(5); LOAD_F(6); LOAD_F(12); LOAD_F(20); LOAD_F(21); r.fcr31 = ctx->fcr31;
    L_262740:
        r.a1 = LW(lo32(r.gp) - 0x4dccu);                         // 262740 lw $a1, -0x4DCC($gp)
        r.f4 = FPU_MOV_S(r.f0);                                  // 262744 mov.s $f4, $f0
    L_262748:
        r.v0 = LH(lo32(r.s2) + 0x6u);                            // 262748 lh $v0, 0x6($s2)
        r.f2 = divS(r.f20, r.f4, r.fcr31);                       // 262754 div.s $f2, $f20, $f4
        if (r.v0 == 0u)                                          // 262758 beql $v0, $zero, . + 4 + (0x11 << 2)
        {
            r.a0 = LW(lo32(r.a1));                                   // 26275c lw $a0, 0x0($a1)
            goto L_2627a0;
        }
        r.at = sext32(0xbf000000u);                              // 262760 lui $at, 0xBF00
        r.f0 = floatOf(lo32(r.at));                              // 262764 mtc1 $at, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f2)); // 262768 c.lt.s $f0, $f2
        if ((r.fcr31 & kCondition) == 0u) goto L_262794;         // 26276c bc1f . + 4 + (0x9 << 2)
        r.f1 = FPU_ADD_S(r.f2, r.f21);                           // 262774 add.s $f1, $f2, $f21
        r.at = sext32(0x3fc00000u);                              // 262778 lui $at, 0x3FC0
        r.f0 = floatOf(lo32(r.at));                              // 26277c mtc1 $at, $f0
        r.f20 = divS(r.f1, r.f0, r.fcr31);                       // 262788 div.s $f20, $f1, $f0
        // 26278c b . + 4 + (0xB << 2)
        r.a0 = LW(lo32(r.a1));                                   // 262790 lw $a0, 0x0($a1)
        goto L_2627bc;
    L_262794:
        r.f20 = floatOf(lo32(0u));                               // 262794 mtc1 $zero, $f20
        // 262798 b . + 4 + (0x8 << 2)
        r.a0 = LW(lo32(r.a1));                                   // 26279c lw $a0, 0x0($a1)
        goto L_2627bc;
    L_2627a0:
        r.at = sext32(0x3f800000u);                              // 2627a0 lui $at, 0x3F80
        r.f0 = floatOf(lo32(r.at));                              // 2627a4 mtc1 $at, $f0
        r.at = sext32(0x3e800000u);                              // 2627a8 lui $at, 0x3E80
        r.f1 = floatOf(lo32(r.at));                              // 2627ac mtc1 $at, $f1
        r.f0 = FPU_ADD_S(r.f2, r.f0);                            // 2627b0 add.s $f0, $f2, $f0
        r.f0 = FPU_MUL_S(r.f0, r.f1);                            // 2627b4 mul.s $f0, $f0, $f1
        r.f20 = FPU_ADD_S(r.f0, r.f21);                          // 2627b8 add.s $f20, $f0, $f21
    L_2627bc:
        r.a2 = LW(lo32(r.sp) + 0x2b8u);                          // 2627bc lw $a2, 0x2B8($sp)
        r.ra = 0x2627c8u;                                        // 2627c0 jal func_2A7188
        r.a1 = r.s2;                                             // 2627c4 daddu $a1, $s2, $zero
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(12); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2a7188u, 0x2627c0u, 0x2627c8u)) return false;
        LOAD_GPR(v0, 2); LOAD_GPR(gp, 28); LOAD_F(20);
    L_2627c8:
        r.f0 = floatOf(lo32(r.v0));                              // 2627c8 mtc1 $v0, $f0
        r.f0 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f0))); // 2627cc cvt.s.w $f0, $f0
        r.f1 = LWC1(lo32(r.gp) - 0x7c68u);                       // 2627d0 lwc1 $f1, -0x7C68($gp)
        r.at = sext32(0x42fe0000u);                              // 2627d4 lui $at, 0x42FE
        r.f12 = floatOf(lo32(r.at));                             // 2627d8 mtc1 $at, $f12
        r.f0 = FPU_MUL_S(r.f0, r.f1);                            // 2627dc mul.s $f0, $f0, $f1
        r.f20 = FPU_MUL_S(r.f20, r.f0);                          // 2627e0 mul.s $f20, $f20, $f0
        r.ra = 0x2627ecu;                                        // 2627e4 jal func_2E4508
        r.f12 = FPU_MUL_S(r.f20, r.f12);                         // 2627e8 mul.s $f12, $f20, $f12
        STORE_GPR(at, 1); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(20);
        if (!guestCall(G_PASS, 0x2e4508u, 0x2627e4u, 0x2627ecu)) return false;
        LOAD_GPR(v0, 2); LOAD_GPR(s2, 18); LOAD_GPR(gp, 28);
    L_2627ec:
        r.a1 = LW(lo32(r.gp) - 0x4dccu);                         // 2627ec lw $a1, -0x4DCC($gp)
        r.a0 = addiu(r.s2, 144);                                 // 2627f0 addiu $a0, $s2, 0x90
        r.v1 = LW(lo32(r.a1));                                   // 2627f4 lw $v1, 0x0($a1)
        r.a0 = addu(r.a0, r.v1);                                 // 2627f8 addu $a0, $a0, $v1
        r.a1 = LB(lo32(r.a0));                                   // 2627fc lb $a1, 0x0($a0)
        r.v1 = addu(r.a1, r.v0);                                 // 262800 addu $v1, $a1, $v0
        r.s1 = srl32(r.v1, 1);                                   // 262804 srl $s1, $v1, 1
        t = neg64(r.s1);                                         // 262808 bltz $s1, . + 4 + (0x5 << 2)
        WRITE8(lo32(r.a0), static_cast<uint8_t>(r.v0));          // 26280c sb $v0, 0x0($a0)
        if (t) goto L_262820;
        r.f1 = floatOf(lo32(r.s1));                              // 262810 mtc1 $s1, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 262814 cvt.s.w $f1, $f1
        // 262818 b . + 4 + (0x8 << 2)
        r.v0 = LBU(lo32(r.s2) + 0x94u);                          // 26281c lbu $v0, 0x94($s2)
        goto L_26283c;
    L_262820:
        r.v0 = r.s1 & 0x1u;                                      // 262820 andi $v0, $s1, 0x1
        r.v1 = srl32(r.v1, 2);                                   // 262824 srl $v1, $v1, 2
        r.v0 = r.v0 | r.v1;                                      // 262828 or $v0, $v0, $v1
        r.f1 = floatOf(lo32(r.v0));                              // 26282c mtc1 $v0, $f1
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 262830 cvt.s.w $f1, $f1
        r.f1 = FPU_ADD_S(r.f1, r.f1);                            // 262834 add.s $f1, $f1, $f1
        r.v0 = LBU(lo32(r.s2) + 0x94u);                          // 262838 lbu $v0, 0x94($s2)
    L_26283c:
        r.at = sext32(0x3b800000u);                              // 26283c lui $at, 0x3B80
        r.f0 = floatOf(lo32(r.at));                              // 262840 mtc1 $at, $f0
        r.f12 = floatOf(lo32(r.v0));                             // 262844 mtc1 $v0, $f12
        r.f12 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f12))); // 262848 cvt.s.w $f12, $f12
        r.f12 = FPU_MUL_S(r.f12, r.f0);                          // 26284c mul.s $f12, $f12, $f0
        r.ra = 0x262858u;                                        // 262850 jal func_2E4508
        r.f12 = FPU_MUL_S(r.f1, r.f12);                          // 262854 mul.s $f12, $f1, $f12
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s1, 17); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12);
        if (!guestCall(G_PASS, 0x2e4508u, 0x262850u, 0x262858u)) return false;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); LOAD_F(21); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_262858:
        r.s1 = r.v0;                                             // 262858 daddu $s1, $v0, $zero
        t = r.s1 == 0u;                                          // 26285c beqz $s1, . + 4 + (0x4D << 2)
        r.v0 = addiu(0u, 3);                                     // 262860 addiu $v0, $zero, 0x3
        if (t) goto L_262994;
        r.v1 = LW(lo32(r.s2));                                   // 262864 lw $v1, 0x0($s2)
        t = r.v1 != r.v0;                                        // 262868 bne $v1, $v0, . + 4 + (0x27 << 2)
        r.v0 = LW(lo32(r.gp) - 0x4dccu);                         // 26286c lw $v0, -0x4DCC($gp)
        if (t) goto L_262908;
        r.f0 = LWC1(lo32(r.s2) + 0x44u);                         // 262870 lwc1 $f0, 0x44($s2)
        r.v0 = LW(lo32(r.s5) + 0x20u);                           // 262874 lw $v0, 0x20($s5)
        SWC1(lo32(r.sp) + 0x2a0u, r.f0);                         // 262878 swc1 $f0, 0x2A0($sp)
        r.f0 = LWC1(lo32(r.s2) + 0x48u);                         // 26287c lwc1 $f0, 0x48($s2)
        r.v0 = LW(lo32(r.v0) + 0x4u);                            // 262880 lw $v0, 0x4($v0)
        SWC1(lo32(r.sp) + 0x2a4u, r.f0);                         // 262884 swc1 $f0, 0x2A4($sp)
        r.f1 = LWC1(lo32(r.s2) + 0x4cu);                         // 262888 lwc1 $f1, 0x4C($s2)
        t = r.v0 == 0u;                                          // 26288c beqz $v0, . + 4 + (0x9 << 2)
        SWC1(lo32(r.sp) + 0x2a8u, r.f1);                         // 262890 swc1 $f1, 0x2A8($sp)
        if (t) goto L_2628b4;
        r.v1 = LW(lo32(r.sp) + 0x2bcu);                          // 262894 lw $v1, 0x2BC($sp)
        r.s0 = addiu(r.sp, 672);                                 // 262898 addiu $s0, $sp, 0x2A0
        r.a1 = r.s0;                                             // 26289c daddu $a1, $s0, $zero
        r.a0 = sll32(r.v1, 6);                                   // 2628a0 sll $a0, $v1, 6
        r.ra = 0x2628acu;                                        // 2628a4 jal func_2B5428
        r.a0 = addu(r.v0, r.a0);                                 // 2628a8 addu $a0, $v0, $a0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1);
        if (!guestCall(G_PASS, 0x2b5428u, 0x2628a4u, 0x2628acu)) return false;
        LOAD_GPR(v1, 3); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s5, 21); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29);
    L_2628ac:
        // 2628ac b . + 4 + (0x3 << 2)
        r.f3 = LWC1(lo32(r.s5) + 0x30u);                         // 2628b0 lwc1 $f3, 0x30($s5)
        goto L_2628bc;
    L_2628b4:
        r.s0 = addiu(r.sp, 672);                                 // 2628b4 addiu $s0, $sp, 0x2A0
        r.f3 = LWC1(lo32(r.s5) + 0x30u);                         // 2628b8 lwc1 $f3, 0x30($s5)
    L_2628bc:
        r.a2 = r.s0;                                             // 2628bc daddu $a2, $s0, $zero
        r.f0 = LWC1(lo32(r.sp) + 0x2a0u);                        // 2628c0 lwc1 $f0, 0x2A0($sp)
        r.a3 = r.s1;                                             // 2628c4 daddu $a3, $s1, $zero
        r.f1 = LWC1(lo32(r.sp) + 0x2a4u);                        // 2628c8 lwc1 $f1, 0x2A4($sp)
        r.f0 = FPU_ADD_S(r.f0, r.f3);                            // 2628cc add.s $f0, $f0, $f3
        r.v0 = LW(lo32(r.gp) - 0x4dccu);                         // 2628d0 lw $v0, -0x4DCC($gp)
        r.f2 = LWC1(lo32(r.sp) + 0x2a8u);                        // 2628d4 lwc1 $f2, 0x2A8($sp)
        SWC1(lo32(r.sp) + 0x2a0u, r.f0);                         // 2628d8 swc1 $f0, 0x2A0($sp)
        r.f0 = LWC1(lo32(r.s5) + 0x34u);                         // 2628dc lwc1 $f0, 0x34($s5)
        r.a0 = LW(lo32(r.v0));                                   // 2628e0 lw $a0, 0x0($v0)
        r.f1 = FPU_ADD_S(r.f1, r.f0);                            // 2628e4 add.s $f1, $f1, $f0
        SWC1(lo32(r.sp) + 0x2a4u, r.f1);                         // 2628e8 swc1 $f1, 0x2A4($sp)
        r.f0 = LWC1(lo32(r.s5) + 0x38u);                         // 2628ec lwc1 $f0, 0x38($s5)
        r.f2 = FPU_ADD_S(r.f2, r.f0);                            // 2628f0 add.s $f2, $f2, $f0
        SWC1(lo32(r.sp) + 0x2a8u, r.f2);                         // 2628f4 swc1 $f2, 0x2A8($sp)
        r.ra = 0x262900u;                                        // 2628f8 jal func_2A6F50
        r.a1 = LH(lo32(r.s2) + 0x4u);                            // 2628fc lh $a1, 0x4($s2)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3);
        if (!guestCall(G_PASS, 0x2a6f50u, 0x2628f8u, 0x262900u)) return false;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); LOAD_F(21); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_262900:
        // 262900 b . + 4 + (0x25 << 2)
        r.s4 = addiu(r.s4, 1);                                   // 262904 addiu $s4, $s4, 0x1
        goto L_262998;
    L_262908:
        r.at = sext32(0x42700000u);                              // 262908 lui $at, 0x4270
        r.f2 = floatOf(lo32(r.at));                              // 26290c mtc1 $at, $f2
        r.f3 = LWC1(lo32(r.v0) + 0x104u);                        // 262910 lwc1 $f3, 0x104($v0)
        r.f1 = LWC1(lo32(r.sp) + 0x228u);                        // 262914 lwc1 $f1, 0x228($sp)
        r.f2 = divS(r.f2, r.f3, r.fcr31);                        // 262920 div.s $f2, $f2, $f3
        r.f0 = LWC1(lo32(r.gp) - 0x7c64u);                       // 262924 lwc1 $f0, -0x7C64($gp)
        r.f1 = FPU_MUL_S(r.f1, r.f0);                            // 262928 mul.s $f1, $f1, $f0
        r.ra = 0x262934u;                                        // 26292c jal func_2CDDE0
        r.f20 = FPU_MUL_S(r.f1, r.f2);                           // 262930 mul.s $f20, $f1, $f2
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(s1, 17); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2cdde0u, 0x26292cu, 0x262934u)) return false;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(1); LOAD_F(20); LOAD_F(21); r.lo = ctx->lo; r.hi = ctx->hi;
    L_262934:
        r.v0 = slti(r.v0, 2);                                    // 262934 slti $v0, $v0, 0x2
        if (r.v0 != 0u) goto L_262954;                           // 262938 bnez $v0, . + 4 + (0x6 << 2)
        r.f0 = FPU_MUL_S(r.f20, r.f21);                          // 262940 mul.s $f0, $f20, $f21
        r.f1 = floatOf(static_cast<uint32_t>(PS2_FPU_ROUND_NEAREST_W(r.f0))); // 262944 cvt.w.s $f1, $f0
        r.a2 = sext32(bitsOf(r.f1));                             // 262948 mfc1 $a2, $f1
        // 26294c b . + 4 + (0x4 << 2)
        r.a2 = mult(r.a2, r.s1, r.lo, r.hi);                     // 262950 mult $a2, $a2, $s1
        goto L_262960;
    L_262954:
        r.f0 = floatOf(static_cast<uint32_t>(PS2_FPU_ROUND_NEAREST_W(r.f20))); // 262954 cvt.w.s $f0, $f20
        r.a2 = sext32(bitsOf(r.f0));                             // 262958 mfc1 $a2, $f0
        r.a2 = mult(r.a2, r.s1, r.lo, r.hi);                     // 26295c mult $a2, $a2, $s1
    L_262960:
        r.v0 = addiu(0u, 127);                                   // 262960 addiu $v0, $zero, 0x7F
        if (r.v0 == 0u)                                          // 262964 beql $v0, $zero, . + 4 + (0x1 << 2)
        {
            STORE_GPR(v0, 2); STORE_GPR(a2, 6); STORE_F(0); STORE_F(1); ctx->lo = r.lo; ctx->hi = r.hi;
            ctx->pc = 0x262968u;                                     // 262968 break 0, 7
            runtime->handleBreak(rdram, ctx);
            LOAD_GPR(v0, 2); LOAD_GPR(a2, 6); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); r.lo = ctx->lo; r.hi = ctx->hi;
            goto L_26296c;
        }
    L_26296c:
        r.v1 = LW(lo32(r.gp) - 0x4dccu);                         // 26296c lw $v1, -0x4DCC($gp)
        r.a3 = LW(lo32(r.s2) + 0x8cu);                           // 262970 lw $a3, 0x8C($s2)
        divideU(r.a2, r.v0, r.lo, r.hi);                         // 262974 divu $zero, $a2, $v0
        r.a0 = LW(lo32(r.v1));                                   // 262978 lw $a0, 0x0($v1)
        r.a1 = LH(lo32(r.s2) + 0x4u);                            // 26297c lh $a1, 0x4($s2)
        r.a3 = r.a3 | r.s1;                                      // 262980 or $a3, $a3, $s1
        r.f12 = LWC1(lo32(r.sp) + 0x220u);                       // 262984 lwc1 $f12, 0x220($sp)
        r.a2 = r.lo;                                             // 262988 mflo $a2
        r.ra = 0x262994u;                                        // 26298c jal func_2A6EF8
        r.f13 = LWC1(lo32(r.sp) + 0x224u);                       // 262990 lwc1 $f13, 0x224($sp)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(13); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2a6ef8u, 0x26298cu, 0x262994u)) return false;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); LOAD_F(21); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_262994:
        r.s4 = addiu(r.s4, 1);                                   // 262994 addiu $s4, $s4, 0x1
    L_262998:
        r.fp = addiu(r.fp, 16);                                  // 262998 addiu $fp, $fp, 0x10
        r.s6 = addiu(r.s6, 16);                                  // 26299c addiu $s6, $s6, 0x10
        r.v0 = slti(r.s4, 9);                                    // 2629a0 slti $v0, $s4, 0x9
        t = r.v0 != 0u;                                          // 2629a4 bnez $v0, . + 4 + (-0x144 << 2)
        r.s7 = addiu(r.s7, 16);                                  // 2629a8 addiu $s7, $s7, 0x10
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x262498u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s1, 17); STORE_GPR(s4, 20); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(fp, 30); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(9); ctx->fcr31 = r.fcr31; return false; }
            goto L_262498;
        }
    L_2629ac:
        r.v0 = LW(lo32(r.sp) + 0x2e4u);                          // 2629ac lw $v0, 0x2E4($sp)
        t = r.v0 == 0u;                                          // 2629b0 beqz $v0, . + 4 + (0x9 << 2)
        r.v1 = LW(lo32(r.sp) + 0x2c4u);                          // 2629b4 lw $v1, 0x2C4($sp)
        if (t) goto L_2629d8;
        r.ra = 0x2629c0u;                                        // 2629b8 jal func_2A6E28
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s1, 17); STORE_GPR(s4, 20); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(9); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2a6e28u, 0x2629b8u, 0x2629c0u)) return false;
        LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2629c0:
        // 2629c0 b . + 4 + (0x5 << 2)
        r.v1 = LW(lo32(r.sp) + 0x2c4u);                          // 2629c4 lw $v1, 0x2C4($sp)
        goto L_2629d8;
    L_2629c8:
        r.s0 = addiu(r.s0, 1);                                   // 2629c8 addiu $s0, $s0, 0x1
        WRITE32(lo32(r.sp) + 0x2f0u, lo32(r.s2));                // 2629cc sw $s2, 0x2F0($sp)
    L_2629d0:
        WRITE32(lo32(r.sp) + 0x2ecu, lo32(r.s0));                // 2629d0 sw $s0, 0x2EC($sp)
        r.v1 = LW(lo32(r.sp) + 0x2c4u);                          // 2629d4 lw $v1, 0x2C4($sp)
    L_2629d8:
        r.s0 = LW(lo32(r.sp) + 0x2ecu);                          // 2629d8 lw $s0, 0x2EC($sp)
        r.v0 = LB(lo32(r.v1) + 0x6u);                            // 2629dc lb $v0, 0x6($v1)
        r.v0 = slt(r.s0, r.v0);                                  // 2629e0 slt $v0, $s0, $v0
        t = r.v0 != 0u;                                          // 2629e4 bnez $v0, . + 4 + (-0x1E0 << 2)
        r.s2 = LW(lo32(r.sp) + 0x2f0u);                          // 2629e8 lw $s2, 0x2F0($sp)
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x262268u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(9); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi; return false; }
            goto L_262268;
        }
    L_2629ec:
        r.a0 = LW(lo32(r.sp) + 0x2c4u);                          // 2629ec lw $a0, 0x2C4($sp)
    L_2629f0:
        r.a1 = LB(lo32(r.a0) + 0x3u);                            // 2629f0 lb $a1, 0x3($a0)
        t = neg64(r.a1);                                         // 2629f4 bltz $a1, . + 4 + (0x6 << 2)
        r.v0 = addiu(0u, 3);                                     // 2629f8 addiu $v0, $zero, 0x3
        if (t) goto L_262a10;
        r.v1 = LB(lo32(r.a0));                                   // 2629fc lb $v1, 0x0($a0)
        t = r.v1 == r.v0;                                        // 262a00 beq $v1, $v0, . + 4 + (0x3 << 2)
        r.a0 = LW(lo32(r.sp) + 0x2b8u);                          // 262a04 lw $a0, 0x2B8($sp)
        if (t) goto L_262a10;
        r.ra = 0x262a10u;                                        // 262a08 jal func_260AE0
        r.a2 = LW(lo32(r.sp) + 0x2c0u);                          // 262a0c lw $a2, 0x2C0($sp)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(9); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        ctx->pc = 0x260ae0u;
        if (depth >= kSelfCallDepth) { partGfx_0x260ae0(G_PASS); return false; }
        if (!nativePartGfxLevel(G_PASS, depth + 1u) || ctx->pc != 0x262a10u) return false;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_262a10:
        r.t4 = LW(lo32(r.sp) + 0x2c4u);                          // 262a10 lw $t4, 0x2C4($sp)
        r.a1 = LB(lo32(r.t4) + 0x4u);                            // 262a14 lb $a1, 0x4($t4)
        t = neg64(r.a1);                                         // 262a18 bltz $a1, . + 4 + (0x3 << 2)
        r.a0 = LW(lo32(r.sp) + 0x2b8u);                          // 262a1c lw $a0, 0x2B8($sp)
        if (t) goto L_262a28;
        r.ra = 0x262a28u;                                        // 262a20 jal func_260AE0
        r.a2 = LW(lo32(r.sp) + 0x2c0u);                          // 262a24 lw $a2, 0x2C0($sp)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(9); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        ctx->pc = 0x260ae0u;
        if (depth >= kSelfCallDepth) { partGfx_0x260ae0(G_PASS); return false; }
        if (!nativePartGfxLevel(G_PASS, depth + 1u) || ctx->pc != 0x262a28u) return false;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(t6, 14); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(9); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_262a28:
        r.ra = READ64(lo32(r.sp) + 0x390u);                      // 262a28 ld $ra, 0x390($sp)
        r.fp = READ64(lo32(r.sp) + 0x380u);                      // 262a2c ld $fp, 0x380($sp)
        r.s7 = READ64(lo32(r.sp) + 0x370u);                      // 262a30 ld $s7, 0x370($sp)
        r.s6 = READ64(lo32(r.sp) + 0x360u);                      // 262a34 ld $s6, 0x360($sp)
        r.s5 = READ64(lo32(r.sp) + 0x350u);                      // 262a38 ld $s5, 0x350($sp)
        r.s4 = READ64(lo32(r.sp) + 0x340u);                      // 262a3c ld $s4, 0x340($sp)
        r.s3 = READ64(lo32(r.sp) + 0x330u);                      // 262a40 ld $s3, 0x330($sp)
        r.s2 = READ64(lo32(r.sp) + 0x320u);                      // 262a44 ld $s2, 0x320($sp)
        r.s1 = READ64(lo32(r.sp) + 0x310u);                      // 262a48 ld $s1, 0x310($sp)
        r.s0 = READ64(lo32(r.sp) + 0x300u);                      // 262a4c ld $s0, 0x300($sp)
        r.f21 = LWC1(lo32(r.sp) + 0x3a8u);                       // 262a50 lwc1 $f21, 0x3A8($sp)
        r.f20 = LWC1(lo32(r.sp) + 0x3a0u);                       // 262a54 lwc1 $f20, 0x3A0($sp)
        jt = lo32(r.ra);                                         // 262a58 jr $ra
        r.sp = addiu(r.sp, 944);                                 // 262a5c addiu $sp, $sp, 0x3B0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(t6, 14); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(9); STORE_F(20); STORE_F(21); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        ctx->pc = jt;
        return true;
    }

    void nativePartGfx(G_ARGS) { nativePartGfxLevel(G_PASS, 0u); }

    // ---- The boot-time differential test

    using namespace ts_native_test;

    // These functions walk object, skeleton and room structures far larger
    // than the shared scratch: their test structures live in a heap below
    // it in the same unused HLE callback arena (0x80000-0x100000, nothing
    // runs on it before the game starts), saved, compared and restored like
    // the scratch. The scratch keeps the operand slots and the stack.
    constexpr uint32_t kHeap = 0x000A0000u;
    constexpr uint32_t kHeapBytes = 0x4000u;

    // Game globals the functions read or write, set per case and put back
    // after the test.
    constexpr uint32_t kViewportIndexPointer = kGameGp - 0x4DCCu;  // -> the current viewport (its index first)
    constexpr uint32_t kViewportRoomTables = 0x00357330u;          // per viewport: its per-room records (0x14 bytes each)
    constexpr uint32_t kRoomTableAddress = kGameGp - 0x5DC0u;      // the rooms (0x2C bytes each)
    constexpr uint32_t kPortalTableAddress = kGameGp - 0x5DBCu;    // the portal pointers
    constexpr uint32_t kPortalRecordsAddress = kGameGp - 0x5DD0u;  // the per-portal screen records (0x30 bytes each)
    constexpr uint32_t kViewportAddress = 0x003299F0u;             // the viewport: origin and size as integers
    constexpr uint32_t kClipPlanesAddress = kGameGp - 0x4768u;     // bgPortalCalcOutCode: four plane constants
    constexpr uint32_t kDlListAddress = kGameGp - 0x6C60u;         // the current display list entry
    constexpr uint32_t kPartCountersAddress = kGameGp - 0x6CE0u;   // partGfx: three polygon counters
    constexpr uint32_t kTextureTableAddress = kGameGp - 0x4B68u;   // -> the texture table
    constexpr uint32_t kFrameStepAddress = kGameGp - 0x4BA0u;      // frames per tick
    constexpr uint32_t kMemdbPointerAddress = kGameGp - 0x49DCu;   // memdbAlloc: the next block
    constexpr uint32_t kMemdbUsedAddress = kGameGp - 0x6570u;      // memdbAlloc: bytes used
    constexpr uint32_t kZbBufferAddress = kGameGp - 0x4680u;       // zbtest: the buffer glows are added to
    constexpr uint32_t kZbBiasBufferAddress = kGameGp - 0x4678u;   // zbtest: the buffer visibility is read from
    constexpr uint32_t kZbGlowCountAddress = kGameGp - 0x4674u;    // zbtest: glows drawn
    constexpr uint32_t kZbFlareCountAddress = kGameGp - 0x4670u;   // zbtest: flares drawn
    constexpr uint32_t kZbPointCountAddress = kGameGp - 0x4CE0u;   // zbtest: points of the glow being added
    constexpr uint32_t kRoomColoursAddress = kGameGp - 0x4CCCu;    // roomlight: the room colours (0x18 bytes each)
    constexpr uint32_t kRoomIntensityAddress = kGameGp - 0x4CD4u;  // roomlight: the room intensities (0x1C bytes each)
    constexpr uint32_t kRandomSeedAddress = kGameGp - 0x4B80u;     // newrnd: the seed (8 bytes), then the last value
    constexpr uint32_t kLocalPlayersAddress = kGameGp - 0x608Cu;   // ilinkGetNumLocalPlayers
    constexpr uint32_t kZbPointTables = 0x0036A590u;               // zbtest: per buffer, its glow point records
    constexpr uint32_t kZbCounts = 0x01FEA0A0u;                    // zbtest: per buffer, the glows added
    constexpr uint32_t kZbGlows = 0x01FEA0B0u;                     // zbtest: the glows drawn (60 of 0x1C bytes), then
                                                                   // the flares (12 of 0x18 bytes, 0x1FEA740)

    // Scratch layout (offsets from kScratch): the operand slots below 0x180,
    // then bgPortalCalcPos's structures; the others' are in the heap. The
    // stack is at the top.
    constexpr uint32_t kPosViewportIndex = 0x200u, kPosViewportRooms = 0x300u, kPosRooms = 0x700u, kPosRoomLists = 0x800u,
                       kPosPortalPointers = 0x880u, kPosPortals = 0x900u, kPosPortalRecords = 0xC00u, kPosMatrix = 0xD40u;

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

    void fillWords(TestRng &rng, uint8_t *rdram, uint32_t address, uint32_t bytes)
    {
        for (uint32_t offset = 0; offset < bytes; offset += 4u)
            writeTestWord(rdram, address + offset, rng.next());
    }

    // A small integer field: low..high, now and then any value.
    uint32_t smallInt(TestRng &rng, int32_t low, int32_t high)
    {
        return static_cast<uint32_t>(low + static_cast<int32_t>(rng.next() % static_cast<uint32_t>(high - low + 1)));
    }

    // A small signed value in a register; with `junk`, now and then with
    // junk above bit 31 (which the originals' 32-bit arithmetic drops, and
    // their 64-bit compares keep).
    void setSmall(TestRng &rng, R5900Context &c, int reg, int32_t low, int32_t high, bool junk = false)
    {
        R5900Context *ctx = &c;
        const int32_t value = low + static_cast<int32_t>(rng.next() % static_cast<uint32_t>(high - low + 1));
        uint64_t bits = sext32(static_cast<uint32_t>(value));
        if (junk && (rng.next() & 15u) == 0u)
            bits = static_cast<uint32_t>(value) | static_cast<uint64_t>(rng.next()) << 32;
        SET_GPR_U64(ctx, reg, bits);
    }

    // A matrix near a rotation: the unit matrix with small perturbations,
    // or any sane values.
    void fillMatrix(TestRng &rng, uint8_t *rdram, uint32_t address)
    {
        if ((rng.next() & 3u) == 0u)
        {
            fillSane(rng, rdram, address, 0x40u);
            return;
        }
        for (uint32_t row = 0; row < 4u; ++row)
            for (uint32_t col = 0; col < 4u; ++col)
            {
                const float unit = row == col ? 1.0f : 0.0f;
                const float noise = static_cast<float>(static_cast<int32_t>(rng.next() % 513u) - 256) * (1.0f / 1024.0f);
                writeTestWord(rdram, address + row * 16u + col * 4u, bitsOf(unit + noise));
            }
    }

    // A float about `centre`, within `spread`.
    uint32_t nearFloat(TestRng &rng, float centre, float spread)
    {
        return bitsOf(centre + spread * (static_cast<float>(rng.next() % 2049u) * (1.0f / 1024.0f) - 1.0f));
    }

    // bgPortalCalcPos(room, matrix)
    void setupPortalCalcPos(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        const uint32_t viewport = rng.next() % 4u;
        writeTestWord(rdram, kViewportIndexPointer, kScratch + kPosViewportIndex);
        writeTestWord(rdram, kScratch + kPosViewportIndex, viewport);
        for (uint32_t v = 0; v < 4u; ++v)
        {
            const uint32_t records = kScratch + kPosViewportRooms + v * 0x100u;
            writeTestWord(rdram, kViewportRoomTables + v * 4u, records);
            for (uint32_t room = 0; room < 4u; ++room)
            {
                const uint32_t record = records + room * 0x14u;
                writeTestWord(rdram, record, rng.next() % 4u); // the room's order
                const int32_t x0 = static_cast<int32_t>(rng.next() % 640u), y0 = static_cast<int32_t>(rng.next() % 448u);
                writeTestWord(rdram, record + 4u, static_cast<uint32_t>(x0));
                writeTestWord(rdram, record + 8u, static_cast<uint32_t>(y0));
                writeTestWord(rdram, record + 0xCu,
                              (rng.next() & 7u) == 0u ? 0xFFFFFFFFu : static_cast<uint32_t>(x0 + static_cast<int32_t>(rng.next() % 640u)));
                writeTestWord(rdram, record + 0x10u, static_cast<uint32_t>(y0 + static_cast<int32_t>(rng.next() % 448u)));
            }
        }
        // The viewport: origin and size.
        writeTestWord(rdram, kViewportAddress + 8u, rng.next() % 320u);
        writeTestWord(rdram, kViewportAddress + 0x10u, 1u + rng.next() % 640u);
        writeTestWord(rdram, kViewportAddress + 0x1Cu, rng.next() % 224u);
        writeTestWord(rdram, kViewportAddress + 0x24u, 1u + rng.next() % 448u);
        const uint32_t rooms = kScratch + kPosRooms, lists = kScratch + kPosRoomLists, pointers = kScratch + kPosPortalPointers;
        writeTestWord(rdram, kRoomTableAddress, rooms);
        writeTestWord(rdram, kPortalTableAddress, pointers);
        writeTestWord(rdram, kPortalRecordsAddress, kScratch + kPosPortalRecords);
        for (uint32_t room = 0; room < 4u; ++room)
        {
            writeTestWord(rdram, rooms + room * 0x2Cu + 4u, lists + room * 0x20u);
            const uint32_t count = rng.next() % 6u;
            writeTestWord(rdram, lists + room * 0x20u, count);
            for (uint32_t i = 0; i < count; ++i)
                writeTestWord(rdram, lists + room * 0x20u + 4u + i * 4u, rng.next() % 6u);
        }
        for (uint32_t i = 0; i < 6u; ++i)
        {
            const uint32_t portal = kScratch + kPosPortals + i * 0x80u;
            writeTestWord(rdram, pointers + i * 4u, portal);
            writeTestWord(rdram, portal, rng.next() % 4u);
            writeTestWord(rdram, portal + 4u, rng.next() % 4u);
            fillSane(rng, rdram, portal + 8u, 12u);
            const uint32_t vertices = rng.next() % 7u;
            writeTestWord(rdram, portal + 0x14u, vertices | (rng.next() << 16));
            // Vertices around a point in front of the camera, so the portal
            // is often partly on screen.
            const float cx = static_cast<float>(static_cast<int32_t>(rng.next() % 65u) - 32),
                        cy = static_cast<float>(static_cast<int32_t>(rng.next() % 65u) - 32),
                        cz = static_cast<float>(1u + rng.next() % 64u);
            for (uint32_t v = 0; v < 6u; ++v)
            {
                const float spread = static_cast<float>(1u + rng.next() % 32u);
                writeTestWord(rdram, portal + 0x18u + v * 12u, bitsOf(cx + spread * (static_cast<float>(rng.next() % 1025u) * (1.0f / 512.0f) - 1.0f)));
                writeTestWord(rdram, portal + 0x18u + v * 12u + 4u, bitsOf(cy + spread * (static_cast<float>(rng.next() % 1025u) * (1.0f / 512.0f) - 1.0f)));
                writeTestWord(rdram, portal + 0x18u + v * 12u + 8u, bitsOf(cz + spread * (static_cast<float>(rng.next() % 1025u) * (1.0f / 512.0f) - 1.0f)));
            }
        }
        fillAny(rng, rdram, kScratch + kPosPortalRecords, 6u * 0x30u);
        fillMatrix(rng, rdram, kScratch + kPosMatrix);
        fillAny(rng, rdram, kClipPlanesAddress, 24u);
        setSmall(rng, c, 4, 0, 3, true);
        setPointer(rng, c, 5, kScratch + kPosMatrix);
    }

    // partGfx(inst, part, level). The heap holds one object instance and
    // everything it reaches: the instance (+0: the object, +8..+0x14 the
    // per-viewport matrix bases, +0x18/+0x1C texture words, +0xF4 its
    // prop, +0xF8 the per-part overrides, +0xFC.. per-level lists, +0x11C/
    // +0x120 their switch, +0x124 the visibility mask); the object's parts
    // (0x50 bytes each, the object header right after them, its first word
    // their count: kind, matrix, parent, child and sibling bytes, the effect
    // count, the two strip lists, the effects, the two per-level blocks,
    // the mask and the polygon count); strip lists (0x18-byte records ended
    // by a negative last word); the vertex and texture tables; the prop
    // (position, angles, matrix mode, the matrix array through +0x20); the
    // viewport (mode, field of view, camera, matrices); the glow effects
    // (0x98 bytes: kind, ids, five points, normal, colour, alpha bytes);
    // the room light tables, the glow point buffers, the matrix allocator
    // and the display list.
    constexpr uint32_t kPgInst = kHeap + 0x000u, kPgProp = kHeap + 0x140u, kPgParts = kHeap + 0x200u,
                       kPgOverrides = kHeap + 0x400u, kPgStrips = kHeap + 0x500u, kPgVertexTable = kHeap + 0x700u,
                       kPgTextures = kHeap + 0x780u, kPgLevelArrays = kHeap + 0x840u, kPgInstLists = kHeap + 0x8C0u,
                       kPgViewport = kHeap + 0x940u, kPgMatrices = kHeap + 0x1040u, kPgPropMatrices = kHeap + 0x1240u,
                       kPgEffects = kHeap + 0x1260u, kPgRoomColours = kHeap + 0x1610u, kPgRoomIntensity = kHeap + 0x1680u,
                       kPgGlowPoints = kHeap + 0x1700u, kPgMemdb = kHeap + 0x1C20u, kPgDisplayList = kHeap + 0x2000u;
    constexpr uint32_t kPgMaxParts = 5u;

    void setupPartGfx(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        fillWords(rng, rdram, kHeap, kHeapBytes);
        const uint32_t parts = 1u + rng.next() % kPgMaxParts;
        const uint32_t object = kPgParts + parts * 0x50u;
        // Parts: a chain (each the child or the sibling of the one before,
        // or the end), so every part is drawn at most once.
        for (uint32_t i = 0; i < parts; ++i)
        {
            const uint32_t part = kPgParts + i * 0x50u;
            fillWords(rng, rdram, part, 0x50u);
            uint8_t *bytes = rdram + part;
            bytes[0] = static_cast<uint8_t>((rng.next() & 3u) != 0u ? rng.next() % 4u : rng.next());
            bytes[1] = static_cast<uint8_t>(rng.next() % 8u);
            bytes[2] = static_cast<uint8_t>(rng.next() % parts);
            bytes[3] = bytes[4] = 0xFFu;
            if (i + 1u < parts && (rng.next() % 5u) != 0u)
                bytes[(rng.next() & 1u) != 0u ? 3u : 4u] = static_cast<uint8_t>(i + 1u);
            bytes[6] = static_cast<uint8_t>((rng.next() & 1u) != 0u ? rng.next() % 4u : 0u);
            if ((rng.next() & 15u) == 0u)
                bytes[6] = static_cast<uint8_t>(0x80u | rng.next());
            for (uint32_t level = 0; level < 2u; ++level)
                writeTestWord(rdram, part + 8u + level * 4u,
                              (rng.next() % 5u) != 0u ? kPgStrips + (rng.next() % 4u) * 0x80u : 0u);
            writeTestWord(rdram, part + 0x10u, kPgEffects + (rng.next() & 1u) * 0x1C8u);
            const uint32_t mask = (rng.next() & 1u) != 0u ? 0u : 1u << (rng.next() % 16u);
            writeTestWord(rdram, part + 0x44u, mask | (rng.next() % 64u) << 16);
        }
        writeTestWord(rdram, object, parts);
        fillWords(rng, rdram, object + 4u, 0x2Cu);
        writeTestWord(rdram, object + 4u, (rng.next() % 3u) != 0u ? 1u : 0u);
        writeTestWord(rdram, object + 0xCu, kPgVertexTable);
        writeTestWord(rdram, object + 0x10u, (rng.next() & 3u) == 0u ? 0u : kPgVertexTable);
        for (uint32_t level = 0; level < 2u; ++level)
        {
            writeTestWord(rdram, object + 0x14u + level * 4u, kPgLevelArrays + level * 0x20u);
            writeTestWord(rdram, object + 0x1Cu + level * 4u, kPgLevelArrays + 0x40u + level * 0x20u);
        }
        fillWords(rng, rdram, kPgLevelArrays, 0x80u);
        for (uint32_t i = 0; i < 0x20u; i += 4u)
            if ((rng.next() & 3u) == 0u)
                writeTestWord(rdram, kPgLevelArrays + 0x40u + (rng.next() % 2u) * 0x20u + i, 0u);
        // Strip lists: up to four records, then the end.
        for (uint32_t list = 0; list < 4u; ++list)
        {
            const uint32_t base = kPgStrips + list * 0x80u;
            const uint32_t records = rng.next() % 5u;
            for (uint32_t r = 0; r <= records; ++r)
            {
                const uint32_t record = base + r * 0x18u;
                writeTestWord(rdram, record, (rng.next() & 3u) == 0u ? 0xFFFFFFFFu : rng.next() % 8u);
                for (uint32_t field = 4u; field < 0x14u; field += 4u)
                    writeTestWord(rdram, record + field, rng.next() % 64u);
                writeTestWord(rdram, record + 0x14u, r == records ? 0x80000000u | rng.next() : rng.next() % 6u);
            }
        }
        for (uint32_t i = 0; i < 8u; ++i)
        {
            writeTestWord(rdram, kPgVertexTable + i * 16u, smallInt(rng, -2, 3));
            fillWords(rng, rdram, kPgVertexTable + i * 16u + 4u, 12u);
        }
        writeTestWord(rdram, kPgTextures, rng.next());
        writeTestWord(rdram, kPgTextures + 4u, kPgTextures + 0x10u);
        fillWords(rng, rdram, kPgTextures + 0x10u, 4u * 40u);
        // The overrides: six words per part and level, most of them zero.
        for (uint32_t i = 0; i < 0xF0u; i += 4u)
            writeTestWord(rdram, kPgOverrides + i, (rng.next() % 6u) == 0u ? rng.next() : 0u);
        // The instance.
        fillWords(rng, rdram, kPgInst, 0x130u);
        writeTestWord(rdram, kPgInst, object);
        writeTestWord(rdram, kPgInst + 0xF4u, kPgProp);
        writeTestWord(rdram, kPgInst + 0xF8u, (rng.next() & 1u) != 0u ? kPgOverrides : 0u);
        for (uint32_t i = 0; i < 4u; ++i)
            writeTestWord(rdram, kPgInst + 0xFCu + i * 4u, kPgInstLists + i * 0x20u);
        fillWords(rng, rdram, kPgInstLists, 0x80u);
        writeTestWord(rdram, kPgInst + 0x11Cu, (rng.next() % 6u) == 0u ? 1u : 0u);
        writeTestWord(rdram, kPgInst + 0x120u, rng.next() % 2u);
        writeTestWord(rdram, kPgInst + 0x124u, (rng.next() & 3u) != 0u ? 0xFFFFu | rng.next() << 16 : rng.next());
        // The prop.
        fillSane(rng, rdram, kPgProp, 0xC0u);
        writeTestWord(rdram, kPgProp + 4u, rng.next() % 4u);
        writeTestWord(rdram, kPgProp + 8u, rng.next() % 4u);
        writeTestWord(rdram, kPgProp + 0xCu, rng.next() % 4u);
        writeTestWord(rdram, kPgProp + 0x20u, kPgPropMatrices);
        const uint32_t mode = (rng.next() % 8u) != 0u ? rng.next() % 5u : 5u + rng.next() % 3u;
        writeTestWord(rdram, kPgProp + 0x8Cu, mode);
        writeTestWord(rdram, kPgProp + 0x88u, rng.next() % 3u);
        writeTestWord(rdram, kPgProp + 0xBCu, (rng.next() & 1u) != 0u ? 0u : 1u);
        writeTestWord(rdram, kPgPropMatrices, rng.next());
        writeTestWord(rdram, kPgPropMatrices + 4u, mode != 4u && (rng.next() & 3u) == 0u ? 0u : kPgMatrices + 0xC0u);
        for (uint32_t i = 0; i < 8u; ++i)
            fillMatrix(rng, rdram, kPgMatrices + i * 0x40u);
        // The viewport.
        fillSane(rng, rdram, kPgViewport, 0x6F0u);
        const uint32_t viewportMode = rng.next() % 4u;
        writeTestWord(rdram, kPgViewport, (rng.next() % 8u) != 0u ? viewportMode : smallInt(rng, -1, 6));
        writeTestWord(rdram, kPgViewport + 0x104u, nearFloat(rng, 60.0f, 30.0f));
        writeTestWord(rdram, kPgViewport + 0x31Cu,
                      (rng.next() & 1u) != 0u ? readTestWord(rdram, kPgProp + 4u) - 0x200u : rng.next());
        for (uint32_t i = 0; i < 3u; ++i)
            writeTestWord(rdram, kPgViewport + 0x6E0u + i * 4u, kPgMatrices + i * 0x40u);
        writeTestWord(rdram, kViewportIndexPointer, kPgViewport);
        // The glow effects: two arrays of three.
        for (uint32_t i = 0; i < 6u; ++i)
        {
            const uint32_t effect = kPgEffects + i * 0x98u;
            fillSane(rng, rdram, effect, 0x98u);
            writeTestWord(rdram, effect, (rng.next() & 3u) != 0u ? rng.next() % 4u : rng.next() % 8u);
            writeTestWord(rdram, effect + 4u, rng.next() % 8u | (rng.next() % 3u) << 16);
            // Points in front of the camera, about the viewport's camera position.
            for (uint32_t axis = 0; axis < 3u; ++axis)
            {
                const float centre = static_cast<float>(static_cast<int32_t>(rng.next() % 41u) - 20);
                for (uint32_t p = 0; p < 5u; ++p)
                    writeTestWord(rdram, effect + 0x44u + p * 12u + axis * 4u,
                                  nearFloat(rng, axis == 2u ? centre + 30.0f : centre, 4.0f));
            }
            writeTestWord(rdram, effect + 0x8Cu, rng.next());
            writeTestWord(rdram, effect + 0x90u, rng.next());
            writeTestWord(rdram, effect + 0x94u, rng.next());
        }
        // Room lights, glow point buffers, the allocator, the display list.
        writeTestWord(rdram, kRoomColoursAddress, (rng.next() & 3u) == 0u ? 0u : kPgRoomColours);
        writeTestWord(rdram, kRoomIntensityAddress, kPgRoomIntensity);
        fillWords(rng, rdram, kPgRoomColours - 4u, 0x70u);
        fillWords(rng, rdram, kPgRoomIntensity, 0x70u);
        writeTestWord(rdram, kZbBufferAddress, rng.next() % 2u);
        writeTestWord(rdram, kZbBiasBufferAddress, rng.next() % 2u);
        writeTestWord(rdram, kZbGlowCountAddress, (rng.next() & 7u) == 0u ? 60u : rng.next() % 58u);
        writeTestWord(rdram, kZbFlareCountAddress, (rng.next() & 7u) == 0u ? 12u : rng.next() % 11u);
        writeTestWord(rdram, kZbPointCountAddress, rng.next() % 10u);
        for (uint32_t b = 0; b < 2u; ++b)
        {
            writeTestWord(rdram, kZbPointTables + b * 4u, kPgGlowPoints + b * 0x288u);
            writeTestWord(rdram, kZbCounts + b * 4u, (rng.next() & 7u) == 0u ? 0x48u : rng.next() % 3u);
            fillWords(rng, rdram, kPgGlowPoints + b * 0x288u, 0x288u);
            for (uint32_t p = 0; p < 0x288u; p += 0x18u)
            {
                writeTestWord(rdram, kPgGlowPoints + b * 0x288u + p, rng.next() % 4u);
                writeTestWord(rdram, kPgGlowPoints + b * 0x288u + p + 4u, rng.next() % 8u);
                writeTestWord(rdram, kPgGlowPoints + b * 0x288u + p + 8u, rng.next() % 4u);
            }
        }
        fillWords(rng, rdram, kZbGlows, 0x690u + 0x120u);
        writeTestWord(rdram, kRandomSeedAddress, rng.next());
        writeTestWord(rdram, kRandomSeedAddress + 4u, rng.next());
        writeTestWord(rdram, kLocalPlayersAddress, 1u + rng.next() % 4u);
        writeTestWord(rdram, kFrameStepAddress, smallInt(rng, 0, 3));
        writeTestWord(rdram, kTextureTableAddress, kPgTextures);
        writeTestWord(rdram, kMemdbPointerAddress, kPgMemdb);
        writeTestWord(rdram, kMemdbUsedAddress, rng.next() % 0x10000u);
        fillWords(rng, rdram, kPartCountersAddress, 12u);
        writeTestWord(rdram, kDlListAddress, kPgDisplayList);
        // The call: the root part or any, level 0 or 1.
        R5900Context *ctx = &c;
        setPointer(rng, c, 4, kPgInst);
        setSmall(rng, c, 5, 0, static_cast<int32_t>(parts) - 1);
        setSmall(rng, c, 6, 0, 1);
        (void)ctx;
    }

    // animMtxTick(): every prop (the array at gp-0x4F84, 0x250 bytes each,
    // the count at gp-0x4EA4) with a model instance (+0x20: its model, its
    // part matrices, then one output matrix array per player) gets its
    // part matrices multiplied by its own matrix (from its position and
    // angles, by its matrix mode, a jump table; the player's own prop
    // (0x353710) and kind 8 props always rotate about Y) and, for each
    // player whose flag is set (+0x10 bits 24..27), by that player's camera
    // matrix (the players at gp-0x4DD0, 0x71C bytes each, +0x6E4).
    constexpr uint32_t kPropCountAddress = kGameGp - 0x4EA4u;
    constexpr uint32_t kPropArrayAddress = kGameGp - 0x4F84u;
    constexpr uint32_t kPlayersAddress = kGameGp - 0x4DD0u;
    constexpr uint32_t kPlayerPropAddress = 0x00353710u;
    constexpr uint32_t kAmProps = kHeap + 0x000u, kAmInsts = kHeap + 0x940u, kAmModels = kHeap + 0x980u,
                       kAmMatrices = kHeap + 0xA00u, kAmPlayers = kHeap + 0x1400u, kAmCameras = kHeap + 0x3100u;
    constexpr uint32_t kAmMaxProps = 4u, kAmMaxParts = 4u;

    void setupAnimMtxTick(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        fillWords(rng, rdram, kHeap, kHeapBytes);
        const uint32_t props = (rng.next() % 8u) != 0u ? 1u + rng.next() % kAmMaxProps : 0u;
        writeTestWord(rdram, kPropCountAddress, props);
        writeTestWord(rdram, kPropArrayAddress, kAmProps);
        writeTestWord(rdram, kPlayersAddress, kAmPlayers);
        for (uint32_t m = 0; m < 2u; ++m)
        {
            const uint32_t inst = kAmInsts + m * 0x20u, model = kAmModels + m * 0x10u;
            writeTestWord(rdram, model + 4u, smallInt(rng, -1, static_cast<int32_t>(kAmMaxParts)));
            writeTestWord(rdram, inst, model);
            writeTestWord(rdram, inst + 4u, (rng.next() % 6u) == 0u ? 0u : kAmMatrices + m * 0x500u);
            for (uint32_t a = 0; a < 5u; ++a)
            {
                if (a != 0u)
                    writeTestWord(rdram, inst + 4u + a * 4u, kAmMatrices + m * 0x500u + a * 0x100u);
                for (uint32_t k = 0; k < kAmMaxParts; ++k)
                    fillMatrix(rng, rdram, kAmMatrices + m * 0x500u + a * 0x100u + k * 0x40u);
            }
        }
        for (uint32_t i = 0; i < kAmMaxProps; ++i)
        {
            const uint32_t prop = kAmProps + i * 0x250u;
            fillSane(rng, rdram, prop, 0x250u);
            writeTestWord(rdram, prop + 8u, (rng.next() & 3u) == 0u ? 8u : rng.next() % 8u);
            writeTestWord(rdram, prop + 0x10u,
                          ((rng.next() % 8u) == 0u ? 0x80000000u : 0u) | (rng.next() & 0xF0u) << 20 | (rng.next() & 0xFFFFu));
            writeTestWord(rdram, prop + 0x20u, kAmInsts + (rng.next() & 1u) * 0x20u);
            writeTestWord(rdram, prop + 0x88u, rng.next() % 3u);
            writeTestWord(rdram, prop + 0x8Cu, (rng.next() % 8u) != 0u ? rng.next() % 5u : 5u + rng.next() % 3u);
            writeTestWord(rdram, prop + 0xBCu, (rng.next() % 4u) == 0u ? 1u : 0u);
        }
        writeTestWord(rdram, kPlayerPropAddress, (rng.next() & 1u) != 0u ? kAmProps + (rng.next() % kAmMaxProps) * 0x250u : 0u);
        for (uint32_t p = 0; p < 4u; ++p)
        {
            writeTestWord(rdram, kAmPlayers + p * 0x71Cu + 0x6E4u, kAmCameras + p * 0x40u);
            fillMatrix(rng, rdram, kAmCameras + p * 0x40u);
        }
        (void)c;
    }

    // calMatrices(skeleton): a character's bone matrices for the frame. The
    // heap holds the skeleton state (+0: its node table, +4: the bone
    // matrices, +0x58: the fillet matrix base, +0x5C: the model's bone
    // remap and special indices, two animation channels at +0x60 and +0xA0
    // (animation index, frame, root position, speed, angles, wrap flags),
    // the blend at +0xE0..+0xF0, the character at +0xF4); the character
    // (kind, flags, angles, hit-react timer and matrices, the player data
    // through +0x160); the nodes (0x50 bytes before the header word that
    // counts them: kind, matrix, child and sibling bytes, a chain); the
    // animations (the table at 0x32AB60: key count, bone count, flags,
    // length, key frames, per-bone channels of kinds 0/2/4/8 and their
    // data).
    constexpr uint32_t kAnimTableAddress = 0x0032AB60u;
    constexpr uint32_t kFrameTimeAddress = kGameGp - 0x4B98u;
    constexpr uint32_t kCheatFlagsAddress = kGameGp - 0x60B4u; // three words: -0x60B4, -0x60B0, -0x60AC
    constexpr uint32_t kHeadHeightAddress = kGameGp - 0x62B0u;
    constexpr uint32_t kCmState = kHeap + 0x000u, kCmChr = kHeap + 0x100u, kCmPlayer = kHeap + 0x280u,
                       kCmNodes = kHeap + 0xE40u, kCmModel = kHeap + 0x1100u, kCmRemap = kHeap + 0x1140u,
                       kCmKinds = kHeap + 0x1160u, kCmFilletBase = kHeap + 0x11C0u, kCmMatrices = kHeap + 0x1200u,
                       kCmMatrices2 = kHeap + 0x1400u, kCmAnims = kHeap + 0x1620u, kCmKeys = kHeap + 0x1720u,
                       kCmChannels = kHeap + 0x1800u, kCmData = kHeap + 0x1C00u;
    constexpr uint32_t kCmMaxNodes = 8u, kCmMaxKeys = 6u;

    void setupCalMatrices(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        fillWords(rng, rdram, kHeap, kHeapBytes);
        // Nodes: a chain over 1..8 nodes, the header word after them.
        const uint32_t nodes = 1u + rng.next() % kCmMaxNodes;
        const uint32_t header = kCmNodes + nodes * 0x50u;
        for (uint32_t i = 0; i < nodes; ++i)
        {
            uint8_t *node = rdram + kCmNodes + i * 0x50u;
            node[0] = static_cast<uint8_t>((rng.next() % 8u) != 0u ? rng.next() % 4u : rng.next());
            node[1] = static_cast<uint8_t>((rng.next() % 8u) != 0u ? rng.next() % 8u : 0xFFu);
            node[3] = node[4] = 0xFFu;
            if (i + 1u < nodes && (rng.next() % 5u) != 0u)
                node[(rng.next() & 1u) != 0u ? 3u : 4u] = static_cast<uint8_t>(i + 1u);
        }
        writeTestWord(rdram, header, nodes);
        // The model: the bone remap, the root and special matrices, the node kinds.
        writeTestWord(rdram, kCmModel, kCmRemap);
        writeTestWord(rdram, kCmModel + 0xCu, rng.next() % 8u);
        const uint32_t first = rng.next() % 8u;
        writeTestWord(rdram, kCmModel + 0x10u, first);
        writeTestWord(rdram, kCmModel + 0x14u, (rng.next() & 3u) == 0u ? (first + 7u) % 8u : first + rng.next() % (8u - first));
        writeTestWord(rdram, kCmModel + 0x18u, rng.next() % 8u);
        writeTestWord(rdram, kCmModel + 0x1Cu, rng.next() % 8u);
        writeTestWord(rdram, kCmModel + 0x20u, kCmKinds);
        for (uint32_t i = 0; i < 8u; ++i)
        {
            writeTestWord(rdram, kCmRemap + i * 4u, rng.next() % 8u);
            writeTestWord(rdram, kCmKinds + i * 4u, 5u + rng.next() % 8u);
        }
        for (uint32_t i = 0; i < 8u; ++i)
        {
            fillMatrix(rng, rdram, kCmMatrices + i * 0x40u);
            fillMatrix(rng, rdram, kCmMatrices2 + i * 0x40u);
        }
        writeTestWord(rdram, kCmFilletBase, kCmMatrices2);
        writeTestWord(rdram, kCmFilletBase + 0xCu, rng.next() % 3u);
        // The animations.
        for (uint32_t a = 0; a < 4u; ++a)
        {
            const uint32_t anim = kCmAnims + a * 0x40u, keys = kCmKeys + a * 0x20u, channels = kCmChannels + a * 0x100u;
            writeTestWord(rdram, kAnimTableAddress + a * 4u, anim);
            const uint32_t keyCount = 1u + rng.next() % kCmMaxKeys;
            writeTestWord(rdram, anim + 4u, keyCount);
            writeTestWord(rdram, anim + 8u, smallInt(rng, 0, 8));
            writeTestWord(rdram, anim + 0xCu, rng.next() % 4u);
            int32_t key = 0;
            for (uint32_t k = 0; k < kCmMaxKeys; ++k)
            {
                key += 1 + static_cast<int32_t>(rng.next() % 40u);
                writeTestWord(rdram, keys + k * 4u, static_cast<uint32_t>((rng.next() % 16u) == 0u ? key - 50 : key));
            }
            writeTestWord(rdram, anim + 0x14u, keys);
            const float length = (rng.next() % 8u) == 0u ? 0.0f : static_cast<float>(key) / 60.0f;
            writeTestWord(rdram, anim + 0x10u, bitsOf(length));
            writeTestWord(rdram, anim + 0x20u, channels);
            static const uint32_t kKinds[] = {0u, 2u, 4u, 8u, 1u, 3u};
            for (uint32_t b = 0; b < 8u; ++b)
            {
                const uint32_t pick = rng.next() % 8u;
                writeTestWord(rdram, channels + b * 32u + 4u, pick < 6u ? kKinds[pick] : rng.next() % 16u);
                writeTestWord(rdram, channels + b * 32u + 0x14u, kCmData + (rng.next() % 8u) * 0x100u);
            }
        }
        fillSane(rng, rdram, kCmData, 0x800u);
        // The state.
        fillSane(rng, rdram, kCmState, 0x100u);
        writeTestWord(rdram, kCmState, header);
        writeTestWord(rdram, kCmState + 4u, kCmMatrices);
        writeTestWord(rdram, kCmState + 0x58u, kCmFilletBase);
        writeTestWord(rdram, kCmState + 0x5Cu, kCmModel);
        for (uint32_t ch = 0; ch < 2u; ++ch)
        {
            const uint32_t channel = kCmState + 0x60u + ch * 0x40u;
            writeTestWord(rdram, channel, rng.next() % 4u);
            writeTestWord(rdram, channel + 4u, nearFloat(rng, 1.0f, (rng.next() & 3u) == 0u ? 8.0f : 1.0f));
            writeTestWord(rdram, channel + 0x2Cu, nearFloat(rng, 1.0f, 1.0f));
            writeTestWord(rdram, channel + 0x38u, rng.next() % 2u);
            writeTestWord(rdram, channel + 0x3Cu, rng.next() % 3u);
        }
        writeTestWord(rdram, kCmState + 0x98u, rng.next());
        writeTestWord(rdram, kCmState + 0xD8u, rng.next());
        writeTestWord(rdram, kCmState + 0xE0u, (rng.next() & 1u) != 0u ? 0u : nearFloat(rng, 0.5f, 0.5f));
        writeTestWord(rdram, kCmState + 0xE8u, nearFloat(rng, 0.25f, 0.25f));
        writeTestWord(rdram, kCmState + 0xF4u, kCmChr);
        // The character and its player data.
        fillSane(rng, rdram, kCmChr, 0x180u);
        writeTestWord(rdram, kCmChr + 8u, (rng.next() & 1u) != 0u ? 0x1000u : rng.next() % 4u);
        writeTestWord(rdram, kCmChr + 0xCu, (rng.next() & 1u) != 0u ? 0xC9u + rng.next() % 5u : rng.next() % 0x100u);
        writeTestWord(rdram, kCmChr + 0x10u, rng.next());
        writeTestWord(rdram, kCmChr + 0x20u, kCmState);
        writeTestWord(rdram, kCmChr + 0x4Cu, nearFloat(rng, 180.0f, 180.0f));
        writeTestWord(rdram, kCmChr + 0x50u, nearFloat(rng, 180.0f, 180.0f));
        writeTestWord(rdram, kCmChr + 0x54u, nearFloat(rng, 180.0f, 200.0f));
        writeTestWord(rdram, kCmChr + 0xC8u, (rng.next() & 1u) != 0u ? 0u : nearFloat(rng, 10.0f, 10.0f));
        writeTestWord(rdram, kCmChr + 0x150u, smallInt(rng, -1, 7));
        writeTestWord(rdram, kCmChr + 0x154u, smallInt(rng, -1, 7));
        writeTestWord(rdram, kCmChr + 0x160u, kCmPlayer);
        fillSane(rng, rdram, kCmPlayer, 0xBA0u);
        writeTestWord(rdram, kCmPlayer, rng.next() % 5u);
        writeTestWord(rdram, kCmPlayer + 4u, (rng.next() & 1u) != 0u ? 0x18u : rng.next() % 0x20u);
        writeTestWord(rdram, kCmPlayer + 8u, (rng.next() & 1u) != 0u ? 1u : readTestWord(rdram, kCmPlayer + 8u));
        // Globals: the frame time, the local players, the cheat flags.
        writeTestWord(rdram, kFrameTimeAddress, nearFloat(rng, 1.0f, 1.0f));
        writeTestWord(rdram, kLocalPlayersAddress, 1u + rng.next() % 4u);
        for (uint32_t i = 0; i < 3u; ++i)
            writeTestWord(rdram, kCheatFlagsAddress + i * 4u, (rng.next() & 1u) != 0u ? 0xFFFFFFFFu : rng.next());
        writeTestWord(rdram, kHeadHeightAddress, nearFloat(rng, 0.0f, 4.0f));
        setPointer(rng, c, 4, kCmState);
    }

    // rotateChr(chr): a character's facing (+0x4C, +0x50, +0x54) turned
    // toward its target or aim (the player data through +0x160: flags at
    // +0xA94/+0xA9C, the target prop +0xAE4 and aim point, turn speed
    // +0xB40, aim pitch +0xB98, eye offset +0xBC0), in the game's soft
    // doubles. Its animation (+0x20: the state, its two channel animation
    // indices and +0x58 the mount state), the turn table (gp-0x5D14, 0x1C
    // bytes each) and the player list (0x3823E8, the count at gp-0x4B10)
    // pick special cases.
    constexpr uint32_t kTurnTableAddress = kGameGp - 0x5D14u;
    constexpr uint32_t kPlayerCountAddress = kGameGp - 0x4B10u;
    constexpr uint32_t kPlayerListAddress = 0x003823E8u;
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
        // The animation state.
        fillWords(rng, rdram, kRcState, 0x100u);
        static const uint32_t kAnims[] = {0x236u, 0x24Au, 0x25Eu, 0x1D7u, 0x1D8u, 0x1FDu, 0x1FEu, 0x20Cu, 0x211u, 0x1DDu, 0x1DEu, 0x1BBu};
        for (uint32_t ch = 0; ch < 2u; ++ch)
            writeTestWord(rdram, kRcState + 0x60u + ch * 0x40u,
                          (rng.next() & 1u) != 0u ? kAnims[rng.next() % 12u] : rng.next() % 0x280u);
        writeTestWord(rdram, kRcState + 0x58u, kRcMount);
        writeTestWord(rdram, kRcMount + 0xCu, rng.next() % 3u);
        // The player data.
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
        // The target.
        fillSane(rng, rdram, kRcTarget, 0x210u);
        writeTestWord(rdram, kRcTarget + 4u, (rng.next() & 1u) != 0u ? 0xC9u + rng.next() % 2u : rng.next() % 0x100u);
        static const uint32_t kKinds[] = {1u, 8u, 0x40u, 0x100u, 2u, 0x20u};
        writeTestWord(rdram, kRcTarget + 8u, kKinds[rng.next() % 6u]);
        writeTestWord(rdram, kRcTarget + 0x160u, kRcPlayer);
        // The turn table and the other players.
        writeTestWord(rdram, kTurnTableAddress, kRcTurns);
        fillSane(rng, rdram, kRcTurns, 8u * 0x1Cu);
        const uint32_t others = rng.next() % 5u;
        writeTestWord(rdram, kPlayerCountAddress, others);
        for (uint32_t k = 0; k < 4u; ++k)
        {
            writeTestWord(rdram, kPlayerListAddress + k * 8u, rng.next());
            writeTestWord(rdram, kPlayerListAddress + k * 8u + 4u, kRcOthers + k * 0x170u);
            writeTestWord(rdram, kRcOtherData + k * 0x30u + 0x10u, rng.next() % 4u);
            writeTestWord(rdram, kRcOtherData + k * 0x30u + 0x24u, rng.next() % 8u);
        }
        // The other players' data pointers sit at +0x160 of their records.
        for (uint32_t k = 0; k < 4u; ++k)
            writeTestWord(rdram, kRcOthers + k * 0x170u + 0x160u, kRcOtherData + k * 0x30u);
        writeTestWord(rdram, kFrameTimeAddress, nearFloat(rng, 1.0f, 1.0f));
        setPointer(rng, c, 4, kRcChr);
    }

    // obinstCalcAmbientLight(inst, colour): an object's ambient colour,
    // from the room geometry below it. The heap holds the instance (+4 the
    // prop it rides, +0xF4 its prop data, +0x124 its mask, +0x138 a flash),
    // the prop data (kind +8, room +0xC, position +0x30 and last position
    // +0x70, the cached colour +0x21C, links +0xBC/+0x160/+0x164), two
    // players (gp-0x4DD0, 0x71C bytes apart: position, room, guns), the
    // room colour table (gp-0x4CCC), the rooms (gp-0x5D90, count gp-0x5D9C:
    // one shared room instance whose nodes (0x50 bytes before their count)
    // carry per-level strip lists, vertex blocks and a box per strip
    // record; the strips' headers (vertex count, last-strip and flip bits),
    // vertices and colours) and the portals between rooms (gp-0x5DC0/
    // -0x5DBC, each room listing only portals to higher rooms, so that the
    // walk down through rooms ends).
    constexpr uint32_t kPropBaseAddress = kGameGp - 0x5D6Cu;
    constexpr uint32_t kFrameCountAddress = kGameGp - 0x6258u;
    constexpr uint32_t kRoomCountAddress = kGameGp - 0x5D9Cu;
    constexpr uint32_t kRoomArrayAddress = kGameGp - 0x5D90u;
    constexpr uint32_t kAmInst = kHeap + 0x000u, kAmRide = kHeap + 0x180u, kAmData = kHeap + 0x200u,
                       kAmTarget = kHeap + 0x440u, kAmLink = kHeap + 0x500u, kAmLinkData = kHeap + 0x600u,
                       kAmPlayerData = kHeap + 0x840u, kAmGunIds = kHeap + 0x1360u, kAmGuns = kHeap + 0x1380u,
                       kAmPlayerBase = kHeap + 0x1400u, kAmColours = kHeap + 0x1E80u, kAmRoomPointers = kHeap + 0x1F20u,
                       kAmRooms = kHeap + 0x1F40u, kAmRoomInst = kHeap + 0x2000u, kAmOverrides = kHeap + 0x2100u,
                       kAmNodes = kHeap + 0x21C0u, kAmStrips = kHeap + 0x2310u, kAmBoxes = kHeap + 0x24A0u,
                       kAmHeaders = kHeap + 0x2700u, kAmVertices = kHeap + 0x2900u, kAmVertexColours = kHeap + 0x2C00u,
                       kAmPortalRooms = kHeap + 0x2D00u, kAmPortalLists = kHeap + 0x2DE0u,
                       kAmPortalPointers = kHeap + 0x2E80u, kAmPortals = kHeap + 0x2F00u;

    void setupAmbientLight(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        fillWords(rng, rdram, kHeap, kHeapBytes);
        // The prop data and its position.
        fillSane(rng, rdram, kAmData, 0x230u);
        static const uint32_t kKinds[] = {0x800u, 8u, 0x800u, 8u, 1u, 4u};
        const uint32_t kind = kKinds[rng.next() % 6u];
        writeTestWord(rdram, kAmData + 8u, kind);
        // +0xC: the room, or for a character its kind (0xC9.. players).
        writeTestWord(rdram, kAmData + 0xCu,
                      (rng.next() % 3u) == 0u ? 0xC9u + rng.next() % 2u : smallInt(rng, (rng.next() % 8u) == 0u ? -1 : 1, 4));
        const float px = static_cast<float>(static_cast<int32_t>(rng.next() % 9u) - 4),
                    pz = static_cast<float>(static_cast<int32_t>(rng.next() % 9u) - 4);
        writeTestWord(rdram, kAmData + 0x30u, bitsOf(px));
        writeTestWord(rdram, kAmData + 0x34u, nearFloat(rng, 2.0f, 2.0f));
        writeTestWord(rdram, kAmData + 0x38u, bitsOf(pz));
        for (uint32_t a = 0; a < 3u; ++a)
            writeTestWord(rdram, kAmData + 0x70u + a * 4u,
                          (rng.next() & 1u) != 0u ? readTestWord(rdram, kAmData + 0x30u + a * 4u) : randomSaneFloatBits(rng));
        writeTestWord(rdram, kAmData + 0xBCu, (rng.next() & 3u) == 0u ? kAmLink : 0u);
        writeTestWord(rdram, kAmData + 0x160u, kAmPlayerData);
        writeTestWord(rdram, kAmData + 0x164u, (rng.next() & 1u) != 0u ? kAmTarget : 0u);
        writeTestWord(rdram, kAmData + 0x21Cu, (rng.next() & 1u) != 0u ? 0xFFFFFFFFu : rng.next());
        fillSane(rng, rdram, kAmTarget, 0xB0u);
        fillSane(rng, rdram, kAmPlayerData + 0xAF0u, 0x20u);
        writeTestWord(rdram, kAmLink + 0xF4u, kAmLinkData);
        writeTestWord(rdram, kAmLinkData + 0x21Cu, rng.next());
        // The instance.
        fillSane(rng, rdram, kAmInst, 0x150u);
        writeTestWord(rdram, kAmInst + 4u, kAmRide);
        fillSane(rng, rdram, kAmRide, 0x40u);
        writeTestWord(rdram, kAmInst + 0xF4u, kAmData);
        writeTestWord(rdram, kAmInst + 0x124u, (rng.next() & 3u) != 0u ? 0xFFFFu : rng.next() & 0xFFFFu);
        writeTestWord(rdram, kAmInst + 0x138u, (rng.next() & 1u) != 0u ? 0u : nearFloat(rng, 0.5f, 0.5f));
        writeTestWord(rdram, kPropBaseAddress, kAmInst - (rng.next() % 8u) * 0x40u);
        writeTestWord(rdram, kFrameCountAddress, rng.next() % 64u);
        writeTestWord(rdram, kFrameStepAddress, smallInt(rng, 0, 3));
        // Two players and their guns.
        writeTestWord(rdram, kPlayersAddress, kAmPlayerBase);
        for (uint32_t k = 0; k < 2u; ++k)
        {
            const uint32_t player = kAmPlayerBase + k * 0x71Cu;
            fillSane(rng, rdram, player + 0x90u, 0x20u);
            fillSane(rng, rdram, player + 0x150u, 0x20u);
            writeTestWord(rdram, player + 0x98u, bitsOf(px));
            writeTestWord(rdram, player + 0x9Cu, nearFloat(rng, 2.0f, 2.0f));
            writeTestWord(rdram, player + 0xA0u, bitsOf(pz));
            writeTestWord(rdram, player + 0x31Cu, smallInt(rng, 1, 4));
            writeTestWord(rdram, player + 0x1A4u, (rng.next() & 1u) != 0u ? kAmGuns : 0u);
            writeTestWord(rdram, player + 0x264u, (rng.next() & 1u) != 0u ? kAmGuns + 0x30u : 0u);
            writeTestWord(rdram, player + 0x244u, kAmGunIds);
            writeTestWord(rdram, player + 0x304u, kAmGunIds + 4u);
        }
        writeTestWord(rdram, kAmGunIds, rng.next() % 12u);
        writeTestWord(rdram, kAmGunIds + 4u, rng.next() % 12u);
        for (uint32_t g = 0; g < 2u; ++g)
        {
            writeTestWord(rdram, kAmGuns + g * 0x30u + 0x20u, (rng.next() & 1u) != 0u ? kAmInst : kAmLink);
            writeTestWord(rdram, kAmLink + 0x124u, rng.next());
        }
        // The room colours: entry r - 1 for room r.
        writeTestWord(rdram, kRoomColoursAddress, (rng.next() % 4u) == 0u ? 0u : kAmColours + 0x18u);
        for (uint32_t r = 0; r < 6u; ++r)
            writeTestWord(rdram, kAmColours + r * 0x18u, smallInt(rng, 0, 4));
        // The rooms: one shared instance.
        const uint32_t rooms = 4u;
        writeTestWord(rdram, kRoomCountAddress, rooms);
        writeTestWord(rdram, kRoomArrayAddress, kAmRoomPointers);
        for (uint32_t r = 0; r <= rooms; ++r)
        {
            writeTestWord(rdram, kAmRoomPointers + r * 4u, kAmRooms + (r % 4u) * 0x30u);
            writeTestWord(rdram, kAmRooms + (r % 4u) * 0x30u + 0x20u, kAmRoomInst);
        }
        const uint32_t nodes = 1u + rng.next() % 4u;
        const uint32_t header = kAmNodes + nodes * 0x50u;
        writeTestWord(rdram, header, nodes);
        writeTestWord(rdram, kAmRoomInst, header);
        writeTestWord(rdram, kAmRoomInst + 0xF8u, kAmOverrides);
        for (uint32_t i = 0; i < 0xC0u; i += 4u)
            writeTestWord(rdram, kAmOverrides + i, (rng.next() % 3u) == 0u ? kAmVertexColours + (rng.next() % 16u) * 4u : 0u);
        for (uint32_t n = 0; n < nodes; ++n)
        {
            const uint32_t node = kAmNodes + n * 0x50u;
            writeTestWord(rdram, node + 8u, (rng.next() % 6u) != 0u ? kAmStrips + (rng.next() % 4u) * 0x60u : 0u);
            writeTestWord(rdram, node + 0xCu, (rng.next() % 6u) != 0u ? kAmStrips + (rng.next() % 4u) * 0x60u : 0u);
            for (uint32_t level = 0; level < 2u; ++level)
            {
                const uint32_t block = node + 0x14u + level * 0x18u;
                writeTestWord(rdram, block, kAmHeaders);
                writeTestWord(rdram, block + 4u, kAmVertices);
                writeTestWord(rdram, block + 0xCu, kAmVertexColours + (rng.next() % 8u) * 4u);
            }
            writeTestWord(rdram, node + 0x44u, (rng.next() & 1u) != 0u ? 0u : 1u << (rng.next() % 16u));
            writeTestWord(rdram, node + 0x4Cu, (rng.next() % 8u) != 0u ? kAmBoxes + n * 0x90u : 0u);
            // Boxes about the drop below the prop, or off to the side.
            for (uint32_t b = 0; b < 4u; ++b)
            {
                const uint32_t box = kAmBoxes + n * 0x90u + b * 0x24u;
                const float off = (rng.next() & 3u) == 0u ? 50.0f : 0.0f;
                writeTestWord(rdram, box, bitsOf(px - 3.0f + off));
                writeTestWord(rdram, box + 4u, nearFloat(rng, -6.0f, 4.0f));
                writeTestWord(rdram, box + 8u, bitsOf(pz - 3.0f));
                writeTestWord(rdram, box + 0xCu, bitsOf(px + 3.0f + off));
                writeTestWord(rdram, box + 0x10u, nearFloat(rng, 4.0f, 4.0f));
                writeTestWord(rdram, box + 0x14u, bitsOf(pz + 3.0f));
                writeTestWord(rdram, box + 0x18u, (rng.next() & 1u) != 0u ? 0u : 1u);
            }
        }
        // Strip records, headers, vertices about the drop, colours.
        for (uint32_t l = 0; l < 4u; ++l)
        {
            const uint32_t records = rng.next() % 4u;
            for (uint32_t s = 0; s <= records; ++s)
            {
                const uint32_t record = kAmStrips + l * 0x60u + s * 0x18u;
                writeTestWord(rdram, record + 4u, rng.next() % 24u);
                writeTestWord(rdram, record + 0xCu, rng.next() % 40u);
                writeTestWord(rdram, record + 0x14u, s == records ? 0x80000000u | rng.next() : rng.next() % 8u);
            }
        }
        for (uint32_t h = 0; h < 32u; ++h)
        {
            const uint32_t count = 2u + rng.next() % 5u;
            const uint32_t last = (rng.next() & 1u) != 0u || (h % 2u) == 1u ? 0x8000u : 0u;
            writeTestWord(rdram, kAmHeaders + h * 16u, count | last | (rng.next() & 3u) << 16);
        }
        for (uint32_t v = 0; v < 64u; ++v)
        {
            writeTestWord(rdram, kAmVertices + v * 12u, nearFloat(rng, px, 6.0f));
            writeTestWord(rdram, kAmVertices + v * 12u + 4u, nearFloat(rng, -2.0f, 2.0f));
            writeTestWord(rdram, kAmVertices + v * 12u + 8u, nearFloat(rng, pz, 6.0f));
        }
        fillWords(rng, rdram, kAmVertexColours, 0x100u);
        // Portals: portal p joins a room to a higher one, and only the
        // lower room lists it, so the walk down through rooms ends.
        writeTestWord(rdram, kRoomTableAddress, kAmPortalRooms);
        writeTestWord(rdram, kPortalTableAddress, kAmPortalPointers);
        uint32_t lows[6];
        for (uint32_t p = 0; p < 6u; ++p)
        {
            const uint32_t portal = kAmPortals + p * 0x80u;
            writeTestWord(rdram, kAmPortalPointers + p * 4u, portal);
            const uint32_t low = 1u + rng.next() % 3u;
            const uint32_t high = low + 1u + rng.next() % (4u - low);
            lows[p] = low;
            const bool flip = (rng.next() & 1u) != 0u;
            writeTestWord(rdram, portal, flip ? high : low);
            writeTestWord(rdram, portal + 4u, flip ? low : high);
            fillSane(rng, rdram, portal + 8u, 12u);
            const uint32_t vertices = 3u + rng.next() % 3u;
            writeTestWord(rdram, portal + 0x14u, vertices | (rng.next() << 16));
            for (uint32_t v = 0; v < 6u; ++v)
            {
                writeTestWord(rdram, portal + 0x18u + v * 12u, nearFloat(rng, px * 0.5f, 6.0f));
                writeTestWord(rdram, portal + 0x18u + v * 12u + 4u, nearFloat(rng, -4.0f, 4.0f));
                writeTestWord(rdram, portal + 0x18u + v * 12u + 8u, nearFloat(rng, pz * 0.5f, 6.0f));
            }
        }
        for (uint32_t r = 0; r < 5u; ++r)
        {
            const uint32_t list = kAmPortalLists + r * 0x20u;
            writeTestWord(rdram, kAmPortalRooms + r * 0x2Cu + 4u, list);
            uint32_t count = 0;
            for (uint32_t p = 0; p < 6u; ++p)
                if (lows[p] == r && (rng.next() % 3u) != 0u)
                    writeTestWord(rdram, list + 4u + count++ * 4u, p);
            writeTestWord(rdram, list, count);
        }
        setPointer(rng, c, 4, kAmInst);
        setOperand(rng, c, 5);
    }

    // bgBulletGetClosest(inst, from, &intensity): the light a character or
    // prop takes from the bullets and explosions near it, cached in its
    // prop data (+0x224 colour, +0x228 position, refreshed one frame in
    // four by its index). The heap holds the instance, its prop data, two
    // players (gp-0x4DD0, 0x71C bytes apart: their guns and gun
    // positions), the bullets (gp-0x46B8, 20 of 0x114 bytes: kind and
    // position) and the explosion particles (a list from 0x1FE99F0, linked
    // through +0x44: position, size, colour index +0x3A0, 0x45 trail values
    // from +0x704). The
    // debug light record at 0x1FC5E00 is written.
    constexpr uint32_t kBulletArrayAddress = kGameGp - 0x46B8u;
    constexpr uint32_t kParticleListAddress = 0x01FE99F0u;
    constexpr uint32_t kDebugLightAddress = 0x01FC5E00u;
    constexpr uint32_t kBgInst = kHeap + 0x000u, kBgData = kHeap + 0x100u, kBgPlayers = kHeap + 0x400u,
                       kBgGuns = kHeap + 0xE40u, kBgGunOwners = kHeap + 0xEC0u, kBgGunIds = kHeap + 0xFF0u,
                       kBgBullets = kHeap + 0x1000u, kBgParticles = kHeap + 0x2600u;

    void setupBulletGetClosest(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        fillWords(rng, rdram, kHeap, kHeapBytes);
        fillSane(rng, rdram, kBgInst, 0x100u);
        writeTestWord(rdram, kBgInst + 0xF4u, kBgData);
        fillSane(rng, rdram, kBgData, 0x240u);
        writeTestWord(rdram, kBgData + 0xCu, (rng.next() & 1u) != 0u ? 0xC9u + rng.next() % 2u : rng.next() % 0xC0u);
        writeTestWord(rdram, kBgData + 0x224u, (rng.next() & 1u) != 0u ? 0xFFFFFFFFu : rng.next());
        writeTestWord(rdram, kPropBaseAddress, kBgInst - (rng.next() % 8u) * 0x40u);
        writeTestWord(rdram, kFrameCountAddress, rng.next() % 64u);
        writeTestWord(rdram, kFrameStepAddress, smallInt(rng, 0, 3));
        // The players and their guns.
        writeTestWord(rdram, kPlayersAddress, kBgPlayers);
        for (uint32_t k = 0; k < 2u; ++k)
        {
            const uint32_t player = kBgPlayers + k * 0x71Cu;
            fillSane(rng, rdram, player + 0xE0u, 0x10u);
            fillSane(rng, rdram, player + 0x198u, 0x24u);
            fillSane(rng, rdram, player + 0x258u, 0x24u);
            writeTestWord(rdram, player + 0x1A4u, (rng.next() & 1u) != 0u ? kBgGuns : 0u);
            writeTestWord(rdram, player + 0x264u, (rng.next() & 1u) != 0u ? kBgGuns + 0x30u : 0u);
            writeTestWord(rdram, player + 0x244u, kBgGunIds);
            writeTestWord(rdram, player + 0x304u, kBgGunIds + 4u);
        }
        for (uint32_t g = 0; g < 2u; ++g)
        {
            writeTestWord(rdram, kBgGuns + g * 0x30u + 0x20u, kBgGunOwners);
            writeTestWord(rdram, kBgGunIds + g * 4u, rng.next() % 12u);
        }
        writeTestWord(rdram, kBgGunOwners + 0x124u, rng.next());
        // The bullets about the light's position.
        writeTestWord(rdram, kBulletArrayAddress, kBgBullets);
        for (uint32_t b = 0; b < 20u; ++b)
        {
            const uint32_t bullet = kBgBullets + b * 0x114u;
            writeTestWord(rdram, bullet, (rng.next() & 1u) != 0u ? rng.next() % 20u : 0u);
            for (uint32_t a = 0; a < 3u; ++a)
                writeTestWord(rdram, bullet + 0x18u + a * 4u, nearFloat(rng, 0.0f, 16.0f));
        }
        // Up to two explosion particles.
        const uint32_t particles = rng.next() % 3u;
        writeTestWord(rdram, kParticleListAddress, particles != 0u ? kBgParticles : 0u);
        for (uint32_t p = 0; p < 2u; ++p)
        {
            const uint32_t particle = kBgParticles + p * 0x818u;
            fillSane(rng, rdram, particle, 0x48u);
            for (uint32_t a = 0; a < 3u; ++a)
                writeTestWord(rdram, particle + 0x1Cu + a * 4u, nearFloat(rng, 0.0f, 16.0f));
            writeTestWord(rdram, particle + 0xCu, nearFloat(rng, 1.0f, 1.0f));
            writeTestWord(rdram, particle + 0x44u, p + 1u < particles ? particle + 0x818u : 0u);
            writeTestWord(rdram, particle + 0x3A0u, rng.next() % 8u); // its colour (0x36A1C8, 8 bytes each)
            for (uint32_t i = 0; i < 0x45u; ++i)
                writeTestWord(rdram, particle + 0x704u + i * 4u, nearFloat(rng, 0.5f, 0.6f));
        }
        fillSane(rng, rdram, kDebugLightAddress, 0x30u);
        R5900Context *ctx = &c;
        setOperand(rng, c, 5);
        fillSane(rng, rdram, GPR_U32(ctx, 5), 12u);
        setOperand(rng, c, 6);
        setPointer(rng, c, 4, kBgInst);
    }

    // moveTest(player, from, to, &result, &floorPolygon, update, height,
    // radius): a move tested against the walls and floors of the rooms its
    // box meets (bounding boxes at gp-0x5DCC, 0x30 bytes per room from room
    // 1: floor box then wall box; walls and floors through the room table
    // gp-0x5DC0: +8 floor polygon list, +0xC wall list, +0x10 glass list),
    // sliding along the wall it hits (a self-call), then dropped onto the
    // floor. The player's move state (gp-0x4DC8, 0x1210 bytes per player:
    // +0x1194..+0x11BC) is read and written. Props and glass are left out
    // (their tests reach the prop handlers and glass smashing): the prop
    // counts (gp-0x4704/-0x4708) are zero and the rooms list no glass.
    constexpr uint32_t kMoveStateAddress = kGameGp - 0x4DC8u;
    constexpr uint32_t kRoomBoxesAddress = kGameGp - 0x5DCCu;
    constexpr uint32_t kPropCountsAddress = kGameGp - 0x4708u; // two words: -0x4708, -0x4704
    constexpr uint32_t kSlideAddress = kGameGp - 0x46D8u;      // two floats: the last slide direction
    constexpr uint32_t kMvState = kHeap - 0xB00u, kMvBoxes = kHeap + 0x2000u, kMvRooms = kHeap + 0x2100u,
                       kMvRoomPointers = kHeap + 0x2200u, kMvRoomObjects = kHeap + 0x2220u,
                       kMvRoomInst = kHeap + 0x2280u, kMvWallLists = kHeap + 0x2400u, kMvWalls = kHeap + 0x2480u,
                       kMvFloorLists = kHeap + 0x2600u, kMvFloors = kHeap + 0x2700u;

    void setupMoveTest(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        fillWords(rng, rdram, kHeap, kHeapBytes);
        R5900Context *ctx = &c;
        const uint32_t player = rng.next() % 2u;
        writeTestWord(rdram, kMoveStateAddress, kMvState);
        const uint32_t state = kMvState + player * 0x1210u;
        writeTestWord(rdram, state + 0xBCCu, rng.next());
        fillSane(rng, rdram, state + 0x1194u, 0x2Cu);
        writeTestWord(rdram, state + 0x1194u, rng.next() % 2u);
        writeTestWord(rdram, state + 0x119Cu, rng.next());
        writeTestWord(rdram, state + 0x11B4u, 0u);
        writeTestWord(rdram, kPropCountsAddress, 0u);
        writeTestWord(rdram, kPropCountsAddress + 4u, 0u);
        fillSane(rng, rdram, kSlideAddress, 8u);
        // The move: from about the origin, a short step.
        setOperand(rng, c, 5);
        uint32_t to;
        do
        {
            setOperand(rng, c, 6);
            to = GPR_U32(ctx, 6);
        } while ((to & ~0x3Fu) == (GPR_U32(ctx, 5) & ~0x3Fu));
        const uint32_t from = GPR_U32(ctx, 5);
        writeTestWord(rdram, from, nearFloat(rng, 0.0f, 6.0f));
        writeTestWord(rdram, from + 4u, nearFloat(rng, 0.5f, 1.0f));
        writeTestWord(rdram, from + 8u, nearFloat(rng, 0.0f, 6.0f));
        const uint32_t still = rng.next() % 8u;
        for (uint32_t a = 0; a < 3u; ++a)
            writeTestWord(rdram, to + a * 4u,
                          still == 0u ? readTestWord(rdram, from + a * 4u)
                                      : bitsOf(floatOf(readTestWord(rdram, from + a * 4u)) +
                                               (a == 1u ? 0.0f : floatOf(nearFloat(rng, 0.0f, 2.0f)))));
        // Rooms 1..4: boxes over the area, walls and floors.
        const uint32_t rooms = 1u + rng.next() % 4u;
        writeTestWord(rdram, kRoomCountAddress, rooms);
        writeTestWord(rdram, kRoomBoxesAddress, kMvBoxes);
        writeTestWord(rdram, kRoomTableAddress, kMvRooms);
        writeTestWord(rdram, kRoomArrayAddress, kMvRoomPointers);
        for (uint32_t r = 1u; r <= 4u; ++r)
        {
            const uint32_t box = kMvBoxes + r * 0x30u;
            const float cx = static_cast<float>(static_cast<int32_t>(rng.next() % 9u) - 4),
                        cz = static_cast<float>(static_cast<int32_t>(rng.next() % 9u) - 4);
            for (uint32_t half = 0; half < 2u; ++half)
            {
                const uint32_t b = box + half * 0x18u;
                writeTestWord(rdram, b, bitsOf(cx - 8.0f));
                writeTestWord(rdram, b + 4u, nearFloat(rng, -4.0f, 4.0f));
                writeTestWord(rdram, b + 8u, bitsOf(cz - 8.0f));
                writeTestWord(rdram, b + 0xCu, bitsOf(cx + 8.0f));
                writeTestWord(rdram, b + 0x10u, nearFloat(rng, 6.0f, 4.0f));
                writeTestWord(rdram, b + 0x14u, bitsOf(cz + 8.0f));
            }
            const uint32_t room = kMvRooms + r * 0x2Cu;
            writeTestWord(rdram, room + 8u, kMvFloorLists + (rng.next() % 4u) * 0x10u);
            writeTestWord(rdram, room + 0xCu, kMvWallLists + (rng.next() % 4u) * 0x14u);
            writeTestWord(rdram, room + 0x10u, 0u);
            writeTestWord(rdram, kMvRoomPointers + r * 4u, kMvRoomObjects + r * 0x24u - 0x24u);
            writeTestWord(rdram, kMvRoomObjects + r * 0x24u - 0x24u + 0x20u, kMvRoomInst);
        }
        writeTestWord(rdram, kMvRoomInst + 0x124u, (rng.next() & 3u) != 0u ? 0xFFFFu : rng.next() & 0xFFFFu);
        // Wall lists (up to four walls, null-ended) and walls about the move.
        for (uint32_t l = 0; l < 4u; ++l)
        {
            const uint32_t count = rng.next() % 5u;
            for (uint32_t i = 0; i < count; ++i)
                writeTestWord(rdram, kMvWallLists + l * 0x14u + i * 4u, kMvWalls + (rng.next() % 8u) * 0x20u);
            writeTestWord(rdram, kMvWallLists + l * 0x14u + count * 4u, 0u);
        }
        const float fx = floatOf(readTestWord(rdram, from)), fz = floatOf(readTestWord(rdram, from + 8u));
        for (uint32_t w = 0; w < 8u; ++w)
        {
            const uint32_t wall = kMvWalls + w * 0x20u;
            writeTestWord(rdram, wall, (rng.next() & 1u) != 0u ? 0u : rng.next() & 0xFFFFu);
            writeTestWord(rdram, wall + 4u, nearFloat(rng, fx, 3.0f));
            writeTestWord(rdram, wall + 8u, nearFloat(rng, -1.0f, 2.0f));
            writeTestWord(rdram, wall + 0xCu, nearFloat(rng, fz, 3.0f));
            writeTestWord(rdram, wall + 0x10u, nearFloat(rng, 4.0f, 3.0f));
            writeTestWord(rdram, wall + 0x14u, nearFloat(rng, fx, 3.0f));
            writeTestWord(rdram, wall + 0x18u, nearFloat(rng, -1.0f, 2.0f));
            writeTestWord(rdram, wall + 0x1Cu, nearFloat(rng, fz, 3.0f));
        }
        // Floor lists (up to three polygons, null-ended) and polygons about the move.
        for (uint32_t l = 0; l < 4u; ++l)
        {
            const uint32_t count = rng.next() % 4u;
            for (uint32_t i = 0; i < count; ++i)
                writeTestWord(rdram, kMvFloorLists + l * 0x10u + i * 4u, kMvFloors + (rng.next() % 6u) * 0x80u);
            writeTestWord(rdram, kMvFloorLists + l * 0x10u + count * 4u, 0u);
        }
        for (uint32_t p = 0; p < 6u; ++p)
        {
            const uint32_t polygon = kMvFloors + p * 0x80u;
            const uint32_t vertices = 3u + rng.next() % 4u;
            writeTestWord(rdram, polygon, vertices);
            const uint32_t flags = (rng.next() & 1u) != 0u ? 0u : rng.next() & 0xFFFFu;
            const uint32_t sloped = (rng.next() & 1u) != 0u ? 0x10u : 0u;
            writeTestWord(rdram, polygon + 4u, flags | (sloped | (rng.next() & 0xFFEFu)) << 16);
            const float y = floatOf(nearFloat(rng, -0.5f, 1.0f));
            for (uint32_t v = 0; v < 6u; ++v)
            {
                writeTestWord(rdram, polygon + 8u + v * 12u, nearFloat(rng, fx, 4.0f));
                writeTestWord(rdram, polygon + 8u + v * 12u + 4u, (rng.next() & 1u) != 0u ? bitsOf(y) : nearFloat(rng, y, 0.5f));
                writeTestWord(rdram, polygon + 8u + v * 12u + 8u, nearFloat(rng, fz, 4.0f));
            }
        }
        writeTestWord(rdram, kFrameTimeAddress, nearFloat(rng, 1.0f, 1.0f));
        setSmall(rng, c, 4, static_cast<int32_t>(player), static_cast<int32_t>(player));
        if ((rng.next() & 3u) != 0u)
            setOperand(rng, c, 7);
        else
            SET_GPR_U64(ctx, 7, 0u);
        if ((rng.next() & 1u) != 0u)
            setOperand(rng, c, 8);
        else
            SET_GPR_U64(ctx, 8, 0u);
        setSmall(rng, c, 9, 0, 1);
        setFloat(c, 12, nearFloat(rng, 1.5f, 1.0f));
        setFloat(c, 13, nearFloat(rng, 0.5f, 0.4f));
    }

    constexpr uint32_t kErrnoAddress = 0x00383020u; // errno (through 0x38330C)

    constexpr SavedRegion kTestGlobals[] = {
        {kViewportIndexPointer, 4u}, {kViewportRoomTables, 16u}, {kRoomTableAddress, 8u},  {kPortalRecordsAddress, 4u},
        {kViewportAddress, 0x28u},   {kClipPlanesAddress, 24u},  {kDlListAddress, 4u},     {kPartCountersAddress, 12u},
        {kTextureTableAddress, 4u},  {kFrameStepAddress, 4u},    {kMemdbPointerAddress, 4u}, {kMemdbUsedAddress, 4u},
        {kZbBufferAddress, 20u},     {kZbPointCountAddress, 4u}, {kRoomColoursAddress, 12u}, {kRandomSeedAddress, 12u},
        {kLocalPlayersAddress, 4u},  {kZbPointTables, 8u},       {kZbCounts, 0x6A0u + 0x120u},
        {kPropCountAddress, 4u},     {kPropArrayAddress, 4u},    {kPlayersAddress, 4u},    {kPlayerPropAddress, 4u},
        {kAnimTableAddress, 16u},    {kFrameTimeAddress, 4u},    {kCheatFlagsAddress, 12u}, {kHeadHeightAddress, 4u},
        {kTurnTableAddress, 4u},     {kPlayerCountAddress, 4u},  {kPlayerListAddress, 32u},
        {kPropBaseAddress, 4u},      {kFrameCountAddress, 4u},   {kRoomCountAddress, 4u},  {kRoomArrayAddress, 4u},
        {kPortalTableAddress, 4u},
        {kBulletArrayAddress, 4u},   {kParticleListAddress, 4u}, {kDebugLightAddress, 0x30u},
        {kMoveStateAddress, 4u},     {kRoomBoxesAddress, 4u},    {kPropCountsAddress, 8u}, {kSlideAddress, 8u},
        {kErrnoAddress, 4u},
    };

    // The regions outside the scratch and the heap each function writes
    // (errno: the libm routines' domain errors set it).
    constexpr SavedRegion kPortalPosExtra[] = {{kClipPlanesAddress, 24u}, {kErrnoAddress, 4u}};
    constexpr SavedRegion kPartGfxExtra[] = {
        {kDlListAddress, 4u},     {kPartCountersAddress, 12u}, {kMemdbPointerAddress, 4u}, {kMemdbUsedAddress, 4u},
        {kZbBufferAddress, 20u},  {kZbPointCountAddress, 4u},  {kRandomSeedAddress, 12u},  {kZbCounts, 0x6A0u + 0x120u},
        {kErrnoAddress, 4u},
    };

    constexpr SavedRegion kBulletExtra[] = {{kDebugLightAddress, 0x30u}, {kErrnoAddress, 4u}};
    constexpr SavedRegion kErrnoExtra[] = {{kErrnoAddress, 4u}};
    constexpr SavedRegion kMoveExtra[] = {{kSlideAddress, 8u}, {kErrnoAddress, 4u}};

    const NativeEntry kNativeGame2[] = {
        {"partGfx", 0x260AE0u, &partGfx_0x260ae0, &nativePartGfx, &setupPartGfx, true, kPartGfxExtra,
         sizeof(kPartGfxExtra) / sizeof(kPartGfxExtra[0])},
        {"animMtxTick", 0x273BB0u, &animMtxTick_0x273bb0, &nativeAnimMtxTick, &setupAnimMtxTick, true, kErrnoExtra, 1u},
        {"calMatrices", 0x212E08u, &calMatrices_0x212e08, &nativeCalMatrices, &setupCalMatrices, true, kErrnoExtra, 1u},
        {"moveTest", 0x27D0C0u, &moveTest_0x27d0c0, &nativeMoveTest, &setupMoveTest, true, kMoveExtra, 2u},
        {"rotateChr", 0x2BC5D0u, &rotateChr_0x2bc5d0, &nativeRotateChr, &setupRotateChr, true, kErrnoExtra, 1u},
        {"obinstCalcAmbientLight", 0x25AAE0u, &obinstCalcAmbientLight_0x25aae0, &nativeObinstCalcAmbientLight, &setupAmbientLight, true, kErrnoExtra, 1u},
        {"bgBulletGetClosest", 0x25BC88u, &bgBulletGetClosest_0x25bc88, &nativeBgBulletGetClosest, &setupBulletGetClosest, true,
         kBulletExtra, 2u},
        {"bgPortalCalcPos", 0x258108u, &bgPortalCalcPos_0x258108, &nativeBgPortalCalcPos, &setupPortalCalcPos, true,
         kPortalPosExtra, 2u},
    };
    constexpr uint32_t kNativeGame2Count = sizeof(kNativeGame2) / sizeof(kNativeGame2[0]);

    constexpr uint32_t regionBytes(const SavedRegion *regions, uint32_t count)
    {
        uint32_t bytes = 0;
        for (uint32_t i = 0; i < count; ++i)
            bytes += regions[i].bytes;
        return bytes;
    }

    constexpr uint32_t kTestGlobalBytes = regionBytes(kTestGlobals, sizeof(kTestGlobals) / sizeof(kTestGlobals[0]));
    constexpr uint32_t kExtra2BytesMax = 0x1000u;

    uint32_t gatherRegions(const SavedRegion *regions, uint32_t count, const uint8_t *rdram, uint8_t *buffer)
    {
        uint32_t used = 0;
        for (uint32_t i = 0; i < count; ++i)
        {
            std::memcpy(buffer + used, rdram + regions[i].address, regions[i].bytes);
            used += regions[i].bytes;
        }
        return used;
    }

    void scatterRegions(const SavedRegion *regions, uint32_t count, uint8_t *rdram, const uint8_t *buffer)
    {
        uint32_t used = 0;
        for (uint32_t i = 0; i < count; ++i)
        {
            std::memcpy(rdram + regions[i].address, buffer + used, regions[i].bytes);
            used += regions[i].bytes;
        }
    }

    // ts_native_selftest.h's testFunction with the heap: the scratch, the
    // heap and the function's static regions are restored before the
    // native run and compared after it.
    TestOutcome testFunction2(PS2Runtime &runtime, uint8_t *rdram, const NativeEntry &fn, const char *tag,
                              uint32_t seed = 0u)
    {
        static R5900Context base, want, got;
        static uint8_t before[kScratchBytes], wantMemory[kScratchBytes];
        static uint8_t heapBefore[kHeapBytes], heapWant[kHeapBytes];
        static uint8_t beforeExtra[kExtra2BytesMax], wantExtra[kExtra2BytesMax], gotExtra[kExtra2BytesMax];
        TestRng rng{0x2545F491u ^ fn.address ^ seed};
        TestOutcome outcome;
        for (uint32_t offset = 0; offset < kScratchBytes; offset += 4u)
            writeTestWord(rdram, kScratch + offset, rng.next());
        randomContext(rng, base);
        for (int i = 0; i < kTestCases; ++i)
        {
            randomInputs(rng, base);
            for (uint32_t offset = 0; offset < kOperandBytes; offset += 4u)
                writeTestWord(rdram, kScratch + offset, randomFloatBits(rng));
            fn.setup(rng, base, rdram);
            std::memcpy(before, rdram + kScratch, kScratchBytes);
            std::memcpy(heapBefore, rdram + kHeap, kHeapBytes);
            const uint32_t extraBytes = gatherRegions(fn.extra, fn.extraCount, rdram, beforeExtra);
            std::memcpy(&want, &base, sizeof(base));
            std::memcpy(&got, &base, sizeof(base));
            runGuest(runtime, rdram, want, fn.original, fn.address);
            std::memcpy(wantMemory, rdram + kScratch, kScratchBytes);
            std::memcpy(heapWant, rdram + kHeap, kHeapBytes);
            gatherRegions(fn.extra, fn.extraCount, rdram, wantExtra);
            std::memcpy(rdram + kScratch, before, kScratchBytes);
            std::memcpy(rdram + kHeap, heapBefore, kHeapBytes);
            scatterRegions(fn.extra, fn.extraCount, rdram, beforeExtra);
            runGuest(runtime, rdram, got, fn.native, fn.address);
            gatherRegions(fn.extra, fn.extraCount, rdram, gotExtra);

            Difference regs, memory, heap, extra;
            compareWords(reinterpret_cast<const uint8_t *>(&want), reinterpret_cast<const uint8_t *>(&got),
                         sizeof(R5900Context), contextWordKinds(), fn.floats, regs);
            compareWords(wantMemory, rdram + kScratch, kScratchBytes, nullptr, fn.floats, memory);
            compareWords(heapWant, rdram + kHeap, kHeapBytes, nullptr, fn.floats, heap);
            compareWords(wantExtra, gotExtra, extraBytes, nullptr, fn.floats, extra);
            if (regs.words != 0u || memory.words != 0u || heap.words != 0u || extra.words != 0u)
            {
                if (outcome.mismatches++ == 0u)
                {
                    const Difference &first = regs.words != 0u ? regs : memory.words != 0u ? memory : heap.words != 0u ? heap : extra;
                    const uint32_t where = regs.words != 0u    ? first.where
                                           : memory.words != 0u ? kScratch + first.where
                                           : heap.words != 0u   ? kHeap + first.where
                                                                : first.where;
                    std::fprintf(stderr, "[TS:%s] %s case %d: %s0x%x want %08x got %08x\n", tag, fn.name, i,
                                 regs.words != 0u ? "ctx+" : extra.words != 0u && !heap.words && !memory.words ? "extra+" : "mem ",
                                 where, first.want, first.got);
                }
            }
            else if (regs.nans != 0u || memory.nans != 0u || heap.nans != 0u || extra.nans != 0u)
            {
                ++outcome.nanOnly;
            }
        }
        return outcome;
    }

#if TS_NATIVE_MATH_SELFTEST
    // Tests every function against its original before any replacement
    // (the originals call one another through the function table).
    // Returns the set of functions that passed.
    uint32_t selfTest(PS2Runtime &runtime)
    {
        uint8_t *rdram = runtime.memory().getRDRAM();
        const auto start = std::chrono::steady_clock::now();
        static uint8_t saved[kScratchBytes], savedHeap[kHeapBytes], savedGlobals[kTestGlobalBytes];
        constexpr uint32_t kGlobalCount = sizeof(kTestGlobals) / sizeof(kTestGlobals[0]);
        std::memcpy(saved, rdram + kScratch, kScratchBytes);
        std::memcpy(savedHeap, rdram + kHeap, kHeapBytes);
        gatherRegions(kTestGlobals, kGlobalCount, rdram, savedGlobals);
        uint32_t passed = 0, failed = 0, mismatches = 0, nanOnly = 0;
        {
            ClockHold hold(runtime);
            for (uint32_t i = 0; i < kNativeGame2Count; ++i)
            {
                const NativeEntry &fn = kNativeGame2[i];
                const TestOutcome outcome = testFunction2(runtime, rdram, fn, "game2");
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
                std::fprintf(stderr, "[TS:game2] %-22s %s: %d cases, %u differ, %u only in NaN payloads\n", fn.name,
                             outcome.mismatches != 0u ? "ORIGINAL" : "native", kTestCases, outcome.mismatches,
                             outcome.nanOnly);
            }
        }
        std::memcpy(rdram + kScratch, saved, kScratchBytes);
        std::memcpy(rdram + kHeap, savedHeap, kHeapBytes);
        scatterRegions(kTestGlobals, kGlobalCount, rdram, savedGlobals);
        g_tsNativeMath.mismatches += mismatches;
        g_tsNativeMath.nanPayloads += nanOnly;
        g_tsNativeMath.failed += failed;
        const auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - start);
        std::fprintf(stderr, "[TS:game2] self-test: %u of %u native, %u cases differ, %u NaN-only, %u ms\n",
                     kNativeGame2Count - failed, kNativeGame2Count, mismatches, nanOnly, static_cast<uint32_t>(ms.count()));
        return passed;
    }
#endif
}

void registerTsNativeGame2(PS2Runtime &runtime)
{
    uint32_t enabled = (1u << kNativeGame2Count) - 1u;
#if TS_NATIVE_MATH_SELFTEST
    enabled = selfTest(runtime);
#endif
    uint32_t native = 0;
    for (uint32_t i = 0; i < kNativeGame2Count; ++i)
    {
        if ((enabled & (1u << i)) != 0u)
        {
            runtime.replaceFunction(kNativeGame2[i].address, kNativeGame2[i].native);
            ++native;
        }
    }
    g_tsNativeMath.native += native;
}
#endif
