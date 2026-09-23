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

// Function: lvLevelSetPadNumbers
// Address: 0x228c10 - 0x228cdc
void lvLevelSetPadNumbers_0x228c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvLevelSetPadNumbers_0x228c10");
#endif

    switch (ctx->pc) {
        case 0x228c30u: goto label_228c30;
        case 0x228c50u: goto label_228c50;
        case 0x228c60u: goto label_228c60;
        case 0x228c70u: goto label_228c70;
        case 0x228c98u: goto label_228c98;
        case 0x228cacu: goto label_228cac;
        default: break;
    }

    ctx->pc = 0x228c10u;

    // 0x228c10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x228c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x228c14: 0x8f849f70  lw          $a0, -0x6090($gp)
    ctx->pc = 0x228c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x228c18: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x228c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x228c1c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x228c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x228c20: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x228c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x228c24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x228c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x228c28: 0xc089ee4  jal         func_227B90
    ctx->pc = 0x228C28u;
    SET_GPR_U32(ctx, 31, 0x228C30u);
    ctx->pc = 0x228C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228C28u;
    // 0x228c2c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B90u, 0x228C28u, 0x228C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228C30u;
label_228c30:
    // 0x228c30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x228c30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c34: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x228C34u;
    {
        const bool branch_taken_0x228c34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x228C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C34u;
        // 0x228c38: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228c34) {
            ctx->pc = 0x228CC4u;
            goto label_228cc4;
        }
    }
    ctx->pc = 0x228C3Cu;
    // 0x228c3c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x228c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x228c40: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x228C40u;
    {
        const bool branch_taken_0x228c40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x228C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C40u;
        // 0x228c44: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228c40) {
            ctx->pc = 0x228C88u;
            goto label_228c88;
        }
    }
    ctx->pc = 0x228C48u;
    // 0x228c48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x228c48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c4c: 0x0  nop
    ctx->pc = 0x228c4cu;
    // NOP
label_228c50:
    // 0x228c50: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x228c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x228c54: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x228c54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x228c58: 0xc089f08  jal         func_227C20
    ctx->pc = 0x228C58u;
    SET_GPR_U32(ctx, 31, 0x228C60u);
    ctx->pc = 0x228C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228C58u;
    // 0x228c5c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C20u, 0x228C58u, 0x228C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228C60u;
label_228c60:
    // 0x228c60: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x228C60u;
    {
        const bool branch_taken_0x228c60 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x228c60) {
            ctx->pc = 0x228C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228C60u;
            // 0x228c64: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228C78u;
            goto label_228c78;
        }
    }
    ctx->pc = 0x228C68u;
    // 0x228c68: 0xc099380  jal         func_264E00
    ctx->pc = 0x228C68u;
    SET_GPR_U32(ctx, 31, 0x228C70u);
    ctx->pc = 0x228C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228C68u;
    // 0x228c6c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x228C68u, 0x228C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228C70u;
label_228c70:
    // 0x228c70: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x228c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x228c74: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x228c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_228c78:
    // 0x228c78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x228c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x228c7c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x228c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x228c80: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x228C80u;
    {
        const bool branch_taken_0x228c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C80u;
        // 0x228c84: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228c80) {
            ctx->pc = 0x228C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228c50;
        }
    }
    ctx->pc = 0x228C88u;
label_228c88:
    // 0x228c88: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x228c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x228c8c: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x228C8Cu;
    {
        const bool branch_taken_0x228c8c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x228C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C8Cu;
        // 0x228c90: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228c8c) {
            ctx->pc = 0x228CC0u;
            goto label_228cc0;
        }
    }
    ctx->pc = 0x228C94u;
    // 0x228c94: 0x8e500020  lw          $s0, 0x20($s2)
    ctx->pc = 0x228c94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_228c98:
    // 0x228c98: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x228c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x228c9c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x228c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x228ca0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x228ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x228ca4: 0xc099380  jal         func_264E00
    ctx->pc = 0x228CA4u;
    SET_GPR_U32(ctx, 31, 0x228CACu);
    ctx->pc = 0x228CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228CA4u;
    // 0x228ca8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x228CA4u, 0x228CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228CACu;
label_228cac:
    // 0x228cac: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x228cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x228cb0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x228cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x228cb4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x228cb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x228cb8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x228CB8u;
    {
        const bool branch_taken_0x228cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228cb8) {
            ctx->pc = 0x228CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228CB8u;
            // 0x228cbc: 0x8e500020  lw          $s0, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228c98;
        }
    }
    ctx->pc = 0x228CC0u;
label_228cc0:
    // 0x228cc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x228cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_228cc4:
    // 0x228cc4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x228cc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228cc8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x228cc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228ccc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x228cccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228cd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x228cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x228CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228CD4u;
        // 0x228cd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228CDCu;
}
