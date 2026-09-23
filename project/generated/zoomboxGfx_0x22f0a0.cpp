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

// Function: zoomboxGfx
// Address: 0x22f0a0 - 0x22f0ec
void zoomboxGfx_0x22f0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zoomboxGfx_0x22f0a0");
#endif

    ctx->pc = 0x22f0a0u;

    // 0x22f0a0: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x22f0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22f0a4: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x22f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x22f0a8: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x22f0a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22f0ac: 0x24632e80  addiu       $v1, $v1, 0x2E80
    ctx->pc = 0x22f0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11904));
    // 0x22f0b0: 0x3c097f7f  lui         $t1, 0x7F7F
    ctx->pc = 0x22f0b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32639 << 16));
    // 0x22f0b4: 0x35297f7f  ori         $t1, $t1, 0x7F7F
    ctx->pc = 0x22f0b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32639);
    // 0x22f0b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22f0bc: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x22f0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x22f0c0: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x22f0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x22f0c4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x22f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x22f0c8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x22f0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f0cc: 0x8c4a0020  lw          $t2, 0x20($v0)
    ctx->pc = 0x22f0ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x22f0d0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x22f0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f0d4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x22f0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22f0d8: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x22f0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x22f0dc: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x22f0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x22f0e0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22f0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22f0e4: 0x808bb46  j           func_22ED18
    ctx->pc = 0x22F0E4u;
    ctx->pc = 0x22F0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F0E4u;
    // 0x22f0e8: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED18u;
    zoomboxDraw_0x22ed18(rdram, ctx, runtime); return;
    ctx->pc = 0x22F0ECu;
}
