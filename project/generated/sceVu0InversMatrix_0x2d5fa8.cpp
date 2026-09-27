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

// Function: sceVu0InversMatrix
// Address: 0x2d5fa8 - 0x2d6014
void sceVu0InversMatrix_0x2d5fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0InversMatrix_0x2d5fa8");
#endif

    ctx->pc = 0x2d5fa8u;

    // 0x2d5fa8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x2d5fa8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d5fac: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x2d5facu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d5fb0: 0x78aa0020  lq          $t2, 0x20($a1)
    ctx->pc = 0x2d5fb0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2d5fb4: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x2d5fb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2d5fb8: 0x4be5233c  vmove.xyzw  $vf5, $vf4
    ctx->pc = 0x2d5fb8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[4], _mm_castsi128_ps(mask)); }
    // 0x2d5fbc: 0x4bc4212c  vsub.xyz    $vf4, $vf4, $vf4
    ctx->pc = 0x2d5fbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2d5fc0: 0x4be9233c  vmove.xyzw  $vf9, $vf4
    ctx->pc = 0x2d5fc0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[4], _mm_castsi128_ps(mask)); }
    // 0x2d5fc4: 0x482b2000  qmfc2.ni    $t3, $vf4
    ctx->pc = 0x2d5fc4u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2d5fc8: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x2d5fc8u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2d5fcc: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x2d5fccu;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2d5fd0: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x2d5fd0u;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x2d5fd4: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x2d5fd4u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x2d5fd8: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x2d5fd8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x2d5fdc: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x2d5fdcu;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x2d5fe0: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x2d5fe0u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x2d5fe4: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x2d5fe4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2d5fe8: 0x48a93800  qmtc2.ni    $t1, $vf7
    ctx->pc = 0x2d5fe8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x2d5fec: 0x48aa4000  qmtc2.ni    $t2, $vf8
    ctx->pc = 0x2d5fecu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x2d5ff0: 0x4bc531bc  vmulax.xyz  $ACC, $vf6, $vf5x
    ctx->pc = 0x2d5ff0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2d5ff4: 0x4bc538bd  vmadday.xyz $ACC, $vf7, $vf5y
    ctx->pc = 0x2d5ff4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2d5ff8: 0x4bc5410a  vmaddz.xyz  $vf4, $vf8, $vf5z
    ctx->pc = 0x2d5ff8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2d5ffc: 0x4bc4492c  vsub.xyz    $vf4, $vf9, $vf4
    ctx->pc = 0x2d5ffcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2d6000: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x2d6000u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x2d6004: 0x7c890010  sq          $t1, 0x10($a0)
    ctx->pc = 0x2d6004u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 9));
    // 0x2d6008: 0x7c8a0020  sq          $t2, 0x20($a0)
    ctx->pc = 0x2d6008u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 10));
    // 0x2d600c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D600Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D600Cu;
        // 0x2d6010: 0xf8840030  sqc2        $vf4, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D600Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6014u;
}
