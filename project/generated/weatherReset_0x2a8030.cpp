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

// Function: weatherReset
// Address: 0x2a8030 - 0x2a8038
void weatherReset_0x2a8030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("weatherReset_0x2a8030");
#endif

    ctx->pc = 0x2a8030u;

    // 0x2a8030: 0x80aa006  j           func_2A8018
    ctx->pc = 0x2A8030u;
    ctx->pc = 0x2A8018u;
    weatherRestart_0x2a8018(rdram, ctx, runtime); return;
    ctx->pc = 0x2A8038u;
}
