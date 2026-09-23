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

// Function: pageIn
// Address: 0x2301c0 - 0x2301f8
void pageIn_0x2301c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pageIn_0x2301c0");
#endif

    ctx->pc = 0x2301c0u;

    // 0x2301c0: 0x8f85b73c  lw          $a1, -0x48C4($gp)
    ctx->pc = 0x2301c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948668)));
    // 0x2301c4: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x2301c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x2301c8: 0x94870004  lhu         $a3, 0x4($a0)
    ctx->pc = 0x2301c8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2301cc: 0x24421308  addiu       $v0, $v0, 0x1308
    ctx->pc = 0x2301ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
    // 0x2301d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2301d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2301d4: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2301d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2301d8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2301d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2301dc: 0xaf85b73c  sw          $a1, -0x48C4($gp)
    ctx->pc = 0x2301dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948668), GPR_U32(ctx, 5));
    // 0x2301e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2301e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2301e4: 0xa4c70008  sh          $a3, 0x8($a2)
    ctx->pc = 0x2301e4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 7));
    // 0x2301e8: 0x2404008f  addiu       $a0, $zero, 0x8F
    ctx->pc = 0x2301e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x2301ec: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2301ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2301f0: 0x8081546  j           func_205518
    ctx->pc = 0x2301F0u;
    ctx->pc = 0x2301F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2301F0u;
    // 0x2301f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    soundStart_0x205518(rdram, ctx, runtime); return;
    ctx->pc = 0x2301F8u;
}
