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

// Function: glassSetQuad
// Address: 0x298870 - 0x29996c
void glassSetQuad_0x298870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("glassSetQuad_0x298870");
#endif

    switch (ctx->pc) {
        case 0x298ac8u: goto label_298ac8;
        case 0x299504u: goto label_299504;
        case 0x299530u: goto label_299530;
        case 0x299574u: goto label_299574;
        case 0x2995f8u: goto label_2995f8;
        case 0x299678u: goto label_299678;
        case 0x299850u: goto label_299850;
        case 0x299864u: goto label_299864;
        default: break;
    }

    ctx->pc = 0x298870u;

    // 0x298870: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x298870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
    // 0x298874: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x298874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x298878: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x298878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29887c: 0xffbe0230  sd          $fp, 0x230($sp)
    ctx->pc = 0x29887cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 30));
    // 0x298880: 0xffb70220  sd          $s7, 0x220($sp)
    ctx->pc = 0x298880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 23));
    // 0x298884: 0xffb60210  sd          $s6, 0x210($sp)
    ctx->pc = 0x298884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 22));
    // 0x298888: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x298888u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29888c: 0xffb50200  sd          $s5, 0x200($sp)
    ctx->pc = 0x29888cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 21));
    // 0x298890: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x298890u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298894: 0xffb401f0  sd          $s4, 0x1F0($sp)
    ctx->pc = 0x298894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 20));
    // 0x298898: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x298898u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29889c: 0xffb301e0  sd          $s3, 0x1E0($sp)
    ctx->pc = 0x29889cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 19));
    // 0x2988a0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2988a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2988a4: 0xffb201d0  sd          $s2, 0x1D0($sp)
    ctx->pc = 0x2988a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 18));
    // 0x2988a8: 0xffb101c0  sd          $s1, 0x1C0($sp)
    ctx->pc = 0x2988a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 17));
    // 0x2988ac: 0xffb001b0  sd          $s0, 0x1B0($sp)
    ctx->pc = 0x2988acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 16));
    // 0x2988b0: 0xe7bf02a8  swc1        $f31, 0x2A8($sp)
    ctx->pc = 0x2988b0u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x2988b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2988b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2988b8: 0xe7be02a0  swc1        $f30, 0x2A0($sp)
    ctx->pc = 0x2988b8u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x2988bc: 0xe7bd0298  swc1        $f29, 0x298($sp)
    ctx->pc = 0x2988bcu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
    // 0x2988c0: 0xe7bc0290  swc1        $f28, 0x290($sp)
    ctx->pc = 0x2988c0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
    // 0x2988c4: 0xe7bb0288  swc1        $f27, 0x288($sp)
    ctx->pc = 0x2988c4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x2988c8: 0xe7ba0280  swc1        $f26, 0x280($sp)
    ctx->pc = 0x2988c8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x2988cc: 0xe7b90278  swc1        $f25, 0x278($sp)
    ctx->pc = 0x2988ccu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x2988d0: 0xe7b80270  swc1        $f24, 0x270($sp)
    ctx->pc = 0x2988d0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x2988d4: 0xe7b70268  swc1        $f23, 0x268($sp)
    ctx->pc = 0x2988d4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
    // 0x2988d8: 0xe7b60260  swc1        $f22, 0x260($sp)
    ctx->pc = 0x2988d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x2988dc: 0xe7b50258  swc1        $f21, 0x258($sp)
    ctx->pc = 0x2988dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    // 0x2988e0: 0xe7b40250  swc1        $f20, 0x250($sp)
    ctx->pc = 0x2988e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x2988e4: 0xffbf0240  sd          $ra, 0x240($sp)
    ctx->pc = 0x2988e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 31));
    // 0x2988e8: 0x8fb902c8  lw          $t9, 0x2C8($sp)
    ctx->pc = 0x2988e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x2988ec: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x2988ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2988f0: 0xc72f0000  lwc1        $f15, 0x0($t9)
    ctx->pc = 0x2988f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2988f4: 0xc4520000  lwc1        $f18, 0x0($v0)
    ctx->pc = 0x2988f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2988f8: 0xafa800e4  sw          $t0, 0xE4($sp)
    ctx->pc = 0x2988f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 8));
    // 0x2988fc: 0x8fa302d8  lw          $v1, 0x2D8($sp)
    ctx->pc = 0x2988fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x298900: 0x46127a40  add.s       $f9, $f15, $f18
    ctx->pc = 0x298900u;
    ctx->f[9] = FPU_ADD_S(ctx->f[15], ctx->f[18]);
    // 0x298904: 0xc7310004  lwc1        $f17, 0x4($t9)
    ctx->pc = 0x298904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x298908: 0x89980  sll         $s3, $t0, 6
    ctx->pc = 0x298908u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x29890c: 0xc46e0000  lwc1        $f14, 0x0($v1)
    ctx->pc = 0x29890cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x298910: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x298910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x298914: 0xe7ac00e8  swc1        $f12, 0xE8($sp)
    ctx->pc = 0x298914u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x298918: 0x8fb102b8  lw          $s1, 0x2B8($sp)
    ctx->pc = 0x298918u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x29891c: 0x460e4a40  add.s       $f9, $f9, $f14
    ctx->pc = 0x29891cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[14]);
    // 0x298920: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x298920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x298924: 0xc46b0004  lwc1        $f11, 0x4($v1)
    ctx->pc = 0x298924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x298928: 0x460d8800  add.s       $f0, $f17, $f13
    ctx->pc = 0x298928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[17], ctx->f[13]);
    // 0x29892c: 0xafa700e0  sw          $a3, 0xE0($sp)
    ctx->pc = 0x29892cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 7));
    // 0x298930: 0x0  nop
    ctx->pc = 0x298930u;
    // NOP
    // 0x298934: 0x0  nop
    ctx->pc = 0x298934u;
    // NOP
    // 0x298938: 0x46024a43  div.s       $f9, $f9, $f2
    ctx->pc = 0x298938u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = copysignf(INFINITY, ctx->f[9] * 0.0f); } else ctx->f[9] = ctx->f[9] / ctx->f[2];
    // 0x29893c: 0x8fb202c0  lw          $s2, 0x2C0($sp)
    ctx->pc = 0x29893cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x298940: 0x8fbe02b0  lw          $fp, 0x2B0($sp)
    ctx->pc = 0x298940u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x298944: 0x460b0040  add.s       $f1, $f0, $f11
    ctx->pc = 0x298944u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x298948: 0x8fa202f8  lw          $v0, 0x2F8($sp)
    ctx->pc = 0x298948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
    // 0x29894c: 0xc7878cd0  lwc1        $f7, -0x7330($gp)
    ctx->pc = 0x29894cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x298950: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x298950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x298954: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x298954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298958: 0xc7a400f0  lwc1        $f4, 0xF0($sp)
    ctx->pc = 0x298958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29895c: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x29895cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x298960: 0x0  nop
    ctx->pc = 0x298960u;
    // NOP
    // 0x298964: 0x0  nop
    ctx->pc = 0x298964u;
    // NOP
    // 0x298968: 0x46022083  div.s       $f2, $f4, $f2
    ctx->pc = 0x298968u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[2] = ctx->f[4] / ctx->f[2];
    // 0x29896c: 0xc6460000  lwc1        $f6, 0x0($s2)
    ctx->pc = 0x29896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x298970: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x298970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298974: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x298974u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x298978: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x298978u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x29897c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x29897cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x298980: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x298980u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x298984: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x298984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x298988: 0xc6ac0000  lwc1        $f12, 0x0($s5)
    ctx->pc = 0x298988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29898c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x29898cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x298990: 0xc7a800f4  lwc1        $f8, 0xF4($sp)
    ctx->pc = 0x298990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x298994: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x298994u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x298998: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x298998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29899c: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x29899cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2989a0: 0x46036300  add.s       $f12, $f12, $f3
    ctx->pc = 0x2989a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
    // 0x2989a4: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x2989a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x2989a8: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x2989a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2989ac: 0x46083182  mul.s       $f6, $f6, $f8
    ctx->pc = 0x2989acu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x2989b0: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x2989b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x2989b4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2989b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2989b8: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x2989b8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x2989bc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2989bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2989c0: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x2989c0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x2989c4: 0xe7a90000  swc1        $f9, 0x0($sp)
    ctx->pc = 0x2989c4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2989c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2989c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2989cc: 0xe7a80004  swc1        $f8, 0x4($sp)
    ctx->pc = 0x2989ccu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2989d0: 0x46066300  add.s       $f12, $f12, $f6
    ctx->pc = 0x2989d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[6]);
    // 0x2989d4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2989d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2989d8: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2989d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2989dc: 0x46047bc0  add.s       $f15, $f15, $f4
    ctx->pc = 0x2989dcu;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[4]);
    // 0x2989e0: 0x46056b40  add.s       $f13, $f13, $f5
    ctx->pc = 0x2989e0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[5]);
    // 0x2989e4: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x2989e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2989e8: 0x46047380  add.s       $f14, $f14, $f4
    ctx->pc = 0x2989e8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[4]);
    // 0x2989ec: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x2989ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2989f0: 0x46055ac0  add.s       $f11, $f11, $f5
    ctx->pc = 0x2989f0u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[5]);
    // 0x2989f4: 0xe7af0010  swc1        $f15, 0x10($sp)
    ctx->pc = 0x2989f4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2989f8: 0x46058c40  add.s       $f17, $f17, $f5
    ctx->pc = 0x2989f8u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[5]);
    // 0x2989fc: 0xe7ad0024  swc1        $f13, 0x24($sp)
    ctx->pc = 0x2989fcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x298a00: 0x46049480  add.s       $f18, $f18, $f4
    ctx->pc = 0x298a00u;
    ctx->f[18] = FPU_ADD_S(ctx->f[18], ctx->f[4]);
    // 0x298a04: 0xe7ae0030  swc1        $f14, 0x30($sp)
    ctx->pc = 0x298a04u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x298a08: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x298a08u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x298a0c: 0xe7ab0034  swc1        $f11, 0x34($sp)
    ctx->pc = 0x298a0cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x298a10: 0xe7b10014  swc1        $f17, 0x14($sp)
    ctx->pc = 0x298a10u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x298a14: 0xe7b20020  swc1        $f18, 0x20($sp)
    ctx->pc = 0x298a14u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x298a18: 0xe7ac0090  swc1        $f12, 0x90($sp)
    ctx->pc = 0x298a18u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x298a1c: 0xc6270008  lwc1        $f7, 0x8($s1)
    ctx->pc = 0x298a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x298a20: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x298a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x298a24: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x298a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298a28: 0x46093ac2  mul.s       $f11, $f7, $f9
    ctx->pc = 0x298a28u;
    ctx->f[11] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x298a2c: 0x46081382  mul.s       $f14, $f2, $f8
    ctx->pc = 0x298a2cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x298a30: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x298a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298a34: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x298a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x298a38: 0x46090342  mul.s       $f13, $f0, $f9
    ctx->pc = 0x298a38u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x298a3c: 0xc6e40004  lwc1        $f4, 0x4($s7)
    ctx->pc = 0x298a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x298a40: 0x46080bc2  mul.s       $f15, $f1, $f8
    ctx->pc = 0x298a40u;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x298a44: 0xc6c50004  lwc1        $f5, 0x4($s6)
    ctx->pc = 0x298a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x298a48: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x298a48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x298a4c: 0xc6470008  lwc1        $f7, 0x8($s2)
    ctx->pc = 0x298a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x298a50: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x298a50u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x298a54: 0xc6c30008  lwc1        $f3, 0x8($s6)
    ctx->pc = 0x298a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x298a58: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x298a58u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x298a5c: 0xc7c60004  lwc1        $f6, 0x4($fp)
    ctx->pc = 0x298a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x298a60: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x298a60u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x298a64: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x298a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298a68: 0xc7c70008  lwc1        $f7, 0x8($fp)
    ctx->pc = 0x298a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x298a6c: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x298a6cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x298a70: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x298a70u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x298a74: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x298a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298a78: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x298a78u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x298a7c: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x298a7cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x298a80: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x298a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x298a84: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x298a84u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x298a88: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x298a88u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x298a8c: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x298a8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
    // 0x298a90: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x298a90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x298a94: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x298a94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x298a98: 0x460f0000  add.s       $f0, $f0, $f15
    ctx->pc = 0x298a98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[15]);
    // 0x298a9c: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x298a9cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x298aa0: 0x460e0840  add.s       $f1, $f1, $f14
    ctx->pc = 0x298aa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[14]);
    // 0x298aa4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x298aa4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x298aa8: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x298aa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x298aac: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x298aacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x298ab0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x298ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x298ab4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x298ab4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x298ab8: 0x7fb90190  sq          $t9, 0x190($sp)
    ctx->pc = 0x298ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 25));
    // 0x298abc: 0x46000b86  mov.s       $f14, $f1
    ctx->pc = 0x298abcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[1]);
    // 0x298ac0: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x298AC0u;
    SET_GPR_U32(ctx, 31, 0x298AC8u);
    ctx->pc = 0x298AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298AC0u;
    // 0x298ac4: 0xe7a10098  swc1        $f1, 0x98($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x298AC0u, 0x298AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298AC8u;
