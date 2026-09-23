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

// Function: preloadExec
// Address: 0x21c728 - 0x21c840
void preloadExec_0x21c728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("preloadExec_0x21c728");
#endif

    switch (ctx->pc) {
        case 0x21c758u: goto label_21c758;
        case 0x21c7a0u: goto label_21c7a0;
        case 0x21c7b4u: goto label_21c7b4;
        case 0x21c7d0u: goto label_21c7d0;
        case 0x21c7e4u: goto label_21c7e4;
        case 0x21c7f0u: goto label_21c7f0;
        case 0x21c804u: goto label_21c804;
        case 0x21c818u: goto label_21c818;
        default: break;
    }

    ctx->pc = 0x21c728u;

    // 0x21c728: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21c728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21c72c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c730: 0x8f90b6f0  lw          $s0, -0x4910($gp)
    ctx->pc = 0x21c730u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948592)));
    // 0x21c734: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21c734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21c738: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x21c738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21c73c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21c73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21c740: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x21C740u;
    {
        const bool branch_taken_0x21c740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C740u;
        // 0x21c744: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c740) {
            ctx->pc = 0x21C824u;
            goto label_21c824;
        }
    }
    ctx->pc = 0x21C748u;
    // 0x21c748: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x21c748u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c74c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x21c74cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21c750: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x21c750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21c754: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21c754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21c758:
    // 0x21c758: 0x10730018  beq         $v1, $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x21C758u;
    {
        const bool branch_taken_0x21c758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x21C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C758u;
        // 0x21c75c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c758) {
            ctx->pc = 0x21C7BCu;
            goto label_21c7bc;
        }
    }
    ctx->pc = 0x21C760u;
    // 0x21c760: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C760u;
    {
        const bool branch_taken_0x21c760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c760) {
            ctx->pc = 0x21C778u;
            goto label_21c778;
        }
    }
    ctx->pc = 0x21C768u;
    // 0x21c768: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x21C768u;
    {
        const bool branch_taken_0x21c768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c768) {
            ctx->pc = 0x21C76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C768u;
            // 0x21c76c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C790u;
            goto label_21c790;
        }
    }
    ctx->pc = 0x21C770u;
    // 0x21c770: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x21C770u;
    {
        const bool branch_taken_0x21c770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C770u;
        // 0x21c774: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c770) {
            ctx->pc = 0x21C81Cu;
            goto label_21c81c;
        }
    }
    ctx->pc = 0x21C778u;
label_21c778:
    // 0x21c778: 0x5072001f  beql        $v1, $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x21C778u;
    {
        const bool branch_taken_0x21c778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x21c778) {
            ctx->pc = 0x21C77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C778u;
            // 0x21c77c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C7F8u;
            goto label_21c7f8;
        }
    }
    ctx->pc = 0x21C780u;
    // 0x21c780: 0x50710022  beql        $v1, $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x21C780u;
    {
        const bool branch_taken_0x21c780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x21c780) {
            ctx->pc = 0x21C784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C780u;
            // 0x21c784: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C80Cu;
            goto label_21c80c;
        }
    }
    ctx->pc = 0x21C788u;
    // 0x21c788: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x21C788u;
    {
        const bool branch_taken_0x21c788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C788u;
        // 0x21c78c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c788) {
            ctx->pc = 0x21C81Cu;
            goto label_21c81c;
        }
    }
    ctx->pc = 0x21C790u;
label_21c790:
    // 0x21c790: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C790u;
    {
        const bool branch_taken_0x21c790 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C790u;
        // 0x21c794: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c790) {
            ctx->pc = 0x21C7A8u;
            goto label_21c7a8;
        }
    }
    ctx->pc = 0x21C798u;
    // 0x21c798: 0xc086922  jal         func_21A488
    ctx->pc = 0x21C798u;
    SET_GPR_U32(ctx, 31, 0x21C7A0u);
    ctx->pc = 0x21C79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C798u;
    // 0x21c79c: 0x3c060200  lui         $a2, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A488u, 0x21C798u, 0x21C7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C7A0u;
label_21c7a0:
    // 0x21c7a0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x21C7A0u;
    {
        const bool branch_taken_0x21c7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7A0u;
        // 0x21c7a4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c7a0) {
            ctx->pc = 0x21C818u;
            goto label_21c818;
        }
    }
    ctx->pc = 0x21C7A8u;
