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

// Function: RFU003
// Address: 0x2cfd30 - 0x2cfd40
void RFU003_0x2cfd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU003_0x2cfd30");
#endif

    switch (ctx->pc) {
        case 0x2cfd38u: goto label_2cfd38;
        default: break;
    }

    ctx->pc = 0x2cfd30u;

    // 0x2cfd30: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cfd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cfd34: 0xc  syscall     0
    ctx->pc = 0x2cfd34u;
    ctx->pc = 0x2CFD38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2cfd38:
    // 0x2cfd38: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFD40u;
}
