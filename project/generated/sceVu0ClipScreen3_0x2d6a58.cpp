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

// Function: sceVu0ClipScreen3
// Address: 0x2d6a58 - 0x2d6ab8
void sceVu0ClipScreen3_0x2d6a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0ClipScreen3_0x2d6a58");
#endif

    ctx->pc = 0x2d6a58u;

    // 0x2d6a58: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x2d6a58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2d6a5c: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x2d6a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
    // 0x2d6a60: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2d6a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2d6a64: 0x34424580  ori         $v0, $v0, 0x4580
    ctx->pc = 0x2d6a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17792);
    // 0x2d6a68: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2d6a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2d6a6c: 0xd8860000  lqc2        $vf6, 0x0($a0)
    ctx->pc = 0x2d6a6cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d6a70: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x2d6a70u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d6a74: 0xd8c90000  lqc2        $vf9, 0x0($a2)
    ctx->pc = 0x2d6a74u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d6a78: 0x48a23800  qmtc2.ni    $v0, $vf7
    ctx->pc = 0x2d6a78u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d6a7c: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x2d6a7cu;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 0) & 0xFFFFu);
    // 0x2d6a80: 0x4ba4316c  vsub.xyw    $vf5, $vf6, $vf4
    ctx->pc = 0x2d6a80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d6a84: 0x4b86396c  vsub.xy     $vf5, $vf7, $vf6
    ctx->pc = 0x2d6a84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d6a88: 0x4ba4416c  vsub.xyw    $vf5, $vf8, $vf4
    ctx->pc = 0x2d6a88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d6a8c: 0x4b88396c  vsub.xy     $vf5, $vf7, $vf8
    ctx->pc = 0x2d6a8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d6a90: 0x4ba4496c  vsub.xyw    $vf5, $vf9, $vf4
    ctx->pc = 0x2d6a90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d6a94: 0x4b89396c  vsub.xy     $vf5, $vf7, $vf9
    ctx->pc = 0x2d6a94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d6a98: 0x4a0002ff  vnop
    ctx->pc = 0x2d6a98u;
    // NOP operation, no action needed for VU0
    // 0x2d6a9c: 0x4a0002ff  vnop
    ctx->pc = 0x2d6a9cu;
    // NOP operation, no action needed for VU0
    // 0x2d6aa0: 0x4a0002ff  vnop
    ctx->pc = 0x2d6aa0u;
    // NOP operation, no action needed for VU0
    // 0x2d6aa4: 0x4a0002ff  vnop
    ctx->pc = 0x2d6aa4u;
    // NOP operation, no action needed for VU0
    // 0x2d6aa8: 0x4a0002ff  vnop
    ctx->pc = 0x2d6aa8u;
    // NOP operation, no action needed for VU0
    // 0x2d6aac: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x2d6aacu;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
    // 0x2d6ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6AB0u;
        // 0x2d6ab4: 0x304200c0  andi        $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6AB8u;
}
