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

// Function: quaternionSlerp
// Address: 0x2b4080 - 0x2b4340
void quaternionSlerp_0x2b4080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quaternionSlerp_0x2b4080");
#endif

    switch (ctx->pc) {
        case 0x2b41f8u: goto label_2b41f8;
        case 0x2b4204u: goto label_2b4204;
        case 0x2b4224u: goto label_2b4224;
        case 0x2b4230u: goto label_2b4230;
        case 0x2b42b0u: goto label_2b42b0;
        case 0x2b42bcu: goto label_2b42bc;
        default: break;
    }

    ctx->pc = 0x2b4080u;

    // 0x2b4080: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b4080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b4084: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b4084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4088: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x2b4088u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2b408c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2b408cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2b4090: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2b4090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2b4094: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x2b4094u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4098: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2b4098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2b409c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b409cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b40a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b40a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b40a4: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2b40a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2b40a8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b40a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b40ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B40ACu;
    {
        const bool branch_taken_0x2b40ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B40B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40ACu;
        // 0x2b40b0: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40ac) {
            ctx->pc = 0x2B40C4u;
            goto label_2b40c4;
        }
    }
    ctx->pc = 0x2B40B4u;
    // 0x2b40b4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2b40b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b40b8: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2b40b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b40bc: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x2B40BCu;
    {
        const bool branch_taken_0x2b40bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40BCu;
        // 0x2b40c0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40bc) {
            ctx->pc = 0x2B4324u;
            goto label_2b4324;
        }
    }
    ctx->pc = 0x2B40C4u;
label_2b40c4:
    // 0x2b40c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b40c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b40c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b40c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b40cc: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x2b40ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b40d0: 0x0  nop
    ctx->pc = 0x2b40d0u;
    // NOP
    // 0x2b40d4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B40D4u;
    {
        const bool branch_taken_0x2b40d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40D4u;
        // 0x2b40d8: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40d4) {
            ctx->pc = 0x2B40ECu;
            goto label_2b40ec;
        }
    }
    ctx->pc = 0x2B40DCu;
    // 0x2b40dc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2b40dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b40e0: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2b40e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b40e4: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x2B40E4u;
    {
        const bool branch_taken_0x2b40e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B40E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40E4u;
        // 0x2b40e8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40e4) {
            ctx->pc = 0x2B4324u;
            goto label_2b4324;
        }
    }
    ctx->pc = 0x2B40ECu;
label_2b40ec:
    // 0x2b40ec: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2b40ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b40f0: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x2b40f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b40f4: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x2b40f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2b40f8: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x2b40f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2b40fc: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2b40fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b4100: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2b4100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b4104: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2b4104u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b4108: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x2b4108u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b410c: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x2b410cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2b4110: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x2b4110u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2b4114: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2b4114u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b4118: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2b4118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b411c: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x2b411cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b4120: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2b4120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4124: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2b4124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4128: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b4128u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b412c: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x2b412cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b4130: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2b4130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2b4134: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x2b4134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b4138: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x2b4138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b413c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2b413cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2b4140: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x2b4140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b4144: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2b4144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2b4148: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b4148u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b414c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2b414cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2b4150: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b4150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4154: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4154u;
    {
        const bool branch_taken_0x2b4154 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4154) {
            ctx->pc = 0x2B4174u;
            goto label_2b4174;
        }
    }
    ctx->pc = 0x2B415Cu;
    // 0x2b415c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2b415cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b4160: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x2b4160u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b4164: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x2b4164u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b4168: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x2b4168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2b416c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B416Cu;
    {
        const bool branch_taken_0x2b416c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B416Cu;
        // 0x2b4170: 0xc6080000  lwc1        $f8, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b416c) {
            ctx->pc = 0x2B4180u;
            goto label_2b4180;
        }
    }
    ctx->pc = 0x2B4174u;
