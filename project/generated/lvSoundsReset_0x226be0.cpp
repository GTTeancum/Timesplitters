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

// Function: lvSoundsReset
// Address: 0x226be0 - 0x226be8
void lvSoundsReset_0x226be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvSoundsReset_0x226be0");
#endif

    ctx->pc = 0x226be0u;

    // 0x226be0: 0x8089afa  j           func_226BE8
    ctx->pc = 0x226BE0u;
    ctx->pc = 0x226BE8u;
    lvSoundsRestart_0x226be8(rdram, ctx, runtime); return;
    ctx->pc = 0x226BE8u;
}
