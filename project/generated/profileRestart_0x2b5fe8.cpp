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

// Function: profileRestart
// Address: 0x2b5fe8 - 0x2b601c
void profileRestart_0x2b5fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("profileRestart_0x2b5fe8");
#endif

    switch (ctx->pc) {
        case 0x2b5ff8u: goto label_2b5ff8;
        default: break;
    }

    ctx->pc = 0x2b5fe8u;

    // 0x2b5fe8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b5fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2b5fec: 0x244359c0  addiu       $v1, $v0, 0x59C0
    ctx->pc = 0x2b5fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 22976));
    // 0x2b5ff0: 0x24640230  addiu       $a0, $v1, 0x230
    ctx->pc = 0x2b5ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 560));
    // 0x2b5ff4: 0x0  nop
    ctx->pc = 0x2b5ff4u;
    // NOP
label_2b5ff8:
    // 0x2b5ff8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2b5ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2b5ffc: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x2b5ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x2b6000: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x2b6000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x2b6004: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2b6004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2b6008: 0x0  nop
    ctx->pc = 0x2b6008u;
    // NOP
    // 0x2b600c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B600Cu;
    {
        const bool branch_taken_0x2b600c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b600c) {
            ctx->pc = 0x2B5FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5ff8;
        }
    }
    ctx->pc = 0x2B6014u;
    // 0x2b6014: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B601Cu;
}
