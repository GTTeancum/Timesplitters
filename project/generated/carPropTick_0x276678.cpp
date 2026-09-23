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

// Function: carPropTick
// Address: 0x276678 - 0x2775bc
void carPropTick_0x276678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("carPropTick_0x276678");
#endif

    switch (ctx->pc) {
        case 0x276718u: goto label_276718;
        case 0x276728u: goto label_276728;
        case 0x276738u: goto label_276738;
        case 0x276740u: goto label_276740;
        case 0x27674cu: goto label_27674c;
        case 0x27676cu: goto label_27676c;
        case 0x276830u: goto label_276830;
        case 0x276940u: goto label_276940;
        case 0x276950u: goto label_276950;
        case 0x2769a8u: goto label_2769a8;
        case 0x2769bcu: goto label_2769bc;
        case 0x2769d4u: goto label_2769d4;
        case 0x276b18u: goto label_276b18;
        case 0x276b54u: goto label_276b54;
        case 0x276b84u: goto label_276b84;
        case 0x276b9cu: goto label_276b9c;
        case 0x276bbcu: goto label_276bbc;
        case 0x276c0cu: goto label_276c0c;
        case 0x276c3cu: goto label_276c3c;
        case 0x276c54u: goto label_276c54;
        case 0x276c74u: goto label_276c74;
        case 0x276c8cu: goto label_276c8c;
        case 0x276ca0u: goto label_276ca0;
        case 0x276cfcu: goto label_276cfc;
        case 0x276d10u: goto label_276d10;
        case 0x276d28u: goto label_276d28;
        case 0x276d68u: goto label_276d68;
        case 0x276e30u: goto label_276e30;
        case 0x276ec0u: goto label_276ec0;
        case 0x276f2cu: goto label_276f2c;
        case 0x276fe8u: goto label_276fe8;
        case 0x277004u: goto label_277004;
        case 0x277018u: goto label_277018;
        case 0x27705cu: goto label_27705c;
        case 0x277070u: goto label_277070;
        case 0x277088u: goto label_277088;
        case 0x2770a0u: goto label_2770a0;
        case 0x2770b8u: goto label_2770b8;
        case 0x2770c4u: goto label_2770c4;
        case 0x2770dcu: goto label_2770dc;
        case 0x2770fcu: goto label_2770fc;
        case 0x277114u: goto label_277114;
        case 0x277140u: goto label_277140;
        case 0x277154u: goto label_277154;
        case 0x27716cu: goto label_27716c;
        case 0x277184u: goto label_277184;
        case 0x27719cu: goto label_27719c;
        case 0x2771a8u: goto label_2771a8;
        case 0x2771c0u: goto label_2771c0;
        case 0x2771e0u: goto label_2771e0;
        case 0x2771f8u: goto label_2771f8;
        case 0x27721cu: goto label_27721c;
        case 0x277230u: goto label_277230;
        case 0x277248u: goto label_277248;
        case 0x277254u: goto label_277254;
        case 0x27726cu: goto label_27726c;
        case 0x27728cu: goto label_27728c;
        case 0x2772a4u: goto label_2772a4;
        case 0x2772c8u: goto label_2772c8;
        case 0x2772dcu: goto label_2772dc;
        case 0x2772f4u: goto label_2772f4;
        case 0x277300u: goto label_277300;
        case 0x277318u: goto label_277318;
        case 0x277338u: goto label_277338;
        case 0x277350u: goto label_277350;
        case 0x277384u: goto label_277384;
        case 0x277390u: goto label_277390;
        case 0x2773a8u: goto label_2773a8;
        case 0x2773bcu: goto label_2773bc;
        case 0x2773d4u: goto label_2773d4;
        case 0x2773f8u: goto label_2773f8;
        case 0x27740cu: goto label_27740c;
        case 0x277424u: goto label_277424;
        case 0x277430u: goto label_277430;
        case 0x277448u: goto label_277448;
        case 0x277468u: goto label_277468;
        case 0x277480u: goto label_277480;
        case 0x2774a4u: goto label_2774a4;
        case 0x2774b8u: goto label_2774b8;
        case 0x2774d0u: goto label_2774d0;
        case 0x2774dcu: goto label_2774dc;
        case 0x2774f4u: goto label_2774f4;
        case 0x277514u: goto label_277514;
        case 0x27752cu: goto label_27752c;
        case 0x277554u: goto label_277554;
        case 0x27756cu: goto label_27756c;
        default: break;
    }

    ctx->pc = 0x276678u;

    // 0x276678: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x276678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x27667c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27667cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276680: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x276680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
    // 0x276684: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x276684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
    // 0x276688: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x276688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27668c: 0xffbe01b0  sd          $fp, 0x1B0($sp)
    ctx->pc = 0x27668cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 30));
    // 0x276690: 0xffb701a0  sd          $s7, 0x1A0($sp)
    ctx->pc = 0x276690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 23));
    // 0x276694: 0xffb60190  sd          $s6, 0x190($sp)
    ctx->pc = 0x276694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 22));
    // 0x276698: 0xffb50180  sd          $s5, 0x180($sp)
    ctx->pc = 0x276698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 21));
    // 0x27669c: 0xffb30160  sd          $s3, 0x160($sp)
    ctx->pc = 0x27669cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 19));
    // 0x2766a0: 0xffb10140  sd          $s1, 0x140($sp)
    ctx->pc = 0x2766a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 17));
    // 0x2766a4: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x2766a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
    // 0x2766a8: 0xe7ba0200  swc1        $f26, 0x200($sp)
    ctx->pc = 0x2766a8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x2766ac: 0xe7b901f8  swc1        $f25, 0x1F8($sp)
    ctx->pc = 0x2766acu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x2766b0: 0xe7b801f0  swc1        $f24, 0x1F0($sp)
    ctx->pc = 0x2766b0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x2766b4: 0xe7b701e8  swc1        $f23, 0x1E8($sp)
    ctx->pc = 0x2766b4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x2766b8: 0xe7b601e0  swc1        $f22, 0x1E0($sp)
    ctx->pc = 0x2766b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x2766bc: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x2766bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x2766c0: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x2766c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2766c4: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x2766c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x2766c8: 0x8e540160  lw          $s4, 0x160($s2)
    ctx->pc = 0x2766c8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x2766cc: 0x8f83b460  lw          $v1, -0x4BA0($gp)
    ctx->pc = 0x2766ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2766d0: 0xc6940044  lwc1        $f20, 0x44($s4)
    ctx->pc = 0x2766d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2766d4: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x2766d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x2766d8: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2766d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2766dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2766dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2766e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2766E0u;
    {
        const bool branch_taken_0x2766e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2766E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2766E0u;
        // 0x2766e4: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2766e0) {
            ctx->pc = 0x2766F0u;
            goto label_2766f0;
        }
    }
    ctx->pc = 0x2766E8u;
    // 0x2766e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2766e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2766ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2766ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2766f0:
    // 0x2766f0: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2766f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2766f4: 0xc6810050  lwc1        $f1, 0x50($s4)
    ctx->pc = 0x2766f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2766f8: 0xc782b468  lwc1        $f2, -0x4B98($gp)
    ctx->pc = 0x2766f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2766fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2766fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x276700: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x276700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x276704: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x276704u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x276708: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x276708u;
    {
        const bool branch_taken_0x276708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276708u;
        // 0x27670c: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276708) {
            ctx->pc = 0x276754u;
            goto label_276754;
        }
    }
    ctx->pc = 0x276710u;
    // 0x276710: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x276710u;
    SET_GPR_U32(ctx, 31, 0x276718u);
    ctx->pc = 0x276714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276710u;
    // 0x276714: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x276710u, 0x276718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276718u;
label_276718:
    // 0x276718: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x276718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x27671c: 0xdc258150  ld          $a1, -0x7EB0($at)
    ctx->pc = 0x27671cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A8150u));
    // 0x276720: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x276720u;
    SET_GPR_U32(ctx, 31, 0x276728u);
    ctx->pc = 0x276724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276720u;
    // 0x276724: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x276720u, 0x276728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276728u;
label_276728:
    // 0x276728: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x276728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x27672c: 0xdc258158  ld          $a1, -0x7EA8($at)
    ctx->pc = 0x27672cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A8158u));
    // 0x276730: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x276730u;
    SET_GPR_U32(ctx, 31, 0x276738u);
    ctx->pc = 0x276734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276730u;
    // 0x276734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x276730u, 0x276738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276738u;
label_276738:
    // 0x276738: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x276738u;
    SET_GPR_U32(ctx, 31, 0x276740u);
    ctx->pc = 0x27673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276738u;
    // 0x27673c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x276738u, 0x276740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276740u;
label_276740:
    // 0x276740: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x276740u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x276744: 0xc09d5b4  jal         func_2756D0
    ctx->pc = 0x276744u;
    SET_GPR_U32(ctx, 31, 0x27674Cu);
    ctx->pc = 0x276748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276744u;
    // 0x276748: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2756D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2756D0u, 0x276744u, 0x27674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27674Cu;
label_27674c:
    // 0x27674c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27674Cu;
    {
        const bool branch_taken_0x27674c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27674Cu;
        // 0x276750: 0xc6410034  lwc1        $f1, 0x34($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27674c) {
            ctx->pc = 0x276770u;
            goto label_276770;
        }
    }
    ctx->pc = 0x276754u;
