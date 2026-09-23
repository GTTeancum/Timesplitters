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

// Function: soundPreload
// Address: 0x2047c8 - 0x2048b4
void soundPreload_0x2047c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundPreload_0x2047c8");
#endif

    switch (ctx->pc) {
        case 0x204810u: goto label_204810;
        case 0x204828u: goto label_204828;
        case 0x204848u: goto label_204848;
        case 0x204860u: goto label_204860;
        case 0x204890u: goto label_204890;
        default: break;
    }

    ctx->pc = 0x2047c8u;

    // 0x2047c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2047c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2047cc: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x2047ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2047d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2047d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2047d4: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x2047d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2047d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2047d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2047dc: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2047DCu;
    {
        const bool branch_taken_0x2047dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2047E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047DCu;
        // 0x2047e0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047dc) {
            ctx->pc = 0x2048A0u;
            goto label_2048a0;
        }
    }
    ctx->pc = 0x2047E4u;
    // 0x2047e4: 0x2462ff9b  addiu       $v0, $v1, -0x65
    ctx->pc = 0x2047e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967195));
    // 0x2047e8: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2047e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2047ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2047ECu;
    {
        const bool branch_taken_0x2047ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2047F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047ECu;
        // 0x2047f0: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047ec) {
            ctx->pc = 0x204800u;
            goto label_204800;
        }
    }
    ctx->pc = 0x2047F4u;
    // 0x2047f4: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x2047f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x2047f8: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2047F8u;
    {
        const bool branch_taken_0x2047f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2047FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047F8u;
        // 0x2047fc: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047f8) {
            ctx->pc = 0x204840u;
            goto label_204840;
        }
    }
    ctx->pc = 0x204800u;
label_204800:
    // 0x204800: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x204800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204804: 0x2442e180  addiu       $v0, $v0, -0x1E80
    ctx->pc = 0x204804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959488));
    // 0x204808: 0x24510016  addiu       $s1, $v0, 0x16
    ctx->pc = 0x204808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22));
    // 0x20480c: 0x0  nop
    ctx->pc = 0x20480cu;
    // NOP
label_204810:
    // 0x204810: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x204810u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x204814: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x204814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x204818: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x204818u;
    {
        const bool branch_taken_0x204818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204818) {
            ctx->pc = 0x20481Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204818u;
            // 0x20481c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20482Cu;
            goto label_20482c;
        }
    }
    ctx->pc = 0x204820u;
    // 0x204820: 0xc0814ae  jal         func_2052B8
    ctx->pc = 0x204820u;
    SET_GPR_U32(ctx, 31, 0x204828u);
    ctx->pc = 0x204824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204820u;
    // 0x204824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2052B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2052B8u, 0x204820u, 0x204828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204828u;
label_204828:
    // 0x204828: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x204828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20482c:
    // 0x20482c: 0x2a0204bf  slti        $v0, $s0, 0x4BF
    ctx->pc = 0x20482cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1215) ? 1 : 0);
    // 0x204830: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x204830u;
    {
        const bool branch_taken_0x204830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204830u;
        // 0x204834: 0x26310024  addiu       $s1, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204830) {
            ctx->pc = 0x204810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204810;
        }
    }
    ctx->pc = 0x204838u;
    // 0x204838: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x204838u;
    {
        const bool branch_taken_0x204838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204838u;
        // 0x20483c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204838) {
            ctx->pc = 0x2048A4u;
            goto label_2048a4;
        }
    }
    ctx->pc = 0x204840u;
label_204840:
    // 0x204840: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x204840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204844: 0x2451e180  addiu       $s1, $v0, -0x1E80
    ctx->pc = 0x204844u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959488));
label_204848:
    // 0x204848: 0x96240016  lhu         $a0, 0x16($s1)
    ctx->pc = 0x204848u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x20484c: 0x3082001b  andi        $v0, $a0, 0x1B
    ctx->pc = 0x20484cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)27);
    // 0x204850: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x204850u;
    {
        const bool branch_taken_0x204850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204850u;
        // 0x204854: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204850) {
            ctx->pc = 0x204868u;
            goto label_204868;
        }
    }
    ctx->pc = 0x204858u;
    // 0x204858: 0xc0814ae  jal         func_2052B8
    ctx->pc = 0x204858u;
    SET_GPR_U32(ctx, 31, 0x204860u);
    ctx->pc = 0x20485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204858u;
    // 0x20485c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2052B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2052B8u, 0x204858u, 0x204860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204860u;
label_204860:
    // 0x204860: 0x96240016  lhu         $a0, 0x16($s1)
    ctx->pc = 0x204860u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x204864: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x204864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_204868:
    // 0x204868: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x204868u;
    {
        const bool branch_taken_0x204868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204868u;
        // 0x20486c: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204868) {
            ctx->pc = 0x204890u;
            goto label_204890;
        }
    }
    ctx->pc = 0x204870u;
    // 0x204870: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x204870u;
    {
        const bool branch_taken_0x204870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204870) {
            ctx->pc = 0x204874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204870u;
            // 0x204874: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204894u;
            goto label_204894;
        }
    }
    ctx->pc = 0x204878u;
    // 0x204878: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x204878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x20487c: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x20487cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x204880: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x204880u;
    {
        const bool branch_taken_0x204880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x204880) {
            ctx->pc = 0x204884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204880u;
            // 0x204884: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204894u;
            goto label_204894;
        }
    }
    ctx->pc = 0x204888u;
    // 0x204888: 0xc0814ae  jal         func_2052B8
    ctx->pc = 0x204888u;
    SET_GPR_U32(ctx, 31, 0x204890u);
    ctx->pc = 0x20488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204888u;
    // 0x20488c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2052B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2052B8u, 0x204888u, 0x204890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204890u;
label_204890:
    // 0x204890: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x204890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_204894:
    // 0x204894: 0x2a0204bf  slti        $v0, $s0, 0x4BF
    ctx->pc = 0x204894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1215) ? 1 : 0);
    // 0x204898: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x204898u;
    {
        const bool branch_taken_0x204898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204898u;
        // 0x20489c: 0x26310024  addiu       $s1, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204898) {
            ctx->pc = 0x204848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204848;
        }
    }
    ctx->pc = 0x2048A0u;
label_2048a0:
    // 0x2048a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2048a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2048a4:
    // 0x2048a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2048a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2048a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2048a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2048ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2048ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2048B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048ACu;
        // 0x2048b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2048ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2048B4u;
}
