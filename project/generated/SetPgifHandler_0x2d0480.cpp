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

// Function: SetPgifHandler
// Address: 0x2d0480 - 0x2d0490
void SetPgifHandler_0x2d0480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPgifHandler_0x2d0480");
#endif

    switch (ctx->pc) {
        case 0x2d0488u: goto label_2d0488;
        default: break;
    }

    ctx->pc = 0x2d0480u;

    // 0x2d0480: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x2d0480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x2d0484: 0xc  syscall     0
    ctx->pc = 0x2d0484u;
    ctx->pc = 0x2D0488u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2d0488:
    // 0x2d0488: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0490u;
}