label_276754:
    // 0x276754: 0xc78c861c  lwc1        $f12, -0x79E4($gp)
    ctx->pc = 0x276754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x276758: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x276758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27675c: 0xc7808620  lwc1        $f0, -0x79E0($gp)
    ctx->pc = 0x27675cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276760: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x276760u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x276764: 0xc09d6e2  jal         func_275B88
    ctx->pc = 0x276764u;
    SET_GPR_U32(ctx, 31, 0x27676Cu);
    ctx->pc = 0x276768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276764u;
    // 0x276768: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x275B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275B88u, 0x276764u, 0x27676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27676Cu;
label_27676c:
    // 0x27676c: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x27676cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276770:
    // 0x276770: 0x24020137  addiu       $v0, $zero, 0x137
    ctx->pc = 0x276770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
    // 0x276774: 0xc6800050  lwc1        $f0, 0x50($s4)
    ctx->pc = 0x276774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276778: 0xc7828624  lwc1        $f2, -0x79DC($gp)
    ctx->pc = 0x276778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27677c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27677cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x276780: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x276780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x276784: 0xe6410034  swc1        $f1, 0x34($s2)
    ctx->pc = 0x276784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x276788: 0xc6800060  lwc1        $f0, 0x60($s4)
    ctx->pc = 0x276788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27678c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27678cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x276790: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x276790u;
    {
        const bool branch_taken_0x276790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x276794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276790u;
        // 0x276794: 0xe6800060  swc1        $f0, 0x60($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276790) {
            ctx->pc = 0x2767D0u;
            goto label_2767d0;
        }
    }
    ctx->pc = 0x276798u;
    // 0x276798: 0x28620138  slti        $v0, $v1, 0x138
    ctx->pc = 0x276798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)312) ? 1 : 0);
    // 0x27679c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27679Cu;
    {
        const bool branch_taken_0x27679c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2767A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27679Cu;
        // 0x2767a0: 0x24020136  addiu       $v0, $zero, 0x136 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27679c) {
            ctx->pc = 0x2767B4u;
            goto label_2767b4;
        }
    }
    ctx->pc = 0x2767A4u;
    // 0x2767a4: 0x50620172  beql        $v1, $v0, . + 4 + (0x172 << 2)
    ctx->pc = 0x2767A4u;
    {
        const bool branch_taken_0x2767a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2767a4) {
            ctx->pc = 0x2767A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2767A4u;
            // 0x2767a8: 0x8e910010  lw          $s1, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276D70u;
            goto label_276d70;
        }
    }
    ctx->pc = 0x2767ACu;
    // 0x2767ac: 0x10000362  b           . + 4 + (0x362 << 2)
    ctx->pc = 0x2767ACu;
    {
        const bool branch_taken_0x2767ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2767B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2767ACu;
        // 0x2767b0: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2767ac) {
            ctx->pc = 0x277538u;
            goto label_277538;
        }
    }
    ctx->pc = 0x2767B4u;
label_2767b4:
    // 0x2767b4: 0x24020138  addiu       $v0, $zero, 0x138
    ctx->pc = 0x2767b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x2767b8: 0x1062008e  beq         $v1, $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2767B8u;
    {
        const bool branch_taken_0x2767b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2767BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2767B8u;
        // 0x2767bc: 0x24020139  addiu       $v0, $zero, 0x139 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 313));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2767b8) {
            ctx->pc = 0x2769F4u;
            goto label_2769f4;
        }
    }
    ctx->pc = 0x2767C0u;
    // 0x2767c0: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2767C0u;
    {
        const bool branch_taken_0x2767c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2767C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2767C0u;
        // 0x2767c4: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2767c0) {
            ctx->pc = 0x276838u;
            goto label_276838;
        }
    }
    ctx->pc = 0x2767C8u;
    // 0x2767c8: 0x1000035b  b           . + 4 + (0x35B << 2)
    ctx->pc = 0x2767C8u;
    {
        const bool branch_taken_0x2767c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2767CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2767C8u;
        // 0x2767cc: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2767c8) {
            ctx->pc = 0x277538u;
            goto label_277538;
        }
    }
    ctx->pc = 0x2767D0u;
label_2767d0:
    // 0x2767d0: 0xc68e003c  lwc1        $f14, 0x3C($s4)
    ctx->pc = 0x2767d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2767d4: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x2767d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2767d8: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x2767d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x2767dc: 0x46007380  add.s       $f14, $f14, $f0
    ctx->pc = 0x2767dcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    // 0x2767e0: 0xc7818628  lwc1        $f1, -0x79D8($gp)
    ctx->pc = 0x2767e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2767e4: 0xc68c0034  lwc1        $f12, 0x34($s4)
    ctx->pc = 0x2767e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2767e8: 0xc68d0038  lwc1        $f13, 0x38($s4)
    ctx->pc = 0x2767e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2767ec: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2767ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2767f0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2767f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2767f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2767f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2767f8: 0x46017382  mul.s       $f14, $f14, $f1
    ctx->pc = 0x2767f8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x2767fc: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2767fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x276800: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x276800u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x276804: 0x0  nop
    ctx->pc = 0x276804u;
    // NOP
    // 0x276808: 0x0  nop
    ctx->pc = 0x276808u;
    // NOP
    // 0x27680c: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x27680cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x276810: 0x0  nop
    ctx->pc = 0x276810u;
    // NOP
    // 0x276814: 0x0  nop
    ctx->pc = 0x276814u;
    // NOP
    // 0x276818: 0x46007383  div.s       $f14, $f14, $f0
    ctx->pc = 0x276818u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[0];
    // 0x27681c: 0x0  nop
    ctx->pc = 0x27681cu;
    // NOP
    // 0x276820: 0x0  nop
    ctx->pc = 0x276820u;
    // NOP
    // 0x276824: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x276824u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[0];
    // 0x276828: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x276828u;
    SET_GPR_U32(ctx, 31, 0x276830u);
    ctx->pc = 0x27682Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276828u;
    // 0x27682c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x276828u, 0x276830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276830u;
label_276830:
    // 0x276830: 0x10000343  b           . + 4 + (0x343 << 2)
    ctx->pc = 0x276830u;
    {
        const bool branch_taken_0x276830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276830u;
        // 0x276834: 0x27b60040  addiu       $s6, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276830) {
            ctx->pc = 0x277540u;
            goto label_277540;
        }
    }
    ctx->pc = 0x276838u;
label_276838:
    // 0x276838: 0xc7819da8  lwc1        $f1, -0x6258($gp)
    ctx->pc = 0x276838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27683c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x27683cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x276840: 0xc780862c  lwc1        $f0, -0x79D4($gp)
    ctx->pc = 0x276840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276844: 0xc7838630  lwc1        $f3, -0x79D0($gp)
    ctx->pc = 0x276844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x276848: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x276848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27684c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27684cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x276850: 0x24435c60  addiu       $v1, $v0, 0x5C60
    ctx->pc = 0x276850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 23648));
    // 0x276854: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276858: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x276858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x27685c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27685cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x276860: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x276860u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x276864: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x276864u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x276868: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x276868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x27686c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27686cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x276870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276874: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x276874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276878: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x276878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27687c: 0x0  nop
    ctx->pc = 0x27687cu;
    // NOP
    // 0x276880: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x276880u;
    {
        const bool branch_taken_0x276880 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276880u;
        // 0x276884: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276880) {
            ctx->pc = 0x27688Cu;
            goto label_27688c;
        }
    }
    ctx->pc = 0x276888u;
    // 0x276888: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x276888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27688c:
    // 0x27688c: 0xc7808634  lwc1        $f0, -0x79CC($gp)
    ctx->pc = 0x27688cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276890: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276894: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x276894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x276898: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x276898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x27689c: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27689cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x2768a0: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x2768a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2768a4: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2768a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2768a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2768a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2768ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2768acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2768b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2768b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2768b4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2768b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2768b8: 0x0  nop
    ctx->pc = 0x2768b8u;
    // NOP
    // 0x2768bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2768BCu;
    {
        const bool branch_taken_0x2768bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2768C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2768BCu;
        // 0x2768c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2768bc) {
            ctx->pc = 0x2768C8u;
            goto label_2768c8;
        }
    }
    ctx->pc = 0x2768C4u;
    // 0x2768c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2768c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2768c8:
    // 0x2768c8: 0xc7808638  lwc1        $f0, -0x79C8($gp)
    ctx->pc = 0x2768c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2768cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2768ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2768d0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2768d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2768d4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2768d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2768d8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2768d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2768dc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2768dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2768e0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2768e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2768e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2768e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2768e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2768e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2768ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2768ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2768f0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2768f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2768f4: 0x0  nop
    ctx->pc = 0x2768f4u;
    // NOP
    // 0x2768f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2768F8u;
    {
        const bool branch_taken_0x2768f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2768FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2768F8u;
        // 0x2768fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2768f8) {
            ctx->pc = 0x276904u;
            goto label_276904;
        }
    }
    ctx->pc = 0x276900u;
    // 0x276900: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x276900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_276904:
    // 0x276904: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x276904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x276908: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x276908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x27690c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27690cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x276910: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x276910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x276914: 0xa4c20124  sh          $v0, 0x124($a2)
    ctx->pc = 0x276914u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 292), (uint16_t)GPR_U32(ctx, 2));
    // 0x276918: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x276918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27691c: 0x18600305  blez        $v1, . + 4 + (0x305 << 2)
    ctx->pc = 0x27691Cu;
    {
        const bool branch_taken_0x27691c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x276920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27691Cu;
        // 0x276920: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27691c) {
            ctx->pc = 0x277534u;
            goto label_277534;
        }
    }
    ctx->pc = 0x276924u;
    // 0x276924: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x276924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x276928: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x276928u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27692c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x27692cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x276930: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x276930u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x276934: 0x27b50044  addiu       $s5, $sp, 0x44
    ctx->pc = 0x276934u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x276938: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x276938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x27693c: 0x0  nop
    ctx->pc = 0x27693cu;
    // NOP
