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

// Function: gunGetBulletType
// Address: 0x2906a0 - 0x2906c4
void gunGetBulletType_0x2906a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunGetBulletType_0x2906a0");
#endif

    ctx->pc = 0x2906a0u;

    // 0x2906a0: 0x8c8500ac  lw          $a1, 0xAC($a0)
    ctx->pc = 0x2906a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x2906a4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2906a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2906a8: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x2906a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2906ac: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x2906acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x2906b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2906b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2906b4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2906b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2906b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2906b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2906bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2906BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2906C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906BCu;
        // 0x2906c0: 0x8c620034  lw          $v0, 0x34($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2906BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2906C4u;
}
