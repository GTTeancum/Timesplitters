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

// Function: mmItemCount
// Address: 0x248cd0 - 0x248d4c
void mmItemCount_0x248cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmItemCount_0x248cd0");
#endif

    switch (ctx->pc) {
        case 0x248d00u: goto label_248d00;
        case 0x248d1cu: goto label_248d1c;
        default: break;
    }

    ctx->pc = 0x248cd0u;

    // 0x248cd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x248cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x248cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248cd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x248cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x248cdc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x248cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x248ce0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x248ce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248ce4: 0x8f90a12c  lw          $s0, -0x5ED4($gp)
    ctx->pc = 0x248ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
    // 0x248ce8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x248ce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248cec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x248cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x248cf0: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x248CF0u;
    {
        const bool branch_taken_0x248cf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x248CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248CF0u;
        // 0x248cf4: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248cf0) {
            ctx->pc = 0x248D2Cu;
            goto label_248d2c;
        }
    }
    ctx->pc = 0x248CF8u;
    // 0x248cf8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x248cf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248cfc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x248cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_248d00:
    // 0x248d00: 0x54530008  bnel        $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x248D00u;
    {
        const bool branch_taken_0x248d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x248d00) {
            ctx->pc = 0x248D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248D00u;
            // 0x248d04: 0x8e100038  lw          $s0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248D24u;
            goto label_248d24;
        }
    }
    ctx->pc = 0x248D08u;
    // 0x248d08: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x248d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x248d0c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x248D0Cu;
    {
        const bool branch_taken_0x248d0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x248d0c) {
            ctx->pc = 0x248D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248D0Cu;
            // 0x248d10: 0x8e100038  lw          $s0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248D24u;
            goto label_248d24;
        }
    }
    ctx->pc = 0x248D14u;
    // 0x248d14: 0xc092326  jal         func_248C98
    ctx->pc = 0x248D14u;
    SET_GPR_U32(ctx, 31, 0x248D1Cu);
    ctx->pc = 0x248D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248D14u;
    // 0x248d18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248C98u, 0x248D14u, 0x248D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D1Cu;
label_248d1c:
    // 0x248d1c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x248d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x248d20: 0x8e100038  lw          $s0, 0x38($s0)
    ctx->pc = 0x248d20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_248d24:
    // 0x248d24: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x248D24u;
    {
        const bool branch_taken_0x248d24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x248d24) {
            ctx->pc = 0x248D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248D24u;
            // 0x248d28: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248d00;
        }
    }
    ctx->pc = 0x248D2Cu;
label_248d2c:
    // 0x248d2c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x248d2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248d30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x248d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x248d34: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x248d34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x248d38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x248d38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248d3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x248d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248d40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248d40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248d44: 0x3e00008  jr          $ra
    ctx->pc = 0x248D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D44u;
        // 0x248d48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248D4Cu;
}
