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

// Function: pageSet
// Address: 0x230218 - 0x230234
void pageSet_0x230218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pageSet_0x230218");
#endif

    ctx->pc = 0x230218u;

    // 0x230218: 0x8f83b73c  lw          $v1, -0x48C4($gp)
    ctx->pc = 0x230218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948668)));
    // 0x23021c: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23021cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x230220: 0x24421308  addiu       $v0, $v0, 0x1308
    ctx->pc = 0x230220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
    // 0x230224: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x230224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x230228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x230228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23022c: 0x808c07e  j           func_2301F8
    ctx->pc = 0x23022Cu;
    ctx->pc = 0x230230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23022Cu;
    // 0x230230: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2301F8u;
    pageSetTitle_0x2301f8(rdram, ctx, runtime); return;
    ctx->pc = 0x230234u;
}
