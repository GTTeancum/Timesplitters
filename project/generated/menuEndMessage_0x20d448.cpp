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

// Function: menuEndMessage
// Address: 0x20d448 - 0x20d454
void menuEndMessage_0x20d448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menuEndMessage_0x20d448");
#endif

    ctx->pc = 0x20d448u;

    // 0x20d448: 0xaf809c74  sw          $zero, -0x638C($gp)
    ctx->pc = 0x20d448u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941812), GPR_U32(ctx, 0));
    // 0x20d44c: 0x3e00008  jr          $ra
    ctx->pc = 0x20D44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D44Cu;
        // 0x20d450: 0xaf809c78  sw          $zero, -0x6388($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D454u;
}
