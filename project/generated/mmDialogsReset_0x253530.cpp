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

// Function: mmDialogsReset
// Address: 0x253530 - 0x253568
void mmDialogsReset_0x253530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDialogsReset_0x253530");
#endif

    switch (ctx->pc) {
        case 0x253558u: goto label_253558;
        default: break;
    }

    ctx->pc = 0x253530u;

    // 0x253530: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x253530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x253534: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253534u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253538: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x253538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25353c: 0x8c444050  lw          $a0, 0x4050($v0)
    ctx->pc = 0x25353cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FC4050u));
    // 0x253540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253544: 0xaf83a224  sw          $v1, -0x5DDC($gp)
    ctx->pc = 0x253544u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943268), GPR_U32(ctx, 3));
    // 0x253548: 0xaf80b86c  sw          $zero, -0x4794($gp)
    ctx->pc = 0x253548u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948972), GPR_U32(ctx, 0));
    // 0x25354c: 0xa380a1f8  sb          $zero, -0x5E08($gp)
    ctx->pc = 0x25354cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943224), (uint8_t)GPR_U32(ctx, 0));
    // 0x253550: 0xc0918c6  jal         func_246318
    ctx->pc = 0x253550u;
    SET_GPR_U32(ctx, 31, 0x253558u);
    ctx->pc = 0x253554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253550u;
    // 0x253554: 0xa380a1f9  sb          $zero, -0x5E07($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943225), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246318u, 0x253550u, 0x253558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253558u;
label_253558:
    // 0x253558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25355c: 0xaf80b870  sw          $zero, -0x4790($gp)
    ctx->pc = 0x25355cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948976), GPR_U32(ctx, 0));
    // 0x253560: 0x3e00008  jr          $ra
    ctx->pc = 0x253560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253560u;
        // 0x253564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253568u;
}
