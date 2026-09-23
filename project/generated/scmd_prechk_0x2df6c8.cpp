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

// Function: scmd_prechk
// Address: 0x2df6c8 - 0x2df844
void scmd_prechk_0x2df6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scmd_prechk_0x2df6c8");
#endif

    switch (ctx->pc) {
        case 0x2df6e8u: goto label_2df6e8;
        case 0x2df6f4u: goto label_2df6f4;
        case 0x2df720u: goto label_2df720;
        case 0x2df744u: goto label_2df744;
        case 0x2df74cu: goto label_2df74c;
        case 0x2df75cu: goto label_2df75c;
        case 0x2df76cu: goto label_2df76c;
        case 0x2df788u: goto label_2df788;
        case 0x2df790u: goto label_2df790;
        case 0x2df7b0u: goto label_2df7b0;
        case 0x2df7c4u: goto label_2df7c4;
        case 0x2df7e8u: goto label_2df7e8;
        case 0x2df7f8u: goto label_2df7f8;
        default: break;
    }

    ctx->pc = 0x2df6c8u;

    // 0x2df6c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2df6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2df6cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2df6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2df6d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2df6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2df6d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2df6d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df6d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2df6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2df6dc: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2df6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2df6e0: 0xc0b7860  jal         func_2DE180
    ctx->pc = 0x2DF6E0u;
    SET_GPR_U32(ctx, 31, 0x2DF6E8u);
    ctx->pc = 0x2DF6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF6E0u;
    // 0x2df6e4: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE180u, 0x2DF6E0u, 0x2DF6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF6E8u;
label_2df6e8:
    // 0x2df6e8: 0x8e042fa4  lw          $a0, 0x2FA4($s0)
    ctx->pc = 0x2df6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12196)));
    // 0x2df6ec: 0xc0b405c  jal         func_2D0170
    ctx->pc = 0x2DF6ECu;
    SET_GPR_U32(ctx, 31, 0x2DF6F4u);
    ctx->pc = 0x2D0170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0170u, 0x2DF6ECu, 0x2DF6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF6F4u;
label_2df6f4:
    // 0x2df6f4: 0x8e032fa4  lw          $v1, 0x2FA4($s0)
    ctx->pc = 0x2df6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12196)));
    // 0x2df6f8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DF6F8u;
    {
        const bool branch_taken_0x2df6f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DF6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF6F8u;
        // 0x2df6fc: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df6f8) {
            ctx->pc = 0x2DF728u;
            goto label_2df728;
        }
    }
    ctx->pc = 0x2DF700u;
    // 0x2df700: 0x8c432f90  lw          $v1, 0x2F90($v0)
    ctx->pc = 0x2df700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12176)));
    // 0x2df704: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DF704u;
    {
        const bool branch_taken_0x2df704 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2DF708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF704u;
        // 0x2df708: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df704) {
            ctx->pc = 0x2DF75Cu;
            goto label_2df75c;
        }
    }
    ctx->pc = 0x2DF70Cu;
    // 0x2df70c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2df70cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2df710: 0x8c462f94  lw          $a2, 0x2F94($v0)
    ctx->pc = 0x2df710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12180)));
    // 0x2df714: 0x2484b460  addiu       $a0, $a0, -0x4BA0
    ctx->pc = 0x2df714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947936));
    // 0x2df718: 0xc0b95c8  jal         func_2E5720
    ctx->pc = 0x2DF718u;
    SET_GPR_U32(ctx, 31, 0x2DF720u);
    ctx->pc = 0x2DF71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF718u;
    // 0x2df71c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5720u, 0x2DF718u, 0x2DF720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF720u;
label_2df720:
    // 0x2df720: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2DF720u;
    {
        const bool branch_taken_0x2df720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF720u;
        // 0x2df724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df720) {
            ctx->pc = 0x2DF82Cu;
            goto label_2df82c;
        }
    }
    ctx->pc = 0x2DF728u;
