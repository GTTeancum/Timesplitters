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

// Function: preloadPass2Insert
// Address: 0x21c840 - 0x21c8d0
void preloadPass2Insert_0x21c840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("preloadPass2Insert_0x21c840");
#endif

    switch (ctx->pc) {
        case 0x21c888u: goto label_21c888;
        default: break;
    }

    ctx->pc = 0x21c840u;

    // 0x21c840: 0x8f83b6f4  lw          $v1, -0x490C($gp)
    ctx->pc = 0x21c840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948596)));
    // 0x21c844: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C844u;
    {
        const bool branch_taken_0x21c844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C844u;
        // 0x21c848: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c844) {
            ctx->pc = 0x21C854u;
            goto label_21c854;
        }
    }
    ctx->pc = 0x21C84Cu;
    // 0x21c84c: 0x3e00008  jr          $ra
    ctx->pc = 0x21C84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C84Cu;
        // 0x21c850: 0xaf84b6f4  sw          $a0, -0x490C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948596), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C854u;
label_21c854:
    // 0x21c854: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x21c854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21c858: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21c858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21c85c: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x21c85cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21c860: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C860u;
    {
        const bool branch_taken_0x21c860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C860u;
        // 0x21c864: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c860) {
            ctx->pc = 0x21C874u;
            goto label_21c874;
        }
    }
    ctx->pc = 0x21C868u;
    // 0x21c868: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x21c868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x21c86c: 0x3e00008  jr          $ra
    ctx->pc = 0x21C86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C86Cu;
        // 0x21c870: 0xaf84b6f4  sw          $a0, -0x490C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948596), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C874u;
label_21c874:
    // 0x21c874: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x21c874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x21c878: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x21C878u;
    {
        const bool branch_taken_0x21c878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c878) {
            ctx->pc = 0x21C8B8u;
            goto label_21c8b8;
        }
    }
    ctx->pc = 0x21C880u;
    // 0x21c880: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21c880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21c884: 0x0  nop
    ctx->pc = 0x21c884u;
    // NOP
label_21c888:
    // 0x21c888: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x21c888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21c88c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C88Cu;
    {
        const bool branch_taken_0x21c88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c88c) {
            ctx->pc = 0x21C890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C88Cu;
            // 0x21c890: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C8A4u;
            goto label_21c8a4;
        }
    }
    ctx->pc = 0x21C894u;
    // 0x21c894: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x21c894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x21c898: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21c898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c89c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21C89Cu;
    {
        const bool branch_taken_0x21c89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C89Cu;
        // 0x21c8a0: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c89c) {
            ctx->pc = 0x21C8A8u;
            goto label_21c8a8;
        }
    }
    ctx->pc = 0x21C8A4u;
label_21c8a4:
    // 0x21c8a4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x21c8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_21c8a8:
    // 0x21c8a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C8A8u;
    {
        const bool branch_taken_0x21c8a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c8a8) {
            ctx->pc = 0x21C8B8u;
            goto label_21c8b8;
        }
    }
    ctx->pc = 0x21C8B0u;
    // 0x21c8b0: 0x50e0fff5  beql        $a3, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x21C8B0u;
    {
        const bool branch_taken_0x21c8b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c8b0) {
            ctx->pc = 0x21C8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C8B0u;
            // 0x21c8b4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c888;
        }
    }
    ctx->pc = 0x21C8B8u;
label_21c8b8:
    // 0x21c8b8: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C8B8u;
    {
        const bool branch_taken_0x21c8b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c8b8) {
            ctx->pc = 0x21C8C8u;
            goto label_21c8c8;
        }
    }
    ctx->pc = 0x21C8C0u;
    // 0x21c8c0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x21c8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x21c8c4: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x21c8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
label_21c8c8:
    // 0x21c8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x21C8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C8D0u;
}
