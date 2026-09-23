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

// Function: HitTestDistanceLineSegmentToLineSegmentSquared
// Address: 0x20b1a8 - 0x20c0fc
void HitTestDistanceLineSegmentToLineSegmentSquared_0x20b1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HitTestDistanceLineSegmentToLineSegmentSquared_0x20b1a8");
#endif

    switch (ctx->pc) {
        case 0x20b310u: goto label_20b310;
        case 0x20b320u: goto label_20b320;
        case 0x20b378u: goto label_20b378;
        case 0x20b384u: goto label_20b384;
        case 0x20b3a0u: goto label_20b3a0;
        case 0x20b3acu: goto label_20b3ac;
        case 0x20b3ccu: goto label_20b3cc;
        case 0x20b3dcu: goto label_20b3dc;
        case 0x20b3e4u: goto label_20b3e4;
        case 0x20b3f4u: goto label_20b3f4;
        case 0x20b408u: goto label_20b408;
        case 0x20b414u: goto label_20b414;
        case 0x20b420u: goto label_20b420;
        case 0x20b42cu: goto label_20b42c;
        case 0x20b438u: goto label_20b438;
        case 0x20b444u: goto label_20b444;
        case 0x20b458u: goto label_20b458;
        case 0x20b464u: goto label_20b464;
        case 0x20b470u: goto label_20b470;
        case 0x20b47cu: goto label_20b47c;
        case 0x20b488u: goto label_20b488;
        case 0x20b494u: goto label_20b494;
        case 0x20b4a0u: goto label_20b4a0;
        case 0x20b4b8u: goto label_20b4b8;
        case 0x20b4c4u: goto label_20b4c4;
        case 0x20b4d4u: goto label_20b4d4;
        case 0x20b4e0u: goto label_20b4e0;
        case 0x20b4ecu: goto label_20b4ec;
        case 0x20b4f8u: goto label_20b4f8;
        case 0x20b504u: goto label_20b504;
        case 0x20b52cu: goto label_20b52c;
        case 0x20b538u: goto label_20b538;
        case 0x20b544u: goto label_20b544;
        case 0x20b564u: goto label_20b564;
        case 0x20b570u: goto label_20b570;
        case 0x20b57cu: goto label_20b57c;
        case 0x20b588u: goto label_20b588;
        case 0x20b594u: goto label_20b594;
        case 0x20b5a4u: goto label_20b5a4;
        case 0x20b5b0u: goto label_20b5b0;
        case 0x20b5d8u: goto label_20b5d8;
        case 0x20b5e4u: goto label_20b5e4;
        case 0x20b5f0u: goto label_20b5f0;
        case 0x20b5fcu: goto label_20b5fc;
        case 0x20b608u: goto label_20b608;
        case 0x20b62cu: goto label_20b62c;
        case 0x20b638u: goto label_20b638;
        case 0x20b664u: goto label_20b664;
        case 0x20b670u: goto label_20b670;
        case 0x20b680u: goto label_20b680;
        case 0x20b68cu: goto label_20b68c;
        case 0x20b698u: goto label_20b698;
        case 0x20b6a4u: goto label_20b6a4;
        case 0x20b6b0u: goto label_20b6b0;
        case 0x20b6d8u: goto label_20b6d8;
        case 0x20b6e4u: goto label_20b6e4;
        case 0x20b6f0u: goto label_20b6f0;
        case 0x20b710u: goto label_20b710;
        case 0x20b71cu: goto label_20b71c;
        case 0x20b728u: goto label_20b728;
        case 0x20b734u: goto label_20b734;
        case 0x20b740u: goto label_20b740;
        case 0x20b76cu: goto label_20b76c;
        case 0x20b778u: goto label_20b778;
        case 0x20b788u: goto label_20b788;
        case 0x20b794u: goto label_20b794;
        case 0x20b7a0u: goto label_20b7a0;
        case 0x20b7acu: goto label_20b7ac;
        case 0x20b7b8u: goto label_20b7b8;
        case 0x20b7d8u: goto label_20b7d8;
        case 0x20b7e4u: goto label_20b7e4;
        case 0x20b7f0u: goto label_20b7f0;
        case 0x20b7fcu: goto label_20b7fc;
        case 0x20b808u: goto label_20b808;
        case 0x20b820u: goto label_20b820;
        case 0x20b82cu: goto label_20b82c;
        case 0x20b83cu: goto label_20b83c;
        case 0x20b848u: goto label_20b848;
        case 0x20b854u: goto label_20b854;
        case 0x20b860u: goto label_20b860;
        case 0x20b86cu: goto label_20b86c;
        case 0x20b894u: goto label_20b894;
        case 0x20b8a0u: goto label_20b8a0;
        case 0x20b8acu: goto label_20b8ac;
        case 0x20b8ccu: goto label_20b8cc;
        case 0x20b8d8u: goto label_20b8d8;
        case 0x20b8e4u: goto label_20b8e4;
        case 0x20b8f0u: goto label_20b8f0;
        case 0x20b8fcu: goto label_20b8fc;
        case 0x20b91cu: goto label_20b91c;
        case 0x20b928u: goto label_20b928;
        case 0x20b958u: goto label_20b958;
        case 0x20b964u: goto label_20b964;
        case 0x20b974u: goto label_20b974;
        case 0x20b980u: goto label_20b980;
        case 0x20b98cu: goto label_20b98c;
        case 0x20b998u: goto label_20b998;
        case 0x20b9a4u: goto label_20b9a4;
        case 0x20b9ccu: goto label_20b9cc;
        case 0x20b9d8u: goto label_20b9d8;
        case 0x20b9e4u: goto label_20b9e4;
        case 0x20ba04u: goto label_20ba04;
        case 0x20ba10u: goto label_20ba10;
        case 0x20ba1cu: goto label_20ba1c;
        case 0x20ba28u: goto label_20ba28;
        case 0x20ba34u: goto label_20ba34;
        case 0x20ba44u: goto label_20ba44;
        case 0x20ba50u: goto label_20ba50;
        case 0x20ba70u: goto label_20ba70;
        case 0x20ba7cu: goto label_20ba7c;
        case 0x20baa0u: goto label_20baa0;
        case 0x20baacu: goto label_20baac;
        case 0x20bab8u: goto label_20bab8;
        case 0x20bac4u: goto label_20bac4;
        case 0x20bad0u: goto label_20bad0;
        case 0x20bae4u: goto label_20bae4;
        case 0x20baf0u: goto label_20baf0;
        case 0x20bb20u: goto label_20bb20;
        case 0x20bb2cu: goto label_20bb2c;
        case 0x20bb38u: goto label_20bb38;
        case 0x20bb58u: goto label_20bb58;
        case 0x20bb64u: goto label_20bb64;
        case 0x20bb70u: goto label_20bb70;
        case 0x20bb7cu: goto label_20bb7c;
        case 0x20bb88u: goto label_20bb88;
        case 0x20bb98u: goto label_20bb98;
        case 0x20bba4u: goto label_20bba4;
        case 0x20bbc8u: goto label_20bbc8;
        case 0x20bbd4u: goto label_20bbd4;
        case 0x20bbe0u: goto label_20bbe0;
        case 0x20bbecu: goto label_20bbec;
        case 0x20bbf8u: goto label_20bbf8;
        case 0x20bc08u: goto label_20bc08;
        case 0x20bc14u: goto label_20bc14;
        case 0x20bc40u: goto label_20bc40;
        case 0x20bc4cu: goto label_20bc4c;
        case 0x20bc58u: goto label_20bc58;
        case 0x20bc64u: goto label_20bc64;
        case 0x20bc70u: goto label_20bc70;
        case 0x20bc94u: goto label_20bc94;
        case 0x20bca0u: goto label_20bca0;
        case 0x20bcccu: goto label_20bccc;
        case 0x20bcd8u: goto label_20bcd8;
        case 0x20bce4u: goto label_20bce4;
        case 0x20bcf0u: goto label_20bcf0;
        case 0x20bcfcu: goto label_20bcfc;
        case 0x20bd28u: goto label_20bd28;
        case 0x20bd34u: goto label_20bd34;
        case 0x20bd44u: goto label_20bd44;
        case 0x20bd50u: goto label_20bd50;
        case 0x20bde0u: goto label_20bde0;
        case 0x20bdf0u: goto label_20bdf0;
        case 0x20bdfcu: goto label_20bdfc;
        case 0x20be18u: goto label_20be18;
        case 0x20be24u: goto label_20be24;
        case 0x20be30u: goto label_20be30;
        case 0x20be3cu: goto label_20be3c;
        case 0x20be48u: goto label_20be48;
        case 0x20be54u: goto label_20be54;
        case 0x20be60u: goto label_20be60;
        case 0x20be6cu: goto label_20be6c;
        case 0x20be78u: goto label_20be78;
        case 0x20be84u: goto label_20be84;
        case 0x20bea4u: goto label_20bea4;
        case 0x20beb8u: goto label_20beb8;
        case 0x20bec4u: goto label_20bec4;
        case 0x20bed0u: goto label_20bed0;
        case 0x20bedcu: goto label_20bedc;
        case 0x20beecu: goto label_20beec;
        case 0x20bef8u: goto label_20bef8;
        case 0x20bf64u: goto label_20bf64;
        case 0x20bf70u: goto label_20bf70;
        case 0x20bf7cu: goto label_20bf7c;
        case 0x20bf88u: goto label_20bf88;
        case 0x20bf94u: goto label_20bf94;
        case 0x20bfb0u: goto label_20bfb0;
        case 0x20bfbcu: goto label_20bfbc;
        case 0x20bfc8u: goto label_20bfc8;
        case 0x20bfd4u: goto label_20bfd4;
        case 0x20bfe0u: goto label_20bfe0;
        case 0x20bfecu: goto label_20bfec;
        case 0x20bff8u: goto label_20bff8;
        case 0x20c004u: goto label_20c004;
        case 0x20c00cu: goto label_20c00c;
        default: break;
    }

    ctx->pc = 0x20b1a8u;

    // 0x20b1a8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x20b1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x20b1ac: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x20b1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20b1b0: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x20b1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x20b1b4: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x20b1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x20b1b8: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x20b1b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b1bc: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x20b1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x20b1c0: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x20b1c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b1c4: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x20b1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x20b1c8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20b1c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b1cc: 0xe7be0100  swc1        $f30, 0x100($sp)
    ctx->pc = 0x20b1ccu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x20b1d0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x20b1d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b1d4: 0xe7bc00f0  swc1        $f28, 0xF0($sp)
    ctx->pc = 0x20b1d4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x20b1d8: 0xe7bb00e8  swc1        $f27, 0xE8($sp)
    ctx->pc = 0x20b1d8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x20b1dc: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x20b1dcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x20b1e0: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x20b1e0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x20b1e4: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x20b1e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x20b1e8: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x20b1e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x20b1ec: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x20b1ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x20b1f0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x20b1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x20b1f4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x20b1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x20b1f8: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x20b1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x20b1fc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x20b1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x20b200: 0xe7bf0108  swc1        $f31, 0x108($sp)
    ctx->pc = 0x20b200u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x20b204: 0xe7bd00f8  swc1        $f29, 0xF8($sp)
    ctx->pc = 0x20b204u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x20b208: 0xe7ba00e0  swc1        $f26, 0xE0($sp)
    ctx->pc = 0x20b208u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x20b20c: 0xe7b900d8  swc1        $f25, 0xD8($sp)
    ctx->pc = 0x20b20cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x20b210: 0x4480f000  mtc1        $zero, $f30
    ctx->pc = 0x20b210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x20b214: 0xc6670000  lwc1        $f7, 0x0($s3)
    ctx->pc = 0x20b214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x20b218: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x20b218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b21c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x20b21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b220: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x20b220u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x20b224: 0xc69f0000  lwc1        $f31, 0x0($s4)
    ctx->pc = 0x20b224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x20b228: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x20b228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20b22c: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x20b22cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20b230: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x20b230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x20b234: 0x4607fa01  sub.s       $f8, $f31, $f7
    ctx->pc = 0x20b234u;
    ctx->f[8] = FPU_SUB_S(ctx->f[31], ctx->f[7]);
    // 0x20b238: 0xc4e60004  lwc1        $f6, 0x4($a3)
    ctx->pc = 0x20b238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x20b23c: 0x461f1081  sub.s       $f2, $f2, $f31
    ctx->pc = 0x20b23cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[31]);
    // 0x20b240: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x20b240u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x20b244: 0xc66e0008  lwc1        $f14, 0x8($s3)
    ctx->pc = 0x20b244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20b248: 0x46013181  sub.s       $f6, $f6, $f1
    ctx->pc = 0x20b248u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x20b24c: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x20b24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20b250: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x20b250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b254: 0x46031242  mul.s       $f9, $f2, $f3
    ctx->pc = 0x20b254u;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x20b258: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x20b258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b25c: 0x460319c2  mul.s       $f7, $f3, $f3
    ctx->pc = 0x20b25cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x20b260: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x20b260u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x20b264: 0xe7a80000  swc1        $f8, 0x0($sp)
    ctx->pc = 0x20b264u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20b268: 0x46062a82  mul.s       $f10, $f5, $f6
    ctx->pc = 0x20b268u;
    ctx->f[10] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x20b26c: 0xe7ac0004  swc1        $f12, 0x4($sp)
    ctx->pc = 0x20b26cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20b270: 0x460e0001  sub.s       $f0, $f0, $f14
    ctx->pc = 0x20b270u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
    // 0x20b274: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x20b274u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x20b278: 0x460212c2  mul.s       $f11, $f2, $f2
    ctx->pc = 0x20b278u;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x20b27c: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x20b27cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x20b280: 0x460a4a40  add.s       $f9, $f9, $f10
    ctx->pc = 0x20b280u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
    // 0x20b284: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x20b284u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x20b288: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x20b288u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x20b28c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x20b28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x20b290: 0x46063342  mul.s       $f13, $f6, $f6
    ctx->pc = 0x20b290u;
    ctx->f[13] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x20b294: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x20b294u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x20b298: 0x46052a82  mul.s       $f10, $f5, $f5
    ctx->pc = 0x20b298u;
    ctx->f[10] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x20b29c: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x20b29cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x20b2a0: 0x46034e00  add.s       $f24, $f9, $f3
    ctx->pc = 0x20b2a0u;
    ctx->f[24] = FPU_ADD_S(ctx->f[9], ctx->f[3]);
    // 0x20b2a4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x20b2a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x20b2a8: 0x460420c2  mul.s       $f3, $f4, $f4
    ctx->pc = 0x20b2a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x20b2ac: 0x460d39c0  add.s       $f7, $f7, $f13
    ctx->pc = 0x20b2acu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[13]);
    // 0x20b2b0: 0x460a5ac0  add.s       $f11, $f11, $f10
    ctx->pc = 0x20b2b0u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x20b2b4: 0x4600c6c7  neg.s       $f27, $f24
    ctx->pc = 0x20b2b4u;
    ctx->f[27] = FPU_NEG_S(ctx->f[24]);
    // 0x20b2b8: 0x46003dc0  add.s       $f23, $f7, $f0
    ctx->pc = 0x20b2b8u;
    ctx->f[23] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x20b2bc: 0x46035d40  add.s       $f21, $f11, $f3
    ctx->pc = 0x20b2bcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[11], ctx->f[3]);
    // 0x20b2c0: 0x461bd982  mul.s       $f6, $f27, $f27
    ctx->pc = 0x20b2c0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[27], ctx->f[27]);
    // 0x20b2c4: 0x460e0841  sub.s       $f1, $f1, $f14
    ctx->pc = 0x20b2c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[14]);
    // 0x20b2c8: 0x4617a802  mul.s       $f0, $f21, $f23
    ctx->pc = 0x20b2c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x20b2cc: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x20b2ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x20b2d0: 0x46056142  mul.s       $f5, $f12, $f5
    ctx->pc = 0x20b2d0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x20b2d4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x20b2d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20b2d8: 0x46084202  mul.s       $f8, $f8, $f8
    ctx->pc = 0x20b2d8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x20b2dc: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x20b2dcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x20b2e0: 0x46060501  sub.s       $f20, $f0, $f6
    ctx->pc = 0x20b2e0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x20b2e4: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x20b2e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x20b2e8: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x20b2e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x20b2ec: 0x460c4200  add.s       $f8, $f8, $f12
    ctx->pc = 0x20b2ecu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[12]);
    // 0x20b2f0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x20b2f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x20b2f4: 0x4614f036  c.le.s      $f30, $f20
    ctx->pc = 0x20b2f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[30], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b2f8: 0x46041580  add.s       $f22, $f2, $f4
    ctx->pc = 0x20b2f8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x20b2fc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x20B2FCu;
    {
        const bool branch_taken_0x20b2fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2FCu;
        // 0x20b300: 0x46014700  add.s       $f28, $f8, $f1 (Delay Slot)
        ctx->f[28] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2fc) {
            ctx->pc = 0x20B308u;
            goto label_20b308;
        }
    }
    ctx->pc = 0x20B304u;
    // 0x20b304: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x20b304u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
