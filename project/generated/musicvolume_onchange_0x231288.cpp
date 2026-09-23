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

// Function: musicvolume_onchange
// Address: 0x231288 - 0x231290
void musicvolume_onchange_0x231288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("musicvolume_onchange_0x231288");
#endif

    ctx->pc = 0x231288u;

    // 0x231288: 0x80816fe  j           func_205BF8
    ctx->pc = 0x231288u;
    ctx->pc = 0x205BF8u;
    musicSetFrontEndVolume_0x205bf8(rdram, ctx, runtime); return;
    ctx->pc = 0x231290u;
}
