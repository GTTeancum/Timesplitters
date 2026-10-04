// Direct guest calls for the Xbox build.
//
// The recompiler emits every JAL to a known function as
//     if (!runtime->dispatchGuestBranch(rdram, ctx, target, source, resume,
//                                       PS2Runtime::GuestBranchKind::DirectCall, "JAL")) { return; }
// a seven-argument call that charges the dispatch cycles, looks the target
// up (the slot cache, then a binary search of the compact table) and calls
// it. src/xbox/tools/direct_calls.py rewrites those sites, in the Xbox's
// patched copies of the generated files, into PS2X_CALL_SLOT with the
// target's table slot resolved at build time, so the lookup is gone. The
// table entry is still what gets called, so runtime overrides
// (PS2Runtime::replaceFunction) are honoured.
//
// PS2X_CALL_SLOT has two forms with the same behaviour:
// - PS2X_DIRECT_CALL_INLINE=1 (the hot game functions, built at -O2):
//   the whole dispatch is inlined at the call site, about 75 bytes more
//   than the dispatchGuestBranch call. 12,000 sites would cost nearly 1 MB
//   of the Xbox's memory, so only the files that make most of a frame's
//   calls get it.
// - otherwise: one fastcall to ps2xDirectCall, as short as the call it
//   replaces, with the same body out of line.
//
// Keep PS2X_CALL_ENTRY in step with the DirectCall path of
// PS2Runtime::dispatchGuestBranch (ps2_runtime.cpp). Only the patched copies
// (build/xbox/gen) and ps2_runtime.cpp include this header.
#ifndef PS2_DIRECT_CALL_XBOX_H
#define PS2_DIRECT_CALL_XBOX_H

#include "ps2_runtime.h"

// EeScheduler::kGuestDispatchCycles. runtime/ee_scheduler.h is too heavy to
// include from 2,700 files; ps2_runtime.cpp checks that the two agree.
#define PS2X_GUEST_DISPATCH_CYCLES 8u

// The DirectCall path of dispatchGuestBranch. entry: the function table
// entry to call; target: the JAL's target pc; resume: the pc after the
// delay slot; unwind: the statement that leaves the caller when the
// dispatch would not resume at the fallthrough (the generated
// "if (!dispatch) return;").
#define PS2X_CALL_ENTRY(entry, target, resume, unwind)                                  \
    do {                                                                                \
        ctx->pc = (target);                                                             \
        /* Every inter-function transfer is an EE safe point: this charge */            \
        /* bounds straight-line call chains that have no local loop. (The */            \
        /* dispatcher also checks for a scheduler; guest code only runs   */            \
        /* under one.) When it fires, pc is the target: the scheduler     */            \
        /* resumes this thread by dispatching the callee itself.          */            \
        if (runtime->eeCheckpointDue(PS2X_GUEST_DISPATCH_CYCLES)) {                     \
            unwind;                                                                     \
        }                                                                               \
        (entry)(rdram, ctx, runtime);                                                   \
        /* A stop request or pc 0 unwinds to the scheduler. A callee that  */           \
        /* returned to its own entry (a native override that leaves pc     */           \
        /* alone) continues at the fallthrough; a pc elsewhere is a thread */           \
        /* switch or an exception and the caller returns to the dispatcher. */          \
        if (runtime->isStopRequested() || ctx->pc == 0u) {                              \
            unwind;                                                                     \
        }                                                                               \
        if (ctx->pc == (target)) {                                                      \
            ctx->pc = (resume);                                                         \
        }                                                                               \
        if (ctx->pc != (resume)) {                                                      \
            unwind;                                                                     \
        }                                                                               \
    } while (0)

// PS2X_CALL_ENTRY out of line: true when the caller continues at resume.
// Fastcall: rdram and ctx travel in ECX/EDX and the callee pops the rest.
bool __attribute__((fastcall)) ps2xDirectCall(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime,
                                              const PS2Runtime::RecompiledFunction *entry, uint32_t target,
                                              uint32_t resume);

#if defined(PS2X_DIRECT_CALL_INLINE) && PS2X_DIRECT_CALL_INLINE
#define PS2X_CALL_SLOT(slot, target, resume) \
    PS2X_CALL_ENTRY(g_ps2RecompiledFunctionTable[slot], target, resume, return)
#else
#define PS2X_CALL_SLOT(slot, target, resume)                                                           \
    do {                                                                                               \
        if (!ps2xDirectCall(rdram, ctx, runtime, &g_ps2RecompiledFunctionTable[slot], target, resume)) { \
            return;                                                                                    \
        }                                                                                              \
    } while (0)
#endif

#endif // PS2_DIRECT_CALL_XBOX_H
