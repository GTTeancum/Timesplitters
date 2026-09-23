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

// Function: playerselectanim
// Address: 0x283f60 - 0x284e2c
void playerselectanim_0x283f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerselectanim_0x283f60");
#endif

    switch (ctx->pc) {
        case 0x283ffcu: goto label_283ffc;
        case 0x284018u: goto label_284018;
        case 0x284028u: goto label_284028;
        case 0x284048u: goto label_284048;
        case 0x284080u: goto label_284080;
        case 0x284090u: goto label_284090;
        case 0x2840b0u: goto label_2840b0;
        case 0x2840d4u: goto label_2840d4;
        case 0x2840e0u: goto label_2840e0;
        case 0x2840f0u: goto label_2840f0;
        case 0x28410cu: goto label_28410c;
        case 0x28411cu: goto label_28411c;
        case 0x284128u: goto label_284128;
        case 0x284148u: goto label_284148;
        case 0x284168u: goto label_284168;
        case 0x28417cu: goto label_28417c;
        case 0x284190u: goto label_284190;
        case 0x2841acu: goto label_2841ac;
        case 0x2841bcu: goto label_2841bc;
        case 0x284204u: goto label_284204;
        case 0x284214u: goto label_284214;
        case 0x284234u: goto label_284234;
        case 0x284254u: goto label_284254;
        case 0x2842a8u: goto label_2842a8;
        case 0x2842d8u: goto label_2842d8;
        case 0x284308u: goto label_284308;
        case 0x284328u: goto label_284328;
        case 0x284378u: goto label_284378;
        case 0x284398u: goto label_284398;
        case 0x2843e4u: goto label_2843e4;
        case 0x284408u: goto label_284408;
        case 0x284418u: goto label_284418;
        case 0x284428u: goto label_284428;
        case 0x284448u: goto label_284448;
        case 0x284458u: goto label_284458;
        case 0x284478u: goto label_284478;
        case 0x2844a4u: goto label_2844a4;
        case 0x2844bcu: goto label_2844bc;
        case 0x2844e4u: goto label_2844e4;
        case 0x2844f4u: goto label_2844f4;
        case 0x284504u: goto label_284504;
        case 0x284524u: goto label_284524;
        case 0x284534u: goto label_284534;
        case 0x284554u: goto label_284554;
        case 0x284580u: goto label_284580;
        case 0x284598u: goto label_284598;
        case 0x2845a8u: goto label_2845a8;
        case 0x2845b8u: goto label_2845b8;
        case 0x2845c8u: goto label_2845c8;
        case 0x2845d8u: goto label_2845d8;
        case 0x2845fcu: goto label_2845fc;
        case 0x284618u: goto label_284618;
        case 0x284628u: goto label_284628;
        case 0x284644u: goto label_284644;
        case 0x284650u: goto label_284650;
        case 0x284670u: goto label_284670;
        case 0x284690u: goto label_284690;
        case 0x2846b0u: goto label_2846b0;
        case 0x2846d0u: goto label_2846d0;
        case 0x2846e0u: goto label_2846e0;
        case 0x2846f0u: goto label_2846f0;
        case 0x284700u: goto label_284700;
        case 0x284724u: goto label_284724;
        case 0x284740u: goto label_284740;
        case 0x284750u: goto label_284750;
        case 0x28476cu: goto label_28476c;
        case 0x284778u: goto label_284778;
        case 0x28478cu: goto label_28478c;
        case 0x2847b0u: goto label_2847b0;
        case 0x2847c0u: goto label_2847c0;
        case 0x2847d0u: goto label_2847d0;
        case 0x2847e0u: goto label_2847e0;
        case 0x2847f0u: goto label_2847f0;
        case 0x284800u: goto label_284800;
        case 0x284814u: goto label_284814;
        case 0x284824u: goto label_284824;
        case 0x284844u: goto label_284844;
        case 0x28484cu: goto label_28484c;
        case 0x284860u: goto label_284860;
        case 0x284870u: goto label_284870;
        case 0x284878u: goto label_284878;
        case 0x2848ccu: goto label_2848cc;
        case 0x2848ecu: goto label_2848ec;
        case 0x2848fcu: goto label_2848fc;
        case 0x28491cu: goto label_28491c;
        case 0x284938u: goto label_284938;
        case 0x284958u: goto label_284958;
        case 0x284968u: goto label_284968;
        case 0x284988u: goto label_284988;
        case 0x2849bcu: goto label_2849bc;
        case 0x2849dcu: goto label_2849dc;
        case 0x2849ecu: goto label_2849ec;
        case 0x284a0cu: goto label_284a0c;
        case 0x284a28u: goto label_284a28;
        case 0x284a48u: goto label_284a48;
        case 0x284a58u: goto label_284a58;
        case 0x284a78u: goto label_284a78;
        case 0x284aa8u: goto label_284aa8;
        case 0x284ab0u: goto label_284ab0;
        case 0x284ac4u: goto label_284ac4;
        case 0x284ad4u: goto label_284ad4;
        case 0x284adcu: goto label_284adc;
        case 0x284b8cu: goto label_284b8c;
        case 0x284bacu: goto label_284bac;
        case 0x284bbcu: goto label_284bbc;
        case 0x284bdcu: goto label_284bdc;
        case 0x284bf8u: goto label_284bf8;
        case 0x284c18u: goto label_284c18;
        case 0x284c28u: goto label_284c28;
        case 0x284c48u: goto label_284c48;
        case 0x284c7cu: goto label_284c7c;
        case 0x284c9cu: goto label_284c9c;
        case 0x284cacu: goto label_284cac;
        case 0x284cccu: goto label_284ccc;
        case 0x284ce8u: goto label_284ce8;
        case 0x284d08u: goto label_284d08;
        case 0x284d18u: goto label_284d18;
        case 0x284d38u: goto label_284d38;
        case 0x284d54u: goto label_284d54;
        case 0x284d64u: goto label_284d64;
        case 0x284d74u: goto label_284d74;
        case 0x284d84u: goto label_284d84;
        case 0x284d90u: goto label_284d90;
        case 0x284de0u: goto label_284de0;
        case 0x284df8u: goto label_284df8;
        default: break;
    }

    ctx->pc = 0x283f60u;

    // 0x283f60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x283f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x283f64: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x283f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x283f68: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x283f68u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x283f6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x283f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x283f70: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x283f70u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x283f74: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x283f74u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x283f78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x283f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x283f7c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x283f7cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x283f80: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x283f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x283f84: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x283f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x283f88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x283f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x283f8c: 0xe7b90088  swc1        $f25, 0x88($sp)
    ctx->pc = 0x283f8cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x283f90: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x283f90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x283f94: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x283f94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x283f98: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x283f98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x283f9c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x283f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x283fa0: 0x8c910180  lw          $s1, 0x180($a0)
    ctx->pc = 0x283fa0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x283fa4: 0x8c830128  lw          $v1, 0x128($a0)
    ctx->pc = 0x283fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
    // 0x283fa8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283FA8u;
    {
        const bool branch_taken_0x283fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x283FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283FA8u;
        // 0x283fac: 0x8e300160  lw          $s0, 0x160($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283fa8) {
            ctx->pc = 0x283FC4u;
            goto label_283fc4;
        }
    }
    ctx->pc = 0x283FB0u;
    // 0x283fb0: 0xae000b98  sw          $zero, 0xB98($s0)
    ctx->pc = 0x283fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2968), GPR_U32(ctx, 0));
    // 0x283fb4: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x283fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283fb8: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x283fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x283fbc: 0x1000038e  b           . + 4 + (0x38E << 2)
    ctx->pc = 0x283FBCu;
    {
        const bool branch_taken_0x283fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283FBCu;
        // 0x283fc0: 0xe6000b9c  swc1        $f0, 0xB9C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2972), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x283fbc) {
            ctx->pc = 0x284DF8u;
            goto label_284df8;
        }
    }
    ctx->pc = 0x283FC4u;
label_283fc4:
    // 0x283fc4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x283fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x283fc8: 0x14620081  bne         $v1, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x283FC8u;
    {
        const bool branch_taken_0x283fc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x283FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283FC8u;
        // 0x283fcc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283fc8) {
            ctx->pc = 0x2841D0u;
            goto label_2841d0;
        }
    }
    ctx->pc = 0x283FD0u;
    // 0x283fd0: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x283fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x283fd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x283fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283fd8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x283fd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x283fdc: 0x46007542  mul.s       $f21, $f14, $f0
    ctx->pc = 0x283fdcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x283fe0: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x283fe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283fe4: 0x0  nop
    ctx->pc = 0x283fe4u;
    // NOP
    // 0x283fe8: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x283FE8u;
    {
        const bool branch_taken_0x283fe8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x283fe8) {
            ctx->pc = 0x283FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283FE8u;
            // 0x283fec: 0x4600ad47  neg.s       $f21, $f21 (Delay Slot)
            ctx->f[21] = FPU_NEG_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x283FF0u;
            goto label_283ff0;
        }
    }
    ctx->pc = 0x283FF0u;
label_283ff0:
    // 0x283ff0: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x283ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x283ff4: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x283FF4u;
    SET_GPR_U32(ctx, 31, 0x283FFCu);
    ctx->pc = 0x283FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283FF4u;
    // 0x283ff8: 0xc62d004c  lwc1        $f13, 0x4C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x283FF4u, 0x283FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283FFCu;
label_283ffc:
    // 0x283ffc: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x283ffcu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x284000: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x284000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284004: 0x0  nop
    ctx->pc = 0x284004u;
    // NOP
    // 0x284008: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x284008u;
    {
        const bool branch_taken_0x284008 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284008u;
        // 0x28400c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284008) {
            ctx->pc = 0x284068u;
            goto label_284068;
        }
    }
    ctx->pc = 0x284010u;
    // 0x284010: 0xc085608  jal         func_215820
    ctx->pc = 0x284010u;
    SET_GPR_U32(ctx, 31, 0x284018u);
    ctx->pc = 0x284014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284010u;
    // 0x284014: 0x240501d3  addiu       $a1, $zero, 0x1D3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x284010u, 0x284018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284018u;
label_284018:
    // 0x284018: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x284018u;
    {
        const bool branch_taken_0x284018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284018u;
        // 0x28401c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284018) {
            ctx->pc = 0x284050u;
            goto label_284050;
        }
    }
    ctx->pc = 0x284020u;
    // 0x284020: 0xc085684  jal         func_215A10
    ctx->pc = 0x284020u;
    SET_GPR_U32(ctx, 31, 0x284028u);
    ctx->pc = 0x284024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284020u;
    // 0x284024: 0x240501d3  addiu       $a1, $zero, 0x1D3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x284020u, 0x284028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284028u;
label_284028:
    // 0x284028: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x284028u;
    {
        const bool branch_taken_0x284028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284028) {
            ctx->pc = 0x28402Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284028u;
            // 0x28402c: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2840D8u;
            goto label_2840d8;
        }
    }
    ctx->pc = 0x284030u;
    // 0x284030: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x284030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x284034: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x284034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x284038: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x284038u;
    {
        const bool branch_taken_0x284038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284038u;
        // 0x28403c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284038) {
            ctx->pc = 0x2840D4u;
            goto label_2840d4;
        }
    }
    ctx->pc = 0x284040u;
    // 0x284040: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x284040u;
    SET_GPR_U32(ctx, 31, 0x284048u);
    ctx->pc = 0x284044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284040u;
    // 0x284044: 0x240501d3  addiu       $a1, $zero, 0x1D3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x284040u, 0x284048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284048u;
label_284048:
    // 0x284048: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x284048u;
    {
        const bool branch_taken_0x284048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284048) {
            ctx->pc = 0x28404Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284048u;
            // 0x28404c: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2840D8u;
            goto label_2840d8;
        }
    }
    ctx->pc = 0x284050u;
label_284050:
    // 0x284050: 0xc78c8910  lwc1        $f12, -0x76F0($gp)
    ctx->pc = 0x284050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284054: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284058: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28405c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x28405cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x284060: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x284060u;
    {
        const bool branch_taken_0x284060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284060u;
        // 0x284064: 0x240501d3  addiu       $a1, $zero, 0x1D3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284060) {
            ctx->pc = 0x2840CCu;
            goto label_2840cc;
        }
    }
    ctx->pc = 0x284068u;
label_284068:
    // 0x284068: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x284068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28406c: 0x0  nop
    ctx->pc = 0x28406cu;
    // NOP
    // 0x284070: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
    ctx->pc = 0x284070u;
    {
        const bool branch_taken_0x284070 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x284070) {
            ctx->pc = 0x284074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284070u;
            // 0x284074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2840E8u;
            goto label_2840e8;
        }
    }
    ctx->pc = 0x284078u;
    // 0x284078: 0xc085608  jal         func_215820
    ctx->pc = 0x284078u;
    SET_GPR_U32(ctx, 31, 0x284080u);
    ctx->pc = 0x28407Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284078u;
    // 0x28407c: 0x240501d2  addiu       $a1, $zero, 0x1D2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 466));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x284078u, 0x284080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284080u;
