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

// Function: frontmpgSetFlags
// Address: 0x241540 - 0x241558
void frontmpgSetFlags_0x241540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontmpgSetFlags_0x241540");
#endif

    ctx->pc = 0x241540u;

    // 0x241540: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x241540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x241544: 0x246311f8  addiu       $v1, $v1, 0x11F8
    ctx->pc = 0x241544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4600));
    // 0x241548: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x241548u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x24154c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x24154cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x241550: 0x3e00008  jr          $ra
    ctx->pc = 0x241550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241550u;
        // 0x241554: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241558u;
}
