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

// Function: gameLevelCompleted
// Address: 0x21d348 - 0x21d3d0
void gameLevelCompleted_0x21d348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gameLevelCompleted_0x21d348");
#endif

    switch (ctx->pc) {
        case 0x21d358u: goto label_21d358;
        case 0x21d368u: goto label_21d368;
        case 0x21d378u: goto label_21d378;
        case 0x21d380u: goto label_21d380;
        case 0x21d3a8u: goto label_21d3a8;
        case 0x21d3b0u: goto label_21d3b0;
        default: break;
    }

    ctx->pc = 0x21d348u;

    // 0x21d348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d34c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21d34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21d350: 0xc087336  jal         func_21CCD8
    ctx->pc = 0x21D350u;
    SET_GPR_U32(ctx, 31, 0x21D358u);
    ctx->pc = 0x21D354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D350u;
    // 0x21d354: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CCD8u, 0x21D350u, 0x21D358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D358u;
label_21d358:
    // 0x21d358: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D358u;
    {
        const bool branch_taken_0x21d358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D358u;
        // 0x21d35c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d358) {
            ctx->pc = 0x21D36Cu;
            goto label_21d36c;
        }
    }
    ctx->pc = 0x21D360u;
    // 0x21d360: 0xc090550  jal         func_241540
    ctx->pc = 0x21D360u;
    SET_GPR_U32(ctx, 31, 0x21D368u);
    ctx->pc = 0x21D364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D360u;
    // 0x21d364: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241540u, 0x21D360u, 0x21D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D368u;
label_21d368:
    // 0x21d368: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21d368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21d36c:
    // 0x21d36c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21d36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d370: 0xc0ada06  jal         func_2B6818
    ctx->pc = 0x21D370u;
    SET_GPR_U32(ctx, 31, 0x21D378u);
    ctx->pc = 0x21D374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D370u;
    // 0x21d374: 0xaf829dac  sw          $v0, -0x6254($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6818u, 0x21D370u, 0x21D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D378u;
label_21d378:
    // 0x21d378: 0xc087426  jal         func_21D098
    ctx->pc = 0x21D378u;
    SET_GPR_U32(ctx, 31, 0x21D380u);
    ctx->pc = 0x21D098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D098u, 0x21D378u, 0x21D380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D380u;
label_21d380:
    // 0x21d380: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21d380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21d384: 0x8c42c4f0  lw          $v0, -0x3B10($v0)
    ctx->pc = 0x21d384u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x21d388: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x21d388u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x21d38c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x21D38Cu;
    {
        const bool branch_taken_0x21d38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D38Cu;
        // 0x21d390: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d38c) {
            ctx->pc = 0x21D3C4u;
            goto label_21d3c4;
        }
    }
    ctx->pc = 0x21D394u;
    // 0x21d394: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21D394u;
    {
        const bool branch_taken_0x21d394 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D394u;
        // 0x21d398: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d394) {
            ctx->pc = 0x21D3C4u;
            goto label_21d3c4;
        }
    }
    ctx->pc = 0x21D39Cu;
    // 0x21d39c: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21D39Cu;
    {
        const bool branch_taken_0x21d39c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D39Cu;
        // 0x21d3a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d39c) {
            ctx->pc = 0x21D3C4u;
            goto label_21d3c4;
        }
    }
    ctx->pc = 0x21D3A4u;
    // 0x21d3a4: 0x0  nop
    ctx->pc = 0x21d3a4u;
    // NOP
label_21d3a8:
    // 0x21d3a8: 0xc084a4c  jal         func_212930
    ctx->pc = 0x21D3A8u;
    SET_GPR_U32(ctx, 31, 0x21D3B0u);
    ctx->pc = 0x21D3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D3A8u;
    // 0x21d3ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212930u, 0x21D3A8u, 0x21D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D3B0u;
label_21d3b0:
    // 0x21d3b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21d3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21d3b4: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x21d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x21d3b8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x21d3b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21d3bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21D3BCu;
    {
        const bool branch_taken_0x21d3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3BCu;
        // 0x21d3c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d3bc) {
            ctx->pc = 0x21D3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d3a8;
        }
    }
    ctx->pc = 0x21D3C4u;
label_21d3c4:
    // 0x21d3c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d3c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x21D3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3C8u;
        // 0x21d3cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D3D0u;
}
