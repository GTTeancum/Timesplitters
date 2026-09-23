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

// Function: playerTick
// Address: 0x281248 - 0x283e80
void playerTick_0x281248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerTick_0x281248");
#endif

    switch (ctx->pc) {
        case 0x2812f0u: goto label_2812f0;
        case 0x281320u: goto label_281320;
        case 0x281358u: goto label_281358;
        case 0x281390u: goto label_281390;
        case 0x281438u: goto label_281438;
        case 0x281450u: goto label_281450;
        case 0x281464u: goto label_281464;
        case 0x2814c4u: goto label_2814c4;
        case 0x2814f4u: goto label_2814f4;
        case 0x281598u: goto label_281598;
        case 0x2815c0u: goto label_2815c0;
        case 0x281610u: goto label_281610;
        case 0x281634u: goto label_281634;
        case 0x281680u: goto label_281680;
        case 0x2816e8u: goto label_2816e8;
        case 0x281710u: goto label_281710;
        case 0x281788u: goto label_281788;
        case 0x281824u: goto label_281824;
        case 0x281834u: goto label_281834;
        case 0x281848u: goto label_281848;
        case 0x281860u: goto label_281860;
        case 0x281988u: goto label_281988;
        case 0x2819a0u: goto label_2819a0;
        case 0x281a64u: goto label_281a64;
        case 0x281a98u: goto label_281a98;
        case 0x281b1cu: goto label_281b1c;
        case 0x281b44u: goto label_281b44;
        case 0x281b94u: goto label_281b94;
        case 0x281bc0u: goto label_281bc0;
        case 0x281c04u: goto label_281c04;
        case 0x281c84u: goto label_281c84;
        case 0x281cacu: goto label_281cac;
        case 0x281cfcu: goto label_281cfc;
        case 0x281d28u: goto label_281d28;
        case 0x281d68u: goto label_281d68;
        case 0x281e10u: goto label_281e10;
        case 0x281e4cu: goto label_281e4c;
        case 0x281ee4u: goto label_281ee4;
        case 0x281ef8u: goto label_281ef8;
        case 0x281f0cu: goto label_281f0c;
        case 0x281f20u: goto label_281f20;
        case 0x281f4cu: goto label_281f4c;
        case 0x282024u: goto label_282024;
        case 0x2822b8u: goto label_2822b8;
        case 0x282300u: goto label_282300;
        case 0x282638u: goto label_282638;
        case 0x282660u: goto label_282660;
        case 0x2826a0u: goto label_2826a0;
        case 0x2826ccu: goto label_2826cc;
        case 0x2826f8u: goto label_2826f8;
        case 0x282724u: goto label_282724;
        case 0x282754u: goto label_282754;
        case 0x282774u: goto label_282774;
        case 0x282794u: goto label_282794;
        case 0x2827b4u: goto label_2827b4;
        case 0x282940u: goto label_282940;
        case 0x282950u: goto label_282950;
        case 0x282958u: goto label_282958;
        case 0x282964u: goto label_282964;
        case 0x282978u: goto label_282978;
        case 0x28298cu: goto label_28298c;
        case 0x282a30u: goto label_282a30;
        case 0x282ad4u: goto label_282ad4;
        case 0x282c00u: goto label_282c00;
        case 0x282c28u: goto label_282c28;
        case 0x282e70u: goto label_282e70;
        case 0x282f80u: goto label_282f80;
        case 0x283028u: goto label_283028;
        case 0x283098u: goto label_283098;
        case 0x28317cu: goto label_28317c;
        case 0x283228u: goto label_283228;
        case 0x2832dcu: goto label_2832dc;
        case 0x2832ecu: goto label_2832ec;
        case 0x283344u: goto label_283344;
        case 0x28338cu: goto label_28338c;
        case 0x2833c0u: goto label_2833c0;
        case 0x2833ccu: goto label_2833cc;
        case 0x283404u: goto label_283404;
        case 0x283428u: goto label_283428;
        case 0x283448u: goto label_283448;
        case 0x283464u: goto label_283464;
        case 0x283484u: goto label_283484;
        case 0x2834fcu: goto label_2834fc;
        case 0x283600u: goto label_283600;
        case 0x28363cu: goto label_28363c;
        case 0x283654u: goto label_283654;
        case 0x283700u: goto label_283700;
        case 0x2837c0u: goto label_2837c0;
        case 0x283818u: goto label_283818;
        case 0x283830u: goto label_283830;
        case 0x2838e8u: goto label_2838e8;
        case 0x28398cu: goto label_28398c;
        case 0x283aa8u: goto label_283aa8;
        case 0x283b60u: goto label_283b60;
        case 0x283bc4u: goto label_283bc4;
        case 0x283bd8u: goto label_283bd8;
        case 0x283c00u: goto label_283c00;
        case 0x283cc4u: goto label_283cc4;
        case 0x283cf4u: goto label_283cf4;
        case 0x283d04u: goto label_283d04;
        case 0x283d20u: goto label_283d20;
        case 0x283d54u: goto label_283d54;
        case 0x283dccu: goto label_283dcc;
        case 0x283e20u: goto label_283e20;
        default: break;
    }

    ctx->pc = 0x281248u;

    // 0x281248: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x281248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x28124c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x28124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281250: 0xffbe01b0  sd          $fp, 0x1B0($sp)
    ctx->pc = 0x281250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 30));
    // 0x281254: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x281254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x281258: 0xffb701a0  sd          $s7, 0x1A0($sp)
    ctx->pc = 0x281258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 23));
    // 0x28125c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x28125cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281260: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x281260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
    // 0x281264: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x281264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
    // 0x281268: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x281268u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28126c: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x28126cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
    // 0x281270: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x281270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281274: 0xffb60190  sd          $s6, 0x190($sp)
    ctx->pc = 0x281274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 22));
    // 0x281278: 0xffb50180  sd          $s5, 0x180($sp)
    ctx->pc = 0x281278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 21));
    // 0x28127c: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x28127cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x281280: 0xffb30160  sd          $s3, 0x160($sp)
    ctx->pc = 0x281280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 19));
    // 0x281284: 0xffb10140  sd          $s1, 0x140($sp)
    ctx->pc = 0x281284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 17));
    // 0x281288: 0xe7bf0228  swc1        $f31, 0x228($sp)
    ctx->pc = 0x281288u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x28128c: 0xe7be0220  swc1        $f30, 0x220($sp)
    ctx->pc = 0x28128cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x281290: 0xe7bd0218  swc1        $f29, 0x218($sp)
    ctx->pc = 0x281290u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x281294: 0xe7bc0210  swc1        $f28, 0x210($sp)
    ctx->pc = 0x281294u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x281298: 0xe7bb0208  swc1        $f27, 0x208($sp)
    ctx->pc = 0x281298u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x28129c: 0xe7ba0200  swc1        $f26, 0x200($sp)
    ctx->pc = 0x28129cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x2812a0: 0xe7b901f8  swc1        $f25, 0x1F8($sp)
    ctx->pc = 0x2812a0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x2812a4: 0xe7b801f0  swc1        $f24, 0x1F0($sp)
    ctx->pc = 0x2812a4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x2812a8: 0xe7b701e8  swc1        $f23, 0x1E8($sp)
    ctx->pc = 0x2812a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x2812ac: 0xe7b601e0  swc1        $f22, 0x1E0($sp)
    ctx->pc = 0x2812acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x2812b0: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x2812b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x2812b4: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x2812b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2812b8: 0xc7818818  lwc1        $f1, -0x77E8($gp)
    ctx->pc = 0x2812b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2812bc: 0x8c430180  lw          $v1, 0x180($v0)
    ctx->pc = 0x2812bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x2812c0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2812c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2812c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2812c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2812c8: 0xc46f004c  lwc1        $f15, 0x4C($v1)
    ctx->pc = 0x2812c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2812cc: 0xc44e0094  lwc1        $f14, 0x94($v0)
    ctx->pc = 0x2812ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2812d0: 0x46017bc2  mul.s       $f15, $f15, $f1
    ctx->pc = 0x2812d0u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x2812d4: 0xc44c008c  lwc1        $f12, 0x8C($v0)
    ctx->pc = 0x2812d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2812d8: 0xc44d0090  lwc1        $f13, 0x90($v0)
    ctx->pc = 0x2812d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2812dc: 0x0  nop
    ctx->pc = 0x2812dcu;
    // NOP
    // 0x2812e0: 0x0  nop
    ctx->pc = 0x2812e0u;
    // NOP
    // 0x2812e4: 0x46007bc3  div.s       $f15, $f15, $f0
    ctx->pc = 0x2812e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[0];
    // 0x2812e8: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x2812E8u;
    SET_GPR_U32(ctx, 31, 0x2812F0u);
    ctx->pc = 0x2812ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2812E8u;
    // 0x2812ec: 0x8c730160  lw          $s3, 0x160($v1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x2812E8u, 0x2812F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2812F0u;
label_2812f0:
    // 0x2812f0: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x2812f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2812f4: 0x27b70050  addiu       $s7, $sp, 0x50
    ctx->pc = 0x2812f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2812f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2812f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2812fc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2812fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x281300: 0x8cc20180  lw          $v0, 0x180($a2)
    ctx->pc = 0x281300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 384)));
    // 0x281304: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x281304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x281308: 0x8c67005c  lw          $a3, 0x5C($v1)
    ctx->pc = 0x281308u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x28130c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28130cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x281310: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x281310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x281314: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x281314u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x281318: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x281318u;
    SET_GPR_U32(ctx, 31, 0x281320u);
    ctx->pc = 0x28131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281318u;
    // 0x28131c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x281318u, 0x281320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281320u;
label_281320:
    // 0x281320: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x281320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281324: 0xc781881c  lwc1        $f1, -0x77E4($gp)
    ctx->pc = 0x281324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281328: 0xe6600bc0  swc1        $f0, 0xBC0($s3)
    ctx->pc = 0x281328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3008), bits); }
    // 0x28132c: 0x8f879f74  lw          $a3, -0x608C($gp)
    ctx->pc = 0x28132cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x281330: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x281330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281334: 0x8f86b59c  lw          $a2, -0x4A64($gp)
    ctx->pc = 0x281334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x281338: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x281338u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28133c: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x28133cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x281340: 0xe6600bc4  swc1        $f0, 0xBC4($s3)
    ctx->pc = 0x281340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3012), bits); }
    // 0x281344: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x281344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281348: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x281348u;
    {
        const bool branch_taken_0x281348 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281348u;
        // 0x28134c: 0xe6610bc8  swc1        $f1, 0xBC8($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3016), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x281348) {
            ctx->pc = 0x2813B8u;
            goto label_2813b8;
        }
    }
    ctx->pc = 0x281350u;
    // 0x281350: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x281350u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281354: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x281354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_281358:
    // 0x281358: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x281358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x28135c: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x28135cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x281360: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x281360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x281364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281368: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x281368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28136c: 0x1205000b  beq         $s0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x28136Cu;
    {
        const bool branch_taken_0x28136c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x281370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28136Cu;
        // 0x281370: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28136c) {
            ctx->pc = 0x28139Cu;
            goto label_28139c;
        }
    }
    ctx->pc = 0x281374u;
    // 0x281374: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x281374u;
    {
        const bool branch_taken_0x281374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281374u;
        // 0x281378: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x281374) {
            ctx->pc = 0x28139Cu;
            goto label_28139c;
        }
    }
    ctx->pc = 0x28137Cu;
    // 0x28137c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x28137cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x281380: 0xc78c8820  lwc1        $f12, -0x77E0($gp)
    ctx->pc = 0x281380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x281384: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x281384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281388: 0xc0890ce  jal         func_224338
    ctx->pc = 0x281388u;
    SET_GPR_U32(ctx, 31, 0x281390u);
    ctx->pc = 0x28138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281388u;
    // 0x28138c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x224338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224338u, 0x281388u, 0x281390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281390u;
label_281390:
    // 0x281390: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x281390u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281394: 0x8f879f74  lw          $a3, -0x608C($gp)
    ctx->pc = 0x281394u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x281398: 0x8f86b59c  lw          $a2, -0x4A64($gp)
    ctx->pc = 0x281398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
label_28139c:
    // 0x28139c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28139cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2813a0: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x2813a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2813a4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2813a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2813a8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2813A8u;
    {
        const bool branch_taken_0x2813a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2813ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2813A8u;
        // 0x2813ac: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2813a8) {
            ctx->pc = 0x281358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281358;
        }
    }
    ctx->pc = 0x2813B0u;
    // 0x2813b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2813B0u;
    {
        const bool branch_taken_0x2813b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2813b0) {
            ctx->pc = 0x2813BCu;
            goto label_2813bc;
        }
    }
    ctx->pc = 0x2813B8u;
label_2813b8:
    // 0x2813b8: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x2813b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_2813bc:
    // 0x2813bc: 0x5a400007  blezl       $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2813BCu;
    {
        const bool branch_taken_0x2813bc = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x2813bc) {
            ctx->pc = 0x2813C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2813BCu;
            // 0x2813c0: 0x8e220318  lw          $v0, 0x318($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2813DCu;
            goto label_2813dc;
        }
    }
    ctx->pc = 0x2813C4u;
    // 0x2813c4: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x2813c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x2813c8: 0x8c440160  lw          $a0, 0x160($v0)
    ctx->pc = 0x2813c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2813cc: 0x8c830a94  lw          $v1, 0xA94($a0)
    ctx->pc = 0x2813ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2708)));
    // 0x2813d0: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x2813d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2813d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2813D4u;
    {
        const bool branch_taken_0x2813d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2813D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2813D4u;
        // 0x2813d8: 0xac830a94  sw          $v1, 0xA94($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2708), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2813d4) {
            ctx->pc = 0x2813FCu;
            goto label_2813fc;
        }
    }
    ctx->pc = 0x2813DCu;
label_2813dc:
    // 0x2813dc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2813DCu;
    {
        const bool branch_taken_0x2813dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2813dc) {
            ctx->pc = 0x2813E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2813DCu;
            // 0x2813e0: 0x8e230318  lw          $v1, 0x318($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28140Cu;
            goto label_28140c;
        }
    }
    ctx->pc = 0x2813E4u;
    // 0x2813e4: 0x8e230180  lw          $v1, 0x180($s1)
    ctx->pc = 0x2813e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x2813e8: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x2813e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2813ec: 0x8c640160  lw          $a0, 0x160($v1)
    ctx->pc = 0x2813ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x2813f0: 0x8c820a94  lw          $v0, 0xA94($a0)
    ctx->pc = 0x2813f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2708)));
    // 0x2813f4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2813f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2813f8: 0xac820a94  sw          $v0, 0xA94($a0)
    ctx->pc = 0x2813f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2708), GPR_U32(ctx, 2));
label_2813fc:
    // 0x2813fc: 0x8e220318  lw          $v0, 0x318($s1)
    ctx->pc = 0x2813fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
    // 0x281400: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x281400u;
    {
        const bool branch_taken_0x281400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281400) {
            ctx->pc = 0x281430u;
            goto label_281430;
        }
    }
    ctx->pc = 0x281408u;
    // 0x281408: 0x8e230318  lw          $v1, 0x318($s1)
    ctx->pc = 0x281408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
label_28140c:
    // 0x28140c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x28140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x281410: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x281410u;
    {
        const bool branch_taken_0x281410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x281410) {
            ctx->pc = 0x281414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281410u;
            // 0x281414: 0x8e220318  lw          $v0, 0x318($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281428u;
            goto label_281428;
        }
    }
    ctx->pc = 0x281418u;
    // 0x281418: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x281418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x28141c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x28141cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x281420: 0xac6000e4  sw          $zero, 0xE4($v1)
    ctx->pc = 0x281420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 228), GPR_U32(ctx, 0));
    // 0x281424: 0x8e220318  lw          $v0, 0x318($s1)
    ctx->pc = 0x281424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
label_281428:
    // 0x281428: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x281428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28142c: 0xae220318  sw          $v0, 0x318($s1)
    ctx->pc = 0x28142cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 792), GPR_U32(ctx, 2));
label_281430:
    // 0x281430: 0xc0836ca  jal         func_20DB28
    ctx->pc = 0x281430u;
    SET_GPR_U32(ctx, 31, 0x281438u);
    ctx->pc = 0x20DB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB28u, 0x281430u, 0x281438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281438u;
label_281438:
    // 0x281438: 0x144009b2  bnez        $v0, . + 4 + (0x9B2 << 2)
    ctx->pc = 0x281438u;
    {
        const bool branch_taken_0x281438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281438u;
        // 0x28143c: 0x8f91b234  lw          $s1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281438) {
            ctx->pc = 0x283B04u;
            goto label_283b04;
        }
    }
    ctx->pc = 0x281440u;
    // 0x281440: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x281440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281444: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x281444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x281448: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x281448u;
    SET_GPR_U32(ctx, 31, 0x281450u);
    ctx->pc = 0x28144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281448u;
    // 0x28144c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x281448u, 0x281450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281450u;
label_281450:
    // 0x281450: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x281450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281454: 0x460005c7  neg.s       $f23, $f0
    ctx->pc = 0x281454u;
    ctx->f[23] = FPU_NEG_S(ctx->f[0]);
    // 0x281458: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x281458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x28145c: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x28145Cu;
    SET_GPR_U32(ctx, 31, 0x281464u);
    ctx->pc = 0x281460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28145Cu;
    // 0x281460: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x28145Cu, 0x281464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281464u;
label_281464:
    // 0x281464: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x281464u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281468: 0xc6230158  lwc1        $f3, 0x158($s1)
    ctx->pc = 0x281468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28146c: 0xc622008c  lwc1        $f2, 0x8C($s1)
    ctx->pc = 0x28146cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281470: 0xc6200090  lwc1        $f0, 0x90($s1)
    ctx->pc = 0x281470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281474: 0xc624015c  lwc1        $f4, 0x15C($s1)
    ctx->pc = 0x281474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x281478: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x281478u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x28147c: 0xc6210094  lwc1        $f1, 0x94($s1)
    ctx->pc = 0x28147cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281480: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x281480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x281484: 0xc6230160  lwc1        $f3, 0x160($s1)
    ctx->pc = 0x281484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x281488: 0x46021542  mul.s       $f21, $f2, $f2
    ctx->pc = 0x281488u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x28148c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x28148cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x281490: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x281490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x281494: 0x46010d02  mul.s       $f20, $f1, $f1
    ctx->pc = 0x281494u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x281498: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x281498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x28149c: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x28149cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2814a0: 0x0  nop
    ctx->pc = 0x2814a0u;
    // NOP
    // 0x2814a4: 0x0  nop
    ctx->pc = 0x2814a4u;
    // NOP
    // 0x2814a8: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2814a8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2814ac: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2814acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2814b0: 0x0  nop
    ctx->pc = 0x2814b0u;
    // NOP
    // 0x2814b4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2814B4u;
    {
        const bool branch_taken_0x2814b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2814B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2814B4u;
        // 0x2814b8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2814b4) {
            ctx->pc = 0x2814C8u;
            goto label_2814c8;
        }
    }
    ctx->pc = 0x2814BCu;
    // 0x2814bc: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2814BCu;
    SET_GPR_U32(ctx, 31, 0x2814C4u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2814BCu, 0x2814C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2814C4u;
label_2814c4:
    // 0x2814c4: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x2814c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_2814c8:
    // 0x2814c8: 0x4614ab00  add.s       $f12, $f21, $f20
    ctx->pc = 0x2814c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x2814cc: 0xe6000178  swc1        $f0, 0x178($s0)
    ctx->pc = 0x2814ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 376), bits); }
    // 0x2814d0: 0x0  nop
    ctx->pc = 0x2814d0u;
    // NOP
    // 0x2814d4: 0x0  nop
    ctx->pc = 0x2814d4u;
    // NOP
    // 0x2814d8: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2814d8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2814dc: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2814dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2814e0: 0x0  nop
    ctx->pc = 0x2814e0u;
    // NOP
    // 0x2814e4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2814E4u;
    {
        const bool branch_taken_0x2814e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2814E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2814E4u;
        // 0x2814e8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2814e4) {
            ctx->pc = 0x2814F8u;
            goto label_2814f8;
        }
    }
    ctx->pc = 0x2814ECu;
    // 0x2814ec: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2814ECu;
    SET_GPR_U32(ctx, 31, 0x2814F4u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2814ECu, 0x2814F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2814F4u;
label_2814f4:
    // 0x2814f4: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x2814f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_2814f8:
    // 0x2814f8: 0xe600017c  swc1        $f0, 0x17C($s0)
    ctx->pc = 0x2814f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 380), bits); }
    // 0x2814fc: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x2814fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x281500: 0xc620008c  lwc1        $f0, 0x8C($s1)
    ctx->pc = 0x281500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281504: 0xc6210090  lwc1        $f1, 0x90($s1)
    ctx->pc = 0x281504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281508: 0xc6220094  lwc1        $f2, 0x94($s1)
    ctx->pc = 0x281508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28150c: 0xc6230098  lwc1        $f3, 0x98($s1)
    ctx->pc = 0x28150cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x281510: 0xc624009c  lwc1        $f4, 0x9C($s1)
    ctx->pc = 0x281510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x281514: 0xc62500a0  lwc1        $f5, 0xA0($s1)
    ctx->pc = 0x281514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x281518: 0xc6260114  lwc1        $f6, 0x114($s1)
    ctx->pc = 0x281518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28151c: 0xc627011c  lwc1        $f7, 0x11C($s1)
    ctx->pc = 0x28151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x281520: 0xe6200158  swc1        $f0, 0x158($s1)
    ctx->pc = 0x281520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 344), bits); }
    // 0x281524: 0xe621015c  swc1        $f1, 0x15C($s1)
    ctx->pc = 0x281524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 348), bits); }
    // 0x281528: 0xe6220160  swc1        $f2, 0x160($s1)
    ctx->pc = 0x281528u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 352), bits); }
    // 0x28152c: 0xe6230164  swc1        $f3, 0x164($s1)
    ctx->pc = 0x28152cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 356), bits); }
    // 0x281530: 0xe6240168  swc1        $f4, 0x168($s1)
    ctx->pc = 0x281530u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 360), bits); }
    // 0x281534: 0xe625016c  swc1        $f5, 0x16C($s1)
    ctx->pc = 0x281534u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 364), bits); }
    // 0x281538: 0xe6260170  swc1        $f6, 0x170($s1)
    ctx->pc = 0x281538u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 368), bits); }
    // 0x28153c: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28153Cu;
    {
        const bool branch_taken_0x28153c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x281540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28153Cu;
        // 0x281540: 0xe6270174  swc1        $f7, 0x174($s1) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 372), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28153c) {
            ctx->pc = 0x281548u;
            goto label_281548;
        }
    }
    ctx->pc = 0x281544u;
    // 0x281544: 0xae220154  sw          $v0, 0x154($s1)
    ctx->pc = 0x281544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
label_281548:
    // 0x281548: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x281548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x28154c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x28154cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x281550: 0x8e240128  lw          $a0, 0x128($s1)
    ctx->pc = 0x281550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x281554: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x281554u;
    {
        const bool branch_taken_0x281554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x281558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281554u;
        // 0x281558: 0xae220124  sw          $v0, 0x124($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281554) {
            ctx->pc = 0x2815DCu;
            goto label_2815dc;
        }
    }
    ctx->pc = 0x28155Cu;
    // 0x28155c: 0x8f839c94  lw          $v1, -0x636C($gp)
    ctx->pc = 0x28155cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941844)));
    // 0x281560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281564: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x281564u;
    {
        const bool branch_taken_0x281564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x281568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281564u;
        // 0x281568: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281564) {
            ctx->pc = 0x2815DCu;
            goto label_2815dc;
        }
    }
    ctx->pc = 0x28156Cu;
    // 0x28156c: 0x1082001b  beq         $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x28156Cu;
    {
        const bool branch_taken_0x28156c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x281570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28156Cu;
        // 0x281570: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28156c) {
            ctx->pc = 0x2815DCu;
            goto label_2815dc;
        }
    }
    ctx->pc = 0x281574u;
    // 0x281574: 0x5082001a  beql        $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x281574u;
    {
        const bool branch_taken_0x281574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x281574) {
            ctx->pc = 0x281578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281574u;
            // 0x281578: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2815E0u;
            goto label_2815e0;
        }
    }
    ctx->pc = 0x28157Cu;
    // 0x28157c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x28157cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x281580: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x281580u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x281584: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x281584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x281588: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x281588u;
    {
        const bool branch_taken_0x281588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281588) {
            ctx->pc = 0x2815B8u;
            goto label_2815b8;
        }
    }
    ctx->pc = 0x281590u;
    // 0x281590: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x281590u;
    SET_GPR_U32(ctx, 31, 0x281598u);
    ctx->pc = 0x281594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281590u;
    // 0x281594: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x281590u, 0x281598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281598u;
label_281598:
    // 0x281598: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x281598u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x28159c: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x28159cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2815a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2815a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2815a4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2815A4u;
    {
        const bool branch_taken_0x2815a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2815a4) {
            ctx->pc = 0x2815A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2815A4u;
            // 0x2815a8: 0x8e220128  lw          $v0, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2815F0u;
            goto label_2815f0;
        }
    }
    ctx->pc = 0x2815ACu;
    // 0x2815ac: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2815acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2815b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2815B0u;
    {
        const bool branch_taken_0x2815b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2815B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2815B0u;
        // 0x2815b4: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2815b0) {
            ctx->pc = 0x2815E8u;
            goto label_2815e8;
        }
    }
    ctx->pc = 0x2815B8u;
label_2815b8:
    // 0x2815b8: 0xc080e18  jal         func_203860
    ctx->pc = 0x2815B8u;
    SET_GPR_U32(ctx, 31, 0x2815C0u);
    ctx->pc = 0x2815BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2815B8u;
    // 0x2815bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x2815B8u, 0x2815C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2815C0u;
label_2815c0:
    // 0x2815c0: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x2815c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2815c4: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x2815c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2815c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2815c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2815cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2815CCu;
    {
        const bool branch_taken_0x2815cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2815D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2815CCu;
        // 0x2815d0: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2815cc) {
            ctx->pc = 0x2815E0u;
            goto label_2815e0;
        }
    }
    ctx->pc = 0x2815D4u;
    // 0x2815d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2815D4u;
    {
        const bool branch_taken_0x2815d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2815D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2815D4u;
        // 0x2815d8: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2815d4) {
            ctx->pc = 0x2815E8u;
            goto label_2815e8;
        }
    }
    ctx->pc = 0x2815DCu;
label_2815dc:
    // 0x2815dc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2815dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2815e0:
    // 0x2815e0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2815e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2815e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2815e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2815e8:
    // 0x2815e8: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2815e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x2815ec: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x2815ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_2815f0:
    // 0x2815f0: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2815f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2815f4: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2815F4u;
    {
        const bool branch_taken_0x2815f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2815F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2815F4u;
        // 0x2815f8: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2815f4) {
            ctx->pc = 0x281614u;
            goto label_281614;
        }
    }
    ctx->pc = 0x2815FCu;
    // 0x2815fc: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x2815fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x281600: 0xc78c8824  lwc1        $f12, -0x77DC($gp)
    ctx->pc = 0x281600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x281604: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x281604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x281608: 0xc088f98  jal         func_223E60
    ctx->pc = 0x281608u;
    SET_GPR_U32(ctx, 31, 0x281610u);
    ctx->pc = 0x28160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281608u;
    // 0x28160c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x281608u, 0x281610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281610u;
label_281610:
    // 0x281610: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x281610u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_281614:
    // 0x281614: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x281614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x281618: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281618u;
    {
        const bool branch_taken_0x281618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x28161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281618u;
        // 0x28161c: 0x8e320014  lw          $s2, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281618) {
            ctx->pc = 0x28162Cu;
            goto label_28162c;
        }
    }
    ctx->pc = 0x281620u;
    // 0x281620: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x281620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x281624: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x281624u;
    {
        const bool branch_taken_0x281624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281624u;
        // 0x281628: 0x2421024  and         $v0, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281624) {
            ctx->pc = 0x28169Cu;
            goto label_28169c;
        }
    }
    ctx->pc = 0x28162Cu;
label_28162c:
    // 0x28162c: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x28162Cu;
    SET_GPR_U32(ctx, 31, 0x281634u);
    ctx->pc = 0x281630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28162Cu;
    // 0x281630: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x28162Cu, 0x281634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281634u;
label_281634:
    // 0x281634: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x281634u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281638: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x281638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x28163c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28163cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x281640: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x281640u;
    {
        const bool branch_taken_0x281640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281640u;
        // 0x281644: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281640) {
            ctx->pc = 0x281668u;
            goto label_281668;
        }
    }
    ctx->pc = 0x281648u;
    // 0x281648: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x281648u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x28164c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28164cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x281650: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x281650u;
    {
        const bool branch_taken_0x281650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281650u;
        // 0x281654: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281650) {
            ctx->pc = 0x281660u;
            goto label_281660;
        }
    }
    ctx->pc = 0x281658u;
    // 0x281658: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x281658u;
    {
        const bool branch_taken_0x281658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281658u;
        // 0x28165c: 0x38420002  xori        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281658) {
            ctx->pc = 0x28169Cu;
            goto label_28169c;
        }
    }
    ctx->pc = 0x281660u;
label_281660:
    // 0x281660: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x281660u;
    {
        const bool branch_taken_0x281660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281660u;
        // 0x281664: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281660) {
            ctx->pc = 0x28169Cu;
            goto label_28169c;
        }
    }
    ctx->pc = 0x281668u;
label_281668:
    // 0x281668: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x281668u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x28166c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28166cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x281670: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x281670u;
    {
        const bool branch_taken_0x281670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281670) {
            ctx->pc = 0x281674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281670u;
            // 0x281674: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2816A4u;
            goto label_2816a4;
        }
    }
    ctx->pc = 0x281678u;
    // 0x281678: 0xc080e5a  jal         func_203968
    ctx->pc = 0x281678u;
    SET_GPR_U32(ctx, 31, 0x281680u);
    ctx->pc = 0x28167Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281678u;
    // 0x28167c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203968u, 0x281678u, 0x281680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281680u;
label_281680:
    // 0x281680: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x281680u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281684: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x281684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x281688: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x281688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28168c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28168Cu;
    {
        const bool branch_taken_0x28168c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28168Cu;
        // 0x281690: 0x2403fffd  addiu       $v1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28168c) {
            ctx->pc = 0x2816A0u;
            goto label_2816a0;
        }
    }
    ctx->pc = 0x281694u;
    // 0x281694: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x281694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x281698: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x281698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_28169c:
    // 0x28169c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x28169cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2816a0:
    // 0x2816a0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2816a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2816a4:
    // 0x2816a4: 0x1052000a  beq         $v0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2816A4u;
    {
        const bool branch_taken_0x2816a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2816A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816A4u;
        // 0x2816a8: 0x30420002  andi        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816a4) {
            ctx->pc = 0x2816D0u;
            goto label_2816d0;
        }
    }
    ctx->pc = 0x2816ACu;
    // 0x2816ac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2816ACu;
    {
        const bool branch_taken_0x2816ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2816ac) {
            ctx->pc = 0x2816B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2816ACu;
            // 0x2816b0: 0xc6200108  lwc1        $f0, 0x108($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2816C0u;
            goto label_2816c0;
        }
    }
    ctx->pc = 0x2816B4u;
    // 0x2816b4: 0xc620010c  lwc1        $f0, 0x10C($s1)
    ctx->pc = 0x2816b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2816b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2816B8u;
    {
        const bool branch_taken_0x2816b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2816BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816B8u;
        // 0x2816bc: 0xe6200108  swc1        $f0, 0x108($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816b8) {
            ctx->pc = 0x2816D0u;
            goto label_2816d0;
        }
    }
    ctx->pc = 0x2816C0u;