label_298ac8:
    // 0x298ac8: 0xc6280008  lwc1        $f8, 0x8($s1)
    ctx->pc = 0x298ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x298acc: 0x2134821  addu        $t1, $s0, $s3
    ctx->pc = 0x298accu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x298ad0: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x298ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x298ad4: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x298ad4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ad8: 0xe7a8011c  swc1        $f8, 0x11C($sp)
    ctx->pc = 0x298ad8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x298adc: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x298adcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ae0: 0x460343c2  mul.s       $f15, $f8, $f3
    ctx->pc = 0x298ae0u;
    ctx->f[15] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x298ae4: 0xc7a70030  lwc1        $f7, 0x30($sp)
    ctx->pc = 0x298ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x298ae8: 0xc64a0008  lwc1        $f10, 0x8($s2)
    ctx->pc = 0x298ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x298aec: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x298aecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298af0: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x298af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x298af4: 0x120682d  daddu       $t5, $t1, $zero
    ctx->pc = 0x298af4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298af8: 0xe7aa0120  swc1        $f10, 0x120($sp)
    ctx->pc = 0x298af8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x298afc: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x298afcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b00: 0x120782d  daddu       $t7, $t1, $zero
    ctx->pc = 0x298b00u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b04: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x298b04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b08: 0xc6330000  lwc1        $f19, 0x0($s1)
    ctx->pc = 0x298b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x298b0c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x298b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b10: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x298b10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b14: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x298b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b18: 0xe7b300f8  swc1        $f19, 0xF8($sp)
    ctx->pc = 0x298b18u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x298b1c: 0x46039b42  mul.s       $f13, $f19, $f3
    ctx->pc = 0x298b1cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[19], ctx->f[3]);
    // 0x298b20: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x298b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b24: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x298b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b28: 0xc6580000  lwc1        $f24, 0x0($s2)
    ctx->pc = 0x298b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x298b2c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x298b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b30: 0xe7b800fc  swc1        $f24, 0xFC($sp)
    ctx->pc = 0x298b30u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x298b34: 0xc6390004  lwc1        $f25, 0x4($s1)
    ctx->pc = 0x298b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x298b38: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x298b38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b3c: 0xe7b90104  swc1        $f25, 0x104($sp)
    ctx->pc = 0x298b3cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x298b40: 0x4603cb82  mul.s       $f14, $f25, $f3
    ctx->pc = 0x298b40u;
    ctx->f[14] = FPU_MUL_S(ctx->f[25], ctx->f[3]);
    // 0x298b44: 0x4604cac2  mul.s       $f11, $f25, $f4
    ctx->pc = 0x298b44u;
    ctx->f[11] = FPU_MUL_S(ctx->f[25], ctx->f[4]);
    // 0x298b48: 0xc65e0004  lwc1        $f30, 0x4($s2)
    ctx->pc = 0x298b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x298b4c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x298b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b50: 0xe7be0108  swc1        $f30, 0x108($sp)
    ctx->pc = 0x298b50u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x298b54: 0xc6ff0004  lwc1        $f31, 0x4($s7)
    ctx->pc = 0x298b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x298b58: 0xc6e50000  lwc1        $f5, 0x0($s7)
    ctx->pc = 0x298b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x298b5c: 0x4619ffc0  add.s       $f31, $f31, $f25
    ctx->pc = 0x298b5cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], ctx->f[25]);
    // 0x298b60: 0xc6c60000  lwc1        $f6, 0x0($s6)
    ctx->pc = 0x298b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x298b64: 0xc6f50008  lwc1        $f21, 0x8($s7)
    ctx->pc = 0x298b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x298b68: 0x46132940  add.s       $f5, $f5, $f19
    ctx->pc = 0x298b68u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[19]);
    // 0x298b6c: 0x46183180  add.s       $f6, $f6, $f24
    ctx->pc = 0x298b6cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[24]);
    // 0x298b70: 0xc7b9011c  lwc1        $f25, 0x11C($sp)
    ctx->pc = 0x298b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x298b74: 0xe7bf010c  swc1        $f31, 0x10C($sp)
    ctx->pc = 0x298b74u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x298b78: 0x4608ad40  add.s       $f21, $f21, $f8
    ctx->pc = 0x298b78u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[8]);
    // 0x298b7c: 0xc7b800f8  lwc1        $f24, 0xF8($sp)
    ctx->pc = 0x298b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x298b80: 0x4604cb02  mul.s       $f12, $f25, $f4
    ctx->pc = 0x298b80u;
    ctx->f[12] = FPU_MUL_S(ctx->f[25], ctx->f[4]);
    // 0x298b84: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x298b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298b88: 0x4607cc82  mul.s       $f18, $f25, $f7
    ctx->pc = 0x298b88u;
    ctx->f[18] = FPU_MUL_S(ctx->f[25], ctx->f[7]);
    // 0x298b8c: 0x461e0000  add.s       $f0, $f0, $f30
    ctx->pc = 0x298b8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[30]);
    // 0x298b90: 0x4607c782  mul.s       $f30, $f24, $f7
    ctx->pc = 0x298b90u;
    ctx->f[30] = FPU_MUL_S(ctx->f[24], ctx->f[7]);
    // 0x298b94: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x298b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x298b98: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x298b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298b9c: 0x460a0840  add.s       $f1, $f1, $f10
    ctx->pc = 0x298b9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x298ba0: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x298ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x298ba4: 0xc7c90008  lwc1        $f9, 0x8($fp)
    ctx->pc = 0x298ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x298ba8: 0xc7c80004  lwc1        $f8, 0x4($fp)
    ctx->pc = 0x298ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x298bac: 0x46090a81  sub.s       $f10, $f1, $f9
    ctx->pc = 0x298bacu;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x298bb0: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x298bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x298bb4: 0x46080201  sub.s       $f8, $f0, $f8
    ctx->pc = 0x298bb4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x298bb8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x298bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298bbc: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x298bbcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x298bc0: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x298bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298bc4: 0xe7aa012c  swc1        $f10, 0x12C($sp)
    ctx->pc = 0x298bc4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x298bc8: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x298bc8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x298bcc: 0xe7a80118  swc1        $f8, 0x118($sp)
    ctx->pc = 0x298bccu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x298bd0: 0x4609ad41  sub.s       $f21, $f21, $f9
    ctx->pc = 0x298bd0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[9]);
    // 0x298bd4: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x298bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x298bd8: 0x4604c242  mul.s       $f9, $f24, $f4
    ctx->pc = 0x298bd8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[24], ctx->f[4]);
    // 0x298bdc: 0xc7d30004  lwc1        $f19, 0x4($fp)
    ctx->pc = 0x298bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x298be0: 0x46033402  mul.s       $f16, $f6, $f3
    ctx->pc = 0x298be0u;
    ctx->f[16] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x298be4: 0x46012f42  mul.s       $f29, $f5, $f1
    ctx->pc = 0x298be4u;
    ctx->f[29] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x298be8: 0x4613fcc1  sub.s       $f19, $f31, $f19
    ctx->pc = 0x298be8u;
    ctx->f[19] = FPU_SUB_S(ctx->f[31], ctx->f[19]);
    // 0x298bec: 0x460435c2  mul.s       $f23, $f6, $f4
    ctx->pc = 0x298becu;
    ctx->f[23] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x298bf0: 0x46073682  mul.s       $f26, $f6, $f7
    ctx->pc = 0x298bf0u;
    ctx->f[26] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x298bf4: 0xe7b30110  swc1        $f19, 0x110($sp)
    ctx->pc = 0x298bf4u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x298bf8: 0x46022f02  mul.s       $f28, $f5, $f2
    ctx->pc = 0x298bf8u;
    ctx->f[28] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x298bfc: 0x4617ef40  add.s       $f29, $f29, $f23
    ctx->pc = 0x298bfcu;
    ctx->f[29] = FPU_ADD_S(ctx->f[29], ctx->f[23]);
    // 0x298c00: 0xc6b40008  lwc1        $f20, 0x8($s5)
    ctx->pc = 0x298c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x298c04: 0xe7be013c  swc1        $f30, 0x13C($sp)
    ctx->pc = 0x298c04u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x298c08: 0x461ae700  add.s       $f28, $f28, $f26
    ctx->pc = 0x298c08u;
    ctx->f[28] = FPU_ADD_S(ctx->f[28], ctx->f[26]);
    // 0x298c0c: 0xc7a80040  lwc1        $f8, 0x40($sp)
    ctx->pc = 0x298c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x298c10: 0x4601af82  mul.s       $f30, $f21, $f1
    ctx->pc = 0x298c10u;
    ctx->f[30] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x298c14: 0xc7bf0104  lwc1        $f31, 0x104($sp)
    ctx->pc = 0x298c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x298c18: 0x460fa3c0  add.s       $f15, $f20, $f15
    ctx->pc = 0x298c18u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[15]);
    // 0x298c1c: 0x4608c202  mul.s       $f8, $f24, $f8
    ctx->pc = 0x298c1cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[24], ctx->f[8]);
    // 0x298c20: 0xc7b9012c  lwc1        $f25, 0x12C($sp)
    ctx->pc = 0x298c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x298c24: 0x4600ae02  mul.s       $f24, $f21, $f0
    ctx->pc = 0x298c24u;
    ctx->f[24] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x298c28: 0x4607fc42  mul.s       $f17, $f31, $f7
    ctx->pc = 0x298c28u;
    ctx->f[17] = FPU_MUL_S(ctx->f[31], ctx->f[7]);
    // 0x298c2c: 0xe7a80150  swc1        $f8, 0x150($sp)
    ctx->pc = 0x298c2cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x298c30: 0x4603ce42  mul.s       $f25, $f25, $f3
    ctx->pc = 0x298c30u;
    ctx->f[25] = FPU_MUL_S(ctx->f[25], ctx->f[3]);
    // 0x298c34: 0xc7bf012c  lwc1        $f31, 0x12C($sp)
    ctx->pc = 0x298c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x298c38: 0x460ca300  add.s       $f12, $f20, $f12
    ctx->pc = 0x298c38u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    // 0x298c3c: 0xc6aa0000  lwc1        $f10, 0x0($s5)
    ctx->pc = 0x298c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x298c40: 0x4612a480  add.s       $f18, $f20, $f18
    ctx->pc = 0x298c40u;
    ctx->f[18] = FPU_ADD_S(ctx->f[20], ctx->f[18]);
    // 0x298c44: 0xc6b30004  lwc1        $f19, 0x4($s5)
    ctx->pc = 0x298c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x298c48: 0x4604ffc2  mul.s       $f31, $f31, $f4
    ctx->pc = 0x298c48u;
    ctx->f[31] = FPU_MUL_S(ctx->f[31], ctx->f[4]);
    // 0x298c4c: 0xe7b80124  swc1        $f24, 0x124($sp)
    ctx->pc = 0x298c4cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x298c50: 0x460d5340  add.s       $f13, $f10, $f13
    ctx->pc = 0x298c50u;
    ctx->f[13] = FPU_ADD_S(ctx->f[10], ctx->f[13]);
    // 0x298c54: 0xc7a8013c  lwc1        $f8, 0x13C($sp)
    ctx->pc = 0x298c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x298c58: 0x460e9b80  add.s       $f14, $f19, $f14
    ctx->pc = 0x298c58u;
    ctx->f[14] = FPU_ADD_S(ctx->f[19], ctx->f[14]);
    // 0x298c5c: 0x460b9ac0  add.s       $f11, $f19, $f11
    ctx->pc = 0x298c5cu;
    ctx->f[11] = FPU_ADD_S(ctx->f[19], ctx->f[11]);
    // 0x298c60: 0xc7b800fc  lwc1        $f24, 0xFC($sp)
    ctx->pc = 0x298c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x298c64: 0x46119c40  add.s       $f17, $f19, $f17
    ctx->pc = 0x298c64u;
    ctx->f[17] = FPU_ADD_S(ctx->f[19], ctx->f[17]);
    // 0x298c68: 0xe7b90130  swc1        $f25, 0x130($sp)
    ctx->pc = 0x298c68u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x298c6c: 0x46085200  add.s       $f8, $f10, $f8
    ctx->pc = 0x298c6cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[10], ctx->f[8]);
    // 0x298c70: 0xc7b3012c  lwc1        $f19, 0x12C($sp)
    ctx->pc = 0x298c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x298c74: 0x46095240  add.s       $f9, $f10, $f9
    ctx->pc = 0x298c74u;
    ctx->f[9] = FPU_ADD_S(ctx->f[10], ctx->f[9]);
    // 0x298c78: 0xe7bf0138  swc1        $f31, 0x138($sp)
    ctx->pc = 0x298c78u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x298c7c: 0x4602aa82  mul.s       $f10, $f21, $f2
    ctx->pc = 0x298c7cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x298c80: 0xe7be0134  swc1        $f30, 0x134($sp)
    ctx->pc = 0x298c80u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x298c84: 0x46002e42  mul.s       $f25, $f5, $f0
    ctx->pc = 0x298c84u;
    ctx->f[25] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x298c88: 0xc7bf0110  lwc1        $f31, 0x110($sp)
    ctx->pc = 0x298c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x298c8c: 0x4600c602  mul.s       $f24, $f24, $f0
    ctx->pc = 0x298c8cu;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x298c90: 0xc7be0108  lwc1        $f30, 0x108($sp)
    ctx->pc = 0x298c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x298c94: 0x46079cc2  mul.s       $f19, $f19, $f7
    ctx->pc = 0x298c94u;
    ctx->f[19] = FPU_MUL_S(ctx->f[19], ctx->f[7]);
    // 0x298c98: 0xe7a80140  swc1        $f8, 0x140($sp)
    ctx->pc = 0x298c98u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x298c9c: 0x4600ffc2  mul.s       $f31, $f31, $f0
    ctx->pc = 0x298c9cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[31], ctx->f[0]);
    // 0x298ca0: 0xe7aa0148  swc1        $f10, 0x148($sp)
    ctx->pc = 0x298ca0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x298ca4: 0xe7b80100  swc1        $f24, 0x100($sp)
    ctx->pc = 0x298ca4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x298ca8: 0x4600f282  mul.s       $f10, $f30, $f0
    ctx->pc = 0x298ca8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[30], ctx->f[0]);
    // 0x298cac: 0xe7b901a0  swc1        $f25, 0x1A0($sp)
    ctx->pc = 0x298cacu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x298cb0: 0x4601f582  mul.s       $f22, $f30, $f1
    ctx->pc = 0x298cb0u;
    ctx->f[22] = FPU_MUL_S(ctx->f[30], ctx->f[1]);
    // 0x298cb4: 0xc7a80118  lwc1        $f8, 0x118($sp)
    ctx->pc = 0x298cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x298cb8: 0xc7b800fc  lwc1        $f24, 0xFC($sp)
    ctx->pc = 0x298cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x298cbc: 0x460a7380  add.s       $f14, $f14, $f10
    ctx->pc = 0x298cbcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[10]);
    // 0x298cc0: 0xe7b3014c  swc1        $f19, 0x14C($sp)
    ctx->pc = 0x298cc0u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x298cc4: 0x460340c2  mul.s       $f3, $f8, $f3
    ctx->pc = 0x298cc4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x298cc8: 0xc7b90110  lwc1        $f25, 0x110($sp)
    ctx->pc = 0x298cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x298ccc: 0x4601c202  mul.s       $f8, $f24, $f1
    ctx->pc = 0x298cccu;
    ctx->f[8] = FPU_MUL_S(ctx->f[24], ctx->f[1]);
    // 0x298cd0: 0xc7b30120  lwc1        $f19, 0x120($sp)
    ctx->pc = 0x298cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x298cd4: 0x46165ac0  add.s       $f11, $f11, $f22
    ctx->pc = 0x298cd4u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[22]);
    // 0x298cd8: 0xc7be0118  lwc1        $f30, 0x118($sp)
    ctx->pc = 0x298cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x298cdc: 0x4601cec2  mul.s       $f27, $f25, $f1
    ctx->pc = 0x298cdcu;
    ctx->f[27] = FPU_MUL_S(ctx->f[25], ctx->f[1]);
    // 0x298ce0: 0xe7bf01a4  swc1        $f31, 0x1A4($sp)
    ctx->pc = 0x298ce0u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x298ce4: 0x46009802  mul.s       $f0, $f19, $f0
    ctx->pc = 0x298ce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[19], ctx->f[0]);
    // 0x298ce8: 0x4604f102  mul.s       $f4, $f30, $f4
    ctx->pc = 0x298ce8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[30], ctx->f[4]);
    // 0x298cec: 0xc7bf0108  lwc1        $f31, 0x108($sp)
    ctx->pc = 0x298cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x298cf0: 0x46019842  mul.s       $f1, $f19, $f1
    ctx->pc = 0x298cf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[19], ctx->f[1]);
    // 0x298cf4: 0x4607f1c2  mul.s       $f7, $f30, $f7
    ctx->pc = 0x298cf4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[30], ctx->f[7]);
    // 0x298cf8: 0x4602c4c2  mul.s       $f19, $f24, $f2
    ctx->pc = 0x298cf8u;
    ctx->f[19] = FPU_MUL_S(ctx->f[24], ctx->f[2]);
    // 0x298cfc: 0xc7be0120  lwc1        $f30, 0x120($sp)
    ctx->pc = 0x298cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x298d00: 0x4602fe02  mul.s       $f24, $f31, $f2
    ctx->pc = 0x298d00u;
    ctx->f[24] = FPU_MUL_S(ctx->f[31], ctx->f[2]);
    // 0x298d04: 0x4602ce42  mul.s       $f25, $f25, $f2
    ctx->pc = 0x298d04u;
    ctx->f[25] = FPU_MUL_S(ctx->f[25], ctx->f[2]);
    // 0x298d08: 0xc6bf0000  lwc1        $f31, 0x0($s5)
    ctx->pc = 0x298d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x298d0c: 0x4602f082  mul.s       $f2, $f30, $f2
    ctx->pc = 0x298d0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[30], ctx->f[2]);
    // 0x298d10: 0xc7be0150  lwc1        $f30, 0x150($sp)
    ctx->pc = 0x298d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x298d14: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x298d14u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x298d18: 0x46007bc0  add.s       $f15, $f15, $f0
    ctx->pc = 0x298d18u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x298d1c: 0x461effc0  add.s       $f31, $f31, $f30
    ctx->pc = 0x298d1cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], ctx->f[30]);
    // 0x298d20: 0xc7be0044  lwc1        $f30, 0x44($sp)
    ctx->pc = 0x298d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x298d24: 0x4604dec0  add.s       $f27, $f27, $f4
    ctx->pc = 0x298d24u;
    ctx->f[27] = FPU_ADD_S(ctx->f[27], ctx->f[4]);
    // 0x298d28: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x298d28u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x298d2c: 0xe7bf0154  swc1        $f31, 0x154($sp)
    ctx->pc = 0x298d2cu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x298d30: 0x461e2942  mul.s       $f5, $f5, $f30
    ctx->pc = 0x298d30u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[30]);
    // 0x298d34: 0xc7bf00fc  lwc1        $f31, 0xFC($sp)
    ctx->pc = 0x298d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x298d38: 0x46188c40  add.s       $f17, $f17, $f24
    ctx->pc = 0x298d38u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[24]);
    // 0x298d3c: 0x46029480  add.s       $f18, $f18, $f2
    ctx->pc = 0x298d3cu;
    ctx->f[18] = FPU_ADD_S(ctx->f[18], ctx->f[2]);
    // 0x298d40: 0x461effc2  mul.s       $f31, $f31, $f30
    ctx->pc = 0x298d40u;
    ctx->f[31] = FPU_MUL_S(ctx->f[31], ctx->f[30]);
    // 0x298d44: 0x4607ce40  add.s       $f25, $f25, $f7
    ctx->pc = 0x298d44u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[7]);
    // 0x298d48: 0x461d4a41  sub.s       $f9, $f9, $f29
    ctx->pc = 0x298d48u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[29]);
    // 0x298d4c: 0xe7bf0158  swc1        $f31, 0x158($sp)
    ctx->pc = 0x298d4cu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x298d50: 0x461b5ac1  sub.s       $f11, $f11, $f27
    ctx->pc = 0x298d50u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[27]);
    // 0x298d54: 0xc7be0100  lwc1        $f30, 0x100($sp)
    ctx->pc = 0x298d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x298d58: 0x46198c41  sub.s       $f17, $f17, $f25
    ctx->pc = 0x298d58u;
    ctx->f[17] = FPU_SUB_S(ctx->f[17], ctx->f[25]);
    // 0x298d5c: 0xc7bf0040  lwc1        $f31, 0x40($sp)
    ctx->pc = 0x298d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x298d60: 0x461e6b40  add.s       $f13, $f13, $f30
    ctx->pc = 0x298d60u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[30]);
    // 0x298d64: 0xc7aa01a4  lwc1        $f10, 0x1A4($sp)
    ctx->pc = 0x298d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x298d68: 0xc7be01a0  lwc1        $f30, 0x1A0($sp)
    ctx->pc = 0x298d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x298d6c: 0x461f3182  mul.s       $f6, $f6, $f31
    ctx->pc = 0x298d6cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[31]);
    // 0x298d70: 0xc7a80140  lwc1        $f8, 0x140($sp)
    ctx->pc = 0x298d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x298d74: 0x4610f7c0  add.s       $f31, $f30, $f16
    ctx->pc = 0x298d74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[30], ctx->f[16]);
    // 0x298d78: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x298d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298d7c: 0x46035780  add.s       $f30, $f10, $f3
    ctx->pc = 0x298d7cu;
    ctx->f[30] = FPU_ADD_S(ctx->f[10], ctx->f[3]);
    // 0x298d80: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x298d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298d84: 0x461344c0  add.s       $f19, $f8, $f19
    ctx->pc = 0x298d84u;
    ctx->f[19] = FPU_ADD_S(ctx->f[8], ctx->f[19]);
    // 0x298d88: 0xc7aa0130  lwc1        $f10, 0x130($sp)
    ctx->pc = 0x298d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x298d8c: 0xc7a40138  lwc1        $f4, 0x138($sp)
    ctx->pc = 0x298d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x298d90: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x298d90u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x298d94: 0x460a00c0  add.s       $f3, $f0, $f10
    ctx->pc = 0x298d94u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x298d98: 0xc7a20158  lwc1        $f2, 0x158($sp)
    ctx->pc = 0x298d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x298d9c: 0xe7b30144  swc1        $f19, 0x144($sp)
    ctx->pc = 0x298d9cu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x298da0: 0x46040800  add.s       $f0, $f1, $f4
    ctx->pc = 0x298da0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x298da4: 0xc7aa0148  lwc1        $f10, 0x148($sp)
    ctx->pc = 0x298da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x298da8: 0x461f6b41  sub.s       $f13, $f13, $f31
    ctx->pc = 0x298da8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[31]);
    // 0x298dac: 0xc7b3014c  lwc1        $f19, 0x14C($sp)
    ctx->pc = 0x298dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x298db0: 0x46037bc1  sub.s       $f15, $f15, $f3
    ctx->pc = 0x298db0u;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[3]);
    // 0x298db4: 0xc7b80154  lwc1        $f24, 0x154($sp)
    ctx->pc = 0x298db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x298db8: 0x461e7381  sub.s       $f14, $f14, $f30
    ctx->pc = 0x298db8u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[30]);
    // 0x298dbc: 0x46135040  add.s       $f1, $f10, $f19
    ctx->pc = 0x298dbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[10], ctx->f[19]);
    // 0x298dc0: 0xc7a30144  lwc1        $f3, 0x144($sp)
    ctx->pc = 0x298dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x298dc4: 0x4602c600  add.s       $f24, $f24, $f2
    ctx->pc = 0x298dc4u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
    // 0x298dc8: 0xe7ad0050  swc1        $f13, 0x50($sp)
    ctx->pc = 0x298dc8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x298dcc: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x298dccu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x298dd0: 0xe7ae0054  swc1        $f14, 0x54($sp)
    ctx->pc = 0x298dd0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x298dd4: 0x461c1981  sub.s       $f6, $f3, $f28
    ctx->pc = 0x298dd4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[28]);
    // 0x298dd8: 0xe7af0058  swc1        $f15, 0x58($sp)
    ctx->pc = 0x298dd8u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x298ddc: 0x46019481  sub.s       $f18, $f18, $f1
    ctx->pc = 0x298ddcu;
    ctx->f[18] = FPU_SUB_S(ctx->f[18], ctx->f[1]);
    // 0x298de0: 0xe7a90060  swc1        $f9, 0x60($sp)
    ctx->pc = 0x298de0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x298de4: 0x4605c141  sub.s       $f5, $f24, $f5
    ctx->pc = 0x298de4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[24], ctx->f[5]);
    // 0x298de8: 0xe7ab0064  swc1        $f11, 0x64($sp)
    ctx->pc = 0x298de8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x298dec: 0xe7ac0068  swc1        $f12, 0x68($sp)
    ctx->pc = 0x298decu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x298df0: 0xe7a60070  swc1        $f6, 0x70($sp)
    ctx->pc = 0x298df0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x298df4: 0xe7b10074  swc1        $f17, 0x74($sp)
    ctx->pc = 0x298df4u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x298df8: 0xc7a70040  lwc1        $f7, 0x40($sp)
    ctx->pc = 0x298df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x298dfc: 0xe7b20078  swc1        $f18, 0x78($sp)
    ctx->pc = 0x298dfcu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x298e00: 0xc7a40104  lwc1        $f4, 0x104($sp)
    ctx->pc = 0x298e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x298e04: 0xe7a50080  swc1        $f5, 0x80($sp)
    ctx->pc = 0x298e04u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x298e08: 0x46072002  mul.s       $f0, $f4, $f7
    ctx->pc = 0x298e08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x298e0c: 0xe7b8015c  swc1        $f24, 0x15C($sp)
    ctx->pc = 0x298e0cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x298e10: 0xc6b80004  lwc1        $f24, 0x4($s5)
    ctx->pc = 0x298e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x298e14: 0xc7b30044  lwc1        $f19, 0x44($sp)
    ctx->pc = 0x298e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x298e18: 0x4600c000  add.s       $f0, $f24, $f0
    ctx->pc = 0x298e18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x298e1c: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x298e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298e20: 0xc7a8011c  lwc1        $f8, 0x11C($sp)
    ctx->pc = 0x298e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x298e24: 0x4613ad42  mul.s       $f21, $f21, $f19
    ctx->pc = 0x298e24u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[19]);
    // 0x298e28: 0xc7aa0108  lwc1        $f10, 0x108($sp)
    ctx->pc = 0x298e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x298e2c: 0x46016b41  sub.s       $f13, $f13, $f1
    ctx->pc = 0x298e2cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x298e30: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x298e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x298e34: 0x460740c2  mul.s       $f3, $f8, $f7
    ctx->pc = 0x298e34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x298e38: 0xc7b90110  lwc1        $f25, 0x110($sp)
    ctx->pc = 0x298e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x298e3c: 0x46135102  mul.s       $f4, $f10, $f19
    ctx->pc = 0x298e3cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[19]);
    // 0x298e40: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x298e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x298e44: 0x46014a41  sub.s       $f9, $f9, $f1
    ctx->pc = 0x298e44u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x298e48: 0x4613ce42  mul.s       $f25, $f25, $f19
    ctx->pc = 0x298e48u;
    ctx->f[25] = FPU_MUL_S(ctx->f[25], ctx->f[19]);
    // 0x298e4c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x298e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298e50: 0x8fb800e0  lw          $t8, 0xE0($sp)
    ctx->pc = 0x298e50u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x298e54: 0x46027381  sub.s       $f14, $f14, $f2
    ctx->pc = 0x298e54u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[2]);
    // 0x298e58: 0x46007bc1  sub.s       $f15, $f15, $f0
    ctx->pc = 0x298e58u;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[0]);
    // 0x298e5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x298e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x298e60: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x298e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x298e64: 0xe7b90168  swc1        $f25, 0x168($sp)
    ctx->pc = 0x298e64u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x298e68: 0x4603a500  add.s       $f20, $f20, $f3
    ctx->pc = 0x298e68u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
    // 0x298e6c: 0xe52d0000  swc1        $f13, 0x0($t1)
    ctx->pc = 0x298e6cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x298e70: 0x46025ac1  sub.s       $f11, $f11, $f2
    ctx->pc = 0x298e70u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[2]);
    // 0x298e74: 0x8f021184  lw          $v0, 0x1184($t8)
    ctx->pc = 0x298e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4484)));
    // 0x298e78: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x298e78u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x298e7c: 0xc7a80118  lwc1        $f8, 0x118($sp)
    ctx->pc = 0x298e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x298e80: 0x46013181  sub.s       $f6, $f6, $f1
    ctx->pc = 0x298e80u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x298e84: 0x46028c41  sub.s       $f17, $f17, $f2
    ctx->pc = 0x298e84u;
    ctx->f[17] = FPU_SUB_S(ctx->f[17], ctx->f[2]);
    // 0x298e88: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x298e88u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x298e8c: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x298e8cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x298e90: 0x46009481  sub.s       $f18, $f18, $f0
    ctx->pc = 0x298e90u;
    ctx->f[18] = FPU_SUB_S(ctx->f[18], ctx->f[0]);
    // 0x298e94: 0xe7a7016c  swc1        $f7, 0x16C($sp)
    ctx->pc = 0x298e94u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x298e98: 0xe54e0004  swc1        $f14, 0x4($t2)
    ctx->pc = 0x298e98u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x298e9c: 0xe56f0008  swc1        $f15, 0x8($t3)
    ctx->pc = 0x298e9cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x298ea0: 0xe58a000c  swc1        $f10, 0xC($t4)
    ctx->pc = 0x298ea0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
    // 0x298ea4: 0xc7b3012c  lwc1        $f19, 0x12C($sp)
    ctx->pc = 0x298ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x298ea8: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x298ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x298eac: 0x46189cc2  mul.s       $f19, $f19, $f24
    ctx->pc = 0x298eacu;
    ctx->f[19] = FPU_MUL_S(ctx->f[19], ctx->f[24]);
    // 0x298eb0: 0xe7b30178  swc1        $f19, 0x178($sp)
    ctx->pc = 0x298eb0u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x298eb4: 0x4613ad40  add.s       $f21, $f21, $f19
    ctx->pc = 0x298eb4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[19]);
    // 0x298eb8: 0xe5a90010  swc1        $f9, 0x10($t5)
    ctx->pc = 0x298eb8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 16), bits); }
    // 0x298ebc: 0xc7a30168  lwc1        $f3, 0x168($sp)
    ctx->pc = 0x298ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x298ec0: 0xc7bf0160  lwc1        $f31, 0x160($sp)
    ctx->pc = 0x298ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x298ec4: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x298ec4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x298ec8: 0xc7b90120  lwc1        $f25, 0x120($sp)
    ctx->pc = 0x298ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x298ecc: 0x4604f900  add.s       $f4, $f31, $f4
    ctx->pc = 0x298eccu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], ctx->f[4]);
    // 0x298ed0: 0xc7be0044  lwc1        $f30, 0x44($sp)
    ctx->pc = 0x298ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x298ed4: 0xe7a30170  swc1        $f3, 0x170($sp)
    ctx->pc = 0x298ed4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x298ed8: 0x461ecbc2  mul.s       $f15, $f25, $f30
    ctx->pc = 0x298ed8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[25], ctx->f[30]);
    // 0x298edc: 0xe5cb0014  swc1        $f11, 0x14($t6)
    ctx->pc = 0x298edcu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 20), bits); }
    // 0x298ee0: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x298ee0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x298ee4: 0xe5ec0018  swc1        $f12, 0x18($t7)
    ctx->pc = 0x298ee4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 24), bits); }
    // 0x298ee8: 0xe62a001c  swc1        $f10, 0x1C($s1)
    ctx->pc = 0x298ee8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x298eec: 0x460fa500  add.s       $f20, $f20, $f15
    ctx->pc = 0x298eecu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[15]);
    // 0x298ef0: 0xe6460020  swc1        $f6, 0x20($s2)
    ctx->pc = 0x298ef0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x298ef4: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x298ef4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x298ef8: 0xe7a40174  swc1        $f4, 0x174($sp)
    ctx->pc = 0x298ef8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x298efc: 0xe4710024  swc1        $f17, 0x24($v1)
    ctx->pc = 0x298efcu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x298f00: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x298f00u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x298f04: 0xe7a5017c  swc1        $f5, 0x17C($sp)
    ctx->pc = 0x298f04u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x298f08: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x298f08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x298f0c: 0xe4d20028  swc1        $f18, 0x28($a2)
    ctx->pc = 0x298f0cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x298f10: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x298f10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x298f14: 0xe50a002c  swc1        $f10, 0x2C($t0)
    ctx->pc = 0x298f14u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 44), bits); }
    // 0x298f18: 0xc7a6017c  lwc1        $f6, 0x17C($sp)
    ctx->pc = 0x298f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x298f1c: 0xe4e60030  swc1        $f6, 0x30($a3)
    ctx->pc = 0x298f1cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x298f20: 0xe4820034  swc1        $f2, 0x34($a0)
    ctx->pc = 0x298f20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x298f24: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x298f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x298f28: 0xe60a003c  swc1        $f10, 0x3C($s0)
    ctx->pc = 0x298f28u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x298f2c: 0xe7b40088  swc1        $f20, 0x88($sp)
    ctx->pc = 0x298f2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x298f30: 0x104000f1  beqz        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x298F30u;
    {
        const bool branch_taken_0x298f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F30u;
        // 0x298f34: 0x7bb90190  lq          $t9, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f30) {
            ctx->pc = 0x2992F8u;
            goto label_2992f8;
        }
    }
    ctx->pc = 0x298F38u;
    // 0x298f38: 0xc7210000  lwc1        $f1, 0x0($t9)
    ctx->pc = 0x298f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298f3c: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x298f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x298f40: 0xc6a5000c  lwc1        $f5, 0xC($s5)
    ctx->pc = 0x298f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x298f44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x298f44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f48: 0x46015181  sub.s       $f6, $f10, $f1
    ctx->pc = 0x298f48u;
    ctx->f[6] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x298f4c: 0xc6c3000c  lwc1        $f3, 0xC($s6)
    ctx->pc = 0x298f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x298f50: 0xc6e2000c  lwc1        $f2, 0xC($s7)
    ctx->pc = 0x298f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x298f54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x298f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f58: 0xc7c0000c  lwc1        $f0, 0xC($fp)
    ctx->pc = 0x298f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298f5c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x298f5cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x298f60: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x298f60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x298f64: 0xc7240004  lwc1        $f4, 0x4($t9)
    ctx->pc = 0x298f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x298f68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x298f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x298f6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x298f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f70: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x298f70u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x298f74: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x298f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f78: 0x46045041  sub.s       $f1, $f10, $f4
    ctx->pc = 0x298f78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[10], ctx->f[4]);
    // 0x298f7c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x298f7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f80: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x298f80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x298f84: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x298f84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f88: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x298f88u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x298f8c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x298f8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f90: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x298f90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f94: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x298f94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f98: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x298f98u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x298f9c: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x298f9cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298fa0: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x298fa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x298fa4: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x298fa4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298fa8: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x298fa8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298fac: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x298facu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298fb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x298fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298fb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x298fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298fb8: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x298fb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x298fbc: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x298fbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x298fc0: 0xc7200000  lwc1        $f0, 0x0($t9)
    ctx->pc = 0x298fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298fc4: 0xc6a50010  lwc1        $f5, 0x10($s5)
    ctx->pc = 0x298fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x298fc8: 0x46005181  sub.s       $f6, $f10, $f0
    ctx->pc = 0x298fc8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x298fcc: 0xc6c40010  lwc1        $f4, 0x10($s6)
    ctx->pc = 0x298fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x298fd0: 0xc6e30010  lwc1        $f3, 0x10($s7)
    ctx->pc = 0x298fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x298fd4: 0xc7c20010  lwc1        $f2, 0x10($fp)
    ctx->pc = 0x298fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x298fd8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x298fd8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x298fdc: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x298fdcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x298fe0: 0xc7210004  lwc1        $f1, 0x4($t9)
    ctx->pc = 0x298fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298fe4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x298fe4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x298fe8: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x298fe8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x298fec: 0x46015001  sub.s       $f0, $f10, $f1
    ctx->pc = 0x298fecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x298ff0: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x298ff0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x298ff4: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x298ff4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x298ff8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x298ff8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x298ffc: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x298ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x299000: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299004: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x299004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x299008: 0xc7240000  lwc1        $f4, 0x0($t9)
    ctx->pc = 0x299008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29900c: 0xc6a60014  lwc1        $f6, 0x14($s5)
    ctx->pc = 0x29900cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x299010: 0x460451c1  sub.s       $f7, $f10, $f4
    ctx->pc = 0x299010u;
    ctx->f[7] = FPU_SUB_S(ctx->f[10], ctx->f[4]);
    // 0x299014: 0xc6c50014  lwc1        $f5, 0x14($s6)
    ctx->pc = 0x299014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x299018: 0xc6e30014  lwc1        $f3, 0x14($s7)
    ctx->pc = 0x299018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29901c: 0xc7c20014  lwc1        $f2, 0x14($fp)
    ctx->pc = 0x29901cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299020: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x299020u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x299024: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x299024u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x299028: 0xc7210004  lwc1        $f1, 0x4($t9)
    ctx->pc = 0x299028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29902c: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x29902cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x299030: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x299030u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x299034: 0x46015001  sub.s       $f0, $f10, $f1
    ctx->pc = 0x299034u;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x299038: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x299038u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x29903c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x29903cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x299040: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x299040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x299044: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x299044u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x299048: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29904c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x29904cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x299050: 0xe48a000c  swc1        $f10, 0xC($a0)
    ctx->pc = 0x299050u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x299054: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x299054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x299058: 0xc6a5000c  lwc1        $f5, 0xC($s5)
    ctx->pc = 0x299058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29905c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29905cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299060: 0xc6c4000c  lwc1        $f4, 0xC($s6)
    ctx->pc = 0x299060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x299064: 0x46005181  sub.s       $f6, $f10, $f0
    ctx->pc = 0x299064u;
    ctx->f[6] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x299068: 0xc6e3000c  lwc1        $f3, 0xC($s7)
    ctx->pc = 0x299068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29906c: 0xc7c2000c  lwc1        $f2, 0xC($fp)
    ctx->pc = 0x29906cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299070: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x299070u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x299074: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x299074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299078: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x299078u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x29907c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x29907cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x299080: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x299080u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x299084: 0x46015001  sub.s       $f0, $f10, $f1
    ctx->pc = 0x299084u;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x299088: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x299088u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x29908c: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x29908cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x299090: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x299090u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x299094: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x299094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x299098: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29909c: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x29909cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x2990a0: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2990a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2990a4: 0xc6a60010  lwc1        $f6, 0x10($s5)
    ctx->pc = 0x2990a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2990a8: 0x460451c1  sub.s       $f7, $f10, $f4
    ctx->pc = 0x2990a8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[10], ctx->f[4]);
    // 0x2990ac: 0xc6c50010  lwc1        $f5, 0x10($s6)
    ctx->pc = 0x2990acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2990b0: 0xc6e30010  lwc1        $f3, 0x10($s7)
    ctx->pc = 0x2990b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2990b4: 0xc7c20010  lwc1        $f2, 0x10($fp)
    ctx->pc = 0x2990b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2990b8: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x2990b8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2990bc: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x2990bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2990c0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2990c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2990c4: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x2990c4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x2990c8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2990c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2990cc: 0x46015001  sub.s       $f0, $f10, $f1
    ctx->pc = 0x2990ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x2990d0: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x2990d0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x2990d4: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2990d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2990d8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2990d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2990dc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2990dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2990e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2990e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2990e4: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x2990e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x2990e8: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2990e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2990ec: 0xc6a60014  lwc1        $f6, 0x14($s5)
    ctx->pc = 0x2990ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2990f0: 0x460451c1  sub.s       $f7, $f10, $f4
    ctx->pc = 0x2990f0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[10], ctx->f[4]);
    // 0x2990f4: 0xc6c50014  lwc1        $f5, 0x14($s6)
    ctx->pc = 0x2990f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2990f8: 0xc6e30014  lwc1        $f3, 0x14($s7)
    ctx->pc = 0x2990f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2990fc: 0xc7c20014  lwc1        $f2, 0x14($fp)
    ctx->pc = 0x2990fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299100: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x299100u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x299104: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x299104u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x299108: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x299108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29910c: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x29910cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x299110: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x299110u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x299114: 0x46015001  sub.s       $f0, $f10, $f1
    ctx->pc = 0x299114u;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x299118: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x299118u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x29911c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x29911cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x299120: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x299120u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x299124: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x299124u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x299128: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29912c: 0xe5200018  swc1        $f0, 0x18($t1)
    ctx->pc = 0x29912cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 24), bits); }
    // 0x299130: 0xe50a001c  swc1        $f10, 0x1C($t0)
    ctx->pc = 0x299130u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
    // 0x299134: 0x8fa302d8  lw          $v1, 0x2D8($sp)
    ctx->pc = 0x299134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x299138: 0xc6a5000c  lwc1        $f5, 0xC($s5)
    ctx->pc = 0x299138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29913c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29913cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299140: 0xc6c4000c  lwc1        $f4, 0xC($s6)
    ctx->pc = 0x299140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x299144: 0x46005181  sub.s       $f6, $f10, $f0
    ctx->pc = 0x299144u;
    ctx->f[6] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x299148: 0xc6e3000c  lwc1        $f3, 0xC($s7)
    ctx->pc = 0x299148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29914c: 0xc7c2000c  lwc1        $f2, 0xC($fp)
    ctx->pc = 0x29914cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299150: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x299150u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x299154: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x299154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299158: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x299158u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x29915c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x29915cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x299160: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x299160u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x299164: 0x46015001  sub.s       $f0, $f10, $f1
    ctx->pc = 0x299164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x299168: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x299168u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x29916c: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x29916cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x299170: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x299170u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x299174: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x299174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x299178: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29917c: 0xe5400020  swc1        $f0, 0x20($t2)
    ctx->pc = 0x29917cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 32), bits); }
    // 0x299180: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x299180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x299184: 0xc6a60010  lwc1        $f6, 0x10($s5)
    ctx->pc = 0x299184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x299188: 0x460451c1  sub.s       $f7, $f10, $f4
    ctx->pc = 0x299188u;
    ctx->f[7] = FPU_SUB_S(ctx->f[10], ctx->f[4]);
    // 0x29918c: 0xc6c50010  lwc1        $f5, 0x10($s6)
    ctx->pc = 0x29918cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x299190: 0xc6e30010  lwc1        $f3, 0x10($s7)
    ctx->pc = 0x299190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x299194: 0xc7c20010  lwc1        $f2, 0x10($fp)
    ctx->pc = 0x299194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299198: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x299198u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x29919c: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x29919cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2991a0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2991a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2991a4: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x2991a4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x2991a8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2991a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2991ac: 0x46015001  sub.s       $f0, $f10, $f1
    ctx->pc = 0x2991acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x2991b0: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x2991b0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x2991b4: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2991b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2991b8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2991b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2991bc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2991bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2991c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2991c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2991c4: 0xe5600024  swc1        $f0, 0x24($t3)
    ctx->pc = 0x2991c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 36), bits); }
    // 0x2991c8: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x2991c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2991cc: 0xc6a60014  lwc1        $f6, 0x14($s5)
    ctx->pc = 0x2991ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2991d0: 0x460451c1  sub.s       $f7, $f10, $f4
    ctx->pc = 0x2991d0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[10], ctx->f[4]);
    // 0x2991d4: 0xc6c50014  lwc1        $f5, 0x14($s6)
    ctx->pc = 0x2991d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2991d8: 0xc6e30014  lwc1        $f3, 0x14($s7)
    ctx->pc = 0x2991d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2991dc: 0xc7c20014  lwc1        $f2, 0x14($fp)
    ctx->pc = 0x2991dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2991e0: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x2991e0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2991e4: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x2991e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2991e8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2991e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2991ec: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x2991ecu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x2991f0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2991f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2991f4: 0x46015001  sub.s       $f0, $f10, $f1
    ctx->pc = 0x2991f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x2991f8: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x2991f8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x2991fc: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2991fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x299200: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x299200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x299204: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x299204u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x299208: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299208u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29920c: 0xe5a00028  swc1        $f0, 0x28($t5)
    ctx->pc = 0x29920cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 40), bits); }
    // 0x299210: 0xe58a002c  swc1        $f10, 0x2C($t4)
    ctx->pc = 0x299210u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 44), bits); }
    // 0x299214: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x299214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x299218: 0xc6a5000c  lwc1        $f5, 0xC($s5)
    ctx->pc = 0x299218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29921c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x29921cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299220: 0xc6c4000c  lwc1        $f4, 0xC($s6)
    ctx->pc = 0x299220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x299224: 0x46005181  sub.s       $f6, $f10, $f0
    ctx->pc = 0x299224u;
    ctx->f[6] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x299228: 0xc6e3000c  lwc1        $f3, 0xC($s7)
    ctx->pc = 0x299228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29922c: 0xc7c2000c  lwc1        $f2, 0xC($fp)
    ctx->pc = 0x29922cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299230: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x299230u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x299234: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x299234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299238: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x299238u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x29923c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x29923cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x299240: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x299240u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x299244: 0x46015001  sub.s       $f0, $f10, $f1
    ctx->pc = 0x299244u;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x299248: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x299248u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x29924c: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x29924cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x299250: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x299250u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x299254: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x299254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x299258: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29925c: 0xe5c00030  swc1        $f0, 0x30($t6)
    ctx->pc = 0x29925cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 48), bits); }
    // 0x299260: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x299260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x299264: 0xc6a60010  lwc1        $f6, 0x10($s5)
    ctx->pc = 0x299264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x299268: 0x460451c1  sub.s       $f7, $f10, $f4
    ctx->pc = 0x299268u;
    ctx->f[7] = FPU_SUB_S(ctx->f[10], ctx->f[4]);
    // 0x29926c: 0xc6c50010  lwc1        $f5, 0x10($s6)
    ctx->pc = 0x29926cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x299270: 0xc6e30010  lwc1        $f3, 0x10($s7)
    ctx->pc = 0x299270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x299274: 0xc7c20010  lwc1        $f2, 0x10($fp)
    ctx->pc = 0x299274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299278: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x299278u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x29927c: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x29927cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x299280: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x299280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299284: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x299284u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x299288: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x299288u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x29928c: 0x46015001  sub.s       $f0, $f10, $f1
    ctx->pc = 0x29928cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x299290: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x299290u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x299294: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x299294u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x299298: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x299298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x29929c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x29929cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2992a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2992a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2992a4: 0xe5e00034  swc1        $f0, 0x34($t7)
    ctx->pc = 0x2992a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 52), bits); }
    // 0x2992a8: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x2992a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2992ac: 0xc6a60014  lwc1        $f6, 0x14($s5)
    ctx->pc = 0x2992acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2992b0: 0x460451c1  sub.s       $f7, $f10, $f4
    ctx->pc = 0x2992b0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[10], ctx->f[4]);
    // 0x2992b4: 0xc6c50014  lwc1        $f5, 0x14($s6)
    ctx->pc = 0x2992b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2992b8: 0xc6e30014  lwc1        $f3, 0x14($s7)
    ctx->pc = 0x2992b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2992bc: 0xc7c20014  lwc1        $f2, 0x14($fp)
    ctx->pc = 0x2992bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2992c0: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x2992c0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2992c4: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x2992c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2992c8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2992c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2992cc: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2992ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2992d0: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x2992d0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x2992d4: 0x46015001  sub.s       $f0, $f10, $f1
    ctx->pc = 0x2992d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x2992d8: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2992d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2992dc: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x2992dcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x2992e0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2992e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2992e4: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2992e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2992e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2992e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2992ec: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2992ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2992f0: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2992F0u;
    {
        const bool branch_taken_0x2992f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2992F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2992F0u;
        // 0x2992f4: 0xe62a003c  swc1        $f10, 0x3C($s1) (Delay Slot)
        { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2992f0) {
            ctx->pc = 0x2994B4u;
            goto label_2994b4;
        }
    }
    ctx->pc = 0x2992F8u;
