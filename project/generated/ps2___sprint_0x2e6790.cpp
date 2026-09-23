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

// Function: __sprint
// Address: 0x2e6790 - 0x2e67d4
void ps2___sprint_0x2e6790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sprint_0x2e6790");
#endif

    switch (ctx->pc) {
        case 0x2e67bcu: goto label_2e67bc;
        default: break;
    }

    ctx->pc = 0x2e6790u;

    // 0x2e6790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e6790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e6794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e6794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e6798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e6798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e679c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e679cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e67a0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2e67a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e67a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E67A4u;
    {
        const bool branch_taken_0x2e67a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E67A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E67A4u;
        // 0x2e67a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e67a4) {
            ctx->pc = 0x2E67B4u;
            goto label_2e67b4;
        }
    }
    ctx->pc = 0x2E67ACu;
    // 0x2e67ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E67ACu;
    {
        const bool branch_taken_0x2e67ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E67B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E67ACu;
        // 0x2e67b0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e67ac) {
            ctx->pc = 0x2E67C4u;
            goto label_2e67c4;
        }
    }
    ctx->pc = 0x2E67B4u;
label_2e67b4:
    // 0x2e67b4: 0xc0badc2  jal         func_2EB708
    ctx->pc = 0x2E67B4u;
    SET_GPR_U32(ctx, 31, 0x2E67BCu);
    ctx->pc = 0x2E67B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E67B4u;
    // 0x2e67b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB708u, 0x2E67B4u, 0x2E67BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E67BCu;
label_2e67bc:
    // 0x2e67bc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e67bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2e67c0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2e67c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2e67c4:
    // 0x2e67c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e67c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e67c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e67c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e67cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E67CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E67D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E67CCu;
        // 0x2e67d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E67CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E67D4u;
}
