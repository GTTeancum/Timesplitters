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

// Function: config_onchange
// Address: 0x20f558 - 0x20f570
void config_onchange_0x20f558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("config_onchange_0x20f558");
#endif

    ctx->pc = 0x20f558u;

    // 0x20f558: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20f558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20f55c: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x20f55cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f560: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x20f560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x20f564: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20f564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f568: 0x809fd6a  j           func_27F5A8
    ctx->pc = 0x20F568u;
    ctx->pc = 0x20F56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F568u;
    // 0x20f56c: 0xa4650000  sh          $a1, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F5A8u;
    playerSetControls_0x27f5a8(rdram, ctx, runtime); return;
    ctx->pc = 0x20F570u;
}
