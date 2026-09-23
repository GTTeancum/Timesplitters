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

// Function: GetMemorySize
// Address: 0x2d0580 - 0x2d0590
void GetMemorySize_0x2d0580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMemorySize_0x2d0580");
#endif

    switch (ctx->pc) {
        case 0x2d0588u: goto label_2d0588;
        default: break;
    }

    ctx->pc = 0x2d0580u;

    // 0x2d0580: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x2d0580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2d0584: 0xc  syscall     0
    ctx->pc = 0x2d0584u;
    ctx->pc = 0x2D0588u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2d0588:
    // 0x2d0588: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0590u;
}
