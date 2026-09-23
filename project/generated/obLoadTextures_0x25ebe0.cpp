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

// Function: obLoadTextures
// Address: 0x25ebe0 - 0x25edb8
void obLoadTextures_0x25ebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obLoadTextures_0x25ebe0");
#endif

    switch (ctx->pc) {
        case 0x25ec28u: goto label_25ec28;
        case 0x25ec6cu: goto label_25ec6c;
        case 0x25ec80u: goto label_25ec80;
        case 0x25eca0u: goto label_25eca0;
        case 0x25ecd0u: goto label_25ecd0;
        case 0x25ed08u: goto label_25ed08;
        case 0x25ed18u: goto label_25ed18;
        case 0x25ed38u: goto label_25ed38;
        case 0x25ed68u: goto label_25ed68;
        case 0x25ed78u: goto label_25ed78;
        default: break;
    }

    ctx->pc = 0x25ebe0u;

    // 0x25ebe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25ebe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25ebe4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x25ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x25ebe8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25ebe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25ebec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25ebecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25ebf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25ebf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ebf4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25ebf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25ebf8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25ebf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25ebfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25ebfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25ec00: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x25ec00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x25ec04: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x25ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25ec08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25ec08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25ec0c: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x25EC0Cu;
    {
        const bool branch_taken_0x25ec0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC0Cu;
        // 0x25ec10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec0c) {
            ctx->pc = 0x25ED40u;
            goto label_25ed40;
        }
    }
    ctx->pc = 0x25EC14u;
    // 0x25ec14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25ec18: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25EC18u;
    {
        const bool branch_taken_0x25ec18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC18u;
        // 0x25ec1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec18) {
            ctx->pc = 0x25EC4Cu;
            goto label_25ec4c;
        }
    }
    ctx->pc = 0x25EC20u;
    // 0x25ec20: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x25ec20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x25ec24: 0x3c130036  lui         $s3, 0x36
    ctx->pc = 0x25ec24u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)54 << 16));
label_25ec28:
    // 0x25ec28: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x25ec28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x25ec2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25ec30: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x25ec30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x25ec34: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25ec34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25ec38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25ec38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25ec3c: 0x1482fffa  bne         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25EC3Cu;
    {
        const bool branch_taken_0x25ec3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x25ec3c) {
            ctx->pc = 0x25EC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ec28;
        }
    }
    ctx->pc = 0x25EC44u;
    // 0x25ec44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25EC44u;
    {
        const bool branch_taken_0x25ec44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC44u;
        // 0x25ec48: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec44) {
            ctx->pc = 0x25EC58u;
            goto label_25ec58;
        }
    }
    ctx->pc = 0x25EC4Cu;
label_25ec4c:
    // 0x25ec4c: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x25ec4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x25ec50: 0x3c130036  lui         $s3, 0x36
    ctx->pc = 0x25ec50u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)54 << 16));
    // 0x25ec54: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x25ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_25ec58:
    // 0x25ec58: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x25EC58u;
    {
        const bool branch_taken_0x25ec58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC58u;
        // 0x25ec5c: 0x29100  sll         $s2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec58) {
            ctx->pc = 0x25EC70u;
            goto label_25ec70;
        }
    }
    ctx->pc = 0x25EC60u;
    // 0x25ec60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25ec60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec64: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25EC64u;
    SET_GPR_U32(ctx, 31, 0x25EC6Cu);
    ctx->pc = 0x25EC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC64u;
    // 0x25ec68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25EC64u, 0x25EC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC6Cu;
label_25ec6c:
    // 0x25ec6c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x25ec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_25ec70:
    // 0x25ec70: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x25ec70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x25ec74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ec74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec78: 0xc0b91c2  jal         func_2E4708
    ctx->pc = 0x25EC78u;
    SET_GPR_U32(ctx, 31, 0x25EC80u);
    ctx->pc = 0x25EC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC78u;
    // 0x25ec7c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4708u, 0x25EC78u, 0x25EC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC80u;
label_25ec80:
    // 0x25ec80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25ec84: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x25ec84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x25ec88: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x25ec88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x25ec8c: 0x24659020  addiu       $a1, $v1, -0x6FE0
    ctx->pc = 0x25ec8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938656));
    // 0x25ec90: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x25ec90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x25ec94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25ec94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec98: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x25ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25ec9c: 0x0  nop
    ctx->pc = 0x25ec9cu;
    // NOP
