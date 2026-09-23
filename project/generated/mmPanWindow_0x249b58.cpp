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

// Function: mmPanWindow
// Address: 0x249b58 - 0x249b8c
void mmPanWindow_0x249b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmPanWindow_0x249b58");
#endif

    ctx->pc = 0x249b58u;

    // 0x249b58: 0x8f82a168  lw          $v0, -0x5E98($gp)
    ctx->pc = 0x249b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x249b5c: 0x8f87a16c  lw          $a3, -0x5E94($gp)
    ctx->pc = 0x249b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x249b60: 0x8f86a178  lw          $a2, -0x5E88($gp)
    ctx->pc = 0x249b60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943096)));
    // 0x249b64: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x249b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x249b68: 0x8f83a17c  lw          $v1, -0x5E84($gp)
    ctx->pc = 0x249b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943100)));
    // 0x249b6c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x249b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x249b70: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x249b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x249b74: 0xaf82a168  sw          $v0, -0x5E98($gp)
    ctx->pc = 0x249b74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943080), GPR_U32(ctx, 2));
    // 0x249b78: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x249b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x249b7c: 0xaf86a170  sw          $a2, -0x5E90($gp)
    ctx->pc = 0x249b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943088), GPR_U32(ctx, 6));
    // 0x249b80: 0xaf83a174  sw          $v1, -0x5E8C($gp)
    ctx->pc = 0x249b80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943092), GPR_U32(ctx, 3));
    // 0x249b84: 0x3e00008  jr          $ra
    ctx->pc = 0x249B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B84u;
        // 0x249b88: 0xaf87a16c  sw          $a3, -0x5E94($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943084), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249B8Cu;
}
