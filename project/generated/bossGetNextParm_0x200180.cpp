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

// Function: bossGetNextParm
// Address: 0x200180 - 0x2001c4
void bossGetNextParm_0x200180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bossGetNextParm_0x200180");
#endif

    switch (ctx->pc) {
        case 0x200190u: goto label_200190;
        default: break;
    }

    ctx->pc = 0x200180u;

    // 0x200180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200188: 0xc080050  jal         func_200140
    ctx->pc = 0x200188u;
    SET_GPR_U32(ctx, 31, 0x200190u);
    ctx->pc = 0x200140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200140u, 0x200188u, 0x200190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200190u;
label_200190:
    // 0x200190: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x200190u;
    {
        const bool branch_taken_0x200190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200190u;
        // 0x200194: 0x8f82b610  lw          $v0, -0x49F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200190) {
            ctx->pc = 0x2001B4u;
            goto label_2001b4;
        }
    }
    ctx->pc = 0x200198u;
    // 0x200198: 0x8f8493b4  lw          $a0, -0x6C4C($gp)
    ctx->pc = 0x200198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939572)));
    // 0x20019c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20019cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2001a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2001a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2001a4: 0xaf82b610  sw          $v0, -0x49F0($gp)
    ctx->pc = 0x2001a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948368), GPR_U32(ctx, 2));
    // 0x2001a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2001a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2001ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2001ACu;
    {
        const bool branch_taken_0x2001ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2001B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001ACu;
        // 0x2001b0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001ac) {
            ctx->pc = 0x2001B8u;
            goto label_2001b8;
        }
    }
    ctx->pc = 0x2001B4u;
label_2001b4:
    // 0x2001b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2001b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2001b8:
    // 0x2001b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2001b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2001bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2001BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2001C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001BCu;
        // 0x2001c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2001BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2001C4u;
}
