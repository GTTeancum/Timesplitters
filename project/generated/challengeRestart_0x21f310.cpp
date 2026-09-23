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

// Function: challengeRestart
// Address: 0x21f310 - 0x21f318
void challengeRestart_0x21f310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("challengeRestart_0x21f310");
#endif

    ctx->pc = 0x21f310u;

    // 0x21f310: 0x3e00008  jr          $ra
    ctx->pc = 0x21F310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F310u;
        // 0x21f314: 0xaf80b710  sw          $zero, -0x48F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F318u;
}
