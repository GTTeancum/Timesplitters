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
// PS2X_CALL_RETURN_SLOW 1 (src/xbox/PUSH-BC-PLAN.md M3.1, B-SCHED): the
// post-call check is one compare, ctx->pc != resume, and only then the
// stop / pc 0 / native-override cases go out of line (ps2xCallReturnSlow).
// A stop request with pc at resume is then noticed at the next checkpoint
// instead of here (requestStop zeroes the countdown, so that is the next
// back-edge or call entry). 0 (the default until Train 2, with the
// countdown): the three tests inline, as before.
#ifndef PS2X_CALL_RETURN_SLOW
#define PS2X_CALL_RETURN_SLOW 0
#endif

#if PS2X_CALL_RETURN_SLOW
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
        /* Back at the fallthrough: on. Anything else (a stop, pc 0, a     */           \
        /* native override that left pc at the entry, a thread switch, an  */           \
        /* exception) is sorted out out of line.                           */           \
        if (ctx->pc != (resume) && !ps2xCallReturnSlow(ctx, runtime, (target), (resume))) { \
            unwind;                                                                     \
        }                                                                               \
    } while (0)
#else
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
#endif

// The post-call cases other than "back at resume" (PS2X_CALL_RETURN_SLOW):
// true when the caller continues at resume (the callee left pc at its
// entry: a native override), false when it unwinds (a stop, pc 0, a thread
// switch or an exception). Fastcall: ctx and runtime in ECX/EDX.
bool __attribute__((fastcall)) ps2xCallReturnSlow(R5900Context *ctx, PS2Runtime *runtime, uint32_t target,
                                                  uint32_t resume);

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
