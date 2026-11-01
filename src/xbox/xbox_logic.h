// TS_NATIVE_LOGIC (src/xbox/Makefile): the game-logic side of the Xbox
// rewrite. Only Xbox source copies include this header (made by
// tools/patch_generated.py --logic, tools/promote_registers.py and
// tools/patch_native_logic.py); the shared sources are never edited and the
// PC build never sees it.
//
// Three things live here:
//
// 1. The lean call protocol. A constant guest call is
//        pc = target; checkpoint (8 cycles); call the table entry;
//        continue when pc == resume.
//    That is ps2xDirectCall / dispatchGuestBranch's DirectCall path with the
//    stop-flag test moved off the fast path: requestStop() also sets the
//    checkpoint-pending flag, so the next checkpoint (every call and loop
//    back-edge) unwinds instead. The rare outcomes (pc 0, a native that left
//    pc at its entry, a thread switch) go to xlCallFixup, which does exactly
//    what the original post-call tests do. The table entry is read on every
//    call, so runtime overrides and self-test replacements are honoured.
//
// 2. Helpers for register-promoted functions (tools/promote_registers.py):
//    guest memory accesses whose cold path stores the instruction's pc first
//    (the promoted code drops the per-instruction pc stores), and the
//    128-bit register view of a promoted register (low half in a host
//    variable, high half in the context).
//
// 3. Inline copies of the hottest leaf natives (ts_native_math.cpp:
//    sceVu0MulMatrix, sceVu0UnitMatrix, sceVu0CopyMatrix, fabsf,
//    matrixVecRotAligned, matrixVec3Mul4Aligned). A call site runs the copy
//    only while the function table still holds that native (published by
//    the patched registerTsNativeMath); otherwise it makes the ordinary call.
//    Each copy performs the native's operations in the native's order, so it
//    leaves the same registers, vf registers, ACC and memory.
#pragma once

#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_direct_call_xbox.h"

#include <cstdint>
#include <cstring>

#define XL_INLINE inline __attribute__((always_inline))
#define XL_COLD __attribute__((cold, noinline, fastcall))

extern const uint32_t g_ps2RecompiledFunctionAddresses[];

// ---- 1. Call protocol

// The callee did not come back with pc == resume: the original post-call
// tests, in their order. true: continue at resume (pc is resume).
XL_COLD bool xlCallFixup(R5900Context *ctx, PS2Runtime *runtime, uint32_t target, uint32_t resume);

// Call through the table entry, the checkpoint already charged and pc set.
#define XL_CALL_TABLE(slot, target, resume)                                                     \
    do                                                                                          \
    {                                                                                           \
        g_ps2RecompiledFunctionTable[slot](rdram, ctx, runtime);                                \
        if (__builtin_expect(ctx->pc != (resume), 0) && !xlCallFixup(ctx, runtime, (target), (resume))) \
            return;                                                                             \
    } while (0)

// A whole constant call (the generated JAL after its delay slot).
#define XL_CALL_SLOT(slot, target, resume)                                \
    do                                                                    \
    {                                                                     \
        ctx->pc = (target);                                               \
        if (runtime->eeCheckpointDue(PS2X_GUEST_DISPATCH_CYCLES))         \
            return;                                                       \
        XL_CALL_TABLE(slot, target, resume);                              \
    } while (0)

// The -O2 generated files that are not promoted inline the call protocol
// (PS2X_DIRECT_CALL_INLINE): give them the lean form too. The -Oz files keep
// the out-of-line ps2xDirectCall (as short a call site as before).
#if defined(PS2X_DIRECT_CALL_INLINE) && PS2X_DIRECT_CALL_INLINE
#undef PS2X_CALL_SLOT
#define PS2X_CALL_SLOT(slot, target, resume) XL_CALL_SLOT(slot, target, resume)
#endif

// ---- 2. Promoted functions

// The full 128-bit register: the low half from the host variable, the high
// half from the context (only 128-bit writes change it, and those write the
// context too). __m128i is a two-lane long long vector with clang's headers
// and with the Xbox's scalar SIMD header alike.
XL_INLINE __m128i xlVec(uint64_t low, __m128i full)
{
    full[0] = static_cast<long long>(low);
    return full;
}

