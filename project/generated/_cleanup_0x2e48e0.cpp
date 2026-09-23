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

// Function: _cleanup
// Address: 0x2e48e0 - 0x2e48ec
void _cleanup_0x2e48e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_cleanup_0x2e48e0");
#endif

    ctx->pc = 0x2e48e0u;

    // 0x2e48e0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2e48e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2e48e4: 0x80b9234  j           func_2E48D0
    ctx->pc = 0x2E48E4u;
    ctx->pc = 0x2E48E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E48E4u;
    // 0x2e48e8: 0x8c44330c  lw          $a0, 0x330C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E48D0u;
    _cleanup_r_0x2e48d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2E48ECu;
}
