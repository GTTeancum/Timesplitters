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

// Function: lvGetOverseerState
// Address: 0x2298b8 - 0x2298e0
void lvGetOverseerState_0x2298b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetOverseerState_0x2298b8");
#endif

    ctx->pc = 0x2298b8u;

    // 0x2298b8: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x2298b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2298bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2298bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2298c0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2298C0u;
    {
        const bool branch_taken_0x2298c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2298C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298C0u;
        // 0x2298c4: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298c0) {
            ctx->pc = 0x2298D0u;
            goto label_2298d0;
        }
    }
    ctx->pc = 0x2298C8u;
    // 0x2298c8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2298C8u;
    {
        const bool branch_taken_0x2298c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2298c8) {
            ctx->pc = 0x2298D8u;
            goto label_2298d8;
        }
    }
    ctx->pc = 0x2298D0u;
label_2298d0:
    // 0x2298d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2298D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2298D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298D0u;
        // 0x2298d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2298D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2298D8u;
label_2298d8:
    // 0x2298d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2298D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2298DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298D8u;
        // 0x2298dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2298D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2298E0u;
}
