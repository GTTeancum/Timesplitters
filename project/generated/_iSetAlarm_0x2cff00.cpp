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

// Function: _iSetAlarm
// Address: 0x2cff00 - 0x2cff10
void _iSetAlarm_0x2cff00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_iSetAlarm_0x2cff00");
#endif

    switch (ctx->pc) {
        case 0x2cff08u: goto label_2cff08;
        default: break;
    }

    ctx->pc = 0x2cff00u;

    // 0x2cff00: 0x2403ffe2  addiu       $v1, $zero, -0x1E
    ctx->pc = 0x2cff00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x2cff04: 0xc  syscall     0
    ctx->pc = 0x2cff04u;
    ctx->pc = 0x2CFF08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2cff08:
    // 0x2cff08: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFF10u;
}
