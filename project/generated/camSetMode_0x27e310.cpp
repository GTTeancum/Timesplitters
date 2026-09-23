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

// Function: camSetMode
// Address: 0x27e310 - 0x27e318
void camSetMode_0x27e310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("camSetMode_0x27e310");
#endif

    ctx->pc = 0x27e310u;

    // 0x27e310: 0x3e00008  jr          $ra
    ctx->pc = 0x27E310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E310u;
        // 0x27e314: 0xaf84b1e4  sw          $a0, -0x4E1C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947300), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E318u;
}
