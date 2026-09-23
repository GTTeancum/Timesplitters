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

// Function: _cleanup_r
// Address: 0x2e48d0 - 0x2e48dc
void _cleanup_r_0x2e48d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_cleanup_r_0x2e48d0");
#endif

    ctx->pc = 0x2e48d0u;

    // 0x2e48d0: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2e48d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2e48d4: 0x80b926e  j           func_2E49B8
    ctx->pc = 0x2E48D4u;
    ctx->pc = 0x2E48D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E48D4u;
    // 0x2e48d8: 0x24a5b050  addiu       $a1, $a1, -0x4FB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E49B8u;
    _fwalk_0x2e49b8(rdram, ctx, runtime); return;
    ctx->pc = 0x2E48DCu;
}