label_276940:
    // 0x276940: 0x118180  sll         $s0, $s1, 6
    ctx->pc = 0x276940u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x276944: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x276944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x276948: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x276948u;
    SET_GPR_U32(ctx, 31, 0x276950u);
    ctx->pc = 0x27694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276948u;
    // 0x27694c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x276948u, 0x276950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276950u;
label_276950:
    // 0x276950: 0xc6800060  lwc1        $f0, 0x60($s4)
    ctx->pc = 0x276950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276954: 0xc68e003c  lwc1        $f14, 0x3C($s4)
    ctx->pc = 0x276954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x276958: 0xc781863c  lwc1        $f1, -0x79C4($gp)
    ctx->pc = 0x276958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27695c: 0x46007380  add.s       $f14, $f14, $f0
    ctx->pc = 0x27695cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    // 0x276960: 0xc68c0034  lwc1        $f12, 0x34($s4)
    ctx->pc = 0x276960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x276964: 0xc68d0038  lwc1        $f13, 0x38($s4)
    ctx->pc = 0x276964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x276968: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x276968u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x27696c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x27696cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x276970: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276974: 0x46017382  mul.s       $f14, $f14, $f1
    ctx->pc = 0x276974u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x276978: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x276978u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x27697c: 0x0  nop
    ctx->pc = 0x27697cu;
    // NOP
    // 0x276980: 0x0  nop
    ctx->pc = 0x276980u;
    // NOP
    // 0x276984: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x276984u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x276988: 0x0  nop
    ctx->pc = 0x276988u;
    // NOP
    // 0x27698c: 0x0  nop
    ctx->pc = 0x27698cu;
    // NOP
    // 0x276990: 0x46007383  div.s       $f14, $f14, $f0
    ctx->pc = 0x276990u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[0];
    // 0x276994: 0x0  nop
    ctx->pc = 0x276994u;
    // NOP
    // 0x276998: 0x0  nop
    ctx->pc = 0x276998u;
    // NOP
    // 0x27699c: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x27699cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[0];
    // 0x2769a0: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x2769A0u;
    SET_GPR_U32(ctx, 31, 0x2769A8u);
    ctx->pc = 0x2769A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2769A0u;
    // 0x2769a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x2769A0u, 0x2769A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2769A8u;
label_2769a8:
    // 0x2769a8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2769a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2769ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2769acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2769b0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2769b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2769b4: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x2769B4u;
    SET_GPR_U32(ctx, 31, 0x2769BCu);
    ctx->pc = 0x2769B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2769B4u;
    // 0x2769b8: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x2769B4u, 0x2769BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2769BCu;
label_2769bc:
    // 0x2769bc: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2769bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2769c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2769c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2769c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2769c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2769c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2769c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2769cc: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2769CCu;
    SET_GPR_U32(ctx, 31, 0x2769D4u);
    ctx->pc = 0x2769D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2769CCu;
    // 0x2769d0: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2769CCu, 0x2769D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2769D4u;
label_2769d4:
    // 0x2769d4: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x2769d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2769d8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2769d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2769dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2769dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2769e0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2769e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2769e4: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2769E4u;
    {
        const bool branch_taken_0x2769e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2769e4) {
            ctx->pc = 0x2769E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2769E4u;
            // 0x2769e8: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276940;
        }
    }
    ctx->pc = 0x2769ECu;
    // 0x2769ec: 0x100002d6  b           . + 4 + (0x2D6 << 2)
    ctx->pc = 0x2769ECu;
    {
        const bool branch_taken_0x2769ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2769F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769ECu;
        // 0x2769f0: 0x8e840064  lw          $a0, 0x64($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2769ec) {
            ctx->pc = 0x277548u;
            goto label_277548;
        }
    }
    ctx->pc = 0x2769F4u;
label_2769f4:
    // 0x2769f4: 0xc7849da8  lwc1        $f4, -0x6258($gp)
    ctx->pc = 0x2769f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2769f8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2769f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2769fc: 0xc7808640  lwc1        $f0, -0x79C0($gp)
    ctx->pc = 0x2769fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276a00: 0xc7868644  lwc1        $f6, -0x79BC($gp)
    ctx->pc = 0x276a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x276a04: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x276a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x276a08: 0xc782b468  lwc1        $f2, -0x4B98($gp)
    ctx->pc = 0x276a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x276a0c: 0x24445c60  addiu       $a0, $v0, 0x5C60
    ctx->pc = 0x276a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23648));
    // 0x276a10: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x276a10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x276a14: 0x3c0141f8  lui         $at, 0x41F8
    ctx->pc = 0x276a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16888 << 16));
    // 0x276a18: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x276a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x276a1c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x276a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x276a20: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x276a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x276a24: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x276a24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x276a28: 0xc6810068  lwc1        $f1, 0x68($s4)
    ctx->pc = 0x276a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276a2c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x276a2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x276a30: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x276a30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x276a34: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x276a34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x276a38: 0xe6810068  swc1        $f1, 0x68($s4)
    ctx->pc = 0x276a38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 104), bits); }
    // 0x276a3c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x276a3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x276a40: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x276a40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x276a44: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x276a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x276a48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x276a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x276a4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x276a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x276a50: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x276a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276a54: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x276a54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276a58: 0x0  nop
    ctx->pc = 0x276a58u;
    // NOP
    // 0x276a5c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x276A5Cu;
    {
        const bool branch_taken_0x276a5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A5Cu;
        // 0x276a60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a5c) {
            ctx->pc = 0x276A68u;
            goto label_276a68;
        }
    }
    ctx->pc = 0x276A64u;
    // 0x276a64: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x276a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_276a68:
    // 0x276a68: 0xc7808648  lwc1        $f0, -0x79B8($gp)
    ctx->pc = 0x276a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276a6c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x276a6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x276a70: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x276a70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x276a74: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x276a74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x276a78: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x276a78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x276a7c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x276a7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x276a80: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x276a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x276a84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x276a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x276a88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x276a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x276a8c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x276a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276a90: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x276a90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276a94: 0x0  nop
    ctx->pc = 0x276a94u;
    // NOP
    // 0x276a98: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x276A98u;
    {
        const bool branch_taken_0x276a98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A98u;
        // 0x276a9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a98) {
            ctx->pc = 0x276AA4u;
            goto label_276aa4;
        }
    }
    ctx->pc = 0x276AA0u;
    // 0x276aa0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x276aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_276aa4:
    // 0x276aa4: 0xc780864c  lwc1        $f0, -0x79B4($gp)
    ctx->pc = 0x276aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276aa8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x276aa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x276aac: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x276aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x276ab0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x276ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x276ab4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x276ab4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x276ab8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x276ab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x276abc: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x276abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x276ac0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x276ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x276ac4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x276ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x276ac8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x276ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276acc: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x276accu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276ad0: 0x0  nop
    ctx->pc = 0x276ad0u;
    // NOP
    // 0x276ad4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x276AD4u;
    {
        const bool branch_taken_0x276ad4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276AD4u;
        // 0x276ad8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276ad4) {
            ctx->pc = 0x276AE0u;
            goto label_276ae0;
        }
    }
    ctx->pc = 0x276ADCu;
    // 0x276adc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x276adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_276ae0:
    // 0x276ae0: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x276ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x276ae4: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x276ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x276ae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276aec: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x276aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x276af0: 0xa4c20124  sh          $v0, 0x124($a2)
    ctx->pc = 0x276af0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 292), (uint16_t)GPR_U32(ctx, 2));
    // 0x276af4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x276af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x276af8: 0x18600094  blez        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x276AF8u;
    {
        const bool branch_taken_0x276af8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x276AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276AF8u;
        // 0x276afc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276af8) {
            ctx->pc = 0x276D4Cu;
            goto label_276d4c;
        }
    }
    ctx->pc = 0x276B00u;
    // 0x276b00: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x276b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x276b04: 0x27be00e0  addiu       $fp, $sp, 0xE0
    ctx->pc = 0x276b04u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x276b08: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x276b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x276b0c: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x276b0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x276b10: 0x27b50044  addiu       $s5, $sp, 0x44
    ctx->pc = 0x276b10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x276b14: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x276b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_276b18:
    // 0x276b18: 0x1662002d  bne         $s3, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x276B18u;
    {
        const bool branch_taken_0x276b18 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x276B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B18u;
        // 0x276b1c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b18) {
            ctx->pc = 0x276BD0u;
            goto label_276bd0;
        }
    }
    ctx->pc = 0x276B20u;
    // 0x276b20: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x276b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x276b24: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x276b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x276b28: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x276b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x276b2c: 0x24170180  addiu       $s7, $zero, 0x180
    ctx->pc = 0x276b2cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x276b30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x276b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x276b34: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x276b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x276b38: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x276b38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x276b3c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x276b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x276b40: 0x8c700048  lw          $s0, 0x48($v1)
    ctx->pc = 0x276b40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x276b44: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x276b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x276b48: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x276b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x276b4c: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x276B4Cu;
    SET_GPR_U32(ctx, 31, 0x276B54u);
    ctx->pc = 0x276B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276B4Cu;
    // 0x276b50: 0xc60e0008  lwc1        $f14, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x276B4Cu, 0x276B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276B54u;
