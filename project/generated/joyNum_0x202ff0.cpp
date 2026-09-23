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

// Function: joyNum
// Address: 0x202ff0 - 0x203030
void joyNum_0x202ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("joyNum_0x202ff0");
#endif

    switch (ctx->pc) {
        case 0x203008u: goto label_203008;
        default: break;
    }

    ctx->pc = 0x202ff0u;

    // 0x202ff0: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x202ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x202ff4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x202ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ff8: 0x2442c740  addiu       $v0, $v0, -0x38C0
    ctx->pc = 0x202ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952768));
    // 0x202ffc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x202ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x203000: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x203000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x203004: 0x0  nop
    ctx->pc = 0x203004u;
    // NOP
label_203008:
    // 0x203008: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x203008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20300c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x20300cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x203010: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x203010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x203014: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x203014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x203018: 0x38420063  xori        $v0, $v0, 0x63
    ctx->pc = 0x203018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)99);
    // 0x20301c: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x20301cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x203020: 0x4c1fff9  bgez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x203020u;
    {
        const bool branch_taken_0x203020 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x203020) {
            ctx->pc = 0x203008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203008;
        }
    }
    ctx->pc = 0x203028u;
    // 0x203028: 0x3e00008  jr          $ra
    ctx->pc = 0x203028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203028u;
        // 0x20302c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203030u;
}
