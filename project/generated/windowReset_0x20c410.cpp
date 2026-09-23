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

// Function: windowReset
// Address: 0x20c410 - 0x20c418
void windowReset_0x20c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("windowReset_0x20c410");
#endif

    ctx->pc = 0x20c410u;

    // 0x20c410: 0x80830de  j           func_20C378
    ctx->pc = 0x20C410u;
    ctx->pc = 0x20C378u;
    windowRestart_0x20c378(rdram, ctx, runtime); return;
    ctx->pc = 0x20C418u;
}