XL_INLINE uint64_t xlLow64(__m128i v) { return static_cast<uint64_t>(v[0]); }

// Guest accesses: the inline half is the shared one (ps2_runtime_macros.h);
// the cold half stores the instruction's pc, then does the shared slow path.
XL_COLD uint8_t xlRead8Slow(uint32_t addr, uint32_t pc, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
XL_COLD uint16_t xlRead16Slow(uint32_t addr, uint32_t pc, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
XL_COLD uint32_t xlRead32Slow(uint32_t addr, uint32_t pc, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
XL_COLD uint64_t xlRead64Slow(uint32_t addr, uint32_t pc, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
XL_COLD void xlRead128Slow(uint32_t addr, uint32_t pc, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, void *out);
XL_COLD void xlWrite8Slow(uint32_t addr, uint32_t pc, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint8_t value);
XL_COLD void xlWrite16Slow(uint32_t addr, uint32_t pc, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint16_t value);
XL_COLD void xlWrite32Slow(uint32_t addr, uint32_t pc, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t value);
XL_COLD void xlWrite64Slow(uint32_t addr, uint32_t pc, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint64_t value);
XL_COLD void xlWrite128Slow(uint32_t addr, uint32_t pc, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, const void *value);

XL_INLINE uint8_t xlRead8(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr, uint32_t pc)
{
    return Ps2XboxInRam<uint8_t>(addr) ? rdram[addr] : xlRead8Slow(addr, pc, rdram, ctx, runtime);
}
XL_INLINE uint16_t xlRead16(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr, uint32_t pc)
{
    return Ps2XboxInRam<uint16_t>(addr) ? Ps2XboxLoad<uint16_t>(rdram, addr) : xlRead16Slow(addr, pc, rdram, ctx, runtime);
}
XL_INLINE uint32_t xlRead32(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr, uint32_t pc)
{
    return Ps2XboxInRam<uint32_t>(addr) ? Ps2XboxLoad<uint32_t>(rdram, addr) : xlRead32Slow(addr, pc, rdram, ctx, runtime);
}
XL_INLINE uint64_t xlRead64(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr, uint32_t pc)
{
    return Ps2XboxInRam<uint64_t>(addr) ? Ps2XboxLoad<uint64_t>(rdram, addr) : xlRead64Slow(addr, pc, rdram, ctx, runtime);
}
XL_INLINE __m128i xlRead128(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr, uint32_t pc)
{
    __m128 bits;
    if (Ps2XboxInRam<__m128i>(addr))
    {
        bits = Ps2XboxLoad128(rdram, addr);
    }
    else
    {
        __m128 slow;
        xlRead128Slow(addr, pc, rdram, ctx, runtime, &slow);
        bits = slow;
    }
    return _mm_castps_si128(bits);
}
XL_INLINE void xlWrite8(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr, uint8_t value, uint32_t pc)
{
    if (Ps2XboxInRam<uint8_t>(addr))
        rdram[addr] = value;
    else
        xlWrite8Slow(addr, pc, rdram, ctx, runtime, value);
}
XL_INLINE void xlWrite16(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr, uint16_t value, uint32_t pc)
{
    if (Ps2XboxInRam<uint16_t>(addr))
        Ps2XboxStore<uint16_t>(rdram, addr, value);
    else
        xlWrite16Slow(addr, pc, rdram, ctx, runtime, value);
}
XL_INLINE void xlWrite32(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr, uint32_t value, uint32_t pc)
{
    if (Ps2XboxInRam<uint32_t>(addr))
        Ps2XboxStore<uint32_t>(rdram, addr, value);
    else
        xlWrite32Slow(addr, pc, rdram, ctx, runtime, value);
}
XL_INLINE void xlWrite64(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr, uint64_t value, uint32_t pc)
{
    if (Ps2XboxInRam<uint64_t>(addr))
        Ps2XboxStore<uint64_t>(rdram, addr, value);
    else
        xlWrite64Slow(addr, pc, rdram, ctx, runtime, value);
}
XL_INLINE void xlWrite128(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr, __m128i value, uint32_t pc)
{
    const __m128 bits = _mm_castsi128_ps(value);
    if (Ps2XboxInRam<__m128i>(addr))
    {
        Ps2XboxStore128(rdram, addr, bits);
    }
    else
    {
        const __m128 copy = bits;
        xlWrite128Slow(addr, pc, rdram, ctx, runtime, &copy);
    }
}

#define XL_READ8(pc, addr) xlRead8(rdram, ctx, runtime, (uint32_t)(addr), (pc))
#define XL_READ16(pc, addr) xlRead16(rdram, ctx, runtime, (uint32_t)(addr), (pc))
#define XL_READ32(pc, addr) xlRead32(rdram, ctx, runtime, (uint32_t)(addr), (pc))
#define XL_READ64(pc, addr) xlRead64(rdram, ctx, runtime, (uint32_t)(addr), (pc))
#define XL_READ128(pc, addr) xlRead128(rdram, ctx, runtime, (uint32_t)(addr), (pc))
// The address is evaluated before the value, as in the shared macros.
#define XL_GUEST_WRITE(access, type, pc, addr, val)            \
    do                                                         \
    {                                                          \
        uint32_t _xlAddr = (addr);                             \
        access(rdram, ctx, runtime, _xlAddr, (type)(val), (pc)); \
    } while (0)
#define XL_WRITE8(pc, addr, val) XL_GUEST_WRITE(xlWrite8, uint8_t, pc, addr, val)
#define XL_WRITE16(pc, addr, val) XL_GUEST_WRITE(xlWrite16, uint16_t, pc, addr, val)
#define XL_WRITE32(pc, addr, val) XL_GUEST_WRITE(xlWrite32, uint32_t, pc, addr, val)
#define XL_WRITE64(pc, addr, val) XL_GUEST_WRITE(xlWrite64, uint64_t, pc, addr, val)
#define XL_WRITE128(pc, addr, val) XL_GUEST_WRITE(xlWrite128, __m128i, pc, addr, val)

// ---- 3. Leaf natives

enum XlLeaf : uint32_t
{
    XL_LEAF_MUL_MATRIX,        // sceVu0MulMatrix 0x2d5e98
    XL_LEAF_UNIT_MATRIX,       // sceVu0UnitMatrix 0x2d6188
    XL_LEAF_COPY_MATRIX,       // sceVu0CopyMatrix 0x2d6120
    XL_LEAF_FABSF,             // fabsf 0x2dc5a0
    XL_LEAF_VEC_ROT_ALIGNED,   // matrixVecRotAligned 0x2b5638
    XL_LEAF_VEC3_MUL4_ALIGNED, // matrixVec3Mul4Aligned 0x2b5570
    XL_LEAF_COUNT
};

// The native each leaf copy stands for (null until registerTsNativeMath
// publishes it). A copy runs only while the function table holds exactly
// this entry: after a failed self-test the table holds the original and the
// call goes to it.
extern PS2Runtime::RecompiledFunction g_xlLeafNative[XL_LEAF_COUNT];
// registerTsNativeMath (patched copy): note every native it installs.
void xlNoteLeafNative(uint32_t address, PS2Runtime::RecompiledFunction native);
// How many of the leaf copies have their native (the boot log line).
unsigned xlLeafNativeCount();

// The leaf bodies, out of line (xbox_logic.cpp, -O2): one direct call
// without the call protocol, the vf registers, ACC and memory written as the
// native writes them. The register results are the inline wrappers' below.
#define XL_LEAF_CORE __attribute__((noinline, fastcall))
XL_LEAF_CORE void xlLeafMulMatrixCore(uint32_t out, uint32_t left, uint8_t *rdram, R5900Context *ctx,
                                      PS2Runtime *runtime, uint32_t right);
XL_LEAF_CORE void xlLeafUnitMatrixCore(uint32_t m, uint32_t unused, uint8_t *rdram, R5900Context *ctx,
                                       PS2Runtime *runtime);
XL_LEAF_CORE void xlLeafCopyMatrixCore(uint32_t dst, uint32_t src, uint8_t *rdram, R5900Context *ctx,
                                       PS2Runtime *runtime);
XL_LEAF_CORE void xlLeafVecRotAlignedCore(uint32_t m, uint32_t v, uint8_t *rdram, R5900Context *ctx,
                                          PS2Runtime *runtime);
XL_LEAF_CORE void xlLeafVec3Mul4AlignedCore(uint32_t m, uint32_t v, uint8_t *rdram, R5900Context *ctx,
                                            PS2Runtime *runtime, uint32_t out);

namespace xl
{
    XL_INLINE uint64_t sext32(uint32_t v) { return static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(v))); }
}

// sceVu0MulMatrix(m0 a0, m1 a1, m2 a2) as nativeVu0MulMatrix: m0 = m1 * m2
// one column at a time (each read after the previous store: m0 may overlap
// m2); m1 in vf4-vf7, the last column in vf8, its result in vf9 and ACC,
// a3 = 0, a0 and a2 past the matrices. The native's own fallback (pointers
// within 64 bytes of 2 GB, where the original's addi traps) is the caller's
// test xlMulMatrixInline.
XL_INLINE bool xlMulMatrixInline(uint64_t a0, uint64_t a2)
{
    return !(static_cast<int32_t>(static_cast<uint32_t>(a0)) > 0x7FFFFFBF ||
             static_cast<int32_t>(static_cast<uint32_t>(a2)) > 0x7FFFFFBF);
}

XL_INLINE void xlLeafMulMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint64_t &a0, uint64_t a1,
                               uint64_t &a2, uint64_t &a3)
{
    const uint32_t out = static_cast<uint32_t>(a0), right = static_cast<uint32_t>(a2);
    xlLeafMulMatrixCore(out, static_cast<uint32_t>(a1), rdram, ctx, runtime, right);
    a3 = 0u;
    a2 = xl::sext32(right + 64u);
    a0 = xl::sext32(out + 64u);
}

// sceVu0UnitMatrix(m a0): built from vf0 in vf4-vf7, stored last row first.
XL_INLINE void xlLeafUnitMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint64_t a0)
{
    xlLeafUnitMatrixCore(static_cast<uint32_t>(a0), 0u, rdram, ctx, runtime);
}

