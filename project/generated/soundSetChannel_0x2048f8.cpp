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

// Function: soundSetChannel
// Address: 0x2048f8 - 0x204904
void soundSetChannel_0x2048f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundSetChannel_0x2048f8");
#endif

    ctx->pc = 0x2048f8u;

    // 0x2048f8: 0xaf849b04  sw          $a0, -0x64FC($gp)
    ctx->pc = 0x2048f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941444), GPR_U32(ctx, 4));
    // 0x2048fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2048FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048FCu;
        // 0x204900: 0xaf859b08  sw          $a1, -0x64F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941448), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2048FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204904u;
}
