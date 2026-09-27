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

// Function: sceVu0RotMatrixX
// Address: 0x2d62d0 - 0x2d6378
void sceVu0RotMatrixX_0x2d62d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0RotMatrixX_0x2d62d0");
#endif

    switch (ctx->pc) {
        case 0x2d6314u: goto label_2d6314;
        case 0x2d6348u: goto label_2d6348;
        default: break;
    }

    ctx->pc = 0x2d62d0u;

    // 0x2d62d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d62d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d62d4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2d62d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d62d8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2d62d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2d62dc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2d62dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2d62e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d62e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d62e4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2D62E4u;
    {
        const bool branch_taken_0x2d62e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d62e4) {
            ctx->pc = 0x2D62F8u;
            goto label_2d62f8;
        }
    }
    ctx->pc = 0x2D62ECu;
    // 0x2d62ec: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x2d62ecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x2d62f0: 0x80b58c0  j           func_2D6300
    ctx->pc = 0x2D62F0u;
    ctx->pc = 0x2D62F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D62F0u;
    // 0x2d62f4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6300u;
    goto label_2d6300;
    ctx->pc = 0x2D62F8u;
label_2d62f8:
    // 0x2d62f8: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x2d62f8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x2d62fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d62fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6300:
    // 0x2d6300: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x2d6300u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2d6304: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x2d6304u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2d6308: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x2d6308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d630c: 0xc0b586c  jal         func_2D61B0
    ctx->pc = 0x2D630Cu;
    SET_GPR_U32(ctx, 31, 0x2D6314u);
    ctx->pc = 0x2D61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D61B0u, 0x2D630Cu, 0x2D6314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6314u;
label_2d6314:
    // 0x2d6314: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x2d6314u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6318: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x2d6318u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x2d631c: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x2d631cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x2d6320: 0x4be82b3c  vmove.xyzw  $vf8, $vf5
    ctx->pc = 0x2d6320u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x2d6324: 0x4be92b3c  vmove.xyzw  $vf9, $vf5
    ctx->pc = 0x2d6324u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x2d6328: 0x4b002983  vaddw.x     $vf6, $vf5, $vf0w
    ctx->pc = 0x2d6328u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2d632c: 0x4a202a43  vaddw.w     $vf9, $vf5, $vf0w
    ctx->pc = 0x2d632cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x2d6330: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x2d6330u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2d6334: 0x4a4429c0  vaddx.z     $vf7, $vf5, $vf4x
    ctx->pc = 0x2d6334u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2d6338: 0x4a8429c1  vaddy.y     $vf7, $vf5, $vf4y
    ctx->pc = 0x2d6338u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2d633c: 0x4a842a04  vsubx.y     $vf8, $vf5, $vf4x
    ctx->pc = 0x2d633cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x2d6340: 0x4a442a01  vaddy.z     $vf8, $vf5, $vf4y
    ctx->pc = 0x2d6340u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x2d6344: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2d6344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d6348:
    // 0x2d6348: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2d6348u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d634c: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x2d634cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2d6350: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x2d6350u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2d6354: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x2d6354u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2d6358: 0x4be4494b  vmaddw.xyzw $vf5, $vf9, $vf4w
    ctx->pc = 0x2d6358u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d635c: 0xf8850000  sqc2        $vf5, 0x0($a0)
    ctx->pc = 0x2d635cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2d6360: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x2d6360u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x2d6364: 0x20a50010  addi        $a1, $a1, 0x10
    ctx->pc = 0x2d6364u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x2d6368: 0x1407fff7  bne         $zero, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2D6368u;
    {
        const bool branch_taken_0x2d6368 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        ctx->pc = 0x2D636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6368u;
        // 0x2d636c: 0x20840010  addi        $a0, $a0, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6368) {
            ctx->pc = 0x2D6348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6348;
        }
    }
    ctx->pc = 0x2D6370u;
    // 0x2d6370: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6378u;
}
