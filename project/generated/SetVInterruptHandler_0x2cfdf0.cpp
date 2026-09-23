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

// Function: SetVInterruptHandler
// Address: 0x2cfdf0 - 0x2cfe00
void SetVInterruptHandler_0x2cfdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetVInterruptHandler_0x2cfdf0");
#endif

    switch (ctx->pc) {
        case 0x2cfdf8u: goto label_2cfdf8;
        default: break;
    }

    ctx->pc = 0x2cfdf0u;

    // 0x2cfdf0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2cfdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2cfdf4: 0xc  syscall     0
    ctx->pc = 0x2cfdf4u;
    ctx->pc = 0x2CFDF8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2cfdf8:
    // 0x2cfdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFE00u;
}
