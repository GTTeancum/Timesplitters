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

// Function: SuspendThread
// Address: 0x2d0090 - 0x2d00a0
void SuspendThread_0x2d0090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SuspendThread_0x2d0090");
#endif

    switch (ctx->pc) {
        case 0x2d0098u: goto label_2d0098;
        default: break;
    }

    ctx->pc = 0x2d0090u;

    // 0x2d0090: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x2d0090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2d0094: 0xc  syscall     0
    ctx->pc = 0x2d0094u;
    ctx->pc = 0x2D0098u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2d0098:
    // 0x2d0098: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D00A0u;
}
