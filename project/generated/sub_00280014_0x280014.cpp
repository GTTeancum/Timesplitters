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

// Function: sub_00280014
// Address: 0x280014 - 0x280018
void sub_00280014_0x280014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280014_0x280014");
#endif

    ctx->pc = 0x280014u;

    // 0x280014: 0x0  nop
    ctx->pc = 0x280014u;
    // NOP
    ctx->pc = 0x280018u;
}
