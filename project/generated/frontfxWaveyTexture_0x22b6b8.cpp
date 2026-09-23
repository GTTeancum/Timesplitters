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

// Function: frontfxWaveyTexture
// Address: 0x22b6b8 - 0x22bd0c
void frontfxWaveyTexture_0x22b6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontfxWaveyTexture_0x22b6b8");
#endif

    switch (ctx->pc) {
        case 0x22b7f8u: goto label_22b7f8;
        case 0x22b870u: goto label_22b870;
        case 0x22b920u: goto label_22b920;
        case 0x22b938u: goto label_22b938;
        case 0x22b950u: goto label_22b950;
        case 0x22b968u: goto label_22b968;
        case 0x22bb50u: goto label_22bb50;
        case 0x22bbd8u: goto label_22bbd8;
        case 0x22bcb8u: goto label_22bcb8;
        default: break;
    }

    ctx->pc = 0x22b6b8u;

    // 0x22b6b8: 0x27bdf4a0  addiu       $sp, $sp, -0xB60
    ctx->pc = 0x22b6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964384));
    // 0x22b6bc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x22b6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x22b6c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22b6c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22b6c4: 0xe7b40b10  swc1        $f20, 0xB10($sp)
    ctx->pc = 0x22b6c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2832), bits); }
    // 0x22b6c8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x22b6c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b6cc: 0xe7b50b18  swc1        $f21, 0xB18($sp)
    ctx->pc = 0x22b6ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2840), bits); }
    // 0x22b6d0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x22b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22b6d4: 0xc7b40b68  lwc1        $f20, 0xB68($sp)
    ctx->pc = 0x22b6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22b6d8: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x22b6d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22b6dc: 0xc7b50b60  lwc1        $f21, 0xB60($sp)
    ctx->pc = 0x22b6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22b6e0: 0x240b0014  addiu       $t3, $zero, 0x14
    ctx->pc = 0x22b6e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x22b6e4: 0x4601a082  mul.s       $f2, $f20, $f1
    ctx->pc = 0x22b6e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x22b6e8: 0xffb20a90  sd          $s2, 0xA90($sp)
    ctx->pc = 0x22b6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2704), GPR_U64(ctx, 18));
    // 0x22b6ec: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x22b6ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x22b6f0: 0xffb10a80  sd          $s1, 0xA80($sp)
    ctx->pc = 0x22b6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2688), GPR_U64(ctx, 17));
    // 0x22b6f4: 0xe7bc0b50  swc1        $f28, 0xB50($sp)
    ctx->pc = 0x22b6f4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2896), bits); }
    // 0x22b6f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22b6f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b6fc: 0xe7bb0b48  swc1        $f27, 0xB48($sp)
    ctx->pc = 0x22b6fcu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2888), bits); }
    // 0x22b700: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x22b700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b704: 0xe7ba0b40  swc1        $f26, 0xB40($sp)
    ctx->pc = 0x22b704u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2880), bits); }
    // 0x22b708: 0x4615aac0  add.s       $f11, $f21, $f21
    ctx->pc = 0x22b708u;
    ctx->f[11] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
    // 0x22b70c: 0xe7b90b38  swc1        $f25, 0xB38($sp)
    ctx->pc = 0x22b70cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2872), bits); }
    // 0x22b710: 0x4491e000  mtc1        $s1, $f28
    ctx->pc = 0x22b710u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x22b714: 0x4680e720  cvt.s.w     $f28, $f28
    ctx->pc = 0x22b714u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[28], sizeof(tmp)); ctx->f[28] = FPU_CVT_S_W(tmp); }
    // 0x22b718: 0xe7b80b30  swc1        $f24, 0xB30($sp)
    ctx->pc = 0x22b718u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2864), bits); }
    // 0x22b71c: 0xe7b70b28  swc1        $f23, 0xB28($sp)
    ctx->pc = 0x22b71cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2856), bits); }
    // 0x22b720: 0xe7b60b20  swc1        $f22, 0xB20($sp)
    ctx->pc = 0x22b720u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2848), bits); }
    // 0x22b724: 0x4492b800  mtc1        $s2, $f23
    ctx->pc = 0x22b724u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x22b728: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x22b728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x22b72c: 0xffbf0b00  sd          $ra, 0xB00($sp)
    ctx->pc = 0x22b72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2816), GPR_U64(ctx, 31));
    // 0x22b730: 0x4614a580  add.s       $f22, $f20, $f20
    ctx->pc = 0x22b730u;
    ctx->f[22] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x22b734: 0xffbe0af0  sd          $fp, 0xAF0($sp)
    ctx->pc = 0x22b734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2800), GPR_U64(ctx, 30));
    // 0x22b738: 0xffb70ae0  sd          $s7, 0xAE0($sp)
    ctx->pc = 0x22b738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2784), GPR_U64(ctx, 23));
    // 0x22b73c: 0xffb60ad0  sd          $s6, 0xAD0($sp)
    ctx->pc = 0x22b73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2768), GPR_U64(ctx, 22));
    // 0x22b740: 0xffb50ac0  sd          $s5, 0xAC0($sp)
    ctx->pc = 0x22b740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2752), GPR_U64(ctx, 21));
    // 0x22b744: 0xffb40ab0  sd          $s4, 0xAB0($sp)
    ctx->pc = 0x22b744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2736), GPR_U64(ctx, 20));
    // 0x22b748: 0xffb30aa0  sd          $s3, 0xAA0($sp)
    ctx->pc = 0x22b748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2720), GPR_U64(ctx, 19));
    // 0x22b74c: 0xffb00a70  sd          $s0, 0xA70($sp)
    ctx->pc = 0x22b74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2672), GPR_U64(ctx, 16));
    // 0x22b750: 0x8f83b498  lw          $v1, -0x4B68($gp)
    ctx->pc = 0x22b750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x22b754: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x22b754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x22b758: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22b758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b75c: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x22b75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x22b760: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x22b760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x22b764: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x22b764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22b768: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22b768u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22b76c: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x22b76cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x22b770: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x22b770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x22b774: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x22b774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x22b778: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x22b778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x22b77c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x22b77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x22b780: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22b780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22b784: 0xc7809fc0  lwc1        $f0, -0x6040($gp)
    ctx->pc = 0x22b784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b788: 0x0  nop
    ctx->pc = 0x22b788u;
    // NOP
    // 0x22b78c: 0x0  nop
    ctx->pc = 0x22b78cu;
    // NOP
    // 0x22b790: 0x46030a83  div.s       $f10, $f1, $f3
    ctx->pc = 0x22b790u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[10] = ctx->f[1] / ctx->f[3];
    // 0x22b794: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x22b794u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x22b798: 0x0  nop
    ctx->pc = 0x22b798u;
    // NOP
    // 0x22b79c: 0x0  nop
    ctx->pc = 0x22b79cu;
    // NOP
    // 0x22b7a0: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x22b7a0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[4];
    // 0x22b7a4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x22b7a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b7a8: 0x46110242  mul.s       $f9, $f0, $f17
    ctx->pc = 0x22b7a8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[17]);
    // 0x22b7ac: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x22b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x22b7b0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x22b7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x22b7b4: 0x46100202  mul.s       $f8, $f0, $f16
    ctx->pc = 0x22b7b4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[16]);
    // 0x22b7b8: 0x24485c60  addiu       $t0, $v0, 0x5C60
    ctx->pc = 0x22b7b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 23648));
    // 0x22b7bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x22b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x22b7c0: 0x27a20a00  addiu       $v0, $sp, 0xA00
    ctx->pc = 0x22b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 2560));
    // 0x22b7c4: 0x46120442  mul.s       $f17, $f0, $f18
    ctx->pc = 0x22b7c4u;
    ctx->f[17] = FPU_MUL_S(ctx->f[0], ctx->f[18]);
    // 0x22b7c8: 0xc7bb0b70  lwc1        $f27, 0xB70($sp)
    ctx->pc = 0x22b7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x22b7cc: 0x46130402  mul.s       $f16, $f0, $f19
    ctx->pc = 0x22b7ccu;
    ctx->f[16] = FPU_MUL_S(ctx->f[0], ctx->f[19]);
    // 0x22b7d0: 0xc7ba0b78  lwc1        $f26, 0xB78($sp)
    ctx->pc = 0x22b7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x22b7d4: 0x4484c000  mtc1        $a0, $f24
    ctx->pc = 0x22b7d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x22b7d8: 0x4680c620  cvt.s.w     $f24, $f24
    ctx->pc = 0x22b7d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[24], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
    // 0x22b7dc: 0xc7878158  lwc1        $f7, -0x7EA8($gp)
    ctx->pc = 0x22b7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x22b7e0: 0x4483c800  mtc1        $v1, $f25
    ctx->pc = 0x22b7e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x22b7e4: 0x4680ce60  cvt.s.w     $f25, $f25
    ctx->pc = 0x22b7e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[25], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x22b7e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22b7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22b7ec: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x22b7ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x22b7f0: 0xafa20a58  sw          $v0, 0xA58($sp)
    ctx->pc = 0x22b7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2648), GPR_U32(ctx, 2));
    // 0x22b7f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22b7f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22b7f8:
    // 0x22b7f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22b7f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22b7fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22b7fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22b800: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x22b800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x22b804: 0x4b2018  mult        $a0, $v0, $t3
    ctx->pc = 0x22b804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22b808: 0x24690001  addiu       $t1, $v1, 0x1
    ctx->pc = 0x22b808u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22b80c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22b80cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b810: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x22b810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x22b814: 0x9d3021  addu        $a2, $a0, $sp
    ctx->pc = 0x22b814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x22b818: 0x461608c1  sub.s       $f3, $f1, $f22
    ctx->pc = 0x22b818u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
    // 0x22b81c: 0x460e1802  mul.s       $f0, $f3, $f14
    ctx->pc = 0x22b81cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[14]);
    // 0x22b820: 0x460f1842  mul.s       $f1, $f3, $f15
    ctx->pc = 0x22b820u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[15]);
    // 0x22b824: 0x46110000  add.s       $f0, $f0, $f17
    ctx->pc = 0x22b824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[17]);
    // 0x22b828: 0x46100840  add.s       $f1, $f1, $f16
    ctx->pc = 0x22b828u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[16]);
    // 0x22b82c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x22b82cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x22b830: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x22b830u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x22b834: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x22b834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x22b838: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x22b838u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x22b83c: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22b83cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x22b840: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x22b840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x22b844: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22b844u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22b848: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x22b848u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x22b84c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x22b84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x22b850: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x22b850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x22b854: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22b854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22b858: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22b858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22b85c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x22b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x22b860: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x22b860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x22b864: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x22b864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22b868: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x22b868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22b86c: 0x0  nop
    ctx->pc = 0x22b86cu;
    // NOP
