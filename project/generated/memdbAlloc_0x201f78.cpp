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

// Function: memdbAlloc
// Address: 0x201f78 - 0x201f94
void memdbAlloc_0x201f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memdbAlloc_0x201f78");
#endif

    ctx->pc = 0x201f78u;

    // 0x201f78: 0x8f82b624  lw          $v0, -0x49DC($gp)
    ctx->pc = 0x201f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948388)));
    // 0x201f7c: 0x8f839a90  lw          $v1, -0x6570($gp)
    ctx->pc = 0x201f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941328)));
    // 0x201f80: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x201f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x201f84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201f88: 0xaf85b624  sw          $a1, -0x49DC($gp)
    ctx->pc = 0x201f88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948388), GPR_U32(ctx, 5));
    // 0x201f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x201F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F8Cu;
        // 0x201f90: 0xaf839a90  sw          $v1, -0x6570($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201F94u;
}
