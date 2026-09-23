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

// Function: obInstSetOverrideStates
// Address: 0x263ff0 - 0x264008
void obInstSetOverrideStates_0x263ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obInstSetOverrideStates_0x263ff0");
#endif

    ctx->pc = 0x263ff0u;

    // 0x263ff0: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x263ff0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x263ff4: 0xac850128  sw          $a1, 0x128($a0)
    ctx->pc = 0x263ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 5));
    // 0x263ff8: 0xac880134  sw          $t0, 0x134($a0)
    ctx->pc = 0x263ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 8));
    // 0x263ffc: 0xac86012c  sw          $a2, 0x12C($a0)
    ctx->pc = 0x263ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 6));
    // 0x264000: 0x3e00008  jr          $ra
    ctx->pc = 0x264000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264000u;
        // 0x264004: 0xac870130  sw          $a3, 0x130($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264008u;
}
