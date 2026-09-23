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

// Function: specialfxRingSpawnTick
// Address: 0x2acef0 - 0x2ad16c
void specialfxRingSpawnTick_0x2acef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxRingSpawnTick_0x2acef0");
#endif

    switch (ctx->pc) {
        case 0x2acf78u: goto label_2acf78;
        case 0x2acf88u: goto label_2acf88;
        case 0x2acf98u: goto label_2acf98;
        case 0x2acfa8u: goto label_2acfa8;
        case 0x2acfb0u: goto label_2acfb0;
        case 0x2acfe0u: goto label_2acfe0;
        case 0x2ad040u: goto label_2ad040;
        case 0x2ad05cu: goto label_2ad05c;
        case 0x2ad070u: goto label_2ad070;
        case 0x2ad084u: goto label_2ad084;
        case 0x2ad0d4u: goto label_2ad0d4;
        case 0x2ad0f0u: goto label_2ad0f0;
        case 0x2ad104u: goto label_2ad104;
        case 0x2ad118u: goto label_2ad118;
        case 0x2ad140u: goto label_2ad140;
        default: break;
    }

    ctx->pc = 0x2acef0u;

    // 0x2acef0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2acef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2acef4: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2acef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2acef8: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x2acef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x2acefc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2acefcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acf00: 0xffb500d0  sd          $s5, 0xD0($sp)
    ctx->pc = 0x2acf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
    // 0x2acf04: 0x2822018  mult        $a0, $s4, $v0
    ctx->pc = 0x2acf04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2acf08: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x2acf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x2acf0c: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x2acf0cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x2acf10: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x2acf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x2acf14: 0x26b1c268  addiu       $s1, $s5, -0x3D98
    ctx->pc = 0x2acf14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951528));
    // 0x2acf18: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x2acf18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2acf1c: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2acf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2acf20: 0x26220038  addiu       $v0, $s1, 0x38
    ctx->pc = 0x2acf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x2acf24: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2acf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2acf28: 0x829821  addu        $s3, $a0, $v0
    ctx->pc = 0x2acf28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2acf2c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2acf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2acf30: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2acf30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2acf34: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x2acf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2acf38: 0xc7808f18  lwc1        $f0, -0x70E8($gp)
    ctx->pc = 0x2acf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acf3c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2acf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2acf40: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2ACF40u;
    {
        const bool branch_taken_0x2acf40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF40u;
        // 0x2acf44: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acf40) {
            ctx->pc = 0x2ACFE4u;
            goto label_2acfe4;
        }
    }
    ctx->pc = 0x2ACF48u;
    // 0x2acf48: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x2acf48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2acf4c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2acf4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2acf50: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2acf50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2acf54: 0x918821  addu        $s1, $a0, $s1
    ctx->pc = 0x2acf54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2acf58: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x2acf58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x2acf5c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2acf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2acf60: 0x26105c60  addiu       $s0, $s0, 0x5C60
    ctx->pc = 0x2acf60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23648));
    // 0x2acf64: 0x0  nop
    ctx->pc = 0x2acf64u;
    // NOP
    // 0x2acf68: 0x0  nop
    ctx->pc = 0x2acf68u;
    // NOP
    // 0x2acf6c: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x2acf6cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x2acf70: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2ACF70u;
    SET_GPR_U32(ctx, 31, 0x2ACF78u);
    ctx->pc = 0x2ACF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF70u;
    // 0x2acf74: 0x8c720160  lw          $s2, 0x160($v1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2ACF70u, 0x2ACF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF78u;
label_2acf78:
    // 0x2acf78: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2acf78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2acf7c: 0xdc259778  ld          $a1, -0x6888($at)
    ctx->pc = 0x2acf7cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9778u));
    // 0x2acf80: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2ACF80u;
    SET_GPR_U32(ctx, 31, 0x2ACF88u);
    ctx->pc = 0x2ACF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF80u;
    // 0x2acf84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2ACF80u, 0x2ACF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF88u;
label_2acf88:
    // 0x2acf88: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2acf88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2acf8c: 0xdc259780  ld          $a1, -0x6880($at)
    ctx->pc = 0x2acf8cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9780u));
    // 0x2acf90: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2ACF90u;
    SET_GPR_U32(ctx, 31, 0x2ACF98u);
    ctx->pc = 0x2ACF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF90u;
    // 0x2acf94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2ACF90u, 0x2ACF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF98u;
