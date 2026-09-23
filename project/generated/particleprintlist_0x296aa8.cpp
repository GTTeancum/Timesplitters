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

// Function: particleprintlist
// Address: 0x296aa8 - 0x296ad4
void particleprintlist_0x296aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleprintlist_0x296aa8");
#endif

    switch (ctx->pc) {
        case 0x296ab0u: goto label_296ab0;
        default: break;
    }

    ctx->pc = 0x296aa8u;

    // 0x296aa8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x296AA8u;
    {
        const bool branch_taken_0x296aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x296aa8) {
            ctx->pc = 0x296ACCu;
            goto label_296acc;
        }
    }
    ctx->pc = 0x296AB0u;
label_296ab0:
    // 0x296ab0: 0x8c840044  lw          $a0, 0x44($a0)
    ctx->pc = 0x296ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x296ab4: 0x0  nop
    ctx->pc = 0x296ab4u;
    // NOP
    // 0x296ab8: 0x0  nop
    ctx->pc = 0x296ab8u;
    // NOP
    // 0x296abc: 0x0  nop
    ctx->pc = 0x296abcu;
    // NOP
    // 0x296ac0: 0x0  nop
    ctx->pc = 0x296ac0u;
    // NOP
    // 0x296ac4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x296AC4u;
    {
        const bool branch_taken_0x296ac4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x296ac4) {
            ctx->pc = 0x296AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296ab0;
        }
    }
    ctx->pc = 0x296ACCu;
label_296acc:
    // 0x296acc: 0x3e00008  jr          $ra
    ctx->pc = 0x296ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296AD4u;
}
