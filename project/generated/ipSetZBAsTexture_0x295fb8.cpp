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

// Function: ipSetZBAsTexture
// Address: 0x295fb8 - 0x295fc0
void ipSetZBAsTexture_0x295fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ipSetZBAsTexture_0x295fb8");
#endif

    ctx->pc = 0x295fb8u;

    // 0x295fb8: 0x80a5774  j           func_295DD0
    ctx->pc = 0x295FB8u;
    ctx->pc = 0x295FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295FB8u;
    // 0x295fbc: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DD0u;
    ipSetScreenAsTexture_0x295dd0(rdram, ctx, runtime); return;
    ctx->pc = 0x295FC0u;
}
