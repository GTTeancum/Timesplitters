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

// Function: particleEnd
// Address: 0x296a90 - 0x296aa4
void particleEnd_0x296a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleEnd_0x296a90");
#endif

    ctx->pc = 0x296a90u;

    // 0x296a90: 0x8f82935c  lw          $v0, -0x6CA4($gp)
    ctx->pc = 0x296a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939484)));
    // 0x296a94: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x296A94u;
    {
        const bool branch_taken_0x296a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296a94) {
            ctx->pc = 0x296A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296A94u;
            // 0x296a98: 0xaf80b2f0  sw          $zero, -0x4D10($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294947568), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296A9Cu;
            goto label_296a9c;
        }
    }
    ctx->pc = 0x296A9Cu;
label_296a9c:
    // 0x296a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x296A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296AA4u;
}
