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

// Function: nplayers_pageGfx
// Address: 0x23fd68 - 0x23fd70
void nplayers_pageGfx_0x23fd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("nplayers_pageGfx_0x23fd68");
#endif

    ctx->pc = 0x23fd68u;

    // 0x23fd68: 0x808c1a2  j           func_230688
    ctx->pc = 0x23FD68u;
    ctx->pc = 0x230688u;
    pagebackgroundGfx_0x230688(rdram, ctx, runtime); return;
    ctx->pc = 0x23FD70u;
}
