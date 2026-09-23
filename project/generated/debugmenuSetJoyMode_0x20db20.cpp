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

// Function: debugmenuSetJoyMode
// Address: 0x20db20 - 0x20db28
void debugmenuSetJoyMode_0x20db20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("debugmenuSetJoyMode_0x20db20");
#endif

    ctx->pc = 0x20db20u;

    // 0x20db20: 0x3e00008  jr          $ra
    ctx->pc = 0x20DB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB20u;
        // 0x20db24: 0xaf849d14  sw          $a0, -0x62EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941972), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DB28u;
}
