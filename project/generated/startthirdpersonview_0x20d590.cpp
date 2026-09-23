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

// Function: startthirdpersonview
// Address: 0x20d590 - 0x20d598
void startthirdpersonview_0x20d590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("startthirdpersonview_0x20d590");
#endif

    ctx->pc = 0x20d590u;

    // 0x20d590: 0x809f8c4  j           func_27E310
    ctx->pc = 0x20D590u;
    ctx->pc = 0x20D594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D590u;
    // 0x20d594: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E310u;
    camSetMode_0x27e310(rdram, ctx, runtime); return;
    ctx->pc = 0x20D598u;
}
