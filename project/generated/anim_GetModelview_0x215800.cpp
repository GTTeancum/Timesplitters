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

// Function: anim_GetModelview
// Address: 0x215800 - 0x215820
void anim_GetModelview_0x215800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("anim_GetModelview_0x215800");
#endif

    ctx->pc = 0x215800u;

    // 0x215800: 0x8f829d48  lw          $v0, -0x62B8($gp)
    ctx->pc = 0x215800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942024)));
    // 0x215804: 0x3c0301fb  lui         $v1, 0x1FB
    ctx->pc = 0x215804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)507 << 16));
    // 0x215808: 0x8f849d4c  lw          $a0, -0x62B4($gp)
    ctx->pc = 0x215808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942028)));
    // 0x21580c: 0x246337b0  addiu       $v1, $v1, 0x37B0
    ctx->pc = 0x21580cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14256));
    // 0x215810: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x215810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x215814: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x215814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x215818: 0x3e00008  jr          $ra
    ctx->pc = 0x215818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215818u;
        // 0x21581c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215820u;
}
