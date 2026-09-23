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

// Function: decalEnd
// Address: 0x2a26f8 - 0x2a270c
void decalEnd_0x2a26f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decalEnd_0x2a26f8");
#endif

    ctx->pc = 0x2a26f8u;

    // 0x2a26f8: 0x8f82935c  lw          $v0, -0x6CA4($gp)
    ctx->pc = 0x2a26f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939484)));
    // 0x2a26fc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A26FCu;
    {
        const bool branch_taken_0x2a26fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a26fc) {
            ctx->pc = 0x2A2700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A26FCu;
            // 0x2a2700: 0xaf80b300  sw          $zero, -0x4D00($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294947584), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2704u;
            goto label_2a2704;
        }
    }
    ctx->pc = 0x2A2704u;
label_2a2704:
    // 0x2a2704: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A270Cu;
}
