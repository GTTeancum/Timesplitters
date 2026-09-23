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

// Function: hudPainGfx
// Address: 0x2b2948 - 0x2b2c0c
void hudPainGfx_0x2b2948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudPainGfx_0x2b2948");
#endif

    switch (ctx->pc) {
        case 0x2b2a30u: goto label_2b2a30;
        case 0x2b2bccu: goto label_2b2bcc;
        case 0x2b2bd4u: goto label_2b2bd4;
        case 0x2b2be8u: goto label_2b2be8;
        case 0x2b2bf0u: goto label_2b2bf0;
        default: break;
    }

    ctx->pc = 0x2b2948u;

    // 0x2b2948: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x2b2948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
    // 0x2b294c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x2b294cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x2b2950: 0xe7b60330  swc1        $f22, 0x330($sp)
    ctx->pc = 0x2b2950u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
    // 0x2b2954: 0x24c699f0  addiu       $a2, $a2, -0x6610
    ctx->pc = 0x2b2954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941168));
    // 0x2b2958: 0xe7b50328  swc1        $f21, 0x328($sp)
    ctx->pc = 0x2b2958u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 808), bits); }
    // 0x2b295c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2b295cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b2960: 0xe7b40320  swc1        $f20, 0x320($sp)
    ctx->pc = 0x2b2960u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
    // 0x2b2964: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2b2964u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2b2968: 0xffbf0310  sd          $ra, 0x310($sp)
    ctx->pc = 0x2b2968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 31));
    // 0x2b296c: 0x3508ff00  ori         $t0, $t0, 0xFF00
    ctx->pc = 0x2b296cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65280);
    // 0x2b2970: 0xffb00300  sd          $s0, 0x300($sp)
    ctx->pc = 0x2b2970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 16));
    // 0x2b2974: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2b2974u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2978: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2b2978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2b297c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b297cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b2980: 0x1886824  and         $t5, $t4, $t0
    ctx->pc = 0x2b2980u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) & GPR_U64(ctx, 8));
    // 0x2b2984: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x2b2984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2b2988: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x2b2988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b298c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b298cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b2990: 0xc4ca001c  lwc1        $f10, 0x1C($a2)
    ctx->pc = 0x2b2990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2b2994: 0x468052a0  cvt.s.w     $f10, $f10
    ctx->pc = 0x2b2994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[10], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
    // 0x2b2998: 0xc788b9a0  lwc1        $f8, -0x4660($gp)
    ctx->pc = 0x2b2998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2b299c: 0xe3382a  slt         $a3, $a3, $v1
    ctx->pc = 0x2b299cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b29a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b29a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b29a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b29a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b29a8: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x2b29a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2b29ac: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2b29acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2b29b0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2b29b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b29b4: 0x67100b  movn        $v0, $v1, $a3
    ctx->pc = 0x2b29b4u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2b29b8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2b29b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2b29bc: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x2b29bcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2b29c0: 0x44829800  mtc1        $v0, $f19
    ctx->pc = 0x2b29c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x2b29c4: 0x46809ce0  cvt.s.w     $f19, $f19
    ctx->pc = 0x2b29c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[19], sizeof(tmp)); ctx->f[19] = FPU_CVT_S_W(tmp); }
    // 0x2b29c8: 0xc7928fbc  lwc1        $f18, -0x7044($gp)
    ctx->pc = 0x2b29c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2b29cc: 0xc4c90008  lwc1        $f9, 0x8($a2)
    ctx->pc = 0x2b29ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2b29d0: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x2b29d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x2b29d4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b29d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2b29d8: 0x46020582  mul.s       $f22, $f0, $f2
    ctx->pc = 0x2b29d8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b29dc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2b29dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2b29e0: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x2b29e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2b29e4: 0x46020d42  mul.s       $f21, $f1, $f2
    ctx->pc = 0x2b29e4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b29e8: 0xc7908fc0  lwc1        $f16, -0x7040($gp)
    ctx->pc = 0x2b29e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2b29ec: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x2b29ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b29f0: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2b29f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2b29f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b29f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b29f8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2b29f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2b29fc: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x2b29fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2b2a00: 0x244b5c60  addiu       $t3, $v0, 0x5C60
    ctx->pc = 0x2b2a00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 23648));
    // 0x2b2a04: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x2b2a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x2b2a08: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2b2a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2b2a0c: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x2b2a0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2a10: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2b2a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2b2a14: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2b2a14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b2a18: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2b2a18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2a1c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2b2a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2b2a20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b2a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b2a24: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x2b2a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2b2a28: 0x240e0012  addiu       $t6, $zero, 0x12
    ctx->pc = 0x2b2a28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2b2a2c: 0x0  nop
    ctx->pc = 0x2b2a2cu;
    // NOP
