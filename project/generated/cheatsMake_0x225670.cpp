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

// Function: cheatsMake
// Address: 0x225670 - 0x22567c
void cheatsMake_0x225670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cheatsMake_0x225670");
#endif

    ctx->pc = 0x225670u;

    // 0x225670: 0xaf809f50  sw          $zero, -0x60B0($gp)
    ctx->pc = 0x225670u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942544), GPR_U32(ctx, 0));
    // 0x225674: 0x3e00008  jr          $ra
    ctx->pc = 0x225674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225674u;
        // 0x225678: 0xaf809f54  sw          $zero, -0x60AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22567Cu;
}