label_284080:
    // 0x284080: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x284080u;
    {
        const bool branch_taken_0x284080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284080u;
        // 0x284084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284080) {
            ctx->pc = 0x2840B8u;
            goto label_2840b8;
        }
    }
    ctx->pc = 0x284088u;
    // 0x284088: 0xc085684  jal         func_215A10
    ctx->pc = 0x284088u;
    SET_GPR_U32(ctx, 31, 0x284090u);
    ctx->pc = 0x28408Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284088u;
    // 0x28408c: 0x240501d2  addiu       $a1, $zero, 0x1D2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 466));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x284088u, 0x284090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284090u;
label_284090:
    // 0x284090: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x284090u;
    {
        const bool branch_taken_0x284090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284090) {
            ctx->pc = 0x284094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284090u;
            // 0x284094: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2840D8u;
            goto label_2840d8;
        }
    }
    ctx->pc = 0x284098u;
    // 0x284098: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x284098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x28409c: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x28409cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2840a0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2840A0u;
    {
        const bool branch_taken_0x2840a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2840A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840A0u;
        // 0x2840a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840a0) {
            ctx->pc = 0x2840D4u;
            goto label_2840d4;
        }
    }
    ctx->pc = 0x2840A8u;
    // 0x2840a8: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2840A8u;
    SET_GPR_U32(ctx, 31, 0x2840B0u);
    ctx->pc = 0x2840ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2840A8u;
    // 0x2840ac: 0x240501d2  addiu       $a1, $zero, 0x1D2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 466));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2840A8u, 0x2840B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2840B0u;
label_2840b0:
    // 0x2840b0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2840B0u;
    {
        const bool branch_taken_0x2840b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2840b0) {
            ctx->pc = 0x2840B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2840B0u;
            // 0x2840b4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2840D8u;
            goto label_2840d8;
        }
    }
    ctx->pc = 0x2840B8u;
label_2840b8:
    // 0x2840b8: 0xc78c8914  lwc1        $f12, -0x76EC($gp)
    ctx->pc = 0x2840b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2840bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2840bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2840c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2840c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2840c4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2840c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2840c8: 0x240501d2  addiu       $a1, $zero, 0x1D2
    ctx->pc = 0x2840c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 466));
label_2840cc:
    // 0x2840cc: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2840CCu;
    SET_GPR_U32(ctx, 31, 0x2840D4u);
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2840CCu, 0x2840D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2840D4u;
label_2840d4:
    // 0x2840d4: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2840d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2840d8:
    // 0x2840d8: 0xc0856c8  jal         func_215B20
    ctx->pc = 0x2840D8u;
    SET_GPR_U32(ctx, 31, 0x2840E0u);
    ctx->pc = 0x2840DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2840D8u;
    // 0x2840dc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B20u, 0x2840D8u, 0x2840E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2840E0u;
label_2840e0:
    // 0x2840e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2840E0u;
    {
        const bool branch_taken_0x2840e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2840E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840E0u;
        // 0x2840e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840e0) {
            ctx->pc = 0x284120u;
            goto label_284120;
        }
    }
    ctx->pc = 0x2840E8u;
label_2840e8:
    // 0x2840e8: 0xc085608  jal         func_215820
    ctx->pc = 0x2840E8u;
    SET_GPR_U32(ctx, 31, 0x2840F0u);
    ctx->pc = 0x2840ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2840E8u;
    // 0x2840ec: 0x240501d4  addiu       $a1, $zero, 0x1D4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 468));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2840E8u, 0x2840F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2840F0u;
label_2840f0:
    // 0x2840f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2840F0u;
    {
        const bool branch_taken_0x2840f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2840F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840F0u;
        // 0x2840f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840f0) {
            ctx->pc = 0x28410Cu;
            goto label_28410c;
        }
    }
    ctx->pc = 0x2840F8u;
    // 0x2840f8: 0xc78c8918  lwc1        $f12, -0x76E8($gp)
    ctx->pc = 0x2840f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2840fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2840fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x284100: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x284100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x284104: 0xc08535a  jal         func_214D68
    ctx->pc = 0x284104u;
    SET_GPR_U32(ctx, 31, 0x28410Cu);
    ctx->pc = 0x284108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284104u;
    // 0x284108: 0x240501d4  addiu       $a1, $zero, 0x1D4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 468));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x284104u, 0x28410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28410Cu;
label_28410c:
    // 0x28410c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28410cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x284110: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x284110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x284114: 0xc0856c8  jal         func_215B20
    ctx->pc = 0x284114u;
    SET_GPR_U32(ctx, 31, 0x28411Cu);
    ctx->pc = 0x284118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284114u;
    // 0x284118: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B20u, 0x284114u, 0x28411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28411Cu;
label_28411c:
    // 0x28411c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28411cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_284120:
    // 0x284120: 0xc085684  jal         func_215A10
    ctx->pc = 0x284120u;
    SET_GPR_U32(ctx, 31, 0x284128u);
    ctx->pc = 0x284124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284120u;
    // 0x284124: 0x240501d2  addiu       $a1, $zero, 0x1D2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 466));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x284120u, 0x284128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284128u;
label_284128:
    // 0x284128: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284128u;
    {
        const bool branch_taken_0x284128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284128u;
        // 0x28412c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284128) {
            ctx->pc = 0x284140u;
            goto label_284140;
        }
    }
    ctx->pc = 0x284130u;
    // 0x284130: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x284130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x284134: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x284134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x284138: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x284138u;
    {
        const bool branch_taken_0x284138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x284138) {
            ctx->pc = 0x284160u;
            goto label_284160;
        }
    }
    ctx->pc = 0x284140u;
label_284140:
    // 0x284140: 0xc085684  jal         func_215A10
    ctx->pc = 0x284140u;
    SET_GPR_U32(ctx, 31, 0x284148u);
    ctx->pc = 0x284144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284140u;
    // 0x284144: 0x240501d3  addiu       $a1, $zero, 0x1D3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x284140u, 0x284148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284148u;
label_284148:
    // 0x284148: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x284148u;
    {
        const bool branch_taken_0x284148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284148u;
        // 0x28414c: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284148) {
            ctx->pc = 0x2841C0u;
            goto label_2841c0;
        }
    }
    ctx->pc = 0x284150u;
    // 0x284150: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x284150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x284154: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x284154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x284158: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x284158u;
    {
        const bool branch_taken_0x284158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284158u;
        // 0x28415c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284158) {
            ctx->pc = 0x2841BCu;
            goto label_2841bc;
        }
    }
    ctx->pc = 0x284160u;
label_284160:
    // 0x284160: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x284160u;
    SET_GPR_U32(ctx, 31, 0x284168u);
    ctx->pc = 0x284164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284160u;
    // 0x284164: 0x240501d2  addiu       $a1, $zero, 0x1D2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 466));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x284160u, 0x284168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284168u;
label_284168:
    // 0x284168: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x284168u;
    {
        const bool branch_taken_0x284168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284168u;
        // 0x28416c: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284168) {
            ctx->pc = 0x2841C0u;
            goto label_2841c0;
        }
    }
    ctx->pc = 0x284170u;
    // 0x284170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284174: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x284174u;
    SET_GPR_U32(ctx, 31, 0x28417Cu);
    ctx->pc = 0x284178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284174u;
    // 0x284178: 0x240501d3  addiu       $a1, $zero, 0x1D3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x284174u, 0x28417Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28417Cu;
label_28417c:
    // 0x28417c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28417Cu;
    {
        const bool branch_taken_0x28417c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28417Cu;
        // 0x284180: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28417c) {
            ctx->pc = 0x2841C0u;
            goto label_2841c0;
        }
    }
    ctx->pc = 0x284184u;
    // 0x284184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284188: 0xc085608  jal         func_215820
    ctx->pc = 0x284188u;
    SET_GPR_U32(ctx, 31, 0x284190u);
    ctx->pc = 0x28418Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284188u;
    // 0x28418c: 0x240501d4  addiu       $a1, $zero, 0x1D4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 468));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x284188u, 0x284190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284190u;
label_284190:
    // 0x284190: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x284190u;
    {
        const bool branch_taken_0x284190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284190u;
        // 0x284194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284190) {
            ctx->pc = 0x2841ACu;
            goto label_2841ac;
        }
    }
    ctx->pc = 0x284198u;
    // 0x284198: 0xc78c891c  lwc1        $f12, -0x76E4($gp)
    ctx->pc = 0x284198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28419c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28419cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2841a0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2841a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2841a4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2841A4u;
    SET_GPR_U32(ctx, 31, 0x2841ACu);
    ctx->pc = 0x2841A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2841A4u;
    // 0x2841a8: 0x240501d4  addiu       $a1, $zero, 0x1D4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 468));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2841A4u, 0x2841ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2841ACu;
label_2841ac:
    // 0x2841ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2841acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2841b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2841b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2841b4: 0xc0856c8  jal         func_215B20
    ctx->pc = 0x2841B4u;
    SET_GPR_U32(ctx, 31, 0x2841BCu);
    ctx->pc = 0x2841B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2841B4u;
    // 0x2841b8: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B20u, 0x2841B4u, 0x2841BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2841BCu;
label_2841bc:
    // 0x2841bc: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2841bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_2841c0:
    // 0x2841c0: 0xc4400114  lwc1        $f0, 0x114($v0)
    ctx->pc = 0x2841c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2841c4: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x2841c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x2841c8: 0x1000030b  b           . + 4 + (0x30B << 2)
    ctx->pc = 0x2841C8u;
    {
        const bool branch_taken_0x2841c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2841CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841C8u;
        // 0x2841cc: 0xe6200050  swc1        $f0, 0x50($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841c8) {
            ctx->pc = 0x284DF8u;
            goto label_284df8;
        }
    }
    ctx->pc = 0x2841D0u;
label_2841d0:
    // 0x2841d0: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2841D0u;
    {
        const bool branch_taken_0x2841d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2841d0) {
            ctx->pc = 0x28425Cu;
            goto label_28425c;
        }
    }
    ctx->pc = 0x2841D8u;
    // 0x2841d8: 0xc4800090  lwc1        $f0, 0x90($a0)
    ctx->pc = 0x2841d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2841dc: 0xc6011198  lwc1        $f1, 0x1198($s0)
    ctx->pc = 0x2841dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2841e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2841e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2841e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2841e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2841e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2841e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2841ec: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2841ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2841f0: 0x0  nop
    ctx->pc = 0x2841f0u;
    // NOP
    // 0x2841f4: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x2841F4u;
    {
        const bool branch_taken_0x2841f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2841F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841F4u;
        // 0x2841f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841f4) {
            ctx->pc = 0x28425Cu;
            goto label_28425c;
        }
    }
    ctx->pc = 0x2841FCu;
    // 0x2841fc: 0xc085608  jal         func_215820
    ctx->pc = 0x2841FCu;
    SET_GPR_U32(ctx, 31, 0x284204u);
    ctx->pc = 0x284200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2841FCu;
    // 0x284200: 0x240501d5  addiu       $a1, $zero, 0x1D5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 469));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2841FCu, 0x284204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284204u;
label_284204:
    // 0x284204: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x284204u;
    {
        const bool branch_taken_0x284204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284204u;
        // 0x284208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284204) {
            ctx->pc = 0x28423Cu;
            goto label_28423c;
        }
    }
    ctx->pc = 0x28420Cu;
    // 0x28420c: 0xc085684  jal         func_215A10
    ctx->pc = 0x28420Cu;
    SET_GPR_U32(ctx, 31, 0x284214u);
    ctx->pc = 0x284210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28420Cu;
    // 0x284210: 0x240501d5  addiu       $a1, $zero, 0x1D5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 469));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x28420Cu, 0x284214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284214u;
label_284214:
    // 0x284214: 0x104002f9  beqz        $v0, . + 4 + (0x2F9 << 2)
    ctx->pc = 0x284214u;
    {
        const bool branch_taken_0x284214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284214u;
        // 0x284218: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284214) {
            ctx->pc = 0x284DFCu;
            goto label_284dfc;
        }
    }
    ctx->pc = 0x28421Cu;
    // 0x28421c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x28421cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x284220: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x284220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x284224: 0x106002f5  beqz        $v1, . + 4 + (0x2F5 << 2)
    ctx->pc = 0x284224u;
    {
        const bool branch_taken_0x284224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284224u;
        // 0x284228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284224) {
            ctx->pc = 0x284DFCu;
            goto label_284dfc;
        }
    }
    ctx->pc = 0x28422Cu;
    // 0x28422c: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x28422Cu;
    SET_GPR_U32(ctx, 31, 0x284234u);
    ctx->pc = 0x284230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28422Cu;
    // 0x284230: 0x240501d5  addiu       $a1, $zero, 0x1D5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 469));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x28422Cu, 0x284234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284234u;
