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

// Function: roomlightEnd
// Address: 0x2a7a38 - 0x2a7a4c
void roomlightEnd_0x2a7a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("roomlightEnd_0x2a7a38");
#endif

    ctx->pc = 0x2a7a38u;

    // 0x2a7a38: 0x8f82935c  lw          $v0, -0x6CA4($gp)
    ctx->pc = 0x2a7a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939484)));
    // 0x2a7a3c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A7A3Cu;
    {
        const bool branch_taken_0x2a7a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7a3c) {
            ctx->pc = 0x2A7A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7A3Cu;
            // 0x2a7a40: 0xaf80b32c  sw          $zero, -0x4CD4($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294947628), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7A44u;
            goto label_2a7a44;
        }
    }
    ctx->pc = 0x2A7A44u;
label_2a7a44:
    // 0x2a7a44: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7A4Cu;
}