label_20b308:
    // 0x20b308: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B308u;
    SET_GPR_U32(ctx, 31, 0x20B310u);
    ctx->pc = 0x20B30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B308u;
    // 0x20b30c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B308u, 0x20B310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B310u;
label_20b310:
    // 0x20b310: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x20b310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x20b314: 0xdc25a0c0  ld          $a1, -0x5F40($at)
    ctx->pc = 0x20b314u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x39A0C0u));
    // 0x20b318: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x20B318u;
    SET_GPR_U32(ctx, 31, 0x20B320u);
    ctx->pc = 0x20B31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B318u;
    // 0x20b31c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x20B318u, 0x20B320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B320u;
label_20b320:
    // 0x20b320: 0x440027e  bltz        $v0, . + 4 + (0x27E << 2)
    ctx->pc = 0x20B320u;
    {
        const bool branch_taken_0x20b320 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B320u;
        // 0x20b324: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b320) {
            ctx->pc = 0x20BD1Cu;
            goto label_20bd1c;
        }
    }
    ctx->pc = 0x20B328u;
    // 0x20b328: 0x4616b982  mul.s       $f6, $f23, $f22
    ctx->pc = 0x20b328u;
    ctx->f[6] = FPU_MUL_S(ctx->f[23], ctx->f[22]);
    // 0x20b32c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x20b32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20b330: 0x4616d942  mul.s       $f5, $f27, $f22
    ctx->pc = 0x20b330u;
    ctx->f[5] = FPU_MUL_S(ctx->f[27], ctx->f[22]);
    // 0x20b334: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x20b334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20b338: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20b338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b33c: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x20b33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20b340: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x20b340u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x20b344: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x20b344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b348: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x20b348u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x20b34c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x20b34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b350: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20b350u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20b354: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x20b354u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x20b358: 0x46011e80  add.s       $f26, $f3, $f1
    ctx->pc = 0x20b358u;
    ctx->f[26] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x20b35c: 0x4600d607  neg.s       $f24, $f26
    ctx->pc = 0x20b35cu;
    ctx->f[24] = FPU_NEG_S(ctx->f[26]);
    // 0x20b360: 0x4618d802  mul.s       $f0, $f27, $f24
    ctx->pc = 0x20b360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[27], ctx->f[24]);
    // 0x20b364: 0x4618a842  mul.s       $f1, $f21, $f24
    ctx->pc = 0x20b364u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
    // 0x20b368: 0x46060741  sub.s       $f29, $f0, $f6
    ctx->pc = 0x20b368u;
    ctx->f[29] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x20b36c: 0x46012e41  sub.s       $f25, $f5, $f1
    ctx->pc = 0x20b36cu;
    ctx->f[25] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x20b370: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B370u;
    SET_GPR_U32(ctx, 31, 0x20B378u);
    ctx->pc = 0x20B374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B370u;
    // 0x20b374: 0x4600eb06  mov.s       $f12, $f29 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B370u, 0x20B378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B378u;
label_20b378:
    // 0x20b378: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b37c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x20B37Cu;
    SET_GPR_U32(ctx, 31, 0x20B384u);
    ctx->pc = 0x20B380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B37Cu;
    // 0x20b380: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x20B37Cu, 0x20B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B384u;
label_20b384:
    // 0x20b384: 0x44001ad  bltz        $v0, . + 4 + (0x1AD << 2)
    ctx->pc = 0x20B384u;
    {
        const bool branch_taken_0x20b384 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b384) {
            ctx->pc = 0x20BA3Cu;
            goto label_20ba3c;
        }
    }
    ctx->pc = 0x20B38Cu;
    // 0x20b38c: 0x4614e836  c.le.s      $f29, $f20
    ctx->pc = 0x20b38cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[29], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b390: 0x450000a4  bc1f        . + 4 + (0xA4 << 2)
    ctx->pc = 0x20B390u;
    {
        const bool branch_taken_0x20b390 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b390) {
            ctx->pc = 0x20B624u;
            goto label_20b624;
        }
    }
    ctx->pc = 0x20B398u;
    // 0x20b398: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B398u;
    SET_GPR_U32(ctx, 31, 0x20B3A0u);
    ctx->pc = 0x20B39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B398u;
    // 0x20b39c: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B398u, 0x20B3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B3A0u;
label_20b3a0:
    // 0x20b3a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b3a4: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x20B3A4u;
    SET_GPR_U32(ctx, 31, 0x20B3ACu);
    ctx->pc = 0x20B3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B3A4u;
    // 0x20b3a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x20B3A4u, 0x20B3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B3ACu;
label_20b3ac:
    // 0x20b3ac: 0x440007b  bltz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x20B3ACu;
    {
        const bool branch_taken_0x20b3ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3ACu;
        // 0x20b3b0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3ac) {
            ctx->pc = 0x20B59Cu;
            goto label_20b59c;
        }
    }
    ctx->pc = 0x20B3B4u;
    // 0x20b3b4: 0x4614c836  c.le.s      $f25, $f20
    ctx->pc = 0x20b3b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b3b8: 0x0  nop
    ctx->pc = 0x20b3b8u;
    // NOP
    // 0x20b3bc: 0x4502003a  bc1fl       . + 4 + (0x3A << 2)
    ctx->pc = 0x20B3BCu;
    {
        const bool branch_taken_0x20b3bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b3bc) {
            ctx->pc = 0x20B3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B3BCu;
            // 0x20b3c0: 0x4616dd00  add.s       $f20, $f27, $f22 (Delay Slot)
            ctx->f[20] = FPU_ADD_S(ctx->f[27], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B4A8u;
            goto label_20b4a8;
        }
    }
    ctx->pc = 0x20B3C4u;
    // 0x20b3c4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B3C4u;
    SET_GPR_U32(ctx, 31, 0x20B3CCu);
    ctx->pc = 0x20B3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B3C4u;
    // 0x20b3c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B3C4u, 0x20B3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B3CCu;
label_20b3cc:
    // 0x20b3cc: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x20b3ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x20b3d0: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x20b3d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x20b3d4: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x20B3D4u;
    SET_GPR_U32(ctx, 31, 0x20B3DCu);
    ctx->pc = 0x20B3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B3D4u;
    // 0x20b3d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x20B3D4u, 0x20B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B3DCu;
label_20b3dc:
    // 0x20b3dc: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x20B3DCu;
    SET_GPR_U32(ctx, 31, 0x20B3E4u);
    ctx->pc = 0x20B3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B3DCu;
    // 0x20b3e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x20B3DCu, 0x20B3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B3E4u;
label_20b3e4:
    // 0x20b3e4: 0x4600ef42  mul.s       $f29, $f29, $f0
    ctx->pc = 0x20b3e4u;
    ctx->f[29] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
    // 0x20b3e8: 0x4600ce42  mul.s       $f25, $f25, $f0
    ctx->pc = 0x20b3e8u;
    ctx->f[25] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x20b3ec: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B3ECu;
    SET_GPR_U32(ctx, 31, 0x20B3F4u);
    ctx->pc = 0x20B3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B3ECu;
    // 0x20b3f0: 0x4600eb06  mov.s       $f12, $f29 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B3ECu, 0x20B3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B3F4u;
label_20b3f4:
    // 0x20b3f4: 0x461da802  mul.s       $f0, $f21, $f29
    ctx->pc = 0x20b3f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[29]);
    // 0x20b3f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20b3f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b3fc: 0x4619db02  mul.s       $f12, $f27, $f25
    ctx->pc = 0x20b3fcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[27], ctx->f[25]);
    // 0x20b400: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B400u;
    SET_GPR_U32(ctx, 31, 0x20B408u);
    ctx->pc = 0x20B404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B400u;
    // 0x20b404: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B400u, 0x20B408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B408u;
label_20b408:
    // 0x20b408: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b40c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B40Cu;
    SET_GPR_U32(ctx, 31, 0x20B414u);
    ctx->pc = 0x20B410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B40Cu;
    // 0x20b410: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B40Cu, 0x20B414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B414u;
label_20b414:
    // 0x20b414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b418: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B418u;
    SET_GPR_U32(ctx, 31, 0x20B420u);
    ctx->pc = 0x20B41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B418u;
    // 0x20b41c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B418u, 0x20B420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B420u;
label_20b420:
    // 0x20b420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b424: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B424u;
    SET_GPR_U32(ctx, 31, 0x20B42Cu);
    ctx->pc = 0x20B428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B424u;
    // 0x20b428: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B424u, 0x20B42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B42Cu;
label_20b42c:
    // 0x20b42c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20b42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b430: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x20B430u;
    SET_GPR_U32(ctx, 31, 0x20B438u);
    ctx->pc = 0x20B434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B430u;
    // 0x20b434: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x20B430u, 0x20B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B438u;
label_20b438:
    // 0x20b438: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20b438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b43c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B43Cu;
    SET_GPR_U32(ctx, 31, 0x20B444u);
    ctx->pc = 0x20B440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B43Cu;
    // 0x20b440: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B43Cu, 0x20B444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B444u;
label_20b444:
    // 0x20b444: 0x461dd802  mul.s       $f0, $f27, $f29
    ctx->pc = 0x20b444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[27], ctx->f[29]);
    // 0x20b448: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20b448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b44c: 0x4619bb02  mul.s       $f12, $f23, $f25
    ctx->pc = 0x20b44cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[23], ctx->f[25]);
    // 0x20b450: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B450u;
    SET_GPR_U32(ctx, 31, 0x20B458u);
    ctx->pc = 0x20B454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B450u;
    // 0x20b454: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B450u, 0x20B458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B458u;
label_20b458:
    // 0x20b458: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b45c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B45Cu;
    SET_GPR_U32(ctx, 31, 0x20B464u);
    ctx->pc = 0x20B460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B45Cu;
    // 0x20b460: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B45Cu, 0x20B464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B464u;
label_20b464:
    // 0x20b464: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b468: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B468u;
    SET_GPR_U32(ctx, 31, 0x20B470u);
    ctx->pc = 0x20B46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B468u;
    // 0x20b46c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B468u, 0x20B470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B470u;
label_20b470:
    // 0x20b470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b474: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B474u;
    SET_GPR_U32(ctx, 31, 0x20B47Cu);
    ctx->pc = 0x20B478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B474u;
    // 0x20b478: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B474u, 0x20B47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B47Cu;
label_20b47c:
    // 0x20b47c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20b47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b480: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x20B480u;
    SET_GPR_U32(ctx, 31, 0x20B488u);
    ctx->pc = 0x20B484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B480u;
    // 0x20b484: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x20B480u, 0x20B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B488u;
label_20b488:
    // 0x20b488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20b488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b48c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B48Cu;
    SET_GPR_U32(ctx, 31, 0x20B494u);
    ctx->pc = 0x20B490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B48Cu;
    // 0x20b490: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B48Cu, 0x20B494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B494u;
label_20b494:
    // 0x20b494: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b498: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B498u;
    SET_GPR_U32(ctx, 31, 0x20B4A0u);
    ctx->pc = 0x20B49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B498u;
    // 0x20b49c: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B498u, 0x20B4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B4A0u;
