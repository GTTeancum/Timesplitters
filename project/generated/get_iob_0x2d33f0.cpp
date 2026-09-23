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

// Function: get_iob
// Address: 0x2d33f0 - 0x2d3414
void get_iob_0x2d33f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get_iob_0x2d33f0");
#endif

    ctx->pc = 0x2d33f0u;

    // 0x2d33f0: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x2d33f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2d33f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D33F4u;
    {
        const bool branch_taken_0x2d33f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D33F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D33F4u;
        // 0x2d33f8: 0x3c0201ff  lui         $v0, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d33f4) {
            ctx->pc = 0x2D3404u;
            goto label_2d3404;
        }
    }
    ctx->pc = 0x2D33FCu;
    // 0x2d33fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D33FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D33FCu;
        // 0x2d3400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D33FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3404u;
label_2d3404:
    // 0x2d3404: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2d3404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2d3408: 0x24420650  addiu       $v0, $v0, 0x650
    ctx->pc = 0x2d3408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1616));
    // 0x2d340c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D340Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D340Cu;
        // 0x2d3410: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D340Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3414u;
}