label_2df728:
    // 0x2df728: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2df728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2df72c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2df72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2df730: 0x8c443dc0  lw          $a0, 0x3DC0($v0)
    ctx->pc = 0x2df730u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FF3DC0u));
    // 0x2df734: 0x3c0501ff  lui         $a1, 0x1FF
    ctx->pc = 0x2df734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)511 << 16));
    // 0x2df738: 0xac712f94  sw          $s1, 0x2F94($v1)
    ctx->pc = 0x2df738u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x382F94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x382F94u, _value); } while (0);
    // 0x2df73c: 0xc0b4008  jal         func_2D0020
    ctx->pc = 0x2DF73Cu;
    SET_GPR_U32(ctx, 31, 0x2DF744u);
    ctx->pc = 0x2DF740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF73Cu;
    // 0x2df740: 0x24a53dc8  addiu       $a1, $a1, 0x3DC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0020u, 0x2DF73Cu, 0x2DF744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF744u;
label_2df744:
    // 0x2df744: 0xc0b7d98  jal         func_2DF660
    ctx->pc = 0x2DF744u;
    SET_GPR_U32(ctx, 31, 0x2DF74Cu);
    ctx->pc = 0x2DF748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF744u;
    // 0x2df748: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF660u, 0x2DF744u, 0x2DF74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF74Cu;
label_2df74c:
    // 0x2df74c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DF74Cu;
    {
        const bool branch_taken_0x2df74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df74c) {
            ctx->pc = 0x2DF764u;
            goto label_2df764;
        }
    }
    ctx->pc = 0x2DF754u;
    // 0x2df754: 0xc0b4050  jal         func_2D0140
    ctx->pc = 0x2DF754u;
    SET_GPR_U32(ctx, 31, 0x2DF75Cu);
    ctx->pc = 0x2DF758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF754u;
    // 0x2df758: 0x8e042fa4  lw          $a0, 0x2FA4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0140u, 0x2DF754u, 0x2DF75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF75Cu;
label_2df75c:
    // 0x2df75c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2DF75Cu;
    {
        const bool branch_taken_0x2df75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF75Cu;
        // 0x2df760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df75c) {
            ctx->pc = 0x2DF82Cu;
            goto label_2df82c;
        }
    }
    ctx->pc = 0x2DF764u;
label_2df764:
    // 0x2df764: 0xc0b4948  jal         func_2D2520
    ctx->pc = 0x2DF764u;
    SET_GPR_U32(ctx, 31, 0x2DF76Cu);
    ctx->pc = 0x2DF768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF764u;
    // 0x2df768: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2520u, 0x2DF764u, 0x2DF76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF76Cu;
label_2df76c:
    // 0x2df76c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2df76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2df770: 0x8c622fc4  lw          $v0, 0x2FC4($v1)
    ctx->pc = 0x2df770u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x382FC4u));
    // 0x2df774: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2DF774u;
    {
        const bool branch_taken_0x2df774 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2DF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF774u;
        // 0x2df778: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df774) {
            ctx->pc = 0x2DF828u;
            goto label_2df828;
        }
    }
    ctx->pc = 0x2DF77Cu;
    // 0x2df77c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DF77Cu;
    {
        const bool branch_taken_0x2df77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF77Cu;
        // 0x2df780: 0x3c1101ff  lui         $s1, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df77c) {
            ctx->pc = 0x2DF7ACu;
            goto label_2df7ac;
        }
    }
    ctx->pc = 0x2DF784u;
    // 0x2df784: 0x0  nop
    ctx->pc = 0x2df784u;
    // NOP
label_2df788:
    // 0x2df788: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2df788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2df78c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2df78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2df790:
    // 0x2df790: 0x0  nop
    ctx->pc = 0x2df790u;
    // NOP
    // 0x2df794: 0x0  nop
    ctx->pc = 0x2df794u;
    // NOP
    // 0x2df798: 0x0  nop
    ctx->pc = 0x2df798u;
    // NOP
    // 0x2df79c: 0x0  nop
    ctx->pc = 0x2df79cu;
    // NOP
    // 0x2df7a0: 0x0  nop
    ctx->pc = 0x2df7a0u;
    // NOP
    // 0x2df7a4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DF7A4u;
    {
        const bool branch_taken_0x2df7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF7A4u;
        // 0x2df7a8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df7a4) {
            ctx->pc = 0x2DF790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2df790;
        }
    }
    ctx->pc = 0x2DF7ACu;
