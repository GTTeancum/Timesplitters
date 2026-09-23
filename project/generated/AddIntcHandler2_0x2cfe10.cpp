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

// Function: AddIntcHandler2
// Address: 0x2cfe10 - 0x2cfe20
void AddIntcHandler2_0x2cfe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddIntcHandler2_0x2cfe10");
#endif

    switch (ctx->pc) {
        case 0x2cfe18u: goto label_2cfe18;
        default: break;
    }

    ctx->pc = 0x2cfe10u;

    // 0x2cfe10: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2cfe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2cfe14: 0xc  syscall     0
    ctx->pc = 0x2cfe14u;
    ctx->pc = 0x2CFE18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2cfe18:
    // 0x2cfe18: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFE20u;
}
