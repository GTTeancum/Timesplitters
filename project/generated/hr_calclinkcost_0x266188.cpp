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

// Function: hr_calclinkcost
// Address: 0x266188 - 0x2661a8
void hr_calclinkcost_0x266188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hr_calclinkcost_0x266188");
#endif

    switch (ctx->pc) {
        case 0x26619cu: goto label_26619c;
        default: break;
    }

    ctx->pc = 0x266188u;

    // 0x266188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x266188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26618c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26618cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x266190: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x266190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x266194: 0xc099840  jal         func_266100
    ctx->pc = 0x266194u;
    SET_GPR_U32(ctx, 31, 0x26619Cu);
    ctx->pc = 0x266198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266194u;
    // 0x266198: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266100u, 0x266194u, 0x26619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26619Cu;
label_26619c:
    // 0x26619c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26619cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2661a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2661A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2661A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2661A0u;
        // 0x2661a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2661A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2661A8u;
}
