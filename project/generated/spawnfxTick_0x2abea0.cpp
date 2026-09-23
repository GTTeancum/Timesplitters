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

// Function: spawnfxTick
// Address: 0x2abea0 - 0x2ac36c
void spawnfxTick_0x2abea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("spawnfxTick_0x2abea0");
#endif

    switch (ctx->pc) {
        case 0x2abea0u: goto label_2abea0;
        case 0x2abea4u: goto label_2abea4;
        case 0x2abea8u: goto label_2abea8;
        case 0x2abeacu: goto label_2abeac;
        case 0x2abeb0u: goto label_2abeb0;
        case 0x2abeb4u: goto label_2abeb4;
        case 0x2abeb8u: goto label_2abeb8;
        case 0x2abebcu: goto label_2abebc;
        case 0x2abec0u: goto label_2abec0;
        case 0x2abec4u: goto label_2abec4;
        case 0x2abec8u: goto label_2abec8;
        case 0x2abeccu: goto label_2abecc;
        case 0x2abed0u: goto label_2abed0;
        case 0x2abed4u: goto label_2abed4;
        case 0x2abed8u: goto label_2abed8;
        case 0x2abedcu: goto label_2abedc;
        case 0x2abee0u: goto label_2abee0;
        case 0x2abee4u: goto label_2abee4;
        case 0x2abee8u: goto label_2abee8;
        case 0x2abeecu: goto label_2abeec;
        case 0x2abef0u: goto label_2abef0;
        case 0x2abef4u: goto label_2abef4;
        case 0x2abef8u: goto label_2abef8;
        case 0x2abefcu: goto label_2abefc;
        case 0x2abf00u: goto label_2abf00;
        case 0x2abf04u: goto label_2abf04;
        case 0x2abf08u: goto label_2abf08;
        case 0x2abf0cu: goto label_2abf0c;
        case 0x2abf10u: goto label_2abf10;
        case 0x2abf14u: goto label_2abf14;
        case 0x2abf18u: goto label_2abf18;
        case 0x2abf1cu: goto label_2abf1c;
        case 0x2abf20u: goto label_2abf20;
        case 0x2abf24u: goto label_2abf24;
        case 0x2abf28u: goto label_2abf28;
        case 0x2abf2cu: goto label_2abf2c;
        case 0x2abf30u: goto label_2abf30;
        case 0x2abf34u: goto label_2abf34;
        case 0x2abf38u: goto label_2abf38;
        case 0x2abf3cu: goto label_2abf3c;
        case 0x2abf40u: goto label_2abf40;
        case 0x2abf44u: goto label_2abf44;
        case 0x2abf48u: goto label_2abf48;
        case 0x2abf4cu: goto label_2abf4c;
        case 0x2abf50u: goto label_2abf50;
        case 0x2abf54u: goto label_2abf54;
        case 0x2abf58u: goto label_2abf58;
        case 0x2abf5cu: goto label_2abf5c;
        case 0x2abf60u: goto label_2abf60;
        case 0x2abf64u: goto label_2abf64;
        case 0x2abf68u: goto label_2abf68;
        case 0x2abf6cu: goto label_2abf6c;
        case 0x2abf70u: goto label_2abf70;
        case 0x2abf74u: goto label_2abf74;
        case 0x2abf78u: goto label_2abf78;
        case 0x2abf7cu: goto label_2abf7c;
        case 0x2abf80u: goto label_2abf80;
        case 0x2abf84u: goto label_2abf84;
        case 0x2abf88u: goto label_2abf88;
        case 0x2abf8cu: goto label_2abf8c;
        case 0x2abf90u: goto label_2abf90;
        case 0x2abf94u: goto label_2abf94;
        case 0x2abf98u: goto label_2abf98;
        case 0x2abf9cu: goto label_2abf9c;
        case 0x2abfa0u: goto label_2abfa0;
        case 0x2abfa4u: goto label_2abfa4;
        case 0x2abfa8u: goto label_2abfa8;
        case 0x2abfacu: goto label_2abfac;
        case 0x2abfb0u: goto label_2abfb0;
        case 0x2abfb4u: goto label_2abfb4;
        case 0x2abfb8u: goto label_2abfb8;
        case 0x2abfbcu: goto label_2abfbc;
        case 0x2abfc0u: goto label_2abfc0;
        case 0x2abfc4u: goto label_2abfc4;
        case 0x2abfc8u: goto label_2abfc8;
        case 0x2abfccu: goto label_2abfcc;
        case 0x2abfd0u: goto label_2abfd0;
        case 0x2abfd4u: goto label_2abfd4;
        case 0x2abfd8u: goto label_2abfd8;
        case 0x2abfdcu: goto label_2abfdc;
        case 0x2abfe0u: goto label_2abfe0;
        case 0x2abfe4u: goto label_2abfe4;
        case 0x2abfe8u: goto label_2abfe8;
        case 0x2abfecu: goto label_2abfec;
        case 0x2abff0u: goto label_2abff0;
        case 0x2abff4u: goto label_2abff4;
        case 0x2abff8u: goto label_2abff8;
        case 0x2abffcu: goto label_2abffc;
        case 0x2ac000u: goto label_2ac000;
        case 0x2ac004u: goto label_2ac004;
        case 0x2ac008u: goto label_2ac008;
        case 0x2ac00cu: goto label_2ac00c;
        case 0x2ac010u: goto label_2ac010;
        case 0x2ac014u: goto label_2ac014;
        case 0x2ac018u: goto label_2ac018;
        case 0x2ac01cu: goto label_2ac01c;
        case 0x2ac020u: goto label_2ac020;
        case 0x2ac024u: goto label_2ac024;
        case 0x2ac028u: goto label_2ac028;
        case 0x2ac02cu: goto label_2ac02c;
        case 0x2ac030u: goto label_2ac030;
        case 0x2ac034u: goto label_2ac034;
        case 0x2ac038u: goto label_2ac038;
        case 0x2ac03cu: goto label_2ac03c;
        case 0x2ac040u: goto label_2ac040;
        case 0x2ac044u: goto label_2ac044;
        case 0x2ac048u: goto label_2ac048;
        case 0x2ac04cu: goto label_2ac04c;
        case 0x2ac050u: goto label_2ac050;
        case 0x2ac054u: goto label_2ac054;
        case 0x2ac058u: goto label_2ac058;
        case 0x2ac05cu: goto label_2ac05c;
        case 0x2ac060u: goto label_2ac060;
        case 0x2ac064u: goto label_2ac064;
        case 0x2ac068u: goto label_2ac068;
        case 0x2ac06cu: goto label_2ac06c;
        case 0x2ac070u: goto label_2ac070;
        case 0x2ac074u: goto label_2ac074;
        case 0x2ac078u: goto label_2ac078;
        case 0x2ac07cu: goto label_2ac07c;
        case 0x2ac080u: goto label_2ac080;
        case 0x2ac084u: goto label_2ac084;
        case 0x2ac088u: goto label_2ac088;
        case 0x2ac08cu: goto label_2ac08c;
        case 0x2ac090u: goto label_2ac090;
        case 0x2ac094u: goto label_2ac094;
        case 0x2ac098u: goto label_2ac098;
        case 0x2ac09cu: goto label_2ac09c;
        case 0x2ac0a0u: goto label_2ac0a0;
        case 0x2ac0a4u: goto label_2ac0a4;
        case 0x2ac0a8u: goto label_2ac0a8;
        case 0x2ac0acu: goto label_2ac0ac;
        case 0x2ac0b0u: goto label_2ac0b0;
        case 0x2ac0b4u: goto label_2ac0b4;
        case 0x2ac0b8u: goto label_2ac0b8;
        case 0x2ac0bcu: goto label_2ac0bc;
        case 0x2ac0c0u: goto label_2ac0c0;
        case 0x2ac0c4u: goto label_2ac0c4;
        case 0x2ac0c8u: goto label_2ac0c8;
        case 0x2ac0ccu: goto label_2ac0cc;
        case 0x2ac0d0u: goto label_2ac0d0;
        case 0x2ac0d4u: goto label_2ac0d4;
        case 0x2ac0d8u: goto label_2ac0d8;
        case 0x2ac0dcu: goto label_2ac0dc;
        case 0x2ac0e0u: goto label_2ac0e0;
        case 0x2ac0e4u: goto label_2ac0e4;
        case 0x2ac0e8u: goto label_2ac0e8;
        case 0x2ac0ecu: goto label_2ac0ec;
        case 0x2ac0f0u: goto label_2ac0f0;
        case 0x2ac0f4u: goto label_2ac0f4;
        case 0x2ac0f8u: goto label_2ac0f8;
        case 0x2ac0fcu: goto label_2ac0fc;
        case 0x2ac100u: goto label_2ac100;
        case 0x2ac104u: goto label_2ac104;
        case 0x2ac108u: goto label_2ac108;
        case 0x2ac10cu: goto label_2ac10c;
        case 0x2ac110u: goto label_2ac110;
        case 0x2ac114u: goto label_2ac114;
        case 0x2ac118u: goto label_2ac118;
        case 0x2ac11cu: goto label_2ac11c;
        case 0x2ac120u: goto label_2ac120;
        case 0x2ac124u: goto label_2ac124;
        case 0x2ac128u: goto label_2ac128;
        case 0x2ac12cu: goto label_2ac12c;
        case 0x2ac130u: goto label_2ac130;
        case 0x2ac134u: goto label_2ac134;
        case 0x2ac138u: goto label_2ac138;
        case 0x2ac13cu: goto label_2ac13c;
        case 0x2ac140u: goto label_2ac140;
        case 0x2ac144u: goto label_2ac144;
        case 0x2ac148u: goto label_2ac148;
        case 0x2ac14cu: goto label_2ac14c;
        case 0x2ac150u: goto label_2ac150;
        case 0x2ac154u: goto label_2ac154;
        case 0x2ac158u: goto label_2ac158;
        case 0x2ac15cu: goto label_2ac15c;
        case 0x2ac160u: goto label_2ac160;
        case 0x2ac164u: goto label_2ac164;
        case 0x2ac168u: goto label_2ac168;
        case 0x2ac16cu: goto label_2ac16c;
        case 0x2ac170u: goto label_2ac170;
        case 0x2ac174u: goto label_2ac174;
        case 0x2ac178u: goto label_2ac178;
        case 0x2ac17cu: goto label_2ac17c;
        case 0x2ac180u: goto label_2ac180;
        case 0x2ac184u: goto label_2ac184;
        case 0x2ac188u: goto label_2ac188;
        case 0x2ac18cu: goto label_2ac18c;
        case 0x2ac190u: goto label_2ac190;
        case 0x2ac194u: goto label_2ac194;
        case 0x2ac198u: goto label_2ac198;
        case 0x2ac19cu: goto label_2ac19c;
        case 0x2ac1a0u: goto label_2ac1a0;
        case 0x2ac1a4u: goto label_2ac1a4;
        case 0x2ac1a8u: goto label_2ac1a8;
        case 0x2ac1acu: goto label_2ac1ac;
        case 0x2ac1b0u: goto label_2ac1b0;
        case 0x2ac1b4u: goto label_2ac1b4;
        case 0x2ac1b8u: goto label_2ac1b8;
        case 0x2ac1bcu: goto label_2ac1bc;
        case 0x2ac1c0u: goto label_2ac1c0;
        case 0x2ac1c4u: goto label_2ac1c4;
        case 0x2ac1c8u: goto label_2ac1c8;
        case 0x2ac1ccu: goto label_2ac1cc;
        case 0x2ac1d0u: goto label_2ac1d0;
        case 0x2ac1d4u: goto label_2ac1d4;
        case 0x2ac1d8u: goto label_2ac1d8;
        case 0x2ac1dcu: goto label_2ac1dc;
        case 0x2ac1e0u: goto label_2ac1e0;
        case 0x2ac1e4u: goto label_2ac1e4;
        case 0x2ac1e8u: goto label_2ac1e8;
        case 0x2ac1ecu: goto label_2ac1ec;
        case 0x2ac1f0u: goto label_2ac1f0;
        case 0x2ac1f4u: goto label_2ac1f4;
        case 0x2ac1f8u: goto label_2ac1f8;
        case 0x2ac1fcu: goto label_2ac1fc;
        case 0x2ac200u: goto label_2ac200;
        case 0x2ac204u: goto label_2ac204;
        case 0x2ac208u: goto label_2ac208;
        case 0x2ac20cu: goto label_2ac20c;
        case 0x2ac210u: goto label_2ac210;
        case 0x2ac214u: goto label_2ac214;
        case 0x2ac218u: goto label_2ac218;
        case 0x2ac21cu: goto label_2ac21c;
        case 0x2ac220u: goto label_2ac220;
        case 0x2ac224u: goto label_2ac224;
        case 0x2ac228u: goto label_2ac228;
        case 0x2ac22cu: goto label_2ac22c;
        case 0x2ac230u: goto label_2ac230;
        case 0x2ac234u: goto label_2ac234;
        case 0x2ac238u: goto label_2ac238;
        case 0x2ac23cu: goto label_2ac23c;
        case 0x2ac240u: goto label_2ac240;
        case 0x2ac244u: goto label_2ac244;
        case 0x2ac248u: goto label_2ac248;
        case 0x2ac24cu: goto label_2ac24c;
        case 0x2ac250u: goto label_2ac250;
        case 0x2ac254u: goto label_2ac254;
        case 0x2ac258u: goto label_2ac258;
        case 0x2ac25cu: goto label_2ac25c;
        case 0x2ac260u: goto label_2ac260;
        case 0x2ac264u: goto label_2ac264;
        case 0x2ac268u: goto label_2ac268;
        case 0x2ac26cu: goto label_2ac26c;
        case 0x2ac270u: goto label_2ac270;
        case 0x2ac274u: goto label_2ac274;
        case 0x2ac278u: goto label_2ac278;
        case 0x2ac27cu: goto label_2ac27c;
        case 0x2ac280u: goto label_2ac280;
        case 0x2ac284u: goto label_2ac284;
        case 0x2ac288u: goto label_2ac288;
        case 0x2ac28cu: goto label_2ac28c;
        case 0x2ac290u: goto label_2ac290;
        case 0x2ac294u: goto label_2ac294;
        case 0x2ac298u: goto label_2ac298;
        case 0x2ac29cu: goto label_2ac29c;
        case 0x2ac2a0u: goto label_2ac2a0;
        case 0x2ac2a4u: goto label_2ac2a4;
        case 0x2ac2a8u: goto label_2ac2a8;
        case 0x2ac2acu: goto label_2ac2ac;
        case 0x2ac2b0u: goto label_2ac2b0;
        case 0x2ac2b4u: goto label_2ac2b4;
        case 0x2ac2b8u: goto label_2ac2b8;
        case 0x2ac2bcu: goto label_2ac2bc;
        case 0x2ac2c0u: goto label_2ac2c0;
        case 0x2ac2c4u: goto label_2ac2c4;
        case 0x2ac2c8u: goto label_2ac2c8;
        case 0x2ac2ccu: goto label_2ac2cc;
        case 0x2ac2d0u: goto label_2ac2d0;
        case 0x2ac2d4u: goto label_2ac2d4;
        case 0x2ac2d8u: goto label_2ac2d8;
        case 0x2ac2dcu: goto label_2ac2dc;
        case 0x2ac2e0u: goto label_2ac2e0;
        case 0x2ac2e4u: goto label_2ac2e4;
        case 0x2ac2e8u: goto label_2ac2e8;
        case 0x2ac2ecu: goto label_2ac2ec;
        case 0x2ac2f0u: goto label_2ac2f0;
        case 0x2ac2f4u: goto label_2ac2f4;
        case 0x2ac2f8u: goto label_2ac2f8;
        case 0x2ac2fcu: goto label_2ac2fc;
        case 0x2ac300u: goto label_2ac300;
        case 0x2ac304u: goto label_2ac304;
        case 0x2ac308u: goto label_2ac308;
        case 0x2ac30cu: goto label_2ac30c;
        case 0x2ac310u: goto label_2ac310;
        case 0x2ac314u: goto label_2ac314;
        case 0x2ac318u: goto label_2ac318;
        case 0x2ac31cu: goto label_2ac31c;
        case 0x2ac320u: goto label_2ac320;
        case 0x2ac324u: goto label_2ac324;
        case 0x2ac328u: goto label_2ac328;
        case 0x2ac32cu: goto label_2ac32c;
        case 0x2ac330u: goto label_2ac330;
        case 0x2ac334u: goto label_2ac334;
        case 0x2ac338u: goto label_2ac338;
        case 0x2ac33cu: goto label_2ac33c;
        case 0x2ac340u: goto label_2ac340;
        case 0x2ac344u: goto label_2ac344;
        case 0x2ac348u: goto label_2ac348;
        case 0x2ac34cu: goto label_2ac34c;
        case 0x2ac350u: goto label_2ac350;
        case 0x2ac354u: goto label_2ac354;
        case 0x2ac358u: goto label_2ac358;
        case 0x2ac35cu: goto label_2ac35c;
        case 0x2ac360u: goto label_2ac360;
        case 0x2ac364u: goto label_2ac364;
        case 0x2ac368u: goto label_2ac368;
        default: break;
    }

    ctx->pc = 0x2abea0u;

