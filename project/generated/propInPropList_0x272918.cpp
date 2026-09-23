#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: propInPropList
// Address: 0x272918 - 0x27295c
void propInPropList_0x272918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propInPropList_0x272918");
#endif

    switch (ctx->pc) {
        case 0x272930u: goto label_272930;
        default: break;
    }

    ctx->pc = 0x272918u;

    // 0x272918: 0x8f86b15c  lw          $a2, -0x4EA4($gp)
    ctx->pc = 0x272918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
    // 0x27291c: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x27291Cu;
    {
        const bool branch_taken_0x27291c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x272920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27291Cu;
        // 0x272920: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27291c) {
            ctx->pc = 0x272954u;
            goto label_272954;
        }
    }
    ctx->pc = 0x272924u;
    // 0x272924: 0x8f85b07c  lw          $a1, -0x4F84($gp)
    ctx->pc = 0x272924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
    // 0x272928: 0x24020250  addiu       $v0, $zero, 0x250
    ctx->pc = 0x272928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x27292c: 0x0  nop
    ctx->pc = 0x27292cu;
    // NOP
label_272930:
    // 0x272930: 0x623818  mult        $a3, $v1, $v0
    ctx->pc = 0x272930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x272934: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x272934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x272938: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272938u;
    {
        const bool branch_taken_0x272938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x27293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272938u;
        // 0x27293c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272938) {
            ctx->pc = 0x272948u;
            goto label_272948;
        }
    }
    ctx->pc = 0x272940u;
    // 0x272940: 0x3e00008  jr          $ra
    ctx->pc = 0x272940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272940u;
        // 0x272944: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272948u;
label_272948:
    // 0x272948: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x272948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x27294c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27294Cu;
    {
        const bool branch_taken_0x27294c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27294Cu;
        // 0x272950: 0x24020250  addiu       $v0, $zero, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27294c) {
            ctx->pc = 0x272930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_272930;
        }
    }
    ctx->pc = 0x272954u;
label_272954:
    // 0x272954: 0x3e00008  jr          $ra
    ctx->pc = 0x272954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272954u;
        // 0x272958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27295Cu;
}
