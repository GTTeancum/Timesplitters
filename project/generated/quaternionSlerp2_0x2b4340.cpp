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

// Function: quaternionSlerp2
// Address: 0x2b4340 - 0x2b4604
void quaternionSlerp2_0x2b4340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quaternionSlerp2_0x2b4340");
#endif

    switch (ctx->pc) {
        case 0x2b44bcu: goto label_2b44bc;
        case 0x2b44c8u: goto label_2b44c8;
        case 0x2b44e8u: goto label_2b44e8;
        case 0x2b44f4u: goto label_2b44f4;
        case 0x2b4574u: goto label_2b4574;
        case 0x2b4580u: goto label_2b4580;
        default: break;
    }

    ctx->pc = 0x2b4340u;

    // 0x2b4340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b4340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b4344: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b4344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4348: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x2b4348u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2b434c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2b434cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2b4350: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b4350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2b4354: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x2b4354u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4358: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b4358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b435c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b435cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b4360: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4364: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2b4364u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2b4368: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b4368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b436c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B436Cu;
    {
        const bool branch_taken_0x2b436c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B4370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B436Cu;
        // 0x2b4370: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b436c) {
            ctx->pc = 0x2B4384u;
            goto label_2b4384;
        }
    }
    ctx->pc = 0x2B4374u;
    // 0x2b4374: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2b4374u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b4378: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2b4378u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b437c: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x2B437Cu;
    {
        const bool branch_taken_0x2b437c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B437Cu;
        // 0x2b4380: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b437c) {
            ctx->pc = 0x2B45E8u;
            goto label_2b45e8;
        }
    }
    ctx->pc = 0x2B4384u;
label_2b4384:
    // 0x2b4384: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b4384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b4388: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b4388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b438c: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x2b438cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4390: 0x0  nop
    ctx->pc = 0x2b4390u;
    // NOP
    // 0x2b4394: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4394u;
    {
        const bool branch_taken_0x2b4394 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4394) {
            ctx->pc = 0x2B4398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4394u;
            // 0x2b4398: 0xc60b0000  lwc1        $f11, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B43ACu;
            goto label_2b43ac;
        }
    }
    ctx->pc = 0x2B439Cu;
    // 0x2b439c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2b439cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b43a0: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2b43a0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b43a4: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x2B43A4u;
    {
        const bool branch_taken_0x2b43a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B43A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43A4u;
        // 0x2b43a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b43a4) {
            ctx->pc = 0x2B45E8u;
            goto label_2b45e8;
        }
    }
    ctx->pc = 0x2B43ACu;
label_2b43ac:
    // 0x2b43ac: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2b43acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b43b0: 0xc60a0004  lwc1        $f10, 0x4($s0)
    ctx->pc = 0x2b43b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2b43b4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2b43b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b43b8: 0x46035900  add.s       $f4, $f11, $f3
    ctx->pc = 0x2b43b8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[11], ctx->f[3]);
    // 0x2b43bc: 0x460358c1  sub.s       $f3, $f11, $f3
    ctx->pc = 0x2b43bcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[11], ctx->f[3]);
    // 0x2b43c0: 0xc6090008  lwc1        $f9, 0x8($s0)
    ctx->pc = 0x2b43c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2b43c4: 0x46005180  add.s       $f6, $f10, $f0
    ctx->pc = 0x2b43c4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x2b43c8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2b43c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b43cc: 0x46005001  sub.s       $f0, $f10, $f0
    ctx->pc = 0x2b43ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x2b43d0: 0xc608000c  lwc1        $f8, 0xC($s0)
    ctx->pc = 0x2b43d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2b43d4: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2b43d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2b43d8: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x2b43d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b43dc: 0x46014940  add.s       $f5, $f9, $f1
    ctx->pc = 0x2b43dcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x2b43e0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b43e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b43e4: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x2b43e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2b43e8: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x2b43e8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2b43ec: 0x46014841  sub.s       $f1, $f9, $f1
    ctx->pc = 0x2b43ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x2b43f0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b43f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b43f4: 0x46024000  add.s       $f0, $f8, $f2
    ctx->pc = 0x2b43f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[2]);
    // 0x2b43f8: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x2b43f8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x2b43fc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2b43fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b4400: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x2b4400u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2b4404: 0x46024081  sub.s       $f2, $f8, $f2
    ctx->pc = 0x2b4404u;
    ctx->f[2] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x2b4408: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2b4408u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2b440c: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x2b440cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x2b4410: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2b4410u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2b4414: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b4414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b4418: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2b4418u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2b441c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b441cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b4420: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x2b4420u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4424: 0x0  nop
    ctx->pc = 0x2b4424u;
    // NOP
    // 0x2b4428: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4428u;
    {
        const bool branch_taken_0x2b4428 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4428u;
        // 0x2b442c: 0x46005b06  mov.s       $f12, $f11 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4428) {
            ctx->pc = 0x2B4448u;
            goto label_2b4448;
        }
    }
    ctx->pc = 0x2B4430u;
    // 0x2b4430: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2b4430u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b4434: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x2b4434u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b4438: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x2b4438u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b443c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x2b443cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2b4440: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4440u;
    {
        const bool branch_taken_0x2b4440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4440u;
        // 0x2b4444: 0xc7a60000  lwc1        $f6, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4440) {
            ctx->pc = 0x2B4454u;
            goto label_2b4454;
        }
    }
    ctx->pc = 0x2B4448u;