label_276b54:
    // 0x276b54: 0xc68d0068  lwc1        $f13, 0x68($s4)
    ctx->pc = 0x276b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x276b58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x276b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276b5c: 0xc7808650  lwc1        $f0, -0x79B0($gp)
    ctx->pc = 0x276b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276b60: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x276b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x276b64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x276b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276b68: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x276b68u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x276b6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x276b6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x276b70: 0x0  nop
    ctx->pc = 0x276b70u;
    // NOP
    // 0x276b74: 0x0  nop
    ctx->pc = 0x276b74u;
    // NOP
    // 0x276b78: 0x46016b43  div.s       $f13, $f13, $f1
    ctx->pc = 0x276b78u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[1];
    // 0x276b7c: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x276B7Cu;
    SET_GPR_U32(ctx, 31, 0x276B84u);
    ctx->pc = 0x276B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276B7Cu;
    // 0x276b80: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x276B7Cu, 0x276B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276B84u;
label_276b84:
    // 0x276b84: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x276b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x276b88: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x276b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276b8c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x276b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x276b90: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x276b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x276b94: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x276B94u;
    SET_GPR_U32(ctx, 31, 0x276B9Cu);
    ctx->pc = 0x276B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276B94u;
    // 0x276b98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x276B94u, 0x276B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276B9Cu;
label_276b9c:
    // 0x276b9c: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x276b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x276ba0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x276ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ba4: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x276ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x276ba8: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x276ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x276bac: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x276bacu;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x276bb0: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x276bb0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x276bb4: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x276BB4u;
    SET_GPR_U32(ctx, 31, 0x276BBCu);
    ctx->pc = 0x276BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276BB4u;
    // 0x276bb8: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x276BB4u, 0x276BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276BBCu;
label_276bbc:
    // 0x276bbc: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x276bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x276bc0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x276bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276bc4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x276bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x276bc8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x276BC8u;
    {
        const bool branch_taken_0x276bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BC8u;
        // 0x276bcc: 0x24840180  addiu       $a0, $a0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276bc8) {
            ctx->pc = 0x276C84u;
            goto label_276c84;
        }
    }
    ctx->pc = 0x276BD0u;
label_276bd0:
    // 0x276bd0: 0x16620030  bne         $s3, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x276BD0u;
    {
        const bool branch_taken_0x276bd0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x276BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BD0u;
        // 0x276bd4: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276bd0) {
            ctx->pc = 0x276C94u;
            goto label_276c94;
        }
    }
    ctx->pc = 0x276BD8u;
    // 0x276bd8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x276bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x276bdc: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x276bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x276be0: 0x241701c0  addiu       $s7, $zero, 0x1C0
    ctx->pc = 0x276be0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x276be4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x276be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x276be8: 0x248401c0  addiu       $a0, $a0, 0x1C0
    ctx->pc = 0x276be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    // 0x276bec: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x276becu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x276bf0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x276bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x276bf4: 0x8c710048  lw          $s1, 0x48($v1)
    ctx->pc = 0x276bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x276bf8: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x276bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x276bfc: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x276bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x276c00: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x276c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x276c04: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x276C04u;
    SET_GPR_U32(ctx, 31, 0x276C0Cu);
    ctx->pc = 0x276C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276C04u;
    // 0x276c08: 0xc60e0008  lwc1        $f14, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x276C04u, 0x276C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276C0Cu;
label_276c0c:
    // 0x276c0c: 0xc68c0068  lwc1        $f12, 0x68($s4)
    ctx->pc = 0x276c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x276c10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x276c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276c14: 0xc7808654  lwc1        $f0, -0x79AC($gp)
    ctx->pc = 0x276c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276c18: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x276c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x276c1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x276c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276c20: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x276c20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x276c24: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x276c24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x276c28: 0x0  nop
    ctx->pc = 0x276c28u;
    // NOP
    // 0x276c2c: 0x0  nop
    ctx->pc = 0x276c2cu;
    // NOP
    // 0x276c30: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x276c30u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x276c34: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x276C34u;
    SET_GPR_U32(ctx, 31, 0x276C3Cu);
    ctx->pc = 0x276C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276C34u;
    // 0x276c38: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x276C34u, 0x276C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276C3Cu;
label_276c3c:
    // 0x276c3c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x276c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x276c40: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x276c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276c44: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x276c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x276c48: 0x248401c0  addiu       $a0, $a0, 0x1C0
    ctx->pc = 0x276c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    // 0x276c4c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x276C4Cu;
    SET_GPR_U32(ctx, 31, 0x276C54u);
    ctx->pc = 0x276C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276C4Cu;
    // 0x276c50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x276C4Cu, 0x276C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276C54u;
label_276c54:
    // 0x276c54: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x276c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x276c58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x276c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276c5c: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x276c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x276c60: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x276c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x276c64: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x276c64u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x276c68: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x276c68u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x276c6c: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x276C6Cu;
    SET_GPR_U32(ctx, 31, 0x276C74u);
    ctx->pc = 0x276C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276C6Cu;
    // 0x276c70: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x276C6Cu, 0x276C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276C74u;
label_276c74:
    // 0x276c74: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x276c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x276c78: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x276c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276c7c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x276c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x276c80: 0x248401c0  addiu       $a0, $a0, 0x1C0
    ctx->pc = 0x276c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
label_276c84:
    // 0x276c84: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x276C84u;
    SET_GPR_U32(ctx, 31, 0x276C8Cu);
    ctx->pc = 0x276C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276C84u;
    // 0x276c88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x276C84u, 0x276C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276C8Cu;
label_276c8c:
    // 0x276c8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x276C8Cu;
    {
        const bool branch_taken_0x276c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C8Cu;
        // 0x276c90: 0xc6800060  lwc1        $f0, 0x60($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276c8c) {
            ctx->pc = 0x276CA4u;
            goto label_276ca4;
        }
    }
    ctx->pc = 0x276C94u;
label_276c94:
    // 0x276c94: 0x13b980  sll         $s7, $s3, 6
    ctx->pc = 0x276c94u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x276c98: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x276C98u;
    SET_GPR_U32(ctx, 31, 0x276CA0u);
    ctx->pc = 0x276C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276C98u;
    // 0x276c9c: 0x972021  addu        $a0, $a0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x276C98u, 0x276CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276CA0u;
label_276ca0:
    // 0x276ca0: 0xc6800060  lwc1        $f0, 0x60($s4)
    ctx->pc = 0x276ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276ca4:
    // 0x276ca4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x276ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ca8: 0xc68e003c  lwc1        $f14, 0x3C($s4)
    ctx->pc = 0x276ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x276cac: 0xc7818658  lwc1        $f1, -0x79A8($gp)
    ctx->pc = 0x276cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276cb0: 0x46007380  add.s       $f14, $f14, $f0
    ctx->pc = 0x276cb0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    // 0x276cb4: 0xc68c0034  lwc1        $f12, 0x34($s4)
    ctx->pc = 0x276cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x276cb8: 0xc68d0038  lwc1        $f13, 0x38($s4)
    ctx->pc = 0x276cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x276cbc: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x276cbcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x276cc0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x276cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x276cc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276cc8: 0x46017382  mul.s       $f14, $f14, $f1
    ctx->pc = 0x276cc8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x276ccc: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x276cccu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x276cd0: 0x0  nop
    ctx->pc = 0x276cd0u;
    // NOP
    // 0x276cd4: 0x0  nop
    ctx->pc = 0x276cd4u;
    // NOP
    // 0x276cd8: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x276cd8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x276cdc: 0x0  nop
    ctx->pc = 0x276cdcu;
    // NOP
    // 0x276ce0: 0x0  nop
    ctx->pc = 0x276ce0u;
    // NOP
    // 0x276ce4: 0x46007383  div.s       $f14, $f14, $f0
    ctx->pc = 0x276ce4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[0];
    // 0x276ce8: 0x0  nop
    ctx->pc = 0x276ce8u;
    // NOP
    // 0x276cec: 0x0  nop
    ctx->pc = 0x276cecu;
    // NOP
    // 0x276cf0: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x276cf0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[0];
    // 0x276cf4: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x276CF4u;
    SET_GPR_U32(ctx, 31, 0x276CFCu);
    ctx->pc = 0x276CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276CF4u;
    // 0x276cf8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x276CF4u, 0x276CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276CFCu;
label_276cfc:
    // 0x276cfc: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x276cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x276d00: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x276d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276d04: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x276d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x276d08: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x276D08u;
    SET_GPR_U32(ctx, 31, 0x276D10u);
    ctx->pc = 0x276D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276D08u;
    // 0x276d0c: 0xb72821  addu        $a1, $a1, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x276D08u, 0x276D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D10u;
label_276d10:
    // 0x276d10: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x276d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x276d14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x276d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276d18: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x276d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276d1c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x276d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x276d20: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x276D20u;
    SET_GPR_U32(ctx, 31, 0x276D28u);
    ctx->pc = 0x276D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276D20u;
    // 0x276d24: 0x972021  addu        $a0, $a0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x276D20u, 0x276D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D28u;
label_276d28:
    // 0x276d28: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x276d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x276d2c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x276d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276d30: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x276d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x276d34: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x276d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x276d38: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x276d38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x276d3c: 0x1440ff76  bnez        $v0, . + 4 + (-0x8A << 2)
    ctx->pc = 0x276D3Cu;
    {
        const bool branch_taken_0x276d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D3Cu;
        // 0x276d40: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276d3c) {
            ctx->pc = 0x276B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276b18;
        }
    }
    ctx->pc = 0x276D44u;
    // 0x276d44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x276D44u;
    {
        const bool branch_taken_0x276d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D44u;
        // 0x276d48: 0x8e84006c  lw          $a0, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276d44) {
            ctx->pc = 0x276D60u;
            goto label_276d60;
        }
    }
    ctx->pc = 0x276D4Cu;
