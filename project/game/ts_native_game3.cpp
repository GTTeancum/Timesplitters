// Native versions of a fifth batch of the game's hot routines (Xbox only):
// the next translated functions of a busy match frame after
// ts_native_game2.cpp's: decals, the per-frame ticks of characters,
// particles and spawn effects, the animation choice, the route step, the
// portal out-codes, the prop room search, the bullet search and a VU0
// matrix-vector product.
//
// As in ts_native_game2.cpp, each one is a transcription of the translated
// instructions, one native statement per instruction in the original's
// order and with the recompiler's semantics (32-bit results sign-extended
// into the 64-bit registers, 64-bit compares, movz/movn copying the whole
// 128-bit register, the FPU macros for every float operation so results
// are bit-identical; the EE's sqrt.s takes its operand from the ft field).
// The registers a function touches live in a struct of locals; control
// flow is the original's (branches, likely branches that skip their delay
// slot, jump tables as switches on the word read from the table), so the
// state it leaves is the original's: every register it writes, the memory
// it writes (stack frames included), pc = $ra.
//
// Calls go through the function table like the original's (the same
// 8-cycle checkpoint charge, through dispatchGuestBranch): before each call
// the registers it may have changed are stored, so a callee that unwinds
// to the scheduler leaves this function the same way, and the original
// resumes at the return address from those registers (the function table
// keeps the original under every resume address). After each call the
// registers are read back from the context. Backward branches keep the
// original's scheduler checkpoint: when it comes due the state is stored
// and pc is the branch target, where the original resumes.
//
// A tail jump (animUpdate into calMatrices, chrPropTick into enemyTick)
// goes through the function table, where the translation calls the
// target's generated function directly: so animUpdate now reaches the
// native calMatrices (ts_native_game2.cpp), which the translation's direct
// call never did.
//
// matrixVecMulAligned is written by hand from its eleven instructions (VU0
// macro mode), like ts_native_math.cpp's matrix helpers.
//
// The routines were transcribed mechanically from the listings (the
// instruction comments of the generated files) and are checked against the
// originals by the boot-time test below.
//
// TS_NATIVE_MATH_SELFTEST: at boot each function runs against its original
// on the same random inputs (ts_native_selftest.h), laid out as the game
// lays out its structures; one that differs is put back to the original.
#include "ts_native_game3.h"

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

    // A tail jump (j) to another function: the translation calls the
    // target's generated function directly, which skips the function table
    // and so any native replacement of the target. Here the jump goes
    // through the table (no dispatch charge, as in the original): pc is the
    // target, every register is in the context.
    TS_INL void tailJump(G_ARGS, uint32_t target)
    {
        ctx->pc = target;
        runtime->lookupFunction(target)(rdram, ctx, runtime);
    }

    // vf write masks as the recompiler builds them (w, z, y, x).
    TS_INL __m128 maskXYZ() { return _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1)); }
#define TS_LANE(v, lane) _mm_shuffle_ps((v), (v), _MM_SHUFFLE(lane, lane, lane, lane))

#define LOAD_GPR(field, n) r.field = GPR_U64(ctx, n)
#define STORE_GPR(field, n) SET_GPR_U64(ctx, n, r.field)
#define LOAD_F(n) r.f##n = ctx->f[n]
#define STORE_F(n) ctx->f[n] = r.f##n

    // ---- decalDraw (0x2a5b20)
    //
    // decalDraw(decal, alpha): a decal's polygon transformed to the screen
    // (through its prop's and bone's matrices when it has them), culled
    // when outside the view or under a pixel across, otherwise drawn: its
    // texture and a GS packet of its vertices (texture coordinates, colour
    // faded by alpha) on the display list.

    struct DecalDrawRegs
    {
        uint64_t at, v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, s0, s1, s2, s3, s4, s5, s6, s7, gp, sp, fp, ra;
        float f0, f1, f2, f3, f4, f5, f6, f7, f8, f9, f12, f13, f14, f15, f16, f17, f20;
        uint32_t fcr31;
    };

    void nativeDecalDraw(G_ARGS)
    {
        DecalDrawRegs r;
        bool t;
        uint32_t jt;
        (void)t;
        (void)jt;
        LOAD_GPR(a0, 4); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_GPR(ra, 31); LOAD_F(12); LOAD_F(20);
        r.sp = addiu(r.sp, -560);                                // 2a5b20 addiu $sp, $sp, -0x230
        r.a1 = 0u;                                               // 2a5b24 daddu $a1, $zero, $zero
        WRITE64(lo32(r.sp) + 0x1b0u, r.s3);                      // 2a5b28 sd $s3, 0x1B0($sp)
        r.a2 = addiu(0u, 12);                                    // 2a5b2c addiu $a2, $zero, 0xC
        SWC1(lo32(r.sp) + 0x220u, r.f20);                        // 2a5b30 swc1 $f20, 0x220($sp)
        r.s3 = r.a0;                                             // 2a5b34 daddu $s3, $a0, $zero
        WRITE64(lo32(r.sp) + 0x200u, r.fp);                      // 2a5b38 sd $fp, 0x200($sp)
        r.f20 = FPU_MOV_S(r.f12);                                // 2a5b3c mov.s $f20, $f12
        WRITE64(lo32(r.sp) + 0x1f0u, r.s7);                      // 2a5b40 sd $s7, 0x1F0($sp)
        r.a0 = addiu(r.sp, 128);                                 // 2a5b44 addiu $a0, $sp, 0x80
        WRITE64(lo32(r.sp) + 0x210u, r.ra);                      // 2a5b48 sd $ra, 0x210($sp)
        r.s7 = addiu(0u, 1);                                     // 2a5b4c addiu $s7, $zero, 0x1
        WRITE64(lo32(r.sp) + 0x1e0u, r.s6);                      // 2a5b50 sd $s6, 0x1E0($sp)
        r.fp = 0u;                                               // 2a5b54 daddu $fp, $zero, $zero
        WRITE64(lo32(r.sp) + 0x1d0u, r.s5);                      // 2a5b58 sd $s5, 0x1D0($sp)
        WRITE64(lo32(r.sp) + 0x1c0u, r.s4);                      // 2a5b5c sd $s4, 0x1C0($sp)
        WRITE64(lo32(r.sp) + 0x1a0u, r.s2);                      // 2a5b60 sd $s2, 0x1A0($sp)
        WRITE64(lo32(r.sp) + 0x190u, r.s1);                      // 2a5b64 sd $s1, 0x190($sp)
        r.ra = 0x2a5b70u;                                        // 2a5b68 jal func_2E560C
        WRITE64(lo32(r.sp) + 0x180u, r.s0);                      // 2a5b6c sd $s0, 0x180($sp)
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s3, 19); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(20);
        if (!guestCall(G_PASS, 0x2e560cu, 0x2a5b68u, 0x2a5b70u)) return;
        LOAD_GPR(sp, 29);
    L_2a5b70:
        r.a0 = addiu(r.sp, 144);                                 // 2a5b70 addiu $a0, $sp, 0x90
        r.a1 = 0u;                                               // 2a5b74 daddu $a1, $zero, $zero
        r.ra = 0x2a5b80u;                                        // 2a5b78 jal func_2E560C
        r.a2 = addiu(0u, 12);                                    // 2a5b7c addiu $a2, $zero, 0xC
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e560cu, 0x2a5b78u, 0x2a5b80u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(s0, 16); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2a5b80:
        r.a1 = LW(lo32(r.s3) + 0xd8u);                           // 2a5b80 lw $a1, 0xD8($s3)
        t = r.a1 == 0u;                                          // 2a5b84 beqz $a1, . + 4 + (0x42 << 2)
        r.v0 = LW(lo32(r.gp) - 0x4dccu);                         // 2a5b88 lw $v0, -0x4DCC($gp)
        if (t) goto L_2a5c90;
        r.v0 = LW(lo32(r.s3) + 0xd4u);                           // 2a5b8c lw $v0, 0xD4($s3)
        t = neg64(r.v0);                                         // 2a5b90 bltz $v0, . + 4 + (0x3E << 2)
        r.v0 = addiu(0u, 2);                                     // 2a5b94 addiu $v0, $zero, 0x2
        if (t) goto L_2a5c8c;
        r.v1 = LW(lo32(r.a1) + 0x8cu);                           // 2a5b98 lw $v1, 0x8C($a1)
        if (r.v1 != r.v0)                                        // 2a5b9c bnel $v1, $v0, . + 4 + (0x1B << 2)
        {
            r.f15 = LWC1(lo32(r.a1) + 0x4cu);                        // 2a5ba0 lwc1 $f15, 0x4C($a1)
            goto L_2a5c0c;
        }
        r.f1 = LWC1(lo32(r.gp) - 0x71f0u);                       // 2a5ba4 lwc1 $f1, -0x71F0($gp)
        r.s1 = addiu(r.sp, 224);                                 // 2a5ba8 addiu $s1, $sp, 0xE0
        r.f15 = LWC1(lo32(r.a1) + 0x48u);                        // 2a5bac lwc1 $f15, 0x48($a1)
        r.a0 = r.s1;                                             // 2a5bb0 daddu $a0, $s1, $zero
        r.f16 = LWC1(lo32(r.a1) + 0x4cu);                        // 2a5bb4 lwc1 $f16, 0x4C($a1)
        r.f17 = LWC1(lo32(r.a1) + 0x58u);                        // 2a5bb8 lwc1 $f17, 0x58($a1)
        r.f15 = FPU_MUL_S(r.f15, r.f1);                          // 2a5bbc mul.s $f15, $f15, $f1
        r.f16 = FPU_MUL_S(r.f16, r.f1);                          // 2a5bc0 mul.s $f16, $f16, $f1
        r.at = sext32(0x43340000u);                              // 2a5bc4 lui $at, 0x4334
        r.f0 = floatOf(lo32(r.at));                              // 2a5bc8 mtc1 $at, $f0
        r.f17 = FPU_MUL_S(r.f17, r.f1);                          // 2a5bcc mul.s $f17, $f17, $f1
        r.f14 = LWC1(lo32(r.a1) + 0x38u);                        // 2a5bd0 lwc1 $f14, 0x38($a1)
        r.f15 = divS(r.f15, r.f0, r.fcr31);                      // 2a5bdc div.s $f15, $f15, $f0
        r.f12 = LWC1(lo32(r.a1) + 0x30u);                        // 2a5be0 lwc1 $f12, 0x30($a1)
        r.f16 = divS(r.f16, r.f0, r.fcr31);                      // 2a5bec div.s $f16, $f16, $f0
        r.f17 = divS(r.f17, r.f0, r.fcr31);                      // 2a5bf8 div.s $f17, $f17, $f0
        r.ra = 0x2a5c04u;                                        // 2a5bfc jal func_2B4CE0
        r.f13 = LWC1(lo32(r.a1) + 0x34u);                        // 2a5c00 lwc1 $f13, 0x34($a1)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s1, 17); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); STORE_F(16); STORE_F(17); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2b4ce0u, 0x2a5bfcu, 0x2a5c04u)) return;
        LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(sp, 29);
    L_2a5c04:
        // 2a5c04 b . + 4 + (0xF << 2)
        r.a0 = LW(lo32(r.s3) + 0xd8u);                           // 2a5c08 lw $a0, 0xD8($s3)
        goto L_2a5c44;
    L_2a5c0c:
        r.s1 = addiu(r.sp, 224);                                 // 2a5c0c addiu $s1, $sp, 0xE0
        r.f0 = LWC1(lo32(r.gp) - 0x71ecu);                       // 2a5c10 lwc1 $f0, -0x71EC($gp)
        r.a0 = r.s1;                                             // 2a5c14 daddu $a0, $s1, $zero
        r.at = sext32(0x43340000u);                              // 2a5c18 lui $at, 0x4334
        r.f1 = floatOf(lo32(r.at));                              // 2a5c1c mtc1 $at, $f1
        r.f15 = FPU_MUL_S(r.f15, r.f0);                          // 2a5c20 mul.s $f15, $f15, $f0
        r.f14 = LWC1(lo32(r.a1) + 0x38u);                        // 2a5c24 lwc1 $f14, 0x38($a1)
        r.f12 = LWC1(lo32(r.a1) + 0x30u);                        // 2a5c28 lwc1 $f12, 0x30($a1)
        r.f15 = divS(r.f15, r.f1, r.fcr31);                      // 2a5c34 div.s $f15, $f15, $f1
        r.ra = 0x2a5c40u;                                        // 2a5c38 jal func_2B4C50
        r.f13 = LWC1(lo32(r.a1) + 0x34u);                        // 2a5c3c lwc1 $f13, 0x34($a1)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s1, 17); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); STORE_F(13); STORE_F(14); STORE_F(15); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2b4c50u, 0x2a5c38u, 0x2a5c40u)) return;
        LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(sp, 29);
    L_2a5c40:
        r.a0 = LW(lo32(r.s3) + 0xd8u);                           // 2a5c40 lw $a0, 0xD8($s3)
    L_2a5c44:
        r.s0 = addiu(r.sp, 288);                                 // 2a5c44 addiu $s0, $sp, 0x120
        r.v0 = LW(lo32(r.s3) + 0xd4u);                           // 2a5c48 lw $v0, 0xD4($s3)
        r.a1 = r.s1;                                             // 2a5c4c daddu $a1, $s1, $zero
        r.v1 = LW(lo32(r.a0) + 0x20u);                           // 2a5c50 lw $v1, 0x20($a0)
        r.v0 = sll32(r.v0, 6);                                   // 2a5c54 sll $v0, $v0, 6
        r.a0 = r.s0;                                             // 2a5c58 daddu $a0, $s0, $zero
        r.a2 = LW(lo32(r.v1) + 0x4u);                            // 2a5c5c lw $a2, 0x4($v1)
        r.ra = 0x2a5c68u;                                        // 2a5c60 jal func_2D5E98
        r.a2 = addu(r.a2, r.v0);                                 // 2a5c64 addu $a2, $a2, $v0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x2a5c60u, 0x2a5c68u)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29);
    L_2a5c68:
        r.v1 = LW(lo32(r.gp) - 0x4dccu);                         // 2a5c68 lw $v1, -0x4DCC($gp)
        r.v0 = addiu(r.sp, 160);                                 // 2a5c6c addiu $v0, $sp, 0xA0
        r.a2 = r.s0;                                             // 2a5c70 daddu $a2, $s0, $zero
        r.a0 = r.v0;                                             // 2a5c74 daddu $a0, $v0, $zero
        r.a1 = LW(lo32(r.v1) + 0x6e8u);                          // 2a5c78 lw $a1, 0x6E8($v1)
        r.ra = 0x2a5c84u;                                        // 2a5c7c jal func_2D5E98
        r.s6 = r.v0;                                             // 2a5c80 daddu $s6, $v0, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s6, 22); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d5e98u, 0x2a5c7cu, 0x2a5c84u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(s0, 16); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2a5c84:
        // 2a5c84 b . + 4 + (0x4 << 2)
        r.v0 = LW(lo32(r.s3) + 0xc8u);                           // 2a5c88 lw $v0, 0xC8($s3)
        goto L_2a5c98;
    L_2a5c8c:
        r.v0 = LW(lo32(r.gp) - 0x4dccu);                         // 2a5c8c lw $v0, -0x4DCC($gp)
    L_2a5c90:
        r.s6 = LW(lo32(r.v0) + 0x6e8u);                          // 2a5c90 lw $s6, 0x6E8($v0)
        r.v0 = LW(lo32(r.s3) + 0xc8u);                           // 2a5c94 lw $v0, 0xC8($s3)
    L_2a5c98:
        t = lez64(r.v0);                                         // 2a5c98 blez $v0, . + 4 + (0x3E << 2)
        r.s2 = 0u;                                               // 2a5c9c daddu $s2, $zero, $zero
        if (t) goto L_2a5d94;
        r.s5 = addiu(r.sp, 8);                                   // 2a5ca0 addiu $s5, $sp, 0x8
        r.s4 = addiu(r.sp, 12);                                  // 2a5ca4 addiu $s4, $sp, 0xC
        r.s0 = sll32(r.s2, 4);                                   // 2a5ca8 sll $s0, $s2, 4
    L_2a5cb0:
        r.a0 = r.s6;                                             // 2a5cb0 daddu $a0, $s6, $zero
        r.s1 = addu(r.sp, r.s0);                                 // 2a5cb4 addu $s1, $sp, $s0
        r.a1 = addu(r.s3, r.s0);                                 // 2a5cb8 addu $a1, $s3, $s0
        r.ra = 0x2a5cc4u;                                        // 2a5cbc jal func_2B5570
        r.a2 = r.s1;                                             // 2a5cc0 daddu $a2, $s1, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(t1, 9); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2b5570u, 0x2a5cbcu, 0x2a5cc4u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2a5cc4:
        r.v0 = addu(r.s4, r.s0);                                 // 2a5cc4 addu $v0, $s4, $s0
        r.v1 = addu(r.s5, r.s0);                                 // 2a5cc8 addu $v1, $s5, $s0
        r.f1 = LWC1(lo32(r.v0));                                 // 2a5ccc lwc1 $f1, 0x0($v0)
        r.f0 = LWC1(lo32(r.v1));                                 // 2a5cd0 lwc1 $f0, 0x0($v1)
        r.f2 = FPU_NEG_S(r.f1);                                  // 2a5cd4 neg.s $f2, $f1
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f2)); // 2a5cd8 c.lt.s $f0, $f2
        if ((r.fcr31 & kCondition) != 0u)                        // 2a5ce0 bc1tl . + 4 + (0x2C << 2)
        {
            r.fp = addiu(0u, 1);                                     // 2a5ce4 addiu $fp, $zero, 0x1
            goto L_2a5d94;
        }
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 2a5ce8 c.lt.s $f1, $f0
        if ((r.fcr31 & kCondition) == 0u)                        // 2a5cf0 bc1fl . + 4 + (0x3 << 2)
        {
            r.f0 = LWC1(lo32(r.s1));                                 // 2a5cf4 lwc1 $f0, 0x0($s1)
            goto L_2a5d00;
        }
        // 2a5cf8 b . + 4 + (0x26 << 2)
        r.fp = addiu(0u, 1);                                     // 2a5cfc addiu $fp, $zero, 0x1
        goto L_2a5d94;
    L_2a5d00:
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f2)); // 2a5d00 c.lt.s $f0, $f2
        t = (r.fcr31 & kCondition) == 0u;                        // 2a5d08 bc1f . + 4 + (0x3 << 2)
        r.v0 = addiu(0u, 1);                                     // 2a5d0c addiu $v0, $zero, 0x1
        if (t) goto L_2a5d18;
        // 2a5d10 b . + 4 + (0x8 << 2)
        WRITE32(lo32(r.sp) + 0x80u, lo32(r.v0));                 // 2a5d14 sw $v0, 0x80($sp)
        goto L_2a5d34;
    L_2a5d18:
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 2a5d18 c.lt.s $f1, $f0
        if ((r.fcr31 & kCondition) == 0u)                        // 2a5d20 bc1fl . + 4 + (0x3 << 2)
        {
            r.v0 = addiu(0u, 1);                                     // 2a5d24 addiu $v0, $zero, 0x1
            goto L_2a5d30;
        }
        // 2a5d28 b . + 4 + (0x2 << 2)
        WRITE32(lo32(r.sp) + 0x88u, lo32(r.v0));                 // 2a5d2c sw $v0, 0x88($sp)
        goto L_2a5d34;
    L_2a5d30:
        WRITE32(lo32(r.sp) + 0x84u, lo32(r.v0));                 // 2a5d30 sw $v0, 0x84($sp)
    L_2a5d34:
        r.v0 = addu(r.s4, r.s0);                                 // 2a5d34 addu $v0, $s4, $s0
        r.t1 = addiu(r.sp, 4);                                   // 2a5d38 addiu $t1, $sp, 0x4
        r.f2 = LWC1(lo32(r.v0));                                 // 2a5d3c lwc1 $f2, 0x0($v0)
        r.v1 = addu(r.t1, r.s0);                                 // 2a5d40 addu $v1, $t1, $s0
        r.f1 = LWC1(lo32(r.v1));                                 // 2a5d44 lwc1 $f1, 0x0($v1)
        r.f0 = FPU_NEG_S(r.f2);                                  // 2a5d48 neg.s $f0, $f2
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 2a5d4c c.lt.s $f1, $f0
        t = (r.fcr31 & kCondition) == 0u;                        // 2a5d54 bc1f . + 4 + (0x3 << 2)
        r.v0 = addiu(0u, 1);                                     // 2a5d58 addiu $v0, $zero, 0x1
        if (t) goto L_2a5d64;
        // 2a5d5c b . + 4 + (0x8 << 2)
        WRITE32(lo32(r.sp) + 0x90u, lo32(r.v0));                 // 2a5d60 sw $v0, 0x90($sp)
        goto L_2a5d80;
    L_2a5d64:
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f2, r.f1)); // 2a5d64 c.lt.s $f2, $f1
        if ((r.fcr31 & kCondition) == 0u)                        // 2a5d6c bc1fl . + 4 + (0x3 << 2)
        {
            r.v0 = addiu(0u, 1);                                     // 2a5d70 addiu $v0, $zero, 0x1
            goto L_2a5d7c;
        }
        // 2a5d74 b . + 4 + (0x2 << 2)
        WRITE32(lo32(r.sp) + 0x98u, lo32(r.v0));                 // 2a5d78 sw $v0, 0x98($sp)
        goto L_2a5d80;
    L_2a5d7c:
        WRITE32(lo32(r.sp) + 0x94u, lo32(r.v0));                 // 2a5d7c sw $v0, 0x94($sp)
    L_2a5d80:
        r.v0 = LW(lo32(r.s3) + 0xc8u);                           // 2a5d80 lw $v0, 0xC8($s3)
        r.s2 = addiu(r.s2, 1);                                   // 2a5d84 addiu $s2, $s2, 0x1
        r.v0 = slt(r.s2, r.v0);                                  // 2a5d88 slt $v0, $s2, $v0
        t = r.v0 != 0u;                                          // 2a5d8c bnez $v0, . + 4 + (-0x38 << 2)
        r.s0 = sll32(r.s2, 4);                                   // 2a5d90 sll $s0, $s2, 4
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x2a5cb0u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(t1, 9); STORE_GPR(s0, 16); STORE_GPR(s2, 18); STORE_F(0); STORE_F(1); STORE_F(2); ctx->fcr31 = r.fcr31; return; }
            goto L_2a5cb0;
        }
    L_2a5d94:
        r.v0 = LW(lo32(r.sp) + 0x84u);                           // 2a5d94 lw $v0, 0x84($sp)
        t = r.v0 != 0u;                                          // 2a5d98 bnez $v0, . + 4 + (0x6 << 2)
        r.v0 = LW(lo32(r.sp) + 0x94u);                           // 2a5d9c lw $v0, 0x94($sp)
        if (t) goto L_2a5db4;
        r.v0 = LW(lo32(r.sp) + 0x80u);                           // 2a5da0 lw $v0, 0x80($sp)
        t = r.v0 == 0u;                                          // 2a5da4 beqz $v0, . + 4 + (0xA << 2)
        r.v0 = LW(lo32(r.sp) + 0x88u);                           // 2a5da8 lw $v0, 0x88($sp)
        if (t) goto L_2a5dd0;
        t = r.v0 == 0u;                                          // 2a5dac beqz $v0, . + 4 + (0x8 << 2)
        r.v0 = LW(lo32(r.sp) + 0x94u);                           // 2a5db0 lw $v0, 0x94($sp)
        if (t) goto L_2a5dd0;
    L_2a5db4:
        if (r.v0 != 0u)                                          // 2a5db4 bnel $v0, $zero, . + 4 + (0x6 << 2)
        {
            if (r.fp == 0u) { r.s7 = 0u; zeroHigh(ctx, 23); }        // 2a5db8 movz $s7, $zero, $fp
            goto L_2a5dd0;
        }
        r.v0 = LW(lo32(r.sp) + 0x90u);                           // 2a5dbc lw $v0, 0x90($sp)
        t = r.v0 == 0u;                                          // 2a5dc0 beqz $v0, . + 4 + (0x3 << 2)
        r.v0 = LW(lo32(r.sp) + 0x98u);                           // 2a5dc4 lw $v0, 0x98($sp)
        if (t) goto L_2a5dd0;
        if (r.v0 != 0u)                                          // 2a5dc8 bnel $v0, $zero, . + 4 + (0x1 << 2)
        {
            if (r.fp == 0u) { r.s7 = 0u; zeroHigh(ctx, 23); }        // 2a5dcc movz $s7, $zero, $fp
            goto L_2a5dd0;
        }
    L_2a5dd0:
        t = r.s7 != 0u;                                          // 2a5dd0 bnez $s7, . + 4 + (0xF1 << 2)
        r.ra = READ64(lo32(r.sp) + 0x210u);                      // 2a5dd4 ld $ra, 0x210($sp)
        if (t) goto L_2a6198;
        r.t0 = LW(lo32(r.s3) + 0xc8u);                           // 2a5dd8 lw $t0, 0xC8($s3)
        t = lez64(r.t0);                                         // 2a5ddc blez $t0, . + 4 + (0x65 << 2)
        r.s2 = 0u;                                               // 2a5de0 daddu $s2, $zero, $zero
        if (t) goto L_2a5f74;
        r.s5 = addiu(r.sp, 8);                                   // 2a5de4 addiu $s5, $sp, 0x8
        r.s4 = addiu(r.sp, 12);                                  // 2a5de8 addiu $s4, $sp, 0xC
        r.t1 = addiu(r.sp, 4);                                   // 2a5dec addiu $t1, $sp, 0x4
        r.t3 = addiu(r.sp, 352);                                 // 2a5df0 addiu $t3, $sp, 0x160
        r.t2 = sext32(0x330000u);                                // 2a5df4 lui $t2, 0x33
        r.a0 = sll32(r.s2, 4);                                   // 2a5df8 sll $a0, $s2, 4
    L_2a5e00:
        r.at = sext32(0x3f800000u);                              // 2a5e00 lui $at, 0x3F80
        r.f9 = floatOf(lo32(r.at));                              // 2a5e04 mtc1 $at, $f9
        r.v0 = addu(r.s4, r.a0);                                 // 2a5e08 addu $v0, $s4, $a0
        r.a1 = sll32(r.s2, 2);                                   // 2a5e0c sll $a1, $s2, 2
        r.f4 = LWC1(lo32(r.v0));                                 // 2a5e10 lwc1 $f4, 0x0($v0)
        r.a1 = addu(r.t3, r.a1);                                 // 2a5e14 addu $a1, $t3, $a1
        r.v1 = addiu(r.t2, -26128);                              // 2a5e18 addiu $v1, $t2, -0x6610
        r.a2 = addu(r.sp, r.a0);                                 // 2a5e1c addu $a2, $sp, $a0
        r.f4 = divS(r.f9, r.f4, r.fcr31);                        // 2a5e28 div.s $f4, $f9, $f4
        r.v0 = LW(lo32(r.v1) + 0x24u);                           // 2a5e2c lw $v0, 0x24($v1)
        r.f1 = LWC1(lo32(r.v1) + 0x10u);                         // 2a5e30 lwc1 $f1, 0x10($v1)
        r.f1 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f1))); // 2a5e34 cvt.s.w $f1, $f1
        r.a3 = addu(r.t1, r.a0);                                 // 2a5e38 addu $a3, $t1, $a0
        r.f3 = LWC1(lo32(r.v1) + 0x8u);                          // 2a5e3c lwc1 $f3, 0x8($v1)
        r.f3 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f3))); // 2a5e40 cvt.s.w $f3, $f3
        r.v0 = subu(0u, r.v0);                                   // 2a5e44 negu $v0, $v0
        r.f2 = floatOf(lo32(r.v0));                              // 2a5e48 mtc1 $v0, $f2
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 2a5e4c cvt.s.w $f2, $f2
        r.a0 = addu(r.s5, r.a0);                                 // 2a5e50 addu $a0, $s5, $a0
        r.f5 = LWC1(lo32(r.v1) + 0x1cu);                         // 2a5e54 lwc1 $f5, 0x1C($v1)
        r.f5 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f5))); // 2a5e58 cvt.s.w $f5, $f5
        r.f7 = LWC1(lo32(r.gp) - 0x71e8u);                       // 2a5e5c lwc1 $f7, -0x71E8($gp)
        r.at = sext32(0x47000000u);                              // 2a5e60 lui $at, 0x4700
        r.f8 = floatOf(lo32(r.at));                              // 2a5e64 mtc1 $at, $f8
        r.v0 = addiu(0u, 1);                                     // 2a5e68 addiu $v0, $zero, 0x1
        SWC1(lo32(r.a1), r.f4);                                  // 2a5e6c swc1 $f4, 0x0($a1)
        r.f6 = LWC1(lo32(r.gp) - 0x71e4u);                       // 2a5e70 lwc1 $f6, -0x71E4($gp)
        r.f0 = LWC1(lo32(r.a2));                                 // 2a5e74 lwc1 $f0, 0x0($a2)
        r.f1 = FPU_MUL_S(r.f1, r.f0);                            // 2a5e78 mul.s $f1, $f1, $f0
        r.f1 = FPU_MUL_S(r.f1, r.f4);                            // 2a5e7c mul.s $f1, $f1, $f4
        r.f3 = FPU_ADD_S(r.f3, r.f1);                            // 2a5e80 add.s $f3, $f3, $f1
        SWC1(lo32(r.a2), r.f3);                                  // 2a5e84 swc1 $f3, 0x0($a2)
        r.f0 = LWC1(lo32(r.a3));                                 // 2a5e88 lwc1 $f0, 0x0($a3)
        r.f1 = LWC1(lo32(r.a1));                                 // 2a5e8c lwc1 $f1, 0x0($a1)
        r.f2 = FPU_MUL_S(r.f2, r.f0);                            // 2a5e90 mul.s $f2, $f2, $f0
        r.f2 = FPU_MUL_S(r.f2, r.f1);                            // 2a5e94 mul.s $f2, $f2, $f1
        r.f5 = FPU_ADD_S(r.f5, r.f2);                            // 2a5e98 add.s $f5, $f5, $f2
        SWC1(lo32(r.a3), r.f5);                                  // 2a5e9c swc1 $f5, 0x0($a3)
        r.f0 = LWC1(lo32(r.a0));                                 // 2a5ea0 lwc1 $f0, 0x0($a0)
        r.f1 = LWC1(lo32(r.a1));                                 // 2a5ea4 lwc1 $f1, 0x0($a1)
        r.f0 = FPU_MUL_S(r.f0, r.f7);                            // 2a5ea8 mul.s $f0, $f0, $f7
        r.f0 = FPU_MUL_S(r.f0, r.f1);                            // 2a5eac mul.s $f0, $f0, $f1
        r.f0 = FPU_ADD_S(r.f0, r.f8);                            // 2a5eb0 add.s $f0, $f0, $f8
        r.f0 = FPU_MUL_S(r.f0, r.f6);                            // 2a5eb4 mul.s $f0, $f0, $f6
        t = r.s2 != r.v0;                                        // 2a5eb8 bne $s2, $v0, . + 4 + (0x2A << 2)
        SWC1(lo32(r.a0), r.f0);                                  // 2a5ebc swc1 $f0, 0x0($a0)
        if (t) goto L_2a5f64;
        r.f0 = LWC1(lo32(r.sp));                                 // 2a5ec0 lwc1 $f0, 0x0($sp)
        r.f1 = LWC1(lo32(r.sp) + 0x10u);                         // 2a5ec4 lwc1 $f1, 0x10($sp)
        r.f2 = floatOf(lo32(0u));                                // 2a5ec8 mtc1 $zero, $f2
        r.f0 = FPU_SUB_S(r.f0, r.f1);                            // 2a5ecc sub.s $f0, $f0, $f1
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f2, r.f0)); // 2a5ed0 c.le.s $f2, $f0
        if ((r.fcr31 & kCondition) == 0u)                        // 2a5ed8 bc1fl . + 4 + (0x7 << 2)
        {
            r.f0 = FPU_NEG_S(r.f0);                                  // 2a5edc neg.s $f0, $f0
            goto L_2a5ef8;
        }
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f0, r.f9)); // 2a5ee0 c.le.s $f0, $f9
        t = (r.fcr31 & kCondition) != 0u;                        // 2a5ee8 bc1t . + 4 + (0x7 << 2)
        r.f0 = LWC1(lo32(r.sp) + 0x4u);                          // 2a5eec lwc1 $f0, 0x4($sp)
        if (t) goto L_2a5f08;
        // 2a5ef0 b . + 4 + (0x1D << 2)
        r.s2 = addiu(r.s2, 1);                                   // 2a5ef4 addiu $s2, $s2, 0x1
        goto L_2a5f68;
    L_2a5ef8:
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f0, r.f9)); // 2a5ef8 c.le.s $f0, $f9
        t = (r.fcr31 & kCondition) == 0u;                        // 2a5f00 bc1f . + 4 + (0x18 << 2)
        r.f0 = LWC1(lo32(r.sp) + 0x4u);                          // 2a5f04 lwc1 $f0, 0x4($sp)
        if (t) goto L_2a5f64;
    L_2a5f08:
        r.f1 = LWC1(lo32(r.sp) + 0x14u);                         // 2a5f08 lwc1 $f1, 0x14($sp)
        r.f2 = floatOf(lo32(0u));                                // 2a5f0c mtc1 $zero, $f2
        r.f1 = FPU_SUB_S(r.f0, r.f1);                            // 2a5f10 sub.s $f1, $f0, $f1
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f2, r.f1)); // 2a5f14 c.le.s $f2, $f1
        if ((r.fcr31 & kCondition) == 0u)                        // 2a5f1c bc1fl . + 4 + (0x9 << 2)
        {
            r.f1 = FPU_NEG_S(r.f1);                                  // 2a5f20 neg.s $f1, $f1
            goto L_2a5f44;
        }
        r.at = sext32(0x3f800000u);                              // 2a5f24 lui $at, 0x3F80
        r.f0 = floatOf(lo32(r.at));                              // 2a5f28 mtc1 $at, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f1, r.f0)); // 2a5f2c c.le.s $f1, $f0
        if ((r.fcr31 & kCondition) != 0u)                        // 2a5f34 bc1tl . + 4 + (0xF << 2)
        {
            r.s7 = addiu(0u, 1);                                     // 2a5f38 addiu $s7, $zero, 0x1
            goto L_2a5f74;
        }
        // 2a5f3c b . + 4 + (0xA << 2)
        r.s2 = addiu(r.s2, 1);                                   // 2a5f40 addiu $s2, $s2, 0x1
        goto L_2a5f68;
    L_2a5f44:
        r.at = sext32(0x3f800000u);                              // 2a5f44 lui $at, 0x3F80
        r.f0 = floatOf(lo32(r.at));                              // 2a5f48 mtc1 $at, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f1, r.f0)); // 2a5f4c c.le.s $f1, $f0
        t = (r.fcr31 & kCondition) == 0u;                        // 2a5f54 bc1f . + 4 + (0x4 << 2)
        r.s2 = addiu(r.s2, 1);                                   // 2a5f58 addiu $s2, $s2, 0x1
        if (t) goto L_2a5f68;
        // 2a5f5c b . + 4 + (0x5 << 2)
        r.s7 = addiu(0u, 1);                                     // 2a5f60 addiu $s7, $zero, 0x1
        goto L_2a5f74;
    L_2a5f64:
        r.s2 = addiu(r.s2, 1);                                   // 2a5f64 addiu $s2, $s2, 0x1
    L_2a5f68:
        r.v0 = slt(r.s2, r.t0);                                  // 2a5f68 slt $v0, $s2, $t0
        t = r.v0 != 0u;                                          // 2a5f6c bnez $v0, . + 4 + (-0x5C << 2)
        r.a0 = sll32(r.s2, 4);                                   // 2a5f70 sll $a0, $s2, 4
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x2a5e00u)) { STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(s0, 16); STORE_GPR(s2, 18); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); ctx->fcr31 = r.fcr31; return; }
            goto L_2a5e00;
        }
    L_2a5f74:
        t = r.s7 != 0u;                                          // 2a5f74 bnez $s7, . + 4 + (0x88 << 2)
        r.ra = READ64(lo32(r.sp) + 0x210u);                      // 2a5f78 ld $ra, 0x210($sp)
        if (t) goto L_2a6198;
        r.at = sext32(0x42fe0000u);                              // 2a5f7c lui $at, 0x42FE
        r.f0 = floatOf(lo32(r.at));                              // 2a5f80 mtc1 $at, $f0
        r.s2 = 0u;                                               // 2a5f84 daddu $s2, $zero, $zero
        r.f1 = LWC1(lo32(r.s3) + 0xdcu);                         // 2a5f88 lwc1 $f1, 0xDC($s3)
        r.f0 = FPU_MUL_S(r.f20, r.f0);                           // 2a5f8c mul.s $f0, $f20, $f0
        r.v1 = LW(lo32(r.s3) + 0xe4u);                           // 2a5f90 lw $v1, 0xE4($s3)
        r.a0 = LW(lo32(r.s3) + 0xccu);                           // 2a5f94 lw $a0, 0xCC($s3)
        r.f0 = FPU_MUL_S(r.f0, r.f1);                            // 2a5f98 mul.s $f0, $f0, $f1
        r.f1 = floatOf(static_cast<uint32_t>(PS2_FPU_ROUND_NEAREST_W(r.f0))); // 2a5f9c cvt.w.s $f1, $f0
        r.v0 = sext32(bitsOf(r.f1));                             // 2a5fa0 mfc1 $v0, $f1
        r.v0 = sll32(r.v0, 24);                                  // 2a5fa4 sll $v0, $v0, 24
        r.ra = 0x2a5fb0u;                                        // 2a5fa8 jal func_2B7AD0
        r.s0 = r.v1 | r.v0;                                      // 2a5fac or $s0, $v1, $v0
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(s0, 16); STORE_GPR(s2, 18); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2b7ad0u, 0x2a5fa8u, 0x2a5fb0u)) return;
        LOAD_GPR(s3, 19);
    L_2a5fb0:
        r.v0 = LW(lo32(r.s3) + 0xc8u);                           // 2a5fb0 lw $v0, 0xC8($s3)
        r.a0 = sll32(r.v0, 1);                                   // 2a5fb4 sll $a0, $v0, 1
        r.a0 = addu(r.a0, r.v0);                                 // 2a5fb8 addu $a0, $a0, $v0
        r.a0 = addiu(r.a0, 2);                                   // 2a5fbc addiu $a0, $a0, 0x2
        r.ra = 0x2a5fc8u;                                        // 2a5fc0 jal func_201F78
        r.a0 = sll32(r.a0, 4);                                   // 2a5fc4 sll $a0, $a0, 4
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x201f78u, 0x2a5fc0u, 0x2a5fc8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(t3, 11); LOAD_GPR(t4, 12); LOAD_GPR(t5, 13); LOAD_GPR(s0, 16); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(7); LOAD_F(8); LOAD_F(9); r.fcr31 = ctx->fcr31;
    L_2a5fc8:
        r.a0 = LW(lo32(r.gp) - 0x6c60u);                         // 2a5fc8 lw $a0, -0x6C60($gp)
        r.v1 = addiu(0u, 48);                                    // 2a5fcc addiu $v1, $zero, 0x30
        r.t0 = LW(lo32(r.s3) + 0xc8u);                           // 2a5fd0 lw $t0, 0xC8($s3)
        r.t2 = r.v0;                                             // 2a5fd4 daddu $t2, $v0, $zero
        WRITE8(lo32(r.a0) + 0x3u, static_cast<uint8_t>(r.v1));   // 2a5fd8 sb $v1, 0x3($a0)
        r.a2 = sext32(0x6c000000u);                              // 2a5fdc lui $a2, 0x6C00
        r.a2 = r.a2 | 0x8000u;                                   // 2a5fe0 ori $a2, $a2, 0x8000
        r.a3 = sext32(0x302e0000u);                              // 2a5fe4 lui $a3, 0x302E
        r.a1 = LW(lo32(r.s3) + 0xc8u);                           // 2a5fe8 lw $a1, 0xC8($s3)
        r.a3 = r.a3 | 0x4000u;                                   // 2a5fec ori $a3, $a3, 0x4000
        r.a0 = LW(lo32(r.gp) - 0x6c60u);                         // 2a5ff0 lw $a0, -0x6C60($gp)
        r.t1 = addiu(0u, 3822);                                  // 2a5ff4 addiu $t1, $zero, 0xEEE
        r.v0 = sll32(r.a1, 1);                                   // 2a5ff8 sll $v0, $a1, 1
        r.v1 = sll32(r.t0, 1);                                   // 2a5ffc sll $v1, $t0, 1
        r.v0 = addu(r.v0, r.a1);                                 // 2a6000 addu $v0, $v0, $a1
        WRITE32(lo32(r.a0) + 0x4u, lo32(r.t2));                  // 2a6004 sw $t2, 0x4($a0)
        r.v0 = addiu(r.v0, 1);                                   // 2a6008 addiu $v0, $v0, 0x1
        r.v1 = addu(r.v1, r.t0);                                 // 2a600c addu $v1, $v1, $t0
        r.v0 = sll32(r.v0, 16);                                  // 2a6010 sll $v0, $v0, 16
        r.v1 = addiu(r.v1, 2);                                   // 2a6014 addiu $v1, $v1, 0x2
        r.v0 = r.v0 | r.a2;                                      // 2a6018 or $v0, $v0, $a2
        r.a1 = addiu(r.a0, 16);                                  // 2a601c addiu $a1, $a0, 0x10
        WRITE32(lo32(r.t2), lo32(r.v0));                         // 2a6020 sw $v0, 0x0($t2)
        r.t2 = addiu(r.t2, 4);                                   // 2a6024 addiu $t2, $t2, 0x4
        WRITE16(lo32(r.a0), static_cast<uint16_t>(r.v1));        // 2a6028 sh $v1, 0x0($a0)
        r.v0 = LW(lo32(r.s3) + 0xc8u);                           // 2a602c lw $v0, 0xC8($s3)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a1));               // 2a6030 sw $a1, -0x6C60($gp)
        r.v0 = r.v0 | 0x8000u;                                   // 2a6034 ori $v0, $v0, 0x8000
        WRITE32(lo32(r.t2), lo32(r.v0));                         // 2a6038 sw $v0, 0x0($t2)
        r.t2 = addiu(r.t2, 4);                                   // 2a603c addiu $t2, $t2, 0x4
        WRITE32(lo32(r.t2), lo32(r.a3));                         // 2a6040 sw $a3, 0x0($t2)
        r.t2 = addiu(r.t2, 4);                                   // 2a6044 addiu $t2, $t2, 0x4
        WRITE32(lo32(r.t2), lo32(r.t1));                         // 2a6048 sw $t1, 0x0($t2)
        r.t2 = addiu(r.t2, 4);                                   // 2a604c addiu $t2, $t2, 0x4
        WRITE32(lo32(r.t2), lo32(0u));                           // 2a6050 sw $zero, 0x0($t2)
        r.v0 = LW(lo32(r.s3) + 0xc8u);                           // 2a6054 lw $v0, 0xC8($s3)
        t = lez64(r.v0);                                         // 2a6058 blez $v0, . + 4 + (0x47 << 2)
        r.t2 = addiu(r.t2, 4);                                   // 2a605c addiu $t2, $t2, 0x4
        if (t) goto L_2a6178;
        r.s5 = addiu(r.sp, 8);                                   // 2a6060 addiu $s5, $sp, 0x8
        r.t1 = addiu(r.sp, 4);                                   // 2a6064 addiu $t1, $sp, 0x4
        r.t3 = addiu(r.sp, 352);                                 // 2a6068 addiu $t3, $sp, 0x160
        r.t5 = addiu(r.s3, 128);                                 // 2a606c addiu $t5, $s3, 0x80
        r.t4 = addiu(r.s3, 132);                                 // 2a6070 addiu $t4, $s3, 0x84
    L_2a6078:
        r.a0 = sll32(r.s2, 2);                                   // 2a6078 sll $a0, $s2, 2
        WRITE32(lo32(r.t2), lo32(r.s0));                         // 2a607c sw $s0, 0x0($t2)
        r.a0 = addu(r.t3, r.a0);                                 // 2a6080 addu $a0, $t3, $a0
        r.t2 = addiu(r.t2, 4);                                   // 2a6084 addiu $t2, $t2, 0x4
        r.f0 = LWC1(lo32(r.a0));                                 // 2a6088 lwc1 $f0, 0x0($a0)
        r.v1 = sll32(r.s2, 3);                                   // 2a608c sll $v1, $s2, 3
        r.v0 = addu(r.t5, r.v1);                                 // 2a6090 addu $v0, $t5, $v1
        r.a2 = addiu(0u, 1);                                     // 2a6094 addiu $a2, $zero, 0x1
        SWC1(lo32(r.t2), r.f0);                                  // 2a6098 swc1 $f0, 0x0($t2)
        r.v1 = addu(r.t4, r.v1);                                 // 2a609c addu $v1, $t4, $v1
        r.t2 = addiu(r.t2, 4);                                   // 2a60a0 addiu $t2, $t2, 0x4
        r.a1 = sll32(r.s2, 4);                                   // 2a60a4 sll $a1, $s2, 4
        r.f1 = LWC1(lo32(r.a0));                                 // 2a60a8 lwc1 $f1, 0x0($a0)
        r.t0 = addu(r.sp, r.a1);                                 // 2a60ac addu $t0, $sp, $a1
        r.f0 = LWC1(lo32(r.v0));                                 // 2a60b0 lwc1 $f0, 0x0($v0)
        r.a3 = addiu(0u, 2);                                     // 2a60b4 addiu $a3, $zero, 0x2
        WRITE32(lo32(r.t2), lo32(r.a2));                         // 2a60b8 sw $a2, 0x0($t2)
        r.v0 = addu(r.t1, r.a1);                                 // 2a60bc addu $v0, $t1, $a1
        r.f0 = FPU_MUL_S(r.f0, r.f1);                            // 2a60c0 mul.s $f0, $f0, $f1
        r.t2 = addiu(r.t2, 4);                                   // 2a60c4 addiu $t2, $t2, 0x4
        WRITE32(lo32(r.t2), lo32(0u));                           // 2a60c8 sw $zero, 0x0($t2)
        r.a1 = addu(r.s5, r.a1);                                 // 2a60cc addu $a1, $s5, $a1
        r.t2 = addiu(r.t2, 4);                                   // 2a60d0 addiu $t2, $t2, 0x4
        r.at = sext32(0x41800000u);                              // 2a60d4 lui $at, 0x4180
        r.f2 = floatOf(lo32(r.at));                              // 2a60d8 mtc1 $at, $f2
        SWC1(lo32(r.t2), r.f0);                                  // 2a60dc swc1 $f0, 0x0($t2)
        r.a2 = addiu(0u, 5);                                     // 2a60e0 addiu $a2, $zero, 0x5
        r.t2 = addiu(r.t2, 4);                                   // 2a60e4 addiu $t2, $t2, 0x4
        r.s2 = addiu(r.s2, 1);                                   // 2a60e8 addiu $s2, $s2, 0x1
        r.f0 = LWC1(lo32(r.v1));                                 // 2a60ec lwc1 $f0, 0x0($v1)
        r.f1 = LWC1(lo32(r.a0));                                 // 2a60f0 lwc1 $f1, 0x0($a0)
        r.f0 = FPU_MUL_S(r.f0, r.f1);                            // 2a60f4 mul.s $f0, $f0, $f1
        SWC1(lo32(r.t2), r.f0);                                  // 2a60f8 swc1 $f0, 0x0($t2)
        r.t2 = addiu(r.t2, 4);                                   // 2a60fc addiu $t2, $t2, 0x4
        r.f0 = LWC1(lo32(r.t0));                                 // 2a6100 lwc1 $f0, 0x0($t0)
        r.f1 = LWC1(lo32(r.v0));                                 // 2a6104 lwc1 $f1, 0x0($v0)
        r.f0 = FPU_MUL_S(r.f0, r.f2);                            // 2a6108 mul.s $f0, $f0, $f2
        WRITE32(lo32(r.t2), lo32(r.a3));                         // 2a610c sw $a3, 0x0($t2)
        r.f1 = FPU_MUL_S(r.f1, r.f2);                            // 2a6110 mul.s $f1, $f1, $f2
        r.t2 = addiu(r.t2, 4);                                   // 2a6114 addiu $t2, $t2, 0x4
        WRITE32(lo32(r.t2), lo32(0u));                           // 2a6118 sw $zero, 0x0($t2)
        r.f2 = floatOf(static_cast<uint32_t>(PS2_FPU_ROUND_NEAREST_W(r.f0))); // 2a611c cvt.w.s $f2, $f0
        r.v0 = sext32(bitsOf(r.f2));                             // 2a6120 mfc1 $v0, $f2
        r.t2 = addiu(r.t2, 4);                                   // 2a6124 addiu $t2, $t2, 0x4
        r.f0 = floatOf(static_cast<uint32_t>(PS2_FPU_ROUND_NEAREST_W(r.f1))); // 2a6128 cvt.w.s $f0, $f1
        r.v1 = sext32(bitsOf(r.f0));                             // 2a612c mfc1 $v1, $f0
        r.f0 = LWC1(lo32(r.a1));                                 // 2a6130 lwc1 $f0, 0x0($a1)
        r.v0 = addiu(r.v0, 27648);                               // 2a6134 addiu $v0, $v0, 0x6C00
        r.v1 = addiu(r.v1, 30976);                               // 2a6138 addiu $v1, $v1, 0x7900
        r.v0 = r.v0 & 0xffffu;                                   // 2a613c andi $v0, $v0, 0xFFFF
        r.v1 = sll32(r.v1, 16);                                  // 2a6140 sll $v1, $v1, 16
        r.v0 = r.v0 | r.v1;                                      // 2a6144 or $v0, $v0, $v1
        WRITE32(lo32(r.t2), lo32(r.v0));                         // 2a6148 sw $v0, 0x0($t2)
        r.t2 = addiu(r.t2, 4);                                   // 2a614c addiu $t2, $t2, 0x4
        r.f1 = floatOf(static_cast<uint32_t>(PS2_FPU_ROUND_NEAREST_W(r.f0))); // 2a6150 cvt.w.s $f1, $f0
        SWC1(lo32(r.t2), r.f1);                                  // 2a6154 swc1 $f1, 0x0($t2)
        r.t2 = addiu(r.t2, 4);                                   // 2a6158 addiu $t2, $t2, 0x4
        WRITE32(lo32(r.t2), lo32(r.a2));                         // 2a615c sw $a2, 0x0($t2)
        r.t2 = addiu(r.t2, 4);                                   // 2a6160 addiu $t2, $t2, 0x4
        WRITE32(lo32(r.t2), lo32(0u));                           // 2a6164 sw $zero, 0x0($t2)
        r.v0 = LW(lo32(r.s3) + 0xc8u);                           // 2a6168 lw $v0, 0xC8($s3)
        r.v0 = slt(r.s2, r.v0);                                  // 2a616c slt $v0, $s2, $v0
        t = r.v0 != 0u;                                          // 2a6170 bnez $v0, . + 4 + (-0x3F << 2)
        r.t2 = addiu(r.t2, 4);                                   // 2a6174 addiu $t2, $t2, 0x4
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x2a6078u)) { STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(s2, 18); STORE_GPR(s5, 21); STORE_F(0); STORE_F(1); STORE_F(2); return; }
            goto L_2a6078;
        }
    L_2a6178:
        r.v0 = sext32(0x14000000u);                              // 2a6178 lui $v0, 0x1400
        r.v1 = sext32(0x11000000u);                              // 2a617c lui $v1, 0x1100
        r.v0 = r.v0 | 0x7fcu;                                    // 2a6180 ori $v0, $v0, 0x7FC
        WRITE32(lo32(r.t2), lo32(r.v0));                         // 2a6184 sw $v0, 0x0($t2)
        r.t2 = addiu(r.t2, 4);                                   // 2a6188 addiu $t2, $t2, 0x4
        WRITE32(lo32(r.t2), lo32(r.v1));                         // 2a618c sw $v1, 0x0($t2)
        WRITE32(lo32(r.t2) + 0x4u, lo32(0u));                    // 2a6190 sw $zero, 0x4($t2)
        r.ra = READ64(lo32(r.sp) + 0x210u);                      // 2a6194 ld $ra, 0x210($sp)
    L_2a6198:
        r.fp = READ64(lo32(r.sp) + 0x200u);                      // 2a6198 ld $fp, 0x200($sp)
        r.s7 = READ64(lo32(r.sp) + 0x1f0u);                      // 2a619c ld $s7, 0x1F0($sp)
        r.s6 = READ64(lo32(r.sp) + 0x1e0u);                      // 2a61a0 ld $s6, 0x1E0($sp)
        r.s5 = READ64(lo32(r.sp) + 0x1d0u);                      // 2a61a4 ld $s5, 0x1D0($sp)
        r.s4 = READ64(lo32(r.sp) + 0x1c0u);                      // 2a61a8 ld $s4, 0x1C0($sp)
        r.s3 = READ64(lo32(r.sp) + 0x1b0u);                      // 2a61ac ld $s3, 0x1B0($sp)
        r.s2 = READ64(lo32(r.sp) + 0x1a0u);                      // 2a61b0 ld $s2, 0x1A0($sp)
        r.s1 = READ64(lo32(r.sp) + 0x190u);                      // 2a61b4 ld $s1, 0x190($sp)
        r.s0 = READ64(lo32(r.sp) + 0x180u);                      // 2a61b8 ld $s0, 0x180($sp)
        r.f20 = LWC1(lo32(r.sp) + 0x220u);                       // 2a61bc lwc1 $f20, 0x220($sp)
        jt = lo32(r.ra);                                         // 2a61c0 jr $ra
        r.sp = addiu(r.sp, 560);                                 // 2a61c4 addiu $sp, $sp, 0x230
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(t3, 11); STORE_GPR(t4, 12); STORE_GPR(t5, 13); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7); STORE_F(8); STORE_F(9); STORE_F(20); ctx->fcr31 = r.fcr31;
        ctx->pc = jt;
        return;
    }

    // ---- animUpdate (0x212cf8)
    //
    // animUpdate(skeleton): when the skeleton is on screen and its
    // character's matrices are wanted, its bone matrices for the frame
    // (a tail jump into calMatrices); otherwise, unless the animation keeps
    // them, its matrices reset to the unit matrix.

    struct AnimUpdateRegs
    {
        uint64_t v0, v1, a0, a1, a2, a3, s0, s1, gp, sp, ra;
    };

    void nativeAnimUpdate(G_ARGS)
    {
        AnimUpdateRegs r;
        bool t;
        uint32_t jt;
        (void)t;
        (void)jt;
        LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(ra, 31);
        r.sp = addiu(r.sp, -48);                                 // 212cf8 addiu $sp, $sp, -0x30
        WRITE64(lo32(r.sp) + 0x10u, r.s1);                       // 212cfc sd $s1, 0x10($sp)
        WRITE64(lo32(r.sp) + 0x20u, r.ra);                       // 212d00 sd $ra, 0x20($sp)
        r.s1 = r.a0;                                             // 212d04 daddu $s1, $a0, $zero
        WRITE64(lo32(r.sp), r.s0);                               // 212d08 sd $s0, 0x0($sp)
        r.a3 = LW(lo32(r.s1));                                   // 212d0c lw $a3, 0x0($s1)
        t = r.a3 == 0u;                                          // 212d10 beqz $a3, . + 4 + (0x38 << 2)
        r.v0 = LW(lo32(r.gp) - 0x4dccu);                         // 212d14 lw $v0, -0x4DCC($gp)
        if (t) goto L_212df4;
        r.v1 = LW(lo32(r.v0) + 0x6e4u);                          // 212d18 lw $v1, 0x6E4($v0)
        t = r.v1 == 0u;                                          // 212d1c beqz $v1, . + 4 + (0x36 << 2)
        r.ra = READ64(lo32(r.sp) + 0x20u);                       // 212d20 ld $ra, 0x20($sp)
        if (t) goto L_212df8;
        r.v0 = LW(lo32(r.a3) + 0x4u);                            // 212d24 lw $v0, 0x4($a3)
        t = r.v0 == 0u;                                          // 212d28 beqz $v0, . + 4 + (0x33 << 2)
        r.v0 = addiu(0u, 8);                                     // 212d2c addiu $v0, $zero, 0x8
        if (t) goto L_212df8;
        r.a1 = LW(lo32(r.s1) + 0xf4u);                           // 212d30 lw $a1, 0xF4($s1)
        r.a2 = LW(lo32(r.a1) + 0x8u);                            // 212d34 lw $a2, 0x8($a1)
        t = r.a2 != r.v0;                                        // 212d38 bne $a2, $v0, . + 4 + (0x7 << 2)
        r.v0 = addiu(0u, 16);                                    // 212d3c addiu $v0, $zero, 0x10
        if (t) goto L_212d58;
        r.v0 = LW(lo32(r.a1) + 0x160u);                          // 212d40 lw $v0, 0x160($a1)
        r.a0 = addiu(0u, 3);                                     // 212d44 addiu $a0, $zero, 0x3
        r.v1 = LW(lo32(r.v0) + 0x8u);                            // 212d48 lw $v1, 0x8($v0)
        if (r.v1 != r.a0)                                        // 212d4c bnel $v1, $a0, . + 4 + (0x10 << 2)
        {
            r.v0 = LW(lo32(r.s1) + 0x4u);                            // 212d50 lw $v0, 0x4($s1)
            goto L_212d90;
        }
        r.v0 = addiu(0u, 16);                                    // 212d54 addiu $v0, $zero, 0x10
    L_212d58:
        t = r.a2 != r.v0;                                        // 212d58 bne $a2, $v0, . + 4 + (0x6 << 2)
        r.v0 = addiu(0u, 4096);                                  // 212d5c addiu $v0, $zero, 0x1000
        if (t) goto L_212d74;
        r.v0 = LW(lo32(r.a1) + 0x4u);                            // 212d60 lw $v0, 0x4($a1)
        r.v0 = slti(r.v0, 80);                                   // 212d64 slti $v0, $v0, 0x50
        if (r.v0 != 0u)                                          // 212d68 bnel $v0, $zero, . + 4 + (0x9 << 2)
        {
            r.v0 = LW(lo32(r.s1) + 0x4u);                            // 212d6c lw $v0, 0x4($s1)
            goto L_212d90;
        }
        r.v0 = addiu(0u, 4096);                                  // 212d70 addiu $v0, $zero, 0x1000
    L_212d74:
        if (r.a2 != r.v0)                                        // 212d74 bnel $a2, $v0, . + 4 + (0xE << 2)
        {
            r.v1 = LW(lo32(r.s1) + 0x60u);                           // 212d78 lw $v1, 0x60($s1)
            goto L_212db0;
        }
        r.v0 = LW(lo32(r.a1) + 0x4u);                            // 212d7c lw $v0, 0x4($a1)
        r.v0 = slti(r.v0, 80);                                   // 212d80 slti $v0, $v0, 0x50
        if (r.v0 == 0u)                                          // 212d84 beql $v0, $zero, . + 4 + (0xA << 2)
        {
            r.v1 = LW(lo32(r.s1) + 0x60u);                           // 212d88 lw $v1, 0x60($s1)
            goto L_212db0;
        }
        r.v0 = LW(lo32(r.s1) + 0x4u);                            // 212d8c lw $v0, 0x4($s1)
    L_212d90:
        if (r.v0 == 0u)                                          // 212d90 beql $v0, $zero, . + 4 + (0x7 << 2)
        {
            r.v1 = LW(lo32(r.s1) + 0x60u);                           // 212d94 lw $v1, 0x60($s1)
            goto L_212db0;
        }
        r.a0 = r.s1;                                             // 212d98 daddu $a0, $s1, $zero
        r.ra = READ64(lo32(r.sp) + 0x20u);                       // 212d9c ld $ra, 0x20($sp)
        r.s1 = READ64(lo32(r.sp) + 0x10u);                       // 212da0 ld $s1, 0x10($sp)
        r.s0 = READ64(lo32(r.sp));                               // 212da4 ld $s0, 0x0($sp)
        // 212da8 j func_212E08 (tail jump)
        r.sp = addiu(r.sp, 48);                                  // 212dac addiu $sp, $sp, 0x30
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(sp, 29); STORE_GPR(ra, 31);
        tailJump(G_PASS, 0x212e08u);
        return;
    L_212db0:
        r.v0 = addiu(0u, 1);                                     // 212db0 addiu $v0, $zero, 0x1
        t = r.v1 == r.v0;                                        // 212db4 beq $v1, $v0, . + 4 + (0x10 << 2)
        r.ra = READ64(lo32(r.sp) + 0x20u);                       // 212db8 ld $ra, 0x20($sp)
        if (t) goto L_212df8;
        r.v0 = LW(lo32(r.a3) + 0x4u);                            // 212dbc lw $v0, 0x4($a3)
        t = lez64(r.v0);                                         // 212dc0 blez $v0, . + 4 + (0xD << 2)
        r.s0 = 0u;                                               // 212dc4 daddu $s0, $zero, $zero
        if (t) goto L_212df8;
        r.v0 = LW(lo32(r.s1) + 0x4u);                            // 212dc8 lw $v0, 0x4($s1)
    L_212dd0:
        r.a0 = sll32(r.s0, 6);                                   // 212dd0 sll $a0, $s0, 6
        r.s0 = addiu(r.s0, 1);                                   // 212dd4 addiu $s0, $s0, 0x1
        r.ra = 0x212de0u;                                        // 212dd8 jal func_2D6188
        r.a0 = addu(r.v0, r.a0);                                 // 212ddc addu $a0, $v0, $a0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(sp, 29); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2d6188u, 0x212dd8u, 0x212de0u)) return;
        LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(sp, 29);
    L_212de0:
        r.v1 = LW(lo32(r.s1));                                   // 212de0 lw $v1, 0x0($s1)
        r.v0 = LW(lo32(r.v1) + 0x4u);                            // 212de4 lw $v0, 0x4($v1)
        r.v0 = slt(r.s0, r.v0);                                  // 212de8 slt $v0, $s0, $v0
        if (r.v0 != 0u)                                          // 212dec bnel $v0, $zero, . + 4 + (-0x8 << 2)
        {
            r.v0 = LW(lo32(r.s1) + 0x4u);                            // 212df0 lw $v0, 0x4($s1)
            if (loopCheckpoint(ctx, runtime, 0x212dd0u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); return; }
            goto L_212dd0;
        }
    L_212df4:
        r.ra = READ64(lo32(r.sp) + 0x20u);                       // 212df4 ld $ra, 0x20($sp)
    L_212df8:
        r.s1 = READ64(lo32(r.sp) + 0x10u);                       // 212df8 ld $s1, 0x10($sp)
        r.s0 = READ64(lo32(r.sp));                               // 212dfc ld $s0, 0x0($sp)
        jt = lo32(r.ra);                                         // 212e00 jr $ra
        r.sp = addiu(r.sp, 48);                                  // 212e04 addiu $sp, $sp, 0x30
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(sp, 29); STORE_GPR(ra, 31);
        ctx->pc = jt;
        return;
    }

    // ---- chrPropTick (0x26ddc0)
    //
    // chrPropTick(chr): a character's per-frame update: its hit flash, its
    // statistics, the stance animation of a local player (setAnim when it
    // changes), then the character AI (a tail jump to enemyTick).

    struct ChrPropTickRegs
    {
        uint64_t at, v0, v1, a0, a1, a2, a3, s0, s1, gp, sp, ra;
        float f0, f1, f2, f3, f4, f5, f6, f12, f13, f20;
        uint32_t fcr31;
        uint64_t lo, hi;
    };

    void nativeChrPropTick(G_ARGS)
    {
        ChrPropTickRegs r;
        bool t;
        uint32_t jt;
        (void)t;
        (void)jt;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(ra, 31); LOAD_F(1); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(20); r.fcr31 = ctx->fcr31;
        r.sp = addiu(r.sp, -64);                                 // 26ddc0 addiu $sp, $sp, -0x40
        r.f12 = floatOf(lo32(0u));                               // 26ddc4 mtc1 $zero, $f12
        WRITE64(lo32(r.sp) + 0x10u, r.s1);                       // 26ddc8 sd $s1, 0x10($sp)
        WRITE64(lo32(r.sp) + 0x20u, r.ra);                       // 26ddcc sd $ra, 0x20($sp)
        r.s1 = r.a0;                                             // 26ddd0 daddu $s1, $a0, $zero
        SWC1(lo32(r.sp) + 0x30u, r.f20);                         // 26ddd4 swc1 $f20, 0x30($sp)
        WRITE64(lo32(r.sp), r.s0);                               // 26ddd8 sd $s0, 0x0($sp)
        r.s0 = LW(lo32(r.s1) + 0x160u);                          // 26dddc lw $s0, 0x160($s1)
        r.f2 = LWC1(lo32(r.s0) + 0xb54u);                        // 26dde0 lwc1 $f2, 0xB54($s0)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f12, r.f2)); // 26dde4 c.lt.s $f12, $f2
        t = (r.fcr31 & kCondition) == 0u;                        // 26ddec bc1f . + 4 + (0x8 << 2)
        r.f0 = LWC1(lo32(r.gp) - 0x4b98u);                       // 26ddf0 lwc1 $f0, -0x4B98($gp)
        if (t) goto L_26de10;
        r.at = sext32(0x42700000u);                              // 26ddf4 lui $at, 0x4270
        r.f1 = floatOf(lo32(r.at));                              // 26ddf8 mtc1 $at, $f1
        r.f0 = divS(r.f0, r.f1, r.fcr31);                        // 26de04 div.s $f0, $f0, $f1
        r.f0 = FPU_SUB_S(r.f2, r.f0);                            // 26de08 sub.s $f0, $f2, $f0
        SWC1(lo32(r.s0) + 0xb54u, r.f0);                         // 26de0c swc1 $f0, 0xB54($s0)
    L_26de10:
        r.v0 = LW(lo32(r.s0) + 0x11a8u);                         // 26de10 lw $v0, 0x11A8($s0)
        if (r.v0 != 0u)                                          // 26de14 bnel $v0, $zero, . + 4 + (0x65 << 2)
        {
            r.v0 = LW(lo32(r.s0) + 0x104u);                          // 26de18 lw $v0, 0x104($s0)
            goto L_26dfac;
        }
        r.f1 = LWC1(lo32(r.s0) + 0xb54u);                        // 26de1c lwc1 $f1, 0xB54($s0)
        r.at = sext32(0x40200000u);                              // 26de20 lui $at, 0x4020
        r.f0 = floatOf(lo32(r.at));                              // 26de24 mtc1 $at, $f0
        r.at = sext32(0x3f800000u);                              // 26de28 lui $at, 0x3F80
        r.f6 = floatOf(lo32(r.at));                              // 26de2c mtc1 $at, $f6
        r.f5 = divS(r.f1, r.f0, r.fcr31);                        // 26de38 div.s $f5, $f1, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f6, r.f5)); // 26de3c c.lt.s $f6, $f5
        if ((r.fcr31 & kCondition) != 0u)                        // 26de44 bc1tl . + 4 + (0x1 << 2)
        {
            r.f5 = FPU_MOV_S(r.f6);                                  // 26de48 mov.s $f5, $f6
            goto L_26de4c;
        }
    L_26de4c:
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f12, r.f5)); // 26de4c c.lt.s $f12, $f5
        t = (r.fcr31 & kCondition) == 0u;                        // 26de54 bc1f . + 4 + (0x4F << 2)
        r.v1 = sext32(0x370000u);                                // 26de58 lui $v1, 0x37
        if (t) goto L_26df94;
        r.f0 = LWC1(lo32(r.gp) - 0x6258u);                       // 26de5c lwc1 $f0, -0x6258($gp)
        r.f0 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f0))); // 26de60 cvt.s.w $f0, $f0
        r.at = sext32(0x40c00000u);                              // 26de64 lui $at, 0x40C0
        r.f2 = floatOf(lo32(r.at));                              // 26de68 mtc1 $at, $f2
        r.at = sext32(0x42700000u);                              // 26de6c lui $at, 0x4270
        r.f3 = floatOf(lo32(r.at));                              // 26de70 mtc1 $at, $f3
        r.f4 = LWC1(lo32(r.gp) - 0x7b7cu);                       // 26de74 lwc1 $f4, -0x7B7C($gp)
        r.v1 = addiu(r.v1, 23648);                               // 26de78 addiu $v1, $v1, 0x5C60
        r.f0 = FPU_MUL_S(r.f0, r.f2);                            // 26de7c mul.s $f0, $f0, $f2
        r.at = sext32(0x3f000000u);                              // 26de80 lui $at, 0x3F00
        r.f1 = floatOf(lo32(r.at));                              // 26de84 mtc1 $at, $f1
        r.f12 = FPU_SQRT_S(r.f5);                                // 26de90 c1 0x50304 (sqrt.s $f12, $f5)
        r.f0 = divS(r.f0, r.f3, r.fcr31);                        // 26de9c div.s $f0, $f0, $f3
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f12, r.f12)); // 26dea0 c.eq.s $f12, $f12
        r.f0 = FPU_MUL_S(r.f0, r.f4);                            // 26dea4 mul.s $f0, $f0, $f4
        r.f0 = FPU_ADD_S(r.f0, r.f1);                            // 26dea8 add.s $f0, $f0, $f1
        r.f2 = floatOf(static_cast<uint32_t>(PS2_FPU_ROUND_NEAREST_W(r.f0))); // 26deac cvt.w.s $f2, $f0
        r.v0 = sext32(bitsOf(r.f2));                             // 26deb0 mfc1 $v0, $f2
        r.v0 = r.v0 & 0x7ffu;                                    // 26deb4 andi $v0, $v0, 0x7FF
        r.v0 = sll32(r.v0, 2);                                   // 26deb8 sll $v0, $v0, 2
        r.v0 = addu(r.v0, r.v1);                                 // 26debc addu $v0, $v0, $v1
        r.f0 = LWC1(lo32(r.v0));                                 // 26dec0 lwc1 $f0, 0x0($v0)
        r.f0 = FPU_ADD_S(r.f0, r.f6);                            // 26dec4 add.s $f0, $f0, $f6
        r.f0 = FPU_MUL_S(r.f0, r.f1);                            // 26dec8 mul.s $f0, $f0, $f1
        r.f0 = FPU_MUL_S(r.f0, r.f1);                            // 26decc mul.s $f0, $f0, $f1
        t = (r.fcr31 & kCondition) != 0u;                        // 26ded0 bc1t . + 4 + (0x4 << 2)
        r.f20 = FPU_ADD_S(r.f0, r.f1);                           // 26ded4 add.s $f20, $f0, $f1
        if (t) goto L_26dee4;
        r.ra = 0x26dee0u;                                        // 26ded8 jal func_2D8398
        r.f12 = FPU_MOV_S(r.f5);                                 // 26dedc mov.s $f12, $f5
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(12); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2d8398u, 0x26ded8u, 0x26dee0u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_26dee0:
        r.f12 = FPU_MOV_S(r.f0);                                 // 26dee0 mov.s $f12, $f0
    L_26dee4:
        r.v0 = LW(lo32(r.s0) + 0x11a4u);                         // 26dee4 lw $v0, 0x11A4($s0)
        t = r.v0 == 0u;                                          // 26dee8 beqz $v0, . + 4 + (0x23 << 2)
        r.f12 = FPU_MUL_S(r.f20, r.f12);                         // 26deec mul.s $f12, $f20, $f12
        if (t) goto L_26df78;
        r.v1 = LW(lo32(r.v0) + 0x1cu);                           // 26def0 lw $v1, 0x1C($v0)
        t = neg64(r.v1);                                         // 26def4 bltz $v1, . + 4 + (0x2C << 2)
        r.v0 = addiu(0u, 1);                                     // 26def8 addiu $v0, $zero, 0x1
        if (t) goto L_26dfa8;
        t = r.v1 == r.v0;                                        // 26defc beq $v1, $v0, . + 4 + (0x11 << 2)
        r.v0 = slti(r.v1, 2);                                    // 26df00 slti $v0, $v1, 0x2
        if (t) goto L_26df44;
        t = r.v0 == 0u;                                          // 26df04 beqz $v0, . + 4 + (0x5 << 2)
        r.v0 = addiu(0u, 2);                                     // 26df08 addiu $v0, $zero, 0x2
        if (t) goto L_26df1c;
        t = r.v1 == 0u;                                          // 26df0c beqz $v1, . + 4 + (0x9 << 2)
        r.a1 = addiu(0u, 64);                                    // 26df10 addiu $a1, $zero, 0x40
        if (t) goto L_26df34;
        // 26df14 b . + 4 + (0x13 << 2)
        r.a2 = addiu(0u, 64);                                    // 26df18 addiu $a2, $zero, 0x40
        goto L_26df64;
    L_26df1c:
        t = r.v1 == r.v0;                                        // 26df1c beq $v1, $v0, . + 4 + (0xF << 2)
        r.v0 = addiu(0u, 3);                                     // 26df20 addiu $v0, $zero, 0x3
        if (t) goto L_26df5c;
        t = r.v1 == r.v0;                                        // 26df24 beq $v1, $v0, . + 4 + (0xB << 2)
        r.a1 = addiu(0u, 64);                                    // 26df28 addiu $a1, $zero, 0x40
        if (t) goto L_26df54;
        // 26df2c b . + 4 + (0xD << 2)
        r.a2 = addiu(0u, 64);                                    // 26df30 addiu $a2, $zero, 0x40
        goto L_26df64;
    L_26df34:
        r.a1 = addiu(0u, 255);                                   // 26df34 addiu $a1, $zero, 0xFF
        r.a2 = addiu(0u, 64);                                    // 26df38 addiu $a2, $zero, 0x40
        // 26df3c b . + 4 + (0xA << 2)
        r.a3 = addiu(0u, 64);                                    // 26df40 addiu $a3, $zero, 0x40
        goto L_26df68;
    L_26df44:
        r.a1 = addiu(0u, 255);                                   // 26df44 addiu $a1, $zero, 0xFF
        r.a2 = addiu(0u, 255);                                   // 26df48 addiu $a2, $zero, 0xFF
        // 26df4c b . + 4 + (0x6 << 2)
        r.a3 = addiu(0u, 64);                                    // 26df50 addiu $a3, $zero, 0x40
        goto L_26df68;
    L_26df54:
        // 26df54 b . + 4 + (0x3 << 2)
        r.a2 = addiu(0u, 255);                                   // 26df58 addiu $a2, $zero, 0xFF
        goto L_26df64;
    L_26df5c:
        r.a1 = addiu(0u, 64);                                    // 26df5c addiu $a1, $zero, 0x40
        r.a2 = addiu(0u, 64);                                    // 26df60 addiu $a2, $zero, 0x40
    L_26df64:
        r.a3 = addiu(0u, 255);                                   // 26df64 addiu $a3, $zero, 0xFF
    L_26df68:
        r.ra = 0x26df70u;                                        // 26df68 jal func_264008
        r.a0 = LW(lo32(r.s1) + 0x20u);                           // 26df6c lw $a0, 0x20($s1)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(12); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x264008u, 0x26df68u, 0x26df70u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(12); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_26df70:
        // 26df70 b . + 4 + (0xE << 2)
        r.v0 = LW(lo32(r.s0) + 0x104u);                          // 26df74 lw $v0, 0x104($s0)
        goto L_26dfac;
    L_26df78:
        r.a0 = LW(lo32(r.s1) + 0x20u);                           // 26df78 lw $a0, 0x20($s1)
        r.a1 = LW(lo32(r.a0) + 0x13cu);                          // 26df7c lw $a1, 0x13C($a0)
        r.a2 = LW(lo32(r.a0) + 0x140u);                          // 26df80 lw $a2, 0x140($a0)
        r.ra = 0x26df8cu;                                        // 26df84 jal func_264008
        r.a3 = LW(lo32(r.a0) + 0x144u);                          // 26df88 lw $a3, 0x144($a0)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(12); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x264008u, 0x26df84u, 0x26df8cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(12); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_26df8c:
        // 26df8c b . + 4 + (0x7 << 2)
        r.v0 = LW(lo32(r.s0) + 0x104u);                          // 26df90 lw $v0, 0x104($s0)
        goto L_26dfac;
    L_26df94:
        r.a0 = LW(lo32(r.s1) + 0x20u);                           // 26df94 lw $a0, 0x20($s1)
        r.a1 = 0u;                                               // 26df98 daddu $a1, $zero, $zero
        r.a2 = 0u;                                               // 26df9c daddu $a2, $zero, $zero
        r.ra = 0x26dfa8u;                                        // 26dfa0 jal func_264008
        r.a3 = 0u;                                               // 26dfa4 daddu $a3, $zero, $zero
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(5); STORE_F(6); STORE_F(12); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x264008u, 0x26dfa0u, 0x26dfa8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(12); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_26dfa8:
        r.v0 = LW(lo32(r.s0) + 0x104u);                          // 26dfa8 lw $v0, 0x104($s0)
    L_26dfac:
        t = r.v0 != 0u;                                          // 26dfac bnez $v0, . + 4 + (0x5 << 2)
        r.f0 = LWC1(lo32(r.gp) - 0x4b98u);                       // 26dfb0 lwc1 $f0, -0x4B98($gp)
        if (t) goto L_26dfc4;
        r.ra = 0x26dfbcu;                                        // 26dfb4 jal func_2951D8
        r.a0 = r.s0;                                             // 26dfb8 daddu $a0, $s0, $zero
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(12); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2951d8u, 0x26dfb4u, 0x26dfbcu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_26dfbc:
        t = r.v0 == 0u;                                          // 26dfbc beqz $v0, . + 4 + (0x7 << 2)
        r.f0 = LWC1(lo32(r.gp) - 0x4b98u);                       // 26dfc0 lwc1 $f0, -0x4B98($gp)
        if (t) goto L_26dfdc;
    L_26dfc4:
        r.a0 = addiu(0u, 3);                                     // 26dfc4 addiu $a0, $zero, 0x3
        r.f12 = LWC1(lo32(r.gp) - 0x7b78u);                      // 26dfc8 lwc1 $f12, -0x7B78($gp)
        r.a1 = LW(lo32(r.s0));                                   // 26dfcc lw $a1, 0x0($s0)
        r.f12 = FPU_MUL_S(r.f0, r.f12);                          // 26dfd0 mul.s $f12, $f0, $f12
        r.ra = 0x26dfdcu;                                        // 26dfd4 jal func_2241A8
        r.a2 = LW(lo32(r.s0) + 0x104u);                          // 26dfd8 lw $a2, 0x104($s0)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(12); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2241a8u, 0x26dfd4u, 0x26dfdcu)) return;
        LOAD_GPR(s0, 16); LOAD_GPR(gp, 28);
    L_26dfdc:
        r.v0 = LW(lo32(r.s0) + 0x1e4u);                          // 26dfdc lw $v0, 0x1E4($s0)
        t = r.v0 == 0u;                                          // 26dfe0 beqz $v0, . + 4 + (0x6 << 2)
        r.f0 = LWC1(lo32(r.gp) - 0x4b98u);                       // 26dfe4 lwc1 $f0, -0x4B98($gp)
        if (t) goto L_26dffc;
        r.a0 = addiu(0u, 36);                                    // 26dfe8 addiu $a0, $zero, 0x24
        r.f12 = LWC1(lo32(r.gp) - 0x7b74u);                      // 26dfec lwc1 $f12, -0x7B74($gp)
        r.a1 = LW(lo32(r.s0));                                   // 26dff0 lw $a1, 0x0($s0)
        r.ra = 0x26dffcu;                                        // 26dff4 jal func_223E60
        r.f12 = FPU_MUL_S(r.f0, r.f12);                          // 26dff8 mul.s $f12, $f0, $f12
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(12);
        if (!guestCall(G_PASS, 0x223e60u, 0x26dff4u, 0x26dffcu)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16); LOAD_F(0);
    L_26dffc:
        r.ra = 0x26e004u;                                        // 26dffc jal func_21E320
        r.a0 = LW(lo32(r.s0) + 0x18u);                           // 26e000 lw $a0, 0x18($s0)
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(ra, 31); STORE_F(0);
        if (!guestCall(G_PASS, 0x21e320u, 0x26dffcu, 0x26e004u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(a1, 5); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_26e004:
        r.a0 = r.v0;                                             // 26e004 daddu $a0, $v0, $zero
        t = r.a0 != 0u;                                          // 26e008 bnez $a0, . + 4 + (0x9 << 2)
        r.v0 = LW(lo32(r.gp) - 0x608cu);                         // 26e00c lw $v0, -0x608C($gp)
        if (t) goto L_26e030;
        r.f0 = LWC1(lo32(r.gp) - 0x4b98u);                       // 26e010 lwc1 $f0, -0x4B98($gp)
        r.a0 = addiu(0u, 40);                                    // 26e014 addiu $a0, $zero, 0x28
        r.f12 = LWC1(lo32(r.gp) - 0x7b70u);                      // 26e018 lwc1 $f12, -0x7B70($gp)
        r.a1 = LW(lo32(r.s0));                                   // 26e01c lw $a1, 0x0($s0)
        r.ra = 0x26e028u;                                        // 26e020 jal func_223E60
        r.f12 = FPU_MUL_S(r.f0, r.f12);                          // 26e024 mul.s $f12, $f0, $f12
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(12);
        if (!guestCall(G_PASS, 0x223e60u, 0x26e020u, 0x26e028u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_26e028:
        // 26e028 b . + 4 + (0xD << 2)
        r.v1 = LW(lo32(r.gp) - 0x6090u);                         // 26e02c lw $v1, -0x6090($gp)
        goto L_26e060;
    L_26e030:
        r.v1 = LW(lo32(r.gp) - 0x4a64u);                         // 26e030 lw $v1, -0x4A64($gp)
        r.v0 = addu(r.v0, r.v1);                                 // 26e034 addu $v0, $v0, $v1
        r.v0 = addiu(r.v0, -1);                                  // 26e038 addiu $v0, $v0, -0x1
        t = r.a0 != r.v0;                                        // 26e03c bne $a0, $v0, . + 4 + (0x8 << 2)
        r.v1 = LW(lo32(r.gp) - 0x6090u);                         // 26e040 lw $v1, -0x6090($gp)
        if (t) goto L_26e060;
        r.f0 = LWC1(lo32(r.gp) - 0x4b98u);                       // 26e044 lwc1 $f0, -0x4B98($gp)
        r.a0 = addiu(0u, 41);                                    // 26e048 addiu $a0, $zero, 0x29
        r.f12 = LWC1(lo32(r.gp) - 0x7b6cu);                      // 26e04c lwc1 $f12, -0x7B6C($gp)
        r.a1 = LW(lo32(r.s0));                                   // 26e050 lw $a1, 0x0($s0)
        r.ra = 0x26e05cu;                                        // 26e054 jal func_223E60
        r.f12 = FPU_MUL_S(r.f0, r.f12);                          // 26e058 mul.s $f12, $f0, $f12
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(12);
        if (!guestCall(G_PASS, 0x223e60u, 0x26e054u, 0x26e05cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_26e05c:
        r.v1 = LW(lo32(r.gp) - 0x6090u);                         // 26e05c lw $v1, -0x6090($gp)
    L_26e060:
        r.v0 = addiu(0u, 102);                                   // 26e060 addiu $v0, $zero, 0x66
        if (r.v1 != r.v0)                                        // 26e064 bnel $v1, $v0, . + 4 + (0x3 << 2)
        {
            r.v0 = LW(lo32(r.s0) + 0x8u);                            // 26e068 lw $v0, 0x8($s0)
            goto L_26e074;
        }
        // 26e06c b . + 4 + (0x214 << 2)
        WRITE32(lo32(r.s1) + 0x158u, lo32(0u));                  // 26e070 sw $zero, 0x158($s1)
        goto L_26e8c0;
    L_26e074:
        if (r.v0 == 0u)                                          // 26e074 beql $v0, $zero, . + 4 + (0x8 << 2)
        {
            r.a0 = LW(lo32(r.s1) + 0x158u);                          // 26e078 lw $a0, 0x158($s1)
            goto L_26e098;
        }
        r.a0 = r.s1;                                             // 26e07c daddu $a0, $s1, $zero
        r.ra = READ64(lo32(r.sp) + 0x20u);                       // 26e080 ld $ra, 0x20($sp)
        r.s1 = READ64(lo32(r.sp) + 0x10u);                       // 26e084 ld $s1, 0x10($sp)
        r.s0 = READ64(lo32(r.sp));                               // 26e088 ld $s0, 0x0($sp)
        r.f20 = LWC1(lo32(r.sp) + 0x30u);                        // 26e08c lwc1 $f20, 0x30($sp)
        // 26e090 j func_2BB470 (tail jump)
        r.sp = addiu(r.sp, 64);                                  // 26e094 addiu $sp, $sp, 0x40
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(20);
        tailJump(G_PASS, 0x2bb470u);
        return;
    L_26e098:
        r.v1 = LW(lo32(r.gp) - 0x608cu);                         // 26e098 lw $v1, -0x608C($gp)
        WRITE32(lo32(r.s1) + 0x15cu, lo32(r.a0));                // 26e09c sw $a0, 0x15C($s1)
        r.v0 = LW(lo32(r.s0));                                   // 26e0a0 lw $v0, 0x0($s0)
        r.v0 = slt(r.v0, r.v1);                                  // 26e0a4 slt $v0, $v0, $v1
        t = r.v0 == 0u;                                          // 26e0a8 beqz $v0, . + 4 + (0x63 << 2)
        r.v0 = slti(r.a0, 20);                                   // 26e0ac slti $v0, $a0, 0x14
        if (t) goto L_26e238;
        r.v0 = LW(lo32(r.s0) + 0x1e4u);                          // 26e0b0 lw $v0, 0x1E4($s0)
        if (r.v0 == 0u)                                          // 26e0b4 beql $v0, $zero, . + 4 + (0x1E << 2)
        {
            r.v0 = LW(lo32(r.s0) + 0x14cu);                          // 26e0b8 lw $v0, 0x14C($s0)
            goto L_26e130;
        }
        r.v0 = LW(lo32(r.s0) + 0x1b8u);                          // 26e0bc lw $v0, 0x1B8($s0)
        t = r.v0 == 0u;                                          // 26e0c0 beqz $v0, . + 4 + (0x18 << 2)
        r.a0 = addiu(0u, 400);                                   // 26e0c4 addiu $a0, $zero, 0x190
        if (t) goto L_26e124;
        r.v1 = LW(lo32(r.s0) + 0x178u);                          // 26e0c8 lw $v1, 0x178($s0)
        r.v0 = sext32(0x360000u);                                // 26e0cc lui $v0, 0x36
        r.v1 = mult(r.v1, r.a0, r.lo, r.hi);                     // 26e0d0 mult $v1, $v1, $a0
        r.v0 = addiu(r.v0, 25112);                               // 26e0d4 addiu $v0, $v0, 0x6218
        r.v0 = addu(r.v0, r.v1);                                 // 26e0d8 addu $v0, $v0, $v1
        r.v0 = LW(lo32(r.v0) + 0x1cu);                           // 26e0dc lw $v0, 0x1C($v0)
        r.v1 = r.v0 & 0x2u;                                      // 26e0e0 andi $v1, $v0, 0x2
        t = r.v1 == 0u;                                          // 26e0e4 beqz $v1, . + 4 + (0x9 << 2)
        r.v0 = r.v0 & 0x4u;                                      // 26e0e8 andi $v0, $v0, 0x4
        if (t) goto L_26e10c;
        t = r.v0 != 0u;                                          // 26e0ec bnez $v0, . + 4 + (0x5 << 2)
        r.v0 = addiu(0u, 9);                                     // 26e0f0 addiu $v0, $zero, 0x9
        if (t) goto L_26e104;
        r.v0 = LW(lo32(r.s0) + 0xa94u);                          // 26e0f4 lw $v0, 0xA94($s0)
        r.v0 = r.v0 & 0x10u;                                     // 26e0f8 andi $v0, $v0, 0x10
        t = r.v0 == 0u;                                          // 26e0fc beqz $v0, . + 4 + (0x9 << 2)
        r.v0 = addiu(0u, 9);                                     // 26e100 addiu $v0, $zero, 0x9
        if (t) goto L_26e124;
    L_26e104:
        // 26e104 b . + 4 + (0x42 << 2)
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.v0));                // 26e108 sw $v0, 0x158($s1)
        goto L_26e210;
    L_26e10c:
        r.v0 = LW(lo32(r.s0) + 0xa94u);                          // 26e10c lw $v0, 0xA94($s0)
        r.v0 = r.v0 & 0x10u;                                     // 26e110 andi $v0, $v0, 0x10
        t = r.v0 == 0u;                                          // 26e114 beqz $v0, . + 4 + (0x3 << 2)
        r.v0 = addiu(0u, 8);                                     // 26e118 addiu $v0, $zero, 0x8
        if (t) goto L_26e124;
        // 26e11c b . + 4 + (0x3C << 2)
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.v0));                // 26e120 sw $v0, 0x158($s1)
        goto L_26e210;
    L_26e124:
        r.v0 = addiu(0u, 7);                                     // 26e124 addiu $v0, $zero, 0x7
        // 26e128 b . + 4 + (0x39 << 2)
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.v0));                // 26e12c sw $v0, 0x158($s1)
        goto L_26e210;
    L_26e130:
        t = r.v0 == 0u;                                          // 26e130 beqz $v0, . + 4 + (0x1A << 2)
        r.v0 = LW(lo32(r.s0) + 0x1b8u);                          // 26e134 lw $v0, 0x1B8($s0)
        if (t) goto L_26e19c;
        t = r.v0 == 0u;                                          // 26e138 beqz $v0, . + 4 + (0x1A << 2)
        r.a0 = addiu(0u, 400);                                   // 26e13c addiu $a0, $zero, 0x190
        if (t) goto L_26e1a4;
        r.v1 = LW(lo32(r.s0) + 0x178u);                          // 26e140 lw $v1, 0x178($s0)
        r.v0 = sext32(0x360000u);                                // 26e144 lui $v0, 0x36
        r.v1 = mult(r.v1, r.a0, r.lo, r.hi);                     // 26e148 mult $v1, $v1, $a0
        r.v0 = addiu(r.v0, 25112);                               // 26e14c addiu $v0, $v0, 0x6218
        r.v0 = addu(r.v0, r.v1);                                 // 26e150 addu $v0, $v0, $v1
        r.v0 = LW(lo32(r.v0) + 0x1cu);                           // 26e154 lw $v0, 0x1C($v0)
        r.v1 = r.v0 & 0x2u;                                      // 26e158 andi $v1, $v0, 0x2
        t = r.v1 == 0u;                                          // 26e15c beqz $v1, . + 4 + (0x9 << 2)
        r.v0 = r.v0 & 0x4u;                                      // 26e160 andi $v0, $v0, 0x4
        if (t) goto L_26e184;
        t = r.v0 != 0u;                                          // 26e164 bnez $v0, . + 4 + (0x5 << 2)
        r.v0 = addiu(0u, 6);                                     // 26e168 addiu $v0, $zero, 0x6
        if (t) goto L_26e17c;
        r.v0 = LW(lo32(r.s0) + 0xa94u);                          // 26e16c lw $v0, 0xA94($s0)
        r.v0 = r.v0 & 0x10u;                                     // 26e170 andi $v0, $v0, 0x10
        t = r.v0 == 0u;                                          // 26e174 beqz $v0, . + 4 + (0x25 << 2)
        r.v0 = addiu(0u, 6);                                     // 26e178 addiu $v0, $zero, 0x6
        if (t) goto L_26e20c;
    L_26e17c:
        // 26e17c b . + 4 + (0x24 << 2)
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.v0));                // 26e180 sw $v0, 0x158($s1)
        goto L_26e210;
    L_26e184:
        r.v0 = LW(lo32(r.s0) + 0xa94u);                          // 26e184 lw $v0, 0xA94($s0)
        r.v0 = r.v0 & 0x10u;                                     // 26e188 andi $v0, $v0, 0x10
        t = r.v0 == 0u;                                          // 26e18c beqz $v0, . + 4 + (0x1F << 2)
        r.v0 = addiu(0u, 5);                                     // 26e190 addiu $v0, $zero, 0x5
        if (t) goto L_26e20c;
        // 26e194 b . + 4 + (0x1E << 2)
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.v0));                // 26e198 sw $v0, 0x158($s1)
        goto L_26e210;
    L_26e19c:
        if (r.v0 == 0u)                                          // 26e19c beql $v0, $zero, . + 4 + (0x1C << 2)
        {
            WRITE32(lo32(r.s1) + 0x158u, lo32(0u));                  // 26e1a0 sw $zero, 0x158($s1)
            goto L_26e210;
        }
    L_26e1a4:
        r.a0 = LW(lo32(r.s0) + 0x178u);                          // 26e1a4 lw $a0, 0x178($s0)
        r.v0 = addiu(0u, 400);                                   // 26e1a8 addiu $v0, $zero, 0x190
        r.v1 = sext32(0x360000u);                                // 26e1ac lui $v1, 0x36
        r.a0 = mult(r.a0, r.v0, r.lo, r.hi);                     // 26e1b0 mult $a0, $a0, $v0
        r.v1 = addiu(r.v1, 25112);                               // 26e1b4 addiu $v1, $v1, 0x6218
        r.v1 = addu(r.v1, r.a0);                                 // 26e1b8 addu $v1, $v1, $a0
        r.v0 = LW(lo32(r.v1) + 0x1cu);                           // 26e1bc lw $v0, 0x1C($v1)
        r.v0 = r.v0 & 0x2u;                                      // 26e1c0 andi $v0, $v0, 0x2
        t = r.v0 == 0u;                                          // 26e1c4 beqz $v0, . + 4 + (0x9 << 2)
        r.v0 = LW(lo32(r.s0) + 0xa94u);                          // 26e1c8 lw $v0, 0xA94($s0)
        if (t) goto L_26e1ec;
        r.v0 = r.v0 & 0x10u;                                     // 26e1cc andi $v0, $v0, 0x10
        t = r.v0 == 0u;                                          // 26e1d0 beqz $v0, . + 4 + (0x3 << 2)
        r.v0 = addiu(0u, 4);                                     // 26e1d4 addiu $v0, $zero, 0x4
        if (t) goto L_26e1e0;
        // 26e1d8 b . + 4 + (0xD << 2)
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.v0));                // 26e1dc sw $v0, 0x158($s1)
        goto L_26e210;
    L_26e1e0:
        r.v0 = addiu(0u, 3);                                     // 26e1e0 addiu $v0, $zero, 0x3
        // 26e1e4 b . + 4 + (0xA << 2)
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.v0));                // 26e1e8 sw $v0, 0x158($s1)
        goto L_26e210;
    L_26e1ec:
        r.v0 = r.v0 & 0x10u;                                     // 26e1ec andi $v0, $v0, 0x10
        t = r.v0 == 0u;                                          // 26e1f0 beqz $v0, . + 4 + (0x3 << 2)
        r.v0 = addiu(0u, 2);                                     // 26e1f4 addiu $v0, $zero, 0x2
        if (t) goto L_26e200;
        // 26e1f8 b . + 4 + (0x5 << 2)
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.v0));                // 26e1fc sw $v0, 0x158($s1)
        goto L_26e210;
    L_26e200:
        r.v0 = addiu(0u, 1);                                     // 26e200 addiu $v0, $zero, 0x1
        // 26e204 b . + 4 + (0x2 << 2)
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.v0));                // 26e208 sw $v0, 0x158($s1)
        goto L_26e210;
    L_26e20c:
        WRITE32(lo32(r.s1) + 0x158u, lo32(0u));                  // 26e20c sw $zero, 0x158($s1)
    L_26e210:
        r.a0 = LW(lo32(r.s1) + 0x20u);                           // 26e210 lw $a0, 0x20($s1)
        r.a1 = addiu(0u, 1);                                     // 26e214 addiu $a1, $zero, 0x1
        r.v0 = LW(lo32(r.a0) + 0x58u);                           // 26e218 lw $v0, 0x58($a0)
        r.v1 = LW(lo32(r.v0) + 0xcu);                            // 26e21c lw $v1, 0xC($v0)
        t = r.v1 != r.a1;                                        // 26e220 bne $v1, $a1, . + 4 + (0x1A8 << 2)
        r.ra = READ64(lo32(r.sp) + 0x20u);                       // 26e224 ld $ra, 0x20($sp)
        if (t) goto L_26e8c4;
        r.v0 = LW(lo32(r.s1) + 0x158u);                          // 26e228 lw $v0, 0x158($s1)
        r.v0 = addiu(r.v0, 20);                                  // 26e22c addiu $v0, $v0, 0x14
        // 26e230 b . + 4 + (0x1A4 << 2)
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.v0));                // 26e234 sw $v0, 0x158($s1)
        goto L_26e8c4;
    L_26e238:
        if (r.v0 != 0u)                                          // 26e238 bnel $v0, $zero, . + 4 + (0x4 << 2)
        {
            r.v0 = LW(lo32(r.s0) + 0x1e4u);                          // 26e23c lw $v0, 0x1E4($s0)
            goto L_26e24c;
        }
        r.v0 = addiu(r.a0, -20);                                 // 26e240 addiu $v0, $a0, -0x14
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.v0));                // 26e244 sw $v0, 0x158($s1)
        r.v0 = LW(lo32(r.s0) + 0x1e4u);                          // 26e248 lw $v0, 0x1E4($s0)
    L_26e24c:
        if (r.v0 == 0u)                                          // 26e24c beql $v0, $zero, . + 4 + (0x6E << 2)
        {
            r.v0 = LW(lo32(r.s0) + 0x14cu);                          // 26e250 lw $v0, 0x14C($s0)
            goto L_26e408;
        }
        r.v0 = LW(lo32(r.s0) + 0x1b8u);                          // 26e254 lw $v0, 0x1B8($s0)
        t = r.v0 == 0u;                                          // 26e258 beqz $v0, . + 4 + (0x67 << 2)
        r.v0 = addiu(0u, 400);                                   // 26e25c addiu $v0, $zero, 0x190
        if (t) goto L_26e3f8;
        r.a0 = LW(lo32(r.s0) + 0x178u);                          // 26e260 lw $a0, 0x178($s0)
        r.v1 = sext32(0x360000u);                                // 26e264 lui $v1, 0x36
        r.a0 = mult(r.a0, r.v0, r.lo, r.hi);                     // 26e268 mult $a0, $a0, $v0
        r.v1 = addiu(r.v1, 25112);                               // 26e26c addiu $v1, $v1, 0x6218
        r.v1 = addu(r.v1, r.a0);                                 // 26e270 addu $v1, $v1, $a0
        r.v0 = LW(lo32(r.v1) + 0x1cu);                           // 26e274 lw $v0, 0x1C($v1)
        r.v0 = r.v0 & 0x2u;                                      // 26e278 andi $v0, $v0, 0x2
        t = r.v0 == 0u;                                          // 26e27c beqz $v0, . + 4 + (0x3D << 2)
        r.v0 = LW(lo32(r.s0) + 0xa94u);                          // 26e280 lw $v0, 0xA94($s0)
        if (t) goto L_26e374;
        r.v0 = r.v0 & 0x10u;                                     // 26e284 andi $v0, $v0, 0x10
        t = r.v0 == 0u;                                          // 26e288 beqz $v0, . + 4 + (0x1C << 2)
        r.a0 = LW(lo32(r.s1) + 0x158u);                          // 26e28c lw $a0, 0x158($s1)
        if (t) goto L_26e2fc;
        r.v0 = addiu(r.a0, -8);                                  // 26e290 addiu $v0, $a0, -0x8
        r.v0 = sltu(r.v0, sext32(2u));                           // 26e294 sltiu $v0, $v0, 0x2
        if (r.v0 != 0u)                                          // 26e298 bnel $v0, $zero, . + 4 + (0x167 << 2)
        {
            r.a2 = LW(lo32(r.s1) + 0x20u);                           // 26e29c lw $a2, 0x20($s1)
            goto L_26e838;
        }
        r.ra = 0x26e2a8u;                                        // 26e2a0 jal func_2B68D0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b68d0u, 0x26e2a0u, 0x26e2a8u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_26e2a8:
        t = neg64(r.v0);                                         // 26e2a8 bltz $v0, . + 4 + (0x4 << 2)
        r.v1 = srl32(r.v0, 1);                                   // 26e2ac srl $v1, $v0, 1
        if (t) goto L_26e2bc;
        r.f2 = floatOf(lo32(r.v0));                              // 26e2b0 mtc1 $v0, $f2
        // 26e2b4 b . + 4 + (0x6 << 2)
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 26e2b8 cvt.s.w $f2, $f2
        goto L_26e2d0;
    L_26e2bc:
        r.v0 = r.v0 & 0x1u;                                      // 26e2bc andi $v0, $v0, 0x1
        r.v0 = r.v0 | r.v1;                                      // 26e2c0 or $v0, $v0, $v1
        r.f2 = floatOf(lo32(r.v0));                              // 26e2c4 mtc1 $v0, $f2
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 26e2c8 cvt.s.w $f2, $f2
        r.f2 = FPU_ADD_S(r.f2, r.f2);                            // 26e2cc add.s $f2, $f2, $f2
    L_26e2d0:
        r.at = sext32(0x2f800000u);                              // 26e2d0 lui $at, 0x2F80
        r.f0 = floatOf(lo32(r.at));                              // 26e2d4 mtc1 $at, $f0
        r.at = sext32(0x3f000000u);                              // 26e2d8 lui $at, 0x3F00
        r.f1 = floatOf(lo32(r.at));                              // 26e2dc mtc1 $at, $f1
        r.f0 = FPU_MUL_S(r.f2, r.f0);                            // 26e2e0 mul.s $f0, $f2, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 26e2e4 c.lt.s $f1, $f0
        t = (r.fcr31 & kCondition) != 0u;                        // 26e2ec bc1t . + 4 + (0x3F << 2)
        r.v0 = addiu(0u, 8);                                     // 26e2f0 addiu $v0, $zero, 0x8
        if (t) goto L_26e3ec;
        // 26e2f4 b . + 4 + (0xA8 << 2)
        r.v0 = addiu(0u, 9);                                     // 26e2f8 addiu $v0, $zero, 0x9
        goto L_26e598;
    L_26e2fc:
        r.v0 = slti(r.a0, 7);                                    // 26e2fc slti $v0, $a0, 0x7
        if (r.v0 == 0u)                                          // 26e300 beql $v0, $zero, . + 4 + (0x14D << 2)
        {
            r.a2 = LW(lo32(r.s1) + 0x20u);                           // 26e304 lw $a2, 0x20($s1)
            goto L_26e838;
        }
        r.ra = 0x26e310u;                                        // 26e308 jal func_2B68D0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b68d0u, 0x26e308u, 0x26e310u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_26e310:
        t = neg64(r.v0);                                         // 26e310 bltz $v0, . + 4 + (0x4 << 2)
        r.v1 = srl32(r.v0, 1);                                   // 26e314 srl $v1, $v0, 1
        if (t) goto L_26e324;
        r.f2 = floatOf(lo32(r.v0));                              // 26e318 mtc1 $v0, $f2
        // 26e31c b . + 4 + (0x6 << 2)
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 26e320 cvt.s.w $f2, $f2
        goto L_26e338;
    L_26e324:
        r.v0 = r.v0 & 0x1u;                                      // 26e324 andi $v0, $v0, 0x1
        r.v0 = r.v0 | r.v1;                                      // 26e328 or $v0, $v0, $v1
        r.f2 = floatOf(lo32(r.v0));                              // 26e32c mtc1 $v0, $f2
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 26e330 cvt.s.w $f2, $f2
        r.f2 = FPU_ADD_S(r.f2, r.f2);                            // 26e334 add.s $f2, $f2, $f2
    L_26e338:
        r.at = sext32(0x2f800000u);                              // 26e338 lui $at, 0x2F80
        r.f0 = floatOf(lo32(r.at));                              // 26e33c mtc1 $at, $f0
        r.f1 = LWC1(lo32(r.gp) - 0x7b68u);                       // 26e340 lwc1 $f1, -0x7B68($gp)
        r.f2 = FPU_MUL_S(r.f2, r.f0);                            // 26e344 mul.s $f2, $f2, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f2, r.f1)); // 26e348 c.lt.s $f2, $f1
        t = (r.fcr31 & kCondition) != 0u;                        // 26e350 bc1t . + 4 + (0x2A << 2)
        r.v0 = addiu(0u, 7);                                     // 26e354 addiu $v0, $zero, 0x7
        if (t) goto L_26e3fc;
        r.f0 = LWC1(lo32(r.gp) - 0x7b64u);                       // 26e358 lwc1 $f0, -0x7B64($gp)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f2, r.f0)); // 26e35c c.lt.s $f2, $f0
        t = (r.fcr31 & kCondition) != 0u;                        // 26e364 bc1t . + 4 + (0x21 << 2)
        r.v0 = addiu(0u, 8);                                     // 26e368 addiu $v0, $zero, 0x8
        if (t) goto L_26e3ec;
        // 26e36c b . + 4 + (0x8A << 2)
        r.v0 = addiu(0u, 9);                                     // 26e370 addiu $v0, $zero, 0x9
        goto L_26e598;
    L_26e374:
        r.v0 = r.v0 & 0x10u;                                     // 26e374 andi $v0, $v0, 0x10
        t = r.v0 != 0u;                                          // 26e378 bnez $v0, . + 4 + (0x1C << 2)
        r.v0 = addiu(0u, 8);                                     // 26e37c addiu $v0, $zero, 0x8
        if (t) goto L_26e3ec;
        r.a0 = LW(lo32(r.s1) + 0x158u);                          // 26e380 lw $a0, 0x158($s1)
        r.v0 = addiu(r.a0, -7);                                  // 26e384 addiu $v0, $a0, -0x7
        r.v0 = sltu(r.v0, sext32(2u));                           // 26e388 sltiu $v0, $v0, 0x2
        if (r.v0 != 0u)                                          // 26e38c bnel $v0, $zero, . + 4 + (0x12A << 2)
        {
            r.a2 = LW(lo32(r.s1) + 0x20u);                           // 26e390 lw $a2, 0x20($s1)
            goto L_26e838;
        }
        r.ra = 0x26e39cu;                                        // 26e394 jal func_2B68D0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b68d0u, 0x26e394u, 0x26e39cu)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_26e39c:
        t = neg64(r.v0);                                         // 26e39c bltz $v0, . + 4 + (0x4 << 2)
        r.v1 = srl32(r.v0, 1);                                   // 26e3a0 srl $v1, $v0, 1
        if (t) goto L_26e3b0;
        r.f2 = floatOf(lo32(r.v0));                              // 26e3a4 mtc1 $v0, $f2
        // 26e3a8 b . + 4 + (0x6 << 2)
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 26e3ac cvt.s.w $f2, $f2
        goto L_26e3c4;
    L_26e3b0:
        r.v0 = r.v0 & 0x1u;                                      // 26e3b0 andi $v0, $v0, 0x1
        r.v0 = r.v0 | r.v1;                                      // 26e3b4 or $v0, $v0, $v1
        r.f2 = floatOf(lo32(r.v0));                              // 26e3b8 mtc1 $v0, $f2
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 26e3bc cvt.s.w $f2, $f2
        r.f2 = FPU_ADD_S(r.f2, r.f2);                            // 26e3c0 add.s $f2, $f2, $f2
    L_26e3c4:
        r.at = sext32(0x2f800000u);                              // 26e3c4 lui $at, 0x2F80
        r.f0 = floatOf(lo32(r.at));                              // 26e3c8 mtc1 $at, $f0
        r.at = sext32(0x3f000000u);                              // 26e3cc lui $at, 0x3F00
        r.f1 = floatOf(lo32(r.at));                              // 26e3d0 mtc1 $at, $f1
        r.f0 = FPU_MUL_S(r.f2, r.f0);                            // 26e3d4 mul.s $f0, $f2, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 26e3d8 c.lt.s $f1, $f0
        t = (r.fcr31 & kCondition) != 0u;                        // 26e3e0 bc1t . + 4 + (0x6 << 2)
        r.v0 = addiu(0u, 7);                                     // 26e3e4 addiu $v0, $zero, 0x7
        if (t) goto L_26e3fc;
        r.v0 = addiu(0u, 8);                                     // 26e3e8 addiu $v0, $zero, 0x8
    L_26e3ec:
        r.a0 = addiu(0u, 8);                                     // 26e3ec addiu $a0, $zero, 0x8
        // 26e3f0 b . + 4 + (0x110 << 2)
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.v0));                // 26e3f4 sw $v0, 0x158($s1)
        goto L_26e834;
    L_26e3f8:
        r.v0 = addiu(0u, 7);                                     // 26e3f8 addiu $v0, $zero, 0x7
    L_26e3fc:
        r.a0 = addiu(0u, 7);                                     // 26e3fc addiu $a0, $zero, 0x7
        // 26e400 b . + 4 + (0x10C << 2)
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.v0));                // 26e404 sw $v0, 0x158($s1)
        goto L_26e834;
    L_26e408:
        t = r.v0 == 0u;                                          // 26e408 beqz $v0, . + 4 + (0x90 << 2)
        r.v0 = LW(lo32(r.s0) + 0x1b8u);                          // 26e40c lw $v0, 0x1B8($s0)
        if (t) goto L_26e64c;
        t = r.v0 == 0u;                                          // 26e410 beqz $v0, . + 4 + (0x90 << 2)
        r.a0 = addiu(0u, 400);                                   // 26e414 addiu $a0, $zero, 0x190
        if (t) goto L_26e654;
        r.v1 = LW(lo32(r.s0) + 0x178u);                          // 26e418 lw $v1, 0x178($s0)
        r.v0 = sext32(0x360000u);                                // 26e41c lui $v0, 0x36
        r.v1 = mult(r.v1, r.a0, r.lo, r.hi);                     // 26e420 mult $v1, $v1, $a0
        r.v0 = addiu(r.v0, 25112);                               // 26e424 addiu $v0, $v0, 0x6218
        r.v0 = addu(r.v0, r.v1);                                 // 26e428 addu $v0, $v0, $v1
        r.a2 = LW(lo32(r.v0) + 0x1cu);                           // 26e42c lw $a2, 0x1C($v0)
        r.v1 = r.a2 & 0x2u;                                      // 26e430 andi $v1, $a2, 0x2
        t = r.v1 == 0u;                                          // 26e434 beqz $v1, . + 4 + (0x5B << 2)
        r.v0 = LW(lo32(r.s0) + 0xa94u);                          // 26e438 lw $v0, 0xA94($s0)
        if (t) goto L_26e5a4;
        r.v0 = r.v0 & 0x10u;                                     // 26e43c andi $v0, $v0, 0x10
        t = r.v0 == 0u;                                          // 26e440 beqz $v0, . + 4 + (0x25 << 2)
        r.v0 = r.a2 & 0x4u;                                      // 26e444 andi $v0, $a2, 0x4
        if (t) goto L_26e4d8;
        t = r.v0 != 0u;                                          // 26e448 bnez $v0, . + 4 + (0x4F << 2)
        r.v0 = addiu(0u, 6);                                     // 26e44c addiu $v0, $zero, 0x6
        if (t) goto L_26e588;
        r.a0 = LW(lo32(r.s1) + 0x158u);                          // 26e450 lw $a0, 0x158($s1)
        t = r.a0 == r.v0;                                        // 26e454 beq $a0, $v0, . + 4 + (0xF7 << 2)
        r.v0 = addiu(0u, 9);                                     // 26e458 addiu $v0, $zero, 0x9
        if (t) goto L_26e834;
        t = r.a0 == r.v0;                                        // 26e45c beq $a0, $v0, . + 4 + (0xF5 << 2)
        r.v0 = addiu(0u, 5);                                     // 26e460 addiu $v0, $zero, 0x5
        if (t) goto L_26e834;
        if (r.a0 == r.v0)                                        // 26e464 beql $a0, $v0, . + 4 + (0xF4 << 2)
        {
            r.a2 = LW(lo32(r.s1) + 0x20u);                           // 26e468 lw $a2, 0x20($s1)
            goto L_26e838;
        }
        r.ra = 0x26e474u;                                        // 26e46c jal func_2B68D0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a2, 6); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b68d0u, 0x26e46cu, 0x26e474u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_26e474:
        t = neg64(r.v0);                                         // 26e474 bltz $v0, . + 4 + (0x4 << 2)
        r.v1 = srl32(r.v0, 1);                                   // 26e478 srl $v1, $v0, 1
        if (t) goto L_26e488;
        r.f2 = floatOf(lo32(r.v0));                              // 26e47c mtc1 $v0, $f2
        // 26e480 b . + 4 + (0x6 << 2)
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 26e484 cvt.s.w $f2, $f2
        goto L_26e49c;
    L_26e488:
        r.v0 = r.v0 & 0x1u;                                      // 26e488 andi $v0, $v0, 0x1
        r.v0 = r.v0 | r.v1;                                      // 26e48c or $v0, $v0, $v1
        r.f2 = floatOf(lo32(r.v0));                              // 26e490 mtc1 $v0, $f2
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 26e494 cvt.s.w $f2, $f2
        r.f2 = FPU_ADD_S(r.f2, r.f2);                            // 26e498 add.s $f2, $f2, $f2
    L_26e49c:
        r.at = sext32(0x2f800000u);                              // 26e49c lui $at, 0x2F80
        r.f0 = floatOf(lo32(r.at));                              // 26e4a0 mtc1 $at, $f0
        r.f1 = LWC1(lo32(r.gp) - 0x7b60u);                       // 26e4a4 lwc1 $f1, -0x7B60($gp)
        r.f2 = FPU_MUL_S(r.f2, r.f0);                            // 26e4a8 mul.s $f2, $f2, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f2, r.f1)); // 26e4ac c.lt.s $f2, $f1
        t = (r.fcr31 & kCondition) != 0u;                        // 26e4b4 bc1t . + 4 + (0x34 << 2)
        r.v0 = addiu(0u, 6);                                     // 26e4b8 addiu $v0, $zero, 0x6
        if (t) goto L_26e588;
        r.f0 = LWC1(lo32(r.gp) - 0x7b5cu);                       // 26e4bc lwc1 $f0, -0x7B5C($gp)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f2, r.f0)); // 26e4c0 c.lt.s $f2, $f0
        t = (r.fcr31 & kCondition) != 0u;                        // 26e4c8 bc1t . + 4 + (0x33 << 2)
        r.v0 = addiu(0u, 9);                                     // 26e4cc addiu $v0, $zero, 0x9
        if (t) goto L_26e598;
        // 26e4d0 b . + 4 + (0x51 << 2)
        r.v0 = addiu(0u, 5);                                     // 26e4d4 addiu $v0, $zero, 0x5
        goto L_26e618;
    L_26e4d8:
        t = r.v0 != 0u;                                          // 26e4d8 bnez $v0, . + 4 + (0x2B << 2)
        r.v0 = addiu(0u, 6);                                     // 26e4dc addiu $v0, $zero, 0x6
        if (t) goto L_26e588;
        r.a0 = LW(lo32(r.s1) + 0x158u);                          // 26e4e0 lw $a0, 0x158($s1)
        r.v0 = sltu(r.a0, sext32(2u));                           // 26e4e4 sltiu $v0, $a0, 0x2
        if (r.v0 != 0u)                                          // 26e4e8 bnel $v0, $zero, . + 4 + (0xD3 << 2)
        {
            r.a2 = LW(lo32(r.s1) + 0x20u);                           // 26e4ec lw $a2, 0x20($s1)
            goto L_26e838;
        }
        r.v0 = addiu(0u, 6);                                     // 26e4f0 addiu $v0, $zero, 0x6
        t = r.a0 == r.v0;                                        // 26e4f4 beq $a0, $v0, . + 4 + (0xCF << 2)
        r.v0 = addiu(0u, 9);                                     // 26e4f8 addiu $v0, $zero, 0x9
        if (t) goto L_26e834;
        if (r.a0 == r.v0)                                        // 26e4fc beql $a0, $v0, . + 4 + (0xCE << 2)
        {
            r.a2 = LW(lo32(r.s1) + 0x20u);                           // 26e500 lw $a2, 0x20($s1)
            goto L_26e838;
        }
        r.ra = 0x26e50cu;                                        // 26e504 jal func_2B68D0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a2, 6); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b68d0u, 0x26e504u, 0x26e50cu)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_26e50c:
        t = neg64(r.v0);                                         // 26e50c bltz $v0, . + 4 + (0x4 << 2)
        r.v1 = srl32(r.v0, 1);                                   // 26e510 srl $v1, $v0, 1
        if (t) goto L_26e520;
        r.f2 = floatOf(lo32(r.v0));                              // 26e514 mtc1 $v0, $f2
        // 26e518 b . + 4 + (0x6 << 2)
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 26e51c cvt.s.w $f2, $f2
        goto L_26e534;
    L_26e520:
        r.v0 = r.v0 & 0x1u;                                      // 26e520 andi $v0, $v0, 0x1
        r.v0 = r.v0 | r.v1;                                      // 26e524 or $v0, $v0, $v1
        r.f2 = floatOf(lo32(r.v0));                              // 26e528 mtc1 $v0, $f2
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 26e52c cvt.s.w $f2, $f2
        r.f2 = FPU_ADD_S(r.f2, r.f2);                            // 26e530 add.s $f2, $f2, $f2
    L_26e534:
        r.at = sext32(0x2f800000u);                              // 26e534 lui $at, 0x2F80
        r.f0 = floatOf(lo32(r.at));                              // 26e538 mtc1 $at, $f0
        r.at = sext32(0x3e800000u);                              // 26e53c lui $at, 0x3E80
        r.f1 = floatOf(lo32(r.at));                              // 26e540 mtc1 $at, $f1
        r.f2 = FPU_MUL_S(r.f2, r.f0);                            // 26e544 mul.s $f2, $f2, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f2, r.f1)); // 26e548 c.lt.s $f2, $f1
        if ((r.fcr31 & kCondition) != 0u)                        // 26e550 bc1tl . + 4 + (0xB7 << 2)
        {
            WRITE32(lo32(r.s1) + 0x158u, lo32(0u));                  // 26e554 sw $zero, 0x158($s1)
            goto L_26e830;
        }
        r.at = sext32(0x3f000000u);                              // 26e558 lui $at, 0x3F00
        r.f0 = floatOf(lo32(r.at));                              // 26e55c mtc1 $at, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f2, r.f0)); // 26e560 c.lt.s $f2, $f0
        t = (r.fcr31 & kCondition) != 0u;                        // 26e568 bc1t . + 4 + (0xAE << 2)
        r.v0 = addiu(0u, 1);                                     // 26e56c addiu $v0, $zero, 0x1
        if (t) goto L_26e824;
        r.at = sext32(0x3f400000u);                              // 26e570 lui $at, 0x3F40
        r.f0 = floatOf(lo32(r.at));                              // 26e574 mtc1 $at, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f2, r.f0)); // 26e578 c.lt.s $f2, $f0
        t = (r.fcr31 & kCondition) == 0u;                        // 26e580 bc1f . + 4 + (0x4 << 2)
        r.v0 = addiu(0u, 6);                                     // 26e584 addiu $v0, $zero, 0x6
        if (t) goto L_26e594;
    L_26e588:
        r.a0 = addiu(0u, 6);                                     // 26e588 addiu $a0, $zero, 0x6
        // 26e58c b . + 4 + (0xA9 << 2)
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.v0));                // 26e590 sw $v0, 0x158($s1)
        goto L_26e834;
    L_26e594:
        r.v0 = addiu(0u, 9);                                     // 26e594 addiu $v0, $zero, 0x9
    L_26e598:
        r.a0 = addiu(0u, 9);                                     // 26e598 addiu $a0, $zero, 0x9
        // 26e59c b . + 4 + (0xA5 << 2)
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.v0));                // 26e5a0 sw $v0, 0x158($s1)
        goto L_26e834;
    L_26e5a4:
        r.v0 = r.v0 & 0x10u;                                     // 26e5a4 andi $v0, $v0, 0x10
        t = r.v0 == 0u;                                          // 26e5a8 beqz $v0, . + 4 + (0x1E << 2)
        r.v0 = addiu(0u, 2);                                     // 26e5ac addiu $v0, $zero, 0x2
        if (t) goto L_26e624;
        r.a0 = LW(lo32(r.s1) + 0x158u);                          // 26e5b0 lw $a0, 0x158($s1)
        t = r.a0 == r.v0;                                        // 26e5b4 beq $a0, $v0, . + 4 + (0x9F << 2)
        r.v0 = addiu(0u, 5);                                     // 26e5b8 addiu $v0, $zero, 0x5
        if (t) goto L_26e834;
        if (r.a0 == r.v0)                                        // 26e5bc beql $a0, $v0, . + 4 + (0x9E << 2)
        {
            r.a2 = LW(lo32(r.s1) + 0x20u);                           // 26e5c0 lw $a2, 0x20($s1)
            goto L_26e838;
        }
        r.ra = 0x26e5ccu;                                        // 26e5c4 jal func_2B68D0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a2, 6); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b68d0u, 0x26e5c4u, 0x26e5ccu)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_26e5cc:
        t = neg64(r.v0);                                         // 26e5cc bltz $v0, . + 4 + (0x4 << 2)
        r.v1 = srl32(r.v0, 1);                                   // 26e5d0 srl $v1, $v0, 1
        if (t) goto L_26e5e0;
        r.f2 = floatOf(lo32(r.v0));                              // 26e5d4 mtc1 $v0, $f2
        // 26e5d8 b . + 4 + (0x6 << 2)
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 26e5dc cvt.s.w $f2, $f2
        goto L_26e5f4;
    L_26e5e0:
        r.v0 = r.v0 & 0x1u;                                      // 26e5e0 andi $v0, $v0, 0x1
        r.v0 = r.v0 | r.v1;                                      // 26e5e4 or $v0, $v0, $v1
        r.f2 = floatOf(lo32(r.v0));                              // 26e5e8 mtc1 $v0, $f2
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 26e5ec cvt.s.w $f2, $f2
        r.f2 = FPU_ADD_S(r.f2, r.f2);                            // 26e5f0 add.s $f2, $f2, $f2
    L_26e5f4:
        r.at = sext32(0x2f800000u);                              // 26e5f4 lui $at, 0x2F80
        r.f0 = floatOf(lo32(r.at));                              // 26e5f8 mtc1 $at, $f0
        r.f1 = LWC1(lo32(r.gp) - 0x7b58u);                       // 26e5fc lwc1 $f1, -0x7B58($gp)
        r.f0 = FPU_MUL_S(r.f2, r.f0);                            // 26e600 mul.s $f0, $f2, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 26e604 c.lt.s $f1, $f0
        t = (r.fcr31 & kCondition) != 0u;                        // 26e60c bc1t . + 4 + (0x68 << 2)
        r.v0 = addiu(0u, 2);                                     // 26e610 addiu $v0, $zero, 0x2
        if (t) goto L_26e7b0;
        r.v0 = addiu(0u, 5);                                     // 26e614 addiu $v0, $zero, 0x5
    L_26e618:
        r.a0 = addiu(0u, 5);                                     // 26e618 addiu $a0, $zero, 0x5
        // 26e61c b . + 4 + (0x85 << 2)
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.v0));                // 26e620 sw $v0, 0x158($s1)
        goto L_26e834;
    L_26e624:
        r.a0 = LW(lo32(r.s1) + 0x158u);                          // 26e624 lw $a0, 0x158($s1)
        r.v0 = slti(r.a0, 2);                                    // 26e628 slti $v0, $a0, 0x2
        if (r.v0 != 0u)                                          // 26e62c bnel $v0, $zero, . + 4 + (0x82 << 2)
        {
            r.a2 = LW(lo32(r.s1) + 0x20u);                           // 26e630 lw $a2, 0x20($s1)
            goto L_26e838;
        }
        r.ra = 0x26e63cu;                                        // 26e634 jal func_2B68D0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a2, 6); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b68d0u, 0x26e634u, 0x26e63cu)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_26e63c:
        t = !neg64(r.v0);                                        // 26e63c bgez $v0, . + 4 + (0x67 << 2)
        r.v1 = srl32(r.v0, 1);                                   // 26e640 srl $v1, $v0, 1
        if (t) goto L_26e7dc;
        // 26e644 b . + 4 + (0x69 << 2)
        r.v0 = r.v0 & 0x1u;                                      // 26e648 andi $v0, $v0, 0x1
        goto L_26e7ec;
    L_26e64c:
        if (r.v0 == 0u)                                          // 26e64c beql $v0, $zero, . + 4 + (0x78 << 2)
        {
            WRITE32(lo32(r.s1) + 0x158u, lo32(0u));                  // 26e650 sw $zero, 0x158($s1)
            goto L_26e830;
        }
    L_26e654:
        r.v1 = LW(lo32(r.s0) + 0x178u);                          // 26e654 lw $v1, 0x178($s0)
        r.a0 = addiu(0u, 400);                                   // 26e658 addiu $a0, $zero, 0x190
        r.v0 = sext32(0x360000u);                                // 26e65c lui $v0, 0x36
        r.v1 = mult(r.v1, r.a0, r.lo, r.hi);                     // 26e660 mult $v1, $v1, $a0
        r.v0 = addiu(r.v0, 25112);                               // 26e664 addiu $v0, $v0, 0x6218
        r.v0 = addu(r.v0, r.v1);                                 // 26e668 addu $v0, $v0, $v1
        r.a0 = LW(lo32(r.v0) + 0x1cu);                           // 26e66c lw $a0, 0x1C($v0)
        r.v1 = r.a0 & 0x2u;                                      // 26e670 andi $v1, $a0, 0x2
        t = r.v1 == 0u;                                          // 26e674 beqz $v1, . + 4 + (0x4B << 2)
        r.v0 = LW(lo32(r.s0) + 0xa94u);                          // 26e678 lw $v0, 0xA94($s0)
        if (t) goto L_26e7a4;
        r.v0 = r.v0 & 0x10u;                                     // 26e67c andi $v0, $v0, 0x10
        t = r.v0 == 0u;                                          // 26e680 beqz $v0, . + 4 + (0x27 << 2)
        r.v0 = r.a0 & 0x4u;                                      // 26e684 andi $v0, $a0, 0x4
        if (t) goto L_26e720;
        t = r.v0 != 0u;                                          // 26e688 bnez $v0, . + 4 + (0x22 << 2)
        r.v0 = addiu(0u, 4);                                     // 26e68c addiu $v0, $zero, 0x4
        if (t) goto L_26e714;
        r.a0 = LW(lo32(r.s1) + 0x158u);                          // 26e690 lw $a0, 0x158($s1)
        r.v0 = addiu(0u, 2);                                     // 26e694 addiu $v0, $zero, 0x2
        t = r.a0 == r.v0;                                        // 26e698 beq $a0, $v0, . + 4 + (0x66 << 2)
        r.a1 = addiu(0u, 4);                                     // 26e69c addiu $a1, $zero, 0x4
        if (t) goto L_26e834;
        t = r.a0 == r.a1;                                        // 26e6a0 beq $a0, $a1, . + 4 + (0x64 << 2)
        r.v0 = sext32(0x100000u);                                // 26e6a4 lui $v0, 0x10
        if (t) goto L_26e834;
        r.v1 = LW(lo32(r.s0) + 0xa9cu);                          // 26e6a8 lw $v1, 0xA9C($s0)
        t = r.v1 != r.v0;                                        // 26e6ac bne $v1, $v0, . + 4 + (0x3 << 2)
        r.a0 = addiu(0u, 4);                                     // 26e6b0 addiu $a0, $zero, 0x4
        if (t) goto L_26e6bc;
        // 26e6b4 b . + 4 + (0x5F << 2)
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.a1));                // 26e6b8 sw $a1, 0x158($s1)
        goto L_26e834;
    L_26e6bc:
        r.ra = 0x26e6c4u;                                        // 26e6bc jal func_2B68D0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b68d0u, 0x26e6bcu, 0x26e6c4u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_26e6c4:
        t = neg64(r.v0);                                         // 26e6c4 bltz $v0, . + 4 + (0x4 << 2)
        r.v1 = srl32(r.v0, 1);                                   // 26e6c8 srl $v1, $v0, 1
        if (t) goto L_26e6d8;
        r.f2 = floatOf(lo32(r.v0));                              // 26e6cc mtc1 $v0, $f2
        // 26e6d0 b . + 4 + (0x6 << 2)
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 26e6d4 cvt.s.w $f2, $f2
        goto L_26e6ec;
    L_26e6d8:
        r.v0 = r.v0 & 0x1u;                                      // 26e6d8 andi $v0, $v0, 0x1
        r.v0 = r.v0 | r.v1;                                      // 26e6dc or $v0, $v0, $v1
        r.f2 = floatOf(lo32(r.v0));                              // 26e6e0 mtc1 $v0, $f2
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 26e6e4 cvt.s.w $f2, $f2
        r.f2 = FPU_ADD_S(r.f2, r.f2);                            // 26e6e8 add.s $f2, $f2, $f2
    L_26e6ec:
        r.at = sext32(0x2f800000u);                              // 26e6ec lui $at, 0x2F80
        r.f0 = floatOf(lo32(r.at));                              // 26e6f0 mtc1 $at, $f0
        r.at = sext32(0x3f000000u);                              // 26e6f4 lui $at, 0x3F00
        r.f1 = floatOf(lo32(r.at));                              // 26e6f8 mtc1 $at, $f1
        r.f0 = FPU_MUL_S(r.f2, r.f0);                            // 26e6fc mul.s $f0, $f2, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 26e700 c.lt.s $f1, $f0
        t = (r.fcr31 & kCondition) != 0u;                        // 26e708 bc1t . + 4 + (0x29 << 2)
        r.v0 = addiu(0u, 2);                                     // 26e70c addiu $v0, $zero, 0x2
        if (t) goto L_26e7b0;
        r.v0 = addiu(0u, 4);                                     // 26e710 addiu $v0, $zero, 0x4
    L_26e714:
        r.a0 = addiu(0u, 4);                                     // 26e714 addiu $a0, $zero, 0x4
        // 26e718 b . + 4 + (0x46 << 2)
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.v0));                // 26e71c sw $v0, 0x158($s1)
        goto L_26e834;
    L_26e720:
        t = r.v0 != 0u;                                          // 26e720 bnez $v0, . + 4 + (0x1D << 2)
        r.v0 = addiu(0u, 3);                                     // 26e724 addiu $v0, $zero, 0x3
        if (t) goto L_26e798;
        r.a0 = LW(lo32(r.s1) + 0x158u);                          // 26e728 lw $a0, 0x158($s1)
        r.v0 = addiu(0u, 1);                                     // 26e72c addiu $v0, $zero, 0x1
        t = r.a0 == r.v0;                                        // 26e730 beq $a0, $v0, . + 4 + (0x40 << 2)
        r.v0 = addiu(0u, 3);                                     // 26e734 addiu $v0, $zero, 0x3
        if (t) goto L_26e834;
        if (r.a0 == r.v0)                                        // 26e738 beql $a0, $v0, . + 4 + (0x3F << 2)
        {
            r.a2 = LW(lo32(r.s1) + 0x20u);                           // 26e73c lw $a2, 0x20($s1)
            goto L_26e838;
        }
        r.ra = 0x26e748u;                                        // 26e740 jal func_2B68D0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b68d0u, 0x26e740u, 0x26e748u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_26e748:
        t = neg64(r.v0);                                         // 26e748 bltz $v0, . + 4 + (0x4 << 2)
        r.v1 = srl32(r.v0, 1);                                   // 26e74c srl $v1, $v0, 1
        if (t) goto L_26e75c;
        r.f2 = floatOf(lo32(r.v0));                              // 26e750 mtc1 $v0, $f2
        // 26e754 b . + 4 + (0x6 << 2)
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 26e758 cvt.s.w $f2, $f2
        goto L_26e770;
    L_26e75c:
        r.v0 = r.v0 & 0x1u;                                      // 26e75c andi $v0, $v0, 0x1
        r.v0 = r.v0 | r.v1;                                      // 26e760 or $v0, $v0, $v1
        r.f2 = floatOf(lo32(r.v0));                              // 26e764 mtc1 $v0, $f2
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 26e768 cvt.s.w $f2, $f2
        r.f2 = FPU_ADD_S(r.f2, r.f2);                            // 26e76c add.s $f2, $f2, $f2
    L_26e770:
        r.at = sext32(0x2f800000u);                              // 26e770 lui $at, 0x2F80
        r.f0 = floatOf(lo32(r.at));                              // 26e774 mtc1 $at, $f0
        r.at = sext32(0x3f000000u);                              // 26e778 lui $at, 0x3F00
        r.f1 = floatOf(lo32(r.at));                              // 26e77c mtc1 $at, $f1
        r.f2 = FPU_MUL_S(r.f2, r.f0);                            // 26e780 mul.s $f2, $f2, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f2, r.f1)); // 26e784 c.lt.s $f2, $f1
        t = (r.fcr31 & kCondition) != 0u;                        // 26e78c bc1t . + 4 + (0x25 << 2)
        r.v0 = addiu(0u, 1);                                     // 26e790 addiu $v0, $zero, 0x1
        if (t) goto L_26e824;
        r.v0 = addiu(0u, 3);                                     // 26e794 addiu $v0, $zero, 0x3
    L_26e798:
        r.a0 = addiu(0u, 3);                                     // 26e798 addiu $a0, $zero, 0x3
        // 26e79c b . + 4 + (0x25 << 2)
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.v0));                // 26e7a0 sw $v0, 0x158($s1)
        goto L_26e834;
    L_26e7a4:
        r.v0 = r.v0 & 0x10u;                                     // 26e7a4 andi $v0, $v0, 0x10
        t = r.v0 == 0u;                                          // 26e7a8 beqz $v0, . + 4 + (0x4 << 2)
        r.v0 = addiu(0u, 2);                                     // 26e7ac addiu $v0, $zero, 0x2
        if (t) goto L_26e7bc;
    L_26e7b0:
        r.a0 = addiu(0u, 2);                                     // 26e7b0 addiu $a0, $zero, 0x2
        // 26e7b4 b . + 4 + (0x1F << 2)
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.v0));                // 26e7b8 sw $v0, 0x158($s1)
        goto L_26e834;
    L_26e7bc:
        r.a0 = LW(lo32(r.s1) + 0x158u);                          // 26e7bc lw $a0, 0x158($s1)
        r.v0 = sltu(r.a0, sext32(2u));                           // 26e7c0 sltiu $v0, $a0, 0x2
        if (r.v0 != 0u)                                          // 26e7c4 bnel $v0, $zero, . + 4 + (0x1C << 2)
        {
            r.a2 = LW(lo32(r.s1) + 0x20u);                           // 26e7c8 lw $a2, 0x20($s1)
            goto L_26e838;
        }
        r.ra = 0x26e7d4u;                                        // 26e7cc jal func_2B68D0
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b68d0u, 0x26e7ccu, 0x26e7d4u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_26e7d4:
        t = neg64(r.v0);                                         // 26e7d4 bltz $v0, . + 4 + (0x4 << 2)
        r.v1 = srl32(r.v0, 1);                                   // 26e7d8 srl $v1, $v0, 1
        if (t) goto L_26e7e8;
    L_26e7dc:
        r.f2 = floatOf(lo32(r.v0));                              // 26e7dc mtc1 $v0, $f2
        // 26e7e0 b . + 4 + (0x6 << 2)
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 26e7e4 cvt.s.w $f2, $f2
        goto L_26e7fc;
    L_26e7e8:
        r.v0 = r.v0 & 0x1u;                                      // 26e7e8 andi $v0, $v0, 0x1
    L_26e7ec:
        r.v0 = r.v0 | r.v1;                                      // 26e7ec or $v0, $v0, $v1
        r.f2 = floatOf(lo32(r.v0));                              // 26e7f0 mtc1 $v0, $f2
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 26e7f4 cvt.s.w $f2, $f2
        r.f2 = FPU_ADD_S(r.f2, r.f2);                            // 26e7f8 add.s $f2, $f2, $f2
    L_26e7fc:
        r.at = sext32(0x2f800000u);                              // 26e7fc lui $at, 0x2F80
        r.f0 = floatOf(lo32(r.at));                              // 26e800 mtc1 $at, $f0
        r.at = sext32(0x3f000000u);                              // 26e804 lui $at, 0x3F00
        r.f1 = floatOf(lo32(r.at));                              // 26e808 mtc1 $at, $f1
        r.f0 = FPU_MUL_S(r.f2, r.f0);                            // 26e80c mul.s $f0, $f2, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 26e810 c.lt.s $f1, $f0
        if ((r.fcr31 & kCondition) != 0u)                        // 26e818 bc1tl . + 4 + (0x5 << 2)
        {
            WRITE32(lo32(r.s1) + 0x158u, lo32(0u));                  // 26e81c sw $zero, 0x158($s1)
            goto L_26e830;
        }
        r.v0 = addiu(0u, 1);                                     // 26e820 addiu $v0, $zero, 0x1
    L_26e824:
        r.a0 = addiu(0u, 1);                                     // 26e824 addiu $a0, $zero, 0x1
        // 26e828 b . + 4 + (0x2 << 2)
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.v0));                // 26e82c sw $v0, 0x158($s1)
        goto L_26e834;
    L_26e830:
        r.a0 = 0u;                                               // 26e830 daddu $a0, $zero, $zero
    L_26e834:
        r.a2 = LW(lo32(r.s1) + 0x20u);                           // 26e834 lw $a2, 0x20($s1)
    L_26e838:
        r.v0 = LW(lo32(r.a2) + 0x58u);                           // 26e838 lw $v0, 0x58($a2)
        t = r.v0 == 0u;                                          // 26e83c beqz $v0, . + 4 + (0x8 << 2)
        r.a1 = r.a2;                                             // 26e840 daddu $a1, $a2, $zero
        if (t) goto L_26e860;
        r.v1 = LW(lo32(r.v0) + 0xcu);                            // 26e844 lw $v1, 0xC($v0)
        r.v0 = addiu(0u, 1);                                     // 26e848 addiu $v0, $zero, 0x1
        if (r.v1 != r.v0)                                        // 26e84c bnel $v1, $v0, . + 4 + (0x5 << 2)
        {
            r.v0 = LW(lo32(r.s1) + 0x15cu);                          // 26e850 lw $v0, 0x15C($s1)
            goto L_26e864;
        }
        r.v0 = addiu(r.a0, 20);                                  // 26e854 addiu $v0, $a0, 0x14
        WRITE32(lo32(r.s1) + 0x158u, lo32(r.v0));                // 26e858 sw $v0, 0x158($s1)
        r.a0 = r.v0;                                             // 26e85c daddu $a0, $v0, $zero
    L_26e860:
        r.v0 = LW(lo32(r.s1) + 0x15cu);                          // 26e860 lw $v0, 0x15C($s1)
    L_26e864:
        t = r.a0 == r.v0;                                        // 26e864 beq $a0, $v0, . + 4 + (0x10 << 2)
        r.a0 = r.s1;                                             // 26e868 daddu $a0, $s1, $zero
        if (t) goto L_26e8a8;
        r.v0 = LW(lo32(r.a1) + 0x60u);                           // 26e86c lw $v0, 0x60($a1)
        r.a1 = addiu(r.v0, -3);                                  // 26e870 addiu $a1, $v0, -0x3
        r.v1 = sltu(r.a1, sext32(440u));                         // 26e874 sltiu $v1, $a1, 0x1B8
        t = r.v1 == 0u;                                          // 26e878 beqz $v1, . + 4 + (0xB << 2)
        r.v0 = addiu(0u, 11);                                    // 26e87c addiu $v0, $zero, 0xB
        if (t) goto L_26e8a8;
        r.f12 = LWC1(lo32(r.gp) - 0x7b54u);                      // 26e880 lwc1 $f12, -0x7B54($gp)
        divide(r.a1, r.v0, r.lo, r.hi);                          // 26e884 div $zero, $a1, $v0
        if (r.v0 == 0u)                                          // 26e888 beql $v0, $zero, . + 4 + (0x1 << 2)
        {
            STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(12); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
            ctx->pc = 0x26e88cu;                                     // 26e88c break 0, 7
            runtime->handleBreak(rdram, ctx);
            LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a2, 6); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(12); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
            goto L_26e890;
        }
    L_26e890:
        r.f13 = LWC1(lo32(r.a2) + 0x8cu);                        // 26e890 lwc1 $f13, 0x8C($a2)
        r.a0 = r.s1;                                             // 26e894 daddu $a0, $s1, $zero
        r.a1 = r.hi;                                             // 26e898 mfhi $a1
        r.ra = 0x26e8a4u;                                        // 26e89c jal func_214D68
        r.a1 = addiu(r.a1, 3);                                   // 26e8a0 addiu $a1, $a1, 0x3
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(12); STORE_F(13); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x214d68u, 0x26e89cu, 0x26e8a4u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(s1, 17); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_26e8a4:
        r.a0 = r.s1;                                             // 26e8a4 daddu $a0, $s1, $zero
    L_26e8a8:
        r.ra = READ64(lo32(r.sp) + 0x20u);                       // 26e8a8 ld $ra, 0x20($sp)
        r.s1 = READ64(lo32(r.sp) + 0x10u);                       // 26e8ac ld $s1, 0x10($sp)
        r.s0 = READ64(lo32(r.sp));                               // 26e8b0 ld $s0, 0x0($sp)
        r.f20 = LWC1(lo32(r.sp) + 0x30u);                        // 26e8b4 lwc1 $f20, 0x30($sp)
        // 26e8b8 j func_2BB470 (tail jump)
        r.sp = addiu(r.sp, 64);                                  // 26e8bc addiu $sp, $sp, 0x40
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(20); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        tailJump(G_PASS, 0x2bb470u);
        return;
    L_26e8c0:
        r.ra = READ64(lo32(r.sp) + 0x20u);                       // 26e8c0 ld $ra, 0x20($sp)
    L_26e8c4:
        r.s1 = READ64(lo32(r.sp) + 0x10u);                       // 26e8c4 ld $s1, 0x10($sp)
        r.s0 = READ64(lo32(r.sp));                               // 26e8c8 ld $s0, 0x0($sp)
        r.f20 = LWC1(lo32(r.sp) + 0x30u);                        // 26e8cc lwc1 $f20, 0x30($sp)
        jt = lo32(r.ra);                                         // 26e8d0 jr $ra
        r.sp = addiu(r.sp, 64);                                  // 26e8d4 addiu $sp, $sp, 0x40
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(20); ctx->lo = r.lo; ctx->hi = r.hi;
        ctx->pc = jt;
        return;
    }

    // ---- bgPortalCalcOutCode (0x257e38)
    //
    // bgPortalCalcOutCode(vertex): a transformed portal vertex's out-code
    // (+0x10): behind the eye (the soft-double compare of w with 0), then
    // outside each of the four planes of the room's screen rectangle.

    struct BgPortalCalcOutCodeRegs
    {
        uint64_t v0, a0, a1, s0, gp, sp, ra;
        float f0, f1, f2, f12;
        uint32_t fcr31;
    };

    void nativeBgPortalCalcOutCode(G_ARGS)
    {
        BgPortalCalcOutCodeRegs r;
        bool t;
        uint32_t jt;
        (void)t;
        (void)jt;
        LOAD_GPR(a0, 4); LOAD_GPR(s0, 16); LOAD_GPR(sp, 29); LOAD_GPR(ra, 31);
        r.sp = addiu(r.sp, -32);                                 // 257e38 addiu $sp, $sp, -0x20
        WRITE64(lo32(r.sp), r.s0);                               // 257e3c sd $s0, 0x0($sp)
        WRITE64(lo32(r.sp) + 0x10u, r.ra);                       // 257e40 sd $ra, 0x10($sp)
        r.s0 = r.a0;                                             // 257e44 daddu $s0, $a0, $zero
        WRITE32(lo32(r.s0) + 0x10u, lo32(0u));                   // 257e48 sw $zero, 0x10($s0)
        r.ra = 0x257e54u;                                        // 257e4c jal func_2E4608
        r.f12 = LWC1(lo32(r.s0) + 0xcu);                         // 257e50 lwc1 $f12, 0xC($s0)
        STORE_GPR(s0, 16); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x2e4608u, 0x257e4cu, 0x257e54u)) return;
        LOAD_GPR(v0, 2);
    L_257e54:
        r.a0 = r.v0;                                             // 257e54 daddu $a0, $v0, $zero
        r.ra = 0x257e60u;                                        // 257e58 jal func_2E3768
        r.a1 = 0u;                                               // 257e5c daddu $a1, $zero, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3768u, 0x257e58u, 0x257e60u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31;
    L_257e60:
        if (!neg64(r.v0))                                        // 257e60 bgezl $v0, . + 4 + (0x5 << 2)
        {
            r.f2 = LWC1(lo32(r.s0) + 0xcu);                          // 257e64 lwc1 $f2, 0xC($s0)
            goto L_257e78;
        }
        r.v0 = LW(lo32(r.s0) + 0x10u);                           // 257e68 lw $v0, 0x10($s0)
        r.v0 = r.v0 | 0x10u;                                     // 257e6c ori $v0, $v0, 0x10
        WRITE32(lo32(r.s0) + 0x10u, lo32(r.v0));                 // 257e70 sw $v0, 0x10($s0)
        r.f2 = LWC1(lo32(r.s0) + 0xcu);                          // 257e74 lwc1 $f2, 0xC($s0)
    L_257e78:
        r.f0 = LWC1(lo32(r.gp) - 0x4768u);                       // 257e78 lwc1 $f0, -0x4768($gp)
        r.f1 = LWC1(lo32(r.s0));                                 // 257e7c lwc1 $f1, 0x0($s0)
        r.f0 = FPU_MUL_S(r.f2, r.f0);                            // 257e80 mul.s $f0, $f2, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 257e84 c.lt.s $f1, $f0
        t = (r.fcr31 & kCondition) == 0u;                        // 257e8c bc1f . + 4 + (0x5 << 2)
        r.f0 = LWC1(lo32(r.gp) - 0x4764u);                       // 257e90 lwc1 $f0, -0x4764($gp)
        if (t) goto L_257ea4;
        r.v0 = LW(lo32(r.s0) + 0x10u);                           // 257e94 lw $v0, 0x10($s0)
        r.v0 = r.v0 | 0x4u;                                      // 257e98 ori $v0, $v0, 0x4
        WRITE32(lo32(r.s0) + 0x10u, lo32(r.v0));                 // 257e9c sw $v0, 0x10($s0)
        r.f0 = LWC1(lo32(r.gp) - 0x4764u);                       // 257ea0 lwc1 $f0, -0x4764($gp)
    L_257ea4:
        r.f0 = FPU_MUL_S(r.f2, r.f0);                            // 257ea4 mul.s $f0, $f2, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f1)); // 257ea8 c.lt.s $f0, $f1
        if ((r.fcr31 & kCondition) == 0u)                        // 257eb0 bc1fl . + 4 + (0x5 << 2)
        {
            r.f1 = LWC1(lo32(r.s0) + 0x4u);                          // 257eb4 lwc1 $f1, 0x4($s0)
            goto L_257ec8;
        }
        r.v0 = LW(lo32(r.s0) + 0x10u);                           // 257eb8 lw $v0, 0x10($s0)
        r.v0 = r.v0 | 0x8u;                                      // 257ebc ori $v0, $v0, 0x8
        WRITE32(lo32(r.s0) + 0x10u, lo32(r.v0));                 // 257ec0 sw $v0, 0x10($s0)
        r.f1 = LWC1(lo32(r.s0) + 0x4u);                          // 257ec4 lwc1 $f1, 0x4($s0)
    L_257ec8:
        r.f0 = LWC1(lo32(r.gp) - 0x4760u);                       // 257ec8 lwc1 $f0, -0x4760($gp)
        r.f1 = FPU_NEG_S(r.f1);                                  // 257ecc neg.s $f1, $f1
        r.f0 = FPU_MUL_S(r.f2, r.f0);                            // 257ed0 mul.s $f0, $f2, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 257ed4 c.lt.s $f1, $f0
        t = (r.fcr31 & kCondition) == 0u;                        // 257edc bc1f . + 4 + (0x5 << 2)
        r.f0 = LWC1(lo32(r.gp) - 0x475cu);                       // 257ee0 lwc1 $f0, -0x475C($gp)
        if (t) goto L_257ef4;
        r.v0 = LW(lo32(r.s0) + 0x10u);                           // 257ee4 lw $v0, 0x10($s0)
        r.v0 = r.v0 | 0x1u;                                      // 257ee8 ori $v0, $v0, 0x1
        WRITE32(lo32(r.s0) + 0x10u, lo32(r.v0));                 // 257eec sw $v0, 0x10($s0)
        r.f0 = LWC1(lo32(r.gp) - 0x475cu);                       // 257ef0 lwc1 $f0, -0x475C($gp)
    L_257ef4:
        r.f0 = FPU_MUL_S(r.f2, r.f0);                            // 257ef4 mul.s $f0, $f2, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f1)); // 257ef8 c.lt.s $f0, $f1
        t = (r.fcr31 & kCondition) == 0u;                        // 257f00 bc1f . + 4 + (0x4 << 2)
        r.ra = READ64(lo32(r.sp) + 0x10u);                       // 257f04 ld $ra, 0x10($sp)
        if (t) goto L_257f14;
        r.v0 = LW(lo32(r.s0) + 0x10u);                           // 257f08 lw $v0, 0x10($s0)
        r.v0 = r.v0 | 0x2u;                                      // 257f0c ori $v0, $v0, 0x2
        WRITE32(lo32(r.s0) + 0x10u, lo32(r.v0));                 // 257f10 sw $v0, 0x10($s0)
    L_257f14:
        r.s0 = READ64(lo32(r.sp));                               // 257f14 ld $s0, 0x0($sp)
        jt = lo32(r.ra);                                         // 257f18 jr $ra
        r.sp = addiu(r.sp, 32);                                  // 257f1c addiu $sp, $sp, 0x20
        STORE_GPR(v0, 2); STORE_GPR(s0, 16); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); ctx->fcr31 = r.fcr31;
        ctx->pc = jt;
        return;
    }

    // ---- matrixVecMulAligned (0x2b54c8)
    //
    // matrixVecMulAligned(m, v): v.xyz = m * (v.xyz, vf0.w) in place, in
    // VU0 macro mode (v.w, ACC.w kept). Leaves the matrix in vf4-vf7, the
    // result in vf8 and the last sum in ACC, as the original's lqc2,
    // vmulax/vmadday/vmaddaz.xyz, vmaddw.xyz and sqc2 do; the products and
    // sums in the same order.
    void nativeMatrixVecMulAligned(G_ARGS)
    {
        const uint32_t m = GPR_U32(ctx, 4), v = GPR_U32(ctx, 5);
        __m128 vec = _mm_castsi128_ps(READ128(v));
        const __m128 c0 = _mm_castsi128_ps(READ128(m));
        const __m128 c1 = _mm_castsi128_ps(READ128(m + 16u));
        const __m128 c2 = _mm_castsi128_ps(READ128(m + 32u));
        const __m128 c3 = _mm_castsi128_ps(READ128(m + 48u));
        __m128 acc = PS2_VBLEND(ctx->vu0_acc, PS2_VMUL(c0, TS_LANE(vec, 0)), maskXYZ());
        acc = PS2_VBLEND(acc, PS2_VADD(acc, PS2_VMUL(c1, TS_LANE(vec, 1))), maskXYZ());
        acc = PS2_VBLEND(acc, PS2_VADD(acc, PS2_VMUL(c2, TS_LANE(vec, 2))), maskXYZ());
        vec = PS2_VBLEND(vec, PS2_VADD(acc, PS2_VMUL(c3, TS_LANE(ctx->vu0_vf[0], 3))), maskXYZ());
        ctx->vu0_vf[4] = c0;
        ctx->vu0_vf[5] = c1;
        ctx->vu0_vf[6] = c2;
        ctx->vu0_vf[7] = c3;
        ctx->vu0_vf[8] = vec;
        ctx->vu0_acc = acc;
        WRITE128(v, _mm_castps_si128(vec));
        ctx->pc = GPR_U32(ctx, 31);
    }

    // ---- bulletGetClosest (0x28d100)
    //
    // bulletGetClosest(position, &distance): the closest live bullet (its
    // kind through a jump table: the kinds that count), its distance stored.

    struct BulletGetClosestRegs
    {
        uint64_t v0, v1, a0, a1, a2, a3, t0, s0, s1, gp, sp, ra;
        float f0, f1, f2, f3, f12;
        uint32_t fcr31;
        uint64_t lo, hi;
    };

    void nativeBulletGetClosest(G_ARGS)
    {
        BulletGetClosestRegs r;
        bool t;
        uint32_t jt;
        (void)t;
        (void)jt;
        LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(ra, 31); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
        r.sp = addiu(r.sp, -64);                                 // 28d100 addiu $sp, $sp, -0x40
        r.v0 = sext32(0x3b0000u);                                // 28d104 lui $v0, 0x3B
        WRITE64(lo32(r.sp) + 0x20u, r.s1);                       // 28d108 sd $s1, 0x20($sp)
        r.a2 = r.a0;                                             // 28d10c daddu $a2, $a0, $zero
        WRITE64(lo32(r.sp) + 0x10u, r.s0);                       // 28d110 sd $s0, 0x10($sp)
        r.s1 = r.a1;                                             // 28d114 daddu $s1, $a1, $zero
        WRITE64(lo32(r.sp) + 0x30u, r.ra);                       // 28d118 sd $ra, 0x30($sp)
        r.s0 = 0u;                                               // 28d11c daddu $s0, $zero, $zero
        r.t0 = LW(lo32(r.gp) - 0x46b8u);                         // 28d120 lw $t0, -0x46B8($gp)
        r.a3 = 0u;                                               // 28d124 daddu $a3, $zero, $zero
        r.f12 = LWC1(lo32(r.v0) - 0x5a0u);                       // 28d128 lwc1 $f12, -0x5A0($v0)
        r.v0 = addiu(0u, 276);                                   // 28d12c addiu $v0, $zero, 0x114
    L_28d130:
        r.v1 = mult(r.a3, r.v0, r.lo, r.hi);                     // 28d130 mult $v1, $a3, $v0
        r.a1 = addu(r.v1, r.t0);                                 // 28d134 addu $a1, $v1, $t0
        r.v1 = LW(lo32(r.a1));                                   // 28d138 lw $v1, 0x0($a1)
        r.v1 = addiu(r.v1, -2);                                  // 28d13c addiu $v1, $v1, -0x2
        r.v0 = sltu(r.v1, sext32(17u));                          // 28d140 sltiu $v0, $v1, 0x11
        t = r.v0 == 0u;                                          // 28d144 beqz $v0, . + 4 + (0x1D << 2)
        r.v0 = sext32(0x3b0000u);                                // 28d148 lui $v0, 0x3B
        if (t) goto L_28d1bc;
        r.v1 = sll32(r.v1, 2);                                   // 28d14c sll $v1, $v1, 2
        r.v0 = addiu(r.v0, -29856);                              // 28d150 addiu $v0, $v0, -0x74A0
        r.v1 = addu(r.v1, r.v0);                                 // 28d154 addu $v1, $v1, $v0
        r.a0 = LW(lo32(r.v1));                                   // 28d158 lw $a0, 0x0($v1)
        jt = lo32(r.a0);                                         // 28d15c jr $a0 (jump table)
        switch (jt)
        {
        case 0x28d164u: goto L_28d164;
        case 0x28d1bcu: goto L_28d1bc;
        default:
            STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(sp, 29); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(12); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
            runtime->dispatchGuestBranch(rdram, ctx, jt, 0x28d15cu, 0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR");
            return;
        }
    L_28d164:
        r.f0 = LWC1(lo32(r.a2));                                 // 28d164 lwc1 $f0, 0x0($a2)
        r.f2 = LWC1(lo32(r.a1) + 0x18u);                         // 28d168 lwc1 $f2, 0x18($a1)
        r.f1 = LWC1(lo32(r.a2) + 0x4u);                          // 28d16c lwc1 $f1, 0x4($a2)
        r.f2 = FPU_SUB_S(r.f2, r.f0);                            // 28d170 sub.s $f2, $f2, $f0
        r.f3 = LWC1(lo32(r.a2) + 0x8u);                          // 28d174 lwc1 $f3, 0x8($a2)
        SWC1(lo32(r.sp), r.f2);                                  // 28d178 swc1 $f2, 0x0($sp)
        r.f2 = FPU_MUL_S(r.f2, r.f2);                            // 28d17c mul.s $f2, $f2, $f2
        r.f0 = LWC1(lo32(r.a1) + 0x1cu);                         // 28d180 lwc1 $f0, 0x1C($a1)
        r.f0 = FPU_SUB_S(r.f0, r.f1);                            // 28d184 sub.s $f0, $f0, $f1
        SWC1(lo32(r.sp) + 0x4u, r.f0);                           // 28d188 swc1 $f0, 0x4($sp)
        r.f0 = FPU_MUL_S(r.f0, r.f0);                            // 28d18c mul.s $f0, $f0, $f0
        r.f1 = LWC1(lo32(r.a1) + 0x20u);                         // 28d190 lwc1 $f1, 0x20($a1)
        r.f1 = FPU_SUB_S(r.f1, r.f3);                            // 28d194 sub.s $f1, $f1, $f3
        r.f2 = FPU_ADD_S(r.f2, r.f0);                            // 28d198 add.s $f2, $f2, $f0
        r.f0 = FPU_MUL_S(r.f1, r.f1);                            // 28d19c mul.s $f0, $f1, $f1
        r.f2 = FPU_ADD_S(r.f2, r.f0);                            // 28d1a0 add.s $f2, $f2, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f2, r.f12)); // 28d1a4 c.lt.s $f2, $f12
        t = (r.fcr31 & kCondition) == 0u;                        // 28d1ac bc1f . + 4 + (0x3 << 2)
        SWC1(lo32(r.sp) + 0x8u, r.f1);                           // 28d1b0 swc1 $f1, 0x8($sp)
        if (t) goto L_28d1bc;
        r.f12 = FPU_MOV_S(r.f2);                                 // 28d1b4 mov.s $f12, $f2
        r.s0 = r.a1;                                             // 28d1b8 daddu $s0, $a1, $zero
    L_28d1bc:
        r.a3 = addiu(r.a3, 1);                                   // 28d1bc addiu $a3, $a3, 0x1
        r.v0 = slti(r.a3, 20);                                   // 28d1c0 slti $v0, $a3, 0x14
        if (r.v0 != 0u)                                          // 28d1c4 bnel $v0, $zero, . + 4 + (-0x26 << 2)
        {
            r.v0 = addiu(0u, 276);                                   // 28d1c8 addiu $v0, $zero, 0x114
            if (loopCheckpoint(ctx, runtime, 0x28d130u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(sp, 29); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(12); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi; return; }
            goto L_28d130;
        }
        t = r.s0 == 0u;                                          // 28d1cc beqz $s0, . + 4 + (0xC << 2)
        r.v0 = r.s0;                                             // 28d1d0 daddu $v0, $s0, $zero
        if (t) goto L_28d200;
        r.f0 = FPU_SQRT_S(r.f12);                                // 28d1dc c1 0xC0004 (sqrt.s $f0, $f12)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f0, r.f0)); // 28d1e0 c.eq.s $f0, $f0
        if ((r.fcr31 & kCondition) != 0u)                        // 28d1e8 bc1tl . + 4 + (0x5 << 2)
        {
            SWC1(lo32(r.s1), r.f0);                                  // 28d1ec swc1 $f0, 0x0($s1)
            goto L_28d200;
        }
        r.ra = 0x28d1f8u;                                        // 28d1f0 jal func_2D8398
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(12); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2d8398u, 0x28d1f0u, 0x28d1f8u)) return;
        LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(12); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_28d1f8:
        SWC1(lo32(r.s1), r.f0);                                  // 28d1f8 swc1 $f0, 0x0($s1)
        r.v0 = r.s0;                                             // 28d1fc daddu $v0, $s0, $zero
    L_28d200:
        r.ra = READ64(lo32(r.sp) + 0x30u);                       // 28d200 ld $ra, 0x30($sp)
        r.s1 = READ64(lo32(r.sp) + 0x20u);                       // 28d204 ld $s1, 0x20($sp)
        r.s0 = READ64(lo32(r.sp) + 0x10u);                       // 28d208 ld $s0, 0x10($sp)
        jt = lo32(r.ra);                                         // 28d20c jr $ra
        r.sp = addiu(r.sp, 64);                                  // 28d210 addiu $sp, $sp, 0x40
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(12); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        ctx->pc = jt;
        return;
    }

    // ---- propCalcRooms (0x269b30)
    //
    // propCalcRooms(prop): the rooms a prop is in: a door's own, the room
    // under the prop's point (moveFindRoom), or every room its box meets
    // (bgRoomBBIntersection); none in the modes without rooms.

    struct PropCalcRoomsRegs
    {
        uint64_t v0, v1, a0, a1, a2, s0, gp, sp, ra;
        float f0, f1, f2, f3, f4, f5, f6, f7, f12, f13;
    };

    void nativePropCalcRooms(G_ARGS)
    {
        PropCalcRoomsRegs r;
        bool t;
        uint32_t jt;
        (void)t;
        (void)jt;
        LOAD_GPR(a0, 4); LOAD_GPR(s0, 16); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(ra, 31);
        r.sp = addiu(r.sp, -80);                                 // 269b30 addiu $sp, $sp, -0x50
        r.v1 = sext32(0x40000000u);                              // 269b34 lui $v1, 0x4000
        WRITE64(lo32(r.sp) + 0x30u, r.s0);                       // 269b38 sd $s0, 0x30($sp)
        WRITE64(lo32(r.sp) + 0x40u, r.ra);                       // 269b3c sd $ra, 0x40($sp)
        r.s0 = r.a0;                                             // 269b40 daddu $s0, $a0, $zero
        r.v0 = LW(lo32(r.s0) + 0x10u);                           // 269b44 lw $v0, 0x10($s0)
        r.v0 = r.v0 & r.v1;                                      // 269b48 and $v0, $v0, $v1
        t = r.v0 != 0u;                                          // 269b4c bnez $v0, . + 4 + (0x4A << 2)
        r.ra = READ64(lo32(r.sp) + 0x40u);                       // 269b50 ld $ra, 0x40($sp)
        if (t) goto L_269c78;
        r.v0 = LW(lo32(r.gp) - 0x6090u);                         // 269b54 lw $v0, -0x6090($gp)
        r.v0 = addiu(r.v0, -102);                                // 269b58 addiu $v0, $v0, -0x66
        r.v0 = sltu(r.v0, sext32(2u));                           // 269b5c sltiu $v0, $v0, 0x2
        if (r.v0 == 0u)                                          // 269b60 beql $v0, $zero, . + 4 + (0x4 << 2)
        {
            r.v1 = LW(lo32(r.s0) + 0x8u);                            // 269b64 lw $v1, 0x8($s0)
            goto L_269b74;
        }
        WRITE32(lo32(r.s0) + 0xb8u, lo32(0u));                   // 269b68 sw $zero, 0xB8($s0)
        // 269b6c b . + 4 + (0x42 << 2)
        WRITE32(lo32(r.s0) + 0x90u, lo32(0u));                   // 269b70 sw $zero, 0x90($s0)
        goto L_269c78;
    L_269b74:
        r.v0 = addiu(0u, 2);                                     // 269b74 addiu $v0, $zero, 0x2
        t = r.v1 != r.v0;                                        // 269b78 bne $v1, $v0, . + 4 + (0x7 << 2)
        r.v0 = addiu(0u, 256);                                   // 269b7c addiu $v0, $zero, 0x100
        if (t) goto L_269b98;
        r.v0 = LW(lo32(r.s0) + 0x4u);                            // 269b80 lw $v0, 0x4($s0)
        r.v1 = addiu(0u, 1);                                     // 269b84 addiu $v1, $zero, 0x1
        WRITE32(lo32(r.s0) + 0xb8u, lo32(r.v1));                 // 269b88 sw $v1, 0xB8($s0)
        r.v0 = addiu(r.v0, -512);                                // 269b8c addiu $v0, $v0, -0x200
        // 269b90 b . + 4 + (0x38 << 2)
        WRITE32(lo32(r.s0) + 0x90u, lo32(r.v0));                 // 269b94 sw $v0, 0x90($s0)
        goto L_269c74;
    L_269b98:
        t = r.v1 == r.v0;                                        // 269b98 beq $v1, $v0, . + 4 + (0x3 << 2)
        r.v0 = addiu(0u, 4);                                     // 269b9c addiu $v0, $zero, 0x4
        if (t) goto L_269ba8;
        if (r.v1 != r.v0)                                        // 269ba0 bnel $v1, $v0, . + 4 + (0x3 << 2)
        {
            r.f3 = LWC1(lo32(r.s0) + 0x1fcu);                        // 269ba4 lwc1 $f3, 0x1FC($s0)
            goto L_269bb0;
        }
    L_269ba8:
        // 269ba8 b . + 4 + (0x15 << 2)
        r.a0 = addiu(0u, 1);                                     // 269bac addiu $a0, $zero, 0x1
        goto L_269c00;
    L_269bb0:
        r.a0 = addiu(r.sp, 32);                                  // 269bb0 addiu $a0, $sp, 0x20
        r.f2 = LWC1(lo32(r.s0) + 0x30u);                         // 269bb4 lwc1 $f2, 0x30($s0)
        r.f1 = LWC1(lo32(r.s0) + 0x34u);                         // 269bb8 lwc1 $f1, 0x34($s0)
        r.f2 = FPU_ADD_S(r.f2, r.f3);                            // 269bbc add.s $f2, $f2, $f3
        r.f4 = LWC1(lo32(r.s0) + 0x200u);                        // 269bc0 lwc1 $f4, 0x200($s0)
        r.f0 = LWC1(lo32(r.s0) + 0x38u);                         // 269bc4 lwc1 $f0, 0x38($s0)
        r.f3 = LWC1(lo32(r.s0) + 0x204u);                        // 269bc8 lwc1 $f3, 0x204($s0)
        r.f1 = FPU_ADD_S(r.f1, r.f4);                            // 269bcc add.s $f1, $f1, $f4
        r.f12 = LWC1(lo32(r.gp) - 0x7c04u);                      // 269bd0 lwc1 $f12, -0x7C04($gp)
        r.f0 = FPU_ADD_S(r.f0, r.f3);                            // 269bd4 add.s $f0, $f0, $f3
        SWC1(lo32(r.sp) + 0x20u, r.f2);                          // 269bd8 swc1 $f2, 0x20($sp)
        SWC1(lo32(r.sp) + 0x24u, r.f1);                          // 269bdc swc1 $f1, 0x24($sp)
        r.f13 = FPU_MOV_S(r.f12);                                // 269be0 mov.s $f13, $f12
        r.ra = 0x269becu;                                        // 269be4 jal func_27C870
        SWC1(lo32(r.sp) + 0x28u, r.f0);                          // 269be8 swc1 $f0, 0x28($sp)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s0, 16); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x27c870u, 0x269be4u, 0x269becu)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16); LOAD_GPR(sp, 29);
    L_269bec:
        r.v1 = addiu(0u, 1);                                     // 269bec addiu $v1, $zero, 0x1
        WRITE32(lo32(r.s0) + 0x90u, lo32(r.v0));                 // 269bf0 sw $v0, 0x90($s0)
        r.a0 = r.v1;                                             // 269bf4 daddu $a0, $v1, $zero
        WRITE32(lo32(r.s0) + 0xb8u, lo32(r.v1));                 // 269bf8 sw $v1, 0xB8($s0)
        if (r.v0 != 0u) { r.a0 = 0u; zeroHigh(ctx, 4); }         // 269bfc movn $a0, $zero, $v0
    L_269c00:
        t = r.a0 == 0u;                                          // 269c00 beqz $a0, . + 4 + (0x1C << 2)
        r.a0 = r.sp;                                             // 269c04 daddu $a0, $sp, $zero
        if (t) goto L_269c74;
        r.f0 = LWC1(lo32(r.s0) + 0x1fcu);                        // 269c08 lwc1 $f0, 0x1FC($s0)
        r.f5 = LWC1(lo32(r.s0) + 0x200u);                        // 269c0c lwc1 $f5, 0x200($s0)
        r.a1 = addiu(r.s0, 144);                                 // 269c10 addiu $a1, $s0, 0x90
        r.f3 = LWC1(lo32(r.s0) + 0x204u);                        // 269c14 lwc1 $f3, 0x204($s0)
        r.a2 = addiu(0u, 10);                                    // 269c18 addiu $a2, $zero, 0xA
        r.f4 = LWC1(lo32(r.s0) + 0x30u);                         // 269c1c lwc1 $f4, 0x30($s0)
        r.f2 = LWC1(lo32(r.s0) + 0x34u);                         // 269c20 lwc1 $f2, 0x34($s0)
        r.f1 = LWC1(lo32(r.s0) + 0x38u);                         // 269c24 lwc1 $f1, 0x38($s0)
        r.f4 = FPU_ADD_S(r.f4, r.f0);                            // 269c28 add.s $f4, $f4, $f0
        r.f2 = FPU_ADD_S(r.f2, r.f5);                            // 269c2c add.s $f2, $f2, $f5
        r.f0 = LWC1(lo32(r.s0) + 0x210u);                        // 269c30 lwc1 $f0, 0x210($s0)
        r.f1 = FPU_ADD_S(r.f1, r.f3);                            // 269c34 add.s $f1, $f1, $f3
        r.f5 = LWC1(lo32(r.s0) + 0x20cu);                        // 269c38 lwc1 $f5, 0x20C($s0)
        r.f3 = FPU_ADD_S(r.f4, r.f0);                            // 269c3c add.s $f3, $f4, $f0
        r.f6 = FPU_ADD_S(r.f2, r.f5);                            // 269c40 add.s $f6, $f2, $f5
        r.f7 = FPU_ADD_S(r.f1, r.f0);                            // 269c44 add.s $f7, $f1, $f0
        r.f4 = FPU_SUB_S(r.f4, r.f0);                            // 269c48 sub.s $f4, $f4, $f0
        SWC1(lo32(r.sp) + 0xcu, r.f3);                           // 269c4c swc1 $f3, 0xC($sp)
        r.f2 = FPU_SUB_S(r.f2, r.f5);                            // 269c50 sub.s $f2, $f2, $f5
        SWC1(lo32(r.sp) + 0x10u, r.f6);                          // 269c54 swc1 $f6, 0x10($sp)
        r.f1 = FPU_SUB_S(r.f1, r.f0);                            // 269c58 sub.s $f1, $f1, $f0
        SWC1(lo32(r.sp) + 0x14u, r.f7);                          // 269c5c swc1 $f7, 0x14($sp)
        SWC1(lo32(r.sp), r.f4);                                  // 269c60 swc1 $f4, 0x0($sp)
        SWC1(lo32(r.sp) + 0x4u, r.f2);                           // 269c64 swc1 $f2, 0x4($sp)
        r.ra = 0x269c70u;                                        // 269c68 jal func_256FD0
        SWC1(lo32(r.sp) + 0x8u, r.f1);                           // 269c6c swc1 $f1, 0x8($sp)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(7);
        if (!guestCall(G_PASS, 0x256fd0u, 0x269c68u, 0x269c70u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(s0, 16); LOAD_GPR(sp, 29);
    L_269c70:
        WRITE32(lo32(r.s0) + 0xb8u, lo32(r.v0));                 // 269c70 sw $v0, 0xB8($s0)
    L_269c74:
        r.ra = READ64(lo32(r.sp) + 0x40u);                       // 269c74 ld $ra, 0x40($sp)
    L_269c78:
        r.s0 = READ64(lo32(r.sp) + 0x30u);                       // 269c78 ld $s0, 0x30($sp)
        jt = lo32(r.ra);                                         // 269c7c jr $ra
        r.sp = addiu(r.sp, 80);                                  // 269c80 addiu $sp, $sp, 0x50
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s0, 16); STORE_GPR(sp, 29); STORE_GPR(ra, 31);
        ctx->pc = jt;
        return;
    }

    // ---- spawnfxTick (0x2abea0)
    //
    // spawnfxTick(): the spawn effects advance: each fades its prop in, sets
    // its model's override states by a curve (a jump table on the kind), and
    // when done deletes the prop and frees itself.

    struct SpawnfxTickRegs
    {
        uint64_t at, v0, v1, a0, a1, a2, a3, t0, s0, s1, s2, s3, s4, s5, s6, s7, gp, sp, fp, ra;
        float f0, f1, f2, f3, f4, f20;
        uint32_t fcr31;
    };

    void nativeSpawnfxTick(G_ARGS)
    {
        SpawnfxTickRegs r;
        bool t;
        uint32_t jt;
        (void)t;
        (void)jt;
        LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_GPR(ra, 31); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(20); r.fcr31 = ctx->fcr31;
        r.sp = addiu(r.sp, -176);                                // 2abea0 addiu $sp, $sp, -0xB0
        r.f1 = LWC1(lo32(r.gp) - 0x4b98u);                       // 2abea4 lwc1 $f1, -0x4B98($gp)
        r.at = sext32(0x42700000u);                              // 2abea8 lui $at, 0x4270
        r.f0 = floatOf(lo32(r.at));                              // 2abeac mtc1 $at, $f0
        SWC1(lo32(r.sp) + 0xa0u, r.f20);                         // 2abeb0 swc1 $f20, 0xA0($sp)
        r.f20 = divS(r.f1, r.f0, r.fcr31);                       // 2abebc div.s $f20, $f1, $f0
        WRITE64(lo32(r.sp) + 0x80u, r.fp);                       // 2abec0 sd $fp, 0x80($sp)
        WRITE64(lo32(r.sp) + 0x70u, r.s7);                       // 2abec4 sd $s7, 0x70($sp)
        r.fp = sext32(0x330000u);                                // 2abec8 lui $fp, 0x33
        WRITE64(lo32(r.sp) + 0x60u, r.s6);                       // 2abecc sd $s6, 0x60($sp)
        r.s7 = sext32(0x3b0000u);                                // 2abed0 lui $s7, 0x3B
        WRITE64(lo32(r.sp) + 0x50u, r.s5);                       // 2abed4 sd $s5, 0x50($sp)
        r.s6 = sext32(0x370000u);                                // 2abed8 lui $s6, 0x37
        WRITE64(lo32(r.sp) + 0x40u, r.s4);                       // 2abedc sd $s4, 0x40($sp)
        r.s5 = 0u;                                               // 2abee0 daddu $s5, $zero, $zero
        WRITE64(lo32(r.sp) + 0x90u, r.ra);                       // 2abee4 sd $ra, 0x90($sp)
        r.s4 = sext32(0x370000u);                                // 2abee8 lui $s4, 0x37
        WRITE64(lo32(r.sp) + 0x30u, r.s3);                       // 2abeec sd $s3, 0x30($sp)
        WRITE64(lo32(r.sp) + 0x20u, r.s2);                       // 2abef0 sd $s2, 0x20($sp)
        WRITE64(lo32(r.sp) + 0x10u, r.s1);                       // 2abef4 sd $s1, 0x10($sp)
        WRITE64(lo32(r.sp), r.s0);                               // 2abef8 sd $s0, 0x0($sp)
        r.s0 = sll32(r.s5, 5);                                   // 2abefc sll $s0, $s5, 5
    L_2abf00:
        r.a0 = addiu(r.s4, -10616);                              // 2abf00 addiu $a0, $s4, -0x2978
        r.v0 = addu(r.s0, r.a0);                                 // 2abf04 addu $v0, $s0, $a0
        r.v0 = LW(lo32(r.v0));                                   // 2abf08 lw $v0, 0x0($v0)
        r.v1 = addiu(0u, -1);                                    // 2abf0c addiu $v1, $zero, -0x1
        t = r.v0 == r.v1;                                        // 2abf10 beq $v0, $v1, . + 4 + (0x105 << 2)
        r.s3 = r.s0;                                             // 2abf14 daddu $s3, $s0, $zero
        if (t) goto L_2ac328;
        r.v1 = addu(r.a0, r.s0);                                 // 2abf18 addu $v1, $a0, $s0
        r.a1 = sext32(0x370000u);                                // 2abf1c lui $a1, 0x37
        r.a0 = addiu(r.a1, -15864);                              // 2abf20 addiu $a0, $a1, -0x3DF8
        r.v0 = sll32(r.v0, 2);                                   // 2abf24 sll $v0, $v0, 2
        r.v0 = addu(r.v0, r.a0);                                 // 2abf28 addu $v0, $v0, $a0
        r.a1 = LW(lo32(r.v1) + 0x18u);                           // 2abf2c lw $a1, 0x18($v1)
        t = r.a1 != 0u;                                          // 2abf30 bnez $a1, . + 4 + (0x5 << 2)
        r.f4 = LWC1(lo32(r.v0));                                 // 2abf34 lwc1 $f4, 0x0($v0)
        if (t) goto L_2abf48;
        r.v0 = LW(lo32(r.gp) - 0x608cu);                         // 2abf38 lw $v0, -0x608C($gp)
        r.v0 = slti(r.v0, 3);                                    // 2abf3c slti $v0, $v0, 0x3
        t = r.v0 != 0u;                                          // 2abf40 bnez $v0, . + 4 + (0x4 << 2)
        r.a0 = addiu(r.s4, -10616);                              // 2abf44 addiu $a0, $s4, -0x2978
        if (t) goto L_2abf54;
    L_2abf48:
        r.f0 = LWC1(lo32(r.gp) - 0x7120u);                       // 2abf48 lwc1 $f0, -0x7120($gp)
        r.f4 = FPU_MUL_S(r.f4, r.f0);                            // 2abf4c mul.s $f4, $f4, $f0
        r.a0 = addiu(r.s4, -10616);                              // 2abf50 addiu $a0, $s4, -0x2978
    L_2abf54:
        r.v0 = addu(r.a0, r.s3);                                 // 2abf54 addu $v0, $a0, $s3
        r.v1 = LW(lo32(r.v0) + 0x18u);                           // 2abf58 lw $v1, 0x18($v0)
        t = r.v1 != 0u;                                          // 2abf5c bnez $v1, . + 4 + (0x6 << 2)
        r.v0 = addu(r.s0, r.a0);                                 // 2abf60 addu $v0, $s0, $a0
        if (t) goto L_2abf78;
        r.v0 = LW(lo32(r.gp) - 0x608cu);                         // 2abf64 lw $v0, -0x608C($gp)
        r.v0 = slti(r.v0, 3);                                    // 2abf68 slti $v0, $v0, 0x3
        t = r.v0 != 0u;                                          // 2abf6c bnez $v0, . + 4 + (0xB << 2)
        r.v0 = addiu(r.s4, -10616);                              // 2abf70 addiu $v0, $s4, -0x2978
        if (t) goto L_2abf9c;
        r.v0 = addu(r.s0, r.a0);                                 // 2abf74 addu $v0, $s0, $a0
    L_2abf78:
        r.v1 = LW(lo32(r.v0));                                   // 2abf78 lw $v1, 0x0($v0)
        r.a0 = addiu(0u, 6);                                     // 2abf7c addiu $a0, $zero, 0x6
        t = r.v1 != r.a0;                                        // 2abf80 bne $v1, $a0, . + 4 + (0x6 << 2)
        r.v0 = addiu(r.s4, -10616);                              // 2abf84 addiu $v0, $s4, -0x2978
        if (t) goto L_2abf9c;
        r.v0 = addiu(r.s6, -15832);                              // 2abf88 addiu $v0, $s6, -0x3DD8
        r.f1 = LWC1(lo32(r.gp) - 0x711cu);                       // 2abf8c lwc1 $f1, -0x711C($gp)
        r.f0 = LWC1(lo32(r.v0) + 0x18u);                         // 2abf90 lwc1 $f0, 0x18($v0)
        // 2abf94 b . + 4 + (0x7 << 2)
        r.f3 = FPU_MUL_S(r.f0, r.f1);                            // 2abf98 mul.s $f3, $f0, $f1
        goto L_2abfb4;
    L_2abf9c:
        r.a0 = addiu(r.s6, -15832);                              // 2abf9c addiu $a0, $s6, -0x3DD8
        r.v0 = addu(r.s3, r.v0);                                 // 2abfa0 addu $v0, $s3, $v0
        r.v1 = LW(lo32(r.v0));                                   // 2abfa4 lw $v1, 0x0($v0)
        r.v1 = sll32(r.v1, 2);                                   // 2abfa8 sll $v1, $v1, 2
        r.v1 = addu(r.v1, r.a0);                                 // 2abfac addu $v1, $v1, $a0
        r.f3 = LWC1(lo32(r.v1));                                 // 2abfb0 lwc1 $f3, 0x0($v1)
    L_2abfb4:
        r.a1 = addiu(r.s4, -10616);                              // 2abfb4 addiu $a1, $s4, -0x2978
        r.a0 = addiu(r.fp, -15192);                              // 2abfb8 addiu $a0, $fp, -0x3B58
        r.a2 = addu(r.s3, r.a1);                                 // 2abfbc addu $a2, $s3, $a1
        r.v1 = LW(lo32(r.a0) + 0x48u);                           // 2abfc0 lw $v1, 0x48($a0)
        r.v0 = LW(lo32(r.a2));                                   // 2abfc4 lw $v0, 0x0($a2)
        r.a3 = sext32(0x370000u);                                // 2abfc8 lui $a3, 0x37
        r.a0 = addiu(r.a3, -15800);                              // 2abfcc addiu $a0, $a3, -0x3DB8
        r.v1 = addiu(r.v1, -6);                                  // 2abfd0 addiu $v1, $v1, -0x6
        r.v0 = sll32(r.v0, 2);                                   // 2abfd4 sll $v0, $v0, 2
        r.v1 = sltu(r.v1, sext32(2u));                           // 2abfd8 sltiu $v1, $v1, 0x2
        r.v0 = addu(r.v0, r.a0);                                 // 2abfdc addu $v0, $v0, $a0
        t = r.v1 == 0u;                                          // 2abfe0 beqz $v1, . + 4 + (0x4 << 2)
        r.f2 = LWC1(lo32(r.v0));                                 // 2abfe4 lwc1 $f2, 0x0($v0)
        if (t) goto L_2abff4;
        r.at = sext32(0x3f000000u);                              // 2abfe8 lui $at, 0x3F00
        r.f0 = floatOf(lo32(r.at));                              // 2abfec mtc1 $at, $f0
        r.f2 = FPU_MUL_S(r.f2, r.f0);                            // 2abff0 mul.s $f2, $f2, $f0
    L_2abff4:
        r.v0 = addiu(r.a1, 16);                                  // 2abff4 addiu $v0, $a1, 0x10
        r.v1 = addiu(r.a1, 8);                                   // 2abff8 addiu $v1, $a1, 0x8
        r.v0 = addu(r.s0, r.v0);                                 // 2abffc addu $v0, $s0, $v0
        r.v1 = addu(r.s0, r.v1);                                 // 2ac000 addu $v1, $s0, $v1
        r.f0 = LWC1(lo32(r.v0));                                 // 2ac004 lwc1 $f0, 0x0($v0)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f2)); // 2ac008 c.lt.s $f0, $f2
        t = (r.fcr31 & kCondition) != 0u;                        // 2ac010 bc1t . + 4 + (0x2 << 2)
        r.a0 = addiu(0u, 1);                                     // 2ac014 addiu $a0, $zero, 0x1
        if (t) goto L_2ac01c;
        r.a0 = 0u;                                               // 2ac018 daddu $a0, $zero, $zero
    L_2ac01c:
        r.f1 = FPU_ADD_S(r.f0, r.f20);                           // 2ac01c add.s $f1, $f0, $f20
        WRITE32(lo32(r.v1), lo32(r.a0));                         // 2ac020 sw $a0, 0x0($v1)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f4)); // 2ac024 c.lt.s $f1, $f4
        t = (r.fcr31 & kCondition) == 0u;                        // 2ac02c bc1f . + 4 + (0x25 << 2)
        SWC1(lo32(r.v0), r.f1);                                  // 2ac030 swc1 $f1, 0x0($v0)
        if (t) goto L_2ac0c4;
        r.v0 = addu(r.a1, r.s0);                                 // 2ac034 addu $v0, $a1, $s0
        r.v1 = r.v0;                                             // 2ac038 daddu $v1, $v0, $zero
        r.a0 = LW(lo32(r.v0) + 0xcu);                            // 2ac03c lw $a0, 0xC($v0)
        t = r.a0 == 0u;                                          // 2ac040 beqz $a0, . + 4 + (0xB9 << 2)
        WRITE32(lo32(r.v1) + 0x4u, lo32(0u));                    // 2ac044 sw $zero, 0x4($v1)
        if (t) goto L_2ac328;
        r.a2 = LW(lo32(r.a0) + 0x20u);                           // 2ac048 lw $a2, 0x20($a0)
        if (r.a2 == 0u)                                          // 2ac04c beql $a2, $zero, . + 4 + (0xB7 << 2)
        {
            r.s5 = addiu(r.s5, 1);                                   // 2ac050 addiu $s5, $s5, 0x1
            goto L_2ac32c;
        }
        r.f1 = divS(r.f1, r.f4, r.fcr31);                        // 2ac05c div.s $f1, $f1, $f4
        r.at = sext32(0x3f800000u);                              // 2ac060 lui $at, 0x3F80
        r.f0 = floatOf(lo32(r.at));                              // 2ac064 mtc1 $at, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f1, r.f0)); // 2ac068 c.le.s $f1, $f0
        t = (r.fcr31 & kCondition) == 0u;                        // 2ac070 bc1f . + 4 + (0xAD << 2)
        r.a3 = addiu(0u, -1);                                    // 2ac074 addiu $a3, $zero, -0x1
        if (t) goto L_2ac328;
        r.at = sext32(0x42fe0000u);                              // 2ac078 lui $at, 0x42FE
        r.f0 = floatOf(lo32(r.at));                              // 2ac07c mtc1 $at, $f0
        r.f1 = FPU_MUL_S(r.f1, r.f0);                            // 2ac080 mul.s $f1, $f1, $f0
        r.f0 = FPU_SUB_S(r.f0, r.f1);                            // 2ac084 sub.s $f0, $f0, $f1
        r.f1 = floatOf(static_cast<uint32_t>(PS2_FPU_ROUND_NEAREST_W(r.f0))); // 2ac088 cvt.w.s $f1, $f0
        r.v0 = sext32(bitsOf(r.f1));                             // 2ac08c mfc1 $v0, $f1
        r.t0 = r.v0 & 0xffu;                                     // 2ac090 andi $t0, $v0, 0xFF
        r.v1 = sltu(r.t0, sext32(44u));                          // 2ac094 sltiu $v1, $t0, 0x2C
        t = r.v1 == 0u;                                          // 2ac098 beqz $v1, . + 4 + (0x4 << 2)
        r.v0 = addu(r.a1, r.s0);                                 // 2ac09c addu $v0, $a1, $s0
        if (t) goto L_2ac0ac;
        r.a0 = addiu(0u, 2);                                     // 2ac0a0 addiu $a0, $zero, 0x2
        r.v1 = LW(lo32(r.v0) + 0x18u);                           // 2ac0a4 lw $v1, 0x18($v0)
        if (r.v1 != 0u) { r.a3 = r.a0; copyHigh(ctx, 7, 4); }    // 2ac0a8 movn $a3, $a0, $v1
    L_2ac0ac:
        r.a0 = r.a2;                                             // 2ac0ac daddu $a0, $a2, $zero
        r.a1 = addiu(0u, 3);                                     // 2ac0b0 addiu $a1, $zero, 0x3
        r.ra = 0x2ac0bcu;                                        // 2ac0b4 jal func_263FF0
        r.a2 = addiu(0u, -1);                                    // 2ac0b8 addiu $a2, $zero, -0x1
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x263ff0u, 0x2ac0b4u, 0x2ac0bcu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2ac0bc:
        // 2ac0bc b . + 4 + (0x9B << 2)
        r.s5 = addiu(r.s5, 1);                                   // 2ac0c0 addiu $s5, $s5, 0x1
        goto L_2ac32c;
    L_2ac0c4:
        r.f0 = floatOf(lo32(0u));                                // 2ac0c4 mtc1 $zero, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f0, r.f1)); // 2ac0c8 c.le.s $f0, $f1
        t = (r.fcr31 & kCondition) == 0u;                        // 2ac0d0 bc1f . + 4 + (0x48 << 2)
        r.a0 = addiu(r.s4, -10616);                              // 2ac0d4 addiu $a0, $s4, -0x2978
        if (t) goto L_2ac1f4;
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f3)); // 2ac0d8 c.lt.s $f1, $f3
        t = (r.fcr31 & kCondition) == 0u;                        // 2ac0e0 bc1f . + 4 + (0x44 << 2)
        r.v0 = addu(r.a1, r.s0);                                 // 2ac0e4 addu $v0, $a1, $s0
        if (t) goto L_2ac1f4;
        r.v1 = addiu(0u, 1);                                     // 2ac0e8 addiu $v1, $zero, 0x1
        r.a0 = r.v0;                                             // 2ac0ec daddu $a0, $v0, $zero
        r.v0 = LW(lo32(r.v0) + 0xcu);                            // 2ac0f0 lw $v0, 0xC($v0)
        t = r.v0 == 0u;                                          // 2ac0f4 beqz $v0, . + 4 + (0x8C << 2)
        WRITE32(lo32(r.a0) + 0x4u, lo32(r.v1));                  // 2ac0f8 sw $v1, 0x4($a0)
        if (t) goto L_2ac328;
        r.v0 = LW(lo32(r.v0) + 0x20u);                           // 2ac0fc lw $v0, 0x20($v0)
        if (r.v0 == 0u)                                          // 2ac100 beql $v0, $zero, . + 4 + (0x8A << 2)
        {
            r.s5 = addiu(r.s5, 1);                                   // 2ac104 addiu $s5, $s5, 0x1
            goto L_2ac32c;
        }
        r.v1 = LW(lo32(r.a2));                                   // 2ac108 lw $v1, 0x0($a2)
        r.f2 = divS(r.f1, r.f3, r.fcr31);                        // 2ac114 div.s $f2, $f1, $f3
        r.v0 = sltu(r.v1, sext32(5u));                           // 2ac118 sltiu $v0, $v1, 0x5
        t = r.v0 == 0u;                                          // 2ac11c beqz $v0, . + 4 + (0x12 << 2)
        r.a3 = addiu(0u, -1);                                    // 2ac120 addiu $a3, $zero, -0x1
        if (t) goto L_2ac168;
        r.v0 = sll32(r.v1, 2);                                   // 2ac124 sll $v0, $v1, 2
        r.v1 = addiu(r.s7, -26864);                              // 2ac128 addiu $v1, $s7, -0x68F0
        r.v0 = addu(r.v0, r.v1);                                 // 2ac12c addu $v0, $v0, $v1
        r.a0 = LW(lo32(r.v0));                                   // 2ac130 lw $a0, 0x0($v0)
        jt = lo32(r.a0);                                         // 2ac134 jr $a0 (jump table)
        switch (jt)
        {
        case 0x2ac13cu: goto L_2ac13c;
        case 0x2ac158u: goto L_2ac158;
        default:
            STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(20); ctx->fcr31 = r.fcr31;
            runtime->dispatchGuestBranch(rdram, ctx, jt, 0x2ac134u, 0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR");
            return;
        }
    L_2ac13c:
        r.at = sext32(0x42c20000u);                              // 2ac13c lui $at, 0x42C2
        r.f0 = floatOf(lo32(r.at));                              // 2ac140 mtc1 $at, $f0
        r.at = sext32(0x41f00000u);                              // 2ac144 lui $at, 0x41F0
        r.f1 = floatOf(lo32(r.at));                              // 2ac148 mtc1 $at, $f1
        r.f0 = FPU_MUL_S(r.f2, r.f0);                            // 2ac14c mul.s $f0, $f2, $f0
        // 2ac150 b . + 4 + (0xA << 2)
        r.f0 = FPU_ADD_S(r.f0, r.f1);                            // 2ac154 add.s $f0, $f0, $f1
        goto L_2ac17c;
    L_2ac158:
        r.at = sext32(0x42fe0000u);                              // 2ac158 lui $at, 0x42FE
        r.f1 = floatOf(lo32(r.at));                              // 2ac15c mtc1 $at, $f1
        // 2ac160 b . + 4 + (0x5 << 2)
        r.f0 = FPU_MUL_S(r.f2, r.f2);                            // 2ac164 mul.s $f0, $f2, $f2
        goto L_2ac178;
    L_2ac168:
        r.f0 = FPU_MUL_S(r.f2, r.f2);                            // 2ac168 mul.s $f0, $f2, $f2
        r.at = sext32(0x42fe0000u);                              // 2ac16c lui $at, 0x42FE
        r.f1 = floatOf(lo32(r.at));                              // 2ac170 mtc1 $at, $f1
        r.f0 = FPU_MUL_S(r.f0, r.f2);                            // 2ac174 mul.s $f0, $f0, $f2
    L_2ac178:
        r.f0 = FPU_MUL_S(r.f0, r.f1);                            // 2ac178 mul.s $f0, $f0, $f1
    L_2ac17c:
        r.f1 = floatOf(static_cast<uint32_t>(PS2_FPU_ROUND_NEAREST_W(r.f0))); // 2ac17c cvt.w.s $f1, $f0
        r.v0 = sext32(bitsOf(r.f1));                             // 2ac180 mfc1 $v0, $f1
        r.s1 = r.v0 & 0xffu;                                     // 2ac184 andi $s1, $v0, 0xFF
        r.v0 = sltu(r.s1, sext32(44u));                          // 2ac188 sltiu $v0, $s1, 0x2C
        t = r.v0 == 0u;                                          // 2ac18c beqz $v0, . + 4 + (0x5 << 2)
        r.v0 = addiu(r.s4, -10616);                              // 2ac190 addiu $v0, $s4, -0x2978
        if (t) goto L_2ac1a4;
        r.a0 = addiu(0u, 2);                                     // 2ac194 addiu $a0, $zero, 0x2
        r.v0 = addu(r.v0, r.s3);                                 // 2ac198 addu $v0, $v0, $s3
        r.v1 = LW(lo32(r.v0) + 0x18u);                           // 2ac19c lw $v1, 0x18($v0)
        if (r.v1 != 0u) { r.a3 = r.a0; copyHigh(ctx, 7, 4); }    // 2ac1a0 movn $a3, $a0, $v1
    L_2ac1a4:
        r.s0 = addiu(r.s4, -10616);                              // 2ac1a4 addiu $s0, $s4, -0x2978
        r.a1 = addiu(0u, 3);                                     // 2ac1a8 addiu $a1, $zero, 0x3
        r.s0 = addiu(r.s0, 12);                                  // 2ac1ac addiu $s0, $s0, 0xC
        r.a2 = addiu(0u, -1);                                    // 2ac1b0 addiu $a2, $zero, -0x1
        r.s0 = addu(r.s3, r.s0);                                 // 2ac1b4 addu $s0, $s3, $s0
        r.t0 = r.s1;                                             // 2ac1b8 daddu $t0, $s1, $zero
        r.v0 = LW(lo32(r.s0));                                   // 2ac1bc lw $v0, 0x0($s0)
        r.ra = 0x2ac1c8u;                                        // 2ac1c0 jal func_263FF0
        r.a0 = LW(lo32(r.v0) + 0x20u);                           // 2ac1c4 lw $a0, 0x20($v0)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x263ff0u, 0x2ac1c0u, 0x2ac1c8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2ac1c8:
        r.v0 = LW(lo32(r.s0));                                   // 2ac1c8 lw $v0, 0x0($s0)
        r.v0 = LW(lo32(r.v0) + 0x218u);                          // 2ac1cc lw $v0, 0x218($v0)
        t = r.v0 == 0u;                                          // 2ac1d0 beqz $v0, . + 4 + (0x55 << 2)
        r.t0 = r.s1;                                             // 2ac1d4 daddu $t0, $s1, $zero
        if (t) goto L_2ac328;
        r.a0 = LW(lo32(r.v0) + 0x20u);                           // 2ac1d8 lw $a0, 0x20($v0)
        r.a1 = addiu(0u, 3);                                     // 2ac1dc addiu $a1, $zero, 0x3
        r.a2 = addiu(0u, -1);                                    // 2ac1e0 addiu $a2, $zero, -0x1
        r.ra = 0x2ac1ecu;                                        // 2ac1e4 jal func_263FF0
        r.a3 = addiu(0u, -1);                                    // 2ac1e8 addiu $a3, $zero, -0x1
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x263ff0u, 0x2ac1e4u, 0x2ac1ecu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2ac1ec:
        // 2ac1ec b . + 4 + (0x4F << 2)
        r.s5 = addiu(r.s5, 1);                                   // 2ac1f0 addiu $s5, $s5, 0x1
        goto L_2ac32c;
    L_2ac1f4:
        r.v0 = addu(r.a0, r.s3);                                 // 2ac1f4 addu $v0, $a0, $s3
        r.f0 = LWC1(lo32(r.v0) + 0x10u);                         // 2ac1f8 lwc1 $f0, 0x10($v0)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f3, r.f0)); // 2ac1fc c.le.s $f3, $f0
        if ((r.fcr31 & kCondition) == 0u)                        // 2ac204 bc1fl . + 4 + (0x49 << 2)
        {
            r.s5 = addiu(r.s5, 1);                                   // 2ac208 addiu $s5, $s5, 0x1
            goto L_2ac32c;
        }
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f4, r.f0)); // 2ac20c c.le.s $f4, $f0
        if ((r.fcr31 & kCondition) == 0u)                        // 2ac214 bc1fl . + 4 + (0x45 << 2)
        {
            r.s5 = addiu(r.s5, 1);                                   // 2ac218 addiu $s5, $s5, 0x1
            goto L_2ac32c;
        }
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f2, r.f0)); // 2ac21c c.le.s $f2, $f0
        t = (r.fcr31 & kCondition) == 0u;                        // 2ac224 bc1f . + 4 + (0x40 << 2)
        r.v0 = addu(r.a0, r.s0);                                 // 2ac228 addu $v0, $a0, $s0
        if (t) goto L_2ac328;
        r.v1 = addiu(0u, 2);                                     // 2ac22c addiu $v1, $zero, 0x2
        r.a0 = r.v0;                                             // 2ac230 daddu $a0, $v0, $zero
        r.v0 = LW(lo32(r.v0) + 0xcu);                            // 2ac234 lw $v0, 0xC($v0)
        t = r.v0 == 0u;                                          // 2ac238 beqz $v0, . + 4 + (0x8 << 2)
        WRITE32(lo32(r.a0) + 0x4u, lo32(r.v1));                  // 2ac23c sw $v1, 0x4($a0)
        if (t) goto L_2ac25c;
        r.a0 = LW(lo32(r.v0) + 0x20u);                           // 2ac240 lw $a0, 0x20($v0)
        t = r.a0 == 0u;                                          // 2ac244 beqz $a0, . + 4 + (0x5 << 2)
        r.a1 = addiu(0u, -1);                                    // 2ac248 addiu $a1, $zero, -0x1
        if (t) goto L_2ac25c;
        r.a2 = addiu(0u, -1);                                    // 2ac24c addiu $a2, $zero, -0x1
        r.a3 = addiu(0u, -1);                                    // 2ac250 addiu $a3, $zero, -0x1
        r.ra = 0x2ac25cu;                                        // 2ac254 jal func_263FF0
        r.t0 = 0u;                                               // 2ac258 daddu $t0, $zero, $zero
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x263ff0u, 0x2ac254u, 0x2ac25cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(s0, 16); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2ac25c:
        r.s2 = addiu(r.s4, -10616);                              // 2ac25c addiu $s2, $s4, -0x2978
        r.v0 = addiu(r.s2, 12);                                  // 2ac260 addiu $v0, $s2, 0xC
        r.s1 = addu(r.s3, r.v0);                                 // 2ac264 addu $s1, $s3, $v0
        r.v1 = LW(lo32(r.s1));                                   // 2ac268 lw $v1, 0x0($s1)
        r.v0 = LW(lo32(r.v1) + 0x218u);                          // 2ac26c lw $v0, 0x218($v1)
        t = r.v0 == 0u;                                          // 2ac270 beqz $v0, . + 4 + (0x6 << 2)
        r.a1 = addiu(0u, -1);                                    // 2ac274 addiu $a1, $zero, -0x1
        if (t) goto L_2ac28c;
        r.a0 = LW(lo32(r.v0) + 0x20u);                           // 2ac278 lw $a0, 0x20($v0)
        r.a2 = addiu(0u, -1);                                    // 2ac27c addiu $a2, $zero, -0x1
        r.a3 = addiu(0u, -1);                                    // 2ac280 addiu $a3, $zero, -0x1
        r.ra = 0x2ac28cu;                                        // 2ac284 jal func_263FF0
        r.t0 = 0u;                                               // 2ac288 daddu $t0, $zero, $zero
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x263ff0u, 0x2ac284u, 0x2ac28cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2ac28c:
        r.a0 = addu(r.s0, r.s2);                                 // 2ac28c addu $a0, $s0, $s2
        r.v0 = addiu(0u, 5);                                     // 2ac290 addiu $v0, $zero, 0x5
        r.v1 = LW(lo32(r.a0));                                   // 2ac294 lw $v1, 0x0($a0)
        t = r.v1 == r.v0;                                        // 2ac298 beq $v1, $v0, . + 4 + (0x5 << 2)
        r.v0 = addiu(0u, 6);                                     // 2ac29c addiu $v0, $zero, 0x6
        if (t) goto L_2ac2b0;
        t = r.v1 == r.v0;                                        // 2ac2a0 beq $v1, $v0, . + 4 + (0x18 << 2)
        r.v0 = addu(r.s2, r.s0);                                 // 2ac2a4 addu $v0, $s2, $s0
        if (t) goto L_2ac304;
        // 2ac2a8 b . + 4 + (0x20 << 2)
        r.s5 = addiu(r.s5, 1);                                   // 2ac2ac addiu $s5, $s5, 0x1
        goto L_2ac32c;
    L_2ac2b0:
        r.a0 = LW(lo32(r.s1));                                   // 2ac2b0 lw $a0, 0x0($s1)
        t = r.a0 == 0u;                                          // 2ac2b4 beqz $a0, . + 4 + (0x8 << 2)
        r.v0 = addiu(0u, 4096);                                  // 2ac2b8 addiu $v0, $zero, 0x1000
        if (t) goto L_2ac2d8;
        r.v1 = LW(lo32(r.a0) + 0x8u);                            // 2ac2bc lw $v1, 0x8($a0)
        t = r.v1 != r.v0;                                        // 2ac2c0 bne $v1, $v0, . + 4 + (0x6 << 2)
        r.v0 = addiu(r.s4, -10616);                              // 2ac2c4 addiu $v0, $s4, -0x2978
        if (t) goto L_2ac2dc;
        r.ra = 0x2ac2d0u;                                        // 2ac2c8 jal func_273A80
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x273a80u, 0x2ac2c8u, 0x2ac2d0u)) return;
        LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20);
    L_2ac2d0:
        // 2ac2d0 b . + 4 + (0x5 << 2)
        WRITE32(lo32(r.s1), lo32(0u));                           // 2ac2d4 sw $zero, 0x0($s1)
        goto L_2ac2e8;
    L_2ac2d8:
        r.v0 = addiu(r.s4, -10616);                              // 2ac2d8 addiu $v0, $s4, -0x2978
    L_2ac2dc:
        r.v0 = addu(r.v0, r.s3);                                 // 2ac2dc addu $v0, $v0, $s3
        r.ra = 0x2ac2e8u;                                        // 2ac2e0 jal func_269340
        r.a0 = LW(lo32(r.v0) + 0xcu);                            // 2ac2e4 lw $a0, 0xC($v0)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x269340u, 0x2ac2e0u, 0x2ac2e8u)) return;
        LOAD_GPR(s3, 19); LOAD_GPR(s4, 20);
    L_2ac2e8:
        r.a0 = addiu(r.s4, -10616);                              // 2ac2e8 addiu $a0, $s4, -0x2978
        r.v0 = addu(r.a0, r.s3);                                 // 2ac2ec addu $v0, $a0, $s3
        r.a0 = addu(r.s3, r.a0);                                 // 2ac2f0 addu $a0, $s3, $a0
        r.ra = 0x2ac2fcu;                                        // 2ac2f4 jal func_2AE1C0
        WRITE32(lo32(r.v0) + 0xcu, lo32(0u));                    // 2ac2f8 sw $zero, 0xC($v0)
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2ae1c0u, 0x2ac2f4u, 0x2ac2fcu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2ac2fc:
        // 2ac2fc b . + 4 + (0xB << 2)
        r.s5 = addiu(r.s5, 1);                                   // 2ac300 addiu $s5, $s5, 0x1
        goto L_2ac32c;
    L_2ac304:
        r.at = sext32(0x40800000u);                              // 2ac304 lui $at, 0x4080
        r.f1 = floatOf(lo32(r.at));                              // 2ac308 mtc1 $at, $f1
        r.f0 = LWC1(lo32(r.v0) + 0x10u);                         // 2ac30c lwc1 $f0, 0x10($v0)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 2ac310 c.lt.s $f1, $f0
        if ((r.fcr31 & kCondition) == 0u)                        // 2ac318 bc1fl . + 4 + (0x4 << 2)
        {
            r.s5 = addiu(r.s5, 1);                                   // 2ac31c addiu $s5, $s5, 0x1
            goto L_2ac32c;
        }
        r.ra = 0x2ac328u;                                        // 2ac320 jal func_2AE1C0
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2ae1c0u, 0x2ac320u, 0x2ac328u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(s5, 21); LOAD_GPR(s6, 22); LOAD_GPR(s7, 23); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(fp, 30); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2ac328:
        r.s5 = addiu(r.s5, 1);                                   // 2ac328 addiu $s5, $s5, 0x1
    L_2ac32c:
        r.v0 = slti(r.s5, 14);                                   // 2ac32c slti $v0, $s5, 0xE
        t = r.v0 != 0u;                                          // 2ac330 bnez $v0, . + 4 + (-0x10D << 2)
        r.s0 = sll32(r.s5, 5);                                   // 2ac334 sll $s0, $s5, 5
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x2abf00u)) { STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(20); ctx->fcr31 = r.fcr31; return; }
            goto L_2abf00;
        }
        r.ra = READ64(lo32(r.sp) + 0x90u);                       // 2ac338 ld $ra, 0x90($sp)
        r.fp = READ64(lo32(r.sp) + 0x80u);                       // 2ac33c ld $fp, 0x80($sp)
        r.s7 = READ64(lo32(r.sp) + 0x70u);                       // 2ac340 ld $s7, 0x70($sp)
        r.s6 = READ64(lo32(r.sp) + 0x60u);                       // 2ac344 ld $s6, 0x60($sp)
        r.s5 = READ64(lo32(r.sp) + 0x50u);                       // 2ac348 ld $s5, 0x50($sp)
        r.s4 = READ64(lo32(r.sp) + 0x40u);                       // 2ac34c ld $s4, 0x40($sp)
        r.s3 = READ64(lo32(r.sp) + 0x30u);                       // 2ac350 ld $s3, 0x30($sp)
        r.s2 = READ64(lo32(r.sp) + 0x20u);                       // 2ac354 ld $s2, 0x20($sp)
        r.s1 = READ64(lo32(r.sp) + 0x10u);                       // 2ac358 ld $s1, 0x10($sp)
        r.s0 = READ64(lo32(r.sp));                               // 2ac35c ld $s0, 0x0($sp)
        r.f20 = LWC1(lo32(r.sp) + 0xa0u);                        // 2ac360 lwc1 $f20, 0xA0($sp)
        jt = lo32(r.ra);                                         // 2ac364 jr $ra
        r.sp = addiu(r.sp, 176);                                 // 2ac368 addiu $sp, $sp, 0xB0
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(s5, 21); STORE_GPR(s6, 22); STORE_GPR(s7, 23); STORE_GPR(sp, 29); STORE_GPR(fp, 30); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(20); ctx->fcr31 = r.fcr31;
        ctx->pc = jt;
        return;
    }

    // ---- particleTick (0x29bc58)
    //
    // particleTick(): every particle in use ages; those past their life are
    // freed, the rest get their rooms' visibility flags and their kind's
    // tick (a jump table).

    struct ParticleTickRegs
    {
        uint64_t at, v0, v1, a0, a1, a2, s0, s1, s2, s3, s4, gp, sp, ra;
        float f0, f1, f2, f3, f4, f5, f6, f20, f21;
        uint32_t fcr31;
        uint64_t lo, hi;
    };

    void nativeParticleTick(G_ARGS)
    {
        ParticleTickRegs r;
        bool t;
        uint32_t jt;
        (void)t;
        (void)jt;
        LOAD_GPR(at, 1); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(ra, 31); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(20); LOAD_F(21); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
        r.sp = addiu(r.sp, -112);                                // 29bc58 addiu $sp, $sp, -0x70
        r.a1 = LW(lo32(r.gp) - 0x4d10u);                         // 29bc5c lw $a1, -0x4D10($gp)
        WRITE64(lo32(r.sp) + 0x40u, r.s4);                       // 29bc60 sd $s4, 0x40($sp)
        WRITE64(lo32(r.sp) + 0x30u, r.s3);                       // 29bc64 sd $s3, 0x30($sp)
        r.s4 = sext32(0x370000u);                                // 29bc68 lui $s4, 0x37
        WRITE64(lo32(r.sp) + 0x20u, r.s2);                       // 29bc6c sd $s2, 0x20($sp)
        r.s3 = sext32(0x3b0000u);                                // 29bc70 lui $s3, 0x3B
        WRITE64(lo32(r.sp) + 0x50u, r.ra);                       // 29bc74 sd $ra, 0x50($sp)
        r.s2 = 0u;                                               // 29bc78 daddu $s2, $zero, $zero
        WRITE64(lo32(r.sp) + 0x10u, r.s1);                       // 29bc7c sd $s1, 0x10($sp)
        WRITE64(lo32(r.sp), r.s0);                               // 29bc80 sd $s0, 0x0($sp)
        SWC1(lo32(r.sp) + 0x68u, r.f21);                         // 29bc84 swc1 $f21, 0x68($sp)
        SWC1(lo32(r.sp) + 0x60u, r.f20);                         // 29bc88 swc1 $f20, 0x60($sp)
        r.f6 = LWC1(lo32(r.gp) - 0x4b98u);                       // 29bc8c lwc1 $f6, -0x4B98($gp)
        r.v0 = addiu(0u, 6048);                                  // 29bc90 addiu $v0, $zero, 0x17A0
    L_29bc98:
        r.v1 = addiu(0u, -1);                                    // 29bc98 addiu $v1, $zero, -0x1
        r.a0 = mult(r.s2, r.v0, r.lo, r.hi);                     // 29bc9c mult $a0, $s2, $v0
        r.s0 = addu(r.a0, r.a1);                                 // 29bca0 addu $s0, $a0, $a1
        r.a2 = LW(lo32(r.s0));                                   // 29bca4 lw $a2, 0x0($s0)
        t = r.a2 == r.v1;                                        // 29bca8 beq $a2, $v1, . + 4 + (0xE3 << 2)
        r.v0 = r.a2;                                             // 29bcac daddu $v0, $a2, $zero
        if (t) goto L_29c038;
        r.at = sext32(0x42700000u);                              // 29bcb0 lui $at, 0x4270
        r.f0 = floatOf(lo32(r.at));                              // 29bcb4 mtc1 $at, $f0
        r.f1 = LWC1(lo32(r.s0) + 0xcu);                          // 29bcb8 lwc1 $f1, 0xC($s0)
        r.f0 = divS(r.f6, r.f0, r.fcr31);                        // 29bcc4 div.s $f0, $f6, $f0
        r.f2 = LWC1(lo32(r.s0) + 0x34u);                         // 29bcc8 lwc1 $f2, 0x34($s0)
        r.f3 = floatOf(lo32(0u));                                // 29bccc mtc1 $zero, $f3
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f3, r.f2)); // 29bcd0 c.lt.s $f3, $f2
        r.f0 = FPU_ADD_S(r.f1, r.f0);                            // 29bcd4 add.s $f0, $f1, $f0
        t = (r.fcr31 & kCondition) == 0u;                        // 29bcd8 bc1f . + 4 + (0x8 << 2)
        SWC1(lo32(r.s0) + 0xcu, r.f0);                           // 29bcdc swc1 $f0, 0xC($s0)
        if (t) goto L_29bcfc;
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f2, r.f0)); // 29bce0 c.le.s $f2, $f0
        if ((r.fcr31 & kCondition) == 0u)                        // 29bce8 bc1fl . + 4 + (0x5 << 2)
        {
            r.f1 = LWC1(lo32(r.s0) + 0xcu);                          // 29bcec lwc1 $f1, 0xC($s0)
            goto L_29bd00;
        }
        r.f0 = FPU_SUB_S(r.f0, r.f2);                            // 29bcf0 sub.s $f0, $f0, $f2
        SWC1(lo32(r.s0) + 0x34u, r.f3);                          // 29bcf4 swc1 $f3, 0x34($s0)
        SWC1(lo32(r.s0) + 0xcu, r.f0);                           // 29bcf8 swc1 $f0, 0xC($s0)
    L_29bcfc:
        r.f1 = LWC1(lo32(r.s0) + 0xcu);                          // 29bcfc lwc1 $f1, 0xC($s0)
    L_29bd00:
        r.f0 = LWC1(lo32(r.s0) + 0x10u);                         // 29bd00 lwc1 $f0, 0x10($s0)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f0, r.f1)); // 29bd04 c.le.s $f0, $f1
        t = (r.fcr31 & kCondition) == 0u;                        // 29bd0c bc1f . + 4 + (0x9 << 2)
        r.v0 = sll32(r.v0, 4);                                   // 29bd10 sll $v0, $v0, 4
        if (t) goto L_29bd34;
        r.v1 = addiu(r.s4, -26864);                              // 29bd14 addiu $v1, $s4, -0x68F0
        r.v1 = addu(r.v1, r.v0);                                 // 29bd18 addu $v1, $v1, $v0
        r.a0 = LW(lo32(r.v1) + 0x8u);                            // 29bd1c lw $a0, 0x8($v1)
        t = r.a0 == 0u;                                          // 29bd20 beqz $a0, . + 4 + (0x5 << 2)
        r.v0 = addiu(0u, -1);                                    // 29bd24 addiu $v0, $zero, -0x1
        if (t) goto L_29bd38;
        r.ra = 0x29bd30u;                                        // 29bd28 jal func_296B08
        r.a0 = r.s0;                                             // 29bd2c daddu $a0, $s0, $zero
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x296b08u, 0x29bd28u, 0x29bd30u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(s0, 16); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_29bd30:
        r.a2 = LW(lo32(r.s0));                                   // 29bd30 lw $a2, 0x0($s0)
    L_29bd34:
        r.v0 = addiu(0u, -1);                                    // 29bd34 addiu $v0, $zero, -0x1
    L_29bd38:
        t = r.a2 == r.v0;                                        // 29bd38 beq $a2, $v0, . + 4 + (0xB9 << 2)
        r.s1 = addiu(r.s2, 1);                                   // 29bd3c addiu $s1, $s2, 0x1
        if (t) goto L_29c020;
        r.f1 = LWC1(lo32(r.s0) + 0x34u);                         // 29bd40 lwc1 $f1, 0x34($s0)
        r.f0 = floatOf(lo32(0u));                                // 29bd44 mtc1 $zero, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f1, r.f0)); // 29bd48 c.eq.s $f1, $f0
        t = (r.fcr31 & kCondition) == 0u;                        // 29bd50 bc1f . + 4 + (0xB4 << 2)
        r.a1 = LW(lo32(r.gp) - 0x4d10u);                         // 29bd54 lw $a1, -0x4D10($gp)
        if (t) goto L_29c024;
        r.v0 = READ64(lo32(r.s0) + 0x8u);                        // 29bd58 ld $v0, 0x8($s0)
        r.v0 = r.v0 & 0x6u;                                      // 29bd5c andi $v0, $v0, 0x6
        t = r.v0 == 0u;                                          // 29bd60 beqz $v0, . + 4 + (0x21 << 2)
        r.v1 = addiu(0u, -121);                                  // 29bd64 addiu $v1, $zero, -0x79
        if (t) goto L_29bde8;
        r.v0 = LW(lo32(r.s0) + 0x8u);                            // 29bd68 lw $v0, 0x8($s0)
        r.s1 = addiu(r.s0, 72);                                  // 29bd6c addiu $s1, $s0, 0x48
        r.a1 = 0u;                                               // 29bd70 daddu $a1, $zero, $zero
        r.v0 = r.v0 & r.v1;                                      // 29bd74 and $v0, $v0, $v1
        r.a0 = r.s1;                                             // 29bd78 daddu $a0, $s1, $zero
        r.ra = 0x29bd84u;                                        // 29bd7c jal func_2541D8
        WRITE32(lo32(r.s0) + 0x8u, lo32(r.v0));                  // 29bd80 sw $v0, 0x8($s0)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2541d8u, 0x29bd7cu, 0x29bd84u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17);
    L_29bd84:
        t = r.v0 == 0u;                                          // 29bd84 beqz $v0, . + 4 + (0x4 << 2)
        r.a0 = r.s1;                                             // 29bd88 daddu $a0, $s1, $zero
        if (t) goto L_29bd98;
        r.v0 = LW(lo32(r.s0) + 0x8u);                            // 29bd8c lw $v0, 0x8($s0)
        r.v0 = r.v0 | 0x8u;                                      // 29bd90 ori $v0, $v0, 0x8
        WRITE32(lo32(r.s0) + 0x8u, lo32(r.v0));                  // 29bd94 sw $v0, 0x8($s0)
    L_29bd98:
        r.ra = 0x29bda0u;                                        // 29bd98 jal func_2541D8
        r.a1 = addiu(0u, 1);                                     // 29bd9c addiu $a1, $zero, 0x1
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2541d8u, 0x29bd98u, 0x29bda0u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17);
    L_29bda0:
        t = r.v0 == 0u;                                          // 29bda0 beqz $v0, . + 4 + (0x4 << 2)
        r.a0 = r.s1;                                             // 29bda4 daddu $a0, $s1, $zero
        if (t) goto L_29bdb4;
        r.v0 = LW(lo32(r.s0) + 0x8u);                            // 29bda8 lw $v0, 0x8($s0)
        r.v0 = r.v0 | 0x10u;                                     // 29bdac ori $v0, $v0, 0x10
        WRITE32(lo32(r.s0) + 0x8u, lo32(r.v0));                  // 29bdb0 sw $v0, 0x8($s0)
    L_29bdb4:
        r.ra = 0x29bdbcu;                                        // 29bdb4 jal func_2541D8
        r.a1 = addiu(0u, 2);                                     // 29bdb8 addiu $a1, $zero, 0x2
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2541d8u, 0x29bdb4u, 0x29bdbcu)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17);
    L_29bdbc:
        t = r.v0 == 0u;                                          // 29bdbc beqz $v0, . + 4 + (0x4 << 2)
        r.a0 = r.s1;                                             // 29bdc0 daddu $a0, $s1, $zero
        if (t) goto L_29bdd0;
        r.v0 = LW(lo32(r.s0) + 0x8u);                            // 29bdc4 lw $v0, 0x8($s0)
        r.v0 = r.v0 | 0x20u;                                     // 29bdc8 ori $v0, $v0, 0x20
        WRITE32(lo32(r.s0) + 0x8u, lo32(r.v0));                  // 29bdcc sw $v0, 0x8($s0)
    L_29bdd0:
        r.ra = 0x29bdd8u;                                        // 29bdd0 jal func_2541D8
        r.a1 = addiu(0u, 3);                                     // 29bdd4 addiu $a1, $zero, 0x3
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2541d8u, 0x29bdd0u, 0x29bdd8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(s0, 16); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_29bdd8:
        t = r.v0 == 0u;                                          // 29bdd8 beqz $v0, . + 4 + (0x4 << 2)
        r.v0 = LW(lo32(r.s0) + 0x8u);                            // 29bddc lw $v0, 0x8($s0)
        if (t) goto L_29bdec;
        r.v0 = r.v0 | 0x40u;                                     // 29bde0 ori $v0, $v0, 0x40
        WRITE32(lo32(r.s0) + 0x8u, lo32(r.v0));                  // 29bde4 sw $v0, 0x8($s0)
    L_29bde8:
        r.v0 = LW(lo32(r.s0) + 0x8u);                            // 29bde8 lw $v0, 0x8($s0)
    L_29bdec:
        r.a0 = addiu(0u, 2);                                     // 29bdec addiu $a0, $zero, 0x2
        r.v0 = r.v0 | 0x80u;                                     // 29bdf0 ori $v0, $v0, 0x80
        WRITE32(lo32(r.s0) + 0x8u, lo32(r.v0));                  // 29bdf4 sw $v0, 0x8($s0)
        r.v1 = READ64(lo32(r.s0) + 0x8u);                        // 29bdf8 ld $v1, 0x8($s0)
        r.v1 = r.v1 & 0x7au;                                     // 29bdfc andi $v1, $v1, 0x7A
        t = r.v1 == r.a0;                                        // 29be00 beq $v1, $a0, . + 4 + (0x87 << 2)
        r.s1 = addiu(r.s2, 1);                                   // 29be04 addiu $s1, $s2, 0x1
        if (t) goto L_29c020;
        r.v0 = LW(lo32(r.s0));                                   // 29be08 lw $v0, 0x0($s0)
        r.v0 = addiu(r.v0, -3);                                  // 29be0c addiu $v0, $v0, -0x3
        r.v1 = sltu(r.v0, sext32(12u));                          // 29be10 sltiu $v1, $v0, 0xC
        t = r.v1 == 0u;                                          // 29be14 beqz $v1, . + 4 + (0x82 << 2)
        r.v0 = sll32(r.v0, 2);                                   // 29be18 sll $v0, $v0, 2
        if (t) goto L_29c020;
        r.v1 = addiu(r.s3, -28640);                              // 29be1c addiu $v1, $s3, -0x6FE0
        r.v0 = addu(r.v0, r.v1);                                 // 29be20 addu $v0, $v0, $v1
        r.a0 = LW(lo32(r.v0));                                   // 29be24 lw $a0, 0x0($v0)
        jt = lo32(r.a0);                                         // 29be28 jr $a0 (jump table)
        switch (jt)
        {
        case 0x29bf3cu: goto L_29bf3c;
        case 0x29bfd8u: goto L_29bfd8;
        case 0x29c000u: goto L_29c000;
        case 0x29bfc4u: goto L_29bfc4;
        case 0x29c014u: goto L_29c014;
        case 0x29c01cu: goto L_29c01c;
        case 0x29bfecu: goto L_29bfec;
        case 0x29be30u: goto L_29be30;
        case 0x29be44u: goto L_29be44;
        default:
            STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
            runtime->dispatchGuestBranch(rdram, ctx, jt, 0x29be28u, 0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR");
            return;
        }
    L_29be30:
        r.a0 = r.s0;                                             // 29be30 daddu $a0, $s0, $zero
        r.ra = 0x29be3cu;                                        // 29be34 jal func_29D530
        r.s1 = addiu(r.s2, 1);                                   // 29be38 addiu $s1, $s2, 0x1
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x29d530u, 0x29be34u, 0x29be3cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a2, 6); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_29be3c:
        // 29be3c b . + 4 + (0x79 << 2)
        r.a1 = LW(lo32(r.gp) - 0x4d10u);                         // 29be40 lw $a1, -0x4D10($gp)
        goto L_29c024;
    L_29be44:
        r.f6 = LWC1(lo32(r.gp) - 0x4b98u);                       // 29be44 lwc1 $f6, -0x4B98($gp)
        r.at = sext32(0x42700000u);                              // 29be48 lui $at, 0x4270
        r.f0 = floatOf(lo32(r.at));                              // 29be4c mtc1 $at, $f0
        r.f1 = LWC1(lo32(r.s0) + 0xcu);                          // 29be50 lwc1 $f1, 0xC($s0)
        r.f0 = divS(r.f6, r.f0, r.fcr31);                        // 29be5c div.s $f0, $f6, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f1)); // 29be60 c.lt.s $f0, $f1
        if ((r.fcr31 & kCondition) != 0u)                        // 29be68 bc1tl . + 4 + (0x7 << 2)
        {
            r.f3 = LWC1(lo32(r.s0) + 0x3b0u);                        // 29be6c lwc1 $f3, 0x3B0($s0)
            goto L_29be88;
        }
        r.v0 = LW(lo32(r.s0) + 0x30u);                           // 29be70 lw $v0, 0x30($s0)
        r.v1 = addiu(r.v0, -1);                                  // 29be74 addiu $v1, $v0, -0x1
        r.v0 = r.v0 & r.v1;                                      // 29be78 and $v0, $v0, $v1
        t = r.v0 != 0u;                                          // 29be7c bnez $v0, . + 4 + (0x6C << 2)
        r.s1 = addiu(r.s2, 1);                                   // 29be80 addiu $s1, $s2, 0x1
        if (t) goto L_29c030;
        r.f3 = LWC1(lo32(r.s0) + 0x3b0u);                        // 29be84 lwc1 $f3, 0x3B0($s0)
    L_29be88:
        r.f4 = LWC1(lo32(r.s0) + 0x3b4u);                        // 29be88 lwc1 $f4, 0x3B4($s0)
        r.f5 = LWC1(lo32(r.s0) + 0x3b8u);                        // 29be8c lwc1 $f5, 0x3B8($s0)
        r.f3 = FPU_MUL_S(r.f3, r.f6);                            // 29be90 mul.s $f3, $f3, $f6
        r.f4 = FPU_MUL_S(r.f4, r.f6);                            // 29be94 mul.s $f4, $f4, $f6
        r.f2 = LWC1(lo32(r.s0) + 0x3a4u);                        // 29be98 lwc1 $f2, 0x3A4($s0)
        r.f5 = FPU_MUL_S(r.f5, r.f6);                            // 29be9c mul.s $f5, $f5, $f6
        r.f0 = LWC1(lo32(r.s0) + 0x3a8u);                        // 29bea0 lwc1 $f0, 0x3A8($s0)
        r.f1 = LWC1(lo32(r.s0) + 0x3acu);                        // 29bea4 lwc1 $f1, 0x3AC($s0)
        r.f2 = FPU_ADD_S(r.f2, r.f3);                            // 29bea8 add.s $f2, $f2, $f3
        r.f0 = FPU_ADD_S(r.f0, r.f4);                            // 29beac add.s $f0, $f0, $f4
        r.v0 = LW(lo32(r.gp) - 0x4ba0u);                         // 29beb0 lw $v0, -0x4BA0($gp)
        r.f1 = FPU_ADD_S(r.f1, r.f5);                            // 29beb4 add.s $f1, $f1, $f5
        SWC1(lo32(r.s0) + 0x3a4u, r.f2);                         // 29beb8 swc1 $f2, 0x3A4($s0)
        SWC1(lo32(r.s0) + 0x3a8u, r.f0);                         // 29bebc swc1 $f0, 0x3A8($s0)
        t = lez64(r.v0);                                         // 29bec0 blez $v0, . + 4 + (0x5A << 2)
        SWC1(lo32(r.s0) + 0x3acu, r.f1);                         // 29bec4 swc1 $f1, 0x3AC($s0)
        if (t) goto L_29c02c;
        r.s1 = addiu(r.s2, 1);                                   // 29bec8 addiu $s1, $s2, 0x1
        r.at = sext32(0x2f800000u);                              // 29becc lui $at, 0x2F80
        r.f21 = floatOf(lo32(r.at));                             // 29bed0 mtc1 $at, $f21
        r.at = sext32(0x43b40000u);                              // 29bed4 lui $at, 0x43B4
        r.f20 = floatOf(lo32(r.at));                             // 29bed8 mtc1 $at, $f20
        r.s0 = addiu(r.s0, 956);                                 // 29bedc addiu $s0, $s0, 0x3BC
        r.s2 = addiu(0u, 19);                                    // 29bee0 addiu $s2, $zero, 0x13
    L_29bee8:
        r.ra = 0x29bef0u;                                        // 29bee8 jal func_2B68D0
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(20); STORE_F(21); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2b68d0u, 0x29bee8u, 0x29bef0u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); LOAD_F(6); LOAD_F(20); LOAD_F(21); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_29bef0:
        t = neg64(r.v0);                                         // 29bef0 bltz $v0, . + 4 + (0x5 << 2)
        r.v1 = srl32(r.v0, 1);                                   // 29bef4 srl $v1, $v0, 1
        if (t) goto L_29bf08;
        r.f0 = floatOf(lo32(r.v0));                              // 29bef8 mtc1 $v0, $f0
        r.f0 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f0))); // 29befc cvt.s.w $f0, $f0
        // 29bf00 b . + 4 + (0x7 << 2)
        r.f0 = FPU_MUL_S(r.f0, r.f21);                           // 29bf04 mul.s $f0, $f0, $f21
        goto L_29bf20;
    L_29bf08:
        r.v0 = r.v0 & 0x1u;                                      // 29bf08 andi $v0, $v0, 0x1
        r.v0 = r.v0 | r.v1;                                      // 29bf0c or $v0, $v0, $v1
        r.f0 = floatOf(lo32(r.v0));                              // 29bf10 mtc1 $v0, $f0
        r.f0 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f0))); // 29bf14 cvt.s.w $f0, $f0
        r.f0 = FPU_ADD_S(r.f0, r.f0);                            // 29bf18 add.s $f0, $f0, $f0
        r.f0 = FPU_MUL_S(r.f0, r.f21);                           // 29bf1c mul.s $f0, $f0, $f21
    L_29bf20:
        r.s2 = addiu(r.s2, -1);                                  // 29bf20 addiu $s2, $s2, -0x1
        r.f0 = FPU_MUL_S(r.f0, r.f20);                           // 29bf24 mul.s $f0, $f0, $f20
        SWC1(lo32(r.s0), r.f0);                                  // 29bf28 swc1 $f0, 0x0($s0)
        t = !neg64(r.s2);                                        // 29bf2c bgez $s2, . + 4 + (-0x12 << 2)
        r.s0 = addiu(r.s0, 4);                                   // 29bf30 addiu $s0, $s0, 0x4
        if (t)
        {
            if (loopCheckpoint(ctx, runtime, 0x29bee8u)) { STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(s0, 16); STORE_GPR(s2, 18); STORE_F(0); return; }
            goto L_29bee8;
        }
        // 29bf34 b . + 4 + (0x3B << 2)
        r.a1 = LW(lo32(r.gp) - 0x4d10u);                         // 29bf38 lw $a1, -0x4D10($gp)
        goto L_29c024;
    L_29bf3c:
        r.f6 = LWC1(lo32(r.gp) - 0x4b98u);                       // 29bf3c lwc1 $f6, -0x4B98($gp)
        r.at = sext32(0x42700000u);                              // 29bf40 lui $at, 0x4270
        r.f0 = floatOf(lo32(r.at));                              // 29bf44 mtc1 $at, $f0
        r.f1 = LWC1(lo32(r.s0) + 0xcu);                          // 29bf48 lwc1 $f1, 0xC($s0)
        r.f0 = divS(r.f6, r.f0, r.fcr31);                        // 29bf54 div.s $f0, $f6, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f1)); // 29bf58 c.lt.s $f0, $f1
        if ((r.fcr31 & kCondition) != 0u)                        // 29bf60 bc1tl . + 4 + (0x7 << 2)
        {
            r.f5 = LWC1(lo32(r.s0) + 0x3acu);                        // 29bf64 lwc1 $f5, 0x3AC($s0)
            goto L_29bf80;
        }
        r.v0 = LW(lo32(r.s0) + 0x30u);                           // 29bf68 lw $v0, 0x30($s0)
        r.v1 = addiu(r.v0, -1);                                  // 29bf6c addiu $v1, $v0, -0x1
        r.v0 = r.v0 & r.v1;                                      // 29bf70 and $v0, $v0, $v1
        t = r.v0 != 0u;                                          // 29bf74 bnez $v0, . + 4 + (0x30 << 2)
        r.a1 = LW(lo32(r.gp) - 0x4d10u);                         // 29bf78 lw $a1, -0x4D10($gp)
        if (t) goto L_29c038;
        r.f5 = LWC1(lo32(r.s0) + 0x3acu);                        // 29bf7c lwc1 $f5, 0x3AC($s0)
    L_29bf80:
        r.s1 = addiu(r.s2, 1);                                   // 29bf80 addiu $s1, $s2, 0x1
        r.f3 = LWC1(lo32(r.s0) + 0x3b0u);                        // 29bf84 lwc1 $f3, 0x3B0($s0)
        r.f4 = LWC1(lo32(r.s0) + 0x3b4u);                        // 29bf88 lwc1 $f4, 0x3B4($s0)
        r.f5 = FPU_MUL_S(r.f5, r.f6);                            // 29bf8c mul.s $f5, $f5, $f6
        r.f3 = FPU_MUL_S(r.f3, r.f6);                            // 29bf90 mul.s $f3, $f3, $f6
        r.f2 = LWC1(lo32(r.s0) + 0x3a0u);                        // 29bf94 lwc1 $f2, 0x3A0($s0)
        r.f4 = FPU_MUL_S(r.f4, r.f6);                            // 29bf98 mul.s $f4, $f4, $f6
        r.f0 = LWC1(lo32(r.s0) + 0x3a4u);                        // 29bf9c lwc1 $f0, 0x3A4($s0)
        r.f1 = LWC1(lo32(r.s0) + 0x3a8u);                        // 29bfa0 lwc1 $f1, 0x3A8($s0)
        r.f2 = FPU_ADD_S(r.f2, r.f5);                            // 29bfa4 add.s $f2, $f2, $f5
        r.f0 = FPU_ADD_S(r.f0, r.f3);                            // 29bfa8 add.s $f0, $f0, $f3
        r.f1 = FPU_ADD_S(r.f1, r.f4);                            // 29bfac add.s $f1, $f1, $f4
        SWC1(lo32(r.s0) + 0x3a0u, r.f2);                         // 29bfb0 swc1 $f2, 0x3A0($s0)
        SWC1(lo32(r.s0) + 0x3a4u, r.f0);                         // 29bfb4 swc1 $f0, 0x3A4($s0)
        SWC1(lo32(r.s0) + 0x3a8u, r.f1);                         // 29bfb8 swc1 $f1, 0x3A8($s0)
        // 29bfbc b . + 4 + (0x1F << 2)
        r.a1 = LW(lo32(r.gp) - 0x4d10u);                         // 29bfc0 lw $a1, -0x4D10($gp)
        goto L_29c03c;
    L_29bfc4:
        r.a0 = r.s0;                                             // 29bfc4 daddu $a0, $s0, $zero
        r.ra = 0x29bfd0u;                                        // 29bfc8 jal func_29AE88
        r.s1 = addiu(r.s2, 1);                                   // 29bfcc addiu $s1, $s2, 0x1
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x29ae88u, 0x29bfc8u, 0x29bfd0u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a2, 6); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_29bfd0:
        // 29bfd0 b . + 4 + (0x14 << 2)
        r.a1 = LW(lo32(r.gp) - 0x4d10u);                         // 29bfd4 lw $a1, -0x4D10($gp)
        goto L_29c024;
    L_29bfd8:
        r.a0 = r.s0;                                             // 29bfd8 daddu $a0, $s0, $zero
        r.ra = 0x29bfe4u;                                        // 29bfdc jal func_29B298
        r.s1 = addiu(r.s2, 1);                                   // 29bfe0 addiu $s1, $s2, 0x1
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x29b298u, 0x29bfdcu, 0x29bfe4u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a2, 6); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_29bfe4:
        // 29bfe4 b . + 4 + (0xF << 2)
        r.a1 = LW(lo32(r.gp) - 0x4d10u);                         // 29bfe8 lw $a1, -0x4D10($gp)
        goto L_29c024;
    L_29bfec:
        r.a0 = r.s0;                                             // 29bfec daddu $a0, $s0, $zero
        r.ra = 0x29bff8u;                                        // 29bff0 jal func_29B290
        r.s1 = addiu(r.s2, 1);                                   // 29bff4 addiu $s1, $s2, 0x1
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x29b290u, 0x29bff0u, 0x29bff8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a2, 6); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_29bff8:
        // 29bff8 b . + 4 + (0xA << 2)
        r.a1 = LW(lo32(r.gp) - 0x4d10u);                         // 29bffc lw $a1, -0x4D10($gp)
        goto L_29c024;
    L_29c000:
        r.a0 = r.s0;                                             // 29c000 daddu $a0, $s0, $zero
        r.ra = 0x29c00cu;                                        // 29c004 jal func_29B410
        r.s1 = addiu(r.s2, 1);                                   // 29c008 addiu $s1, $s2, 0x1
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x29b410u, 0x29c004u, 0x29c00cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a2, 6); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_29c00c:
        // 29c00c b . + 4 + (0x5 << 2)
        r.a1 = LW(lo32(r.gp) - 0x4d10u);                         // 29c010 lw $a1, -0x4D10($gp)
        goto L_29c024;
    L_29c014:
        r.ra = 0x29c01cu;                                        // 29c014 jal func_29B890
        r.a0 = r.s0;                                             // 29c018 daddu $a0, $s0, $zero
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x29b890u, 0x29c014u, 0x29c01cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a2, 6); LOAD_GPR(s0, 16); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(4); LOAD_F(5); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_29c01c:
        r.s1 = addiu(r.s2, 1);                                   // 29c01c addiu $s1, $s2, 0x1
    L_29c020:
        r.a1 = LW(lo32(r.gp) - 0x4d10u);                         // 29c020 lw $a1, -0x4D10($gp)
    L_29c024:
        // 29c024 b . + 4 + (0x5 << 2)
        r.f6 = LWC1(lo32(r.gp) - 0x4b98u);                       // 29c028 lwc1 $f6, -0x4B98($gp)
        goto L_29c03c;
    L_29c02c:
        r.s1 = addiu(r.s2, 1);                                   // 29c02c addiu $s1, $s2, 0x1
    L_29c030:
        // 29c030 b . + 4 + (0x2 << 2)
        r.a1 = LW(lo32(r.gp) - 0x4d10u);                         // 29c034 lw $a1, -0x4D10($gp)
        goto L_29c03c;
    L_29c038:
        r.s1 = addiu(r.s2, 1);                                   // 29c038 addiu $s1, $s2, 0x1
    L_29c03c:
        r.s2 = r.s1;                                             // 29c03c daddu $s2, $s1, $zero
        r.v0 = slti(r.s2, 100);                                  // 29c040 slti $v0, $s2, 0x64
        if (r.v0 != 0u)                                          // 29c044 bnel $v0, $zero, . + 4 + (-0xEC << 2)
        {
            r.v0 = addiu(0u, 6048);                                  // 29c048 addiu $v0, $zero, 0x17A0
            if (loopCheckpoint(ctx, runtime, 0x29bc98u)) { STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi; return; }
            goto L_29bc98;
        }
        r.ra = READ64(lo32(r.sp) + 0x50u);                       // 29c04c ld $ra, 0x50($sp)
        r.s4 = READ64(lo32(r.sp) + 0x40u);                       // 29c050 ld $s4, 0x40($sp)
        r.s3 = READ64(lo32(r.sp) + 0x30u);                       // 29c054 ld $s3, 0x30($sp)
        r.s2 = READ64(lo32(r.sp) + 0x20u);                       // 29c058 ld $s2, 0x20($sp)
        r.s1 = READ64(lo32(r.sp) + 0x10u);                       // 29c05c ld $s1, 0x10($sp)
        r.s0 = READ64(lo32(r.sp));                               // 29c060 ld $s0, 0x0($sp)
        r.f21 = LWC1(lo32(r.sp) + 0x68u);                        // 29c064 lwc1 $f21, 0x68($sp)
        r.f20 = LWC1(lo32(r.sp) + 0x60u);                        // 29c068 lwc1 $f20, 0x60($sp)
        jt = lo32(r.ra);                                         // 29c06c jr $ra
        r.sp = addiu(r.sp, 112);                                 // 29c070 addiu $sp, $sp, 0x70
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); STORE_F(4); STORE_F(5); STORE_F(6); STORE_F(20); STORE_F(21); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        ctx->pc = jt;
        return;
    }

    // ---- findNextPad (0x2bf680)
    //
    // findNextPad(route): a character's next pad toward its goal, finding a
    // new hall route (hallrouteCalc) or pad route (routeCalc) when needed.

    struct FindNextPadRegs
    {
        uint64_t v0, v1, a0, a1, a2, a3, t0, t1, t2, s0, s1, gp, sp, ra;
        uint64_t lo, hi;
    };

    void nativeFindNextPad(G_ARGS)
    {
        FindNextPadRegs r;
        bool t;
        uint32_t jt;
        (void)t;
        (void)jt;
        LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t2, 10); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); LOAD_GPR(ra, 31); r.lo = ctx->lo; r.hi = ctx->hi;
        r.sp = addiu(r.sp, -48);                                 // 2bf680 addiu $sp, $sp, -0x30
        WRITE64(lo32(r.sp), r.s0);                               // 2bf684 sd $s0, 0x0($sp)
        WRITE64(lo32(r.sp) + 0x20u, r.ra);                       // 2bf688 sd $ra, 0x20($sp)
        r.s0 = r.a0;                                             // 2bf68c daddu $s0, $a0, $zero
        WRITE64(lo32(r.sp) + 0x10u, r.s1);                       // 2bf690 sd $s1, 0x10($sp)
        r.a2 = LW(lo32(r.s0) + 0x4u);                            // 2bf694 lw $a2, 0x4($s0)
        r.t1 = LW(lo32(r.s0));                                   // 2bf698 lw $t1, 0x0($s0)
        if (r.t1 == r.a2)                                        // 2bf69c beql $t1, $a2, . + 4 + (0x4 << 2)
        {
            WRITE32(lo32(r.s0) + 0x7dcu, lo32(0u));                  // 2bf6a0 sw $zero, 0x7DC($s0)
            goto L_2bf6b0;
        }
        t = !neg64(r.a2);                                        // 2bf6a4 bgez $a2, . + 4 + (0x5 << 2)
        r.v0 = addiu(0u, -1);                                    // 2bf6a8 addiu $v0, $zero, -0x1
        if (t) goto L_2bf6bc;
        WRITE32(lo32(r.s0) + 0x7dcu, lo32(0u));                  // 2bf6ac sw $zero, 0x7DC($s0)
    L_2bf6b0:
        r.v0 = addiu(0u, -1);                                    // 2bf6b0 addiu $v0, $zero, -0x1
        // 2bf6b4 b . + 4 + (0x58 << 2)
        WRITE32(lo32(r.s0) + 0x3f0u, lo32(0u));                  // 2bf6b8 sw $zero, 0x3F0($s0)
        goto L_2bf818;
    L_2bf6bc:
        if (r.t1 != r.v0)                                        // 2bf6bc bnel $t1, $v0, . + 4 + (0x5 << 2)
        {
            r.v1 = LW(lo32(r.s0) + 0x3f0u);                          // 2bf6c0 lw $v1, 0x3F0($s0)
            goto L_2bf6d4;
        }
        WRITE32(lo32(r.s0) + 0x7dcu, lo32(0u));                  // 2bf6c4 sw $zero, 0x7DC($s0)
        r.v0 = addiu(0u, -2);                                    // 2bf6c8 addiu $v0, $zero, -0x2
        // 2bf6cc b . + 4 + (0x52 << 2)
        WRITE32(lo32(r.s0) + 0x3f0u, lo32(0u));                  // 2bf6d0 sw $zero, 0x3F0($s0)
        goto L_2bf818;
    L_2bf6d4:
        t = r.v1 != 0u;                                          // 2bf6d4 bnez $v1, . + 4 + (0x45 << 2)
        r.s1 = addiu(r.s0, 8);                                   // 2bf6d8 addiu $s1, $s0, 0x8
        if (t) goto L_2bf7ec;
        r.v0 = LW(lo32(r.s0) + 0x7dcu);                          // 2bf6dc lw $v0, 0x7DC($s0)
        t = r.v0 != 0u;                                          // 2bf6e0 bnez $v0, . + 4 + (0x1D << 2)
        r.a0 = LW(lo32(r.gp) - 0x5d14u);                         // 2bf6e4 lw $a0, -0x5D14($gp)
        if (t) goto L_2bf758;
        r.v1 = addiu(0u, 28);                                    // 2bf6e8 addiu $v1, $zero, 0x1C
        r.v0 = mult(r.t1, r.v1, r.lo, r.hi);                     // 2bf6ec mult $v0, $t1, $v1
        r.a1 = mult(r.a2, r.v1, r.lo, r.hi);                     // 2bf6f0 mult $a1, $a2, $v1
        r.v0 = addu(r.v0, r.a0);                                 // 2bf6f4 addu $v0, $v0, $a0
        r.v1 = addu(r.a1, r.a0);                                 // 2bf6f8 addu $v1, $a1, $a0
        r.a1 = LH(lo32(r.v0) + 0x8u);                            // 2bf6fc lh $a1, 0x8($v0)
        r.a0 = LH(lo32(r.v1) + 0x8u);                            // 2bf700 lh $a0, 0x8($v1)
        t = r.a1 == r.a0;                                        // 2bf704 beq $a1, $a0, . + 4 + (0x9 << 2)
        r.a1 = r.a2;                                             // 2bf708 daddu $a1, $a2, $zero
        if (t) goto L_2bf72c;
        r.a0 = r.t1;                                             // 2bf70c daddu $a0, $t1, $zero
        r.a2 = addiu(r.s0, 1012);                                // 2bf710 addiu $a2, $s0, 0x3F4
        r.ra = 0x2bf71cu;                                        // 2bf714 jal func_2663E8
        r.a3 = addiu(0u, 250);                                   // 2bf718 addiu $a3, $zero, 0xFA
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t1, 9); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(sp, 29); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x2663e8u, 0x2bf714u, 0x2bf71cu)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(a1, 5); LOAD_GPR(a2, 6); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(t1, 9); LOAD_GPR(t2, 10); LOAD_GPR(s0, 16); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.lo = ctx->lo; r.hi = ctx->hi;
    L_2bf71c:
        t = r.v0 != 0u;                                          // 2bf71c bnez $v0, . + 4 + (0xB << 2)
        WRITE32(lo32(r.s0) + 0x7dcu, lo32(r.v0));                // 2bf720 sw $v0, 0x7DC($s0)
        if (t) goto L_2bf74c;
        // 2bf724 b . + 4 + (0x3C << 2)
        r.v0 = addiu(0u, -2);                                    // 2bf728 addiu $v0, $zero, -0x2
        goto L_2bf818;
    L_2bf72c:
        r.a0 = r.t1;                                             // 2bf72c daddu $a0, $t1, $zero
        r.a2 = r.s1;                                             // 2bf730 daddu $a2, $s1, $zero
        r.ra = 0x2bf73cu;                                        // 2bf734 jal func_266A40
        r.a3 = addiu(0u, 250);                                   // 2bf738 addiu $a3, $zero, 0xFA
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t1, 9); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(sp, 29); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x266a40u, 0x2bf734u, 0x2bf73cu)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(a1, 5); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.lo = ctx->lo; r.hi = ctx->hi;
    L_2bf73c:
        r.t1 = LW(lo32(r.s0));                                   // 2bf73c lw $t1, 0x0($s0)
        r.v1 = r.v0;                                             // 2bf740 daddu $v1, $v0, $zero
        // 2bf744 b . + 4 + (0x4 << 2)
        WRITE32(lo32(r.s0) + 0x3f0u, lo32(r.v0));                // 2bf748 sw $v0, 0x3F0($s0)
        goto L_2bf758;
    L_2bf74c:
        r.t1 = LW(lo32(r.s0));                                   // 2bf74c lw $t1, 0x0($s0)
        r.s1 = addiu(r.s0, 8);                                   // 2bf750 addiu $s1, $s0, 0x8
        r.v1 = LW(lo32(r.s0) + 0x3f0u);                          // 2bf754 lw $v1, 0x3F0($s0)
    L_2bf758:
        t = r.v1 != 0u;                                          // 2bf758 bnez $v1, . + 4 + (0x25 << 2)
        r.t2 = LW(lo32(r.gp) - 0x5d10u);                         // 2bf75c lw $t2, -0x5D10($gp)
        if (t) goto L_2bf7f0;
        r.a2 = addiu(0u, 28);                                    // 2bf760 addiu $a2, $zero, 0x1C
        r.t0 = LW(lo32(r.gp) - 0x5d14u);                         // 2bf764 lw $t0, -0x5D14($gp)
        r.v1 = mult(r.t1, r.a2, r.lo, r.hi);                     // 2bf768 mult $v1, $t1, $a2
        r.a0 = LW(lo32(r.s0) + 0x7dcu);                          // 2bf76c lw $a0, 0x7DC($s0)
        r.a1 = addiu(0u, 20);                                    // 2bf770 addiu $a1, $zero, 0x14
        r.a0 = addiu(r.a0, -1);                                  // 2bf774 addiu $a0, $a0, -0x1
        r.v0 = sll32(r.a0, 2);                                   // 2bf778 sll $v0, $a0, 2
        r.v1 = addu(r.v1, r.t0);                                 // 2bf77c addu $v1, $v1, $t0
        r.v0 = addu(r.s0, r.v0);                                 // 2bf780 addu $v0, $s0, $v0
        r.a3 = LH(lo32(r.v1) + 0x8u);                            // 2bf784 lh $a3, 0x8($v1)
        WRITE32(lo32(r.s0) + 0x7dcu, lo32(r.a0));                // 2bf788 sw $a0, 0x7DC($s0)
        r.v1 = LW(lo32(r.v0) + 0x3f4u);                          // 2bf78c lw $v1, 0x3F4($v0)
        r.a1 = mult(r.v1, r.a1, r.lo, r.hi);                     // 2bf790 mult $a1, $v1, $a1
        WRITE32(lo32(r.s0) + 0x8u, lo32(r.v1));                  // 2bf794 sw $v1, 0x8($s0)
        r.a1 = addu(r.a1, r.t2);                                 // 2bf798 addu $a1, $a1, $t2
        r.v1 = LW(lo32(r.a1) + 0x4u);                            // 2bf79c lw $v1, 0x4($a1)
        r.v0 = mult(r.v1, r.a2, r.lo, r.hi);                     // 2bf7a0 mult $v0, $v1, $a2
        r.a2 = addu(r.v0, r.t0);                                 // 2bf7a4 addu $a2, $v0, $t0
        r.v0 = LH(lo32(r.a2) + 0x8u);                            // 2bf7a8 lh $v0, 0x8($a2)
        if (r.v0 != r.a3)                                        // 2bf7ac bnel $v0, $a3, . + 4 + (0x1 << 2)
        {
            r.v1 = LW(lo32(r.a1) + 0x8u);                            // 2bf7b0 lw $v1, 0x8($a1)
            goto L_2bf7b4;
        }
    L_2bf7b4:
        t = r.t1 != r.v1;                                        // 2bf7b4 bne $t1, $v1, . + 4 + (0x5 << 2)
        r.a0 = r.t1;                                             // 2bf7b8 daddu $a0, $t1, $zero
        if (t) goto L_2bf7cc;
        r.v0 = addiu(0u, 1);                                     // 2bf7bc addiu $v0, $zero, 0x1
        r.v1 = addiu(0u, 1);                                     // 2bf7c0 addiu $v1, $zero, 0x1
        // 2bf7c4 b . + 4 + (0xA << 2)
        WRITE32(lo32(r.s0) + 0x3f0u, lo32(r.v0));                // 2bf7c8 sw $v0, 0x3F0($s0)
        goto L_2bf7f0;
    L_2bf7cc:
        r.a1 = r.v1;                                             // 2bf7cc daddu $a1, $v1, $zero
        r.a2 = addiu(r.s0, 12);                                  // 2bf7d0 addiu $a2, $s0, 0xC
        r.ra = 0x2bf7dcu;                                        // 2bf7d4 jal func_266A40
        r.a3 = addiu(0u, 99);                                    // 2bf7d8 addiu $a3, $zero, 0x63
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(sp, 29); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x266a40u, 0x2bf7d4u, 0x2bf7dcu)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(a1, 5); LOAD_GPR(a3, 7); LOAD_GPR(t0, 8); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.lo = ctx->lo; r.hi = ctx->hi;
    L_2bf7dc:
        r.v0 = addiu(r.v0, 1);                                   // 2bf7dc addiu $v0, $v0, 0x1
        r.t1 = LW(lo32(r.s0));                                   // 2bf7e0 lw $t1, 0x0($s0)
        r.v1 = r.v0;                                             // 2bf7e4 daddu $v1, $v0, $zero
        WRITE32(lo32(r.s0) + 0x3f0u, lo32(r.v0));                // 2bf7e8 sw $v0, 0x3F0($s0)
    L_2bf7ec:
        r.t2 = LW(lo32(r.gp) - 0x5d10u);                         // 2bf7ec lw $t2, -0x5D10($gp)
    L_2bf7f0:
        r.v0 = addiu(r.v1, -1);                                  // 2bf7f0 addiu $v0, $v1, -0x1
        r.a0 = addiu(0u, 20);                                    // 2bf7f4 addiu $a0, $zero, 0x14
        r.v0 = sll32(r.v0, 2);                                   // 2bf7f8 sll $v0, $v0, 2
        r.v0 = addu(r.s1, r.v0);                                 // 2bf7fc addu $v0, $s1, $v0
        r.v1 = LW(lo32(r.v0));                                   // 2bf800 lw $v1, 0x0($v0)
        r.v0 = mult(r.v1, r.a0, r.lo, r.hi);                     // 2bf804 mult $v0, $v1, $a0
        r.a2 = addu(r.v0, r.t2);                                 // 2bf808 addu $a2, $v0, $t2
        r.v0 = LW(lo32(r.a2) + 0x4u);                            // 2bf80c lw $v0, 0x4($a2)
        if (r.v0 == r.t1)                                        // 2bf810 beql $v0, $t1, . + 4 + (0x1 << 2)
        {
            r.v0 = LW(lo32(r.a2) + 0x8u);                            // 2bf814 lw $v0, 0x8($a2)
            goto L_2bf818;
        }
    L_2bf818:
        r.ra = READ64(lo32(r.sp) + 0x20u);                       // 2bf818 ld $ra, 0x20($sp)
        r.s1 = READ64(lo32(r.sp) + 0x10u);                       // 2bf81c ld $s1, 0x10($sp)
        r.s0 = READ64(lo32(r.sp));                               // 2bf820 ld $s0, 0x0($sp)
        jt = lo32(r.ra);                                         // 2bf824 jr $ra
        r.sp = addiu(r.sp, 48);                                  // 2bf828 addiu $sp, $sp, 0x30
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(t1, 9); STORE_GPR(t2, 10); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(sp, 29); STORE_GPR(ra, 31); ctx->lo = r.lo; ctx->hi = r.hi;
        ctx->pc = jt;
        return;
    }

    // ---- setAnimation (0x2bd008)
    //
    // setAnimation(chr): a character's next animation from its state and
    // the animations it is playing (zombies and TimeSplitters through their
    // own functions), set with setAnim.

    struct SetAnimationRegs
    {
        uint64_t at, v0, v1, a0, a1, a2, a3, t0, s0, s1, s2, s3, s4, gp, sp, ra;
        float f0, f1, f2, f3, f12, f13, f20, f21;
        uint32_t fcr31;
        uint64_t lo, hi;
    };

    void nativeSetAnimation(G_ARGS)
    {
        SetAnimationRegs r;
        bool t;
        uint32_t jt;
        (void)t;
        (void)jt;
        LOAD_GPR(a0, 4); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(s3, 19); LOAD_GPR(s4, 20); LOAD_GPR(sp, 29); LOAD_GPR(ra, 31); LOAD_F(20); LOAD_F(21); r.fcr31 = ctx->fcr31;
        r.sp = addiu(r.sp, -128);                                // 2bd008 addiu $sp, $sp, -0x80
        WRITE64(lo32(r.sp) + 0x20u, r.s1);                       // 2bd00c sd $s1, 0x20($sp)
        WRITE64(lo32(r.sp) + 0x60u, r.ra);                       // 2bd010 sd $ra, 0x60($sp)
        r.s1 = r.a0;                                             // 2bd014 daddu $s1, $a0, $zero
        WRITE64(lo32(r.sp) + 0x50u, r.s4);                       // 2bd018 sd $s4, 0x50($sp)
        WRITE64(lo32(r.sp) + 0x40u, r.s3);                       // 2bd01c sd $s3, 0x40($sp)
        WRITE64(lo32(r.sp) + 0x10u, r.s0);                       // 2bd020 sd $s0, 0x10($sp)
        SWC1(lo32(r.sp) + 0x78u, r.f21);                         // 2bd024 swc1 $f21, 0x78($sp)
        SWC1(lo32(r.sp) + 0x70u, r.f20);                         // 2bd028 swc1 $f20, 0x70($sp)
        WRITE64(lo32(r.sp) + 0x30u, r.s2);                       // 2bd02c sd $s2, 0x30($sp)
        r.s2 = LW(lo32(r.s1) + 0x160u);                          // 2bd030 lw $s2, 0x160($s1)
        r.v1 = LW(lo32(r.s2) + 0xa94u);                          // 2bd034 lw $v1, 0xA94($s2)
        r.v0 = r.v1 & 0x200u;                                    // 2bd038 andi $v0, $v1, 0x200
        if (r.v0 == 0u)                                          // 2bd03c beql $v0, $zero, . + 4 + (0x12 << 2)
        {
            r.a0 = LW(lo32(r.s2) + 0x8u);                            // 2bd040 lw $a0, 0x8($s2)
            goto L_2bd088;
        }
        r.ra = 0x2bd04cu;                                        // 2bd044 jal func_215B00
        r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2bd048 lw $a0, 0x20($s1)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215b00u, 0x2bd044u, 0x2bd04cu)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(a0, 4); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29);
    L_2bd04c:
        t = r.v0 == 0u;                                          // 2bd04c beqz $v0, . + 4 + (0x4B0 << 2)
        r.v1 = sext32(0x330000u);                                // 2bd050 lui $v1, 0x33
        if (t) goto L_2be310;
        r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2bd054 lw $a0, 0x20($s1)
        r.v1 = addiu(r.v1, -21664);                              // 2bd058 addiu $v1, $v1, -0x54A0
        r.v0 = LW(lo32(r.a0) + 0x60u);                           // 2bd05c lw $v0, 0x60($a0)
        r.v0 = sll32(r.v0, 2);                                   // 2bd060 sll $v0, $v0, 2
        r.v0 = addu(r.v0, r.v1);                                 // 2bd064 addu $v0, $v0, $v1
        r.a0 = LW(lo32(r.v0));                                   // 2bd068 lw $a0, 0x0($v0)
        r.v1 = LW(lo32(r.a0) + 0xcu);                            // 2bd06c lw $v1, 0xC($a0)
        r.v1 = r.v1 & 0x1u;                                      // 2bd070 andi $v1, $v1, 0x1
        t = r.v1 == 0u;                                          // 2bd074 beqz $v1, . + 4 + (0x4A7 << 2)
        r.ra = READ64(lo32(r.sp) + 0x60u);                       // 2bd078 ld $ra, 0x60($sp)
        if (t) goto L_2be314;
        r.v0 = LW(lo32(r.s2) + 0xa98u);                          // 2bd07c lw $v0, 0xA98($s2)
        // 2bd080 b . + 4 + (0x4A4 << 2)
        WRITE32(lo32(r.s2) + 0xa94u, lo32(r.v0));                // 2bd084 sw $v0, 0xA94($s2)
        goto L_2be314;
    L_2bd088:
        r.v0 = addiu(0u, 1);                                     // 2bd088 addiu $v0, $zero, 0x1
        t = r.a0 != r.v0;                                        // 2bd08c bne $a0, $v0, . + 4 + (0x5 << 2)
        r.v0 = r.v1 & 0x1020u;                                   // 2bd090 andi $v0, $v1, 0x1020
        if (t) goto L_2bd0a4;
        r.ra = 0x2bd09cu;                                        // 2bd094 jal func_2BE338
        r.a0 = r.s1;                                             // 2bd098 daddu $a0, $s1, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2be338u, 0x2bd094u, 0x2bd09cu)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(sp, 29);
    L_2bd09c:
        // 2bd09c b . + 4 + (0x49D << 2)
        r.ra = READ64(lo32(r.sp) + 0x60u);                       // 2bd0a0 ld $ra, 0x60($sp)
        goto L_2be314;
    L_2bd0a4:
        t = r.v0 != 0u;                                          // 2bd0a4 bnez $v0, . + 4 + (0x49B << 2)
        r.ra = READ64(lo32(r.sp) + 0x60u);                       // 2bd0a8 ld $ra, 0x60($sp)
        if (t) goto L_2be314;
        r.s0 = addiu(0u, 2);                                     // 2bd0ac addiu $s0, $zero, 0x2
        t = r.a0 != r.s0;                                        // 2bd0b0 bne $a0, $s0, . + 4 + (0x5 << 2)
        r.v0 = r.v1 & 0x100u;                                    // 2bd0b4 andi $v0, $v1, 0x100
        if (t) goto L_2bd0c8;
        r.ra = 0x2bd0c0u;                                        // 2bd0b8 jal func_2BECE0
        r.a0 = r.s1;                                             // 2bd0bc daddu $a0, $s1, $zero
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2bece0u, 0x2bd0b8u, 0x2bd0c0u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(sp, 29);
    L_2bd0c0:
        // 2bd0c0 b . + 4 + (0x494 << 2)
        r.ra = READ64(lo32(r.sp) + 0x60u);                       // 2bd0c4 ld $ra, 0x60($sp)
        goto L_2be314;
    L_2bd0c8:
        t = r.v0 == 0u;                                          // 2bd0c8 beqz $v0, . + 4 + (0x9 << 2)
        r.v0 = r.v1 & 0x400u;                                    // 2bd0cc andi $v0, $v1, 0x400
        if (t) goto L_2bd0f0;
        r.ra = 0x2bd0d8u;                                        // 2bd0d0 jal func_215B00
        r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2bd0d4 lw $a0, 0x20($s1)
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215b00u, 0x2bd0d0u, 0x2bd0d8u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(a0, 4); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29);
    L_2bd0d8:
        t = r.v0 == 0u;                                          // 2bd0d8 beqz $v0, . + 4 + (0x48D << 2)
        r.v1 = addiu(0u, -257);                                  // 2bd0dc addiu $v1, $zero, -0x101
        if (t) goto L_2be310;
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bd0e0 lw $v0, 0xA94($s2)
        r.v0 = r.v0 & r.v1;                                      // 2bd0e4 and $v0, $v0, $v1
        // 2bd0e8 b . + 4 + (0x489 << 2)
        WRITE32(lo32(r.s2) + 0xa94u, lo32(r.v0));                // 2bd0ec sw $v0, 0xA94($s2)
        goto L_2be310;
    L_2bd0f0:
        t = r.v0 == 0u;                                          // 2bd0f0 beqz $v0, . + 4 + (0x44 << 2)
        r.a0 = r.s1;                                             // 2bd0f4 daddu $a0, $s1, $zero
        if (t) goto L_2bd204;
        r.ra = 0x2bd100u;                                        // 2bd0f8 jal func_215820
        r.a1 = addiu(0u, 450);                                   // 2bd0fc addiu $a1, $zero, 0x1C2
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd0f8u, 0x2bd100u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd100:
        if (r.v0 != 0u)                                          // 2bd100 bnel $v0, $zero, . + 4 + (0x3F3 << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bd104 lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.a0 = r.s1;                                             // 2bd108 daddu $a0, $s1, $zero
        r.ra = 0x2bd114u;                                        // 2bd10c jal func_215820
        r.a1 = addiu(0u, 452);                                   // 2bd110 addiu $a1, $zero, 0x1C4
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd10cu, 0x2bd114u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd114:
        if (r.v0 != 0u)                                          // 2bd114 bnel $v0, $zero, . + 4 + (0x3EE << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bd118 lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.a0 = r.s1;                                             // 2bd11c daddu $a0, $s1, $zero
        r.ra = 0x2bd128u;                                        // 2bd120 jal func_215820
        r.a1 = addiu(0u, 453);                                   // 2bd124 addiu $a1, $zero, 0x1C5
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd120u, 0x2bd128u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd128:
        if (r.v0 != 0u)                                          // 2bd128 bnel $v0, $zero, . + 4 + (0x3E9 << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bd12c lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.a0 = r.s1;                                             // 2bd130 daddu $a0, $s1, $zero
        r.ra = 0x2bd13cu;                                        // 2bd134 jal func_215820
        r.a1 = addiu(0u, 454);                                   // 2bd138 addiu $a1, $zero, 0x1C6
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd134u, 0x2bd13cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd13c:
        if (r.v0 != 0u)                                          // 2bd13c bnel $v0, $zero, . + 4 + (0x3E4 << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bd140 lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.v0 = LW(lo32(r.s2) + 0x1b8u);                          // 2bd144 lw $v0, 0x1B8($s2)
        t = r.v0 == 0u;                                          // 2bd148 beqz $v0, . + 4 + (0x26 << 2)
        r.a0 = r.s1;                                             // 2bd14c daddu $a0, $s1, $zero
        if (t) goto L_2bd1e4;
        r.ra = 0x2bd158u;                                        // 2bd150 jal func_2B68D0
        STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2b68d0u, 0x2bd150u, 0x2bd158u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17); r.fcr31 = ctx->fcr31;
    L_2bd158:
        t = neg64(r.v0);                                         // 2bd158 bltz $v0, . + 4 + (0x4 << 2)
        r.v1 = srl32(r.v0, 1);                                   // 2bd15c srl $v1, $v0, 1
        if (t) goto L_2bd16c;
        r.f2 = floatOf(lo32(r.v0));                              // 2bd160 mtc1 $v0, $f2
        // 2bd164 b . + 4 + (0x6 << 2)
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 2bd168 cvt.s.w $f2, $f2
        goto L_2bd180;
    L_2bd16c:
        r.v0 = r.v0 & 0x1u;                                      // 2bd16c andi $v0, $v0, 0x1
        r.v0 = r.v0 | r.v1;                                      // 2bd170 or $v0, $v0, $v1
        r.f2 = floatOf(lo32(r.v0));                              // 2bd174 mtc1 $v0, $f2
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 2bd178 cvt.s.w $f2, $f2
        r.f2 = FPU_ADD_S(r.f2, r.f2);                            // 2bd17c add.s $f2, $f2, $f2
    L_2bd180:
        r.at = sext32(0x2f800000u);                              // 2bd180 lui $at, 0x2F80
        r.f0 = floatOf(lo32(r.at));                              // 2bd184 mtc1 $at, $f0
        r.at = sext32(0x3f000000u);                              // 2bd188 lui $at, 0x3F00
        r.f1 = floatOf(lo32(r.at));                              // 2bd18c mtc1 $at, $f1
        r.f0 = FPU_MUL_S(r.f2, r.f0);                            // 2bd190 mul.s $f0, $f2, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f1)); // 2bd194 c.lt.s $f0, $f1
        t = (r.fcr31 & kCondition) == 0u;                        // 2bd19c bc1f . + 4 + (0x9 << 2)
        r.a0 = r.s1;                                             // 2bd1a0 daddu $a0, $s1, $zero
        if (t) goto L_2bd1c4;
        r.at = sext32(0x3e800000u);                              // 2bd1a4 lui $at, 0x3E80
        r.f12 = floatOf(lo32(r.at));                             // 2bd1a8 mtc1 $at, $f12
        r.at = sext32(0x3f800000u);                              // 2bd1ac lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd1b0 mtc1 $at, $f13
        r.ra = 0x2bd1bcu;                                        // 2bd1b4 jal func_214D68
        r.a1 = addiu(0u, 453);                                   // 2bd1b8 addiu $a1, $zero, 0x1C5
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(12); STORE_F(13); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x214d68u, 0x2bd1b4u, 0x2bd1bcu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd1bc:
        // 2bd1bc b . + 4 + (0x3C4 << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bd1c0 lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2bd1c4:
        r.at = sext32(0x3e800000u);                              // 2bd1c4 lui $at, 0x3E80
        r.f12 = floatOf(lo32(r.at));                             // 2bd1c8 mtc1 $at, $f12
        r.at = sext32(0x3f800000u);                              // 2bd1cc lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd1d0 mtc1 $at, $f13
        r.ra = 0x2bd1dcu;                                        // 2bd1d4 jal func_214D68
        r.a1 = addiu(0u, 454);                                   // 2bd1d8 addiu $a1, $zero, 0x1C6
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(12); STORE_F(13); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x214d68u, 0x2bd1d4u, 0x2bd1dcu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd1dc:
        // 2bd1dc b . + 4 + (0x3BC << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bd1e0 lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2bd1e4:
        r.at = sext32(0x3e800000u);                              // 2bd1e4 lui $at, 0x3E80
        r.f12 = floatOf(lo32(r.at));                             // 2bd1e8 mtc1 $at, $f12
        r.at = sext32(0x3f800000u);                              // 2bd1ec lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd1f0 mtc1 $at, $f13
        r.ra = 0x2bd1fcu;                                        // 2bd1f4 jal func_214D68
        r.a1 = addiu(0u, 452);                                   // 2bd1f8 addiu $a1, $zero, 0x1C4
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2bd1f4u, 0x2bd1fcu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd1fc:
        // 2bd1fc b . + 4 + (0x3B4 << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bd200 lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2bd204:
        r.v0 = r.v1 & 0x8u;                                      // 2bd204 andi $v0, $v1, 0x8
        t = r.v0 == 0u;                                          // 2bd208 beqz $v0, . + 4 + (0x20D << 2)
        r.v0 = r.v1 & 0x2u;                                      // 2bd20c andi $v0, $v1, 0x2
        if (t) goto L_2bda40;
        r.v0 = LW(lo32(r.s2) + 0xa98u);                          // 2bd210 lw $v0, 0xA98($s2)
        r.at = sext32(0x3e800000u);                              // 2bd214 lui $at, 0x3E80
        r.f20 = floatOf(lo32(r.at));                             // 2bd218 mtc1 $at, $f20
        r.v0 = r.v0 & 0x2u;                                      // 2bd21c andi $v0, $v0, 0x2
        t = r.v0 == 0u;                                          // 2bd220 beqz $v0, . + 4 + (0x2 << 2)
        r.f12 = LWC1(lo32(r.s1) + 0x50u);                        // 2bd224 lwc1 $f12, 0x50($s1)
        if (t) goto L_2bd22c;
        r.f20 = floatOf(lo32(0u));                               // 2bd228 mtc1 $zero, $f20
    L_2bd22c:
        r.ra = 0x2bd234u;                                        // 2bd22c jal func_284E38
        r.f13 = LWC1(lo32(r.s1) + 0x4cu);                        // 2bd230 lwc1 $f13, 0x4C($s1)
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13); STORE_F(20);
        if (!guestCall(G_PASS, 0x284e38u, 0x2bd22cu, 0x2bd234u)) return;
        LOAD_GPR(s1, 17); LOAD_F(0); r.fcr31 = ctx->fcr31;
    L_2bd234:
        r.f1 = FPU_MOV_S(r.f0);                                  // 2bd234 mov.s $f1, $f0
        r.at = sext32(0x42340000u);                              // 2bd238 lui $at, 0x4234
        r.f0 = floatOf(lo32(r.at));                              // 2bd23c mtc1 $at, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f1)); // 2bd240 c.lt.s $f0, $f1
        t = (r.fcr31 & kCondition) == 0u;                        // 2bd248 bc1f . + 4 + (0x31 << 2)
        r.a0 = r.s1;                                             // 2bd24c daddu $a0, $s1, $zero
        if (t) goto L_2bd310;
        r.ra = 0x2bd258u;                                        // 2bd250 jal func_215820
        r.a1 = addiu(0u, 12);                                    // 2bd254 addiu $a1, $zero, 0xC
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2bd250u, 0x2bd258u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd258:
        t = r.v0 != 0u;                                          // 2bd258 bnez $v0, . + 4 + (0x101 << 2)
        r.a0 = r.s1;                                             // 2bd25c daddu $a0, $s1, $zero
        if (t) goto L_2bd660;
        r.ra = 0x2bd268u;                                        // 2bd260 jal func_215820
        r.a1 = addiu(0u, 13);                                    // 2bd264 addiu $a1, $zero, 0xD
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd260u, 0x2bd268u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17);
    L_2bd268:
        t = r.v0 != 0u;                                          // 2bd268 bnez $v0, . + 4 + (0x5 << 2)
        r.a0 = r.s1;                                             // 2bd26c daddu $a0, $s1, $zero
        if (t) goto L_2bd280;
        r.ra = 0x2bd278u;                                        // 2bd270 jal func_215820
        r.a1 = addiu(0u, 123);                                   // 2bd274 addiu $a1, $zero, 0x7B
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd270u, 0x2bd278u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(20); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2bd278:
        t = r.v0 == 0u;                                          // 2bd278 beqz $v0, . + 4 + (0x19 << 2)
        r.a0 = r.s1;                                             // 2bd27c daddu $a0, $s1, $zero
        if (t) goto L_2bd2e0;
    L_2bd280:
        r.ra = 0x2bd288u;                                        // 2bd280 jal func_215A10
        r.a1 = addiu(0u, 13);                                    // 2bd284 addiu $a1, $zero, 0xD
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215a10u, 0x2bd280u, 0x2bd288u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17);
    L_2bd288:
        t = r.v0 == 0u;                                          // 2bd288 beqz $v0, . + 4 + (0x9 << 2)
        r.a0 = r.s1;                                             // 2bd28c daddu $a0, $s1, $zero
        if (t) goto L_2bd2b0;
        r.v0 = LW(lo32(r.s1) + 0x20u);                           // 2bd290 lw $v0, 0x20($s1)
        r.v1 = LW(lo32(r.v0) + 0x98u);                           // 2bd294 lw $v1, 0x98($v0)
        if (r.v1 == 0u) goto L_2bd2b0;                           // 2bd298 beqz $v1, . + 4 + (0x5 << 2)
        r.ra = 0x2bd2a8u;                                        // 2bd2a0 jal func_215A88
        r.a1 = addiu(0u, 13);                                    // 2bd2a4 addiu $a1, $zero, 0xD
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215a88u, 0x2bd2a0u, 0x2bd2a8u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(20); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2bd2a8:
        t = r.v0 == 0u;                                          // 2bd2a8 beqz $v0, . + 4 + (0xD << 2)
        r.a0 = r.s1;                                             // 2bd2ac daddu $a0, $s1, $zero
        if (t) goto L_2bd2e0;
    L_2bd2b0:
        r.ra = 0x2bd2b8u;                                        // 2bd2b0 jal func_215A10
        r.a1 = addiu(0u, 123);                                   // 2bd2b4 addiu $a1, $zero, 0x7B
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215a10u, 0x2bd2b0u, 0x2bd2b8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd2b8:
        t = r.v0 == 0u;                                          // 2bd2b8 beqz $v0, . + 4 + (0xE9 << 2)
        r.a0 = r.s1;                                             // 2bd2bc daddu $a0, $s1, $zero
        if (t) goto L_2bd660;
        r.v0 = LW(lo32(r.s1) + 0x20u);                           // 2bd2c0 lw $v0, 0x20($s1)
        r.v1 = LW(lo32(r.v0) + 0x98u);                           // 2bd2c4 lw $v1, 0x98($v0)
        if (r.v1 == 0u) goto L_2bd660;                           // 2bd2c8 beqz $v1, . + 4 + (0xE5 << 2)
        r.ra = 0x2bd2d8u;                                        // 2bd2d0 jal func_215A88
        r.a1 = addiu(0u, 123);                                   // 2bd2d4 addiu $a1, $zero, 0x7B
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215a88u, 0x2bd2d0u, 0x2bd2d8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2bd2d8:
        t = r.v0 != 0u;                                          // 2bd2d8 bnez $v0, . + 4 + (0xE1 << 2)
        r.a0 = r.s1;                                             // 2bd2dc daddu $a0, $s1, $zero
        if (t) goto L_2bd660;
    L_2bd2e0:
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bd2e0 lw $v0, 0xA94($s2)
        r.v0 = r.v0 & 0x4u;                                      // 2bd2e4 andi $v0, $v0, 0x4
        t = r.v0 == 0u;                                          // 2bd2e8 beqz $v0, . + 4 + (0x5 << 2)
        r.a0 = r.s1;                                             // 2bd2ec daddu $a0, $s1, $zero
        if (t) goto L_2bd300;
        r.at = sext32(0x3f800000u);                              // 2bd2f0 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd2f4 mtc1 $at, $f13
        // 2bd2f8 b . + 4 + (0xBB << 2)
        r.a1 = addiu(0u, 123);                                   // 2bd2fc addiu $a1, $zero, 0x7B
        goto L_2bd5e8;
    L_2bd300:
        r.at = sext32(0x3f800000u);                              // 2bd300 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd304 mtc1 $at, $f13
        // 2bd308 b . + 4 + (0xB7 << 2)
        r.a1 = addiu(0u, 13);                                    // 2bd30c addiu $a1, $zero, 0xD
        goto L_2bd5e8;
    L_2bd310:
        r.at = sext32(0xc2340000u);                              // 2bd310 lui $at, 0xC234
        r.f0 = floatOf(lo32(r.at));                              // 2bd314 mtc1 $at, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 2bd318 c.lt.s $f1, $f0
        if ((r.fcr31 & kCondition) == 0u)                        // 2bd320 bc1fl . + 4 + (0x31 << 2)
        {
            r.a0 = r.s1;                                             // 2bd324 daddu $a0, $s1, $zero
            goto L_2bd3e8;
        }
        r.ra = 0x2bd330u;                                        // 2bd328 jal func_215820
        r.a1 = addiu(0u, 13);                                    // 2bd32c addiu $a1, $zero, 0xD
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2bd328u, 0x2bd330u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd330:
        t = r.v0 != 0u;                                          // 2bd330 bnez $v0, . + 4 + (0xCB << 2)
        r.a0 = r.s1;                                             // 2bd334 daddu $a0, $s1, $zero
        if (t) goto L_2bd660;
        r.ra = 0x2bd340u;                                        // 2bd338 jal func_215820
        r.a1 = addiu(0u, 12);                                    // 2bd33c addiu $a1, $zero, 0xC
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd338u, 0x2bd340u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17);
    L_2bd340:
        t = r.v0 != 0u;                                          // 2bd340 bnez $v0, . + 4 + (0x5 << 2)
        r.a0 = r.s1;                                             // 2bd344 daddu $a0, $s1, $zero
        if (t) goto L_2bd358;
        r.ra = 0x2bd350u;                                        // 2bd348 jal func_215820
        r.a1 = addiu(0u, 122);                                   // 2bd34c addiu $a1, $zero, 0x7A
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd348u, 0x2bd350u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(20); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2bd350:
        t = r.v0 == 0u;                                          // 2bd350 beqz $v0, . + 4 + (0x19 << 2)
        r.a0 = r.s1;                                             // 2bd354 daddu $a0, $s1, $zero
        if (t) goto L_2bd3b8;
    L_2bd358:
        r.ra = 0x2bd360u;                                        // 2bd358 jal func_215A10
        r.a1 = addiu(0u, 12);                                    // 2bd35c addiu $a1, $zero, 0xC
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215a10u, 0x2bd358u, 0x2bd360u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17);
    L_2bd360:
        t = r.v0 == 0u;                                          // 2bd360 beqz $v0, . + 4 + (0x9 << 2)
        r.a0 = r.s1;                                             // 2bd364 daddu $a0, $s1, $zero
        if (t) goto L_2bd388;
        r.v0 = LW(lo32(r.s1) + 0x20u);                           // 2bd368 lw $v0, 0x20($s1)
        r.v1 = LW(lo32(r.v0) + 0x98u);                           // 2bd36c lw $v1, 0x98($v0)
        if (r.v1 == 0u) goto L_2bd388;                           // 2bd370 beqz $v1, . + 4 + (0x5 << 2)
        r.ra = 0x2bd380u;                                        // 2bd378 jal func_215A88
        r.a1 = addiu(0u, 12);                                    // 2bd37c addiu $a1, $zero, 0xC
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215a88u, 0x2bd378u, 0x2bd380u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(20); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2bd380:
        t = r.v0 == 0u;                                          // 2bd380 beqz $v0, . + 4 + (0xD << 2)
        r.a0 = r.s1;                                             // 2bd384 daddu $a0, $s1, $zero
        if (t) goto L_2bd3b8;
    L_2bd388:
        r.ra = 0x2bd390u;                                        // 2bd388 jal func_215A10
        r.a1 = addiu(0u, 122);                                   // 2bd38c addiu $a1, $zero, 0x7A
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215a10u, 0x2bd388u, 0x2bd390u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd390:
        t = r.v0 == 0u;                                          // 2bd390 beqz $v0, . + 4 + (0xB3 << 2)
        r.a0 = r.s1;                                             // 2bd394 daddu $a0, $s1, $zero
        if (t) goto L_2bd660;
        r.v0 = LW(lo32(r.s1) + 0x20u);                           // 2bd398 lw $v0, 0x20($s1)
        r.v1 = LW(lo32(r.v0) + 0x98u);                           // 2bd39c lw $v1, 0x98($v0)
        if (r.v1 == 0u) goto L_2bd660;                           // 2bd3a0 beqz $v1, . + 4 + (0xAF << 2)
        r.ra = 0x2bd3b0u;                                        // 2bd3a8 jal func_215A88
        r.a1 = addiu(0u, 122);                                   // 2bd3ac addiu $a1, $zero, 0x7A
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215a88u, 0x2bd3a8u, 0x2bd3b0u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2bd3b0:
        t = r.v0 != 0u;                                          // 2bd3b0 bnez $v0, . + 4 + (0xAB << 2)
        r.a0 = r.s1;                                             // 2bd3b4 daddu $a0, $s1, $zero
        if (t) goto L_2bd660;
    L_2bd3b8:
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bd3b8 lw $v0, 0xA94($s2)
        r.v0 = r.v0 & 0x4u;                                      // 2bd3bc andi $v0, $v0, 0x4
        t = r.v0 == 0u;                                          // 2bd3c0 beqz $v0, . + 4 + (0x5 << 2)
        r.a0 = r.s1;                                             // 2bd3c4 daddu $a0, $s1, $zero
        if (t) goto L_2bd3d8;
        r.at = sext32(0x3f800000u);                              // 2bd3c8 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd3cc mtc1 $at, $f13
        // 2bd3d0 b . + 4 + (0x85 << 2)
        r.a1 = addiu(0u, 122);                                   // 2bd3d4 addiu $a1, $zero, 0x7A
        goto L_2bd5e8;
    L_2bd3d8:
        r.at = sext32(0x3f800000u);                              // 2bd3d8 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd3dc mtc1 $at, $f13
        // 2bd3e0 b . + 4 + (0x81 << 2)
        r.a1 = addiu(0u, 12);                                    // 2bd3e4 addiu $a1, $zero, 0xC
        goto L_2bd5e8;
    L_2bd3e8:
        r.ra = 0x2bd3f0u;                                        // 2bd3e8 jal func_215820
        r.a1 = addiu(0u, 12);                                    // 2bd3ec addiu $a1, $zero, 0xC
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2bd3e8u, 0x2bd3f0u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd3f0:
        t = r.v0 != 0u;                                          // 2bd3f0 bnez $v0, . + 4 + (0x9B << 2)
        r.a0 = r.s1;                                             // 2bd3f4 daddu $a0, $s1, $zero
        if (t) goto L_2bd660;
        r.ra = 0x2bd400u;                                        // 2bd3f8 jal func_215820
        r.a1 = addiu(0u, 13);                                    // 2bd3fc addiu $a1, $zero, 0xD
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd3f8u, 0x2bd400u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd400:
        t = r.v0 != 0u;                                          // 2bd400 bnez $v0, . + 4 + (0x97 << 2)
        r.a0 = r.s1;                                             // 2bd404 daddu $a0, $s1, $zero
        if (t) goto L_2bd660;
        r.ra = 0x2bd410u;                                        // 2bd408 jal func_215820
        r.a1 = addiu(0u, 122);                                   // 2bd40c addiu $a1, $zero, 0x7A
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd408u, 0x2bd410u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd410:
        t = r.v0 != 0u;                                          // 2bd410 bnez $v0, . + 4 + (0x93 << 2)
        r.a0 = r.s1;                                             // 2bd414 daddu $a0, $s1, $zero
        if (t) goto L_2bd660;
        r.ra = 0x2bd420u;                                        // 2bd418 jal func_215820
        r.a1 = addiu(0u, 123);                                   // 2bd41c addiu $a1, $zero, 0x7B
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd418u, 0x2bd420u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd420:
        t = r.v0 != 0u;                                          // 2bd420 bnez $v0, . + 4 + (0x8F << 2)
        r.a0 = r.s1;                                             // 2bd424 daddu $a0, $s1, $zero
        if (t) goto L_2bd660;
        r.v0 = LW(lo32(r.s1) + 0x20u);                           // 2bd428 lw $v0, 0x20($s1)
        r.at = sext32(0x3e800000u);                              // 2bd42c lui $at, 0x3E80
        r.f1 = floatOf(lo32(r.at));                              // 2bd430 mtc1 $at, $f1
        r.f0 = LWC1(lo32(r.v0) + 0x8cu);                         // 2bd434 lwc1 $f0, 0x8C($v0)
        r.at = sext32(0x42700000u);                              // 2bd438 lui $at, 0x4270
        r.f3 = floatOf(lo32(r.at));                              // 2bd43c mtc1 $at, $f3
        r.f0 = FPU_MUL_S(r.f0, r.f1);                            // 2bd440 mul.s $f0, $f0, $f1
        r.f2 = LWC1(lo32(r.s2) + 0xb34u);                        // 2bd444 lwc1 $f2, 0xB34($s2)
        r.f1 = LWC1(lo32(r.s2) + 0xb3cu);                        // 2bd448 lwc1 $f1, 0xB3C($s2)
        r.f0 = FPU_MUL_S(r.f0, r.f3);                            // 2bd44c mul.s $f0, $f0, $f3
        r.f0 = FPU_MUL_S(r.f0, r.f2);                            // 2bd450 mul.s $f0, $f0, $f2
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f1, r.f0)); // 2bd454 c.le.s $f1, $f0
        if ((r.fcr31 & kCondition) == 0u) goto L_2bd660;         // 2bd458 bc1f . + 4 + (0x81 << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bd460 lw $v0, 0xA94($s2)
        r.v0 = r.v0 & 0x4u;                                      // 2bd464 andi $v0, $v0, 0x4
        t = r.v0 == 0u;                                          // 2bd468 beqz $v0, . + 4 + (0x18 << 2)
        r.v1 = sext32(0x80000u);                                 // 2bd46c lui $v1, 0x8
        if (t) goto L_2bd4cc;
        r.v0 = LW(lo32(r.s2) + 0xa9cu);                          // 2bd470 lw $v0, 0xA9C($s2)
        r.v0 = r.v0 & r.v1;                                      // 2bd474 and $v0, $v0, $v1
        if (r.v0 == 0u) goto L_2bd4ac;                           // 2bd478 beqz $v0, . + 4 + (0xC << 2)
        r.ra = 0x2bd488u;                                        // 2bd480 jal func_2158B8
        r.a1 = addiu(0u, 113);                                   // 2bd484 addiu $a1, $zero, 0x71
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2158b8u, 0x2bd480u, 0x2bd488u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd488:
        t = r.v0 != 0u;                                          // 2bd488 bnez $v0, . + 4 + (0x8 << 2)
        r.a0 = r.s1;                                             // 2bd48c daddu $a0, $s1, $zero
        if (t) goto L_2bd4ac;
        r.f12 = LWC1(lo32(r.gp) - 0x6fc4u);                      // 2bd490 lwc1 $f12, -0x6FC4($gp)
        r.at = sext32(0x3f800000u);                              // 2bd494 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd498 mtc1 $at, $f13
        r.ra = 0x2bd4a4u;                                        // 2bd49c jal func_214D68
        r.a1 = addiu(0u, 113);                                   // 2bd4a0 addiu $a1, $zero, 0x71
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2bd49cu, 0x2bd4a4u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd4a4:
        // 2bd4a4 b . + 4 + (0x6E << 2)
        r.a0 = r.s1;                                             // 2bd4a8 daddu $a0, $s1, $zero
        goto L_2bd660;
    L_2bd4ac:
        r.ra = 0x2bd4b4u;                                        // 2bd4ac jal func_215820
        r.a1 = addiu(0u, 113);                                   // 2bd4b0 addiu $a1, $zero, 0x71
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2bd4acu, 0x2bd4b4u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2bd4b4:
        t = r.v0 != 0u;                                          // 2bd4b4 bnez $v0, . + 4 + (0x6A << 2)
        r.a0 = r.s1;                                             // 2bd4b8 daddu $a0, $s1, $zero
        if (t) goto L_2bd660;
        r.at = sext32(0x3f800000u);                              // 2bd4bc lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd4c0 mtc1 $at, $f13
        // 2bd4c4 b . + 4 + (0x48 << 2)
        r.a1 = addiu(0u, 113);                                   // 2bd4c8 addiu $a1, $zero, 0x71
        goto L_2bd5e8;
    L_2bd4cc:
        r.ra = 0x2bd4d4u;                                        // 2bd4cc jal func_2CC3A0
        r.a0 = r.s1;                                             // 2bd4d0 daddu $a0, $s1, $zero
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2cc3a0u, 0x2bd4ccu, 0x2bd4d4u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); r.fcr31 = ctx->fcr31;
    L_2bd4d4:
        t = r.v0 == 0u;                                          // 2bd4d4 beqz $v0, . + 4 + (0x48 << 2)
        r.a0 = r.s1;                                             // 2bd4d8 daddu $a0, $s1, $zero
        if (t) goto L_2bd5f8;
        r.ra = 0x2bd4e4u;                                        // 2bd4dc jal func_215820
        r.a1 = addiu(0u, 460);                                   // 2bd4e0 addiu $a1, $zero, 0x1CC
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd4dcu, 0x2bd4e4u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); r.fcr31 = ctx->fcr31;
    L_2bd4e4:
        t = r.v0 != 0u;                                          // 2bd4e4 bnez $v0, . + 4 + (0x44 << 2)
        r.a0 = r.s1;                                             // 2bd4e8 daddu $a0, $s1, $zero
        if (t) goto L_2bd5f8;
        r.ra = 0x2bd4f4u;                                        // 2bd4ec jal func_215820
        r.a1 = addiu(0u, 462);                                   // 2bd4f0 addiu $a1, $zero, 0x1CE
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd4ecu, 0x2bd4f4u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); r.fcr31 = ctx->fcr31;
    L_2bd4f4:
        t = r.v0 != 0u;                                          // 2bd4f4 bnez $v0, . + 4 + (0x40 << 2)
        r.a0 = r.s1;                                             // 2bd4f8 daddu $a0, $s1, $zero
        if (t) goto L_2bd5f8;
        r.ra = 0x2bd504u;                                        // 2bd4fc jal func_215820
        r.a1 = addiu(0u, 463);                                   // 2bd500 addiu $a1, $zero, 0x1CF
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd4fcu, 0x2bd504u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); r.fcr31 = ctx->fcr31;
    L_2bd504:
        t = r.v0 != 0u;                                          // 2bd504 bnez $v0, . + 4 + (0x3C << 2)
        r.a0 = r.s1;                                             // 2bd508 daddu $a0, $s1, $zero
        if (t) goto L_2bd5f8;
        r.ra = 0x2bd514u;                                        // 2bd50c jal func_215820
        r.a1 = addiu(0u, 464);                                   // 2bd510 addiu $a1, $zero, 0x1D0
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd50cu, 0x2bd514u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); r.fcr31 = ctx->fcr31;
    L_2bd514:
        t = r.v0 != 0u;                                          // 2bd514 bnez $v0, . + 4 + (0x38 << 2)
        r.a0 = r.s1;                                             // 2bd518 daddu $a0, $s1, $zero
        if (t) goto L_2bd5f8;
        r.ra = 0x2bd524u;                                        // 2bd51c jal func_2B68D0
        STORE_GPR(a0, 4); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2b68d0u, 0x2bd51cu, 0x2bd524u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(gp, 28); LOAD_F(20); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2bd524:
        t = neg64(r.v0);                                         // 2bd524 bltz $v0, . + 4 + (0x4 << 2)
        r.v1 = srl32(r.v0, 1);                                   // 2bd528 srl $v1, $v0, 1
        if (t) goto L_2bd538;
        r.f2 = floatOf(lo32(r.v0));                              // 2bd52c mtc1 $v0, $f2
        // 2bd530 b . + 4 + (0x6 << 2)
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 2bd534 cvt.s.w $f2, $f2
        goto L_2bd54c;
    L_2bd538:
        r.v0 = r.v0 & 0x1u;                                      // 2bd538 andi $v0, $v0, 0x1
        r.v0 = r.v0 | r.v1;                                      // 2bd53c or $v0, $v0, $v1
        r.f2 = floatOf(lo32(r.v0));                              // 2bd540 mtc1 $v0, $f2
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 2bd544 cvt.s.w $f2, $f2
        r.f2 = FPU_ADD_S(r.f2, r.f2);                            // 2bd548 add.s $f2, $f2, $f2
    L_2bd54c:
        r.at = sext32(0x2f800000u);                              // 2bd54c lui $at, 0x2F80
        r.f0 = floatOf(lo32(r.at));                              // 2bd550 mtc1 $at, $f0
        r.f1 = LWC1(lo32(r.gp) - 0x6fc0u);                       // 2bd554 lwc1 $f1, -0x6FC0($gp)
        r.f0 = FPU_MUL_S(r.f2, r.f0);                            // 2bd558 mul.s $f0, $f2, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f1)); // 2bd55c c.lt.s $f0, $f1
        t = (r.fcr31 & kCondition) == 0u;                        // 2bd564 bc1f . + 4 + (0x24 << 2)
        r.a0 = r.s1;                                             // 2bd568 daddu $a0, $s1, $zero
        if (t) goto L_2bd5f8;
        r.v0 = LW(lo32(r.s2) + 0x1e4u);                          // 2bd56c lw $v0, 0x1E4($s2)
        t = r.v0 == 0u;                                          // 2bd570 beqz $v0, . + 4 + (0x5 << 2)
        r.a1 = addiu(0u, 463);                                   // 2bd574 addiu $a1, $zero, 0x1CF
        if (t) goto L_2bd588;
        r.at = sext32(0x3f800000u);                              // 2bd578 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd57c mtc1 $at, $f13
        // 2bd580 b . + 4 + (0x19 << 2)
        goto L_2bd5e8;
    L_2bd588:
        r.v0 = LW(lo32(r.s2) + 0x1b8u);                          // 2bd588 lw $v0, 0x1B8($s2)
        if (r.v0 != 0u)                                          // 2bd58c bnel $v0, $zero, . + 4 + (0x6 << 2)
        {
            r.a0 = LW(lo32(r.s2) + 0x178u);                          // 2bd590 lw $a0, 0x178($s2)
            goto L_2bd5a8;
        }
        r.at = sext32(0x3f800000u);                              // 2bd594 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd598 mtc1 $at, $f13
        r.a0 = r.s1;                                             // 2bd59c daddu $a0, $s1, $zero
        // 2bd5a0 b . + 4 + (0x11 << 2)
        r.a1 = addiu(0u, 460);                                   // 2bd5a4 addiu $a1, $zero, 0x1CC
        goto L_2bd5e8;
    L_2bd5a8:
        r.v0 = addiu(0u, 400);                                   // 2bd5a8 addiu $v0, $zero, 0x190
        r.v1 = sext32(0x360000u);                                // 2bd5ac lui $v1, 0x36
        r.a0 = mult(r.a0, r.v0, r.lo, r.hi);                     // 2bd5b0 mult $a0, $a0, $v0
        r.v1 = addiu(r.v1, 25112);                               // 2bd5b4 addiu $v1, $v1, 0x6218
        r.v1 = addu(r.v1, r.a0);                                 // 2bd5b8 addu $v1, $v1, $a0
        r.v0 = LW(lo32(r.v1) + 0x1cu);                           // 2bd5bc lw $v0, 0x1C($v1)
        r.v0 = r.v0 & 0x2u;                                      // 2bd5c0 andi $v0, $v0, 0x2
        t = r.v0 == 0u;                                          // 2bd5c4 beqz $v0, . + 4 + (0x5 << 2)
        r.a0 = r.s1;                                             // 2bd5c8 daddu $a0, $s1, $zero
        if (t) goto L_2bd5dc;
        r.at = sext32(0x3f800000u);                              // 2bd5cc lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd5d0 mtc1 $at, $f13
        // 2bd5d4 b . + 4 + (0x4 << 2)
        r.a1 = addiu(0u, 464);                                   // 2bd5d8 addiu $a1, $zero, 0x1D0
        goto L_2bd5e8;
    L_2bd5dc:
        r.at = sext32(0x3f800000u);                              // 2bd5dc lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd5e0 mtc1 $at, $f13
        r.a1 = addiu(0u, 462);                                   // 2bd5e4 addiu $a1, $zero, 0x1CE
    L_2bd5e8:
        r.ra = 0x2bd5f0u;                                        // 2bd5e8 jal func_214D68
        r.f12 = FPU_MOV_S(r.f20);                                // 2bd5ec mov.s $f12, $f20
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(12); STORE_F(13); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x214d68u, 0x2bd5e8u, 0x2bd5f0u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd5f0:
        // 2bd5f0 b . + 4 + (0x1B << 2)
        r.a0 = r.s1;                                             // 2bd5f4 daddu $a0, $s1, $zero
        goto L_2bd660;
    L_2bd5f8:
        r.ra = 0x2bd600u;                                        // 2bd5f8 jal func_215820
        r.a1 = addiu(0u, 3);                                     // 2bd5fc addiu $a1, $zero, 0x3
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2bd5f8u, 0x2bd600u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd600:
        t = r.v0 != 0u;                                          // 2bd600 bnez $v0, . + 4 + (0x17 << 2)
        r.a0 = r.s1;                                             // 2bd604 daddu $a0, $s1, $zero
        if (t) goto L_2bd660;
        r.ra = 0x2bd610u;                                        // 2bd608 jal func_215820
        r.a1 = addiu(0u, 460);                                   // 2bd60c addiu $a1, $zero, 0x1CC
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd608u, 0x2bd610u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd610:
        t = r.v0 != 0u;                                          // 2bd610 bnez $v0, . + 4 + (0x13 << 2)
        r.a0 = r.s1;                                             // 2bd614 daddu $a0, $s1, $zero
        if (t) goto L_2bd660;
        r.ra = 0x2bd620u;                                        // 2bd618 jal func_215820
        r.a1 = addiu(0u, 462);                                   // 2bd61c addiu $a1, $zero, 0x1CE
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd618u, 0x2bd620u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd620:
        t = r.v0 != 0u;                                          // 2bd620 bnez $v0, . + 4 + (0xF << 2)
        r.a0 = r.s1;                                             // 2bd624 daddu $a0, $s1, $zero
        if (t) goto L_2bd660;
        r.ra = 0x2bd630u;                                        // 2bd628 jal func_215820
        r.a1 = addiu(0u, 463);                                   // 2bd62c addiu $a1, $zero, 0x1CF
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd628u, 0x2bd630u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd630:
        t = r.v0 != 0u;                                          // 2bd630 bnez $v0, . + 4 + (0xB << 2)
        r.a0 = r.s1;                                             // 2bd634 daddu $a0, $s1, $zero
        if (t) goto L_2bd660;
        r.ra = 0x2bd640u;                                        // 2bd638 jal func_215820
        r.a1 = addiu(0u, 464);                                   // 2bd63c addiu $a1, $zero, 0x1D0
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd638u, 0x2bd640u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2bd640:
        t = r.v0 != 0u;                                          // 2bd640 bnez $v0, . + 4 + (0x7 << 2)
        r.a0 = r.s1;                                             // 2bd644 daddu $a0, $s1, $zero
        if (t) goto L_2bd660;
        r.at = sext32(0x3f800000u);                              // 2bd648 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd64c mtc1 $at, $f13
        r.a1 = addiu(0u, 3);                                     // 2bd650 addiu $a1, $zero, 0x3
        r.ra = 0x2bd65cu;                                        // 2bd654 jal func_214D68
        r.f12 = FPU_MOV_S(r.f20);                                // 2bd658 mov.s $f12, $f20
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2bd654u, 0x2bd65cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd65c:
        r.a0 = r.s1;                                             // 2bd65c daddu $a0, $s1, $zero
    L_2bd660:
        r.ra = 0x2bd668u;                                        // 2bd660 jal func_215A10
        r.a1 = addiu(0u, 12);                                    // 2bd664 addiu $a1, $zero, 0xC
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215a10u, 0x2bd660u, 0x2bd668u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17);
    L_2bd668:
        t = r.v0 == 0u;                                          // 2bd668 beqz $v0, . + 4 + (0x5 << 2)
        r.a0 = r.s1;                                             // 2bd66c daddu $a0, $s1, $zero
        if (t) goto L_2bd680;
        r.v0 = LW(lo32(r.s1) + 0x20u);                           // 2bd670 lw $v0, 0x20($s1)
        r.v1 = LW(lo32(r.v0) + 0x98u);                           // 2bd674 lw $v1, 0x98($v0)
        if (r.v1 != 0u) goto L_2bd6e0;                           // 2bd678 bnez $v1, . + 4 + (0x19 << 2)
    L_2bd680:
        r.ra = 0x2bd688u;                                        // 2bd680 jal func_215A10
        r.a1 = addiu(0u, 122);                                   // 2bd684 addiu $a1, $zero, 0x7A
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215a10u, 0x2bd680u, 0x2bd688u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17);
    L_2bd688:
        t = r.v0 == 0u;                                          // 2bd688 beqz $v0, . + 4 + (0x5 << 2)
        r.a0 = r.s1;                                             // 2bd68c daddu $a0, $s1, $zero
        if (t) goto L_2bd6a0;
        r.v0 = LW(lo32(r.s1) + 0x20u);                           // 2bd690 lw $v0, 0x20($s1)
        r.v1 = LW(lo32(r.v0) + 0x98u);                           // 2bd694 lw $v1, 0x98($v0)
        if (r.v1 != 0u) goto L_2bd6e0;                           // 2bd698 bnez $v1, . + 4 + (0x11 << 2)
    L_2bd6a0:
        r.ra = 0x2bd6a8u;                                        // 2bd6a0 jal func_215A10
        r.a1 = addiu(0u, 13);                                    // 2bd6a4 addiu $a1, $zero, 0xD
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215a10u, 0x2bd6a0u, 0x2bd6a8u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17);
    L_2bd6a8:
        t = r.v0 == 0u;                                          // 2bd6a8 beqz $v0, . + 4 + (0x5 << 2)
        r.a0 = r.s1;                                             // 2bd6ac daddu $a0, $s1, $zero
        if (t) goto L_2bd6c0;
        r.v0 = LW(lo32(r.s1) + 0x20u);                           // 2bd6b0 lw $v0, 0x20($s1)
        r.v1 = LW(lo32(r.v0) + 0x98u);                           // 2bd6b4 lw $v1, 0x98($v0)
        if (r.v1 != 0u) goto L_2bd6e0;                           // 2bd6b8 bnez $v1, . + 4 + (0x9 << 2)
    L_2bd6c0:
        r.ra = 0x2bd6c8u;                                        // 2bd6c0 jal func_215A10
        r.a1 = addiu(0u, 123);                                   // 2bd6c4 addiu $a1, $zero, 0x7B
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215a10u, 0x2bd6c0u, 0x2bd6c8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd6c8:
        t = r.v0 == 0u;                                          // 2bd6c8 beqz $v0, . + 4 + (0xAC << 2)
        r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2bd6cc lw $a0, 0x20($s1)
        if (t) goto L_2bd97c;
        r.v0 = LW(lo32(r.a0) + 0x98u);                           // 2bd6d0 lw $v0, 0x98($a0)
        if (r.v0 == 0u)                                          // 2bd6d4 beql $v0, $zero, . + 4 + (0xAA << 2)
        {
            r.v0 = LW(lo32(r.a0) + 0x60u);                           // 2bd6d8 lw $v0, 0x60($a0)
            goto L_2bd980;
        }
        r.a0 = r.s1;                                             // 2bd6dc daddu $a0, $s1, $zero
    L_2bd6e0:
        r.ra = 0x2bd6e8u;                                        // 2bd6e0 jal func_215A88
        r.a1 = addiu(0u, 12);                                    // 2bd6e4 addiu $a1, $zero, 0xC
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215a88u, 0x2bd6e0u, 0x2bd6e8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd6e8:
        if (r.v0 != 0u)                                          // 2bd6e8 bnel $v0, $zero, . + 4 + (0xA4 << 2)
        {
            r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2bd6ec lw $a0, 0x20($s1)
            goto L_2bd97c;
        }
        r.a0 = r.s1;                                             // 2bd6f0 daddu $a0, $s1, $zero
        r.ra = 0x2bd6fcu;                                        // 2bd6f4 jal func_215A88
        r.a1 = addiu(0u, 122);                                   // 2bd6f8 addiu $a1, $zero, 0x7A
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215a88u, 0x2bd6f4u, 0x2bd6fcu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd6fc:
        if (r.v0 != 0u)                                          // 2bd6fc bnel $v0, $zero, . + 4 + (0x9F << 2)
        {
            r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2bd700 lw $a0, 0x20($s1)
            goto L_2bd97c;
        }
        r.a0 = r.s1;                                             // 2bd704 daddu $a0, $s1, $zero
        r.ra = 0x2bd710u;                                        // 2bd708 jal func_215A88
        r.a1 = addiu(0u, 13);                                    // 2bd70c addiu $a1, $zero, 0xD
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215a88u, 0x2bd708u, 0x2bd710u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd710:
        if (r.v0 != 0u)                                          // 2bd710 bnel $v0, $zero, . + 4 + (0x9A << 2)
        {
            r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2bd714 lw $a0, 0x20($s1)
            goto L_2bd97c;
        }
        r.a0 = r.s1;                                             // 2bd718 daddu $a0, $s1, $zero
        r.ra = 0x2bd724u;                                        // 2bd71c jal func_215A88
        r.a1 = addiu(0u, 123);                                   // 2bd720 addiu $a1, $zero, 0x7B
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215a88u, 0x2bd71cu, 0x2bd724u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd724:
        t = r.v0 != 0u;                                          // 2bd724 bnez $v0, . + 4 + (0x95 << 2)
        r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2bd728 lw $a0, 0x20($s1)
        if (t) goto L_2bd97c;
        r.at = sext32(0x3e800000u);                              // 2bd72c lui $at, 0x3E80
        r.f1 = floatOf(lo32(r.at));                              // 2bd730 mtc1 $at, $f1
        r.f0 = LWC1(lo32(r.a0) + 0x8cu);                         // 2bd734 lwc1 $f0, 0x8C($a0)
        r.at = sext32(0x42700000u);                              // 2bd738 lui $at, 0x4270
        r.f3 = floatOf(lo32(r.at));                              // 2bd73c mtc1 $at, $f3
        r.f0 = FPU_MUL_S(r.f0, r.f1);                            // 2bd740 mul.s $f0, $f0, $f1
        r.f2 = LWC1(lo32(r.s2) + 0xb34u);                        // 2bd744 lwc1 $f2, 0xB34($s2)
        r.f1 = LWC1(lo32(r.s2) + 0xb3cu);                        // 2bd748 lwc1 $f1, 0xB3C($s2)
        r.f0 = FPU_MUL_S(r.f0, r.f3);                            // 2bd74c mul.s $f0, $f0, $f3
        r.f0 = FPU_MUL_S(r.f0, r.f2);                            // 2bd750 mul.s $f0, $f0, $f2
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f1, r.f0)); // 2bd754 c.le.s $f1, $f0
        if ((r.fcr31 & kCondition) == 0u)                        // 2bd75c bc1fl . + 4 + (0x88 << 2)
        {
            r.v0 = LW(lo32(r.a0) + 0x60u);                           // 2bd760 lw $v0, 0x60($a0)
            goto L_2bd980;
        }
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bd764 lw $v0, 0xA94($s2)
        r.v0 = r.v0 & 0x4u;                                      // 2bd768 andi $v0, $v0, 0x4
        t = r.v0 == 0u;                                          // 2bd76c beqz $v0, . + 4 + (0x1C << 2)
        r.v1 = sext32(0x80000u);                                 // 2bd770 lui $v1, 0x8
        if (t) goto L_2bd7e0;
        r.v0 = LW(lo32(r.s2) + 0xa9cu);                          // 2bd774 lw $v0, 0xA9C($s2)
        r.v0 = r.v0 & r.v1;                                      // 2bd778 and $v0, $v0, $v1
        t = r.v0 == 0u;                                          // 2bd77c beqz $v0, . + 4 + (0xC << 2)
        r.a0 = r.s1;                                             // 2bd780 daddu $a0, $s1, $zero
        if (t) goto L_2bd7b0;
        r.ra = 0x2bd78cu;                                        // 2bd784 jal func_2158B8
        r.a1 = addiu(0u, 113);                                   // 2bd788 addiu $a1, $zero, 0x71
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2158b8u, 0x2bd784u, 0x2bd78cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd78c:
        t = r.v0 != 0u;                                          // 2bd78c bnez $v0, . + 4 + (0x8 << 2)
        r.a0 = r.s1;                                             // 2bd790 daddu $a0, $s1, $zero
        if (t) goto L_2bd7b0;
        r.f12 = LWC1(lo32(r.gp) - 0x6fbcu);                      // 2bd794 lwc1 $f12, -0x6FBC($gp)
        r.at = sext32(0x3f800000u);                              // 2bd798 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd79c mtc1 $at, $f13
        r.ra = 0x2bd7a8u;                                        // 2bd7a0 jal func_214D68
        r.a1 = addiu(0u, 113);                                   // 2bd7a4 addiu $a1, $zero, 0x71
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2bd7a0u, 0x2bd7a8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd7a8:
        // 2bd7a8 b . + 4 + (0x74 << 2)
        r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2bd7ac lw $a0, 0x20($s1)
        goto L_2bd97c;
    L_2bd7b0:
        r.ra = 0x2bd7b8u;                                        // 2bd7b0 jal func_215820
        r.a1 = addiu(0u, 113);                                   // 2bd7b4 addiu $a1, $zero, 0x71
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2bd7b0u, 0x2bd7b8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2bd7b8:
        if (r.v0 != 0u)                                          // 2bd7b8 bnel $v0, $zero, . + 4 + (0x70 << 2)
        {
            r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2bd7bc lw $a0, 0x20($s1)
            goto L_2bd97c;
        }
        r.at = sext32(0x3f800000u);                              // 2bd7c0 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd7c4 mtc1 $at, $f13
        r.a0 = r.s1;                                             // 2bd7c8 daddu $a0, $s1, $zero
        r.a1 = addiu(0u, 113);                                   // 2bd7cc addiu $a1, $zero, 0x71
    L_2bd7d0:
        r.ra = 0x2bd7d8u;                                        // 2bd7d0 jal func_214D68
        r.f12 = FPU_MOV_S(r.f20);                                // 2bd7d4 mov.s $f12, $f20
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(12); STORE_F(13); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi;
        if (!guestCall(G_PASS, 0x214d68u, 0x2bd7d0u, 0x2bd7d8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd7d8:
        // 2bd7d8 b . + 4 + (0x68 << 2)
        r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2bd7dc lw $a0, 0x20($s1)
        goto L_2bd97c;
    L_2bd7e0:
        r.ra = 0x2bd7e8u;                                        // 2bd7e0 jal func_2CC3A0
        r.a0 = r.s1;                                             // 2bd7e4 daddu $a0, $s1, $zero
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2cc3a0u, 0x2bd7e0u, 0x2bd7e8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); r.fcr31 = ctx->fcr31;
    L_2bd7e8:
        t = r.v0 == 0u;                                          // 2bd7e8 beqz $v0, . + 4 + (0x45 << 2)
        r.a0 = r.s1;                                             // 2bd7ec daddu $a0, $s1, $zero
        if (t) goto L_2bd900;
        r.ra = 0x2bd7f8u;                                        // 2bd7f0 jal func_215820
        r.a1 = addiu(0u, 460);                                   // 2bd7f4 addiu $a1, $zero, 0x1CC
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd7f0u, 0x2bd7f8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); r.fcr31 = ctx->fcr31;
    L_2bd7f8:
        t = r.v0 != 0u;                                          // 2bd7f8 bnez $v0, . + 4 + (0x41 << 2)
        r.a0 = r.s1;                                             // 2bd7fc daddu $a0, $s1, $zero
        if (t) goto L_2bd900;
        r.ra = 0x2bd808u;                                        // 2bd800 jal func_215820
        r.a1 = addiu(0u, 462);                                   // 2bd804 addiu $a1, $zero, 0x1CE
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd800u, 0x2bd808u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); r.fcr31 = ctx->fcr31;
    L_2bd808:
        t = r.v0 != 0u;                                          // 2bd808 bnez $v0, . + 4 + (0x3D << 2)
        r.a0 = r.s1;                                             // 2bd80c daddu $a0, $s1, $zero
        if (t) goto L_2bd900;
        r.ra = 0x2bd818u;                                        // 2bd810 jal func_215820
        r.a1 = addiu(0u, 463);                                   // 2bd814 addiu $a1, $zero, 0x1CF
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd810u, 0x2bd818u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); r.fcr31 = ctx->fcr31;
    L_2bd818:
        t = r.v0 != 0u;                                          // 2bd818 bnez $v0, . + 4 + (0x39 << 2)
        r.a0 = r.s1;                                             // 2bd81c daddu $a0, $s1, $zero
        if (t) goto L_2bd900;
        r.ra = 0x2bd828u;                                        // 2bd820 jal func_215820
        r.a1 = addiu(0u, 464);                                   // 2bd824 addiu $a1, $zero, 0x1D0
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd820u, 0x2bd828u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); r.fcr31 = ctx->fcr31;
    L_2bd828:
        t = r.v0 != 0u;                                          // 2bd828 bnez $v0, . + 4 + (0x35 << 2)
        r.a0 = r.s1;                                             // 2bd82c daddu $a0, $s1, $zero
        if (t) goto L_2bd900;
        r.ra = 0x2bd838u;                                        // 2bd830 jal func_2B68D0
        STORE_GPR(a0, 4); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2b68d0u, 0x2bd830u, 0x2bd838u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(gp, 28); LOAD_F(20); r.fcr31 = ctx->fcr31; r.lo = ctx->lo; r.hi = ctx->hi;
    L_2bd838:
        t = neg64(r.v0);                                         // 2bd838 bltz $v0, . + 4 + (0x4 << 2)
        r.v1 = srl32(r.v0, 1);                                   // 2bd83c srl $v1, $v0, 1
        if (t) goto L_2bd84c;
        r.f2 = floatOf(lo32(r.v0));                              // 2bd840 mtc1 $v0, $f2
        // 2bd844 b . + 4 + (0x6 << 2)
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 2bd848 cvt.s.w $f2, $f2
        goto L_2bd860;
    L_2bd84c:
        r.v0 = r.v0 & 0x1u;                                      // 2bd84c andi $v0, $v0, 0x1
        r.v0 = r.v0 | r.v1;                                      // 2bd850 or $v0, $v0, $v1
        r.f2 = floatOf(lo32(r.v0));                              // 2bd854 mtc1 $v0, $f2
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 2bd858 cvt.s.w $f2, $f2
        r.f2 = FPU_ADD_S(r.f2, r.f2);                            // 2bd85c add.s $f2, $f2, $f2
    L_2bd860:
        r.at = sext32(0x2f800000u);                              // 2bd860 lui $at, 0x2F80
        r.f0 = floatOf(lo32(r.at));                              // 2bd864 mtc1 $at, $f0
        r.f1 = LWC1(lo32(r.gp) - 0x6fb8u);                       // 2bd868 lwc1 $f1, -0x6FB8($gp)
        r.f0 = FPU_MUL_S(r.f2, r.f0);                            // 2bd86c mul.s $f0, $f2, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f1)); // 2bd870 c.lt.s $f0, $f1
        t = (r.fcr31 & kCondition) == 0u;                        // 2bd878 bc1f . + 4 + (0x21 << 2)
        r.a0 = r.s1;                                             // 2bd87c daddu $a0, $s1, $zero
        if (t) goto L_2bd900;
        r.v0 = LW(lo32(r.s2) + 0x1e4u);                          // 2bd880 lw $v0, 0x1E4($s2)
        t = r.v0 == 0u;                                          // 2bd884 beqz $v0, . + 4 + (0x5 << 2)
        r.a1 = addiu(0u, 463);                                   // 2bd888 addiu $a1, $zero, 0x1CF
        if (t) goto L_2bd89c;
        r.at = sext32(0x3f800000u);                              // 2bd88c lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd890 mtc1 $at, $f13
        // 2bd894 b . + 4 + (-0x32 << 2)
        if (loopCheckpoint(ctx, runtime, 0x2bd7d0u)) { STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(13); ctx->fcr31 = r.fcr31; return; }
        goto L_2bd7d0;
    L_2bd89c:
        r.v0 = LW(lo32(r.s2) + 0x1b8u);                          // 2bd89c lw $v0, 0x1B8($s2)
        if (r.v0 != 0u)                                          // 2bd8a0 bnel $v0, $zero, . + 4 + (0x6 << 2)
        {
            r.a0 = LW(lo32(r.s2) + 0x178u);                          // 2bd8a4 lw $a0, 0x178($s2)
            goto L_2bd8bc;
        }
        r.at = sext32(0x3f800000u);                              // 2bd8a8 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd8ac mtc1 $at, $f13
        r.a0 = r.s1;                                             // 2bd8b0 daddu $a0, $s1, $zero
        // 2bd8b4 b . + 4 + (-0x3A << 2)
        r.a1 = addiu(0u, 460);                                   // 2bd8b8 addiu $a1, $zero, 0x1CC
        if (loopCheckpoint(ctx, runtime, 0x2bd7d0u)) { STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(13); ctx->fcr31 = r.fcr31; return; }
        goto L_2bd7d0;
    L_2bd8bc:
        r.v0 = addiu(0u, 400);                                   // 2bd8bc addiu $v0, $zero, 0x190
        r.v1 = sext32(0x360000u);                                // 2bd8c0 lui $v1, 0x36
        r.a0 = mult(r.a0, r.v0, r.lo, r.hi);                     // 2bd8c4 mult $a0, $a0, $v0
        r.v1 = addiu(r.v1, 25112);                               // 2bd8c8 addiu $v1, $v1, 0x6218
        r.v1 = addu(r.v1, r.a0);                                 // 2bd8cc addu $v1, $v1, $a0
        r.v0 = LW(lo32(r.v1) + 0x1cu);                           // 2bd8d0 lw $v0, 0x1C($v1)
        r.v0 = r.v0 & 0x2u;                                      // 2bd8d4 andi $v0, $v0, 0x2
        t = r.v0 == 0u;                                          // 2bd8d8 beqz $v0, . + 4 + (0x5 << 2)
        r.a0 = r.s1;                                             // 2bd8dc daddu $a0, $s1, $zero
        if (t) goto L_2bd8f0;
        r.at = sext32(0x3f800000u);                              // 2bd8e0 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd8e4 mtc1 $at, $f13
        // 2bd8e8 b . + 4 + (-0x47 << 2)
        r.a1 = addiu(0u, 464);                                   // 2bd8ec addiu $a1, $zero, 0x1D0
        if (loopCheckpoint(ctx, runtime, 0x2bd7d0u)) { STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(13); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi; return; }
        goto L_2bd7d0;
    L_2bd8f0:
        r.at = sext32(0x3f800000u);                              // 2bd8f0 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd8f4 mtc1 $at, $f13
        // 2bd8f8 b . + 4 + (-0x4B << 2)
        r.a1 = addiu(0u, 462);                                   // 2bd8fc addiu $a1, $zero, 0x1CE
        if (loopCheckpoint(ctx, runtime, 0x2bd7d0u)) { STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(13); ctx->fcr31 = r.fcr31; ctx->lo = r.lo; ctx->hi = r.hi; return; }
        goto L_2bd7d0;
    L_2bd900:
        r.ra = 0x2bd908u;                                        // 2bd900 jal func_215820
        r.a1 = addiu(0u, 3);                                     // 2bd904 addiu $a1, $zero, 0x3
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2bd900u, 0x2bd908u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd908:
        if (r.v0 != 0u)                                          // 2bd908 bnel $v0, $zero, . + 4 + (0x1C << 2)
        {
            r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2bd90c lw $a0, 0x20($s1)
            goto L_2bd97c;
        }
        r.a0 = r.s1;                                             // 2bd910 daddu $a0, $s1, $zero
        r.ra = 0x2bd91cu;                                        // 2bd914 jal func_215820
        r.a1 = addiu(0u, 460);                                   // 2bd918 addiu $a1, $zero, 0x1CC
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd914u, 0x2bd91cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd91c:
        if (r.v0 != 0u)                                          // 2bd91c bnel $v0, $zero, . + 4 + (0x17 << 2)
        {
            r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2bd920 lw $a0, 0x20($s1)
            goto L_2bd97c;
        }
        r.a0 = r.s1;                                             // 2bd924 daddu $a0, $s1, $zero
        r.ra = 0x2bd930u;                                        // 2bd928 jal func_215820
        r.a1 = addiu(0u, 462);                                   // 2bd92c addiu $a1, $zero, 0x1CE
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd928u, 0x2bd930u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd930:
        if (r.v0 != 0u)                                          // 2bd930 bnel $v0, $zero, . + 4 + (0x12 << 2)
        {
            r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2bd934 lw $a0, 0x20($s1)
            goto L_2bd97c;
        }
        r.a0 = r.s1;                                             // 2bd938 daddu $a0, $s1, $zero
        r.ra = 0x2bd944u;                                        // 2bd93c jal func_215820
        r.a1 = addiu(0u, 463);                                   // 2bd940 addiu $a1, $zero, 0x1CF
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd93cu, 0x2bd944u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd944:
        if (r.v0 != 0u)                                          // 2bd944 bnel $v0, $zero, . + 4 + (0xD << 2)
        {
            r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2bd948 lw $a0, 0x20($s1)
            goto L_2bd97c;
        }
        r.a0 = r.s1;                                             // 2bd94c daddu $a0, $s1, $zero
        r.ra = 0x2bd958u;                                        // 2bd950 jal func_215820
        r.a1 = addiu(0u, 464);                                   // 2bd954 addiu $a1, $zero, 0x1D0
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd950u, 0x2bd958u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2bd958:
        if (r.v0 != 0u)                                          // 2bd958 bnel $v0, $zero, . + 4 + (0x8 << 2)
        {
            r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2bd95c lw $a0, 0x20($s1)
            goto L_2bd97c;
        }
        r.at = sext32(0x3f800000u);                              // 2bd960 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd964 mtc1 $at, $f13
        r.a0 = r.s1;                                             // 2bd968 daddu $a0, $s1, $zero
        r.a1 = addiu(0u, 3);                                     // 2bd96c addiu $a1, $zero, 0x3
        r.ra = 0x2bd978u;                                        // 2bd970 jal func_214D68
        r.f12 = FPU_MOV_S(r.f20);                                // 2bd974 mov.s $f12, $f20
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2bd970u, 0x2bd978u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd978:
        r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2bd978 lw $a0, 0x20($s1)
    L_2bd97c:
        r.v0 = LW(lo32(r.a0) + 0x60u);                           // 2bd97c lw $v0, 0x60($a0)
    L_2bd980:
        r.v0 = slti(r.v0, 443);                                  // 2bd980 slti $v0, $v0, 0x1BB
        if (r.v0 != 0u)                                          // 2bd984 bnel $v0, $zero, . + 4 + (0x1D2 << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bd988 lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.ra = 0x2bd994u;                                        // 2bd98c jal func_215B00
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(a0, 4); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215b00u, 0x2bd98cu, 0x2bd994u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bd994:
        t = r.v0 == 0u;                                          // 2bd994 beqz $v0, . + 4 + (0x1CE << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bd998 lw $v0, 0xA94($s2)
        if (t) goto L_2be0d0;
        r.v0 = r.v0 & 0x4u;                                      // 2bd99c andi $v0, $v0, 0x4
        t = r.v0 == 0u;                                          // 2bd9a0 beqz $v0, . + 4 + (0x1A << 2)
        r.v1 = sext32(0x80000u);                                 // 2bd9a4 lui $v1, 0x8
        if (t) goto L_2bda0c;
        r.v0 = LW(lo32(r.s2) + 0xa9cu);                          // 2bd9a8 lw $v0, 0xA9C($s2)
        r.v0 = r.v0 & r.v1;                                      // 2bd9ac and $v0, $v0, $v1
        t = r.v0 == 0u;                                          // 2bd9b0 beqz $v0, . + 4 + (0xA << 2)
        r.a0 = r.s1;                                             // 2bd9b4 daddu $a0, $s1, $zero
        if (t) goto L_2bd9dc;
        r.ra = 0x2bd9c0u;                                        // 2bd9b8 jal func_2158B8
        r.a1 = addiu(0u, 113);                                   // 2bd9bc addiu $a1, $zero, 0x71
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2158b8u, 0x2bd9b8u, 0x2bd9c0u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28);
    L_2bd9c0:
        t = r.v0 != 0u;                                          // 2bd9c0 bnez $v0, . + 4 + (0x6 << 2)
        r.a0 = r.s1;                                             // 2bd9c4 daddu $a0, $s1, $zero
        if (t) goto L_2bd9dc;
        r.f12 = LWC1(lo32(r.gp) - 0x6fb4u);                      // 2bd9c8 lwc1 $f12, -0x6FB4($gp)
        r.at = sext32(0x3f800000u);                              // 2bd9cc lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd9d0 mtc1 $at, $f13
        // 2bd9d4 b . + 4 + (0x9 << 2)
        goto L_2bd9fc;
    L_2bd9dc:
        r.ra = 0x2bd9e4u;                                        // 2bd9dc jal func_215820
        r.a1 = addiu(0u, 113);                                   // 2bd9e0 addiu $a1, $zero, 0x71
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bd9dcu, 0x2bd9e4u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2bd9e4:
        if (r.v0 != 0u)                                          // 2bd9e4 bnel $v0, $zero, . + 4 + (0x1BA << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bd9e8 lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.at = sext32(0x3f800000u);                              // 2bd9ec lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bd9f0 mtc1 $at, $f13
        r.f12 = FPU_MOV_S(r.f20);                                // 2bd9f4 mov.s $f12, $f20
        r.a0 = r.s1;                                             // 2bd9f8 daddu $a0, $s1, $zero
    L_2bd9fc:
        r.ra = 0x2bda04u;                                        // 2bd9fc jal func_214D68
        r.a1 = addiu(0u, 113);                                   // 2bda00 addiu $a1, $zero, 0x71
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2bd9fcu, 0x2bda04u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bda04:
        // 2bda04 b . + 4 + (0x1B2 << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bda08 lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2bda0c:
        r.a0 = r.s1;                                             // 2bda0c daddu $a0, $s1, $zero
        r.ra = 0x2bda18u;                                        // 2bda10 jal func_215820
        r.a1 = addiu(0u, 3);                                     // 2bda14 addiu $a1, $zero, 0x3
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bda10u, 0x2bda18u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2bda18:
        if (r.v0 != 0u)                                          // 2bda18 bnel $v0, $zero, . + 4 + (0x1AD << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bda1c lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.at = sext32(0x3f800000u);                              // 2bda20 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bda24 mtc1 $at, $f13
        r.f12 = FPU_MOV_S(r.f20);                                // 2bda28 mov.s $f12, $f20
        r.a0 = r.s1;                                             // 2bda2c daddu $a0, $s1, $zero
        r.ra = 0x2bda38u;                                        // 2bda30 jal func_214D68
        r.a1 = addiu(0u, 3);                                     // 2bda34 addiu $a1, $zero, 0x3
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2bda30u, 0x2bda38u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bda38:
        // 2bda38 b . + 4 + (0x1A5 << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bda3c lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2bda40:
        t = r.v0 == 0u;                                          // 2bda40 beqz $v0, . + 4 + (0x7D << 2)
        r.v0 = LW(lo32(r.s2) + 0xa98u);                          // 2bda44 lw $v0, 0xA98($s2)
        if (t) goto L_2bdc38;
        r.at = sext32(0x3e800000u);                              // 2bda48 lui $at, 0x3E80
        r.f20 = floatOf(lo32(r.at));                             // 2bda4c mtc1 $at, $f20
        r.v0 = r.v0 & 0x1u;                                      // 2bda50 andi $v0, $v0, 0x1
        t = r.v0 == 0u;                                          // 2bda54 beqz $v0, . + 4 + (0x2 << 2)
        r.f1 = LWC1(lo32(r.s2) + 0xb3cu);                        // 2bda58 lwc1 $f1, 0xB3C($s2)
        if (t) goto L_2bda60;
        r.f20 = floatOf(lo32(0u));                               // 2bda5c mtc1 $zero, $f20
    L_2bda60:
        r.f0 = floatOf(lo32(0u));                                // 2bda60 mtc1 $zero, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f1)); // 2bda64 c.lt.s $f0, $f1
        t = (r.fcr31 & kCondition) == 0u;                        // 2bda6c bc1f . + 4 + (0x39 << 2)
        r.f0 = LWC1(lo32(r.s2) + 0xb2cu);                        // 2bda70 lwc1 $f0, 0xB2C($s2)
        if (t) goto L_2bdb54;
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f1)); // 2bda74 c.lt.s $f0, $f1
        t = (r.fcr31 & kCondition) == 0u;                        // 2bda7c bc1f . + 4 + (0x1B << 2)
        r.v0 = r.v1 & 0x4u;                                      // 2bda80 andi $v0, $v1, 0x4
        if (t) goto L_2bdaec;
        t = r.v0 == 0u;                                          // 2bda84 beqz $v0, . + 4 + (0xD << 2)
        r.a0 = r.s1;                                             // 2bda88 daddu $a0, $s1, $zero
        if (t) goto L_2bdabc;
        r.ra = 0x2bda94u;                                        // 2bda8c jal func_215820
        r.a1 = addiu(0u, 119);                                   // 2bda90 addiu $a1, $zero, 0x77
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2bda8cu, 0x2bda94u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2bda94:
        if (r.v0 != 0u)                                          // 2bda94 bnel $v0, $zero, . + 4 + (0x18E << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bda98 lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.at = sext32(0x3f800000u);                              // 2bda9c lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bdaa0 mtc1 $at, $f13
        r.f12 = FPU_MOV_S(r.f20);                                // 2bdaa4 mov.s $f12, $f20
        r.a0 = r.s1;                                             // 2bdaa8 daddu $a0, $s1, $zero
        r.ra = 0x2bdab4u;                                        // 2bdaac jal func_214D68
        r.a1 = addiu(0u, 119);                                   // 2bdab0 addiu $a1, $zero, 0x77
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2bdaacu, 0x2bdab4u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bdab4:
        // 2bdab4 b . + 4 + (0x186 << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdab8 lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2bdabc:
        r.ra = 0x2bdac4u;                                        // 2bdabc jal func_215820
        r.a1 = addiu(0u, 6);                                     // 2bdac0 addiu $a1, $zero, 0x6
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2bdabcu, 0x2bdac4u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2bdac4:
        if (r.v0 != 0u)                                          // 2bdac4 bnel $v0, $zero, . + 4 + (0x182 << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdac8 lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.at = sext32(0x3f800000u);                              // 2bdacc lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bdad0 mtc1 $at, $f13
        r.f12 = FPU_MOV_S(r.f20);                                // 2bdad4 mov.s $f12, $f20
        r.a0 = r.s1;                                             // 2bdad8 daddu $a0, $s1, $zero
        r.ra = 0x2bdae4u;                                        // 2bdadc jal func_214D68
        r.a1 = addiu(0u, 6);                                     // 2bdae0 addiu $a1, $zero, 0x6
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2bdadcu, 0x2bdae4u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bdae4:
        // 2bdae4 b . + 4 + (0x17A << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdae8 lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2bdaec:
        t = r.v0 == 0u;                                          // 2bdaec beqz $v0, . + 4 + (0xD << 2)
        r.a0 = r.s1;                                             // 2bdaf0 daddu $a0, $s1, $zero
        if (t) goto L_2bdb24;
        r.ra = 0x2bdafcu;                                        // 2bdaf4 jal func_215820
        r.a1 = addiu(0u, 117);                                   // 2bdaf8 addiu $a1, $zero, 0x75
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2bdaf4u, 0x2bdafcu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2bdafc:
        if (r.v0 != 0u)                                          // 2bdafc bnel $v0, $zero, . + 4 + (0x174 << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdb00 lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.at = sext32(0x3f800000u);                              // 2bdb04 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bdb08 mtc1 $at, $f13
        r.f12 = FPU_MOV_S(r.f20);                                // 2bdb0c mov.s $f12, $f20
        r.a0 = r.s1;                                             // 2bdb10 daddu $a0, $s1, $zero
        r.ra = 0x2bdb1cu;                                        // 2bdb14 jal func_214D68
        r.a1 = addiu(0u, 117);                                   // 2bdb18 addiu $a1, $zero, 0x75
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2bdb14u, 0x2bdb1cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bdb1c:
        // 2bdb1c b . + 4 + (0x16C << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdb20 lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2bdb24:
        r.ra = 0x2bdb2cu;                                        // 2bdb24 jal func_215820
        r.a1 = addiu(0u, 10);                                    // 2bdb28 addiu $a1, $zero, 0xA
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2bdb24u, 0x2bdb2cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2bdb2c:
        if (r.v0 != 0u)                                          // 2bdb2c bnel $v0, $zero, . + 4 + (0x168 << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdb30 lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.at = sext32(0x3f800000u);                              // 2bdb34 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bdb38 mtc1 $at, $f13
        r.f12 = FPU_MOV_S(r.f20);                                // 2bdb3c mov.s $f12, $f20
        r.a0 = r.s1;                                             // 2bdb40 daddu $a0, $s1, $zero
        r.ra = 0x2bdb4cu;                                        // 2bdb44 jal func_214D68
        r.a1 = addiu(0u, 10);                                    // 2bdb48 addiu $a1, $zero, 0xA
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2bdb44u, 0x2bdb4cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bdb4c:
        // 2bdb4c b . + 4 + (0x160 << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdb50 lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2bdb54:
        r.f0 = FPU_NEG_S(r.f0);                                  // 2bdb54 neg.s $f0, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 2bdb58 c.lt.s $f1, $f0
        t = (r.fcr31 & kCondition) == 0u;                        // 2bdb60 bc1f . + 4 + (0x1B << 2)
        r.v0 = r.v1 & 0x4u;                                      // 2bdb64 andi $v0, $v1, 0x4
        if (t) goto L_2bdbd0;
        t = r.v0 == 0u;                                          // 2bdb68 beqz $v0, . + 4 + (0xD << 2)
        r.a0 = r.s1;                                             // 2bdb6c daddu $a0, $s1, $zero
        if (t) goto L_2bdba0;
        r.ra = 0x2bdb78u;                                        // 2bdb70 jal func_215820
        r.a1 = addiu(0u, 118);                                   // 2bdb74 addiu $a1, $zero, 0x76
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2bdb70u, 0x2bdb78u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2bdb78:
        if (r.v0 != 0u)                                          // 2bdb78 bnel $v0, $zero, . + 4 + (0x155 << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdb7c lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.at = sext32(0x3f800000u);                              // 2bdb80 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bdb84 mtc1 $at, $f13
        r.f12 = FPU_MOV_S(r.f20);                                // 2bdb88 mov.s $f12, $f20
        r.a0 = r.s1;                                             // 2bdb8c daddu $a0, $s1, $zero
        r.ra = 0x2bdb98u;                                        // 2bdb90 jal func_214D68
        r.a1 = addiu(0u, 118);                                   // 2bdb94 addiu $a1, $zero, 0x76
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2bdb90u, 0x2bdb98u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bdb98:
        // 2bdb98 b . + 4 + (0x14D << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdb9c lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2bdba0:
        r.ra = 0x2bdba8u;                                        // 2bdba0 jal func_215820
        r.a1 = addiu(0u, 7);                                     // 2bdba4 addiu $a1, $zero, 0x7
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2bdba0u, 0x2bdba8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2bdba8:
        if (r.v0 != 0u)                                          // 2bdba8 bnel $v0, $zero, . + 4 + (0x149 << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdbac lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.at = sext32(0x3f800000u);                              // 2bdbb0 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bdbb4 mtc1 $at, $f13
        r.f12 = FPU_MOV_S(r.f20);                                // 2bdbb8 mov.s $f12, $f20
        r.a0 = r.s1;                                             // 2bdbbc daddu $a0, $s1, $zero
        r.ra = 0x2bdbc8u;                                        // 2bdbc0 jal func_214D68
        r.a1 = addiu(0u, 7);                                     // 2bdbc4 addiu $a1, $zero, 0x7
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2bdbc0u, 0x2bdbc8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bdbc8:
        // 2bdbc8 b . + 4 + (0x141 << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdbcc lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2bdbd0:
        t = r.v0 == 0u;                                          // 2bdbd0 beqz $v0, . + 4 + (0xD << 2)
        r.a0 = r.s1;                                             // 2bdbd4 daddu $a0, $s1, $zero
        if (t) goto L_2bdc08;
        r.ra = 0x2bdbe0u;                                        // 2bdbd8 jal func_215820
        r.a1 = addiu(0u, 116);                                   // 2bdbdc addiu $a1, $zero, 0x74
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2bdbd8u, 0x2bdbe0u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2bdbe0:
        if (r.v0 != 0u)                                          // 2bdbe0 bnel $v0, $zero, . + 4 + (0x13B << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdbe4 lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.at = sext32(0x3f800000u);                              // 2bdbe8 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bdbec mtc1 $at, $f13
        r.f12 = FPU_MOV_S(r.f20);                                // 2bdbf0 mov.s $f12, $f20
        r.a0 = r.s1;                                             // 2bdbf4 daddu $a0, $s1, $zero
        r.ra = 0x2bdc00u;                                        // 2bdbf8 jal func_214D68
        r.a1 = addiu(0u, 116);                                   // 2bdbfc addiu $a1, $zero, 0x74
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2bdbf8u, 0x2bdc00u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bdc00:
        // 2bdc00 b . + 4 + (0x133 << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdc04 lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2bdc08:
        r.ra = 0x2bdc10u;                                        // 2bdc08 jal func_215820
        r.a1 = addiu(0u, 11);                                    // 2bdc0c addiu $a1, $zero, 0xB
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2bdc08u, 0x2bdc10u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2bdc10:
        if (r.v0 != 0u)                                          // 2bdc10 bnel $v0, $zero, . + 4 + (0x12F << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdc14 lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.at = sext32(0x3f800000u);                              // 2bdc18 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bdc1c mtc1 $at, $f13
        r.f12 = FPU_MOV_S(r.f20);                                // 2bdc20 mov.s $f12, $f20
        r.a0 = r.s1;                                             // 2bdc24 daddu $a0, $s1, $zero
        r.ra = 0x2bdc30u;                                        // 2bdc28 jal func_214D68
        r.a1 = addiu(0u, 11);                                    // 2bdc2c addiu $a1, $zero, 0xB
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2bdc28u, 0x2bdc30u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bdc30:
        // 2bdc30 b . + 4 + (0x127 << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdc34 lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2bdc38:
        r.at = sext32(0x3e800000u);                              // 2bdc38 lui $at, 0x3E80
        r.f20 = floatOf(lo32(r.at));                             // 2bdc3c mtc1 $at, $f20
        r.v0 = r.v0 & 0x2u;                                      // 2bdc40 andi $v0, $v0, 0x2
        t = r.v0 == 0u;                                          // 2bdc44 beqz $v0, . + 4 + (0x2 << 2)
        r.f1 = LWC1(lo32(r.s2) + 0xb3cu);                        // 2bdc48 lwc1 $f1, 0xB3C($s2)
        if (t) goto L_2bdc50;
        r.f20 = floatOf(lo32(0u));                               // 2bdc4c mtc1 $zero, $f20
    L_2bdc50:
        r.f0 = floatOf(lo32(0u));                                // 2bdc50 mtc1 $zero, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLE_S(r.f0, r.f1)); // 2bdc54 c.le.s $f0, $f1
        t = (r.fcr31 & kCondition) == 0u;                        // 2bdc5c bc1f . + 4 + (0xE4 << 2)
        r.f0 = LWC1(lo32(r.s2) + 0xb2cu);                        // 2bdc60 lwc1 $f0, 0xB2C($s2)
        if (t) goto L_2bdff0;
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f1)); // 2bdc64 c.lt.s $f0, $f1
        t = (r.fcr31 & kCondition) == 0u;                        // 2bdc6c bc1f . + 4 + (0x80 << 2)
        r.v0 = r.v1 & 0x4u;                                      // 2bdc70 andi $v0, $v1, 0x4
        if (t) goto L_2bde70;
        t = r.v0 == 0u;                                          // 2bdc74 beqz $v0, . + 4 + (0xD << 2)
        r.a0 = r.s1;                                             // 2bdc78 daddu $a0, $s1, $zero
        if (t) goto L_2bdcac;
        r.ra = 0x2bdc84u;                                        // 2bdc7c jal func_215820
        r.a1 = addiu(0u, 114);                                   // 2bdc80 addiu $a1, $zero, 0x72
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2bdc7cu, 0x2bdc84u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2bdc84:
        if (r.v0 != 0u)                                          // 2bdc84 bnel $v0, $zero, . + 4 + (0x112 << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdc88 lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.at = sext32(0x3f800000u);                              // 2bdc8c lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bdc90 mtc1 $at, $f13
        r.f12 = FPU_MOV_S(r.f20);                                // 2bdc94 mov.s $f12, $f20
        r.a0 = r.s1;                                             // 2bdc98 daddu $a0, $s1, $zero
        r.ra = 0x2bdca4u;                                        // 2bdc9c jal func_214D68
        r.a1 = addiu(0u, 114);                                   // 2bdca0 addiu $a1, $zero, 0x72
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2bdc9cu, 0x2bdca4u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bdca4:
        // 2bdca4 b . + 4 + (0x10A << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdca8 lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2bdcac:
        r.ra = 0x2bdcb4u;                                        // 2bdcac jal func_215820
        r.a1 = addiu(0u, 4);                                     // 2bdcb0 addiu $a1, $zero, 0x4
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2bdcacu, 0x2bdcb4u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s0, 16); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2bdcb4:
        if (r.v0 != 0u) goto L_2bdd88;                           // 2bdcb4 bnez $v0, . + 4 + (0x34 << 2)
        r.v0 = LW(lo32(r.s2) + 0xad8u);                          // 2bdcbc lw $v0, 0xAD8($s2)
        if (neg64(r.v0)) goto L_2bdd74;                          // 2bdcc0 bltz $v0, . + 4 + (0x2C << 2)
        r.v0 = LW(lo32(r.s2) + 0xa90u);                          // 2bdcc8 lw $v0, 0xA90($s2)
        r.v0 = r.v0 & 0x8u;                                      // 2bdccc andi $v0, $v0, 0x8
        if (r.v0 == 0u) goto L_2bdd74;                           // 2bdcd0 beqz $v0, . + 4 + (0x28 << 2)
        r.v0 = LW(lo32(r.s2) + 0xa9cu);                          // 2bdcd8 lw $v0, 0xA9C($s2)
        if (r.v0 == r.s0) goto L_2bdd74;                         // 2bdcdc beq $v0, $s0, . + 4 + (0x25 << 2)
        r.f1 = LWC1(lo32(r.s2) + 0xb84u);                        // 2bdce4 lwc1 $f1, 0xB84($s2)
        r.at = sext32(0x41c80000u);                              // 2bdce8 lui $at, 0x41C8
        r.f0 = floatOf(lo32(r.at));                              // 2bdcec mtc1 $at, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f1)); // 2bdcf0 c.lt.s $f0, $f1
        if ((r.fcr31 & kCondition) == 0u) goto L_2bdd74;         // 2bdcf4 bc1f . + 4 + (0x1F << 2)
        r.ra = 0x2bdd04u;                                        // 2bdcfc jal func_2B68D0
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2b68d0u, 0x2bdcfcu, 0x2bdd04u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2bdd04:
        t = neg64(r.v0);                                         // 2bdd04 bltz $v0, . + 4 + (0x4 << 2)
        r.v1 = srl32(r.v0, 1);                                   // 2bdd08 srl $v1, $v0, 1
        if (t) goto L_2bdd18;
        r.f2 = floatOf(lo32(r.v0));                              // 2bdd0c mtc1 $v0, $f2
        // 2bdd10 b . + 4 + (0x6 << 2)
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 2bdd14 cvt.s.w $f2, $f2
        goto L_2bdd2c;
    L_2bdd18:
        r.v0 = r.v0 & 0x1u;                                      // 2bdd18 andi $v0, $v0, 0x1
        r.v0 = r.v0 | r.v1;                                      // 2bdd1c or $v0, $v0, $v1
        r.f2 = floatOf(lo32(r.v0));                              // 2bdd20 mtc1 $v0, $f2
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 2bdd24 cvt.s.w $f2, $f2
        r.f2 = FPU_ADD_S(r.f2, r.f2);                            // 2bdd28 add.s $f2, $f2, $f2
    L_2bdd2c:
        r.at = sext32(0x2f800000u);                              // 2bdd2c lui $at, 0x2F80
        r.f0 = floatOf(lo32(r.at));                              // 2bdd30 mtc1 $at, $f0
        r.f1 = LWC1(lo32(r.gp) - 0x6fb0u);                       // 2bdd34 lwc1 $f1, -0x6FB0($gp)
        r.f0 = FPU_MUL_S(r.f2, r.f0);                            // 2bdd38 mul.s $f0, $f2, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 2bdd3c c.lt.s $f1, $f0
        t = (r.fcr31 & kCondition) == 0u;                        // 2bdd44 bc1f . + 4 + (0xB << 2)
        r.f12 = FPU_MOV_S(r.f20);                                // 2bdd48 mov.s $f12, $f20
        if (t) goto L_2bdd74;
        r.at = sext32(0x3f800000u);                              // 2bdd4c lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bdd50 mtc1 $at, $f13
        r.a0 = r.s1;                                             // 2bdd54 daddu $a0, $s1, $zero
        r.ra = 0x2bdd60u;                                        // 2bdd58 jal func_214D68
        r.a1 = addiu(0u, 443);                                   // 2bdd5c addiu $a1, $zero, 0x1BB
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(12); STORE_F(13); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x214d68u, 0x2bdd58u, 0x2bdd60u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bdd60:
        r.v1 = LW(lo32(r.s2) + 0xa90u);                          // 2bdd60 lw $v1, 0xA90($s2)
        r.v0 = sext32(0xffff0000u);                              // 2bdd64 lui $v0, 0xFFFF
        r.v0 = r.v0 | 0xfff7u;                                   // 2bdd68 ori $v0, $v0, 0xFFF7
        // 2bdd6c b . + 4 + (0x35 << 2)
        WRITE32(lo32(r.s2) + 0xb84u, lo32(0u));                  // 2bdd70 sw $zero, 0xB84($s2)
        goto L_2bde44;
    L_2bdd74:
        r.at = sext32(0x3f800000u);                              // 2bdd74 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bdd78 mtc1 $at, $f13
        r.f12 = FPU_MOV_S(r.f20);                                // 2bdd7c mov.s $f12, $f20
        // 2bdd80 b . + 4 + (0x37 << 2)
        r.a0 = r.s1;                                             // 2bdd84 daddu $a0, $s1, $zero
        goto L_2bde60;
    L_2bdd88:
        r.ra = 0x2bdd90u;                                        // 2bdd88 jal func_215B00
        r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2bdd8c lw $a0, 0x20($s1)
        STORE_GPR(a0, 4); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215b00u, 0x2bdd88u, 0x2bdd90u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bdd90:
        if (r.v0 == 0u)                                          // 2bdd90 beql $v0, $zero, . + 4 + (0xCF << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdd94 lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.v0 = LW(lo32(r.s2) + 0xad8u);                          // 2bdd98 lw $v0, 0xAD8($s2)
        if (neg64(r.v0)) goto L_2bde50;                          // 2bdd9c bltz $v0, . + 4 + (0x2C << 2)
        r.v0 = LW(lo32(r.s2) + 0xa90u);                          // 2bdda4 lw $v0, 0xA90($s2)
        r.v0 = r.v0 & 0x8u;                                      // 2bdda8 andi $v0, $v0, 0x8
        if (r.v0 == 0u) goto L_2bde50;                           // 2bddac beqz $v0, . + 4 + (0x28 << 2)
        r.f1 = LWC1(lo32(r.s2) + 0xb84u);                        // 2bddb4 lwc1 $f1, 0xB84($s2)
        r.at = sext32(0x41c80000u);                              // 2bddb8 lui $at, 0x41C8
        r.f0 = floatOf(lo32(r.at));                              // 2bddbc mtc1 $at, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f1)); // 2bddc0 c.lt.s $f0, $f1
        if ((r.fcr31 & kCondition) == 0u) goto L_2bde50;         // 2bddc4 bc1f . + 4 + (0x22 << 2)
        r.ra = 0x2bddd4u;                                        // 2bddcc jal func_2B68D0
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2b68d0u, 0x2bddccu, 0x2bddd4u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17); LOAD_GPR(gp, 28); r.fcr31 = ctx->fcr31;
    L_2bddd4:
        t = neg64(r.v0);                                         // 2bddd4 bltz $v0, . + 4 + (0x4 << 2)
        r.v1 = srl32(r.v0, 1);                                   // 2bddd8 srl $v1, $v0, 1
        if (t) goto L_2bdde8;
        r.f2 = floatOf(lo32(r.v0));                              // 2bdddc mtc1 $v0, $f2
        // 2bdde0 b . + 4 + (0x6 << 2)
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 2bdde4 cvt.s.w $f2, $f2
        goto L_2bddfc;
    L_2bdde8:
        r.v0 = r.v0 & 0x1u;                                      // 2bdde8 andi $v0, $v0, 0x1
        r.v0 = r.v0 | r.v1;                                      // 2bddec or $v0, $v0, $v1
        r.f2 = floatOf(lo32(r.v0));                              // 2bddf0 mtc1 $v0, $f2
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 2bddf4 cvt.s.w $f2, $f2
        r.f2 = FPU_ADD_S(r.f2, r.f2);                            // 2bddf8 add.s $f2, $f2, $f2
    L_2bddfc:
        r.at = sext32(0x2f800000u);                              // 2bddfc lui $at, 0x2F80
        r.f0 = floatOf(lo32(r.at));                              // 2bde00 mtc1 $at, $f0
        r.f1 = LWC1(lo32(r.gp) - 0x6facu);                       // 2bde04 lwc1 $f1, -0x6FAC($gp)
        r.f0 = FPU_MUL_S(r.f2, r.f0);                            // 2bde08 mul.s $f0, $f2, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 2bde0c c.lt.s $f1, $f0
        t = (r.fcr31 & kCondition) == 0u;                        // 2bde14 bc1f . + 4 + (0xE << 2)
        r.a0 = r.s1;                                             // 2bde18 daddu $a0, $s1, $zero
        if (t) goto L_2bde50;
        r.f20 = floatOf(lo32(0u));                               // 2bde1c mtc1 $zero, $f20
        r.at = sext32(0x3f800000u);                              // 2bde20 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bde24 mtc1 $at, $f13
        r.a1 = addiu(0u, 443);                                   // 2bde28 addiu $a1, $zero, 0x1BB
        r.ra = 0x2bde34u;                                        // 2bde2c jal func_214D68
        r.f12 = FPU_MOV_S(r.f20);                                // 2bde30 mov.s $f12, $f20
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(12); STORE_F(13); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x214d68u, 0x2bde2cu, 0x2bde34u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2bde34:
        r.v1 = LW(lo32(r.s2) + 0xa90u);                          // 2bde34 lw $v1, 0xA90($s2)
        r.v0 = sext32(0xffff0000u);                              // 2bde38 lui $v0, 0xFFFF
        r.v0 = r.v0 | 0xfff7u;                                   // 2bde3c ori $v0, $v0, 0xFFF7
        SWC1(lo32(r.s2) + 0xb84u, r.f20);                        // 2bde40 swc1 $f20, 0xB84($s2)
    L_2bde44:
        r.v1 = r.v1 & r.v0;                                      // 2bde44 and $v1, $v1, $v0
        // 2bde48 b . + 4 + (0xA0 << 2)
        WRITE32(lo32(r.s2) + 0xa90u, lo32(r.v1));                // 2bde4c sw $v1, 0xA90($s2)
        goto L_2be0cc;
    L_2bde50:
        r.f12 = floatOf(lo32(0u));                               // 2bde50 mtc1 $zero, $f12
        r.a0 = r.s1;                                             // 2bde54 daddu $a0, $s1, $zero
        r.at = sext32(0x3f800000u);                              // 2bde58 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bde5c mtc1 $at, $f13
    L_2bde60:
        r.ra = 0x2bde68u;                                        // 2bde60 jal func_214D68
        r.a1 = addiu(0u, 4);                                     // 2bde64 addiu $a1, $zero, 0x4
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(12); STORE_F(13); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x214d68u, 0x2bde60u, 0x2bde68u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bde68:
        // 2bde68 b . + 4 + (0x99 << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bde6c lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2bde70:
        t = r.v0 == 0u;                                          // 2bde70 beqz $v0, . + 4 + (0xD << 2)
        r.a0 = r.s1;                                             // 2bde74 daddu $a0, $s1, $zero
        if (t) goto L_2bdea8;
        r.ra = 0x2bde80u;                                        // 2bde78 jal func_215820
        r.a1 = addiu(0u, 120);                                   // 2bde7c addiu $a1, $zero, 0x78
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2bde78u, 0x2bde80u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2bde80:
        if (r.v0 != 0u)                                          // 2bde80 bnel $v0, $zero, . + 4 + (0x93 << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bde84 lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.at = sext32(0x3f800000u);                              // 2bde88 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bde8c mtc1 $at, $f13
        r.f12 = FPU_MOV_S(r.f20);                                // 2bde90 mov.s $f12, $f20
        r.a0 = r.s1;                                             // 2bde94 daddu $a0, $s1, $zero
        r.ra = 0x2bdea0u;                                        // 2bde98 jal func_214D68
        r.a1 = addiu(0u, 120);                                   // 2bde9c addiu $a1, $zero, 0x78
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2bde98u, 0x2bdea0u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bdea0:
        // 2bdea0 b . + 4 + (0x8B << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdea4 lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2bdea8:
        r.ra = 0x2bdeb0u;                                        // 2bdea8 jal func_2CC3A0
        r.a0 = r.s1;                                             // 2bdeac daddu $a0, $s1, $zero
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2cc3a0u, 0x2bdea8u, 0x2bdeb0u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); r.fcr31 = ctx->fcr31;
    L_2bdeb0:
        t = r.v0 == 0u;                                          // 2bdeb0 beqz $v0, . + 4 + (0x33 << 2)
        r.a0 = r.s1;                                             // 2bdeb4 daddu $a0, $s1, $zero
        if (t) goto L_2bdf80;
        r.ra = 0x2bdec0u;                                        // 2bdeb8 jal func_215820
        r.a1 = addiu(0u, 444);                                   // 2bdebc addiu $a1, $zero, 0x1BC
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bdeb8u, 0x2bdec0u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); r.fcr31 = ctx->fcr31;
    L_2bdec0:
        t = r.v0 != 0u;                                          // 2bdec0 bnez $v0, . + 4 + (0x2F << 2)
        r.a0 = r.s1;                                             // 2bdec4 daddu $a0, $s1, $zero
        if (t) goto L_2bdf80;
        r.ra = 0x2bded0u;                                        // 2bdec8 jal func_215820
        r.a1 = addiu(0u, 445);                                   // 2bdecc addiu $a1, $zero, 0x1BD
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bdec8u, 0x2bded0u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); r.fcr31 = ctx->fcr31;
    L_2bded0:
        t = r.v0 != 0u;                                          // 2bded0 bnez $v0, . + 4 + (0x2B << 2)
        r.a0 = r.s1;                                             // 2bded4 daddu $a0, $s1, $zero
        if (t) goto L_2bdf80;
        r.ra = 0x2bdee0u;                                        // 2bded8 jal func_215820
        r.a1 = addiu(0u, 446);                                   // 2bdedc addiu $a1, $zero, 0x1BE
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bded8u, 0x2bdee0u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_F(0); LOAD_F(1); LOAD_F(2); r.fcr31 = ctx->fcr31;
    L_2bdee0:
        t = r.v0 != 0u;                                          // 2bdee0 bnez $v0, . + 4 + (0x27 << 2)
        r.a0 = r.s1;                                             // 2bdee4 daddu $a0, $s1, $zero
        if (t) goto L_2bdf80;
        r.ra = 0x2bdef0u;                                        // 2bdee8 jal func_2B68D0
        STORE_GPR(a0, 4); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2b68d0u, 0x2bdee8u, 0x2bdef0u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(gp, 28); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2bdef0:
        t = neg64(r.v0);                                         // 2bdef0 bltz $v0, . + 4 + (0x4 << 2)
        r.v1 = srl32(r.v0, 1);                                   // 2bdef4 srl $v1, $v0, 1
        if (t) goto L_2bdf04;
        r.f2 = floatOf(lo32(r.v0));                              // 2bdef8 mtc1 $v0, $f2
        // 2bdefc b . + 4 + (0x6 << 2)
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 2bdf00 cvt.s.w $f2, $f2
        goto L_2bdf18;
    L_2bdf04:
        r.v0 = r.v0 & 0x1u;                                      // 2bdf04 andi $v0, $v0, 0x1
        r.v0 = r.v0 | r.v1;                                      // 2bdf08 or $v0, $v0, $v1
        r.f2 = floatOf(lo32(r.v0));                              // 2bdf0c mtc1 $v0, $f2
        r.f2 = static_cast<float>(static_cast<int32_t>(bitsOf(r.f2))); // 2bdf10 cvt.s.w $f2, $f2
        r.f2 = FPU_ADD_S(r.f2, r.f2);                            // 2bdf14 add.s $f2, $f2, $f2
    L_2bdf18:
        r.at = sext32(0x2f800000u);                              // 2bdf18 lui $at, 0x2F80
        r.f0 = floatOf(lo32(r.at));                              // 2bdf1c mtc1 $at, $f0
        r.f1 = LWC1(lo32(r.gp) - 0x6fa8u);                       // 2bdf20 lwc1 $f1, -0x6FA8($gp)
        r.f0 = FPU_MUL_S(r.f2, r.f0);                            // 2bdf24 mul.s $f0, $f2, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f0, r.f1)); // 2bdf28 c.lt.s $f0, $f1
        t = (r.fcr31 & kCondition) == 0u;                        // 2bdf30 bc1f . + 4 + (0x13 << 2)
        r.a0 = r.s1;                                             // 2bdf34 daddu $a0, $s1, $zero
        if (t) goto L_2bdf80;
        r.f0 = LWC1(lo32(r.s2) + 0xb2cu);                        // 2bdf38 lwc1 $f0, 0xB2C($s2)
        r.v0 = LW(lo32(r.s2) + 0x1b8u);                          // 2bdf3c lw $v0, 0x1B8($s2)
        t = r.v0 == 0u;                                          // 2bdf40 beqz $v0, . + 4 + (0x8 << 2)
        SWC1(lo32(r.s2) + 0xb3cu, r.f0);                         // 2bdf44 swc1 $f0, 0xB3C($s2)
        if (t) goto L_2bdf64;
        r.f13 = LWC1(lo32(r.gp) - 0x6fa4u);                      // 2bdf48 lwc1 $f13, -0x6FA4($gp)
        r.f12 = FPU_MOV_S(r.f20);                                // 2bdf4c mov.s $f12, $f20
        r.a0 = r.s1;                                             // 2bdf50 daddu $a0, $s1, $zero
        r.ra = 0x2bdf5cu;                                        // 2bdf54 jal func_214D68
        r.a1 = addiu(0u, 446);                                   // 2bdf58 addiu $a1, $zero, 0x1BE
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(12); STORE_F(13); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x214d68u, 0x2bdf54u, 0x2bdf5cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bdf5c:
        // 2bdf5c b . + 4 + (0x5C << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdf60 lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2bdf64:
        r.f13 = LWC1(lo32(r.gp) - 0x6fa0u);                      // 2bdf64 lwc1 $f13, -0x6FA0($gp)
        r.f12 = FPU_MOV_S(r.f20);                                // 2bdf68 mov.s $f12, $f20
        r.a0 = r.s1;                                             // 2bdf6c daddu $a0, $s1, $zero
        r.ra = 0x2bdf78u;                                        // 2bdf70 jal func_214D68
        r.a1 = addiu(0u, 444);                                   // 2bdf74 addiu $a1, $zero, 0x1BC
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(12); STORE_F(13); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x214d68u, 0x2bdf70u, 0x2bdf78u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bdf78:
        // 2bdf78 b . + 4 + (0x55 << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdf7c lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2bdf80:
        r.ra = 0x2bdf88u;                                        // 2bdf80 jal func_215820
        r.a1 = addiu(0u, 8);                                     // 2bdf84 addiu $a1, $zero, 0x8
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2bdf80u, 0x2bdf88u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17);
    L_2bdf88:
        t = r.v0 != 0u;                                          // 2bdf88 bnez $v0, . + 4 + (0xD << 2)
        r.a0 = r.s1;                                             // 2bdf8c daddu $a0, $s1, $zero
        if (t) goto L_2bdfc0;
        r.ra = 0x2bdf98u;                                        // 2bdf90 jal func_215820
        r.a1 = addiu(0u, 444);                                   // 2bdf94 addiu $a1, $zero, 0x1BC
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bdf90u, 0x2bdf98u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17);
    L_2bdf98:
        t = r.v0 != 0u;                                          // 2bdf98 bnez $v0, . + 4 + (0x9 << 2)
        r.a0 = r.s1;                                             // 2bdf9c daddu $a0, $s1, $zero
        if (t) goto L_2bdfc0;
        r.ra = 0x2bdfa8u;                                        // 2bdfa0 jal func_215820
        r.a1 = addiu(0u, 445);                                   // 2bdfa4 addiu $a1, $zero, 0x1BD
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bdfa0u, 0x2bdfa8u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17);
    L_2bdfa8:
        t = r.v0 != 0u;                                          // 2bdfa8 bnez $v0, . + 4 + (0x5 << 2)
        r.a0 = r.s1;                                             // 2bdfac daddu $a0, $s1, $zero
        if (t) goto L_2bdfc0;
        r.ra = 0x2bdfb8u;                                        // 2bdfb0 jal func_215820
        r.a1 = addiu(0u, 446);                                   // 2bdfb4 addiu $a1, $zero, 0x1BE
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2bdfb0u, 0x2bdfb8u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17); LOAD_F(20);
    L_2bdfb8:
        if (r.v0 == 0u) goto L_2bdfd0;                           // 2bdfb8 beqz $v0, . + 4 + (0x5 << 2)
    L_2bdfc0:
        r.ra = 0x2bdfc8u;                                        // 2bdfc0 jal func_215B00
        r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2bdfc4 lw $a0, 0x20($s1)
        STORE_GPR(a0, 4); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215b00u, 0x2bdfc0u, 0x2bdfc8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2bdfc8:
        if (r.v0 == 0u)                                          // 2bdfc8 beql $v0, $zero, . + 4 + (0x41 << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdfcc lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
    L_2bdfd0:
        r.at = sext32(0x3f800000u);                              // 2bdfd0 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2bdfd4 mtc1 $at, $f13
        r.f12 = FPU_MOV_S(r.f20);                                // 2bdfd8 mov.s $f12, $f20
        r.a0 = r.s1;                                             // 2bdfdc daddu $a0, $s1, $zero
        r.ra = 0x2bdfe8u;                                        // 2bdfe0 jal func_214D68
        r.a1 = addiu(0u, 8);                                     // 2bdfe4 addiu $a1, $zero, 0x8
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2bdfe0u, 0x2bdfe8u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2bdfe8:
        // 2bdfe8 b . + 4 + (0x39 << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2bdfec lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2bdff0:
        r.f0 = FPU_NEG_S(r.f0);                                  // 2bdff0 neg.s $f0, $f0
        r.fcr31 = conditionBit(r.fcr31, FPU_C_OLT_S(r.f1, r.f0)); // 2bdff4 c.lt.s $f1, $f0
        t = (r.fcr31 & kCondition) == 0u;                        // 2bdffc bc1f . + 4 + (0x1B << 2)
        r.v0 = r.v1 & 0x4u;                                      // 2be000 andi $v0, $v1, 0x4
        if (t) goto L_2be06c;
        t = r.v0 == 0u;                                          // 2be004 beqz $v0, . + 4 + (0xD << 2)
        r.a0 = r.s1;                                             // 2be008 daddu $a0, $s1, $zero
        if (t) goto L_2be03c;
        r.ra = 0x2be014u;                                        // 2be00c jal func_215820
        r.a1 = addiu(0u, 115);                                   // 2be010 addiu $a1, $zero, 0x73
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2be00cu, 0x2be014u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2be014:
        if (r.v0 != 0u)                                          // 2be014 bnel $v0, $zero, . + 4 + (0x2E << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2be018 lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.at = sext32(0x3f800000u);                              // 2be01c lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2be020 mtc1 $at, $f13
        r.f12 = FPU_MOV_S(r.f20);                                // 2be024 mov.s $f12, $f20
        r.a0 = r.s1;                                             // 2be028 daddu $a0, $s1, $zero
        r.ra = 0x2be034u;                                        // 2be02c jal func_214D68
        r.a1 = addiu(0u, 115);                                   // 2be030 addiu $a1, $zero, 0x73
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2be02cu, 0x2be034u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2be034:
        // 2be034 b . + 4 + (0x26 << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2be038 lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2be03c:
        r.ra = 0x2be044u;                                        // 2be03c jal func_215820
        r.a1 = addiu(0u, 5);                                     // 2be040 addiu $a1, $zero, 0x5
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2be03cu, 0x2be044u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2be044:
        if (r.v0 != 0u)                                          // 2be044 bnel $v0, $zero, . + 4 + (0x22 << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2be048 lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.at = sext32(0x3f800000u);                              // 2be04c lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2be050 mtc1 $at, $f13
        r.f12 = FPU_MOV_S(r.f20);                                // 2be054 mov.s $f12, $f20
        r.a0 = r.s1;                                             // 2be058 daddu $a0, $s1, $zero
        r.ra = 0x2be064u;                                        // 2be05c jal func_214D68
        r.a1 = addiu(0u, 5);                                     // 2be060 addiu $a1, $zero, 0x5
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2be05cu, 0x2be064u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2be064:
        // 2be064 b . + 4 + (0x1A << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2be068 lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2be06c:
        t = r.v0 == 0u;                                          // 2be06c beqz $v0, . + 4 + (0xD << 2)
        r.a0 = r.s1;                                             // 2be070 daddu $a0, $s1, $zero
        if (t) goto L_2be0a4;
        r.ra = 0x2be07cu;                                        // 2be074 jal func_215820
        r.a1 = addiu(0u, 121);                                   // 2be078 addiu $a1, $zero, 0x79
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2be074u, 0x2be07cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2be07c:
        if (r.v0 != 0u)                                          // 2be07c bnel $v0, $zero, . + 4 + (0x14 << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2be080 lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.at = sext32(0x3f800000u);                              // 2be084 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2be088 mtc1 $at, $f13
        r.f12 = FPU_MOV_S(r.f20);                                // 2be08c mov.s $f12, $f20
        r.a0 = r.s1;                                             // 2be090 daddu $a0, $s1, $zero
        r.ra = 0x2be09cu;                                        // 2be094 jal func_214D68
        r.a1 = addiu(0u, 121);                                   // 2be098 addiu $a1, $zero, 0x79
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2be094u, 0x2be09cu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2be09c:
        // 2be09c b . + 4 + (0xC << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2be0a0 lw $v0, 0xA94($s2)
        goto L_2be0d0;
    L_2be0a4:
        r.ra = 0x2be0acu;                                        // 2be0a4 jal func_215820
        r.a1 = addiu(0u, 9);                                     // 2be0a8 addiu $a1, $zero, 0x9
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215820u, 0x2be0a4u, 0x2be0acu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v0, 2); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); LOAD_F(20); r.fcr31 = ctx->fcr31;
    L_2be0ac:
        if (r.v0 != 0u)                                          // 2be0ac bnel $v0, $zero, . + 4 + (0x8 << 2)
        {
            r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2be0b0 lw $v0, 0xA94($s2)
            goto L_2be0d0;
        }
        r.at = sext32(0x3f800000u);                              // 2be0b4 lui $at, 0x3F80
        r.f13 = floatOf(lo32(r.at));                             // 2be0b8 mtc1 $at, $f13
        r.f12 = FPU_MOV_S(r.f20);                                // 2be0bc mov.s $f12, $f20
        r.a0 = r.s1;                                             // 2be0c0 daddu $a0, $s1, $zero
        r.ra = 0x2be0ccu;                                        // 2be0c4 jal func_214D68
        r.a1 = addiu(0u, 9);                                     // 2be0c8 addiu $a1, $zero, 0x9
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(12); STORE_F(13);
        if (!guestCall(G_PASS, 0x214d68u, 0x2be0c4u, 0x2be0ccu)) return;
        LOAD_GPR(at, 1); LOAD_GPR(v1, 3); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29); LOAD_F(0); LOAD_F(1); LOAD_F(2); LOAD_F(3); r.fcr31 = ctx->fcr31;
    L_2be0cc:
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2be0cc lw $v0, 0xA94($s2)
    L_2be0d0:
        r.v0 = r.v0 & 0x2u;                                      // 2be0d0 andi $v0, $v0, 0x2
        t = r.v0 == 0u;                                          // 2be0d4 beqz $v0, . + 4 + (0x8 << 2)
        r.a0 = r.s1;                                             // 2be0d8 daddu $a0, $s1, $zero
        if (t) goto L_2be0f8;
        r.a1 = r.sp;                                             // 2be0dc daddu $a1, $sp, $zero
        r.a2 = r.sp | 0x4u;                                      // 2be0e0 ori $a2, $sp, 0x4
        r.a3 = r.sp | 0x8u;                                      // 2be0e4 ori $a3, $sp, 0x8
        r.ra = 0x2be0f0u;                                        // 2be0e8 jal func_215420
        r.t0 = 0u;                                               // 2be0ec daddu $t0, $zero, $zero
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215420u, 0x2be0e8u, 0x2be0f0u)) return;
        LOAD_GPR(s2, 18); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31;
    L_2be0f0:
        // 2be0f0 b . + 4 + (0x7 << 2)
        r.f12 = LWC1(lo32(r.s2) + 0xae0u);                       // 2be0f4 lwc1 $f12, 0xAE0($s2)
        goto L_2be110;
    L_2be0f8:
        r.a1 = r.sp;                                             // 2be0f8 daddu $a1, $sp, $zero
        r.a2 = r.sp | 0x4u;                                      // 2be0fc ori $a2, $sp, 0x4
        r.a3 = r.sp | 0x8u;                                      // 2be100 ori $a3, $sp, 0x8
        r.ra = 0x2be10cu;                                        // 2be104 jal func_215420
        r.t0 = addiu(0u, 2);                                     // 2be108 addiu $t0, $zero, 0x2
        STORE_GPR(at, 1); STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(a2, 6); STORE_GPR(a3, 7); STORE_GPR(t0, 8); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(2); STORE_F(3); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215420u, 0x2be104u, 0x2be10cu)) return;
        LOAD_GPR(s2, 18); LOAD_GPR(gp, 28); LOAD_GPR(sp, 29); r.fcr31 = ctx->fcr31;
    L_2be10c:
        r.f12 = LWC1(lo32(r.s2) + 0xae0u);                       // 2be10c lwc1 $f12, 0xAE0($s2)
    L_2be110:
        r.f0 = LWC1(lo32(r.gp) - 0x6f9cu);                       // 2be110 lwc1 $f0, -0x6F9C($gp)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f12, r.f0)); // 2be114 c.eq.s $f12, $f0
        if ((r.fcr31 & kCondition) != 0u) goto L_2be18c;         // 2be118 bc1t . + 4 + (0x1C << 2)
        r.ra = 0x2be128u;                                        // 2be120 jal func_2E4608
        r.s3 = 0u;                                               // 2be124 daddu $s3, $zero, $zero
        STORE_GPR(s3, 19); STORE_GPR(ra, 31); STORE_F(0); STORE_F(12); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2e4608u, 0x2be120u, 0x2be128u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s3, 19);
    L_2be128:
        r.s0 = r.v0;                                             // 2be128 daddu $s0, $v0, $zero
        r.a1 = r.s3;                                             // 2be12c daddu $a1, $s3, $zero
        r.ra = 0x2be138u;                                        // 2be130 jal func_2E3768
        r.a0 = r.s0;                                             // 2be134 daddu $a0, $s0, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3768u, 0x2be130u, 0x2be138u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16); LOAD_GPR(s3, 19);
    L_2be138:
        t = !neg64(r.v0);                                        // 2be138 bgez $v0, . + 4 + (0x4 << 2)
        r.a1 = r.s0;                                             // 2be13c daddu $a1, $s0, $zero
        if (t) goto L_2be14c;
        r.ra = 0x2be148u;                                        // 2be140 jal func_2E31D8
        r.a0 = r.s3;                                             // 2be144 daddu $a0, $s3, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e31d8u, 0x2be140u, 0x2be148u)) return;
        LOAD_GPR(v0, 2);
    L_2be148:
        r.s0 = r.v0;                                             // 2be148 daddu $s0, $v0, $zero
    L_2be14c:
        r.at = sext32(0x3b0000u);                                // 2be14c lui $at, 0x3B
        r.a1 = READ64(lo32(r.at) - 0x6320u);                     // 2be150 ld $a1, -0x6320($at)
        r.ra = 0x2be15cu;                                        // 2be154 jal func_2E34E8
        r.a0 = r.s0;                                             // 2be158 daddu $a0, $s0, $zero
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e34e8u, 0x2be154u, 0x2be15cu)) return;
        LOAD_GPR(v0, 2);
    L_2be15c:
        r.at = sext32(0x3b0000u);                                // 2be15c lui $at, 0x3B
        r.a1 = READ64(lo32(r.at) - 0x6318u);                     // 2be160 ld $a1, -0x6318($at)
        r.ra = 0x2be16cu;                                        // 2be164 jal func_2E3240
        r.a0 = r.v0;                                             // 2be168 daddu $a0, $v0, $zero
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3240u, 0x2be164u, 0x2be16cu)) return;
        LOAD_GPR(v0, 2);
    L_2be16c:
        r.a0 = 0u | 0xffc0u;                                     // 2be16c ori $a0, $zero, 0xFFC0
        r.a0 = r.a0 << 46;                                       // 2be170 dsll32 $a0, $a0, 14
        r.ra = 0x2be17cu;                                        // 2be174 jal func_2E31D8
        r.a1 = r.v0;                                             // 2be178 daddu $a1, $v0, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e31d8u, 0x2be174u, 0x2be17cu)) return;
        LOAD_GPR(v0, 2);
    L_2be17c:
        r.ra = 0x2be184u;                                        // 2be17c jal func_2E3A10
        r.a0 = r.v0;                                             // 2be180 daddu $a0, $v0, $zero
        STORE_GPR(a0, 4); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3a10u, 0x2be17cu, 0x2be184u)) return;
        LOAD_GPR(at, 1); LOAD_GPR(sp, 29); LOAD_F(0); r.fcr31 = ctx->fcr31;
    L_2be184:
        // 2be184 b . + 4 + (0x3 << 2)
        r.f20 = FPU_MOV_S(r.f0);                                 // 2be188 mov.s $f20, $f0
        goto L_2be194;
    L_2be18c:
        r.at = sext32(0x3f800000u);                              // 2be18c lui $at, 0x3F80
        r.f20 = floatOf(lo32(r.at));                             // 2be190 mtc1 $at, $f20
    L_2be194:
        r.f0 = LWC1(lo32(r.sp) + 0x4u);                          // 2be194 lwc1 $f0, 0x4($sp)
        r.s3 = 0u;                                               // 2be198 daddu $s3, $zero, $zero
        r.f12 = LWC1(lo32(r.sp));                                // 2be19c lwc1 $f12, 0x0($sp)
        r.ra = 0x2be1a8u;                                        // 2be1a0 jal func_2E4608
        r.f12 = FPU_SUB_S(r.f0, r.f12);                          // 2be1a4 sub.s $f12, $f0, $f12
        STORE_GPR(at, 1); STORE_GPR(s3, 19); STORE_GPR(ra, 31); STORE_F(0); STORE_F(12); STORE_F(20); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2e4608u, 0x2be1a0u, 0x2be1a8u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s3, 19);
    L_2be1a8:
        r.s0 = r.v0;                                             // 2be1a8 daddu $s0, $v0, $zero
        r.a1 = r.s3;                                             // 2be1ac daddu $a1, $s3, $zero
        r.ra = 0x2be1b8u;                                        // 2be1b0 jal func_2E3768
        r.a0 = r.s0;                                             // 2be1b4 daddu $a0, $s0, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3768u, 0x2be1b0u, 0x2be1b8u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16); LOAD_GPR(s3, 19);
    L_2be1b8:
        t = !neg64(r.v0);                                        // 2be1b8 bgez $v0, . + 4 + (0x4 << 2)
        r.a1 = r.s0;                                             // 2be1bc daddu $a1, $s0, $zero
        if (t) goto L_2be1cc;
        r.ra = 0x2be1c8u;                                        // 2be1c0 jal func_2E31D8
        r.a0 = r.s3;                                             // 2be1c4 daddu $a0, $s3, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e31d8u, 0x2be1c0u, 0x2be1c8u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(a1, 5);
    L_2be1c8:
        r.s0 = r.v0;                                             // 2be1c8 daddu $s0, $v0, $zero
    L_2be1cc:
        r.ra = 0x2be1d4u;                                        // 2be1cc jal func_2E3A10
        r.a0 = r.s0;                                             // 2be1d0 daddu $a0, $s0, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3a10u, 0x2be1ccu, 0x2be1d4u)) return;
        LOAD_GPR(s1, 17); LOAD_F(0);
    L_2be1d4:
        r.f21 = FPU_MOV_S(r.f0);                                 // 2be1d4 mov.s $f21, $f0
        r.a0 = r.s1;                                             // 2be1d8 daddu $a0, $s1, $zero
        r.ra = 0x2be1e4u;                                        // 2be1dc jal func_215820
        r.a1 = addiu(0u, 12);                                    // 2be1e0 addiu $a1, $zero, 0xC
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31); STORE_F(21);
        if (!guestCall(G_PASS, 0x215820u, 0x2be1dcu, 0x2be1e4u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17);
    L_2be1e4:
        t = r.v0 != 0u;                                          // 2be1e4 bnez $v0, . + 4 + (0xD << 2)
        r.a0 = r.s1;                                             // 2be1e8 daddu $a0, $s1, $zero
        if (t) goto L_2be21c;
        r.ra = 0x2be1f4u;                                        // 2be1ec jal func_215820
        r.a1 = addiu(0u, 13);                                    // 2be1f0 addiu $a1, $zero, 0xD
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2be1ecu, 0x2be1f4u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17);
    L_2be1f4:
        t = r.v0 != 0u;                                          // 2be1f4 bnez $v0, . + 4 + (0x9 << 2)
        r.a0 = r.s1;                                             // 2be1f8 daddu $a0, $s1, $zero
        if (t) goto L_2be21c;
        r.ra = 0x2be204u;                                        // 2be1fc jal func_215820
        r.a1 = addiu(0u, 122);                                   // 2be200 addiu $a1, $zero, 0x7A
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2be1fcu, 0x2be204u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17);
    L_2be204:
        t = r.v0 != 0u;                                          // 2be204 bnez $v0, . + 4 + (0x5 << 2)
        r.a0 = r.s1;                                             // 2be208 daddu $a0, $s1, $zero
        if (t) goto L_2be21c;
        r.ra = 0x2be214u;                                        // 2be20c jal func_215820
        r.a1 = addiu(0u, 123);                                   // 2be210 addiu $a1, $zero, 0x7B
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x215820u, 0x2be20cu, 0x2be214u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s1, 17); LOAD_GPR(s2, 18); LOAD_F(0); LOAD_F(20); LOAD_F(21); r.fcr31 = ctx->fcr31;
    L_2be214:
        if (r.v0 == 0u) goto L_2be234;                           // 2be214 beqz $v0, . + 4 + (0x7 << 2)
    L_2be21c:
        r.at = sext32(0x3f800000u);                              // 2be21c lui $at, 0x3F80
        r.f12 = floatOf(lo32(r.at));                             // 2be220 mtc1 $at, $f12
        r.ra = 0x2be22cu;                                        // 2be224 jal func_215B20
        r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2be228 lw $a0, 0x20($s1)
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x215b20u, 0x2be224u, 0x2be22cu)) return;
        LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29);
    L_2be22c:
        // 2be22c b . + 4 + (0x37 << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2be230 lw $v0, 0xA94($s2)
        goto L_2be30c;
    L_2be234:
        r.f1 = floatOf(lo32(0u));                                // 2be234 mtc1 $zero, $f1
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f21, r.f1)); // 2be238 c.eq.s $f21, $f1
        if ((r.fcr31 & kCondition) != 0u) goto L_2be2f8;         // 2be23c bc1t . + 4 + (0x2E << 2)
        r.f0 = LWC1(lo32(r.s2) + 0xb3cu);                        // 2be244 lwc1 $f0, 0xB3C($s2)
        r.fcr31 = conditionBit(r.fcr31, FPU_C_EQ_S(r.f0, r.f1)); // 2be248 c.eq.s $f0, $f1
        if ((r.fcr31 & kCondition) != 0u) goto L_2be2f8;         // 2be24c bc1t . + 4 + (0x2A << 2)
        r.ra = 0x2be25cu;                                        // 2be254 jal func_2E4608
        r.f12 = FPU_MOV_S(r.f20);                                // 2be258 mov.s $f12, $f20
        STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x2e4608u, 0x2be254u, 0x2be25cu)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s2, 18);
    L_2be25c:
        r.f12 = LWC1(lo32(r.s2) + 0xb3cu);                       // 2be25c lwc1 $f12, 0xB3C($s2)
        r.ra = 0x2be268u;                                        // 2be260 jal func_2E4608
        r.s4 = r.v0;                                             // 2be264 daddu $s4, $v0, $zero
        STORE_GPR(s4, 20); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x2e4608u, 0x2be260u, 0x2be268u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s3, 19);
    L_2be268:
        r.s0 = r.v0;                                             // 2be268 daddu $s0, $v0, $zero
        r.a1 = r.s3;                                             // 2be26c daddu $a1, $s3, $zero
        r.ra = 0x2be278u;                                        // 2be270 jal func_2E3768
        r.a0 = r.s0;                                             // 2be274 daddu $a0, $s0, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3768u, 0x2be270u, 0x2be278u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16); LOAD_GPR(s3, 19); LOAD_GPR(sp, 29);
    L_2be278:
        t = !neg64(r.v0);                                        // 2be278 bgez $v0, . + 4 + (0x4 << 2)
        r.a1 = r.s0;                                             // 2be27c daddu $a1, $s0, $zero
        if (t) goto L_2be28c;
        r.ra = 0x2be288u;                                        // 2be280 jal func_2E31D8
        r.a0 = r.s3;                                             // 2be284 daddu $a0, $s3, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e31d8u, 0x2be280u, 0x2be288u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(a1, 5); LOAD_GPR(sp, 29);
    L_2be288:
        r.s0 = r.v0;                                             // 2be288 daddu $s0, $v0, $zero
    L_2be28c:
        r.ra = 0x2be294u;                                        // 2be28c jal func_2E4608
        r.f12 = LWC1(lo32(r.sp) + 0x8u);                         // 2be290 lwc1 $f12, 0x8($sp)
        STORE_GPR(a1, 5); STORE_GPR(s0, 16); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x2e4608u, 0x2be28cu, 0x2be294u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16);
    L_2be294:
        r.a0 = r.s0;                                             // 2be294 daddu $a0, $s0, $zero
        r.ra = 0x2be2a0u;                                        // 2be298 jal func_2E3240
        r.a1 = r.v0;                                             // 2be29c daddu $a1, $v0, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3240u, 0x2be298u, 0x2be2a0u)) return;
        LOAD_GPR(v0, 2); LOAD_F(21);
    L_2be2a0:
        r.at = sext32(0x42700000u);                              // 2be2a0 lui $at, 0x4270
        r.f12 = floatOf(lo32(r.at));                             // 2be2a4 mtc1 $at, $f12
        r.s0 = r.v0;                                             // 2be2a8 daddu $s0, $v0, $zero
        r.ra = 0x2be2b4u;                                        // 2be2ac jal func_2E4608
        r.f12 = FPU_MUL_S(r.f21, r.f12);                         // 2be2b0 mul.s $f12, $f21, $f12
        STORE_GPR(at, 1); STORE_GPR(s0, 16); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x2e4608u, 0x2be2acu, 0x2be2b4u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s0, 16);
    L_2be2b4:
        r.a0 = r.s0;                                             // 2be2b4 daddu $a0, $s0, $zero
        r.ra = 0x2be2c0u;                                        // 2be2b8 jal func_2E34E8
        r.a1 = r.v0;                                             // 2be2bc daddu $a1, $v0, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e34e8u, 0x2be2b8u, 0x2be2c0u)) return;
        LOAD_GPR(v0, 2); LOAD_GPR(s4, 20);
    L_2be2c0:
        r.a0 = r.s4;                                             // 2be2c0 daddu $a0, $s4, $zero
        r.ra = 0x2be2ccu;                                        // 2be2c4 jal func_2E3240
        r.a1 = r.v0;                                             // 2be2c8 daddu $a1, $v0, $zero
        STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3240u, 0x2be2c4u, 0x2be2ccu)) return;
        LOAD_GPR(v0, 2);
    L_2be2cc:
        r.at = sext32(0x3b0000u);                                // 2be2cc lui $at, 0x3B
        r.a1 = READ64(lo32(r.at) - 0x6310u);                     // 2be2d0 ld $a1, -0x6310($at)
        r.ra = 0x2be2dcu;                                        // 2be2d4 jal func_2E34E8
        r.a0 = r.v0;                                             // 2be2d8 daddu $a0, $v0, $zero
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(a1, 5); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e34e8u, 0x2be2d4u, 0x2be2dcu)) return;
        LOAD_GPR(v0, 2);
    L_2be2dc:
        r.ra = 0x2be2e4u;                                        // 2be2dc jal func_2E3A10
        r.a0 = r.v0;                                             // 2be2e0 daddu $a0, $v0, $zero
        STORE_GPR(a0, 4); STORE_GPR(ra, 31);
        if (!guestCall(G_PASS, 0x2e3a10u, 0x2be2dcu, 0x2be2e4u)) return;
        LOAD_GPR(s1, 17); LOAD_F(0);
    L_2be2e4:
        r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2be2e4 lw $a0, 0x20($s1)
        r.ra = 0x2be2f0u;                                        // 2be2e8 jal func_215B20
        r.f12 = FPU_MOV_S(r.f0);                                 // 2be2ec mov.s $f12, $f0
        STORE_GPR(a0, 4); STORE_GPR(ra, 31); STORE_F(12);
        if (!guestCall(G_PASS, 0x215b20u, 0x2be2e8u, 0x2be2f0u)) return;
        LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29);
    L_2be2f0:
        // 2be2f0 b . + 4 + (0x6 << 2)
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2be2f4 lw $v0, 0xA94($s2)
        goto L_2be30c;
    L_2be2f8:
        r.at = sext32(0x3f800000u);                              // 2be2f8 lui $at, 0x3F80
        r.f12 = floatOf(lo32(r.at));                             // 2be2fc mtc1 $at, $f12
        r.ra = 0x2be308u;                                        // 2be300 jal func_215B20
        r.a0 = LW(lo32(r.s1) + 0x20u);                           // 2be304 lw $a0, 0x20($s1)
        STORE_GPR(at, 1); STORE_GPR(a0, 4); STORE_GPR(ra, 31); STORE_F(0); STORE_F(1); STORE_F(12); ctx->fcr31 = r.fcr31;
        if (!guestCall(G_PASS, 0x215b20u, 0x2be300u, 0x2be308u)) return;
        LOAD_GPR(v1, 3); LOAD_GPR(a0, 4); LOAD_GPR(s2, 18); LOAD_GPR(sp, 29);
    L_2be308:
        r.v0 = LW(lo32(r.s2) + 0xa94u);                          // 2be308 lw $v0, 0xA94($s2)
    L_2be30c:
        WRITE32(lo32(r.s2) + 0xa98u, lo32(r.v0));                // 2be30c sw $v0, 0xA98($s2)
    L_2be310:
        r.ra = READ64(lo32(r.sp) + 0x60u);                       // 2be310 ld $ra, 0x60($sp)
    L_2be314:
        r.s4 = READ64(lo32(r.sp) + 0x50u);                       // 2be314 ld $s4, 0x50($sp)
        r.s3 = READ64(lo32(r.sp) + 0x40u);                       // 2be318 ld $s3, 0x40($sp)
        r.s2 = READ64(lo32(r.sp) + 0x30u);                       // 2be31c ld $s2, 0x30($sp)
        r.s1 = READ64(lo32(r.sp) + 0x20u);                       // 2be320 ld $s1, 0x20($sp)
        r.s0 = READ64(lo32(r.sp) + 0x10u);                       // 2be324 ld $s0, 0x10($sp)
        r.f21 = LWC1(lo32(r.sp) + 0x78u);                        // 2be328 lwc1 $f21, 0x78($sp)
        r.f20 = LWC1(lo32(r.sp) + 0x70u);                        // 2be32c lwc1 $f20, 0x70($sp)
        jt = lo32(r.ra);                                         // 2be330 jr $ra
        r.sp = addiu(r.sp, 128);                                 // 2be334 addiu $sp, $sp, 0x80
        STORE_GPR(v0, 2); STORE_GPR(v1, 3); STORE_GPR(a0, 4); STORE_GPR(s0, 16); STORE_GPR(s1, 17); STORE_GPR(s2, 18); STORE_GPR(s3, 19); STORE_GPR(s4, 20); STORE_GPR(sp, 29); STORE_GPR(ra, 31); STORE_F(20); STORE_F(21);
        ctx->pc = jt;
        return;
    }

    // ---- The boot-time differential test

    using namespace ts_native_test;

    // These functions walk character, particle, room and animation
    // structures far larger than the shared scratch: their test structures
    // live in a heap below it in the same unused HLE callback arena
    // (0x80000-0x100000, nothing runs on it before the game starts), saved,
    // compared and restored like the scratch. The scratch keeps the operand
    // slots and the stack.
    constexpr uint32_t kHeap = 0x000A0000u;
    constexpr uint32_t kHeapBytes = 0x8000u;

    // Game globals the functions read or write, set per case and put back
    // after the test.
    constexpr uint32_t kViewportIndexPointer = kGameGp - 0x4DCCu; // -> the current player's viewport
    constexpr uint32_t kViewportAddress = 0x003299F0u;            // the screen: origin and size as integers
    constexpr uint32_t kClipPlanesAddress = kGameGp - 0x4768u;    // bgPortalCalcOutCode: four plane constants
    constexpr uint32_t kDlListAddress = kGameGp - 0x6C60u;        // the current display list entry
    constexpr uint32_t kTextureTableAddress = kGameGp - 0x4B68u;  // -> the texture table
    constexpr uint32_t kMemdbPointerAddress = kGameGp - 0x49DCu;  // memdbAlloc: the next block
    constexpr uint32_t kMemdbUsedAddress = kGameGp - 0x6570u;     // memdbAlloc: bytes used
    constexpr uint32_t kFrameTimeAddress = kGameGp - 0x4B98u;     // the frame's time step
    constexpr uint32_t kRandomSeedAddress = kGameGp - 0x4B80u;    // newrnd: the seed (8 bytes), then the last value
    constexpr uint32_t kLocalPlayersAddress = kGameGp - 0x608Cu;  // ilinkGetNumLocalPlayers
    constexpr uint32_t kGameModeAddress = kGameGp - 0x6090u;      // the game mode (0x66, 0x67: no rooms)
    constexpr uint32_t kErrnoAddress = 0x00383020u;               // errno (libm domain errors)
    constexpr uint32_t kAnimTableAddress = 0x0032AB60u;           // the animation records by number
    constexpr uint32_t kCheatFlagsAddress = kGameGp - 0x60B4u;    // three words: -0x60B4, -0x60B0, -0x60AC
    constexpr uint32_t kHeadHeightAddress = kGameGp - 0x62B0u;
    constexpr uint32_t kFrameStepAddress = kGameGp - 0x4BA0u;     // frames per tick
    constexpr uint32_t kFrameCountAddress = kGameGp - 0x6258u;    // the frame counter
    constexpr uint32_t kRoomTableAddress = kGameGp - 0x5DC0u;     // the rooms (0x2C bytes each, from room 1)
    constexpr uint32_t kPortalTableAddress = kGameGp - 0x5DBCu;   // the portal pointers
    constexpr uint32_t kRoomCountAddress = kGameGp - 0x5D9Cu;
    constexpr uint32_t kRoomArrayAddress = kGameGp - 0x5D90u;     // per room: its object (+0x20 its model instance)
    constexpr uint32_t kRoomBoxesAddress = kGameGp - 0x5DCCu;     // per room: floor box, wall box
    constexpr uint32_t kPropCountsAddress = kGameGp - 0x4708u;    // the prop collision list counts: -0x4708, -0x4704

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

    // A small integer field: low..high.
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

    // One of the values, each as likely.
    uint32_t pick(TestRng &rng, std::initializer_list<uint32_t> values)
    {
        return values.begin()[rng.next() % values.size()];
    }

    // matrixVecMulAligned(m, v): a matrix near a rotation (now and then any
    // values, NaNs and infinities among them) and a vector, both aligned.
    void setupMatrixVecMulAligned(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        const uint32_t m = kScratch + (rng.next() % 4u) * 64u, v = kScratch + (rng.next() % 5u) * 64u;
        if ((rng.next() & 3u) != 0u)
            fillMatrix(rng, rdram, m);
        if ((rng.next() & 3u) != 0u)
            fillSane(rng, rdram, v, 16u);
        setPointer(rng, c, 4, m);
        setPointer(rng, c, 5, v);
    }

    // bgPortalCalcOutCode(vertex): a transformed portal vertex (x, y, z, w;
    // +0x10 the out-code it gets) against the four plane constants
    // (gp-0x4768..-0x475C, set from the room's screen rectangle): w about 1
    // to 64, sometimes behind the eye, x and y about the frustum's edges.
    void setupPortalCalcOutCode(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        const uint32_t vertex = kScratch + (rng.next() % 5u) * 64u;
        const float w = (rng.next() % 6u) == 0u ? floatOf(nearFloat(rng, 0.0f, 2.0f)) : floatOf(nearFloat(rng, 32.0f, 31.0f));
        if ((rng.next() % 8u) != 0u)
        {
            writeTestWord(rdram, vertex, bitsOf(w * floatOf(nearFloat(rng, 0.0f, 1.5f))));
            writeTestWord(rdram, vertex + 4u, bitsOf(w * floatOf(nearFloat(rng, 0.0f, 1.5f))));
            writeTestWord(rdram, vertex + 8u, nearFloat(rng, 0.0f, 64.0f));
            writeTestWord(rdram, vertex + 0xCu, bitsOf(w));
        }
        writeTestWord(rdram, kClipPlanesAddress, nearFloat(rng, -1.0f, 0.5f));
        writeTestWord(rdram, kClipPlanesAddress + 4u, nearFloat(rng, 1.0f, 0.5f));
        writeTestWord(rdram, kClipPlanesAddress + 8u, nearFloat(rng, -1.0f, 0.5f));
        writeTestWord(rdram, kClipPlanesAddress + 0xCu, nearFloat(rng, 1.0f, 0.5f));
        if ((rng.next() % 16u) == 0u)
            fillAny(rng, rdram, kClipPlanesAddress, 16u);
        setPointer(rng, c, 4, vertex);
    }

    // bulletGetClosest(position, &distance): the closest live bullet (the
    // array at gp-0x46B8: 20 of 0x114 bytes, +0 the kind, kinds 2..18
    // through a jump table, +0x18 the position) within the start distance
    // (the constant at 0x3AFA60), its distance (sqrtf) stored.
    constexpr uint32_t kBulletArrayAddress = kGameGp - 0x46B8u;
    constexpr uint32_t kBcBullets = kHeap + 0x000u;

    void setupBulletGetClosest(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        fillWords(rng, rdram, kHeap, 20u * 0x114u);
        R5900Context *ctx = &c;
        setOperand(rng, c, 4);
        const uint32_t position = GPR_U32(ctx, 4);
        const float spread = (rng.next() & 3u) == 0u ? 600.0f : 40.0f;
        if ((rng.next() % 8u) != 0u)
            for (uint32_t a = 0; a < 3u; ++a)
                writeTestWord(rdram, position + a * 4u, nearFloat(rng, 0.0f, 100.0f));
        writeTestWord(rdram, kBulletArrayAddress, kBcBullets);
        const uint32_t live = rng.next() % 4u; // none, few, many, all
        for (uint32_t b = 0; b < 20u; ++b)
        {
            const uint32_t bullet = kBcBullets + b * 0x114u;
            const bool on = live == 3u || (live != 0u && (rng.next() % (live == 1u ? 6u : 2u)) == 0u);
            writeTestWord(rdram, bullet, on ? smallInt(rng, 0, 20) : 0u);
            for (uint32_t a = 0; a < 3u; ++a)
                writeTestWord(rdram, bullet + 0x18u + a * 4u,
                              bitsOf(floatOf(readTestWord(rdram, position + a * 4u)) + floatOf(nearFloat(rng, 0.0f, spread))));
            if ((rng.next() % 32u) == 0u)
                fillAny(rng, rdram, bullet + 0x18u, 12u);
        }
        setOperand(rng, c, 5);
    }

    // decalDraw(decal, alpha): a decal's polygon (+0: up to eight vertices
    // of 16 bytes, +0x80 their texture coordinates, +0xC8 the count, +0xCC
    // the texture, +0xD4 the bone, +0xD8 the prop it sticks to, +0xDC its
    // fade, +0xE4 its colour) transformed by the camera (the viewport's
    // +0x6E8), through the prop's matrix (+0x30 position, +0x48/+0x4C/+0x58
    // angles, +0x8C 2 for the three-angle matrix) and bone (its instance
    // +0x20 -> +4 the bone matrices) when it has both; culled when every
    // vertex is outside one plane or the polygon is under a pixel across;
    // otherwise its texture (dlSelectTextureKick: the table at gp-0x4B68)
    // and a GS packet (memdbAlloc at gp-0x49DC) go to the display list
    // (gp-0x6C60). The screen (0x3299F0) is the viewport's size and origin.
    constexpr uint32_t kDdDecal = kHeap + 0x000u, kDdProp = kHeap + 0x100u, kDdInst = kHeap + 0x200u,
                       kDdBones = kHeap + 0x240u, kDdViewport = kHeap + 0x400u, kDdCamera = kHeap + 0xB00u,
                       kDdTextures = kHeap + 0xB40u, kDdMemdb = kHeap + 0xC00u, kDdDisplayList = kHeap + 0xE00u;

    void setupDecalDraw(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        fillWords(rng, rdram, kHeap, 0x1000u);
        // The decal: a quad most of the time, about the camera's view.
        const uint32_t count = (rng.next() % 4u) != 0u ? 4u : smallInt(rng, 0, 8);
        const float cx = floatOf(nearFloat(rng, 0.0f, 0.8f)), cy = floatOf(nearFloat(rng, 0.0f, 0.8f)),
                    cz = floatOf(nearFloat(rng, 0.0f, 0.8f));
        const float size = (rng.next() % 6u) == 0u ? 0.001f : floatOf(nearFloat(rng, 0.3f, 0.29f));
        for (uint32_t i = 0; i < 8u; ++i)
        {
            const uint32_t vertex = kDdDecal + i * 16u;
            writeTestWord(rdram, vertex, bitsOf(cx + size * floatOf(nearFloat(rng, 0.0f, 1.0f))));
            writeTestWord(rdram, vertex + 4u, bitsOf(cy + size * floatOf(nearFloat(rng, 0.0f, 1.0f))));
            writeTestWord(rdram, vertex + 8u, bitsOf(cz + size * floatOf(nearFloat(rng, 0.0f, 1.0f))));
            writeTestWord(rdram, vertex + 0xCu, (rng.next() & 3u) != 0u ? bitsOf(1.0f) : rng.next());
            writeTestWord(rdram, kDdDecal + 0x80u + i * 8u, nearFloat(rng, 0.5f, 0.5f));
            writeTestWord(rdram, kDdDecal + 0x84u + i * 8u, nearFloat(rng, 0.5f, 0.5f));
        }
        if ((rng.next() % 16u) == 0u)
            fillAny(rng, rdram, kDdDecal, 0x80u);
        writeTestWord(rdram, kDdDecal + 0xC8u, count);
        writeTestWord(rdram, kDdDecal + 0xCCu, smallInt(rng, -2, 3));
        writeTestWord(rdram, kDdDecal + 0xD4u, smallInt(rng, -1, 3));
        writeTestWord(rdram, kDdDecal + 0xD8u, (rng.next() % 3u) != 0u ? kDdProp : 0u);
        writeTestWord(rdram, kDdDecal + 0xDCu, nearFloat(rng, 0.5f, 0.5f));
        writeTestWord(rdram, kDdDecal + 0xE4u, rng.next() & 0xFFFFFFu);
        // The prop it sticks to: near the origin, any facing.
        fillSane(rng, rdram, kDdProp, 0x100u);
        for (uint32_t a = 0; a < 3u; ++a)
            writeTestWord(rdram, kDdProp + 0x30u + a * 4u, nearFloat(rng, 0.0f, 0.5f));
        writeTestWord(rdram, kDdProp + 0x48u, nearFloat(rng, 0.0f, 180.0f));
        writeTestWord(rdram, kDdProp + 0x4Cu, nearFloat(rng, 0.0f, 180.0f));
        writeTestWord(rdram, kDdProp + 0x58u, nearFloat(rng, 0.0f, 180.0f));
        writeTestWord(rdram, kDdProp + 0x8Cu, pick(rng, {2u, 2u, 0u, 1u, 3u, 4u}));
        writeTestWord(rdram, kDdProp + 0x20u, kDdInst);
        writeTestWord(rdram, kDdInst + 4u, kDdBones);
        for (uint32_t b = 0; b < 4u; ++b)
            fillMatrix(rng, rdram, kDdBones + b * 0x40u);
        // The camera.
        writeTestWord(rdram, kViewportIndexPointer, kDdViewport);
        writeTestWord(rdram, kDdViewport + 0x6E8u, kDdCamera);
        fillMatrix(rng, rdram, kDdCamera);
        // The screen: origin and size as the game sets them.
        writeTestWord(rdram, kViewportAddress + 8u, (rng.next() & 1u) != 0u ? 0u : rng.next() % 320u);
        writeTestWord(rdram, kViewportAddress + 0x10u, pick(rng, {640u, 320u, 1u + rng.next() % 640u}));
        writeTestWord(rdram, kViewportAddress + 0x1Cu, (rng.next() & 1u) != 0u ? 0u : rng.next() % 224u);
        writeTestWord(rdram, kViewportAddress + 0x24u, pick(rng, {448u, 224u, 1u + rng.next() % 448u}));
        // The texture table, the allocator and the display list.
        writeTestWord(rdram, kTextureTableAddress, kDdTextures);
        writeTestWord(rdram, kDdTextures + 4u, kDdTextures + 0x10u);
        writeTestWord(rdram, kMemdbPointerAddress, kDdMemdb);
        writeTestWord(rdram, kMemdbUsedAddress, rng.next() % 0x10000u);
        writeTestWord(rdram, kDlListAddress, kDdDisplayList);
        setPointer(rng, c, 4, kDdDecal);
        setFloat(c, 12, nearFloat(rng, 0.5f, 0.5f));
    }

    // animUpdate(skeleton): the skeleton state of ts_native_game2.cpp's
    // calMatrices test (calMatrices is where animUpdate jumps), laid out
    // the same way, plus what animUpdate itself reads first: the node table
    // (+0: zero for none; its +4 the matrix count), the viewport's camera
    // (gp-0x4DCC -> +0x6E4), the character's kind (+8: 8 a player, whose
    // data (+0x160) +8 is 3 when dead, 0x10 and 0x1000 the kinds whose
    // matrices stop past +4 = 0x50), the matrices (+4) and the channel's
    // animation (+0x60: 1 keeps the matrices); otherwise the matrices are
    // reset to the unit matrix one by one.
    constexpr uint32_t kCmState = kHeap + 0x000u, kCmChr = kHeap + 0x100u, kCmPlayer = kHeap + 0x280u,
                       kCmNodes = kHeap + 0xE40u, kCmModel = kHeap + 0x1100u, kCmRemap = kHeap + 0x1140u,
                       kCmKinds = kHeap + 0x1160u, kCmFilletBase = kHeap + 0x11C0u, kCmMatrices = kHeap + 0x1200u,
                       kCmMatrices2 = kHeap + 0x1400u, kCmAnims = kHeap + 0x1620u, kCmKeys = kHeap + 0x1720u,
                       kCmChannels = kHeap + 0x1800u, kCmData = kHeap + 0x1C00u, kAuViewport = kHeap + 0x2800u;
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


    void setupAnimUpdate(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        setupCalMatrices(rng, c, rdram);
        // The node table's matrix count (the reset loop's bound), now and
        // then no table at all.
        const uint32_t header = readTestWord(rdram, kCmState);
        writeTestWord(rdram, header + 4u, (rng.next() % 6u) == 0u ? 0u : smallInt(rng, 1, 8));
        if ((rng.next() % 10u) == 0u)
            writeTestWord(rdram, kCmState, 0u);
        // The camera: none now and then.
        fillWords(rng, rdram, kAuViewport, 0x700u);
        writeTestWord(rdram, kViewportIndexPointer, kAuViewport);
        writeTestWord(rdram, kAuViewport + 0x6E4u, (rng.next() % 10u) == 0u ? 0u : kCmMatrices2);
        // The character: a player (alive or dead), a kind 0x10 or 0x1000
        // with a matrix count (+4) about 0x50, or another kind.
        writeTestWord(rdram, kCmChr + 8u, pick(rng, {8u, 8u, 0x10u, 0x1000u, 0u, 1u, 2u, 4u}));
        writeTestWord(rdram, kCmChr + 4u, smallInt(rng, 0x40, 0x60));
        writeTestWord(rdram, kCmPlayer + 8u, (rng.next() & 1u) != 0u ? 3u : smallInt(rng, 0, 5));
        // The channel: 1 keeps the matrices. No matrices only with nothing
        // to reset (the original would write the unit matrices at 0).
        writeTestWord(rdram, kCmState + 0x60u, (rng.next() % 4u) == 0u ? 1u : readTestWord(rdram, kCmState + 0x60u));
        if ((rng.next() % 8u) == 0u)
        {
            writeTestWord(rdram, kCmState + 4u, 0u);
            if (readTestWord(rdram, kCmState + 0x60u) != 1u && readTestWord(rdram, kCmState) != 0u)
                writeTestWord(rdram, readTestWord(rdram, kCmState) + 4u, 0u);
        }
    }

    // The animation records setAnim reaches (shared by chrPropTick's and
    // setAnimation's tests): the animation table (0x32AB60, its first 0x280
    // entries here) pointing at four records (+4 key count, +8, +0xC flags:
    // 8 and 0x20 pick whether a change waits, 0x10 starts still; +0x10
    // length, +0x14 key frames, +0x20 per-bone channels of kinds 0/2/4/8 and
    // their data, as calMatrices reads them).
    constexpr uint32_t kAnimTableEntries = 0x280u;
    constexpr uint32_t kGameSettings = 0x0032C4A8u;            // +0x48 the mode, +0x50 flags
    constexpr uint32_t kEnemyCountAddress = kGameGp - 0x4A64u; // characters past the local players
    constexpr uint32_t kRankCountAddress = kGameGp - 0x6250u;  // gameGetRankTeam: the teams ranked
    constexpr uint32_t kRankTable = 0x0032C518u;               // gameGetRankTeam: their records
    constexpr uint32_t kPlayersAddress = kGameGp - 0x4DD0u;    // the player array (0x71C bytes each)
    constexpr uint32_t kStatsTable = 0x0032E6A8u;              // StatsAdd: 0x558 bytes per player
    constexpr uint32_t kStatsPlayers = 6u;
    constexpr uint32_t kSoundQueue = 0x01FB1870u;              // soundDelayStartEx: ten of 0x20 bytes

    void setupAnimRecords(TestRng &rng, uint8_t *rdram, uint32_t anims, uint32_t keys, uint32_t channels, uint32_t data)
    {
        for (uint32_t a = 0; a < 4u; ++a)
        {
            const uint32_t anim = anims + a * 0x40u;
            fillWords(rng, rdram, anim, 0x40u);
            const uint32_t keyCount = 1u + rng.next() % 6u;
            writeTestWord(rdram, anim + 4u, keyCount);
            writeTestWord(rdram, anim + 8u, smallInt(rng, 0, 8));
            writeTestWord(rdram, anim + 0xCu, (rng.next() & 3u) == 0u ? rng.next() & 0x3Fu : pick(rng, {0u, 8u, 0x10u, 0x20u, 0x28u}));
            int32_t key = 0;
            for (uint32_t k = 0; k < 8u; ++k)
            {
                key += 1 + static_cast<int32_t>(rng.next() % 40u);
                writeTestWord(rdram, keys + a * 0x20u + k * 4u, static_cast<uint32_t>(key));
            }
            writeTestWord(rdram, anim + 0x14u, keys + a * 0x20u);
            writeTestWord(rdram, anim + 0x10u, bitsOf(static_cast<float>(key) / 60.0f));
            writeTestWord(rdram, anim + 0x20u, channels + a * 0x100u);
            static const uint32_t kKinds[] = {0u, 2u, 4u, 8u, 1u, 3u};
            for (uint32_t b = 0; b < 8u; ++b)
            {
                const uint32_t pickKind = rng.next() % 8u;
                writeTestWord(rdram, channels + a * 0x100u + b * 32u + 4u, pickKind < 6u ? kKinds[pickKind] : rng.next() % 16u);
                writeTestWord(rdram, channels + a * 0x100u + b * 32u + 0x14u, data + (rng.next() % 8u) * 0x100u);
            }
        }
        fillSane(rng, rdram, data, 0x900u);
        for (uint32_t i = 0; i < kAnimTableEntries; ++i)
            writeTestWord(rdram, kAnimTableAddress + i * 4u, anims + (rng.next() % 4u) * 0x40u);
    }

    // chrPropTick(chr): a character's per-frame update: its hit flash (the
    // player data's +0xB54 timer, a colour through +0x11A4 or none) set on
    // its model instance (+0x20, obInstSetOverrideCol), its statistics
    // (StatsAddGun/StatsAdd: 0x32E6A8, 0x558 bytes per player, by its gun
    // (+0x104), punching (gunIsPunching: the player array gp-0x4DD0), its
    // team's rank (gameGetRankTeam: gp-0x6250 records at 0x32C518)), then,
    // for a local player, the stance animation it should be in (+0x158: by
    // its weapon's flags (+0x178: the weapon table 0x366218, 0x190 bytes
    // each, +0x1C), crouch, aiming, random idles (newrnd)), set with setAnim
    // when it changed, and the character AI (a tail jump to enemyTick). The
    // AI is kept to what a test can hold: no enemies (gp-0x4A64 zero, it
    // returns at once) or a player without a character (+0xA9C zero: its
    // name is copied, strncpy). setAnim reads the animation records above,
    // the frame step (gp-0x4BA0), and queues a footstep sound
    // (soundDelayStartEx: 0x1FB1870).
    constexpr uint32_t kCpChr = kHeap + 0x0000u, kCpInst = kHeap + 0x0200u, kCpRecord = kHeap + 0x0400u,
                       kCpColours = kHeap + 0x0420u, kCpRanks = kHeap + 0x0460u, kCpGunProp = kHeap + 0x04A0u,
                       kCpGunInst = kHeap + 0x04E0u, kCpAnims = kHeap + 0x0620u, kCpKeys = kHeap + 0x0720u,
                       kCpChannels = kHeap + 0x0800u, kCpData = kHeap + 0x0C00u, kCpPlayer = kHeap + 0x1600u,
                       kCpPlayers = kHeap + 0x2800u, kCpBcc = kHeap + 0x4480u;

    void setupChrPropTick(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        fillWords(rng, rdram, kHeap, 0x4500u);
        const uint32_t locals = 1u + rng.next() % 4u, enemies = (rng.next() & 1u) != 0u ? 0u : 1u + rng.next() % 4u;
        writeTestWord(rdram, kLocalPlayersAddress, locals);
        writeTestWord(rdram, kEnemyCountAddress, enemies);
        writeTestWord(rdram, kGameModeAddress, pick(rng, {0u, 1u, 2u, 0x66u}));
        writeTestWord(rdram, kGameSettings + 0x48u, smallInt(rng, 0, 9));
        writeTestWord(rdram, kGameSettings + 0x50u, (rng.next() & 3u) == 0u ? 0x20u : rng.next() & ~0x20u);
        writeTestWord(rdram, kFrameTimeAddress, (rng.next() & 3u) != 0u ? bitsOf(1.0f) : nearFloat(rng, 1.5f, 1.5f));
        writeTestWord(rdram, kFrameStepAddress, (rng.next() % 8u) == 0u ? 0u : smallInt(rng, 1, 3));
        writeTestWord(rdram, kFrameCountAddress, rng.next());
        writeTestWord(rdram, kRandomSeedAddress, rng.next());
        writeTestWord(rdram, kRandomSeedAddress + 4u, rng.next());
        // The teams ranked.
        const uint32_t ranked = rng.next() % 5u;
        writeTestWord(rdram, kRankCountAddress, ranked);
        for (uint32_t i = 0; i < 4u; ++i)
        {
            writeTestWord(rdram, kRankTable + i * 4u, kCpRanks + i * 0x10u);
            writeTestWord(rdram, kCpRanks + i * 0x10u + 4u, rng.next() % 4u);
        }
        // The players (gunIsPunching: the gun prop's instance mask, +0x2F4).
        writeTestWord(rdram, kPlayersAddress, kCpPlayers);
        for (uint32_t p = 0; p < 4u; ++p)
        {
            const uint32_t player = kCpPlayers + p * 0x71Cu;
            writeTestWord(rdram, player + 0x264u, (rng.next() & 1u) != 0u ? kCpGunProp : 0u);
            writeTestWord(rdram, player + 0x2F4u, (rng.next() & 1u) != 0u ? 1u : 0u);
        }
        writeTestWord(rdram, kCpGunProp + 0x20u, kCpGunInst);
        // The animations.
        setupAnimRecords(rng, rdram, kCpAnims, kCpKeys, kCpChannels, kCpData);
        // The player data.
        const uint32_t player = kCpPlayer;
        fillSane(rng, rdram, player, 0x11B0u);
        writeTestWord(rdram, player, smallInt(rng, 0, static_cast<int32_t>(kStatsPlayers) - 1));
        writeTestWord(rdram, player + 4u, rng.next() % 6u);
        writeTestWord(rdram, player + 8u, (rng.next() % 5u) == 0u ? 1u : 0u);
        writeTestWord(rdram, player + 0x18u, rng.next() % 4u);
        writeTestWord(rdram, player + 0x104u, (rng.next() & 1u) != 0u ? 0u : smallInt(rng, 0, 0x22));
        writeTestWord(rdram, player + 0x14Cu, (rng.next() & 1u) != 0u ? 0u : 1u);
        writeTestWord(rdram, player + 0x178u, rng.next() % 24u);
        writeTestWord(rdram, player + 0x1B8u, (rng.next() & 1u) != 0u ? 0u : 1u);
        writeTestWord(rdram, player + 0x1E4u, (rng.next() & 1u) != 0u ? 0u : 1u);
        writeTestWord(rdram, player + 0xA94u, rng.next() & 0xFFu);
        // The AI: with enemies, only a player without a character.
        writeTestWord(rdram, player + 0xA9Cu, enemies != 0u ? 0u : pick(rng, {0u, 0x100000u, 0x2000u, 0x10u}));
        writeTestWord(rdram, player + 0xBCCu, kCpBcc);
        writeTestWord(rdram, player + 0xB18u, nearFloat(rng, 1.0f, 0.5f));
        writeTestWord(rdram, player + 0xB54u, (rng.next() & 1u) != 0u ? 0u : nearFloat(rng, 1.5f, 1.5f));
        writeTestWord(rdram, player + 0x11A4u, (rng.next() & 1u) != 0u ? 0u : kCpColours);
        writeTestWord(rdram, player + 0x11A8u, (rng.next() % 6u) == 0u ? 1u : 0u);
        writeTestWord(rdram, kCpColours + 0x1Cu, smallInt(rng, -1, 4));
        // The character and its instance.
        fillSane(rng, rdram, kCpChr, 0x200u);
        writeTestWord(rdram, kCpChr + 0x20u, kCpInst);
        writeTestWord(rdram, kCpChr + 0x158u, smallInt(rng, 0, 29));
        writeTestWord(rdram, kCpChr + 0x15Cu, smallInt(rng, 0, 29));
        writeTestWord(rdram, kCpChr + 0x160u, player);
        fillSane(rng, rdram, kCpInst, 0x200u);
        writeTestWord(rdram, kCpInst + 0x58u, (rng.next() & 3u) != 0u ? kCpRecord : 0u);
        writeTestWord(rdram, kCpRecord + 0xCu, (rng.next() & 1u) != 0u ? 1u : rng.next() % 4u);
        writeTestWord(rdram, kCpInst + 0x60u, (rng.next() % 8u) == 0u ? 1u : smallInt(rng, 0, 0x1C0));
        writeTestWord(rdram, kCpInst + 0x98u, (rng.next() & 1u) != 0u ? 0u : 1u);
        writeTestWord(rdram, kCpInst + 0xA0u, (rng.next() & 1u) != 0u ? 0u : smallInt(rng, 0, 0x1C0));
        fillWords(rng, rdram, kCpInst + 0x13Cu, 12u);
        setPointer(rng, c, 4, kCpChr);
    }

    // propCalcRooms(prop): the rooms a prop is in (+0x90: up to ten room
    // numbers, +0xB8 their count). None in the game modes without rooms
    // (gp-0x6090 0x66/0x67); a door (+8 = 2) is in the room its +4 names
    // (less 0x200); a kind 0x100 or 4 prop (and any other whose point is in
    // no room) in every room whose box meets its own (+0x30 position plus
    // +0x1FC offset, +0x20C/+0x210 half sizes; bgRoomBBIntersection against
    // the room boxes of the room table gp-0x5DC0, 0x2C bytes from room 1,
    // the count at gp-0x5D9C); the others in the room under their point
    // (moveFindRoom: the floor boxes at gp-0x5DCC, 0x30 bytes per room, the
    // highest floor below the point (the floor lists through the room
    // table's +8, the room's floor mask through gp-0x5D90 -> +0x20 ->
    // +0x124), then along the portals the drop from the point crosses (the
    // room's portal list at +4, the portals through gp-0x5DBC)). The rooms
    // here are a row along x, each joined to the next by a portal, so the
    // portal walk ends; the prop collision lists (gp-0x4708/-0x4704) are
    // empty. A prop already flagged (+0x10 bit 30) is left alone.
    constexpr uint32_t kFloorHitAddress = kGameGp - 0x4E2Cu;   // moveFindRoom: the floor height found
    constexpr uint32_t kPrProp = kHeap + 0x000u, kPrRooms = kHeap + 0x300u, kPrBoxes = kHeap + 0x420u,
                       kPrRoomPointers = kHeap + 0x560u, kPrRoomObjects = kHeap + 0x580u, kPrRoomInst = kHeap + 0x640u,
                       kPrPortalLists = kHeap + 0x780u, kPrPortalPointers = kHeap + 0x800u, kPrPortals = kHeap + 0x820u,
                       kPrFloorLists = kHeap + 0xA00u, kPrFloors = kHeap + 0xB00u;
    constexpr uint32_t kPrMaxRooms = 5u;

    void setupPropCalcRooms(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        fillWords(rng, rdram, kHeap, 0x1000u);
        const uint32_t rooms = 1u + rng.next() % kPrMaxRooms;
        writeTestWord(rdram, kRoomCountAddress, rooms);
        writeTestWord(rdram, kRoomTableAddress, kPrRooms);
        writeTestWord(rdram, kRoomBoxesAddress, kPrBoxes);
        writeTestWord(rdram, kRoomArrayAddress, kPrRoomPointers);
        writeTestWord(rdram, kPortalTableAddress, kPrPortalPointers);
        writeTestWord(rdram, kPropCountsAddress, 0u);
        writeTestWord(rdram, kPropCountsAddress + 4u, 0u);
        writeTestWord(rdram, kGameModeAddress, pick(rng, {0u, 1u, 0x66u, 0x67u, 0x68u, 4u}));
        // Rooms 1..5 in a row along x, 10 wide, their boxes overlapping a
        // little now and then; floors about y = 0.
        for (uint32_t r = 1u; r <= kPrMaxRooms; ++r)
        {
            const float x0 = static_cast<float>(r) * 10.0f - 30.0f, x1 = x0 + 10.0f;
            const float overlap = (rng.next() & 3u) == 0u ? 1.0f : 0.0f;
            const uint32_t room = kPrRooms + r * 0x2Cu;
            writeTestWord(rdram, room + 0x14u, bitsOf(x0 - overlap));
            writeTestWord(rdram, room + 0x18u, nearFloat(rng, -2.0f, 1.0f));
            writeTestWord(rdram, room + 0x1Cu, nearFloat(rng, -6.0f, 2.0f));
            writeTestWord(rdram, room + 0x20u, bitsOf(x1 + overlap));
            writeTestWord(rdram, room + 0x24u, nearFloat(rng, 6.0f, 2.0f));
            writeTestWord(rdram, room + 0x28u, nearFloat(rng, 6.0f, 2.0f));
            const uint32_t box = kPrBoxes + r * 0x30u;
            for (uint32_t half = 0; half < 2u; ++half)
            {
                const uint32_t b = box + half * 0x18u;
                writeTestWord(rdram, b, bitsOf(x0 - overlap));
                writeTestWord(rdram, b + 4u, nearFloat(rng, -2.0f, 1.0f));
                writeTestWord(rdram, b + 8u, nearFloat(rng, -6.0f, 2.0f));
                writeTestWord(rdram, b + 0xCu, bitsOf(x1 + overlap));
                writeTestWord(rdram, b + 0x10u, nearFloat(rng, 6.0f, 2.0f));
                writeTestWord(rdram, b + 0x14u, nearFloat(rng, 6.0f, 2.0f));
            }
            writeTestWord(rdram, room + 8u, kPrFloorLists + (r - 1u) * 0x10u);
            writeTestWord(rdram, room + 4u, kPrPortalLists + (r - 1u) * 0x10u);
            writeTestWord(rdram, kPrRoomPointers + r * 4u, kPrRoomObjects + r * 0x24u - 0x24u);
            writeTestWord(rdram, kPrRoomObjects + r * 0x24u - 0x24u + 0x20u, kPrRoomInst);
            // The room's floors: up to three, null-ended.
            const uint32_t floors = rng.next() % 4u;
            for (uint32_t i = 0; i < floors; ++i)
                writeTestWord(rdram, kPrFloorLists + (r - 1u) * 0x10u + i * 4u, kPrFloors + ((r - 1u) * 3u + i) * 0x50u);
            writeTestWord(rdram, kPrFloorLists + (r - 1u) * 0x10u + floors * 4u, 0u);
            for (uint32_t i = 0; i < 3u; ++i)
            {
                const uint32_t polygon = kPrFloors + ((r - 1u) * 3u + i) * 0x50u;
                const uint32_t vertices = 3u + rng.next() % 4u;
                writeTestWord(rdram, polygon, vertices);
                writeTestWord(rdram, polygon + 4u, ((rng.next() & 1u) != 0u ? 0u : rng.next() & 0xFFFFu) |
                                                        (((rng.next() & 1u) != 0u ? 0x10u : 0u) | (rng.next() & 0xFFEFu)) << 16);
                const float y = floatOf(nearFloat(rng, -0.5f, 1.0f));
                // A fan about the room's middle.
                for (uint32_t v = 0; v < 6u; ++v)
                {
                    const float angle = 6.2831853f * static_cast<float>(v) / static_cast<float>(vertices);
                    const float radius = floatOf(nearFloat(rng, 6.0f, 3.0f));
                    writeTestWord(rdram, polygon + 8u + v * 12u, bitsOf(x0 + 5.0f + radius * (v & 1u ? 0.7f : 1.0f) * (angle < 3.14f ? 1.0f : -1.0f)));
                    writeTestWord(rdram, polygon + 8u + v * 12u + 4u, (rng.next() & 1u) != 0u ? bitsOf(y) : nearFloat(rng, y, 0.5f));
                    writeTestWord(rdram, polygon + 8u + v * 12u + 8u, bitsOf(radius * ((v * 3u) % 5u < 2u ? 1.0f : -1.0f)));
                }
            }
            // The portals: room r and r + 1 share portal r (a square in the
            // plane x = x1, facing +x).
            const uint32_t list = kPrPortalLists + (r - 1u) * 0x10u;
            uint32_t count = 0;
            if (r > 1u)
                writeTestWord(rdram, list + 4u + count++ * 4u, r - 1u);
            if (r < kPrMaxRooms)
                writeTestWord(rdram, list + 4u + count++ * 4u, r);
            writeTestWord(rdram, list, count);
        }
        writeTestWord(rdram, kPrRoomInst + 0x124u, (rng.next() & 3u) != 0u ? 0xFFFFu : rng.next() & 0xFFFFu);
        for (uint32_t p = 1u; p < kPrMaxRooms; ++p)
        {
            const uint32_t portal = kPrPortals + p * 0x48u;
            writeTestWord(rdram, kPrPortalPointers + p * 4u, portal);
            const bool flip = (rng.next() & 1u) != 0u;
            writeTestWord(rdram, portal, flip ? p + 1u : p);
            writeTestWord(rdram, portal + 4u, flip ? p : p + 1u);
            writeTestWord(rdram, portal + 8u, bitsOf(flip ? -1.0f : 1.0f));
            writeTestWord(rdram, portal + 0xCu, nearFloat(rng, 0.0f, 0.05f));
            writeTestWord(rdram, portal + 0x10u, nearFloat(rng, 0.0f, 0.05f));
            writeTestWord(rdram, portal + 0x14u, 4u | (rng.next() << 16));
            const float x = static_cast<float>(p) * 10.0f - 20.0f;
            const float corners[4][2] = {{-4.0f, -4.0f}, {8.0f, -4.0f}, {8.0f, 4.0f}, {-4.0f, 4.0f}};
            for (uint32_t v = 0; v < 4u; ++v)
            {
                writeTestWord(rdram, portal + 0x18u + v * 12u, bitsOf(x));
                writeTestWord(rdram, portal + 0x1Cu + v * 12u, bitsOf(corners[v][flip ? 1 : 0] * floatOf(nearFloat(rng, 1.0f, 0.3f))));
                writeTestWord(rdram, portal + 0x20u + v * 12u, bitsOf(corners[v][flip ? 0 : 1] * floatOf(nearFloat(rng, 1.0f, 0.3f))));
            }
        }
        // The prop: about the row of rooms.
        fillSane(rng, rdram, kPrProp, 0x220u);
        writeTestWord(rdram, kPrProp + 4u, 0x200u + smallInt(rng, 1, 5));
        writeTestWord(rdram, kPrProp + 8u, pick(rng, {2u, 0x100u, 4u, 1u, 1u, 8u, 0x10u, 0x1000u}));
        writeTestWord(rdram, kPrProp + 0x10u, (rng.next() % 8u) == 0u ? 0x40000000u | rng.next() : rng.next() & 0xBFFFFFFFu);
        writeTestWord(rdram, kPrProp + 0x30u, nearFloat(rng, 0.0f, 30.0f));
        writeTestWord(rdram, kPrProp + 0x34u, nearFloat(rng, 1.0f, 3.0f));
        writeTestWord(rdram, kPrProp + 0x38u, nearFloat(rng, 0.0f, 8.0f));
        for (uint32_t a = 0; a < 3u; ++a)
            writeTestWord(rdram, kPrProp + 0x1FCu + a * 4u, nearFloat(rng, 0.0f, 1.0f));
        writeTestWord(rdram, kPrProp + 0x20Cu, nearFloat(rng, 2.0f, 2.0f));
        writeTestWord(rdram, kPrProp + 0x210u, nearFloat(rng, 2.0f, 2.0f));
        setPointer(rng, c, 4, kPrProp);
    }

    // spawnfxTick(): the fourteen spawn effects (0x36D688, 0x20 bytes each:
    // +0 the kind, -1 free; +4 the phase it sets; +8 whether it is still
    // fading in; +0xC the prop it shows; +0x10 its time; +0x18 set when it
    // is not a player's) advance by the frame time (gp-0x4B98). Per kind,
    // three times (the tables at 0x36C208, 0x36C228, 0x36C248; shorter with
    // three or more local players, gp-0x608C, or in the game settings'
    // modes 6 and 7, 0x32C4A8 +0x48) give the phase: fading in, the prop's
    // and its attachment's (+0x218) model instance overrides (+0x20,
    // obInstSetOverrideStates) set by a curve (a jump table on the kind),
    // or done: kinds 5 and 6 then delete the prop (propDelete, or
    // propDeleteCorpse for a character, kind 0x1000) and free the effect.
    // Deleting a prop clears its model instance (the count at gp-0x5D20),
    // unattaches it (+0xBC: its matrices reset, the model's count at +4),
    // frees a head (kind 0x800: the heads at gp-0x4F64, their flags at
    // 0x35DEC0), clears a corpse's slot (0x35EB60 by the index its +0x160
    // points to) and counts it (gp-0x4EA0); the prop collision lists
    // (gp-0x4708/-0x4704) are empty.
    constexpr uint32_t kSpawnfxArray = 0x0036D688u;
    constexpr uint32_t kSpawnfxTables = 0x0036C208u;           // three tables of eight floats
    constexpr uint32_t kGameSettingsMode = 0x0032C4A8u + 0x48u; // the mode the timings halve in
    constexpr uint32_t kInstDeletedAddress = kGameGp - 0x5D20u;
    constexpr uint32_t kPropsDeletedAddress = kGameGp - 0x4EA0u;
    constexpr uint32_t kCollisionRemovedAddress = kGameGp - 0x4700u; // two words: -0x4700, -0x46FC
    constexpr uint32_t kHeadArrayAddress = kGameGp - 0x4F64u;
    constexpr uint32_t kHeadFlags = 0x0035DEC0u;   // fifteen words
    constexpr uint32_t kCorpseSlots = 0x0035EB60u; // per corpse index
    constexpr uint32_t kSfProps = kHeap + 0x000u, kSfInsts = kHeap + 0x1400u, kSfModels = kHeap + 0x1900u,
                       kSfMatrices = kHeap + 0x1940u, kSfChrs = kHeap + 0x1C40u, kSfHeads = kHeap + 0x1CC0u;
    constexpr uint32_t kSfProp = 0x240u, kSfPropCount = 8u;

    void setupSpawnfxTick(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        fillWords(rng, rdram, kHeap, 0x2400u);
        writeTestWord(rdram, kFrameTimeAddress, (rng.next() & 3u) != 0u ? bitsOf(1.0f) : nearFloat(rng, 1.5f, 1.5f));
        writeTestWord(rdram, kLocalPlayersAddress, 1u + rng.next() % 4u);
        writeTestWord(rdram, kGameSettingsMode, smallInt(rng, 0, 9));
        // The per-kind times: about what the effects last, now and then zero.
        for (uint32_t i = 0; i < 24u; ++i)
            writeTestWord(rdram, kSpawnfxTables + i * 4u, (rng.next() % 8u) == 0u ? 0u : nearFloat(rng, 1.5f, 1.4f));
        writeTestWord(rdram, kPropCountsAddress, 0u);
        writeTestWord(rdram, kPropCountsAddress + 4u, 0u);
        writeTestWord(rdram, kHeadArrayAddress, kSfHeads);
        // Models with up to three matrices, their instances.
        for (uint32_t m = 0; m < 4u; ++m)
        {
            const uint32_t inst = kSfInsts + m * 0x140u, model = kSfModels + m * 0x10u;
            writeTestWord(rdram, model + 4u, smallInt(rng, 0, 3));
            writeTestWord(rdram, inst, model);
            writeTestWord(rdram, inst + 4u, (rng.next() % 6u) == 0u ? 0u : kSfMatrices + m * 0xC0u);
        }
        // The props: an instance most of the time (always for the first two,
        // the attachments, which no effect deletes: the game's attachments
        // have one), an attachment now and then; characters with a corpse index,
        // heads in the head array.
        for (uint32_t p = 0; p < kSfPropCount; ++p)
        {
            const uint32_t prop = kSfProps + p * kSfProp;
            writeTestWord(rdram, prop + 4u, rng.next() % 40u);
            const uint32_t kind = pick(rng, {1u, 2u, 4u, 0x1000u, 0x1000u, 0x800u});
            writeTestWord(rdram, prop + 8u, kind);
            writeTestWord(rdram, prop + 0x20u, p < 2u || (rng.next() % 5u) != 0u ? kSfInsts + (rng.next() % 4u) * 0x140u : 0u);
            writeTestWord(rdram, prop + 0xBCu, (rng.next() & 3u) == 0u ? 1u : 0u);
            writeTestWord(rdram, prop + 0x218u, (rng.next() & 3u) == 0u ? kSfProps + (rng.next() % 2u) * kSfProp : 0u);
            if (kind == 0x800u)
                writeTestWord(rdram, prop + 0x160u, (rng.next() & 3u) != 0u ? kSfHeads + (rng.next() % 15u) * 0x70u : 0u);
            else
                writeTestWord(rdram, prop + 0x160u, (rng.next() & 3u) != 0u ? kSfChrs + (rng.next() % 4u) * 0x20u : 0u);
        }
        for (uint32_t i = 0; i < 4u; ++i)
            writeTestWord(rdram, kSfChrs + i * 0x20u, (rng.next() & 3u) == 0u ? 0xFFFFFFFFu : rng.next() % 8u);
        fillWords(rng, rdram, kHeadFlags, 15u * 4u);
        fillWords(rng, rdram, kCorpseSlots, 8u * 4u);
        // The effects: three in four in use.
        for (uint32_t e = 0; e < 14u; ++e)
        {
            const uint32_t effect = kSpawnfxArray + e * 0x20u;
            fillWords(rng, rdram, effect, 0x20u);
            const uint32_t kind = (rng.next() & 3u) == 0u ? 0xFFFFFFFFu : rng.next() % 8u;
            writeTestWord(rdram, effect, kind);
            writeTestWord(rdram, effect + 0xCu, (rng.next() % 6u) != 0u ? kSfProps + (2u + rng.next() % (kSfPropCount - 2u)) * kSfProp : 0u);
            // Its time: anywhere from just started to well past every phase,
            // now and then below zero (and, rarely, NaN).
            writeTestWord(rdram, effect + 0x10u, (rng.next() & 3u) == 0u ? 0u : nearFloat(rng, 2.3f, 2.5f));
            if ((rng.next() % 64u) == 0u) // a NaN time: the only way past the phase tests' else branches
                writeTestWord(rdram, effect + 0x10u, 0x7FC00000u | (rng.next() & 0x3FFFFFu));
            writeTestWord(rdram, effect + 0x18u, (rng.next() & 1u) != 0u ? 0u : 1u);
        }
        (void)c;
    }

    // particleTick(): the hundred particle slots (gp-0x4D10, 0x17A0 bytes
    // each: +0 the kind, -1 free; +4 the definition (0x3698C0, 0x68 bytes
    // each); +8 flags; +0xC its time, +0x10 its life, +0x14 the owner's
    // pointer to it, +0x18 its sub-particle count, +0x30 a period, +0x34 a
    // delay, +0x3C the next of a chain, +0x40/+0x44 the links of its kind's
    // list, +0x48 its rooms' flags, the sub-particles from +0x3A0) age by
    // the frame time; those past their life are freed (particleFree: the
    // owner's pointer cleared, unlinked from the kind's list (heads at
    // 0x1FE99C0, counts at 0x1FE9A00) onto the free list (gp-0x46A0));
    // visibility flags from the rooms each player sees
    // (bgIsAnyRoomsVisibleByPlayer: the room count gp-0x5D9C, the
    // viewports' room records through 0x357330); then each kind's tick (a
    // jump table: trails, bursts, streams, glass, explosions, glows).
    //
    // The slots live in a 600 KB array in the game's (not yet used) BSS at
    // 0x1000000: the first four may be in use, the other 96 are free. An
    // explosion's tick (explosionDamage) is kept from damaging anything:
    // with explosions present the frame step (gp-0x4BA0) is zero, which
    // ends it before its damage pass.
    constexpr uint32_t kParticleArrayAddress = kGameGp - 0x4D10u;
    constexpr uint32_t kParticleFreeAddress = kGameGp - 0x46A0u;
    constexpr uint32_t kParticleHeads = 0x01FE99C0u;  // per kind, sixteen words
    constexpr uint32_t kParticleCounts = 0x01FE9A00u; // per kind, sixteen words
    constexpr uint32_t kViewportRoomTables = 0x00357330u;
    constexpr uint32_t kParticles = 0x01000000u, kParticleBytes = 0x17A0u, kParticleSlots = 100u, kParticleUsed = 4u;
    constexpr uint32_t kPtOwners = kHeap + 0x000u, kPtRoomRecords = kHeap + 0x100u;

    void setupParticleTick(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        fillWords(rng, rdram, kHeap, 0x400u);
        writeTestWord(rdram, kParticleArrayAddress, kParticles);
        writeTestWord(rdram, kFrameTimeAddress, (rng.next() & 3u) != 0u ? bitsOf(1.0f) : nearFloat(rng, 1.5f, 1.5f));
        writeTestWord(rdram, kRandomSeedAddress, rng.next());
        writeTestWord(rdram, kRandomSeedAddress + 4u, rng.next());
        fillWords(rng, rdram, kParticleHeads, 0x80u);
        for (uint32_t k = 0; k < 16u; ++k)
            writeTestWord(rdram, kParticleCounts + k * 4u, rng.next() % 20u);
        // The rooms the players see: up to eight rooms, a record per room
        // (+4 and +0xC the extent the player sees of it) for each player.
        const uint32_t rooms = rng.next() % 9u;
        writeTestWord(rdram, kRoomCountAddress, rooms);
        for (uint32_t p = 0; p < 4u; ++p)
        {
            writeTestWord(rdram, kViewportRoomTables + p * 4u, kPtRoomRecords + p * 0xC0u);
            for (uint32_t r = 0; r < 9u; ++r)
            {
                const uint32_t record = kPtRoomRecords + p * 0xC0u + 0x14u + r * 0x14u;
                writeTestWord(rdram, record + 4u, (rng.next() & 3u) == 0u ? 0x280u + rng.next() % 64u : rng.next() % 0x280u);
                writeTestWord(rdram, record + 0xCu, (rng.next() & 3u) == 0u ? 0xFFFFFFFFu : rng.next() % 0x280u);
            }
        }
        // The slots: the first four in use three times in four, the rest free.
        bool explosion = false;
        for (uint32_t s = 0; s < kParticleSlots; ++s)
            writeTestWord(rdram, kParticles + s * kParticleBytes, 0xFFFFFFFFu);
        for (uint32_t s = 0; s < kParticleUsed; ++s)
        {
            const uint32_t p = kParticles + s * kParticleBytes;
            if ((rng.next() & 3u) == 0u)
                continue;
            fillSane(rng, rdram, p, kParticleBytes);
            const uint32_t kind = (rng.next() % 8u) == 0u ? smallInt(rng, 0, 20) : smallInt(rng, 3, 14);
            explosion = explosion || kind == 12u;
            writeTestWord(rdram, p, kind);
            writeTestWord(rdram, p + 4u, rng.next() % 16u);
            writeTestWord(rdram, p + 8u, rng.next() & 0xFFu);
            writeTestWord(rdram, p + 0xCu, nearFloat(rng, 1.0f, 1.0f));
            writeTestWord(rdram, p + 0x10u, (rng.next() & 3u) == 0u ? 0u : nearFloat(rng, 1.5f, 1.0f));
            writeTestWord(rdram, p + 0x14u, (rng.next() & 1u) != 0u ? kPtOwners + s * 4u : 0u);
            writeTestWord(rdram, p + 0x18u, (rng.next() % 6u) == 0u ? 100u : rng.next() % 100u);
            writeTestWord(rdram, p + 0x2Cu, (rng.next() & 1u) != 0u ? 0u : rng.next() % 120u);
            writeTestWord(rdram, p + 0x30u, (rng.next() & 1u) != 0u ? 1u << (rng.next() % 4u) : rng.next() % 8u);
            writeTestWord(rdram, p + 0x34u, (rng.next() & 1u) != 0u ? 0u : nearFloat(rng, 1.0f, 1.0f));
            writeTestWord(rdram, p + 0x3Cu, 0u);
            writeTestWord(rdram, p + 0x40u, 0u);
            writeTestWord(rdram, p + 0x44u, 0u);
            for (uint32_t r = 0; r < 8u; ++r)
                writeTestWord(rdram, p + 0x48u + r * 4u, (rng.next() & 1u) != 0u ? 0u : 1u);
            // The fields past +0x3A0 by kind: a stream's emitter cursor (a
            // float below 100) and rate (+0x2C); a trail's last emission
            // time (+0xE90) and rate; glass, its shard set through +0x3C
            // (here the particle itself; +0x1528 the shard count); an
            // explosion's kind (+0x3A4, through explosionDamage's jump
            // table), owner and size.
            if (kind == 5u)
            {
                writeTestWord(rdram, p + 0x3A0u, bitsOf(static_cast<float>(rng.next() % 100u) + floatOf(nearFloat(rng, 0.5f, 0.49f))));
                writeTestWord(rdram, p + 0x2Cu, rng.next() % 120u);
            }
            else if (kind == 6u)
            {
                writeTestWord(rdram, p + 0x2Cu, rng.next() % 60u);
                writeTestWord(rdram, p + 0xE90u, bitsOf(floatOf(readTestWord(rdram, p + 0xCu)) - floatOf(nearFloat(rng, 0.1f, 0.1f))));
            }
            else if (kind == 7u)
            {
                writeTestWord(rdram, p + 0x3Cu, p);
                writeTestWord(rdram, p + 0x1528u, rng.next() % 40u);
            }
            else if (kind == 12u)
            {
                writeTestWord(rdram, p + 0x3A4u, smallInt(rng, 6, 20));
                writeTestWord(rdram, p + 0x3C0u, rng.next() % 4u);
                writeTestWord(rdram, p + 0x3C4u, rng.next() % 4u);
            }
        }
        // The kinds' lists: in use slots of a kind linked now and then.
        for (uint32_t s = 0; s + 1u < kParticleUsed; ++s)
        {
            const uint32_t p = kParticles + s * kParticleBytes, q = p + kParticleBytes;
            if (readTestWord(rdram, p) != 0xFFFFFFFFu && readTestWord(rdram, q) == readTestWord(rdram, p) && (rng.next() & 1u) != 0u)
            {
                writeTestWord(rdram, p + 0x44u, q);
                writeTestWord(rdram, q + 0x40u, p);
            }
        }
        writeTestWord(rdram, kParticleFreeAddress, (rng.next() & 1u) != 0u ? 0u : kParticles + (rng.next() % kParticleUsed) * kParticleBytes);
        writeTestWord(rdram, kFrameStepAddress, explosion ? 0u : smallInt(rng, 0, 3));
        (void)c;
    }

    // findNextPad(route): a character's next pad on its way (+0 the pad it
    // is at, +4 its goal; +8 the pad route, links by index, +0x3F0 its
    // length; +0x3F4 the hall route, +0x7DC its length): none (-1) without
    // a goal, -2 when there is no way; a new hall route when the goal is in
    // another hall (hallrouteCalc), a new pad route to the next hall's
    // entrance or the goal (routeCalc), else the next link's other end.
    // The way-finding is an A* search over the pads (gp-0x5D14, 0x1C bytes:
    // +8 the hall, +0xC position), the links (gp-0x5D10, 0x14 bytes: +0
    // flags (1 usable, 2 one way), +4/+8 the pads, +0x10 length) and each
    // hall's link lists (gp-0x5CB0: per hall, counts then the hall links and
    // the pad links), with its node pools at 0x1FCA310 (pads) and 0x1FC6490
    // (halls) and its state at gp-0x4740..-0x470C, the lengths found at
    // gp-0x5D08/-0x5D04. The graphs here are a few halls of a few pads.
    constexpr uint32_t kPadTableAddress = kGameGp - 0x5D14u;
    constexpr uint32_t kLinkTableAddress = kGameGp - 0x5D10u;
    constexpr uint32_t kHallLinksAddress = kGameGp - 0x5CB0u;
    constexpr uint32_t kRouteStateAddress = kGameGp - 0x4740u; // through -0x470C: 0x38 bytes
    constexpr uint32_t kRouteLengthsAddress = kGameGp - 0x5D08u; // -0x5D08 pads, -0x5D04 halls
    constexpr uint32_t kPadRoutePool = 0x01FCA310u, kHallRoutePool = 0x01FC6490u, kRoutePoolBytes = 0x3E80u;
    constexpr uint32_t kRtRoute = kHeap + 0x000u, kRtPads = kHeap + 0x800u, kRtLinks = kHeap + 0x900u,
                       kRtHallTable = kHeap + 0xB00u, kRtHallRecords = kHeap + 0xB20u;
    constexpr uint32_t kRtMaxPads = 8u, kRtMaxLinks = 16u, kRtHalls = 3u;

    void setupFindNextPad(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        fillWords(rng, rdram, kHeap, 0x1000u);
        const uint32_t pads = 2u + rng.next() % (kRtMaxPads - 1u);
        const uint32_t halls = 1u + rng.next() % kRtHalls;
        writeTestWord(rdram, kPadTableAddress, kRtPads);
        writeTestWord(rdram, kLinkTableAddress, kRtLinks);
        writeTestWord(rdram, kHallLinksAddress, kRtHallTable);
        uint32_t hallOf[kRtMaxPads];
        for (uint32_t p = 0; p < pads; ++p)
        {
            const uint32_t pad = kRtPads + p * 0x1Cu;
            hallOf[p] = p < halls ? p : rng.next() % halls; // every hall has a pad
            writeTestWord(rdram, pad + 8u, hallOf[p] | (rng.next() << 16));
            writeTestWord(rdram, pad + 0xCu, nearFloat(rng, static_cast<float>(hallOf[p]) * 20.0f, 10.0f));
            writeTestWord(rdram, pad + 0x10u, nearFloat(rng, 0.0f, 2.0f));
            writeTestWord(rdram, pad + 0x14u, nearFloat(rng, 0.0f, 10.0f));
        }
        // Links: a usable two-way chain through the pads (routeCalc, unlike
        // hallrouteCalc, assumes every goal can be reached: the game's pads
        // are connected), then a few more, now and then unusable or one way.
        const uint32_t links = pads - 1u + rng.next() % (kRtMaxLinks - pads + 2u);
        uint32_t endA[kRtMaxLinks], endB[kRtMaxLinks];
        for (uint32_t l = 0; l < links; ++l)
        {
            endA[l] = l + 1u < pads ? l : rng.next() % pads;
            endB[l] = l + 1u < pads ? l + 1u : rng.next() % pads;
            const uint32_t link = kRtLinks + l * 0x14u;
            const uint32_t flags = l + 1u < pads ? 1u : (rng.next() % 6u) == 0u ? 0u : (1u | ((rng.next() % 4u) == 0u ? 2u : 0u));
            writeTestWord(rdram, link, flags);
            writeTestWord(rdram, link + 4u, endA[l]);
            writeTestWord(rdram, link + 8u, endB[l]);
            writeTestWord(rdram, link + 0x10u, nearFloat(rng, 10.0f, 9.0f));
        }
        // Each hall's lists: no first group, the links leaving the hall,
        // then every link touching it.
        uint32_t record = kRtHallRecords;
        for (uint32_t h = 0; h < kRtHalls; ++h)
        {
            writeTestWord(rdram, kRtHallTable + h * 4u, record);
            uint32_t leaving = 0, touching = 0;
            for (uint32_t l = 0; l < links; ++l)
                if ((hallOf[endA[l]] == h) != (hallOf[endB[l]] == h))
                    writeTestWord(rdram, record + 0xCu + 4u * leaving++, l);
            for (uint32_t l = 0; l < links; ++l)
                if (hallOf[endA[l]] == h || hallOf[endB[l]] == h)
                    writeTestWord(rdram, record + 0xCu + 4u * (leaving + touching++), l);
            writeTestWord(rdram, record, 0u);
            writeTestWord(rdram, record + 4u, leaving);
            writeTestWord(rdram, record + 8u, touching);
            record += 0xCu + 4u * (leaving + touching);
        }
        // The route: at a pad, going to another (or the same, or nowhere);
        // routes already found now and then.
        const uint32_t route = kRtRoute;
        writeTestWord(rdram, route, (rng.next() % 10u) == 0u ? 0xFFFFFFFFu : rng.next() % pads);
        writeTestWord(rdram, route + 4u, (rng.next() % 10u) == 0u ? 0xFFFFFFFFu : rng.next() % pads);
        const uint32_t padSteps = (rng.next() & 1u) != 0u ? 0u : 1u + rng.next() % 5u;
        const uint32_t hallSteps = (rng.next() & 1u) != 0u ? 0u : 1u + rng.next() % 3u;
        writeTestWord(rdram, route + 0x3F0u, padSteps);
        writeTestWord(rdram, route + 0x7DCu, hallSteps);
        for (uint32_t i = 0; i < 6u; ++i)
        {
            writeTestWord(rdram, route + 8u + i * 4u, rng.next() % links);
            writeTestWord(rdram, route + 0x3F4u + i * 4u, rng.next() % links);
        }
        writeTestWord(rdram, kRouteLengthsAddress, rng.next());
        writeTestWord(rdram, kRouteLengthsAddress + 4u, rng.next());
        fillWords(rng, rdram, kRouteStateAddress, 0x38u);
        setPointer(rng, c, 4, route);
    }

    // setAnimation(chr): a character's next animation from its state and
    // what it is playing: its model instance (+0x20: +0x60 and +0xA0 the
    // animations of its two slots, +0x64 the frame, +0x8C the speed, +0x98
    // / +0xD8 done, +0x58 -> +0xC its stance set), the player data (+0x160:
    // +8 the kind (1 a zombie, setZombieAnimation; 2 a TimeSplitter,
    // setTimeSplitterAnimation), +0xA90..+0xA9C the action flags and mode,
    // the aim and move timers at +0xAD8..+0xB84 in soft doubles, its target
    // (+0xAE4: enemyFiredAt, whose player array gp-0x4DD0 and move states
    // gp-0x4DC8 say whether that target is shooting)), the facing (+0x4C,
    // +0x50, anglediff) and the stance offset (+0x158) the animation
    // numbers are mapped by; the change made with setAnim (the animation
    // records above, a footstep sound queued). The animations the instance
    // plays are the numbers the three functions test for (or random ones).
    // A TimeSplitter's firing animation (0x22B) past its first frame makes
    // it fire (gunChrFire: bullets); it is not in its slots here.
    constexpr uint32_t kMoveStateAddress = kGameGp - 0x4DC8u; // per player, 0x1210 bytes
    constexpr uint32_t kSaTarget = kHeap + 0x4500u, kSaTargetPlayer = kHeap + 0x4700u, kSaMoveStates = kHeap + 0x5400u;
    const uint32_t kSaAnims[] = {
        0x3u,   0x4u,   0x5u,   0x6u,   0x7u,   0x8u,   0x9u,   0xAu,   0xBu,   0xCu,   0xDu,   0x71u,  0x72u,  0x73u,  0x74u,
        0x75u,  0x76u,  0x77u,  0x78u,  0x79u,  0x7Au,  0x7Bu,  0x1BBu, 0x1BCu, 0x1BDu, 0x1BEu, 0x1C2u, 0x1C4u, 0x1C5u, 0x1C6u,
        0x1CCu, 0x1CEu, 0x1CFu, 0x1D0u, 0x201u, 0x202u, 0x203u, 0x204u, 0x205u, 0x206u, 0x207u, 0x208u, 0x209u, 0x20Au, 0x20Bu,
        0x20Cu, 0x20Du, 0x20Fu, 0x210u, 0x211u, 0x212u, 0x213u, 0x214u, 0x215u, 0x216u, 0x217u, 0x218u, 0x219u, 0x21Au, 0x21Bu,
        0x21Cu, 0x229u, 0x22Au, 0x22Bu, 0x22Cu, 0x22Du, 0x22Eu, 0x230u, 0x231u, 0x241u, 0x243u};

    // A number as the instance holds it: a player's stance animations
    // offset by its stance, the crouched set's by 0x26 (curAnim's mapping).
    uint32_t setAnimationNumber(TestRng &rng, uint32_t stance, uint32_t kind, uint32_t crouched)
    {
        uint32_t anim;
        do
        {
            anim = (rng.next() % 8u) == 0u ? rng.next() % 0x250u : kSaAnims[rng.next() % (sizeof(kSaAnims) / sizeof(kSaAnims[0]))];
            if (kind == 0u && (anim - 3u < 11u || anim - 0x71u < 11u))
                anim += stance * 11u;
            if (anim - 0x1BBu < 0x20u && crouched)
                anim += 0x26u;
        } while (kind == 2u && anim == 0x22Bu);
        return anim;
    }

    void setupSetAnimation(TestRng &rng, R5900Context &c, uint8_t *rdram)
    {
        setupChrPropTick(rng, c, rdram);
        fillWords(rng, rdram, kSaTarget, 0x3B00u);
        const uint32_t player = kCpPlayer, locals = readTestWord(rdram, kLocalPlayersAddress);
        const uint32_t kind = pick(rng, {0u, 0u, 0u, 1u, 1u, 2u, 2u, 3u});
        writeTestWord(rdram, player + 8u, kind);
        // The action flags and mode; the timers about their limits.
        writeTestWord(rdram, player + 0xA90u, rng.next() & 0xFFFFu);
        // +0xA94: one action (dying 0x200, 0x1020 none, 0x100 hit, 0x400
        // reloading, 8 moving, 2 aiming) and modifiers (4 crouched, ...).
        writeTestWord(rdram, player + 0xA94u, (rng.next() % 8u) == 0u ? rng.next()
                                                : pick(rng, {0x200u, 0x20u, 0x1000u, 0x100u, 0x400u, 8u, 8u, 8u, 2u, 2u, 2u, 0u, 0u}) |
                                                      (rng.next() & 0x8D5u));
        writeTestWord(rdram, player + 0xA98u, rng.next() & 0x17FFu);
        writeTestWord(rdram, player + 0xA9Cu, pick(rng, {0u, 2u, 2u, 0x80000u, 0x80000u, 0x80000u, 0x10u, 0x2000u, 0x100000u}));
        // Half the cases with the timers near their start (0 to 3), half
        // spread over their whole range (to 80).
        const bool wide = (rng.next() & 1u) != 0u;
        for (uint32_t offset : {0xADCu, 0xAE0u, 0xB2Cu, 0xB34u, 0xB3Cu, 0xB68u, 0xB6Cu, 0xB70u, 0xB84u})
        {
            static const float kCentres[] = {0.0f, 0.5f, 3.0f, 15.0f, 40.0f};
            const float centre = wide ? kCentres[rng.next() % 5u] : (rng.next() & 3u) == 0u ? 0.0f : 1.0f;
            writeTestWord(rdram, player + offset, centre == 0.0f ? 0u : nearFloat(rng, centre, wide ? centre : 2.0f));
        }
        writeTestWord(rdram, player + 0xAD8u, smallInt(rng, -3, 60));
        writeTestWord(rdram, player + 0x1198u, rng.next() % 4u);
        // The target: a character whose player is local (a gun in hand,
        // firing or not) or not (moving or not).
        const uint32_t targetIndex = (rng.next() & 1u) != 0u ? rng.next() % locals : locals;
        writeTestWord(rdram, player + 0xAE4u, (rng.next() & 3u) == 0u ? 0u : kSaTarget);
        fillSane(rng, rdram, kSaTarget, 0x200u);
        for (uint32_t a = 0; a < 3u; ++a)
            writeTestWord(rdram, kSaTarget + 0x30u + a * 4u,
                          bitsOf(floatOf(readTestWord(rdram, kCpChr + 0x30u + a * 4u)) + (a == 1u ? 0.0f : floatOf(nearFloat(rng, 0.0f, 8.0f)))));
        writeTestWord(rdram, kSaTarget + 0x160u, (rng.next() & 7u) == 0u ? 0u : kSaTargetPlayer);
        fillSane(rng, rdram, kSaTargetPlayer, 0xC00u);
        writeTestWord(rdram, kSaTargetPlayer, targetIndex);
        // Its facing (checkAimingFront: within about 5 degrees of the
        // character counts as aiming at it): half the time the target stands
        // straight along x or z from the character and faces it (in either
        // sense of the angle), else any facing.
        if ((rng.next() & 1u) != 0u)
        {
            static const float kSin[] = {0.0f, 1.0f, 0.0f, -1.0f}, kCos[] = {1.0f, 0.0f, -1.0f, 0.0f};
            const uint32_t quarter = rng.next() % 4u;
            const float range = floatOf(nearFloat(rng, 10.0f, 4.0f));
            writeTestWord(rdram, kSaTarget + 0x30u, bitsOf(floatOf(readTestWord(rdram, kCpChr + 0x30u)) - range * kSin[quarter]));
            writeTestWord(rdram, kSaTarget + 0x34u, readTestWord(rdram, kCpChr + 0x34u));
            writeTestWord(rdram, kSaTarget + 0x38u, bitsOf(floatOf(readTestWord(rdram, kCpChr + 0x38u)) - range * kCos[quarter]));
            const float toward = static_cast<float>(quarter) * 90.0f * ((rng.next() & 1u) != 0u ? 1.0f : -1.0f);
            writeTestWord(rdram, kSaTargetPlayer + 0xB9Cu, nearFloat(rng, toward, 2.0f));
        }
        else
            writeTestWord(rdram, kSaTargetPlayer + 0xB9Cu, nearFloat(rng, 0.0f, 180.0f));
        for (uint32_t p = 0; p < 4u; ++p)
            writeTestWord(rdram, kCpPlayers + p * 0x71Cu + 0x2ECu, rng.next() % 2u);
        writeTestWord(rdram, kMoveStateAddress, kSaMoveStates - locals * 0x1210u);
        writeTestWord(rdram, kSaMoveStates + 0x1B8u, rng.next() % 2u);
        writeTestWord(rdram, kSaMoveStates + 0x1BCu, rng.next() % 16u);
        // The character: its facing, flags; the instance's animations.
        writeTestWord(rdram, kCpChr + 0x10u, rng.next());
        writeTestWord(rdram, kCpChr + 0x4Cu, nearFloat(rng, 0.0f, 180.0f));
        writeTestWord(rdram, kCpChr + 0x50u, nearFloat(rng, 0.0f, 180.0f));
        const uint32_t stance = readTestWord(rdram, kCpChr + 0x158u);
        const bool crouched = readTestWord(rdram, kCpInst + 0x58u) != 0u && readTestWord(rdram, kCpRecord + 0xCu) == 1u;
        writeTestWord(rdram, kCpInst + 0x60u, setAnimationNumber(rng, stance, kind, crouched));
        writeTestWord(rdram, kCpInst + 0xA0u, (rng.next() & 1u) != 0u ? 0u : setAnimationNumber(rng, stance, kind, crouched));
        writeTestWord(rdram, kCpInst + 0x64u, nearFloat(rng, 2.0f, 2.0f));
        writeTestWord(rdram, kCpInst + 0x8Cu, nearFloat(rng, 1.0f, 1.0f));
        writeTestWord(rdram, kCpInst + 0x98u, (rng.next() & 1u) != 0u ? 0u : 1u);
        writeTestWord(rdram, kCpInst + 0xD8u, (rng.next() & 1u) != 0u ? 0u : 1u);
        setPointer(rng, c, 4, kCpChr);
    }

    // Every global a setup writes, saved before the test and put back after it.
    constexpr SavedRegion kTestGlobals[] = {
        {kViewportIndexPointer, 4u}, {kViewportAddress, 0x28u},  {kClipPlanesAddress, 16u},  {kDlListAddress, 4u},
        {kTextureTableAddress, 4u},  {kMemdbPointerAddress, 4u}, {kMemdbUsedAddress, 4u},    {kFrameTimeAddress, 4u},
        {kRandomSeedAddress, 12u},   {kLocalPlayersAddress, 4u}, {kGameModeAddress, 4u},     {kAnimTableAddress, 16u},
        {kCheatFlagsAddress, 12u},   {kHeadHeightAddress, 4u},   {kBulletArrayAddress, 4u},
        {kRoomTableAddress, 8u},     {kRoomCountAddress, 4u},    {kRoomArrayAddress, 4u},    {kRoomBoxesAddress, 4u},
        {kPropCountsAddress, 8u},    {kFloorHitAddress, 4u},     {kSpawnfxArray, 14u * 0x20u}, {kSpawnfxTables, 0x60u},
        {kGameSettingsMode, 4u},     {kInstDeletedAddress, 4u},  {kPropsDeletedAddress, 4u}, {kCollisionRemovedAddress, 8u},
        {kHeadArrayAddress, 4u},     {kHeadFlags, 15u * 4u},     {kCorpseSlots, 8u * 4u},
        {kAnimTableAddress, kAnimTableEntries * 4u},             {kGameSettings + 0x48u, 12u}, {kFrameStepAddress, 4u},
        {kEnemyCountAddress, 4u},    {kRankCountAddress, 4u},    {kRankTable, 16u},          {kPlayersAddress, 4u},
        {kStatsTable, kStatsPlayers * 0x558u},                    {kSoundQueue, 0x140u},      {kFrameCountAddress, 4u},
        {kParticleArrayAddress, 4u}, {kParticleFreeAddress, 4u}, {kParticleHeads, 0xA0u},     {kViewportRoomTables, 16u},
        {kParticles, kParticleSlots * kParticleBytes},
        {kPadTableAddress, 8u},      {kHallLinksAddress, 4u},    {kRouteStateAddress, 0x38u}, {kRouteLengthsAddress, 8u},
        {kPadRoutePool, kRoutePoolBytes},                         {kHallRoutePool, kRoutePoolBytes},
        {kMoveStateAddress, 4u},
        {kErrnoAddress, 4u},
    };

    // The regions outside the scratch and the heap each function writes
    // (errno: the libm routines' domain errors set it).
    constexpr SavedRegion kErrnoExtra[] = {{kErrnoAddress, 4u}};
    constexpr SavedRegion kDecalExtra[] = {
        {kDlListAddress, 4u}, {kMemdbPointerAddress, 4u}, {kMemdbUsedAddress, 4u}, {kErrnoAddress, 4u}};
    constexpr SavedRegion kRoomsExtra[] = {{kFloorHitAddress, 4u}, {kErrnoAddress, 4u}};
    constexpr SavedRegion kSpawnfxExtra[] = {
        {kSpawnfxArray, 14u * 0x20u}, {kInstDeletedAddress, 4u}, {kPropsDeletedAddress, 4u}, {kCollisionRemovedAddress, 8u},
        {kHeadFlags, 15u * 4u},       {kCorpseSlots, 8u * 4u},   {kErrnoAddress, 4u}};
    constexpr SavedRegion kChrExtra[] = {
        {kStatsTable, kStatsPlayers * 0x558u}, {kSoundQueue, 0x140u}, {kRandomSeedAddress, 12u}, {kErrnoAddress, 4u}};
    constexpr SavedRegion kParticleExtra[] = {
        {kParticles, kParticleUsed * kParticleBytes}, {kParticleHeads, 0xA0u}, {kParticleFreeAddress, 4u},
        {kRandomSeedAddress, 12u}, {kErrnoAddress, 4u}};
    constexpr SavedRegion kRouteExtra[] = {
        {kPadRoutePool, kRoutePoolBytes}, {kHallRoutePool, kRoutePoolBytes}, {kRouteStateAddress, 0x38u},
        {kRouteLengthsAddress, 8u},       {kErrnoAddress, 4u}};

#define TS_EXTRA(regions) regions, sizeof(regions) / sizeof(regions[0])

    // In the order of their share of a busy match frame.
    const NativeEntry kNativeGame3[] = {
        {"decalDraw", 0x2A5B20u, &decalDraw_0x2a5b20, &nativeDecalDraw, &setupDecalDraw, true, TS_EXTRA(kDecalExtra)},
        {"animUpdate", 0x212CF8u, &animUpdate_0x212cf8, &nativeAnimUpdate, &setupAnimUpdate, true, TS_EXTRA(kErrnoExtra)},
        {"chrPropTick", 0x26DDC0u, &chrPropTick_0x26ddc0, &nativeChrPropTick, &setupChrPropTick, true, TS_EXTRA(kChrExtra)},
        {"bgPortalCalcOutCode", 0x257E38u, &bgPortalCalcOutCode_0x257e38, &nativeBgPortalCalcOutCode, &setupPortalCalcOutCode, true, TS_EXTRA(kErrnoExtra)},
        {"matrixVecMulAligned", 0x2B54C8u, &matrixVecMulAligned_0x2b54c8, &nativeMatrixVecMulAligned, &setupMatrixVecMulAligned, true, nullptr, 0u},
        {"bulletGetClosest", 0x28D100u, &bulletGetClosest_0x28d100, &nativeBulletGetClosest, &setupBulletGetClosest, true, TS_EXTRA(kErrnoExtra)},
        {"propCalcRooms", 0x269B30u, &propCalcRooms_0x269b30, &nativePropCalcRooms, &setupPropCalcRooms, true, TS_EXTRA(kRoomsExtra)},
        {"spawnfxTick", 0x2ABEA0u, &spawnfxTick_0x2abea0, &nativeSpawnfxTick, &setupSpawnfxTick, true, TS_EXTRA(kSpawnfxExtra)},
        {"particleTick", 0x29BC58u, &particleTick_0x29bc58, &nativeParticleTick, &setupParticleTick, true, TS_EXTRA(kParticleExtra)},
        {"findNextPad", 0x2BF680u, &findNextPad_0x2bf680, &nativeFindNextPad, &setupFindNextPad, true, TS_EXTRA(kRouteExtra)},
        {"setAnimation", 0x2BD008u, &setAnimation_0x2bd008, &nativeSetAnimation, &setupSetAnimation, true, TS_EXTRA(kChrExtra)},
    };
    constexpr uint32_t kNativeGame3Count = sizeof(kNativeGame3) / sizeof(kNativeGame3[0]);

    constexpr uint32_t regionBytes(const SavedRegion *regions, uint32_t count)
    {
        uint32_t bytes = 0;
        for (uint32_t i = 0; i < count; ++i)
            bytes += regions[i].bytes;
        return bytes;
    }

    constexpr uint32_t kTestGlobalBytes = regionBytes(kTestGlobals, sizeof(kTestGlobals) / sizeof(kTestGlobals[0]));
    constexpr uint32_t kExtra3BytesMax = 0x8000u;

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
    TestOutcome testFunction3(PS2Runtime &runtime, uint8_t *rdram, const NativeEntry &fn, const char *tag,
                              uint32_t seed = 0u)
    {
        static R5900Context base, want, got;
        static uint8_t before[kScratchBytes], wantMemory[kScratchBytes];
        static uint8_t heapBefore[kHeapBytes], heapWant[kHeapBytes];
        static uint8_t beforeExtra[kExtra3BytesMax], wantExtra[kExtra3BytesMax], gotExtra[kExtra3BytesMax];
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
    // Tests every function against its original before any replacement of
    // this batch (the originals call one another through the function
    // table; the earlier batches' natives are in place by now). Returns the
    // set of functions that passed.
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
            for (uint32_t i = 0; i < kNativeGame3Count; ++i)
            {
                const NativeEntry &fn = kNativeGame3[i];
                const TestOutcome outcome = testFunction3(runtime, rdram, fn, "game3");
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
                std::fprintf(stderr, "[TS:game3] %-22s %s: %d cases, %u differ, %u only in NaN payloads\n", fn.name,
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
        std::fprintf(stderr, "[TS:game3] self-test: %u of %u native, %u cases differ, %u NaN-only, %u ms\n",
                     kNativeGame3Count - failed, kNativeGame3Count, mismatches, nanOnly, static_cast<uint32_t>(ms.count()));
        return passed;
    }
#endif
}

void registerTsNativeGame3(PS2Runtime &runtime)
{
    uint32_t enabled = (1u << kNativeGame3Count) - 1u;
#if TS_NATIVE_MATH_SELFTEST
    enabled = selfTest(runtime);
#endif
    uint32_t native = 0;
    for (uint32_t i = 0; i < kNativeGame3Count; ++i)
    {
        if ((enabled & (1u << i)) != 0u)
        {
            runtime.replaceFunction(kNativeGame3[i].address, kNativeGame3[i].native);
            ++native;
        }
    }
    g_tsNativeMath.native += native;
}
#endif
