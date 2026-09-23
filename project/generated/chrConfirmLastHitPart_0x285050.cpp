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

// Function: chrConfirmLastHitPart
// Address: 0x285050 - 0x28505c
void chrConfirmLastHitPart_0x285050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrConfirmLastHitPart_0x285050");
#endif

    ctx->pc = 0x285050u;

    // 0x285050: 0x8f82b240  lw          $v0, -0x4DC0($gp)
    ctx->pc = 0x285050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947392)));
    // 0x285054: 0x3e00008  jr          $ra
    ctx->pc = 0x285054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285054u;
        // 0x285058: 0xaf82b23c  sw          $v0, -0x4DC4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28505Cu;
}