// sceVu0CopyMatrix(dst a0, src a1) through a2, a3, t0, t1 (whole quadwords:
// the context gets the 128-bit values, the caller's variables their low
// halves).
XL_INLINE void xlLeafCopyMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint64_t a0, uint64_t a1,
                                uint64_t &a2, uint64_t &a3, uint64_t &t0, uint64_t &t1)
{
    xlLeafCopyMatrixCore(static_cast<uint32_t>(a0), static_cast<uint32_t>(a1), rdram, ctx, runtime);
    a2 = GPR_U64(ctx, 6);
    a3 = GPR_U64(ctx, 7);
    t0 = GPR_U64(ctx, 8);
    t1 = GPR_U64(ctx, 9);
}

// fabsf(x f12): through v1 with a 0x7FFFFFFF mask in v0.
XL_INLINE void xlLeafFabsf(float f12, float &f0, uint64_t &v0, uint64_t &v1)
{
    uint32_t bits;
    std::memcpy(&bits, &f12, sizeof(bits));
    bits &= 0x7FFFFFFFu;
    v1 = bits;
    v0 = 0x7FFFFFFFu;
    std::memcpy(&f0, &bits, sizeof(bits));
}

// matrixVecRotAligned(m a0, v a1): v.xyz = m3x3 * v in place (VU0, w kept;
// ACC.w and vf8.w keep their old values).
XL_INLINE void xlLeafVecRotAligned(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint64_t a0, uint64_t a1)
{
    xlLeafVecRotAlignedCore(static_cast<uint32_t>(a0), static_cast<uint32_t>(a1), rdram, ctx, runtime);
}