label_2df7ac:
    // 0x2df7ac: 0x26305220  addiu       $s0, $s1, 0x5220
    ctx->pc = 0x2df7acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 21024));
label_2df7b0:
    // 0x2df7b0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2df7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2df7b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df7b8: 0x34a50593  ori         $a1, $a1, 0x593
    ctx->pc = 0x2df7b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1427);
    // 0x2df7bc: 0xc0b4ad6  jal         func_2D2B58
    ctx->pc = 0x2DF7BCu;
    SET_GPR_U32(ctx, 31, 0x2DF7C4u);
    ctx->pc = 0x2DF7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF7BCu;
    // 0x2df7c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2B58u, 0x2DF7BCu, 0x2DF7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF7C4u;
label_2df7c4:
    // 0x2df7c4: 0x4430015  bgezl       $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DF7C4u;
    {
        const bool branch_taken_0x2df7c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2df7c4) {
            ctx->pc = 0x2DF7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF7C4u;
            // 0x2df7c8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF81Cu;
            goto label_2df81c;
        }
    }
    ctx->pc = 0x2DF7CCu;
    // 0x2df7cc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2df7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2df7d0: 0x8c432f90  lw          $v1, 0x2F90($v0)
    ctx->pc = 0x2df7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x382F90u));
    // 0x2df7d4: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DF7D4u;
    {
        const bool branch_taken_0x2df7d4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2DF7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF7D4u;
        // 0x2df7d8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df7d4) {
            ctx->pc = 0x2DF7ECu;
            goto label_2df7ec;
        }
    }
    ctx->pc = 0x2DF7DCu;
    // 0x2df7dc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2df7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2df7e0: 0xc0b95c8  jal         func_2E5720
    ctx->pc = 0x2DF7E0u;
    SET_GPR_U32(ctx, 31, 0x2DF7E8u);
    ctx->pc = 0x2DF7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF7E0u;
    // 0x2df7e4: 0x2484b488  addiu       $a0, $a0, -0x4B78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5720u, 0x2DF7E0u, 0x2DF7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF7E8u;
label_2df7e8:
    // 0x2df7e8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2df7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_2df7ec:
    // 0x2df7ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2df7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2df7f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2df7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2df7f4: 0x0  nop
    ctx->pc = 0x2df7f4u;
    // NOP
label_2df7f8:
    // 0x2df7f8: 0x0  nop
    ctx->pc = 0x2df7f8u;
    // NOP
    // 0x2df7fc: 0x0  nop
    ctx->pc = 0x2df7fcu;
    // NOP
    // 0x2df800: 0x0  nop
    ctx->pc = 0x2df800u;
    // NOP
    // 0x2df804: 0x0  nop
    ctx->pc = 0x2df804u;
    // NOP
    // 0x2df808: 0x0  nop
    ctx->pc = 0x2df808u;
    // NOP
    // 0x2df80c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DF80Cu;
    {
        const bool branch_taken_0x2df80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DF810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF80Cu;
        // 0x2df810: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df80c) {
            ctx->pc = 0x2DF7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2df7f8;
        }
    }
    ctx->pc = 0x2DF814u;
    // 0x2df814: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x2DF814u;
    {
        const bool branch_taken_0x2df814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF814u;
        // 0x2df818: 0x26305220  addiu       $s0, $s1, 0x5220 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 21024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df814) {
            ctx->pc = 0x2DF7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2df7b0;
        }
    }
    ctx->pc = 0x2DF81Cu;
label_2df81c:
    // 0x2df81c: 0x1040ffda  beqz        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2DF81Cu;
    {
        const bool branch_taken_0x2df81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF81Cu;
        // 0x2df820: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df81c) {
            ctx->pc = 0x2DF788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2df788;
        }
    }
    ctx->pc = 0x2DF824u;
    // 0x2df824: 0xae402fc4  sw          $zero, 0x2FC4($s2)
    ctx->pc = 0x2df824u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12228), GPR_U32(ctx, 0));
label_2df828:
    // 0x2df828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2df828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2df82c:
    // 0x2df82c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2df82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2df830: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2df830u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df834: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2df834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df838: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2df838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df83c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF83Cu;
        // 0x2df840: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF844u;
}
