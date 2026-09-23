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

// Function: mapmakercolour_pageDraw
// Address: 0x251888 - 0x2518a8
void mapmakercolour_pageDraw_0x251888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapmakercolour_pageDraw_0x251888");
#endif

    ctx->pc = 0x251888u;

    // 0x251888: 0x3c097f7f  lui         $t1, 0x7F7F
    ctx->pc = 0x251888u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32639 << 16));
    // 0x25188c: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x25188cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x251890: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x251890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x251894: 0x24060139  addiu       $a2, $zero, 0x139
    ctx->pc = 0x251894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 313));
    // 0x251898: 0x240700ab  addiu       $a3, $zero, 0xAB
    ctx->pc = 0x251898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x25189c: 0x24082880  addiu       $t0, $zero, 0x2880
    ctx->pc = 0x25189cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10368));
    // 0x2518a0: 0x808bb46  j           func_22ED18
    ctx->pc = 0x2518A0u;
    ctx->pc = 0x2518A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2518A0u;
    // 0x2518a4: 0x35297f7f  ori         $t1, $t1, 0x7F7F (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32639);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED18u;
    zoomboxDraw_0x22ed18(rdram, ctx, runtime); return;
    ctx->pc = 0x2518A8u;
}
