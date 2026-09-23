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

// Function: chrEnd
// Address: 0x285038 - 0x28504c
void chrEnd_0x285038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrEnd_0x285038");
#endif

    ctx->pc = 0x285038u;

    // 0x285038: 0x8f82935c  lw          $v0, -0x6CA4($gp)
    ctx->pc = 0x285038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939484)));
    // 0x28503c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28503Cu;
    {
        const bool branch_taken_0x28503c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28503c) {
            ctx->pc = 0x285040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28503Cu;
            // 0x285040: 0xaf80b238  sw          $zero, -0x4DC8($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294947384), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285044u;
            goto label_285044;
        }
    }
    ctx->pc = 0x285044u;
label_285044:
    // 0x285044: 0x3e00008  jr          $ra
    ctx->pc = 0x285044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28504Cu;
}
