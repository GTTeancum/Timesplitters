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

// Function: playerDirtyPosReset
// Address: 0x280100 - 0x280178
void playerDirtyPosReset_0x280100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerDirtyPosReset_0x280100");
#endif

    switch (ctx->pc) {
        case 0x280130u: goto label_280130;
        case 0x280148u: goto label_280148;
        default: break;
    }

    ctx->pc = 0x280100u;

    // 0x280100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x280100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x280104: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x280104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x280108: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x280108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28010c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28010cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x280110: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x280110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280114: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x280114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x280118: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x280118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28011c: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28011Cu;
    {
        const bool branch_taken_0x28011c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x280120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28011Cu;
        // 0x280120: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28011c) {
            ctx->pc = 0x28015Cu;
            goto label_28015c;
        }
    }
    ctx->pc = 0x280124u;
    // 0x280124: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x280124u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280128: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x280128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28012c: 0x0  nop
    ctx->pc = 0x28012cu;
    // NOP
label_280130:
    // 0x280130: 0x8f90b230  lw          $s0, -0x4DD0($gp)
    ctx->pc = 0x280130u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x280134: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x280134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x280138: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x280138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x28013c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28013cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280140: 0xc09fc4e  jal         func_27F138
    ctx->pc = 0x280140u;
    SET_GPR_U32(ctx, 31, 0x280148u);
    ctx->pc = 0x280144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280140u;
    // 0x280144: 0x2652071c  addiu       $s2, $s2, 0x71C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1820));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F138u, 0x280140u, 0x280148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280148u;
label_280148:
    // 0x280148: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x280148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x28014c: 0xae130154  sw          $s3, 0x154($s0)
    ctx->pc = 0x28014cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 19));
    // 0x280150: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x280150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x280154: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x280154u;
    {
        const bool branch_taken_0x280154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280154u;
        // 0x280158: 0xae130124  sw          $s3, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280154) {
            ctx->pc = 0x280130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280130;
        }
    }
    ctx->pc = 0x28015Cu;
label_28015c:
    // 0x28015c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28015cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x280160: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x280160u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280164: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x280164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280168: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x280168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28016c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28016cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280170: 0x3e00008  jr          $ra
    ctx->pc = 0x280170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280170u;
        // 0x280174: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280178u;
}
