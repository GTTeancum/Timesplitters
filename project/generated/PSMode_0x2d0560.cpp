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

// Function: PSMode
// Address: 0x2d0560 - 0x2d0570
void PSMode_0x2d0560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PSMode_0x2d0560");
#endif

    switch (ctx->pc) {
        case 0x2d0568u: goto label_2d0568;
        default: break;
    }

    ctx->pc = 0x2d0560u;

    // 0x2d0560: 0x2403007d  addiu       $v1, $zero, 0x7D
    ctx->pc = 0x2d0560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x2d0564: 0xc  syscall     0
    ctx->pc = 0x2d0564u;
    ctx->pc = 0x2D0568u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2d0568:
    // 0x2d0568: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0570u;
}
