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

// Function: sceVu0ClipScreen
// Address: 0x2d6a10 - 0x2d6a58
void sceVu0ClipScreen_0x2d6a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0ClipScreen_0x2d6a10");
#endif

    ctx->pc = 0x2d6a10u;

    // 0x2d6a10: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x2d6a10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2d6a14: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x2d6a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
    // 0x2d6a18: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2d6a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2d6a1c: 0x34424580  ori         $v0, $v0, 0x4580
    ctx->pc = 0x2d6a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17792);
    // 0x2d6a20: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2d6a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2d6a24: 0xd8870000  lqc2        $vf7, 0x0($a0)
    ctx->pc = 0x2d6a24u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d6a28: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x2d6a28u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d6a2c: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x2d6a2cu;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 0) & 0xFFFFu);
    // 0x2d6a30: 0x4ba4396c  vsub.xyw    $vf5, $vf7, $vf4
    ctx->pc = 0x2d6a30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d6a34: 0x4b87316c  vsub.xy     $vf5, $vf6, $vf7
    ctx->pc = 0x2d6a34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d6a38: 0x4a0002ff  vnop
    ctx->pc = 0x2d6a38u;
    // NOP operation, no action needed for VU0
    // 0x2d6a3c: 0x4a0002ff  vnop
    ctx->pc = 0x2d6a3cu;
    // NOP operation, no action needed for VU0
    // 0x2d6a40: 0x4a0002ff  vnop
    ctx->pc = 0x2d6a40u;
    // NOP operation, no action needed for VU0
    // 0x2d6a44: 0x4a0002ff  vnop
    ctx->pc = 0x2d6a44u;
    // NOP operation, no action needed for VU0
    // 0x2d6a48: 0x4a0002ff  vnop
    ctx->pc = 0x2d6a48u;
    // NOP operation, no action needed for VU0
    // 0x2d6a4c: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x2d6a4cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
    // 0x2d6a50: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A50u;
        // 0x2d6a54: 0x304200c0  andi        $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6A58u;
}