// matrixVec3Mul4Aligned(m a0, v a1, out a2): out = m * (v.xyz, vf0.w).
XL_INLINE void xlLeafVec3Mul4Aligned(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint64_t a0, uint64_t a1,
                                     uint64_t a2)
{
    xlLeafVec3Mul4AlignedCore(static_cast<uint32_t>(a0), static_cast<uint32_t>(a1), rdram, ctx, runtime,
                              static_cast<uint32_t>(a2));
}

// The leaf copies on the context's registers (native callers keep their
// state in the context at a call). false: the precondition failed and the
// ordinary call must be made.
template <uint32_t Leaf>
XL_INLINE bool xlLeafOnContext(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    if constexpr (Leaf == XL_LEAF_MUL_MATRIX)
    {
        uint64_t a0 = GPR_U64(ctx, 4), a2 = GPR_U64(ctx, 6), a3 = GPR_U64(ctx, 7);
        if (!xlMulMatrixInline(a0, a2))
            return false;
        xlLeafMulMatrix(rdram, ctx, runtime, a0, GPR_U64(ctx, 5), a2, a3);
        SET_GPR_U64(ctx, 7, a3);
        SET_GPR_U64(ctx, 6, a2);
        SET_GPR_U64(ctx, 4, a0);
    }
    else if constexpr (Leaf == XL_LEAF_UNIT_MATRIX)
    {
        xlLeafUnitMatrix(rdram, ctx, runtime, GPR_U64(ctx, 4));
    }
    else if constexpr (Leaf == XL_LEAF_COPY_MATRIX)
    {
        uint64_t a2, a3, t0, t1;
        xlLeafCopyMatrix(rdram, ctx, runtime, GPR_U64(ctx, 4), GPR_U64(ctx, 5), a2, a3, t0, t1);
    }
    else if constexpr (Leaf == XL_LEAF_FABSF)
    {
        float f0;
        uint64_t v0, v1;
        xlLeafFabsf(ctx->f[12], f0, v0, v1);
        SET_GPR_U64(ctx, 3, v1);
        SET_GPR_U64(ctx, 2, v0);
        ctx->f[0] = f0;
    }
    else if constexpr (Leaf == XL_LEAF_VEC_ROT_ALIGNED)
    {
        xlLeafVecRotAligned(rdram, ctx, runtime, GPR_U64(ctx, 4), GPR_U64(ctx, 5));
    }
    else
    {
        static_assert(Leaf == XL_LEAF_VEC3_MUL4_ALIGNED, "unknown leaf");
        xlLeafVec3Mul4Aligned(rdram, ctx, runtime, GPR_U64(ctx, 4), GPR_U64(ctx, 5), GPR_U64(ctx, 6));
    }
    ctx->pc = GPR_U32(ctx, 31); // the native's returnToCaller
    return true;
}