label_2816c0:
    // 0x2816c0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2816c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2816c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2816c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2816c8: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x2816c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x2816cc: 0xe6210108  swc1        $f1, 0x108($s1)
    ctx->pc = 0x2816ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
label_2816d0:
    // 0x2816d0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2816d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2816d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2816d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2816d8: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x2816D8u;
    {
        const bool branch_taken_0x2816d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2816d8) {
            ctx->pc = 0x2816DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2816D8u;
            // 0x2816dc: 0xc6210108  lwc1        $f1, 0x108($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x281790u;
            goto label_281790;
        }
    }
    ctx->pc = 0x2816E0u;
    // 0x2816e0: 0xc080e18  jal         func_203860
    ctx->pc = 0x2816E0u;
    SET_GPR_U32(ctx, 31, 0x2816E8u);
    ctx->pc = 0x2816E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2816E0u;
    // 0x2816e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x2816E0u, 0x2816E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2816E8u;
label_2816e8:
    // 0x2816e8: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x2816e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2816ec: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2816ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2816f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2816f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2816f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2816F4u;
    {
        const bool branch_taken_0x2816f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2816F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816F4u;
        // 0x2816f8: 0xc781b468  lwc1        $f1, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816f4) {
            ctx->pc = 0x281708u;
            goto label_281708;
        }
    }
    ctx->pc = 0x2816FCu;
    // 0x2816fc: 0xc6200108  lwc1        $f0, 0x108($s1)
    ctx->pc = 0x2816fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281700: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x281700u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x281704: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x281704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
label_281708:
    // 0x281708: 0xc080e18  jal         func_203860
    ctx->pc = 0x281708u;
    SET_GPR_U32(ctx, 31, 0x281710u);
    ctx->pc = 0x28170Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281708u;
    // 0x28170c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x281708u, 0x281710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281710u;
label_281710:
    // 0x281710: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x281710u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281714: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x281714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x281718: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x281718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28171c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28171Cu;
    {
        const bool branch_taken_0x28171c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28171Cu;
        // 0x281720: 0xc781b468  lwc1        $f1, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28171c) {
            ctx->pc = 0x281730u;
            goto label_281730;
        }
    }
    ctx->pc = 0x281724u;
    // 0x281724: 0xc6200108  lwc1        $f0, 0x108($s1)
    ctx->pc = 0x281724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281728: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28172c: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x28172cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
label_281730:
    // 0x281730: 0xc6200108  lwc1        $f0, 0x108($s1)
    ctx->pc = 0x281730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281734: 0xc6210110  lwc1        $f1, 0x110($s1)
    ctx->pc = 0x281734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281738: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x281738u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28173c: 0x0  nop
    ctx->pc = 0x28173cu;
    // NOP
    // 0x281740: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x281740u;
    {
        const bool branch_taken_0x281740 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x281740) {
            ctx->pc = 0x281744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281740u;
            // 0x281744: 0xe6210108  swc1        $f1, 0x108($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x281748u;
            goto label_281748;
        }
    }
    ctx->pc = 0x281748u;
label_281748:
    // 0x281748: 0xc6200108  lwc1        $f0, 0x108($s1)
    ctx->pc = 0x281748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28174c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x28174cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x281750: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x281750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281754: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x281754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281758: 0x0  nop
    ctx->pc = 0x281758u;
    // NOP
    // 0x28175c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28175Cu;
    {
        const bool branch_taken_0x28175c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28175c) {
            ctx->pc = 0x281760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28175Cu;
            // 0x281760: 0xe6210108  swc1        $f1, 0x108($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x281764u;
            goto label_281764;
        }
    }
    ctx->pc = 0x281764u;
label_281764:
    // 0x281764: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x281764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x281768: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x281768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x28176c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28176Cu;
    {
        const bool branch_taken_0x28176c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28176Cu;
        // 0x281770: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28176c) {
            ctx->pc = 0x28178Cu;
            goto label_28178c;
        }
    }
    ctx->pc = 0x281774u;
    // 0x281774: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x281774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x281778: 0xc78c8828  lwc1        $f12, -0x77D8($gp)
    ctx->pc = 0x281778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28177c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x28177cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x281780: 0xc088f98  jal         func_223E60
    ctx->pc = 0x281780u;
    SET_GPR_U32(ctx, 31, 0x281788u);
    ctx->pc = 0x281784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281780u;
    // 0x281784: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x281780u, 0x281788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281788u;
label_281788:
    // 0x281788: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x281788u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_28178c:
    // 0x28178c: 0xc6210108  lwc1        $f1, 0x108($s1)
    ctx->pc = 0x28178cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_281790:
    // 0x281790: 0xc6220104  lwc1        $f2, 0x104($s1)
    ctx->pc = 0x281790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281794: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x281794u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281798: 0x0  nop
    ctx->pc = 0x281798u;
    // NOP
    // 0x28179c: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x28179Cu;
    {
        const bool branch_taken_0x28179c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28179c) {
            ctx->pc = 0x2817A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28179Cu;
            // 0x2817a0: 0x8e230128  lw          $v1, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2817E0u;
            goto label_2817e0;
        }
    }
    ctx->pc = 0x2817A4u;
    // 0x2817a4: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x2817a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2817a8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2817a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2817ac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2817acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2817b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2817b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2817b4: 0x0  nop
    ctx->pc = 0x2817b4u;
    // NOP
    // 0x2817b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2817B8u;
    {
        const bool branch_taken_0x2817b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2817b8) {
            ctx->pc = 0x2817BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2817B8u;
            // 0x2817bc: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2817C0u;
            goto label_2817c0;
        }
    }
    ctx->pc = 0x2817C0u;
label_2817c0:
    // 0x2817c0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2817c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2817c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2817c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2817c8: 0x0  nop
    ctx->pc = 0x2817c8u;
    // NOP
    // 0x2817cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2817CCu;
    {
        const bool branch_taken_0x2817cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2817cc) {
            ctx->pc = 0x2817D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2817CCu;
            // 0x2817d0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2817D4u;
            goto label_2817d4;
        }
    }
    ctx->pc = 0x2817D4u;
label_2817d4:
    // 0x2817d4: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x2817d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2817d8: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x2817d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x2817dc: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x2817dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_2817e0:
    // 0x2817e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2817e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2817e4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2817E4u;
    {
        const bool branch_taken_0x2817e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2817E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2817E4u;
        // 0x2817e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2817e4) {
            ctx->pc = 0x2817F8u;
            goto label_2817f8;
        }
    }
    ctx->pc = 0x2817ECu;
    // 0x2817ec: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2817ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2817f0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2817f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2817f4: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x2817f4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2817f8:
    // 0x2817f8: 0x10800060  beqz        $a0, . + 4 + (0x60 << 2)
    ctx->pc = 0x2817F8u;
    {
        const bool branch_taken_0x2817f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2817FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2817F8u;
        // 0x2817fc: 0xae240320  sw          $a0, 0x320($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2817f8) {
            ctx->pc = 0x28197Cu;
            goto label_28197c;
        }
    }
    ctx->pc = 0x281800u;
    // 0x281800: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x281800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x281804: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x281804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x281808: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x281808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x28180c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28180cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x281810: 0x8c620a94  lw          $v0, 0xA94($v1)
    ctx->pc = 0x281810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2708)));
    // 0x281814: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x281814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x281818: 0xac620a94  sw          $v0, 0xA94($v1)
    ctx->pc = 0x281818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2708), GPR_U32(ctx, 2));
    // 0x28181c: 0xc080ecc  jal         func_203B30
    ctx->pc = 0x28181Cu;
    SET_GPR_U32(ctx, 31, 0x281824u);
    ctx->pc = 0x281820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28181Cu;
    // 0x281820: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B30u, 0x28181Cu, 0x281824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281824u;
label_281824:
    // 0x281824: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x281824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281828: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x281828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x28182c: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x28182Cu;
    SET_GPR_U32(ctx, 31, 0x281834u);
    ctx->pc = 0x281830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28182Cu;
    // 0x281830: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x28182Cu, 0x281834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281834u;
label_281834:
    // 0x281834: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x281834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281838: 0x460005c7  neg.s       $f23, $f0
    ctx->pc = 0x281838u;
    ctx->f[23] = FPU_NEG_S(ctx->f[0]);
    // 0x28183c: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x28183cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x281840: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x281840u;
    SET_GPR_U32(ctx, 31, 0x281848u);
    ctx->pc = 0x281844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281840u;
    // 0x281844: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x281840u, 0x281848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281848u;
label_281848:
    // 0x281848: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x281848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x28184c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x28184cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x281850: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x281850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x281854: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x281854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x281858: 0xc080ecc  jal         func_203B30
    ctx->pc = 0x281858u;
    SET_GPR_U32(ctx, 31, 0x281860u);
    ctx->pc = 0x28185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281858u;
    // 0x28185c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B30u, 0x281858u, 0x281860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281860u;
label_281860:
    // 0x281860: 0x4617a036  c.le.s      $f20, $f23
    ctx->pc = 0x281860u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281864: 0x0  nop
    ctx->pc = 0x281864u;
    // NOP
    // 0x281868: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x281868u;
    {
        const bool branch_taken_0x281868 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x281868) {
            ctx->pc = 0x28186Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281868u;
            // 0x28186c: 0x4617b802  mul.s       $f0, $f23, $f23 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x281878u;
            goto label_281878;
        }
    }
    ctx->pc = 0x281870u;
    // 0x281870: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x281870u;
    {
        const bool branch_taken_0x281870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281870u;
        // 0x281874: 0x4617bdc2  mul.s       $f23, $f23, $f23 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281870) {
            ctx->pc = 0x28187Cu;
            goto label_28187c;
        }
    }
    ctx->pc = 0x281878u;
label_281878:
    // 0x281878: 0x460005c7  neg.s       $f23, $f0
    ctx->pc = 0x281878u;
    ctx->f[23] = FPU_NEG_S(ctx->f[0]);
label_28187c:
    // 0x28187c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28187cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281880: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x281880u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281884: 0x0  nop
    ctx->pc = 0x281884u;
    // NOP
    // 0x281888: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x281888u;
    {
        const bool branch_taken_0x281888 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x281888) {
            ctx->pc = 0x28188Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281888u;
            // 0x28188c: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x281898u;
            goto label_281898;
        }
    }
    ctx->pc = 0x281890u;
    // 0x281890: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x281890u;
    {
        const bool branch_taken_0x281890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281890u;
        // 0x281894: 0x4615ad42  mul.s       $f21, $f21, $f21 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281890) {
            ctx->pc = 0x28189Cu;
            goto label_28189c;
        }
    }
    ctx->pc = 0x281898u;
label_281898:
    // 0x281898: 0x46000547  neg.s       $f21, $f0
    ctx->pc = 0x281898u;
    ctx->f[21] = FPU_NEG_S(ctx->f[0]);
label_28189c:
    // 0x28189c: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x28189cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2818a0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2818a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2818a4: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2818a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2818a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2818a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2818ac: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2818ACu;
    {
        const bool branch_taken_0x2818ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2818ac) {
            ctx->pc = 0x2818B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2818ACu;
            // 0x2818b0: 0x4600ad47  neg.s       $f21, $f21 (Delay Slot)
            ctx->f[21] = FPU_NEG_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2818B4u;
            goto label_2818b4;
        }
    }
    ctx->pc = 0x2818B4u;
label_2818b4:
    // 0x2818b4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2818b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2818b8: 0x4600b807  neg.s       $f0, $f23
    ctx->pc = 0x2818b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[23]);
    // 0x2818bc: 0x4600a847  neg.s       $f1, $f21
    ctx->pc = 0x2818bcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
    // 0x2818c0: 0x46177034  c.lt.s      $f14, $f23
    ctx->pc = 0x2818c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2818c4: 0xe6200324  swc1        $f0, 0x324($s1)
    ctx->pc = 0x2818c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 804), bits); }
    // 0x2818c8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2818C8u;
    {
        const bool branch_taken_0x2818c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2818CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2818C8u;
        // 0x2818cc: 0xe6210328  swc1        $f1, 0x328($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 808), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2818c8) {
            ctx->pc = 0x2818F4u;
            goto label_2818f4;
        }
    }
    ctx->pc = 0x2818D0u;
    // 0x2818d0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2818d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2818d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2818d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2818d8: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x2818d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2818dc: 0x0  nop
    ctx->pc = 0x2818dcu;
    // NOP
    // 0x2818e0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2818E0u;
    {
        const bool branch_taken_0x2818e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2818E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2818E0u;
        // 0x2818e4: 0x460077c6  mov.s       $f31, $f14 (Delay Slot)
        ctx->f[31] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2818e0) {
            ctx->pc = 0x28191Cu;
            goto label_28191c;
        }
    }
    ctx->pc = 0x2818E8u;
    // 0x2818e8: 0x4600b801  sub.s       $f0, $f23, $f0
    ctx->pc = 0x2818e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x2818ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2818ECu;
    {
        const bool branch_taken_0x2818ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2818F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2818ECu;
        // 0x2818f0: 0x460007c0  add.s       $f31, $f0, $f0 (Delay Slot)
        ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2818ec) {
            ctx->pc = 0x28191Cu;
            goto label_28191c;
        }
    }
    ctx->pc = 0x2818F4u;
label_2818f4:
    // 0x2818f4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2818f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2818f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2818f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2818fc: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x2818fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281900: 0x0  nop
    ctx->pc = 0x281900u;
    // NOP
    // 0x281904: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x281904u;
    {
        const bool branch_taken_0x281904 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x281908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281904u;
        // 0x281908: 0x460077c6  mov.s       $f31, $f14 (Delay Slot)
        ctx->f[31] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281904) {
            ctx->pc = 0x28191Cu;
            goto label_28191c;
        }
    }
    ctx->pc = 0x28190Cu;
    // 0x28190c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28190cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x281910: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x281910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281914: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x281914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x281918: 0x460007c0  add.s       $f31, $f0, $f0
    ctx->pc = 0x281918u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28191c:
    // 0x28191c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x28191cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281920: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x281920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281924: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x281924u;
    {
        const bool branch_taken_0x281924 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x281924) {
            ctx->pc = 0x281950u;
            goto label_281950;
        }
    }
    ctx->pc = 0x28192Cu;
    // 0x28192c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28192cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x281930: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x281930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281934: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x281934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281938: 0x0  nop
    ctx->pc = 0x281938u;
    // NOP
    // 0x28193c: 0x45000154  bc1f        . + 4 + (0x154 << 2)
    ctx->pc = 0x28193Cu;
    {
        const bool branch_taken_0x28193c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x281940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28193Cu;
        // 0x281940: 0x46000d86  mov.s       $f22, $f1 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28193c) {
            ctx->pc = 0x281E90u;
            goto label_281e90;
        }
    }
    ctx->pc = 0x281944u;
    // 0x281944: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x281944u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x281948: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x281948u;
    {
        const bool branch_taken_0x281948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281948u;
        // 0x28194c: 0x46000580  add.s       $f22, $f0, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281948) {
            ctx->pc = 0x281E90u;
            goto label_281e90;
        }
    }
    ctx->pc = 0x281950u;
label_281950:
    // 0x281950: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x281950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x281954: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x281954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281958: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x281958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28195c: 0x0  nop
    ctx->pc = 0x28195cu;
    // NOP
    // 0x281960: 0x4500014b  bc1f        . + 4 + (0x14B << 2)
    ctx->pc = 0x281960u;
    {
        const bool branch_taken_0x281960 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x281964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281960u;
        // 0x281964: 0x46000d86  mov.s       $f22, $f1 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281960) {
            ctx->pc = 0x281E90u;
            goto label_281e90;
        }
    }
    ctx->pc = 0x281968u;
    // 0x281968: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x281968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28196c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28196cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281970: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x281970u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x281974: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x281974u;
    {
        const bool branch_taken_0x281974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281974u;
        // 0x281978: 0x46000580  add.s       $f22, $f0, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281974) {
            ctx->pc = 0x281E90u;
            goto label_281e90;
        }
    }
    ctx->pc = 0x28197Cu;
label_28197c:
    // 0x28197c: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x28197cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x281980: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x281980u;
    SET_GPR_U32(ctx, 31, 0x281988u);
    ctx->pc = 0x281984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281980u;
    // 0x281984: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x281980u, 0x281988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281988u;
label_281988:
    // 0x281988: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x281988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x28198c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x28198cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x281990: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x281990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x281994: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x281994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281998: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x281998u;
    SET_GPR_U32(ctx, 31, 0x2819A0u);
    ctx->pc = 0x28199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281998u;
    // 0x28199c: 0x460007c6  mov.s       $f31, $f0 (Delay Slot)
    ctx->f[31] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x281998u, 0x2819A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2819A0u;
label_2819a0:
    // 0x2819a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2819a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2819a4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2819a4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2819a8: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x2819a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2819ac: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2819ACu;
    {
        const bool branch_taken_0x2819ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2819ac) {
            ctx->pc = 0x2819D8u;
            goto label_2819d8;
        }
    }
    ctx->pc = 0x2819B4u;
    // 0x2819b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2819b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2819b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2819b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2819bc: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2819bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2819c0: 0x0  nop
    ctx->pc = 0x2819c0u;
    // NOP
    // 0x2819c4: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x2819C4u;
    {
        const bool branch_taken_0x2819c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2819c4) {
            ctx->pc = 0x2819C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2819C4u;
            // 0x2819c8: 0x46000d86  mov.s       $f22, $f1 (Delay Slot)
            ctx->f[22] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x281A00u;
            goto label_281a00;
        }
    }
    ctx->pc = 0x2819CCu;
    // 0x2819cc: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x2819ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x2819d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2819D0u;
    {
        const bool branch_taken_0x2819d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2819D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2819D0u;
        // 0x2819d4: 0x46000580  add.s       $f22, $f0, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2819d0) {
            ctx->pc = 0x281A00u;
            goto label_281a00;
        }
    }
    ctx->pc = 0x2819D8u;
label_2819d8:
    // 0x2819d8: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2819d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2819dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2819dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2819e0: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2819e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2819e4: 0x0  nop
    ctx->pc = 0x2819e4u;
    // NOP
    // 0x2819e8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2819E8u;
    {
        const bool branch_taken_0x2819e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2819e8) {
            ctx->pc = 0x2819ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2819E8u;
            // 0x2819ec: 0x46000d86  mov.s       $f22, $f1 (Delay Slot)
            ctx->f[22] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x281A00u;
            goto label_281a00;
        }
    }
    ctx->pc = 0x2819F0u;
    // 0x2819f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2819f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2819f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2819f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2819f8: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x2819f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x2819fc: 0x46000580  add.s       $f22, $f0, $f0
    ctx->pc = 0x2819fcu;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_281a00:
    // 0x281a00: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x281a00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281a04: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x281a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x281a08: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x281a08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x281a0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x281a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x281a10: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x281A10u;
    {
        const bool branch_taken_0x281a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A10u;
        // 0x281a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a10) {
            ctx->pc = 0x281A1Cu;
            goto label_281a1c;
        }
    }
    ctx->pc = 0x281A18u;
    // 0x281a18: 0x4600b587  neg.s       $f22, $f22
    ctx->pc = 0x281a18u;
    ctx->f[22] = FPU_NEG_S(ctx->f[22]);
label_281a1c:
    // 0x281a1c: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x281a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x281a20: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x281A20u;
    {
        const bool branch_taken_0x281a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281a20) {
            ctx->pc = 0x281A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281A20u;
            // 0x281a24: 0x8c830018  lw          $v1, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281A48u;
            goto label_281a48;
        }
    }
    ctx->pc = 0x281A28u;
    // 0x281a28: 0x8e2201a4  lw          $v0, 0x1A4($s1)
    ctx->pc = 0x281a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x281a2c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x281A2Cu;
    {
        const bool branch_taken_0x281a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281a2c) {
            ctx->pc = 0x281A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281A2Cu;
            // 0x281a30: 0x8c830018  lw          $v1, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281A48u;
            goto label_281a48;
        }
    }
    ctx->pc = 0x281A34u;
    // 0x281a34: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x281a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x281a38: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x281a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x281a3c: 0x54620101  bnel        $v1, $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x281A3Cu;
    {
        const bool branch_taken_0x281a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x281a3c) {
            ctx->pc = 0x281A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281A3Cu;
            // 0x281a40: 0x8e25004c  lw          $a1, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281E44u;
            goto label_281e44;
        }
    }
    ctx->pc = 0x281A44u;
    // 0x281a44: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x281a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_281a48:
    // 0x281a48: 0xc794882c  lwc1        $f20, -0x77D4($gp)
    ctx->pc = 0x281a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x281a4c: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x281a4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x281a50: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x281a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x281a54: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x281A54u;
    {
        const bool branch_taken_0x281a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A54u;
        // 0x281a58: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a54) {
            ctx->pc = 0x281C38u;
            goto label_281c38;
        }
    }
    ctx->pc = 0x281A5Cu;
    // 0x281a5c: 0xc0a548e  jal         func_295238
    ctx->pc = 0x281A5Cu;
    SET_GPR_U32(ctx, 31, 0x281A64u);
    ctx->pc = 0x281A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281A5Cu;
    // 0x281a60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295238u, 0x281A5Cu, 0x281A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281A64u;
label_281a64:
    // 0x281a64: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x281A64u;
    {
        const bool branch_taken_0x281a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A64u;
        // 0x281a68: 0x8f879f74  lw          $a3, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a64) {
            ctx->pc = 0x281C38u;
            goto label_281c38;
        }
    }
    ctx->pc = 0x281A6Cu;
    // 0x281a6c: 0x8f86b59c  lw          $a2, -0x4A64($gp)
    ctx->pc = 0x281a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x281a70: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x281a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x281a74: 0x18400070  blez        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x281A74u;
    {
        const bool branch_taken_0x281a74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x281A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A74u;
        // 0x281a78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a74) {
            ctx->pc = 0x281C38u;
            goto label_281c38;
        }
    }
    ctx->pc = 0x281A7Cu;
    // 0x281a7c: 0xc7988830  lwc1        $f24, -0x77D0($gp)
    ctx->pc = 0x281a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x281a80: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x281a80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281a84: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x281a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x281a88: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x281a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x281a8c: 0x27b600b0  addiu       $s6, $sp, 0xB0
    ctx->pc = 0x281a8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x281a90: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x281a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x281a94: 0x0  nop
    ctx->pc = 0x281a94u;
    // NOP
label_281a98:
    // 0x281a98: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x281a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281a9c: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x281a9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x281aa0: 0x24031210  addiu       $v1, $zero, 0x1210
    ctx->pc = 0x281aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x281aa4: 0x8c850334  lw          $a1, 0x334($a0)
    ctx->pc = 0x281aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x281aa8: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x281aa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x281aac: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x281aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x281ab0: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x281ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x281ab4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x281ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x281ab8: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x281AB8u;
    {
        const bool branch_taken_0x281ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281AB8u;
        // 0x281abc: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ab8) {
            ctx->pc = 0x281C24u;
            goto label_281c24;
        }
    }
    ctx->pc = 0x281AC0u;
    // 0x281ac0: 0x8e020bcc  lw          $v0, 0xBCC($s0)
    ctx->pc = 0x281ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
    // 0x281ac4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x281ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281ac8: 0xc4410208  lwc1        $f1, 0x208($v0)
    ctx->pc = 0x281ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281acc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x281accu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x281ad0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x281ad0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x281ad4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x281ad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281ad8: 0x0  nop
    ctx->pc = 0x281ad8u;
    // NOP
    // 0x281adc: 0x45020052  bc1fl       . + 4 + (0x52 << 2)
    ctx->pc = 0x281ADCu;
    {
        const bool branch_taken_0x281adc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x281adc) {
            ctx->pc = 0x281AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281ADCu;
            // 0x281ae0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281C28u;
            goto label_281c28;
        }
    }
    ctx->pc = 0x281AE4u;
    // 0x281ae4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x281ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281ae8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x281ae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281aec: 0x0  nop
    ctx->pc = 0x281aecu;
    // NOP
    // 0x281af0: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
    ctx->pc = 0x281AF0u;
    {
        const bool branch_taken_0x281af0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x281AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281AF0u;
        // 0x281af4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281af0) {
            ctx->pc = 0x281C24u;
            goto label_281c24;
        }
    }
    ctx->pc = 0x281AF8u;
    // 0x281af8: 0xc44f004c  lwc1        $f15, 0x4C($v0)
    ctx->pc = 0x281af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x281afc: 0xc44e0038  lwc1        $f14, 0x38($v0)
    ctx->pc = 0x281afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x281b00: 0x46187bc2  mul.s       $f15, $f15, $f24
    ctx->pc = 0x281b00u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[24]);
    // 0x281b04: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x281b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x281b08: 0x0  nop
    ctx->pc = 0x281b08u;
    // NOP
    // 0x281b0c: 0x0  nop
    ctx->pc = 0x281b0cu;
    // NOP
    // 0x281b10: 0x46157bc3  div.s       $f15, $f15, $f21
    ctx->pc = 0x281b10u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[21];
    // 0x281b14: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x281B14u;
    SET_GPR_U32(ctx, 31, 0x281B1Cu);
    ctx->pc = 0x281B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281B14u;
    // 0x281b18: 0xc44d0034  lwc1        $f13, 0x34($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x281B14u, 0x281B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B1Cu;
label_281b1c:
    // 0x281b1c: 0x8e060bcc  lw          $a2, 0xBCC($s0)
    ctx->pc = 0x281b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
    // 0x281b20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x281b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281b24: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x281b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x281b28: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x281b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x281b2c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x281b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x281b30: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x281b30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x281b34: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x281b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x281b38: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x281b38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x281b3c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x281B3Cu;
    SET_GPR_U32(ctx, 31, 0x281B44u);
    ctx->pc = 0x281B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281B3Cu;
    // 0x281b40: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x281B3Cu, 0x281B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B44u;
label_281b44:
    // 0x281b44: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x281b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281b48: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x281b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x281b4c: 0xc7808834  lwc1        $f0, -0x77CC($gp)
    ctx->pc = 0x281b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281b50: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x281b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281b54: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x281b54u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x281b58: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x281b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281b5c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x281b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281b60: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x281b60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x281b64: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x281b64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x281b68: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x281b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x281b6c: 0x8c620180  lw          $v0, 0x180($v1)
    ctx->pc = 0x281b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x281b70: 0xc46e0094  lwc1        $f14, 0x94($v1)
    ctx->pc = 0x281b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x281b74: 0xc44f004c  lwc1        $f15, 0x4C($v0)
    ctx->pc = 0x281b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x281b78: 0xc46c008c  lwc1        $f12, 0x8C($v1)
    ctx->pc = 0x281b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x281b7c: 0x46187bc2  mul.s       $f15, $f15, $f24
    ctx->pc = 0x281b7cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[24]);
    // 0x281b80: 0x0  nop
    ctx->pc = 0x281b80u;
    // NOP
    // 0x281b84: 0x0  nop
    ctx->pc = 0x281b84u;
    // NOP
    // 0x281b88: 0x46157bc3  div.s       $f15, $f15, $f21
    ctx->pc = 0x281b88u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[21];
    // 0x281b8c: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x281B8Cu;
    SET_GPR_U32(ctx, 31, 0x281B94u);
    ctx->pc = 0x281B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281B8Cu;
    // 0x281b90: 0xc46d0090  lwc1        $f13, 0x90($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x281B8Cu, 0x281B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B94u;
label_281b94:
    // 0x281b94: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x281b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281b98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x281b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281b9c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x281b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x281ba0: 0x8cc20180  lw          $v0, 0x180($a2)
    ctx->pc = 0x281ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 384)));
    // 0x281ba4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x281ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x281ba8: 0x8c67005c  lw          $a3, 0x5C($v1)
    ctx->pc = 0x281ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x281bac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x281bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x281bb0: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x281bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x281bb4: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x281bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x281bb8: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x281BB8u;
    SET_GPR_U32(ctx, 31, 0x281BC0u);
    ctx->pc = 0x281BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281BB8u;
    // 0x281bbc: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x281BB8u, 0x281BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281BC0u;
label_281bc0:
    // 0x281bc0: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x281bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281bc4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x281bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281bc8: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x281bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x281bcc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x281bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281bd0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x281bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281bd4: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x281bd4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x281bd8: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x281bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x281bdc: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x281bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281be0: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x281be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281be4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x281be4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x281be8: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x281be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281bec: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x281becu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x281bf0: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x281bf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x281bf4: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x281bf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x281bf8: 0x248400bc  addiu       $a0, $a0, 0xBC
    ctx->pc = 0x281bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 188));
    // 0x281bfc: 0xc0a01e0  jal         func_280780
    ctx->pc = 0x281BFCu;
    SET_GPR_U32(ctx, 31, 0x281C04u);
    ctx->pc = 0x281C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281BFCu;
    // 0x281c00: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x280780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280780u, 0x281BFCu, 0x281C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C04u;
label_281c04:
    // 0x281c04: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x281c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281c08: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x281c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281c0c: 0x0  nop
    ctx->pc = 0x281c0cu;
    // NOP
    // 0x281c10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x281C10u;
    {
        const bool branch_taken_0x281c10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x281C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C10u;
        // 0x281c14: 0x8f879f74  lw          $a3, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281c10) {
            ctx->pc = 0x281C20u;
            goto label_281c20;
        }
    }
    ctx->pc = 0x281C18u;
    // 0x281c18: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x281c18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x281c1c: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x281c1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_281c20:
    // 0x281c20: 0x8f86b59c  lw          $a2, -0x4A64($gp)
    ctx->pc = 0x281c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
label_281c24:
    // 0x281c24: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x281c24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_281c28:
    // 0x281c28: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x281c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x281c2c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x281c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x281c30: 0x1440ff99  bnez        $v0, . + 4 + (-0x67 << 2)
    ctx->pc = 0x281C30u;
    {
        const bool branch_taken_0x281c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C30u;
        // 0x281c34: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281c30) {
            ctx->pc = 0x281A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281a98;
        }
    }
    ctx->pc = 0x281C38u;
label_281c38:
    // 0x281c38: 0x6a00071  bltz        $s5, . + 4 + (0x71 << 2)
    ctx->pc = 0x281C38u;
    {
        const bool branch_taken_0x281c38 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x281C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C38u;
        // 0x281c3c: 0x24031210  addiu       $v1, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281c38) {
            ctx->pc = 0x281E00u;
            goto label_281e00;
        }
    }
    ctx->pc = 0x281C40u;
    // 0x281c40: 0x8f90b238  lw          $s0, -0x4DC8($gp)
    ctx->pc = 0x281c40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x281c44: 0x2a31818  mult        $v1, $s5, $v1
    ctx->pc = 0x281c44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x281c48: 0xc7948838  lwc1        $f20, -0x77C8($gp)
    ctx->pc = 0x281c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x281c4c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x281c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x281c50: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x281c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x281c54: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x281c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x281c58: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x281c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x281c5c: 0x8e020bcc  lw          $v0, 0xBCC($s0)
    ctx->pc = 0x281c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
    // 0x281c60: 0xc44f004c  lwc1        $f15, 0x4C($v0)
    ctx->pc = 0x281c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x281c64: 0xc44e0038  lwc1        $f14, 0x38($v0)
    ctx->pc = 0x281c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x281c68: 0x46147bc2  mul.s       $f15, $f15, $f20
    ctx->pc = 0x281c68u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[20]);
    // 0x281c6c: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x281c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x281c70: 0x0  nop
    ctx->pc = 0x281c70u;
    // NOP
    // 0x281c74: 0x0  nop
    ctx->pc = 0x281c74u;
    // NOP
    // 0x281c78: 0x46157bc3  div.s       $f15, $f15, $f21
    ctx->pc = 0x281c78u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[21];
    // 0x281c7c: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x281C7Cu;
    SET_GPR_U32(ctx, 31, 0x281C84u);
    ctx->pc = 0x281C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281C7Cu;
    // 0x281c80: 0xc44d0034  lwc1        $f13, 0x34($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x281C7Cu, 0x281C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C84u;
