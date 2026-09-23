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

// Function: lflush
// Address: 0x2ecf20 - 0x2ecf3c
void lflush_0x2ecf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lflush_0x2ecf20");
#endif

    switch (ctx->pc) {
        case 0x2ecf30u: goto label_2ecf30;
        default: break;
    }

    ctx->pc = 0x2ecf20u;

    // 0x2ecf20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ecf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ecf24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ecf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ecf28: 0xc0bac14  jal         func_2EB050
    ctx->pc = 0x2ECF28u;
    SET_GPR_U32(ctx, 31, 0x2ECF30u);
    ctx->pc = 0x2EB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB050u, 0x2ECF28u, 0x2ECF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECF30u;
label_2ecf30:
    // 0x2ecf30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ecf30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecf34: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF34u;
        // 0x2ecf38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECF3Cu;
}
