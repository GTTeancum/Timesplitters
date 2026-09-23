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

// Function: dlPushDmaTag
// Address: 0x2b9018 - 0x2b9028
void dlPushDmaTag_0x2b9018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dlPushDmaTag_0x2b9018");
#endif

    ctx->pc = 0x2b9018u;

    // 0x2b9018: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2b9018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b901c: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x2b901cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x2b9020: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9020u;
        // 0x2b9024: 0xaf82b4b0  sw          $v0, -0x4B50($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9028u;
}
