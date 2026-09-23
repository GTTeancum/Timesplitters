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

// Function: enemyAIDefaultSpawnHandler1
// Address: 0x2cbbc8 - 0x2cbe4c
void enemyAIDefaultSpawnHandler1_0x2cbbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyAIDefaultSpawnHandler1_0x2cbbc8");
#endif

    switch (ctx->pc) {
        case 0x2cbbfcu: goto label_2cbbfc;
        case 0x2cbc18u: goto label_2cbc18;
        case 0x2cbc2cu: goto label_2cbc2c;
        case 0x2cbc58u: goto label_2cbc58;
        case 0x2cbc90u: goto label_2cbc90;
        case 0x2cbd4cu: goto label_2cbd4c;
        case 0x2cbd84u: goto label_2cbd84;
        case 0x2cbd9cu: goto label_2cbd9c;
        case 0x2cbdc4u: goto label_2cbdc4;
        default: break;
    }

    ctx->pc = 0x2cbbc8u;

    // 0x2cbbc8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2cbbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2cbbcc: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2cbbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2cbbd0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cbbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2cbbd4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2cbbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2cbbd8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cbbd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbbdc: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2cbbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2cbbe0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2cbbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2cbbe4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2cbbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2cbbe8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2cbbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2cbbec: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2cbbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2cbbf0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2cbbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2cbbf4: 0xc089de4  jal         func_227790
    ctx->pc = 0x2CBBF4u;
    SET_GPR_U32(ctx, 31, 0x2CBBFCu);
    ctx->pc = 0x2CBBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBBF4u;
    // 0x2cbbf8: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227790u, 0x2CBBF4u, 0x2CBBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBBFCu;
label_2cbbfc:
    // 0x2cbbfc: 0x8f83b4fc  lw          $v1, -0x4B04($gp)
    ctx->pc = 0x2cbbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948092)));
    // 0x2cbc00: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2cbc00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc04: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2cbc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2cbc08: 0x18400084  blez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x2CBC08u;
    {
        const bool branch_taken_0x2cbc08 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CBC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC08u;
        // 0x2cbc0c: 0x24161210  addiu       $s6, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc08) {
            ctx->pc = 0x2CBE1Cu;
            goto label_2cbe1c;
        }
    }
    ctx->pc = 0x2CBC10u;
    // 0x2cbc10: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x2cbc10u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x2cbc14: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2cbc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2cbc18:
    // 0x2cbc18: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x2cbc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2cbc1c: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x2cbc1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cbc20: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2cbc20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cbc24: 0xc08a362  jal         func_228D88
    ctx->pc = 0x2CBC24u;
    SET_GPR_U32(ctx, 31, 0x2CBC2Cu);
    ctx->pc = 0x2CBC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBC24u;
    // 0x2cbc28: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228D88u, 0x2CBC24u, 0x2CBC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC2Cu;
label_2cbc2c:
    // 0x2cbc2c: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x2CBC2Cu;
    {
        const bool branch_taken_0x2cbc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC2Cu;
        // 0x2cbc30: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc2c) {
            ctx->pc = 0x2CBE04u;
            goto label_2cbe04;
        }
    }
    ctx->pc = 0x2CBC34u;
    // 0x2cbc34: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x2cbc34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2cbc38: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2cbc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2cbc3c: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x2CBC3Cu;
    {
        const bool branch_taken_0x2cbc3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbc3c) {
            ctx->pc = 0x2CBC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBC3Cu;
            // 0x2cbc40: 0x9642001c  lhu         $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBCCCu;
            goto label_2cbccc;
        }
    }
    ctx->pc = 0x2CBC44u;
    // 0x2cbc44: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x2cbc44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2cbc48: 0x18c0001d  blez        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x2CBC48u;
    {
        const bool branch_taken_0x2cbc48 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2CBC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC48u;
        // 0x2cbc4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc48) {
            ctx->pc = 0x2CBCC0u;
            goto label_2cbcc0;
        }
    }
    ctx->pc = 0x2CBC50u;
    // 0x2cbc50: 0x26150001  addiu       $s5, $s0, 0x1
    ctx->pc = 0x2cbc50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cbc54: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x2cbc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_2cbc58:
    // 0x2cbc58: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CBC58u;
    {
        const bool branch_taken_0x2cbc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC58u;
        // 0x2cbc5c: 0x2361018  mult        $v0, $s1, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc58) {
            ctx->pc = 0x2CBC74u;
            goto label_2cbc74;
        }
    }
    ctx->pc = 0x2CBC60u;
    // 0x2cbc60: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x2cbc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2cbc64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cbc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cbc68: 0x8c4401e4  lw          $a0, 0x1E4($v0)
    ctx->pc = 0x2cbc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
    // 0x2cbc6c: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CBC6Cu;
    {
        const bool branch_taken_0x2cbc6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbc6c) {
            ctx->pc = 0x2CBC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBC6Cu;
            // 0x2cbc70: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBCB0u;
            goto label_2cbcb0;
        }
    }
    ctx->pc = 0x2CBC74u;