label_20b4a0:
    // 0x20b4a0: 0x100002d6  b           . + 4 + (0x2D6 << 2)
    ctx->pc = 0x20B4A0u;
    {
        const bool branch_taken_0x20b4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4A0u;
        // 0x20b4a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4a0) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20B4A8u;
label_20b4a8:
    // 0x20b4a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20b4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20b4ac: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x20b4acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x20b4b0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B4B0u;
    SET_GPR_U32(ctx, 31, 0x20B4B8u);
    ctx->pc = 0x20B4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B4B0u;
    // 0x20b4b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B4B0u, 0x20B4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B4B8u;
label_20b4b8:
    // 0x20b4b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b4bc: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x20B4BCu;
    SET_GPR_U32(ctx, 31, 0x20B4C4u);
    ctx->pc = 0x20B4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B4BCu;
    // 0x20b4c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x20B4BCu, 0x20B4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B4C4u;
label_20b4c4:
    // 0x20b4c4: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20B4C4u;
    {
        const bool branch_taken_0x20b4c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4C4u;
        // 0x20b4c8: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4c4) {
            ctx->pc = 0x20B50Cu;
            goto label_20b50c;
        }
    }
    ctx->pc = 0x20B4CCu;
    // 0x20b4cc: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B4CCu;
    SET_GPR_U32(ctx, 31, 0x20B4D4u);
    ctx->pc = 0x20B4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B4CCu;
    // 0x20b4d0: 0x4600f746  mov.s       $f29, $f30 (Delay Slot)
    ctx->f[29] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B4CCu, 0x20B4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B4D4u;
label_20b4d4:
    // 0x20b4d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b4d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b4d8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B4D8u;
    SET_GPR_U32(ctx, 31, 0x20B4E0u);
    ctx->pc = 0x20B4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B4D8u;
    // 0x20b4dc: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B4D8u, 0x20B4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B4E0u;
label_20b4e0:
    // 0x20b4e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b4e4: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B4E4u;
    SET_GPR_U32(ctx, 31, 0x20B4ECu);
    ctx->pc = 0x20B4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B4E4u;
    // 0x20b4e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B4E4u, 0x20B4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B4ECu;
label_20b4ec:
    // 0x20b4ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b4f0: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B4F0u;
    SET_GPR_U32(ctx, 31, 0x20B4F8u);
    ctx->pc = 0x20B4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B4F0u;
    // 0x20b4f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B4F0u, 0x20B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B4F8u;
label_20b4f8:
    // 0x20b4f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b4f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b4fc: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B4FCu;
    SET_GPR_U32(ctx, 31, 0x20B504u);
    ctx->pc = 0x20B500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B4FCu;
    // 0x20b500: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B4FCu, 0x20B504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B504u;
label_20b504:
    // 0x20b504: 0x100002bd  b           . + 4 + (0x2BD << 2)
    ctx->pc = 0x20B504u;
    {
        const bool branch_taken_0x20b504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B504u;
        // 0x20b508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b504) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20B50Cu;
label_20b50c:
    // 0x20b50c: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x20b50cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x20b510: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x20b510u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b514: 0x0  nop
    ctx->pc = 0x20b514u;
    // NOP
    // 0x20b518: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x20B518u;
    {
        const bool branch_taken_0x20b518 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B518u;
        // 0x20b51c: 0x4600cf46  mov.s       $f29, $f25 (Delay Slot)
        ctx->f[29] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b518) {
            ctx->pc = 0x20B54Cu;
            goto label_20b54c;
        }
    }
    ctx->pc = 0x20B520u;
    // 0x20b520: 0x4617ab00  add.s       $f12, $f21, $f23
    ctx->pc = 0x20b520u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x20b524: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B524u;
    SET_GPR_U32(ctx, 31, 0x20B52Cu);
    ctx->pc = 0x20B528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B524u;
    // 0x20b528: 0x461c6300  add.s       $f12, $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B524u, 0x20B52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B52Cu;
label_20b52c:
    // 0x20b52c: 0x4614c300  add.s       $f12, $f24, $f20
    ctx->pc = 0x20b52cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[24], ctx->f[20]);
    // 0x20b530: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B530u;
    SET_GPR_U32(ctx, 31, 0x20B538u);
    ctx->pc = 0x20B534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B530u;
    // 0x20b534: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B530u, 0x20B538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B538u;
label_20b538:
    // 0x20b538: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b53c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B53Cu;
    SET_GPR_U32(ctx, 31, 0x20B544u);
    ctx->pc = 0x20B540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B53Cu;
    // 0x20b540: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B53Cu, 0x20B544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B544u;
label_20b544:
    // 0x20b544: 0x100002ad  b           . + 4 + (0x2AD << 2)
    ctx->pc = 0x20B544u;
    {
        const bool branch_taken_0x20b544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B544u;
        // 0x20b548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b544) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20B54Cu;
label_20b54c:
    // 0x20b54c: 0x0  nop
    ctx->pc = 0x20b54cu;
    // NOP
    // 0x20b550: 0x0  nop
    ctx->pc = 0x20b550u;
    // NOP
    // 0x20b554: 0x46150743  div.s       $f29, $f0, $f21
    ctx->pc = 0x20b554u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[29] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[29] = ctx->f[0] / ctx->f[21];
    // 0x20b558: 0x461da302  mul.s       $f12, $f20, $f29
    ctx->pc = 0x20b558u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[29]);
    // 0x20b55c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B55Cu;
    SET_GPR_U32(ctx, 31, 0x20B564u);
    ctx->pc = 0x20B560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B55Cu;
    // 0x20b560: 0x46176300  add.s       $f12, $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B55Cu, 0x20B564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B564u;
label_20b564:
    // 0x20b564: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b568: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B568u;
    SET_GPR_U32(ctx, 31, 0x20B570u);
    ctx->pc = 0x20B56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B568u;
    // 0x20b56c: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B568u, 0x20B570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B570u;
label_20b570:
    // 0x20b570: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b574: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B574u;
    SET_GPR_U32(ctx, 31, 0x20B57Cu);
    ctx->pc = 0x20B578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B574u;
    // 0x20b578: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B574u, 0x20B57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B57Cu;
label_20b57c:
    // 0x20b57c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b580: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B580u;
    SET_GPR_U32(ctx, 31, 0x20B588u);
    ctx->pc = 0x20B584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B580u;
    // 0x20b584: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B580u, 0x20B588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B588u;
label_20b588:
    // 0x20b588: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b58c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B58Cu;
    SET_GPR_U32(ctx, 31, 0x20B594u);
    ctx->pc = 0x20B590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B58Cu;
    // 0x20b590: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B58Cu, 0x20B594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B594u;
label_20b594:
    // 0x20b594: 0x10000299  b           . + 4 + (0x299 << 2)
    ctx->pc = 0x20B594u;
    {
        const bool branch_taken_0x20b594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B594u;
        // 0x20b598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b594) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20B59Cu;
label_20b59c:
    // 0x20b59c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B59Cu;
    SET_GPR_U32(ctx, 31, 0x20B5A4u);
    ctx->pc = 0x20B5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B59Cu;
    // 0x20b5a0: 0x4600f646  mov.s       $f25, $f30 (Delay Slot)
    ctx->f[25] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B59Cu, 0x20B5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B5A4u;
label_20b5a4:
    // 0x20b5a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b5a8: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x20B5A8u;
    SET_GPR_U32(ctx, 31, 0x20B5B0u);
    ctx->pc = 0x20B5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B5A8u;
    // 0x20b5ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x20B5A8u, 0x20B5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B5B0u;
label_20b5b0:
    // 0x20b5b0: 0x44101ea  bgez        $v0, . + 4 + (0x1EA << 2)
    ctx->pc = 0x20B5B0u;
    {
        const bool branch_taken_0x20b5b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B5B0u;
        // 0x20b5b4: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b5b0) {
            ctx->pc = 0x20BD5Cu;
            goto label_20bd5c;
        }
    }
    ctx->pc = 0x20B5B8u;
    // 0x20b5b8: 0x4600b007  neg.s       $f0, $f22
    ctx->pc = 0x20b5b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[22]);
    // 0x20b5bc: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x20b5bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b5c0: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x20B5C0u;
    {
        const bool branch_taken_0x20b5c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b5c0) {
            ctx->pc = 0x20B610u;
            goto label_20b610;
        }
    }
    ctx->pc = 0x20B5C8u;
    // 0x20b5c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20b5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20b5cc: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x20b5ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x20b5d0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B5D0u;
    SET_GPR_U32(ctx, 31, 0x20B5D8u);
    ctx->pc = 0x20B5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B5D0u;
    // 0x20b5d4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B5D0u, 0x20B5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B5D8u;
label_20b5d8:
    // 0x20b5d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b5d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b5dc: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B5DCu;
    SET_GPR_U32(ctx, 31, 0x20B5E4u);
    ctx->pc = 0x20B5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B5DCu;
    // 0x20b5e0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B5DCu, 0x20B5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B5E4u;
label_20b5e4:
    // 0x20b5e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b5e8: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B5E8u;
    SET_GPR_U32(ctx, 31, 0x20B5F0u);
    ctx->pc = 0x20B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B5E8u;
    // 0x20b5ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B5E8u, 0x20B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B5F0u;
label_20b5f0:
    // 0x20b5f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b5f4: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B5F4u;
    SET_GPR_U32(ctx, 31, 0x20B5FCu);
    ctx->pc = 0x20B5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B5F4u;
    // 0x20b5f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B5F4u, 0x20B5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B5FCu;
label_20b5fc:
    // 0x20b5fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b600: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B600u;
    SET_GPR_U32(ctx, 31, 0x20B608u);
    ctx->pc = 0x20B604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B600u;
    // 0x20b604: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B600u, 0x20B608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B608u;
label_20b608:
    // 0x20b608: 0x1000027c  b           . + 4 + (0x27C << 2)
    ctx->pc = 0x20B608u;
    {
        const bool branch_taken_0x20b608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B608u;
        // 0x20b60c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b608) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20B610u;
label_20b610:
    // 0x20b610: 0x0  nop
    ctx->pc = 0x20b610u;
    // NOP
    // 0x20b614: 0x0  nop
    ctx->pc = 0x20b614u;
    // NOP
    // 0x20b618: 0x46150743  div.s       $f29, $f0, $f21
    ctx->pc = 0x20b618u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[29] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[29] = ctx->f[0] / ctx->f[21];
    // 0x20b61c: 0x1000023d  b           . + 4 + (0x23D << 2)
    ctx->pc = 0x20B61Cu;
    {
        const bool branch_taken_0x20b61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B61Cu;
        // 0x20b620: 0x461db002  mul.s       $f0, $f22, $f29 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[29]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b61c) {
            ctx->pc = 0x20BF14u;
            goto label_20bf14;
        }
    }
    ctx->pc = 0x20B624u;
label_20b624:
    // 0x20b624: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B624u;
    SET_GPR_U32(ctx, 31, 0x20B62Cu);
    ctx->pc = 0x20B628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B624u;
    // 0x20b628: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B624u, 0x20B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B62Cu;
label_20b62c:
    // 0x20b62c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b630: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x20B630u;
    SET_GPR_U32(ctx, 31, 0x20B638u);
    ctx->pc = 0x20B634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B630u;
    // 0x20b634: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x20B630u, 0x20B638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B638u;
label_20b638:
    // 0x20b638: 0x44200b2  bltzl       $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x20B638u;
    {
        const bool branch_taken_0x20b638 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b638) {
            ctx->pc = 0x20B63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B638u;
            // 0x20b63c: 0x4600b507  neg.s       $f20, $f22 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B904u;
            goto label_20b904;
        }
    }
    ctx->pc = 0x20B640u;
    // 0x20b640: 0x4614c836  c.le.s      $f25, $f20
    ctx->pc = 0x20b640u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b644: 0x0  nop
    ctx->pc = 0x20b644u;
    // NOP
    // 0x20b648: 0x4502003f  bc1fl       . + 4 + (0x3F << 2)
    ctx->pc = 0x20B648u;
    {
        const bool branch_taken_0x20b648 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b648) {
            ctx->pc = 0x20B64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B648u;
            // 0x20b64c: 0x4616dd00  add.s       $f20, $f27, $f22 (Delay Slot)
            ctx->f[20] = FPU_ADD_S(ctx->f[27], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B748u;
            goto label_20b748;
        }
    }
    ctx->pc = 0x20B650u;
    // 0x20b650: 0x4618dd00  add.s       $f20, $f27, $f24
    ctx->pc = 0x20b650u;
    ctx->f[20] = FPU_ADD_S(ctx->f[27], ctx->f[24]);
    // 0x20b654: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20b654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20b658: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x20b658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x20b65c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B65Cu;
    SET_GPR_U32(ctx, 31, 0x20B664u);
    ctx->pc = 0x20B660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B65Cu;
    // 0x20b660: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B65Cu, 0x20B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B664u;
label_20b664:
    // 0x20b664: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b668: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x20B668u;
    SET_GPR_U32(ctx, 31, 0x20B670u);
    ctx->pc = 0x20B66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B668u;
    // 0x20b66c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x20B668u, 0x20B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B670u;
label_20b670:
    // 0x20b670: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20B670u;
    {
        const bool branch_taken_0x20b670 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B670u;
        // 0x20b674: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b670) {
            ctx->pc = 0x20B6B8u;
            goto label_20b6b8;
        }
    }
    ctx->pc = 0x20B678u;
    // 0x20b678: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B678u;
    SET_GPR_U32(ctx, 31, 0x20B680u);
    ctx->pc = 0x20B67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B678u;
    // 0x20b67c: 0x4600f646  mov.s       $f25, $f30 (Delay Slot)
    ctx->f[25] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B678u, 0x20B680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B680u;
label_20b680:
    // 0x20b680: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b684: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B684u;
    SET_GPR_U32(ctx, 31, 0x20B68Cu);
    ctx->pc = 0x20B688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B684u;
    // 0x20b688: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B684u, 0x20B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B68Cu;
