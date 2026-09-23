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

// Function: RFU083_iSetEventFlag
// Address: 0x2d0250 - 0x2d0260
void RFU083_iSetEventFlag_0x2d0250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU083_iSetEventFlag_0x2d0250");
#endif

    switch (ctx->pc) {
        case 0x2d0258u: goto label_2d0258;
        default: break;
    }

    ctx->pc = 0x2d0250u;

    // 0x2d0250: 0x2403ffad  addiu       $v1, $zero, -0x53
    ctx->pc = 0x2d0250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967213));
    // 0x2d0254: 0xc  syscall     0
    ctx->pc = 0x2d0254u;
    ctx->pc = 0x2D0258u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2d0258:
    // 0x2d0258: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0260u;
}
