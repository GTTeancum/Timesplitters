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

// Function: knockoutSetup
// Address: 0x21d9b8 - 0x21daac
void knockoutSetup_0x21d9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("knockoutSetup_0x21d9b8");
#endif

    switch (ctx->pc) {
        case 0x21d9e4u: goto label_21d9e4;
        case 0x21da10u: goto label_21da10;
        case 0x21da1cu: goto label_21da1c;
        default: break;
    }

    ctx->pc = 0x21d9b8u;

    // 0x21d9b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x21d9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x21d9bc: 0x8f849f70  lw          $a0, -0x6090($gp)
    ctx->pc = 0x21d9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x21d9c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21d9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21d9c4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21d9c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x21d9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x21d9cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21d9ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d9d0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x21d9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x21d9d4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x21d9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x21d9d8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x21d9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21d9dc: 0xc089ee4  jal         func_227B90
    ctx->pc = 0x21D9DCu;
    SET_GPR_U32(ctx, 31, 0x21D9E4u);
    ctx->pc = 0x21D9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D9DCu;
    // 0x21d9e0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B90u, 0x21D9DCu, 0x21D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D9E4u;
label_21d9e4:
    // 0x21d9e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21d9e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d9e8: 0xaf80b6fc  sw          $zero, -0x4904($gp)
    ctx->pc = 0x21d9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948604), GPR_U32(ctx, 0));
    // 0x21d9ec: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x21d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x21d9f0: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x21D9F0u;
    {
        const bool branch_taken_0x21d9f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D9F0u;
        // 0x21d9f4: 0xaf80b704  sw          $zero, -0x48FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d9f0) {
            ctx->pc = 0x21DA84u;
            goto label_21da84;
        }
    }
    ctx->pc = 0x21D9F8u;
    // 0x21d9f8: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x21d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x21d9fc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x21d9fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21da00: 0x2454b9d8  addiu       $s4, $v0, -0x4628
    ctx->pc = 0x21da00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949336));
    // 0x21da04: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21da04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21da08: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x21da08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x21da0c: 0x0  nop
    ctx->pc = 0x21da0cu;
    // NOP
label_21da10:
    // 0x21da10: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x21da10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x21da14: 0xc08a362  jal         func_228D88
    ctx->pc = 0x21DA14u;
    SET_GPR_U32(ctx, 31, 0x21DA1Cu);
    ctx->pc = 0x21DA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DA14u;
    // 0x21da18: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228D88u, 0x21DA14u, 0x21DA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DA1Cu;
label_21da1c:
    // 0x21da1c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x21DA1Cu;
    {
        const bool branch_taken_0x21da1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21da1c) {
            ctx->pc = 0x21DA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DA1Cu;
            // 0x21da20: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DA64u;
            goto label_21da64;
        }
    }
    ctx->pc = 0x21DA24u;
    // 0x21da24: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x21da24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21da28: 0x5455000e  bnel        $v0, $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x21DA28u;
    {
        const bool branch_taken_0x21da28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x21da28) {
            ctx->pc = 0x21DA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DA28u;
            // 0x21da2c: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DA64u;
            goto label_21da64;
        }
    }
    ctx->pc = 0x21DA30u;
    // 0x21da30: 0x8f82b704  lw          $v0, -0x48FC($gp)
    ctx->pc = 0x21da30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948612)));
    // 0x21da34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21DA34u;
    {
        const bool branch_taken_0x21da34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA34u;
        // 0x21da38: 0x8f82b6fc  lw          $v0, -0x4904($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da34) {
            ctx->pc = 0x21DA48u;
            goto label_21da48;
        }
    }
    ctx->pc = 0x21DA3Cu;
    // 0x21da3c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x21da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21da40: 0xaf82b704  sw          $v0, -0x48FC($gp)
    ctx->pc = 0x21da40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948612), GPR_U32(ctx, 2));
    // 0x21da44: 0x8f82b6fc  lw          $v0, -0x4904($gp)
    ctx->pc = 0x21da44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948604)));
label_21da48:
    // 0x21da48: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x21da48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x21da4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x21da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21da50: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x21da50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x21da54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21da54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21da58: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x21da58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x21da5c: 0xaf82b6fc  sw          $v0, -0x4904($gp)
    ctx->pc = 0x21da5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948604), GPR_U32(ctx, 2));
    // 0x21da60: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x21da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_21da64:
    // 0x21da64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21da64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21da68: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x21da68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21da6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DA6Cu;
    {
        const bool branch_taken_0x21da6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA6Cu;
        // 0x21da70: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da6c) {
            ctx->pc = 0x21DA84u;
            goto label_21da84;
        }
    }
    ctx->pc = 0x21DA74u;
    // 0x21da74: 0x8f82b6fc  lw          $v0, -0x4904($gp)
    ctx->pc = 0x21da74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948604)));
    // 0x21da78: 0x28420014  slti        $v0, $v0, 0x14
    ctx->pc = 0x21da78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x21da7c: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x21DA7Cu;
    {
        const bool branch_taken_0x21da7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21da7c) {
            ctx->pc = 0x21DA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DA7Cu;
            // 0x21da80: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21da10;
        }
    }
    ctx->pc = 0x21DA84u;
label_21da84:
    // 0x21da84: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x21da84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21da88: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x21da88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21da8c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x21da8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21da90: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21da90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21da94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21da94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21da98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21da98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21da9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21da9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21daa0: 0xaf80b700  sw          $zero, -0x4900($gp)
    ctx->pc = 0x21daa0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948608), GPR_U32(ctx, 0));
    // 0x21daa4: 0x3e00008  jr          $ra
    ctx->pc = 0x21DAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAA4u;
        // 0x21daa8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DAACu;
}
