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

// Function: AddDmacHandler
// Address: 0x2cfe30 - 0x2cfe40
void AddDmacHandler_0x2cfe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddDmacHandler_0x2cfe30");
#endif

    switch (ctx->pc) {
        case 0x2cfe38u: goto label_2cfe38;
        default: break;
    }

    ctx->pc = 0x2cfe30u;

    // 0x2cfe30: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2cfe30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2cfe34: 0xc  syscall     0
    ctx->pc = 0x2cfe34u;
    ctx->pc = 0x2CFE38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2cfe38:
    // 0x2cfe38: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFE40u;
}