label_276d4c:
    // 0x276d4c: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x276d4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x276d50: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x276d50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x276d54: 0xafb20120  sw          $s2, 0x120($sp)
    ctx->pc = 0x276d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 18));
    // 0x276d58: 0x27b50044  addiu       $s5, $sp, 0x44
    ctx->pc = 0x276d58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x276d5c: 0x8e84006c  lw          $a0, 0x6C($s4)
    ctx->pc = 0x276d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_276d60:
    // 0x276d60: 0xc081674  jal         func_2059D0
    ctx->pc = 0x276D60u;
    SET_GPR_U32(ctx, 31, 0x276D68u);
    ctx->pc = 0x276D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276D60u;
    // 0x276d64: 0x8fa50120  lw          $a1, 0x120($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2059D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2059D0u, 0x276D60u, 0x276D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D68u;
label_276d68:
    // 0x276d68: 0x100001f7  b           . + 4 + (0x1F7 << 2)
    ctx->pc = 0x276D68u;
    {
        const bool branch_taken_0x276d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D68u;
        // 0x276d6c: 0x8e840064  lw          $a0, 0x64($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276d68) {
            ctx->pc = 0x277548u;
            goto label_277548;
        }
    }
    ctx->pc = 0x276D70u;
label_276d70:
    // 0x276d70: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x276d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x276d74: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x276d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x276d78: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x276d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276d7c: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x276d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x276d80: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x276d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x276d84: 0x2466000c  addiu       $a2, $v1, 0xC
    ctx->pc = 0x276d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x276d88: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x276d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x276d8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x276d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276d90: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x276d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276d94: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x276d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x276d98: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x276d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x276d9c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x276d9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x276da0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x276da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276da4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x276da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x276da8: 0x82b023  subu        $s6, $a0, $v0
    ctx->pc = 0x276da8u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x276dac: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x276dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276db0: 0x8ed30098  lw          $s3, 0x98($s6)
    ctx->pc = 0x276db0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 152)));
    // 0x276db4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x276db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x276db8: 0x8ed50228  lw          $s5, 0x228($s6)
    ctx->pc = 0x276db8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 552)));
    // 0x276dbc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x276dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276dc0: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x276dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x276dc4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x276dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276dc8: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x276dc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x276dcc: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x276dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x276dd0: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x276dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276dd4: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x276dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276dd8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x276dd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x276ddc: 0xc6430038  lwc1        $f3, 0x38($s2)
    ctx->pc = 0x276ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x276de0: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x276de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x276de4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x276de4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x276de8: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x276de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x276dec: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x276decu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x276df0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x276df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x276df4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x276df4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x276df8: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x276df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x276dfc: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x276dfcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x276e00: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x276e00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x276e04: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x276e04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x276e08: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x276e08u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x276e0c: 0x0  nop
    ctx->pc = 0x276e0cu;
    // NOP
    // 0x276e10: 0x0  nop
    ctx->pc = 0x276e10u;
    // NOP
    // 0x276e14: 0x460c0084  c1          0xC0084
    ctx->pc = 0x276e14u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[12]);
    // 0x276e18: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x276e18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276e1c: 0x0  nop
    ctx->pc = 0x276e1cu;
    // NOP
    // 0x276e20: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x276E20u;
    {
        const bool branch_taken_0x276e20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x276E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E20u;
        // 0x276e24: 0xe7a30098  swc1        $f3, 0x98($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e20) {
            ctx->pc = 0x276E34u;
            goto label_276e34;
        }
    }
    ctx->pc = 0x276E28u;
    // 0x276e28: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x276E28u;
    SET_GPR_U32(ctx, 31, 0x276E30u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x276E28u, 0x276E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E30u;
label_276e30:
    // 0x276e30: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x276e30u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_276e34:
    // 0x276e34: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x276e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276e38: 0x46001146  mov.s       $f5, $f2
    ctx->pc = 0x276e38u;
    ctx->f[5] = FPU_MOV_S(ctx->f[2]);
    // 0x276e3c: 0xc7a40090  lwc1        $f4, 0x90($sp)
    ctx->pc = 0x276e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x276e40: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x276e40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x276e44: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x276e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276e48: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x276e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x276e4c: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x276e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x276e50: 0x0  nop
    ctx->pc = 0x276e50u;
    // NOP
    // 0x276e54: 0x0  nop
    ctx->pc = 0x276e54u;
    // NOP
    // 0x276e58: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x276e58u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x276e5c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x276e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x276e60: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x276e60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x276e64: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x276e64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x276e68: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x276e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276e6c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x276e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276e70: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x276e70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x276e74: 0x0  nop
    ctx->pc = 0x276e74u;
    // NOP
    // 0x276e78: 0x0  nop
    ctx->pc = 0x276e78u;
    // NOP
    // 0x276e7c: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x276e7cu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x276e80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x276e80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x276e84: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x276e84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x276e88: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x276e88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x276e8c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x276e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276e90: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x276e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276e94: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x276e94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x276e98: 0x0  nop
    ctx->pc = 0x276e98u;
    // NOP
    // 0x276e9c: 0x0  nop
    ctx->pc = 0x276e9cu;
    // NOP
    // 0x276ea0: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x276ea0u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x276ea4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x276ea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x276ea8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x276ea8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x276eac: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x276eacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x276eb0: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x276eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x276eb4: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x276eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x276eb8: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x276EB8u;
    SET_GPR_U32(ctx, 31, 0x276EC0u);
    ctx->pc = 0x276EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276EB8u;
    // 0x276ebc: 0xc7ad0098  lwc1        $f13, 0x98($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x276EB8u, 0x276EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276EC0u;
label_276ec0:
    // 0x276ec0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x276ec0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x276ec4: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x276ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x276ec8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x276ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276ecc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x276eccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x276ed0: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x276ed0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x276ed4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x276ed4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x276ed8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x276ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276edc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x276edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276ee0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x276ee0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x276ee4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x276ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x276ee8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x276ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x276eec: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x276eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276ef0: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x276ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x276ef4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x276ef4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x276ef8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x276ef8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x276efc: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x276efcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x276f00: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x276f00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x276f04: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x276f04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x276f08: 0x0  nop
    ctx->pc = 0x276f08u;
    // NOP
    // 0x276f0c: 0x0  nop
    ctx->pc = 0x276f0cu;
    // NOP
    // 0x276f10: 0x460c0044  c1          0xC0044
    ctx->pc = 0x276f10u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x276f14: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x276f14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276f18: 0x0  nop
    ctx->pc = 0x276f18u;
    // NOP
    // 0x276f1c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x276F1Cu;
    {
        const bool branch_taken_0x276f1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x276f1c) {
            ctx->pc = 0x276F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276F1Cu;
            // 0x276f20: 0xc6a00008  lwc1        $f0, 0x8($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x276F34u;
            goto label_276f34;
        }
    }
    ctx->pc = 0x276F24u;
    // 0x276f24: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x276F24u;
    SET_GPR_U32(ctx, 31, 0x276F2Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x276F24u, 0x276F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F2Cu;
label_276f2c:
    // 0x276f2c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x276f2cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x276f30: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x276f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276f34:
    // 0x276f34: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x276f34u;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
    // 0x276f38: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x276f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x276f3c: 0x26430030  addiu       $v1, $s2, 0x30
    ctx->pc = 0x276f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x276f40: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x276f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x276f44: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x276f44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x276f48: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x276f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x276f4c: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x276f4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x276f50: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x276f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276f54: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x276f54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x276f58: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x276f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x276f5c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x276f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x276f60: 0xc797865c  lwc1        $f23, -0x79A4($gp)
    ctx->pc = 0x276f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x276f64: 0x0  nop
    ctx->pc = 0x276f64u;
    // NOP
    // 0x276f68: 0x0  nop
    ctx->pc = 0x276f68u;
    // NOP
    // 0x276f6c: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x276f6cu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x276f70: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x276f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x276f74: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x276f74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x276f78: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x276f78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x276f7c: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x276f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276f80: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x276f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x276f84: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x276f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x276f88: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x276f88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x276f8c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x276f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276f90: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x276f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x276f94: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x276f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x276f98: 0x0  nop
    ctx->pc = 0x276f98u;
    // NOP
    // 0x276f9c: 0x0  nop
    ctx->pc = 0x276f9cu;
    // NOP
    // 0x276fa0: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x276fa0u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x276fa4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x276fa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x276fa8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x276fa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x276fac: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x276facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x276fb0: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x276fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276fb4: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x276fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276fb8: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x276fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x276fbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x276fbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x276fc0: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x276fc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x276fc4: 0x0  nop
    ctx->pc = 0x276fc4u;
    // NOP
    // 0x276fc8: 0x0  nop
    ctx->pc = 0x276fc8u;
    // NOP
    // 0x276fcc: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x276fccu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x276fd0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x276fd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x276fd4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x276fd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x276fd8: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x276fd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x276fdc: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x276fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x276fe0: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x276FE0u;
    SET_GPR_U32(ctx, 31, 0x276FE8u);
    ctx->pc = 0x276FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276FE0u;
    // 0x276fe4: 0xc7ad0098  lwc1        $f13, 0x98($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x276FE0u, 0x276FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276FE8u;
label_276fe8:
    // 0x276fe8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x276fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x276fec: 0x46000686  mov.s       $f26, $f0
    ctx->pc = 0x276fecu;
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
    // 0x276ff0: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x276ff0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x276ff4: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x276ff4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x276ff8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x276ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x276ffc: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x276FFCu;
    SET_GPR_U32(ctx, 31, 0x277004u);
    ctx->pc = 0x277000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276FFCu;
    // 0x277000: 0x4600cb86  mov.s       $f14, $f25 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x276FFCu, 0x277004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277004u;
label_277004:
    // 0x277004: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x277004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x277008: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x277008u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x27700c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x27700cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x277010: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x277010u;
    SET_GPR_U32(ctx, 31, 0x277018u);
    ctx->pc = 0x277014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277010u;
    // 0x277014: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x277010u, 0x277018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277018u;
label_277018:
    // 0x277018: 0x4618ad42  mul.s       $f21, $f21, $f24
    ctx->pc = 0x277018u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
    // 0x27701c: 0xc7968660  lwc1        $f22, -0x79A0($gp)
    ctx->pc = 0x27701cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x277020: 0xc780b164  lwc1        $f0, -0x4E9C($gp)
    ctx->pc = 0x277020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x277024: 0x4616a582  mul.s       $f22, $f20, $f22
    ctx->pc = 0x277024u;
    ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x277028: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x277028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x27702c: 0x0  nop
    ctx->pc = 0x27702cu;
    // NOP
    // 0x277030: 0x0  nop
    ctx->pc = 0x277030u;
    // NOP
    // 0x277034: 0x4617ad43  div.s       $f21, $f21, $f23
    ctx->pc = 0x277034u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[23];
    // 0x277038: 0xc6940038  lwc1        $f20, 0x38($s4)
    ctx->pc = 0x277038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27703c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x27703cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x277040: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x277040u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x277044: 0x8ed000e8  lw          $s0, 0xE8($s6)
    ctx->pc = 0x277044u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
    // 0x277048: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x277048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x27704c: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x27704cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x277050: 0xe780b164  swc1        $f0, -0x4E9C($gp)
    ctx->pc = 0x277050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947172), bits); }
    // 0x277054: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x277054u;
    SET_GPR_U32(ctx, 31, 0x27705Cu);
    ctx->pc = 0x277058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277054u;
    // 0x277058: 0x4615a501  sub.s       $f20, $f20, $f21 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x277054u, 0x27705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27705Cu;
