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

// Function: creditsEnd
// Address: 0x2ae690 - 0x2ae698
void creditsEnd_0x2ae690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("creditsEnd_0x2ae690");
#endif

    ctx->pc = 0x2ae690u;

    // 0x2ae690: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE690u;
        // 0x2ae694: 0xaf80b34c  sw          $zero, -0x4CB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947660), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE698u;
}
