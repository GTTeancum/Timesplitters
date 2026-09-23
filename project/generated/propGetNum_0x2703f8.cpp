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

// Function: propGetNum
// Address: 0x2703f8 - 0x27042c
void propGetNum_0x2703f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propGetNum_0x2703f8");
#endif

    switch (ctx->pc) {
        case 0x270408u: goto label_270408;
        default: break;
    }

    ctx->pc = 0x2703f8u;

    // 0x2703f8: 0x8f85b15c  lw          $a1, -0x4EA4($gp)
    ctx->pc = 0x2703f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
    // 0x2703fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2703FCu;
    {
        const bool branch_taken_0x2703fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703FCu;
        // 0x270400: 0x8f83b07c  lw          $v1, -0x4F84($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703fc) {
            ctx->pc = 0x27040Cu;
            goto label_27040c;
        }
    }
    ctx->pc = 0x270404u;
    // 0x270404: 0x0  nop
    ctx->pc = 0x270404u;
    // NOP
label_270408:
    // 0x270408: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x270408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_27040c:
    // 0x27040c: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27040Cu;
    {
        const bool branch_taken_0x27040c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x270410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27040Cu;
        // 0x270410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27040c) {
            ctx->pc = 0x270424u;
            goto label_270424;
        }
    }
    ctx->pc = 0x270414u;
    // 0x270414: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x270414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x270418: 0x5444fffb  bnel        $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x270418u;
    {
        const bool branch_taken_0x270418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x270418) {
            ctx->pc = 0x27041Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270418u;
            // 0x27041c: 0x24630250  addiu       $v1, $v1, 0x250 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270408;
        }
    }
    ctx->pc = 0x270420u;
    // 0x270420: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x270420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270424:
    // 0x270424: 0x3e00008  jr          $ra
    ctx->pc = 0x270424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270424u;
        // 0x270428: 0x65100b  movn        $v0, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27042Cu;
}
