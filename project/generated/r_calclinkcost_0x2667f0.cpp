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

// Function: r_calclinkcost
// Address: 0x2667f0 - 0x266810
void r_calclinkcost_0x2667f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r_calclinkcost_0x2667f0");
#endif

    switch (ctx->pc) {
        case 0x266804u: goto label_266804;
        default: break;
    }

    ctx->pc = 0x2667f0u;

    // 0x2667f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2667f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2667f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2667f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2667f8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2667f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2667fc: 0xc0999da  jal         func_266768
    ctx->pc = 0x2667FCu;
    SET_GPR_U32(ctx, 31, 0x266804u);
    ctx->pc = 0x266800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2667FCu;
    // 0x266800: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266768u, 0x2667FCu, 0x266804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266804u;
label_266804:
    // 0x266804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266808: 0x3e00008  jr          $ra
    ctx->pc = 0x266808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266808u;
        // 0x26680c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266810u;
}
