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

// Function: propResetWallMem
// Address: 0x266d98 - 0x266da4
void propResetWallMem_0x266d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propResetWallMem_0x266d98");
#endif

    ctx->pc = 0x266d98u;

    // 0x266d98: 0x3c0201fd  lui         $v0, 0x1FD
    ctx->pc = 0x266d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)509 << 16));
    // 0x266d9c: 0x8099b58  j           func_266D60
    ctx->pc = 0x266D9Cu;
    ctx->pc = 0x266DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266D9Cu;
    // 0x266da0: 0xac4038c0  sw          $zero, 0x38C0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 14528), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D60u;
    propRestartWallMem_0x266d60(rdram, ctx, runtime); return;
    ctx->pc = 0x266DA4u;
}
