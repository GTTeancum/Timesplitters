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

// Function: propAddPreLoad
// Address: 0x267220 - 0x267240
void propAddPreLoad_0x267220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propAddPreLoad_0x267220");
#endif

    ctx->pc = 0x267220u;

    // 0x267220: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x267220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x267224: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x267224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x267228: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x267228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26722c: 0x244290c0  addiu       $v0, $v0, -0x6F40
    ctx->pc = 0x26722cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938816));
    // 0x267230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x267230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267234: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x267234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x267238: 0x80870d4  j           func_21C350
    ctx->pc = 0x267238u;
    ctx->pc = 0x26723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267238u;
    // 0x26723c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C350u;
    preloadAddOb_0x21c350(rdram, ctx, runtime); return;
    ctx->pc = 0x267240u;
}
