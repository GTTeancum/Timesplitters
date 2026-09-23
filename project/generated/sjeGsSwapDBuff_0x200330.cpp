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

// Function: sjeGsSwapDBuff
// Address: 0x200330 - 0x200340
void sjeGsSwapDBuff_0x200330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sjeGsSwapDBuff_0x200330");
#endif

    ctx->pc = 0x200330u;

    // 0x200330: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x200330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200334: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x200334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x200338: 0x80b389e  j           func_2CE278
    ctx->pc = 0x200338u;
    ctx->pc = 0x20033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200338u;
    // 0x20033c: 0x24843480  addiu       $a0, $a0, 0x3480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE278u;
    sceGsSwapDBuff_0x2ce278(rdram, ctx, runtime); return;
    ctx->pc = 0x200340u;
}
