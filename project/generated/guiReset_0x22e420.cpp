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

// Function: guiReset
// Address: 0x22e420 - 0x22e428
void guiReset_0x22e420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("guiReset_0x22e420");
#endif

    ctx->pc = 0x22e420u;

    // 0x22e420: 0x808b8d4  j           func_22E350
    ctx->pc = 0x22E420u;
    ctx->pc = 0x22E350u;
    guiRestart_0x22e350(rdram, ctx, runtime); return;
    ctx->pc = 0x22E428u;
}