label_281c84:
    // 0x281c84: 0x8e060bcc  lw          $a2, 0xBCC($s0)
    ctx->pc = 0x281c84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
    // 0x281c88: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x281c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c8c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x281c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x281c90: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x281c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x281c94: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x281c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x281c98: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x281c98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x281c9c: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x281c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x281ca0: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x281ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x281ca4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x281CA4u;
    SET_GPR_U32(ctx, 31, 0x281CACu);
    ctx->pc = 0x281CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281CA4u;
    // 0x281ca8: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x281CA4u, 0x281CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281CACu;
label_281cac:
    // 0x281cac: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x281cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281cb0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x281cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x281cb4: 0xc781883c  lwc1        $f1, -0x77C4($gp)
    ctx->pc = 0x281cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281cb8: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x281cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281cbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x281cbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x281cc0: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x281cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281cc4: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x281cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281cc8: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x281cc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x281ccc: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x281cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x281cd0: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x281cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x281cd4: 0x8c620180  lw          $v0, 0x180($v1)
    ctx->pc = 0x281cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x281cd8: 0xc46e0094  lwc1        $f14, 0x94($v1)
    ctx->pc = 0x281cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x281cdc: 0xc44f004c  lwc1        $f15, 0x4C($v0)
    ctx->pc = 0x281cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x281ce0: 0xc46c008c  lwc1        $f12, 0x8C($v1)
    ctx->pc = 0x281ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x281ce4: 0x46147bc2  mul.s       $f15, $f15, $f20
    ctx->pc = 0x281ce4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[20]);
    // 0x281ce8: 0x0  nop
    ctx->pc = 0x281ce8u;
    // NOP
    // 0x281cec: 0x0  nop
    ctx->pc = 0x281cecu;
    // NOP
    // 0x281cf0: 0x46157bc3  div.s       $f15, $f15, $f21
    ctx->pc = 0x281cf0u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[21];
    // 0x281cf4: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x281CF4u;
    SET_GPR_U32(ctx, 31, 0x281CFCu);
    ctx->pc = 0x281CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281CF4u;
    // 0x281cf8: 0xc46d0090  lwc1        $f13, 0x90($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x281CF4u, 0x281CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281CFCu;
label_281cfc:
    // 0x281cfc: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x281cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281d00: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x281d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281d04: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x281d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x281d08: 0x8cc20180  lw          $v0, 0x180($a2)
    ctx->pc = 0x281d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 384)));
    // 0x281d0c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x281d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x281d10: 0x8c67005c  lw          $a3, 0x5C($v1)
    ctx->pc = 0x281d10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x281d14: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x281d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x281d18: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x281d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x281d1c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x281d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x281d20: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x281D20u;
    SET_GPR_U32(ctx, 31, 0x281D28u);
    ctx->pc = 0x281D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281D20u;
    // 0x281d24: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x281D20u, 0x281D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281D28u;
label_281d28:
    // 0x281d28: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x281d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x281d2c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x281d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x281d30: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x281d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281d34: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x281d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281d38: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x281d38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x281d3c: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x281d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x281d40: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x281d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281d44: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x281d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x281d48: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x281d48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x281d4c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x281d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281d50: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x281d50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x281d54: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x281d54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x281d58: 0x8c4406e4  lw          $a0, 0x6E4($v0)
    ctx->pc = 0x281d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    // 0x281d5c: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x281d5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x281d60: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x281D60u;
    SET_GPR_U32(ctx, 31, 0x281D68u);
    ctx->pc = 0x281D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281D60u;
    // 0x281d64: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x281D60u, 0x281D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281D68u;
label_281d68:
    // 0x281d68: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x281d68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281d6c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x281d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281d70: 0x8e020bcc  lw          $v0, 0xBCC($s0)
    ctx->pc = 0x281d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
    // 0x281d74: 0xe6200340  swc1        $f0, 0x340($s1)
    ctx->pc = 0x281d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 832), bits); }
    // 0x281d78: 0xc6230100  lwc1        $f3, 0x100($s1)
    ctx->pc = 0x281d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x281d7c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x281d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281d80: 0xc7828840  lwc1        $f2, -0x77C0($gp)
    ctx->pc = 0x281d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281d84: 0xe6200344  swc1        $f0, 0x344($s1)
    ctx->pc = 0x281d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 836), bits); }
    // 0x281d88: 0xc62400fc  lwc1        $f4, 0xFC($s1)
    ctx->pc = 0x281d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x281d8c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x281d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281d90: 0xae22033c  sw          $v0, 0x33C($s1)
    ctx->pc = 0x281d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 2));
    // 0x281d94: 0xe6210348  swc1        $f1, 0x348($s1)
    ctx->pc = 0x281d94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 840), bits); }
    // 0x281d98: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x281d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281d9c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x281d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281da0: 0x0  nop
    ctx->pc = 0x281da0u;
    // NOP
    // 0x281da4: 0x0  nop
    ctx->pc = 0x281da4u;
    // NOP
    // 0x281da8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x281da8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x281dac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x281dacu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x281db0: 0x0  nop
    ctx->pc = 0x281db0u;
    // NOP
    // 0x281db4: 0x0  nop
    ctx->pc = 0x281db4u;
    // NOP
    // 0x281db8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x281db8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x281dbc: 0x0  nop
    ctx->pc = 0x281dbcu;
    // NOP
    // 0x281dc0: 0x0  nop
    ctx->pc = 0x281dc0u;
    // NOP
    // 0x281dc4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x281dc4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x281dc8: 0xe6200324  swc1        $f0, 0x324($s1)
    ctx->pc = 0x281dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 804), bits); }
    // 0x281dcc: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x281dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281dd0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x281dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281dd4: 0x0  nop
    ctx->pc = 0x281dd4u;
    // NOP
    // 0x281dd8: 0x0  nop
    ctx->pc = 0x281dd8u;
    // NOP
    // 0x281ddc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x281ddcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x281de0: 0x0  nop
    ctx->pc = 0x281de0u;
    // NOP
    // 0x281de4: 0x0  nop
    ctx->pc = 0x281de4u;
    // NOP
    // 0x281de8: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x281de8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x281dec: 0x0  nop
    ctx->pc = 0x281decu;
    // NOP
    // 0x281df0: 0x0  nop
    ctx->pc = 0x281df0u;
    // NOP
    // 0x281df4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x281df4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x281df8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x281DF8u;
    {
        const bool branch_taken_0x281df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281DF8u;
        // 0x281dfc: 0xe6210328  swc1        $f1, 0x328($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 808), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x281df8) {
            ctx->pc = 0x281E90u;
            goto label_281e90;
        }
    }
    ctx->pc = 0x281E00u;
label_281e00:
    // 0x281e00: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x281e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281e04: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x281e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x281e08: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x281E08u;
    SET_GPR_U32(ctx, 31, 0x281E10u);
    ctx->pc = 0x281E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281E08u;
    // 0x281e0c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x281E08u, 0x281E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281E10u;
label_281e10:
    // 0x281e10: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x281e10u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x281e14: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x281e14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281e18: 0x4600b807  neg.s       $f0, $f23
    ctx->pc = 0x281e18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[23]);
    // 0x281e1c: 0xc7828844  lwc1        $f2, -0x77BC($gp)
    ctx->pc = 0x281e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281e20: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x281e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x281e24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x281e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e28: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x281e28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x281e2c: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x281e2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x281e30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x281e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x281e34: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x281E34u;
    {
        const bool branch_taken_0x281e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E34u;
        // 0x281e38: 0xe6200324  swc1        $f0, 0x324($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 804), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x281e34) {
            ctx->pc = 0x281E78u;
            goto label_281e78;
        }
    }
    ctx->pc = 0x281E3Cu;
    // 0x281e3c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x281E3Cu;
    {
        const bool branch_taken_0x281e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281e3c) {
            ctx->pc = 0x281E80u;
            goto label_281e80;
        }
    }
    ctx->pc = 0x281E44u;
label_281e44:
    // 0x281e44: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x281E44u;
    SET_GPR_U32(ctx, 31, 0x281E4Cu);
    ctx->pc = 0x281E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281E44u;
    // 0x281e48: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x281E44u, 0x281E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281E4Cu;
label_281e4c:
    // 0x281e4c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x281e4cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x281e50: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x281e50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281e54: 0x4600b807  neg.s       $f0, $f23
    ctx->pc = 0x281e54u;
    ctx->f[0] = FPU_NEG_S(ctx->f[23]);
    // 0x281e58: 0xc7828848  lwc1        $f2, -0x77B8($gp)
    ctx->pc = 0x281e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281e5c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x281e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x281e60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x281e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e64: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x281e64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x281e68: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x281e68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x281e6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x281e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x281e70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x281E70u;
    {
        const bool branch_taken_0x281e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E70u;
        // 0x281e74: 0xe6200324  swc1        $f0, 0x324($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 804), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x281e70) {
            ctx->pc = 0x281E80u;
            goto label_281e80;
        }
    }
    ctx->pc = 0x281E78u;
label_281e78:
    // 0x281e78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x281E78u;
    {
        const bool branch_taken_0x281e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E78u;
        // 0x281e7c: 0x46020802  mul.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281e78) {
            ctx->pc = 0x281E88u;
            goto label_281e88;
        }
    }
    ctx->pc = 0x281E80u;
label_281e80:
    // 0x281e80: 0xc780884c  lwc1        $f0, -0x77B4($gp)
    ctx->pc = 0x281e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281e84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x281e84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_281e88:
    // 0x281e88: 0xe4800328  swc1        $f0, 0x328($a0)
    ctx->pc = 0x281e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 808), bits); }
    // 0x281e8c: 0xac80033c  sw          $zero, 0x33C($a0)
    ctx->pc = 0x281e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 828), GPR_U32(ctx, 0));
label_281e90:
    // 0x281e90: 0xc622032c  lwc1        $f2, 0x32C($s1)
    ctx->pc = 0x281e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281e94: 0xc6230330  lwc1        $f3, 0x330($s1)
    ctx->pc = 0x281e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x281e98: 0xc6200324  lwc1        $f0, 0x324($s1)
    ctx->pc = 0x281e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281e9c: 0xc6210328  lwc1        $f1, 0x328($s1)
    ctx->pc = 0x281e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281ea0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x281ea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x281ea4: 0xc7848850  lwc1        $f4, -0x77B0($gp)
    ctx->pc = 0x281ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x281ea8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x281ea8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x281eac: 0xc785b468  lwc1        $f5, -0x4B98($gp)
    ctx->pc = 0x281eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x281eb0: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x281eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x281eb4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x281eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x281eb8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x281eb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x281ebc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x281ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x281ec0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x281ec0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x281ec4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x281ec4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x281ec8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x281ec8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x281ecc: 0xe622032c  swc1        $f2, 0x32C($s1)
    ctx->pc = 0x281eccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 812), bits); }
    // 0x281ed0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x281ED0u;
    {
        const bool branch_taken_0x281ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281ED0u;
        // 0x281ed4: 0xe6230330  swc1        $f3, 0x330($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 816), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ed0) {
            ctx->pc = 0x281F00u;
            goto label_281f00;
        }
    }
    ctx->pc = 0x281ED8u;
    // 0x281ed8: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x281ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x281edc: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x281EDCu;
    SET_GPR_U32(ctx, 31, 0x281EE4u);
    ctx->pc = 0x281EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281EDCu;
    // 0x281ee0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x281EDCu, 0x281EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281EE4u;
label_281ee4:
    // 0x281ee4: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x281ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281ee8: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x281ee8u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x281eec: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x281eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x281ef0: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x281EF0u;
    SET_GPR_U32(ctx, 31, 0x281EF8u);
    ctx->pc = 0x281EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281EF0u;
    // 0x281ef4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x281EF0u, 0x281EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281EF8u;
label_281ef8:
    // 0x281ef8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x281EF8u;
    {
        const bool branch_taken_0x281ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281EF8u;
        // 0x281efc: 0x46000746  mov.s       $f29, $f0 (Delay Slot)
        ctx->f[29] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ef8) {
            ctx->pc = 0x281F24u;
            goto label_281f24;
        }
    }
    ctx->pc = 0x281F00u;
label_281f00:
    // 0x281f00: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x281f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x281f04: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x281F04u;
    SET_GPR_U32(ctx, 31, 0x281F0Cu);
    ctx->pc = 0x281F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281F04u;
    // 0x281f08: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x281F04u, 0x281F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281F0Cu;
label_281f0c:
    // 0x281f0c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x281f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281f10: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x281f10u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x281f14: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x281f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x281f18: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x281F18u;
    SET_GPR_U32(ctx, 31, 0x281F20u);
    ctx->pc = 0x281F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281F18u;
    // 0x281f1c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x281F18u, 0x281F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281F20u;
label_281f20:
    // 0x281f20: 0x46000746  mov.s       $f29, $f0
    ctx->pc = 0x281f20u;
    ctx->f[29] = FPU_MOV_S(ctx->f[0]);
label_281f24:
    // 0x281f24: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x281f24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x281f28: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x281f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x281f2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x281f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x281f30: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x281F30u;
    {
        const bool branch_taken_0x281f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F30u;
        // 0x281f34: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f30) {
            ctx->pc = 0x281F90u;
            goto label_281f90;
        }
    }
    ctx->pc = 0x281F38u;
    // 0x281f38: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x281f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x281f3c: 0xc78c8854  lwc1        $f12, -0x77AC($gp)
    ctx->pc = 0x281f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x281f40: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x281f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x281f44: 0xc088f98  jal         func_223E60
    ctx->pc = 0x281F44u;
    SET_GPR_U32(ctx, 31, 0x281F4Cu);
    ctx->pc = 0x281F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281F44u;
    // 0x281f48: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x281F44u, 0x281F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281F4Cu;
label_281f4c:
    // 0x281f4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x281f4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281f50: 0x4600c832  c.eq.s      $f25, $f0
    ctx->pc = 0x281f50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281f54: 0x0  nop
    ctx->pc = 0x281f54u;
    // NOP
    // 0x281f58: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x281F58u;
    {
        const bool branch_taken_0x281f58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x281F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F58u;
        // 0x281f5c: 0x8f91b234  lw          $s1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f58) {
            ctx->pc = 0x281F74u;
            goto label_281f74;
        }
    }
    ctx->pc = 0x281F60u;
    // 0x281f60: 0x4600e832  c.eq.s      $f29, $f0
    ctx->pc = 0x281f60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[29], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281f64: 0x0  nop
    ctx->pc = 0x281f64u;
    // NOP
    // 0x281f68: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x281F68u;
    {
        const bool branch_taken_0x281f68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x281f68) {
            ctx->pc = 0x281F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281F68u;
            // 0x281f6c: 0xc620006c  lwc1        $f0, 0x6C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x281F94u;
            goto label_281f94;
        }
    }
    ctx->pc = 0x281F70u;
    // 0x281f70: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x281f70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_281f74:
    // 0x281f74: 0xc7808858  lwc1        $f0, -0x77A8($gp)
    ctx->pc = 0x281f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281f78: 0xc621006c  lwc1        $f1, 0x6C($s1)
    ctx->pc = 0x281f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281f7c: 0xc6220070  lwc1        $f2, 0x70($s1)
    ctx->pc = 0x281f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281f80: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x281f80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x281f84: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x281f84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x281f88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x281F88u;
    {
        const bool branch_taken_0x281f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F88u;
        // 0x281f8c: 0xe6210078  swc1        $f1, 0x78($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f88) {
            ctx->pc = 0x281FA0u;
            goto label_281fa0;
        }
    }
    ctx->pc = 0x281F90u;
label_281f90:
    // 0x281f90: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x281f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_281f94:
    // 0x281f94: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x281f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281f98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x281f98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x281f9c: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x281f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
label_281fa0:
    // 0x281fa0: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x281fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281fa4: 0xc6230074  lwc1        $f3, 0x74($s1)
    ctx->pc = 0x281fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x281fa8: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x281fa8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281fac: 0x0  nop
    ctx->pc = 0x281facu;
    // NOP
    // 0x281fb0: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
    ctx->pc = 0x281FB0u;
    {
        const bool branch_taken_0x281fb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x281fb0) {
            ctx->pc = 0x281FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281FB0u;
            // 0x281fb4: 0x8e220180  lw          $v0, 0x180($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282000u;
            goto label_282000;
        }
    }
    ctx->pc = 0x281FB8u;
    // 0x281fb8: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x281fb8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x281fbc: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x281fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281fc0: 0xc780885c  lwc1        $f0, -0x77A4($gp)
    ctx->pc = 0x281fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281fc4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x281fc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x281fc8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x281fc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281fcc: 0x0  nop
    ctx->pc = 0x281fccu;
    // NOP
    // 0x281fd0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x281FD0u;
    {
        const bool branch_taken_0x281fd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x281fd0) {
            ctx->pc = 0x281FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281FD0u;
            // 0x281fd4: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x281FD8u;
            goto label_281fd8;
        }
    }
    ctx->pc = 0x281FD8u;
label_281fd8:
    // 0x281fd8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x281fd8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x281fdc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x281fdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281fe0: 0x0  nop
    ctx->pc = 0x281fe0u;
    // NOP
    // 0x281fe4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x281FE4u;
    {
        const bool branch_taken_0x281fe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x281fe4) {
            ctx->pc = 0x281FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281FE4u;
            // 0x281fe8: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x281FECu;
            goto label_281fec;
        }
    }
    ctx->pc = 0x281FECu;
label_281fec:
    // 0x281fec: 0xc7808860  lwc1        $f0, -0x77A0($gp)
    ctx->pc = 0x281fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281ff0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x281ff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x281ff4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x281ff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x281ff8: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x281ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x281ffc: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x281ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_282000:
    // 0x282000: 0x8c500160  lw          $s0, 0x160($v0)
    ctx->pc = 0x282000u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x282004: 0x8e0411a4  lw          $a0, 0x11A4($s0)
    ctx->pc = 0x282004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4516)));
    // 0x282008: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x282008u;
    {
        const bool branch_taken_0x282008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282008u;
        // 0x28200c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282008) {
            ctx->pc = 0x28202Cu;
            goto label_28202c;
        }
    }
    ctx->pc = 0x282010u;
    // 0x282010: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x282010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282014: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x282014u;
    {
        const bool branch_taken_0x282014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x282014) {
            ctx->pc = 0x282018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282014u;
            // 0x282018: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282030u;
            goto label_282030;
        }
    }
    ctx->pc = 0x28201Cu;
    // 0x28201c: 0xc0ab870  jal         func_2AE1C0
    ctx->pc = 0x28201Cu;
    SET_GPR_U32(ctx, 31, 0x282024u);
    ctx->pc = 0x2AE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE1C0u, 0x28201Cu, 0x282024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282024u;
label_282024:
    // 0x282024: 0xae0011a4  sw          $zero, 0x11A4($s0)
    ctx->pc = 0x282024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4516), GPR_U32(ctx, 0));
    // 0x282028: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x282028u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_28202c:
    // 0x28202c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x28202cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_282030:
    // 0x282030: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x282030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x282034: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x282034u;
    {
        const bool branch_taken_0x282034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282034u;
        // 0x282038: 0x8e230120  lw          $v1, 0x120($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282034) {
            ctx->pc = 0x282050u;
            goto label_282050;
        }
    }
    ctx->pc = 0x28203Cu;
    // 0x28203c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x28203cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x282040: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282044: 0x4600ffc2  mul.s       $f31, $f31, $f0
    ctx->pc = 0x282044u;
    ctx->f[31] = FPU_MUL_S(ctx->f[31], ctx->f[0]);
    // 0x282048: 0x4600ce42  mul.s       $f25, $f25, $f0
    ctx->pc = 0x282048u;
    ctx->f[25] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x28204c: 0x4600ef42  mul.s       $f29, $f29, $f0
    ctx->pc = 0x28204cu;
    ctx->f[29] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
label_282050:
    // 0x282050: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x282050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282054: 0x10640038  beq         $v1, $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x282054u;
    {
        const bool branch_taken_0x282054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x282058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282054u;
        // 0x282058: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282054) {
            ctx->pc = 0x282138u;
            goto label_282138;
        }
    }
    ctx->pc = 0x28205Cu;
    // 0x28205c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28205Cu;
    {
        const bool branch_taken_0x28205c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28205Cu;
        // 0x282060: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28205c) {
            ctx->pc = 0x282074u;
            goto label_282074;
        }
    }
    ctx->pc = 0x282064u;
    // 0x282064: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x282064u;
    {
        const bool branch_taken_0x282064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x282064) {
            ctx->pc = 0x282084u;
            goto label_282084;
        }
    }
    ctx->pc = 0x28206Cu;
    // 0x28206c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x28206Cu;
    {
        const bool branch_taken_0x28206c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28206Cu;
        // 0x282070: 0x8e230128  lw          $v1, 0x128($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28206c) {
            ctx->pc = 0x282194u;
            goto label_282194;
        }
    }
    ctx->pc = 0x282074u;
label_282074:
    // 0x282074: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x282074u;
    {
        const bool branch_taken_0x282074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x282074) {
            ctx->pc = 0x28217Cu;
            goto label_28217c;
        }
    }
    ctx->pc = 0x28207Cu;
    // 0x28207c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x28207Cu;
    {
        const bool branch_taken_0x28207c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28207Cu;
        // 0x282080: 0x8e230128  lw          $v1, 0x128($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28207c) {
            ctx->pc = 0x282194u;
            goto label_282194;
        }
    }
    ctx->pc = 0x282084u;
label_282084:
    // 0x282084: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x282084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282088: 0x4601b032  c.eq.s      $f22, $f1
    ctx->pc = 0x282088u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28208c: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x28208Cu;
    {
        const bool branch_taken_0x28208c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28208c) {
            ctx->pc = 0x2820D4u;
            goto label_2820d4;
        }
    }
    ctx->pc = 0x282094u;
    // 0x282094: 0x46190836  c.le.s      $f1, $f25
    ctx->pc = 0x282094u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282098: 0x0  nop
    ctx->pc = 0x282098u;
    // NOP
    // 0x28209c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x28209Cu;
    {
        const bool branch_taken_0x28209c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28209c) {
            ctx->pc = 0x2820A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28209Cu;
            // 0x2820a0: 0x4600c807  neg.s       $f0, $f25 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[25]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2820BCu;
            goto label_2820bc;
        }
    }
    ctx->pc = 0x2820A4u;
    // 0x2820a4: 0x46190834  c.lt.s      $f1, $f25
    ctx->pc = 0x2820a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2820a8: 0x0  nop
    ctx->pc = 0x2820a8u;
    // NOP
    // 0x2820ac: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2820ACu;
    {
        const bool branch_taken_0x2820ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2820B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820ACu;
        // 0x2820b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2820ac) {
            ctx->pc = 0x2820CCu;
            goto label_2820cc;
        }
    }
    ctx->pc = 0x2820B4u;
    // 0x2820b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2820B4u;
    {
        const bool branch_taken_0x2820b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2820b4) {
            ctx->pc = 0x2820D4u;
            goto label_2820d4;
        }
    }
    ctx->pc = 0x2820BCu;
label_2820bc:
    // 0x2820bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2820bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2820c0: 0x0  nop
    ctx->pc = 0x2820c0u;
    // NOP
    // 0x2820c4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2820C4u;
    {
        const bool branch_taken_0x2820c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2820C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820C4u;
        // 0x2820c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2820c4) {
            ctx->pc = 0x2820D4u;
            goto label_2820d4;
        }
    }
    ctx->pc = 0x2820CCu;
label_2820cc:
    // 0x2820cc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2820CCu;
    {
        const bool branch_taken_0x2820cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2820D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820CCu;
        // 0x2820d0: 0xae220120  sw          $v0, 0x120($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2820cc) {
            ctx->pc = 0x282190u;
            goto label_282190;
        }
    }
    ctx->pc = 0x2820D4u;
label_2820d4:
    // 0x2820d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2820d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2820d8: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x2820d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2820dc: 0x0  nop
    ctx->pc = 0x2820dcu;
    // NOP
    // 0x2820e0: 0x4502002c  bc1fl       . + 4 + (0x2C << 2)
    ctx->pc = 0x2820E0u;
    {
        const bool branch_taken_0x2820e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2820e0) {
            ctx->pc = 0x2820E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2820E0u;
            // 0x2820e4: 0x8e230128  lw          $v1, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282194u;
            goto label_282194;
        }
    }
    ctx->pc = 0x2820E8u;
    // 0x2820e8: 0x46190036  c.le.s      $f0, $f25
    ctx->pc = 0x2820e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2820ec: 0x0  nop
    ctx->pc = 0x2820ecu;
    // NOP
    // 0x2820f0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2820F0u;
    {
        const bool branch_taken_0x2820f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2820f0) {
            ctx->pc = 0x2820F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2820F0u;
            // 0x2820f4: 0x4600c847  neg.s       $f1, $f25 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[25]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x282118u;
            goto label_282118;
        }
    }
    ctx->pc = 0x2820F8u;
    // 0x2820f8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2820f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2820fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2820fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282100: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x282100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282104: 0x0  nop
    ctx->pc = 0x282104u;
    // NOP
    // 0x282108: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x282108u;
    {
        const bool branch_taken_0x282108 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282108u;
        // 0x28210c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282108) {
            ctx->pc = 0x282130u;
            goto label_282130;
        }
    }
    ctx->pc = 0x282110u;
    // 0x282110: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x282110u;
    {
        const bool branch_taken_0x282110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282110u;
        // 0x282114: 0x8e230128  lw          $v1, 0x128($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282110) {
            ctx->pc = 0x282194u;
            goto label_282194;
        }
    }
    ctx->pc = 0x282118u;
label_282118:
    // 0x282118: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x282118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x28211c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28211cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282120: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x282120u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282124: 0x0  nop
    ctx->pc = 0x282124u;
    // NOP
    // 0x282128: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x282128u;
    {
        const bool branch_taken_0x282128 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282128u;
        // 0x28212c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282128) {
            ctx->pc = 0x282190u;
            goto label_282190;
        }
    }
    ctx->pc = 0x282130u;
label_282130:
    // 0x282130: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x282130u;
    {
        const bool branch_taken_0x282130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282130u;
        // 0x282134: 0xae220120  sw          $v0, 0x120($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282130) {
            ctx->pc = 0x282190u;
            goto label_282190;
        }
    }
    ctx->pc = 0x282138u;
label_282138:
    // 0x282138: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x282138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28213c: 0x46190836  c.le.s      $f1, $f25
    ctx->pc = 0x28213cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282140: 0x0  nop
    ctx->pc = 0x282140u;
    // NOP
    // 0x282144: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x282144u;
    {
        const bool branch_taken_0x282144 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x282144) {
            ctx->pc = 0x282148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282144u;
            // 0x282148: 0x4600c807  neg.s       $f0, $f25 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[25]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x282164u;
            goto label_282164;
        }
    }
    ctx->pc = 0x28214Cu;
    // 0x28214c: 0x4601c832  c.eq.s      $f25, $f1
    ctx->pc = 0x28214cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[25], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282150: 0x0  nop
    ctx->pc = 0x282150u;
    // NOP
    // 0x282154: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x282154u;
    {
        const bool branch_taken_0x282154 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282154) {
            ctx->pc = 0x282158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282154u;
            // 0x282158: 0xae200120  sw          $zero, 0x120($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282190u;
            goto label_282190;
        }
    }
    ctx->pc = 0x28215Cu;
    // 0x28215c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28215Cu;
    {
        const bool branch_taken_0x28215c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28215Cu;
        // 0x282160: 0x8e230128  lw          $v1, 0x128($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28215c) {
            ctx->pc = 0x282194u;
            goto label_282194;
        }
    }
    ctx->pc = 0x282164u;
label_282164:
    // 0x282164: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x282164u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282168: 0x0  nop
    ctx->pc = 0x282168u;
    // NOP
    // 0x28216c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x28216Cu;
    {
        const bool branch_taken_0x28216c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28216c) {
            ctx->pc = 0x282170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28216Cu;
            // 0x282170: 0x8e230128  lw          $v1, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282194u;
            goto label_282194;
        }
    }
    ctx->pc = 0x282174u;
    // 0x282174: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x282174u;
    {
        const bool branch_taken_0x282174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282174u;
        // 0x282178: 0xae200120  sw          $zero, 0x120($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282174) {
            ctx->pc = 0x282190u;
            goto label_282190;
        }
    }
    ctx->pc = 0x28217Cu;
label_28217c:
    // 0x28217c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28217cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282180: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x282180u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282184: 0x0  nop
    ctx->pc = 0x282184u;
    // NOP
    // 0x282188: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x282188u;
    {
        const bool branch_taken_0x282188 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x282188) {
            ctx->pc = 0x28218Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282188u;
            // 0x28218c: 0xae240120  sw          $a0, 0x120($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282190u;
            goto label_282190;
        }
    }
    ctx->pc = 0x282190u;
label_282190:
    // 0x282190: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x282190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_282194:
    // 0x282194: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x282194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x282198: 0x106200bf  beq         $v1, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x282198u;
    {
        const bool branch_taken_0x282198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282198u;
        // 0x28219c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282198) {
            ctx->pc = 0x282498u;
            goto label_282498;
        }
    }
    ctx->pc = 0x2821A0u;
    // 0x2821a0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2821a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2821a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2821a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2821a8: 0xc6220104  lwc1        $f2, 0x104($s1)
    ctx->pc = 0x2821a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2821ac: 0xc7808864  lwc1        $f0, -0x779C($gp)
    ctx->pc = 0x2821acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2821b0: 0x0  nop
    ctx->pc = 0x2821b0u;
    // NOP
    // 0x2821b4: 0x0  nop
    ctx->pc = 0x2821b4u;
    // NOP
    // 0x2821b8: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x2821b8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
    // 0x2821bc: 0xc783b468  lwc1        $f3, -0x4B98($gp)
    ctx->pc = 0x2821bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2821c0: 0x4600f802  mul.s       $f0, $f31, $f0
    ctx->pc = 0x2821c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[31], ctx->f[0]);
    // 0x2821c4: 0xc6210114  lwc1        $f1, 0x114($s1)
    ctx->pc = 0x2821c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2821c8: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x2821c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2821cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2821ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2821d0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2821d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2821d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2821d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2821d8: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2821D8u;
    {
        const bool branch_taken_0x2821d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2821DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821D8u;
        // 0x2821dc: 0xe6210114  swc1        $f1, 0x114($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2821d8) {
            ctx->pc = 0x282260u;
            goto label_282260;
        }
    }
    ctx->pc = 0x2821E0u;
    // 0x2821e0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2821e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2821e4: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2821e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2821e8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2821e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2821ec: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2821ECu;
    {
        const bool branch_taken_0x2821ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2821ec) {
            ctx->pc = 0x282260u;
            goto label_282260;
        }
    }
    ctx->pc = 0x2821F4u;
    // 0x2821f4: 0xc620011c  lwc1        $f0, 0x11C($s1)
    ctx->pc = 0x2821f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2821f8: 0xc7818868  lwc1        $f1, -0x7798($gp)
    ctx->pc = 0x2821f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2821fc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2821fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x282200: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x282200u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x282204: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x282204u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x282208: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x282208u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28220c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x28220cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282210: 0x0  nop
    ctx->pc = 0x282210u;
    // NOP
    // 0x282214: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x282214u;
    {
        const bool branch_taken_0x282214 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282214u;
        // 0x282218: 0xe621011c  swc1        $f1, 0x11C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282214) {
            ctx->pc = 0x28223Cu;
            goto label_28223c;
        }
    }
    ctx->pc = 0x28221Cu;
    // 0x28221c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28221cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x282220: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282224: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x282224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282228: 0x0  nop
    ctx->pc = 0x282228u;
    // NOP
    // 0x28222c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x28222Cu;
    {
        const bool branch_taken_0x28222c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x282230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28222Cu;
        // 0x282230: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28222c) {
            ctx->pc = 0x282258u;
            goto label_282258;
        }
    }
    ctx->pc = 0x282234u;
    // 0x282234: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x282234u;
    {
        const bool branch_taken_0x282234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282234u;
        // 0x282238: 0xc6200114  lwc1        $f0, 0x114($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282234) {
            ctx->pc = 0x2822A0u;
            goto label_2822a0;
        }
    }
    ctx->pc = 0x28223Cu;
