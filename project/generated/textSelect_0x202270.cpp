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

// Function: textSelect
// Address: 0x202270 - 0x2022a4
void textSelect_0x202270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("textSelect_0x202270");
#endif

    ctx->pc = 0x202270u;

    // 0x202270: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x202270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x202274: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x202274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x202278: 0x24a598a8  addiu       $a1, $a1, -0x6758
    ctx->pc = 0x202278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940840));
    // 0x20227c: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x20227cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
    // 0x202280: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x202280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x202284: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x202284u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x202288: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x202288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20228c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x20228cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x202290: 0x861818  mult        $v1, $a0, $a2
    ctx->pc = 0x202290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x202294: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x202294u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x202298: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x202298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20229c: 0x3e00008  jr          $ra
    ctx->pc = 0x20229Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2022A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20229Cu;
        // 0x2022a0: 0xaf849a9c  sw          $a0, -0x6564($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941340), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20229Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2022A4u;
}
