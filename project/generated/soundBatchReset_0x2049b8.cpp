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

// Function: soundBatchReset
// Address: 0x2049b8 - 0x2049c0
void soundBatchReset_0x2049b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundBatchReset_0x2049b8");
#endif

    ctx->pc = 0x2049b8u;

    // 0x2049b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2049B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2049BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049B8u;
        // 0x2049bc: 0xaf809b0c  sw          $zero, -0x64F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941452), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2049B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2049C0u;
}
