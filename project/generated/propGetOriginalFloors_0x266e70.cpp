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

// Function: propGetOriginalFloors
// Address: 0x266e70 - 0x266e98
void propGetOriginalFloors_0x266e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propGetOriginalFloors_0x266e70");
#endif

    ctx->pc = 0x266e70u;

    // 0x266e70: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x266e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x266e74: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x266e74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x266e78: 0x2442ebd8  addiu       $v0, $v0, -0x1428
    ctx->pc = 0x266e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962136));
    // 0x266e7c: 0x443821  addu        $a3, $v0, $a0
    ctx->pc = 0x266e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266e80: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x266e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266e84: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x266e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x266e88: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x266e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x266e8c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x266e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x266e90: 0x3e00008  jr          $ra
    ctx->pc = 0x266E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E90u;
        // 0x266e94: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266E98u;
}