label_2b4174:
    // 0x2b4174: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2b4174u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b4178: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2b4178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b417c: 0xc6080000  lwc1        $f8, 0x0($s0)
    ctx->pc = 0x2b417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2b4180:
    // 0x2b4180: 0xc7a70000  lwc1        $f7, 0x0($sp)
    ctx->pc = 0x2b4180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2b4184: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2b4184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4188: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x2b4188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b418c: 0x46074042  mul.s       $f1, $f8, $f7
    ctx->pc = 0x2b418cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x2b4190: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2b4190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b4194: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2b4194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2b4198: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x2b4198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b419c: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x2b419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b41a0: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2b41a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2b41a4: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x2b41a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b41a8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b41a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b41ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b41acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b41b0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2b41b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2b41b4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2b41b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2b41b8: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x2b41b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
    // 0x2b41bc: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2b41bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2b41c0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2b41c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2b41c4: 0x46020b00  add.s       $f12, $f1, $f2
    ctx->pc = 0x2b41c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b41c8: 0x46156000  add.s       $f0, $f12, $f21
    ctx->pc = 0x2b41c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    // 0x2b41cc: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x2b41ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b41d0: 0x0  nop
    ctx->pc = 0x2b41d0u;
    // NOP
    // 0x2b41d4: 0x45020033  bc1fl       . + 4 + (0x33 << 2)
    ctx->pc = 0x2B41D4u;
    {
        const bool branch_taken_0x2b41d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b41d4) {
            ctx->pc = 0x2B41D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B41D4u;
            // 0x2b41d8: 0x4616ab01  sub.s       $f12, $f21, $f22 (Delay Slot)
            ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B42A4u;
            goto label_2b42a4;
        }
    }
    ctx->pc = 0x2B41DCu;
    // 0x2b41dc: 0x460ca801  sub.s       $f0, $f21, $f12
    ctx->pc = 0x2b41dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[12]);
    // 0x2b41e0: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x2b41e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b41e4: 0x0  nop
    ctx->pc = 0x2b41e4u;
    // NOP
    // 0x2b41e8: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x2B41E8u;
    {
        const bool branch_taken_0x2b41e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b41e8) {
            ctx->pc = 0x2B41ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B41E8u;
            // 0x2b41ec: 0x4616ad01  sub.s       $f20, $f21, $f22 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4254u;
            goto label_2b4254;
        }
    }
    ctx->pc = 0x2B41F0u;
    // 0x2b41f0: 0xc0b5eda  jal         func_2D7B68
    ctx->pc = 0x2B41F0u;
    SET_GPR_U32(ctx, 31, 0x2B41F8u);
    ctx->pc = 0x2D7B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B68u, 0x2B41F0u, 0x2B41F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B41F8u;
label_2b41f8:
    // 0x2b41f8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b41f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2b41fc: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B41FCu;
    SET_GPR_U32(ctx, 31, 0x2B4204u);
    ctx->pc = 0x2B4200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B41FCu;
    // 0x2b4200: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B41FCu, 0x2B4204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4204u;
label_2b4204:
    // 0x2b4204: 0x4616ab01  sub.s       $f12, $f21, $f22
    ctx->pc = 0x2b4204u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x2b4208: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b4208u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2b420c: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x2b420cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x2b4210: 0x0  nop
    ctx->pc = 0x2b4210u;
    // NOP
    // 0x2b4214: 0x0  nop
    ctx->pc = 0x2b4214u;
    // NOP
    // 0x2b4218: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x2b4218u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x2b421c: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B421Cu;
    SET_GPR_U32(ctx, 31, 0x2B4224u);
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B421Cu, 0x2B4224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4224u;
label_2b4224:
    // 0x2b4224: 0x4614b302  mul.s       $f12, $f22, $f20
    ctx->pc = 0x2b4224u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x2b4228: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B4228u;
    SET_GPR_U32(ctx, 31, 0x2B4230u);
    ctx->pc = 0x2B422Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4228u;
    // 0x2b422c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B4228u, 0x2B4230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4230u;
