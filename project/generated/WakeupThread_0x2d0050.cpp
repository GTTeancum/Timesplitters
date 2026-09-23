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

// Function: WakeupThread
// Address: 0x2d0050 - 0x2d0060
void WakeupThread_0x2d0050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WakeupThread_0x2d0050");
#endif

    switch (ctx->pc) {
        case 0x2d0058u: goto label_2d0058;
        default: break;
    }

    ctx->pc = 0x2d0050u;

    // 0x2d0050: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x2d0050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2d0054: 0xc  syscall     0
    ctx->pc = 0x2d0054u;
    ctx->pc = 0x2D0058u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2d0058:
    // 0x2d0058: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0060u;
}
