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

// Function: iTerminateThread
// Address: 0x2cff80 - 0x2cff90
void iTerminateThread_0x2cff80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iTerminateThread_0x2cff80");
#endif

    switch (ctx->pc) {
        case 0x2cff88u: goto label_2cff88;
        default: break;
    }

    ctx->pc = 0x2cff80u;

    // 0x2cff80: 0x2403ffda  addiu       $v1, $zero, -0x26
    ctx->pc = 0x2cff80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967258));
    // 0x2cff84: 0xc  syscall     0
    ctx->pc = 0x2cff84u;
    ctx->pc = 0x2CFF88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2cff88:
    // 0x2cff88: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFF90u;
}