label_22b870:
    // 0x22b870: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x22b870u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b874: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22b874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22b878: 0xe4c30008  swc1        $f3, 0x8($a2)
    ctx->pc = 0x22b878u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x22b87c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x22b87cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x22b880: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22b880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22b884: 0x28e40010  slti        $a0, $a3, 0x10
    ctx->pc = 0x22b884u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x22b888: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x22b888u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x22b88c: 0x460b0001  sub.s       $f0, $f0, $f11
    ctx->pc = 0x22b88cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
    // 0x22b890: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x22b890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x22b894: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x22b894u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x22b898: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x22b898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x22b89c: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x22b89cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x22b8a0: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x22b8a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x22b8a4: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x22b8a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x22b8a8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x22b8a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x22b8ac: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x22b8acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x22b8b0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x22b8b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x22b8b4: 0x46000ca4  .word       0x46000CA4                   # cvt.w.s     $f18, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22b8b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[18], &tmp, sizeof(tmp)); }
    // 0x22b8b8: 0x44029000  mfc1        $v0, $f18
    ctx->pc = 0x22b8b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[18], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x22b8bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22b8bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22b8c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x22b8c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x22b8c4: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x22b8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x22b8c8: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x22b8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x22b8cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22b8d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22b8d4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x22b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x22b8d8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x22b8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x22b8dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22b8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b8e0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x22b8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b8e4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x22b8e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x22b8e8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x22b8e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x22b8ec: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x22b8ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x22b8f0: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x22b8f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x22b8f4: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x22b8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x22b8f8: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x22b8f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x22b8fc: 0x1480ffdc  bnez        $a0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x22B8FCu;
    {
        const bool branch_taken_0x22b8fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8FCu;
        // 0x22b900: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b8fc) {
            ctx->pc = 0x22B870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22b870;
        }
    }
    ctx->pc = 0x22B904u;
    // 0x22b904: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x22b904u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b908: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x22b908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x22b90c: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x22B90Cu;
    {
        const bool branch_taken_0x22b90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b90c) {
            ctx->pc = 0x22B7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22b7f8;
        }
    }
    ctx->pc = 0x22B914u;
    // 0x22b914: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x22b914u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x22b918: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x22B918u;
    SET_GPR_U32(ctx, 31, 0x22B920u);
    ctx->pc = 0x22B91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B918u;
    // 0x22b91c: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x22B918u, 0x22B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B920u;