label_20b68c:
    // 0x20b68c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b690: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B690u;
    SET_GPR_U32(ctx, 31, 0x20B698u);
    ctx->pc = 0x20B694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B690u;
    // 0x20b694: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B690u, 0x20B698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B698u;
label_20b698:
    // 0x20b698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b69c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B69Cu;
    SET_GPR_U32(ctx, 31, 0x20B6A4u);
    ctx->pc = 0x20B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B69Cu;
    // 0x20b6a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B69Cu, 0x20B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B6A4u;
label_20b6a4:
    // 0x20b6a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b6a8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B6A8u;
    SET_GPR_U32(ctx, 31, 0x20B6B0u);
    ctx->pc = 0x20B6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B6A8u;
    // 0x20b6ac: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B6A8u, 0x20B6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B6B0u;
label_20b6b0:
    // 0x20b6b0: 0x10000252  b           . + 4 + (0x252 << 2)
    ctx->pc = 0x20B6B0u;
    {
        const bool branch_taken_0x20b6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6B0u;
        // 0x20b6b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6b0) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20B6B8u;
label_20b6b8:
    // 0x20b6b8: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x20b6b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x20b6bc: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x20b6bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b6c0: 0x0  nop
    ctx->pc = 0x20b6c0u;
    // NOP
    // 0x20b6c4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x20B6C4u;
    {
        const bool branch_taken_0x20b6c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6C4u;
        // 0x20b6c8: 0x4600ee46  mov.s       $f25, $f29 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[29]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6c4) {
            ctx->pc = 0x20B6F8u;
            goto label_20b6f8;
        }
    }
    ctx->pc = 0x20B6CCu;
    // 0x20b6cc: 0x4617ab00  add.s       $f12, $f21, $f23
    ctx->pc = 0x20b6ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x20b6d0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B6D0u;
    SET_GPR_U32(ctx, 31, 0x20B6D8u);
    ctx->pc = 0x20B6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B6D0u;
    // 0x20b6d4: 0x461c6300  add.s       $f12, $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B6D0u, 0x20B6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B6D8u;
label_20b6d8:
    // 0x20b6d8: 0x4614b300  add.s       $f12, $f22, $f20
    ctx->pc = 0x20b6d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x20b6dc: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B6DCu;
    SET_GPR_U32(ctx, 31, 0x20B6E4u);
    ctx->pc = 0x20B6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B6DCu;
    // 0x20b6e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B6DCu, 0x20B6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B6E4u;
label_20b6e4:
    // 0x20b6e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b6e8: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B6E8u;
    SET_GPR_U32(ctx, 31, 0x20B6F0u);
    ctx->pc = 0x20B6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B6E8u;
    // 0x20b6ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B6E8u, 0x20B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B6F0u;
label_20b6f0:
    // 0x20b6f0: 0x10000242  b           . + 4 + (0x242 << 2)
    ctx->pc = 0x20B6F0u;
    {
        const bool branch_taken_0x20b6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6F0u;
        // 0x20b6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6f0) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20B6F8u;
label_20b6f8:
    // 0x20b6f8: 0x0  nop
    ctx->pc = 0x20b6f8u;
    // NOP
    // 0x20b6fc: 0x0  nop
    ctx->pc = 0x20b6fcu;
    // NOP
    // 0x20b700: 0x46170643  div.s       $f25, $f0, $f23
    ctx->pc = 0x20b700u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[25] = ctx->f[0] / ctx->f[23];
    // 0x20b704: 0x4619a302  mul.s       $f12, $f20, $f25
    ctx->pc = 0x20b704u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x20b708: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B708u;
    SET_GPR_U32(ctx, 31, 0x20B710u);
    ctx->pc = 0x20B70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B708u;
    // 0x20b70c: 0x46156300  add.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B708u, 0x20B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B710u;
label_20b710:
    // 0x20b710: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b714: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B714u;
    SET_GPR_U32(ctx, 31, 0x20B71Cu);
    ctx->pc = 0x20B718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B714u;
    // 0x20b718: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B714u, 0x20B71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B71Cu;
label_20b71c:
    // 0x20b71c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b720: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B720u;
    SET_GPR_U32(ctx, 31, 0x20B728u);
    ctx->pc = 0x20B724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B720u;
    // 0x20b724: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B720u, 0x20B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B728u;
label_20b728:
    // 0x20b728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b72c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B72Cu;
    SET_GPR_U32(ctx, 31, 0x20B734u);
    ctx->pc = 0x20B730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B72Cu;
    // 0x20b730: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B72Cu, 0x20B734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B734u;
label_20b734:
    // 0x20b734: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b738: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B738u;
    SET_GPR_U32(ctx, 31, 0x20B740u);
    ctx->pc = 0x20B73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B738u;
    // 0x20b73c: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B738u, 0x20B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B740u;
label_20b740:
    // 0x20b740: 0x1000022e  b           . + 4 + (0x22E << 2)
    ctx->pc = 0x20B740u;
    {
        const bool branch_taken_0x20b740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B740u;
        // 0x20b744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b740) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20B748u;
label_20b748:
    // 0x20b748: 0x4600a687  neg.s       $f26, $f20
    ctx->pc = 0x20b748u;
    ctx->f[26] = FPU_NEG_S(ctx->f[20]);
    // 0x20b74c: 0x4615d036  c.le.s      $f26, $f21
    ctx->pc = 0x20b74cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[26], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b750: 0x0  nop
    ctx->pc = 0x20b750u;
    // NOP
    // 0x20b754: 0x4502002e  bc1fl       . + 4 + (0x2E << 2)
    ctx->pc = 0x20B754u;
    {
        const bool branch_taken_0x20b754 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b754) {
            ctx->pc = 0x20B758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B754u;
            // 0x20b758: 0x4618dd00  add.s       $f20, $f27, $f24 (Delay Slot)
            ctx->f[20] = FPU_ADD_S(ctx->f[27], ctx->f[24]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B810u;
            goto label_20b810;
        }
    }
    ctx->pc = 0x20B75Cu;
    // 0x20b75c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20b75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20b760: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x20b760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x20b764: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B764u;
    SET_GPR_U32(ctx, 31, 0x20B76Cu);
    ctx->pc = 0x20B768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B764u;
    // 0x20b768: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B764u, 0x20B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B76Cu;
label_20b76c:
    // 0x20b76c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b770: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x20B770u;
    SET_GPR_U32(ctx, 31, 0x20B778u);
    ctx->pc = 0x20B774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B770u;
    // 0x20b774: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x20B770u, 0x20B778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B778u;
label_20b778:
    // 0x20b778: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20B778u;
    {
        const bool branch_taken_0x20b778 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B778u;
        // 0x20b77c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b778) {
            ctx->pc = 0x20B7C0u;
            goto label_20b7c0;
        }
    }
    ctx->pc = 0x20B780u;
    // 0x20b780: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B780u;
    SET_GPR_U32(ctx, 31, 0x20B788u);
    ctx->pc = 0x20B784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B780u;
    // 0x20b784: 0x4600f746  mov.s       $f29, $f30 (Delay Slot)
    ctx->f[29] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B780u, 0x20B788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B788u;
label_20b788:
    // 0x20b788: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b78c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B78Cu;
    SET_GPR_U32(ctx, 31, 0x20B794u);
    ctx->pc = 0x20B790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B78Cu;
    // 0x20b790: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B78Cu, 0x20B794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B794u;
label_20b794:
    // 0x20b794: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b798: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B798u;
    SET_GPR_U32(ctx, 31, 0x20B7A0u);
    ctx->pc = 0x20B79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B798u;
    // 0x20b79c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B798u, 0x20B7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B7A0u;
label_20b7a0:
    // 0x20b7a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b7a4: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B7A4u;
    SET_GPR_U32(ctx, 31, 0x20B7ACu);
    ctx->pc = 0x20B7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B7A4u;
    // 0x20b7a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B7A4u, 0x20B7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B7ACu;
label_20b7ac:
    // 0x20b7ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b7b0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B7B0u;
    SET_GPR_U32(ctx, 31, 0x20B7B8u);
    ctx->pc = 0x20B7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B7B0u;
    // 0x20b7b4: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B7B0u, 0x20B7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B7B8u;
label_20b7b8:
    // 0x20b7b8: 0x10000210  b           . + 4 + (0x210 << 2)
    ctx->pc = 0x20B7B8u;
    {
        const bool branch_taken_0x20b7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7B8u;
        // 0x20b7bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b7b8) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20B7C0u;
label_20b7c0:
    // 0x20b7c0: 0x0  nop
    ctx->pc = 0x20b7c0u;
    // NOP
    // 0x20b7c4: 0x0  nop
    ctx->pc = 0x20b7c4u;
    // NOP
    // 0x20b7c8: 0x4615d743  div.s       $f29, $f26, $f21
    ctx->pc = 0x20b7c8u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[29] = copysignf(INFINITY, ctx->f[26] * 0.0f); } else ctx->f[29] = ctx->f[26] / ctx->f[21];
    // 0x20b7cc: 0x461da302  mul.s       $f12, $f20, $f29
    ctx->pc = 0x20b7ccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[29]);
    // 0x20b7d0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B7D0u;
    SET_GPR_U32(ctx, 31, 0x20B7D8u);
    ctx->pc = 0x20B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B7D0u;
    // 0x20b7d4: 0x46176300  add.s       $f12, $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B7D0u, 0x20B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B7D8u;
label_20b7d8:
    // 0x20b7d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b7d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b7dc: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B7DCu;
    SET_GPR_U32(ctx, 31, 0x20B7E4u);
    ctx->pc = 0x20B7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B7DCu;
    // 0x20b7e0: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B7DCu, 0x20B7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B7E4u;
label_20b7e4:
    // 0x20b7e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b7e8: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B7E8u;
    SET_GPR_U32(ctx, 31, 0x20B7F0u);
    ctx->pc = 0x20B7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B7E8u;
    // 0x20b7ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B7E8u, 0x20B7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B7F0u;
label_20b7f0:
    // 0x20b7f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b7f4: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B7F4u;
    SET_GPR_U32(ctx, 31, 0x20B7FCu);
    ctx->pc = 0x20B7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B7F4u;
    // 0x20b7f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B7F4u, 0x20B7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B7FCu;
label_20b7fc:
    // 0x20b7fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b7fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b800: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B800u;
    SET_GPR_U32(ctx, 31, 0x20B808u);
    ctx->pc = 0x20B804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B800u;
    // 0x20b804: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B800u, 0x20B808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B808u;
label_20b808:
    // 0x20b808: 0x100001fc  b           . + 4 + (0x1FC << 2)
    ctx->pc = 0x20B808u;
    {
        const bool branch_taken_0x20b808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B808u;
        // 0x20b80c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b808) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20B810u;
label_20b810:
    // 0x20b810: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20b810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20b814: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x20b814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x20b818: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B818u;
    SET_GPR_U32(ctx, 31, 0x20B820u);
    ctx->pc = 0x20B81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B818u;
    // 0x20b81c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B818u, 0x20B820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B820u;
label_20b820:
    // 0x20b820: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b824: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x20B824u;
    SET_GPR_U32(ctx, 31, 0x20B82Cu);
    ctx->pc = 0x20B828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B824u;
    // 0x20b828: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x20B824u, 0x20B82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B82Cu;
label_20b82c:
    // 0x20b82c: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20B82Cu;
    {
        const bool branch_taken_0x20b82c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B82Cu;
        // 0x20b830: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b82c) {
            ctx->pc = 0x20B874u;
            goto label_20b874;
        }
    }
    ctx->pc = 0x20B834u;
    // 0x20b834: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B834u;
    SET_GPR_U32(ctx, 31, 0x20B83Cu);
    ctx->pc = 0x20B838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B834u;
    // 0x20b838: 0x4600f646  mov.s       $f25, $f30 (Delay Slot)
    ctx->f[25] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B834u, 0x20B83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B83Cu;
label_20b83c:
    // 0x20b83c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b840: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B840u;
    SET_GPR_U32(ctx, 31, 0x20B848u);
    ctx->pc = 0x20B844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B840u;
    // 0x20b844: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B840u, 0x20B848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B848u;
label_20b848:
    // 0x20b848: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b84c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B84Cu;
    SET_GPR_U32(ctx, 31, 0x20B854u);
    ctx->pc = 0x20B850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B84Cu;
    // 0x20b850: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B84Cu, 0x20B854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B854u;
label_20b854:
    // 0x20b854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b858: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B858u;
    SET_GPR_U32(ctx, 31, 0x20B860u);
    ctx->pc = 0x20B85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B858u;
    // 0x20b85c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B858u, 0x20B860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B860u;
label_20b860:
    // 0x20b860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b864: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B864u;
    SET_GPR_U32(ctx, 31, 0x20B86Cu);
    ctx->pc = 0x20B868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B864u;
    // 0x20b868: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B864u, 0x20B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B86Cu;
label_20b86c:
    // 0x20b86c: 0x100001e3  b           . + 4 + (0x1E3 << 2)
    ctx->pc = 0x20B86Cu;
    {
        const bool branch_taken_0x20b86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B86Cu;
        // 0x20b870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b86c) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20B874u;
label_20b874:
    // 0x20b874: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x20b874u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x20b878: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x20b878u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b87c: 0x0  nop
    ctx->pc = 0x20b87cu;
    // NOP
    // 0x20b880: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x20B880u;
    {
        const bool branch_taken_0x20b880 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B880u;
        // 0x20b884: 0x4600ee46  mov.s       $f25, $f29 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[29]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b880) {
            ctx->pc = 0x20B8B4u;
            goto label_20b8b4;
        }
    }
    ctx->pc = 0x20B888u;
    // 0x20b888: 0x4617ab00  add.s       $f12, $f21, $f23
    ctx->pc = 0x20b888u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x20b88c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B88Cu;
    SET_GPR_U32(ctx, 31, 0x20B894u);
    ctx->pc = 0x20B890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B88Cu;
    // 0x20b890: 0x461c6300  add.s       $f12, $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B88Cu, 0x20B894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B894u;