label_2992f8:
    // 0x2992f8: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x2992f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2992fc: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x2992fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x299300: 0xc6c6000c  lwc1        $f6, 0xC($s6)
    ctx->pc = 0x299300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x299304: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x299304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299308: 0xc6e5000c  lwc1        $f5, 0xC($s7)
    ctx->pc = 0x299308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29930c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29930cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299310: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x299310u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x299314: 0xc7210000  lwc1        $f1, 0x0($t9)
    ctx->pc = 0x299314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299318: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x299318u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x29931c: 0xc7220004  lwc1        $f2, 0x4($t9)
    ctx->pc = 0x29931cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299320: 0xc6a30010  lwc1        $f3, 0x10($s5)
    ctx->pc = 0x299320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x299324: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x299324u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299328: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x299328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x29932c: 0xc6c70010  lwc1        $f7, 0x10($s6)
    ctx->pc = 0x29932cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x299330: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x299330u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x299334: 0xc6e40010  lwc1        $f4, 0x10($s7)
    ctx->pc = 0x299334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x299338: 0x460339c1  sub.s       $f7, $f7, $f3
    ctx->pc = 0x299338u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[3]);
    // 0x29933c: 0xe7a600a0  swc1        $f6, 0xA0($sp)
    ctx->pc = 0x29933cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x299340: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299340u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299344: 0xe7a500b0  swc1        $f5, 0xB0($sp)
    ctx->pc = 0x299344u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x299348: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x299348u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x29934c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29934cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299350: 0xe7a700a4  swc1        $f7, 0xA4($sp)
    ctx->pc = 0x299350u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x299354: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x299354u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299358: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x299358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x29935c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x29935cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299360: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x299360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299364: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x299364u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299368: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x299368u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29936c: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x29936cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299370: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x299370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x299374: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x299374u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299378: 0xe7a400b4  swc1        $f4, 0xB4($sp)
    ctx->pc = 0x299378u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x29937c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29937cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299380: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x299380u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299384: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x299384u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299388: 0xc7220000  lwc1        $f2, 0x0($t9)
    ctx->pc = 0x299388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29938c: 0xc7210004  lwc1        $f1, 0x4($t9)
    ctx->pc = 0x29938cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299390: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x299390u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x299394: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x299394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299398: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x299398u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x29939c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x29939cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2993a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2993a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2993a4: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x2993a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2993a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2993a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2993ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2993acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2993b0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2993b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2993b4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2993b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2993b8: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x2993b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2993bc: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x2993bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2993c0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2993c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2993c4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2993c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2993c8: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x2993c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x2993cc: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2993ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2993d0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2993d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2993d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2993d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2993d8: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x2993d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2993dc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2993dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2993e0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2993e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2993e4: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x2993e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x2993e8: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x2993e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2993ec: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2993ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2993f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2993f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2993f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2993f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2993f8: 0xe5200014  swc1        $f0, 0x14($t1)
    ctx->pc = 0x2993f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 20), bits); }
    // 0x2993fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2993fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x299400: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299404: 0xe5000018  swc1        $f0, 0x18($t0)
    ctx->pc = 0x299404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x299408: 0xe4e0001c  swc1        $f0, 0x1C($a3)
    ctx->pc = 0x299408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
    // 0x29940c: 0x8fa302d8  lw          $v1, 0x2D8($sp)
    ctx->pc = 0x29940cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x299410: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x299410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299414: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x299414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299418: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x299418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29941c: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x29941cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x299420: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x299420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x299424: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x299424u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x299428: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x299428u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29942c: 0xe5410020  swc1        $f1, 0x20($t2)
    ctx->pc = 0x29942cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 32), bits); }
    // 0x299430: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x299430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299434: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x299434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299438: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x299438u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x29943c: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x29943cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299440: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x299440u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x299444: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x299444u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x299448: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29944c: 0xe5a00024  swc1        $f0, 0x24($t5)
    ctx->pc = 0x29944cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 36), bits); }
    // 0x299450: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x299450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x299454: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299458: 0xe5800028  swc1        $f0, 0x28($t4)
    ctx->pc = 0x299458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 40), bits); }
    // 0x29945c: 0xe560002c  swc1        $f0, 0x2C($t3)
    ctx->pc = 0x29945cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 44), bits); }
    // 0x299460: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x299460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x299464: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x299464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299468: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x299468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29946c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x29946cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299470: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x299470u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x299474: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x299474u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x299478: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x299478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x29947c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x29947cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x299480: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x299480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x299484: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x299484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299488: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x299488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29948c: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x29948cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x299490: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x299490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299494: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x299494u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x299498: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x299498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x29949c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x29949cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2994a0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2994a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2994a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2994a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2994a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2994a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2994ac: 0xe5e00038  swc1        $f0, 0x38($t7)
    ctx->pc = 0x2994acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 56), bits); }
    // 0x2994b0: 0xe5c0003c  swc1        $f0, 0x3C($t6)
    ctx->pc = 0x2994b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 60), bits); }
