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

// Function: mcardMake
// Address: 0x207a60 - 0x207a68
void mcardMake_0x207a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcardMake_0x207a60");
#endif

    ctx->pc = 0x207a60u;

    // 0x207a60: 0x80b71fa  j           func_2DC7E8
    ctx->pc = 0x207A60u;
    ctx->pc = 0x2DC7E8u;
    sceMcInit_0x2dc7e8(rdram, ctx, runtime); return;
    ctx->pc = 0x207A68u;
}