label_2b4448:
    // 0x2b4448: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2b4448u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b444c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2b444cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b4450: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x2b4450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2b4454:
    // 0x2b4454: 0xc7a70004  lwc1        $f7, 0x4($sp)
    ctx->pc = 0x2b4454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2b4458: 0x46066042  mul.s       $f1, $f12, $f6
    ctx->pc = 0x2b4458u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x2b445c: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x2b445cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b4460: 0x460750c2  mul.s       $f3, $f10, $f7
    ctx->pc = 0x2b4460u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x2b4464: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x2b4464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b4468: 0x46054802  mul.s       $f0, $f9, $f5
    ctx->pc = 0x2b4468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
    // 0x2b446c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b446cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b4470: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2b4470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2b4474: 0x46044082  mul.s       $f2, $f8, $f4
    ctx->pc = 0x2b4474u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x2b4478: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2b4478u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2b447c: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x2b447cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
    // 0x2b4480: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2b4480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2b4484: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b4484u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b4488: 0x46020b00  add.s       $f12, $f1, $f2
    ctx->pc = 0x2b4488u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b448c: 0x46156000  add.s       $f0, $f12, $f21
    ctx->pc = 0x2b448cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    // 0x2b4490: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x2b4490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4494: 0x0  nop
    ctx->pc = 0x2b4494u;
    // NOP
    // 0x2b4498: 0x45020033  bc1fl       . + 4 + (0x33 << 2)
    ctx->pc = 0x2B4498u;
    {
        const bool branch_taken_0x2b4498 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4498) {
            ctx->pc = 0x2B449Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4498u;
            // 0x2b449c: 0x4616ab01  sub.s       $f12, $f21, $f22 (Delay Slot)
            ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4568u;
            goto label_2b4568;
        }
    }
    ctx->pc = 0x2B44A0u;
    // 0x2b44a0: 0x460ca801  sub.s       $f0, $f21, $f12
    ctx->pc = 0x2b44a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[12]);
    // 0x2b44a4: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x2b44a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b44a8: 0x0  nop
    ctx->pc = 0x2b44a8u;
    // NOP
    // 0x2b44ac: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x2B44ACu;
    {
        const bool branch_taken_0x2b44ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b44ac) {
            ctx->pc = 0x2B44B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B44ACu;
            // 0x2b44b0: 0x4616ad01  sub.s       $f20, $f21, $f22 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4518u;
            goto label_2b4518;
        }
    }
    ctx->pc = 0x2B44B4u;
    // 0x2b44b4: 0xc0b5eda  jal         func_2D7B68
    ctx->pc = 0x2B44B4u;
    SET_GPR_U32(ctx, 31, 0x2B44BCu);
    ctx->pc = 0x2D7B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B68u, 0x2B44B4u, 0x2B44BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B44BCu;
label_2b44bc:
    // 0x2b44bc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b44bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2b44c0: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B44C0u;
    SET_GPR_U32(ctx, 31, 0x2B44C8u);
    ctx->pc = 0x2B44C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B44C0u;
    // 0x2b44c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B44C0u, 0x2B44C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B44C8u;
label_2b44c8:
    // 0x2b44c8: 0x4616ab01  sub.s       $f12, $f21, $f22
    ctx->pc = 0x2b44c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x2b44cc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b44ccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2b44d0: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x2b44d0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x2b44d4: 0x0  nop
    ctx->pc = 0x2b44d4u;
    // NOP
    // 0x2b44d8: 0x0  nop
    ctx->pc = 0x2b44d8u;
    // NOP
    // 0x2b44dc: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x2b44dcu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x2b44e0: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B44E0u;
    SET_GPR_U32(ctx, 31, 0x2B44E8u);
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B44E0u, 0x2B44E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B44E8u;
label_2b44e8:
    // 0x2b44e8: 0x4614b302  mul.s       $f12, $f22, $f20
    ctx->pc = 0x2b44e8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x2b44ec: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B44ECu;
    SET_GPR_U32(ctx, 31, 0x2B44F4u);
    ctx->pc = 0x2B44F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B44ECu;
    // 0x2b44f0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B44ECu, 0x2B44F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B44F4u;