label_2994b4:
    // 0x2994b4: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x2994b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x2994b8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2994b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2994bc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2994bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2994c0: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x2994c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2994c4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2994c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2994c8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2994c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2994cc: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2994ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2994d0: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x2994d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2994d4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2994d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2994d8: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x2994d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2994dc: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x2994dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2994e0: 0x0  nop
    ctx->pc = 0x2994e0u;
    // NOP
    // 0x2994e4: 0x0  nop
    ctx->pc = 0x2994e4u;
    // NOP
    // 0x2994e8: 0x460c0504  c1          0xC0504
    ctx->pc = 0x2994e8u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[12]);
    // 0x2994ec: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x2994ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2994f0: 0x0  nop
    ctx->pc = 0x2994f0u;
    // NOP
    // 0x2994f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2994F4u;
    {
        const bool branch_taken_0x2994f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2994F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2994F4u;
        // 0x2994f8: 0xe7a100c4  swc1        $f1, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2994f4) {
            ctx->pc = 0x299508u;
            goto label_299508;
        }
    }
    ctx->pc = 0x2994FCu;
    // 0x2994fc: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2994FCu;
    SET_GPR_U32(ctx, 31, 0x299504u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2994FCu, 0x299504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299504u;
label_299504:
    // 0x299504: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x299504u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_299508:
    // 0x299508: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x299508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x29950c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29950cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x299510: 0x0  nop
    ctx->pc = 0x299510u;
    // NOP
    // 0x299514: 0x0  nop
    ctx->pc = 0x299514u;
    // NOP
    // 0x299518: 0x460c0004  c1          0xC0004
    ctx->pc = 0x299518u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x29951c: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x29951cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299520: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x299520u;
    {
        const bool branch_taken_0x299520 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x299520) {
            ctx->pc = 0x299530u;
            goto label_299530;
        }
    }
    ctx->pc = 0x299528u;
    // 0x299528: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x299528u;
    SET_GPR_U32(ctx, 31, 0x299530u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x299528u, 0x299530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299530u;
label_299530:
    // 0x299530: 0x0  nop
    ctx->pc = 0x299530u;
    // NOP
    // 0x299534: 0x0  nop
    ctx->pc = 0x299534u;
    // NOP
    // 0x299538: 0x4600a543  div.s       $f21, $f20, $f0
    ctx->pc = 0x299538u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[21] = ctx->f[20] / ctx->f[0];
    // 0x29953c: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x29953cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
    // 0x299540: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x299540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299544: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x299544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x299548: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29954c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x29954cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x299550: 0x24630500  addiu       $v1, $v1, 0x500
    ctx->pc = 0x299550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1280));
    // 0x299554: 0xafa30184  sw          $v1, 0x184($sp)
    ctx->pc = 0x299554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 3));
    // 0x299558: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x299558u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x29955c: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x29955cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x299560: 0x46000d82  mul.s       $f22, $f1, $f0
    ctx->pc = 0x299560u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x299564: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x299564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299568: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x299568u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x29956c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x29956Cu;
    SET_GPR_U32(ctx, 31, 0x299574u);
    ctx->pc = 0x299570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29956Cu;
    // 0x299570: 0x46001502  mul.s       $f20, $f2, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x29956Cu, 0x299574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299574u;