label_28223c:
    // 0x28223c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x28223cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x282240: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x282240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x282244: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282248: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x282248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28224c: 0x0  nop
    ctx->pc = 0x28224cu;
    // NOP
    // 0x282250: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x282250u;
    {
        const bool branch_taken_0x282250 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282250u;
        // 0x282254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282250) {
            ctx->pc = 0x282298u;
            goto label_282298;
        }
    }
    ctx->pc = 0x282258u;
label_282258:
    // 0x282258: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x282258u;
    {
        const bool branch_taken_0x282258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282258u;
        // 0x28225c: 0xae220120  sw          $v0, 0x120($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282258) {
            ctx->pc = 0x282298u;
            goto label_282298;
        }
    }
    ctx->pc = 0x282260u;
label_282260:
    // 0x282260: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x282260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x282264: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x282264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282268: 0xc6220104  lwc1        $f2, 0x104($s1)
    ctx->pc = 0x282268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28226c: 0xc780886c  lwc1        $f0, -0x7794($gp)
    ctx->pc = 0x28226cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282270: 0x0  nop
    ctx->pc = 0x282270u;
    // NOP
    // 0x282274: 0x0  nop
    ctx->pc = 0x282274u;
    // NOP
    // 0x282278: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x282278u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
    // 0x28227c: 0xc783b468  lwc1        $f3, -0x4B98($gp)
    ctx->pc = 0x28227cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x282280: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x282280u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x282284: 0xc621011c  lwc1        $f1, 0x11C($s1)
    ctx->pc = 0x282284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282288: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x282288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x28228c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x28228cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x282290: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x282290u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x282294: 0xe621011c  swc1        $f1, 0x11C($s1)
    ctx->pc = 0x282294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
label_282298:
    // 0x282298: 0xc6200114  lwc1        $f0, 0x114($s1)
    ctx->pc = 0x282298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28229c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x28229cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2822a0:
    // 0x2822a0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2822a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2822a4: 0x0  nop
    ctx->pc = 0x2822a4u;
    // NOP
    // 0x2822a8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2822A8u;
    {
        const bool branch_taken_0x2822a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2822ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822A8u;
        // 0x2822ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822a8) {
            ctx->pc = 0x2822E0u;
            goto label_2822e0;
        }
    }
    ctx->pc = 0x2822B0u;
    // 0x2822b0: 0x8f849c94  lw          $a0, -0x636C($gp)
    ctx->pc = 0x2822b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941844)));
    // 0x2822b4: 0x0  nop
    ctx->pc = 0x2822b4u;
    // NOP
label_2822b8:
    // 0x2822b8: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x2822b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2822bc: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2822bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2822c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2822c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2822c4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2822c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2822c8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2822c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2822cc: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x2822ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x2822d0: 0x4501fff9  bc1t        . + 4 + (-0x7 << 2)
    ctx->pc = 0x2822D0u;
    {
        const bool branch_taken_0x2822d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2822d0) {
            ctx->pc = 0x2822B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2822b8;
        }
    }
    ctx->pc = 0x2822D8u;
    // 0x2822d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2822D8u;
    {
        const bool branch_taken_0x2822d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2822DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822D8u;
        // 0x2822dc: 0xc6200114  lwc1        $f0, 0x114($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822d8) {
            ctx->pc = 0x2822E8u;
            goto label_2822e8;
        }
    }
    ctx->pc = 0x2822E0u;
label_2822e0:
    // 0x2822e0: 0x8f849c94  lw          $a0, -0x636C($gp)
    ctx->pc = 0x2822e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941844)));
    // 0x2822e4: 0xc6200114  lwc1        $f0, 0x114($s1)
    ctx->pc = 0x2822e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2822e8:
    // 0x2822e8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2822e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2822ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2822ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2822f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2822f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2822f4: 0x0  nop
    ctx->pc = 0x2822f4u;
    // NOP
    // 0x2822f8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2822F8u;
    {
        const bool branch_taken_0x2822f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2822FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822F8u;
        // 0x2822fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822f8) {
            ctx->pc = 0x28231Cu;
            goto label_28231c;
        }
    }
    ctx->pc = 0x282300u;
label_282300:
    // 0x282300: 0xc4400114  lwc1        $f0, 0x114($v0)
    ctx->pc = 0x282300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282304: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x282304u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x282308: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x282308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28230c: 0xe4400114  swc1        $f0, 0x114($v0)
    ctx->pc = 0x28230cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x282310: 0x0  nop
    ctx->pc = 0x282310u;
    // NOP
    // 0x282314: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x282314u;
    {
        const bool branch_taken_0x282314 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282314) {
            ctx->pc = 0x282300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282300;
        }
    }
    ctx->pc = 0x28231Cu;
label_28231c:
    // 0x28231c: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x28231cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x282320: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x282320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x282324: 0x5462004d  bnel        $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x282324u;
    {
        const bool branch_taken_0x282324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x282324) {
            ctx->pc = 0x282328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282324u;
            // 0x282328: 0xc620011c  lwc1        $f0, 0x11C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28245Cu;
            goto label_28245c;
        }
    }
    ctx->pc = 0x28232Cu;
    // 0x28232c: 0x8e6211b4  lw          $v0, 0x11B4($s3)
    ctx->pc = 0x28232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4532)));
    // 0x282330: 0xc623011c  lwc1        $f3, 0x11C($s1)
    ctx->pc = 0x282330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x282334: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x282334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x282338: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x282338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x28233c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x28233cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x282340: 0xc442004c  lwc1        $f2, 0x4C($v0)
    ctx->pc = 0x282340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282344: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x282344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282348: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x282348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28234c: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x28234cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282350: 0x46020900  add.s       $f4, $f1, $f2
    ctx->pc = 0x282350u;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x282354: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x282354u;
    {
        const bool branch_taken_0x282354 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282354u;
        // 0x282358: 0x460200c0  add.s       $f3, $f0, $f2 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282354) {
            ctx->pc = 0x282360u;
            goto label_282360;
        }
    }
    ctx->pc = 0x28235Cu;
    // 0x28235c: 0xe625011c  swc1        $f5, 0x11C($s1)
    ctx->pc = 0x28235cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
label_282360:
    // 0x282360: 0xc620011c  lwc1        $f0, 0x11C($s1)
    ctx->pc = 0x282360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282364: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x282364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x282368: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x282368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28236c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28236cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282370: 0x0  nop
    ctx->pc = 0x282370u;
    // NOP
    // 0x282374: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x282374u;
    {
        const bool branch_taken_0x282374 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282374) {
            ctx->pc = 0x282378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282374u;
            // 0x282378: 0xe621011c  swc1        $f1, 0x11C($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28237Cu;
            goto label_28237c;
        }
    }
    ctx->pc = 0x28237Cu;
label_28237c:
    // 0x28237c: 0x46032032  c.eq.s      $f4, $f3
    ctx->pc = 0x28237cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282380: 0x0  nop
    ctx->pc = 0x282380u;
    // NOP
    // 0x282384: 0x45030046  bc1tl       . + 4 + (0x46 << 2)
    ctx->pc = 0x282384u;
    {
        const bool branch_taken_0x282384 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282384) {
            ctx->pc = 0x282388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282384u;
            // 0x282388: 0xc6200138  lwc1        $f0, 0x138($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2824A0u;
            goto label_2824a0;
        }
    }
    ctx->pc = 0x28238Cu;
    // 0x28238c: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x28238cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282390: 0x0  nop
    ctx->pc = 0x282390u;
    // NOP
    // 0x282394: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x282394u;
    {
        const bool branch_taken_0x282394 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x282398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282394u;
        // 0x282398: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282394) {
            ctx->pc = 0x2823A8u;
            goto label_2823a8;
        }
    }
    ctx->pc = 0x28239Cu;
    // 0x28239c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x28239cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2823a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2823a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2823a4: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x2823a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_2823a8:
    // 0x2823a8: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2823a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2823ac: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2823acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2823b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2823b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2823b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2823b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2823b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2823b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2823bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2823bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2823c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2823c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2823c4: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x2823c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2823c8: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2823c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2823cc: 0x0  nop
    ctx->pc = 0x2823ccu;
    // NOP
    // 0x2823d0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2823D0u;
    {
        const bool branch_taken_0x2823d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2823D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823D0u;
        // 0x2823d4: 0xc6200114  lwc1        $f0, 0x114($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2823d0) {
            ctx->pc = 0x2823ECu;
            goto label_2823ec;
        }
    }
    ctx->pc = 0x2823D8u;
    // 0x2823d8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2823d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2823dc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2823DCu;
    {
        const bool branch_taken_0x2823dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2823dc) {
            ctx->pc = 0x28240Cu;
            goto label_28240c;
        }
    }
    ctx->pc = 0x2823E4u;
    // 0x2823e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2823E4u;
    {
        const bool branch_taken_0x2823e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2823e4) {
            ctx->pc = 0x2823FCu;
            goto label_2823fc;
        }
    }
    ctx->pc = 0x2823ECu;
label_2823ec:
    // 0x2823ec: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2823ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2823f0: 0x0  nop
    ctx->pc = 0x2823f0u;
    // NOP
    // 0x2823f4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2823F4u;
    {
        const bool branch_taken_0x2823f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2823f4) {
            ctx->pc = 0x2823F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2823F4u;
            // 0x2823f8: 0xe6230114  swc1        $f3, 0x114($s1) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28240Cu;
            goto label_28240c;
        }
    }
    ctx->pc = 0x2823FCu;
label_2823fc:
    // 0x2823fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2823fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282400: 0x0  nop
    ctx->pc = 0x282400u;
    // NOP
    // 0x282404: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x282404u;
    {
        const bool branch_taken_0x282404 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282404) {
            ctx->pc = 0x282408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282404u;
            // 0x282408: 0xe6230114  swc1        $f3, 0x114($s1) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28240Cu;
            goto label_28240c;
        }
    }
    ctx->pc = 0x28240Cu;
label_28240c:
    // 0x28240c: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x28240cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282410: 0x0  nop
    ctx->pc = 0x282410u;
    // NOP
    // 0x282414: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x282414u;
    {
        const bool branch_taken_0x282414 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282414u;
        // 0x282418: 0xc6200114  lwc1        $f0, 0x114($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282414) {
            ctx->pc = 0x282434u;
            goto label_282434;
        }
    }
    ctx->pc = 0x28241Cu;
    // 0x28241c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x28241cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282420: 0x0  nop
    ctx->pc = 0x282420u;
    // NOP
    // 0x282424: 0x4502001e  bc1fl       . + 4 + (0x1E << 2)
    ctx->pc = 0x282424u;
    {
        const bool branch_taken_0x282424 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x282424) {
            ctx->pc = 0x282428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282424u;
            // 0x282428: 0xc6200138  lwc1        $f0, 0x138($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2824A0u;
            goto label_2824a0;
        }
    }
    ctx->pc = 0x28242Cu;
    // 0x28242c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28242Cu;
    {
        const bool branch_taken_0x28242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28242c) {
            ctx->pc = 0x282444u;
            goto label_282444;
        }
    }
    ctx->pc = 0x282434u;
label_282434:
    // 0x282434: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x282434u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282438: 0x0  nop
    ctx->pc = 0x282438u;
    // NOP
    // 0x28243c: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
    ctx->pc = 0x28243Cu;
    {
        const bool branch_taken_0x28243c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28243c) {
            ctx->pc = 0x282440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28243Cu;
            // 0x282440: 0xe6240114  swc1        $f4, 0x114($s1) (Delay Slot)
            { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28249Cu;
            goto label_28249c;
        }
    }
    ctx->pc = 0x282444u;
label_282444:
    // 0x282444: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x282444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282448: 0x0  nop
    ctx->pc = 0x282448u;
    // NOP
    // 0x28244c: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x28244Cu;
    {
        const bool branch_taken_0x28244c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28244c) {
            ctx->pc = 0x282450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28244Cu;
            // 0x282450: 0xc6200138  lwc1        $f0, 0x138($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2824A0u;
            goto label_2824a0;
        }
    }
    ctx->pc = 0x282454u;
    // 0x282454: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x282454u;
    {
        const bool branch_taken_0x282454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282454u;
        // 0x282458: 0xe6240114  swc1        $f4, 0x114($s1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282454) {
            ctx->pc = 0x28249Cu;
            goto label_28249c;
        }
    }
    ctx->pc = 0x28245Cu;
label_28245c:
    // 0x28245c: 0x3c01c248  lui         $at, 0xC248
    ctx->pc = 0x28245cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49736 << 16));
    // 0x282460: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x282460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282464: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x282464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282468: 0x0  nop
    ctx->pc = 0x282468u;
    // NOP
    // 0x28246c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28246Cu;
    {
        const bool branch_taken_0x28246c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28246c) {
            ctx->pc = 0x282470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28246Cu;
            // 0x282470: 0xe621011c  swc1        $f1, 0x11C($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x282474u;
            goto label_282474;
        }
    }
    ctx->pc = 0x282474u;
label_282474:
    // 0x282474: 0xc620011c  lwc1        $f0, 0x11C($s1)
    ctx->pc = 0x282474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282478: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x282478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x28247c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28247cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282480: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x282480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282484: 0x0  nop
    ctx->pc = 0x282484u;
    // NOP
    // 0x282488: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x282488u;
    {
        const bool branch_taken_0x282488 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282488) {
            ctx->pc = 0x28248Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282488u;
            // 0x28248c: 0xe621011c  swc1        $f1, 0x11C($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28249Cu;
            goto label_28249c;
        }
    }
    ctx->pc = 0x282490u;
    // 0x282490: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x282490u;
    {
        const bool branch_taken_0x282490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282490u;
        // 0x282494: 0xc6200138  lwc1        $f0, 0x138($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282490) {
            ctx->pc = 0x2824A0u;
            goto label_2824a0;
        }
    }
    ctx->pc = 0x282498u;
label_282498:
    // 0x282498: 0x8f849c94  lw          $a0, -0x636C($gp)
    ctx->pc = 0x282498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941844)));
label_28249c:
    // 0x28249c: 0xc6200138  lwc1        $f0, 0x138($s1)
    ctx->pc = 0x28249cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2824a0:
    // 0x2824a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2824a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2824a4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2824a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2824a8: 0xc782b468  lwc1        $f2, -0x4B98($gp)
    ctx->pc = 0x2824a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2824ac: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2824acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2824b0: 0xc6210144  lwc1        $f1, 0x144($s1)
    ctx->pc = 0x2824b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2824b4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2824b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2824b8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2824b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2824bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2824bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2824c0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2824c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2824c4: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x2824c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2824c8: 0x0  nop
    ctx->pc = 0x2824c8u;
    // NOP
    // 0x2824cc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2824CCu;
    {
        const bool branch_taken_0x2824cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2824D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2824CCu;
        // 0x2824d0: 0xe6210144  swc1        $f1, 0x144($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2824cc) {
            ctx->pc = 0x2824D8u;
            goto label_2824d8;
        }
    }
    ctx->pc = 0x2824D4u;
    // 0x2824d4: 0xae200144  sw          $zero, 0x144($s1)
    ctx->pc = 0x2824d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 0));
label_2824d8:
    // 0x2824d8: 0xc620013c  lwc1        $f0, 0x13C($s1)
    ctx->pc = 0x2824d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2824dc: 0xc782b468  lwc1        $f2, -0x4B98($gp)
    ctx->pc = 0x2824dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2824e0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2824e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2824e4: 0xc6210148  lwc1        $f1, 0x148($s1)
    ctx->pc = 0x2824e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2824e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2824e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2824ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2824ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2824f0: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x2824f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2824f4: 0x0  nop
    ctx->pc = 0x2824f4u;
    // NOP
    // 0x2824f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2824F8u;
    {
        const bool branch_taken_0x2824f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2824FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2824F8u;
        // 0x2824fc: 0xe6210148  swc1        $f1, 0x148($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2824f8) {
            ctx->pc = 0x282504u;
            goto label_282504;
        }
    }
    ctx->pc = 0x282500u;
    // 0x282500: 0xae200148  sw          $zero, 0x148($s1)
    ctx->pc = 0x282500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 0));
label_282504:
    // 0x282504: 0xc783b468  lwc1        $f3, -0x4B98($gp)
    ctx->pc = 0x282504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x282508: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x282508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x28250c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28250cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282510: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x282510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x282514: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x282514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x282518: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x282518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x28251c: 0xc6210178  lwc1        $f1, 0x178($s1)
    ctx->pc = 0x28251cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282520: 0x0  nop
    ctx->pc = 0x282520u;
    // NOP
    // 0x282524: 0x0  nop
    ctx->pc = 0x282524u;
    // NOP
    // 0x282528: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x282528u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x28252c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28252cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282530: 0x0  nop
    ctx->pc = 0x282530u;
    // NOP
    // 0x282534: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x282534u;
    {
        const bool branch_taken_0x282534 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x282534) {
            ctx->pc = 0x282538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282534u;
            // 0x282538: 0xc6220140  lwc1        $f2, 0x140($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x282598u;
            goto label_282598;
        }
    }
    ctx->pc = 0x28253Cu;
    // 0x28253c: 0xc6210140  lwc1        $f1, 0x140($s1)
    ctx->pc = 0x28253cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282540: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x282540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x282544: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282548: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x282548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28254c: 0x0  nop
    ctx->pc = 0x28254cu;
    // NOP
    // 0x282550: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x282550u;
    {
        const bool branch_taken_0x282550 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x282550) {
            ctx->pc = 0x282554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282550u;
            // 0x282554: 0xc6220138  lwc1        $f2, 0x138($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28256Cu;
            goto label_28256c;
        }
    }
    ctx->pc = 0x282558u;
    // 0x282558: 0xc7808870  lwc1        $f0, -0x7790($gp)
    ctx->pc = 0x282558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28255c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x28255cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x282560: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x282560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x282564: 0xe6200140  swc1        $f0, 0x140($s1)
    ctx->pc = 0x282564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
    // 0x282568: 0xc6220138  lwc1        $f2, 0x138($s1)
    ctx->pc = 0x282568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28256c:
    // 0x28256c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x28256cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x282570: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282574: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x282574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282578: 0x0  nop
    ctx->pc = 0x282578u;
    // NOP
    // 0x28257c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x28257Cu;
    {
        const bool branch_taken_0x28257c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28257Cu;
        // 0x282580: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28257c) {
            ctx->pc = 0x282594u;
            goto label_282594;
        }
    }
    ctx->pc = 0x282584u;
    // 0x282584: 0xc7818874  lwc1        $f1, -0x778C($gp)
    ctx->pc = 0x282584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282588: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x282588u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28258c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x28258cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x282590: 0xe6200138  swc1        $f0, 0x138($s1)
    ctx->pc = 0x282590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 312), bits); }
label_282594:
    // 0x282594: 0xc6220140  lwc1        $f2, 0x140($s1)
    ctx->pc = 0x282594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_282598:
    // 0x282598: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x282598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28259c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28259cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2825a0: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2825a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2825a4: 0x0  nop
    ctx->pc = 0x2825a4u;
    // NOP
    // 0x2825a8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2825A8u;
    {
        const bool branch_taken_0x2825a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2825ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2825A8u;
        // 0x2825ac: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2825a8) {
            ctx->pc = 0x2825C0u;
            goto label_2825c0;
        }
    }
    ctx->pc = 0x2825B0u;
    // 0x2825b0: 0xc7818878  lwc1        $f1, -0x7788($gp)
    ctx->pc = 0x2825b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2825b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2825b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2825b8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2825b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2825bc: 0xe6200140  swc1        $f0, 0x140($s1)
    ctx->pc = 0x2825bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
label_2825c0:
    // 0x2825c0: 0xc6220138  lwc1        $f2, 0x138($s1)
    ctx->pc = 0x2825c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2825c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2825c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2825c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2825c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2825cc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2825ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2825d0: 0x0  nop
    ctx->pc = 0x2825d0u;
    // NOP
    // 0x2825d4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2825D4u;
    {
        const bool branch_taken_0x2825d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2825D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2825D4u;
        // 0x2825d8: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2825d4) {
            ctx->pc = 0x2825ECu;
            goto label_2825ec;
        }
    }
    ctx->pc = 0x2825DCu;
    // 0x2825dc: 0xc781887c  lwc1        $f1, -0x7784($gp)
    ctx->pc = 0x2825dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2825e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2825e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2825e4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2825e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2825e8: 0xe6200138  swc1        $f0, 0x138($s1)
    ctx->pc = 0x2825e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 312), bits); }
label_2825ec:
    // 0x2825ec: 0xc6200138  lwc1        $f0, 0x138($s1)
    ctx->pc = 0x2825ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2825f0: 0xc7818880  lwc1        $f1, -0x7780($gp)
    ctx->pc = 0x2825f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2825f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2825f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2825f8: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2825F8u;
    {
        const bool branch_taken_0x2825f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2825FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2825F8u;
        // 0x2825fc: 0xe620013c  swc1        $f0, 0x13C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 316), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2825f8) {
            ctx->pc = 0x282670u;
            goto label_282670;
        }
    }
    ctx->pc = 0x282600u;
    // 0x282600: 0x8f829c98  lw          $v0, -0x6368($gp)
    ctx->pc = 0x282600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941848)));
    // 0x282604: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x282604u;
    {
        const bool branch_taken_0x282604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282604) {
            ctx->pc = 0x282608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282604u;
            // 0x282608: 0xc620014c  lwc1        $f0, 0x14C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x282674u;
            goto label_282674;
        }
    }
    ctx->pc = 0x28260Cu;
    // 0x28260c: 0xc62c0144  lwc1        $f12, 0x144($s1)
    ctx->pc = 0x28260cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x282610: 0xc7958884  lwc1        $f21, -0x777C($gp)
    ctx->pc = 0x282610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x282614: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x282614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x282618: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x282618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x28261c: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x28261cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x282620: 0xc6340140  lwc1        $f20, 0x140($s1)
    ctx->pc = 0x282620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x282624: 0x0  nop
    ctx->pc = 0x282624u;
    // NOP
    // 0x282628: 0x0  nop
    ctx->pc = 0x282628u;
    // NOP
    // 0x28262c: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x28262cu;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[22];
    // 0x282630: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x282630u;
    SET_GPR_U32(ctx, 31, 0x282638u);
    ctx->pc = 0x282634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282630u;
    // 0x282634: 0x4603a502  mul.s       $f20, $f20, $f3 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x282630u, 0x282638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282638u;
label_282638:
    // 0x282638: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x282638u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x28263c: 0x8f90b234  lw          $s0, -0x4DCC($gp)
    ctx->pc = 0x28263cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x282640: 0xe634014c  swc1        $f20, 0x14C($s1)
    ctx->pc = 0x282640u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 332), bits); }
    // 0x282644: 0xc60c0148  lwc1        $f12, 0x148($s0)
    ctx->pc = 0x282644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x282648: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x282648u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x28264c: 0x0  nop
    ctx->pc = 0x28264cu;
    // NOP
    // 0x282650: 0x0  nop
    ctx->pc = 0x282650u;
    // NOP
    // 0x282654: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x282654u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[22];
    // 0x282658: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x282658u;
    SET_GPR_U32(ctx, 31, 0x282660u);
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x282658u, 0x282660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282660u;
label_282660:
    // 0x282660: 0xc6010140  lwc1        $f1, 0x140($s0)
    ctx->pc = 0x282660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282664: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x282664u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x282668: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x282668u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28266c: 0xe6010150  swc1        $f1, 0x150($s0)
    ctx->pc = 0x28266cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
label_282670:
    // 0x282670: 0xc620014c  lwc1        $f0, 0x14C($s1)
    ctx->pc = 0x282670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_282674:
    // 0x282674: 0xc62c0114  lwc1        $f12, 0x114($s1)
    ctx->pc = 0x282674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x282678: 0xc7968888  lwc1        $f22, -0x7778($gp)
    ctx->pc = 0x282678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x28267c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x28267cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x282680: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x282680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x282684: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x282684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x282688: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x282688u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x28268c: 0x0  nop
    ctx->pc = 0x28268cu;
    // NOP
    // 0x282690: 0x0  nop
    ctx->pc = 0x282690u;
    // NOP
    // 0x282694: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x282694u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x282698: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x282698u;
    SET_GPR_U32(ctx, 31, 0x2826A0u);
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x282698u, 0x2826A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2826A0u;
label_2826a0:
    // 0x2826a0: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2826a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2826a4: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2826a4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x2826a8: 0xc440014c  lwc1        $f0, 0x14C($v0)
    ctx->pc = 0x2826a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2826ac: 0xc44c0114  lwc1        $f12, 0x114($v0)
    ctx->pc = 0x2826acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2826b0: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2826b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2826b4: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x2826b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x2826b8: 0x0  nop
    ctx->pc = 0x2826b8u;
    // NOP
    // 0x2826bc: 0x0  nop
    ctx->pc = 0x2826bcu;
    // NOP
    // 0x2826c0: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x2826c0u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x2826c4: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2826C4u;
    SET_GPR_U32(ctx, 31, 0x2826CCu);
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2826C4u, 0x2826CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2826CCu;
label_2826cc:
    // 0x2826cc: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2826ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2826d0: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x2826d0u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x2826d4: 0xc4400150  lwc1        $f0, 0x150($v0)
    ctx->pc = 0x2826d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2826d8: 0xc44c011c  lwc1        $f12, 0x11C($v0)
    ctx->pc = 0x2826d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2826dc: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2826dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2826e0: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x2826e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x2826e4: 0x0  nop
    ctx->pc = 0x2826e4u;
    // NOP
    // 0x2826e8: 0x0  nop
    ctx->pc = 0x2826e8u;
    // NOP
    // 0x2826ec: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x2826ecu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x2826f0: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2826F0u;
    SET_GPR_U32(ctx, 31, 0x2826F8u);
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2826F0u, 0x2826F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2826F8u;
label_2826f8:
    // 0x2826f8: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2826f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2826fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2826fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x282700: 0xc4400150  lwc1        $f0, 0x150($v0)
    ctx->pc = 0x282700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282704: 0xc44c011c  lwc1        $f12, 0x11C($v0)
    ctx->pc = 0x282704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x282708: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x282708u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x28270c: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x28270cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x282710: 0x0  nop
    ctx->pc = 0x282710u;
    // NOP
    // 0x282714: 0x0  nop
    ctx->pc = 0x282714u;
    // NOP
    // 0x282718: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x282718u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x28271c: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x28271Cu;
    SET_GPR_U32(ctx, 31, 0x282724u);
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x28271Cu, 0x282724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282724u;
label_282724:
    // 0x282724: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x282724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x282728: 0x4617a5c2  mul.s       $f23, $f20, $f23
    ctx->pc = 0x282728u;
    ctx->f[23] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x28272c: 0x4618a502  mul.s       $f20, $f20, $f24
    ctx->pc = 0x28272cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x282730: 0xc44c0114  lwc1        $f12, 0x114($v0)
    ctx->pc = 0x282730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x282734: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x282734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x282738: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x282738u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x28273c: 0xe45400bc  swc1        $f20, 0xBC($v0)
    ctx->pc = 0x28273cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x282740: 0x0  nop
    ctx->pc = 0x282740u;
    // NOP
    // 0x282744: 0x0  nop
    ctx->pc = 0x282744u;
    // NOP
    // 0x282748: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x282748u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x28274c: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x28274Cu;
    SET_GPR_U32(ctx, 31, 0x282754u);
    ctx->pc = 0x282750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28274Cu;
    // 0x282750: 0xe45700c4  swc1        $f23, 0xC4($v0) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x28274Cu, 0x282754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282754u;
label_282754:
    // 0x282754: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x282754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x282758: 0xc44c0114  lwc1        $f12, 0x114($v0)
    ctx->pc = 0x282758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28275c: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x28275cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x282760: 0x0  nop
    ctx->pc = 0x282760u;
    // NOP
    // 0x282764: 0x0  nop
    ctx->pc = 0x282764u;
    // NOP
    // 0x282768: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x282768u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x28276c: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x28276Cu;
    SET_GPR_U32(ctx, 31, 0x282774u);
    ctx->pc = 0x282770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28276Cu;
    // 0x282770: 0x460006c6  mov.s       $f27, $f0 (Delay Slot)
    ctx->f[27] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x28276Cu, 0x282774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282774u;
