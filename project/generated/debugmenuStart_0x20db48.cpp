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

// Function: debugmenuStart
// Address: 0x20db48 - 0x20db5c
void debugmenuStart_0x20db48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("debugmenuStart_0x20db48");
#endif

    ctx->pc = 0x20db48u;

    // 0x20db48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20db48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20db4c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x20db4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x20db50: 0xaf829d14  sw          $v0, -0x62EC($gp)
    ctx->pc = 0x20db50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941972), GPR_U32(ctx, 2));
    // 0x20db54: 0x8083338  j           func_20CCE0
    ctx->pc = 0x20DB54u;
    ctx->pc = 0x20DB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DB54u;
    // 0x20db58: 0x24849aa0  addiu       $a0, $a0, -0x6560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CCE0u;
    menuStart_0x20cce0(rdram, ctx, runtime); return;
    ctx->pc = 0x20DB5Cu;
}
