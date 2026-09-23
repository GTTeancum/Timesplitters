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

// Function: obConfirmLastHitInst
// Address: 0x2636f0 - 0x263714
void obConfirmLastHitInst_0x2636f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obConfirmLastHitInst_0x2636f0");
#endif

    ctx->pc = 0x2636f0u;

    // 0x2636f0: 0x8f82a2ac  lw          $v0, -0x5D54($gp)
    ctx->pc = 0x2636f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943404)));
    // 0x2636f4: 0x8f83a2b4  lw          $v1, -0x5D4C($gp)
    ctx->pc = 0x2636f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943412)));
    // 0x2636f8: 0x8f84a2bc  lw          $a0, -0x5D44($gp)
    ctx->pc = 0x2636f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943420)));
    // 0x2636fc: 0x8f85a2c4  lw          $a1, -0x5D3C($gp)
    ctx->pc = 0x2636fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943428)));
    // 0x263700: 0xaf82a2a8  sw          $v0, -0x5D58($gp)
    ctx->pc = 0x263700u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943400), GPR_U32(ctx, 2));
    // 0x263704: 0xaf83a2b0  sw          $v1, -0x5D50($gp)
    ctx->pc = 0x263704u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943408), GPR_U32(ctx, 3));
    // 0x263708: 0xaf84a2b8  sw          $a0, -0x5D48($gp)
    ctx->pc = 0x263708u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943416), GPR_U32(ctx, 4));
    // 0x26370c: 0x3e00008  jr          $ra
    ctx->pc = 0x26370Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26370Cu;
        // 0x263710: 0xaf85a2c0  sw          $a1, -0x5D40($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943424), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26370Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263714u;
}