label_284234:
    // 0x284234: 0x144002f1  bnez        $v0, . + 4 + (0x2F1 << 2)
    ctx->pc = 0x284234u;
    {
        const bool branch_taken_0x284234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284234u;
        // 0x284238: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284234) {
            ctx->pc = 0x284DFCu;
            goto label_284dfc;
        }
    }
    ctx->pc = 0x28423Cu;
label_28423c:
    // 0x28423c: 0xc78c8920  lwc1        $f12, -0x76E0($gp)
    ctx->pc = 0x28423cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284244: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x284244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x284248: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x284248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x28424c: 0xc08535a  jal         func_214D68
    ctx->pc = 0x28424Cu;
    SET_GPR_U32(ctx, 31, 0x284254u);
    ctx->pc = 0x284250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28424Cu;
    // 0x284250: 0x240501d5  addiu       $a1, $zero, 0x1D5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 469));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x28424Cu, 0x284254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284254u;
label_284254:
    // 0x284254: 0x100002e9  b           . + 4 + (0x2E9 << 2)
    ctx->pc = 0x284254u;
    {
        const bool branch_taken_0x284254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284254u;
        // 0x284258: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284254) {
            ctx->pc = 0x284DFCu;
            goto label_284dfc;
        }
    }
    ctx->pc = 0x28425Cu;
label_28425c:
    // 0x28425c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x28425cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x284260: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x284260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x284264: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x284264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x284268: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x284268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28426c: 0x4602b842  mul.s       $f1, $f23, $f2
    ctx->pc = 0x28426cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
    // 0x284270: 0x4603c002  mul.s       $f0, $f24, $f3
    ctx->pc = 0x284270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[3]);
    // 0x284274: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x284274u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x284278: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x284278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x28427c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x28427cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x284280: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x284280u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x284284: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x284284u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x284288: 0x0  nop
    ctx->pc = 0x284288u;
    // NOP
    // 0x28428c: 0x0  nop
    ctx->pc = 0x28428cu;
    // NOP
    // 0x284290: 0x460c0644  c1          0xC0644
    ctx->pc = 0x284290u;
    ctx->f[25] = FPU_SQRT_S(ctx->f[12]);
    // 0x284294: 0x4619c832  c.eq.s      $f25, $f25
    ctx->pc = 0x284294u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[25], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284298: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x284298u;
    {
        const bool branch_taken_0x284298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x284298) {
            ctx->pc = 0x2842ACu;
            goto label_2842ac;
        }
    }
    ctx->pc = 0x2842A0u;
    // 0x2842a0: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2842A0u;
    SET_GPR_U32(ctx, 31, 0x2842A8u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2842A0u, 0x2842A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2842A8u;
label_2842a8:
    // 0x2842a8: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x2842a8u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
label_2842ac:
    // 0x2842ac: 0x3c0142e2  lui         $at, 0x42E2
    ctx->pc = 0x2842acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17122 << 16));
    // 0x2842b0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2842b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2842b4: 0x0  nop
    ctx->pc = 0x2842b4u;
    // NOP
    // 0x2842b8: 0x0  nop
    ctx->pc = 0x2842b8u;
    // NOP
    // 0x2842bc: 0x46160504  c1          0x160504
    ctx->pc = 0x2842bcu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[22]);
    // 0x2842c0: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x2842c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2842c4: 0x0  nop
    ctx->pc = 0x2842c4u;
    // NOP
    // 0x2842c8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2842C8u;
    {
        const bool branch_taken_0x2842c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2842CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2842C8u;
        // 0x2842cc: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2842c8) {
            ctx->pc = 0x2842D8u;
            goto label_2842d8;
        }
    }
    ctx->pc = 0x2842D0u;
    // 0x2842d0: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2842D0u;
    SET_GPR_U32(ctx, 31, 0x2842D8u);
    ctx->pc = 0x2842D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2842D0u;
    // 0x2842d4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2842D0u, 0x2842D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2842D8u;
label_2842d8:
    // 0x2842d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2842d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2842dc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2842dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2842e0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2842e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2842e4: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x2842e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2842e8: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2842E8u;
    {
        const bool branch_taken_0x2842e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2842e8) {
            ctx->pc = 0x284360u;
            goto label_284360;
        }
    }
    ctx->pc = 0x2842F0u;
    // 0x2842f0: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x2842f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2842f4: 0x0  nop
    ctx->pc = 0x2842f4u;
    // NOP
    // 0x2842f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2842F8u;
    {
        const bool branch_taken_0x2842f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2842FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2842F8u;
        // 0x2842fc: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2842f8) {
            ctx->pc = 0x284308u;
            goto label_284308;
        }
    }
    ctx->pc = 0x284300u;
    // 0x284300: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x284300u;
    SET_GPR_U32(ctx, 31, 0x284308u);
    ctx->pc = 0x284304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284300u;
    // 0x284304: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x284300u, 0x284308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284308u;
label_284308:
    // 0x284308: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x284308u;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
    // 0x28430c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x28430cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x284310: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x284310u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284314: 0x0  nop
    ctx->pc = 0x284314u;
    // NOP
    // 0x284318: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x284318u;
    {
        const bool branch_taken_0x284318 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284318u;
        // 0x28431c: 0x4600cd01  sub.s       $f20, $f25, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[25], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284318) {
            ctx->pc = 0x28432Cu;
            goto label_28432c;
        }
    }
    ctx->pc = 0x284320u;
    // 0x284320: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x284320u;
    SET_GPR_U32(ctx, 31, 0x284328u);
    ctx->pc = 0x284324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284320u;
    // 0x284324: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x284320u, 0x284328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284328u;
label_284328:
    // 0x284328: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x284328u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_28432c:
    // 0x28432c: 0x0  nop
    ctx->pc = 0x28432cu;
    // NOP
    // 0x284330: 0x0  nop
    ctx->pc = 0x284330u;
    // NOP
    // 0x284334: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x284334u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[1];
    // 0x284338: 0xc6020b90  lwc1        $f2, 0xB90($s0)
    ctx->pc = 0x284338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28433c: 0xc7838924  lwc1        $f3, -0x76DC($gp)
    ctx->pc = 0x28433cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x284340: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x284344: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x284344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284348: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x284348u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x28434c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x28434cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x284350: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x284350u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x284354: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x284354u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x284358: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x284358u;
    {
        const bool branch_taken_0x284358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284358u;
        // 0x28435c: 0xe6020b90  swc1        $f2, 0xB90($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2960), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284358) {
            ctx->pc = 0x2843C0u;
            goto label_2843c0;
        }
    }
    ctx->pc = 0x284360u;
label_284360:
    // 0x284360: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x284360u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284364: 0x0  nop
    ctx->pc = 0x284364u;
    // NOP
    // 0x284368: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x284368u;
    {
        const bool branch_taken_0x284368 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284368u;
        // 0x28436c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284368) {
            ctx->pc = 0x284378u;
            goto label_284378;
        }
    }
    ctx->pc = 0x284370u;
    // 0x284370: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x284370u;
    SET_GPR_U32(ctx, 31, 0x284378u);
    ctx->pc = 0x284374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284370u;
    // 0x284374: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x284370u, 0x284378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284378u;
label_284378:
    // 0x284378: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x284378u;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
    // 0x28437c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x28437cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x284380: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x284380u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284384: 0x0  nop
    ctx->pc = 0x284384u;
    // NOP
    // 0x284388: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x284388u;
    {
        const bool branch_taken_0x284388 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284388u;
        // 0x28438c: 0x4600cd01  sub.s       $f20, $f25, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[25], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284388) {
            ctx->pc = 0x28439Cu;
            goto label_28439c;
        }
    }
    ctx->pc = 0x284390u;
    // 0x284390: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x284390u;
    SET_GPR_U32(ctx, 31, 0x284398u);
    ctx->pc = 0x284394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284390u;
    // 0x284394: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x284390u, 0x284398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284398u;
label_284398:
    // 0x284398: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x284398u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_28439c:
    // 0x28439c: 0x0  nop
    ctx->pc = 0x28439cu;
    // NOP
    // 0x2843a0: 0x0  nop
    ctx->pc = 0x2843a0u;
    // NOP
    // 0x2843a4: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x2843a4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[1];
    // 0x2843a8: 0xc7828928  lwc1        $f2, -0x76D8($gp)
    ctx->pc = 0x2843a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2843ac: 0xc6010b90  lwc1        $f1, 0xB90($s0)
    ctx->pc = 0x2843acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2843b0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2843b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2843b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2843b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2843b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2843b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2843bc: 0xe6010b90  swc1        $f1, 0xB90($s0)
    ctx->pc = 0x2843bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2960), bits); }
label_2843c0:
    // 0x2843c0: 0xc780892c  lwc1        $f0, -0x76D4($gp)
    ctx->pc = 0x2843c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2843c4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2843c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2843c8: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x2843c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2843cc: 0x0  nop
    ctx->pc = 0x2843ccu;
    // NOP
    // 0x2843d0: 0x450000f9  bc1f        . + 4 + (0xF9 << 2)
    ctx->pc = 0x2843D0u;
    {
        const bool branch_taken_0x2843d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2843D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2843D0u;
        // 0x2843d4: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2843d0) {
            ctx->pc = 0x2847B8u;
            goto label_2847b8;
        }
    }
    ctx->pc = 0x2843D8u;
    // 0x2843d8: 0xc62c0050  lwc1        $f12, 0x50($s1)
    ctx->pc = 0x2843d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2843dc: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x2843DCu;
    SET_GPR_U32(ctx, 31, 0x2843E4u);
    ctx->pc = 0x2843E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2843DCu;
    // 0x2843e0: 0xc62d004c  lwc1        $f13, 0x4C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x2843DCu, 0x2843E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2843E4u;
label_2843e4:
    // 0x2843e4: 0x3c014282  lui         $at, 0x4282
    ctx->pc = 0x2843e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17026 << 16));
    // 0x2843e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2843e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2843ec: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2843ecu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2843f0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2843f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2843f4: 0x0  nop
    ctx->pc = 0x2843f4u;
    // NOP
    // 0x2843f8: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x2843F8u;
    {
        const bool branch_taken_0x2843f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2843FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2843F8u;
        // 0x2843fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2843f8) {
            ctx->pc = 0x2844C4u;
            goto label_2844c4;
        }
    }
    ctx->pc = 0x284400u;
    // 0x284400: 0xc085608  jal         func_215820
    ctx->pc = 0x284400u;
    SET_GPR_U32(ctx, 31, 0x284408u);
    ctx->pc = 0x284404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284400u;
    // 0x284404: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x284400u, 0x284408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284408u;
label_284408:
    // 0x284408: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284408u;
    {
        const bool branch_taken_0x284408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284408u;
        // 0x28440c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284408) {
            ctx->pc = 0x284420u;
            goto label_284420;
        }
    }
    ctx->pc = 0x284410u;
    // 0x284410: 0xc085608  jal         func_215820
    ctx->pc = 0x284410u;
    SET_GPR_U32(ctx, 31, 0x284418u);
    ctx->pc = 0x284414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284410u;
    // 0x284414: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x284410u, 0x284418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284418u;
label_284418:
    // 0x284418: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x284418u;
    {
        const bool branch_taken_0x284418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284418u;
        // 0x28441c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284418) {
            ctx->pc = 0x284480u;
            goto label_284480;
        }
    }
    ctx->pc = 0x284420u;
label_284420:
    // 0x284420: 0xc085684  jal         func_215A10
    ctx->pc = 0x284420u;
    SET_GPR_U32(ctx, 31, 0x284428u);
    ctx->pc = 0x284424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284420u;
    // 0x284424: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x284420u, 0x284428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284428u;
label_284428:
    // 0x284428: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x284428u;
    {
        const bool branch_taken_0x284428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284428u;
        // 0x28442c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284428) {
            ctx->pc = 0x284450u;
            goto label_284450;
        }
    }
    ctx->pc = 0x284430u;
    // 0x284430: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x284430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x284434: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x284434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x284438: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x284438u;
    {
        const bool branch_taken_0x284438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x284438) {
            ctx->pc = 0x284450u;
            goto label_284450;
        }
    }
    ctx->pc = 0x284440u;
    // 0x284440: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x284440u;
    SET_GPR_U32(ctx, 31, 0x284448u);
    ctx->pc = 0x284444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284440u;
    // 0x284444: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x284440u, 0x284448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284448u;
label_284448:
    // 0x284448: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x284448u;
    {
        const bool branch_taken_0x284448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284448u;
        // 0x28444c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284448) {
            ctx->pc = 0x284480u;
            goto label_284480;
        }
    }
    ctx->pc = 0x284450u;
