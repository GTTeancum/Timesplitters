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

// Function: dlPopDmaTag
// Address: 0x2b9028 - 0x2b9050
void dlPopDmaTag_0x2b9028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dlPopDmaTag_0x2b9028");
#endif

    ctx->pc = 0x2b9028u;

    // 0x2b9028: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2b9028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b902c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x2b902cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2b9030: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x2b9030u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b9034: 0x8f8493a0  lw          $a0, -0x6C60($gp)
    ctx->pc = 0x2b9034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b9038: 0x8f82b4b0  lw          $v0, -0x4B50($gp)
    ctx->pc = 0x2b9038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948016)));
    // 0x2b903c: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x2b903cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b9040: 0xaf8293a0  sw          $v0, -0x6C60($gp)
    ctx->pc = 0x2b9040u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 2));
    // 0x2b9044: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2b9044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2b9048: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9048u;
        // 0x2b904c: 0xaf80b4b0  sw          $zero, -0x4B50($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948016), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9050u;
}
