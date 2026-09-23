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

// Function: ilinkTick
// Address: 0x2cddd0 - 0x2cddd8
void ilinkTick_0x2cddd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ilinkTick_0x2cddd0");
#endif

    ctx->pc = 0x2cddd0u;

    // 0x2cddd0: 0x8080dfe  j           func_2037F8
    ctx->pc = 0x2CDDD0u;
    ctx->pc = 0x2037F8u;
    joyTick_0x2037f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2CDDD8u;
}
