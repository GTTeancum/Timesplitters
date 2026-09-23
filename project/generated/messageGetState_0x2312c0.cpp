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

// Function: messageGetState
// Address: 0x2312c0 - 0x2312dc
void messageGetState_0x2312c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("messageGetState_0x2312c0");
#endif

    ctx->pc = 0x2312c0u;

    // 0x2312c0: 0x24020410  addiu       $v0, $zero, 0x410
    ctx->pc = 0x2312c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x2312c4: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x2312c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x2312c8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2312c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2312cc: 0x246319c0  addiu       $v1, $v1, 0x19C0
    ctx->pc = 0x2312ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6592));
    // 0x2312d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2312d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2312d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2312D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2312D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2312D4u;
        // 0x2312d8: 0x8c62040c  lw          $v0, 0x40C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1036)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2312D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2312DCu;
}
