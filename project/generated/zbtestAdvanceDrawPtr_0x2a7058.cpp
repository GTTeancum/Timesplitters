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

// Function: zbtestAdvanceDrawPtr
// Address: 0x2a7058 - 0x2a709c
void zbtestAdvanceDrawPtr_0x2a7058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zbtestAdvanceDrawPtr_0x2a7058");
#endif

    ctx->pc = 0x2a7058u;

    // 0x2a7058: 0x8f83b988  lw          $v1, -0x4678($gp)
    ctx->pc = 0x2a7058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949256)));
    // 0x2a705c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a705cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a7060: 0x3c0401ff  lui         $a0, 0x1FF
    ctx->pc = 0x2a7060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)511 << 16));
    // 0x2a7064: 0xaf80b98c  sw          $zero, -0x4674($gp)
    ctx->pc = 0x2a7064u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949260), GPR_U32(ctx, 0));
    // 0x2a7068: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2a7068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a706c: 0x2484a0a0  addiu       $a0, $a0, -0x5F60
    ctx->pc = 0x2a706cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942880));
    // 0x2a7070: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x2a7070u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2a7074: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a7074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a7078: 0xaf80b990  sw          $zero, -0x4670($gp)
    ctx->pc = 0x2a7078u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949264), GPR_U32(ctx, 0));
    // 0x2a707c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a707cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7080: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2a7080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2a7084: 0xaf80b994  sw          $zero, -0x466C($gp)
    ctx->pc = 0x2a7084u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949268), GPR_U32(ctx, 0));
    // 0x2a7088: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A7088u;
    {
        const bool branch_taken_0x2a7088 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7088) {
            ctx->pc = 0x2A708Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7088u;
            // 0x2a708c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7090u;
            goto label_2a7090;
        }
    }
    ctx->pc = 0x2A7090u;
label_2a7090:
    // 0x2a7090: 0x3010  mfhi        $a2
    ctx->pc = 0x2a7090u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2a7094: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7094u;
        // 0x2a7098: 0xaf86b988  sw          $a2, -0x4678($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949256), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A709Cu;
}