label_27705c:
    // 0x27705c: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x27705cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x277060: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x277060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277064: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x277064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x277068: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x277068u;
    SET_GPR_U32(ctx, 31, 0x277070u);
    ctx->pc = 0x27706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277068u;
    // 0x27706c: 0xc60e0008  lwc1        $f14, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x277068u, 0x277070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277070u;
label_277070:
    // 0x277070: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x277070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x277074: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x277074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277078: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x277078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27707c: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x27707cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x277080: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x277080u;
    SET_GPR_U32(ctx, 31, 0x277088u);
    ctx->pc = 0x277084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277080u;
    // 0x277084: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x277080u, 0x277088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277088u;
label_277088:
    // 0x277088: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x277088u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x27708c: 0x0  nop
    ctx->pc = 0x27708cu;
    // NOP
    // 0x277090: 0x0  nop
    ctx->pc = 0x277090u;
    // NOP
    // 0x277094: 0x4618a303  div.s       $f12, $f20, $f24
    ctx->pc = 0x277094u;
    if (ctx->f[24] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[24];
    // 0x277098: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x277098u;
    SET_GPR_U32(ctx, 31, 0x2770A0u);
    ctx->pc = 0x27709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277098u;
    // 0x27709c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x277098u, 0x2770A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770A0u;
label_2770a0:
    // 0x2770a0: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2770a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2770a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2770a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2770a8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2770a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2770ac: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x2770acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x2770b0: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2770B0u;
    SET_GPR_U32(ctx, 31, 0x2770B8u);
    ctx->pc = 0x2770B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2770B0u;
    // 0x2770b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2770B0u, 0x2770B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770B8u;
label_2770b8:
    // 0x2770b8: 0xc78cb164  lwc1        $f12, -0x4E9C($gp)
    ctx->pc = 0x2770b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2770bc: 0xc0ad27e  jal         func_2B49F8
    ctx->pc = 0x2770BCu;
    SET_GPR_U32(ctx, 31, 0x2770C4u);
    ctx->pc = 0x2770C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2770BCu;
    // 0x2770c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B49F8u, 0x2770BCu, 0x2770C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770C4u;
label_2770c4:
    // 0x2770c4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2770c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2770c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2770c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2770cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2770ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2770d0: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x2770d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x2770d4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2770D4u;
    SET_GPR_U32(ctx, 31, 0x2770DCu);
    ctx->pc = 0x2770D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2770D4u;
    // 0x2770d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2770D4u, 0x2770DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770DCu;
label_2770dc:
    // 0x2770dc: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x2770dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2770e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2770e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2770e4: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2770e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2770e8: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2770e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2770ec: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x2770ecu;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x2770f0: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x2770f0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x2770f4: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x2770F4u;
    SET_GPR_U32(ctx, 31, 0x2770FCu);
    ctx->pc = 0x2770F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2770F4u;
    // 0x2770f8: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x2770F4u, 0x2770FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770FCu;
label_2770fc:
    // 0x2770fc: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2770fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x277100: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x277100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277104: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x277104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x277108: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x277108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x27710c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x27710Cu;
    SET_GPR_U32(ctx, 31, 0x277114u);
    ctx->pc = 0x277110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27710Cu;
    // 0x277110: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x27710Cu, 0x277114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277114u;
label_277114:
    // 0x277114: 0xc780b168  lwc1        $f0, -0x4E98($gp)
    ctx->pc = 0x277114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x277118: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x277118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x27711c: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x27711cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x277120: 0xc6940038  lwc1        $f20, 0x38($s4)
    ctx->pc = 0x277120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x277124: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x277124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x277128: 0x8ed00138  lw          $s0, 0x138($s6)
    ctx->pc = 0x277128u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 312)));
    // 0x27712c: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x27712cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x277130: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x277130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x277134: 0xe780b168  swc1        $f0, -0x4E98($gp)
    ctx->pc = 0x277134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947176), bits); }
    // 0x277138: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x277138u;
    SET_GPR_U32(ctx, 31, 0x277140u);
    ctx->pc = 0x27713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277138u;
    // 0x27713c: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x277138u, 0x277140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277140u;
label_277140:
    // 0x277140: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x277140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x277144: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x277144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277148: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x277148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27714c: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x27714Cu;
    SET_GPR_U32(ctx, 31, 0x277154u);
    ctx->pc = 0x277150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27714Cu;
    // 0x277150: 0xc60e0008  lwc1        $f14, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x27714Cu, 0x277154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277154u;
label_277154:
    // 0x277154: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x277154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x277158: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x277158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27715c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x27715cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x277160: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x277160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x277164: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x277164u;
    SET_GPR_U32(ctx, 31, 0x27716Cu);
    ctx->pc = 0x277168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277164u;
    // 0x277168: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x277164u, 0x27716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27716Cu;
label_27716c:
    // 0x27716c: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x27716cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x277170: 0x0  nop
    ctx->pc = 0x277170u;
    // NOP
    // 0x277174: 0x0  nop
    ctx->pc = 0x277174u;
    // NOP
    // 0x277178: 0x4618a303  div.s       $f12, $f20, $f24
    ctx->pc = 0x277178u;
    if (ctx->f[24] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[24];
    // 0x27717c: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x27717Cu;
    SET_GPR_U32(ctx, 31, 0x277184u);
    ctx->pc = 0x277180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27717Cu;
    // 0x277180: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x27717Cu, 0x277184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277184u;
label_277184:
    // 0x277184: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x277184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x277188: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x277188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27718c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x27718cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x277190: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x277190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x277194: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x277194u;
    SET_GPR_U32(ctx, 31, 0x27719Cu);
    ctx->pc = 0x277198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277194u;
    // 0x277198: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x277194u, 0x27719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27719Cu;
label_27719c:
    // 0x27719c: 0xc78cb168  lwc1        $f12, -0x4E98($gp)
    ctx->pc = 0x27719cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2771a0: 0xc0ad27e  jal         func_2B49F8
    ctx->pc = 0x2771A0u;
    SET_GPR_U32(ctx, 31, 0x2771A8u);
    ctx->pc = 0x2771A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2771A0u;
    // 0x2771a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B49F8u, 0x2771A0u, 0x2771A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2771A8u;
label_2771a8:
    // 0x2771a8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2771a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2771ac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2771acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2771b0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2771b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2771b4: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x2771b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x2771b8: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2771B8u;
    SET_GPR_U32(ctx, 31, 0x2771C0u);
    ctx->pc = 0x2771BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2771B8u;
    // 0x2771bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2771B8u, 0x2771C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2771C0u;
label_2771c0:
    // 0x2771c0: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x2771c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2771c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2771c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2771c8: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2771c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2771cc: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2771ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2771d0: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x2771d0u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x2771d4: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x2771d4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x2771d8: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x2771D8u;
    SET_GPR_U32(ctx, 31, 0x2771E0u);
    ctx->pc = 0x2771DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2771D8u;
    // 0x2771dc: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x2771D8u, 0x2771E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2771E0u;
label_2771e0:
    // 0x2771e0: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2771e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2771e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2771e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2771e8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2771e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2771ec: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x2771ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x2771f0: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2771F0u;
    SET_GPR_U32(ctx, 31, 0x2771F8u);
    ctx->pc = 0x2771F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2771F0u;
    // 0x2771f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2771F0u, 0x2771F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2771F8u;
label_2771f8:
    // 0x2771f8: 0xc780b16c  lwc1        $f0, -0x4E94($gp)
    ctx->pc = 0x2771f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2771fc: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2771fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x277200: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x277200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x277204: 0x8ed00188  lw          $s0, 0x188($s6)
    ctx->pc = 0x277204u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 392)));
    // 0x277208: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x277208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27720c: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x27720cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x277210: 0xe780b16c  swc1        $f0, -0x4E94($gp)
    ctx->pc = 0x277210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947180), bits); }
    // 0x277214: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x277214u;
    SET_GPR_U32(ctx, 31, 0x27721Cu);
    ctx->pc = 0x277218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277214u;
    // 0x277218: 0x24840100  addiu       $a0, $a0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x277214u, 0x27721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27721Cu;
