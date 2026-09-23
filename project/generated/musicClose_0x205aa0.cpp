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

// Function: musicClose
// Address: 0x205aa0 - 0x205ad0
void musicClose_0x205aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("musicClose_0x205aa0");
#endif

    switch (ctx->pc) {
        case 0x205ac0u: goto label_205ac0;
        default: break;
    }

    ctx->pc = 0x205aa0u;

    // 0x205aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205aa4: 0x8f829b30  lw          $v0, -0x64D0($gp)
    ctx->pc = 0x205aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941488)));
    // 0x205aa8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x205AA8u;
    {
        const bool branch_taken_0x205aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AA8u;
        // 0x205aac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205aa8) {
            ctx->pc = 0x205AC0u;
            goto label_205ac0;
        }
    }
    ctx->pc = 0x205AB0u;
    // 0x205ab0: 0xaf809b30  sw          $zero, -0x64D0($gp)
    ctx->pc = 0x205ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941488), GPR_U32(ctx, 0));
    // 0x205ab4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x205ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x205ab8: 0xc08177a  jal         func_205DE8
    ctx->pc = 0x205AB8u;
    SET_GPR_U32(ctx, 31, 0x205AC0u);
    ctx->pc = 0x205ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205AB8u;
    // 0x205abc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205DE8u, 0x205AB8u, 0x205AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205AC0u;
label_205ac0:
    // 0x205ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205ac4: 0xaf809b28  sw          $zero, -0x64D8($gp)
    ctx->pc = 0x205ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941480), GPR_U32(ctx, 0));
    // 0x205ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x205AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AC8u;
        // 0x205acc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205AD0u;
}
