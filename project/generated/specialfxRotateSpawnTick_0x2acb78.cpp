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

// Function: specialfxRotateSpawnTick
// Address: 0x2acb78 - 0x2accd8
void specialfxRotateSpawnTick_0x2acb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxRotateSpawnTick_0x2acb78");
#endif

    switch (ctx->pc) {
        case 0x2acbf4u: goto label_2acbf4;
        case 0x2acc04u: goto label_2acc04;
        case 0x2acc14u: goto label_2acc14;
        case 0x2acc24u: goto label_2acc24;
        case 0x2acc2cu: goto label_2acc2c;
        case 0x2acc78u: goto label_2acc78;
        default: break;
    }

    ctx->pc = 0x2acb78u;

    // 0x2acb78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2acb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2acb7c: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2acb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2acb80: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2acb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2acb84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2acb84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acb88: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2acb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2acb8c: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x2acb8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2acb90: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x2acb90u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
    // 0x2acb94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2acb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2acb98: 0x2665c268  addiu       $a1, $s3, -0x3D98
    ctx->pc = 0x2acb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951528));
    // 0x2acb9c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2acb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2acba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2acba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2acba4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2acba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2acba8: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x2acba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2acbac: 0x50600034  beql        $v1, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x2ACBACu;
    {
        const bool branch_taken_0x2acbac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acbac) {
            ctx->pc = 0x2ACBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACBACu;
            // 0x2acbb0: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACC80u;
            goto label_2acc80;
        }
    }
    ctx->pc = 0x2ACBB4u;
    // 0x2acbb4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2acbb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2acbb8: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2acbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acbbc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2acbbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2acbc0: 0x0  nop
    ctx->pc = 0x2acbc0u;
    // NOP
    // 0x2acbc4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACBC4u;
    {
        const bool branch_taken_0x2acbc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ACBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBC4u;
        // 0x2acbc8: 0x8c720160  lw          $s2, 0x160($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acbc4) {
            ctx->pc = 0x2ACBD4u;
            goto label_2acbd4;
        }
    }
    ctx->pc = 0x2ACBCCu;
    // 0x2acbcc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2ACBCCu;
    {
        const bool branch_taken_0x2acbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBCCu;
        // 0x2acbd0: 0xe641002c  swc1        $f1, 0x2C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acbcc) {
            ctx->pc = 0x2ACC40u;
            goto label_2acc40;
        }
    }
    ctx->pc = 0x2ACBD4u;
label_2acbd4:
    // 0x2acbd4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2acbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2acbd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2acbd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2acbdc: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x2acbdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x2acbe0: 0x0  nop
    ctx->pc = 0x2acbe0u;
    // NOP
    // 0x2acbe4: 0x0  nop
    ctx->pc = 0x2acbe4u;
    // NOP
    // 0x2acbe8: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x2acbe8u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x2acbec: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2ACBECu;
    SET_GPR_U32(ctx, 31, 0x2ACBF4u);
    ctx->pc = 0x2ACBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACBECu;
    // 0x2acbf0: 0x26105c60  addiu       $s0, $s0, 0x5C60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2ACBECu, 0x2ACBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACBF4u;
label_2acbf4:
    // 0x2acbf4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2acbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2acbf8: 0xdc259758  ld          $a1, -0x68A8($at)
    ctx->pc = 0x2acbf8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9758u));
    // 0x2acbfc: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2ACBFCu;
    SET_GPR_U32(ctx, 31, 0x2ACC04u);
    ctx->pc = 0x2ACC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACBFCu;
    // 0x2acc00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2ACBFCu, 0x2ACC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC04u;
label_2acc04:
    // 0x2acc04: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2acc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2acc08: 0xdc259760  ld          $a1, -0x68A0($at)
    ctx->pc = 0x2acc08u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9760u));
    // 0x2acc0c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2ACC0Cu;
    SET_GPR_U32(ctx, 31, 0x2ACC14u);
    ctx->pc = 0x2ACC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACC0Cu;
    // 0x2acc10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2ACC0Cu, 0x2ACC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC14u;
label_2acc14:
    // 0x2acc14: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2acc14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2acc18: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2acc18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2acc1c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2ACC1Cu;
    SET_GPR_U32(ctx, 31, 0x2ACC24u);
    ctx->pc = 0x2ACC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACC1Cu;
    // 0x2acc20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2ACC1Cu, 0x2ACC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC24u;
label_2acc24:
    // 0x2acc24: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2ACC24u;
    SET_GPR_U32(ctx, 31, 0x2ACC2Cu);
    ctx->pc = 0x2ACC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACC24u;
    // 0x2acc28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2ACC24u, 0x2ACC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC2Cu;
label_2acc2c:
    // 0x2acc2c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2acc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2acc30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2acc30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2acc34: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2acc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2acc38: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2acc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acc3c: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x2acc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
label_2acc40:
    // 0x2acc40: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2acc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2acc44: 0x2670c268  addiu       $s0, $s3, -0x3D98
    ctx->pc = 0x2acc44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951528));
    // 0x2acc48: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x2acc48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2acc4c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2acc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2acc50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2acc50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2acc54: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x2acc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2acc58: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2acc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acc5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2acc5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2acc60: 0x0  nop
    ctx->pc = 0x2acc60u;
    // NOP
    // 0x2acc64: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2ACC64u;
    {
        const bool branch_taken_0x2acc64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ACC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC64u;
        // 0x2acc68: 0x26100038  addiu       $s0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acc64) {
            ctx->pc = 0x2ACC7Cu;
            goto label_2acc7c;
        }
    }
    ctx->pc = 0x2ACC6Cu;
    // 0x2acc6c: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x2acc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2acc70: 0xc09e0f0  jal         func_2783C0
    ctx->pc = 0x2ACC70u;
    SET_GPR_U32(ctx, 31, 0x2ACC78u);
    ctx->pc = 0x2ACC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACC70u;
    // 0x2acc74: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2783C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2783C0u, 0x2ACC70u, 0x2ACC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC78u;
label_2acc78:
    // 0x2acc78: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2acc78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2acc7c:
    // 0x2acc7c: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2acc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2acc80:
    // 0x2acc80: 0x2663c268  addiu       $v1, $s3, -0x3D98
    ctx->pc = 0x2acc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951528));
    // 0x2acc84: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x2acc84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2acc88: 0xc7818f14  lwc1        $f1, -0x70EC($gp)
    ctx->pc = 0x2acc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2acc8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2acc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2acc90: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x2acc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acc94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2acc94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2acc98: 0x0  nop
    ctx->pc = 0x2acc98u;
    // NOP
    // 0x2acc9c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2ACC9Cu;
    {
        const bool branch_taken_0x2acc9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ACCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC9Cu;
        // 0x2acca0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acc9c) {
            ctx->pc = 0x2ACCC0u;
            goto label_2accc0;
        }
    }
    ctx->pc = 0x2ACCA4u;
    // 0x2acca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2acca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acca8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2acca8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2accac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2accacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2accb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2accb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2accb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2accb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2accb8: 0x80aabb6  j           func_2AAED8
    ctx->pc = 0x2ACCB8u;
    ctx->pc = 0x2ACCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACCB8u;
    // 0x2accbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAED8u;
    specialfxFree_0x2aaed8(rdram, ctx, runtime); return;
    ctx->pc = 0x2ACCC0u;
label_2accc0:
    // 0x2accc0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2accc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2accc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2accc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2accc8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2accc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2accccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2accd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACCD0u;
        // 0x2accd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACCD8u;
}
