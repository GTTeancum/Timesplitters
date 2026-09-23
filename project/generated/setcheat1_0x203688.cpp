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

// Function: setcheat1
// Address: 0x203688 - 0x203690
void setcheat1_0x203688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setcheat1_0x203688");
#endif

    ctx->pc = 0x203688u;

    // 0x203688: 0x8080d8a  j           func_203628
    ctx->pc = 0x203688u;
    ctx->pc = 0x20368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203688u;
    // 0x20368c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203628u;
    set_cheat_0x203628(rdram, ctx, runtime); return;
    ctx->pc = 0x203690u;
}
