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

// Function: creditsGfx
// Address: 0x2ae6c8 - 0x2ae74c
void creditsGfx_0x2ae6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("creditsGfx_0x2ae6c8");
#endif

    switch (ctx->pc) {
        case 0x2ae6ecu: goto label_2ae6ec;
        case 0x2ae6f4u: goto label_2ae6f4;
        case 0x2ae6fcu: goto label_2ae6fc;
        case 0x2ae704u: goto label_2ae704;
        case 0x2ae724u: goto label_2ae724;
        default: break;
    }

    ctx->pc = 0x2ae6c8u;

    // 0x2ae6c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ae6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ae6cc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2ae6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2ae6d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ae6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ae6d4: 0x246299f0  addiu       $v0, $v1, -0x6610
    ctx->pc = 0x2ae6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x2ae6d8: 0x8c6499f0  lw          $a0, -0x6610($v1)
    ctx->pc = 0x2ae6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3299F0u));
    // 0x2ae6dc: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x2ae6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x329A08u));
    // 0x2ae6e0: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x2ae6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x329A04u));
    // 0x2ae6e4: 0xc0ae014  jal         func_2B8050
    ctx->pc = 0x2AE6E4u;
    SET_GPR_U32(ctx, 31, 0x2AE6ECu);
    ctx->pc = 0x2AE6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE6E4u;
    // 0x2ae6e8: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8050u, 0x2AE6E4u, 0x2AE6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE6ECu;
label_2ae6ec:
    // 0x2ae6ec: 0xc0abee6  jal         func_2AFB98
    ctx->pc = 0x2AE6ECu;
    SET_GPR_U32(ctx, 31, 0x2AE6F4u);
    ctx->pc = 0x2AFB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFB98u, 0x2AE6ECu, 0x2AE6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE6F4u;
label_2ae6f4:
    // 0x2ae6f4: 0xc0ac0c0  jal         func_2B0300
    ctx->pc = 0x2AE6F4u;
    SET_GPR_U32(ctx, 31, 0x2AE6FCu);
    ctx->pc = 0x2B0300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0300u, 0x2AE6F4u, 0x2AE6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE6FCu;
label_2ae6fc:
    // 0x2ae6fc: 0xc0a582e  jal         func_2960B8
    ctx->pc = 0x2AE6FCu;
    SET_GPR_U32(ctx, 31, 0x2AE704u);
    ctx->pc = 0x2AE700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE6FCu;
    // 0x2ae700: 0x8f84b350  lw          $a0, -0x4CB0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947664)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2960B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2960B8u, 0x2AE6FCu, 0x2AE704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE704u;
label_2ae704:
    // 0x2ae704: 0xc781b384  lwc1        $f1, -0x4C7C($gp)
    ctx->pc = 0x2ae704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae708: 0xc7808f64  lwc1        $f0, -0x709C($gp)
    ctx->pc = 0x2ae708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae70c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ae70cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ae710: 0x0  nop
    ctx->pc = 0x2ae710u;
    // NOP
    // 0x2ae714: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2AE714u;
    {
        const bool branch_taken_0x2ae714 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AE718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE714u;
        // 0x2ae718: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae714) {
            ctx->pc = 0x2AE744u;
            goto label_2ae744;
        }
    }
    ctx->pc = 0x2AE71Cu;
    // 0x2ae71c: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x2AE71Cu;
    SET_GPR_U32(ctx, 31, 0x2AE724u);
    ctx->pc = 0x2AE720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE71Cu;
    // 0x2ae720: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x2AE71Cu, 0x2AE724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE724u;
label_2ae724:
    // 0x2ae724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ae724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae728: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ae728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae72c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae730: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x2ae730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2ae734: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x2ae734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2ae738: 0x2408007f  addiu       $t0, $zero, 0x7F
    ctx->pc = 0x2ae738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2ae73c: 0x80ae108  j           func_2B8420
    ctx->pc = 0x2AE73Cu;
    ctx->pc = 0x2AE740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE73Cu;
    // 0x2ae740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    dlFillRectangle_0x2b8420(rdram, ctx, runtime); return;
    ctx->pc = 0x2AE744u;
label_2ae744:
    // 0x2ae744: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE744u;
        // 0x2ae748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE74Cu;
}
