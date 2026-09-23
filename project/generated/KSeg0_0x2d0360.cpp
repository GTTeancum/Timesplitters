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

// Function: KSeg0
// Address: 0x2d0360 - 0x2d0370
void KSeg0_0x2d0360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KSeg0_0x2d0360");
#endif

    switch (ctx->pc) {
        case 0x2d0368u: goto label_2d0368;
        default: break;
    }

    ctx->pc = 0x2d0360u;

    // 0x2d0360: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x2d0360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2d0364: 0xc  syscall     0
    ctx->pc = 0x2d0364u;
    ctx->pc = 0x2D0368u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2d0368:
    // 0x2d0368: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0370u;
}
