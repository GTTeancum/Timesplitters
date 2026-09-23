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

// Function: lockupalarm
// Address: 0x200f10 - 0x200f1c
void lockupalarm_0x200f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lockupalarm_0x200f10");
#endif

    ctx->pc = 0x200f10u;

    // 0x200f10: 0x8f849338  lw          $a0, -0x6CC8($gp)
    ctx->pc = 0x200f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939448)));
    // 0x200f14: 0x80b4054  j           func_2D0150
    ctx->pc = 0x200F14u;
    ctx->pc = 0x200F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F14u;
    // 0x200f18: 0xaf869370  sw          $a2, -0x6C90($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939504), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0150u;
    iSignalSema_0x2d0150(rdram, ctx, runtime); return;
    ctx->pc = 0x200F1Cu;
}
