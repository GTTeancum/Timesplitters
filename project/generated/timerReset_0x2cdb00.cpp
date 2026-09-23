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

// Function: timerReset
// Address: 0x2cdb00 - 0x2cdb08
void timerReset_0x2cdb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("timerReset_0x2cdb00");
#endif

    ctx->pc = 0x2cdb00u;

    // 0x2cdb00: 0x80b36be  j           func_2CDAF8
    ctx->pc = 0x2CDB00u;
    ctx->pc = 0x2CDAF8u;
    timerRestart_0x2cdaf8(rdram, ctx, runtime); return;
    ctx->pc = 0x2CDB08u;
}
