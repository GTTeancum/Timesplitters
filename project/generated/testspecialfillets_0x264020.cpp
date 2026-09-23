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

// Function: testspecialfillets
// Address: 0x264020 - 0x264054
void testspecialfillets_0x264020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("testspecialfillets_0x264020");
#endif

    switch (ctx->pc) {
        case 0x264030u: goto label_264030;
        default: break;
    }

    ctx->pc = 0x264020u;

    // 0x264020: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x264020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264024: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x264024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264028: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x264028u;
    {
        const bool branch_taken_0x264028 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x264028) {
            ctx->pc = 0x26404Cu;
            goto label_26404c;
        }
    }
    ctx->pc = 0x264030u;
label_264030:
    // 0x264030: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x264030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x264034: 0x0  nop
    ctx->pc = 0x264034u;
    // NOP
    // 0x264038: 0x0  nop
    ctx->pc = 0x264038u;
    // NOP
    // 0x26403c: 0x0  nop
    ctx->pc = 0x26403cu;
    // NOP
    // 0x264040: 0x0  nop
    ctx->pc = 0x264040u;
    // NOP
    // 0x264044: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x264044u;
    {
        const bool branch_taken_0x264044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264044) {
            ctx->pc = 0x264030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264030;
        }
    }
    ctx->pc = 0x26404Cu;
label_26404c:
    // 0x26404c: 0x3e00008  jr          $ra
    ctx->pc = 0x26404Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26404Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264054u;
}
