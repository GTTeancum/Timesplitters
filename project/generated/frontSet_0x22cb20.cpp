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

// Function: frontSet
// Address: 0x22cb20 - 0x22cb3c
void frontSet_0x22cb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontSet_0x22cb20");
#endif

    ctx->pc = 0x22cb20u;

    // 0x22cb20: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x22cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x22cb24: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22cb28: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x22cb28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22cb2c: 0x24422da0  addiu       $v0, $v0, 0x2DA0
    ctx->pc = 0x22cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11680));
    // 0x22cb30: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x22cb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22cb34: 0x3e00008  jr          $ra
    ctx->pc = 0x22CB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB34u;
        // 0x22cb38: 0xaf84a004  sw          $a0, -0x5FFC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942724), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CB3Cu;
}