label_20b894:
    // 0x20b894: 0x4614b300  add.s       $f12, $f22, $f20
    ctx->pc = 0x20b894u;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x20b898: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B898u;
    SET_GPR_U32(ctx, 31, 0x20B8A0u);
    ctx->pc = 0x20B89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B898u;
    // 0x20b89c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B898u, 0x20B8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B8A0u;
label_20b8a0:
    // 0x20b8a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b8a4: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B8A4u;
    SET_GPR_U32(ctx, 31, 0x20B8ACu);
    ctx->pc = 0x20B8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B8A4u;
    // 0x20b8a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B8A4u, 0x20B8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B8ACu;
label_20b8ac:
    // 0x20b8ac: 0x100001d3  b           . + 4 + (0x1D3 << 2)
    ctx->pc = 0x20B8ACu;
    {
        const bool branch_taken_0x20b8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8ACu;
        // 0x20b8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b8ac) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20B8B4u;
label_20b8b4:
    // 0x20b8b4: 0x0  nop
    ctx->pc = 0x20b8b4u;
    // NOP
    // 0x20b8b8: 0x0  nop
    ctx->pc = 0x20b8b8u;
    // NOP
    // 0x20b8bc: 0x46170643  div.s       $f25, $f0, $f23
    ctx->pc = 0x20b8bcu;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[25] = ctx->f[0] / ctx->f[23];
    // 0x20b8c0: 0x4619a302  mul.s       $f12, $f20, $f25
    ctx->pc = 0x20b8c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x20b8c4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B8C4u;
    SET_GPR_U32(ctx, 31, 0x20B8CCu);
    ctx->pc = 0x20B8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B8C4u;
    // 0x20b8c8: 0x46156300  add.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B8C4u, 0x20B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B8CCu;
label_20b8cc:
    // 0x20b8cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b8ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b8d0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B8D0u;
    SET_GPR_U32(ctx, 31, 0x20B8D8u);
    ctx->pc = 0x20B8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B8D0u;
    // 0x20b8d4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B8D0u, 0x20B8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B8D8u;
label_20b8d8:
    // 0x20b8d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b8dc: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B8DCu;
    SET_GPR_U32(ctx, 31, 0x20B8E4u);
    ctx->pc = 0x20B8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B8DCu;
    // 0x20b8e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B8DCu, 0x20B8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B8E4u;
label_20b8e4:
    // 0x20b8e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b8e8: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B8E8u;
    SET_GPR_U32(ctx, 31, 0x20B8F0u);
    ctx->pc = 0x20B8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B8E8u;
    // 0x20b8ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B8E8u, 0x20B8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B8F0u;
label_20b8f0:
    // 0x20b8f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b8f4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B8F4u;
    SET_GPR_U32(ctx, 31, 0x20B8FCu);
    ctx->pc = 0x20B8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B8F4u;
    // 0x20b8f8: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B8F4u, 0x20B8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B8FCu;
label_20b8fc:
    // 0x20b8fc: 0x100001bf  b           . + 4 + (0x1BF << 2)
    ctx->pc = 0x20B8FCu;
    {
        const bool branch_taken_0x20b8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8FCu;
        // 0x20b900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b8fc) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20B904u;
label_20b904:
    // 0x20b904: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x20b904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b908: 0x0  nop
    ctx->pc = 0x20b908u;
    // NOP
    // 0x20b90c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x20B90Cu;
    {
        const bool branch_taken_0x20b90c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B90Cu;
        // 0x20b910: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b90c) {
            ctx->pc = 0x20B944u;
            goto label_20b944;
        }
    }
    ctx->pc = 0x20B914u;
    // 0x20b914: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B914u;
    SET_GPR_U32(ctx, 31, 0x20B91Cu);
    ctx->pc = 0x20B918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B914u;
    // 0x20b918: 0x4600f646  mov.s       $f25, $f30 (Delay Slot)
    ctx->f[25] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B914u, 0x20B91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B91Cu;
label_20b91c:
    // 0x20b91c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b920: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x20B920u;
    SET_GPR_U32(ctx, 31, 0x20B928u);
    ctx->pc = 0x20B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B920u;
    // 0x20b924: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x20B920u, 0x20B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B928u;
label_20b928:
    // 0x20b928: 0x441010c  bgez        $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x20B928u;
    {
        const bool branch_taken_0x20b928 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B928u;
        // 0x20b92c: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b928) {
            ctx->pc = 0x20BD5Cu;
            goto label_20bd5c;
        }
    }
    ctx->pc = 0x20B930u;
    // 0x20b930: 0x0  nop
    ctx->pc = 0x20b930u;
    // NOP
    // 0x20b934: 0x0  nop
    ctx->pc = 0x20b934u;
    // NOP
    // 0x20b938: 0x4615a743  div.s       $f29, $f20, $f21
    ctx->pc = 0x20b938u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[29] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[29] = ctx->f[20] / ctx->f[21];
    // 0x20b93c: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x20B93Cu;
    {
        const bool branch_taken_0x20b93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B93Cu;
        // 0x20b940: 0x461db002  mul.s       $f0, $f22, $f29 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[29]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b93c) {
            ctx->pc = 0x20BF14u;
            goto label_20bf14;
        }
    }
    ctx->pc = 0x20B944u;
label_20b944:
    // 0x20b944: 0x4618dd00  add.s       $f20, $f27, $f24
    ctx->pc = 0x20b944u;
    ctx->f[20] = FPU_ADD_S(ctx->f[27], ctx->f[24]);
    // 0x20b948: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20b948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20b94c: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x20b94cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x20b950: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B950u;
    SET_GPR_U32(ctx, 31, 0x20B958u);
    ctx->pc = 0x20B954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B950u;
    // 0x20b954: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B950u, 0x20B958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B958u;
label_20b958:
    // 0x20b958: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b95c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x20B95Cu;
    SET_GPR_U32(ctx, 31, 0x20B964u);
    ctx->pc = 0x20B960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B95Cu;
    // 0x20b960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x20B95Cu, 0x20B964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B964u;
label_20b964:
    // 0x20b964: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20B964u;
    {
        const bool branch_taken_0x20b964 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B964u;
        // 0x20b968: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b964) {
            ctx->pc = 0x20B9ACu;
            goto label_20b9ac;
        }
    }
    ctx->pc = 0x20B96Cu;
    // 0x20b96c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B96Cu;
    SET_GPR_U32(ctx, 31, 0x20B974u);
    ctx->pc = 0x20B970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B96Cu;
    // 0x20b970: 0x4600f646  mov.s       $f25, $f30 (Delay Slot)
    ctx->f[25] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B96Cu, 0x20B974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B974u;
label_20b974:
    // 0x20b974: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b978: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B978u;
    SET_GPR_U32(ctx, 31, 0x20B980u);
    ctx->pc = 0x20B97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B978u;
    // 0x20b97c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B978u, 0x20B980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B980u;
label_20b980:
    // 0x20b980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b984: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B984u;
    SET_GPR_U32(ctx, 31, 0x20B98Cu);
    ctx->pc = 0x20B988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B984u;
    // 0x20b988: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B984u, 0x20B98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B98Cu;
label_20b98c:
    // 0x20b98c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b990: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B990u;
    SET_GPR_U32(ctx, 31, 0x20B998u);
    ctx->pc = 0x20B994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B990u;
    // 0x20b994: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B990u, 0x20B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B998u;
label_20b998:
    // 0x20b998: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b99c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B99Cu;
    SET_GPR_U32(ctx, 31, 0x20B9A4u);
    ctx->pc = 0x20B9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B99Cu;
    // 0x20b9a0: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B99Cu, 0x20B9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B9A4u;
label_20b9a4:
    // 0x20b9a4: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x20B9A4u;
    {
        const bool branch_taken_0x20b9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9A4u;
        // 0x20b9a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b9a4) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20B9ACu;
label_20b9ac:
    // 0x20b9ac: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x20b9acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x20b9b0: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x20b9b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b9b4: 0x0  nop
    ctx->pc = 0x20b9b4u;
    // NOP
    // 0x20b9b8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x20B9B8u;
    {
        const bool branch_taken_0x20b9b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9B8u;
        // 0x20b9bc: 0x4600ee46  mov.s       $f25, $f29 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[29]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b9b8) {
            ctx->pc = 0x20B9ECu;
            goto label_20b9ec;
        }
    }
    ctx->pc = 0x20B9C0u;
    // 0x20b9c0: 0x4617ab00  add.s       $f12, $f21, $f23
    ctx->pc = 0x20b9c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x20b9c4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B9C4u;
    SET_GPR_U32(ctx, 31, 0x20B9CCu);
    ctx->pc = 0x20B9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B9C4u;
    // 0x20b9c8: 0x461c6300  add.s       $f12, $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B9C4u, 0x20B9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B9CCu;
label_20b9cc:
    // 0x20b9cc: 0x4614b300  add.s       $f12, $f22, $f20
    ctx->pc = 0x20b9ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x20b9d0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B9D0u;
    SET_GPR_U32(ctx, 31, 0x20B9D8u);
    ctx->pc = 0x20B9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B9D0u;
    // 0x20b9d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B9D0u, 0x20B9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B9D8u;
label_20b9d8:
    // 0x20b9d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b9dc: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20B9DCu;
    SET_GPR_U32(ctx, 31, 0x20B9E4u);
    ctx->pc = 0x20B9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B9DCu;
    // 0x20b9e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20B9DCu, 0x20B9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B9E4u;
label_20b9e4:
    // 0x20b9e4: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x20B9E4u;
    {
        const bool branch_taken_0x20b9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9E4u;
        // 0x20b9e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b9e4) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20B9ECu;
label_20b9ec:
    // 0x20b9ec: 0x0  nop
    ctx->pc = 0x20b9ecu;
    // NOP
    // 0x20b9f0: 0x0  nop
    ctx->pc = 0x20b9f0u;
    // NOP
    // 0x20b9f4: 0x46170643  div.s       $f25, $f0, $f23
    ctx->pc = 0x20b9f4u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[25] = ctx->f[0] / ctx->f[23];
    // 0x20b9f8: 0x4619a302  mul.s       $f12, $f20, $f25
    ctx->pc = 0x20b9f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x20b9fc: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20B9FCu;
    SET_GPR_U32(ctx, 31, 0x20BA04u);
    ctx->pc = 0x20BA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B9FCu;
    // 0x20ba00: 0x46156300  add.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20B9FCu, 0x20BA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA04u;
label_20ba04:
    // 0x20ba04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20ba04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ba08: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BA08u;
    SET_GPR_U32(ctx, 31, 0x20BA10u);
    ctx->pc = 0x20BA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA08u;
    // 0x20ba0c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BA08u, 0x20BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA10u;
label_20ba10:
    // 0x20ba10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20ba10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ba14: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BA14u;
    SET_GPR_U32(ctx, 31, 0x20BA1Cu);
    ctx->pc = 0x20BA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA14u;
    // 0x20ba18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BA14u, 0x20BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA1Cu;
label_20ba1c:
    // 0x20ba1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ba1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ba20: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BA20u;
    SET_GPR_U32(ctx, 31, 0x20BA28u);
    ctx->pc = 0x20BA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA20u;
    // 0x20ba24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BA20u, 0x20BA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA28u;
label_20ba28:
    // 0x20ba28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20ba28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ba2c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BA2Cu;
    SET_GPR_U32(ctx, 31, 0x20BA34u);
    ctx->pc = 0x20BA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA2Cu;
    // 0x20ba30: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BA2Cu, 0x20BA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA34u;
label_20ba34:
    // 0x20ba34: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x20BA34u;
    {
        const bool branch_taken_0x20ba34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA34u;
        // 0x20ba38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba34) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20BA3Cu;
label_20ba3c:
    // 0x20ba3c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BA3Cu;
    SET_GPR_U32(ctx, 31, 0x20BA44u);
    ctx->pc = 0x20BA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA3Cu;
    // 0x20ba40: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BA3Cu, 0x20BA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA44u;
label_20ba44:
    // 0x20ba44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20ba44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ba48: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x20BA48u;
    SET_GPR_U32(ctx, 31, 0x20BA50u);
    ctx->pc = 0x20BA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA48u;
    // 0x20ba4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x20BA48u, 0x20BA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA50u;
label_20ba50:
    // 0x20ba50: 0x440006b  bltz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x20BA50u;
    {
        const bool branch_taken_0x20ba50 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20ba50) {
            ctx->pc = 0x20BC00u;
            goto label_20bc00;
        }
    }
    ctx->pc = 0x20BA58u;
    // 0x20ba58: 0x4614c836  c.le.s      $f25, $f20
    ctx->pc = 0x20ba58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ba5c: 0x0  nop
    ctx->pc = 0x20ba5cu;
    // NOP
    // 0x20ba60: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x20BA60u;
    {
        const bool branch_taken_0x20ba60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA60u;
        // 0x20ba64: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba60) {
            ctx->pc = 0x20BAD8u;
            goto label_20bad8;
        }
    }
    ctx->pc = 0x20BA68u;
    // 0x20ba68: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BA68u;
    SET_GPR_U32(ctx, 31, 0x20BA70u);
    ctx->pc = 0x20BA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA68u;
    // 0x20ba6c: 0x4600f746  mov.s       $f29, $f30 (Delay Slot)
    ctx->f[29] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BA68u, 0x20BA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA70u;
label_20ba70:
    // 0x20ba70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20ba70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ba74: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x20BA74u;
    SET_GPR_U32(ctx, 31, 0x20BA7Cu);
    ctx->pc = 0x20BA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA74u;
    // 0x20ba78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x20BA74u, 0x20BA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA7Cu;
label_20ba7c:
    // 0x20ba7c: 0x441008a  bgez        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x20BA7Cu;
    {
        const bool branch_taken_0x20ba7c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA7Cu;
        // 0x20ba80: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba7c) {
            ctx->pc = 0x20BCA8u;
            goto label_20bca8;
        }
    }
    ctx->pc = 0x20BA84u;
    // 0x20ba84: 0x461ab836  c.le.s      $f23, $f26
    ctx->pc = 0x20ba84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ba88: 0x4500009e  bc1f        . + 4 + (0x9E << 2)
    ctx->pc = 0x20BA88u;
    {
        const bool branch_taken_0x20ba88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ba88) {
            ctx->pc = 0x20BD04u;
            goto label_20bd04;
        }
    }
    ctx->pc = 0x20BA90u;
    // 0x20ba90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20ba90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20ba94: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x20ba94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x20ba98: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BA98u;
    SET_GPR_U32(ctx, 31, 0x20BAA0u);
    ctx->pc = 0x20BA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA98u;
    // 0x20ba9c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BA98u, 0x20BAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BAA0u;