label_2cbc74:
    // 0x2cbc74: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x2cbc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x2cbc78: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CBC78u;
    {
        const bool branch_taken_0x2cbc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC78u;
        // 0x2cbc7c: 0x2368018  mult        $s0, $s1, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc78) {
            ctx->pc = 0x2CBC9Cu;
            goto label_2cbc9c;
        }
    }
    ctx->pc = 0x2CBC80u;
    // 0x2cbc80: 0x8f82b238  lw          $v0, -0x4DC8($gp)
    ctx->pc = 0x2cbc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2cbc84: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x2cbc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2cbc88: 0xc099380  jal         func_264E00
    ctx->pc = 0x2CBC88u;
    SET_GPR_U32(ctx, 31, 0x2CBC90u);
    ctx->pc = 0x2CBC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBC88u;
    // 0x2cbc8c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x2CBC88u, 0x2CBC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC90u;
label_2cbc90:
    // 0x2cbc90: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x2cbc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x2cbc94: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBC94u;
    {
        const bool branch_taken_0x2cbc94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CBC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC94u;
        // 0x2cbc98: 0x8e450024  lw          $a1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc94) {
            ctx->pc = 0x2CBCA8u;
            goto label_2cbca8;
        }
    }
    ctx->pc = 0x2CBC9Cu;
label_2cbc9c:
    // 0x2cbc9c: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x2cbc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x2cbca0: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x2cbca0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x2cbca4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cbca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbca8:
    // 0x2cbca8: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x2cbca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2cbcac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cbcacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2cbcb0:
    // 0x2cbcb0: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x2cbcb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2cbcb4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2CBCB4u;
    {
        const bool branch_taken_0x2cbcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCB4u;
        // 0x2cbcb8: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbcb4) {
            ctx->pc = 0x2CBC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cbc58;
        }
    }
    ctx->pc = 0x2CBCBCu;
    // 0x2cbcbc: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2cbcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_2cbcc0:
    // 0x2cbcc0: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2CBCC0u;
    {
        const bool branch_taken_0x2cbcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCC0u;
        // 0x2cbcc4: 0x8f83b4fc  lw          $v1, -0x4B04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbcc0) {
            ctx->pc = 0x2CBE08u;
            goto label_2cbe08;
        }
    }
    ctx->pc = 0x2CBCC8u;
    // 0x2cbcc8: 0x9642001c  lhu         $v0, 0x1C($s2)
    ctx->pc = 0x2cbcc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
