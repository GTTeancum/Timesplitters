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

// Function: allocateOverridePointers
// Address: 0x2743c8 - 0x2743fc
void allocateOverridePointers_0x2743c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("allocateOverridePointers_0x2743c8");
#endif

    ctx->pc = 0x2743c8u;

    // 0x2743c8: 0x8c880020  lw          $t0, 0x20($a0)
    ctx->pc = 0x2743c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2743cc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2743ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2743d0: 0x8f87b0a4  lw          $a3, -0x4F5C($gp)
    ctx->pc = 0x2743d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946980)));
    // 0x2743d4: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x2743d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2743d8: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x2743d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2743dc: 0x8f85b0a0  lw          $a1, -0x4F60($gp)
    ctx->pc = 0x2743dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946976)));
    // 0x2743e0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2743e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2743e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2743e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2743e8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2743e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2743ec: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2743ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2743f0: 0xad0500f8  sw          $a1, 0xF8($t0)
    ctx->pc = 0x2743f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 248), GPR_U32(ctx, 5));
    // 0x2743f4: 0x809d100  j           func_274400
    ctx->pc = 0x2743F4u;
    ctx->pc = 0x2743F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2743F4u;
    // 0x2743f8: 0xaf87b0a4  sw          $a3, -0x4F5C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946980), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274400u;
    nullOverridePointers_0x274400(rdram, ctx, runtime); return;
    ctx->pc = 0x2743FCu;
}
