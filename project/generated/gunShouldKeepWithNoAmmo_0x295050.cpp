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

// Function: gunShouldKeepWithNoAmmo
// Address: 0x295050 - 0x295088
void gunShouldKeepWithNoAmmo_0x295050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunShouldKeepWithNoAmmo_0x295050");
#endif

    switch (ctx->pc) {
        case 0x295060u: goto label_295060;
        default: break;
    }

    ctx->pc = 0x295050u;

    // 0x295050: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x295050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x295054: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x295054u;
    {
        const bool branch_taken_0x295054 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x295058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295054u;
        // 0x295058: 0x248411c0  addiu       $a0, $a0, 0x11C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295054) {
            ctx->pc = 0x295080u;
            goto label_295080;
        }
    }
    ctx->pc = 0x29505Cu;
    // 0x29505c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x29505cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_295060:
    // 0x295060: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x295060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x295064: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x295064u;
    {
        const bool branch_taken_0x295064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295064u;
        // 0x295068: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295064) {
            ctx->pc = 0x295074u;
            goto label_295074;
        }
    }
    ctx->pc = 0x29506Cu;
    // 0x29506c: 0x3e00008  jr          $ra
    ctx->pc = 0x29506Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29506Cu;
        // 0x295070: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29506Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295074u;
label_295074:
    // 0x295074: 0x28620014  slti        $v0, $v1, 0x14
    ctx->pc = 0x295074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x295078: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x295078u;
    {
        const bool branch_taken_0x295078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295078u;
        // 0x29507c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295078) {
            ctx->pc = 0x295060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295060;
        }
    }
    ctx->pc = 0x295080u;
label_295080:
    // 0x295080: 0x3e00008  jr          $ra
    ctx->pc = 0x295080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295080u;
        // 0x295084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295088u;
}
