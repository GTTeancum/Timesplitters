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

// Function: setcursound
// Address: 0x206000 - 0x206024
void setcursound_0x206000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setcursound_0x206000");
#endif

    ctx->pc = 0x206000u;

    // 0x206000: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x206000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x206004: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x206004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x206008: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x206008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20600c: 0x2442e188  addiu       $v0, $v0, -0x1E78
    ctx->pc = 0x20600cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959496));
    // 0x206010: 0xaf849b40  sw          $a0, -0x64C0($gp)
    ctx->pc = 0x206010u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941504), GPR_U32(ctx, 4));
    // 0x206014: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x206014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206018: 0xaf839b44  sw          $v1, -0x64BC($gp)
    ctx->pc = 0x206018u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941508), GPR_U32(ctx, 3));
    // 0x20601c: 0x3e00008  jr          $ra
    ctx->pc = 0x20601Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20601Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206024u;
}
