// The shapes src/xbox/tools/patch_generated.py's options give the patched
// generated functions (the Xbox build; B-CODEGEN, src/xbox/PUSH-BC-PLAN.md
// section 5.2, REWRITE-PLAN.md M3.5 and M3.9). Only patched copies made with
// options (PATCH_FLAGS, src/xbox/mk/b_codegen.mk) include this header; each
// macro is the same behaviour as the generated statement it stands for.
//
// -pc-stores. The recompiler stores the guest pc before every instruction.
// The patcher's flow pass drops each store no consumer can read before the
// next store overwrites it; the line stays as PS2X_PC_DROP(pc), which is
// nothing. A guest memory access whose pc is a known constant (it is, on
// every path to it) gets the constant handed to it: PS2X_PC_READn(pc, addr)
// and PS2X_PC_WRITEn(pc, addr, value) store pc only on the cold path, where
// the access leaves RAM and the runtime (which may raise an address error,
// reading pc) gets the context. Inside RAM nothing reads pc.
//
// TS_PC_STORE_CHECK=1 (check build): every dropped store writes a poison pc
// instead (0xDEAD0000 | the low 16 bits of the dropped one). If the flow pass
// were wrong and something read it, the scheduler would resume, or the
// dispatcher would call, at 0xDEADxxxx: a missing-function report naming it
// (and the program stops). A clean run of the scripted matches is the check.
#ifndef PS2_CODEGEN_XBOX_H
#define PS2_CODEGEN_XBOX_H

#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_direct_call_xbox.h"
#include "ps2_indirect_call_xbox.h"

#ifndef TS_PC_STORE_CHECK
#define TS_PC_STORE_CHECK 0
#endif
#ifndef TS_CTX_GUARD
#define TS_CTX_GUARD 0
#endif

#if TS_PC_STORE_CHECK
#define PS2X_PC_DROP(pc) (ctx->pc = 0xDEAD0000u | ((pc) & 0xFFFFu))
#else
#define PS2X_PC_DROP(pc) ((void)0)
#endif

// -resume-guard. The entry switch (`switch (ctx->pc)`, the resume points of
// a function the scheduler left mid-way) becomes
//     if (__builtin_expect(ctx->pc != <entry>, 0)) switch (PS2X_RESUME_PC(ctx->pc)) {
// so a normal call (pc is the entry, which no case lists) costs one compare.
// The guard is redundant to the compiler, which would fold it back into the
// switch's own compare chain or range check; the empty asm hides the value
// from that folding and costs nothing.
static inline __attribute__((always_inline)) uint32_t ps2xResumePc(uint32_t pc)
{
    __asm__("" : "+r"(pc));
    return pc;
}
#define PS2X_RESUME_PC(pc) ps2xResumePc(pc)

// The cold half of a routed access: pc is stored only when the access
// leaves RAM (the same test the access itself makes, so the two fold into
// one branch).
template <typename T>
static inline __attribute__((always_inline)) void ps2xPcCold(R5900Context *ctx, uint32_t addr, uint32_t pc)
{
    if (!Ps2XboxInRam<T>(addr))
        ctx->pc = pc;
}

#define PS2X_PC_READ_FN(bits, type)                                                                       \
    static inline __attribute__((always_inline)) type Ps2xPcRead##bits(uint8_t *rdram, R5900Context *ctx, \
                                                                       PS2Runtime *runtime, uint32_t pc,  \
                                                                       uint32_t addr)                     \
    {                                                                                                     \
        ps2xPcCold<type>(ctx, addr, pc);                                                                  \
        return Ps2XboxRead##bits(rdram, ctx, runtime, addr);                                              \
    }
PS2X_PC_READ_FN(8, uint8_t)
PS2X_PC_READ_FN(16, uint16_t)
PS2X_PC_READ_FN(32, uint32_t)
PS2X_PC_READ_FN(64, uint64_t)
PS2X_PC_READ_FN(128, __m128i)
#undef PS2X_PC_READ_FN