label_22b920:
    // 0x22b920: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22b920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22b924: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x22b924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x22b928: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x22b928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x22b92c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22b92cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22b930: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x22B930u;
    SET_GPR_U32(ctx, 31, 0x22B938u);
    ctx->pc = 0x22B934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B930u;
    // 0x22b934: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x22B930u, 0x22B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B938u;
label_22b938:
    // 0x22b938: 0x4600e586  mov.s       $f22, $f28
    ctx->pc = 0x22b938u;
    ctx->f[22] = FPU_MOV_S(ctx->f[28]);
    // 0x22b93c: 0xafa20a50  sw          $v0, 0xA50($sp)
    ctx->pc = 0x22b93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2640), GPR_U32(ctx, 2));
    // 0x22b940: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22b940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b944: 0x24140014  addiu       $s4, $zero, 0x14
    ctx->pc = 0x22b944u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x22b948: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x22b948u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x22b94c: 0x13b100  sll         $s6, $s3, 4
    ctx->pc = 0x22b94cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_22b950:
    // 0x22b950: 0x267e0001  addiu       $fp, $s3, 0x1
    ctx->pc = 0x22b950u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x22b954: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x22b954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x22b958: 0x1ea900  sll         $s5, $fp, 4
    ctx->pc = 0x22b958u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x22b95c: 0xafa20a54  sw          $v0, 0xA54($sp)
    ctx->pc = 0x22b95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2644), GPR_U32(ctx, 2));
    // 0x22b960: 0x26b90001  addiu       $t9, $s5, 0x1
    ctx->pc = 0x22b960u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x22b964: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22b964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22b968:
    // 0x22b968: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x22b968u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22b96c: 0x7271001a  div1        $zero, $s3, $s1
    ctx->pc = 0x22b96cu;
    { int32_t divisor = GPR_S32(ctx, 17); int32_t dividend = GPR_S32(ctx, 19); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x22b970: 0x2161021  addu        $v0, $s0, $s6
    ctx->pc = 0x22b970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x22b974: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22B974u;
    {
        const bool branch_taken_0x22b974 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b974) {
            ctx->pc = 0x22B978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B974u;
            // 0x22b978: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B97Cu;
            goto label_22b97c;
        }
    }
    ctx->pc = 0x22B97Cu;
