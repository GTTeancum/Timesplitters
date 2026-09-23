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

// Function: pageSetTitle
// Address: 0x2301f8 - 0x230214
void pageSetTitle_0x2301f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pageSetTitle_0x2301f8");
#endif

    ctx->pc = 0x2301f8u;

    // 0x2301f8: 0x8f83b73c  lw          $v1, -0x48C4($gp)
    ctx->pc = 0x2301f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948668)));
    // 0x2301fc: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x2301fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x230200: 0x24421308  addiu       $v0, $v0, 0x1308
    ctx->pc = 0x230200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
    // 0x230204: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x230204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x230208: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x230208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23020c: 0x808c02e  j           func_2300B8
    ctx->pc = 0x23020Cu;
    ctx->pc = 0x230210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23020Cu;
    // 0x230210: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2300B8u;
    makemtreeTitle_0x2300b8(rdram, ctx, runtime); return;
    ctx->pc = 0x230214u;
}