// ---- Native callers (tools/patch_native_logic.py)

// guestCall/lightCall(target, source, next) of the native game files with
// the target's slot resolved at build time: ra = next, then the lean call.
// A slot that does not hold Target (a table drift) keeps the original
// dispatcher, before anything is charged.
template <uint32_t Slot, uint32_t Target>
XL_INLINE bool xlNativeCall(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t source, uint32_t next)
{
    SET_GPR_U32(ctx, 31, next);
    if (__builtin_expect(g_ps2RecompiledFunctionAddresses[Slot] != Target, 0))
        return runtime->dispatchGuestBranch(rdram, ctx, Target, source, next, PS2Runtime::GuestBranchKind::DirectCall,
                                            "JAL");
    ctx->pc = Target;
    if (runtime->eeCheckpointDue(PS2X_GUEST_DISPATCH_CYCLES))
        return false;
    g_ps2RecompiledFunctionTable[Slot](rdram, ctx, runtime);
    return __builtin_expect(ctx->pc == next, 1) || xlCallFixup(ctx, runtime, Target, next);
}

// The same for a leaf target: its inline copy while the table holds the
// native, the ordinary call otherwise. The copy returns to ra = next, the
// caller's fallthrough.
template <uint32_t Slot, uint32_t Target, uint32_t Leaf>
XL_INLINE bool xlNativeLeafCall(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t source, uint32_t next)
{
    SET_GPR_U32(ctx, 31, next);
    if (__builtin_expect(g_ps2RecompiledFunctionAddresses[Slot] != Target, 0))
        return runtime->dispatchGuestBranch(rdram, ctx, Target, source, next, PS2Runtime::GuestBranchKind::DirectCall,
                                            "JAL");
    ctx->pc = Target;
    if (runtime->eeCheckpointDue(PS2X_GUEST_DISPATCH_CYCLES))
        return false;
    const PS2Runtime::RecompiledFunction entry = g_ps2RecompiledFunctionTable[Slot];
    if (entry == g_xlLeafNative[Leaf] && xlLeafOnContext<Leaf>(rdram, ctx, runtime))
        return true;
    entry(rdram, ctx, runtime);
    return __builtin_expect(ctx->pc == next, 1) || xlCallFixup(ctx, runtime, Target, next);
}
