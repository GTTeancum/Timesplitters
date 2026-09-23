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

// Function: __pack_f
// Address: 0x2e3a68 - 0x2e3b74
void ps2___pack_f_0x2e3a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___pack_f_0x2e3a68");
#endif

    ctx->pc = 0x2e3a68u;

    // 0x2e3a68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2e3a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e3a6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e3a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3a70: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x2e3a70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e3a74: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2e3a74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e3a78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3A78u;
    {
        const bool branch_taken_0x2e3a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A78u;
        // 0x2e3a7c: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a78) {
            ctx->pc = 0x2E3A90u;
            goto label_2e3a90;
        }
    }
    ctx->pc = 0x2E3A80u;
    // 0x2e3a80: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2e3a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2e3a84: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2e3a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2e3a88: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2E3A88u;
    {
        const bool branch_taken_0x2e3a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A88u;
        // 0x2e3a8c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a88) {
            ctx->pc = 0x2E3B24u;
            goto label_2e3b24;
        }
    }
    ctx->pc = 0x2E3A90u;
label_2e3a90:
    // 0x2e3a90: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x2e3a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x2e3a94: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E3A94u;
    {
        const bool branch_taken_0x2e3a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A94u;
        // 0x2e3a98: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a94) {
            ctx->pc = 0x2E3AE8u;
            goto label_2e3ae8;
        }
    }
    ctx->pc = 0x2E3A9Cu;
    // 0x2e3a9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3A9Cu;
    {
        const bool branch_taken_0x2e3a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3a9c) {
            ctx->pc = 0x2E3AACu;
            goto label_2e3aac;
        }
    }
    ctx->pc = 0x2E3AA4u;
    // 0x2e3aa4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2E3AA4u;
    {
        const bool branch_taken_0x2e3aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3AA4u;
        // 0x2e3aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3aa4) {
            ctx->pc = 0x2E3B24u;
            goto label_2e3b24;
        }
    }
    ctx->pc = 0x2E3AACu;
label_2e3aac:
    // 0x2e3aac: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E3AACu;
    {
        const bool branch_taken_0x2e3aac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3AACu;
        // 0x2e3ab0: 0x3c03ff80  lui         $v1, 0xFF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3aac) {
            ctx->pc = 0x2E3B28u;
            goto label_2e3b28;
        }
    }
    ctx->pc = 0x2E3AB4u;
    // 0x2e3ab4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e3ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e3ab8: 0x2862ff82  slti        $v0, $v1, -0x7E
    ctx->pc = 0x2e3ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x2e3abc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E3ABCu;
    {
        const bool branch_taken_0x2e3abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3ABCu;
        // 0x2e3ac0: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3abc) {
            ctx->pc = 0x2E3ADCu;
            goto label_2e3adc;
        }
    }
    ctx->pc = 0x2E3AC4u;
    // 0x2e3ac4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2e3ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e3ac8: 0x2843001a  slti        $v1, $v0, 0x1A
    ctx->pc = 0x2e3ac8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x2e3acc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E3ACCu;
    {
        const bool branch_taken_0x2e3acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3ACCu;
        // 0x2e3ad0: 0x452806  srlv        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3acc) {
            ctx->pc = 0x2E3B20u;
            goto label_2e3b20;
        }
    }
    ctx->pc = 0x2E3AD4u;
    // 0x2e3ad4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2E3AD4u;
    {
        const bool branch_taken_0x2e3ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3AD4u;
        // 0x2e3ad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3ad4) {
            ctx->pc = 0x2E3B20u;
            goto label_2e3b20;
        }
    }
    ctx->pc = 0x2E3ADCu;
label_2e3adc:
    // 0x2e3adc: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x2e3adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e3ae0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3AE0u;
    {
        const bool branch_taken_0x2e3ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3AE0u;
        // 0x2e3ae4: 0x2467007f  addiu       $a3, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3ae0) {
            ctx->pc = 0x2E3AF4u;
            goto label_2e3af4;
        }
    }
    ctx->pc = 0x2E3AE8u;
label_2e3ae8:
    // 0x2e3ae8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2e3ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2e3aec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E3AECu;
    {
        const bool branch_taken_0x2e3aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3AECu;
        // 0x2e3af0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3aec) {
            ctx->pc = 0x2E3B24u;
            goto label_2e3b24;
        }
    }
    ctx->pc = 0x2E3AF4u;
label_2e3af4:
    // 0x2e3af4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2e3af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e3af8: 0x30a3007f  andi        $v1, $a1, 0x7F
    ctx->pc = 0x2e3af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x2e3afc: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3AFCu;
    {
        const bool branch_taken_0x2e3afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e3afc) {
            ctx->pc = 0x2E3B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3AFCu;
            // 0x2e3b00: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3B10u;
            goto label_2e3b10;
        }
    }
    ctx->pc = 0x2E3B04u;
    // 0x2e3b04: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x2e3b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x2e3b08: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x2e3b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x2e3b0c: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x2e3b0cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_2e3b10:
    // 0x2e3b10: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3B10u;
    {
        const bool branch_taken_0x2e3b10 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2e3b10) {
            ctx->pc = 0x2E3B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3B10u;
            // 0x2e3b14: 0x529c2  srl         $a1, $a1, 7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3B24u;
            goto label_2e3b24;
        }
    }
    ctx->pc = 0x2E3B18u;
    // 0x2e3b18: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x2e3b18u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2e3b1c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e3b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2e3b20:
    // 0x2e3b20: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x2e3b20u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
label_2e3b24:
    // 0x2e3b24: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x2e3b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
label_2e3b28:
    // 0x2e3b28: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x2e3b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x2e3b2c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2e3b2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2e3b30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e3b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e3b34: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2e3b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2e3b38: 0x3c03807f  lui         $v1, 0x807F
    ctx->pc = 0x2e3b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32895 << 16));
    // 0x2e3b3c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2e3b3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2e3b40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e3b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e3b44: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x2e3b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2e3b48: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2e3b48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2e3b4c: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x2e3b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x2e3b50: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2e3b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2e3b54: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x2e3b54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x2e3b58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e3b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e3b5c: 0x81fc0  sll         $v1, $t0, 31
    ctx->pc = 0x2e3b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 31));
    // 0x2e3b60: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2e3b60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2e3b64: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2e3b64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2e3b68: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2e3b68u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3B74u;
}
