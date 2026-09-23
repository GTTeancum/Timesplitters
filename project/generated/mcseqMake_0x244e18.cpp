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

// Function: mcseqMake
// Address: 0x244e18 - 0x244e40
void mcseqMake_0x244e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcseqMake_0x244e18");
#endif

    switch (ctx->pc) {
        case 0x244e28u: goto label_244e28;
        default: break;
    }

    ctx->pc = 0x244e18u;

    // 0x244e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x244e1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244e20: 0xc091354  jal         func_244D50
    ctx->pc = 0x244E20u;
    SET_GPR_U32(ctx, 31, 0x244E28u);
    ctx->pc = 0x244D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244D50u, 0x244E20u, 0x244E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E28u;
label_244e28:
    // 0x244e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244e2c: 0xa380b7c8  sb          $zero, -0x4838($gp)
    ctx->pc = 0x244e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948808), (uint8_t)GPR_U32(ctx, 0));
    // 0x244e30: 0xaf80b7ec  sw          $zero, -0x4814($gp)
    ctx->pc = 0x244e30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948844), GPR_U32(ctx, 0));
    // 0x244e34: 0xaf80b7e4  sw          $zero, -0x481C($gp)
    ctx->pc = 0x244e34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948836), GPR_U32(ctx, 0));
    // 0x244e38: 0x3e00008  jr          $ra
    ctx->pc = 0x244E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E38u;
        // 0x244e3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244E40u;
}