label_282774:
    // 0x282774: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x282774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x282778: 0xc44c011c  lwc1        $f12, 0x11C($v0)
    ctx->pc = 0x282778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28277c: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x28277cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x282780: 0x0  nop
    ctx->pc = 0x282780u;
    // NOP
    // 0x282784: 0x0  nop
    ctx->pc = 0x282784u;
    // NOP
    // 0x282788: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x282788u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x28278c: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x28278Cu;
    SET_GPR_U32(ctx, 31, 0x282794u);
    ctx->pc = 0x282790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28278Cu;
    // 0x282790: 0x46000686  mov.s       $f26, $f0 (Delay Slot)
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x28278Cu, 0x282794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282794u;
label_282794:
    // 0x282794: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x282794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x282798: 0xc44c011c  lwc1        $f12, 0x11C($v0)
    ctx->pc = 0x282798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28279c: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x28279cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x2827a0: 0x0  nop
    ctx->pc = 0x2827a0u;
    // NOP
    // 0x2827a4: 0x0  nop
    ctx->pc = 0x2827a4u;
    // NOP
    // 0x2827a8: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x2827a8u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x2827ac: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2827ACu;
    SET_GPR_U32(ctx, 31, 0x2827B4u);
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2827ACu, 0x2827B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2827B4u;
label_2827b4:
    // 0x2827b4: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2827b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2827b8: 0x4600d9c7  neg.s       $f7, $f27
    ctx->pc = 0x2827b8u;
    ctx->f[7] = FPU_NEG_S(ctx->f[27]);
    // 0x2827bc: 0xc785888c  lwc1        $f5, -0x7774($gp)
    ctx->pc = 0x2827bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2827c0: 0xc441032c  lwc1        $f1, 0x32C($v0)
    ctx->pc = 0x2827c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2827c4: 0xc4440100  lwc1        $f4, 0x100($v0)
    ctx->pc = 0x2827c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2827c8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2827c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2827cc: 0xc4400330  lwc1        $f0, 0x330($v0)
    ctx->pc = 0x2827ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2827d0: 0xc44600f0  lwc1        $f6, 0xF0($v0)
    ctx->pc = 0x2827d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2827d4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2827d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2827d8: 0xc44300fc  lwc1        $f3, 0xFC($v0)
    ctx->pc = 0x2827d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2827dc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2827dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2827e0: 0xc44200bc  lwc1        $f2, 0xBC($v0)
    ctx->pc = 0x2827e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2827e4: 0xc44400e4  lwc1        $f4, 0xE4($v0)
    ctx->pc = 0x2827e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2827e8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2827e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2827ec: 0xc788b468  lwc1        $f8, -0x4B98($gp)
    ctx->pc = 0x2827ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2827f0: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2827f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2827f4: 0xe44700d4  swc1        $f7, 0xD4($v0)
    ctx->pc = 0x2827f4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2827f8: 0xac4000d8  sw          $zero, 0xD8($v0)
    ctx->pc = 0x2827f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 0));
    // 0x2827fc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2827fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x282800: 0xe45a00dc  swc1        $f26, 0xDC($v0)
    ctx->pc = 0x282800u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 220), bits); }
    // 0x282804: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x282804u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x282808: 0xc7838890  lwc1        $f3, -0x7770($gp)
    ctx->pc = 0x282808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28280c: 0x460341c2  mul.s       $f7, $f8, $f3
    ctx->pc = 0x28280cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x282810: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x282810u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x282814: 0xe6620ba0  swc1        $f2, 0xBA0($s3)
    ctx->pc = 0x282814u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2976), bits); }
    // 0x282818: 0xc441032c  lwc1        $f1, 0x32C($v0)
    ctx->pc = 0x282818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28281c: 0xc4430100  lwc1        $f3, 0x100($v0)
    ctx->pc = 0x28281cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x282820: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x282820u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x282824: 0xc4400330  lwc1        $f0, 0x330($v0)
    ctx->pc = 0x282824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282828: 0xc44600f4  lwc1        $f6, 0xF4($v0)
    ctx->pc = 0x282828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28282c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x28282cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x282830: 0xc44400fc  lwc1        $f4, 0xFC($v0)
    ctx->pc = 0x282830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x282834: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x282834u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x282838: 0xc44200c0  lwc1        $f2, 0xC0($v0)
    ctx->pc = 0x282838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28283c: 0xc44300e8  lwc1        $f3, 0xE8($v0)
    ctx->pc = 0x28283cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x282840: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x282840u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x282844: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x282844u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x282848: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x282848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28284c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x28284cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x282850: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x282850u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x282854: 0xe6620ba4  swc1        $f2, 0xBA4($s3)
    ctx->pc = 0x282854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2980), bits); }
    // 0x282858: 0xc441032c  lwc1        $f1, 0x32C($v0)
    ctx->pc = 0x282858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28285c: 0xc4430100  lwc1        $f3, 0x100($v0)
    ctx->pc = 0x28285cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x282860: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x282860u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x282864: 0xc4400330  lwc1        $f0, 0x330($v0)
    ctx->pc = 0x282864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282868: 0xc44600f8  lwc1        $f6, 0xF8($v0)
    ctx->pc = 0x282868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28286c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x28286cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x282870: 0xc44400fc  lwc1        $f4, 0xFC($v0)
    ctx->pc = 0x282870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x282874: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x282874u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x282878: 0xc44200c4  lwc1        $f2, 0xC4($v0)
    ctx->pc = 0x282878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28287c: 0xc44300ec  lwc1        $f3, 0xEC($v0)
    ctx->pc = 0x28287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x282880: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x282880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x282884: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x282884u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x282888: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x282888u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28288c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x28288cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x282890: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x282890u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x282894: 0xe6620ba8  swc1        $f2, 0xBA8($s3)
    ctx->pc = 0x282894u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2984), bits); }
    // 0x282898: 0xc44106f8  lwc1        $f1, 0x6F8($v0)
    ctx->pc = 0x282898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28289c: 0x46070800  add.s       $f0, $f1, $f7
    ctx->pc = 0x28289cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x2828a0: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x2828a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2828a4: 0x0  nop
    ctx->pc = 0x2828a4u;
    // NOP
    // 0x2828a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2828A8u;
    {
        const bool branch_taken_0x2828a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2828a8) {
            ctx->pc = 0x2828ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2828A8u;
            // 0x2828ac: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
            ctx->f[25] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2828B0u;
            goto label_2828b0;
        }
    }
    ctx->pc = 0x2828B0u;
label_2828b0:
    // 0x2828b0: 0x46070801  sub.s       $f0, $f1, $f7
    ctx->pc = 0x2828b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x2828b4: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x2828b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2828b8: 0x0  nop
    ctx->pc = 0x2828b8u;
    // NOP
    // 0x2828bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2828BCu;
    {
        const bool branch_taken_0x2828bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2828bc) {
            ctx->pc = 0x2828C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2828BCu;
            // 0x2828c0: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
            ctx->f[25] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2828C4u;
            goto label_2828c4;
        }
    }
    ctx->pc = 0x2828C4u;
label_2828c4:
    // 0x2828c4: 0xc7838894  lwc1        $f3, -0x776C($gp)
    ctx->pc = 0x2828c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2828c8: 0xc44206fc  lwc1        $f2, 0x6FC($v0)
    ctx->pc = 0x2828c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2828cc: 0x46034042  mul.s       $f1, $f8, $f3
    ctx->pc = 0x2828ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x2828d0: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x2828d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2828d4: 0x461d0034  c.lt.s      $f0, $f29
    ctx->pc = 0x2828d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[29])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2828d8: 0x0  nop
    ctx->pc = 0x2828d8u;
    // NOP
    // 0x2828dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2828DCu;
    {
        const bool branch_taken_0x2828dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2828dc) {
            ctx->pc = 0x2828E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2828DCu;
            // 0x2828e0: 0x46000746  mov.s       $f29, $f0 (Delay Slot)
            ctx->f[29] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2828E4u;
            goto label_2828e4;
        }
    }
    ctx->pc = 0x2828E4u;
label_2828e4:
    // 0x2828e4: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x2828e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2828e8: 0x4600e834  c.lt.s      $f29, $f0
    ctx->pc = 0x2828e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[29], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2828ec: 0x0  nop
    ctx->pc = 0x2828ecu;
    // NOP
    // 0x2828f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2828F0u;
    {
        const bool branch_taken_0x2828f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2828f0) {
            ctx->pc = 0x2828F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2828F0u;
            // 0x2828f4: 0x46000746  mov.s       $f29, $f0 (Delay Slot)
            ctx->f[29] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2828F8u;
            goto label_2828f8;
        }
    }
    ctx->pc = 0x2828F8u;
label_2828f8:
    // 0x2828f8: 0x4603c842  mul.s       $f1, $f25, $f3
    ctx->pc = 0x2828f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[25], ctx->f[3]);
    // 0x2828fc: 0xc7808898  lwc1        $f0, -0x7768($gp)
    ctx->pc = 0x2828fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282900: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x282900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x282904: 0x4600e802  mul.s       $f0, $f29, $f0
    ctx->pc = 0x282904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
    // 0x282908: 0xe45d06fc  swc1        $f29, 0x6FC($v0)
    ctx->pc = 0x282908u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1788), bits); }
    // 0x28290c: 0x46080e02  mul.s       $f24, $f1, $f8
    ctx->pc = 0x28290cu;
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x282910: 0xe45906f8  swc1        $f25, 0x6F8($v0)
    ctx->pc = 0x282910u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1784), bits); }
    // 0x282914: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x282914u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x282918: 0x4618a034  c.lt.s      $f20, $f24
    ctx->pc = 0x282918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28291c: 0x0  nop
    ctx->pc = 0x28291cu;
    // NOP
    // 0x282920: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x282920u;
    {
        const bool branch_taken_0x282920 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282920u;
        // 0x282924: 0x460805c2  mul.s       $f23, $f0, $f8 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282920) {
            ctx->pc = 0x282930u;
            goto label_282930;
        }
    }
    ctx->pc = 0x282928u;
    // 0x282928: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x282928u;
    {
        const bool branch_taken_0x282928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282928u;
        // 0x28292c: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282928) {
            ctx->pc = 0x282934u;
            goto label_282934;
        }
    }
    ctx->pc = 0x282930u;
label_282930:
    // 0x282930: 0x4600c507  neg.s       $f20, $f24
    ctx->pc = 0x282930u;
    ctx->f[20] = FPU_NEG_S(ctx->f[24]);
label_282934:
    // 0x282934: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x282934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x282938: 0xc088f98  jal         func_223E60
    ctx->pc = 0x282938u;
    SET_GPR_U32(ctx, 31, 0x282940u);
    ctx->pc = 0x28293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282938u;
    // 0x28293c: 0x2404002f  addiu       $a0, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x282938u, 0x282940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282940u;
label_282940:
    // 0x282940: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x282940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x282944: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x282944u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x282948: 0xc088f98  jal         func_223E60
    ctx->pc = 0x282948u;
    SET_GPR_U32(ctx, 31, 0x282950u);
    ctx->pc = 0x28294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282948u;
    // 0x28294c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x282948u, 0x282950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282950u;
label_282950:
    // 0x282950: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x282950u;
    SET_GPR_U32(ctx, 31, 0x282958u);
    ctx->pc = 0x282954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282950u;
    // 0x282954: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x282950u, 0x282958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282958u;
label_282958:
    // 0x282958: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x282958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28295c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x28295Cu;
    SET_GPR_U32(ctx, 31, 0x282964u);
    ctx->pc = 0x282960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28295Cu;
    // 0x282960: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x28295Cu, 0x282964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282964u;
label_282964:
    // 0x282964: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x282964u;
    {
        const bool branch_taken_0x282964 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x282968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282964u;
        // 0x282968: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282964) {
            ctx->pc = 0x282980u;
            goto label_282980;
        }
    }
    ctx->pc = 0x28296Cu;
    // 0x28296c: 0x4600bb07  neg.s       $f12, $f23
    ctx->pc = 0x28296cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[23]);
    // 0x282970: 0xc088f98  jal         func_223E60
    ctx->pc = 0x282970u;
    SET_GPR_U32(ctx, 31, 0x282978u);
    ctx->pc = 0x282974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282970u;
    // 0x282974: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x282970u, 0x282978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282978u;
label_282978:
    // 0x282978: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x282978u;
    {
        const bool branch_taken_0x282978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282978u;
        // 0x28297c: 0x8f91b234  lw          $s1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282978) {
            ctx->pc = 0x282990u;
            goto label_282990;
        }
    }
    ctx->pc = 0x282980u;
label_282980:
    // 0x282980: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x282980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x282984: 0xc088f98  jal         func_223E60
    ctx->pc = 0x282984u;
    SET_GPR_U32(ctx, 31, 0x28298Cu);
    ctx->pc = 0x282988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282984u;
    // 0x282988: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x282984u, 0x28298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28298Cu;
label_28298c:
    // 0x28298c: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x28298cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_282990:
    // 0x282990: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x282990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282994: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x282994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x282998: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282998u;
    {
        const bool branch_taken_0x282998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x28299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282998u;
        // 0x28299c: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282998) {
            ctx->pc = 0x2829A8u;
            goto label_2829a8;
        }
    }
    ctx->pc = 0x2829A0u;
    // 0x2829a0: 0xc6601198  lwc1        $f0, 0x1198($s3)
    ctx->pc = 0x2829a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2829a4: 0xe6600b8c  swc1        $f0, 0xB8C($s3)
    ctx->pc = 0x2829a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2956), bits); }
label_2829a8:
    // 0x2829a8: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x2829a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x2829ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2829acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2829b0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2829B0u;
    {
        const bool branch_taken_0x2829b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2829B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2829B0u;
        // 0x2829b4: 0x2c620008  sltiu       $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829b0) {
            ctx->pc = 0x2829DCu;
            goto label_2829dc;
        }
    }
    ctx->pc = 0x2829B8u;
    // 0x2829b8: 0xc62000bc  lwc1        $f0, 0xBC($s1)
    ctx->pc = 0x2829b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2829bc: 0xc62100c0  lwc1        $f1, 0xC0($s1)
    ctx->pc = 0x2829bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2829c0: 0xc62200c4  lwc1        $f2, 0xC4($s1)
    ctx->pc = 0x2829c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2829c4: 0xe6200704  swc1        $f0, 0x704($s1)
    ctx->pc = 0x2829c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1796), bits); }
    // 0x2829c8: 0xe6210708  swc1        $f1, 0x708($s1)
    ctx->pc = 0x2829c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1800), bits); }
    // 0x2829cc: 0xe622070c  swc1        $f2, 0x70C($s1)
    ctx->pc = 0x2829ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1804), bits); }
    // 0x2829d0: 0xae200700  sw          $zero, 0x700($s1)
    ctx->pc = 0x2829d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1792), GPR_U32(ctx, 0));
    // 0x2829d4: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x2829d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x2829d8: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2829d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2829dc:
    // 0x2829dc: 0x1040033b  beqz        $v0, . + 4 + (0x33B << 2)
    ctx->pc = 0x2829DCu;
    {
        const bool branch_taken_0x2829dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2829E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2829DCu;
        // 0x2829e0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829dc) {
            ctx->pc = 0x2836CCu;
            goto label_2836cc;
        }
    }
    ctx->pc = 0x2829E4u;
    // 0x2829e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2829e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2829e8: 0x24428810  addiu       $v0, $v0, -0x77F0
    ctx->pc = 0x2829e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936592));
    // 0x2829ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2829ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2829f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2829f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2829f4: 0x800008  jr          $a0
    ctx->pc = 0x2829F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2829FCu: goto label_2829fc;
            case 0x282E20u: goto label_282e20;
            case 0x282F8Cu: goto label_282f8c;
            case 0x28318Cu: goto label_28318c;
            case 0x283290u: goto label_283290;
            case 0x283450u: goto label_283450;
            case 0x2835E8u: goto label_2835e8;
            case 0x2836CCu: goto label_2836cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2829F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2829FCu;
label_2829fc:
    // 0x2829fc: 0x4480e000  mtc1        $zero, $f28
    ctx->pc = 0x2829fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x282a00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x282a00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a04: 0x8d240338  lw          $a0, 0x338($t1)
    ctx->pc = 0x282a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 824)));
    // 0x282a08: 0x10800041  beqz        $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x282A08u;
    {
        const bool branch_taken_0x282a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A08u;
        // 0x282a0c: 0x4600e786  mov.s       $f30, $f28 (Delay Slot)
        ctx->f[30] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a08) {
            ctx->pc = 0x282B10u;
            goto label_282b10;
        }
    }
    ctx->pc = 0x282A10u;
    // 0x282a10: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x282a10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x282a14: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x282a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x282a18: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x282A18u;
    {
        const bool branch_taken_0x282a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A18u;
        // 0x282a1c: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a18) {
            ctx->pc = 0x282B10u;
            goto label_282b10;
        }
    }
    ctx->pc = 0x282A20u;
    // 0x282a20: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x282a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x282a24: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x282a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x282a28: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x282a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x282a2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x282a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_282a30:
    // 0x282a30: 0xc480fff4  lwc1        $f0, -0xC($a0)
    ctx->pc = 0x282a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282a34: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x282a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x282a38: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x282a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282a3c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x282a3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x282a40: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x282a40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x282a44: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x282a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x282a48: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x282a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282a4c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x282a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282a50: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x282a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x282a54: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x282a54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x282a58: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x282a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x282a5c: 0x4a1fff4  bgez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x282A5Cu;
    {
        const bool branch_taken_0x282a5c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x282A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A5Cu;
        // 0x282a60: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a5c) {
            ctx->pc = 0x282A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282a30;
        }
    }
    ctx->pc = 0x282A64u;
    // 0x282a64: 0xc7a700a4  lwc1        $f7, 0xA4($sp)
    ctx->pc = 0x282a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x282a68: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x282a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282a6c: 0xc7a500b4  lwc1        $f5, 0xB4($sp)
    ctx->pc = 0x282a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x282a70: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x282a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282a74: 0x46013982  mul.s       $f6, $f7, $f1
    ctx->pc = 0x282a74u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x282a78: 0xc7a400b0  lwc1        $f4, 0xB0($sp)
    ctx->pc = 0x282a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x282a7c: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x282a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282a80: 0x460028c2  mul.s       $f3, $f5, $f0
    ctx->pc = 0x282a80u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x282a84: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x282a84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x282a88: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x282a88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x282a8c: 0x46033581  sub.s       $f22, $f6, $f3
    ctx->pc = 0x282a8cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x282a90: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x282a90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x282a94: 0x46010541  sub.s       $f21, $f0, $f1
    ctx->pc = 0x282a94u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x282a98: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x282a98u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x282a9c: 0x4616b042  mul.s       $f1, $f22, $f22
    ctx->pc = 0x282a9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x282aa0: 0x4615a8c2  mul.s       $f3, $f21, $f21
    ctx->pc = 0x282aa0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x282aa4: 0x46041501  sub.s       $f20, $f2, $f4
    ctx->pc = 0x282aa4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x282aa8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x282aa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x282aac: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x282aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x282ab0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x282ab0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x282ab4: 0x0  nop
    ctx->pc = 0x282ab4u;
    // NOP
    // 0x282ab8: 0x0  nop
    ctx->pc = 0x282ab8u;
    // NOP
    // 0x282abc: 0x460c0084  c1          0xC0084
    ctx->pc = 0x282abcu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[12]);
    // 0x282ac0: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x282ac0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282ac4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x282AC4u;
    {
        const bool branch_taken_0x282ac4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282ac4) {
            ctx->pc = 0x282ADCu;
            goto label_282adc;
        }
    }
    ctx->pc = 0x282ACCu;
    // 0x282acc: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x282ACCu;
    SET_GPR_U32(ctx, 31, 0x282AD4u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x282ACCu, 0x282AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282AD4u;
label_282ad4:
    // 0x282ad4: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x282ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x282ad8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x282ad8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_282adc:
    // 0x282adc: 0xc780889c  lwc1        $f0, -0x7764($gp)
    ctx->pc = 0x282adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282ae0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x282ae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x282ae4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x282ae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282ae8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x282AE8u;
    {
        const bool branch_taken_0x282ae8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x282ae8) {
            ctx->pc = 0x282B14u;
            goto label_282b14;
        }
    }
    ctx->pc = 0x282AF0u;
    // 0x282af0: 0x0  nop
    ctx->pc = 0x282af0u;
    // NOP
    // 0x282af4: 0x0  nop
    ctx->pc = 0x282af4u;
    // NOP
    // 0x282af8: 0x4602a703  div.s       $f28, $f20, $f2
    ctx->pc = 0x282af8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[28] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[28] = ctx->f[20] / ctx->f[2];
    // 0x282afc: 0x0  nop
    ctx->pc = 0x282afcu;
    // NOP
    // 0x282b00: 0x0  nop
    ctx->pc = 0x282b00u;
    // NOP
    // 0x282b04: 0x4602b783  div.s       $f30, $f22, $f2
    ctx->pc = 0x282b04u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[30] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[30] = ctx->f[22] / ctx->f[2];
    // 0x282b08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x282B08u;
    {
        const bool branch_taken_0x282b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B08u;
        // 0x282b0c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b08) {
            ctx->pc = 0x282B14u;
            goto label_282b14;
        }
    }
    ctx->pc = 0x282B10u;
label_282b10:
    // 0x282b10: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x282b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_282b14:
    // 0x282b14: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x282B14u;
    {
        const bool branch_taken_0x282b14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B14u;
        // 0x282b18: 0xc786b468  lwc1        $f6, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b14) {
            ctx->pc = 0x282B84u;
            goto label_282b84;
        }
    }
    ctx->pc = 0x282B1Cu;
    // 0x282b1c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x282b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x282b20: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x282b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x282b24: 0x461e3002  mul.s       $f0, $f6, $f30
    ctx->pc = 0x282b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[30]);
    // 0x282b28: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x282b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x282b2c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x282b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x282b30: 0xc621008c  lwc1        $f1, 0x8C($s1)
    ctx->pc = 0x282b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282b34: 0x461c3082  mul.s       $f2, $f6, $f28
    ctx->pc = 0x282b34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[28]);
    // 0x282b38: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x282b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x282b3c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x282b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x282b40: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x282b40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x282b44: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x282b44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x282b48: 0x0  nop
    ctx->pc = 0x282b48u;
    // NOP
    // 0x282b4c: 0x0  nop
    ctx->pc = 0x282b4cu;
    // NOP
    // 0x282b50: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x282b50u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x282b54: 0x0  nop
    ctx->pc = 0x282b54u;
    // NOP
    // 0x282b58: 0x0  nop
    ctx->pc = 0x282b58u;
    // NOP
    // 0x282b5c: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x282b5cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[4];
    // 0x282b60: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x282b60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x282b64: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x282b64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x282b68: 0xc6200090  lwc1        $f0, 0x90($s1)
    ctx->pc = 0x282b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282b6c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x282b6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x282b70: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x282b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x282b74: 0xc6210094  lwc1        $f1, 0x94($s1)
    ctx->pc = 0x282b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282b78: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x282b78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x282b7c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x282B7Cu;
    {
        const bool branch_taken_0x282b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B7Cu;
        // 0x282b80: 0xe7a10098  swc1        $f1, 0x98($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b7c) {
            ctx->pc = 0x282BDCu;
            goto label_282bdc;
        }
    }
    ctx->pc = 0x282B84u;
label_282b84:
    // 0x282b84: 0x4618d002  mul.s       $f0, $f26, $f24
    ctx->pc = 0x282b84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[24]);
    // 0x282b88: 0xc621008c  lwc1        $f1, 0x8C($s1)
    ctx->pc = 0x282b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282b8c: 0x4618d902  mul.s       $f4, $f27, $f24
    ctx->pc = 0x282b8cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[27], ctx->f[24]);
    // 0x282b90: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x282b90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x282b94: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x282b94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x282b98: 0xc6230090  lwc1        $f3, 0x90($s1)
    ctx->pc = 0x282b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x282b9c: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x282b9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x282ba0: 0xc6220094  lwc1        $f2, 0x94($s1)
    ctx->pc = 0x282ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282ba4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x282ba4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x282ba8: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x282ba8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x282bac: 0xc62000d4  lwc1        $f0, 0xD4($s1)
    ctx->pc = 0x282bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282bb0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x282bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x282bb4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x282bb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x282bb8: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x282bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x282bbc: 0xc62000d8  lwc1        $f0, 0xD8($s1)
    ctx->pc = 0x282bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282bc0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x282bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x282bc4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x282bc4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x282bc8: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x282bc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x282bcc: 0xc62000dc  lwc1        $f0, 0xDC($s1)
    ctx->pc = 0x282bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282bd0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x282bd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x282bd4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x282bd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x282bd8: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x282bd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_282bdc:
    // 0x282bdc: 0xc78188a0  lwc1        $f1, -0x7760($gp)
    ctx->pc = 0x282bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282be0: 0x26260114  addiu       $a2, $s1, 0x114
    ctx->pc = 0x282be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 276));
    // 0x282be4: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x282be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282be8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x282be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282bec: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x282becu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x282bf0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x282bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x282bf4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x282bf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x282bf8: 0xc0a141c  jal         func_285070
    ctx->pc = 0x282BF8u;
    SET_GPR_U32(ctx, 31, 0x282C00u);
    ctx->pc = 0x282BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282BF8u;
    // 0x282bfc: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x285070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285070u, 0x282BF8u, 0x282C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282C00u;
label_282c00:
    // 0x282c00: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x282c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x282c04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x282c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c08: 0xc6741198  lwc1        $f20, 0x1198($s3)
    ctx->pc = 0x282c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x282c0c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x282c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282c10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x282c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282c14: 0x24470338  addiu       $a3, $v0, 0x338
    ctx->pc = 0x282c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 824));
    // 0x282c18: 0xc44c0068  lwc1        $f12, 0x68($v0)
    ctx->pc = 0x282c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x282c1c: 0x2445008c  addiu       $a1, $v0, 0x8C
    ctx->pc = 0x282c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x282c20: 0xc09f6c4  jal         func_27DB10
    ctx->pc = 0x282C20u;
    SET_GPR_U32(ctx, 31, 0x282C28u);
    ctx->pc = 0x282C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282C20u;
    // 0x282c24: 0xc44d0084  lwc1        $f13, 0x84($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DB10u, 0x282C20u, 0x282C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282C28u;
label_282c28:
    // 0x282c28: 0xc6621198  lwc1        $f2, 0x1198($s3)
    ctx->pc = 0x282c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282c2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x282c2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282c30: 0x4602a501  sub.s       $f20, $f20, $f2
    ctx->pc = 0x282c30u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x282c34: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x282c34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282c38: 0x0  nop
    ctx->pc = 0x282c38u;
    // NOP
    // 0x282c3c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x282C3Cu;
    {
        const bool branch_taken_0x282c3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C3Cu;
        // 0x282c40: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c3c) {
            ctx->pc = 0x282C60u;
            goto label_282c60;
        }
    }
    ctx->pc = 0x282C44u;
    // 0x282c44: 0xc78088a4  lwc1        $f0, -0x775C($gp)
    ctx->pc = 0x282c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282c48: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x282c48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282c4c: 0x0  nop
    ctx->pc = 0x282c4cu;
    // NOP
    // 0x282c50: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x282C50u;
    {
        const bool branch_taken_0x282c50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282c50) {
            ctx->pc = 0x282C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282C50u;
            // 0x282c54: 0xe7a20094  swc1        $f2, 0x94($sp) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x282C7Cu;
            goto label_282c7c;
        }
    }
    ctx->pc = 0x282C58u;
    // 0x282c58: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x282C58u;
    {
        const bool branch_taken_0x282c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C58u;
        // 0x282c5c: 0x8f91b234  lw          $s1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c58) {
            ctx->pc = 0x282C90u;
            goto label_282c90;
        }
    }
    ctx->pc = 0x282C60u;
label_282c60:
    // 0x282c60: 0x4600a047  neg.s       $f1, $f20
    ctx->pc = 0x282c60u;
    ctx->f[1] = FPU_NEG_S(ctx->f[20]);
    // 0x282c64: 0xc78088a8  lwc1        $f0, -0x7758($gp)
    ctx->pc = 0x282c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282c68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x282c68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282c6c: 0x0  nop
    ctx->pc = 0x282c6cu;
    // NOP
    // 0x282c70: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x282C70u;
    {
        const bool branch_taken_0x282c70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C70u;
        // 0x282c74: 0x8f91b234  lw          $s1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c70) {
            ctx->pc = 0x282C90u;
            goto label_282c90;
        }
    }
    ctx->pc = 0x282C78u;
    // 0x282c78: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x282c78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_282c7c:
    // 0x282c7c: 0x37de0001  ori         $fp, $fp, 0x1
    ctx->pc = 0x282c7cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)1);
    // 0x282c80: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x282c80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x282c84: 0xc6200080  lwc1        $f0, 0x80($s1)
    ctx->pc = 0x282c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282c88: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x282c88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x282c8c: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x282c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
label_282c90:
    // 0x282c90: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x282c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x282c94: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x282C94u;
    {
        const bool branch_taken_0x282c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282c94) {
            ctx->pc = 0x282C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282C94u;
            // 0x282c98: 0xc6630b30  lwc1        $f3, 0xB30($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x282D50u;
            goto label_282d50;
        }
    }
    ctx->pc = 0x282C9Cu;
    // 0x282c9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x282c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282ca0: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x282CA0u;
    {
        const bool branch_taken_0x282ca0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x282CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282CA0u;
        // 0x282ca4: 0xae220128  sw          $v0, 0x128($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ca0) {
            ctx->pc = 0x282D04u;
            goto label_282d04;
        }
    }
    ctx->pc = 0x282CA8u;
    // 0x282ca8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x282ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x282cac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282cb0: 0xc6240154  lwc1        $f4, 0x154($s1)
    ctx->pc = 0x282cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x282cb4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x282cb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x282cb8: 0xc6210178  lwc1        $f1, 0x178($s1)
    ctx->pc = 0x282cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282cbc: 0x4600e082  mul.s       $f2, $f28, $f0
    ctx->pc = 0x282cbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
    // 0x282cc0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x282cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x282cc4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x282cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x282cc8: 0x4600f002  mul.s       $f0, $f30, $f0
    ctx->pc = 0x282cc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[30], ctx->f[0]);
    // 0x282ccc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x282cccu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x282cd0: 0x0  nop
    ctx->pc = 0x282cd0u;
    // NOP
    // 0x282cd4: 0x0  nop
    ctx->pc = 0x282cd4u;
    // NOP
    // 0x282cd8: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x282cd8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x282cdc: 0x0  nop
    ctx->pc = 0x282cdcu;
    // NOP
    // 0x282ce0: 0x0  nop
    ctx->pc = 0x282ce0u;
    // NOP
    // 0x282ce4: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x282ce4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x282ce8: 0x0  nop
    ctx->pc = 0x282ce8u;
    // NOP
    // 0x282cec: 0x0  nop
    ctx->pc = 0x282cecu;
    // NOP
    // 0x282cf0: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x282cf0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x282cf4: 0xe6220360  swc1        $f2, 0x360($s1)
    ctx->pc = 0x282cf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 864), bits); }
    // 0x282cf8: 0xe6200358  swc1        $f0, 0x358($s1)
    ctx->pc = 0x282cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 856), bits); }
    // 0x282cfc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x282CFCu;
    {
        const bool branch_taken_0x282cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282CFCu;
        // 0x282d00: 0xe6610b30  swc1        $f1, 0xB30($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2864), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282cfc) {
            ctx->pc = 0x282D4Cu;
            goto label_282d4c;
        }
    }
    ctx->pc = 0x282D04u;
label_282d04:
    // 0x282d04: 0xc62200d4  lwc1        $f2, 0xD4($s1)
    ctx->pc = 0x282d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282d08: 0x4618d8c2  mul.s       $f3, $f27, $f24
    ctx->pc = 0x282d08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[27], ctx->f[24]);
    // 0x282d0c: 0xc62100dc  lwc1        $f1, 0xDC($s1)
    ctx->pc = 0x282d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282d10: 0x4618d002  mul.s       $f0, $f26, $f24
    ctx->pc = 0x282d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[24]);
    // 0x282d14: 0x46171082  mul.s       $f2, $f2, $f23
    ctx->pc = 0x282d14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[23]);
    // 0x282d18: 0xc784b468  lwc1        $f4, -0x4B98($gp)
    ctx->pc = 0x282d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x282d1c: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x282d1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x282d20: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x282d20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x282d24: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x282d24u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x282d28: 0x0  nop
    ctx->pc = 0x282d28u;
    // NOP
    // 0x282d2c: 0x0  nop
    ctx->pc = 0x282d2cu;
    // NOP
    // 0x282d30: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x282d30u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x282d34: 0x0  nop
    ctx->pc = 0x282d34u;
    // NOP
    // 0x282d38: 0x0  nop
    ctx->pc = 0x282d38u;
    // NOP
    // 0x282d3c: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x282d3cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[4];
    // 0x282d40: 0xe6200358  swc1        $f0, 0x358($s1)
    ctx->pc = 0x282d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 856), bits); }
    // 0x282d44: 0xe6230360  swc1        $f3, 0x360($s1)
    ctx->pc = 0x282d44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 864), bits); }
    // 0x282d48: 0xae600b30  sw          $zero, 0xB30($s3)
    ctx->pc = 0x282d48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2864), GPR_U32(ctx, 0));
