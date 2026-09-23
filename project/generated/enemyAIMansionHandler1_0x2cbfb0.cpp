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

// Function: enemyAIMansionHandler1
// Address: 0x2cbfb0 - 0x2cc044
void enemyAIMansionHandler1_0x2cbfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyAIMansionHandler1_0x2cbfb0");
#endif

    switch (ctx->pc) {
        case 0x2cc01cu: goto label_2cc01c;
        default: break;
    }

    ctx->pc = 0x2cbfb0u;

    // 0x2cbfb0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2cbfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2cbfb4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cbfb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cbfb8: 0x8c62c4f4  lw          $v0, -0x3B0C($v1)
    ctx->pc = 0x2cbfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F4u));
    // 0x2cbfbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2cbfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2cbfc0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2cbfc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cbfc4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2CBFC4u;
    {
        const bool branch_taken_0x2cbfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFC4u;
        // 0x2cbfc8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbfc4) {
            ctx->pc = 0x2CC038u;
            goto label_2cc038;
        }
    }
    ctx->pc = 0x2CBFCCu;
    // 0x2cbfcc: 0x8f839f78  lw          $v1, -0x6088($gp)
    ctx->pc = 0x2cbfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942584)));
    // 0x2cbfd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cbfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbfd4: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CBFD4u;
    {
        const bool branch_taken_0x2cbfd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CBFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFD4u;
        // 0x2cbfd8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbfd4) {
            ctx->pc = 0x2CC000u;
            goto label_2cc000;
        }
    }
    ctx->pc = 0x2CBFDCu;
    // 0x2cbfdc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CBFDCu;
    {
        const bool branch_taken_0x2cbfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFDCu;
        // 0x2cbfe0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbfdc) {
            ctx->pc = 0x2CC03Cu;
            goto label_2cc03c;
        }
    }
    ctx->pc = 0x2CBFE4u;
    // 0x2cbfe4: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CBFE4u;
    {
        const bool branch_taken_0x2cbfe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFE4u;
        // 0x2cbfe8: 0x8f82b4c8  lw          $v0, -0x4B38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbfe4) {
            ctx->pc = 0x2CC03Cu;
            goto label_2cc03c;
        }
    }
    ctx->pc = 0x2CBFECu;
    // 0x2cbfec: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2cbfecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cbff0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CBFF0u;
    {
        const bool branch_taken_0x2cbff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbff0) {
            ctx->pc = 0x2CBFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBFF0u;
            // 0x2cbff4: 0xaf849f78  sw          $a0, -0x6088($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294942584), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC03Cu;
            goto label_2cc03c;
        }
    }
    ctx->pc = 0x2CBFF8u;
    // 0x2cbff8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2CBFF8u;
    {
        const bool branch_taken_0x2cbff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbff8) {
            ctx->pc = 0x2CC03Cu;
            goto label_2cc03c;
        }
    }
    ctx->pc = 0x2CC000u;
label_2cc000:
    // 0x2cc000: 0x8f82b4c8  lw          $v0, -0x4B38($gp)
    ctx->pc = 0x2cc000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948040)));
    // 0x2cc004: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2cc004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cc008: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CC008u;
    {
        const bool branch_taken_0x2cc008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC008u;
        // 0x2cc00c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc008) {
            ctx->pc = 0x2CC038u;
            goto label_2cc038;
        }
    }
    ctx->pc = 0x2CC010u;
    // 0x2cc010: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2cc010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2cc014: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2CC014u;
    SET_GPR_U32(ctx, 31, 0x2CC01Cu);
    ctx->pc = 0x2CC018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC014u;
    // 0x2cc018: 0xaf829f78  sw          $v0, -0x6088($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942584), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2CC014u, 0x2CC01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC01Cu;
label_2cc01c:
    // 0x2cc01c: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2cc01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2cc020: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CC020u;
    {
        const bool branch_taken_0x2cc020 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CC024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC020u;
        // 0x2cc024: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc020) {
            ctx->pc = 0x2CC03Cu;
            goto label_2cc03c;
        }
    }
    ctx->pc = 0x2CC028u;
    // 0x2cc028: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x2cc028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2cc02c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc030: 0x8081546  j           func_205518
    ctx->pc = 0x2CC030u;
    ctx->pc = 0x2CC034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC030u;
    // 0x2cc034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    soundStart_0x205518(rdram, ctx, runtime); return;
    ctx->pc = 0x2CC038u;
label_2cc038:
    // 0x2cc038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cc03c:
    // 0x2cc03c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC03Cu;
        // 0x2cc040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC044u;
}
