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

// Function: StatsTick
// Address: 0x220ba8 - 0x220bc4
void StatsTick_0x220ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsTick_0x220ba8");
#endif

    switch (ctx->pc) {
        case 0x220bb8u: goto label_220bb8;
        default: break;
    }

    ctx->pc = 0x220ba8u;

    // 0x220ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x220ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x220bac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x220bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x220bb0: 0xc080e18  jal         func_203860
    ctx->pc = 0x220BB0u;
    SET_GPR_U32(ctx, 31, 0x220BB8u);
    ctx->pc = 0x220BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220BB0u;
    // 0x220bb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x220BB0u, 0x220BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220BB8u;
label_220bb8:
    // 0x220bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x220bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x220BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220BBCu;
        // 0x220bc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220BC4u;
}
