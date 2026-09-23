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

// Function: addtail
// Address: 0x289518 - 0x28955c
void addtail_0x289518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("addtail_0x289518");
#endif

    ctx->pc = 0x289518u;

    // 0x289518: 0x2782b958  addiu       $v0, $gp, -0x46A8
    ctx->pc = 0x289518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949208));
    // 0x28951c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x28951cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x289520: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x289520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x289524: 0x24060114  addiu       $a2, $zero, 0x114
    ctx->pc = 0x289524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x289528: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x289528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28952c: 0x863818  mult        $a3, $a0, $a2
    ctx->pc = 0x28952cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x289530: 0x8f83b948  lw          $v1, -0x46B8($gp)
    ctx->pc = 0x289530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
    // 0x289534: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x289534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x289538: 0x464818  mult        $t1, $v0, $a2
    ctx->pc = 0x289538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x28953c: 0x1231021  addu        $v0, $t1, $v1
    ctx->pc = 0x28953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x289540: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x289540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x289544: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x289544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x289548: 0xac680004  sw          $t0, 0x4($v1)
    ctx->pc = 0x289548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 8));
    // 0x28954c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28954cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289550: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x289550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x289554: 0x3e00008  jr          $ra
    ctx->pc = 0x289554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289554u;
        // 0x289558: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28955Cu;
}
