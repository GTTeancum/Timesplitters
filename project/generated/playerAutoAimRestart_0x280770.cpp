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

// Function: playerAutoAimRestart
// Address: 0x280770 - 0x280780
void playerAutoAimRestart_0x280770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerAutoAimRestart_0x280770");
#endif

    ctx->pc = 0x280770u;

    // 0x280770: 0xaf80b944  sw          $zero, -0x46BC($gp)
    ctx->pc = 0x280770u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949188), GPR_U32(ctx, 0));
    // 0x280774: 0xaf80b20c  sw          $zero, -0x4DF4($gp)
    ctx->pc = 0x280774u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947340), GPR_U32(ctx, 0));
    // 0x280778: 0x3e00008  jr          $ra
    ctx->pc = 0x280778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280778u;
        // 0x28077c: 0xaf80b210  sw          $zero, -0x4DF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280780u;
}