label_25eca0:
    // 0x25eca0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25eca4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25eca8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25ECA8u;
    {
        const bool branch_taken_0x25eca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECA8u;
        // 0x25ecac: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eca8) {
            ctx->pc = 0x25ECB4u;
            goto label_25ecb4;
        }
    }
    ctx->pc = 0x25ECB0u;
    // 0x25ecb0: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x25ecb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_25ecb4:
    // 0x25ecb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25ecb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ecb8: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x25ecb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x25ecbc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x25ECBCu;
    {
        const bool branch_taken_0x25ecbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECBCu;
        // 0x25ecc0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ecbc) {
            ctx->pc = 0x25ECA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25eca0;
        }
    }
    ctx->pc = 0x25ECC4u;
    // 0x25ecc4: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x25ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x25ecc8: 0xc0adaaa  jal         func_2B6AA8
    ctx->pc = 0x25ECC8u;
    SET_GPR_U32(ctx, 31, 0x25ECD0u);
    ctx->pc = 0x25ECCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ECC8u;
    // 0x25eccc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6AA8u, 0x25ECC8u, 0x25ECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ECD0u;
label_25ecd0:
    // 0x25ecd0: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x25ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x25ecd4: 0x26639020  addiu       $v1, $s3, -0x6FE0
    ctx->pc = 0x25ecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938656));
    // 0x25ecd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25ecd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ecdc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x25ecdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25ece0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25ece4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25ece8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25ecec: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x25ececu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x25ecf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25ecf4: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x25ECF4u;
    {
        const bool branch_taken_0x25ecf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x25ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECF4u;
        // 0x25ecf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ecf4) {
            ctx->pc = 0x25ED30u;
            goto label_25ed30;
        }
    }
    ctx->pc = 0x25ECFCu;
    // 0x25ecfc: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x25ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x25ed00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25ed00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x25ed04: 0x0  nop
    ctx->pc = 0x25ed04u;
    // NOP
label_25ed08:
    // 0x25ed08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25ed08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25ed0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ed10: 0xc0ade36  jal         func_2B78D8
    ctx->pc = 0x25ED10u;
    SET_GPR_U32(ctx, 31, 0x25ED18u);
    ctx->pc = 0x25ED14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ED10u;
    // 0x25ed14: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B78D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B78D8u, 0x25ED10u, 0x25ED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED18u;
label_25ed18:
    // 0x25ed18: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x25ed18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x25ed1c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x25ed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25ed20: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x25ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x25ed24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25ed24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ed28: 0x1464fff7  bne         $v1, $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x25ED28u;
    {
        const bool branch_taken_0x25ed28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x25ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED28u;
        // 0x25ed2c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed28) {
            ctx->pc = 0x25ED08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ed08;
        }
    }
    ctx->pc = 0x25ED30u;
label_25ed30:
    // 0x25ed30: 0xc0adaaa  jal         func_2B6AA8
    ctx->pc = 0x25ED30u;
    SET_GPR_U32(ctx, 31, 0x25ED38u);
    ctx->pc = 0x25ED34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ED30u;
    // 0x25ed34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6AA8u, 0x25ED30u, 0x25ED38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED38u;
label_25ed38:
    // 0x25ed38: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x25ED38u;
    {
        const bool branch_taken_0x25ed38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED38u;
        // 0x25ed3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed38) {
            ctx->pc = 0x25ED98u;
            goto label_25ed98;
        }
    }
    ctx->pc = 0x25ED40u;
label_25ed40:
    // 0x25ed40: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x25ed40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x25ed44: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x25ed44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x25ed48: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25ed4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25ed50: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x25ED50u;
    {
        const bool branch_taken_0x25ed50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x25ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED50u;
        // 0x25ed54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed50) {
            ctx->pc = 0x25ED94u;
            goto label_25ed94;
        }
    }
    ctx->pc = 0x25ED58u;
    // 0x25ed58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25ed58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed5c: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x25ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x25ed60: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25ed60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x25ed64: 0x0  nop
    ctx->pc = 0x25ed64u;
    // NOP
label_25ed68:
    // 0x25ed68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25ed68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25ed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ed70: 0xc0ade40  jal         func_2B7900
    ctx->pc = 0x25ED70u;
    SET_GPR_U32(ctx, 31, 0x25ED78u);
    ctx->pc = 0x25ED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ED70u;
    // 0x25ed74: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7900u, 0x25ED70u, 0x25ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED78u;
label_25ed78:
    // 0x25ed78: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x25ed78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x25ed7c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x25ed7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25ed80: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x25ed80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed84: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x25ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x25ed88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ed8c: 0x1464fff6  bne         $v1, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x25ED8Cu;
    {
        const bool branch_taken_0x25ed8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x25ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED8Cu;
        // 0x25ed90: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed8c) {
            ctx->pc = 0x25ED68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ed68;
        }
    }
    ctx->pc = 0x25ED94u;
label_25ed94:
    // 0x25ed94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25ed98:
    // 0x25ed98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25ed98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25ed9c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x25ed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x25eda0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25eda0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25eda4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25eda4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25eda8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25eda8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25edac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25edacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25edb0: 0x3e00008  jr          $ra
    ctx->pc = 0x25EDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDB0u;
        // 0x25edb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EDB8u;
}