label_284450:
    // 0x284450: 0xc085684  jal         func_215A10
    ctx->pc = 0x284450u;
    SET_GPR_U32(ctx, 31, 0x284458u);
    ctx->pc = 0x284454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284450u;
    // 0x284454: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x284450u, 0x284458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284458u;
label_284458:
    // 0x284458: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x284458u;
    {
        const bool branch_taken_0x284458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284458u;
        // 0x28445c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284458) {
            ctx->pc = 0x284648u;
            goto label_284648;
        }
    }
    ctx->pc = 0x284460u;
    // 0x284460: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x284460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x284464: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x284464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x284468: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x284468u;
    {
        const bool branch_taken_0x284468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x284468) {
            ctx->pc = 0x284648u;
            goto label_284648;
        }
    }
    ctx->pc = 0x284470u;
    // 0x284470: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x284470u;
    SET_GPR_U32(ctx, 31, 0x284478u);
    ctx->pc = 0x284474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284470u;
    // 0x284474: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x284470u, 0x284478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284478u;
label_284478:
    // 0x284478: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x284478u;
    {
        const bool branch_taken_0x284478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284478u;
        // 0x28447c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284478) {
            ctx->pc = 0x284648u;
            goto label_284648;
        }
    }
    ctx->pc = 0x284480u;
label_284480:
    // 0x284480: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x284480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x284484: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x284484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x284488: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x284488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28448c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28448Cu;
    {
        const bool branch_taken_0x28448c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28448Cu;
        // 0x284490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28448c) {
            ctx->pc = 0x2844ACu;
            goto label_2844ac;
        }
    }
    ctx->pc = 0x284494u;
    // 0x284494: 0xc78c8930  lwc1        $f12, -0x76D0($gp)
    ctx->pc = 0x284494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284498: 0xc78d8934  lwc1        $f13, -0x76CC($gp)
    ctx->pc = 0x284498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28449c: 0xc08535a  jal         func_214D68
    ctx->pc = 0x28449Cu;
    SET_GPR_U32(ctx, 31, 0x2844A4u);
    ctx->pc = 0x2844A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28449Cu;
    // 0x2844a0: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x28449Cu, 0x2844A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844A4u;
label_2844a4:
    // 0x2844a4: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2844A4u;
    {
        const bool branch_taken_0x2844a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2844A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2844A4u;
        // 0x2844a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2844a4) {
            ctx->pc = 0x284648u;
            goto label_284648;
        }
    }
    ctx->pc = 0x2844ACu;
label_2844ac:
    // 0x2844ac: 0xc78c8938  lwc1        $f12, -0x76C8($gp)
    ctx->pc = 0x2844acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2844b0: 0xc78d893c  lwc1        $f13, -0x76C4($gp)
    ctx->pc = 0x2844b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2844b4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2844B4u;
    SET_GPR_U32(ctx, 31, 0x2844BCu);
    ctx->pc = 0x2844B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2844B4u;
    // 0x2844b8: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2844B4u, 0x2844BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844BCu;
label_2844bc:
    // 0x2844bc: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2844BCu;
    {
        const bool branch_taken_0x2844bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2844C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2844BCu;
        // 0x2844c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2844bc) {
            ctx->pc = 0x284648u;
            goto label_284648;
        }
    }
    ctx->pc = 0x2844C4u;
label_2844c4:
    // 0x2844c4: 0x3c01c1c8  lui         $at, 0xC1C8
    ctx->pc = 0x2844c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49608 << 16));
    // 0x2844c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2844c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2844cc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2844ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2844d0: 0x0  nop
    ctx->pc = 0x2844d0u;
    // NOP
    // 0x2844d4: 0x45020032  bc1fl       . + 4 + (0x32 << 2)
    ctx->pc = 0x2844D4u;
    {
        const bool branch_taken_0x2844d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2844d4) {
            ctx->pc = 0x2844D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2844D4u;
            // 0x2844d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2845A0u;
            goto label_2845a0;
        }
    }
    ctx->pc = 0x2844DCu;
    // 0x2844dc: 0xc085608  jal         func_215820
    ctx->pc = 0x2844DCu;
    SET_GPR_U32(ctx, 31, 0x2844E4u);
    ctx->pc = 0x2844E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2844DCu;
    // 0x2844e0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2844DCu, 0x2844E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844E4u;
label_2844e4:
    // 0x2844e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2844E4u;
    {
        const bool branch_taken_0x2844e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2844E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2844E4u;
        // 0x2844e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2844e4) {
            ctx->pc = 0x2844FCu;
            goto label_2844fc;
        }
    }
    ctx->pc = 0x2844ECu;
    // 0x2844ec: 0xc085608  jal         func_215820
    ctx->pc = 0x2844ECu;
    SET_GPR_U32(ctx, 31, 0x2844F4u);
    ctx->pc = 0x2844F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2844ECu;
    // 0x2844f0: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2844ECu, 0x2844F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844F4u;
label_2844f4:
    // 0x2844f4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2844F4u;
    {
        const bool branch_taken_0x2844f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2844F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2844F4u;
        // 0x2844f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2844f4) {
            ctx->pc = 0x28455Cu;
            goto label_28455c;
        }
    }
    ctx->pc = 0x2844FCu;
label_2844fc:
    // 0x2844fc: 0xc085684  jal         func_215A10
    ctx->pc = 0x2844FCu;
    SET_GPR_U32(ctx, 31, 0x284504u);
    ctx->pc = 0x284500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2844FCu;
    // 0x284500: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2844FCu, 0x284504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284504u;
label_284504:
    // 0x284504: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x284504u;
    {
        const bool branch_taken_0x284504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284504u;
        // 0x284508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284504) {
            ctx->pc = 0x28452Cu;
            goto label_28452c;
        }
    }
    ctx->pc = 0x28450Cu;
    // 0x28450c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x28450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x284510: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x284510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x284514: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x284514u;
    {
        const bool branch_taken_0x284514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x284514) {
            ctx->pc = 0x28452Cu;
            goto label_28452c;
        }
    }
    ctx->pc = 0x28451Cu;
    // 0x28451c: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x28451Cu;
    SET_GPR_U32(ctx, 31, 0x284524u);
    ctx->pc = 0x284520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28451Cu;
    // 0x284520: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x28451Cu, 0x284524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284524u;
label_284524:
    // 0x284524: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x284524u;
    {
        const bool branch_taken_0x284524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284524u;
        // 0x284528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284524) {
            ctx->pc = 0x28455Cu;
            goto label_28455c;
        }
    }
    ctx->pc = 0x28452Cu;
label_28452c:
    // 0x28452c: 0xc085684  jal         func_215A10
    ctx->pc = 0x28452Cu;
    SET_GPR_U32(ctx, 31, 0x284534u);
    ctx->pc = 0x284530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28452Cu;
    // 0x284530: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x28452Cu, 0x284534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284534u;
label_284534:
    // 0x284534: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x284534u;
    {
        const bool branch_taken_0x284534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284534u;
        // 0x284538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284534) {
            ctx->pc = 0x284648u;
            goto label_284648;
        }
    }
    ctx->pc = 0x28453Cu;
    // 0x28453c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x28453cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x284540: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x284540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x284544: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x284544u;
    {
        const bool branch_taken_0x284544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x284544) {
            ctx->pc = 0x284648u;
            goto label_284648;
        }
    }
    ctx->pc = 0x28454Cu;
    // 0x28454c: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x28454Cu;
    SET_GPR_U32(ctx, 31, 0x284554u);
    ctx->pc = 0x284550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28454Cu;
    // 0x284550: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x28454Cu, 0x284554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284554u;
label_284554:
    // 0x284554: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x284554u;
    {
        const bool branch_taken_0x284554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284554u;
        // 0x284558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284554) {
            ctx->pc = 0x284648u;
            goto label_284648;
        }
    }
    ctx->pc = 0x28455Cu;
label_28455c:
    // 0x28455c: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x28455cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x284560: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x284560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x284564: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x284564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x284568: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x284568u;
    {
        const bool branch_taken_0x284568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284568u;
        // 0x28456c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284568) {
            ctx->pc = 0x284588u;
            goto label_284588;
        }
    }
    ctx->pc = 0x284570u;
    // 0x284570: 0xc78c8940  lwc1        $f12, -0x76C0($gp)
    ctx->pc = 0x284570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284574: 0xc78d8944  lwc1        $f13, -0x76BC($gp)
    ctx->pc = 0x284574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x284578: 0xc08535a  jal         func_214D68
    ctx->pc = 0x284578u;
    SET_GPR_U32(ctx, 31, 0x284580u);
    ctx->pc = 0x28457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284578u;
    // 0x28457c: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x284578u, 0x284580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284580u;
label_284580:
    // 0x284580: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x284580u;
    {
        const bool branch_taken_0x284580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284580u;
        // 0x284584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284580) {
            ctx->pc = 0x284648u;
            goto label_284648;
        }
    }
    ctx->pc = 0x284588u;
label_284588:
    // 0x284588: 0xc78c8948  lwc1        $f12, -0x76B8($gp)
    ctx->pc = 0x284588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28458c: 0xc78d894c  lwc1        $f13, -0x76B4($gp)
    ctx->pc = 0x28458cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x284590: 0xc08535a  jal         func_214D68
    ctx->pc = 0x284590u;
    SET_GPR_U32(ctx, 31, 0x284598u);
    ctx->pc = 0x284594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284590u;
    // 0x284594: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x284590u, 0x284598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284598u;
label_284598:
    // 0x284598: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x284598u;
    {
        const bool branch_taken_0x284598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284598u;
        // 0x28459c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284598) {
            ctx->pc = 0x284648u;
            goto label_284648;
        }
    }
    ctx->pc = 0x2845A0u;
label_2845a0:
    // 0x2845a0: 0xc085608  jal         func_215820
    ctx->pc = 0x2845A0u;
    SET_GPR_U32(ctx, 31, 0x2845A8u);
    ctx->pc = 0x2845A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2845A0u;
    // 0x2845a4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2845A0u, 0x2845A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2845A8u;
label_2845a8:
    // 0x2845a8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2845A8u;
    {
        const bool branch_taken_0x2845a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2845ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2845A8u;
        // 0x2845ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2845a8) {
            ctx->pc = 0x284648u;
            goto label_284648;
        }
    }
    ctx->pc = 0x2845B0u;
    // 0x2845b0: 0xc085608  jal         func_215820
    ctx->pc = 0x2845B0u;
    SET_GPR_U32(ctx, 31, 0x2845B8u);
    ctx->pc = 0x2845B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2845B0u;
    // 0x2845b4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2845B0u, 0x2845B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2845B8u;
label_2845b8:
    // 0x2845b8: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2845B8u;
    {
        const bool branch_taken_0x2845b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2845BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2845B8u;
        // 0x2845bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2845b8) {
            ctx->pc = 0x284648u;
            goto label_284648;
        }
    }
    ctx->pc = 0x2845C0u;
    // 0x2845c0: 0xc085608  jal         func_215820
    ctx->pc = 0x2845C0u;
    SET_GPR_U32(ctx, 31, 0x2845C8u);
    ctx->pc = 0x2845C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2845C0u;
    // 0x2845c4: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2845C0u, 0x2845C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2845C8u;
label_2845c8:
    // 0x2845c8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2845C8u;
    {
        const bool branch_taken_0x2845c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2845CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2845C8u;
        // 0x2845cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2845c8) {
            ctx->pc = 0x284648u;
            goto label_284648;
        }
    }
    ctx->pc = 0x2845D0u;
    // 0x2845d0: 0xc085608  jal         func_215820
    ctx->pc = 0x2845D0u;
    SET_GPR_U32(ctx, 31, 0x2845D8u);
    ctx->pc = 0x2845D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2845D0u;
    // 0x2845d4: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2845D0u, 0x2845D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2845D8u;
label_2845d8:
    // 0x2845d8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2845D8u;
    {
        const bool branch_taken_0x2845d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2845DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2845D8u;
        // 0x2845dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2845d8) {
            ctx->pc = 0x284648u;
            goto label_284648;
        }
    }
    ctx->pc = 0x2845E0u;
    // 0x2845e0: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x2845e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2845e4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2845e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2845e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2845e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2845ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2845ECu;
    {
        const bool branch_taken_0x2845ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2845ec) {
            ctx->pc = 0x284620u;
            goto label_284620;
        }
    }
    ctx->pc = 0x2845F4u;
    // 0x2845f4: 0xc085608  jal         func_215820
    ctx->pc = 0x2845F4u;
    SET_GPR_U32(ctx, 31, 0x2845FCu);
    ctx->pc = 0x2845F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2845F4u;
    // 0x2845f8: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2845F4u, 0x2845FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2845FCu;
