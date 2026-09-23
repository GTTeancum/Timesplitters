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

// Function: setcheat2
// Address: 0x203690 - 0x203698
void setcheat2_0x203690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setcheat2_0x203690");
#endif

    ctx->pc = 0x203690u;

    // 0x203690: 0x8080d8a  j           func_203628
    ctx->pc = 0x203690u;
    ctx->pc = 0x203694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203690u;
    // 0x203694: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203628u;
    set_cheat_0x203628(rdram, ctx, runtime); return;
    ctx->pc = 0x203698u;
}
