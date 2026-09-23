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

// Function: new_iob
// Address: 0x2d3380 - 0x2d33f0
void new_iob_0x2d3380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("new_iob_0x2d3380");
#endif

    switch (ctx->pc) {
        case 0x2d3388u: goto label_2d3388;
        case 0x2d33c0u: goto label_2d33c0;
        default: break;
    }

    ctx->pc = 0x2d3380u;

    // 0x2d3380: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2d3380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2d3384: 0x0  nop
    ctx->pc = 0x2d3384u;
    // NOP
label_2d3388:
    // 0x2d3388: 0x42000039  di
    ctx->pc = 0x2d3388u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x2d338c: 0x40f  sync.p
    ctx->pc = 0x2d338cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d3390: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x2d3390u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x2d3394: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d3394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d3398: 0x0  nop
    ctx->pc = 0x2d3398u;
    // NOP
    // 0x2d339c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D339Cu;
    {
        const bool branch_taken_0x2d339c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D33A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D339Cu;
        // 0x2d33a0: 0x3c0201ff  lui         $v0, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d339c) {
            ctx->pc = 0x2D3388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3388;
        }
    }
    ctx->pc = 0x2D33A4u;
    // 0x2d33a4: 0x24430650  addiu       $v1, $v0, 0x650
    ctx->pc = 0x2d33a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1616));
    // 0x2d33a8: 0x24640100  addiu       $a0, $v1, 0x100
    ctx->pc = 0x2d33a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x2d33ac: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2d33acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d33b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D33B0u;
    {
        const bool branch_taken_0x2d33b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D33B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D33B0u;
        // 0x2d33b4: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d33b0) {
            ctx->pc = 0x2D33E4u;
            goto label_2d33e4;
        }
    }
    ctx->pc = 0x2D33B8u;
    // 0x2d33b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d33bc: 0x0  nop
    ctx->pc = 0x2d33bcu;
    // NOP
label_2d33c0:
    // 0x2d33c0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D33C0u;
    {
        const bool branch_taken_0x2d33c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d33c0) {
            ctx->pc = 0x2D33C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D33C0u;
            // 0x2d33c4: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D33D8u;
            goto label_2d33d8;
        }
    }
    ctx->pc = 0x2D33C8u;
    // 0x2d33c8: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2d33c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x2d33cc: 0x42000038  ei
    ctx->pc = 0x2d33ccu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2d33d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D33D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D33D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D33D0u;
        // 0x2d33d4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D33D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D33D8u;
label_2d33d8:
    // 0x2d33d8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2d33d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d33dc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D33DCu;
    {
        const bool branch_taken_0x2d33dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d33dc) {
            ctx->pc = 0x2D33E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D33DCu;
            // 0x2d33e0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D33C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d33c0;
        }
    }
    ctx->pc = 0x2D33E4u;
label_2d33e4:
    // 0x2d33e4: 0x42000038  ei
    ctx->pc = 0x2d33e4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2d33e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D33E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D33ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D33E8u;
        // 0x2d33ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D33E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D33F0u;
}
