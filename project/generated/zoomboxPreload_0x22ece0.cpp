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

// Function: zoomboxPreload
// Address: 0x22ece0 - 0x22ecf0
void zoomboxPreload_0x22ece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zoomboxPreload_0x22ece0");
#endif

    ctx->pc = 0x22ece0u;

    // 0x22ece0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x22ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x22ece4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22ece4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ece8: 0x80870fa  j           func_21C3E8
    ctx->pc = 0x22ECE8u;
    ctx->pc = 0x22ECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ECE8u;
    // 0x22ecec: 0x24842e60  addiu       $a0, $a0, 0x2E60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    preloadAddTexName_0x21c3e8(rdram, ctx, runtime); return;
    ctx->pc = 0x22ECF0u;
}