#define PS2X_PC_WRITE_FN(bits, type)                                                                       \
    static inline __attribute__((always_inline)) void Ps2xPcWrite##bits(uint8_t *rdram, R5900Context *ctx, \
                                                                        PS2Runtime *runtime, uint32_t pc,  \
                                                                        uint32_t addr, type value)         \
    {                                                                                                      \
        ps2xPcCold<type>(ctx, addr, pc);                                                                   \
        Ps2XboxWrite##bits(rdram, ctx, runtime, addr, value);                                              \
    }
PS2X_PC_WRITE_FN(8, uint8_t)
PS2X_PC_WRITE_FN(16, uint16_t)
PS2X_PC_WRITE_FN(32, uint32_t)
PS2X_PC_WRITE_FN(64, uint64_t)
PS2X_PC_WRITE_FN(128, __m128i)
#undef PS2X_PC_WRITE_FN

#define PS2X_PC_READ8(pc, addr) Ps2xPcRead8(rdram, ctx, runtime, (pc), (uint32_t)(addr))
#define PS2X_PC_READ16(pc, addr) Ps2xPcRead16(rdram, ctx, runtime, (pc), (uint32_t)(addr))
#define PS2X_PC_READ32(pc, addr) Ps2xPcRead32(rdram, ctx, runtime, (pc), (uint32_t)(addr))
#define PS2X_PC_READ64(pc, addr) Ps2xPcRead64(rdram, ctx, runtime, (pc), (uint32_t)(addr))
#define PS2X_PC_READ128(pc, addr) Ps2xPcRead128(rdram, ctx, runtime, (pc), (uint32_t)(addr))

// As PS2_XBOX_GUEST_WRITE: the address is evaluated before the value.
#define PS2X_PC_GUEST_WRITE(access, type, pc, addr, val)        \
    do                                                          \
    {                                                           \
        uint32_t _addr = (addr);                                \
        access(rdram, ctx, runtime, (pc), _addr, (type)(val)); \
    } while (0)
#define PS2X_PC_WRITE8(pc, addr, val) PS2X_PC_GUEST_WRITE(Ps2xPcWrite8, uint8_t, pc, addr, val)
#define PS2X_PC_WRITE16(pc, addr, val) PS2X_PC_GUEST_WRITE(Ps2xPcWrite16, uint16_t, pc, addr, val)
#define PS2X_PC_WRITE32(pc, addr, val) PS2X_PC_GUEST_WRITE(Ps2xPcWrite32, uint32_t, pc, addr, val)
#define PS2X_PC_WRITE64(pc, addr, val) PS2X_PC_GUEST_WRITE(Ps2xPcWrite64, uint64_t, pc, addr, val)
#define PS2X_PC_WRITE128(pc, addr, val) PS2X_PC_GUEST_WRITE(Ps2xPcWrite128, __m128i, pc, addr, val)

// -delay-flags. A delay-slot instruction was bracketed by
//     ctx->in_delay_slot = true; ctx->branch_pc = <branch>; ... ctx->in_delay_slot = false;
// for the one reader of those fields, an exception raised inside it. When
// the instruction is register work it cannot raise one and the triple goes
// (PS2X_DS_DROP() marks where it stood). When it is one guest memory access
// (with -pc-stores), the access's cold path sets pc and the flags itself
// around the slow call and clears in_delay_slot after it, as the triple did:
// PS2X_PC_DS_READn(pc, branch, addr), PS2X_PC_DS_WRITEn(pc, branch, addr,
// value). in_delay_slot is false everywhere else either way; branch_pc
// keeps an older value where the triple went, which only an exception in a
// delay slot reads (after setting it).
#define PS2X_DS_DROP() ((void)0)

