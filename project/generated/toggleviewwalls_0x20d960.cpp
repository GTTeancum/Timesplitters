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

// Function: toggleviewwalls
// Address: 0x20d960 - 0x20d974
void toggleviewwalls_0x20d960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("toggleviewwalls_0x20d960");
#endif

    ctx->pc = 0x20d960u;

    // 0x20d960: 0x8f839ca8  lw          $v1, -0x6358($gp)
    ctx->pc = 0x20d960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941864)));
    // 0x20d964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d968: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20d968u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d96c: 0x3e00008  jr          $ra
    ctx->pc = 0x20D96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D96Cu;
        // 0x20d970: 0xaf829ca8  sw          $v0, -0x6358($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D974u;
}
