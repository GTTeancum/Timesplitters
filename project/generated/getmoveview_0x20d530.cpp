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

// Function: getmoveview
// Address: 0x20d530 - 0x20d55c
void getmoveview_0x20d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getmoveview_0x20d530");
#endif

    switch (ctx->pc) {
        case 0x20d540u: goto label_20d540;
        default: break;
    }

    ctx->pc = 0x20d530u;

    // 0x20d530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20d530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20d534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20d538: 0xc09f8c6  jal         func_27E318
    ctx->pc = 0x20D538u;
    SET_GPR_U32(ctx, 31, 0x20D540u);
    ctx->pc = 0x27E318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E318u, 0x20D538u, 0x20D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D540u;
label_20d540:
    // 0x20d540: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20d540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20d544: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D544u;
    {
        const bool branch_taken_0x20d544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D544u;
        // 0x20d548: 0x8f829c90  lw          $v0, -0x6370($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d544) {
            ctx->pc = 0x20D550u;
            goto label_20d550;
        }
    }
    ctx->pc = 0x20D54Cu;
    // 0x20d54c: 0x8f829c84  lw          $v0, -0x637C($gp)
    ctx->pc = 0x20d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941828)));
label_20d550:
    // 0x20d550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d554: 0x3e00008  jr          $ra
    ctx->pc = 0x20D554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D554u;
        // 0x20d558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D55Cu;
}