label_2abea0:
    // 0x2abea0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2abea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2abea4:
    // 0x2abea4: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x2abea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2abea8:
    // 0x2abea8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2abea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_2abeac:
    // 0x2abeac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2abeacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2abeb0:
    // 0x2abeb0: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2abeb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2abeb4:
    // 0x2abeb4: 0x0  nop
    ctx->pc = 0x2abeb4u;
    // NOP
label_2abeb8:
    // 0x2abeb8: 0x0  nop
    ctx->pc = 0x2abeb8u;
    // NOP
label_2abebc:
    // 0x2abebc: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2abebcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_2abec0:
    // 0x2abec0: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2abec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_2abec4:
    // 0x2abec4: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2abec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_2abec8:
    // 0x2abec8: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x2abec8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
label_2abecc:
    // 0x2abecc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2abeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2abed0:
    // 0x2abed0: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x2abed0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
label_2abed4:
    // 0x2abed4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2abed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2abed8:
    // 0x2abed8: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x2abed8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_2abedc:
    // 0x2abedc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2abedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2abee0:
    // 0x2abee0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2abee0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2abee4:
    // 0x2abee4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2abee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2abee8:
    // 0x2abee8: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x2abee8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_2abeec:
    // 0x2abeec: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2abeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2abef0:
    // 0x2abef0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2abef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2abef4:
    // 0x2abef4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2abef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2abef8:
    // 0x2abef8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2abef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2abefc:
    // 0x2abefc: 0x158140  sll         $s0, $s5, 5
    ctx->pc = 0x2abefcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
