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

// Function: GsGetIMR
// Address: 0x2d0440 - 0x2d0450
void GsGetIMR_0x2d0440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GsGetIMR_0x2d0440");
#endif

    switch (ctx->pc) {
        case 0x2d0448u: goto label_2d0448;
        default: break;
    }

    ctx->pc = 0x2d0440u;

    // 0x2d0440: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x2d0440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2d0444: 0xc  syscall     0
    ctx->pc = 0x2d0444u;
    ctx->pc = 0x2D0448u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2d0448:
    // 0x2d0448: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0450u;
}
