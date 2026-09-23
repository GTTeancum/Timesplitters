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

// Function: getthirdpersonview
// Address: 0x20d598 - 0x20d5c4
void getthirdpersonview_0x20d598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getthirdpersonview_0x20d598");
#endif

    switch (ctx->pc) {
        case 0x20d5a8u: goto label_20d5a8;
        default: break;
    }

    ctx->pc = 0x20d598u;

    // 0x20d598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20d598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20d59c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20d5a0: 0xc09f8c6  jal         func_27E318
    ctx->pc = 0x20D5A0u;
    SET_GPR_U32(ctx, 31, 0x20D5A8u);
    ctx->pc = 0x27E318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E318u, 0x20D5A0u, 0x20D5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D5A8u;
label_20d5a8:
    // 0x20d5a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20d5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d5ac: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D5ACu;
    {
        const bool branch_taken_0x20d5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D5ACu;
        // 0x20d5b0: 0x8f829c90  lw          $v0, -0x6370($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d5ac) {
            ctx->pc = 0x20D5B8u;
            goto label_20d5b8;
        }
    }
    ctx->pc = 0x20D5B4u;
    // 0x20d5b4: 0x8f829c84  lw          $v0, -0x637C($gp)
    ctx->pc = 0x20d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941828)));
label_20d5b8:
    // 0x20d5b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x20D5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D5BCu;
        // 0x20d5c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D5C4u;
}