label_2abf00:
    // 0x2abf00: 0x2684d688  addiu       $a0, $s4, -0x2978
    ctx->pc = 0x2abf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956680));
label_2abf04:
    // 0x2abf04: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x2abf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_2abf08:
    // 0x2abf08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2abf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2abf0c:
    // 0x2abf0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2abf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2abf10:
    // 0x2abf10: 0x10430105  beq         $v0, $v1, . + 4 + (0x105 << 2)
label_2abf14:
    if (ctx->pc == 0x2ABF14u) {
        ctx->pc = 0x2ABF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF10u;
        // 0x2abf14: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABF18u;
        goto label_2abf18;
    }
    ctx->pc = 0x2ABF10u;
    {
        const bool branch_taken_0x2abf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2ABF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF10u;
        // 0x2abf14: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf10) {
            ctx->pc = 0x2AC328u;
            goto label_2ac328;
        }
    }
    ctx->pc = 0x2ABF18u;
label_2abf18:
    // 0x2abf18: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x2abf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2abf1c:
    // 0x2abf1c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2abf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2abf20:
    // 0x2abf20: 0x24a4c208  addiu       $a0, $a1, -0x3DF8
    ctx->pc = 0x2abf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951432));
label_2abf24:
    // 0x2abf24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2abf24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2abf28:
    // 0x2abf28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2abf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2abf2c:
    // 0x2abf2c: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x2abf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2abf30:
    // 0x2abf30: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_2abf34:
    if (ctx->pc == 0x2ABF34u) {
        ctx->pc = 0x2ABF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF30u;
        // 0x2abf34: 0xc4440000  lwc1        $f4, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABF38u;
        goto label_2abf38;
    }
    ctx->pc = 0x2ABF30u;
    {
        const bool branch_taken_0x2abf30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF30u;
        // 0x2abf34: 0xc4440000  lwc1        $f4, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf30) {
            ctx->pc = 0x2ABF48u;
            goto label_2abf48;
        }
    }
    ctx->pc = 0x2ABF38u;
label_2abf38:
    // 0x2abf38: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2abf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_2abf3c:
    // 0x2abf3c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2abf3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_2abf40:
    // 0x2abf40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2abf44:
    if (ctx->pc == 0x2ABF44u) {
        ctx->pc = 0x2ABF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF40u;
        // 0x2abf44: 0x2684d688  addiu       $a0, $s4, -0x2978 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABF48u;
        goto label_2abf48;
    }
    ctx->pc = 0x2ABF40u;
    {
        const bool branch_taken_0x2abf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF40u;
        // 0x2abf44: 0x2684d688  addiu       $a0, $s4, -0x2978 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf40) {
            ctx->pc = 0x2ABF54u;
            goto label_2abf54;
        }
    }
    ctx->pc = 0x2ABF48u;
label_2abf48:
    // 0x2abf48: 0xc7808ee0  lwc1        $f0, -0x7120($gp)
    ctx->pc = 0x2abf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2abf4c:
    // 0x2abf4c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2abf4cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2abf50:
    // 0x2abf50: 0x2684d688  addiu       $a0, $s4, -0x2978
    ctx->pc = 0x2abf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956680));
label_2abf54:
    // 0x2abf54: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x2abf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_2abf58:
    // 0x2abf58: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2abf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2abf5c:
    // 0x2abf5c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2abf60:
    if (ctx->pc == 0x2ABF60u) {
        ctx->pc = 0x2ABF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF5Cu;
        // 0x2abf60: 0x2041021  addu        $v0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABF64u;
        goto label_2abf64;
    }
    ctx->pc = 0x2ABF5Cu;
    {
        const bool branch_taken_0x2abf5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF5Cu;
        // 0x2abf60: 0x2041021  addu        $v0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf5c) {
            ctx->pc = 0x2ABF78u;
            goto label_2abf78;
        }
    }
    ctx->pc = 0x2ABF64u;
label_2abf64:
    // 0x2abf64: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2abf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_2abf68:
    // 0x2abf68: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2abf68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_2abf6c:
    // 0x2abf6c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2abf70:
    if (ctx->pc == 0x2ABF70u) {
        ctx->pc = 0x2ABF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF6Cu;
        // 0x2abf70: 0x2682d688  addiu       $v0, $s4, -0x2978 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABF74u;
        goto label_2abf74;
    }
    ctx->pc = 0x2ABF6Cu;
    {
        const bool branch_taken_0x2abf6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF6Cu;
        // 0x2abf70: 0x2682d688  addiu       $v0, $s4, -0x2978 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf6c) {
            ctx->pc = 0x2ABF9Cu;
            goto label_2abf9c;
        }
    }
    ctx->pc = 0x2ABF74u;
label_2abf74:
    // 0x2abf74: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x2abf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_2abf78:
    // 0x2abf78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2abf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2abf7c:
    // 0x2abf7c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2abf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2abf80:
    // 0x2abf80: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
