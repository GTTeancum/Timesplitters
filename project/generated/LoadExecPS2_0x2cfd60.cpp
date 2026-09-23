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

// Function: LoadExecPS2
// Address: 0x2cfd60 - 0x2cfd70
void LoadExecPS2_0x2cfd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadExecPS2_0x2cfd60");
#endif

    switch (ctx->pc) {
        case 0x2cfd68u: goto label_2cfd68;
        default: break;
    }

    ctx->pc = 0x2cfd60u;

    // 0x2cfd60: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2cfd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cfd64: 0xc  syscall     0
    ctx->pc = 0x2cfd64u;
    ctx->pc = 0x2CFD68u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2cfd68:
    // 0x2cfd68: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFD70u;
}
