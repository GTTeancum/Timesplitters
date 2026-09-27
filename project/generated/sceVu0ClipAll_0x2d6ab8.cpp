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

// Function: sceVu0ClipAll
// Address: 0x2d6ab8 - 0x2d6b44
void sceVu0ClipAll_0x2d6ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0ClipAll_0x2d6ab8");
#endif

    switch (ctx->pc) {
        case 0x2d6adcu: goto label_2d6adc;
        default: break;
    }

    ctx->pc = 0x2d6ab8u;

    // 0x2d6ab8: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x2d6ab8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d6abc: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x2d6abcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d6ac0: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x2d6ac0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2d6ac4: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x2d6ac4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2d6ac8: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x2d6ac8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2d6acc: 0xd8890000  lqc2        $vf9, 0x0($a0)
    ctx->pc = 0x2d6accu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d6ad0: 0xd8aa0000  lqc2        $vf10, 0x0($a1)
    ctx->pc = 0x2d6ad0u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d6ad4: 0xd88b0000  lqc2        $vf11, 0x0($a0)
    ctx->pc = 0x2d6ad4u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d6ad8: 0xd8ac0000  lqc2        $vf12, 0x0($a1)
    ctx->pc = 0x2d6ad8u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2d6adc:
    // 0x2d6adc: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x2d6adcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2d6ae0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x2d6ae0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2d6ae4: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x2d6ae4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2d6ae8: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x2d6ae8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x2d6aec: 0x4bc84adb  vmulw.xyz   $vf11, $vf9, $vf8w
    ctx->pc = 0x2d6aecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x2d6af0: 0x4bc8531b  vmulw.xyz   $vf12, $vf10, $vf8w
    ctx->pc = 0x2d6af0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x2d6af4: 0x4a0002ff  vnop
    ctx->pc = 0x2d6af4u;
    // NOP operation, no action needed for VU0
    // 0x2d6af8: 0x4a0002ff  vnop
    ctx->pc = 0x2d6af8u;
    // NOP operation, no action needed for VU0
    // 0x2d6afc: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x2d6afcu;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 0) & 0xFFFFu);
    // 0x2d6b00: 0x4bab42ec  vsub.xyw    $vf11, $vf8, $vf11
    ctx->pc = 0x2d6b00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x2d6b04: 0x4ba8632c  vsub.xyw    $vf12, $vf12, $vf8
    ctx->pc = 0x2d6b04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[12], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x2d6b08: 0x4a2b4b3c  vmove.w     $vf11, $vf9
    ctx->pc = 0x2d6b08u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], ctx->vu0_vf[9], _mm_castsi128_ps(mask)); }
    // 0x2d6b0c: 0x4a2c533c  vmove.w     $vf12, $vf10
    ctx->pc = 0x2d6b0cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], ctx->vu0_vf[10], _mm_castsi128_ps(mask)); }
    // 0x2d6b10: 0x4a0002ff  vnop
    ctx->pc = 0x2d6b10u;
    // NOP operation, no action needed for VU0
    // 0x2d6b14: 0x20e70010  addi        $a3, $a3, 0x10
    ctx->pc = 0x2d6b14u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x2d6b18: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x2d6b18u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d6b1c: 0x2108ffff  addi        $t0, $t0, -0x1
    ctx->pc = 0x2d6b1cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x2d6b20: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x2d6b20u;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
    // 0x2d6b24: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x2d6b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x2d6b28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6B28u;
    {
        const bool branch_taken_0x2d6b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6b28) {
            ctx->pc = 0x2D6B3Cu;
            goto label_2d6b3c;
        }
    }
    ctx->pc = 0x2D6B30u;
    // 0x2d6b30: 0x1408ffea  bne         $zero, $t0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2D6B30u;
    {
        const bool branch_taken_0x2d6b30 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 8));
        if (branch_taken_0x2d6b30) {
            ctx->pc = 0x2D6ADCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6adc;
        }
    }
    ctx->pc = 0x2D6B38u;
    // 0x2d6b38: 0x20020001  addi        $v0, $zero, 0x1
    ctx->pc = 0x2d6b38u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_2d6b3c:
    // 0x2d6b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6B44u;
}
