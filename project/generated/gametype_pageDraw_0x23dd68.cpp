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

// Function: gametype_pageDraw
// Address: 0x23dd68 - 0x23dd70
void gametype_pageDraw_0x23dd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gametype_pageDraw_0x23dd68");
#endif

    ctx->pc = 0x23dd68u;

    // 0x23dd68: 0x808c1a2  j           func_230688
    ctx->pc = 0x23DD68u;
    ctx->pc = 0x230688u;
    pagebackgroundGfx_0x230688(rdram, ctx, runtime); return;
    ctx->pc = 0x23DD70u;
}