label_20baa0:
    // 0x20baa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20baa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20baa4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BAA4u;
    SET_GPR_U32(ctx, 31, 0x20BAACu);
    ctx->pc = 0x20BAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BAA4u;
    // 0x20baa8: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BAA4u, 0x20BAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BAACu;
label_20baac:
    // 0x20baac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20baacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bab0: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BAB0u;
    SET_GPR_U32(ctx, 31, 0x20BAB8u);
    ctx->pc = 0x20BAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BAB0u;
    // 0x20bab4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BAB0u, 0x20BAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BAB8u;
label_20bab8:
    // 0x20bab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20babc: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BABCu;
    SET_GPR_U32(ctx, 31, 0x20BAC4u);
    ctx->pc = 0x20BAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BABCu;
    // 0x20bac0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BABCu, 0x20BAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BAC4u;
label_20bac4:
    // 0x20bac4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20bac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bac8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BAC8u;
    SET_GPR_U32(ctx, 31, 0x20BAD0u);
    ctx->pc = 0x20BACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BAC8u;
    // 0x20bacc: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BAC8u, 0x20BAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BAD0u;
label_20bad0:
    // 0x20bad0: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x20BAD0u;
    {
        const bool branch_taken_0x20bad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BAD0u;
        // 0x20bad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bad0) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20BAD8u;
label_20bad8:
    // 0x20bad8: 0x4616dd00  add.s       $f20, $f27, $f22
    ctx->pc = 0x20bad8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[27], ctx->f[22]);
    // 0x20badc: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BADCu;
    SET_GPR_U32(ctx, 31, 0x20BAE4u);
    ctx->pc = 0x20BAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BADCu;
    // 0x20bae0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BADCu, 0x20BAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BAE4u;
label_20bae4:
    // 0x20bae4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20bae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bae8: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x20BAE8u;
    SET_GPR_U32(ctx, 31, 0x20BAF0u);
    ctx->pc = 0x20BAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BAE8u;
    // 0x20baec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x20BAE8u, 0x20BAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BAF0u;
label_20baf0:
    // 0x20baf0: 0x4410027  bgez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x20BAF0u;
    {
        const bool branch_taken_0x20baf0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BAF0u;
        // 0x20baf4: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20baf0) {
            ctx->pc = 0x20BB90u;
            goto label_20bb90;
        }
    }
    ctx->pc = 0x20BAF8u;
    // 0x20baf8: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x20baf8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x20bafc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20bafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20bb00: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x20bb00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x20bb04: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x20bb04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bb08: 0x0  nop
    ctx->pc = 0x20bb08u;
    // NOP
    // 0x20bb0c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x20BB0Cu;
    {
        const bool branch_taken_0x20bb0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB0Cu;
        // 0x20bb10: 0x4600cf46  mov.s       $f29, $f25 (Delay Slot)
        ctx->f[29] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb0c) {
            ctx->pc = 0x20BB40u;
            goto label_20bb40;
        }
    }
    ctx->pc = 0x20BB14u;
    // 0x20bb14: 0x4617ab00  add.s       $f12, $f21, $f23
    ctx->pc = 0x20bb14u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x20bb18: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BB18u;
    SET_GPR_U32(ctx, 31, 0x20BB20u);
    ctx->pc = 0x20BB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BB18u;
    // 0x20bb1c: 0x461c6300  add.s       $f12, $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BB18u, 0x20BB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB20u;
label_20bb20:
    // 0x20bb20: 0x4614c300  add.s       $f12, $f24, $f20
    ctx->pc = 0x20bb20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[24], ctx->f[20]);
    // 0x20bb24: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BB24u;
    SET_GPR_U32(ctx, 31, 0x20BB2Cu);
    ctx->pc = 0x20BB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BB24u;
    // 0x20bb28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BB24u, 0x20BB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB2Cu;
label_20bb2c:
    // 0x20bb2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20bb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bb30: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BB30u;
    SET_GPR_U32(ctx, 31, 0x20BB38u);
    ctx->pc = 0x20BB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BB30u;
    // 0x20bb34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BB30u, 0x20BB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB38u;
label_20bb38:
    // 0x20bb38: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x20BB38u;
    {
        const bool branch_taken_0x20bb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB38u;
        // 0x20bb3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb38) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20BB40u;
label_20bb40:
    // 0x20bb40: 0x0  nop
    ctx->pc = 0x20bb40u;
    // NOP
    // 0x20bb44: 0x0  nop
    ctx->pc = 0x20bb44u;
    // NOP
    // 0x20bb48: 0x46150743  div.s       $f29, $f0, $f21
    ctx->pc = 0x20bb48u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[29] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[29] = ctx->f[0] / ctx->f[21];
    // 0x20bb4c: 0x461da302  mul.s       $f12, $f20, $f29
    ctx->pc = 0x20bb4cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[29]);
    // 0x20bb50: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BB50u;
    SET_GPR_U32(ctx, 31, 0x20BB58u);
    ctx->pc = 0x20BB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BB50u;
    // 0x20bb54: 0x46176300  add.s       $f12, $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BB50u, 0x20BB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB58u;
label_20bb58:
    // 0x20bb58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20bb58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bb5c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BB5Cu;
    SET_GPR_U32(ctx, 31, 0x20BB64u);
    ctx->pc = 0x20BB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BB5Cu;
    // 0x20bb60: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BB5Cu, 0x20BB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB64u;
label_20bb64:
    // 0x20bb64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20bb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bb68: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BB68u;
    SET_GPR_U32(ctx, 31, 0x20BB70u);
    ctx->pc = 0x20BB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BB68u;
    // 0x20bb6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BB68u, 0x20BB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB70u;
label_20bb70:
    // 0x20bb70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bb74: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BB74u;
    SET_GPR_U32(ctx, 31, 0x20BB7Cu);
    ctx->pc = 0x20BB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BB74u;
    // 0x20bb78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BB74u, 0x20BB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB7Cu;
label_20bb7c:
    // 0x20bb7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20bb7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bb80: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BB80u;
    SET_GPR_U32(ctx, 31, 0x20BB88u);
    ctx->pc = 0x20BB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BB80u;
    // 0x20bb84: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BB80u, 0x20BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB88u;
label_20bb88:
    // 0x20bb88: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x20BB88u;
    {
        const bool branch_taken_0x20bb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB88u;
        // 0x20bb8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb88) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20BB90u;
label_20bb90:
    // 0x20bb90: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BB90u;
    SET_GPR_U32(ctx, 31, 0x20BB98u);
    ctx->pc = 0x20BB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BB90u;
    // 0x20bb94: 0x4600f746  mov.s       $f29, $f30 (Delay Slot)
    ctx->f[29] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BB90u, 0x20BB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB98u;
label_20bb98:
    // 0x20bb98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20bb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bb9c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x20BB9Cu;
    SET_GPR_U32(ctx, 31, 0x20BBA4u);
    ctx->pc = 0x20BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BB9Cu;
    // 0x20bba0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x20BB9Cu, 0x20BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BBA4u;
label_20bba4:
    // 0x20bba4: 0x4410040  bgez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x20BBA4u;
    {
        const bool branch_taken_0x20bba4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBA4u;
        // 0x20bba8: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bba4) {
            ctx->pc = 0x20BCA8u;
            goto label_20bca8;
        }
    }
    ctx->pc = 0x20BBACu;
    // 0x20bbac: 0x461ab836  c.le.s      $f23, $f26
    ctx->pc = 0x20bbacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bbb0: 0x45000054  bc1f        . + 4 + (0x54 << 2)
    ctx->pc = 0x20BBB0u;
    {
        const bool branch_taken_0x20bbb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bbb0) {
            ctx->pc = 0x20BD04u;
            goto label_20bd04;
        }
    }
    ctx->pc = 0x20BBB8u;
    // 0x20bbb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20bbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20bbbc: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x20bbbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x20bbc0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BBC0u;
    SET_GPR_U32(ctx, 31, 0x20BBC8u);
    ctx->pc = 0x20BBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BBC0u;
    // 0x20bbc4: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BBC0u, 0x20BBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BBC8u;
label_20bbc8:
    // 0x20bbc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20bbc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bbcc: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BBCCu;
    SET_GPR_U32(ctx, 31, 0x20BBD4u);
    ctx->pc = 0x20BBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BBCCu;
    // 0x20bbd0: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BBCCu, 0x20BBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BBD4u;
label_20bbd4:
    // 0x20bbd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20bbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bbd8: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BBD8u;
    SET_GPR_U32(ctx, 31, 0x20BBE0u);
    ctx->pc = 0x20BBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BBD8u;
    // 0x20bbdc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BBD8u, 0x20BBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BBE0u;
label_20bbe0:
    // 0x20bbe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bbe4: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BBE4u;
    SET_GPR_U32(ctx, 31, 0x20BBECu);
    ctx->pc = 0x20BBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BBE4u;
    // 0x20bbe8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BBE4u, 0x20BBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BBECu;
label_20bbec:
    // 0x20bbec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20bbecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bbf0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BBF0u;
    SET_GPR_U32(ctx, 31, 0x20BBF8u);
    ctx->pc = 0x20BBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BBF0u;
    // 0x20bbf4: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BBF0u, 0x20BBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BBF8u;
label_20bbf8:
    // 0x20bbf8: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x20BBF8u;
    {
        const bool branch_taken_0x20bbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBF8u;
        // 0x20bbfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bbf8) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20BC00u;
label_20bc00:
    // 0x20bc00: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BC00u;
    SET_GPR_U32(ctx, 31, 0x20BC08u);
    ctx->pc = 0x20BC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC00u;
    // 0x20bc04: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BC00u, 0x20BC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC08u;
label_20bc08:
    // 0x20bc08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20bc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bc0c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x20BC0Cu;
    SET_GPR_U32(ctx, 31, 0x20BC14u);
    ctx->pc = 0x20BC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC0Cu;
    // 0x20bc10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x20BC0Cu, 0x20BC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC14u;
label_20bc14:
    // 0x20bc14: 0x441001d  bgez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20BC14u;
    {
        const bool branch_taken_0x20bc14 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC14u;
        // 0x20bc18: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc14) {
            ctx->pc = 0x20BC8Cu;
            goto label_20bc8c;
        }
    }
    ctx->pc = 0x20BC1Cu;
    // 0x20bc1c: 0x4600b007  neg.s       $f0, $f22
    ctx->pc = 0x20bc1cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[22]);
    // 0x20bc20: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x20bc20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bc24: 0x0  nop
    ctx->pc = 0x20bc24u;
    // NOP
    // 0x20bc28: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x20BC28u;
    {
        const bool branch_taken_0x20bc28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC28u;
        // 0x20bc2c: 0x4600f646  mov.s       $f25, $f30 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc28) {
            ctx->pc = 0x20BC78u;
            goto label_20bc78;
        }
    }
    ctx->pc = 0x20BC30u;
    // 0x20bc30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20bc30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20bc34: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x20bc34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x20bc38: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BC38u;
    SET_GPR_U32(ctx, 31, 0x20BC40u);
    ctx->pc = 0x20BC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC38u;
    // 0x20bc3c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BC38u, 0x20BC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC40u;
label_20bc40:
    // 0x20bc40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20bc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bc44: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BC44u;
    SET_GPR_U32(ctx, 31, 0x20BC4Cu);
    ctx->pc = 0x20BC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC44u;
    // 0x20bc48: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BC44u, 0x20BC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC4Cu;
label_20bc4c:
    // 0x20bc4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20bc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bc50: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BC50u;
    SET_GPR_U32(ctx, 31, 0x20BC58u);
    ctx->pc = 0x20BC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC50u;
    // 0x20bc54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BC50u, 0x20BC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC58u;
label_20bc58:
    // 0x20bc58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bc5c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BC5Cu;
    SET_GPR_U32(ctx, 31, 0x20BC64u);
    ctx->pc = 0x20BC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC5Cu;
    // 0x20bc60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BC5Cu, 0x20BC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC64u;
label_20bc64:
    // 0x20bc64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20bc64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bc68: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BC68u;
    SET_GPR_U32(ctx, 31, 0x20BC70u);
    ctx->pc = 0x20BC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC68u;
    // 0x20bc6c: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BC68u, 0x20BC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC70u;
label_20bc70:
    // 0x20bc70: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x20BC70u;
    {
        const bool branch_taken_0x20bc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC70u;
        // 0x20bc74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc70) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20BC78u;
label_20bc78:
    // 0x20bc78: 0x0  nop
    ctx->pc = 0x20bc78u;
    // NOP
    // 0x20bc7c: 0x0  nop
    ctx->pc = 0x20bc7cu;
    // NOP
    // 0x20bc80: 0x46150743  div.s       $f29, $f0, $f21
    ctx->pc = 0x20bc80u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[29] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[29] = ctx->f[0] / ctx->f[21];
    // 0x20bc84: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x20BC84u;
    {
        const bool branch_taken_0x20bc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC84u;
        // 0x20bc88: 0x461db002  mul.s       $f0, $f22, $f29 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[29]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc84) {
            ctx->pc = 0x20BF14u;
            goto label_20bf14;
        }
    }
    ctx->pc = 0x20BC8Cu;
label_20bc8c:
    // 0x20bc8c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BC8Cu;
    SET_GPR_U32(ctx, 31, 0x20BC94u);
    ctx->pc = 0x20BC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC8Cu;
    // 0x20bc90: 0x4600f746  mov.s       $f29, $f30 (Delay Slot)
    ctx->f[29] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BC8Cu, 0x20BC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC94u;
label_20bc94:
    // 0x20bc94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20bc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bc98: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x20BC98u;
    SET_GPR_U32(ctx, 31, 0x20BCA0u);
    ctx->pc = 0x20BC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC98u;
    // 0x20bc9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x20BC98u, 0x20BCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCA0u;
