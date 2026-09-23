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

// Function: particleprintsizes
// Address: 0x296ad8 - 0x296b04
void particleprintsizes_0x296ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleprintsizes_0x296ad8");
#endif

    switch (ctx->pc) {
        case 0x296ae0u: goto label_296ae0;
        default: break;
    }

    ctx->pc = 0x296ad8u;

    // 0x296ad8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x296ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x296adc: 0x0  nop
    ctx->pc = 0x296adcu;
    // NOP
label_296ae0:
    // 0x296ae0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x296ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x296ae4: 0x0  nop
    ctx->pc = 0x296ae4u;
    // NOP
    // 0x296ae8: 0x0  nop
    ctx->pc = 0x296ae8u;
    // NOP
    // 0x296aec: 0x0  nop
    ctx->pc = 0x296aecu;
    // NOP
    // 0x296af0: 0x0  nop
    ctx->pc = 0x296af0u;
    // NOP
    // 0x296af4: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x296AF4u;
    {
        const bool branch_taken_0x296af4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x296af4) {
            ctx->pc = 0x296AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296ae0;
        }
    }
    ctx->pc = 0x296AFCu;
    // 0x296afc: 0x3e00008  jr          $ra
    ctx->pc = 0x296AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296B04u;
}