label_299574:
    // 0x299574: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x299574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299578: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x299578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x29957c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29957cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x299580: 0x8fa902f0  lw          $t1, 0x2F0($sp)
    ctx->pc = 0x299580u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x299584: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x299584u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x299588: 0x8fb80184  lw          $t8, 0x184($sp)
    ctx->pc = 0x299588u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x29958c: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x29958cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299590: 0x461400c2  mul.s       $f3, $f0, $f20
    ctx->pc = 0x299590u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x299594: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299594u;
    {
        const bool branch_taken_0x299594 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x299598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299594u;
        // 0x299598: 0x3022821  addu        $a1, $t8, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299594) {
            ctx->pc = 0x2995A8u;
            goto label_2995a8;
        }
    }
    ctx->pc = 0x29959Cu;
    // 0x29959c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x29959cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2995a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2995A0u;
    {
        const bool branch_taken_0x2995a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2995A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2995A0u;
        // 0x2995a4: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2995a0) {
            ctx->pc = 0x2995C0u;
            goto label_2995c0;
        }
    }
    ctx->pc = 0x2995A8u;
label_2995a8:
    // 0x2995a8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2995a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2995ac: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2995acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2995b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2995b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2995b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2995b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2995b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2995b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2995bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2995bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2995c0:
    // 0x2995c0: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2995c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2995c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2995c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2995c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2995c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2995cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2995ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2995d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2995d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2995d4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2995d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2995d8: 0xc7818cd4  lwc1        $f1, -0x732C($gp)
    ctx->pc = 0x2995d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2995dc: 0x245e0504  addiu       $fp, $v0, 0x504
    ctx->pc = 0x2995dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1284));
    // 0x2995e0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2995e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2995e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2995e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2995e8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2995e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2995ec: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2995ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2995f0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2995F0u;
    SET_GPR_U32(ctx, 31, 0x2995F8u);
    ctx->pc = 0x2995F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2995F0u;
    // 0x2995f4: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2995F0u, 0x2995F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2995F8u;
