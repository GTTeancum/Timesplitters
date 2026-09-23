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

// Function: challengeGetSetup
// Address: 0x21f060 - 0x21f07c
void challengeGetSetup_0x21f060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("challengeGetSetup_0x21f060");
#endif

    ctx->pc = 0x21f060u;

    // 0x21f060: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x21f060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x21f064: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21f064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21f068: 0x8c82c4ec  lw          $v0, -0x3B14($a0)
    ctx->pc = 0x21f068u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4ECu));
    // 0x21f06c: 0x2463dae0  addiu       $v1, $v1, -0x2520
    ctx->pc = 0x21f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957792));
    // 0x21f070: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x21f070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x21f074: 0x3e00008  jr          $ra
    ctx->pc = 0x21F074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F074u;
        // 0x21f078: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F07Cu;
}