label_2abf84:
    if (ctx->pc == 0x2ABF84u) {
        ctx->pc = 0x2ABF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF80u;
        // 0x2abf84: 0x2682d688  addiu       $v0, $s4, -0x2978 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABF88u;
        goto label_2abf88;
    }
    ctx->pc = 0x2ABF80u;
    {
        const bool branch_taken_0x2abf80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2ABF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF80u;
        // 0x2abf84: 0x2682d688  addiu       $v0, $s4, -0x2978 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf80) {
            ctx->pc = 0x2ABF9Cu;
            goto label_2abf9c;
        }
    }
    ctx->pc = 0x2ABF88u;
label_2abf88:
    // 0x2abf88: 0x26c2c228  addiu       $v0, $s6, -0x3DD8
    ctx->pc = 0x2abf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951464));
label_2abf8c:
    // 0x2abf8c: 0xc7818ee4  lwc1        $f1, -0x711C($gp)
    ctx->pc = 0x2abf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2abf90:
    // 0x2abf90: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2abf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2abf94:
    // 0x2abf94: 0x10000007  b           . + 4 + (0x7 << 2)
label_2abf98:
    if (ctx->pc == 0x2ABF98u) {
        ctx->pc = 0x2ABF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF94u;
        // 0x2abf98: 0x460100c2  mul.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABF9Cu;
        goto label_2abf9c;
    }
    ctx->pc = 0x2ABF94u;
    {
        const bool branch_taken_0x2abf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF94u;
        // 0x2abf98: 0x460100c2  mul.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf94) {
            ctx->pc = 0x2ABFB4u;
            goto label_2abfb4;
        }
    }
    ctx->pc = 0x2ABF9Cu;
label_2abf9c:
    // 0x2abf9c: 0x26c4c228  addiu       $a0, $s6, -0x3DD8
    ctx->pc = 0x2abf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951464));
label_2abfa0:
    // 0x2abfa0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2abfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2abfa4:
    // 0x2abfa4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2abfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2abfa8:
    // 0x2abfa8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2abfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2abfac:
    // 0x2abfac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2abfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2abfb0:
    // 0x2abfb0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2abfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2abfb4:
    // 0x2abfb4: 0x2685d688  addiu       $a1, $s4, -0x2978
    ctx->pc = 0x2abfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956680));
label_2abfb8:
    // 0x2abfb8: 0x27c4c4a8  addiu       $a0, $fp, -0x3B58
    ctx->pc = 0x2abfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
label_2abfbc:
    // 0x2abfbc: 0x2653021  addu        $a2, $s3, $a1
    ctx->pc = 0x2abfbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_2abfc0:
    // 0x2abfc0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2abfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2abfc4:
    // 0x2abfc4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2abfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2abfc8:
    // 0x2abfc8: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2abfc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2abfcc:
    // 0x2abfcc: 0x24e4c248  addiu       $a0, $a3, -0x3DB8
    ctx->pc = 0x2abfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951496));
label_2abfd0:
    // 0x2abfd0: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x2abfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_2abfd4:
    // 0x2abfd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2abfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2abfd8:
    // 0x2abfd8: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x2abfd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2abfdc:
    // 0x2abfdc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2abfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2abfe0:
    // 0x2abfe0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2abfe4:
    if (ctx->pc == 0x2ABFE4u) {
        ctx->pc = 0x2ABFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFE0u;
        // 0x2abfe4: 0xc4420000  lwc1        $f2, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABFE8u;
        goto label_2abfe8;
    }
    ctx->pc = 0x2ABFE0u;
    {
        const bool branch_taken_0x2abfe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFE0u;
        // 0x2abfe4: 0xc4420000  lwc1        $f2, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abfe0) {
            ctx->pc = 0x2ABFF4u;
            goto label_2abff4;
        }
    }
    ctx->pc = 0x2ABFE8u;
label_2abfe8:
    // 0x2abfe8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2abfe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2abfec:
    // 0x2abfec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2abfecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2abff0:
    // 0x2abff0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2abff0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2abff4:
    // 0x2abff4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x2abff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_2abff8:
    // 0x2abff8: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x2abff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_2abffc:
    // 0x2abffc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2abffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ac000:
    // 0x2ac000: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2ac000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2ac004:
    // 0x2ac004: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ac004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ac008:
    // 0x2ac008: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2ac008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ac00c:
    // 0x2ac00c: 0x0  nop
    ctx->pc = 0x2ac00cu;
    // NOP
label_2ac010:
    // 0x2ac010: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2ac014:
    if (ctx->pc == 0x2AC014u) {
        ctx->pc = 0x2AC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC010u;
        // 0x2ac014: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC018u;
        goto label_2ac018;
    }
    ctx->pc = 0x2AC010u;
    {
        const bool branch_taken_0x2ac010 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC010u;
        // 0x2ac014: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac010) {
            ctx->pc = 0x2AC01Cu;
            goto label_2ac01c;
        }
    }
    ctx->pc = 0x2AC018u;
label_2ac018:
    // 0x2ac018: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ac018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ac01c:
    // 0x2ac01c: 0x46140040  add.s       $f1, $f0, $f20
    ctx->pc = 0x2ac01cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2ac020:
    // 0x2ac020: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2ac020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2ac024:
    // 0x2ac024: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x2ac024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ac028:
    // 0x2ac028: 0x0  nop
    ctx->pc = 0x2ac028u;
    // NOP
label_2ac02c:
    // 0x2ac02c: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_2ac030:
    if (ctx->pc == 0x2AC030u) {
        ctx->pc = 0x2AC030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC02Cu;
        // 0x2ac030: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC034u;
        goto label_2ac034;
    }
    ctx->pc = 0x2AC02Cu;
    {
        const bool branch_taken_0x2ac02c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AC030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC02Cu;
        // 0x2ac030: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac02c) {
            ctx->pc = 0x2AC0C4u;
            goto label_2ac0c4;
        }
    }
    ctx->pc = 0x2AC034u;
label_2ac034:
    // 0x2ac034: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x2ac034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2ac038:
    // 0x2ac038: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ac038u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ac03c:
    // 0x2ac03c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2ac03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2ac040:
    // 0x2ac040: 0x108000b9  beqz        $a0, . + 4 + (0xB9 << 2)
label_2ac044:
    if (ctx->pc == 0x2AC044u) {
        ctx->pc = 0x2AC044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC040u;
        // 0x2ac044: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC048u;
        goto label_2ac048;
    }
    ctx->pc = 0x2AC040u;
    {
        const bool branch_taken_0x2ac040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC040u;
        // 0x2ac044: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac040) {
            ctx->pc = 0x2AC328u;
            goto label_2ac328;
        }
    }
    ctx->pc = 0x2AC048u;
label_2ac048:
    // 0x2ac048: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x2ac048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_2ac04c:
    // 0x2ac04c: 0x50c000b7  beql        $a2, $zero, . + 4 + (0xB7 << 2)
label_2ac050:
    if (ctx->pc == 0x2AC050u) {
        ctx->pc = 0x2AC050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC04Cu;
        // 0x2ac050: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC054u;
        goto label_2ac054;
    }
    ctx->pc = 0x2AC04Cu;
    {
        const bool branch_taken_0x2ac04c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac04c) {
            ctx->pc = 0x2AC050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC04Cu;
            // 0x2ac050: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC32Cu;
            goto label_2ac32c;
        }
    }
    ctx->pc = 0x2AC054u;
label_2ac054:
    // 0x2ac054: 0x0  nop
    ctx->pc = 0x2ac054u;
    // NOP
label_2ac058:
    // 0x2ac058: 0x0  nop
    ctx->pc = 0x2ac058u;
    // NOP
label_2ac05c:
    // 0x2ac05c: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x2ac05cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
label_2ac060:
    // 0x2ac060: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ac060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ac064:
    // 0x2ac064: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ac064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ac068:
    // 0x2ac068: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ac068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ac06c:
    // 0x2ac06c: 0x0  nop
    ctx->pc = 0x2ac06cu;
    // NOP
