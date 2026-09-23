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

// Function: Exit
// Address: 0x2cfd40 - 0x2cfd50
void Exit_0x2cfd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Exit_0x2cfd40");
#endif

    switch (ctx->pc) {
        case 0x2cfd48u: goto label_2cfd48;
        default: break;
    }

    ctx->pc = 0x2cfd40u;

    // 0x2cfd40: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2cfd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cfd44: 0xc  syscall     0
    ctx->pc = 0x2cfd44u;
    ctx->pc = 0x2CFD48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2cfd48:
    // 0x2cfd48: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFD50u;
}
