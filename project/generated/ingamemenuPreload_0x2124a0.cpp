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

// Function: ingamemenuPreload
// Address: 0x2124a0 - 0x2124a8
void ingamemenuPreload_0x2124a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ingamemenuPreload_0x2124a0");
#endif

    ctx->pc = 0x2124a0u;

    // 0x2124a0: 0x808b894  j           func_22E250
    ctx->pc = 0x2124A0u;
    ctx->pc = 0x22E250u;
    guiPreload_0x22e250(rdram, ctx, runtime); return;
    ctx->pc = 0x2124A8u;
}
