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

// Function: frontfxGoodiesReset
// Address: 0x22be58 - 0x22be94
void frontfxGoodiesReset_0x22be58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontfxGoodiesReset_0x22be58");
#endif

    switch (ctx->pc) {
        case 0x22be68u: goto label_22be68;
        default: break;
    }

    ctx->pc = 0x22be58u;

    // 0x22be58: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22be58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22be5c: 0x240301ff  addiu       $v1, $zero, 0x1FF
    ctx->pc = 0x22be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x22be60: 0x24422b40  addiu       $v0, $v0, 0x2B40
    ctx->pc = 0x22be60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11072));
    // 0x22be64: 0x244201ff  addiu       $v0, $v0, 0x1FF
    ctx->pc = 0x22be64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 511));
label_22be68:
    // 0x22be68: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x22be68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x22be6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22be70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22be70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22be74: 0x0  nop
    ctx->pc = 0x22be74u;
    // NOP
    // 0x22be78: 0x0  nop
    ctx->pc = 0x22be78u;
    // NOP
    // 0x22be7c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22BE7Cu;
    {
        const bool branch_taken_0x22be7c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x22be7c) {
            ctx->pc = 0x22BE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22be68;
        }
    }
    ctx->pc = 0x22BE84u;
    // 0x22be84: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x22be84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x22be88: 0xaf809fdc  sw          $zero, -0x6024($gp)
    ctx->pc = 0x22be88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942684), GPR_U32(ctx, 0));
    // 0x22be8c: 0x3e00008  jr          $ra
    ctx->pc = 0x22BE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE8Cu;
        // 0x22be90: 0xaf829fe0  sw          $v0, -0x6020($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BE94u;
}
