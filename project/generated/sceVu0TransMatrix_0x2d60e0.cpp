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

// Function: sceVu0TransMatrix
// Address: 0x2d60e0 - 0x2d610c
void sceVu0TransMatrix_0x2d60e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0TransMatrix_0x2d60e0");
#endif

    ctx->pc = 0x2d60e0u;

    // 0x2d60e0: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x2d60e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d60e4: 0xd8a50030  lqc2        $vf5, 0x30($a1)
    ctx->pc = 0x2d60e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2d60e8: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x2d60e8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d60ec: 0x78a80010  lq          $t0, 0x10($a1)
    ctx->pc = 0x2d60ecu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d60f0: 0x78a90020  lq          $t1, 0x20($a1)
    ctx->pc = 0x2d60f0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2d60f4: 0x4bc42968  vadd.xyz    $vf5, $vf5, $vf4
    ctx->pc = 0x2d60f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d60f8: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x2d60f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
    // 0x2d60fc: 0x7c880010  sq          $t0, 0x10($a0)
    ctx->pc = 0x2d60fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 8));
    // 0x2d6100: 0x7c890020  sq          $t1, 0x20($a0)
    ctx->pc = 0x2d6100u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 9));
    // 0x2d6104: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6104u;
        // 0x2d6108: 0xf8850030  sqc2        $vf5, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D610Cu;
}