label_22b97c:
    // 0x22b97c: 0x2153021  addu        $a2, $s0, $s5
    ctx->pc = 0x22b97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x22b980: 0x2194021  addu        $t0, $s0, $t9
    ctx->pc = 0x22b980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
    // 0x22b984: 0x8fa40a54  lw          $a0, 0xA54($sp)
    ctx->pc = 0x22b984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2644)));
    // 0x22b988: 0x2043821  addu        $a3, $s0, $a0
    ctx->pc = 0x22b988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x22b98c: 0x1810  mfhi        $v1
    ctx->pc = 0x22b98cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x22b990: 0x70002810  mfhi1       $a1
    ctx->pc = 0x22b990u;
    SET_GPR_U64(ctx, 5, ctx->hi1);
    // 0x22b994: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x22b994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x22b998: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x22b998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x22b99c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22b99cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b9a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22b9a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22b9a4: 0x541818  mult        $v1, $v0, $s4
    ctx->pc = 0x22b9a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22b9a8: 0x0  nop
    ctx->pc = 0x22b9a8u;
    // NOP
    // 0x22b9ac: 0x0  nop
    ctx->pc = 0x22b9acu;
    // NOP
    // 0x22b9b0: 0x46171943  div.s       $f5, $f3, $f23
    ctx->pc = 0x22b9b0u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[5] = ctx->f[3] / ctx->f[23];
    // 0x22b9b4: 0x46150080  add.s       $f2, $f0, $f21
    ctx->pc = 0x22b9b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x22b9b8: 0x0  nop
    ctx->pc = 0x22b9b8u;
    // NOP
    // 0x22b9bc: 0x0  nop
    ctx->pc = 0x22b9bcu;
    // NOP
    // 0x22b9c0: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x22b9c0u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x22b9c4: 0x7d4821  addu        $t1, $v1, $sp
    ctx->pc = 0x22b9c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x22b9c8: 0x461518c0  add.s       $f3, $f3, $f21
    ctx->pc = 0x22b9c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
    // 0x22b9cc: 0x0  nop
    ctx->pc = 0x22b9ccu;
    // NOP
    // 0x22b9d0: 0x0  nop
    ctx->pc = 0x22b9d0u;
    // NOP
    // 0x22b9d4: 0x46161083  div.s       $f2, $f2, $f22
    ctx->pc = 0x22b9d4u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[22];
    // 0x22b9d8: 0xc5240010  lwc1        $f4, 0x10($t1)
    ctx->pc = 0x22b9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22b9dc: 0xc521000c  lwc1        $f1, 0xC($t1)
    ctx->pc = 0x22b9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b9e0: 0xd41818  mult        $v1, $a2, $s4
    ctx->pc = 0x22b9e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22b9e4: 0x461b2940  add.s       $f5, $f5, $f27
    ctx->pc = 0x22b9e4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[27]);
    // 0x22b9e8: 0xc5270004  lwc1        $f7, 0x4($t1)
    ctx->pc = 0x22b9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x22b9ec: 0xc5260008  lwc1        $f6, 0x8($t1)
    ctx->pc = 0x22b9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x22b9f0: 0x0  nop
    ctx->pc = 0x22b9f0u;
    // NOP
    // 0x22b9f4: 0x0  nop
    ctx->pc = 0x22b9f4u;
    // NOP
    // 0x22b9f8: 0x461718c3  div.s       $f3, $f3, $f23
    ctx->pc = 0x22b9f8u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[23];
    // 0x22b9fc: 0x461a0000  add.s       $f0, $f0, $f26
    ctx->pc = 0x22b9fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
    // 0x22ba00: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x22ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x22ba04: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x22ba04u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x22ba08: 0x7d4821  addu        $t1, $v1, $sp
    ctx->pc = 0x22ba08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x22ba0c: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x22ba0cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x22ba10: 0xafa20a00  sw          $v0, 0xA00($sp)
    ctx->pc = 0x22ba10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2560), GPR_U32(ctx, 2));
    // 0x22ba14: 0x46192942  mul.s       $f5, $f5, $f25
    ctx->pc = 0x22ba14u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[25]);
    // 0x22ba18: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x22ba18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x22ba1c: 0xc5290010  lwc1        $f9, 0x10($t1)
    ctx->pc = 0x22ba1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x22ba20: 0x461a1080  add.s       $f2, $f2, $f26
    ctx->pc = 0x22ba20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[26]);
    // 0x22ba24: 0xc5240004  lwc1        $f4, 0x4($t1)
    ctx->pc = 0x22ba24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22ba28: 0x46002aa4  .word       0x46002AA4                   # cvt.w.s     $f10, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22ba28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[10], &tmp, sizeof(tmp)); }
    // 0x22ba2c: 0x44035000  mfc1        $v1, $f10
    ctx->pc = 0x22ba2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[10], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x22ba30: 0xc528000c  lwc1        $f8, 0xC($t1)
    ctx->pc = 0x22ba30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x22ba34: 0x461439c2  mul.s       $f7, $f7, $f20
    ctx->pc = 0x22ba34u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[20]);
    // 0x22ba38: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x22ba38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ba3c: 0x46143182  mul.s       $f6, $f6, $f20
    ctx->pc = 0x22ba3cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x22ba40: 0xf45018  mult        $t2, $a3, $s4
    ctx->pc = 0x22ba40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x22ba44: 0x46000164  .word       0x46000164                   # cvt.w.s     $f5, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22ba44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x22ba48: 0x44052800  mfc1        $a1, $f5
    ctx->pc = 0x22ba48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x22ba4c: 0xafa30a0c  sw          $v1, 0xA0C($sp)
    ctx->pc = 0x22ba4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2572), GPR_U32(ctx, 3));
    // 0x22ba50: 0x46181082  mul.s       $f2, $f2, $f24
    ctx->pc = 0x22ba50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
    // 0x22ba54: 0x46003824  .word       0x46003824                   # cvt.w.s     $f0, $f7 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22ba54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[7]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22ba58: 0xe7a00a04  swc1        $f0, 0xA04($sp)
    ctx->pc = 0x22ba58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2564), bits); }
    // 0x22ba5c: 0x46003024  .word       0x46003024                   # cvt.w.s     $f0, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22ba5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22ba60: 0xe7a00a08  swc1        $f0, 0xA08($sp)
    ctx->pc = 0x22ba60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2568), bits); }
    // 0x22ba64: 0xafa50a10  sw          $a1, 0xA10($sp)
    ctx->pc = 0x22ba64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2576), GPR_U32(ctx, 5));
    // 0x22ba68: 0x46082100  add.s       $f4, $f4, $f8
    ctx->pc = 0x22ba68u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[8]);
    // 0x22ba6c: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x22ba6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x22ba70: 0x46151081  sub.s       $f2, $f2, $f21
    ctx->pc = 0x22ba70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
    // 0x22ba74: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x22ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x22ba78: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x22ba78u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x22ba7c: 0xafa30a20  sw          $v1, 0xA20($sp)
    ctx->pc = 0x22ba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2592), GPR_U32(ctx, 3));
    // 0x22ba80: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x22ba80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x22ba84: 0xafa20a14  sw          $v0, 0xA14($sp)
    ctx->pc = 0x22ba84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2580), GPR_U32(ctx, 2));
    // 0x22ba88: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22ba88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22ba8c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x22ba8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x22ba90: 0x1141818  mult        $v1, $t0, $s4
    ctx->pc = 0x22ba90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22ba94: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22ba94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22ba98: 0xe7a00a18  swc1        $f0, 0xA18($sp)
    ctx->pc = 0x22ba98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2584), bits); }
    // 0x22ba9c: 0x15d4821  addu        $t1, $t2, $sp
    ctx->pc = 0x22ba9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x22baa0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22baa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22baa4: 0xe7a00a1c  swc1        $f0, 0xA1C($sp)
    ctx->pc = 0x22baa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2588), bits); }
    // 0x22baa8: 0x461b18c0  add.s       $f3, $f3, $f27
    ctx->pc = 0x22baa8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[27]);
    // 0x22baac: 0xafa60a24  sw          $a2, 0xA24($sp)
    ctx->pc = 0x22baacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2596), GPR_U32(ctx, 6));
    // 0x22bab0: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x22bab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bab4: 0xc5220004  lwc1        $f2, 0x4($t1)
    ctx->pc = 0x22bab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22bab8: 0x461918c2  mul.s       $f3, $f3, $f25
    ctx->pc = 0x22bab8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[25]);
    // 0x22babc: 0xc5240010  lwc1        $f4, 0x10($t1)
    ctx->pc = 0x22babcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22bac0: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x22bac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bac4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x22bac4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x22bac8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x22bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x22bacc: 0x461518c1  sub.s       $f3, $f3, $f21
    ctx->pc = 0x22baccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[21]);
    // 0x22bad0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x22bad0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x22bad4: 0x7d4821  addu        $t1, $v1, $sp
    ctx->pc = 0x22bad4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x22bad8: 0xafa20a28  sw          $v0, 0xA28($sp)
    ctx->pc = 0x22bad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2600), GPR_U32(ctx, 2));
    // 0x22badc: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x22badcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x22bae0: 0xafa50a38  sw          $a1, 0xA38($sp)
    ctx->pc = 0x22bae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2616), GPR_U32(ctx, 5));
    // 0x22bae4: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22bae4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22bae8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x22bae8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x22baec: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x22baecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x22baf0: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x22baf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22baf4: 0xc523000c  lwc1        $f3, 0xC($t1)
    ctx->pc = 0x22baf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22baf8: 0x46001124  .word       0x46001124                   # cvt.w.s     $f4, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22baf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x22bafc: 0xe7a40a2c  swc1        $f4, 0xA2C($sp)
    ctx->pc = 0x22bafcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2604), bits); }
    // 0x22bb00: 0xafa30a34  sw          $v1, 0xA34($sp)
    ctx->pc = 0x22bb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2612), GPR_U32(ctx, 3));
    // 0x22bb04: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22bb04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x22bb08: 0xe7a20a30  swc1        $f2, 0xA30($sp)
    ctx->pc = 0x22bb08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2608), bits); }
    // 0x22bb0c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x22bb0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x22bb10: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x22bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x22bb14: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x22bb14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x22bb18: 0xafa20a3c  sw          $v0, 0xA3C($sp)
    ctx->pc = 0x22bb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2620), GPR_U32(ctx, 2));
    // 0x22bb1c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22bb1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22bb20: 0xe7a10a40  swc1        $f1, 0xA40($sp)
    ctx->pc = 0x22bb20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2624), bits); }
    // 0x22bb24: 0xc5210010  lwc1        $f1, 0x10($t1)
    ctx->pc = 0x22bb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bb28: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x22bb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bb2c: 0xafa30a48  sw          $v1, 0xA48($sp)
    ctx->pc = 0x22bb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2632), GPR_U32(ctx, 3));
    // 0x22bb30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22bb30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22bb34: 0xafa60a4c  sw          $a2, 0xA4C($sp)
    ctx->pc = 0x22bb34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2636), GPR_U32(ctx, 6));
    // 0x22bb38: 0x7fb90a60  sq          $t9, 0xA60($sp)
    ctx->pc = 0x22bb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2656), GPR_VEC(ctx, 25));
    // 0x22bb3c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x22bb3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x22bb40: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22bb40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22bb44: 0xe7a10a44  swc1        $f1, 0xA44($sp)
    ctx->pc = 0x22bb44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2628), bits); }
    // 0x22bb48: 0xc0807de  jal         func_201F78
    ctx->pc = 0x22BB48u;
    SET_GPR_U32(ctx, 31, 0x22BB50u);
    ctx->pc = 0x22BB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BB48u;
    // 0x22bb4c: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x22BB48u, 0x22BB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BB50u;
