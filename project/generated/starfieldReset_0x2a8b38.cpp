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

// Function: starfieldReset
// Address: 0x2a8b38 - 0x2a8b40
void starfieldReset_0x2a8b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("starfieldReset_0x2a8b38");
#endif

    ctx->pc = 0x2a8b38u;

    // 0x2a8b38: 0x80aa1de  j           func_2A8778
    ctx->pc = 0x2A8B38u;
    ctx->pc = 0x2A8778u;
    starfieldRestart_0x2a8778(rdram, ctx, runtime); return;
    ctx->pc = 0x2A8B40u;
}
