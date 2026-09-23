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

// Function: soundCreateBuffer
// Address: 0x2044a0 - 0x2044c0
void soundCreateBuffer_0x2044a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundCreateBuffer_0x2044a0");
#endif

    ctx->pc = 0x2044a0u;

    // 0x2044a0: 0x3c0301fb  lui         $v1, 0x1FB
    ctx->pc = 0x2044a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)507 << 16));
    // 0x2044a4: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x2044a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2044a8: 0x24631790  addiu       $v1, $v1, 0x1790
    ctx->pc = 0x2044a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6032));
    // 0x2044ac: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x2044acu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2044b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2044b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2044b4: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x2044b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x2044b8: 0x808111e  j           func_204478
    ctx->pc = 0x2044B8u;
    ctx->pc = 0x2044BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2044B8u;
    // 0x2044bc: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204478u;
    soundResetBuffer_0x204478(rdram, ctx, runtime); return;
    ctx->pc = 0x2044C0u;
}
