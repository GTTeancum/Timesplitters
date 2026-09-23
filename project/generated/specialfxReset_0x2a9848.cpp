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

// Function: specialfxReset
// Address: 0x2a9848 - 0x2a9850
void specialfxReset_0x2a9848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxReset_0x2a9848");
#endif

    ctx->pc = 0x2a9848u;

    // 0x2a9848: 0x80aa5e0  j           func_2A9780
    ctx->pc = 0x2A9848u;
    ctx->pc = 0x2A9780u;
    specialfxRestart_0x2a9780(rdram, ctx, runtime); return;
    ctx->pc = 0x2A9850u;
}
