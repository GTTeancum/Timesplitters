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

// Function: VSync2
// Address: 0x2d05c8 - 0x2d0620
void VSync2_0x2d05c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VSync2_0x2d05c8");
#endif

    switch (ctx->pc) {
        case 0x2d05dcu: goto label_2d05dc;
        case 0x2d05f0u: goto label_2d05f0;
        default: break;
    }

    ctx->pc = 0x2d05c8u;

    // 0x2d05c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d05c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d05cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d05ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d05d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d05d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d05d4: 0xc0b4124  jal         func_2D0490
    ctx->pc = 0x2D05D4u;
    SET_GPR_U32(ctx, 31, 0x2D05DCu);
    ctx->pc = 0x2D05D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D05D4u;
    // 0x2d05d8: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0490u, 0x2D05D4u, 0x2D05DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D05DCu;
label_2d05dc:
    // 0x2d05dc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2d05dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2d05e0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2d05e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2d05e4: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x2d05e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x2d05e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d05ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d05ecu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 2));
label_2d05f0:
    // 0x2d05f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d05f4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2d05f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2d05f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D05F8u;
    {
        const bool branch_taken_0x2d05f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D05FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05F8u;
        // 0x2d05fc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d05f8) {
            ctx->pc = 0x2D060Cu;
            goto label_2d060c;
        }
    }
    ctx->pc = 0x2D0600u;
    // 0x2d0600: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d0600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0604: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D0604u;
    {
        const bool branch_taken_0x2d0604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0604u;
        // 0x2d0608: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0604) {
            ctx->pc = 0x2D05F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d05f0;
        }
    }
    ctx->pc = 0x2D060Cu;
label_2d060c:
    // 0x2d060c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d060cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0610: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d0610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d0614: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x2d0614u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d0618: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0618u;
        // 0x2d061c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0620u;
}