label_2995f8:
    // 0x2995f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2995f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2995fc: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x2995fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x299600: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x299600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x299604: 0x8fa902f0  lw          $t1, 0x2F0($sp)
    ctx->pc = 0x299604u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x299608: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x299608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29960c: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x29960cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299610: 0x461400c2  mul.s       $f3, $f0, $f20
    ctx->pc = 0x299610u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x299614: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299614u;
    {
        const bool branch_taken_0x299614 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x299618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299614u;
        // 0x299618: 0x3c22821  addu        $a1, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299614) {
            ctx->pc = 0x299628u;
            goto label_299628;
        }
    }
    ctx->pc = 0x29961Cu;
    // 0x29961c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x29961cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299620: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x299620u;
    {
        const bool branch_taken_0x299620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299620u;
        // 0x299624: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x299620) {
            ctx->pc = 0x299640u;
            goto label_299640;
        }
    }
    ctx->pc = 0x299628u;
label_299628:
    // 0x299628: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x299628u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x29962c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x29962cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x299630: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x299630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299634: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x299634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299638: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x299638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29963c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29963cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_299640:
    // 0x299640: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x299640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x299644: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299648: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x299648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29964c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29964cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299650: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x299650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x299654: 0x8fb800e0  lw          $t8, 0xE0($sp)
    ctx->pc = 0x299654u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x299658: 0xc7818cd8  lwc1        $f1, -0x7328($gp)
    ctx->pc = 0x299658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29965c: 0x27170508  addiu       $s7, $t8, 0x508
    ctx->pc = 0x29965cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 24), 1288));
    // 0x299660: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x299660u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x299664: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x299664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x299668: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x299668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x29966c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x29966cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x299670: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x299670u;
    SET_GPR_U32(ctx, 31, 0x299678u);
    ctx->pc = 0x299674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299670u;
    // 0x299674: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x299670u, 0x299678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299678u;
