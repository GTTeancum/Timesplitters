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

// Function: objFindItem
// Address: 0x248b98 - 0x248bd4
void objFindItem_0x248b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("objFindItem_0x248b98");
#endif

    switch (ctx->pc) {
        case 0x248ba8u: goto label_248ba8;
        default: break;
    }

    ctx->pc = 0x248b98u;

    // 0x248b98: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x248b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x248b9c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x248B9Cu;
    {
        const bool branch_taken_0x248b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x248b9c) {
            ctx->pc = 0x248BCCu;
            goto label_248bcc;
        }
    }
    ctx->pc = 0x248BA4u;
    // 0x248ba4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x248ba4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_248ba8:
    // 0x248ba8: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x248BA8u;
    {
        const bool branch_taken_0x248ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x248ba8) {
            ctx->pc = 0x248BBCu;
            goto label_248bbc;
        }
    }
    ctx->pc = 0x248BB0u;
    // 0x248bb0: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x248bb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x248bb4: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x248BB4u;
    {
        const bool branch_taken_0x248bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x248bb4) {
            ctx->pc = 0x248BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248BB4u;
            // 0x248bb8: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248BC4u;
            goto label_248bc4;
        }
    }
    ctx->pc = 0x248BBCu;
label_248bbc:
    // 0x248bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x248BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BBCu;
        // 0x248bc0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248BC4u;
label_248bc4:
    // 0x248bc4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x248BC4u;
    {
        const bool branch_taken_0x248bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x248bc4) {
            ctx->pc = 0x248BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248BC4u;
            // 0x248bc8: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248ba8;
        }
    }
    ctx->pc = 0x248BCCu;
label_248bcc:
    // 0x248bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x248BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BCCu;
        // 0x248bd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248BD4u;
}