label_2ac070:
    // 0x2ac070: 0x450000ad  bc1f        . + 4 + (0xAD << 2)
label_2ac074:
    if (ctx->pc == 0x2AC074u) {
        ctx->pc = 0x2AC074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC070u;
        // 0x2ac074: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC078u;
        goto label_2ac078;
    }
    ctx->pc = 0x2AC070u;
    {
        const bool branch_taken_0x2ac070 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AC074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC070u;
        // 0x2ac074: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac070) {
            ctx->pc = 0x2AC328u;
            goto label_2ac328;
        }
    }
    ctx->pc = 0x2AC078u;
label_2ac078:
    // 0x2ac078: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2ac078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
label_2ac07c:
    // 0x2ac07c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ac07cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ac080:
    // 0x2ac080: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ac080u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2ac084:
    // 0x2ac084: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ac084u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2ac088:
    // 0x2ac088: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac088u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2ac08c:
    // 0x2ac08c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ac08cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2ac090:
    // 0x2ac090: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x2ac090u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ac094:
    // 0x2ac094: 0x2d03002c  sltiu       $v1, $t0, 0x2C
    ctx->pc = 0x2ac094u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)44) ? 1 : 0);
label_2ac098:
    // 0x2ac098: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2ac09c:
    if (ctx->pc == 0x2AC09Cu) {
        ctx->pc = 0x2AC09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC098u;
        // 0x2ac09c: 0xb01021  addu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC0A0u;
        goto label_2ac0a0;
    }
    ctx->pc = 0x2AC098u;
    {
        const bool branch_taken_0x2ac098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC098u;
        // 0x2ac09c: 0xb01021  addu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac098) {
            ctx->pc = 0x2AC0ACu;
            goto label_2ac0ac;
        }
    }
    ctx->pc = 0x2AC0A0u;
label_2ac0a0:
    // 0x2ac0a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ac0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ac0a4:
    // 0x2ac0a4: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2ac0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2ac0a8:
    // 0x2ac0a8: 0x83380b  movn        $a3, $a0, $v1
    ctx->pc = 0x2ac0a8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
label_2ac0ac:
    // 0x2ac0ac: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2ac0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ac0b0:
    // 0x2ac0b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ac0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ac0b4:
    // 0x2ac0b4: 0xc098ffc  jal         func_263FF0
label_2ac0b8:
    if (ctx->pc == 0x2AC0B8u) {
        ctx->pc = 0x2AC0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC0B4u;
        // 0x2ac0b8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC0BCu;
        goto label_2ac0bc;
    }
    ctx->pc = 0x2AC0B4u;
    SET_GPR_U32(ctx, 31, 0x2AC0BCu);
    ctx->pc = 0x2AC0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC0B4u;
    // 0x2ac0b8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263FF0u, 0x2AC0B4u, 0x2AC0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC0BCu;
label_2ac0bc:
    // 0x2ac0bc: 0x1000009b  b           . + 4 + (0x9B << 2)
label_2ac0c0:
    if (ctx->pc == 0x2AC0C0u) {
        ctx->pc = 0x2AC0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC0BCu;
        // 0x2ac0c0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC0C4u;
        goto label_2ac0c4;
    }
    ctx->pc = 0x2AC0BCu;
    {
        const bool branch_taken_0x2ac0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC0BCu;
        // 0x2ac0c0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac0bc) {
            ctx->pc = 0x2AC32Cu;
            goto label_2ac32c;
        }
    }
    ctx->pc = 0x2AC0C4u;
label_2ac0c4:
    // 0x2ac0c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ac0c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ac0c8:
    // 0x2ac0c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ac0c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ac0cc:
    // 0x2ac0cc: 0x0  nop
    ctx->pc = 0x2ac0ccu;
    // NOP
label_2ac0d0:
    // 0x2ac0d0: 0x45000048  bc1f        . + 4 + (0x48 << 2)
label_2ac0d4:
    if (ctx->pc == 0x2AC0D4u) {
        ctx->pc = 0x2AC0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC0D0u;
        // 0x2ac0d4: 0x2684d688  addiu       $a0, $s4, -0x2978 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC0D8u;
        goto label_2ac0d8;
    }
    ctx->pc = 0x2AC0D0u;
    {
        const bool branch_taken_0x2ac0d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AC0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC0D0u;
        // 0x2ac0d4: 0x2684d688  addiu       $a0, $s4, -0x2978 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac0d0) {
            ctx->pc = 0x2AC1F4u;
            goto label_2ac1f4;
        }
    }
    ctx->pc = 0x2AC0D8u;
label_2ac0d8:
    // 0x2ac0d8: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2ac0d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ac0dc:
    // 0x2ac0dc: 0x0  nop
    ctx->pc = 0x2ac0dcu;
    // NOP
label_2ac0e0:
    // 0x2ac0e0: 0x45000044  bc1f        . + 4 + (0x44 << 2)
label_2ac0e4:
    if (ctx->pc == 0x2AC0E4u) {
        ctx->pc = 0x2AC0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC0E0u;
        // 0x2ac0e4: 0xb01021  addu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC0E8u;
        goto label_2ac0e8;
    }
    ctx->pc = 0x2AC0E0u;
    {
        const bool branch_taken_0x2ac0e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AC0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC0E0u;
        // 0x2ac0e4: 0xb01021  addu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac0e0) {
            ctx->pc = 0x2AC1F4u;
            goto label_2ac1f4;
        }
    }
    ctx->pc = 0x2AC0E8u;
label_2ac0e8:
    // 0x2ac0e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ac0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ac0ec:
    // 0x2ac0ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ac0f0:
    // 0x2ac0f0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2ac0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2ac0f4:
    // 0x2ac0f4: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
label_2ac0f8:
    if (ctx->pc == 0x2AC0F8u) {
        ctx->pc = 0x2AC0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC0F4u;
        // 0x2ac0f8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC0FCu;
        goto label_2ac0fc;
    }
    ctx->pc = 0x2AC0F4u;
    {
        const bool branch_taken_0x2ac0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC0F4u;
        // 0x2ac0f8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac0f4) {
            ctx->pc = 0x2AC328u;
            goto label_2ac328;
        }
    }
    ctx->pc = 0x2AC0FCu;
label_2ac0fc:
    // 0x2ac0fc: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x2ac0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_2ac100:
    // 0x2ac100: 0x5040008a  beql        $v0, $zero, . + 4 + (0x8A << 2)
label_2ac104:
    if (ctx->pc == 0x2AC104u) {
        ctx->pc = 0x2AC104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC100u;
        // 0x2ac104: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC108u;
        goto label_2ac108;
    }
    ctx->pc = 0x2AC100u;
    {
        const bool branch_taken_0x2ac100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac100) {
            ctx->pc = 0x2AC104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC100u;
            // 0x2ac104: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC32Cu;
            goto label_2ac32c;
        }
    }
    ctx->pc = 0x2AC108u;
label_2ac108:
    // 0x2ac108: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2ac108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2ac10c:
    // 0x2ac10c: 0x0  nop
    ctx->pc = 0x2ac10cu;
    // NOP
label_2ac110:
    // 0x2ac110: 0x0  nop
    ctx->pc = 0x2ac110u;
    // NOP
label_2ac114:
    // 0x2ac114: 0x46030883  div.s       $f2, $f1, $f3
    ctx->pc = 0x2ac114u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[3];
label_2ac118:
    // 0x2ac118: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2ac118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2ac11c:
    // 0x2ac11c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2ac120:
    if (ctx->pc == 0x2AC120u) {
        ctx->pc = 0x2AC120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC11Cu;
        // 0x2ac120: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC124u;
        goto label_2ac124;
    }
    ctx->pc = 0x2AC11Cu;
    {
        const bool branch_taken_0x2ac11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC11Cu;
        // 0x2ac120: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac11c) {
            ctx->pc = 0x2AC168u;
            goto label_2ac168;
        }
    }
    ctx->pc = 0x2AC124u;
