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

// Function: cycleTilePage
// Address: 0x252c28 - 0x252c50
void cycleTilePage_0x252c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cycleTilePage_0x252c28");
#endif

    ctx->pc = 0x252c28u;

    // 0x252c28: 0x8f83b86c  lw          $v1, -0x4794($gp)
    ctx->pc = 0x252c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948972)));
    // 0x252c2c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x252c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x252c30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252C30u;
    {
        const bool branch_taken_0x252c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C30u;
        // 0x252c34: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252c30) {
            ctx->pc = 0x252C40u;
            goto label_252c40;
        }
    }
    ctx->pc = 0x252C38u;
    // 0x252c38: 0x3e00008  jr          $ra
    ctx->pc = 0x252C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C38u;
        // 0x252c3c: 0xaf82b86c  sw          $v0, -0x4794($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252C40u;
label_252c40:
    // 0x252c40: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x252C40u;
    {
        const bool branch_taken_0x252c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x252c40) {
            ctx->pc = 0x252C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252C40u;
            // 0x252c44: 0xaf80b86c  sw          $zero, -0x4794($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294948972), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252C48u;
            goto label_252c48;
        }
    }
    ctx->pc = 0x252C48u;
label_252c48:
    // 0x252c48: 0x3e00008  jr          $ra
    ctx->pc = 0x252C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252C50u;
}
