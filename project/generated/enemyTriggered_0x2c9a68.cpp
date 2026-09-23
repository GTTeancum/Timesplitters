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

// Function: enemyTriggered
// Address: 0x2c9a68 - 0x2c9b68
void enemyTriggered_0x2c9a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyTriggered_0x2c9a68");
#endif

    switch (ctx->pc) {
        case 0x2c9a88u: goto label_2c9a88;
        case 0x2c9aa8u: goto label_2c9aa8;
        case 0x2c9accu: goto label_2c9acc;
        default: break;
    }

    ctx->pc = 0x2c9a68u;

    // 0x2c9a68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c9a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c9a6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c9a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c9a70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c9a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c9a74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c9a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c9a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c9a7c: 0x8f849f70  lw          $a0, -0x6090($gp)
    ctx->pc = 0x2c9a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2c9a80: 0xc089ee4  jal         func_227B90
    ctx->pc = 0x2C9A80u;
    SET_GPR_U32(ctx, 31, 0x2C9A88u);
    ctx->pc = 0x2C9A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9A80u;
    // 0x2c9a84: 0x8e110160  lw          $s1, 0x160($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B90u, 0x2C9A80u, 0x2C9A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A88u;
label_2c9a88:
    // 0x2c9a88: 0x8f879f74  lw          $a3, -0x608C($gp)
    ctx->pc = 0x2c9a88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2c9a8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c9a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a90: 0x18e0002f  blez        $a3, . + 4 + (0x2F << 2)
    ctx->pc = 0x2C9A90u;
    {
        const bool branch_taken_0x2c9a90 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2C9A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A90u;
        // 0x2c9a94: 0xaf82b4fc  sw          $v0, -0x4B04($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948092), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a90) {
            ctx->pc = 0x2C9B50u;
            goto label_2c9b50;
        }
    }
    ctx->pc = 0x2C9A98u;
    // 0x2c9a98: 0x8f86b238  lw          $a2, -0x4DC8($gp)
    ctx->pc = 0x2c9a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2c9a9c: 0x8e250a88  lw          $a1, 0xA88($s1)
    ctx->pc = 0x2c9a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2696)));
    // 0x2c9aa0: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x2c9aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2c9aa4: 0x0  nop
    ctx->pc = 0x2c9aa4u;
    // NOP
label_2c9aa8:
    // 0x2c9aa8: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x2c9aa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c9aac: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x2c9aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2c9ab0: 0x8c4302a8  lw          $v1, 0x2A8($v0)
    ctx->pc = 0x2c9ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 680)));
    // 0x2c9ab4: 0x5465000b  bnel        $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2C9AB4u;
    {
        const bool branch_taken_0x2c9ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2c9ab4) {
            ctx->pc = 0x2C9AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9AB4u;
            // 0x2c9ab8: 0x2402071c  addiu       $v0, $zero, 0x71C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9AE4u;
            goto label_2c9ae4;
        }
    }
    ctx->pc = 0x2C9ABCu;
    // 0x2c9abc: 0x8c450bcc  lw          $a1, 0xBCC($v0)
    ctx->pc = 0x2c9abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3020)));
    // 0x2c9ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c9ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9ac4: 0xc0b179a  jal         func_2C5E68
    ctx->pc = 0x2C9AC4u;
    SET_GPR_U32(ctx, 31, 0x2C9ACCu);
    ctx->pc = 0x2C9AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9AC4u;
    // 0x2c9ac8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5E68u, 0x2C9AC4u, 0x2C9ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9ACCu;
label_2c9acc:
    // 0x2c9acc: 0x8e230a90  lw          $v1, 0xA90($s1)
    ctx->pc = 0x2c9accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c9ad0: 0xae220ae4  sw          $v0, 0xAE4($s1)
    ctx->pc = 0x2c9ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2788), GPR_U32(ctx, 2));
    // 0x2c9ad4: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x2c9ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x2c9ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c9ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9adc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2C9ADCu;
    {
        const bool branch_taken_0x2c9adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9ADCu;
        // 0x2c9ae0: 0xae230a90  sw          $v1, 0xA90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9adc) {
            ctx->pc = 0x2C9B54u;
            goto label_2c9b54;
        }
    }
    ctx->pc = 0x2C9AE4u;
label_2c9ae4:
    // 0x2c9ae4: 0x8f83b230  lw          $v1, -0x4DD0($gp)
    ctx->pc = 0x2c9ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2c9ae8: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2c9ae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c9aec: 0xc6030030  lwc1        $f3, 0x30($s0)
    ctx->pc = 0x2c9aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c9af0: 0xc6040034  lwc1        $f4, 0x34($s0)
    ctx->pc = 0x2c9af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c9af4: 0xc6050038  lwc1        $f5, 0x38($s0)
    ctx->pc = 0x2c9af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c9af8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2c9af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2c9afc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2c9afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2c9b00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c9b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9b04: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x2c9b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9b08: 0xc4420090  lwc1        $f2, 0x90($v0)
    ctx->pc = 0x2c9b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9b0c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2c9b0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c9b10: 0xc4410094  lwc1        $f1, 0x94($v0)
    ctx->pc = 0x2c9b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9b14: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2c9b14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2c9b18: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x2c9b18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2c9b1c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c9b1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c9b20: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c9b20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c9b24: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c9b24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c9b28: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c9b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c9b2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c9b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9b30: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2c9b30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9b34: 0x0  nop
    ctx->pc = 0x2c9b34u;
    // NOP
    // 0x2c9b38: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9B38u;
    {
        const bool branch_taken_0x2c9b38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B38u;
        // 0x2c9b3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b38) {
            ctx->pc = 0x2C9B54u;
            goto label_2c9b54;
        }
    }
    ctx->pc = 0x2C9B40u;
    // 0x2c9b40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c9b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c9b44: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x2c9b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2c9b48: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2C9B48u;
    {
        const bool branch_taken_0x2c9b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B48u;
        // 0x2c9b4c: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b48) {
            ctx->pc = 0x2C9AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9aa8;
        }
    }
    ctx->pc = 0x2C9B50u;
label_2c9b50:
    // 0x2c9b50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9b54:
    // 0x2c9b54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c9b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9b58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c9b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c9b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9b60: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B60u;
        // 0x2c9b64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9B68u;
}
