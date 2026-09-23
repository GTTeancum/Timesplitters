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

// Function: TerminateThread
// Address: 0x2cff70 - 0x2cff80
void TerminateThread_0x2cff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TerminateThread_0x2cff70");
#endif

    switch (ctx->pc) {
        case 0x2cff78u: goto label_2cff78;
        default: break;
    }

    ctx->pc = 0x2cff70u;

    // 0x2cff70: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x2cff70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2cff74: 0xc  syscall     0
    ctx->pc = 0x2cff74u;
    ctx->pc = 0x2CFF78u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2cff78:
    // 0x2cff78: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFF80u;
}