label_20bca0:
    // 0x20bca0: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20BCA0u;
    {
        const bool branch_taken_0x20bca0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCA0u;
        // 0x20bca4: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bca0) {
            ctx->pc = 0x20BCB0u;
            goto label_20bcb0;
        }
    }
    ctx->pc = 0x20BCA8u;
label_20bca8:
    // 0x20bca8: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x20BCA8u;
    {
        const bool branch_taken_0x20bca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCA8u;
        // 0x20bcac: 0x4600ee46  mov.s       $f25, $f29 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[29]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bca8) {
            ctx->pc = 0x20C010u;
            goto label_20c010;
        }
    }
    ctx->pc = 0x20BCB0u;
label_20bcb0:
    // 0x20bcb0: 0x461ab836  c.le.s      $f23, $f26
    ctx->pc = 0x20bcb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bcb4: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x20BCB4u;
    {
        const bool branch_taken_0x20bcb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bcb4) {
            ctx->pc = 0x20BD04u;
            goto label_20bd04;
        }
    }
    ctx->pc = 0x20BCBCu;
    // 0x20bcbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20bcbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20bcc0: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x20bcc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x20bcc4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BCC4u;
    SET_GPR_U32(ctx, 31, 0x20BCCCu);
    ctx->pc = 0x20BCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BCC4u;
    // 0x20bcc8: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BCC4u, 0x20BCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCCCu;
label_20bccc:
    // 0x20bccc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20bcccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bcd0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BCD0u;
    SET_GPR_U32(ctx, 31, 0x20BCD8u);
    ctx->pc = 0x20BCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BCD0u;
    // 0x20bcd4: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BCD0u, 0x20BCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCD8u;
label_20bcd8:
    // 0x20bcd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20bcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bcdc: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BCDCu;
    SET_GPR_U32(ctx, 31, 0x20BCE4u);
    ctx->pc = 0x20BCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BCDCu;
    // 0x20bce0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BCDCu, 0x20BCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCE4u;
label_20bce4:
    // 0x20bce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bce8: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BCE8u;
    SET_GPR_U32(ctx, 31, 0x20BCF0u);
    ctx->pc = 0x20BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BCE8u;
    // 0x20bcec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BCE8u, 0x20BCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCF0u;
label_20bcf0:
    // 0x20bcf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20bcf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bcf4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BCF4u;
    SET_GPR_U32(ctx, 31, 0x20BCFCu);
    ctx->pc = 0x20BCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BCF4u;
    // 0x20bcf8: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BCF4u, 0x20BCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCFCu;
label_20bcfc:
    // 0x20bcfc: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x20BCFCu;
    {
        const bool branch_taken_0x20bcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCFCu;
        // 0x20bd00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bcfc) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20BD04u;
label_20bd04:
    // 0x20bd04: 0x0  nop
    ctx->pc = 0x20bd04u;
    // NOP
    // 0x20bd08: 0x0  nop
    ctx->pc = 0x20bd08u;
    // NOP
    // 0x20bd0c: 0x4617d643  div.s       $f25, $f26, $f23
    ctx->pc = 0x20bd0cu;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[26] * 0.0f); } else ctx->f[25] = ctx->f[26] / ctx->f[23];
    // 0x20bd10: 0x4619c002  mul.s       $f0, $f24, $f25
    ctx->pc = 0x20bd10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[25]);
    // 0x20bd14: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x20BD14u;
    {
        const bool branch_taken_0x20bd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD14u;
        // 0x20bd18: 0x461c0300  add.s       $f12, $f0, $f28 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd14) {
            ctx->pc = 0x20C010u;
            goto label_20c010;
        }
    }
    ctx->pc = 0x20BD1Cu;
label_20bd1c:
    // 0x20bd1c: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x20bd1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x20bd20: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BD20u;
    SET_GPR_U32(ctx, 31, 0x20BD28u);
    ctx->pc = 0x20BD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD20u;
    // 0x20bd24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BD20u, 0x20BD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD28u;
label_20bd28:
    // 0x20bd28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20bd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bd2c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x20BD2Cu;
    SET_GPR_U32(ctx, 31, 0x20BD34u);
    ctx->pc = 0x20BD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD2Cu;
    // 0x20bd30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x20BD2Cu, 0x20BD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD34u;
label_20bd34:
    // 0x20bd34: 0x58400055  blezl       $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x20BD34u;
    {
        const bool branch_taken_0x20bd34 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x20bd34) {
            ctx->pc = 0x20BD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BD34u;
            // 0x20bd38: 0x4600b507  neg.s       $f20, $f22 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BE8Cu;
            goto label_20be8c;
        }
    }
    ctx->pc = 0x20BD3Cu;
    // 0x20bd3c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BD3Cu;
    SET_GPR_U32(ctx, 31, 0x20BD44u);
    ctx->pc = 0x20BD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD3Cu;
    // 0x20bd40: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BD3Cu, 0x20BD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD44u;
label_20bd44:
    // 0x20bd44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20bd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bd48: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x20BD48u;
    SET_GPR_U32(ctx, 31, 0x20BD50u);
    ctx->pc = 0x20BD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD48u;
    // 0x20bd4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x20BD48u, 0x20BD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD50u;
label_20bd50:
    // 0x20bd50: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20BD50u;
    {
        const bool branch_taken_0x20bd50 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD50u;
        // 0x20bd54: 0x4600f646  mov.s       $f25, $f30 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd50) {
            ctx->pc = 0x20BD64u;
            goto label_20bd64;
        }
    }
    ctx->pc = 0x20BD58u;
    // 0x20bd58: 0x4600e306  mov.s       $f12, $f28
    ctx->pc = 0x20bd58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
label_20bd5c:
    // 0x20bd5c: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x20BD5Cu;
    {
        const bool branch_taken_0x20bd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD5Cu;
        // 0x20bd60: 0x4600cf46  mov.s       $f29, $f25 (Delay Slot)
        ctx->f[29] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd5c) {
            ctx->pc = 0x20C010u;
            goto label_20c010;
        }
    }
    ctx->pc = 0x20BD64u;
label_20bd64:
    // 0x20bd64: 0x4600b007  neg.s       $f0, $f22
    ctx->pc = 0x20bd64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[22]);
    // 0x20bd68: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x20bd68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bd6c: 0x0  nop
    ctx->pc = 0x20bd6cu;
    // NOP
    // 0x20bd70: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x20BD70u;
    {
        const bool branch_taken_0x20bd70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD70u;
        // 0x20bd74: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd70) {
            ctx->pc = 0x20BD8Cu;
            goto label_20bd8c;
        }
    }
    ctx->pc = 0x20BD78u;
    // 0x20bd78: 0x0  nop
    ctx->pc = 0x20bd78u;
    // NOP
    // 0x20bd7c: 0x0  nop
    ctx->pc = 0x20bd7cu;
    // NOP
    // 0x20bd80: 0x46150743  div.s       $f29, $f0, $f21
    ctx->pc = 0x20bd80u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[29] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[29] = ctx->f[0] / ctx->f[21];
    // 0x20bd84: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x20BD84u;
    {
        const bool branch_taken_0x20bd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD84u;
        // 0x20bd88: 0x461db002  mul.s       $f0, $f22, $f29 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[29]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd84) {
            ctx->pc = 0x20BF14u;
            goto label_20bf14;
        }
    }
    ctx->pc = 0x20BD8Cu;
label_20bd8c:
    // 0x20bd8c: 0x4616ad00  add.s       $f20, $f21, $f22
    ctx->pc = 0x20bd8cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x20bd90: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x20bd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bd94: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x20bd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20bd98: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x20bd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20bd9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20bd9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20bda0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x20bda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20bda4: 0x4600a147  neg.s       $f5, $f20
    ctx->pc = 0x20bda4u;
    ctx->f[5] = FPU_NEG_S(ctx->f[20]);
    // 0x20bda8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x20bda8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x20bdac: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x20bdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20bdb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20bdb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20bdb4: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x20bdb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x20bdb8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x20bdb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x20bdbc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x20bdbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x20bdc0: 0x4605d836  c.le.s      $f27, $f5
    ctx->pc = 0x20bdc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[27], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bdc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20bdc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20bdc8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x20BDC8u;
    {
        const bool branch_taken_0x20bdc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDC8u;
        // 0x20bdcc: 0x46000607  neg.s       $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bdc8) {
            ctx->pc = 0x20BE04u;
            goto label_20be04;
        }
    }
    ctx->pc = 0x20BDD0u;
    // 0x20bdd0: 0x4617ab00  add.s       $f12, $f21, $f23
    ctx->pc = 0x20bdd0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x20bdd4: 0x4600ee46  mov.s       $f25, $f29
    ctx->pc = 0x20bdd4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[29]);
    // 0x20bdd8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BDD8u;
    SET_GPR_U32(ctx, 31, 0x20BDE0u);
    ctx->pc = 0x20BDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BDD8u;
    // 0x20bddc: 0x461c6300  add.s       $f12, $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BDD8u, 0x20BDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BDE0u;
label_20bde0:
    // 0x20bde0: 0x4616db00  add.s       $f12, $f27, $f22
    ctx->pc = 0x20bde0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[27], ctx->f[22]);
    // 0x20bde4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20bde4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bde8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BDE8u;
    SET_GPR_U32(ctx, 31, 0x20BDF0u);
    ctx->pc = 0x20BDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BDE8u;
    // 0x20bdec: 0x46186300  add.s       $f12, $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BDE8u, 0x20BDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BDF0u;
label_20bdf0:
    // 0x20bdf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20bdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bdf4: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BDF4u;
    SET_GPR_U32(ctx, 31, 0x20BDFCu);
    ctx->pc = 0x20BDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BDF4u;
    // 0x20bdf8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BDF4u, 0x20BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BDFCu;
label_20bdfc:
    // 0x20bdfc: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x20BDFCu;
    {
        const bool branch_taken_0x20bdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDFCu;
        // 0x20be00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bdfc) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20BE04u;
label_20be04:
    // 0x20be04: 0x0  nop
    ctx->pc = 0x20be04u;
    // NOP
    // 0x20be08: 0x0  nop
    ctx->pc = 0x20be08u;
    // NOP
    // 0x20be0c: 0x461b2e43  div.s       $f25, $f5, $f27
    ctx->pc = 0x20be0cu;
    if (ctx->f[27] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[25] = ctx->f[5] / ctx->f[27];
    // 0x20be10: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BE10u;
    SET_GPR_U32(ctx, 31, 0x20BE18u);
    ctx->pc = 0x20BE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE10u;
    // 0x20be14: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BE10u, 0x20BE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE18u;
label_20be18:
    // 0x20be18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20be18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20be1c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BE1Cu;
    SET_GPR_U32(ctx, 31, 0x20BE24u);
    ctx->pc = 0x20BE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE1Cu;
    // 0x20be20: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BE1Cu, 0x20BE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE24u;
label_20be24:
    // 0x20be24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20be24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20be28: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BE28u;
    SET_GPR_U32(ctx, 31, 0x20BE30u);
    ctx->pc = 0x20BE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE28u;
    // 0x20be2c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BE28u, 0x20BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE30u;
label_20be30:
    // 0x20be30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20be30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20be34: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BE34u;
    SET_GPR_U32(ctx, 31, 0x20BE3Cu);
    ctx->pc = 0x20BE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE34u;
    // 0x20be38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BE34u, 0x20BE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE3Cu;
label_20be3c:
    // 0x20be3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20be3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20be40: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BE40u;
    SET_GPR_U32(ctx, 31, 0x20BE48u);
    ctx->pc = 0x20BE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE40u;
    // 0x20be44: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BE40u, 0x20BE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE48u;
label_20be48:
    // 0x20be48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20be48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20be4c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BE4Cu;
    SET_GPR_U32(ctx, 31, 0x20BE54u);
    ctx->pc = 0x20BE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE4Cu;
    // 0x20be50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BE4Cu, 0x20BE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE54u;
label_20be54:
    // 0x20be54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20be54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20be58: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BE58u;
    SET_GPR_U32(ctx, 31, 0x20BE60u);
    ctx->pc = 0x20BE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE58u;
    // 0x20be5c: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BE58u, 0x20BE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE60u;
label_20be60:
    // 0x20be60: 0x4619bb02  mul.s       $f12, $f23, $f25
    ctx->pc = 0x20be60u;
    ctx->f[12] = FPU_MUL_S(ctx->f[23], ctx->f[25]);
    // 0x20be64: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BE64u;
    SET_GPR_U32(ctx, 31, 0x20BE6Cu);
    ctx->pc = 0x20BE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE64u;
    // 0x20be68: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BE64u, 0x20BE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE6Cu;
label_20be6c:
    // 0x20be6c: 0x4618db00  add.s       $f12, $f27, $f24
    ctx->pc = 0x20be6cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[27], ctx->f[24]);
    // 0x20be70: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BE70u;
    SET_GPR_U32(ctx, 31, 0x20BE78u);
    ctx->pc = 0x20BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE70u;
    // 0x20be74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BE70u, 0x20BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE78u;
label_20be78:
    // 0x20be78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20be78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20be7c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BE7Cu;
    SET_GPR_U32(ctx, 31, 0x20BE84u);
    ctx->pc = 0x20BE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE7Cu;
    // 0x20be80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BE7Cu, 0x20BE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE84u;
label_20be84:
    // 0x20be84: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x20BE84u;
    {
        const bool branch_taken_0x20be84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE84u;
        // 0x20be88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be84) {
            ctx->pc = 0x20BFE4u;
            goto label_20bfe4;
        }
    }
    ctx->pc = 0x20BE8Cu;
