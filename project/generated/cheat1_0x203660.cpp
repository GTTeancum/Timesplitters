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

// Function: cheat1
// Address: 0x203660 - 0x203684
void cheat1_0x203660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cheat1_0x203660");
#endif

    ctx->pc = 0x203660u;

    // 0x203660: 0x8f839af0  lw          $v1, -0x6510($gp)
    ctx->pc = 0x203660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941424)));
    // 0x203664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203668: 0x2406008e  addiu       $a2, $zero, 0x8E
    ctx->pc = 0x203668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x20366c: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x20366cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x203670: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x203670u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x203674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203678: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x203678u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x20367c: 0x8081546  j           func_205518
    ctx->pc = 0x20367Cu;
    ctx->pc = 0x203680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20367Cu;
    // 0x203680: 0xaf829af0  sw          $v0, -0x6510($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941424), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    soundStart_0x205518(rdram, ctx, runtime); return;
    ctx->pc = 0x203684u;
}