label_282d4c:
    // 0x282d4c: 0xc6630b30  lwc1        $f3, 0xB30($s3)
    ctx->pc = 0x282d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_282d50:
    // 0x282d50: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x282d50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x282d54: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x282d54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282d58: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x282D58u;
    {
        const bool branch_taken_0x282d58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282d58) {
            ctx->pc = 0x282D70u;
            goto label_282d70;
        }
    }
    ctx->pc = 0x282D60u;
    // 0x282d60: 0xc622007c  lwc1        $f2, 0x7C($s1)
    ctx->pc = 0x282d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282d64: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x282d64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282d68: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x282D68u;
    {
        const bool branch_taken_0x282d68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x282d68) {
            ctx->pc = 0x282DECu;
            goto label_282dec;
        }
    }
    ctx->pc = 0x282D70u;
label_282d70:
    // 0x282d70: 0xc78088ac  lwc1        $f0, -0x7754($gp)
    ctx->pc = 0x282d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282d74: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x282d74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282d78: 0x0  nop
    ctx->pc = 0x282d78u;
    // NOP
    // 0x282d7c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x282D7Cu;
    {
        const bool branch_taken_0x282d7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x282d7c) {
            ctx->pc = 0x282D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282D7Cu;
            // 0x282d80: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x282D90u;
            goto label_282d90;
        }
    }
    ctx->pc = 0x282D84u;
    // 0x282d84: 0xe6600b30  swc1        $f0, 0xB30($s3)
    ctx->pc = 0x282d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2864), bits); }
    // 0x282d88: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x282d88u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x282d8c: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x282d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_282d90:
    // 0x282d90: 0xc78188b0  lwc1        $f1, -0x7750($gp)
    ctx->pc = 0x282d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282d94: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x282d94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x282d98: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x282d98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x282d9c: 0xe6610b30  swc1        $f1, 0xB30($s3)
    ctx->pc = 0x282d9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2864), bits); }
    // 0x282da0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x282da0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282da4: 0xc622007c  lwc1        $f2, 0x7C($s1)
    ctx->pc = 0x282da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282da8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x282da8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x282dac: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x282dacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282db0: 0x0  nop
    ctx->pc = 0x282db0u;
    // NOP
    // 0x282db4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x282DB4u;
    {
        const bool branch_taken_0x282db4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282DB4u;
        // 0x282db8: 0xe622007c  swc1        $f2, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282db4) {
            ctx->pc = 0x282DC0u;
            goto label_282dc0;
        }
    }
    ctx->pc = 0x282DBCu;
    // 0x282dbc: 0xe624007c  swc1        $f4, 0x7C($s1)
    ctx->pc = 0x282dbcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
label_282dc0:
    // 0x282dc0: 0xc6210074  lwc1        $f1, 0x74($s1)
    ctx->pc = 0x282dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282dc4: 0xc620007c  lwc1        $f0, 0x7C($s1)
    ctx->pc = 0x282dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282dc8: 0xc78288b4  lwc1        $f2, -0x774C($gp)
    ctx->pc = 0x282dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282dcc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x282dccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x282dd0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x282dd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282dd4: 0x0  nop
    ctx->pc = 0x282dd4u;
    // NOP
    // 0x282dd8: 0x45000119  bc1f        . + 4 + (0x119 << 2)
    ctx->pc = 0x282DD8u;
    {
        const bool branch_taken_0x282dd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282DD8u;
        // 0x282ddc: 0xc7a30090  lwc1        $f3, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282dd8) {
            ctx->pc = 0x283240u;
            goto label_283240;
        }
    }
    ctx->pc = 0x282DE0u;
    // 0x282de0: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x282de0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x282de4: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x282DE4u;
    {
        const bool branch_taken_0x282de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282DE4u;
        // 0x282de8: 0xe620007c  swc1        $f0, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282de4) {
            ctx->pc = 0x28323Cu;
            goto label_28323c;
        }
    }
    ctx->pc = 0x282DECu;
label_282dec:
    // 0x282dec: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x282decu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282df0: 0x0  nop
    ctx->pc = 0x282df0u;
    // NOP
    // 0x282df4: 0x45000111  bc1f        . + 4 + (0x111 << 2)
    ctx->pc = 0x282DF4u;
    {
        const bool branch_taken_0x282df4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282DF4u;
        // 0x282df8: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282df4) {
            ctx->pc = 0x28323Cu;
            goto label_28323c;
        }
    }
    ctx->pc = 0x282DFCu;
    // 0x282dfc: 0xc78188b8  lwc1        $f1, -0x7748($gp)
    ctx->pc = 0x282dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282e00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x282e00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x282e04: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x282e04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x282e08: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x282e08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282e0c: 0x0  nop
    ctx->pc = 0x282e0cu;
    // NOP
    // 0x282e10: 0x4500010a  bc1f        . + 4 + (0x10A << 2)
    ctx->pc = 0x282E10u;
    {
        const bool branch_taken_0x282e10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E10u;
        // 0x282e14: 0xe620007c  swc1        $f0, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e10) {
            ctx->pc = 0x28323Cu;
            goto label_28323c;
        }
    }
    ctx->pc = 0x282E18u;
    // 0x282e18: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x282E18u;
    {
        const bool branch_taken_0x282e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E18u;
        // 0x282e1c: 0xe624007c  swc1        $f4, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e18) {
            ctx->pc = 0x28323Cu;
            goto label_28323c;
        }
    }
    ctx->pc = 0x282E20u;
label_282e20:
    // 0x282e20: 0xc522012c  lwc1        $f2, 0x12C($t1)
    ctx->pc = 0x282e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282e24: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x282e24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x282e28: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x282e28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x282e2c: 0xc5200130  lwc1        $f0, 0x130($t1)
    ctx->pc = 0x282e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282e30: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x282e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x282e34: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x282e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x282e38: 0xc5210134  lwc1        $f1, 0x134($t1)
    ctx->pc = 0x282e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282e3c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x282e3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x282e40: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x282e40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x282e44: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x282e44u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x282e48: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x282e48u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x282e4c: 0x0  nop
    ctx->pc = 0x282e4cu;
    // NOP
    // 0x282e50: 0x0  nop
    ctx->pc = 0x282e50u;
    // NOP
    // 0x282e54: 0x460c0044  c1          0xC0044
    ctx->pc = 0x282e54u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x282e58: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x282e58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282e5c: 0x0  nop
    ctx->pc = 0x282e5cu;
    // NOP
    // 0x282e60: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x282E60u;
    {
        const bool branch_taken_0x282e60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x282E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E60u;
        // 0x282e64: 0xc785b468  lwc1        $f5, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e60) {
            ctx->pc = 0x282E7Cu;
            goto label_282e7c;
        }
    }
    ctx->pc = 0x282E68u;
    // 0x282e68: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x282E68u;
    SET_GPR_U32(ctx, 31, 0x282E70u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x282E68u, 0x282E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282E70u;
label_282e70:
    // 0x282e70: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x282e70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x282e74: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x282e74u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x282e78: 0xc785b468  lwc1        $f5, -0x4B98($gp)
    ctx->pc = 0x282e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_282e7c:
    // 0x282e7c: 0xc78088bc  lwc1        $f0, -0x7744($gp)
    ctx->pc = 0x282e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282e80: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x282e80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x282e84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x282e84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282e88: 0x0  nop
    ctx->pc = 0x282e88u;
    // NOP
    // 0x282e8c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x282E8Cu;
    {
        const bool branch_taken_0x282e8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E8Cu;
        // 0x282e90: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e8c) {
            ctx->pc = 0x282E98u;
            goto label_282e98;
        }
    }
    ctx->pc = 0x282E94u;
    // 0x282e94: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x282e94u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_282e98:
    // 0x282e98: 0x0  nop
    ctx->pc = 0x282e98u;
    // NOP
    // 0x282e9c: 0x0  nop
    ctx->pc = 0x282e9cu;
    // NOP
    // 0x282ea0: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x282ea0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[1];
    // 0x282ea4: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x282ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x282ea8: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x282ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282eac: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x282eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x282eb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x282eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x282eb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x282eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282eb8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x282eb8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x282ebc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x282ebcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x282ec0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x282ec0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x282ec4: 0xe7a400a0  swc1        $f4, 0xA0($sp)
    ctx->pc = 0x282ec4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x282ec8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x282ec8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282ecc: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x282eccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x282ed0: 0xe7a300a8  swc1        $f3, 0xA8($sp)
    ctx->pc = 0x282ed0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x282ed4: 0xc620008c  lwc1        $f0, 0x8C($s1)
    ctx->pc = 0x282ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282ed8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x282ed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x282edc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x282edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x282ee0: 0xc6210090  lwc1        $f1, 0x90($s1)
    ctx->pc = 0x282ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282ee4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x282ee4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x282ee8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x282ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x282eec: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x282eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282ef0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x282ef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x282ef4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x282ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x282ef8: 0xc621012c  lwc1        $f1, 0x12C($s1)
    ctx->pc = 0x282ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282efc: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x282efcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x282f00: 0xe621012c  swc1        $f1, 0x12C($s1)
    ctx->pc = 0x282f00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x282f04: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x282f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282f08: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x282f08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x282f0c: 0xe621012c  swc1        $f1, 0x12C($s1)
    ctx->pc = 0x282f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x282f10: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x282f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282f14: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x282f14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x282f18: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x282F18u;
    {
        const bool branch_taken_0x282f18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F18u;
        // 0x282f1c: 0xe621012c  swc1        $f1, 0x12C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f18) {
            ctx->pc = 0x282F50u;
            goto label_282f50;
        }
    }
    ctx->pc = 0x282F20u;
    // 0x282f20: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x282f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282f24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x282f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282f28: 0xae220128  sw          $v0, 0x128($s1)
    ctx->pc = 0x282f28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
    // 0x282f2c: 0x0  nop
    ctx->pc = 0x282f2cu;
    // NOP
    // 0x282f30: 0x0  nop
    ctx->pc = 0x282f30u;
    // NOP
    // 0x282f34: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x282f34u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x282f38: 0xe6200358  swc1        $f0, 0x358($s1)
    ctx->pc = 0x282f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 856), bits); }
    // 0x282f3c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x282f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282f40: 0x0  nop
    ctx->pc = 0x282f40u;
    // NOP
    // 0x282f44: 0x0  nop
    ctx->pc = 0x282f44u;
    // NOP
    // 0x282f48: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x282f48u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[5];
    // 0x282f4c: 0xe6210360  swc1        $f1, 0x360($s1)
    ctx->pc = 0x282f4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 864), bits); }
label_282f50:
    // 0x282f50: 0xc620007c  lwc1        $f0, 0x7C($s1)
    ctx->pc = 0x282f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282f54: 0x26270338  addiu       $a3, $s1, 0x338
    ctx->pc = 0x282f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 824));
    // 0x282f58: 0xc78188c0  lwc1        $f1, -0x7740($gp)
    ctx->pc = 0x282f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282f5c: 0x2625008c  addiu       $a1, $s1, 0x8C
    ctx->pc = 0x282f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
    // 0x282f60: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x282f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x282f64: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x282f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x282f68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x282f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x282f6c: 0xc62c0068  lwc1        $f12, 0x68($s1)
    ctx->pc = 0x282f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x282f70: 0xc62d0084  lwc1        $f13, 0x84($s1)
    ctx->pc = 0x282f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x282f74: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x282f74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282f78: 0xc09f6c4  jal         func_27DB10
    ctx->pc = 0x282F78u;
    SET_GPR_U32(ctx, 31, 0x282F80u);
    ctx->pc = 0x282F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282F78u;
    // 0x282f7c: 0xe620007c  swc1        $f0, 0x7C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DB10u, 0x282F78u, 0x282F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282F80u;
label_282f80:
    // 0x282f80: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x282f80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x282f84: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x282F84u;
    {
        const bool branch_taken_0x282f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F84u;
        // 0x282f88: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f84) {
            ctx->pc = 0x28323Cu;
            goto label_28323c;
        }
    }
    ctx->pc = 0x282F8Cu;
label_282f8c:
    // 0x282f8c: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x282f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282f90: 0xc78288c4  lwc1        $f2, -0x773C($gp)
    ctx->pc = 0x282f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282f94: 0xc6610b30  lwc1        $f1, 0xB30($s3)
    ctx->pc = 0x282f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282f98: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x282f98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x282f9c: 0xc78288c8  lwc1        $f2, -0x7738($gp)
    ctx->pc = 0x282f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282fa0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x282fa0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x282fa4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x282fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282fa8: 0x0  nop
    ctx->pc = 0x282fa8u;
    // NOP
    // 0x282fac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x282FACu;
    {
        const bool branch_taken_0x282fac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282FACu;
        // 0x282fb0: 0xe6610b30  swc1        $f1, 0xB30($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2864), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282fac) {
            ctx->pc = 0x282FB8u;
            goto label_282fb8;
        }
    }
    ctx->pc = 0x282FB4u;
    // 0x282fb4: 0xe6620b30  swc1        $f2, 0xB30($s3)
    ctx->pc = 0x282fb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2864), bits); }
label_282fb8:
    // 0x282fb8: 0xc5200358  lwc1        $f0, 0x358($t1)
    ctx->pc = 0x282fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282fbc: 0x25270338  addiu       $a3, $t1, 0x338
    ctx->pc = 0x282fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 824));
    // 0x282fc0: 0xc782b468  lwc1        $f2, -0x4B98($gp)
    ctx->pc = 0x282fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282fc4: 0x2525008c  addiu       $a1, $t1, 0x8C
    ctx->pc = 0x282fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 140));
    // 0x282fc8: 0xc521008c  lwc1        $f1, 0x8C($t1)
    ctx->pc = 0x282fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282fcc: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x282fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x282fd0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x282fd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x282fd4: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x282fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x282fd8: 0xc78388cc  lwc1        $f3, -0x7734($gp)
    ctx->pc = 0x282fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x282fdc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x282fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282fe0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x282fe0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x282fe4: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x282fe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x282fe8: 0xc6600b30  lwc1        $f0, 0xB30($s3)
    ctx->pc = 0x282fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282fec: 0xc5210090  lwc1        $f1, 0x90($t1)
    ctx->pc = 0x282fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282ff0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x282ff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x282ff4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x282ff4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x282ff8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x282ff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x282ffc: 0xc5200360  lwc1        $f0, 0x360($t1)
    ctx->pc = 0x282ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283000: 0xc5210094  lwc1        $f1, 0x94($t1)
    ctx->pc = 0x283000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283004: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x283004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x283008: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x283008u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28300c: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x28300cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x283010: 0xc520007c  lwc1        $f0, 0x7C($t1)
    ctx->pc = 0x283010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283014: 0xc52c0068  lwc1        $f12, 0x68($t1)
    ctx->pc = 0x283014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x283018: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x283018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28301c: 0xc52d0084  lwc1        $f13, 0x84($t1)
    ctx->pc = 0x28301cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x283020: 0xc09f6c4  jal         func_27DB10
    ctx->pc = 0x283020u;
    SET_GPR_U32(ctx, 31, 0x283028u);
    ctx->pc = 0x283024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283020u;
    // 0x283024: 0xe520007c  swc1        $f0, 0x7C($t1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DB10u, 0x283020u, 0x283028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283028u;
label_283028:
    // 0x283028: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x283028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x28302c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x28302cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283030: 0xc7a40090  lwc1        $f4, 0x90($sp)
    ctx->pc = 0x283030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x283034: 0x2406ffdf  addiu       $a2, $zero, -0x21
    ctx->pc = 0x283034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x283038: 0x8c620180  lw          $v0, 0x180($v1)
    ctx->pc = 0x283038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x28303c: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x28303cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x283040: 0xe464008c  swc1        $f4, 0x8C($v1)
    ctx->pc = 0x283040u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
    // 0x283044: 0x8c450160  lw          $a1, 0x160($v0)
    ctx->pc = 0x283044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x283048: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x283048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28304c: 0x8ca20a94  lw          $v0, 0xA94($a1)
    ctx->pc = 0x28304cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2708)));
    // 0x283050: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x283050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283054: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x283054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x283058: 0xc463007c  lwc1        $f3, 0x7C($v1)
    ctx->pc = 0x283058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28305c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28305cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x283060: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x283060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x283064: 0xc782b468  lwc1        $f2, -0x4B98($gp)
    ctx->pc = 0x283064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x283068: 0xaca20a94  sw          $v0, 0xA94($a1)
    ctx->pc = 0x283068u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2708), GPR_U32(ctx, 2));
    // 0x28306c: 0xe4610090  swc1        $f1, 0x90($v1)
    ctx->pc = 0x28306cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x283070: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x283070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x283074: 0xc78c88d0  lwc1        $f12, -0x7730($gp)
    ctx->pc = 0x283074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x283078: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x283078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28307c: 0x460c1302  mul.s       $f12, $f2, $f12
    ctx->pc = 0x28307cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x283080: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x283080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x283084: 0xe4640098  swc1        $f4, 0x98($v1)
    ctx->pc = 0x283084u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x283088: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x283088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x28308c: 0xe46100a0  swc1        $f1, 0xA0($v1)
    ctx->pc = 0x28308cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x283090: 0xc088f98  jal         func_223E60
    ctx->pc = 0x283090u;
    SET_GPR_U32(ctx, 31, 0x283098u);
    ctx->pc = 0x283094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283090u;
    // 0x283094: 0xe4610094  swc1        $f1, 0x94($v1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x283090u, 0x283098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283098u;
label_283098:
    // 0x283098: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x283098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x28309c: 0x1040018a  beqz        $v0, . + 4 + (0x18A << 2)
    ctx->pc = 0x28309Cu;
    {
        const bool branch_taken_0x28309c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2830A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28309Cu;
        // 0x2830a0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28309c) {
            ctx->pc = 0x2836C8u;
            goto label_2836c8;
        }
    }
    ctx->pc = 0x2830A4u;
    // 0x2830a4: 0xc6610b8c  lwc1        $f1, 0xB8C($s3)
    ctx->pc = 0x2830a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2830a8: 0xc440fa18  lwc1        $f0, -0x5E8($v0)
    ctx->pc = 0x2830a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2830ac: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2830acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2830b0: 0x0  nop
    ctx->pc = 0x2830b0u;
    // NOP
    // 0x2830b4: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x2830B4u;
    {
        const bool branch_taken_0x2830b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2830B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2830B4u;
        // 0x2830b8: 0x8f91b234  lw          $s1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2830b4) {
            ctx->pc = 0x283140u;
            goto label_283140;
        }
    }
    ctx->pc = 0x2830BCu;
    // 0x2830bc: 0xc6601198  lwc1        $f0, 0x1198($s3)
    ctx->pc = 0x2830bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2830c0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2830c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2830c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2830c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2830c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2830c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2830cc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2830ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2830d0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2830D0u;
    {
        const bool branch_taken_0x2830d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2830d0) {
            ctx->pc = 0x283114u;
            goto label_283114;
        }
    }
    ctx->pc = 0x2830D8u;
    // 0x2830d8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2830d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2830dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2830dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2830e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2830e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2830e4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2830E4u;
    {
        const bool branch_taken_0x2830e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2830e4) {
            ctx->pc = 0x28311Cu;
            goto label_28311c;
        }
    }
    ctx->pc = 0x2830ECu;
    // 0x2830ec: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x2830ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2830f0: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x2830f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x2830f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2830f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2830f8: 0xc78188d4  lwc1        $f1, -0x772C($gp)
    ctx->pc = 0x2830f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2830fc: 0x0  nop
    ctx->pc = 0x2830fcu;
    // NOP
    // 0x283100: 0x0  nop
    ctx->pc = 0x283100u;
    // NOP
    // 0x283104: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x283104u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x283108: 0xe62106f4  swc1        $f1, 0x6F4($s1)
    ctx->pc = 0x283108u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1780), bits); }
    // 0x28310c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28310Cu;
    {
        const bool branch_taken_0x28310c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28310Cu;
        // 0x283110: 0xe62006f0  swc1        $f0, 0x6F0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1776), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28310c) {
            ctx->pc = 0x283140u;
            goto label_283140;
        }
    }
    ctx->pc = 0x283114u;
label_283114:
    // 0x283114: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x283114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x283118: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x283118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28311c:
    // 0x28311c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28311cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283120: 0x0  nop
    ctx->pc = 0x283120u;
    // NOP
    // 0x283124: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x283124u;
    {
        const bool branch_taken_0x283124 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x283128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283124u;
        // 0x283128: 0x8f91b234  lw          $s1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283124) {
            ctx->pc = 0x283140u;
            goto label_283140;
        }
    }
    ctx->pc = 0x28312Cu;
    // 0x28312c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28312cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x283130: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x283130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283134: 0xc78188d8  lwc1        $f1, -0x7728($gp)
    ctx->pc = 0x283134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283138: 0xe62006f0  swc1        $f0, 0x6F0($s1)
    ctx->pc = 0x283138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1776), bits); }
    // 0x28313c: 0xe62106f4  swc1        $f1, 0x6F4($s1)
    ctx->pc = 0x28313cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1780), bits); }
label_283140:
    // 0x283140: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x283140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x283144: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x283144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283148: 0xc4400208  lwc1        $f0, 0x208($v0)
    ctx->pc = 0x283148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28314c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28314cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283150: 0x0  nop
    ctx->pc = 0x283150u;
    // NOP
    // 0x283154: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x283154u;
    {
        const bool branch_taken_0x283154 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x283158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283154u;
        // 0x283158: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283154) {
            ctx->pc = 0x283184u;
            goto label_283184;
        }
    }
    ctx->pc = 0x28315Cu;
    // 0x28315c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28315cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283160: 0xae220128  sw          $v0, 0x128($s1)
    ctx->pc = 0x283160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
    // 0x283164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x283164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283168: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x283168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28316c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28316cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283170: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x283170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x283174: 0xc0a0162  jal         func_280588
    ctx->pc = 0x283174u;
    SET_GPR_U32(ctx, 31, 0x28317Cu);
    ctx->pc = 0x283178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283174u;
    // 0x283178: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280588u, 0x283174u, 0x28317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28317Cu;
label_28317c:
    // 0x28317c: 0x10000153  b           . + 4 + (0x153 << 2)
    ctx->pc = 0x28317Cu;
    {
        const bool branch_taken_0x28317c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28317Cu;
        // 0x283180: 0x8f91b234  lw          $s1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28317c) {
            ctx->pc = 0x2836CCu;
            goto label_2836cc;
        }
    }
    ctx->pc = 0x283184u;
label_283184:
    // 0x283184: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x283184u;
    {
        const bool branch_taken_0x283184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283184u;
        // 0x283188: 0xae200128  sw          $zero, 0x128($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283184) {
            ctx->pc = 0x2836CCu;
            goto label_2836cc;
        }
    }
    ctx->pc = 0x28318Cu;
label_28318c:
    // 0x28318c: 0x4618d042  mul.s       $f1, $f26, $f24
    ctx->pc = 0x28318cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[26], ctx->f[24]);
    // 0x283190: 0xc523008c  lwc1        $f3, 0x8C($t1)
    ctx->pc = 0x283190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x283194: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x283194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x283198: 0x4618d942  mul.s       $f5, $f27, $f24
    ctx->pc = 0x283198u;
    ctx->f[5] = FPU_MUL_S(ctx->f[27], ctx->f[24]);
    // 0x28319c: 0xc784b468  lwc1        $f4, -0x4B98($gp)
    ctx->pc = 0x28319cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2831a0: 0x25270338  addiu       $a3, $t1, 0x338
    ctx->pc = 0x2831a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 824));
    // 0x2831a4: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2831a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2831a8: 0xc78088dc  lwc1        $f0, -0x7724($gp)
    ctx->pc = 0x2831a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2831ac: 0xc78688e0  lwc1        $f6, -0x7720($gp)
    ctx->pc = 0x2831acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2831b0: 0x2525008c  addiu       $a1, $t1, 0x8C
    ctx->pc = 0x2831b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 140));
    // 0x2831b4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2831b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2831b8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2831b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2831bc: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x2831bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2831c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2831c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2831c4: 0xc5210090  lwc1        $f1, 0x90($t1)
    ctx->pc = 0x2831c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2831c8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2831c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2831cc: 0xc5220094  lwc1        $f2, 0x94($t1)
    ctx->pc = 0x2831ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2831d0: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2831d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2831d4: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x2831d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2831d8: 0xc52000d4  lwc1        $f0, 0xD4($t1)
    ctx->pc = 0x2831d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2831dc: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x2831dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2831e0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2831e0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2831e4: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x2831e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2831e8: 0xc52000d8  lwc1        $f0, 0xD8($t1)
    ctx->pc = 0x2831e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2831ec: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x2831ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2831f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2831f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2831f4: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2831f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2831f8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2831f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2831fc: 0xc52000dc  lwc1        $f0, 0xDC($t1)
    ctx->pc = 0x2831fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283200: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x283200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x283204: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x283204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x283208: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x283208u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28320c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x28320cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x283210: 0xc520007c  lwc1        $f0, 0x7C($t1)
    ctx->pc = 0x283210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283214: 0xc52c0068  lwc1        $f12, 0x68($t1)
    ctx->pc = 0x283214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x283218: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x283218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x28321c: 0xc52d0084  lwc1        $f13, 0x84($t1)
    ctx->pc = 0x28321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x283220: 0xc09f6c4  jal         func_27DB10
    ctx->pc = 0x283220u;
    SET_GPR_U32(ctx, 31, 0x283228u);
    ctx->pc = 0x283224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283220u;
    // 0x283224: 0xe520007c  swc1        $f0, 0x7C($t1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DB10u, 0x283220u, 0x283228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283228u;
label_283228:
    // 0x283228: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x283228u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28322c: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x28322cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x283230: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x283230u;
    {
        const bool branch_taken_0x283230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283230u;
        // 0x283234: 0x8f91b234  lw          $s1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283230) {
            ctx->pc = 0x28323Cu;
            goto label_28323c;
        }
    }
    ctx->pc = 0x283238u;
    // 0x283238: 0xae200128  sw          $zero, 0x128($s1)
    ctx->pc = 0x283238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 0));
label_28323c:
    // 0x28323c: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x28323cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_283240:
    // 0x283240: 0x2404ffdf  addiu       $a0, $zero, -0x21
    ctx->pc = 0x283240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x283244: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x283244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x283248: 0xe623008c  swc1        $f3, 0x8C($s1)
    ctx->pc = 0x283248u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x28324c: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x28324cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283250: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x283250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x283254: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x283254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x283258: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x283258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28325c: 0xc621007c  lwc1        $f1, 0x7C($s1)
    ctx->pc = 0x28325cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283260: 0x8c620a94  lw          $v0, 0xA94($v1)
    ctx->pc = 0x283260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2708)));
    // 0x283264: 0xe6220090  swc1        $f2, 0x90($s1)
    ctx->pc = 0x283264u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x283268: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x283268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28326c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28326cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x283270: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x283270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283274: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x283274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x283278: 0xac620a94  sw          $v0, 0xA94($v1)
    ctx->pc = 0x283278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2708), GPR_U32(ctx, 2));
    // 0x28327c: 0xe6230098  swc1        $f3, 0x98($s1)
    ctx->pc = 0x28327cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x283280: 0xe620009c  swc1        $f0, 0x9C($s1)
    ctx->pc = 0x283280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
    // 0x283284: 0xe62100a0  swc1        $f1, 0xA0($s1)
    ctx->pc = 0x283284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
    // 0x283288: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x283288u;
    {
        const bool branch_taken_0x283288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283288u;
        // 0x28328c: 0xe6210094  swc1        $f1, 0x94($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x283288) {
            ctx->pc = 0x2836CCu;
            goto label_2836cc;
        }
    }
    ctx->pc = 0x283290u;
label_283290:
    // 0x283290: 0x8d230180  lw          $v1, 0x180($t1)
    ctx->pc = 0x283290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 384)));
    // 0x283294: 0x27b100d0  addiu       $s1, $sp, 0xD0
    ctx->pc = 0x283294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x283298: 0xc78388e4  lwc1        $f3, -0x771C($gp)
    ctx->pc = 0x283298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28329c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x28329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2832a0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2832a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2832a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2832a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2832a8: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x2832a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2832ac: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2832acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2832b0: 0xc4410084  lwc1        $f1, 0x84($v0)
    ctx->pc = 0x2832b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2832b4: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2832b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2832b8: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x2832b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2832bc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2832bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2832c0: 0xc46c004c  lwc1        $f12, 0x4C($v1)
    ctx->pc = 0x2832c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2832c4: 0x46036302  mul.s       $f12, $f12, $f3
    ctx->pc = 0x2832c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x2832c8: 0x0  nop
    ctx->pc = 0x2832c8u;
    // NOP
    // 0x2832cc: 0x0  nop
    ctx->pc = 0x2832ccu;
    // NOP
    // 0x2832d0: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x2832d0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[2];
    // 0x2832d4: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2832D4u;
    SET_GPR_U32(ctx, 31, 0x2832DCu);
    ctx->pc = 0x2832D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2832D4u;
    // 0x2832d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2832D4u, 0x2832DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2832DCu;
label_2832dc:
    // 0x2832dc: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x2832dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2832e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2832e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2832e4: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x2832E4u;
    SET_GPR_U32(ctx, 31, 0x2832ECu);
    ctx->pc = 0x2832E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2832E4u;
    // 0x2832e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x2832E4u, 0x2832ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2832ECu;
label_2832ec:
    // 0x2832ec: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x2832ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2832f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2832f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2832f4: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x2832f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2832f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2832f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2832fc: 0x8c620180  lw          $v0, 0x180($v1)
    ctx->pc = 0x2832fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x283300: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x283300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283304: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x283304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x283308: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x283308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28330c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x28330cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x283310: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x283310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283314: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x283314u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x283318: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x283318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28331c: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x28331cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x283320: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x283320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283324: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x283324u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x283328: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x283328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x28332c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x28332cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283330: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x283330u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x283334: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x283334u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x283338: 0xc46d0084  lwc1        $f13, 0x84($v1)
    ctx->pc = 0x283338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28333c: 0xc09f6c4  jal         func_27DB10
    ctx->pc = 0x28333Cu;
    SET_GPR_U32(ctx, 31, 0x283344u);
    ctx->pc = 0x283340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28333Cu;
    // 0x283340: 0xc46c0068  lwc1        $f12, 0x68($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DB10u, 0x28333Cu, 0x283344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283344u;
label_283344:
    // 0x283344: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x283344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x283348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28334c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x28334cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283350: 0x8c620180  lw          $v0, 0x180($v1)
    ctx->pc = 0x283350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x283354: 0xc78c88e8  lwc1        $f12, -0x7718($gp)
    ctx->pc = 0x283354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x283358: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x283358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x28335c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x28335cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x283360: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x283360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283364: 0xe4410034  swc1        $f1, 0x34($v0)
    ctx->pc = 0x283364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x283368: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x283368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28336c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x28336cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x283370: 0xc462007c  lwc1        $f2, 0x7C($v1)
    ctx->pc = 0x283370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x283374: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x283374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283378: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x283378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28337c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28337cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x283380: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x283380u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x283384: 0xc09f21c  jal         func_27C870
    ctx->pc = 0x283384u;
    SET_GPR_U32(ctx, 31, 0x28338Cu);
    ctx->pc = 0x283388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283384u;
    // 0x283388: 0xe7a10094  swc1        $f1, 0x94($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C870u, 0x283384u, 0x28338Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28338Cu;
