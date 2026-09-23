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

// Function: fxSelectCharFlashInit
// Address: 0x238e00 - 0x238e34
void fxSelectCharFlashInit_0x238e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fxSelectCharFlashInit_0x238e00");
#endif

    ctx->pc = 0x238e00u;

    // 0x238e00: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x238e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x238e04: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x238e04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x238e08: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x238e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x238e0c: 0x24a512b8  addiu       $a1, $a1, 0x12B8
    ctx->pc = 0x238e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4792));
    // 0x238e10: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x238e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x238e14: 0x246312c8  addiu       $v1, $v1, 0x12C8
    ctx->pc = 0x238e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4808));
    // 0x238e18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238e1c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x238e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x238e20: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x238e20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x238e24: 0x24040092  addiu       $a0, $zero, 0x92
    ctx->pc = 0x238e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    // 0x238e28: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x238e28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x238e2c: 0x8081546  j           func_205518
    ctx->pc = 0x238E2Cu;
    ctx->pc = 0x238E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E2Cu;
    // 0x238e30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    soundStart_0x205518(rdram, ctx, runtime); return;
    ctx->pc = 0x238E34u;
}
