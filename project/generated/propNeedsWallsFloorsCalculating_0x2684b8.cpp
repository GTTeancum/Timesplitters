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

// Function: propNeedsWallsFloorsCalculating
// Address: 0x2684b8 - 0x2684d8
void propNeedsWallsFloorsCalculating_0x2684b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propNeedsWallsFloorsCalculating_0x2684b8");
#endif

    ctx->pc = 0x2684b8u;

    // 0x2684b8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2684b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2684bc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2684bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2684c0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2684c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2684c4: 0x246390c0  addiu       $v1, $v1, -0x6F40
    ctx->pc = 0x2684c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938816));
    // 0x2684c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2684c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2684cc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2684ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2684d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2684D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2684D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684D0u;
        // 0x2684d4: 0x30420006  andi        $v0, $v0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2684D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2684D8u;
}