label_2b4230:
    // 0x2b4230: 0x0  nop
    ctx->pc = 0x2b4230u;
    // NOP
    // 0x2b4234: 0x0  nop
    ctx->pc = 0x2b4234u;
    // NOP
    // 0x2b4238: 0x46150303  div.s       $f12, $f0, $f21
    ctx->pc = 0x2b4238u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[21];
    // 0x2b423c: 0xc6080000  lwc1        $f8, 0x0($s0)
    ctx->pc = 0x2b423cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2b4240: 0xc7a70000  lwc1        $f7, 0x0($sp)
    ctx->pc = 0x2b4240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2b4244: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x2b4244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b4248: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x2b4248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b424c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B424Cu;
    {
        const bool branch_taken_0x2b424c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B424Cu;
        // 0x2b4250: 0xc7a4000c  lwc1        $f4, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b424c) {
            ctx->pc = 0x2B4258u;
            goto label_2b4258;
        }
    }
    ctx->pc = 0x2B4254u;
label_2b4254:
    // 0x2b4254: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2b4254u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2b4258:
    // 0x2b4258: 0x46076002  mul.s       $f0, $f12, $f7
    ctx->pc = 0x2b4258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
    // 0x2b425c: 0x4608a042  mul.s       $f1, $f20, $f8
    ctx->pc = 0x2b425cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[8]);
    // 0x2b4260: 0x46066082  mul.s       $f2, $f12, $f6
    ctx->pc = 0x2b4260u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x2b4264: 0x460560c2  mul.s       $f3, $f12, $f5
    ctx->pc = 0x2b4264u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x2b4268: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b4268u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b426c: 0x46046102  mul.s       $f4, $f12, $f4
    ctx->pc = 0x2b426cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x2b4270: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2b4270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2b4274: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2b4274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4278: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2b4278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2b427c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b427cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b4280: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2b4280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2b4284: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2b4284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4288: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2b4288u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2b428c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2b428cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2b4290: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2b4290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2b4294: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2b4294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4298: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2b4298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2b429c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2B429Cu;
    {
        const bool branch_taken_0x2b429c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B42A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B429Cu;
        // 0x2b42a0: 0x46040000  add.s       $f0, $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b429c) {
            ctx->pc = 0x2B431Cu;
            goto label_2b431c;
        }
    }
    ctx->pc = 0x2B42A4u;
label_2b42a4:
    // 0x2b42a4: 0xc7948fc4  lwc1        $f20, -0x703C($gp)
    ctx->pc = 0x2b42a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b42a8: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B42A8u;
    SET_GPR_U32(ctx, 31, 0x2B42B0u);
    ctx->pc = 0x2B42ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B42A8u;
    // 0x2b42ac: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B42A8u, 0x2B42B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B42B0u;
label_2b42b0:
    // 0x2b42b0: 0x4614b302  mul.s       $f12, $f22, $f20
    ctx->pc = 0x2b42b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x2b42b4: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B42B4u;
    SET_GPR_U32(ctx, 31, 0x2B42BCu);
    ctx->pc = 0x2B42B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B42B4u;
    // 0x2b42b8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B42B4u, 0x2B42BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B42BCu;
label_2b42bc:
    // 0x2b42bc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2b42bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2b42c0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2b42c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b42c4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2b42c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b42c8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2b42c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2b42cc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2b42ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b42d0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b42d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b42d4: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2b42d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b42d8: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x2b42d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b42dc: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x2b42dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2b42e0: 0x460360c2  mul.s       $f3, $f12, $f3
    ctx->pc = 0x2b42e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x2b42e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b42e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b42e8: 0x46046102  mul.s       $f4, $f12, $f4
    ctx->pc = 0x2b42e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x2b42ec: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2b42ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2b42f0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2b42f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b42f4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2b42f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2b42f8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2b42f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2b42fc: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2b42fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2b4300: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2b4300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4304: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2b4304u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2b4308: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2b4308u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2b430c: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2b430cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2b4310: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2b4310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4314: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2b4314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2b4318: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2b4318u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_2b431c:
    // 0x2b431c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2b431cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2b4320: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b4320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b4324:
    // 0x2b4324: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2b4324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b4328: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2b4328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b432c: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x2b432cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b4330: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2b4330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b4334: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2b4334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b4338: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4338u;
        // 0x2b433c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4340u;
}
