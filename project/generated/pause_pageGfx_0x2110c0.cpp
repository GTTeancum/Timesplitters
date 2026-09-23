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

// Function: pause_pageGfx
// Address: 0x2110c0 - 0x2110c8
void pause_pageGfx_0x2110c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pause_pageGfx_0x2110c0");
#endif

    ctx->pc = 0x2110c0u;

    // 0x2110c0: 0x8084406  j           func_211018
    ctx->pc = 0x2110C0u;
    ctx->pc = 0x211018u;
    drawPause_0x211018(rdram, ctx, runtime); return;
    ctx->pc = 0x2110C8u;
}
