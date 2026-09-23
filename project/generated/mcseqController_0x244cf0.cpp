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

// Function: mcseqController
// Address: 0x244cf0 - 0x244cf8
void mcseqController_0x244cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcseqController_0x244cf0");
#endif

    ctx->pc = 0x244cf0u;

    // 0x244cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x244CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CF0u;
        // 0x244cf4: 0xaf84b7ec  sw          $a0, -0x4814($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948844), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244CF8u;
}
