// JALR through a direct-mapped cache (the Xbox build; B-CODEGEN,
// src/xbox/PUSH-BC-PLAN.md section 3.4 item 10 and section 5.2).
//
// The recompiler emits every JALR as
//     ctx->pc = jumpTarget;
//     if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, source, resume,
//                                       PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
//         return;
//     }
// which looks the target up in the compact table on every call.
// patch_generated.py -indirect-cache (src/xbox/mk/b_codegen.mk,
// TS_INDIRECT_CACHE=1) makes it PS2X_INDIRECT_CALL(jumpTarget, source,
// resume): 256 entries of target -> table entry, indexed by the target's
// word address. A hit is the DirectCall path (ps2xDirectCall, the same
// charge, the table entry called so runtime overrides are honoured, the same
// return rule); a miss looks the slot up once (ps2xIndirectCallMiss,
// src/xbox/xbox_codegen.cpp), fills the entry and makes the same call; a
// target the table has no entry for takes dispatchGuestBranch exactly as
// before (the missing-function report and policy unchanged). The table's
// address -> slot mapping never changes, so an entry never goes stale.
//
// TS_CALL_SLOT_CHECK=1 (check build): every hit is checked against the
// table and the hits, misses and mismatches counted ([TS:callslot] icall=).
#ifndef PS2_INDIRECT_CALL_XBOX_H
#define PS2_INDIRECT_CALL_XBOX_H

#include "ps2_runtime.h"
#include "ps2_direct_call_xbox.h"

#ifndef TS_CALL_SLOT_CHECK
#define TS_CALL_SLOT_CHECK 0
#endif

#define PS2X_INDIRECT_CACHE_SIZE 256u

// tag = ~target: the zero-initialised cache holds target 0xFFFFFFFF, which
// is never a function address (unaligned), so no entry starts out valid.
struct Ps2xIndirectEntry
{
    uint32_t tag;
    const PS2Runtime::RecompiledFunction *entry;
};
extern Ps2xIndirectEntry g_ps2xIndirectCache[PS2X_INDIRECT_CACHE_SIZE];

struct Ps2xIndirectStats
{
    uint32_t hits;
    uint32_t misses;
    uint32_t mismatched;
};
extern Ps2xIndirectStats g_ps2xIndirectStats;

// The compact table's sorted address array (register_functions_xbox.cpp).
extern const uint32_t g_ps2RecompiledFunctionAddresses[];

// Out of line: the slot lookup, the cache fill and the call; or
// dispatchGuestBranch for a target without a table entry.
bool __attribute__((fastcall)) ps2xIndirectCallMiss(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime,
                                                    uint32_t target, uint32_t source, uint32_t resume);

// True when the caller continues at resume (as dispatchGuestBranch answers).
static inline __attribute__((always_inline)) bool ps2xIndirectCall(uint8_t *rdram, R5900Context *ctx,
                                                                   PS2Runtime *runtime, uint32_t target,
                                                                   uint32_t source, uint32_t resume)
{
    const Ps2xIndirectEntry &cached = g_ps2xIndirectCache[(target >> 2) & (PS2X_INDIRECT_CACHE_SIZE - 1u)];
    if (cached.tag == ~target)
    {
#if TS_CALL_SLOT_CHECK
        ++g_ps2xIndirectStats.hits;
        const uint32_t slot = static_cast<uint32_t>(cached.entry - g_ps2RecompiledFunctionTable);
        if (slot >= g_ps2RecompiledFunctionTableSlotCount || g_ps2RecompiledFunctionAddresses[slot] != target)
        {
            ++g_ps2xIndirectStats.mismatched;
            return runtime->dispatchGuestBranch(rdram, ctx, target, source, resume,
                                                PS2Runtime::GuestBranchKind::IndirectCall, "JALR");
        }
#endif
        return ps2xDirectCall(rdram, ctx, runtime, cached.entry, target, resume);
    }
    return ps2xIndirectCallMiss(rdram, ctx, runtime, target, source, resume);
}

#define PS2X_INDIRECT_CALL(target, source, resume)                                     \
    do                                                                                 \
    {                                                                                  \
        if (!ps2xIndirectCall(rdram, ctx, runtime, (target), (source), (resume)))      \
        {                                                                              \
            return;                                                                    \
        }                                                                              \
    } while (0)

#endif // PS2_INDIRECT_CALL_XBOX_H
