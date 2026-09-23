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

// Function: __muldi3
// Address: 0x2e4648 - 0x2e46a8
void ps2___muldi3_0x2e4648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___muldi3_0x2e4648");
#endif

    ctx->pc = 0x2e4648u;

    // 0x2e4648: 0x4303f  dsra32      $a2, $a0, 0
    ctx->pc = 0x2e4648u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2e464c: 0x5183f  dsra32      $v1, $a1, 0
    ctx->pc = 0x2e464cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2e4650: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2e4650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2e4654: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2e4654u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2e4658: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2e4658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2e465c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2e465cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2e4660: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2e4660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2e4664: 0x70c53018  mult1       $a2, $a2, $a1
    ctx->pc = 0x2e4664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e4668: 0x850019  multu       $a0, $a1
    ctx->pc = 0x2e4668u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2e466c: 0x2012  mflo        $a0
    ctx->pc = 0x2e466cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2e4670: 0x1010  mfhi        $v0
    ctx->pc = 0x2e4670u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2e4674: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2e4674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2e4678: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e4678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e467c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2e467cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2e4680: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2e4680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2e4684: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2e4684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2e4688: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2e4688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2e468c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2e468cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2e4690: 0x4103f  dsra32      $v0, $a0, 0
    ctx->pc = 0x2e4690u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2e4694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e4694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4698: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x2e4698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x2e469c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e469cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e46a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E46A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E46A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E46A0u;
        // 0x2e46a4: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E46A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E46A8u;
}