label_299678:
    // 0x299678: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x299678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29967c: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x29967cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x299680: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x299680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x299684: 0x8fa902f0  lw          $t1, 0x2F0($sp)
    ctx->pc = 0x299684u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x299688: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x299688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29968c: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x29968cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299690: 0x461401c2  mul.s       $f7, $f0, $f20
    ctx->pc = 0x299690u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x299694: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299694u;
    {
        const bool branch_taken_0x299694 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x299698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299694u;
        // 0x299698: 0x2e24021  addu        $t0, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299694) {
            ctx->pc = 0x2996A8u;
            goto label_2996a8;
        }
    }
    ctx->pc = 0x29969Cu;
    // 0x29969c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x29969cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2996a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2996A0u;
    {
        const bool branch_taken_0x2996a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2996A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2996A0u;
        // 0x2996a4: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2996a0) {
            ctx->pc = 0x2996C0u;
            goto label_2996c0;
        }
    }
    ctx->pc = 0x2996A8u;
label_2996a8:
    // 0x2996a8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2996a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2996ac: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2996acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2996b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2996b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2996b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2996b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2996b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2996b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2996bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2996bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2996c0:
    // 0x2996c0: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2996c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2996c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2996c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2996c8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2996c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2996cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2996ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2996d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2996d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2996d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2996d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2996d8: 0xc7838cdc  lwc1        $f3, -0x7324($gp)
    ctx->pc = 0x2996d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2996dc: 0x8fb800e4  lw          $t8, 0xE4($sp)
    ctx->pc = 0x2996dcu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2996e0: 0xc7a400c0  lwc1        $f4, 0xC0($sp)
    ctx->pc = 0x2996e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2996e4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2996e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2996e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2996e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2996ec: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2996ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2996f0: 0x3023818  mult        $a3, $t8, $v0
    ctx->pc = 0x2996f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2996f4: 0xc7818ce0  lwc1        $f1, -0x7320($gp)
    ctx->pc = 0x2996f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2996f8: 0x46043081  sub.s       $f2, $f6, $f4
    ctx->pc = 0x2996f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x2996fc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2996fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x299700: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x299700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x299704: 0x181880  sll         $v1, $t8, 2
    ctx->pc = 0x299704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x299708: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x299708u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x29970c: 0x245608c0  addiu       $s6, $v0, 0x8C0
    ctx->pc = 0x29970cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 2240));
    // 0x299710: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x299710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x299714: 0x245508c4  addiu       $s5, $v0, 0x8C4
    ctx->pc = 0x299714u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 2244));
    // 0x299718: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x299718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x29971c: 0x2c73021  addu        $a2, $s6, $a3
    ctx->pc = 0x29971cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
    // 0x299720: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x299720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x299724: 0x245408c8  addiu       $s4, $v0, 0x8C8
    ctx->pc = 0x299724u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2248));
    // 0x299728: 0x2a72821  addu        $a1, $s5, $a3
    ctx->pc = 0x299728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x29972c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x29972cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x299730: 0x46003800  add.s       $f0, $f7, $f0
    ctx->pc = 0x299730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x299734: 0x2872021  addu        $a0, $s4, $a3
    ctx->pc = 0x299734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x299738: 0x24421040  addiu       $v0, $v0, 0x1040
    ctx->pc = 0x299738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4160));
    // 0x29973c: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x29973cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299740: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x299740u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x299744: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x299744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x299748: 0xe4c50000  swc1        $f5, 0x0($a2)
    ctx->pc = 0x299748u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x29974c: 0xe4a50000  swc1        $f5, 0x0($a1)
    ctx->pc = 0x29974cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x299750: 0xe4850000  swc1        $f5, 0x0($a0)
    ctx->pc = 0x299750u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x299754: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x299754u;
    {
        const bool branch_taken_0x299754 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x299758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299754u;
        // 0x299758: 0xe6610000  swc1        $f1, 0x0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x299754) {
            ctx->pc = 0x29976Cu;
            goto label_29976c;
        }
    }
    ctx->pc = 0x29975Cu;
    // 0x29975c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x29975cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x299760: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299764: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x299764u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x299768: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x299768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_29976c:
    // 0x29976c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x29976cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299770: 0x46013001  sub.s       $f0, $f6, $f1
    ctx->pc = 0x299770u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x299774: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x299774u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299778: 0x0  nop
    ctx->pc = 0x299778u;
    // NOP
    // 0x29977c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29977Cu;
    {
        const bool branch_taken_0x29977c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x299780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29977Cu;
        // 0x299780: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29977c) {
            ctx->pc = 0x299794u;
            goto label_299794;
        }
    }
    ctx->pc = 0x299784u;
    // 0x299784: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x299784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x299788: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29978c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29978cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x299790: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x299790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_299794:
    // 0x299794: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x299794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299798: 0x3c014190  lui         $at, 0x4190
    ctx->pc = 0x299798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16784 << 16));
    // 0x29979c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29979cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2997a0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2997a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2997a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2997a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2997a8: 0xc7a300d4  lwc1        $f3, 0xD4($sp)
    ctx->pc = 0x2997a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2997ac: 0x24720c80  addiu       $s2, $v1, 0xC80
    ctx->pc = 0x2997acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3200));
    // 0x2997b0: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x2997b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2997b4: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2997b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2997b8: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x2997b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x2997bc: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2997bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2997c0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2997c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2997c4: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x2997c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2997c8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2997c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2997cc: 0x24910c84  addiu       $s1, $a0, 0xC84
    ctx->pc = 0x2997ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 3204));
    // 0x2997d0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2997d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2997d4: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x2997d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2997d8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2997d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2997dc: 0x24900c88  addiu       $s0, $a0, 0xC88
    ctx->pc = 0x2997dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3208));
    // 0x2997e0: 0x2072021  addu        $a0, $s0, $a3
    ctx->pc = 0x2997e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2997e4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2997e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2997e8: 0xe7a300d4  swc1        $f3, 0xD4($sp)
    ctx->pc = 0x2997e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2997ec: 0x46041902  mul.s       $f4, $f3, $f4
    ctx->pc = 0x2997ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2997f0: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x2997f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2997f4: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2997f4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2997f8: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x2997f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2997fc: 0x8fa902f0  lw          $t1, 0x2F0($sp)
    ctx->pc = 0x2997fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x299800: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x299800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299804: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x299804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299808: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x299808u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x29980c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x29980cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x299810: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x299810u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x299814: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x299814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x299818: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x299818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29981c: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x29981cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299820: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x299820u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x299824: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x299824u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x299828: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x299828u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x29982c: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x29982cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x299830: 0x8fb80300  lw          $t8, 0x300($sp)
    ctx->pc = 0x299830u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x299834: 0x13000035  beqz        $t8, . + 4 + (0x35 << 2)
    ctx->pc = 0x299834u;
    {
        const bool branch_taken_0x299834 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x299838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299834u;
        // 0x299838: 0x8fa20308  lw          $v0, 0x308($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299834) {
            ctx->pc = 0x29990Cu;
            goto label_29990c;
        }
    }
    ctx->pc = 0x29983Cu;
    // 0x29983c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x29983cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x299840: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x299840u;
    {
        const bool branch_taken_0x299840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299840u;
        // 0x299844: 0xdfbf0240  ld          $ra, 0x240($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299840) {
            ctx->pc = 0x299910u;
            goto label_299910;
        }
    }
    ctx->pc = 0x299848u;
    // 0x299848: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x299848u;
    SET_GPR_U32(ctx, 31, 0x299850u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x299848u, 0x299850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299850u;
label_299850:
    // 0x299850: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x299850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x299854: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x299854u;
    {
        const bool branch_taken_0x299854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299854u;
        // 0x299858: 0xdfbf0240  ld          $ra, 0x240($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299854) {
            ctx->pc = 0x299910u;
            goto label_299910;
        }
    }
    ctx->pc = 0x29985Cu;
    // 0x29985c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x29985Cu;
    SET_GPR_U32(ctx, 31, 0x299864u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x29985Cu, 0x299864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299864u;
label_299864:
    // 0x299864: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299864u;
    {
        const bool branch_taken_0x299864 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x299868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299864u;
        // 0x299868: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299864) {
            ctx->pc = 0x299878u;
            goto label_299878;
        }
    }
    ctx->pc = 0x29986Cu;
    // 0x29986c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29986cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299870: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x299870u;
    {
        const bool branch_taken_0x299870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299870u;
        // 0x299874: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x299870) {
            ctx->pc = 0x29988Cu;
            goto label_29988c;
        }
    }
    ctx->pc = 0x299878u;