template <typename T>
static inline __attribute__((always_inline)) void ps2xPcDsEnter(R5900Context *ctx, uint32_t addr, uint32_t pc,
                                                                 uint32_t branch)
{
    if (!Ps2XboxInRam<T>(addr))
    {
        ctx->pc = pc;
        ctx->in_delay_slot = true;
        ctx->branch_pc = branch;
    }
}

template <typename T>
static inline __attribute__((always_inline)) void ps2xPcDsLeave(R5900Context *ctx, uint32_t addr)
{
    if (!Ps2XboxInRam<T>(addr))
        ctx->in_delay_slot = false;
}

#define PS2X_PC_DS_READ_FN(bits, type)                                                                       \
    static inline __attribute__((always_inline)) type Ps2xPcDsRead##bits(uint8_t *rdram, R5900Context *ctx, \
                                                                          PS2Runtime *runtime, uint32_t pc,  \
                                                                          uint32_t branch, uint32_t addr)    \
    {                                                                                                        \
        ps2xPcDsEnter<type>(ctx, addr, pc, branch);                                                          \
        const type value = Ps2XboxRead##bits(rdram, ctx, runtime, addr);                                     \
        ps2xPcDsLeave<type>(ctx, addr);                                                                      \
        return value;                                                                                        \
    }
PS2X_PC_DS_READ_FN(8, uint8_t)
PS2X_PC_DS_READ_FN(16, uint16_t)
PS2X_PC_DS_READ_FN(32, uint32_t)
PS2X_PC_DS_READ_FN(64, uint64_t)
PS2X_PC_DS_READ_FN(128, __m128i)
#undef PS2X_PC_DS_READ_FN

#define PS2X_PC_DS_WRITE_FN(bits, type)                                                                       \
    static inline __attribute__((always_inline)) void Ps2xPcDsWrite##bits(uint8_t *rdram, R5900Context *ctx, \
                                                                           PS2Runtime *runtime, uint32_t pc,  \
                                                                           uint32_t branch, uint32_t addr,    \
                                                                           type value)                        \
    {                                                                                                         \
        ps2xPcDsEnter<type>(ctx, addr, pc, branch);                                                           \
        Ps2XboxWrite##bits(rdram, ctx, runtime, addr, value);                                                 \
        ps2xPcDsLeave<type>(ctx, addr);                                                                       \
    }
PS2X_PC_DS_WRITE_FN(8, uint8_t)
PS2X_PC_DS_WRITE_FN(16, uint16_t)
PS2X_PC_DS_WRITE_FN(32, uint32_t)
PS2X_PC_DS_WRITE_FN(64, uint64_t)
PS2X_PC_DS_WRITE_FN(128, __m128i)
#undef PS2X_PC_DS_WRITE_FN

#define PS2X_PC_DS_READ8(pc, branch, addr) Ps2xPcDsRead8(rdram, ctx, runtime, (pc), (branch), (uint32_t)(addr))
#define PS2X_PC_DS_READ16(pc, branch, addr) Ps2xPcDsRead16(rdram, ctx, runtime, (pc), (branch), (uint32_t)(addr))
#define PS2X_PC_DS_READ32(pc, branch, addr) Ps2xPcDsRead32(rdram, ctx, runtime, (pc), (branch), (uint32_t)(addr))
#define PS2X_PC_DS_READ64(pc, branch, addr) Ps2xPcDsRead64(rdram, ctx, runtime, (pc), (branch), (uint32_t)(addr))
#define PS2X_PC_DS_READ128(pc, branch, addr) Ps2xPcDsRead128(rdram, ctx, runtime, (pc), (branch), (uint32_t)(addr))

#define PS2X_PC_DS_GUEST_WRITE(access, type, pc, branch, addr, val)       \
    do                                                                    \
    {                                                                     \
        uint32_t _addr = (addr);                                          \
        access(rdram, ctx, runtime, (pc), (branch), _addr, (type)(val)); \
    } while (0)
