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

// Function: musicReset
// Address: 0x205ce8 - 0x205cf0
void musicReset_0x205ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("musicReset_0x205ce8");
#endif

    ctx->pc = 0x205ce8u;

    // 0x205ce8: 0x808171e  j           func_205C78
    ctx->pc = 0x205CE8u;
    ctx->pc = 0x205C78u;
    musicRestart_0x205c78(rdram, ctx, runtime); return;
    ctx->pc = 0x205CF0u;
}
