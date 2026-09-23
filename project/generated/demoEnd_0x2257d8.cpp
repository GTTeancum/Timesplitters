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

// Function: demoEnd
// Address: 0x2257d8 - 0x2257e4
void demoEnd_0x2257d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("demoEnd_0x2257d8");
#endif

    ctx->pc = 0x2257d8u;

    // 0x2257d8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2257d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2257dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2257DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2257E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2257DCu;
        // 0x2257e0: 0xaf829dac  sw          $v0, -0x6254($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2257DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2257E4u;
}