label_28338c:
    // 0x28338c: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x28338cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x283390: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x283390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x283394: 0x34a5ffdf  ori         $a1, $a1, 0xFFDF
    ctx->pc = 0x283394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65503);
    // 0x283398: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x283398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x28339c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x28339cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2833a0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2833a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2833a4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2833a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2833a8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2833a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2833ac: 0x8e6211b0  lw          $v0, 0x11B0($s3)
    ctx->pc = 0x2833acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4528)));
    // 0x2833b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2833B0u;
    {
        const bool branch_taken_0x2833b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2833b0) {
            ctx->pc = 0x2833C4u;
            goto label_2833c4;
        }
    }
    ctx->pc = 0x2833B8u;
    // 0x2833b8: 0xc0a005e  jal         func_280178
    ctx->pc = 0x2833B8u;
    SET_GPR_U32(ctx, 31, 0x2833C0u);
    ctx->pc = 0x280178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280178u, 0x2833B8u, 0x2833C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2833C0u;
label_2833c0:
    // 0x2833c0: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x2833c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_2833c4:
    // 0x2833c4: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x2833C4u;
    SET_GPR_U32(ctx, 31, 0x2833CCu);
    ctx->pc = 0x2833C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2833C4u;
    // 0x2833c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x2833C4u, 0x2833CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2833CCu;
label_2833cc:
    // 0x2833cc: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x2833ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2833d0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2833d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2833d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2833d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2833d8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2833D8u;
    {
        const bool branch_taken_0x2833d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2833DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833D8u;
        // 0x2833dc: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2833d8) {
            ctx->pc = 0x283434u;
            goto label_283434;
        }
    }
    ctx->pc = 0x2833E0u;
    // 0x2833e0: 0x2462c4a8  addiu       $v0, $v1, -0x3B58
    ctx->pc = 0x2833e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x2833e4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2833e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2833e8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2833e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2833ec: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2833ECu;
    {
        const bool branch_taken_0x2833ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2833F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833ECu;
        // 0x2833f0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2833ec) {
            ctx->pc = 0x283434u;
            goto label_283434;
        }
    }
    ctx->pc = 0x2833F4u;
    // 0x2833f4: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2833F4u;
    {
        const bool branch_taken_0x2833f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2833f4) {
            ctx->pc = 0x2833F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2833F4u;
            // 0x2833f8: 0x8e250180  lw          $a1, 0x180($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283410u;
            goto label_283410;
        }
    }
    ctx->pc = 0x2833FCu;
    // 0x2833fc: 0xc0b1fb4  jal         func_2C7ED0
    ctx->pc = 0x2833FCu;
    SET_GPR_U32(ctx, 31, 0x283404u);
    ctx->pc = 0x2C7ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7ED0u, 0x2833FCu, 0x283404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283404u;
label_283404:
    // 0x283404: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x283404u;
    {
        const bool branch_taken_0x283404 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x283408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283404u;
        // 0x283408: 0x8f91b234  lw          $s1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283404) {
            ctx->pc = 0x283434u;
            goto label_283434;
        }
    }
    ctx->pc = 0x28340Cu;
    // 0x28340c: 0x8e250180  lw          $a1, 0x180($s1)
    ctx->pc = 0x28340cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_283410:
    // 0x283410: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x283410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x283414: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x283414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x283418: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x283418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28341c: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x28341cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x283420: 0xc0ab6dc  jal         func_2ADB70
    ctx->pc = 0x283420u;
    SET_GPR_U32(ctx, 31, 0x283428u);
    ctx->pc = 0x283424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283420u;
    // 0x283424: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADB70u, 0x283420u, 0x283428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283428u;
label_283428:
    // 0x283428: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x283428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28342c: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x28342cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x283430: 0xae6311b0  sw          $v1, 0x11B0($s3)
    ctx->pc = 0x283430u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4528), GPR_U32(ctx, 3));
label_283434:
    // 0x283434: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x283434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x283438: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x283438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x28343c: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x28343cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x283440: 0xc0a02d8  jal         func_280B60
    ctx->pc = 0x283440u;
    SET_GPR_U32(ctx, 31, 0x283448u);
    ctx->pc = 0x283444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283440u;
    // 0x283444: 0xac640a94  sw          $a0, 0xA94($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 2708), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280B60u, 0x283440u, 0x283448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283448u;
label_283448:
    // 0x283448: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x283448u;
    {
        const bool branch_taken_0x283448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283448u;
        // 0x28344c: 0x8f91b234  lw          $s1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283448) {
            ctx->pc = 0x2836CCu;
            goto label_2836cc;
        }
    }
    ctx->pc = 0x283450u;
label_283450:
    // 0x283450: 0x8e7011b4  lw          $s0, 0x11B4($s3)
    ctx->pc = 0x283450u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4532)));
    // 0x283454: 0xc52d0114  lwc1        $f13, 0x114($t1)
    ctx->pc = 0x283454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x283458: 0x8e120160  lw          $s2, 0x160($s0)
    ctx->pc = 0x283458u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x28345c: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x28345Cu;
    SET_GPR_U32(ctx, 31, 0x283464u);
    ctx->pc = 0x283460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28345Cu;
    // 0x283460: 0xc64c006c  lwc1        $f12, 0x6C($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x28345Cu, 0x283464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283464u;
label_283464:
    // 0x283464: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x283464u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x283468: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x283468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28346c: 0xc78088ec  lwc1        $f0, -0x7714($gp)
    ctx->pc = 0x28346cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283474: 0xc64c006c  lwc1        $f12, 0x6C($s2)
    ctx->pc = 0x283474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x283478: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x283478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x28347c: 0xc09b072  jal         func_26C1C8
    ctx->pc = 0x28347Cu;
    SET_GPR_U32(ctx, 31, 0x283484u);
    ctx->pc = 0x283480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28347Cu;
    // 0x283480: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1C8u, 0x28347Cu, 0x283484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283484u;
label_283484:
    // 0x283484: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x283484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283488: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x283488u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28348c: 0x0  nop
    ctx->pc = 0x28348cu;
    // NOP
    // 0x283490: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x283490u;
    {
        const bool branch_taken_0x283490 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x283490) {
            ctx->pc = 0x283494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283490u;
            // 0x283494: 0x4600a807  neg.s       $f0, $f21 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2834B0u;
            goto label_2834b0;
        }
    }
    ctx->pc = 0x283498u;
    // 0x283498: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x283498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28349c: 0x0  nop
    ctx->pc = 0x28349cu;
    // NOP
    // 0x2834a0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2834A0u;
    {
        const bool branch_taken_0x2834a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2834A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2834A0u;
        // 0x2834a4: 0x8f91b234  lw          $s1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2834a0) {
            ctx->pc = 0x2834C0u;
            goto label_2834c0;
        }
    }
    ctx->pc = 0x2834A8u;
    // 0x2834a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2834A8u;
    {
        const bool branch_taken_0x2834a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2834a8) {
            ctx->pc = 0x2834CCu;
            goto label_2834cc;
        }
    }
    ctx->pc = 0x2834B0u;
label_2834b0:
    // 0x2834b0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2834b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2834b4: 0x0  nop
    ctx->pc = 0x2834b4u;
    // NOP
    // 0x2834b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2834B8u;
    {
        const bool branch_taken_0x2834b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2834BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2834B8u;
        // 0x2834bc: 0x8f91b234  lw          $s1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2834b8) {
            ctx->pc = 0x2834C8u;
            goto label_2834c8;
        }
    }
    ctx->pc = 0x2834C0u;
label_2834c0:
    // 0x2834c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2834C0u;
    {
        const bool branch_taken_0x2834c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2834C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2834C0u;
        // 0x2834c4: 0xc640006c  lwc1        $f0, 0x6C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2834c0) {
            ctx->pc = 0x2834E8u;
            goto label_2834e8;
        }
    }
    ctx->pc = 0x2834C8u;
label_2834c8:
    // 0x2834c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2834c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2834cc:
    // 0x2834cc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2834ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2834d0: 0x0  nop
    ctx->pc = 0x2834d0u;
    // NOP
    // 0x2834d4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2834D4u;
    {
        const bool branch_taken_0x2834d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2834D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2834D4u;
        // 0x2834d8: 0xc6200114  lwc1        $f0, 0x114($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2834d4) {
            ctx->pc = 0x2834E4u;
            goto label_2834e4;
        }
    }
    ctx->pc = 0x2834DCu;
    // 0x2834dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2834DCu;
    {
        const bool branch_taken_0x2834dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2834E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2834DCu;
        // 0x2834e0: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2834dc) {
            ctx->pc = 0x2834E8u;
            goto label_2834e8;
        }
    }
    ctx->pc = 0x2834E4u;
label_2834e4:
    // 0x2834e4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2834e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_2834e8:
    // 0x2834e8: 0xe6200114  swc1        $f0, 0x114($s1)
    ctx->pc = 0x2834e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
    // 0x2834ec: 0xc64c0070  lwc1        $f12, 0x70($s2)
    ctx->pc = 0x2834ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2834f0: 0xc62d011c  lwc1        $f13, 0x11C($s1)
    ctx->pc = 0x2834f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2834f4: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x2834F4u;
    SET_GPR_U32(ctx, 31, 0x2834FCu);
    ctx->pc = 0x2834F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2834F4u;
    // 0x2834f8: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x2834F4u, 0x2834FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2834FCu;
label_2834fc:
    // 0x2834fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2834fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283500: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x283500u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x283504: 0xc782b468  lwc1        $f2, -0x4B98($gp)
    ctx->pc = 0x283504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x283508: 0xc78088f0  lwc1        $f0, -0x7710($gp)
    ctx->pc = 0x283508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28350c: 0x46150836  c.le.s      $f1, $f21
    ctx->pc = 0x28350cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283510: 0x0  nop
    ctx->pc = 0x283510u;
    // NOP
    // 0x283514: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x283514u;
    {
        const bool branch_taken_0x283514 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x283518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283514u;
        // 0x283518: 0x46001502  mul.s       $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283514) {
            ctx->pc = 0x283534u;
            goto label_283534;
        }
    }
    ctx->pc = 0x28351Cu;
    // 0x28351c: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x28351cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283520: 0x0  nop
    ctx->pc = 0x283520u;
    // NOP
    // 0x283524: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x283524u;
    {
        const bool branch_taken_0x283524 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x283524) {
            ctx->pc = 0x283528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283524u;
            // 0x283528: 0xc6400070  lwc1        $f0, 0x70($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x283548u;
            goto label_283548;
        }
    }
    ctx->pc = 0x28352Cu;
    // 0x28352c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28352Cu;
    {
        const bool branch_taken_0x28352c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28352c) {
            ctx->pc = 0x283554u;
            goto label_283554;
        }
    }
    ctx->pc = 0x283534u;
label_283534:
    // 0x283534: 0x4600a807  neg.s       $f0, $f21
    ctx->pc = 0x283534u;
    ctx->f[0] = FPU_NEG_S(ctx->f[21]);
    // 0x283538: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x283538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28353c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x28353Cu;
    {
        const bool branch_taken_0x28353c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28353c) {
            ctx->pc = 0x283554u;
            goto label_283554;
        }
    }
    ctx->pc = 0x283544u;
    // 0x283544: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x283544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_283548:
    // 0x283548: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x283548u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x28354c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28354Cu;
    {
        const bool branch_taken_0x28354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28354Cu;
        // 0x283550: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28354c) {
            ctx->pc = 0x283578u;
            goto label_283578;
        }
    }
    ctx->pc = 0x283554u;
label_283554:
    // 0x283554: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x283554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283558: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x283558u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x28355c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x28355cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283560: 0x0  nop
    ctx->pc = 0x283560u;
    // NOP
    // 0x283564: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x283564u;
    {
        const bool branch_taken_0x283564 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x283568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283564u;
        // 0x283568: 0xc620011c  lwc1        $f0, 0x11C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x283564) {
            ctx->pc = 0x283574u;
            goto label_283574;
        }
    }
    ctx->pc = 0x28356Cu;
    // 0x28356c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28356Cu;
    {
        const bool branch_taken_0x28356c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28356Cu;
        // 0x283570: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28356c) {
            ctx->pc = 0x283578u;
            goto label_283578;
        }
    }
    ctx->pc = 0x283574u;
label_283574:
    // 0x283574: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x283574u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_283578:
    // 0x283578: 0xe620011c  swc1        $f0, 0x11C($s1)
    ctx->pc = 0x283578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
    // 0x28357c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x28357cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283580: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x283580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283584: 0xc78288f4  lwc1        $f2, -0x770C($gp)
    ctx->pc = 0x283584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x283588: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x283588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x28358c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x28358cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x283590: 0xc620007c  lwc1        $f0, 0x7C($s1)
    ctx->pc = 0x283590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283594: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x283594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x283598: 0xc78388f8  lwc1        $f3, -0x7708($gp)
    ctx->pc = 0x283598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28359c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28359cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2835a0: 0xe6220090  swc1        $f2, 0x90($s1)
    ctx->pc = 0x2835a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x2835a4: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2835a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2835a8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2835a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2835ac: 0xe620007c  swc1        $f0, 0x7C($s1)
    ctx->pc = 0x2835acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
    // 0x2835b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2835B0u;
    {
        const bool branch_taken_0x2835b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2835B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2835B0u;
        // 0x2835b4: 0xe6210094  swc1        $f1, 0x94($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835b0) {
            ctx->pc = 0x2835BCu;
            goto label_2835bc;
        }
    }
    ctx->pc = 0x2835B8u;
    // 0x2835b8: 0xe623007c  swc1        $f3, 0x7C($s1)
    ctx->pc = 0x2835b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
label_2835bc:
    // 0x2835bc: 0xc6210074  lwc1        $f1, 0x74($s1)
    ctx->pc = 0x2835bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2835c0: 0xc6200090  lwc1        $f0, 0x90($s1)
    ctx->pc = 0x2835c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2835c4: 0xc623007c  lwc1        $f3, 0x7C($s1)
    ctx->pc = 0x2835c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2835c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2835c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2835cc: 0xc622008c  lwc1        $f2, 0x8C($s1)
    ctx->pc = 0x2835ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2835d0: 0xc6210094  lwc1        $f1, 0x94($s1)
    ctx->pc = 0x2835d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2835d4: 0xe6220098  swc1        $f2, 0x98($s1)
    ctx->pc = 0x2835d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x2835d8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2835d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2835dc: 0xe62100a0  swc1        $f1, 0xA0($s1)
    ctx->pc = 0x2835dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
    // 0x2835e0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2835E0u;
    {
        const bool branch_taken_0x2835e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2835E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2835E0u;
        // 0x2835e4: 0xe620009c  swc1        $f0, 0x9C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835e0) {
            ctx->pc = 0x2836CCu;
            goto label_2836cc;
        }
    }
    ctx->pc = 0x2835E8u;
label_2835e8:
    // 0x2835e8: 0x8e7111b4  lw          $s1, 0x11B4($s3)
    ctx->pc = 0x2835e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4532)));
    // 0x2835ec: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x2835ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2835f0: 0xc52c0114  lwc1        $f12, 0x114($t1)
    ctx->pc = 0x2835f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2835f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2835f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2835f8: 0xc09b072  jal         func_26C1C8
    ctx->pc = 0x2835F8u;
    SET_GPR_U32(ctx, 31, 0x283600u);
    ctx->pc = 0x2835FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2835F8u;
    // 0x2835fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1C8u, 0x2835F8u, 0x283600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283600u;
label_283600:
    // 0x283600: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x283600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283604: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x283604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283608: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x283608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28360c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28360cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283610: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x283610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283614: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x283614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x283618: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x283618u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28361c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28361cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x283620: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x283620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283624: 0x24480338  addiu       $t0, $v0, 0x338
    ctx->pc = 0x283624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 824));
    // 0x283628: 0x2445008c  addiu       $a1, $v0, 0x8C
    ctx->pc = 0x283628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x28362c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x28362cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x283630: 0xc44c0068  lwc1        $f12, 0x68($v0)
    ctx->pc = 0x283630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x283634: 0xc09f430  jal         func_27D0C0
    ctx->pc = 0x283634u;
    SET_GPR_U32(ctx, 31, 0x28363Cu);
    ctx->pc = 0x283638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283634u;
    // 0x283638: 0xc44d0084  lwc1        $f13, 0x84($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D0C0u, 0x283634u, 0x28363Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28363Cu;
label_28363c:
    // 0x28363c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x28363cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283640: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x283640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
    // 0x283644: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283644u;
    {
        const bool branch_taken_0x283644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283644u;
        // 0x283648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283644) {
            ctx->pc = 0x283660u;
            goto label_283660;
        }
    }
    ctx->pc = 0x28364Cu;
    // 0x28364c: 0xc09b0c6  jal         func_26C318
    ctx->pc = 0x28364Cu;
    SET_GPR_U32(ctx, 31, 0x283654u);
    ctx->pc = 0x283650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28364Cu;
    // 0x283650: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C318u, 0x28364Cu, 0x283654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283654u;
label_283654:
    // 0x283654: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x283654u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x283658: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283658u;
    {
        const bool branch_taken_0x283658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283658u;
        // 0x28365c: 0xe6200114  swc1        $f0, 0x114($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x283658) {
            ctx->pc = 0x283664u;
            goto label_283664;
        }
    }
    ctx->pc = 0x283660u;
label_283660:
    // 0x283660: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x283660u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_283664:
    // 0x283664: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x283664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283668: 0xc78288fc  lwc1        $f2, -0x7704($gp)
    ctx->pc = 0x283668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28366c: 0xc621007c  lwc1        $f1, 0x7C($s1)
    ctx->pc = 0x28366cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283670: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x283670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x283674: 0xc7828900  lwc1        $f2, -0x7700($gp)
    ctx->pc = 0x283674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x283678: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x283678u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28367c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x28367cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283680: 0x0  nop
    ctx->pc = 0x283680u;
    // NOP
    // 0x283684: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x283684u;
    {
        const bool branch_taken_0x283684 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x283688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283684u;
        // 0x283688: 0xe621007c  swc1        $f1, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x283684) {
            ctx->pc = 0x283690u;
            goto label_283690;
        }
    }
    ctx->pc = 0x28368Cu;
    // 0x28368c: 0xe622007c  swc1        $f2, 0x7C($s1)
    ctx->pc = 0x28368cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
label_283690:
    // 0x283690: 0xc7a400b0  lwc1        $f4, 0xB0($sp)
    ctx->pc = 0x283690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x283694: 0xc6210074  lwc1        $f1, 0x74($s1)
    ctx->pc = 0x283694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283698: 0xe624008c  swc1        $f4, 0x8C($s1)
    ctx->pc = 0x283698u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x28369c: 0xc623007c  lwc1        $f3, 0x7C($s1)
    ctx->pc = 0x28369cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2836a0: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2836a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2836a4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2836a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2836a8: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x2836a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x2836ac: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x2836acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2836b0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2836b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2836b4: 0xe6240098  swc1        $f4, 0x98($s1)
    ctx->pc = 0x2836b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x2836b8: 0xe62200a0  swc1        $f2, 0xA0($s1)
    ctx->pc = 0x2836b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
    // 0x2836bc: 0xe6220094  swc1        $f2, 0x94($s1)
    ctx->pc = 0x2836bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x2836c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2836C0u;
    {
        const bool branch_taken_0x2836c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2836C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836C0u;
        // 0x2836c4: 0xe621009c  swc1        $f1, 0x9C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836c0) {
            ctx->pc = 0x2836CCu;
            goto label_2836cc;
        }
    }
    ctx->pc = 0x2836C8u;
label_2836c8:
    // 0x2836c8: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x2836c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_2836cc:
    // 0x2836cc: 0xc6220080  lwc1        $f2, 0x80($s1)
    ctx->pc = 0x2836ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2836d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2836d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2836d4: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x2836d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2836d8: 0x0  nop
    ctx->pc = 0x2836d8u;
    // NOP
    // 0x2836dc: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x2836DCu;
    {
        const bool branch_taken_0x2836dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2836E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836DCu;
        // 0x2836e0: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836dc) {
            ctx->pc = 0x2837B4u;
            goto label_2837b4;
        }
    }
    ctx->pc = 0x2836E4u;
    // 0x2836e4: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2836e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2836e8: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2836E8u;
    {
        const bool branch_taken_0x2836e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2836ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836E8u;
        // 0x2836ec: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836e8) {
            ctx->pc = 0x283720u;
            goto label_283720;
        }
    }
    ctx->pc = 0x2836F0u;
    // 0x2836f0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2836f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2836f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2836f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2836f8: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x2836f8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x2836fc: 0x0  nop
    ctx->pc = 0x2836fcu;
    // NOP
label_283700:
    // 0x283700: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x283700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x283704: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x283704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x283708: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x283708u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28370c: 0x0  nop
    ctx->pc = 0x28370cu;
    // NOP
    // 0x283710: 0x0  nop
    ctx->pc = 0x283710u;
    // NOP
    // 0x283714: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x283714u;
    {
        const bool branch_taken_0x283714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283714) {
            ctx->pc = 0x283700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283700;
        }
    }
    ctx->pc = 0x28371Cu;
    // 0x28371c: 0xe4610080  swc1        $f1, 0x80($v1)
    ctx->pc = 0x28371cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
label_283720:
    // 0x283720: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x283720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283724: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x283724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283728: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x283728u;
    {
        const bool branch_taken_0x283728 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x283728) {
            ctx->pc = 0x283744u;
            goto label_283744;
        }
    }
    ctx->pc = 0x283730u;
    // 0x283730: 0xc6200080  lwc1        $f0, 0x80($s1)
    ctx->pc = 0x283730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283734: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x283734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283738: 0x0  nop
    ctx->pc = 0x283738u;
    // NOP
    // 0x28373c: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x28373Cu;
    {
        const bool branch_taken_0x28373c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28373c) {
            ctx->pc = 0x283740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28373Cu;
            // 0x283740: 0xae200080  sw          $zero, 0x80($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28376Cu;
            goto label_28376c;
        }
    }
    ctx->pc = 0x283744u;
label_283744:
    // 0x283744: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x283744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283748: 0x0  nop
    ctx->pc = 0x283748u;
    // NOP
    // 0x28374c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x28374Cu;
    {
        const bool branch_taken_0x28374c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28374c) {
            ctx->pc = 0x283750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28374Cu;
            // 0x283750: 0xc623009c  lwc1        $f3, 0x9C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x283770u;
            goto label_283770;
        }
    }
    ctx->pc = 0x283754u;
    // 0x283754: 0xc6200080  lwc1        $f0, 0x80($s1)
    ctx->pc = 0x283754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283758: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x283758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28375c: 0x0  nop
    ctx->pc = 0x28375cu;
    // NOP
    // 0x283760: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x283760u;
    {
        const bool branch_taken_0x283760 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x283760) {
            ctx->pc = 0x283764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283760u;
            // 0x283764: 0xc623009c  lwc1        $f3, 0x9C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x283770u;
            goto label_283770;
        }
    }
    ctx->pc = 0x283768u;
    // 0x283768: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x283768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
label_28376c:
    // 0x28376c: 0xc623009c  lwc1        $f3, 0x9C($s1)
    ctx->pc = 0x28376cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_283770:
    // 0x283770: 0xc6210080  lwc1        $f1, 0x80($s1)
    ctx->pc = 0x283770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283774: 0xc6220090  lwc1        $f2, 0x90($s1)
    ctx->pc = 0x283774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x283778: 0xc7848904  lwc1        $f4, -0x76FC($gp)
    ctx->pc = 0x283778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28377c: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x28377cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x283780: 0x46041000  add.s       $f0, $f2, $f4
    ctx->pc = 0x283780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x283784: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x283784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283788: 0x0  nop
    ctx->pc = 0x283788u;
    // NOP
    // 0x28378c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x28378Cu;
    {
        const bool branch_taken_0x28378c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28378c) {
            ctx->pc = 0x283790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28378Cu;
            // 0x283790: 0xc620009c  lwc1        $f0, 0x9C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2837A4u;
            goto label_2837a4;
        }
    }
    ctx->pc = 0x283794u;
    // 0x283794: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x283794u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x283798: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x283798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x28379c: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x28379cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x2837a0: 0xc620009c  lwc1        $f0, 0x9C($s1)
    ctx->pc = 0x2837a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2837a4:
    // 0x2837a4: 0xc6210080  lwc1        $f1, 0x80($s1)
    ctx->pc = 0x2837a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2837a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2837a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2837ac: 0xe620009c  swc1        $f0, 0x9C($s1)
    ctx->pc = 0x2837acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
    // 0x2837b0: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x2837b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_2837b4:
    // 0x2837b4: 0x4600eb46  mov.s       $f13, $f29
    ctx->pc = 0x2837b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[29]);
    // 0x2837b8: 0xc0a0fd8  jal         func_283F60
    ctx->pc = 0x2837B8u;
    SET_GPR_U32(ctx, 31, 0x2837C0u);
    ctx->pc = 0x2837BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2837B8u;
    // 0x2837bc: 0x4600fb86  mov.s       $f14, $f31 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[31]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x283F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283F60u, 0x2837B8u, 0x2837C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2837C0u;
label_2837c0:
    // 0x2837c0: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x2837c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2837c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2837c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2837c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2837c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2837cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2837ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2837d0: 0xc6200164  lwc1        $f0, 0x164($s1)
    ctx->pc = 0x2837d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2837d4: 0xc6210098  lwc1        $f1, 0x98($s1)
    ctx->pc = 0x2837d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2837d8: 0x8e30031c  lw          $s0, 0x31C($s1)
    ctx->pc = 0x2837d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
    // 0x2837dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2837dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2837e0: 0x50800a  movz        $s0, $v0, $s0
    ctx->pc = 0x2837e0u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x2837e4: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x2837e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2837e8: 0xc6210168  lwc1        $f1, 0x168($s1)
    ctx->pc = 0x2837e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2837ec: 0xc620009c  lwc1        $f0, 0x9C($s1)
    ctx->pc = 0x2837ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2837f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2837f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2837f4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2837f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2837f8: 0xc62100a0  lwc1        $f1, 0xA0($s1)
    ctx->pc = 0x2837f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2837fc: 0xc620016c  lwc1        $f0, 0x16C($s1)
    ctx->pc = 0x2837fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283800: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x283800u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x283804: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x283804u;
    {
        const bool branch_taken_0x283804 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x283808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283804u;
        // 0x283808: 0xe7a10118  swc1        $f1, 0x118($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x283804) {
            ctx->pc = 0x283844u;
            goto label_283844;
        }
    }
    ctx->pc = 0x28380Cu;
    // 0x28380c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28380Cu;
    {
        const bool branch_taken_0x28380c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28380Cu;
        // 0x283810: 0x27b20110  addiu       $s2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28380c) {
            ctx->pc = 0x28381Cu;
            goto label_28381c;
        }
    }
    ctx->pc = 0x283814u;
    // 0x283814: 0x0  nop
    ctx->pc = 0x283814u;
    // NOP
label_283818:
    // 0x283818: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x283818u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_28381c:
    // 0x28381c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28381cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283820: 0x26240164  addiu       $a0, $s1, 0x164
    ctx->pc = 0x283820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
    // 0x283824: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x283824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283828: 0xc09633c  jal         func_258CF0
    ctx->pc = 0x283828u;
    SET_GPR_U32(ctx, 31, 0x283830u);
    ctx->pc = 0x28382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283828u;
    // 0x28382c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258CF0u, 0x283828u, 0x283830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283830u;
