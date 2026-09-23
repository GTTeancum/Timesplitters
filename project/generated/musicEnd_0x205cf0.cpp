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

// Function: musicEnd
// Address: 0x205cf0 - 0x205d0c
void musicEnd_0x205cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("musicEnd_0x205cf0");
#endif

    ctx->pc = 0x205cf0u;

    // 0x205cf0: 0x8f829b28  lw          $v0, -0x64D8($gp)
    ctx->pc = 0x205cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941480)));
    // 0x205cf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205CF4u;
    {
        const bool branch_taken_0x205cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205cf4) {
            ctx->pc = 0x205D04u;
            goto label_205d04;
        }
    }
    ctx->pc = 0x205CFCu;
    // 0x205cfc: 0x80816e4  j           func_205B90
    ctx->pc = 0x205CFCu;
    ctx->pc = 0x205B90u;
    musicStopClose_0x205b90(rdram, ctx, runtime); return;
    ctx->pc = 0x205D04u;
label_205d04:
    // 0x205d04: 0x3e00008  jr          $ra
    ctx->pc = 0x205D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205D0Cu;
}
