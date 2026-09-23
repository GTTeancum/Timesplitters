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

// Function: camReset
// Address: 0x27e300 - 0x27e308
void camReset_0x27e300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("camReset_0x27e300");
#endif

    ctx->pc = 0x27e300u;

    // 0x27e300: 0x809f8be  j           func_27E2F8
    ctx->pc = 0x27E300u;
    ctx->pc = 0x27E2F8u;
    camRestart_0x27e2f8(rdram, ctx, runtime); return;
    ctx->pc = 0x27E308u;
}