label_27721c:
    // 0x27721c: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x27721cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x277220: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x277220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277224: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x277224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x277228: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x277228u;
    SET_GPR_U32(ctx, 31, 0x277230u);
    ctx->pc = 0x27722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277228u;
    // 0x27722c: 0xc60e0008  lwc1        $f14, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x277228u, 0x277230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277230u;
label_277230:
    // 0x277230: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x277230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x277234: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x277234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277238: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x277238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27723c: 0x24840100  addiu       $a0, $a0, 0x100
    ctx->pc = 0x27723cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x277240: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x277240u;
    SET_GPR_U32(ctx, 31, 0x277248u);
    ctx->pc = 0x277244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277240u;
    // 0x277244: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x277240u, 0x277248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277248u;
label_277248:
    // 0x277248: 0xc78cb16c  lwc1        $f12, -0x4E94($gp)
    ctx->pc = 0x277248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27724c: 0xc0ad27e  jal         func_2B49F8
    ctx->pc = 0x27724Cu;
    SET_GPR_U32(ctx, 31, 0x277254u);
    ctx->pc = 0x277250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27724Cu;
    // 0x277250: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B49F8u, 0x27724Cu, 0x277254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277254u;
label_277254:
    // 0x277254: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x277254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x277258: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x277258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27725c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x27725cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x277260: 0x24840100  addiu       $a0, $a0, 0x100
    ctx->pc = 0x277260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x277264: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x277264u;
    SET_GPR_U32(ctx, 31, 0x27726Cu);
    ctx->pc = 0x277268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277264u;
    // 0x277268: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x277264u, 0x27726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27726Cu;
label_27726c:
    // 0x27726c: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x27726cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x277270: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x277270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277274: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x277274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x277278: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x277278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27727c: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x27727cu;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x277280: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x277280u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x277284: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x277284u;
    SET_GPR_U32(ctx, 31, 0x27728Cu);
    ctx->pc = 0x277288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277284u;
    // 0x277288: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x277284u, 0x27728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27728Cu;
label_27728c:
    // 0x27728c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x27728cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x277290: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x277290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277294: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x277294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x277298: 0x24840100  addiu       $a0, $a0, 0x100
    ctx->pc = 0x277298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x27729c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x27729Cu;
    SET_GPR_U32(ctx, 31, 0x2772A4u);
    ctx->pc = 0x2772A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27729Cu;
    // 0x2772a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x27729Cu, 0x2772A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2772A4u;
label_2772a4:
    // 0x2772a4: 0xc780b170  lwc1        $f0, -0x4E90($gp)
    ctx->pc = 0x2772a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2772a8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2772a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2772ac: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x2772acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x2772b0: 0x8ed001d8  lw          $s0, 0x1D8($s6)
    ctx->pc = 0x2772b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 472)));
    // 0x2772b4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2772b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2772b8: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x2772b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2772bc: 0xe780b170  swc1        $f0, -0x4E90($gp)
    ctx->pc = 0x2772bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947184), bits); }
    // 0x2772c0: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x2772C0u;
    SET_GPR_U32(ctx, 31, 0x2772C8u);
    ctx->pc = 0x2772C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2772C0u;
    // 0x2772c4: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x2772C0u, 0x2772C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2772C8u;
label_2772c8:
    // 0x2772c8: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2772c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2772cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2772ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2772d0: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2772d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2772d4: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x2772D4u;
    SET_GPR_U32(ctx, 31, 0x2772DCu);
    ctx->pc = 0x2772D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2772D4u;
    // 0x2772d8: 0xc60e0008  lwc1        $f14, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x2772D4u, 0x2772DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2772DCu;
label_2772dc:
    // 0x2772dc: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2772dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2772e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2772e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2772e4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2772e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2772e8: 0x24840140  addiu       $a0, $a0, 0x140
    ctx->pc = 0x2772e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x2772ec: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2772ECu;
    SET_GPR_U32(ctx, 31, 0x2772F4u);
    ctx->pc = 0x2772F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2772ECu;
    // 0x2772f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2772ECu, 0x2772F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2772F4u;
label_2772f4:
    // 0x2772f4: 0xc78cb170  lwc1        $f12, -0x4E90($gp)
    ctx->pc = 0x2772f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2772f8: 0xc0ad27e  jal         func_2B49F8
    ctx->pc = 0x2772F8u;
    SET_GPR_U32(ctx, 31, 0x277300u);
    ctx->pc = 0x2772FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2772F8u;
    // 0x2772fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B49F8u, 0x2772F8u, 0x277300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277300u;
label_277300:
    // 0x277300: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x277300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x277304: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x277304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277308: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x277308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27730c: 0x24840140  addiu       $a0, $a0, 0x140
    ctx->pc = 0x27730cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x277310: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x277310u;
    SET_GPR_U32(ctx, 31, 0x277318u);
    ctx->pc = 0x277314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277310u;
    // 0x277314: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x277310u, 0x277318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277318u;
label_277318:
    // 0x277318: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x277318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x27731c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27731cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277320: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x277320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x277324: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x277324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x277328: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x277328u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x27732c: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x27732cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x277330: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x277330u;
    SET_GPR_U32(ctx, 31, 0x277338u);
    ctx->pc = 0x277334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277330u;
    // 0x277334: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x277330u, 0x277338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277338u;
label_277338:
    // 0x277338: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x277338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x27733c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27733cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277340: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x277340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x277344: 0x24840140  addiu       $a0, $a0, 0x140
    ctx->pc = 0x277344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x277348: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x277348u;
    SET_GPR_U32(ctx, 31, 0x277350u);
    ctx->pc = 0x27734Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277348u;
    // 0x27734c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x277348u, 0x277350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277350u;
label_277350:
    // 0x277350: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x277350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x277354: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x277354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x277358: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x277358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27735c: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x27735cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x277360: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x277360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x277364: 0xc64d0034  lwc1        $f13, 0x34($s2)
    ctx->pc = 0x277364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x277368: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x277368u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x27736c: 0xc64e0038  lwc1        $f14, 0x38($s2)
    ctx->pc = 0x27736cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x277370: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x277370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x277374: 0x460d0b41  sub.s       $f13, $f1, $f13
    ctx->pc = 0x277374u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x277378: 0x460e1381  sub.s       $f14, $f2, $f14
    ctx->pc = 0x277378u;
    ctx->f[14] = FPU_SUB_S(ctx->f[2], ctx->f[14]);
    // 0x27737c: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x27737Cu;
    SET_GPR_U32(ctx, 31, 0x277384u);
    ctx->pc = 0x277380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27737Cu;
    // 0x277380: 0x24840180  addiu       $a0, $a0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x27737Cu, 0x277384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277384u;
label_277384:
    // 0x277384: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x277384u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x277388: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x277388u;
    SET_GPR_U32(ctx, 31, 0x277390u);
    ctx->pc = 0x27738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277388u;
    // 0x27738c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x277388u, 0x277390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277390u;
label_277390:
    // 0x277390: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x277390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x277394: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x277394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277398: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x277398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27739c: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x27739cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x2773a0: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2773A0u;
    SET_GPR_U32(ctx, 31, 0x2773A8u);
    ctx->pc = 0x2773A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2773A0u;
    // 0x2773a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2773A0u, 0x2773A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773A8u;
label_2773a8:
    // 0x2773a8: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x2773a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x2773ac: 0xc78e8664  lwc1        $f14, -0x799C($gp)
    ctx->pc = 0x2773acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2773b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2773b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2773b4: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x2773B4u;
    SET_GPR_U32(ctx, 31, 0x2773BCu);
    ctx->pc = 0x2773B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2773B4u;
    // 0x2773b8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x2773B4u, 0x2773BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773BCu;
label_2773bc:
    // 0x2773bc: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2773bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2773c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2773c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2773c4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2773c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2773c8: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x2773c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x2773cc: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2773CCu;
    SET_GPR_U32(ctx, 31, 0x2773D4u);
    ctx->pc = 0x2773D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2773CCu;
    // 0x2773d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2773CCu, 0x2773D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773D4u;
