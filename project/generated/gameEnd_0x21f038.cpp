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

// Function: gameEnd
// Address: 0x21f038 - 0x21f044
void gameEnd_0x21f038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gameEnd_0x21f038");
#endif

    ctx->pc = 0x21f038u;

    // 0x21f038: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21f038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21f03c: 0x8089844  j           func_226110
    ctx->pc = 0x21F03Cu;
    ctx->pc = 0x21F040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F03Cu;
    // 0x21f040: 0xaf829dac  sw          $v0, -0x6254($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226110u;
    lvEnd_0x226110(rdram, ctx, runtime); return;
    ctx->pc = 0x21F044u;
}
