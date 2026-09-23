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

// Function: story_pageGfx
// Address: 0x211990 - 0x2119c8
void story_pageGfx_0x211990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("story_pageGfx_0x211990");
#endif

    ctx->pc = 0x211990u;

    // 0x211990: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x211990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x211994: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x211994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x211998: 0x8c43c4f8  lw          $v1, -0x3B08($v0)
    ctx->pc = 0x211998u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x21199c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x21199cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2119a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2119A0u;
    {
        const bool branch_taken_0x2119a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2119A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119A0u;
        // 0x2119a4: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2119a0) {
            ctx->pc = 0x2119C0u;
            goto label_2119c0;
        }
    }
    ctx->pc = 0x2119A8u;
    // 0x2119a8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2119a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2119ac: 0x8c430128  lw          $v1, 0x128($v0)
    ctx->pc = 0x2119acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x2119b0: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2119B0u;
    {
        const bool branch_taken_0x2119b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2119b0) {
            ctx->pc = 0x2119C0u;
            goto label_2119c0;
        }
    }
    ctx->pc = 0x2119B8u;
    // 0x2119b8: 0x8084434  j           func_2110D0
    ctx->pc = 0x2119B8u;
    ctx->pc = 0x2110D0u;
    drawStoryCompleted_0x2110d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2119C0u;
label_2119c0:
    // 0x2119c0: 0x808458c  j           func_211630
    ctx->pc = 0x2119C0u;
    ctx->pc = 0x211630u;
    drawStoryNotCompleted_0x211630(rdram, ctx, runtime); return;
    ctx->pc = 0x2119C8u;
}
