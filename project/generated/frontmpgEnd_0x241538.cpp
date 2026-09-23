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

// Function: frontmpgEnd
// Address: 0x241538 - 0x241540
void frontmpgEnd_0x241538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontmpgEnd_0x241538");
#endif

    ctx->pc = 0x241538u;

    // 0x241538: 0x808dd44  j           func_237510
    ctx->pc = 0x241538u;
    ctx->pc = 0x237510u;
    resetchrprops_0x237510(rdram, ctx, runtime); return;
    ctx->pc = 0x241540u;
}