label_283830:
    // 0x283830: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x283830u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283834: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x283834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283838: 0x1467fff7  bne         $v1, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x283838u;
    {
        const bool branch_taken_0x283838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x28383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283838u;
        // 0x28383c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283838) {
            ctx->pc = 0x283818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283818;
        }
    }
    ctx->pc = 0x283840u;
    // 0x283840: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x283840u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_283844:
    // 0x283844: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x283844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x283848: 0xc62700c4  lwc1        $f7, 0xC4($s1)
    ctx->pc = 0x283848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28384c: 0xc62000a4  lwc1        $f0, 0xA4($s1)
    ctx->pc = 0x28384cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283850: 0xc62900c0  lwc1        $f9, 0xC0($s1)
    ctx->pc = 0x283850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x283854: 0xc62300bc  lwc1        $f3, 0xBC($s1)
    ctx->pc = 0x283854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x283858: 0x46003a02  mul.s       $f8, $f7, $f0
    ctx->pc = 0x283858u;
    ctx->f[8] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x28385c: 0x46004882  mul.s       $f2, $f9, $f0
    ctx->pc = 0x28385cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x283860: 0xc6240098  lwc1        $f4, 0x98($s1)
    ctx->pc = 0x283860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x283864: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x283864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x283868: 0xc625009c  lwc1        $f5, 0x9C($s1)
    ctx->pc = 0x283868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28386c: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x28386cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x283870: 0xc62600a0  lwc1        $f6, 0xA0($s1)
    ctx->pc = 0x283870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x283874: 0x46023841  sub.s       $f1, $f7, $f2
    ctx->pc = 0x283874u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x283878: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x283878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28387c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28387cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x283880: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x283880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x283884: 0xae23031c  sw          $v1, 0x31C($s1)
    ctx->pc = 0x283884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 3));
    // 0x283888: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x283888u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x28388c: 0xe62400b0  swc1        $f4, 0xB0($s1)
    ctx->pc = 0x28388cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
    // 0x283890: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x283890u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x283894: 0xe63400a8  swc1        $f20, 0xA8($s1)
    ctx->pc = 0x283894u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
    // 0x283898: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x283898u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28389c: 0xe62000f4  swc1        $f0, 0xF4($s1)
    ctx->pc = 0x28389cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 244), bits); }
    // 0x2838a0: 0x46021202  mul.s       $f8, $f2, $f2
    ctx->pc = 0x2838a0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2838a4: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x2838a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
    // 0x2838a8: 0x46092940  add.s       $f5, $f5, $f9
    ctx->pc = 0x2838a8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[9]);
    // 0x2838ac: 0xe62100f0  swc1        $f1, 0xF0($s1)
    ctx->pc = 0x2838acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
    // 0x2838b0: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2838b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2838b4: 0xe62200f8  swc1        $f2, 0xF8($s1)
    ctx->pc = 0x2838b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 248), bits); }
    // 0x2838b8: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x2838b8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x2838bc: 0xe62500b4  swc1        $f5, 0xB4($s1)
    ctx->pc = 0x2838bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
    // 0x2838c0: 0x46081b00  add.s       $f12, $f3, $f8
    ctx->pc = 0x2838c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x2838c4: 0x0  nop
    ctx->pc = 0x2838c4u;
    // NOP
    // 0x2838c8: 0x0  nop
    ctx->pc = 0x2838c8u;
    // NOP
    // 0x2838cc: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2838ccu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2838d0: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2838d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2838d4: 0x0  nop
    ctx->pc = 0x2838d4u;
    // NOP
    // 0x2838d8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2838D8u;
    {
        const bool branch_taken_0x2838d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2838DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838D8u;
        // 0x2838dc: 0xe62600b8  swc1        $f6, 0xB8($s1) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2838d8) {
            ctx->pc = 0x2838ECu;
            goto label_2838ec;
        }
    }
    ctx->pc = 0x2838E0u;
    // 0x2838e0: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2838E0u;
    SET_GPR_U32(ctx, 31, 0x2838E8u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2838E0u, 0x2838E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2838E8u;
label_2838e8:
    // 0x2838e8: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x2838e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_2838ec:
    // 0x2838ec: 0x0  nop
    ctx->pc = 0x2838ecu;
    // NOP
    // 0x2838f0: 0x0  nop
    ctx->pc = 0x2838f0u;
    // NOP
    // 0x2838f4: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x2838f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[0];
    // 0x2838f8: 0xc62500f0  lwc1        $f5, 0xF0($s1)
    ctx->pc = 0x2838f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2838fc: 0xc62000f8  lwc1        $f0, 0xF8($s1)
    ctx->pc = 0x2838fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283900: 0xc62200f4  lwc1        $f2, 0xF4($s1)
    ctx->pc = 0x283900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x283904: 0xc62400c4  lwc1        $f4, 0xC4($s1)
    ctx->pc = 0x283904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x283908: 0xc62300bc  lwc1        $f3, 0xBC($s1)
    ctx->pc = 0x283908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28390c: 0xc62600c0  lwc1        $f6, 0xC0($s1)
    ctx->pc = 0x28390cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x283910: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x283910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x283914: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x283914u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x283918: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x283918u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x28391c: 0x460019c2  mul.s       $f7, $f3, $f0
    ctx->pc = 0x28391cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x283920: 0xe62000f8  swc1        $f0, 0xF8($s1)
    ctx->pc = 0x283920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 248), bits); }
    // 0x283924: 0x46052042  mul.s       $f1, $f4, $f5
    ctx->pc = 0x283924u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x283928: 0xe62500f0  swc1        $f5, 0xF0($s1)
    ctx->pc = 0x283928u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
    // 0x28392c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x28392cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x283930: 0xe62200f4  swc1        $f2, 0xF4($s1)
    ctx->pc = 0x283930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 244), bits); }
    // 0x283934: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x283934u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x283938: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x283938u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x28393c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x28393cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x283940: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x283940u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x283944: 0x46053182  mul.s       $f6, $f6, $f5
    ctx->pc = 0x283944u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x283948: 0xe62100e8  swc1        $f1, 0xE8($s1)
    ctx->pc = 0x283948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
    // 0x28394c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x28394cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x283950: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x283950u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x283954: 0xe62000e4  swc1        $f0, 0xE4($s1)
    ctx->pc = 0x283954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
    // 0x283958: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x283958u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x28395c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x28395cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x283960: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x283960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x283964: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x283964u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x283968: 0x0  nop
    ctx->pc = 0x283968u;
    // NOP
    // 0x28396c: 0x0  nop
    ctx->pc = 0x28396cu;
    // NOP
    // 0x283970: 0x460c0004  c1          0xC0004
    ctx->pc = 0x283970u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x283974: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x283974u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283978: 0x0  nop
    ctx->pc = 0x283978u;
    // NOP
    // 0x28397c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x28397Cu;
    {
        const bool branch_taken_0x28397c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x283980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28397Cu;
        // 0x283980: 0xe62300ec  swc1        $f3, 0xEC($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28397c) {
            ctx->pc = 0x283990u;
            goto label_283990;
        }
    }
    ctx->pc = 0x283984u;
    // 0x283984: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x283984u;
    SET_GPR_U32(ctx, 31, 0x28398Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x283984u, 0x28398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28398Cu;
label_28398c:
    // 0x28398c: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x28398cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_283990:
    // 0x283990: 0x0  nop
    ctx->pc = 0x283990u;
    // NOP
    // 0x283994: 0x0  nop
    ctx->pc = 0x283994u;
    // NOP
    // 0x283998: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x283998u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[0];
    // 0x28399c: 0xc62200e4  lwc1        $f2, 0xE4($s1)
    ctx->pc = 0x28399cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2839a0: 0xc62300e8  lwc1        $f3, 0xE8($s1)
    ctx->pc = 0x2839a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2839a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2839a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2839a8: 0xc62000ec  lwc1        $f0, 0xEC($s1)
    ctx->pc = 0x2839a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2839ac: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x2839acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x2839b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2839b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2839b4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2839b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2839b8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2839b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2839bc: 0xe62000ec  swc1        $f0, 0xEC($s1)
    ctx->pc = 0x2839bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
    // 0x2839c0: 0xe62200e4  swc1        $f2, 0xE4($s1)
    ctx->pc = 0x2839c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
    // 0x2839c4: 0x10450011  beq         $v0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2839C4u;
    {
        const bool branch_taken_0x2839c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2839C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2839C4u;
        // 0x2839c8: 0xe62300e8  swc1        $f3, 0xE8($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839c4) {
            ctx->pc = 0x283A0Cu;
            goto label_283a0c;
        }
    }
    ctx->pc = 0x2839CCu;
    // 0x2839cc: 0x8e230180  lw          $v1, 0x180($s1)
    ctx->pc = 0x2839ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x2839d0: 0xc620008c  lwc1        $f0, 0x8C($s1)
    ctx->pc = 0x2839d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2839d4: 0x8e22031c  lw          $v0, 0x31C($s1)
    ctx->pc = 0x2839d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
    // 0x2839d8: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2839d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2839dc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2839dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2839e0: 0xc6210090  lwc1        $f1, 0x90($s1)
    ctx->pc = 0x2839e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2839e4: 0x8e240128  lw          $a0, 0x128($s1)
    ctx->pc = 0x2839e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x2839e8: 0xe4610034  swc1        $f1, 0x34($v1)
    ctx->pc = 0x2839e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2839ec: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x2839ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2839f0: 0x10850006  beq         $a0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2839F0u;
    {
        const bool branch_taken_0x2839f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2839F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2839F0u;
        // 0x2839f4: 0xe4600038  swc1        $f0, 0x38($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839f0) {
            ctx->pc = 0x283A0Cu;
            goto label_283a0c;
        }
    }
    ctx->pc = 0x2839F8u;
    // 0x2839f8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2839f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2839fc: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2839FCu;
    {
        const bool branch_taken_0x2839fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2839fc) {
            ctx->pc = 0x283A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2839FCu;
            // 0x283a00: 0x8e220320  lw          $v0, 0x320($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283A10u;
            goto label_283a10;
        }
    }
    ctx->pc = 0x283A04u;
    // 0x283a04: 0xc6200114  lwc1        $f0, 0x114($s1)
    ctx->pc = 0x283a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283a08: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x283a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
label_283a0c:
    // 0x283a0c: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x283a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_283a10:
    // 0x283a10: 0x5040003d  beql        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x283A10u;
    {
        const bool branch_taken_0x283a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283a10) {
            ctx->pc = 0x283A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283A10u;
            // 0x283a14: 0x8e230128  lw          $v1, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283B08u;
            goto label_283b08;
        }
    }
    ctx->pc = 0x283A18u;
    // 0x283a18: 0x8e230180  lw          $v1, 0x180($s1)
    ctx->pc = 0x283a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x283a1c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x283a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x283a20: 0x34a5ffdf  ori         $a1, $a1, 0xFFDF
    ctx->pc = 0x283a20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65503);
    // 0x283a24: 0x8e64014c  lw          $a0, 0x14C($s3)
    ctx->pc = 0x283a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 332)));
    // 0x283a28: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x283a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x283a2c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x283a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x283a30: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283A30u;
    {
        const bool branch_taken_0x283a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x283A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A30u;
        // 0x283a34: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a30) {
            ctx->pc = 0x283A44u;
            goto label_283a44;
        }
    }
    ctx->pc = 0x283A38u;
    // 0x283a38: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x283a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x283a3c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x283a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x283a40: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x283a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_283a44:
    // 0x283a44: 0x8e6301b8  lw          $v1, 0x1B8($s3)
    ctx->pc = 0x283a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x283a48: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x283A48u;
    {
        const bool branch_taken_0x283a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x283a48) {
            ctx->pc = 0x283A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283A48u;
            // 0x283a4c: 0x8e6311b4  lw          $v1, 0x11B4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283A60u;
            goto label_283a60;
        }
    }
    ctx->pc = 0x283A50u;
    // 0x283a50: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x283a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x283a54: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x283a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x283a58: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x283a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x283a5c: 0x8e6311b4  lw          $v1, 0x11B4($s3)
    ctx->pc = 0x283a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4532)));
label_283a60:
    // 0x283a60: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x283A60u;
    {
        const bool branch_taken_0x283a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x283a60) {
            ctx->pc = 0x283A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283A60u;
            // 0x283a64: 0x8e24031c  lw          $a0, 0x31C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283A78u;
            goto label_283a78;
        }
    }
    ctx->pc = 0x283A68u;
    // 0x283a68: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x283a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x283a6c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x283a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x283a70: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x283a70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x283a74: 0x8e24031c  lw          $a0, 0x31C($s1)
    ctx->pc = 0x283a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_283a78:
    // 0x283a78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x283a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283a7c: 0x2629034c  addiu       $t1, $s1, 0x34C
    ctx->pc = 0x283a7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 844));
    // 0x283a80: 0x26250098  addiu       $a1, $s1, 0x98
    ctx->pc = 0x283a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
    // 0x283a84: 0x26280340  addiu       $t0, $s1, 0x340
    ctx->pc = 0x283a84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x283a88: 0x44200a  movz        $a0, $v0, $a0
    ctx->pc = 0x283a88u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x283a8c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x283a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x283a90: 0x26660ba0  addiu       $a2, $s3, 0xBA0
    ctx->pc = 0x283a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2976));
    // 0x283a94: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x283a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x283a98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x283a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283a9c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x283a9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283aa0: 0xc09640e  jal         func_259038
    ctx->pc = 0x283AA0u;
    SET_GPR_U32(ctx, 31, 0x283AA8u);
    ctx->pc = 0x283AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283AA0u;
    // 0x283aa4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x283AA0u, 0x283AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283AA8u;
label_283aa8:
    // 0x283aa8: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x283aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x283aac: 0x8e64014c  lw          $a0, 0x14C($s3)
    ctx->pc = 0x283aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 332)));
    // 0x283ab0: 0x8e230180  lw          $v1, 0x180($s1)
    ctx->pc = 0x283ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x283ab4: 0xae22033c  sw          $v0, 0x33C($s1)
    ctx->pc = 0x283ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 2));
    // 0x283ab8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x283ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x283abc: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x283abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x283ac0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283AC0u;
    {
        const bool branch_taken_0x283ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x283AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AC0u;
        // 0x283ac4: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ac0) {
            ctx->pc = 0x283AD4u;
            goto label_283ad4;
        }
    }
    ctx->pc = 0x283AC8u;
    // 0x283ac8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x283ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x283acc: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x283accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x283ad0: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x283ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_283ad4:
    // 0x283ad4: 0x8e6301b8  lw          $v1, 0x1B8($s3)
    ctx->pc = 0x283ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x283ad8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x283AD8u;
    {
        const bool branch_taken_0x283ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x283ad8) {
            ctx->pc = 0x283ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283AD8u;
            // 0x283adc: 0x8e6311b4  lw          $v1, 0x11B4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283AF0u;
            goto label_283af0;
        }
    }
    ctx->pc = 0x283AE0u;
    // 0x283ae0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x283ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x283ae4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x283ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x283ae8: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x283ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x283aec: 0x8e6311b4  lw          $v1, 0x11B4($s3)
    ctx->pc = 0x283aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4532)));
label_283af0:
    // 0x283af0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x283AF0u;
    {
        const bool branch_taken_0x283af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x283af0) {
            ctx->pc = 0x283AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283AF0u;
            // 0x283af4: 0x8e230128  lw          $v1, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283B08u;
            goto label_283b08;
        }
    }
    ctx->pc = 0x283AF8u;
    // 0x283af8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x283af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x283afc: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x283afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x283b00: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x283b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_283b04:
    // 0x283b04: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x283b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_283b08:
    // 0x283b08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x283b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x283b0c: 0x1062004c  beq         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x283B0Cu;
    {
        const bool branch_taken_0x283b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x283B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B0Cu;
        // 0x283b10: 0x8e300180  lw          $s0, 0x180($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b0c) {
            ctx->pc = 0x283C40u;
            goto label_283c40;
        }
    }
    ctx->pc = 0x283B14u;
    // 0x283b14: 0xc6620ba0  lwc1        $f2, 0xBA0($s3)
    ctx->pc = 0x283b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x283b18: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x283b18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x283b1c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x283b1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x283b20: 0xc6600ba4  lwc1        $f0, 0xBA4($s3)
    ctx->pc = 0x283b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283b24: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x283b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x283b28: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x283b28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x283b2c: 0xc6610ba8  lwc1        $f1, 0xBA8($s3)
    ctx->pc = 0x283b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283b30: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x283b30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x283b34: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x283b34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x283b38: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x283b38u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x283b3c: 0x0  nop
    ctx->pc = 0x283b3cu;
    // NOP
    // 0x283b40: 0x0  nop
    ctx->pc = 0x283b40u;
    // NOP
    // 0x283b44: 0x460c0004  c1          0xC0004
    ctx->pc = 0x283b44u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x283b48: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x283b48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283b4c: 0x0  nop
    ctx->pc = 0x283b4cu;
    // NOP
    // 0x283b50: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x283B50u;
    {
        const bool branch_taken_0x283b50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x283B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B50u;
        // 0x283b54: 0xe7a10128  swc1        $f1, 0x128($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b50) {
            ctx->pc = 0x283B60u;
            goto label_283b60;
        }
    }
    ctx->pc = 0x283B58u;
    // 0x283b58: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x283B58u;
    SET_GPR_U32(ctx, 31, 0x283B60u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x283B58u, 0x283B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B60u;
label_283b60:
    // 0x283b60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x283b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x283b64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x283b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283b68: 0xc7a20120  lwc1        $f2, 0x120($sp)
    ctx->pc = 0x283b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x283b6c: 0x0  nop
    ctx->pc = 0x283b6cu;
    // NOP
    // 0x283b70: 0x0  nop
    ctx->pc = 0x283b70u;
    // NOP
    // 0x283b74: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x283b74u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x283b78: 0xc7a30124  lwc1        $f3, 0x124($sp)
    ctx->pc = 0x283b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x283b7c: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x283b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283b80: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x283b80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x283b84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x283b84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x283b88: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x283b88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x283b8c: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x283b8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x283b90: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x283b90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x283b94: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x283b94u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x283b98: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x283b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x283b9c: 0x46040b00  add.s       $f12, $f1, $f4
    ctx->pc = 0x283b9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x283ba0: 0x0  nop
    ctx->pc = 0x283ba0u;
    // NOP
    // 0x283ba4: 0x0  nop
    ctx->pc = 0x283ba4u;
    // NOP
    // 0x283ba8: 0x460c0004  c1          0xC0004
    ctx->pc = 0x283ba8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x283bac: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x283bacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283bb0: 0x0  nop
    ctx->pc = 0x283bb0u;
    // NOP
    // 0x283bb4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x283BB4u;
    {
        const bool branch_taken_0x283bb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x283BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BB4u;
        // 0x283bb8: 0xe7a30124  swc1        $f3, 0x124($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x283bb4) {
            ctx->pc = 0x283BC4u;
            goto label_283bc4;
        }
    }
    ctx->pc = 0x283BBCu;
    // 0x283bbc: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x283BBCu;
    SET_GPR_U32(ctx, 31, 0x283BC4u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x283BBCu, 0x283BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283BC4u;
label_283bc4:
    // 0x283bc4: 0xc7ac0124  lwc1        $f12, 0x124($sp)
    ctx->pc = 0x283bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x283bc8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x283bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x283bcc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x283bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x283bd0: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x283BD0u;
    SET_GPR_U32(ctx, 31, 0x283BD8u);
    ctx->pc = 0x283BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283BD0u;
    // 0x283bd4: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x283BD0u, 0x283BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283BD8u;
label_283bd8:
    // 0x283bd8: 0xc7958908  lwc1        $f21, -0x76F8($gp)
    ctx->pc = 0x283bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x283bdc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x283bdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x283be0: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x283be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x283be4: 0x0  nop
    ctx->pc = 0x283be4u;
    // NOP
    // 0x283be8: 0x0  nop
    ctx->pc = 0x283be8u;
    // NOP
    // 0x283bec: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x283becu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[21];
    // 0x283bf0: 0xe4400b98  swc1        $f0, 0xB98($v0)
    ctx->pc = 0x283bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2968), bits); }
    // 0x283bf4: 0xc7ac0120  lwc1        $f12, 0x120($sp)
    ctx->pc = 0x283bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x283bf8: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x283BF8u;
    SET_GPR_U32(ctx, 31, 0x283C00u);
    ctx->pc = 0x283BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283BF8u;
    // 0x283bfc: 0xc7ad0128  lwc1        $f13, 0x128($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x283BF8u, 0x283C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283C00u;
label_283c00:
    // 0x283c00: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x283c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x283c04: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x283c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x283c08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x283c08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283c0c: 0x0  nop
    ctx->pc = 0x283c0cu;
    // NOP
    // 0x283c10: 0x0  nop
    ctx->pc = 0x283c10u;
    // NOP
    // 0x283c14: 0x46150083  div.s       $f2, $f0, $f21
    ctx->pc = 0x283c14u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[21];
    // 0x283c18: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x283c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283c1c: 0x0  nop
    ctx->pc = 0x283c1cu;
    // NOP
    // 0x283c20: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x283C20u;
    {
        const bool branch_taken_0x283c20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x283C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C20u;
        // 0x283c24: 0xe4420b9c  swc1        $f2, 0xB9C($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2972), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c20) {
            ctx->pc = 0x283C4Cu;
            goto label_283c4c;
        }
    }
    ctx->pc = 0x283C28u;
    // 0x283c28: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x283c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x283c2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x283c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283c30: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x283c30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x283c34: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x283c34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x283c38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x283C38u;
    {
        const bool branch_taken_0x283c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C38u;
        // 0x283c3c: 0xe4400b9c  swc1        $f0, 0xB9C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2972), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c38) {
            ctx->pc = 0x283C50u;
            goto label_283c50;
        }
    }
    ctx->pc = 0x283C40u;
label_283c40:
    // 0x283c40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x283c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x283c44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283C44u;
    {
        const bool branch_taken_0x283c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C44u;
        // 0x283c48: 0xae020150  sw          $v0, 0x150($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c44) {
            ctx->pc = 0x283C50u;
            goto label_283c50;
        }
    }
    ctx->pc = 0x283C4Cu;
label_283c4c:
    // 0x283c4c: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x283c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_283c50:
    // 0x283c50: 0x8f829cec  lw          $v0, -0x6314($gp)
    ctx->pc = 0x283c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941932)));
    // 0x283c54: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x283C54u;
    {
        const bool branch_taken_0x283c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283c54) {
            ctx->pc = 0x283C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283C54u;
            // 0x283c58: 0x8e230180  lw          $v1, 0x180($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283C74u;
            goto label_283c74;
        }
    }
    ctx->pc = 0x283C5Cu;
    // 0x283c5c: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x283c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x283c60: 0x8c440160  lw          $a0, 0x160($v0)
    ctx->pc = 0x283c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x283c64: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x283c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x283c68: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x283c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x283c6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x283C6Cu;
    {
        const bool branch_taken_0x283c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C6Cu;
        // 0x283c70: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c6c) {
            ctx->pc = 0x283C88u;
            goto label_283c88;
        }
    }
    ctx->pc = 0x283C74u;
label_283c74:
    // 0x283c74: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x283c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x283c78: 0x8c640160  lw          $a0, 0x160($v1)
    ctx->pc = 0x283c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x283c7c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x283c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x283c80: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x283c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x283c84: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x283c84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_283c88:
    // 0x283c88: 0xc62106f0  lwc1        $f1, 0x6F0($s1)
    ctx->pc = 0x283c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283c8c: 0xc780890c  lwc1        $f0, -0x76F4($gp)
    ctx->pc = 0x283c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283c90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x283c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283c94: 0x0  nop
    ctx->pc = 0x283c94u;
    // NOP
    // 0x283c98: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x283C98u;
    {
        const bool branch_taken_0x283c98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x283C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C98u;
        // 0x283c9c: 0x8f85b460  lw          $a1, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c98) {
            ctx->pc = 0x283D08u;
            goto label_283d08;
        }
    }
    ctx->pc = 0x283CA0u;
    // 0x283ca0: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x283CA0u;
    {
        const bool branch_taken_0x283ca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x283CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CA0u;
        // 0x283ca4: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ca0) {
            ctx->pc = 0x283D0Cu;
            goto label_283d0c;
        }
    }
    ctx->pc = 0x283CA8u;
    // 0x283ca8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x283ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x283cac: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x283cacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x283cb0: 0x30630030  andi        $v1, $v1, 0x30
    ctx->pc = 0x283cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x283cb4: 0x14640015  bne         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x283CB4u;
    {
        const bool branch_taken_0x283cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x283cb4) {
            ctx->pc = 0x283D0Cu;
            goto label_283d0c;
        }
    }
    ctx->pc = 0x283CBCu;
    // 0x283cbc: 0xc080f5c  jal         func_203D70
    ctx->pc = 0x283CBCu;
    SET_GPR_U32(ctx, 31, 0x283CC4u);
    ctx->pc = 0x283CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283CBCu;
    // 0x283cc0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D70u, 0x283CBCu, 0x283CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283CC4u;
label_283cc4:
    // 0x283cc4: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x283cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x283cc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283ccc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x283cccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x283cd0: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x283cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x283cd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x283cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x283cd8: 0xc46006f0  lwc1        $f0, 0x6F0($v1)
    ctx->pc = 0x283cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283cdc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x283cdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x283ce0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x283ce0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x283ce4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x283ce4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x283ce8: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x283ce8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x283cec: 0xc080f7c  jal         func_203DF0
    ctx->pc = 0x283CECu;
    SET_GPR_U32(ctx, 31, 0x283CF4u);
    ctx->pc = 0x283CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283CECu;
    // 0x283cf0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203DF0u, 0x283CECu, 0x283CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283CF4u;
label_283cf4:
    // 0x283cf4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x283cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x283cf8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x283cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283cfc: 0xc080f30  jal         func_203CC0
    ctx->pc = 0x283CFCu;
    SET_GPR_U32(ctx, 31, 0x283D04u);
    ctx->pc = 0x283D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283CFCu;
    // 0x283d00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203CC0u, 0x283CFCu, 0x283D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D04u;
label_283d04:
    // 0x283d04: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x283d04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_283d08:
    // 0x283d08: 0x8f85b460  lw          $a1, -0x4BA0($gp)
    ctx->pc = 0x283d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
label_283d0c:
    // 0x283d0c: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x283D0Cu;
    {
        const bool branch_taken_0x283d0c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x283D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D0Cu;
        // 0x283d10: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d0c) {
            ctx->pc = 0x283D40u;
            goto label_283d40;
        }
    }
    ctx->pc = 0x283D14u;
    // 0x283d14: 0xc62106f4  lwc1        $f1, 0x6F4($s1)
    ctx->pc = 0x283d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283d18: 0xc62006f0  lwc1        $f0, 0x6F0($s1)
    ctx->pc = 0x283d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283d1c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x283d1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_283d20:
    // 0x283d20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x283d20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x283d24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x283d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x283d28: 0x0  nop
    ctx->pc = 0x283d28u;
    // NOP
    // 0x283d2c: 0x0  nop
    ctx->pc = 0x283d2cu;
    // NOP
    // 0x283d30: 0x0  nop
    ctx->pc = 0x283d30u;
    // NOP
    // 0x283d34: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x283D34u;
    {
        const bool branch_taken_0x283d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283d34) {
            ctx->pc = 0x283D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283d20;
        }
    }
    ctx->pc = 0x283D3Cu;
    // 0x283d3c: 0xe46006f0  swc1        $f0, 0x6F0($v1)
    ctx->pc = 0x283d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1776), bits); }
label_283d40:
    // 0x283d40: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x283d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x283d44: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x283D44u;
    {
        const bool branch_taken_0x283d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283d44) {
            ctx->pc = 0x283D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283D44u;
            // 0x283d48: 0x8e220338  lw          $v0, 0x338($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283DA4u;
            goto label_283da4;
        }
    }
    ctx->pc = 0x283D4Cu;
    // 0x283d4c: 0xc09f8c6  jal         func_27E318
    ctx->pc = 0x283D4Cu;
    SET_GPR_U32(ctx, 31, 0x283D54u);
    ctx->pc = 0x27E318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E318u, 0x283D4Cu, 0x283D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D54u;
label_283d54:
    // 0x283d54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x283D54u;
    {
        const bool branch_taken_0x283d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D54u;
        // 0x283d58: 0x8f91b234  lw          $s1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d54) {
            ctx->pc = 0x283D84u;
            goto label_283d84;
        }
    }
    ctx->pc = 0x283D5Cu;
    // 0x283d5c: 0x8e230388  lw          $v1, 0x388($s1)
    ctx->pc = 0x283d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 904)));
    // 0x283d60: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x283D60u;
    {
        const bool branch_taken_0x283d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x283d60) {
            ctx->pc = 0x283D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283D60u;
            // 0x283d64: 0xc6200098  lwc1        $f0, 0x98($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x283D88u;
            goto label_283d88;
        }
    }
    ctx->pc = 0x283D68u;
    // 0x283d68: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x283d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283d6c: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x283d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x283d70: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x283d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x283d74: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x283d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283d78: 0xe4410034  swc1        $f1, 0x34($v0)
    ctx->pc = 0x283d78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x283d7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x283D7Cu;
    {
        const bool branch_taken_0x283d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D7Cu;
        // 0x283d80: 0xc4600038  lwc1        $f0, 0x38($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d7c) {
            ctx->pc = 0x283D9Cu;
            goto label_283d9c;
        }
    }
    ctx->pc = 0x283D84u;
label_283d84:
    // 0x283d84: 0xc6200098  lwc1        $f0, 0x98($s1)
    ctx->pc = 0x283d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_283d88:
    // 0x283d88: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x283d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x283d8c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x283d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x283d90: 0xc621009c  lwc1        $f1, 0x9C($s1)
    ctx->pc = 0x283d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283d94: 0xe4410034  swc1        $f1, 0x34($v0)
    ctx->pc = 0x283d94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x283d98: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x283d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_283d9c:
    // 0x283d9c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x283d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x283da0: 0x8e220338  lw          $v0, 0x338($s1)
    ctx->pc = 0x283da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_283da4:
    // 0x283da4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x283DA4u;
    {
        const bool branch_taken_0x283da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283da4) {
            ctx->pc = 0x283DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283DA4u;
            // 0x283da8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283DD0u;
            goto label_283dd0;
        }
    }
    ctx->pc = 0x283DACu;
    // 0x283dac: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x283dacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x283db0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x283db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x283db4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x283DB4u;
    {
        const bool branch_taken_0x283db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DB4u;
        // 0x283db8: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283db4) {
            ctx->pc = 0x283DCCu;
            goto label_283dcc;
        }
    }
    ctx->pc = 0x283DBCu;
    // 0x283dbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283DBCu;
    {
        const bool branch_taken_0x283dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DBCu;
        // 0x283dc0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283dbc) {
            ctx->pc = 0x283DD0u;
            goto label_283dd0;
        }
    }
    ctx->pc = 0x283DC4u;
    // 0x283dc4: 0xc09ca34  jal         func_2728D0
    ctx->pc = 0x283DC4u;
    SET_GPR_U32(ctx, 31, 0x283DCCu);
    ctx->pc = 0x283DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283DC4u;
    // 0x283dc8: 0x8e240180  lw          $a0, 0x180($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2728D0u, 0x283DC4u, 0x283DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283DCCu;
label_283dcc:
    // 0x283dcc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x283dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_283dd0:
    // 0x283dd0: 0x2443c4a8  addiu       $v1, $v0, -0x3B58
    ctx->pc = 0x283dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x283dd4: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x283dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x283dd8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x283dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x283ddc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x283DDCu;
    {
        const bool branch_taken_0x283ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DDCu;
        // 0x283de0: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ddc) {
            ctx->pc = 0x283E20u;
            goto label_283e20;
        }
    }
    ctx->pc = 0x283DE4u;
    // 0x283de4: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x283de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x283de8: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x283DE8u;
    {
        const bool branch_taken_0x283de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x283DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DE8u;
        // 0x283dec: 0xdfbf01c0  ld          $ra, 0x1C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283de8) {
            ctx->pc = 0x283E24u;
            goto label_283e24;
        }
    }
    ctx->pc = 0x283DF0u;
    // 0x283df0: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x283df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x283df4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x283DF4u;
    {
        const bool branch_taken_0x283df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DF4u;
        // 0x283df8: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283df4) {
            ctx->pc = 0x283E24u;
            goto label_283e24;
        }
    }
    ctx->pc = 0x283DFCu;
    // 0x283dfc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x283dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x283e00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x283e00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283e04: 0xc4400090  lwc1        $f0, 0x90($v0)
    ctx->pc = 0x283e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283e08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x283e08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283e0c: 0x0  nop
    ctx->pc = 0x283e0cu;
    // NOP
    // 0x283e10: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x283E10u;
    {
        const bool branch_taken_0x283e10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x283E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E10u;
        // 0x283e14: 0xdfbe01b0  ld          $fp, 0x1B0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e10) {
            ctx->pc = 0x283E28u;
            goto label_283e28;
        }
    }
    ctx->pc = 0x283E18u;
    // 0x283e18: 0xc09ca34  jal         func_2728D0
    ctx->pc = 0x283E18u;
    SET_GPR_U32(ctx, 31, 0x283E20u);
    ctx->pc = 0x283E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283E18u;
    // 0x283e1c: 0x8c440180  lw          $a0, 0x180($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2728D0u, 0x283E18u, 0x283E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283E20u;
label_283e20:
    // 0x283e20: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x283e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
label_283e24:
    // 0x283e24: 0xdfbe01b0  ld          $fp, 0x1B0($sp)
    ctx->pc = 0x283e24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_283e28:
    // 0x283e28: 0xdfb701a0  ld          $s7, 0x1A0($sp)
    ctx->pc = 0x283e28u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x283e2c: 0xdfb60190  ld          $s6, 0x190($sp)
    ctx->pc = 0x283e2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x283e30: 0xdfb50180  ld          $s5, 0x180($sp)
    ctx->pc = 0x283e30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x283e34: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x283e34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x283e38: 0xdfb30160  ld          $s3, 0x160($sp)
    ctx->pc = 0x283e38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x283e3c: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x283e3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x283e40: 0xdfb10140  ld          $s1, 0x140($sp)
    ctx->pc = 0x283e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x283e44: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x283e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x283e48: 0xc7bf0228  lwc1        $f31, 0x228($sp)
    ctx->pc = 0x283e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x283e4c: 0xc7be0220  lwc1        $f30, 0x220($sp)
    ctx->pc = 0x283e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x283e50: 0xc7bd0218  lwc1        $f29, 0x218($sp)
    ctx->pc = 0x283e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x283e54: 0xc7bc0210  lwc1        $f28, 0x210($sp)
    ctx->pc = 0x283e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x283e58: 0xc7bb0208  lwc1        $f27, 0x208($sp)
    ctx->pc = 0x283e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x283e5c: 0xc7ba0200  lwc1        $f26, 0x200($sp)
    ctx->pc = 0x283e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x283e60: 0xc7b901f8  lwc1        $f25, 0x1F8($sp)
    ctx->pc = 0x283e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x283e64: 0xc7b801f0  lwc1        $f24, 0x1F0($sp)
    ctx->pc = 0x283e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x283e68: 0xc7b701e8  lwc1        $f23, 0x1E8($sp)
    ctx->pc = 0x283e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x283e6c: 0xc7b601e0  lwc1        $f22, 0x1E0($sp)
    ctx->pc = 0x283e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x283e70: 0xc7b501d8  lwc1        $f21, 0x1D8($sp)
    ctx->pc = 0x283e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x283e74: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x283e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x283e78: 0x3e00008  jr          $ra
    ctx->pc = 0x283E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E78u;
        // 0x283e7c: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283E80u;
}
