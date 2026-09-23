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

// Function: addhead
// Address: 0x2894d0 - 0x289514
void addhead_0x2894d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("addhead_0x2894d0");
#endif

    ctx->pc = 0x2894d0u;

    // 0x2894d0: 0x2782b950  addiu       $v0, $gp, -0x46B0
    ctx->pc = 0x2894d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949200));
    // 0x2894d4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2894d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2894d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2894d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2894dc: 0x8f86b948  lw          $a2, -0x46B8($gp)
    ctx->pc = 0x2894dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
    // 0x2894e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2894e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2894e4: 0x24020114  addiu       $v0, $zero, 0x114
    ctx->pc = 0x2894e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x2894e8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2894e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2894ec: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x2894ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2894f0: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2894f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2894f4: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x2894f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2894f8: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2894f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x2894fc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2894fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x289500: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x289500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289504: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x289504u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x289508: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x289508u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x28950c: 0x3e00008  jr          $ra
    ctx->pc = 0x28950Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28950Cu;
        // 0x289510: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28950Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289514u;
}