label_2845fc:
    // 0x2845fc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2845FCu;
    {
        const bool branch_taken_0x2845fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2845FCu;
        // 0x284600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2845fc) {
            ctx->pc = 0x284648u;
            goto label_284648;
        }
    }
    ctx->pc = 0x284604u;
    // 0x284604: 0xc78c8950  lwc1        $f12, -0x76B0($gp)
    ctx->pc = 0x284604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284608: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28460c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x28460cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x284610: 0xc08535a  jal         func_214D68
    ctx->pc = 0x284610u;
    SET_GPR_U32(ctx, 31, 0x284618u);
    ctx->pc = 0x284614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284610u;
    // 0x284614: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x284610u, 0x284618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284618u;
label_284618:
    // 0x284618: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x284618u;
    {
        const bool branch_taken_0x284618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284618u;
        // 0x28461c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284618) {
            ctx->pc = 0x284648u;
            goto label_284648;
        }
    }
    ctx->pc = 0x284620u;
label_284620:
    // 0x284620: 0xc085608  jal         func_215820
    ctx->pc = 0x284620u;
    SET_GPR_U32(ctx, 31, 0x284628u);
    ctx->pc = 0x284624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284620u;
    // 0x284624: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x284620u, 0x284628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284628u;
label_284628:
    // 0x284628: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x284628u;
    {
        const bool branch_taken_0x284628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284628u;
        // 0x28462c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284628) {
            ctx->pc = 0x284648u;
            goto label_284648;
        }
    }
    ctx->pc = 0x284630u;
    // 0x284630: 0xc78c8954  lwc1        $f12, -0x76AC($gp)
    ctx->pc = 0x284630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284634: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x284638: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x284638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x28463c: 0xc08535a  jal         func_214D68
    ctx->pc = 0x28463Cu;
    SET_GPR_U32(ctx, 31, 0x284644u);
    ctx->pc = 0x284640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28463Cu;
    // 0x284640: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x28463Cu, 0x284644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284644u;
label_284644:
    // 0x284644: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_284648:
    // 0x284648: 0xc085684  jal         func_215A10
    ctx->pc = 0x284648u;
    SET_GPR_U32(ctx, 31, 0x284650u);
    ctx->pc = 0x28464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284648u;
    // 0x28464c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x284648u, 0x284650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284650u;
label_284650:
    // 0x284650: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284650u;
    {
        const bool branch_taken_0x284650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284650u;
        // 0x284654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284650) {
            ctx->pc = 0x284668u;
            goto label_284668;
        }
    }
    ctx->pc = 0x284658u;
    // 0x284658: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x284658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x28465c: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x28465cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x284660: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x284660u;
    {
        const bool branch_taken_0x284660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x284660) {
            ctx->pc = 0x2846C8u;
            goto label_2846c8;
        }
    }
    ctx->pc = 0x284668u;
label_284668:
    // 0x284668: 0xc085684  jal         func_215A10
    ctx->pc = 0x284668u;
    SET_GPR_U32(ctx, 31, 0x284670u);
    ctx->pc = 0x28466Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284668u;
    // 0x28466c: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x284668u, 0x284670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284670u;
label_284670:
    // 0x284670: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284670u;
    {
        const bool branch_taken_0x284670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284670u;
        // 0x284674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284670) {
            ctx->pc = 0x284688u;
            goto label_284688;
        }
    }
    ctx->pc = 0x284678u;
    // 0x284678: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x284678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x28467c: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x28467cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x284680: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x284680u;
    {
        const bool branch_taken_0x284680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x284680) {
            ctx->pc = 0x2846C8u;
            goto label_2846c8;
        }
    }
    ctx->pc = 0x284688u;
label_284688:
    // 0x284688: 0xc085684  jal         func_215A10
    ctx->pc = 0x284688u;
    SET_GPR_U32(ctx, 31, 0x284690u);
    ctx->pc = 0x28468Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284688u;
    // 0x28468c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x284688u, 0x284690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284690u;
label_284690:
    // 0x284690: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284690u;
    {
        const bool branch_taken_0x284690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284690u;
        // 0x284694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284690) {
            ctx->pc = 0x2846A8u;
            goto label_2846a8;
        }
    }
    ctx->pc = 0x284698u;
    // 0x284698: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x284698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x28469c: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x28469cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2846a0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2846A0u;
    {
        const bool branch_taken_0x2846a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2846a0) {
            ctx->pc = 0x2846C8u;
            goto label_2846c8;
        }
    }
    ctx->pc = 0x2846A8u;
label_2846a8:
    // 0x2846a8: 0xc085684  jal         func_215A10
    ctx->pc = 0x2846A8u;
    SET_GPR_U32(ctx, 31, 0x2846B0u);
    ctx->pc = 0x2846ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2846A8u;
    // 0x2846ac: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2846A8u, 0x2846B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846B0u;
label_2846b0:
    // 0x2846b0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2846B0u;
    {
        const bool branch_taken_0x2846b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2846B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846B0u;
        // 0x2846b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2846b0) {
            ctx->pc = 0x284770u;
            goto label_284770;
        }
    }
    ctx->pc = 0x2846B8u;
    // 0x2846b8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2846b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2846bc: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2846bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2846c0: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2846C0u;
    {
        const bool branch_taken_0x2846c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2846c0) {
            ctx->pc = 0x284770u;
            goto label_284770;
        }
    }
    ctx->pc = 0x2846C8u;
label_2846c8:
    // 0x2846c8: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2846C8u;
    SET_GPR_U32(ctx, 31, 0x2846D0u);
    ctx->pc = 0x2846CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2846C8u;
    // 0x2846cc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2846C8u, 0x2846D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846D0u;
label_2846d0:
    // 0x2846d0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2846D0u;
    {
        const bool branch_taken_0x2846d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2846D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846D0u;
        // 0x2846d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2846d0) {
            ctx->pc = 0x284770u;
            goto label_284770;
        }
    }
    ctx->pc = 0x2846D8u;
    // 0x2846d8: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2846D8u;
    SET_GPR_U32(ctx, 31, 0x2846E0u);
    ctx->pc = 0x2846DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2846D8u;
    // 0x2846dc: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2846D8u, 0x2846E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846E0u;
label_2846e0:
    // 0x2846e0: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2846E0u;
    {
        const bool branch_taken_0x2846e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2846E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846E0u;
        // 0x2846e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2846e0) {
            ctx->pc = 0x284770u;
            goto label_284770;
        }
    }
    ctx->pc = 0x2846E8u;
    // 0x2846e8: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2846E8u;
    SET_GPR_U32(ctx, 31, 0x2846F0u);
    ctx->pc = 0x2846ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2846E8u;
    // 0x2846ec: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2846E8u, 0x2846F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846F0u;
label_2846f0:
    // 0x2846f0: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2846F0u;
    {
        const bool branch_taken_0x2846f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2846F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846F0u;
        // 0x2846f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2846f0) {
            ctx->pc = 0x284770u;
            goto label_284770;
        }
    }
    ctx->pc = 0x2846F8u;
    // 0x2846f8: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2846F8u;
    SET_GPR_U32(ctx, 31, 0x284700u);
    ctx->pc = 0x2846FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2846F8u;
    // 0x2846fc: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2846F8u, 0x284700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284700u;
label_284700:
    // 0x284700: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x284700u;
    {
        const bool branch_taken_0x284700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284700u;
        // 0x284704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284700) {
            ctx->pc = 0x284770u;
            goto label_284770;
        }
    }
    ctx->pc = 0x284708u;
    // 0x284708: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x284708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x28470c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x28470cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x284710: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x284710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x284714: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x284714u;
    {
        const bool branch_taken_0x284714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284714) {
            ctx->pc = 0x284748u;
            goto label_284748;
        }
    }
    ctx->pc = 0x28471Cu;
    // 0x28471c: 0xc085608  jal         func_215820
    ctx->pc = 0x28471Cu;
    SET_GPR_U32(ctx, 31, 0x284724u);
    ctx->pc = 0x284720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28471Cu;
    // 0x284720: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x28471Cu, 0x284724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284724u;
label_284724:
    // 0x284724: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x284724u;
    {
        const bool branch_taken_0x284724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284724u;
        // 0x284728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284724) {
            ctx->pc = 0x284770u;
            goto label_284770;
        }
    }
    ctx->pc = 0x28472Cu;
    // 0x28472c: 0xc78c8958  lwc1        $f12, -0x76A8($gp)
    ctx->pc = 0x28472cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284730: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x284734: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x284734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x284738: 0xc08535a  jal         func_214D68
    ctx->pc = 0x284738u;
    SET_GPR_U32(ctx, 31, 0x284740u);
    ctx->pc = 0x28473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284738u;
    // 0x28473c: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x284738u, 0x284740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284740u;
label_284740:
    // 0x284740: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x284740u;
    {
        const bool branch_taken_0x284740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284740u;
        // 0x284744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284740) {
            ctx->pc = 0x284770u;
            goto label_284770;
        }
    }
    ctx->pc = 0x284748u;
label_284748:
    // 0x284748: 0xc085608  jal         func_215820
    ctx->pc = 0x284748u;
    SET_GPR_U32(ctx, 31, 0x284750u);
    ctx->pc = 0x28474Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284748u;
    // 0x28474c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x284748u, 0x284750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284750u;
label_284750:
    // 0x284750: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x284750u;
    {
        const bool branch_taken_0x284750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284750u;
        // 0x284754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284750) {
            ctx->pc = 0x284770u;
            goto label_284770;
        }
    }
    ctx->pc = 0x284758u;
    // 0x284758: 0xc78c895c  lwc1        $f12, -0x76A4($gp)
    ctx->pc = 0x284758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28475c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28475cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x284760: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x284760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x284764: 0xc08535a  jal         func_214D68
    ctx->pc = 0x284764u;
    SET_GPR_U32(ctx, 31, 0x28476Cu);
    ctx->pc = 0x284768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284764u;
    // 0x284768: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x284764u, 0x28476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28476Cu;
label_28476c:
    // 0x28476c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28476cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_284770:
    // 0x284770: 0xc085608  jal         func_215820
    ctx->pc = 0x284770u;
    SET_GPR_U32(ctx, 31, 0x284778u);
    ctx->pc = 0x284774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284770u;
    // 0x284774: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x284770u, 0x284778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284778u;
label_284778:
    // 0x284778: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x284778u;
    {
        const bool branch_taken_0x284778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284778) {
            ctx->pc = 0x28477Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284778u;
            // 0x28477c: 0xc60c0b90  lwc1        $f12, 0xB90($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x284798u;
            goto label_284798;
        }
    }
    ctx->pc = 0x284780u;
    // 0x284780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284784: 0xc085608  jal         func_215820
    ctx->pc = 0x284784u;
    SET_GPR_U32(ctx, 31, 0x28478Cu);
    ctx->pc = 0x284788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284784u;
    // 0x284788: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x284784u, 0x28478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28478Cu;
label_28478c:
    // 0x28478c: 0x1040019b  beqz        $v0, . + 4 + (0x19B << 2)
    ctx->pc = 0x28478Cu;
    {
        const bool branch_taken_0x28478c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28478Cu;
        // 0x284790: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28478c) {
            ctx->pc = 0x284DFCu;
            goto label_284dfc;
        }
    }
    ctx->pc = 0x284794u;
    // 0x284794: 0xc60c0b90  lwc1        $f12, 0xB90($s0)
    ctx->pc = 0x284794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_284798:
    // 0x284798: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28479c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28479cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2847a0: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2847a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x2847a4: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2847a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2847a8: 0xc0856c8  jal         func_215B20
    ctx->pc = 0x2847A8u;
    SET_GPR_U32(ctx, 31, 0x2847B0u);
    ctx->pc = 0x2847ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2847A8u;
    // 0x2847ac: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B20u, 0x2847A8u, 0x2847B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847B0u;
label_2847b0:
    // 0x2847b0: 0x10000192  b           . + 4 + (0x192 << 2)
    ctx->pc = 0x2847B0u;
    {
        const bool branch_taken_0x2847b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2847B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2847B0u;
        // 0x2847b4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2847b0) {
            ctx->pc = 0x284DFCu;
            goto label_284dfc;
        }
    }
    ctx->pc = 0x2847B8u;
label_2847b8:
    // 0x2847b8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2847B8u;
    SET_GPR_U32(ctx, 31, 0x2847C0u);
    ctx->pc = 0x2847BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2847B8u;
    // 0x2847bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2847B8u, 0x2847C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847C0u;
label_2847c0:
    // 0x2847c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2847c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2847c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2847c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2847c8: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2847C8u;
    SET_GPR_U32(ctx, 31, 0x2847D0u);
    ctx->pc = 0x2847CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2847C8u;
    // 0x2847cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2847C8u, 0x2847D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847D0u;
