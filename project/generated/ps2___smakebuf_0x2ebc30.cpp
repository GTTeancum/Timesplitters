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

// Function: __smakebuf
// Address: 0x2ebc30 - 0x2ebd80
void ps2___smakebuf_0x2ebc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___smakebuf_0x2ebc30");
#endif

    switch (ctx->pc) {
        case 0x2ebc84u: goto label_2ebc84;
        case 0x2ebcf8u: goto label_2ebcf8;
        case 0x2ebd54u: goto label_2ebd54;
        default: break;
    }

    ctx->pc = 0x2ebc30u;

    // 0x2ebc30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2ebc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2ebc34: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2ebc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2ebc38: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2ebc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2ebc3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ebc3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc40: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2ebc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2ebc44: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x2ebc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x2ebc48: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2ebc48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ebc4c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2ebc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2ebc50: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBC50u;
    {
        const bool branch_taken_0x2ebc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC50u;
        // 0x2ebc54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc50) {
            ctx->pc = 0x2EBC6Cu;
            goto label_2ebc6c;
        }
    }
    ctx->pc = 0x2EBC58u;
    // 0x2ebc58: 0x26030043  addiu       $v1, $s0, 0x43
    ctx->pc = 0x2ebc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x2ebc5c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2ebc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2ebc60: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2ebc60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2ebc64: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2EBC64u;
    {
        const bool branch_taken_0x2ebc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC64u;
        // 0x2ebc68: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc64) {
            ctx->pc = 0x2EBD68u;
            goto label_2ebd68;
        }
    }
    ctx->pc = 0x2EBC6Cu;
label_2ebc6c:
    // 0x2ebc6c: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x2ebc6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2ebc70: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EBC70u;
    {
        const bool branch_taken_0x2ebc70 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2EBC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC70u;
        // 0x2ebc74: 0x34620800  ori         $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc70) {
            ctx->pc = 0x2EBC94u;
            goto label_2ebc94;
        }
    }
    ctx->pc = 0x2EBC78u;
    // 0x2ebc78: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2ebc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ebc7c: 0xc0bba6e  jal         func_2EE9B8
    ctx->pc = 0x2EBC7Cu;
    SET_GPR_U32(ctx, 31, 0x2EBC84u);
    ctx->pc = 0x2EBC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBC7Cu;
    // 0x2ebc80: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE9B8u, 0x2EBC7Cu, 0x2EBC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBC84u;
label_2ebc84:
    // 0x2ebc84: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EBC84u;
    {
        const bool branch_taken_0x2ebc84 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EBC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC84u;
        // 0x2ebc88: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc84) {
            ctx->pc = 0x2EBCA4u;
            goto label_2ebca4;
        }
    }
    ctx->pc = 0x2EBC8Cu;
    // 0x2ebc8c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2ebc8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ebc90: 0x34620800  ori         $v0, $v1, 0x800
    ctx->pc = 0x2ebc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_2ebc94:
    // 0x2ebc94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ebc94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc98: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2ebc98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ebc9c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2EBC9Cu;
    {
        const bool branch_taken_0x2ebc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC9Cu;
        // 0x2ebca0: 0x24120400  addiu       $s2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc9c) {
            ctx->pc = 0x2EBCECu;
            goto label_2ebcec;
        }
    }
    ctx->pc = 0x2EBCA4u;
label_2ebca4:
    // 0x2ebca4: 0x24120400  addiu       $s2, $zero, 0x400
    ctx->pc = 0x2ebca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2ebca8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2ebca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ebcac: 0x3051f000  andi        $s1, $v0, 0xF000
    ctx->pc = 0x2ebcacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x2ebcb0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ebcb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebcb4: 0x3a232000  xori        $v1, $s1, 0x2000
    ctx->pc = 0x2ebcb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)8192);
    // 0x2ebcb8: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EBCB8u;
    {
        const bool branch_taken_0x2ebcb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2EBCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBCB8u;
        // 0x2ebcbc: 0x2c710001  sltiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebcb8) {
            ctx->pc = 0x2EBCE0u;
            goto label_2ebce0;
        }
    }
    ctx->pc = 0x2EBCC0u;
    // 0x2ebcc0: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2ebcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2ebcc4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2ebcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2ebcc8: 0x24425a20  addiu       $v0, $v0, 0x5A20
    ctx->pc = 0x2ebcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23072));
    // 0x2ebccc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EBCCCu;
    {
        const bool branch_taken_0x2ebccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EBCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBCCCu;
        // 0x2ebcd0: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebccc) {
            ctx->pc = 0x2EBCE4u;
            goto label_2ebce4;
        }
    }
    ctx->pc = 0x2EBCD4u;
    // 0x2ebcd4: 0xae12004c  sw          $s2, 0x4C($s0)
    ctx->pc = 0x2ebcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 18));
    // 0x2ebcd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBCD8u;
    {
        const bool branch_taken_0x2ebcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBCD8u;
        // 0x2ebcdc: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebcd8) {
            ctx->pc = 0x2EBCE8u;
            goto label_2ebce8;
        }
    }
    ctx->pc = 0x2EBCE0u;
