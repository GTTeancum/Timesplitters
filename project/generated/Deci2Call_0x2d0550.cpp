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

// Function: Deci2Call
// Address: 0x2d0550 - 0x2d0560
void Deci2Call_0x2d0550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Deci2Call_0x2d0550");
#endif

    switch (ctx->pc) {
        case 0x2d0558u: goto label_2d0558;
        default: break;
    }

    ctx->pc = 0x2d0550u;

    // 0x2d0550: 0x2403007c  addiu       $v1, $zero, 0x7C
    ctx->pc = 0x2d0550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x2d0554: 0xc  syscall     0
    ctx->pc = 0x2d0554u;
    ctx->pc = 0x2D0558u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2d0558:
    // 0x2d0558: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0560u;
}
