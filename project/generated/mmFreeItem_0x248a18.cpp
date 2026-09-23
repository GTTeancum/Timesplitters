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

// Function: mmFreeItem
// Address: 0x248a18 - 0x248ab8
void mmFreeItem_0x248a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmFreeItem_0x248a18");
#endif

    switch (ctx->pc) {
        case 0x248a28u: goto label_248a28;
        case 0x248a70u: goto label_248a70;
        default: break;
    }

    ctx->pc = 0x248a18u;

    // 0x248a18: 0x8f87b828  lw          $a3, -0x47D8($gp)
    ctx->pc = 0x248a18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948904)));
    // 0x248a1c: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x248A1Cu;
    {
        const bool branch_taken_0x248a1c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x248A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A1Cu;
        // 0x248a20: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a1c) {
            ctx->pc = 0x248A4Cu;
            goto label_248a4c;
        }
    }
    ctx->pc = 0x248A24u;
    // 0x248a24: 0x8f86b82c  lw          $a2, -0x47D4($gp)
    ctx->pc = 0x248a24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948908)));
label_248a28:
    // 0x248a28: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x248a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x248a2c: 0x0  nop
    ctx->pc = 0x248a2cu;
    // NOP
    // 0x248a30: 0x0  nop
    ctx->pc = 0x248a30u;
    // NOP
    // 0x248a34: 0x0  nop
    ctx->pc = 0x248a34u;
    // NOP
    // 0x248a38: 0x0  nop
    ctx->pc = 0x248a38u;
    // NOP
    // 0x248a3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x248A3Cu;
    {
        const bool branch_taken_0x248a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248a3c) {
            ctx->pc = 0x248A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248a28;
        }
    }
    ctx->pc = 0x248A44u;
    // 0x248a44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x248A44u;
    {
        const bool branch_taken_0x248a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248a44) {
            ctx->pc = 0x248A50u;
            goto label_248a50;
        }
    }
    ctx->pc = 0x248A4Cu;
label_248a4c:
    // 0x248a4c: 0x8f86b82c  lw          $a2, -0x47D4($gp)
    ctx->pc = 0x248a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948908)));
label_248a50:
    // 0x248a50: 0x50800015  beql        $a0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x248A50u;
    {
        const bool branch_taken_0x248a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x248a50) {
            ctx->pc = 0x248A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248A50u;
            // 0x248a54: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248AA8u;
            goto label_248aa8;
        }
    }
    ctx->pc = 0x248A58u;
    // 0x248a58: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x248a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x248a5c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x248A5Cu;
    {
        const bool branch_taken_0x248a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A5Cu;
        // 0x248a60: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a5c) {
            ctx->pc = 0x248A84u;
            goto label_248a84;
        }
    }
    ctx->pc = 0x248A64u;
    // 0x248a64: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x248A64u;
    {
        const bool branch_taken_0x248a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x248a64) {
            ctx->pc = 0x248A8Cu;
            goto label_248a8c;
        }
    }
    ctx->pc = 0x248A6Cu;
    // 0x248a6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x248a6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248a70:
    // 0x248a70: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x248a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x248a74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x248A74u;
    {
        const bool branch_taken_0x248a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248a74) {
            ctx->pc = 0x248A84u;
            goto label_248a84;
        }
    }
    ctx->pc = 0x248A7Cu;
    // 0x248a7c: 0x5445fffc  bnel        $v0, $a1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x248A7Cu;
    {
        const bool branch_taken_0x248a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x248a7c) {
            ctx->pc = 0x248A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248A7Cu;
            // 0x248a80: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248a70;
        }
    }
    ctx->pc = 0x248A84u;
label_248a84:
    // 0x248a84: 0x54450008  bnel        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x248A84u;
    {
        const bool branch_taken_0x248a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x248a84) {
            ctx->pc = 0x248A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248A84u;
            // 0x248a88: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248AA8u;
            goto label_248aa8;
        }
    }
    ctx->pc = 0x248A8Cu;
label_248a8c:
    // 0x248a8c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x248A8Cu;
    {
        const bool branch_taken_0x248a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x248A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A8Cu;
        // 0x248a90: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a8c) {
            ctx->pc = 0x248A9Cu;
            goto label_248a9c;
        }
    }
    ctx->pc = 0x248A94u;
    // 0x248a94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x248A94u;
    {
        const bool branch_taken_0x248a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A94u;
        // 0x248a98: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a94) {
            ctx->pc = 0x248AA4u;
            goto label_248aa4;
        }
    }
    ctx->pc = 0x248A9Cu;
label_248a9c:
    // 0x248a9c: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x248a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x248aa0: 0x8f87b828  lw          $a3, -0x47D8($gp)
    ctx->pc = 0x248aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948904)));
label_248aa4:
    // 0x248aa4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x248aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_248aa8:
    // 0x248aa8: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x248aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x248aac: 0xaf85b828  sw          $a1, -0x47D8($gp)
    ctx->pc = 0x248aacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948904), GPR_U32(ctx, 5));
    // 0x248ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x248AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248AB0u;
        // 0x248ab4: 0xaf86b82c  sw          $a2, -0x47D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948908), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248AB8u;
}
