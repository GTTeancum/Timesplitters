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

// Function: _iDisableDmac
// Address: 0x2cfef0 - 0x2cff00
void _iDisableDmac_0x2cfef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_iDisableDmac_0x2cfef0");
#endif

    switch (ctx->pc) {
        case 0x2cfef8u: goto label_2cfef8;
        default: break;
    }

    ctx->pc = 0x2cfef0u;

    // 0x2cfef0: 0x2403ffe3  addiu       $v1, $zero, -0x1D
    ctx->pc = 0x2cfef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x2cfef4: 0xc  syscall     0
    ctx->pc = 0x2cfef4u;
    ctx->pc = 0x2CFEF8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2cfef8:
    // 0x2cfef8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFF00u;
}
