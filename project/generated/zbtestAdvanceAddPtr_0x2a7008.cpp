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

// Function: zbtestAdvanceAddPtr
// Address: 0x2a7008 - 0x2a702c
void zbtestAdvanceAddPtr_0x2a7008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zbtestAdvanceAddPtr_0x2a7008");
#endif

    ctx->pc = 0x2a7008u;

    // 0x2a7008: 0x8f83b980  lw          $v1, -0x4680($gp)
    ctx->pc = 0x2a7008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949248)));
    // 0x2a700c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a7010: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A7010u;
    {
        const bool branch_taken_0x2a7010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7010) {
            ctx->pc = 0x2A7014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7010u;
            // 0x2a7014: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7018u;
            goto label_2a7018;
        }
    }
    ctx->pc = 0x2A7018u;
label_2a7018:
    // 0x2a7018: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a7018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a701c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2a701cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2a7020: 0x2010  mfhi        $a0
    ctx->pc = 0x2a7020u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2a7024: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7024u;
        // 0x2a7028: 0xaf84b980  sw          $a0, -0x4680($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949248), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A702Cu;
}
