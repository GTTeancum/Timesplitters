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

// Function: zoomtileWindow
// Address: 0x250500 - 0x250534
void zoomtileWindow_0x250500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zoomtileWindow_0x250500");
#endif

    ctx->pc = 0x250500u;

    // 0x250500: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x250500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x250504: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x250504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x250508: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x250508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x25050c: 0xaf84b874  sw          $a0, -0x478C($gp)
    ctx->pc = 0x25050cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948980), GPR_U32(ctx, 4));
    // 0x250510: 0xaf85b878  sw          $a1, -0x4788($gp)
    ctx->pc = 0x250510u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948984), GPR_U32(ctx, 5));
    // 0x250514: 0xaf86b87c  sw          $a2, -0x4784($gp)
    ctx->pc = 0x250514u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948988), GPR_U32(ctx, 6));
    // 0x250518: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x250518u;
    {
        const bool branch_taken_0x250518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250518) {
            ctx->pc = 0x25051Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250518u;
            // 0x25051c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x250520u;
            goto label_250520;
        }
    }
    ctx->pc = 0x250520u;
label_250520:
    // 0x250520: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x250520u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x250524: 0xaf80b884  sw          $zero, -0x477C($gp)
    ctx->pc = 0x250524u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948996), GPR_U32(ctx, 0));
    // 0x250528: 0x1812  mflo        $v1
    ctx->pc = 0x250528u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x25052c: 0x3e00008  jr          $ra
    ctx->pc = 0x25052Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25052Cu;
        // 0x250530: 0xaf83b880  sw          $v1, -0x4780($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948992), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25052Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250534u;
}
