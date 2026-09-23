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

// Function: GsPutIMR
// Address: 0x2d0460 - 0x2d0470
void GsPutIMR_0x2d0460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GsPutIMR_0x2d0460");
#endif

    switch (ctx->pc) {
        case 0x2d0468u: goto label_2d0468;
        default: break;
    }

    ctx->pc = 0x2d0460u;

    // 0x2d0460: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x2d0460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x2d0464: 0xc  syscall     0
    ctx->pc = 0x2d0464u;
    ctx->pc = 0x2D0468u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2d0468:
    // 0x2d0468: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0470u;
}
