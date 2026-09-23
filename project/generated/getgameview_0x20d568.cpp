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

// Function: getgameview
// Address: 0x20d568 - 0x20d590
void getgameview_0x20d568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getgameview_0x20d568");
#endif

    switch (ctx->pc) {
        case 0x20d578u: goto label_20d578;
        default: break;
    }

    ctx->pc = 0x20d568u;

    // 0x20d568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20d568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20d56c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20d570: 0xc09f8c6  jal         func_27E318
    ctx->pc = 0x20D570u;
    SET_GPR_U32(ctx, 31, 0x20D578u);
    ctx->pc = 0x27E318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E318u, 0x20D570u, 0x20D578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D578u;
label_20d578:
    // 0x20d578: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D578u;
    {
        const bool branch_taken_0x20d578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D578u;
        // 0x20d57c: 0x8f829c90  lw          $v0, -0x6370($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d578) {
            ctx->pc = 0x20D584u;
            goto label_20d584;
        }
    }
    ctx->pc = 0x20D580u;
    // 0x20d580: 0x8f829c84  lw          $v0, -0x637C($gp)
    ctx->pc = 0x20d580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941828)));
label_20d584:
    // 0x20d584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d588: 0x3e00008  jr          $ra
    ctx->pc = 0x20D588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D588u;
        // 0x20d58c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D590u;
}
