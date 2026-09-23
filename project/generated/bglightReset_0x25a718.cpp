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

// Function: bglightReset
// Address: 0x25a718 - 0x25a720
void bglightReset_0x25a718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bglightReset_0x25a718");
#endif

    ctx->pc = 0x25a718u;

    // 0x25a718: 0x80969c4  j           func_25A710
    ctx->pc = 0x25A718u;
    ctx->pc = 0x25A71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A718u;
    // 0x25a71c: 0xaf80a298  sw          $zero, -0x5D68($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943384), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A710u;
    bglightRestart_0x25a710(rdram, ctx, runtime); return;
    ctx->pc = 0x25A720u;
}