label_22bb50:
    // 0x22bb50: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x22bb50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x22bb54: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x22bb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x22bb58: 0x3c046c0d  lui         $a0, 0x6C0D
    ctx->pc = 0x22bb58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27661 << 16));
    // 0x22bb5c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x22bb5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb60: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x22bb60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x22bb64: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x22bb64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x22bb68: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x22bb68u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x22bb6c: 0x34068004  ori         $a2, $zero, 0x8004
    ctx->pc = 0x22bb6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x22bb70: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x22bb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x22bb74: 0x3c0230ae  lui         $v0, 0x30AE
    ctx->pc = 0x22bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12462 << 16));
    // 0x22bb78: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22bb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22bb7c: 0x24040513  addiu       $a0, $zero, 0x513
    ctx->pc = 0x22bb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1299));
    // 0x22bb80: 0xacaa0004  sw          $t2, 0x4($a1)
    ctx->pc = 0x22bb80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 10));
    // 0x22bb84: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x22bb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x22bb88: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x22bb88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x22bb8c: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x22bb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x22bb90: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x22bb90u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x22bb94: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x22bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x22bb98: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x22bb98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x22bb9c: 0x260f0001  addiu       $t7, $s0, 0x1
    ctx->pc = 0x22bb9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22bba0: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x22bba0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x22bba4: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x22bba4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22bba8: 0x8fa20a58  lw          $v0, 0xA58($sp)
    ctx->pc = 0x22bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2648)));
    // 0x22bbac: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x22bbacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x22bbb0: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x22bbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x22bbb4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x22bbb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x22bbb8: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x22bbb8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x22bbbc: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x22bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x22bbc0: 0x244d0010  addiu       $t5, $v0, 0x10
    ctx->pc = 0x22bbc0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22bbc4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x22bbc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x22bbc8: 0x244c0004  addiu       $t4, $v0, 0x4
    ctx->pc = 0x22bbc8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x22bbcc: 0x25490004  addiu       $t1, $t2, 0x4
    ctx->pc = 0x22bbccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x22bbd0: 0x7bb90a60  lq          $t9, 0xA60($sp)
    ctx->pc = 0x22bbd0u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 2656)));
    // 0x22bbd4: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x22bbd4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_22bbd8:
    // 0x22bbd8: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x22bbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bbdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22bbdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22bbe0: 0x8d820008  lw          $v0, 0x8($t4)
    ctx->pc = 0x22bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x22bbe4: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x22bbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bbe8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22bbe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22bbec: 0x8da3fff0  lw          $v1, -0x10($t5)
    ctx->pc = 0x22bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294967280)));
    // 0x22bbf0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x22bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x22bbf4: 0x258c0014  addiu       $t4, $t4, 0x14
    ctx->pc = 0x22bbf4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 20));
    // 0x22bbf8: 0xad62fffc  sw          $v0, -0x4($t3)
    ctx->pc = 0x22bbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294967292), GPR_U32(ctx, 2));
    // 0x22bbfc: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22bbfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x22bc00: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x22bc00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x22bc04: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22bc04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22bc08: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x22bc08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x22bc0c: 0x32402  srl         $a0, $v1, 16
    ctx->pc = 0x22bc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x22bc10: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x22bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x22bc14: 0x32a02  srl         $a1, $v1, 8
    ctx->pc = 0x22bc14u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x22bc18: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x22bc18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22bc1c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x22bc1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x22bc20: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x22bc20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x22bc24: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x22bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x22bc28: 0x24c66c00  addiu       $a2, $a2, 0x6C00
    ctx->pc = 0x22bc28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27648));
    // 0x22bc2c: 0x24e77900  addiu       $a3, $a3, 0x7900
    ctx->pc = 0x22bc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
    // 0x22bc30: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x22bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x22bc34: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x22bc34u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x22bc38: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x22bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
    // 0x22bc3c: 0x25ad0014  addiu       $t5, $t5, 0x14
    ctx->pc = 0x22bc3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 20));
    // 0x22bc40: 0xad240010  sw          $a0, 0x10($t1)
    ctx->pc = 0x22bc40u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 4));
    // 0x22bc44: 0x254a0030  addiu       $t2, $t2, 0x30
    ctx->pc = 0x22bc44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
    // 0x22bc48: 0xad250014  sw          $a1, 0x14($t1)
    ctx->pc = 0x22bc48u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 5));
    // 0x22bc4c: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x22bc4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x22bc50: 0xad280018  sw          $t0, 0x18($t1)
    ctx->pc = 0x22bc50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 8));
    // 0x22bc54: 0xad26001c  sw          $a2, 0x1C($t1)
    ctx->pc = 0x22bc54u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 6));
    // 0x22bc58: 0xad270020  sw          $a3, 0x20($t1)
    ctx->pc = 0x22bc58u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 7));
    // 0x22bc5c: 0xad370024  sw          $s7, 0x24($t1)
    ctx->pc = 0x22bc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 23));
    // 0x22bc60: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x22bc60u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x22bc64: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x22bc64u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x22bc68: 0xad600028  sw          $zero, 0x28($t3)
    ctx->pc = 0x22bc68u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 40), GPR_U32(ctx, 0));
    // 0x22bc6c: 0x256b0030  addiu       $t3, $t3, 0x30
    ctx->pc = 0x22bc6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 48));
    // 0x22bc70: 0x5c1ffd9  bgez        $t6, . + 4 + (-0x27 << 2)
    ctx->pc = 0x22BC70u;
    {
        const bool branch_taken_0x22bc70 = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x22BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC70u;
        // 0x22bc74: 0x160482d  daddu       $t1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc70) {
            ctx->pc = 0x22BBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22bbd8;
        }
    }
    ctx->pc = 0x22BC78u;
    // 0x22bc78: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x22bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
    // 0x22bc7c: 0x1e0802d  daddu       $s0, $t7, $zero
    ctx->pc = 0x22bc7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bc80: 0x344207fc  ori         $v0, $v0, 0x7FC
    ctx->pc = 0x22bc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2044);
    // 0x22bc84: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x22bc84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x22bc88: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x22bc88u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x22bc8c: 0x2a04000f  slti        $a0, $s0, 0xF
    ctx->pc = 0x22bc8cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x22bc90: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x22bc90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x22bc94: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x22bc94u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x22bc98: 0x1480ff33  bnez        $a0, . + 4 + (-0xCD << 2)
    ctx->pc = 0x22BC98u;
    {
        const bool branch_taken_0x22bc98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC98u;
        // 0x22bc9c: 0xad400004  sw          $zero, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc98) {
            ctx->pc = 0x22B968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22b968;
        }
    }
    ctx->pc = 0x22BCA0u;
    // 0x22bca0: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x22bca0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bca4: 0x2a620007  slti        $v0, $s3, 0x7
    ctx->pc = 0x22bca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x22bca8: 0x1440ff29  bnez        $v0, . + 4 + (-0xD7 << 2)
    ctx->pc = 0x22BCA8u;
    {
        const bool branch_taken_0x22bca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCA8u;
        // 0x22bcac: 0x13b100  sll         $s6, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bca8) {
            ctx->pc = 0x22B950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22b950;
        }
    }
    ctx->pc = 0x22BCB0u;
    // 0x22bcb0: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x22BCB0u;
    SET_GPR_U32(ctx, 31, 0x22BCB8u);
    ctx->pc = 0x22BCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BCB0u;
    // 0x22bcb4: 0x8fa40a50  lw          $a0, 0xA50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2640)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x22BCB0u, 0x22BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BCB8u;
