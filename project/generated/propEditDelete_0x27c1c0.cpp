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

// Function: propEditDelete
// Address: 0x27c1c0 - 0x27c1c8
void propEditDelete_0x27c1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propEditDelete_0x27c1c0");
#endif

    ctx->pc = 0x27c1c0u;

    // 0x27c1c0: 0x809a4d0  j           func_269340
    ctx->pc = 0x27C1C0u;
    ctx->pc = 0x269340u;
    propDelete_0x269340(rdram, ctx, runtime); return;
    ctx->pc = 0x27C1C8u;
}
