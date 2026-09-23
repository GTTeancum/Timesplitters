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

// Function: lvGetRandomAiSpawn
// Address: 0x228390 - 0x2283ac
void lvGetRandomAiSpawn_0x228390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetRandomAiSpawn_0x228390");
#endif

    switch (ctx->pc) {
        case 0x2283a0u: goto label_2283a0;
        default: break;
    }

    ctx->pc = 0x228390u;

    // 0x228390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228398: 0xc08a02c  jal         func_2280B0
    ctx->pc = 0x228398u;
    SET_GPR_U32(ctx, 31, 0x2283A0u);
    ctx->pc = 0x22839Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228398u;
    // 0x22839c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2280B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2280B0u, 0x228398u, 0x2283A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2283A0u;
label_2283a0:
    // 0x2283a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2283a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2283a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2283A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2283A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283A4u;
        // 0x2283a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2283A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2283ACu;
}