label_2cbccc:
    // 0x2cbccc: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x2cbcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2cbcd0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2cbcd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cbcd4: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2CBCD4u;
    {
        const bool branch_taken_0x2cbcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCD4u;
        // 0x2cbcd8: 0x8f82b4c8  lw          $v0, -0x4B38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbcd4) {
            ctx->pc = 0x2CBE04u;
            goto label_2cbe04;
        }
    }
    ctx->pc = 0x2CBCDCu;
    // 0x2cbcdc: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x2cbcdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cbce0: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2CBCE0u;
    {
        const bool branch_taken_0x2cbce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCE0u;
        // 0x2cbce4: 0x8f83b4fc  lw          $v1, -0x4B04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbce0) {
            ctx->pc = 0x2CBE08u;
            goto label_2cbe08;
        }
    }
    ctx->pc = 0x2CBCE8u;
    // 0x2cbce8: 0x96430018  lhu         $v1, 0x18($s2)
    ctx->pc = 0x2cbce8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2cbcec: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x2cbcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2cbcf0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2cbcf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2cbcf4: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x2CBCF4u;
    {
        const bool branch_taken_0x2cbcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbcf4) {
            ctx->pc = 0x2CBCF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBCF4u;
            // 0x2cbcf8: 0x8f83b4fc  lw          $v1, -0x4B04($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBE08u;
            goto label_2cbe08;
        }
    }
    ctx->pc = 0x2CBCFCu;
    // 0x2cbcfc: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CBCFCu;
    {
        const bool branch_taken_0x2cbcfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCFCu;
        // 0x2cbd00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbcfc) {
            ctx->pc = 0x2CBD38u;
            goto label_2cbd38;
        }
    }
    ctx->pc = 0x2CBD04u;
    // 0x2cbd04: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x2cbd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cbd08: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2cbd08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2cbd0c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2cbd0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cbd10: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2cbd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbd14: 0x0  nop
    ctx->pc = 0x2cbd14u;
    // NOP
    // 0x2cbd18: 0x0  nop
    ctx->pc = 0x2cbd18u;
    // NOP
    // 0x2cbd1c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2cbd1cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x2cbd20: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2cbd20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2cbd24: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cbd24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cbd28: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x2cbd28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cbd2c: 0x0  nop
    ctx->pc = 0x2cbd2cu;
    // NOP
    // 0x2cbd30: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2CBD30u;
    {
        const bool branch_taken_0x2cbd30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CBD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD30u;
        // 0x2cbd34: 0xe6400030  swc1        $f0, 0x30($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd30) {
            ctx->pc = 0x2CBD3Cu;
            goto label_2cbd3c;
        }
    }
    ctx->pc = 0x2CBD38u;
label_2cbd38:
    // 0x2cbd38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cbd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cbd3c:
    // 0x2cbd3c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CBD3Cu;
    {
        const bool branch_taken_0x2cbd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD3Cu;
        // 0x2cbd40: 0x8f83b4fc  lw          $v1, -0x4B04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd3c) {
            ctx->pc = 0x2CBE08u;
            goto label_2cbe08;
        }
    }
    ctx->pc = 0x2CBD44u;
    // 0x2cbd44: 0xc08a2fa  jal         func_228BE8
    ctx->pc = 0x2CBD44u;
    SET_GPR_U32(ctx, 31, 0x2CBD4Cu);
    ctx->pc = 0x2CBD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBD44u;
    // 0x2cbd48: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228BE8u, 0x2CBD44u, 0x2CBD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD4Cu;
label_2cbd4c:
    // 0x2cbd4c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2cbd4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbd50: 0x1280002a  beqz        $s4, . + 4 + (0x2A << 2)
    ctx->pc = 0x2CBD50u;
    {
        const bool branch_taken_0x2cbd50 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD50u;
        // 0x2cbd54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd50) {
            ctx->pc = 0x2CBDFCu;
            goto label_2cbdfc;
        }
    }
    ctx->pc = 0x2CBD58u;
    // 0x2cbd58: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2cbd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2cbd5c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBD5Cu;
    {
        const bool branch_taken_0x2cbd5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CBD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD5Cu;
        // 0x2cbd60: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd5c) {
            ctx->pc = 0x2CBD70u;
            goto label_2cbd70;
        }
    }
    ctx->pc = 0x2CBD64u;
    // 0x2cbd64: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2cbd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2cbd68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CBD68u;
    {
        const bool branch_taken_0x2cbd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD68u;
        // 0x2cbd6c: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd68) {
            ctx->pc = 0x2CBD74u;
            goto label_2cbd74;
        }
    }
    ctx->pc = 0x2CBD70u;
label_2cbd70:
    // 0x2cbd70: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2cbd70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cbd74:
    // 0x2cbd74: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2cbd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2cbd78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2cbd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbd7c: 0xc089d92  jal         func_227648
    ctx->pc = 0x2CBD7Cu;
    SET_GPR_U32(ctx, 31, 0x2CBD84u);
    ctx->pc = 0x2CBD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBD7Cu;
    // 0x2cbd80: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227648u, 0x2CBD7Cu, 0x2CBD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD84u;