label_2ebce0:
    // 0x2ebce0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2ebce0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2ebce4:
    // 0x2ebce4: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2ebce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_2ebce8:
    // 0x2ebce8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2ebce8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_2ebcec:
    // 0x2ebcec: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2ebcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ebcf0: 0xc0b9338  jal         func_2E4CE0
    ctx->pc = 0x2EBCF0u;
    SET_GPR_U32(ctx, 31, 0x2EBCF8u);
    ctx->pc = 0x2EBCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBCF0u;
    // 0x2ebcf4: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4CE0u, 0x2EBCF0u, 0x2EBCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBCF8u;
label_2ebcf8:
    // 0x2ebcf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ebcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebcfc: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EBCFCu;
    {
        const bool branch_taken_0x2ebcfc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBCFCu;
        // 0x2ebd00: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebcfc) {
            ctx->pc = 0x2EBD24u;
            goto label_2ebd24;
        }
    }
    ctx->pc = 0x2EBD04u;
    // 0x2ebd04: 0x26040043  addiu       $a0, $s0, 0x43
    ctx->pc = 0x2ebd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x2ebd08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ebd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebd0c: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x2ebd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x2ebd10: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2ebd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2ebd14: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2ebd14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2ebd18: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2ebd18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ebd1c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2EBD1Cu;
    {
        const bool branch_taken_0x2ebd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD1Cu;
        // 0x2ebd20: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd1c) {
            ctx->pc = 0x2EBD68u;
            goto label_2ebd68;
        }
    }
    ctx->pc = 0x2EBD24u;
label_2ebd24:
    // 0x2ebd24: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2ebd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2ebd28: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2ebd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ebd2c: 0x246348d0  addiu       $v1, $v1, 0x48D0
    ctx->pc = 0x2ebd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18640));
    // 0x2ebd30: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2ebd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2ebd34: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x2ebd34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x2ebd38: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x2ebd38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x2ebd3c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2ebd3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ebd40: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x2ebd40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x2ebd44: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EBD44u;
    {
        const bool branch_taken_0x2ebd44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD44u;
        // 0x2ebd48: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd44) {
            ctx->pc = 0x2EBD68u;
            goto label_2ebd68;
        }
    }
    ctx->pc = 0x2EBD4Cu;
    // 0x2ebd4c: 0xc0b4200  jal         func_2D0800
    ctx->pc = 0x2EBD4Cu;
    SET_GPR_U32(ctx, 31, 0x2EBD54u);
    ctx->pc = 0x2EBD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBD4Cu;
    // 0x2ebd50: 0x8604000e  lh          $a0, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0800u, 0x2EBD4Cu, 0x2EBD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBD54u;
label_2ebd54:
    // 0x2ebd54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EBD54u;
    {
        const bool branch_taken_0x2ebd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD54u;
        // 0x2ebd58: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd54) {
            ctx->pc = 0x2EBD6Cu;
            goto label_2ebd6c;
        }
    }
    ctx->pc = 0x2EBD5Cu;
    // 0x2ebd5c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2ebd5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ebd60: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2ebd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2ebd64: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2ebd64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_2ebd68:
    // 0x2ebd68: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2ebd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2ebd6c:
    // 0x2ebd6c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2ebd6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ebd70: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x2ebd70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ebd74: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2ebd74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ebd78: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD78u;
        // 0x2ebd7c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBD80u;
}