label_2ac124:
    // 0x2ac124: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ac124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ac128:
    // 0x2ac128: 0x26e39710  addiu       $v1, $s7, -0x68F0
    ctx->pc = 0x2ac128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294940432));
label_2ac12c:
    // 0x2ac12c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ac12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ac130:
    // 0x2ac130: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ac130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ac134:
    // 0x2ac134: 0x800008  jr          $a0
label_2ac138:
    if (ctx->pc == 0x2AC138u) {
        ctx->pc = 0x2AC13Cu;
        goto label_2ac13c;
    }
    ctx->pc = 0x2AC134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC134u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2AC13Cu;
label_2ac13c:
    // 0x2ac13c: 0x3c0142c2  lui         $at, 0x42C2
    ctx->pc = 0x2ac13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17090 << 16));
label_2ac140:
    // 0x2ac140: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ac140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ac144:
    // 0x2ac144: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2ac144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_2ac148:
    // 0x2ac148: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ac14c:
    // 0x2ac14c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2ac14cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2ac150:
    // 0x2ac150: 0x1000000a  b           . + 4 + (0xA << 2)
label_2ac154:
    if (ctx->pc == 0x2AC154u) {
        ctx->pc = 0x2AC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC150u;
        // 0x2ac154: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC158u;
        goto label_2ac158;
    }
    ctx->pc = 0x2AC150u;
    {
        const bool branch_taken_0x2ac150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC150u;
        // 0x2ac154: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac150) {
            ctx->pc = 0x2AC17Cu;
            goto label_2ac17c;
        }
    }
    ctx->pc = 0x2AC158u;
label_2ac158:
    // 0x2ac158: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2ac158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
label_2ac15c:
    // 0x2ac15c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac15cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ac160:
    // 0x2ac160: 0x10000005  b           . + 4 + (0x5 << 2)
label_2ac164:
    if (ctx->pc == 0x2AC164u) {
        ctx->pc = 0x2AC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC160u;
        // 0x2ac164: 0x46021002  mul.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC168u;
        goto label_2ac168;
    }
    ctx->pc = 0x2AC160u;
    {
        const bool branch_taken_0x2ac160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC160u;
        // 0x2ac164: 0x46021002  mul.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac160) {
            ctx->pc = 0x2AC178u;
            goto label_2ac178;
        }
    }
    ctx->pc = 0x2AC168u;
label_2ac168:
    // 0x2ac168: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x2ac168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_2ac16c:
    // 0x2ac16c: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2ac16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
label_2ac170:
    // 0x2ac170: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ac174:
    // 0x2ac174: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ac174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2ac178:
    // 0x2ac178: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ac178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2ac17c:
    // 0x2ac17c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac17cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2ac180:
    // 0x2ac180: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ac180u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2ac184:
    // 0x2ac184: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2ac184u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ac188:
    // 0x2ac188: 0x2e22002c  sltiu       $v0, $s1, 0x2C
    ctx->pc = 0x2ac188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)44) ? 1 : 0);
label_2ac18c:
    // 0x2ac18c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ac190:
    if (ctx->pc == 0x2AC190u) {
        ctx->pc = 0x2AC190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC18Cu;
        // 0x2ac190: 0x2682d688  addiu       $v0, $s4, -0x2978 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC194u;
        goto label_2ac194;
    }
    ctx->pc = 0x2AC18Cu;
    {
        const bool branch_taken_0x2ac18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC18Cu;
        // 0x2ac190: 0x2682d688  addiu       $v0, $s4, -0x2978 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac18c) {
            ctx->pc = 0x2AC1A4u;
            goto label_2ac1a4;
        }
    }
    ctx->pc = 0x2AC194u;
label_2ac194:
    // 0x2ac194: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ac194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ac198:
    // 0x2ac198: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2ac198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2ac19c:
    // 0x2ac19c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2ac19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2ac1a0:
    // 0x2ac1a0: 0x83380b  movn        $a3, $a0, $v1
    ctx->pc = 0x2ac1a0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
label_2ac1a4:
    // 0x2ac1a4: 0x2690d688  addiu       $s0, $s4, -0x2978
    ctx->pc = 0x2ac1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956680));
label_2ac1a8:
    // 0x2ac1a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ac1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ac1ac:
    // 0x2ac1ac: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x2ac1acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_2ac1b0:
    // 0x2ac1b0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ac1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ac1b4:
    // 0x2ac1b4: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x2ac1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2ac1b8:
    // 0x2ac1b8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2ac1b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ac1bc:
    // 0x2ac1bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ac1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ac1c0:
    // 0x2ac1c0: 0xc098ffc  jal         func_263FF0
label_2ac1c4:
    if (ctx->pc == 0x2AC1C4u) {
        ctx->pc = 0x2AC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC1C0u;
        // 0x2ac1c4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC1C8u;
        goto label_2ac1c8;
    }
    ctx->pc = 0x2AC1C0u;
    SET_GPR_U32(ctx, 31, 0x2AC1C8u);
    ctx->pc = 0x2AC1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC1C0u;
    // 0x2ac1c4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263FF0u, 0x2AC1C0u, 0x2AC1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC1C8u;
label_2ac1c8:
    // 0x2ac1c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ac1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ac1cc:
    // 0x2ac1cc: 0x8c420218  lw          $v0, 0x218($v0)
    ctx->pc = 0x2ac1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_2ac1d0:
    // 0x2ac1d0: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_2ac1d4:
    if (ctx->pc == 0x2AC1D4u) {
        ctx->pc = 0x2AC1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC1D0u;
        // 0x2ac1d4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC1D8u;
        goto label_2ac1d8;
    }
    ctx->pc = 0x2AC1D0u;
    {
        const bool branch_taken_0x2ac1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC1D0u;
        // 0x2ac1d4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac1d0) {
            ctx->pc = 0x2AC328u;
            goto label_2ac328;
        }
    }
    ctx->pc = 0x2AC1D8u;
label_2ac1d8:
    // 0x2ac1d8: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x2ac1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_2ac1dc:
    // 0x2ac1dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ac1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ac1e0:
    // 0x2ac1e0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ac1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ac1e4:
    // 0x2ac1e4: 0xc098ffc  jal         func_263FF0
label_2ac1e8:
    if (ctx->pc == 0x2AC1E8u) {
        ctx->pc = 0x2AC1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC1E4u;
        // 0x2ac1e8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC1ECu;
        goto label_2ac1ec;
    }
    ctx->pc = 0x2AC1E4u;
    SET_GPR_U32(ctx, 31, 0x2AC1ECu);
    ctx->pc = 0x2AC1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC1E4u;
    // 0x2ac1e8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263FF0u, 0x2AC1E4u, 0x2AC1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC1ECu;
label_2ac1ec:
    // 0x2ac1ec: 0x1000004f  b           . + 4 + (0x4F << 2)
label_2ac1f0:
    if (ctx->pc == 0x2AC1F0u) {
        ctx->pc = 0x2AC1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC1ECu;
        // 0x2ac1f0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC1F4u;
        goto label_2ac1f4;
    }
    ctx->pc = 0x2AC1ECu;
    {
        const bool branch_taken_0x2ac1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC1ECu;
        // 0x2ac1f0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac1ec) {
            ctx->pc = 0x2AC32Cu;
            goto label_2ac32c;
        }
    }
    ctx->pc = 0x2AC1F4u;
label_2ac1f4:
    // 0x2ac1f4: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x2ac1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_2ac1f8:
    // 0x2ac1f8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2ac1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ac1fc:
    // 0x2ac1fc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x2ac1fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ac200:
    // 0x2ac200: 0x0  nop
    ctx->pc = 0x2ac200u;
    // NOP
label_2ac204:
    // 0x2ac204: 0x45020049  bc1fl       . + 4 + (0x49 << 2)
label_2ac208:
    if (ctx->pc == 0x2AC208u) {
        ctx->pc = 0x2AC208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC204u;
        // 0x2ac208: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC20Cu;
        goto label_2ac20c;
    }
    ctx->pc = 0x2AC204u;
    {
        const bool branch_taken_0x2ac204 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ac204) {
            ctx->pc = 0x2AC208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC204u;
            // 0x2ac208: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC32Cu;
            goto label_2ac32c;
        }
    }
    ctx->pc = 0x2AC20Cu;
