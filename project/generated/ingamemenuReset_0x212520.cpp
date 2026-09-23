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

// Function: ingamemenuReset
// Address: 0x212520 - 0x212538
void ingamemenuReset_0x212520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ingamemenuReset_0x212520");
#endif

    ctx->pc = 0x212520u;

    // 0x212520: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x212520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x212524: 0x2463aa70  addiu       $v1, $v1, -0x5590
    ctx->pc = 0x212524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945392));
    // 0x212528: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x212528u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x32AA7Au));
    // 0x21252c: 0x34420240  ori         $v0, $v0, 0x240
    ctx->pc = 0x21252cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)576);
    // 0x212530: 0x808492a  j           func_2124A8
    ctx->pc = 0x212530u;
    ctx->pc = 0x212534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212530u;
    // 0x212534: 0xa462000a  sh          $v0, 0xA($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124A8u;
    ingamemenuRestart_0x2124a8(rdram, ctx, runtime); return;
    ctx->pc = 0x212538u;
}