label_21c7a8:
    // 0x21c7a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21c7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c7ac: 0xc0868fe  jal         func_21A3F8
    ctx->pc = 0x21C7ACu;
    SET_GPR_U32(ctx, 31, 0x21C7B4u);
    ctx->pc = 0x21C7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C7ACu;
    // 0x21c7b0: 0x26060014  addiu       $a2, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A3F8u, 0x21C7ACu, 0x21C7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C7B4u;
label_21c7b4:
    // 0x21c7b4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x21C7B4u;
    {
        const bool branch_taken_0x21c7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7B4u;
        // 0x21c7b8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c7b4) {
            ctx->pc = 0x21C818u;
            goto label_21c818;
        }
    }
    ctx->pc = 0x21C7BCu;
label_21c7bc:
    // 0x21c7bc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x21c7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21c7c0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C7C0u;
    {
        const bool branch_taken_0x21c7c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7C0u;
        // 0x21c7c4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c7c0) {
            ctx->pc = 0x21C7D8u;
            goto label_21c7d8;
        }
    }
    ctx->pc = 0x21C7C8u;
    // 0x21c7c8: 0xc086922  jal         func_21A488
    ctx->pc = 0x21C7C8u;
    SET_GPR_U32(ctx, 31, 0x21C7D0u);
    ctx->pc = 0x21C7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C7C8u;
    // 0x21c7cc: 0x3c060200  lui         $a2, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A488u, 0x21C7C8u, 0x21C7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C7D0u;
label_21c7d0:
    // 0x21c7d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21C7D0u;
    {
        const bool branch_taken_0x21c7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7D0u;
        // 0x21c7d4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c7d0) {
            ctx->pc = 0x21C7E8u;
            goto label_21c7e8;
        }
    }
    ctx->pc = 0x21C7D8u;
label_21c7d8:
    // 0x21c7d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21c7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c7dc: 0xc0868fe  jal         func_21A3F8
    ctx->pc = 0x21C7DCu;
    SET_GPR_U32(ctx, 31, 0x21C7E4u);
    ctx->pc = 0x21C7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C7DCu;
    // 0x21c7e0: 0x26060014  addiu       $a2, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A3F8u, 0x21C7DCu, 0x21C7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C7E4u;
label_21c7e4:
    // 0x21c7e4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x21c7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_21c7e8:
    // 0x21c7e8: 0xc097a9e  jal         func_25EA78
    ctx->pc = 0x21C7E8u;
    SET_GPR_U32(ctx, 31, 0x21C7F0u);
    ctx->pc = 0x21C7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C7E8u;
    // 0x21c7ec: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EA78u, 0x21C7E8u, 0x21C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C7F0u;
label_21c7f0:
    // 0x21c7f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21C7F0u;
    {
        const bool branch_taken_0x21c7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7F0u;
        // 0x21c7f4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c7f0) {
            ctx->pc = 0x21C81Cu;
            goto label_21c81c;
        }
    }
    ctx->pc = 0x21C7F8u;
label_21c7f8:
    // 0x21c7f8: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x21c7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x21c7fc: 0xc0ade6e  jal         func_2B79B8
    ctx->pc = 0x21C7FCu;
    SET_GPR_U32(ctx, 31, 0x21C804u);
    ctx->pc = 0x21C800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C7FCu;
    // 0x21c800: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79B8u, 0x21C7FCu, 0x21C804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C804u;
label_21c804:
    // 0x21c804: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21C804u;
    {
        const bool branch_taken_0x21c804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C804u;
        // 0x21c808: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c804) {
            ctx->pc = 0x21C81Cu;
            goto label_21c81c;
        }
    }
    ctx->pc = 0x21C80Cu;
label_21c80c:
    // 0x21c80c: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x21c80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x21c810: 0xc0ade40  jal         func_2B7900
    ctx->pc = 0x21C810u;
    SET_GPR_U32(ctx, 31, 0x21C818u);
    ctx->pc = 0x21C814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C810u;
    // 0x21c814: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7900u, 0x21C810u, 0x21C818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C818u;
label_21c818:
    // 0x21c818: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x21c818u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21c81c:
    // 0x21c81c: 0x5600ffce  bnel        $s0, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x21C81Cu;
    {
        const bool branch_taken_0x21c81c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c81c) {
            ctx->pc = 0x21C820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C81Cu;
            // 0x21c820: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c758;
        }
    }
    ctx->pc = 0x21C824u;
label_21c824:
    // 0x21c824: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21c824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21c828: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21c828u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c82c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21c82cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c830: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21c830u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c838: 0x3e00008  jr          $ra
    ctx->pc = 0x21C838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C838u;
        // 0x21c83c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C840u;
}
