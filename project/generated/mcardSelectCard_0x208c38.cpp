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

// Function: mcardSelectCard
// Address: 0x208c38 - 0x208c44
void mcardSelectCard_0x208c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcardSelectCard_0x208c38");
#endif

    ctx->pc = 0x208c38u;

    // 0x208c38: 0xaf849bf0  sw          $a0, -0x6410($gp)
    ctx->pc = 0x208c38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941680), GPR_U32(ctx, 4));
    // 0x208c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x208C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C3Cu;
        // 0x208c40: 0xaf859bf4  sw          $a1, -0x640C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941684), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208C44u;
}