label_2b44f4:
    // 0x2b44f4: 0x0  nop
    ctx->pc = 0x2b44f4u;
    // NOP
    // 0x2b44f8: 0x0  nop
    ctx->pc = 0x2b44f8u;
    // NOP
    // 0x2b44fc: 0x46150303  div.s       $f12, $f0, $f21
    ctx->pc = 0x2b44fcu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[21];
    // 0x2b4500: 0xc60b0000  lwc1        $f11, 0x0($s0)
    ctx->pc = 0x2b4500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2b4504: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x2b4504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b4508: 0xc7a70004  lwc1        $f7, 0x4($sp)
    ctx->pc = 0x2b4508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2b450c: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x2b450cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b4510: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B4510u;
    {
        const bool branch_taken_0x2b4510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4510u;
        // 0x2b4514: 0xc7a4000c  lwc1        $f4, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4510) {
            ctx->pc = 0x2B451Cu;
            goto label_2b451c;
        }
    }
    ctx->pc = 0x2B4518u;
label_2b4518:
    // 0x2b4518: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2b4518u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2b451c:
    // 0x2b451c: 0x46066002  mul.s       $f0, $f12, $f6
    ctx->pc = 0x2b451cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x2b4520: 0x460ba042  mul.s       $f1, $f20, $f11
    ctx->pc = 0x2b4520u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[11]);
    // 0x2b4524: 0x46076082  mul.s       $f2, $f12, $f7
    ctx->pc = 0x2b4524u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
    // 0x2b4528: 0x460560c2  mul.s       $f3, $f12, $f5
    ctx->pc = 0x2b4528u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x2b452c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b452cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b4530: 0x46046102  mul.s       $f4, $f12, $f4
    ctx->pc = 0x2b4530u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x2b4534: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2b4534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2b4538: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2b4538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b453c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2b453cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2b4540: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b4540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b4544: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2b4544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2b4548: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2b4548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b454c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2b454cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2b4550: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2b4550u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2b4554: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2b4554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2b4558: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2b4558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b455c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2b455cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2b4560: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2B4560u;
    {
        const bool branch_taken_0x2b4560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4560u;
        // 0x2b4564: 0x46040000  add.s       $f0, $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4560) {
            ctx->pc = 0x2B45E0u;
            goto label_2b45e0;
        }
    }
    ctx->pc = 0x2B4568u;
label_2b4568:
    // 0x2b4568: 0xc7948fc8  lwc1        $f20, -0x7038($gp)
    ctx->pc = 0x2b4568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b456c: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B456Cu;
    SET_GPR_U32(ctx, 31, 0x2B4574u);
    ctx->pc = 0x2B4570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B456Cu;
    // 0x2b4570: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B456Cu, 0x2B4574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4574u;
label_2b4574:
    // 0x2b4574: 0x4614b302  mul.s       $f12, $f22, $f20
    ctx->pc = 0x2b4574u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x2b4578: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B4578u;
    SET_GPR_U32(ctx, 31, 0x2B4580u);
    ctx->pc = 0x2B457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4578u;
    // 0x2b457c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B4578u, 0x2B4580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4580u;
label_2b4580:
    // 0x2b4580: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2b4580u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2b4584: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2b4584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4588: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2b4588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b458c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2b458cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2b4590: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2b4590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b4594: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b4594u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b4598: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2b4598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b459c: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x2b459cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b45a0: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x2b45a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2b45a4: 0x460360c2  mul.s       $f3, $f12, $f3
    ctx->pc = 0x2b45a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x2b45a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b45a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b45ac: 0x46046102  mul.s       $f4, $f12, $f4
    ctx->pc = 0x2b45acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x2b45b0: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2b45b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2b45b4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2b45b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b45b8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2b45b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2b45bc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2b45bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2b45c0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2b45c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2b45c4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2b45c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b45c8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2b45c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2b45cc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2b45ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2b45d0: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2b45d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2b45d4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2b45d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b45d8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2b45d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2b45dc: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2b45dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_2b45e0:
    // 0x2b45e0: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2b45e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2b45e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b45e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b45e8:
    // 0x2b45e8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b45e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b45ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b45ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b45f0: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x2b45f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b45f4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2b45f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b45f8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2b45f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b45fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B45FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B45FCu;
        // 0x2b4600: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B45FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4604u;
}