label_2cbd84:
    // 0x2cbd84: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x2cbd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2cbd88: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x2cbd88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbd8c: 0x972024  and         $a0, $a0, $s7
    ctx->pc = 0x2cbd8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 23));
    // 0x2cbd90: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x2cbd90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2cbd94: 0xc099380  jal         func_264E00
    ctx->pc = 0x2CBD94u;
    SET_GPR_U32(ctx, 31, 0x2CBD9Cu);
    ctx->pc = 0x2CBD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBD94u;
    // 0x2cbd98: 0x42402  srl         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x2CBD94u, 0x2CBD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD9Cu;
label_2cbd9c:
    // 0x2cbd9c: 0x8e4a0018  lw          $t2, 0x18($s2)
    ctx->pc = 0x2cbd9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2cbda0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cbda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbda4: 0x8e48000c  lw          $t0, 0xC($s2)
    ctx->pc = 0x2cbda4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2cbda8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cbda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbdac: 0x1575024  and         $t2, $t2, $s7
    ctx->pc = 0x2cbdacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 23));
    // 0x2cbdb0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2cbdb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbdb4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2cbdb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbdb8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2cbdb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbdbc: 0xc0b3144  jal         func_2CC510
    ctx->pc = 0x2CBDBCu;
    SET_GPR_U32(ctx, 31, 0x2CBDC4u);
    ctx->pc = 0x2CBDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBDBCu;
    // 0x2cbdc0: 0xa5402  srl         $t2, $t2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC510u, 0x2CBDBCu, 0x2CBDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBDC4u;
label_2cbdc4:
    // 0x2cbdc4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CBDC4u;
    {
        const bool branch_taken_0x2cbdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBDC4u;
        // 0x2cbdc8: 0x562818  mult        $a1, $v0, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbdc4) {
            ctx->pc = 0x2CBDFCu;
            goto label_2cbdfc;
        }
    }
    ctx->pc = 0x2CBDCCu;
    // 0x2cbdcc: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x2cbdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2cbdd0: 0x8f82b4c8  lw          $v0, -0x4B38($gp)
    ctx->pc = 0x2cbdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948040)));
    // 0x2cbdd4: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x2cbdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2cbdd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2cbdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2cbddc: 0x8f86b238  lw          $a2, -0x4DC8($gp)
    ctx->pc = 0x2cbddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2cbde0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2cbde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cbde4: 0xaf82b4c8  sw          $v0, -0x4B38($gp)
    ctx->pc = 0x2cbde4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948040), GPR_U32(ctx, 2));
    // 0x2cbde8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2cbde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2cbdec: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2cbdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2cbdf0: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x2cbdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x2cbdf4: 0xacb20bd8  sw          $s2, 0xBD8($a1)
    ctx->pc = 0x2cbdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3032), GPR_U32(ctx, 18));
    // 0x2cbdf8: 0xae44002c  sw          $a0, 0x2C($s2)
    ctx->pc = 0x2cbdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 4));
label_2cbdfc:
    // 0x2cbdfc: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x2cbdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbe00: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2cbe00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_2cbe04:
    // 0x2cbe04: 0x8f83b4fc  lw          $v1, -0x4B04($gp)
    ctx->pc = 0x2cbe04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948092)));
label_2cbe08:
    // 0x2cbe08: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x2cbe08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbe0c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2cbe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2cbe10: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2cbe10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cbe14: 0x1440ff80  bnez        $v0, . + 4 + (-0x80 << 2)
    ctx->pc = 0x2CBE14u;
    {
        const bool branch_taken_0x2cbe14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE14u;
        // 0x2cbe18: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbe14) {
            ctx->pc = 0x2CBC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cbc18;
        }
    }
    ctx->pc = 0x2CBE1Cu;
label_2cbe1c:
    // 0x2cbe1c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2cbe1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2cbe20: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2cbe20u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2cbe24: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2cbe24u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cbe28: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2cbe28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cbe2c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2cbe2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cbe30: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2cbe30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cbe34: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2cbe34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cbe38: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2cbe38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cbe3c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2cbe3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbe40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2cbe40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbe44: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE44u;
        // 0x2cbe48: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBE4Cu;
}
