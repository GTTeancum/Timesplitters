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

// Function: padEnd
// Address: 0x2645a0 - 0x2645bc
void padEnd_0x2645a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("padEnd_0x2645a0");
#endif

    ctx->pc = 0x2645a0u;

    // 0x2645a0: 0x8f82935c  lw          $v0, -0x6CA4($gp)
    ctx->pc = 0x2645a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939484)));
    // 0x2645a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2645A4u;
    {
        const bool branch_taken_0x2645a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2645a4) {
            ctx->pc = 0x2645B4u;
            goto label_2645b4;
        }
    }
    ctx->pc = 0x2645ACu;
    // 0x2645ac: 0xaf80a2ec  sw          $zero, -0x5D14($gp)
    ctx->pc = 0x2645acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943468), GPR_U32(ctx, 0));
    // 0x2645b0: 0xaf80a2f0  sw          $zero, -0x5D10($gp)
    ctx->pc = 0x2645b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943472), GPR_U32(ctx, 0));
label_2645b4:
    // 0x2645b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2645B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2645B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2645BCu;
}
