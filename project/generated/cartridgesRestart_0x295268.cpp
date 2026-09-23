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

// Function: cartridgesRestart
// Address: 0x295268 - 0x29527c
void cartridgesRestart_0x295268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cartridgesRestart_0x295268");
#endif

    ctx->pc = 0x295268u;

    // 0x295268: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x295268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x29526c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29526cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295270: 0x248492c0  addiu       $a0, $a0, -0x6D40
    ctx->pc = 0x295270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939328));
    // 0x295274: 0x80b9583  j           func_2E560C
    ctx->pc = 0x295274u;
    ctx->pc = 0x295278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295274u;
    // 0x295278: 0x240603d0  addiu       $a2, $zero, 0x3D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    memset_0x2e560c(rdram, ctx, runtime); return;
    ctx->pc = 0x29527Cu;
}