label_20be8c:
    // 0x20be8c: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x20be8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20be90: 0x0  nop
    ctx->pc = 0x20be90u;
    // NOP
    // 0x20be94: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x20BE94u;
    {
        const bool branch_taken_0x20be94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20BE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE94u;
        // 0x20be98: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be94) {
            ctx->pc = 0x20BEE4u;
            goto label_20bee4;
        }
    }
    ctx->pc = 0x20BE9Cu;
    // 0x20be9c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BE9Cu;
    SET_GPR_U32(ctx, 31, 0x20BEA4u);
    ctx->pc = 0x20BEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE9Cu;
    // 0x20bea0: 0x4600f646  mov.s       $f25, $f30 (Delay Slot)
    ctx->f[25] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BE9Cu, 0x20BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEA4u;
label_20bea4:
    // 0x20bea4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20bea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20bea8: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x20bea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x20beac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20beacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20beb0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BEB0u;
    SET_GPR_U32(ctx, 31, 0x20BEB8u);
    ctx->pc = 0x20BEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BEB0u;
    // 0x20beb4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BEB0u, 0x20BEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEB8u;
label_20beb8:
    // 0x20beb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20beb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bebc: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BEBCu;
    SET_GPR_U32(ctx, 31, 0x20BEC4u);
    ctx->pc = 0x20BEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BEBCu;
    // 0x20bec0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BEBCu, 0x20BEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEC4u;
label_20bec4:
    // 0x20bec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bec8: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BEC8u;
    SET_GPR_U32(ctx, 31, 0x20BED0u);
    ctx->pc = 0x20BECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BEC8u;
    // 0x20becc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BEC8u, 0x20BED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BED0u;
label_20bed0:
    // 0x20bed0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20bed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bed4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BED4u;
    SET_GPR_U32(ctx, 31, 0x20BEDCu);
    ctx->pc = 0x20BED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BED4u;
    // 0x20bed8: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BED4u, 0x20BEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEDCu;
label_20bedc:
    // 0x20bedc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x20BEDCu;
    {
        const bool branch_taken_0x20bedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEDCu;
        // 0x20bee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bedc) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20BEE4u;
label_20bee4:
    // 0x20bee4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BEE4u;
    SET_GPR_U32(ctx, 31, 0x20BEECu);
    ctx->pc = 0x20BEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BEE4u;
    // 0x20bee8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BEE4u, 0x20BEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEECu;
label_20beec:
    // 0x20beec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20beecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bef0: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x20BEF0u;
    SET_GPR_U32(ctx, 31, 0x20BEF8u);
    ctx->pc = 0x20BEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BEF0u;
    // 0x20bef4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x20BEF0u, 0x20BEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEF8u;
label_20bef8:
    // 0x20bef8: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20BEF8u;
    {
        const bool branch_taken_0x20bef8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x20BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEF8u;
        // 0x20befc: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bef8) {
            ctx->pc = 0x20BF1Cu;
            goto label_20bf1c;
        }
    }
    ctx->pc = 0x20BF00u;
    // 0x20bf00: 0x0  nop
    ctx->pc = 0x20bf00u;
    // NOP
    // 0x20bf04: 0x0  nop
    ctx->pc = 0x20bf04u;
    // NOP
    // 0x20bf08: 0x4615a743  div.s       $f29, $f20, $f21
    ctx->pc = 0x20bf08u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[29] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[29] = ctx->f[20] / ctx->f[21];
    // 0x20bf0c: 0x4600f646  mov.s       $f25, $f30
    ctx->pc = 0x20bf0cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[30]);
    // 0x20bf10: 0x461db002  mul.s       $f0, $f22, $f29
    ctx->pc = 0x20bf10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[29]);
label_20bf14:
    // 0x20bf14: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x20BF14u;
    {
        const bool branch_taken_0x20bf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF14u;
        // 0x20bf18: 0x461c0300  add.s       $f12, $f0, $f28 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf14) {
            ctx->pc = 0x20C010u;
            goto label_20c010;
        }
    }
    ctx->pc = 0x20BF1Cu;
label_20bf1c:
    // 0x20bf1c: 0x4616c036  c.le.s      $f24, $f22
    ctx->pc = 0x20bf1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bf20: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x20bf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20bf24: 0x4600f746  mov.s       $f29, $f30
    ctx->pc = 0x20bf24u;
    ctx->f[29] = FPU_MOV_S(ctx->f[30]);
    // 0x20bf28: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x20bf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20bf2c: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x20bf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20bf30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20bf30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20bf34: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x20bf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20bf38: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x20bf38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x20bf3c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x20bf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bf40: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x20bf40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x20bf44: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x20bf44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x20bf48: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x20bf48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x20bf4c: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x20BF4Cu;
    {
        const bool branch_taken_0x20bf4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF4Cu;
        // 0x20bf50: 0x46000e07  neg.s       $f24, $f1 (Delay Slot)
        ctx->f[24] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf4c) {
            ctx->pc = 0x20BF9Cu;
            goto label_20bf9c;
        }
    }
    ctx->pc = 0x20BF54u;
    // 0x20bf54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20bf54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20bf58: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x20bf58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x20bf5c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BF5Cu;
    SET_GPR_U32(ctx, 31, 0x20BF64u);
    ctx->pc = 0x20BF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BF5Cu;
    // 0x20bf60: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BF5Cu, 0x20BF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF64u;
label_20bf64:
    // 0x20bf64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20bf64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bf68: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BF68u;
    SET_GPR_U32(ctx, 31, 0x20BF70u);
    ctx->pc = 0x20BF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BF68u;
    // 0x20bf6c: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BF68u, 0x20BF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF70u;
label_20bf70:
    // 0x20bf70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20bf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bf74: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BF74u;
    SET_GPR_U32(ctx, 31, 0x20BF7Cu);
    ctx->pc = 0x20BF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BF74u;
    // 0x20bf78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BF74u, 0x20BF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF7Cu;
label_20bf7c:
    // 0x20bf7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bf80: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BF80u;
    SET_GPR_U32(ctx, 31, 0x20BF88u);
    ctx->pc = 0x20BF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BF80u;
    // 0x20bf84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BF80u, 0x20BF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF88u;
label_20bf88:
    // 0x20bf88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20bf88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bf8c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BF8Cu;
    SET_GPR_U32(ctx, 31, 0x20BF94u);
    ctx->pc = 0x20BF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BF8Cu;
    // 0x20bf90: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BF8Cu, 0x20BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF94u;
label_20bf94:
    // 0x20bf94: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x20BF94u;
    {
        const bool branch_taken_0x20bf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF94u;
        // 0x20bf98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf94) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20BF9Cu;
label_20bf9c:
    // 0x20bf9c: 0x0  nop
    ctx->pc = 0x20bf9cu;
    // NOP
    // 0x20bfa0: 0x0  nop
    ctx->pc = 0x20bfa0u;
    // NOP
    // 0x20bfa4: 0x461ba643  div.s       $f25, $f20, $f27
    ctx->pc = 0x20bfa4u;
    if (ctx->f[27] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[25] = ctx->f[20] / ctx->f[27];
    // 0x20bfa8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BFA8u;
    SET_GPR_U32(ctx, 31, 0x20BFB0u);
    ctx->pc = 0x20BFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BFA8u;
    // 0x20bfac: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BFA8u, 0x20BFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFB0u;
label_20bfb0:
    // 0x20bfb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20bfb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bfb4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BFB4u;
    SET_GPR_U32(ctx, 31, 0x20BFBCu);
    ctx->pc = 0x20BFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BFB4u;
    // 0x20bfb8: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BFB4u, 0x20BFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFBCu;
label_20bfbc:
    // 0x20bfbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20bfbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bfc0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BFC0u;
    SET_GPR_U32(ctx, 31, 0x20BFC8u);
    ctx->pc = 0x20BFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BFC0u;
    // 0x20bfc4: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BFC0u, 0x20BFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFC8u;
label_20bfc8:
    // 0x20bfc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20bfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bfcc: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BFCCu;
    SET_GPR_U32(ctx, 31, 0x20BFD4u);
    ctx->pc = 0x20BFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BFCCu;
    // 0x20bfd0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BFCCu, 0x20BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFD4u;
label_20bfd4:
    // 0x20bfd4: 0x4619bb02  mul.s       $f12, $f23, $f25
    ctx->pc = 0x20bfd4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[23], ctx->f[25]);
    // 0x20bfd8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20BFD8u;
    SET_GPR_U32(ctx, 31, 0x20BFE0u);
    ctx->pc = 0x20BFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BFD8u;
    // 0x20bfdc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20BFD8u, 0x20BFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFE0u;
label_20bfe0:
    // 0x20bfe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20bfe4:
    // 0x20bfe4: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BFE4u;
    SET_GPR_U32(ctx, 31, 0x20BFECu);
    ctx->pc = 0x20BFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BFE4u;
    // 0x20bfe8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BFE4u, 0x20BFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFECu;
label_20bfec:
    // 0x20bfec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20bfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bff0: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x20BFF0u;
    SET_GPR_U32(ctx, 31, 0x20BFF8u);
    ctx->pc = 0x20BFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BFF0u;
    // 0x20bff4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x20BFF0u, 0x20BFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFF8u;
label_20bff8:
    // 0x20bff8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20bff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20bffc:
    // 0x20bffc: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x20BFFCu;
    SET_GPR_U32(ctx, 31, 0x20C004u);
    ctx->pc = 0x20C000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BFFCu;
    // 0x20c000: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x20BFFCu, 0x20C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C004u;
label_20c004:
    // 0x20c004: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x20C004u;
    SET_GPR_U32(ctx, 31, 0x20C00Cu);
    ctx->pc = 0x20C008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C004u;
    // 0x20c008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x20C004u, 0x20C00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C00Cu;
label_20c00c:
    // 0x20c00c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x20c00cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_20c010:
    // 0x20c010: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x20C010u;
    {
        const bool branch_taken_0x20c010 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C010u;
        // 0x20c014: 0xc7a10010  lwc1        $f1, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c010) {
            ctx->pc = 0x20C04Cu;
            goto label_20c04c;
        }
    }
    ctx->pc = 0x20C018u;
    // 0x20c018: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x20c018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20c01c: 0x4601e842  mul.s       $f1, $f29, $f1
    ctx->pc = 0x20c01cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[29], ctx->f[1]);
    // 0x20c020: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x20c020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20c024: 0x4602e882  mul.s       $f2, $f29, $f2
    ctx->pc = 0x20c024u;
    ctx->f[2] = FPU_MUL_S(ctx->f[29], ctx->f[2]);
    // 0x20c028: 0x4603e8c2  mul.s       $f3, $f29, $f3
    ctx->pc = 0x20c028u;
    ctx->f[3] = FPU_MUL_S(ctx->f[29], ctx->f[3]);
    // 0x20c02c: 0x4601f840  add.s       $f1, $f31, $f1
    ctx->pc = 0x20c02cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], ctx->f[1]);
    // 0x20c030: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x20c030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x20c034: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x20c034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c038: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20c038u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x20c03c: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x20c03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x20c040: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x20c040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c044: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x20c044u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x20c048: 0xe6a10008  swc1        $f1, 0x8($s5)
    ctx->pc = 0x20c048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_20c04c:
    // 0x20c04c: 0x12c0000f  beqz        $s6, . + 4 + (0xF << 2)
    ctx->pc = 0x20C04Cu;
    {
        const bool branch_taken_0x20c04c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C04Cu;
        // 0x20c050: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c04c) {
            ctx->pc = 0x20C08Cu;
            goto label_20c08c;
        }
    }
    ctx->pc = 0x20C054u;
    // 0x20c054: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x20c054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c058: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x20c058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x20c05c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x20c05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20c060: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x20c060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20c064: 0x4602c882  mul.s       $f2, $f25, $f2
    ctx->pc = 0x20c064u;
    ctx->f[2] = FPU_MUL_S(ctx->f[25], ctx->f[2]);
    // 0x20c068: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x20c068u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20c06c: 0x4603c8c2  mul.s       $f3, $f25, $f3
    ctx->pc = 0x20c06cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[25], ctx->f[3]);
    // 0x20c070: 0xe6c10000  swc1        $f1, 0x0($s6)
    ctx->pc = 0x20c070u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x20c074: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x20c074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c078: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20c078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x20c07c: 0xe6c00004  swc1        $f0, 0x4($s6)
    ctx->pc = 0x20c07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x20c080: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x20c080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c084: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x20c084u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x20c088: 0xe6c10008  swc1        $f1, 0x8($s6)
    ctx->pc = 0x20c088u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_20c08c:
    // 0x20c08c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20c08cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c090: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x20c090u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c094: 0x0  nop
    ctx->pc = 0x20c094u;
    // NOP
    // 0x20c098: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20C098u;
    {
        const bool branch_taken_0x20c098 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c098) {
            ctx->pc = 0x20C09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C098u;
            // 0x20c09c: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C0A0u;
            goto label_20c0a0;
        }
    }
    ctx->pc = 0x20C0A0u;
label_20c0a0:
    // 0x20c0a0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x20c0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20c0a4: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x20c0a4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x20c0a8: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x20c0a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20c0ac: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x20c0acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20c0b0: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x20c0b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20c0b4: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x20c0b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20c0b8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x20c0b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20c0bc: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x20c0bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20c0c0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x20c0c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20c0c4: 0xc7bf0108  lwc1        $f31, 0x108($sp)
    ctx->pc = 0x20c0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x20c0c8: 0xc7be0100  lwc1        $f30, 0x100($sp)
    ctx->pc = 0x20c0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x20c0cc: 0xc7bd00f8  lwc1        $f29, 0xF8($sp)
    ctx->pc = 0x20c0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x20c0d0: 0xc7bc00f0  lwc1        $f28, 0xF0($sp)
    ctx->pc = 0x20c0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x20c0d4: 0xc7bb00e8  lwc1        $f27, 0xE8($sp)
    ctx->pc = 0x20c0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x20c0d8: 0xc7ba00e0  lwc1        $f26, 0xE0($sp)
    ctx->pc = 0x20c0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x20c0dc: 0xc7b900d8  lwc1        $f25, 0xD8($sp)
    ctx->pc = 0x20c0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x20c0e0: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x20c0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x20c0e4: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x20c0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x20c0e8: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x20c0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x20c0ec: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x20c0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20c0f0: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x20c0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20c0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x20C0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0F4u;
        // 0x20c0f8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C0FCu;
}
