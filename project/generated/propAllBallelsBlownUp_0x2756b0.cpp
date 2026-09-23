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

// Function: propAllBallelsBlownUp
// Address: 0x2756b0 - 0x2756d0
void propAllBallelsBlownUp_0x2756b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propAllBallelsBlownUp_0x2756b0");
#endif

    switch (ctx->pc) {
        case 0x2756c0u: goto label_2756c0;
        default: break;
    }

    ctx->pc = 0x2756b0u;

    // 0x2756b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2756b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2756b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2756b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2756b8: 0xc09d592  jal         func_275648
    ctx->pc = 0x2756B8u;
    SET_GPR_U32(ctx, 31, 0x2756C0u);
    ctx->pc = 0x275648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275648u, 0x2756B8u, 0x2756C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2756C0u;
label_2756c0:
    // 0x2756c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2756c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2756c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2756c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2756c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2756C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2756CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2756C8u;
        // 0x2756cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2756C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2756D0u;
}