label_2847d0:
    // 0x2847d0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2847D0u;
    {
        const bool branch_taken_0x2847d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2847D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2847D0u;
        // 0x2847d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2847d0) {
            ctx->pc = 0x2847E4u;
            goto label_2847e4;
        }
    }
    ctx->pc = 0x2847D8u;
    // 0x2847d8: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2847D8u;
    SET_GPR_U32(ctx, 31, 0x2847E0u);
    ctx->pc = 0x2847DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2847D8u;
    // 0x2847dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2847D8u, 0x2847E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847E0u;
label_2847e0:
    // 0x2847e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2847e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2847e4:
    // 0x2847e4: 0xc78c8960  lwc1        $f12, -0x76A0($gp)
    ctx->pc = 0x2847e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2847e8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2847E8u;
    SET_GPR_U32(ctx, 31, 0x2847F0u);
    ctx->pc = 0x2847ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2847E8u;
    // 0x2847ec: 0x460cc302  mul.s       $f12, $f24, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[24], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2847E8u, 0x2847F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847F0u;
label_2847f0:
    // 0x2847f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2847f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2847f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2847f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2847f8: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2847F8u;
    SET_GPR_U32(ctx, 31, 0x284800u);
    ctx->pc = 0x2847FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2847F8u;
    // 0x2847fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2847F8u, 0x284800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284800u;
label_284800:
    // 0x284800: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x284800u;
    {
        const bool branch_taken_0x284800 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x284804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284800u;
        // 0x284804: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284800) {
            ctx->pc = 0x28481Cu;
            goto label_28481c;
        }
    }
    ctx->pc = 0x284808u;
    // 0x284808: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28480c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x28480Cu;
    SET_GPR_U32(ctx, 31, 0x284814u);
    ctx->pc = 0x284810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28480Cu;
    // 0x284810: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x28480Cu, 0x284814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284814u;
label_284814:
    // 0x284814: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x284814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284818: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x284818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28481c:
    // 0x28481c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x28481Cu;
    SET_GPR_U32(ctx, 31, 0x284824u);
    ctx->pc = 0x284820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28481Cu;
    // 0x284820: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x28481Cu, 0x284824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284824u;
label_284824:
    // 0x284824: 0x18400096  blez        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x284824u;
    {
        const bool branch_taken_0x284824 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x284824) {
            ctx->pc = 0x284A80u;
            goto label_284a80;
        }
    }
    ctx->pc = 0x28482Cu;
    // 0x28482c: 0x4600c307  neg.s       $f12, $f24
    ctx->pc = 0x28482cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[24]);
    // 0x284830: 0x0  nop
    ctx->pc = 0x284830u;
    // NOP
    // 0x284834: 0x0  nop
    ctx->pc = 0x284834u;
    // NOP
    // 0x284838: 0x46176303  div.s       $f12, $f12, $f23
    ctx->pc = 0x284838u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[23];
    // 0x28483c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x28483Cu;
    SET_GPR_U32(ctx, 31, 0x284844u);
    ctx->pc = 0x284840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28483Cu;
    // 0x284840: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28483Cu, 0x284844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284844u;
label_284844:
    // 0x284844: 0xc0b5aea  jal         func_2D6BA8
    ctx->pc = 0x284844u;
    SET_GPR_U32(ctx, 31, 0x28484Cu);
    ctx->pc = 0x284848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284844u;
    // 0x284848: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6BA8u, 0x284844u, 0x28484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28484Cu;
label_28484c:
    // 0x28484c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x28484cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x284850: 0xdc258830  ld          $a1, -0x77D0($at)
    ctx->pc = 0x284850u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A8830u));
    // 0x284854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x284854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284858: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x284858u;
    SET_GPR_U32(ctx, 31, 0x284860u);
    ctx->pc = 0x28485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284858u;
    // 0x28485c: 0x8f90b234  lw          $s0, -0x4DCC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x284858u, 0x284860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284860u;
label_284860:
    // 0x284860: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x284860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x284864: 0xdc258838  ld          $a1, -0x77C8($at)
    ctx->pc = 0x284864u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A8838u));
    // 0x284868: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x284868u;
    SET_GPR_U32(ctx, 31, 0x284870u);
    ctx->pc = 0x28486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284868u;
    // 0x28486c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x284868u, 0x284870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284870u;
label_284870:
    // 0x284870: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x284870u;
    SET_GPR_U32(ctx, 31, 0x284878u);
    ctx->pc = 0x284874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284870u;
    // 0x284874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x284870u, 0x284878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284878u;
label_284878:
    // 0x284878: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x284878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x28487c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28487cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284880: 0x4617a034  c.lt.s      $f20, $f23
    ctx->pc = 0x284880u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284884: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x284884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284888: 0xe6210050  swc1        $f1, 0x50($s1)
    ctx->pc = 0x284888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x28488c: 0xc4400114  lwc1        $f0, 0x114($v0)
    ctx->pc = 0x28488cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284890: 0xc44100e0  lwc1        $f1, 0xE0($v0)
    ctx->pc = 0x284890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284894: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x284894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x284898: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x284898u;
    {
        const bool branch_taken_0x284898 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284898u;
        // 0x28489c: 0xe6200054  swc1        $f0, 0x54($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284898) {
            ctx->pc = 0x284990u;
            goto label_284990;
        }
    }
    ctx->pc = 0x2848A0u;
    // 0x2848a0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2848a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2848a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2848a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2848a8: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x2848a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2848ac: 0x0  nop
    ctx->pc = 0x2848acu;
    // NOP
    // 0x2848b0: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x2848B0u;
    {
        const bool branch_taken_0x2848b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2848B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848B0u;
        // 0x2848b4: 0x8c420014  lw          $v0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848b0) {
            ctx->pc = 0x284924u;
            goto label_284924;
        }
    }
    ctx->pc = 0x2848B8u;
    // 0x2848b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2848b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2848bc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2848BCu;
    {
        const bool branch_taken_0x2848bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2848C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848BCu;
        // 0x2848c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848bc) {
            ctx->pc = 0x2848F4u;
            goto label_2848f4;
        }
    }
    ctx->pc = 0x2848C4u;
    // 0x2848c4: 0xc085608  jal         func_215820
    ctx->pc = 0x2848C4u;
    SET_GPR_U32(ctx, 31, 0x2848CCu);
    ctx->pc = 0x2848C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2848C4u;
    // 0x2848c8: 0x24050072  addiu       $a1, $zero, 0x72 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2848C4u, 0x2848CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848CCu;
