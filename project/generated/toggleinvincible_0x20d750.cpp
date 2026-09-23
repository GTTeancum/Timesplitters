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

// Function: toggleinvincible
// Address: 0x20d750 - 0x20d774
void toggleinvincible_0x20d750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("toggleinvincible_0x20d750");
#endif

    ctx->pc = 0x20d750u;

    // 0x20d750: 0x8f839ce8  lw          $v1, -0x6318($gp)
    ctx->pc = 0x20d750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941928)));
    // 0x20d754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d758: 0x24060097  addiu       $a2, $zero, 0x97
    ctx->pc = 0x20d758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x20d75c: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x20d75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x20d760: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20d760u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d764: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20d764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d768: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x20d768u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x20d76c: 0x8081546  j           func_205518
    ctx->pc = 0x20D76Cu;
    ctx->pc = 0x20D770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D76Cu;
    // 0x20d770: 0xaf829ce8  sw          $v0, -0x6318($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941928), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    soundStart_0x205518(rdram, ctx, runtime); return;
    ctx->pc = 0x20D774u;
}