label_2acf98:
    // 0x2acf98: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2acf98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2acf9c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2acf9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2acfa0: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2ACFA0u;
    SET_GPR_U32(ctx, 31, 0x2ACFA8u);
    ctx->pc = 0x2ACFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACFA0u;
    // 0x2acfa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2ACFA0u, 0x2ACFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACFA8u;
label_2acfa8:
    // 0x2acfa8: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2ACFA8u;
    SET_GPR_U32(ctx, 31, 0x2ACFB0u);
    ctx->pc = 0x2ACFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACFA8u;
    // 0x2acfac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2ACFA8u, 0x2ACFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACFB0u;
label_2acfb0:
    // 0x2acfb0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2acfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2acfb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2acfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2acfb8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2acfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2acfbc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2acfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acfc0: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x2acfc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x2acfc4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2acfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2acfc8: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2acfc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2acfcc: 0x0  nop
    ctx->pc = 0x2acfccu;
    // NOP
    // 0x2acfd0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2ACFD0u;
    {
        const bool branch_taken_0x2acfd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ACFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACFD0u;
        // 0x2acfd4: 0x2403005c  addiu       $v1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acfd0) {
            ctx->pc = 0x2ACFE8u;
            goto label_2acfe8;
        }
    }
    ctx->pc = 0x2ACFD8u;
    // 0x2acfd8: 0xc09e0f0  jal         func_2783C0
    ctx->pc = 0x2ACFD8u;
    SET_GPR_U32(ctx, 31, 0x2ACFE0u);
    ctx->pc = 0x2ACFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACFD8u;
    // 0x2acfdc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2783C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2783C0u, 0x2ACFD8u, 0x2ACFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACFE0u;
label_2acfe0:
    // 0x2acfe0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2acfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2acfe4:
    // 0x2acfe4: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x2acfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2acfe8:
    // 0x2acfe8: 0x26b3c268  addiu       $s3, $s5, -0x3D98
    ctx->pc = 0x2acfe8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951528));
    // 0x2acfec: 0x2839018  mult        $s2, $s4, $v1
    ctx->pc = 0x2acfecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x2acff0: 0x26620048  addiu       $v0, $s3, 0x48
    ctx->pc = 0x2acff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x2acff4: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x2acff4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2acff8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2acff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2acffc: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2ACFFCu;
    {
        const bool branch_taken_0x2acffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACFFCu;
        // 0x2ad000: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acffc) {
            ctx->pc = 0x2AD084u;
            goto label_2ad084;
        }
    }
    ctx->pc = 0x2AD004u;
    // 0x2ad004: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x2ad004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x2ad008: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ad008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ad00c: 0xc7818f1c  lwc1        $f1, -0x70E4($gp)
    ctx->pc = 0x2ad00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad010: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2ad010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ad014: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ad014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ad018: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x2ad018u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x2ad01c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2ad01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2ad020: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad024: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ad024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad028: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2ad028u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2ad02c: 0x0  nop
    ctx->pc = 0x2ad02cu;
    // NOP
    // 0x2ad030: 0x0  nop
    ctx->pc = 0x2ad030u;
    // NOP
    // 0x2ad034: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2ad034u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2ad038: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2AD038u;
    SET_GPR_U32(ctx, 31, 0x2AD040u);
    ctx->pc = 0x2AD03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD038u;
    // 0x2ad03c: 0x46026302  mul.s       $f12, $f12, $f2 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2AD038u, 0x2AD040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD040u;
label_2ad040:
    // 0x2ad040: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ad040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ad044: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ad044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ad048: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2ad048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ad04c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad050: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ad050u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2ad054: 0xc0ad3c8  jal         func_2B4F20
    ctx->pc = 0x2AD054u;
    SET_GPR_U32(ctx, 31, 0x2AD05Cu);
    ctx->pc = 0x2AD058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD054u;
    // 0x2ad058: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F20u, 0x2AD054u, 0x2AD05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD05Cu;
label_2ad05c:
    // 0x2ad05c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ad05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad060: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ad060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad064: 0x248403a0  addiu       $a0, $a0, 0x3A0
    ctx->pc = 0x2ad064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    // 0x2ad068: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2AD068u;
    SET_GPR_U32(ctx, 31, 0x2AD070u);
    ctx->pc = 0x2AD06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD068u;
    // 0x2ad06c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2AD068u, 0x2AD070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD070u;
label_2ad070:
    // 0x2ad070: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ad070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad074: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2ad074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad078: 0x248403a0  addiu       $a0, $a0, 0x3A0
    ctx->pc = 0x2ad078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    // 0x2ad07c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2AD07Cu;
    SET_GPR_U32(ctx, 31, 0x2AD084u);
    ctx->pc = 0x2AD080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD07Cu;
    // 0x2ad080: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2AD07Cu, 0x2AD084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD084u;
