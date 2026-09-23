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

// Function: propMakeVisible
// Address: 0x273ac0 - 0x273bb0
void propMakeVisible_0x273ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propMakeVisible_0x273ac0");
#endif

    switch (ctx->pc) {
        case 0x273b64u: goto label_273b64;
        case 0x273b80u: goto label_273b80;
        case 0x273b88u: goto label_273b88;
        case 0x273ba0u: goto label_273ba0;
        default: break;
    }

    ctx->pc = 0x273ac0u;

    // 0x273ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x273ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x273ac4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x273ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x273ac8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x273ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x273acc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x273accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x273ad0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x273ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ad4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x273ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x273ad8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x273ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x273adc: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x273adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x273ae0: 0x8e050160  lw          $a1, 0x160($s0)
    ctx->pc = 0x273ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x273ae4: 0x1482002e  bne         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x273AE4u;
    {
        const bool branch_taken_0x273ae4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x273AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AE4u;
        // 0x273ae8: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ae4) {
            ctx->pc = 0x273BA0u;
            goto label_273ba0;
        }
    }
    ctx->pc = 0x273AECu;
    // 0x273aec: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x273aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x273af0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x273af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x273af4: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x273AF4u;
    {
        const bool branch_taken_0x273af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x273AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AF4u;
        // 0x273af8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273af4) {
            ctx->pc = 0x273BA4u;
            goto label_273ba4;
        }
    }
    ctx->pc = 0x273AFCu;
    // 0x273afc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x273afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x273b00: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x273b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x273b04: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x273b04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x273b08: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x273B08u;
    {
        const bool branch_taken_0x273b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273b08) {
            ctx->pc = 0x273B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273B08u;
            // 0x273b0c: 0xc4a00018  lwc1        $f0, 0x18($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x273B30u;
            goto label_273b30;
        }
    }
    ctx->pc = 0x273B10u;
    // 0x273b10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x273b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x273b14: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x273B14u;
    {
        const bool branch_taken_0x273b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x273B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B14u;
        // 0x273b18: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b14) {
            ctx->pc = 0x273B2Cu;
            goto label_273b2c;
        }
    }
    ctx->pc = 0x273B1Cu;
    // 0x273b1c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273B1Cu;
    {
        const bool branch_taken_0x273b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x273B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B1Cu;
        // 0x273b20: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b1c) {
            ctx->pc = 0x273B2Cu;
            goto label_273b2c;
        }
    }
    ctx->pc = 0x273B24u;
    // 0x273b24: 0x54620020  bnel        $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x273B24u;
    {
        const bool branch_taken_0x273b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x273b24) {
            ctx->pc = 0x273B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273B24u;
            // 0x273b28: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273BA8u;
            goto label_273ba8;
        }
    }
    ctx->pc = 0x273B2Cu;
label_273b2c:
    // 0x273b2c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x273b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273b30:
    // 0x273b30: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x273b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x273b34: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x273b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x273b38: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x273b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273b3c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x273b3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x273b40: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x273b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273b44: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x273B44u;
    {
        const bool branch_taken_0x273b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x273B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B44u;
        // 0x273b48: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b44) {
            ctx->pc = 0x273B5Cu;
            goto label_273b5c;
        }
    }
    ctx->pc = 0x273B4Cu;
    // 0x273b4c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x273b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x273b50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x273b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273b54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x273b54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x273b58: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x273b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_273b5c:
    // 0x273b5c: 0xc094ff4  jal         func_253FD0
    ctx->pc = 0x273B5Cu;
    SET_GPR_U32(ctx, 31, 0x273B64u);
    ctx->pc = 0x273B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273B5Cu;
    // 0x273b60: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253FD0u, 0x273B5Cu, 0x273B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B64u;
label_273b64:
    // 0x273b64: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x273B64u;
    {
        const bool branch_taken_0x273b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B64u;
        // 0x273b68: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b64) {
            ctx->pc = 0x273BA0u;
            goto label_273ba0;
        }
    }
    ctx->pc = 0x273B6Cu;
    // 0x273b6c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x273b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x273b70: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x273b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x273b74: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x273b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x273b78: 0xc098ffc  jal         func_263FF0
    ctx->pc = 0x273B78u;
    SET_GPR_U32(ctx, 31, 0x273B80u);
    ctx->pc = 0x273B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273B78u;
    // 0x273b7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263FF0u, 0x273B78u, 0x273B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B80u;
label_273b80:
    // 0x273b80: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x273B80u;
    SET_GPR_U32(ctx, 31, 0x273B88u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x273B80u, 0x273B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B88u;
label_273b88:
    // 0x273b88: 0x30460003  andi        $a2, $v0, 0x3
    ctx->pc = 0x273b88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x273b8c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x273b8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b90: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x273b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x273b94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x273b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b98: 0xc0ab6dc  jal         func_2ADB70
    ctx->pc = 0x273B98u;
    SET_GPR_U32(ctx, 31, 0x273BA0u);
    ctx->pc = 0x273B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273B98u;
    // 0x273b9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADB70u, 0x273B98u, 0x273BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273BA0u;
label_273ba0:
    // 0x273ba0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x273ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_273ba4:
    // 0x273ba4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x273ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_273ba8:
    // 0x273ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x273BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BA8u;
        // 0x273bac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273BB0u;
}
