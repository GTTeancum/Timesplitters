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

// Function: preloadPass2AddTexNum
// Address: 0x21c8d0 - 0x21c904
void preloadPass2AddTexNum_0x21c8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("preloadPass2AddTexNum_0x21c8d0");
#endif

    ctx->pc = 0x21c8d0u;

    // 0x21c8d0: 0x8f87b6ec  lw          $a3, -0x4914($gp)
    ctx->pc = 0x21c8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948588)));
    // 0x21c8d4: 0x3c0301fb  lui         $v1, 0x1FB
    ctx->pc = 0x21c8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)507 << 16));
    // 0x21c8d8: 0x24637b40  addiu       $v1, $v1, 0x7B40
    ctx->pc = 0x21c8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31552));
    // 0x21c8dc: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x21c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x21c8e0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x21c8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x21c8e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21c8e8: 0xaf87b6ec  sw          $a3, -0x4914($gp)
    ctx->pc = 0x21c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948588), GPR_U32(ctx, 7));
    // 0x21c8ec: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x21c8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x21c8f0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x21c8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x21c8f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21c8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c8f8: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x21c8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x21c8fc: 0x8087210  j           func_21C840
    ctx->pc = 0x21C8FCu;
    ctx->pc = 0x21C900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C8FCu;
    // 0x21c900: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C840u;
    preloadPass2Insert_0x21c840(rdram, ctx, runtime); return;
    ctx->pc = 0x21C904u;
}
