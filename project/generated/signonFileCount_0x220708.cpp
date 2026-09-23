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

// Function: signonFileCount
// Address: 0x220708 - 0x220738
void signonFileCount_0x220708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonFileCount_0x220708");
#endif

    switch (ctx->pc) {
        case 0x220718u: goto label_220718;
        default: break;
    }

    ctx->pc = 0x220708u;

    // 0x220708: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x220708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22070c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22070Cu;
    {
        const bool branch_taken_0x22070c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22070Cu;
        // 0x220710: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22070c) {
            ctx->pc = 0x220730u;
            goto label_220730;
        }
    }
    ctx->pc = 0x220714u;
    // 0x220714: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x220714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_220718:
    // 0x220718: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x220718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x22071c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22071Cu;
    {
        const bool branch_taken_0x22071c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22071Cu;
        // 0x220720: 0x24840b78  addiu       $a0, $a0, 0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22071c) {
            ctx->pc = 0x220730u;
            goto label_220730;
        }
    }
    ctx->pc = 0x220724u;
    // 0x220724: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x220724u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x220728: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x220728u;
    {
        const bool branch_taken_0x220728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220728) {
            ctx->pc = 0x22072Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220728u;
            // 0x22072c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220718;
        }
    }
    ctx->pc = 0x220730u;
label_220730:
    // 0x220730: 0x3e00008  jr          $ra
    ctx->pc = 0x220730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220730u;
        // 0x220734: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220738u;
}
