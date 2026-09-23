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

// Function: exitDialogs
// Address: 0x24fcc0 - 0x24fcec
void exitDialogs_0x24fcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("exitDialogs_0x24fcc0");
#endif

    ctx->pc = 0x24fcc0u;

    // 0x24fcc0: 0x8f83a0d8  lw          $v1, -0x5F28($gp)
    ctx->pc = 0x24fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24fcc4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x24fcc8: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x24fcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24fccc: 0x3442ff7f  ori         $v0, $v0, 0xFF7F
    ctx->pc = 0x24fcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65407);
    // 0x24fcd0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24fcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fcd4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x24fcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24fcd8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x24fcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x24fcdc: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x24fcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x24fce0: 0xaf83a0d8  sw          $v1, -0x5F28($gp)
    ctx->pc = 0x24fce0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 3));
    // 0x24fce4: 0x8093f7a  j           func_24FDE8
    ctx->pc = 0x24FCE4u;
    ctx->pc = 0x24FCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FCE4u;
    // 0x24fce8: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FDE8u;
    mmPopCursorPos_0x24fde8(rdram, ctx, runtime); return;
    ctx->pc = 0x24FCECu;
}
