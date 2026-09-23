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

// Function: zbtestAdvanceTestPtr
// Address: 0x2a7030 - 0x2a7054
void zbtestAdvanceTestPtr_0x2a7030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zbtestAdvanceTestPtr_0x2a7030");
#endif

    ctx->pc = 0x2a7030u;

    // 0x2a7030: 0x8f83b984  lw          $v1, -0x467C($gp)
    ctx->pc = 0x2a7030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949252)));
    // 0x2a7034: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a7034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a7038: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A7038u;
    {
        const bool branch_taken_0x2a7038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7038) {
            ctx->pc = 0x2A703Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7038u;
            // 0x2a703c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7040u;
            goto label_2a7040;
        }
    }
    ctx->pc = 0x2A7040u;
label_2a7040:
    // 0x2a7040: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a7040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a7044: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2a7044u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2a7048: 0x2010  mfhi        $a0
    ctx->pc = 0x2a7048u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2a704c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A704Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A704Cu;
        // 0x2a7050: 0xaf84b984  sw          $a0, -0x467C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949252), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A704Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7054u;
}