label_2b2a30:
    // 0x2b2a30: 0x46124042  mul.s       $f1, $f8, $f18
    ctx->pc = 0x2b2a30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[18]);
    // 0x2b2a34: 0xad2d0000  sw          $t5, 0x0($t1)
    ctx->pc = 0x2b2a34u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 13));
    // 0x2b2a38: 0x46125802  mul.s       $f0, $f11, $f18
    ctx->pc = 0x2b2a38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[18]);
    // 0x2b2a3c: 0xad0c0010  sw          $t4, 0x10($t0)
    ctx->pc = 0x2b2a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 12));
    // 0x2b2a40: 0x460c4200  add.s       $f8, $f8, $f12
    ctx->pc = 0x2b2a40u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[12]);
    // 0x2b2a44: 0x0  nop
    ctx->pc = 0x2b2a44u;
    // NOP
    // 0x2b2a48: 0x0  nop
    ctx->pc = 0x2b2a48u;
    // NOP
    // 0x2b2a4c: 0x46110843  div.s       $f1, $f1, $f17
    ctx->pc = 0x2b2a4cu;
    if (ctx->f[17] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[17];
    // 0x2b2a50: 0x0  nop
    ctx->pc = 0x2b2a50u;
    // NOP
    // 0x2b2a54: 0x0  nop
    ctx->pc = 0x2b2a54u;
    // NOP
    // 0x2b2a58: 0x46110003  div.s       $f0, $f0, $f17
    ctx->pc = 0x2b2a58u;
    if (ctx->f[17] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[17];
    // 0x2b2a5c: 0x46100842  mul.s       $f1, $f1, $f16
    ctx->pc = 0x2b2a5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[16]);
    // 0x2b2a60: 0x46100002  mul.s       $f0, $f0, $f16
    ctx->pc = 0x2b2a60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[16]);
    // 0x2b2a64: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x2b2a64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x2b2a68: 0x460f0000  add.s       $f0, $f0, $f15
    ctx->pc = 0x2b2a68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[15]);
    // 0x2b2a6c: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b2a6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2b2a70: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x2b2a70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2b2a74: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b2a74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b2a78: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b2a78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b2a7c: 0x24a40200  addiu       $a0, $a1, 0x200
    ctx->pc = 0x2b2a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    // 0x2b2a80: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x2b2a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x2b2a84: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x2b2a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x2b2a88: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x2b2a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x2b2a8c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2b2a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2b2a90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b2a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b2a94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b2a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b2a98: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b2a98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b2a9c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2b2a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2b2aa0: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x2b2aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x2b2aa4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2b2aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2b2aa8: 0x30a507ff  andi        $a1, $a1, 0x7FF
    ctx->pc = 0x2b2aa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x2b2aac: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2b2aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b2ab0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2b2ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b2ab4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2b2ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b2ab8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2b2ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2abc: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x2b2abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x2b2ac0: 0x46141182  mul.s       $f6, $f2, $f20
    ctx->pc = 0x2b2ac0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2b2ac4: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x2b2ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b2ac8: 0x460d19c2  mul.s       $f7, $f3, $f13
    ctx->pc = 0x2b2ac8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x2b2acc: 0x460e0842  mul.s       $f1, $f1, $f14
    ctx->pc = 0x2b2accu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x2b2ad0: 0x46131902  mul.s       $f4, $f3, $f19
    ctx->pc = 0x2b2ad0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[19]);
    // 0x2b2ad4: 0x460d1002  mul.s       $f0, $f2, $f13
    ctx->pc = 0x2b2ad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x2b2ad8: 0x460e2942  mul.s       $f5, $f5, $f14
    ctx->pc = 0x2b2ad8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[14]);
    // 0x2b2adc: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x2b2adcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x2b2ae0: 0x46064980  add.s       $f6, $f9, $f6
    ctx->pc = 0x2b2ae0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[9], ctx->f[6]);
    // 0x2b2ae4: 0x46045101  sub.s       $f4, $f10, $f4
    ctx->pc = 0x2b2ae4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[10], ctx->f[4]);
    // 0x2b2ae8: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x2b2ae8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x2b2aec: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2b2aecu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2b2af0: 0x46003024  .word       0x46003024                   # cvt.w.s     $f0, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b2af0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b2af4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2b2af4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2b2af8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b2af8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b2afc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2b2afcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b2b00: 0x461618c2  mul.s       $f3, $f3, $f22
    ctx->pc = 0x2b2b00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[22]);
    // 0x2b2b04: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b2b04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b2b08: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2b2b08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2b2b0c: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x2b2b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x2b2b10: 0x46024880  add.s       $f2, $f9, $f2
    ctx->pc = 0x2b2b10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[9], ctx->f[2]);
    // 0x2b2b14: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x2b2b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2b2b18: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b2b18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b2b1c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2b2b1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b2b20: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2b2b20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2b2b24: 0x460350c1  sub.s       $f3, $f10, $f3
    ctx->pc = 0x2b2b24u;
    ctx->f[3] = FPU_SUB_S(ctx->f[10], ctx->f[3]);
    // 0x2b2b28: 0xad070004  sw          $a3, 0x4($t0)
    ctx->pc = 0x2b2b28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
    // 0x2b2b2c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b2b2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b2b30: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2b2b30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2b2b34: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x2b2b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x2b2b38: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x2b2b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2b2b3c: 0x24a50400  addiu       $a1, $a1, 0x400
    ctx->pc = 0x2b2b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
    // 0x2b2b40: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b2b40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b2b44: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2b2b44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2b2b48: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2b2b48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2b2b4c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2b2b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2b2b50: 0x24840400  addiu       $a0, $a0, 0x400
    ctx->pc = 0x2b2b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x2b2b54: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2b2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2b2b58: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2b2b58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2b2b5c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2b2b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2b2b60: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2b2b60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b2b64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b2b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b2b68: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x2b2b68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
    // 0x2b2b6c: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x2b2b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    // 0x2b2b70: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2b2b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2b2b74: 0xad03001c  sw          $v1, 0x1C($t0)
    ctx->pc = 0x2b2b74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
    // 0x2b2b78: 0xad060014  sw          $a2, 0x14($t0)
    ctx->pc = 0x2b2b78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 6));
    // 0x2b2b7c: 0xad070018  sw          $a3, 0x18($t0)
    ctx->pc = 0x2b2b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 7));
    // 0x2b2b80: 0xad220024  sw          $v0, 0x24($t1)
    ctx->pc = 0x2b2b80u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 2));
    // 0x2b2b84: 0x25080028  addiu       $t0, $t0, 0x28
    ctx->pc = 0x2b2b84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 40));
    // 0x2b2b88: 0x2504001c  addiu       $a0, $t0, 0x1C
    ctx->pc = 0x2b2b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x2b2b8c: 0x154e0009  bne         $t2, $t6, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B2B8Cu;
    {
        const bool branch_taken_0x2b2b8c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        ctx->pc = 0x2B2B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B8Cu;
        // 0x2b2b90: 0x25290028  addiu       $t1, $t1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b8c) {
            ctx->pc = 0x2B2BB4u;
            goto label_2b2bb4;
        }
    }
    ctx->pc = 0x2B2B94u;
    // 0x2b2b94: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2b2b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b2b98: 0xac82ffbc  sw          $v0, -0x44($a0)
    ctx->pc = 0x2b2b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967228), GPR_U32(ctx, 2));
    // 0x2b2b9c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2ba0: 0xac83ffc0  sw          $v1, -0x40($a0)
    ctx->pc = 0x2b2ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967232), GPR_U32(ctx, 3));
    // 0x2b2ba4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2ba8: 0xac82ffd0  sw          $v0, -0x30($a0)
    ctx->pc = 0x2b2ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967248), GPR_U32(ctx, 2));
    // 0x2b2bac: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x2b2bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2b2bb0: 0xac83ffd4  sw          $v1, -0x2C($a0)
    ctx->pc = 0x2b2bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967252), GPR_U32(ctx, 3));
