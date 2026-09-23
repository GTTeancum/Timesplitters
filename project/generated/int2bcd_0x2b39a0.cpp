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

// Function: int2bcd
// Address: 0x2b39a0 - 0x2b39c8
void int2bcd_0x2b39a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("int2bcd_0x2b39a0");
#endif

    ctx->pc = 0x2b39a0u;

    // 0x2b39a0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2b39a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b39a4: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x2b39a4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b39a8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B39A8u;
    {
        const bool branch_taken_0x2b39a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b39a8) {
            ctx->pc = 0x2B39ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B39A8u;
            // 0x2b39ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B39B0u;
            goto label_2b39b0;
        }
    }
    ctx->pc = 0x2B39B0u;
label_2b39b0:
    // 0x2b39b0: 0x1012  mflo        $v0
    ctx->pc = 0x2b39b0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2b39b4: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x2b39b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b39b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b39bc: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2b39bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b39c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B39C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B39C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39C0u;
        // 0x2b39c4: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B39C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B39C8u;
}