label_2848cc:
    // 0x2848cc: 0x1440011b  bnez        $v0, . + 4 + (0x11B << 2)
    ctx->pc = 0x2848CCu;
    {
        const bool branch_taken_0x2848cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2848D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848CCu;
        // 0x2848d0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848cc) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x2848D4u;
    // 0x2848d4: 0xc78c8964  lwc1        $f12, -0x769C($gp)
    ctx->pc = 0x2848d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2848d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2848d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2848dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2848dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2848e0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2848e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2848e4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2848E4u;
    SET_GPR_U32(ctx, 31, 0x2848ECu);
    ctx->pc = 0x2848E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2848E4u;
    // 0x2848e8: 0x24050072  addiu       $a1, $zero, 0x72 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2848E4u, 0x2848ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848ECu;
label_2848ec:
    // 0x2848ec: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x2848ECu;
    {
        const bool branch_taken_0x2848ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2848F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848ECu;
        // 0x2848f0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848ec) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x2848F4u;
label_2848f4:
    // 0x2848f4: 0xc085608  jal         func_215820
    ctx->pc = 0x2848F4u;
    SET_GPR_U32(ctx, 31, 0x2848FCu);
    ctx->pc = 0x2848F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2848F4u;
    // 0x2848f8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2848F4u, 0x2848FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848FCu;
label_2848fc:
    // 0x2848fc: 0x1440010f  bnez        $v0, . + 4 + (0x10F << 2)
    ctx->pc = 0x2848FCu;
    {
        const bool branch_taken_0x2848fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848FCu;
        // 0x284900: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848fc) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284904u;
    // 0x284904: 0xc78c8968  lwc1        $f12, -0x7698($gp)
    ctx->pc = 0x284904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28490c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28490cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x284910: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x284910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x284914: 0xc08535a  jal         func_214D68
    ctx->pc = 0x284914u;
    SET_GPR_U32(ctx, 31, 0x28491Cu);
    ctx->pc = 0x284918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284914u;
    // 0x284918: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x284914u, 0x28491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28491Cu;
label_28491c:
    // 0x28491c: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x28491Cu;
    {
        const bool branch_taken_0x28491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28491Cu;
        // 0x284920: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28491c) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284924u;
label_284924:
    // 0x284924: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x284924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x284928: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x284928u;
    {
        const bool branch_taken_0x284928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284928u;
        // 0x28492c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284928) {
            ctx->pc = 0x284960u;
            goto label_284960;
        }
    }
    ctx->pc = 0x284930u;
    // 0x284930: 0xc085608  jal         func_215820
    ctx->pc = 0x284930u;
    SET_GPR_U32(ctx, 31, 0x284938u);
    ctx->pc = 0x284934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284930u;
    // 0x284934: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x284930u, 0x284938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284938u;
label_284938:
    // 0x284938: 0x14400100  bnez        $v0, . + 4 + (0x100 << 2)
    ctx->pc = 0x284938u;
    {
        const bool branch_taken_0x284938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284938u;
        // 0x28493c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284938) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284940u;
    // 0x284940: 0xc78c896c  lwc1        $f12, -0x7694($gp)
    ctx->pc = 0x284940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284948: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28494c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x28494cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x284950: 0xc08535a  jal         func_214D68
    ctx->pc = 0x284950u;
    SET_GPR_U32(ctx, 31, 0x284958u);
    ctx->pc = 0x284954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284950u;
    // 0x284954: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x284950u, 0x284958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284958u;
label_284958:
    // 0x284958: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x284958u;
    {
        const bool branch_taken_0x284958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284958u;
        // 0x28495c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284958) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284960u;
label_284960:
    // 0x284960: 0xc085608  jal         func_215820
    ctx->pc = 0x284960u;
    SET_GPR_U32(ctx, 31, 0x284968u);
    ctx->pc = 0x284964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284960u;
    // 0x284964: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x284960u, 0x284968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284968u;
label_284968:
    // 0x284968: 0x144000f4  bnez        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x284968u;
    {
        const bool branch_taken_0x284968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284968u;
        // 0x28496c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284968) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284970u;
    // 0x284970: 0xc78c8970  lwc1        $f12, -0x7690($gp)
    ctx->pc = 0x284970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284978: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28497c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x28497cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x284980: 0xc08535a  jal         func_214D68
    ctx->pc = 0x284980u;
    SET_GPR_U32(ctx, 31, 0x284988u);
    ctx->pc = 0x284984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284980u;
    // 0x284984: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x284980u, 0x284988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284988u;
label_284988:
    // 0x284988: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x284988u;
    {
        const bool branch_taken_0x284988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284988u;
        // 0x28498c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284988) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284990u;
label_284990:
    // 0x284990: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x284990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x284994: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x284994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284998: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x284998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28499c: 0x0  nop
    ctx->pc = 0x28499cu;
    // NOP
    // 0x2849a0: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x2849A0u;
    {
        const bool branch_taken_0x2849a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2849A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2849A0u;
        // 0x2849a4: 0x8c420014  lw          $v0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2849a0) {
            ctx->pc = 0x284A14u;
            goto label_284a14;
        }
    }
    ctx->pc = 0x2849A8u;
    // 0x2849a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2849a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2849ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2849ACu;
    {
        const bool branch_taken_0x2849ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2849B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2849ACu;
        // 0x2849b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2849ac) {
            ctx->pc = 0x2849E4u;
            goto label_2849e4;
        }
    }
    ctx->pc = 0x2849B4u;
    // 0x2849b4: 0xc085608  jal         func_215820
    ctx->pc = 0x2849B4u;
    SET_GPR_U32(ctx, 31, 0x2849BCu);
    ctx->pc = 0x2849B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2849B4u;
    // 0x2849b8: 0x24050073  addiu       $a1, $zero, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2849B4u, 0x2849BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2849BCu;
label_2849bc:
    // 0x2849bc: 0x144000df  bnez        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x2849BCu;
    {
        const bool branch_taken_0x2849bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2849C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2849BCu;
        // 0x2849c0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2849bc) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x2849C4u;
    // 0x2849c4: 0xc78c8974  lwc1        $f12, -0x768C($gp)
    ctx->pc = 0x2849c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2849c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2849c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2849cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2849ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2849d0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2849d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2849d4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2849D4u;
    SET_GPR_U32(ctx, 31, 0x2849DCu);
    ctx->pc = 0x2849D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2849D4u;
    // 0x2849d8: 0x24050073  addiu       $a1, $zero, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2849D4u, 0x2849DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2849DCu;
label_2849dc:
    // 0x2849dc: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x2849DCu;
    {
        const bool branch_taken_0x2849dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2849E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2849DCu;
        // 0x2849e0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2849dc) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x2849E4u;
label_2849e4:
    // 0x2849e4: 0xc085608  jal         func_215820
    ctx->pc = 0x2849E4u;
    SET_GPR_U32(ctx, 31, 0x2849ECu);
    ctx->pc = 0x2849E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2849E4u;
    // 0x2849e8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2849E4u, 0x2849ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2849ECu;
label_2849ec:
    // 0x2849ec: 0x144000d3  bnez        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x2849ECu;
    {
        const bool branch_taken_0x2849ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2849F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2849ECu;
        // 0x2849f0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2849ec) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x2849F4u;
    // 0x2849f4: 0xc78c8978  lwc1        $f12, -0x7688($gp)
    ctx->pc = 0x2849f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2849f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2849f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2849fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2849fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x284a00: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x284a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x284a04: 0xc08535a  jal         func_214D68
    ctx->pc = 0x284A04u;
    SET_GPR_U32(ctx, 31, 0x284A0Cu);
    ctx->pc = 0x284A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A04u;
    // 0x284a08: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x284A04u, 0x284A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A0Cu;
label_284a0c:
    // 0x284a0c: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x284A0Cu;
    {
        const bool branch_taken_0x284a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A0Cu;
        // 0x284a10: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a0c) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284A14u;
label_284a14:
    // 0x284a14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x284a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x284a18: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x284A18u;
    {
        const bool branch_taken_0x284a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A18u;
        // 0x284a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a18) {
            ctx->pc = 0x284A50u;
            goto label_284a50;
        }
    }
    ctx->pc = 0x284A20u;
    // 0x284a20: 0xc085608  jal         func_215820
    ctx->pc = 0x284A20u;
    SET_GPR_U32(ctx, 31, 0x284A28u);
    ctx->pc = 0x284A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A20u;
    // 0x284a24: 0x24050079  addiu       $a1, $zero, 0x79 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x284A20u, 0x284A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A28u;
label_284a28:
    // 0x284a28: 0x144000c4  bnez        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x284A28u;
    {
        const bool branch_taken_0x284a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A28u;
        // 0x284a2c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a28) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284A30u;
    // 0x284a30: 0xc78c897c  lwc1        $f12, -0x7684($gp)
    ctx->pc = 0x284a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284a34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284a38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x284a3c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x284a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x284a40: 0xc08535a  jal         func_214D68
    ctx->pc = 0x284A40u;
    SET_GPR_U32(ctx, 31, 0x284A48u);
    ctx->pc = 0x284A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A40u;
    // 0x284a44: 0x24050079  addiu       $a1, $zero, 0x79 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x284A40u, 0x284A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A48u;
label_284a48:
    // 0x284a48: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x284A48u;
    {
        const bool branch_taken_0x284a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A48u;
        // 0x284a4c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a48) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284A50u;
label_284a50:
    // 0x284a50: 0xc085608  jal         func_215820
    ctx->pc = 0x284A50u;
    SET_GPR_U32(ctx, 31, 0x284A58u);
    ctx->pc = 0x284A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A50u;
    // 0x284a54: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x284A50u, 0x284A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A58u;
label_284a58:
    // 0x284a58: 0x144000b8  bnez        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x284A58u;
    {
        const bool branch_taken_0x284a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A58u;
        // 0x284a5c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a58) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284A60u;
    // 0x284a60: 0xc78c8980  lwc1        $f12, -0x7680($gp)
    ctx->pc = 0x284a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284a64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284a68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x284a6c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x284a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x284a70: 0xc08535a  jal         func_214D68
    ctx->pc = 0x284A70u;
    SET_GPR_U32(ctx, 31, 0x284A78u);
    ctx->pc = 0x284A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A70u;
    // 0x284a74: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x284A70u, 0x284A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A78u;
label_284a78:
    // 0x284a78: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x284A78u;
    {
        const bool branch_taken_0x284a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A78u;
        // 0x284a7c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a78) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284A80u;
label_284a80:
    // 0x284a80: 0x4614b832  c.eq.s      $f23, $f20
    ctx->pc = 0x284a80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284a84: 0x0  nop
    ctx->pc = 0x284a84u;
    // NOP
    // 0x284a88: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x284A88u;
    {
        const bool branch_taken_0x284a88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x284A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A88u;
        // 0x284a8c: 0x8f90b234  lw          $s0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a88) {
            ctx->pc = 0x284B34u;
            goto label_284b34;
        }
    }
    ctx->pc = 0x284A90u;
    // 0x284a90: 0x4600c307  neg.s       $f12, $f24
    ctx->pc = 0x284a90u;
    ctx->f[12] = FPU_NEG_S(ctx->f[24]);
    // 0x284a94: 0x0  nop
    ctx->pc = 0x284a94u;
    // NOP
    // 0x284a98: 0x0  nop
    ctx->pc = 0x284a98u;
    // NOP
    // 0x284a9c: 0x46176303  div.s       $f12, $f12, $f23
    ctx->pc = 0x284a9cu;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[23];
    // 0x284aa0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x284AA0u;
    SET_GPR_U32(ctx, 31, 0x284AA8u);
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x284AA0u, 0x284AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284AA8u;
label_284aa8:
    // 0x284aa8: 0xc0b5aea  jal         func_2D6BA8
    ctx->pc = 0x284AA8u;
    SET_GPR_U32(ctx, 31, 0x284AB0u);
    ctx->pc = 0x284AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284AA8u;
    // 0x284aac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6BA8u, 0x284AA8u, 0x284AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284AB0u;
label_284ab0:
    // 0x284ab0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x284ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x284ab4: 0xdc258840  ld          $a1, -0x77C0($at)
    ctx->pc = 0x284ab4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A8840u));
    // 0x284ab8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x284ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284abc: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x284ABCu;
    SET_GPR_U32(ctx, 31, 0x284AC4u);
    ctx->pc = 0x284AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284ABCu;
    // 0x284ac0: 0x8f90b234  lw          $s0, -0x4DCC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x284ABCu, 0x284AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284AC4u;
label_284ac4:
    // 0x284ac4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x284ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x284ac8: 0xdc258848  ld          $a1, -0x77B8($at)
    ctx->pc = 0x284ac8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A8848u));
    // 0x284acc: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x284ACCu;
    SET_GPR_U32(ctx, 31, 0x284AD4u);
    ctx->pc = 0x284AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284ACCu;
    // 0x284ad0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x284ACCu, 0x284AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284AD4u;
label_284ad4:
    // 0x284ad4: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x284AD4u;
    SET_GPR_U32(ctx, 31, 0x284ADCu);
    ctx->pc = 0x284AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284AD4u;
    // 0x284ad8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x284AD4u, 0x284ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284ADCu;
label_284adc:
    // 0x284adc: 0x4614b834  c.lt.s      $f23, $f20
    ctx->pc = 0x284adcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284ae0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x284ae0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x284ae4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x284AE4u;
    {
        const bool branch_taken_0x284ae4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x284AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284AE4u;
        // 0x284ae8: 0xe60100e0  swc1        $f1, 0xE0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284ae4) {
            ctx->pc = 0x284B00u;
            goto label_284b00;
        }
    }
    ctx->pc = 0x284AECu;
    // 0x284aec: 0x4618a034  c.lt.s      $f20, $f24
    ctx->pc = 0x284aecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284af0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x284AF0u;
    {
        const bool branch_taken_0x284af0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x284af0) {
            ctx->pc = 0x284B20u;
            goto label_284b20;
        }
    }
    ctx->pc = 0x284AF8u;
    // 0x284af8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x284AF8u;
    {
        const bool branch_taken_0x284af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284af8) {
            ctx->pc = 0x284B0Cu;
            goto label_284b0c;
        }
    }
    ctx->pc = 0x284B00u;
label_284b00:
    // 0x284b00: 0x4618a034  c.lt.s      $f20, $f24
    ctx->pc = 0x284b00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284b04: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x284B04u;
    {
        const bool branch_taken_0x284b04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x284b04) {
            ctx->pc = 0x284B20u;
            goto label_284b20;
        }
    }
    ctx->pc = 0x284B0Cu;
label_284b0c:
    // 0x284b0c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x284b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x284b10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x284b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284b14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x284b14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x284b18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x284B18u;
    {
        const bool branch_taken_0x284b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B18u;
        // 0x284b1c: 0xe60000e0  swc1        $f0, 0xE0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b18) {
            ctx->pc = 0x284B38u;
            goto label_284b38;
        }
    }
    ctx->pc = 0x284B20u;
label_284b20:
    // 0x284b20: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x284b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x284b24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x284b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284b28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x284b28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x284b2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x284B2Cu;
    {
        const bool branch_taken_0x284b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B2Cu;
        // 0x284b30: 0xe60000e0  swc1        $f0, 0xE0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b2c) {
            ctx->pc = 0x284B38u;
            goto label_284b38;
        }
    }
    ctx->pc = 0x284B34u;
label_284b34:
    // 0x284b34: 0xe61400e0  swc1        $f20, 0xE0($s0)
    ctx->pc = 0x284b34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_284b38:
    // 0x284b38: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x284b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284b3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x284b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284b40: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x284b40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x284b44: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x284b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x284b48: 0x46180834  c.lt.s      $f1, $f24
    ctx->pc = 0x284b48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284b4c: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x284b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284b50: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x284b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284b54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x284b54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x284b58: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x284B58u;
    {
        const bool branch_taken_0x284b58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x284B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B58u;
        // 0x284b5c: 0xe6200054  swc1        $f0, 0x54($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b58) {
            ctx->pc = 0x284C50u;
            goto label_284c50;
        }
    }
    ctx->pc = 0x284B60u;
    // 0x284b60: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x284b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x284b64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x284b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284b68: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x284b68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284b6c: 0x0  nop
    ctx->pc = 0x284b6cu;
    // NOP
    // 0x284b70: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x284B70u;
    {
        const bool branch_taken_0x284b70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x284B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B70u;
        // 0x284b74: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b70) {
            ctx->pc = 0x284BE4u;
            goto label_284be4;
        }
    }
    ctx->pc = 0x284B78u;
    // 0x284b78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x284b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x284b7c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x284B7Cu;
    {
        const bool branch_taken_0x284b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B7Cu;
        // 0x284b80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b7c) {
            ctx->pc = 0x284BB4u;
            goto label_284bb4;
        }
    }
    ctx->pc = 0x284B84u;
    // 0x284b84: 0xc085608  jal         func_215820
    ctx->pc = 0x284B84u;
    SET_GPR_U32(ctx, 31, 0x284B8Cu);
    ctx->pc = 0x284B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284B84u;
    // 0x284b88: 0x24050077  addiu       $a1, $zero, 0x77 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x284B84u, 0x284B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B8Cu;