label_2ac20c:
    // 0x2ac20c: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x2ac20cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ac210:
    // 0x2ac210: 0x0  nop
    ctx->pc = 0x2ac210u;
    // NOP
label_2ac214:
    // 0x2ac214: 0x45020045  bc1fl       . + 4 + (0x45 << 2)
label_2ac218:
    if (ctx->pc == 0x2AC218u) {
        ctx->pc = 0x2AC218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC214u;
        // 0x2ac218: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC21Cu;
        goto label_2ac21c;
    }
    ctx->pc = 0x2AC214u;
    {
        const bool branch_taken_0x2ac214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ac214) {
            ctx->pc = 0x2AC218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC214u;
            // 0x2ac218: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC32Cu;
            goto label_2ac32c;
        }
    }
    ctx->pc = 0x2AC21Cu;
label_2ac21c:
    // 0x2ac21c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2ac21cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ac220:
    // 0x2ac220: 0x0  nop
    ctx->pc = 0x2ac220u;
    // NOP
label_2ac224:
    // 0x2ac224: 0x45000040  bc1f        . + 4 + (0x40 << 2)
label_2ac228:
    if (ctx->pc == 0x2AC228u) {
        ctx->pc = 0x2AC228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC224u;
        // 0x2ac228: 0x901021  addu        $v0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC22Cu;
        goto label_2ac22c;
    }
    ctx->pc = 0x2AC224u;
    {
        const bool branch_taken_0x2ac224 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AC228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC224u;
        // 0x2ac228: 0x901021  addu        $v0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac224) {
            ctx->pc = 0x2AC328u;
            goto label_2ac328;
        }
    }
    ctx->pc = 0x2AC22Cu;
label_2ac22c:
    // 0x2ac22c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ac22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ac230:
    // 0x2ac230: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ac234:
    // 0x2ac234: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2ac234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2ac238:
    // 0x2ac238: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ac23c:
    if (ctx->pc == 0x2AC23Cu) {
        ctx->pc = 0x2AC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC238u;
        // 0x2ac23c: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC240u;
        goto label_2ac240;
    }
    ctx->pc = 0x2AC238u;
    {
        const bool branch_taken_0x2ac238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC238u;
        // 0x2ac23c: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac238) {
            ctx->pc = 0x2AC25Cu;
            goto label_2ac25c;
        }
    }
    ctx->pc = 0x2AC240u;
label_2ac240:
    // 0x2ac240: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x2ac240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_2ac244:
    // 0x2ac244: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2ac248:
    if (ctx->pc == 0x2AC248u) {
        ctx->pc = 0x2AC248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC244u;
        // 0x2ac248: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC24Cu;
        goto label_2ac24c;
    }
    ctx->pc = 0x2AC244u;
    {
        const bool branch_taken_0x2ac244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC244u;
        // 0x2ac248: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac244) {
            ctx->pc = 0x2AC25Cu;
            goto label_2ac25c;
        }
    }
    ctx->pc = 0x2AC24Cu;
label_2ac24c:
    // 0x2ac24c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ac24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ac250:
    // 0x2ac250: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2ac250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ac254:
    // 0x2ac254: 0xc098ffc  jal         func_263FF0
label_2ac258:
    if (ctx->pc == 0x2AC258u) {
        ctx->pc = 0x2AC258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC254u;
        // 0x2ac258: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC25Cu;
        goto label_2ac25c;
    }
    ctx->pc = 0x2AC254u;
    SET_GPR_U32(ctx, 31, 0x2AC25Cu);
    ctx->pc = 0x2AC258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC254u;
    // 0x2ac258: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263FF0u, 0x2AC254u, 0x2AC25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC25Cu;
label_2ac25c:
    // 0x2ac25c: 0x2692d688  addiu       $s2, $s4, -0x2978
    ctx->pc = 0x2ac25cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956680));
label_2ac260:
    // 0x2ac260: 0x2642000c  addiu       $v0, $s2, 0xC
    ctx->pc = 0x2ac260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_2ac264:
    // 0x2ac264: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x2ac264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2ac268:
    // 0x2ac268: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ac268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ac26c:
    // 0x2ac26c: 0x8c620218  lw          $v0, 0x218($v1)
    ctx->pc = 0x2ac26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 536)));
label_2ac270:
    // 0x2ac270: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ac274:
    if (ctx->pc == 0x2AC274u) {
        ctx->pc = 0x2AC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC270u;
        // 0x2ac274: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC278u;
        goto label_2ac278;
    }
    ctx->pc = 0x2AC270u;
    {
        const bool branch_taken_0x2ac270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC270u;
        // 0x2ac274: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac270) {
            ctx->pc = 0x2AC28Cu;
            goto label_2ac28c;
        }
    }
    ctx->pc = 0x2AC278u;
label_2ac278:
    // 0x2ac278: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x2ac278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_2ac27c:
    // 0x2ac27c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ac27cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ac280:
    // 0x2ac280: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2ac280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ac284:
    // 0x2ac284: 0xc098ffc  jal         func_263FF0
label_2ac288:
    if (ctx->pc == 0x2AC288u) {
        ctx->pc = 0x2AC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC284u;
        // 0x2ac288: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC28Cu;
        goto label_2ac28c;
    }
    ctx->pc = 0x2AC284u;
    SET_GPR_U32(ctx, 31, 0x2AC28Cu);
    ctx->pc = 0x2AC288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC284u;
    // 0x2ac288: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263FF0u, 0x2AC284u, 0x2AC28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC28Cu;
label_2ac28c:
    // 0x2ac28c: 0x2122021  addu        $a0, $s0, $s2
    ctx->pc = 0x2ac28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2ac290:
    // 0x2ac290: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2ac290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2ac294:
    // 0x2ac294: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ac294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ac298:
    // 0x2ac298: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ac29c:
    if (ctx->pc == 0x2AC29Cu) {
        ctx->pc = 0x2AC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC298u;
        // 0x2ac29c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC2A0u;
        goto label_2ac2a0;
    }
    ctx->pc = 0x2AC298u;
    {
        const bool branch_taken_0x2ac298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC298u;
        // 0x2ac29c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac298) {
            ctx->pc = 0x2AC2B0u;
            goto label_2ac2b0;
        }
    }
    ctx->pc = 0x2AC2A0u;
label_2ac2a0:
    // 0x2ac2a0: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_2ac2a4:
    if (ctx->pc == 0x2AC2A4u) {
        ctx->pc = 0x2AC2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2A0u;
        // 0x2ac2a4: 0x2501021  addu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC2A8u;
        goto label_2ac2a8;
    }
    ctx->pc = 0x2AC2A0u;
    {
        const bool branch_taken_0x2ac2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AC2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2A0u;
        // 0x2ac2a4: 0x2501021  addu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2a0) {
            ctx->pc = 0x2AC304u;
            goto label_2ac304;
        }
    }
    ctx->pc = 0x2AC2A8u;
label_2ac2a8:
    // 0x2ac2a8: 0x10000020  b           . + 4 + (0x20 << 2)
label_2ac2ac:
    if (ctx->pc == 0x2AC2ACu) {
        ctx->pc = 0x2AC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2A8u;
        // 0x2ac2ac: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC2B0u;
        goto label_2ac2b0;
    }
    ctx->pc = 0x2AC2A8u;
    {
        const bool branch_taken_0x2ac2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2A8u;
        // 0x2ac2ac: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2a8) {
            ctx->pc = 0x2AC32Cu;
            goto label_2ac32c;
        }
    }
    ctx->pc = 0x2AC2B0u;
