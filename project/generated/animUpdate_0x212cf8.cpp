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

// Function: animUpdate
// Address: 0x212cf8 - 0x212e08
void animUpdate_0x212cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("animUpdate_0x212cf8");
#endif

    switch (ctx->pc) {
        case 0x212dd0u: goto label_212dd0;
        case 0x212de0u: goto label_212de0;
        default: break;
    }

    ctx->pc = 0x212cf8u;

    // 0x212cf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x212cfc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x212cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x212d00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x212d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x212d04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x212d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212d0c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x212d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x212d10: 0x10e00038  beqz        $a3, . + 4 + (0x38 << 2)
    ctx->pc = 0x212D10u;
    {
        const bool branch_taken_0x212d10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x212D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D10u;
        // 0x212d14: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d10) {
            ctx->pc = 0x212DF4u;
            goto label_212df4;
        }
    }
    ctx->pc = 0x212D18u;
    // 0x212d18: 0x8c4306e4  lw          $v1, 0x6E4($v0)
    ctx->pc = 0x212d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    // 0x212d1c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x212D1Cu;
    {
        const bool branch_taken_0x212d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x212D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D1Cu;
        // 0x212d20: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d1c) {
            ctx->pc = 0x212DF8u;
            goto label_212df8;
        }
    }
    ctx->pc = 0x212D24u;
    // 0x212d24: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x212d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x212d28: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x212D28u;
    {
        const bool branch_taken_0x212d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D28u;
        // 0x212d2c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d28) {
            ctx->pc = 0x212DF8u;
            goto label_212df8;
        }
    }
    ctx->pc = 0x212D30u;
    // 0x212d30: 0x8e2500f4  lw          $a1, 0xF4($s1)
    ctx->pc = 0x212d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x212d34: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x212d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x212d38: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x212D38u;
    {
        const bool branch_taken_0x212d38 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x212D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D38u;
        // 0x212d3c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d38) {
            ctx->pc = 0x212D58u;
            goto label_212d58;
        }
    }
    ctx->pc = 0x212D40u;
    // 0x212d40: 0x8ca20160  lw          $v0, 0x160($a1)
    ctx->pc = 0x212d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x212d44: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x212d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x212d48: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x212d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x212d4c: 0x54640010  bnel        $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x212D4Cu;
    {
        const bool branch_taken_0x212d4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x212d4c) {
            ctx->pc = 0x212D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212D4Cu;
            // 0x212d50: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212D90u;
            goto label_212d90;
        }
    }
    ctx->pc = 0x212D54u;
    // 0x212d54: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x212d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_212d58:
    // 0x212d58: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x212D58u;
    {
        const bool branch_taken_0x212d58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x212D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D58u;
        // 0x212d5c: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d58) {
            ctx->pc = 0x212D74u;
            goto label_212d74;
        }
    }
    ctx->pc = 0x212D60u;
    // 0x212d60: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x212d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x212d64: 0x28420050  slti        $v0, $v0, 0x50
    ctx->pc = 0x212d64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x212d68: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x212D68u;
    {
        const bool branch_taken_0x212d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212d68) {
            ctx->pc = 0x212D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212D68u;
            // 0x212d6c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212D90u;
            goto label_212d90;
        }
    }
    ctx->pc = 0x212D70u;
    // 0x212d70: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x212d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_212d74:
    // 0x212d74: 0x54c2000e  bnel        $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x212D74u;
    {
        const bool branch_taken_0x212d74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x212d74) {
            ctx->pc = 0x212D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212D74u;
            // 0x212d78: 0x8e230060  lw          $v1, 0x60($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212DB0u;
            goto label_212db0;
        }
    }
    ctx->pc = 0x212D7Cu;
    // 0x212d7c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x212d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x212d80: 0x28420050  slti        $v0, $v0, 0x50
    ctx->pc = 0x212d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x212d84: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x212D84u;
    {
        const bool branch_taken_0x212d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212d84) {
            ctx->pc = 0x212D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212D84u;
            // 0x212d88: 0x8e230060  lw          $v1, 0x60($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212DB0u;
            goto label_212db0;
        }
    }
    ctx->pc = 0x212D8Cu;
    // 0x212d8c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x212d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_212d90:
    // 0x212d90: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x212D90u;
    {
        const bool branch_taken_0x212d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212d90) {
            ctx->pc = 0x212D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212D90u;
            // 0x212d94: 0x8e230060  lw          $v1, 0x60($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212DB0u;
            goto label_212db0;
        }
    }
    ctx->pc = 0x212D98u;
    // 0x212d98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x212d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212da0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x212da0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212da4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212da4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212da8: 0x8084b82  j           func_212E08
    ctx->pc = 0x212DA8u;
    ctx->pc = 0x212DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212DA8u;
    // 0x212dac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E08u;
    calMatrices_0x212e08(rdram, ctx, runtime); return;
    ctx->pc = 0x212DB0u;
label_212db0:
    // 0x212db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x212db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212db4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x212DB4u;
    {
        const bool branch_taken_0x212db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x212DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DB4u;
        // 0x212db8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212db4) {
            ctx->pc = 0x212DF8u;
            goto label_212df8;
        }
    }
    ctx->pc = 0x212DBCu;
    // 0x212dbc: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x212dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x212dc0: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x212DC0u;
    {
        const bool branch_taken_0x212dc0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x212DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DC0u;
        // 0x212dc4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212dc0) {
            ctx->pc = 0x212DF8u;
            goto label_212df8;
        }
    }
    ctx->pc = 0x212DC8u;
    // 0x212dc8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x212dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x212dcc: 0x0  nop
    ctx->pc = 0x212dccu;
    // NOP
label_212dd0:
    // 0x212dd0: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x212dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x212dd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x212dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x212dd8: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x212DD8u;
    SET_GPR_U32(ctx, 31, 0x212DE0u);
    ctx->pc = 0x212DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212DD8u;
    // 0x212ddc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x212DD8u, 0x212DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212DE0u;
label_212de0:
    // 0x212de0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x212de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x212de4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x212de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x212de8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x212de8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x212dec: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x212DECu;
    {
        const bool branch_taken_0x212dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212dec) {
            ctx->pc = 0x212DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212DECu;
            // 0x212df0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212dd0;
        }
    }
    ctx->pc = 0x212DF4u;
label_212df4:
    // 0x212df4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x212df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_212df8:
    // 0x212df8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x212df8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212dfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212dfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212e00: 0x3e00008  jr          $ra
    ctx->pc = 0x212E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E00u;
        // 0x212e04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212E08u;
}
