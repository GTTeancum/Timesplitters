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

// Function: StartThread
// Address: 0x2cff40 - 0x2cff50
void StartThread_0x2cff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StartThread_0x2cff40");
#endif

    switch (ctx->pc) {
        case 0x2cff48u: goto label_2cff48;
        default: break;
    }

    ctx->pc = 0x2cff40u;

    // 0x2cff40: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x2cff40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2cff44: 0xc  syscall     0
    ctx->pc = 0x2cff44u;
    ctx->pc = 0x2CFF48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2cff48:
    // 0x2cff48: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFF50u;
}