label_2b2bb4:
    // 0x2b2bb4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2b2bb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2b2bb8: 0x29420013  slti        $v0, $t2, 0x13
    ctx->pc = 0x2b2bb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2b2bbc: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
    ctx->pc = 0x2B2BBCu;
    {
        const bool branch_taken_0x2b2bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2BBCu;
        // 0x2b2bc0: 0x460c5ac0  add.s       $f11, $f11, $f12 (Delay Slot)
        ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2bbc) {
            ctx->pc = 0x2B2A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2a30;
        }
    }
    ctx->pc = 0x2B2BC4u;
    // 0x2b2bc4: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2B2BC4u;
    SET_GPR_U32(ctx, 31, 0x2B2BCCu);
    ctx->pc = 0x2B2BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2BC4u;
    // 0x2b2bc8: 0x8f84b9a8  lw          $a0, -0x4658($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2B2BC4u, 0x2B2BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2BCCu;
label_2b2bcc:
    // 0x2b2bcc: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2B2BCCu;
    SET_GPR_U32(ctx, 31, 0x2B2BD4u);
    ctx->pc = 0x2B2BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2BCCu;
    // 0x2b2bd0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2B2BCCu, 0x2B2BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2BD4u;
label_2b2bd4:
    // 0x2b2bd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2bd8: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x2b2bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2b2bdc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b2bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2be0: 0xc0ae284  jal         func_2B8A10
    ctx->pc = 0x2B2BE0u;
    SET_GPR_U32(ctx, 31, 0x2B2BE8u);
    ctx->pc = 0x2B2BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2BE0u;
    // 0x2b2be4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8A10u, 0x2B2BE0u, 0x2B2BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2BE8u;
label_2b2be8:
    // 0x2b2be8: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2B2BE8u;
    SET_GPR_U32(ctx, 31, 0x2B2BF0u);
    ctx->pc = 0x2B2BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2BE8u;
    // 0x2b2bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2B2BE8u, 0x2B2BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2BF0u;
label_2b2bf0:
    // 0x2b2bf0: 0xdfbf0310  ld          $ra, 0x310($sp)
    ctx->pc = 0x2b2bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2b2bf4: 0xdfb00300  ld          $s0, 0x300($sp)
    ctx->pc = 0x2b2bf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2b2bf8: 0xc7b60330  lwc1        $f22, 0x330($sp)
    ctx->pc = 0x2b2bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b2bfc: 0xc7b50328  lwc1        $f21, 0x328($sp)
    ctx->pc = 0x2b2bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b2c00: 0xc7b40320  lwc1        $f20, 0x320($sp)
    ctx->pc = 0x2b2c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b2c04: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C04u;
        // 0x2b2c08: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2C0Cu;
}
