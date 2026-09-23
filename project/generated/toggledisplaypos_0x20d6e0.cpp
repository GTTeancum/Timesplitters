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

// Function: toggledisplaypos
// Address: 0x20d6e0 - 0x20d6f4
void toggledisplaypos_0x20d6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("toggledisplaypos_0x20d6e0");
#endif

    ctx->pc = 0x20d6e0u;

    // 0x20d6e0: 0x8f839cb8  lw          $v1, -0x6348($gp)
    ctx->pc = 0x20d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941880)));
    // 0x20d6e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d6e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x20D6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D6ECu;
        // 0x20d6f0: 0xaf829cb8  sw          $v0, -0x6348($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D6F4u;
}
