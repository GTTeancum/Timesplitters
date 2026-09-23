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

// Function: __sfp
// Address: 0x2e47f0 - 0x2e48d0
void ps2___sfp_0x2e47f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sfp_0x2e47f0");
#endif

    switch (ctx->pc) {
        case 0x2e4818u: goto label_2e4818;
        case 0x2e4820u: goto label_2e4820;
        case 0x2e4824u: goto label_2e4824;
        case 0x2e4838u: goto label_2e4838;
        case 0x2e4864u: goto label_2e4864;
        default: break;
    }

    ctx->pc = 0x2e47f0u;

    // 0x2e47f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e47f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e47f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e47f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e47f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e47f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e47fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e47fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4800: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e4804: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2e4804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2e4808: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E4808u;
    {
        const bool branch_taken_0x2e4808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4808u;
        // 0x2e480c: 0x263001d8  addiu       $s0, $s1, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4808) {
            ctx->pc = 0x2E4828u;
            goto label_2e4828;
        }
    }
    ctx->pc = 0x2E4810u;
    // 0x2e4810: 0xc0b923c  jal         func_2E48F0
    ctx->pc = 0x2E4810u;
    SET_GPR_U32(ctx, 31, 0x2E4818u);
    ctx->pc = 0x2E48F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E48F0u, 0x2E4810u, 0x2E4818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4818u;
label_2e4818:
    // 0x2e4818: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4818u;
    {
        const bool branch_taken_0x2e4818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4818u;
        // 0x2e481c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4818) {
            ctx->pc = 0x2E482Cu;
            goto label_2e482c;
        }
    }
    ctx->pc = 0x2E4820u;
label_2e4820:
    // 0x2e4820: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e4820u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4824:
    // 0x2e4824: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2e4824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e4828:
    // 0x2e4828: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2e4828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e482c:
    // 0x2e482c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e482cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e4830: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4830u;
    {
        const bool branch_taken_0x2e4830 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2E4834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4830u;
        // 0x2e4834: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4830) {
            ctx->pc = 0x2E484Cu;
            goto label_2e484c;
        }
    }
    ctx->pc = 0x2E4838u;
label_2e4838:
    // 0x2e4838: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x2e4838u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e483c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E483Cu;
    {
        const bool branch_taken_0x2e483c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E483Cu;
        // 0x2e4840: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e483c) {
            ctx->pc = 0x2E487Cu;
            goto label_2e487c;
        }
    }
    ctx->pc = 0x2E4844u;
    // 0x2e4844: 0x461fffc  bgez        $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2E4844u;
    {
        const bool branch_taken_0x2e4844 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2E4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4844u;
        // 0x2e4848: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4844) {
            ctx->pc = 0x2E4838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4838;
        }
    }
    ctx->pc = 0x2E484Cu;
label_2e484c:
    // 0x2e484c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e484cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e4850: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E4850u;
    {
        const bool branch_taken_0x2e4850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4850u;
        // 0x2e4854: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4850) {
            ctx->pc = 0x2E4824u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4824;
        }
    }
    ctx->pc = 0x2E4858u;
    // 0x2e4858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e4858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e485c: 0xc0b91e0  jal         func_2E4780
    ctx->pc = 0x2E485Cu;
    SET_GPR_U32(ctx, 31, 0x2E4864u);
    ctx->pc = 0x2E4860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E485Cu;
    // 0x2e4860: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4780u, 0x2E485Cu, 0x2E4864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4864u;
label_2e4864:
    // 0x2e4864: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2E4864u;
    {
        const bool branch_taken_0x2e4864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4864u;
        // 0x2e4868: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4864) {
            ctx->pc = 0x2E4820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4820;
        }
    }
    ctx->pc = 0x2E486Cu;
    // 0x2e486c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2e486cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e4870: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e4870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4874: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E4874u;
    {
        const bool branch_taken_0x2e4874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4874u;
        // 0x2e4878: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4874) {
            ctx->pc = 0x2E48BCu;
            goto label_2e48bc;
        }
    }
    ctx->pc = 0x2E487Cu;
label_2e487c:
    // 0x2e487c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e487cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4880: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e4880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e4884: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x2e4884u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e4888: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x2e4888u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e488c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e488cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4890: 0xac910054  sw          $s1, 0x54($a0)
    ctx->pc = 0x2e4890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 17));
    // 0x2e4894: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e4894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e4898: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2e4898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2e489c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e489cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e48a0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2e48a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2e48a4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2e48a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2e48a8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2e48a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2e48ac: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2e48acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2e48b0: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2e48b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x2e48b4: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x2e48b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x2e48b8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2e48b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_2e48bc:
    // 0x2e48bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e48bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e48c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e48c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e48c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e48c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e48c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E48C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E48CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48C8u;
        // 0x2e48cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E48C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E48D0u;
}
