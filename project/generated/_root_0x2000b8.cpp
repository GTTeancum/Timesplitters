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

// Function: _root
// Address: 0x2000b8 - 0x2000c0
void _root_0x2000b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_root_0x2000b8");
#endif

    ctx->pc = 0x2000b8u;

    // 0x2000b8: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2000b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2000bc: 0xc  syscall     0
    ctx->pc = 0x2000bcu;
    ctx->pc = 0x2000C0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x2000c0u;
}
