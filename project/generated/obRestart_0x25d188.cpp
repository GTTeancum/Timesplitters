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

// Function: obRestart
// Address: 0x25d188 - 0x25d194
void obRestart_0x25d188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obRestart_0x25d188");
#endif

    ctx->pc = 0x25d188u;

    // 0x25d188: 0xaf80a2dc  sw          $zero, -0x5D24($gp)
    ctx->pc = 0x25d188u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943452), GPR_U32(ctx, 0));
    // 0x25d18c: 0x3e00008  jr          $ra
    ctx->pc = 0x25D18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D18Cu;
        // 0x25d190: 0xaf80a2e0  sw          $zero, -0x5D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943456), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D194u;
}