label_2ac2b0:
    // 0x2ac2b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ac2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ac2b4:
    // 0x2ac2b4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2ac2b8:
    if (ctx->pc == 0x2AC2B8u) {
        ctx->pc = 0x2AC2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2B4u;
        // 0x2ac2b8: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC2BCu;
        goto label_2ac2bc;
    }
    ctx->pc = 0x2AC2B4u;
    {
        const bool branch_taken_0x2ac2b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2B4u;
        // 0x2ac2b8: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2b4) {
            ctx->pc = 0x2AC2D8u;
            goto label_2ac2d8;
        }
    }
    ctx->pc = 0x2AC2BCu;
label_2ac2bc:
    // 0x2ac2bc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2ac2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2ac2c0:
    // 0x2ac2c0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_2ac2c4:
    if (ctx->pc == 0x2AC2C4u) {
        ctx->pc = 0x2AC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2C0u;
        // 0x2ac2c4: 0x2682d688  addiu       $v0, $s4, -0x2978 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC2C8u;
        goto label_2ac2c8;
    }
    ctx->pc = 0x2AC2C0u;
    {
        const bool branch_taken_0x2ac2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2C0u;
        // 0x2ac2c4: 0x2682d688  addiu       $v0, $s4, -0x2978 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2c0) {
            ctx->pc = 0x2AC2DCu;
            goto label_2ac2dc;
        }
    }
    ctx->pc = 0x2AC2C8u;
label_2ac2c8:
    // 0x2ac2c8: 0xc09cea0  jal         func_273A80
label_2ac2cc:
    if (ctx->pc == 0x2AC2CCu) {
        ctx->pc = 0x2AC2D0u;
        goto label_2ac2d0;
    }
    ctx->pc = 0x2AC2C8u;
    SET_GPR_U32(ctx, 31, 0x2AC2D0u);
    ctx->pc = 0x273A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273A80u, 0x2AC2C8u, 0x2AC2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC2D0u;
label_2ac2d0:
    // 0x2ac2d0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2ac2d4:
    if (ctx->pc == 0x2AC2D4u) {
        ctx->pc = 0x2AC2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2D0u;
        // 0x2ac2d4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC2D8u;
        goto label_2ac2d8;
    }
    ctx->pc = 0x2AC2D0u;
    {
        const bool branch_taken_0x2ac2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2D0u;
        // 0x2ac2d4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2d0) {
            ctx->pc = 0x2AC2E8u;
            goto label_2ac2e8;
        }
    }
    ctx->pc = 0x2AC2D8u;
label_2ac2d8:
    // 0x2ac2d8: 0x2682d688  addiu       $v0, $s4, -0x2978
    ctx->pc = 0x2ac2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956680));
label_2ac2dc:
    // 0x2ac2dc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2ac2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2ac2e0:
    // 0x2ac2e0: 0xc09a4d0  jal         func_269340
label_2ac2e4:
    if (ctx->pc == 0x2AC2E4u) {
        ctx->pc = 0x2AC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2E0u;
        // 0x2ac2e4: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC2E8u;
        goto label_2ac2e8;
    }
    ctx->pc = 0x2AC2E0u;
    SET_GPR_U32(ctx, 31, 0x2AC2E8u);
    ctx->pc = 0x2AC2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC2E0u;
    // 0x2ac2e4: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x2AC2E0u, 0x2AC2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC2E8u;
label_2ac2e8:
    // 0x2ac2e8: 0x2684d688  addiu       $a0, $s4, -0x2978
    ctx->pc = 0x2ac2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956680));
label_2ac2ec:
    // 0x2ac2ec: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x2ac2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_2ac2f0:
    // 0x2ac2f0: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x2ac2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_2ac2f4:
    // 0x2ac2f4: 0xc0ab870  jal         func_2AE1C0
label_2ac2f8:
    if (ctx->pc == 0x2AC2F8u) {
        ctx->pc = 0x2AC2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2F4u;
        // 0x2ac2f8: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC2FCu;
        goto label_2ac2fc;
    }
    ctx->pc = 0x2AC2F4u;
    SET_GPR_U32(ctx, 31, 0x2AC2FCu);
    ctx->pc = 0x2AC2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC2F4u;
    // 0x2ac2f8: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE1C0u, 0x2AC2F4u, 0x2AC2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC2FCu;
label_2ac2fc:
    // 0x2ac2fc: 0x1000000b  b           . + 4 + (0xB << 2)
label_2ac300:
    if (ctx->pc == 0x2AC300u) {
        ctx->pc = 0x2AC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2FCu;
        // 0x2ac300: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC304u;
        goto label_2ac304;
    }
    ctx->pc = 0x2AC2FCu;
    {
        const bool branch_taken_0x2ac2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2FCu;
        // 0x2ac300: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2fc) {
            ctx->pc = 0x2AC32Cu;
            goto label_2ac32c;
        }
    }
    ctx->pc = 0x2AC304u;
label_2ac304:
    // 0x2ac304: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2ac304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2ac308:
    // 0x2ac308: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ac30c:
    // 0x2ac30c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2ac30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ac310:
    // 0x2ac310: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ac310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ac314:
    // 0x2ac314: 0x0  nop
    ctx->pc = 0x2ac314u;
    // NOP
label_2ac318:
    // 0x2ac318: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_2ac31c:
    if (ctx->pc == 0x2AC31Cu) {
        ctx->pc = 0x2AC31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC318u;
        // 0x2ac31c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC320u;
        goto label_2ac320;
    }
    ctx->pc = 0x2AC318u;
    {
        const bool branch_taken_0x2ac318 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ac318) {
            ctx->pc = 0x2AC31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC318u;
            // 0x2ac31c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC32Cu;
            goto label_2ac32c;
        }
    }
    ctx->pc = 0x2AC320u;
label_2ac320:
    // 0x2ac320: 0xc0ab870  jal         func_2AE1C0
label_2ac324:
    if (ctx->pc == 0x2AC324u) {
        ctx->pc = 0x2AC328u;
        goto label_2ac328;
    }
    ctx->pc = 0x2AC320u;
    SET_GPR_U32(ctx, 31, 0x2AC328u);
    ctx->pc = 0x2AE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE1C0u, 0x2AC320u, 0x2AC328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC328u;
label_2ac328:
    // 0x2ac328: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2ac328u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2ac32c:
    // 0x2ac32c: 0x2aa2000e  slti        $v0, $s5, 0xE
    ctx->pc = 0x2ac32cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)14) ? 1 : 0);
label_2ac330:
    // 0x2ac330: 0x1440fef3  bnez        $v0, . + 4 + (-0x10D << 2)
label_2ac334:
    if (ctx->pc == 0x2AC334u) {
        ctx->pc = 0x2AC334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC330u;
        // 0x2ac334: 0x158140  sll         $s0, $s5, 5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC338u;
        goto label_2ac338;
    }
    ctx->pc = 0x2AC330u;
    {
        const bool branch_taken_0x2ac330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC330u;
        // 0x2ac334: 0x158140  sll         $s0, $s5, 5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac330) {
            ctx->pc = 0x2ABF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2abf00;
        }
    }
    ctx->pc = 0x2AC338u;
label_2ac338:
    // 0x2ac338: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2ac338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2ac33c:
    // 0x2ac33c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2ac33cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2ac340:
    // 0x2ac340: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2ac340u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2ac344:
    // 0x2ac344: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2ac344u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ac348:
    // 0x2ac348: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2ac348u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ac34c:
    // 0x2ac34c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ac34cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ac350:
    // 0x2ac350: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ac350u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ac354:
    // 0x2ac354: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ac354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ac358:
    // 0x2ac358: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ac358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ac35c:
    // 0x2ac35c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ac35cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ac360:
    // 0x2ac360: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2ac360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ac364:
    // 0x2ac364: 0x3e00008  jr          $ra
label_2ac368:
    if (ctx->pc == 0x2AC368u) {
        ctx->pc = 0x2AC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC364u;
        // 0x2ac368: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC36Cu;
        goto label_fallthrough_0x2ac364;
    }
    ctx->pc = 0x2AC364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC364u;
        // 0x2ac368: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ac364:
    ctx->pc = 0x2AC36Cu;
}