label_284b8c:
    // 0x284b8c: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x284B8Cu;
    {
        const bool branch_taken_0x284b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B8Cu;
        // 0x284b90: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b8c) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284B94u;
    // 0x284b94: 0xc78c8984  lwc1        $f12, -0x767C($gp)
    ctx->pc = 0x284b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284b9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x284ba0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x284ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x284ba4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x284BA4u;
    SET_GPR_U32(ctx, 31, 0x284BACu);
    ctx->pc = 0x284BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284BA4u;
    // 0x284ba8: 0x24050077  addiu       $a1, $zero, 0x77 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x284BA4u, 0x284BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BACu;
label_284bac:
    // 0x284bac: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x284BACu;
    {
        const bool branch_taken_0x284bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BACu;
        // 0x284bb0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284bac) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284BB4u;
label_284bb4:
    // 0x284bb4: 0xc085608  jal         func_215820
    ctx->pc = 0x284BB4u;
    SET_GPR_U32(ctx, 31, 0x284BBCu);
    ctx->pc = 0x284BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284BB4u;
    // 0x284bb8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x284BB4u, 0x284BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BBCu;
label_284bbc:
    // 0x284bbc: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x284BBCu;
    {
        const bool branch_taken_0x284bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BBCu;
        // 0x284bc0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284bbc) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284BC4u;
    // 0x284bc4: 0xc78c8988  lwc1        $f12, -0x7678($gp)
    ctx->pc = 0x284bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284bcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x284bd0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x284bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x284bd4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x284BD4u;
    SET_GPR_U32(ctx, 31, 0x284BDCu);
    ctx->pc = 0x284BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284BD4u;
    // 0x284bd8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x284BD4u, 0x284BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BDCu;
label_284bdc:
    // 0x284bdc: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x284BDCu;
    {
        const bool branch_taken_0x284bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BDCu;
        // 0x284be0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284bdc) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284BE4u;
label_284be4:
    // 0x284be4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x284be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x284be8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x284BE8u;
    {
        const bool branch_taken_0x284be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BE8u;
        // 0x284bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284be8) {
            ctx->pc = 0x284C20u;
            goto label_284c20;
        }
    }
    ctx->pc = 0x284BF0u;
    // 0x284bf0: 0xc085608  jal         func_215820
    ctx->pc = 0x284BF0u;
    SET_GPR_U32(ctx, 31, 0x284BF8u);
    ctx->pc = 0x284BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284BF0u;
    // 0x284bf4: 0x24050075  addiu       $a1, $zero, 0x75 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x284BF0u, 0x284BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BF8u;
label_284bf8:
    // 0x284bf8: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x284BF8u;
    {
        const bool branch_taken_0x284bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BF8u;
        // 0x284bfc: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284bf8) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284C00u;
    // 0x284c00: 0xc78c898c  lwc1        $f12, -0x7674($gp)
    ctx->pc = 0x284c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284c04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284c08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x284c0c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x284c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x284c10: 0xc08535a  jal         func_214D68
    ctx->pc = 0x284C10u;
    SET_GPR_U32(ctx, 31, 0x284C18u);
    ctx->pc = 0x284C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C10u;
    // 0x284c14: 0x24050075  addiu       $a1, $zero, 0x75 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x284C10u, 0x284C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C18u;
label_284c18:
    // 0x284c18: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x284C18u;
    {
        const bool branch_taken_0x284c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C18u;
        // 0x284c1c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c18) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284C20u;
label_284c20:
    // 0x284c20: 0xc085608  jal         func_215820
    ctx->pc = 0x284C20u;
    SET_GPR_U32(ctx, 31, 0x284C28u);
    ctx->pc = 0x284C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C20u;
    // 0x284c24: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x284C20u, 0x284C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C28u;
label_284c28:
    // 0x284c28: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x284C28u;
    {
        const bool branch_taken_0x284c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C28u;
        // 0x284c2c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c28) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284C30u;
    // 0x284c30: 0xc78c8990  lwc1        $f12, -0x7670($gp)
    ctx->pc = 0x284c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284c34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284c38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x284c3c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x284c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x284c40: 0xc08535a  jal         func_214D68
    ctx->pc = 0x284C40u;
    SET_GPR_U32(ctx, 31, 0x284C48u);
    ctx->pc = 0x284C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C40u;
    // 0x284c44: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x284C40u, 0x284C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C48u;
label_284c48:
    // 0x284c48: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x284C48u;
    {
        const bool branch_taken_0x284c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C48u;
        // 0x284c4c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c48) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284C50u;
label_284c50:
    // 0x284c50: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x284c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x284c54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x284c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284c58: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x284c58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284c5c: 0x0  nop
    ctx->pc = 0x284c5cu;
    // NOP
    // 0x284c60: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x284C60u;
    {
        const bool branch_taken_0x284c60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x284C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C60u;
        // 0x284c64: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c60) {
            ctx->pc = 0x284CD4u;
            goto label_284cd4;
        }
    }
    ctx->pc = 0x284C68u;
    // 0x284c68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x284c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x284c6c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x284C6Cu;
    {
        const bool branch_taken_0x284c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C6Cu;
        // 0x284c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c6c) {
            ctx->pc = 0x284CA4u;
            goto label_284ca4;
        }
    }
    ctx->pc = 0x284C74u;
    // 0x284c74: 0xc085608  jal         func_215820
    ctx->pc = 0x284C74u;
    SET_GPR_U32(ctx, 31, 0x284C7Cu);
    ctx->pc = 0x284C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C74u;
    // 0x284c78: 0x24050076  addiu       $a1, $zero, 0x76 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x284C74u, 0x284C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C7Cu;
label_284c7c:
    // 0x284c7c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x284C7Cu;
    {
        const bool branch_taken_0x284c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C7Cu;
        // 0x284c80: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c7c) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284C84u;
    // 0x284c84: 0xc78c8994  lwc1        $f12, -0x766C($gp)
    ctx->pc = 0x284c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284c88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284c8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x284c90: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x284c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x284c94: 0xc08535a  jal         func_214D68
    ctx->pc = 0x284C94u;
    SET_GPR_U32(ctx, 31, 0x284C9Cu);
    ctx->pc = 0x284C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C94u;
    // 0x284c98: 0x24050076  addiu       $a1, $zero, 0x76 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x284C94u, 0x284C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C9Cu;
label_284c9c:
    // 0x284c9c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x284C9Cu;
    {
        const bool branch_taken_0x284c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C9Cu;
        // 0x284ca0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c9c) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284CA4u;
label_284ca4:
    // 0x284ca4: 0xc085608  jal         func_215820
    ctx->pc = 0x284CA4u;
    SET_GPR_U32(ctx, 31, 0x284CACu);
    ctx->pc = 0x284CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284CA4u;
    // 0x284ca8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x284CA4u, 0x284CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284CACu;
label_284cac:
    // 0x284cac: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x284CACu;
    {
        const bool branch_taken_0x284cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284CACu;
        // 0x284cb0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284cac) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284CB4u;
    // 0x284cb4: 0xc78c8998  lwc1        $f12, -0x7668($gp)
    ctx->pc = 0x284cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284cbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x284cc0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x284cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x284cc4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x284CC4u;
    SET_GPR_U32(ctx, 31, 0x284CCCu);
    ctx->pc = 0x284CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284CC4u;
    // 0x284cc8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x284CC4u, 0x284CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284CCCu;
label_284ccc:
    // 0x284ccc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x284CCCu;
    {
        const bool branch_taken_0x284ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284CCCu;
        // 0x284cd0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284ccc) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284CD4u;
label_284cd4:
    // 0x284cd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x284cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x284cd8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x284CD8u;
    {
        const bool branch_taken_0x284cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284CD8u;
        // 0x284cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284cd8) {
            ctx->pc = 0x284D10u;
            goto label_284d10;
        }
    }
    ctx->pc = 0x284CE0u;
    // 0x284ce0: 0xc085608  jal         func_215820
    ctx->pc = 0x284CE0u;
    SET_GPR_U32(ctx, 31, 0x284CE8u);
    ctx->pc = 0x284CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284CE0u;
    // 0x284ce4: 0x24050074  addiu       $a1, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x284CE0u, 0x284CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284CE8u;
label_284ce8:
    // 0x284ce8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x284CE8u;
    {
        const bool branch_taken_0x284ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284CE8u;
        // 0x284cec: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284ce8) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284CF0u;
    // 0x284cf0: 0xc78c899c  lwc1        $f12, -0x7664($gp)
    ctx->pc = 0x284cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284cf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284cf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x284cfc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x284cfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x284d00: 0xc08535a  jal         func_214D68
    ctx->pc = 0x284D00u;
    SET_GPR_U32(ctx, 31, 0x284D08u);
    ctx->pc = 0x284D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284D00u;
    // 0x284d04: 0x24050074  addiu       $a1, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x284D00u, 0x284D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D08u;
label_284d08:
    // 0x284d08: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x284D08u;
    {
        const bool branch_taken_0x284d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D08u;
        // 0x284d0c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d08) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284D10u;
label_284d10:
    // 0x284d10: 0xc085608  jal         func_215820
    ctx->pc = 0x284D10u;
    SET_GPR_U32(ctx, 31, 0x284D18u);
    ctx->pc = 0x284D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284D10u;
    // 0x284d14: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x284D10u, 0x284D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D18u;
label_284d18:
    // 0x284d18: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x284D18u;
    {
        const bool branch_taken_0x284d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D18u;
        // 0x284d1c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d18) {
            ctx->pc = 0x284D3Cu;
            goto label_284d3c;
        }
    }
    ctx->pc = 0x284D20u;
    // 0x284d20: 0xc78c89a0  lwc1        $f12, -0x7660($gp)
    ctx->pc = 0x284d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284d24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284d28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x284d2c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x284d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x284d30: 0xc08535a  jal         func_214D68
    ctx->pc = 0x284D30u;
    SET_GPR_U32(ctx, 31, 0x284D38u);
    ctx->pc = 0x284D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284D30u;
    // 0x284d34: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x284D30u, 0x284D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D38u;
label_284d38:
    // 0x284d38: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x284d38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_284d3c:
    // 0x284d3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284d40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x284d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284d44: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x284d44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x284d48: 0x37a70008  ori         $a3, $sp, 0x8
    ctx->pc = 0x284d48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x284d4c: 0xc085508  jal         func_215420
    ctx->pc = 0x284D4Cu;
    SET_GPR_U32(ctx, 31, 0x284D54u);
    ctx->pc = 0x284D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284D4Cu;
    // 0x284d50: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215420u, 0x284D4Cu, 0x284D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D54u;
label_284d54:
    // 0x284d54: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x284d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284d58: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x284d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284d5c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x284D5Cu;
    SET_GPR_U32(ctx, 31, 0x284D64u);
    ctx->pc = 0x284D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284D5Cu;
    // 0x284d60: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x284D5Cu, 0x284D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D64u;
label_284d64:
    // 0x284d64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x284d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284d68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x284d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284d6c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x284D6Cu;
    SET_GPR_U32(ctx, 31, 0x284D74u);
    ctx->pc = 0x284D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284D6Cu;
    // 0x284d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x284D6Cu, 0x284D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D74u;
label_284d74:
    // 0x284d74: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284D74u;
    {
        const bool branch_taken_0x284d74 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x284D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D74u;
        // 0x284d78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d74) {
            ctx->pc = 0x284D88u;
            goto label_284d88;
        }
    }
    ctx->pc = 0x284D7Cu;
    // 0x284d7c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x284D7Cu;
    SET_GPR_U32(ctx, 31, 0x284D84u);
    ctx->pc = 0x284D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284D7Cu;
    // 0x284d80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x284D7Cu, 0x284D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D84u;
label_284d84:
    // 0x284d84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x284d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_284d88:
    // 0x284d88: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x284D88u;
    SET_GPR_U32(ctx, 31, 0x284D90u);
    ctx->pc = 0x284D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284D88u;
    // 0x284d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x284D88u, 0x284D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D90u;
label_284d90:
    // 0x284d90: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x284d90u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x284d94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x284d94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284d98: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x284d98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284d9c: 0x0  nop
    ctx->pc = 0x284d9cu;
    // NOP
    // 0x284da0: 0x45030011  bc1tl       . + 4 + (0x11 << 2)
    ctx->pc = 0x284DA0u;
    {
        const bool branch_taken_0x284da0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x284da0) {
            ctx->pc = 0x284DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284DA0u;
            // 0x284da4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284DE8u;
            goto label_284de8;
        }
    }
    ctx->pc = 0x284DA8u;
    // 0x284da8: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x284da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284dac: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x284dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x284db0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x284db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284db4: 0x460ccb02  mul.s       $f12, $f25, $f12
    ctx->pc = 0x284db4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[25], ctx->f[12]);
    // 0x284db8: 0xc78189a4  lwc1        $f1, -0x765C($gp)
    ctx->pc = 0x284db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284dbc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x284dbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x284dc0: 0x0  nop
    ctx->pc = 0x284dc0u;
    // NOP
    // 0x284dc4: 0x0  nop
    ctx->pc = 0x284dc4u;
    // NOP
    // 0x284dc8: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x284dc8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x284dcc: 0x0  nop
    ctx->pc = 0x284dccu;
    // NOP
    // 0x284dd0: 0x0  nop
    ctx->pc = 0x284dd0u;
    // NOP
    // 0x284dd4: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x284dd4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x284dd8: 0xc0856c8  jal         func_215B20
    ctx->pc = 0x284DD8u;
    SET_GPR_U32(ctx, 31, 0x284DE0u);
    ctx->pc = 0x284DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284DD8u;
    // 0x284ddc: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B20u, 0x284DD8u, 0x284DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284DE0u;
label_284de0:
    // 0x284de0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x284DE0u;
    {
        const bool branch_taken_0x284de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DE0u;
        // 0x284de4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284de0) {
            ctx->pc = 0x284DFCu;
            goto label_284dfc;
        }
    }
    ctx->pc = 0x284DE8u;
label_284de8:
    // 0x284de8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x284de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x284dec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x284decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x284df0: 0xc0856c8  jal         func_215B20
    ctx->pc = 0x284DF0u;
    SET_GPR_U32(ctx, 31, 0x284DF8u);
    ctx->pc = 0x284DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284DF0u;
    // 0x284df4: 0x460ccb00  add.s       $f12, $f25, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[25], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B20u, 0x284DF0u, 0x284DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284DF8u;
label_284df8:
    // 0x284df8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x284df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_284dfc:
    // 0x284dfc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x284dfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x284e00: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x284e00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284e04: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x284e04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284e08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x284e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284e0c: 0xc7b90088  lwc1        $f25, 0x88($sp)
    ctx->pc = 0x284e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x284e10: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x284e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x284e14: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x284e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x284e18: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x284e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x284e1c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x284e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x284e20: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x284e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x284e24: 0x3e00008  jr          $ra
    ctx->pc = 0x284E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E24u;
        // 0x284e28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284E2Cu;
}
