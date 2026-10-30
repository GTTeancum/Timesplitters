#pragma once
// Xbox native routines use the same live function-table entries and dispatch
// checkpoint as translated code. The source-copy patcher resolves only
// literal call targets from the exact compact table used by this build.
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_direct_call_xbox.h"

extern const uint32_t g_ps2RecompiledFunctionAddresses[];

template <uint32_t Slot, uint32_t Target>
inline bool xboxNativeGuestCall(uint8_t *rdram, R5900Context *ctx,
                                PS2Runtime *runtime, uint32_t source,
                                uint32_t next)
{
    // guestCall/lightCall set the return register before dispatch, including
    // when the scheduler immediately unwinds at the callee's entry.
    SET_GPR_U32(ctx, 31, next);
    if (Slot < g_ps2RecompiledFunctionTableSlotCount &&
        g_ps2RecompiledFunctionAddresses[Slot] == Target &&
        g_ps2RecompiledFunctionTable[Slot] != nullptr)
    {
        // Pass the slot's address, not a retained function pointer. Overrides
        // and temporary self-test replacements must be seen on every call.
        return ps2xDirectCall(rdram, ctx, runtime,
                             &g_ps2RecompiledFunctionTable[Slot], Target, next);
    }
    // Resolve mismatched/missing entries through the original dispatcher,
    // before charging anything, so its diagnostic and stop policy survives.
    return runtime->dispatchGuestBranch(rdram, ctx, Target, source, next,
                                        PS2Runtime::GuestBranchKind::DirectCall, "JAL");
}
