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

// Function: gameLevelRestart
// Address: 0x21d320 - 0x21d334
void gameLevelRestart_0x21d320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gameLevelRestart_0x21d320");
#endif

    ctx->pc = 0x21d320u;

    // 0x21d320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d324: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x21d324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21d328: 0xaf82935c  sw          $v0, -0x6CA4($gp)
    ctx->pc = 0x21d328u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939484), GPR_U32(ctx, 2));
    // 0x21d32c: 0x3e00008  jr          $ra
    ctx->pc = 0x21D32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D32Cu;
        // 0x21d330: 0xaf839dac  sw          $v1, -0x6254($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D334u;
}
