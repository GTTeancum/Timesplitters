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

// Function: camRestart
// Address: 0x27e2f8 - 0x27e300
void camRestart_0x27e2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("camRestart_0x27e2f8");
#endif

    ctx->pc = 0x27e2f8u;

    // 0x27e2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x27E2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2F8u;
        // 0x27e2fc: 0xaf80b1e4  sw          $zero, -0x4E1C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E300u;
}