label_2773d4:
    // 0x2773d4: 0xc780b174  lwc1        $f0, -0x4E8C($gp)
    ctx->pc = 0x2773d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2773d8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2773d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2773dc: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x2773dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x2773e0: 0x8ed00278  lw          $s0, 0x278($s6)
    ctx->pc = 0x2773e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 632)));
    // 0x2773e4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2773e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2773e8: 0x24850180  addiu       $a1, $a0, 0x180
    ctx->pc = 0x2773e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x2773ec: 0xe780b174  swc1        $f0, -0x4E8C($gp)
    ctx->pc = 0x2773ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947188), bits); }
    // 0x2773f0: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x2773F0u;
    SET_GPR_U32(ctx, 31, 0x2773F8u);
    ctx->pc = 0x2773F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2773F0u;
    // 0x2773f4: 0x248401c0  addiu       $a0, $a0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x2773F0u, 0x2773F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773F8u;
label_2773f8:
    // 0x2773f8: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2773f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2773fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2773fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277400: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x277400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x277404: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x277404u;
    SET_GPR_U32(ctx, 31, 0x27740Cu);
    ctx->pc = 0x277408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277404u;
    // 0x277408: 0xc60e0008  lwc1        $f14, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x277404u, 0x27740Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27740Cu;
label_27740c:
    // 0x27740c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x27740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x277410: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x277410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277414: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x277414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x277418: 0x248401c0  addiu       $a0, $a0, 0x1C0
    ctx->pc = 0x277418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    // 0x27741c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x27741Cu;
    SET_GPR_U32(ctx, 31, 0x277424u);
    ctx->pc = 0x277420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27741Cu;
    // 0x277420: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x27741Cu, 0x277424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277424u;
label_277424:
    // 0x277424: 0xc78cb174  lwc1        $f12, -0x4E8C($gp)
    ctx->pc = 0x277424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x277428: 0xc0ad27e  jal         func_2B49F8
    ctx->pc = 0x277428u;
    SET_GPR_U32(ctx, 31, 0x277430u);
    ctx->pc = 0x27742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277428u;
    // 0x27742c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B49F8u, 0x277428u, 0x277430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277430u;
label_277430:
    // 0x277430: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x277430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x277434: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x277434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277438: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x277438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27743c: 0x248401c0  addiu       $a0, $a0, 0x1C0
    ctx->pc = 0x27743cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    // 0x277440: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x277440u;
    SET_GPR_U32(ctx, 31, 0x277448u);
    ctx->pc = 0x277444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277440u;
    // 0x277444: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x277440u, 0x277448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277448u;
label_277448:
    // 0x277448: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x277448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x27744c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27744cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277450: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x277450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x277454: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x277454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x277458: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x277458u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x27745c: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x27745cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x277460: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x277460u;
    SET_GPR_U32(ctx, 31, 0x277468u);
    ctx->pc = 0x277464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277460u;
    // 0x277464: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x277460u, 0x277468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277468u;
label_277468:
    // 0x277468: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x277468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x27746c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27746cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277470: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x277470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x277474: 0x248401c0  addiu       $a0, $a0, 0x1C0
    ctx->pc = 0x277474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    // 0x277478: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x277478u;
    SET_GPR_U32(ctx, 31, 0x277480u);
    ctx->pc = 0x27747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277478u;
    // 0x27747c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x277478u, 0x277480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277480u;
label_277480:
    // 0x277480: 0xc780b178  lwc1        $f0, -0x4E88($gp)
    ctx->pc = 0x277480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x277484: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x277484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x277488: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x277488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x27748c: 0x8ed002c8  lw          $s0, 0x2C8($s6)
    ctx->pc = 0x27748cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 712)));
    // 0x277490: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x277490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x277494: 0x24850180  addiu       $a1, $a0, 0x180
    ctx->pc = 0x277494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x277498: 0xe780b178  swc1        $f0, -0x4E88($gp)
    ctx->pc = 0x277498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947192), bits); }
    // 0x27749c: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x27749Cu;
    SET_GPR_U32(ctx, 31, 0x2774A4u);
    ctx->pc = 0x2774A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27749Cu;
    // 0x2774a0: 0x24840200  addiu       $a0, $a0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x27749Cu, 0x2774A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2774A4u;
label_2774a4:
    // 0x2774a4: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2774a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2774a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2774a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2774ac: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2774acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2774b0: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x2774B0u;
    SET_GPR_U32(ctx, 31, 0x2774B8u);
    ctx->pc = 0x2774B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2774B0u;
    // 0x2774b4: 0xc60e0008  lwc1        $f14, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x2774B0u, 0x2774B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2774B8u;
label_2774b8:
    // 0x2774b8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2774b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2774bc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2774bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2774c0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2774c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2774c4: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x2774c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x2774c8: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2774C8u;
    SET_GPR_U32(ctx, 31, 0x2774D0u);
    ctx->pc = 0x2774CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2774C8u;
    // 0x2774cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2774C8u, 0x2774D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2774D0u;
label_2774d0:
    // 0x2774d0: 0xc78cb178  lwc1        $f12, -0x4E88($gp)
    ctx->pc = 0x2774d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2774d4: 0xc0ad27e  jal         func_2B49F8
    ctx->pc = 0x2774D4u;
    SET_GPR_U32(ctx, 31, 0x2774DCu);
    ctx->pc = 0x2774D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2774D4u;
    // 0x2774d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B49F8u, 0x2774D4u, 0x2774DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2774DCu;
label_2774dc:
    // 0x2774dc: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2774dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2774e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2774e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2774e4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2774e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2774e8: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x2774e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x2774ec: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2774ECu;
    SET_GPR_U32(ctx, 31, 0x2774F4u);
    ctx->pc = 0x2774F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2774ECu;
    // 0x2774f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2774ECu, 0x2774F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2774F4u;
label_2774f4:
    // 0x2774f4: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x2774f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2774f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2774f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2774fc: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2774fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x277500: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x277500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x277504: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x277504u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x277508: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x277508u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x27750c: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x27750Cu;
    SET_GPR_U32(ctx, 31, 0x277514u);
    ctx->pc = 0x277510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27750Cu;
    // 0x277510: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x27750Cu, 0x277514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277514u;
label_277514:
    // 0x277514: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x277514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x277518: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x277518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27751c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x27751cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x277520: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x277520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x277524: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x277524u;
    SET_GPR_U32(ctx, 31, 0x27752Cu);
    ctx->pc = 0x277528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277524u;
    // 0x277528: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x277524u, 0x27752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27752Cu;
label_27752c:
    // 0x27752c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27752Cu;
    {
        const bool branch_taken_0x27752c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27752Cu;
        // 0x277530: 0x27b60040  addiu       $s6, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27752c) {
            ctx->pc = 0x277540u;
            goto label_277540;
        }
    }
    ctx->pc = 0x277534u;
label_277534:
    // 0x277534: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x277534u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_277538:
    // 0x277538: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x277538u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27753c: 0xafb20120  sw          $s2, 0x120($sp)
    ctx->pc = 0x27753cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 18));
label_277540:
    // 0x277540: 0x27b50044  addiu       $s5, $sp, 0x44
    ctx->pc = 0x277540u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x277544: 0x8e840064  lw          $a0, 0x64($s4)
    ctx->pc = 0x277544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_277548:
    // 0x277548: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x277548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27754c: 0xc099286  jal         func_264A18
    ctx->pc = 0x27754Cu;
    SET_GPR_U32(ctx, 31, 0x277554u);
    ctx->pc = 0x277550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27754Cu;
    // 0x277550: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264A18u, 0x27754Cu, 0x277554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277554u;
label_277554:
    // 0x277554: 0x8e830064  lw          $v1, 0x64($s4)
    ctx->pc = 0x277554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x277558: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x277558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27755c: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x27755cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x277560: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x277560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x277564: 0xc099b16  jal         func_266C58
    ctx->pc = 0x277564u;
    SET_GPR_U32(ctx, 31, 0x27756Cu);
    ctx->pc = 0x277568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277564u;
    // 0x277568: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C58u, 0x277564u, 0x27756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27756Cu;
label_27756c:
    // 0x27756c: 0xae820064  sw          $v0, 0x64($s4)
    ctx->pc = 0x27756cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 2));
    // 0x277570: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x277570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x277574: 0xdfbe01b0  ld          $fp, 0x1B0($sp)
    ctx->pc = 0x277574u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x277578: 0xdfb701a0  ld          $s7, 0x1A0($sp)
    ctx->pc = 0x277578u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x27757c: 0xdfb60190  ld          $s6, 0x190($sp)
    ctx->pc = 0x27757cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x277580: 0xdfb50180  ld          $s5, 0x180($sp)
    ctx->pc = 0x277580u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x277584: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x277584u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x277588: 0xdfb30160  ld          $s3, 0x160($sp)
    ctx->pc = 0x277588u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x27758c: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x27758cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x277590: 0xdfb10140  ld          $s1, 0x140($sp)
    ctx->pc = 0x277590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x277594: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x277594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x277598: 0xc7ba0200  lwc1        $f26, 0x200($sp)
    ctx->pc = 0x277598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x27759c: 0xc7b901f8  lwc1        $f25, 0x1F8($sp)
    ctx->pc = 0x27759cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2775a0: 0xc7b801f0  lwc1        $f24, 0x1F0($sp)
    ctx->pc = 0x2775a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2775a4: 0xc7b701e8  lwc1        $f23, 0x1E8($sp)
    ctx->pc = 0x2775a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2775a8: 0xc7b601e0  lwc1        $f22, 0x1E0($sp)
    ctx->pc = 0x2775a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2775ac: 0xc7b501d8  lwc1        $f21, 0x1D8($sp)
    ctx->pc = 0x2775acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2775b0: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x2775b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2775b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2775B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2775B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775B4u;
        // 0x2775b8: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2775B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2775BCu;
}