#define PS2X_PC_DS_WRITE8(pc, branch, addr, val) PS2X_PC_DS_GUEST_WRITE(Ps2xPcDsWrite8, uint8_t, pc, branch, addr, val)
#define PS2X_PC_DS_WRITE16(pc, branch, addr, val) \
    PS2X_PC_DS_GUEST_WRITE(Ps2xPcDsWrite16, uint16_t, pc, branch, addr, val)
#define PS2X_PC_DS_WRITE32(pc, branch, addr, val) \
    PS2X_PC_DS_GUEST_WRITE(Ps2xPcDsWrite32, uint32_t, pc, branch, addr, val)
#define PS2X_PC_DS_WRITE64(pc, branch, addr, val) \
    PS2X_PC_DS_GUEST_WRITE(Ps2xPcDsWrite64, uint64_t, pc, branch, addr, val)
#define PS2X_PC_DS_WRITE128(pc, branch, addr, val) \
    PS2X_PC_DS_GUEST_WRITE(Ps2xPcDsWrite128, __m128i, pc, branch, addr, val)

// -leaf-calls. A constant call to a whitelisted leaf (src/xbox/tools/
// leaf_whitelist.txt) runs B-LOGIC's exact inline core (ts_leaf.h) instead of
// the translated original, while the table entry is still that original (a
// runtime override, PS2Runtime::replaceFunction, takes the normal call). The
// dispatch's checkpoint charge and pc rule are kept: pc is the target while
// the core runs and the resume point after it, as when the original returns
// through $ra. The core's contract (B-LOGIC, section 6 I-12):
//     void core(uint8_t *rdram, R5900Context *ctx);
// exact register and memory effects of the original, never yields, never
// unwinds, every register outside ts_abi_observed.h's set for the callee
// left as the original leaves it.
#define PS2X_LEAF_CALL(core, original, slot, target, resume)                     \
    do                                                                          \
    {                                                                           \
        if (g_ps2RecompiledFunctionTable[slot] == &(original))                  \
        {                                                                       \
            ctx->pc = (target);                                                 \
            if (runtime->eeCheckpointDue(PS2X_GUEST_DISPATCH_CYCLES))           \
                return;                                                         \
            core(rdram, ctx);                                                   \
            ctx->pc = (resume);                                                 \
        }                                                                       \
        else                                                                    \
        {                                                                       \
            PS2X_CALL_SLOT(slot, target, resume);                               \
        }                                                                       \
    } while (0)

// -restrict-ctx with -ctx-guard: the scheduler checkpoint, the one call the
// patched functions make without handing it ctx. With ctx __restrict the
// compiler may keep guest registers in host registers across it, so it must
// not write the running thread's context (the rule in
// ps2_native_call_xbox.h). TS_CTX_GUARD=1 (check build, SC-E) compares the
// context's registers before and after every checkpoint that does not switch
// (one that is due returns at once, so nothing is cached past it) and counts
// a difference ([TS:callslot] ctx=, src/xbox/xbox_codegen.cpp).
#if TS_CTX_GUARD
struct Ps2xCtxGuardStats
{
    uint32_t checks;
    uint32_t changed;
};
extern Ps2xCtxGuardStats g_ps2xCtxGuardStats;
uint32_t ps2xCtxGuardHash(const R5900Context *ctx);
static inline bool ps2xCtxGuardedDue(R5900Context *ctx, PS2Runtime *runtime)
{
    const uint32_t before = ps2xCtxGuardHash(ctx);
    if (runtime->eeCheckpointDue())
        return true;
    ++g_ps2xCtxGuardStats.checks;
    if (ps2xCtxGuardHash(ctx) != before)
        ++g_ps2xCtxGuardStats.changed;
    return false;
}
#define PS2X_CTX_GUARDED_DUE() ps2xCtxGuardedDue(ctx, runtime)
#else
#define PS2X_CTX_GUARDED_DUE() runtime->eeCheckpointDue()
#endif

#endif // PS2_CODEGEN_XBOX_H
