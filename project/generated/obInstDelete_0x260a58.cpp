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

// Function: obInstDelete
// Address: 0x260a58 - 0x260a74
void obInstDelete_0x260a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obInstDelete_0x260a58");
#endif

    ctx->pc = 0x260a58u;

    // 0x260a58: 0x8f82a2e0  lw          $v0, -0x5D20($gp)
    ctx->pc = 0x260a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943456)));
    // 0x260a5c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x260a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x260a60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x260a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x260a64: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x260a64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x260a68: 0xaf82a2e0  sw          $v0, -0x5D20($gp)
    ctx->pc = 0x260a68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943456), GPR_U32(ctx, 2));
    // 0x260a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x260A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A6Cu;
        // 0x260a70: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260A74u;
}
