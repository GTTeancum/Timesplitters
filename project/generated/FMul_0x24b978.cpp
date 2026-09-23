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

// Function: FMul
// Address: 0x24b978 - 0x24b9a0
void FMul_0x24b978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FMul_0x24b978");
#endif

    ctx->pc = 0x24b978u;

    // 0x24b978: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x24b978u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x24b97c: 0x3012  mflo        $a2
    ctx->pc = 0x24b97cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x24b980: 0x1010  mfhi        $v0
    ctx->pc = 0x24b980u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x24b984: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x24b984u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x24b988: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24b988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b98c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x24b98cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x24b990: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x24b990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x24b994: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24b994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24b998: 0x3e00008  jr          $ra
    ctx->pc = 0x24B998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B998u;
        // 0x24b99c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B9A0u;
}
