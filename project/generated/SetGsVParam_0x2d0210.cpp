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

// Function: SetGsVParam
// Address: 0x2d0210 - 0x2d0220
void SetGsVParam_0x2d0210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetGsVParam_0x2d0210");
#endif

    switch (ctx->pc) {
        case 0x2d0218u: goto label_2d0218;
        default: break;
    }

    ctx->pc = 0x2d0210u;

    // 0x2d0210: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x2d0210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2d0214: 0xc  syscall     0
    ctx->pc = 0x2d0214u;
    ctx->pc = 0x2D0218u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2d0218:
    // 0x2d0218: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0220u;
}
