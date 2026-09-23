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

// Function: startmoveview
// Address: 0x20d528 - 0x20d530
void startmoveview_0x20d528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("startmoveview_0x20d528");
#endif

    ctx->pc = 0x20d528u;

    // 0x20d528: 0x809f8c4  j           func_27E310
    ctx->pc = 0x20D528u;
    ctx->pc = 0x20D52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D528u;
    // 0x20d52c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E310u;
    camSetMode_0x27e310(rdram, ctx, runtime); return;
    ctx->pc = 0x20D530u;
}
