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

// Function: obSetLastHitInst
// Address: 0x263718 - 0x26372c
void obSetLastHitInst_0x263718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obSetLastHitInst_0x263718");
#endif

    ctx->pc = 0x263718u;

    // 0x263718: 0xaf84a2a8  sw          $a0, -0x5D58($gp)
    ctx->pc = 0x263718u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943400), GPR_U32(ctx, 4));
    // 0x26371c: 0xaf85a2b0  sw          $a1, -0x5D50($gp)
    ctx->pc = 0x26371cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943408), GPR_U32(ctx, 5));
    // 0x263720: 0xaf86a2b8  sw          $a2, -0x5D48($gp)
    ctx->pc = 0x263720u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943416), GPR_U32(ctx, 6));
    // 0x263724: 0x3e00008  jr          $ra
    ctx->pc = 0x263724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263724u;
        // 0x263728: 0xaf87a2c0  sw          $a3, -0x5D40($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943424), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26372Cu;
}
