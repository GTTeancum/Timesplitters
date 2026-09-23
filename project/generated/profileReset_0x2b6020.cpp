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

// Function: profileReset
// Address: 0x2b6020 - 0x2b6028
void profileReset_0x2b6020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("profileReset_0x2b6020");
#endif

    ctx->pc = 0x2b6020u;

    // 0x2b6020: 0x80ad7fa  j           func_2B5FE8
    ctx->pc = 0x2B6020u;
    ctx->pc = 0x2B5FE8u;
    profileRestart_0x2b5fe8(rdram, ctx, runtime); return;
    ctx->pc = 0x2B6028u;
}