label_22bcb8:
    // 0x22bcb8: 0xdfbf0b00  ld          $ra, 0xB00($sp)
    ctx->pc = 0x22bcb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2816)));
    // 0x22bcbc: 0xdfbe0af0  ld          $fp, 0xAF0($sp)
    ctx->pc = 0x22bcbcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 2800)));
    // 0x22bcc0: 0xdfb70ae0  ld          $s7, 0xAE0($sp)
    ctx->pc = 0x22bcc0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 2784)));
    // 0x22bcc4: 0xdfb60ad0  ld          $s6, 0xAD0($sp)
    ctx->pc = 0x22bcc4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 2768)));
    // 0x22bcc8: 0xdfb50ac0  ld          $s5, 0xAC0($sp)
    ctx->pc = 0x22bcc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 2752)));
    // 0x22bccc: 0xdfb40ab0  ld          $s4, 0xAB0($sp)
    ctx->pc = 0x22bcccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 2736)));
    // 0x22bcd0: 0xdfb30aa0  ld          $s3, 0xAA0($sp)
    ctx->pc = 0x22bcd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 2720)));
    // 0x22bcd4: 0xdfb20a90  ld          $s2, 0xA90($sp)
    ctx->pc = 0x22bcd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 2704)));
    // 0x22bcd8: 0xdfb10a80  ld          $s1, 0xA80($sp)
    ctx->pc = 0x22bcd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 2688)));
    // 0x22bcdc: 0xdfb00a70  ld          $s0, 0xA70($sp)
    ctx->pc = 0x22bcdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2672)));
    // 0x22bce0: 0xc7bc0b50  lwc1        $f28, 0xB50($sp)
    ctx->pc = 0x22bce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x22bce4: 0xc7bb0b48  lwc1        $f27, 0xB48($sp)
    ctx->pc = 0x22bce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x22bce8: 0xc7ba0b40  lwc1        $f26, 0xB40($sp)
    ctx->pc = 0x22bce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x22bcec: 0xc7b90b38  lwc1        $f25, 0xB38($sp)
    ctx->pc = 0x22bcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x22bcf0: 0xc7b80b30  lwc1        $f24, 0xB30($sp)
    ctx->pc = 0x22bcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x22bcf4: 0xc7b70b28  lwc1        $f23, 0xB28($sp)
    ctx->pc = 0x22bcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x22bcf8: 0xc7b60b20  lwc1        $f22, 0xB20($sp)
    ctx->pc = 0x22bcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x22bcfc: 0xc7b50b18  lwc1        $f21, 0xB18($sp)
    ctx->pc = 0x22bcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22bd00: 0xc7b40b10  lwc1        $f20, 0xB10($sp)
    ctx->pc = 0x22bd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22bd04: 0x3e00008  jr          $ra
    ctx->pc = 0x22BD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD04u;
        // 0x22bd08: 0x27bd0b60  addiu       $sp, $sp, 0xB60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BD0Cu;
}