label_2ad084:
    // 0x2ad084: 0x2662004c  addiu       $v0, $s3, 0x4C
    ctx->pc = 0x2ad084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
    // 0x2ad088: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x2ad088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2ad08c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ad08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad090: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2AD090u;
    {
        const bool branch_taken_0x2ad090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD090u;
        // 0x2ad094: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad090) {
            ctx->pc = 0x2AD118u;
            goto label_2ad118;
        }
    }
    ctx->pc = 0x2AD098u;
    // 0x2ad098: 0x3c01c396  lui         $at, 0xC396
    ctx->pc = 0x2ad098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50070 << 16));
    // 0x2ad09c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ad09cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ad0a0: 0xc7818f20  lwc1        $f1, -0x70E0($gp)
    ctx->pc = 0x2ad0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad0a4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2ad0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ad0a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ad0a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ad0ac: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x2ad0acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x2ad0b0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2ad0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2ad0b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad0b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad0b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ad0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad0bc: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2ad0bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2ad0c0: 0x0  nop
    ctx->pc = 0x2ad0c0u;
    // NOP
    // 0x2ad0c4: 0x0  nop
    ctx->pc = 0x2ad0c4u;
    // NOP
    // 0x2ad0c8: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2ad0c8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2ad0cc: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2AD0CCu;
    SET_GPR_U32(ctx, 31, 0x2AD0D4u);
    ctx->pc = 0x2AD0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD0CCu;
    // 0x2ad0d0: 0x46026302  mul.s       $f12, $f12, $f2 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2AD0CCu, 0x2AD0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD0D4u;
label_2ad0d4:
    // 0x2ad0d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ad0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ad0d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ad0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ad0dc: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2ad0dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ad0e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad0e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ad0e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2ad0e8: 0xc0ad3c8  jal         func_2B4F20
    ctx->pc = 0x2AD0E8u;
    SET_GPR_U32(ctx, 31, 0x2AD0F0u);
    ctx->pc = 0x2AD0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD0E8u;
    // 0x2ad0ec: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F20u, 0x2AD0E8u, 0x2AD0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD0F0u;
label_2ad0f0:
    // 0x2ad0f0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ad0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad0f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ad0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad0f8: 0x248403a0  addiu       $a0, $a0, 0x3A0
    ctx->pc = 0x2ad0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    // 0x2ad0fc: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2AD0FCu;
    SET_GPR_U32(ctx, 31, 0x2AD104u);
    ctx->pc = 0x2AD100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD0FCu;
    // 0x2ad100: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2AD0FCu, 0x2AD104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD104u;
label_2ad104:
    // 0x2ad104: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ad104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad108: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2ad108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad10c: 0x248403a0  addiu       $a0, $a0, 0x3A0
    ctx->pc = 0x2ad10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    // 0x2ad110: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2AD110u;
    SET_GPR_U32(ctx, 31, 0x2AD118u);
    ctx->pc = 0x2AD114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD110u;
    // 0x2ad114: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2AD110u, 0x2AD118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD118u;
label_2ad118:
    // 0x2ad118: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x2ad118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2ad11c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2ad11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2ad120: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ad120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad124: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2ad124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad128: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ad128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ad12c: 0x0  nop
    ctx->pc = 0x2ad12cu;
    // NOP
    // 0x2ad130: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD130u;
    {
        const bool branch_taken_0x2ad130 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AD134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD130u;
        // 0x2ad134: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad130) {
            ctx->pc = 0x2AD144u;
            goto label_2ad144;
        }
    }
    ctx->pc = 0x2AD138u;
    // 0x2ad138: 0xc0aabb6  jal         func_2AAED8
    ctx->pc = 0x2AD138u;
    SET_GPR_U32(ctx, 31, 0x2AD140u);
    ctx->pc = 0x2AD13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD138u;
    // 0x2ad13c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAED8u, 0x2AD138u, 0x2AD140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD140u;
label_2ad140:
    // 0x2ad140: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2ad140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2ad144:
    // 0x2ad144: 0xdfb500d0  ld          $s5, 0xD0($sp)
    ctx->pc = 0x2ad144u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ad148: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x2ad148u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ad14c: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x2ad14cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ad150: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2ad150u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ad154: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x2ad154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ad158: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2ad158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ad15c: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x2ad15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ad160: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2ad160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ad164: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD164u;
        // 0x2ad168: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD16Cu;
}
