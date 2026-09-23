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

// Function: __swsetup
// Address: 0x2e9ac0 - 0x2e9bcc
void ps2___swsetup_0x2e9ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___swsetup_0x2e9ac0");
#endif

    switch (ctx->pc) {
        case 0x2e9b00u: goto label_2e9b00;
        case 0x2e9b48u: goto label_2e9b48;
        case 0x2e9b84u: goto label_2e9b84;
        default: break;
    }

    ctx->pc = 0x2e9ac0u;

    // 0x2e9ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e9ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e9ac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e9ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e9ac8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e9ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e9acc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e9accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ad0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2e9ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2e9ad4: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9AD4u;
    {
        const bool branch_taken_0x2e9ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9ad4) {
            ctx->pc = 0x2E9AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9AD4u;
            // 0x2e9ad8: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9AF0u;
            goto label_2e9af0;
        }
    }
    ctx->pc = 0x2E9ADCu;
    // 0x2e9adc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2e9adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2e9ae0: 0x8c43330c  lw          $v1, 0x330C($v0)
    ctx->pc = 0x2e9ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x38330Cu));
    // 0x2e9ae4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2e9ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x2e9ae8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2e9ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2e9aec: 0x0  nop
    ctx->pc = 0x2e9aecu;
    // NOP
label_2e9af0:
    // 0x2e9af0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9AF0u;
    {
        const bool branch_taken_0x2e9af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9af0) {
            ctx->pc = 0x2E9AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9AF0u;
            // 0x2e9af4: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9B04u;
            goto label_2e9b04;
        }
    }
    ctx->pc = 0x2E9AF8u;
    // 0x2e9af8: 0xc0b923c  jal         func_2E48F0
    ctx->pc = 0x2E9AF8u;
    SET_GPR_U32(ctx, 31, 0x2E9B00u);
    ctx->pc = 0x2E9AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9AF8u;
    // 0x2e9afc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E48F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E48F0u, 0x2E9AF8u, 0x2E9B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B00u;
label_2e9b00:
    // 0x2e9b00: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2e9b00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2e9b04:
    // 0x2e9b04: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2e9b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2e9b08: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E9B08u;
    {
        const bool branch_taken_0x2e9b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9b08) {
            ctx->pc = 0x2E9B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9B08u;
            // 0x2e9b0c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9B74u;
            goto label_2e9b74;
        }
    }
    ctx->pc = 0x2E9B10u;
    // 0x2e9b10: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2e9b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2e9b14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9B14u;
    {
        const bool branch_taken_0x2e9b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B14u;
        // 0x2e9b18: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b14) {
            ctx->pc = 0x2E9B24u;
            goto label_2e9b24;
        }
    }
    ctx->pc = 0x2E9B1Cu;
    // 0x2e9b1c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2E9B1Cu;
    {
        const bool branch_taken_0x2e9b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B1Cu;
        // 0x2e9b20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b1c) {
            ctx->pc = 0x2E9BBCu;
            goto label_2e9bbc;
        }
    }
    ctx->pc = 0x2E9B24u;
label_2e9b24:
    // 0x2e9b24: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E9B24u;
    {
        const bool branch_taken_0x2e9b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9b24) {
            ctx->pc = 0x2E9B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9B24u;
            // 0x2e9b28: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9B6Cu;
            goto label_2e9b6c;
        }
    }
    ctx->pc = 0x2E9B2Cu;
    // 0x2e9b2c: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2e9b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2e9b30: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E9B30u;
    {
        const bool branch_taken_0x2e9b30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B30u;
        // 0x2e9b34: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b30) {
            ctx->pc = 0x2E9B50u;
            goto label_2e9b50;
        }
    }
    ctx->pc = 0x2E9B38u;
    // 0x2e9b38: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9B38u;
    {
        const bool branch_taken_0x2e9b38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e9b38) {
            ctx->pc = 0x2E9B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9B38u;
            // 0x2e9b3c: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9B50u;
            goto label_2e9b50;
        }
    }
    ctx->pc = 0x2E9B40u;
    // 0x2e9b40: 0xc0bac9e  jal         func_2EB278
    ctx->pc = 0x2E9B40u;
    SET_GPR_U32(ctx, 31, 0x2E9B48u);
    ctx->pc = 0x2E9B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9B40u;
    // 0x2e9b44: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB278u, 0x2E9B40u, 0x2E9B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B48u;
label_2e9b48:
    // 0x2e9b48: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2e9b48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e9b4c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2e9b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_2e9b50:
    // 0x2e9b50: 0x2402ffdb  addiu       $v0, $zero, -0x25
    ctx->pc = 0x2e9b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967259));
    // 0x2e9b54: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2e9b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e9b58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e9b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e9b5c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e9b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2e9b60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e9b60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9b64: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2e9b64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e9b68: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2e9b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2e9b6c:
    // 0x2e9b6c: 0x34620008  ori         $v0, $v1, 0x8
    ctx->pc = 0x2e9b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2e9b70: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2e9b70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_2e9b74:
    // 0x2e9b74: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9B74u;
    {
        const bool branch_taken_0x2e9b74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9b74) {
            ctx->pc = 0x2E9B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9B74u;
            // 0x2e9b78: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9B88u;
            goto label_2e9b88;
        }
    }
    ctx->pc = 0x2E9B7Cu;
    // 0x2e9b7c: 0xc0baf0c  jal         func_2EBC30
    ctx->pc = 0x2E9B7Cu;
    SET_GPR_U32(ctx, 31, 0x2E9B84u);
    ctx->pc = 0x2E9B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9B7Cu;
    // 0x2e9b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBC30u, 0x2E9B7Cu, 0x2E9B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B84u;
label_2e9b84:
    // 0x2e9b84: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2e9b84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2e9b88:
    // 0x2e9b88: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2e9b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e9b8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9B8Cu;
    {
        const bool branch_taken_0x2e9b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B8Cu;
        // 0x2e9b90: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b8c) {
            ctx->pc = 0x2E9BA8u;
            goto label_2e9ba8;
        }
    }
    ctx->pc = 0x2E9B94u;
    // 0x2e9b94: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2e9b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2e9b98: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2e9b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2e9b9c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2e9b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2e9ba0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9BA0u;
    {
        const bool branch_taken_0x2e9ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9BA0u;
        // 0x2e9ba4: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9ba0) {
            ctx->pc = 0x2E9BB8u;
            goto label_2e9bb8;
        }
    }
    ctx->pc = 0x2E9BA8u;
label_2e9ba8:
    // 0x2e9ba8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9BA8u;
    {
        const bool branch_taken_0x2e9ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9BA8u;
        // 0x2e9bac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9ba8) {
            ctx->pc = 0x2E9BB4u;
            goto label_2e9bb4;
        }
    }
    ctx->pc = 0x2E9BB0u;
    // 0x2e9bb0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2e9bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2e9bb4:
    // 0x2e9bb4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2e9bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_2e9bb8:
    // 0x2e9bb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e9bb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9bbc:
    // 0x2e9bbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e9bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9bc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e9bc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9BC4u;
        // 0x2e9bc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9BCCu;
}
