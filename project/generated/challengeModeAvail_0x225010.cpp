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

// Function: challengeModeAvail
// Address: 0x225010 - 0x225034
void challengeModeAvail_0x225010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("challengeModeAvail_0x225010");
#endif

    switch (ctx->pc) {
        case 0x225028u: goto label_225028;
        default: break;
    }

    ctx->pc = 0x225010u;

    // 0x225010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225014: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x225014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x225018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22501c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22501cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225020: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x225020u;
    SET_GPR_U32(ctx, 31, 0x225028u);
    ctx->pc = 0x225024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225020u;
    // 0x225024: 0x24843858  addiu       $a0, $a0, 0x3858 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x225020u, 0x225028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225028u;
label_225028:
    // 0x225028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22502c: 0x3e00008  jr          $ra
    ctx->pc = 0x22502Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22502Cu;
        // 0x225030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22502Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225034u;
}
