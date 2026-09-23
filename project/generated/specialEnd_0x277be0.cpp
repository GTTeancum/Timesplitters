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

// Function: specialEnd
// Address: 0x277be0 - 0x277bf4
void specialEnd_0x277be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialEnd_0x277be0");
#endif

    ctx->pc = 0x277be0u;

    // 0x277be0: 0x8f82935c  lw          $v0, -0x6CA4($gp)
    ctx->pc = 0x277be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939484)));
    // 0x277be4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x277BE4u;
    {
        const bool branch_taken_0x277be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277be4) {
            ctx->pc = 0x277BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277BE4u;
            // 0x277be8: 0xaf80b180  sw          $zero, -0x4E80($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294947200), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277BECu;
            goto label_277bec;
        }
    }
    ctx->pc = 0x277BECu;
label_277bec:
    // 0x277bec: 0x3e00008  jr          $ra
    ctx->pc = 0x277BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277BF4u;
}