label_299878:
    // 0x299878: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x299878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29987c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29987cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299880: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x299880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299884: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x299884u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x299888: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x299888u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_29988c:
    // 0x29988c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x29988cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x299890: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299894: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x299894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x299898: 0xc7818ce4  lwc1        $f1, -0x731C($gp)
    ctx->pc = 0x299898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29989c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x29989cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2998a0: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x2998a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2998a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2998a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2998a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2998a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2998ac: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2998acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2998b0: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x2998b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x2998b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2998b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2998b8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2998b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2998bc: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x2998bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2998c0: 0x3c23821  addu        $a3, $fp, $v0
    ctx->pc = 0x2998c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2998c4: 0x2e24021  addu        $t0, $s7, $v0
    ctx->pc = 0x2998c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2998c8: 0x2c24821  addu        $t1, $s6, $v0
    ctx->pc = 0x2998c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2998cc: 0x2a25021  addu        $t2, $s5, $v0
    ctx->pc = 0x2998ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2998d0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2998d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2998d4: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x2998d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2998d8: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x2998d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2998dc: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x2998dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2998e0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2998e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2998e4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2998e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2998e8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2998e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2998ec: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2998ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2998f0: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2998f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x2998f4: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x2998f4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x2998f8: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x2998f8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x2998fc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2998fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x299900: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x299900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x299904: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x299904u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x299908: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x299908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_29990c:
    // 0x29990c: 0xdfbf0240  ld          $ra, 0x240($sp)
    ctx->pc = 0x29990cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 576)));
label_299910:
    // 0x299910: 0xdfbe0230  ld          $fp, 0x230($sp)
    ctx->pc = 0x299910u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x299914: 0xdfb70220  ld          $s7, 0x220($sp)
    ctx->pc = 0x299914u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x299918: 0xdfb60210  ld          $s6, 0x210($sp)
    ctx->pc = 0x299918u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x29991c: 0xdfb50200  ld          $s5, 0x200($sp)
    ctx->pc = 0x29991cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x299920: 0xdfb401f0  ld          $s4, 0x1F0($sp)
    ctx->pc = 0x299920u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x299924: 0xdfb301e0  ld          $s3, 0x1E0($sp)
    ctx->pc = 0x299924u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x299928: 0xdfb201d0  ld          $s2, 0x1D0($sp)
    ctx->pc = 0x299928u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x29992c: 0xdfb101c0  ld          $s1, 0x1C0($sp)
    ctx->pc = 0x29992cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x299930: 0xdfb001b0  ld          $s0, 0x1B0($sp)
    ctx->pc = 0x299930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x299934: 0xc7bf02a8  lwc1        $f31, 0x2A8($sp)
    ctx->pc = 0x299934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x299938: 0xc7be02a0  lwc1        $f30, 0x2A0($sp)
    ctx->pc = 0x299938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x29993c: 0xc7bd0298  lwc1        $f29, 0x298($sp)
    ctx->pc = 0x29993cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x299940: 0xc7bc0290  lwc1        $f28, 0x290($sp)
    ctx->pc = 0x299940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x299944: 0xc7bb0288  lwc1        $f27, 0x288($sp)
    ctx->pc = 0x299944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x299948: 0xc7ba0280  lwc1        $f26, 0x280($sp)
    ctx->pc = 0x299948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x29994c: 0xc7b90278  lwc1        $f25, 0x278($sp)
    ctx->pc = 0x29994cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x299950: 0xc7b80270  lwc1        $f24, 0x270($sp)
    ctx->pc = 0x299950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x299954: 0xc7b70268  lwc1        $f23, 0x268($sp)
    ctx->pc = 0x299954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x299958: 0xc7b60260  lwc1        $f22, 0x260($sp)
    ctx->pc = 0x299958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29995c: 0xc7b50258  lwc1        $f21, 0x258($sp)
    ctx->pc = 0x29995cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x299960: 0xc7b40250  lwc1        $f20, 0x250($sp)
    ctx->pc = 0x299960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x299964: 0x3e00008  jr          $ra
    ctx->pc = 0x299964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299964u;
        // 0x299968: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29996Cu;
}
