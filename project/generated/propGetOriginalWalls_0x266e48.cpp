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

// Function: propGetOriginalWalls
// Address: 0x266e48 - 0x266e70
void propGetOriginalWalls_0x266e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propGetOriginalWalls_0x266e48");
#endif

    ctx->pc = 0x266e48u;

    // 0x266e48: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x266e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x266e4c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x266e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x266e50: 0x2442ebd8  addiu       $v0, $v0, -0x1428
    ctx->pc = 0x266e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962136));
    // 0x266e54: 0x443821  addu        $a3, $v0, $a0
    ctx->pc = 0x266e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266e58: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x266e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x266e5c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x266e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x266e60: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x266e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x266e64: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x266e64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x266e68: 0x3e00008  jr          $ra
    ctx->pc = 0x266E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E68u;
        // 0x266e6c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266E70u;
}
