// The natives' guest calls through the function table's slots (the Xbox
// build; B-CODEGEN, src/xbox/PUSH-BC-PLAN.md section 5.2, REWRITE-PLAN.md
// M3.2).
//
// The hand-written natives (project/game/ts_native_*.cpp) call translated
// game functions through guestCall / lightCall, which used to be
//     SET_GPR_U32(ctx, 31, next);
//     return runtime->dispatchGuestBranch(rdram, ctx, target, source, next,
//                                         PS2Runtime::GuestBranchKind::DirectCall, "JAL");
// a seven-argument out-of-line call that looks the target up in the compact
// table on every call. With TS_NATIVE_CALL_SLOTS=1 (src/xbox/mk/b_codegen.mk)
// they use PS2X_GUEST_CALL instead: every target is a literal at its call
// site, compact_function_table.py --slots resolves each to its table slot at
// build time (build/xbox/gen/ps2_function_slots_xbox.h, ps2SlotOf), and the
// call goes straight to ps2xDirectCall, the out-of-line form of the patched
// generated code's PS2X_CALL_SLOT (ps2_direct_call_xbox.h). The behaviour is
// the DirectCall path of dispatchGuestBranch exactly: the same dispatch
// charge, the table entry is what gets called (runtime overrides honoured),
// the same return rule.
//
// A target the table has no entry for (none today: the build reports any)
// takes dispatchGuestBranch as before, which also reports the missing
// function.
//
// TS_CALL_SLOT_CHECK=1 (check build): every slot call first checks that
// the slot's table address is the target (callslot counter, [TS:callslot],
// src/xbox/xbox_codegen.cpp); a mismatch counts and takes
// dispatchGuestBranch. The boot check compares every resolved target in the
// generated list against the table once. Both must read 0.
//
// __restrict (REWRITE-PLAN.md 3.9; src/xbox/tools/patch_generated.py
// -restrict-ctx, make TS_RESTRICT_CTX=1): the patched generated functions may declare ctx
// __restrict, i.e. inside one generated function nothing reaches the guest
// context except through its ctx parameter or a pointer handed down from it.
// Rules that keep that true: a callee that is passed ctx may use it freely
// (its accesses are based on ctx); a call that is not passed ctx (the
// scheduler's checkpoint, runtime->... without ctx) must not write the
// running thread's context, and the scheduler only ever writes another
// thread's or an invocation's own context there; rdram never gets
// __restrict (guest pointers into it alias each other everywhere).
// TS_CTX_GUARD=1 checks the second rule at run time (patch_generated.py
// -ctx-guard wraps the scheduler checkpoints, the calls not handed ctx, in
// PS2X_CTX_GUARDED_DUE: ps2_codegen_xbox.h).
#ifndef PS2_NATIVE_CALL_XBOX_H
#define PS2_NATIVE_CALL_XBOX_H

#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_direct_call_xbox.h"
// Generated (src/xbox/mk/b_codegen.mk puts build/xbox/gen on the include
// path whenever TS_NATIVE_CALL_SLOTS is on).
#include "ps2_function_slots_xbox.h"

#ifndef TS_CALL_SLOT_CHECK
#define TS_CALL_SLOT_CHECK 0
#endif

// The compact table's sorted address array (register_functions_xbox.cpp).
extern const uint32_t g_ps2RecompiledFunctionAddresses[];

// Cumulative, written by the game thread only, read by the report line.
struct Ps2NativeCallSlotStats
{
    uint32_t calls;      // TS_CALL_SLOT_CHECK: slot calls checked
    uint32_t mismatched; // TS_CALL_SLOT_CHECK: slot whose table address is not the target
};
extern Ps2NativeCallSlotStats g_ps2NativeCallSlotStats;

// The boot check: every target in kPs2NativeCallTargets against the table
// (src/xbox/xbox_codegen.cpp). Returns the number that disagree.
uint32_t ps2xCheckNativeCallSlots();

// The natives' JAL: $ra = next, then the call. True when the native goes on
// at next; false when it must return (the callee unwound to the scheduler,
// switched threads or stopped), exactly as dispatchGuestBranch answers.
inline __attribute__((always_inline)) bool ps2xNativeGuestCall(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime,
                                                               uint32_t target, uint32_t source, uint32_t next)
{
    SET_GPR_U32(ctx, 31, next);
    // Every caller passes a literal target and this is inlined into it, so
    // the switch in ps2SlotOf folds to the slot (or to PS2X_NO_FUNCTION_SLOT)
    // at each call site: no lookup is left in the code. (clang folds
    // __builtin_constant_p of a parameter to false before inlining, so the
    // switch is not guarded by it; a target that is not a constant would
    // still be exact, only a switch slower.)
    const uint32_t slot = ps2SlotOf(target);
    if (slot != PS2X_NO_FUNCTION_SLOT)
    {
#if TS_CALL_SLOT_CHECK
        ++g_ps2NativeCallSlotStats.calls;
        if (slot >= g_ps2RecompiledFunctionTableSlotCount || g_ps2RecompiledFunctionAddresses[slot] != target)
        {
            ++g_ps2NativeCallSlotStats.mismatched;
        }
        else
#endif
        {
            return ps2xDirectCall(rdram, ctx, runtime, &g_ps2RecompiledFunctionTable[slot], target, next);
        }
    }
    return runtime->dispatchGuestBranch(rdram, ctx, target, source, next, PS2Runtime::GuestBranchKind::DirectCall,
                                        "JAL");
}

#define PS2X_GUEST_CALL(rdram, ctx, runtime, target, source, next) \
    ps2xNativeGuestCall((rdram), (ctx), (runtime), (target), (source), (next))

#endif // PS2_NATIVE_CALL_XBOX_H
