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

// Function: toggleviewfloors
// Address: 0x20d928 - 0x20d93c
void toggleviewfloors_0x20d928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("toggleviewfloors_0x20d928");
#endif

    ctx->pc = 0x20d928u;

    // 0x20d928: 0x8f839ca4  lw          $v1, -0x635C($gp)
    ctx->pc = 0x20d928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941860)));
    // 0x20d92c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d930: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20d930u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d934: 0x3e00008  jr          $ra
    ctx->pc = 0x20D934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D934u;
        // 0x20d938: 0xaf829ca4  sw          $v0, -0x635C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941860), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D93Cu;
}
