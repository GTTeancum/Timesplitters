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

// Function: mcardFormat
// Address: 0x208c48 - 0x208c58
void mcardFormat_0x208c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcardFormat_0x208c48");
#endif

    ctx->pc = 0x208c48u;

    // 0x208c48: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x208c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x208c4c: 0xaf809be8  sw          $zero, -0x6418($gp)
    ctx->pc = 0x208c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941672), GPR_U32(ctx, 0));
    // 0x208c50: 0x3e00008  jr          $ra
    ctx->pc = 0x208C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C50u;
        // 0x208c54: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208C58u;
}
