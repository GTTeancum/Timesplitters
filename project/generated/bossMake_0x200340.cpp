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

// Function: bossMake
// Address: 0x200340 - 0x200608
void bossMake_0x200340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bossMake_0x200340");
#endif

    switch (ctx->pc) {
        case 0x200398u: goto label_200398;
        case 0x2003a0u: goto label_2003a0;
        case 0x2003a8u: goto label_2003a8;
        case 0x2003b0u: goto label_2003b0;
        case 0x2003b8u: goto label_2003b8;
        case 0x2003c0u: goto label_2003c0;
        case 0x2003d0u: goto label_2003d0;
        case 0x2003d8u: goto label_2003d8;
        case 0x2003e0u: goto label_2003e0;
        case 0x2003e8u: goto label_2003e8;
        case 0x2003f0u: goto label_2003f0;
        case 0x2003f8u: goto label_2003f8;
        case 0x200404u: goto label_200404;
        case 0x200410u: goto label_200410;
        case 0x20041cu: goto label_20041c;
        case 0x200428u: goto label_200428;
        case 0x200434u: goto label_200434;
        case 0x200440u: goto label_200440;
        case 0x20044cu: goto label_20044c;
        case 0x200458u: goto label_200458;
        case 0x200464u: goto label_200464;
        case 0x200470u: goto label_200470;
        case 0x20047cu: goto label_20047c;
        case 0x200488u: goto label_200488;
        case 0x200494u: goto label_200494;
        case 0x2004a0u: goto label_2004a0;
        case 0x2004acu: goto label_2004ac;
        case 0x2004bcu: goto label_2004bc;
        case 0x2004c4u: goto label_2004c4;
        case 0x2004ccu: goto label_2004cc;
        case 0x2004e8u: goto label_2004e8;
        case 0x200500u: goto label_200500;
        case 0x200514u: goto label_200514;
        case 0x200534u: goto label_200534;
        case 0x20055cu: goto label_20055c;
        case 0x200570u: goto label_200570;
        case 0x200584u: goto label_200584;
        case 0x200598u: goto label_200598;
        case 0x2005a0u: goto label_2005a0;
        case 0x2005b0u: goto label_2005b0;
        case 0x2005c0u: goto label_2005c0;
        case 0x2005d0u: goto label_2005d0;
        default: break;
    }

    ctx->pc = 0x200340u;

    // 0x200340: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x200340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x200344: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x200344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200348: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x200348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x20034c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x20034cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x200350: 0x3c1e0038  lui         $fp, 0x38
    ctx->pc = 0x200350u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)56 << 16));
    // 0x200354: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x200354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x200358: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x200358u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
    // 0x20035c: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x20035cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x200360: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x200360u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
    // 0x200364: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x200364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x200368: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x200368u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x20036c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x20036cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x200370: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x200370u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x200374: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x200374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x200378: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x200378u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x20037c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x20037cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x200380: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x200380u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x200384: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x200384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x200388: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x200388u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x20038c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x20038cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x200390: 0xc0b4948  jal         func_2D2520
    ctx->pc = 0x200390u;
    SET_GPR_U32(ctx, 31, 0x200398u);
    ctx->pc = 0x200394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200390u;
    // 0x200394: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2520u, 0x200390u, 0x200398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200398u;
label_200398:
    // 0x200398: 0xc0b7e12  jal         func_2DF848
    ctx->pc = 0x200398u;
    SET_GPR_U32(ctx, 31, 0x2003A0u);
    ctx->pc = 0x20039Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200398u;
    // 0x20039c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF848u, 0x200398u, 0x2003A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003A0u;
label_2003a0:
    // 0x2003a0: 0xc0b8050  jal         func_2E0140
    ctx->pc = 0x2003A0u;
    SET_GPR_U32(ctx, 31, 0x2003A8u);
    ctx->pc = 0x2003A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2003A0u;
    // 0x2003a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0140u, 0x2003A0u, 0x2003A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003A8u;
label_2003a8:
    // 0x2003a8: 0xc0b5166  jal         func_2D4598
    ctx->pc = 0x2003A8u;
    SET_GPR_U32(ctx, 31, 0x2003B0u);
    ctx->pc = 0x2003ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2003A8u;
    // 0x2003ac: 0x26043780  addiu       $a0, $s0, 0x3780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 14208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4598u, 0x2003A8u, 0x2003B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003B0u;
label_2003b0:
    // 0x2003b0: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x2003B0u;
    {
        const bool branch_taken_0x2003b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2003b0) {
            ctx->pc = 0x2003A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2003a8;
        }
    }
    ctx->pc = 0x2003B8u;
label_2003b8:
    // 0x2003b8: 0xc0b5154  jal         func_2D4550
    ctx->pc = 0x2003B8u;
    SET_GPR_U32(ctx, 31, 0x2003C0u);
    ctx->pc = 0x2D4550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4550u, 0x2003B8u, 0x2003C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003C0u;
label_2003c0:
    // 0x2003c0: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x2003C0u;
    {
        const bool branch_taken_0x2003c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2003c0) {
            ctx->pc = 0x2003B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2003b8;
        }
    }
    ctx->pc = 0x2003C8u;
    // 0x2003c8: 0xc0b4948  jal         func_2D2520
    ctx->pc = 0x2003C8u;
    SET_GPR_U32(ctx, 31, 0x2003D0u);
    ctx->pc = 0x2003CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2003C8u;
    // 0x2003cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2520u, 0x2003C8u, 0x2003D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003D0u;
label_2003d0:
    // 0x2003d0: 0xc0b7e12  jal         func_2DF848
    ctx->pc = 0x2003D0u;
    SET_GPR_U32(ctx, 31, 0x2003D8u);
    ctx->pc = 0x2003D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2003D0u;
    // 0x2003d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF848u, 0x2003D0u, 0x2003D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003D8u;
label_2003d8:
    // 0x2003d8: 0xc0b8050  jal         func_2E0140
    ctx->pc = 0x2003D8u;
    SET_GPR_U32(ctx, 31, 0x2003E0u);
    ctx->pc = 0x2003DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2003D8u;
    // 0x2003dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0140u, 0x2003D8u, 0x2003E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003E0u;
label_2003e0:
    // 0x2003e0: 0xc0b4d40  jal         func_2D3500
    ctx->pc = 0x2003E0u;
    SET_GPR_U32(ctx, 31, 0x2003E8u);
    ctx->pc = 0x2D3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3500u, 0x2003E0u, 0x2003E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003E8u;
label_2003e8:
    // 0x2003e8: 0xc0b7eba  jal         func_2DFAE8
    ctx->pc = 0x2003E8u;
    SET_GPR_U32(ctx, 31, 0x2003F0u);
    ctx->pc = 0x2003ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2003E8u;
    // 0x2003ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFAE8u, 0x2003E8u, 0x2003F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003F0u;
label_2003f0:
    // 0x2003f0: 0x262437a0  addiu       $a0, $s1, 0x37A0
    ctx->pc = 0x2003f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
    // 0x2003f4: 0x0  nop
    ctx->pc = 0x2003f4u;
    // NOP
label_2003f8:
    // 0x2003f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2003f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2003fc: 0xc0b5034  jal         func_2D40D0
    ctx->pc = 0x2003FCu;
    SET_GPR_U32(ctx, 31, 0x200404u);
    ctx->pc = 0x200400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2003FCu;
    // 0x200400: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D40D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D40D0u, 0x2003FCu, 0x200404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200404u;
label_200404:
    // 0x200404: 0x440fffc  bltz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x200404u;
    {
        const bool branch_taken_0x200404 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x200408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200404u;
        // 0x200408: 0x262437a0  addiu       $a0, $s1, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200404) {
            ctx->pc = 0x2003F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2003f8;
        }
    }
    ctx->pc = 0x20040Cu;
    // 0x20040c: 0x264437c0  addiu       $a0, $s2, 0x37C0
    ctx->pc = 0x20040cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 14272));
label_200410:
    // 0x200410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200414: 0xc0b5034  jal         func_2D40D0
    ctx->pc = 0x200414u;
    SET_GPR_U32(ctx, 31, 0x20041Cu);
    ctx->pc = 0x200418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200414u;
    // 0x200418: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D40D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D40D0u, 0x200414u, 0x20041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20041Cu;
label_20041c:
    // 0x20041c: 0x440fffc  bltz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x20041Cu;
    {
        const bool branch_taken_0x20041c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x200420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20041Cu;
        // 0x200420: 0x264437c0  addiu       $a0, $s2, 0x37C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 14272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20041c) {
            ctx->pc = 0x200410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200410;
        }
    }
    ctx->pc = 0x200424u;
    // 0x200424: 0x266437e0  addiu       $a0, $s3, 0x37E0
    ctx->pc = 0x200424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 14304));
label_200428:
    // 0x200428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20042c: 0xc0b5034  jal         func_2D40D0
    ctx->pc = 0x20042Cu;
    SET_GPR_U32(ctx, 31, 0x200434u);
    ctx->pc = 0x200430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20042Cu;
    // 0x200430: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D40D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D40D0u, 0x20042Cu, 0x200434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200434u;
label_200434:
    // 0x200434: 0x440fffc  bltz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x200434u;
    {
        const bool branch_taken_0x200434 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x200438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200434u;
        // 0x200438: 0x266437e0  addiu       $a0, $s3, 0x37E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 14304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200434) {
            ctx->pc = 0x200428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200428;
        }
    }
    ctx->pc = 0x20043Cu;
    // 0x20043c: 0x26843800  addiu       $a0, $s4, 0x3800
    ctx->pc = 0x20043cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 14336));
label_200440:
    // 0x200440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200444: 0xc0b5034  jal         func_2D40D0
    ctx->pc = 0x200444u;
    SET_GPR_U32(ctx, 31, 0x20044Cu);
    ctx->pc = 0x200448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200444u;
    // 0x200448: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D40D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D40D0u, 0x200444u, 0x20044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20044Cu;
label_20044c:
    // 0x20044c: 0x440fffc  bltz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x20044Cu;
    {
        const bool branch_taken_0x20044c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x200450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20044Cu;
        // 0x200450: 0x26843800  addiu       $a0, $s4, 0x3800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 14336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20044c) {
            ctx->pc = 0x200440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200440;
        }
    }
    ctx->pc = 0x200454u;
    // 0x200454: 0x26a43820  addiu       $a0, $s5, 0x3820
    ctx->pc = 0x200454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 14368));
label_200458:
    // 0x200458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20045c: 0xc0b5034  jal         func_2D40D0
    ctx->pc = 0x20045Cu;
    SET_GPR_U32(ctx, 31, 0x200464u);
    ctx->pc = 0x200460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20045Cu;
    // 0x200460: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D40D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D40D0u, 0x20045Cu, 0x200464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200464u;
label_200464:
    // 0x200464: 0x440fffc  bltz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x200464u;
    {
        const bool branch_taken_0x200464 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x200468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200464u;
        // 0x200468: 0x26a43820  addiu       $a0, $s5, 0x3820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 14368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200464) {
            ctx->pc = 0x200458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200458;
        }
    }
    ctx->pc = 0x20046Cu;
    // 0x20046c: 0x26c43840  addiu       $a0, $s6, 0x3840
    ctx->pc = 0x20046cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 14400));
label_200470:
    // 0x200470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200474: 0xc0b5034  jal         func_2D40D0
    ctx->pc = 0x200474u;
    SET_GPR_U32(ctx, 31, 0x20047Cu);
    ctx->pc = 0x200478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200474u;
    // 0x200478: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D40D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D40D0u, 0x200474u, 0x20047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20047Cu;
label_20047c:
    // 0x20047c: 0x440fffc  bltz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x20047Cu;
    {
        const bool branch_taken_0x20047c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x200480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20047Cu;
        // 0x200480: 0x26c43840  addiu       $a0, $s6, 0x3840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 14400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20047c) {
            ctx->pc = 0x200470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200470;
        }
    }
    ctx->pc = 0x200484u;
    // 0x200484: 0x26e43860  addiu       $a0, $s7, 0x3860
    ctx->pc = 0x200484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 14432));
label_200488:
    // 0x200488: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20048c: 0xc0b5034  jal         func_2D40D0
    ctx->pc = 0x20048Cu;
    SET_GPR_U32(ctx, 31, 0x200494u);
    ctx->pc = 0x200490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20048Cu;
    // 0x200490: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D40D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D40D0u, 0x20048Cu, 0x200494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200494u;
label_200494:
    // 0x200494: 0x440fffc  bltz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x200494u;
    {
        const bool branch_taken_0x200494 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x200498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200494u;
        // 0x200498: 0x26e43860  addiu       $a0, $s7, 0x3860 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 14432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200494) {
            ctx->pc = 0x200488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200488;
        }
    }
    ctx->pc = 0x20049Cu;
    // 0x20049c: 0x27c43880  addiu       $a0, $fp, 0x3880
    ctx->pc = 0x20049cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 14464));
label_2004a0:
    // 0x2004a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2004a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2004a4: 0xc0b5034  jal         func_2D40D0
    ctx->pc = 0x2004A4u;
    SET_GPR_U32(ctx, 31, 0x2004ACu);
    ctx->pc = 0x2004A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2004A4u;
    // 0x2004a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D40D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D40D0u, 0x2004A4u, 0x2004ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2004ACu;
label_2004ac:
    // 0x2004ac: 0x440fffc  bltz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2004ACu;
    {
        const bool branch_taken_0x2004ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2004B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004ACu;
        // 0x2004b0: 0x27c43880  addiu       $a0, $fp, 0x3880 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 14464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004ac) {
            ctx->pc = 0x2004A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2004a0;
        }
    }
    ctx->pc = 0x2004B4u;
    // 0x2004b4: 0xc0b37d8  jal         func_2CDF60
    ctx->pc = 0x2004B4u;
    SET_GPR_U32(ctx, 31, 0x2004BCu);
    ctx->pc = 0x2004B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2004B4u;
    // 0x2004b8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDF60u, 0x2004B4u, 0x2004BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2004BCu;
label_2004bc:
    // 0x2004bc: 0xc0b3c5e  jal         func_2CF178
    ctx->pc = 0x2004BCu;
    SET_GPR_U32(ctx, 31, 0x2004C4u);
    ctx->pc = 0x2004C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2004BCu;
    // 0x2004c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF178u, 0x2004BCu, 0x2004C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2004C4u;
label_2004c4:
    // 0x2004c4: 0xc0b3c54  jal         func_2CF150
    ctx->pc = 0x2004C4u;
    SET_GPR_U32(ctx, 31, 0x2004CCu);
    ctx->pc = 0x2004C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2004C4u;
    // 0x2004c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF150u, 0x2004C4u, 0x2004CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2004CCu;
label_2004cc:
    // 0x2004cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2004ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2004d0: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x2004d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x2004d4: 0xaf8293a8  sw          $v0, -0x6C58($gp)
    ctx->pc = 0x2004d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939560), GPR_U32(ctx, 2));
    // 0x2004d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2004d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2004dc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2004dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2004e0: 0xc0b3c54  jal         func_2CF150
    ctx->pc = 0x2004E0u;
    SET_GPR_U32(ctx, 31, 0x2004E8u);
    ctx->pc = 0x2004E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2004E0u;
    // 0x2004e4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF150u, 0x2004E0u, 0x2004E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2004E8u;
label_2004e8:
    // 0x2004e8: 0xaf8293ac  sw          $v0, -0x6C54($gp)
    ctx->pc = 0x2004e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939564), GPR_U32(ctx, 2));
    // 0x2004ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2004ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2004f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2004f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2004f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2004f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2004f8: 0xc0b3784  jal         func_2CDE10
    ctx->pc = 0x2004F8u;
    SET_GPR_U32(ctx, 31, 0x200500u);
    ctx->pc = 0x2004FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2004F8u;
    // 0x2004fc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDE10u, 0x2004F8u, 0x200500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200500u;
label_200500:
    // 0x200500: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x200500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200508: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x200508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20050c: 0xc080620  jal         func_201880
    ctx->pc = 0x20050Cu;
    SET_GPR_U32(ctx, 31, 0x200514u);
    ctx->pc = 0x200510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20050Cu;
    // 0x200510: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201880u, 0x20050Cu, 0x200514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200514u;
label_200514:
    // 0x200514: 0x24080032  addiu       $t0, $zero, 0x32
    ctx->pc = 0x200514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x200518: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x200518u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20051c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x20051cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200520: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x200520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x200524: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x200524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x200528: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x200528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x20052c: 0xc080098  jal         func_200260
    ctx->pc = 0x20052Cu;
    SET_GPR_U32(ctx, 31, 0x200534u);
    ctx->pc = 0x200530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20052Cu;
    // 0x200530: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200260u, 0x20052Cu, 0x200534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200534u;
label_200534:
    // 0x200534: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x200534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x200538: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x200538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20053c: 0x24823540  addiu       $v0, $a0, 0x3540
    ctx->pc = 0x20053cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 13632));
    // 0x200540: 0xfc4300f0  sd          $v1, 0xF0($v0)
    ctx->pc = 0x200540u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x313630u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x313630u, _value); } while (0);
    // 0x200544: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x200544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200548: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x200548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x20054c: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x20054cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x200550: 0xfc433540  sd          $v1, 0x3540($v0)
    ctx->pc = 0x200550u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x313540u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x313540u, _value); } while (0);
    // 0x200554: 0xc0b4048  jal         func_2D0120
    ctx->pc = 0x200554u;
    SET_GPR_U32(ctx, 31, 0x20055Cu);
    ctx->pc = 0x200558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200554u;
    // 0x200558: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0120u, 0x200554u, 0x20055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20055Cu;
label_20055c:
    // 0x20055c: 0xaf829334  sw          $v0, -0x6CCC($gp)
    ctx->pc = 0x20055cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939444), GPR_U32(ctx, 2));
    // 0x200560: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x200560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200564: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x200564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x200568: 0xc0b4048  jal         func_2D0120
    ctx->pc = 0x200568u;
    SET_GPR_U32(ctx, 31, 0x200570u);
    ctx->pc = 0x20056Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200568u;
    // 0x20056c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0120u, 0x200568u, 0x200570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200570u;
label_200570:
    // 0x200570: 0xaf829338  sw          $v0, -0x6CC8($gp)
    ctx->pc = 0x200570u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939448), GPR_U32(ctx, 2));
    // 0x200574: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x200574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200578: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x200578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x20057c: 0xc0b4048  jal         func_2D0120
    ctx->pc = 0x20057Cu;
    SET_GPR_U32(ctx, 31, 0x200584u);
    ctx->pc = 0x200580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20057Cu;
    // 0x200580: 0xafb00008  sw          $s0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0120u, 0x20057Cu, 0x200584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200584u;
label_200584:
    // 0x200584: 0xaf829340  sw          $v0, -0x6CC0($gp)
    ctx->pc = 0x200584u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939456), GPR_U32(ctx, 2));
    // 0x200588: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x200588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20058c: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x20058cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x200590: 0xc0b4048  jal         func_2D0120
    ctx->pc = 0x200590u;
    SET_GPR_U32(ctx, 31, 0x200598u);
    ctx->pc = 0x200594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200590u;
    // 0x200594: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0120u, 0x200590u, 0x200598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200598u;
label_200598:
    // 0x200598: 0xaf82933c  sw          $v0, -0x6CC4($gp)
    ctx->pc = 0x200598u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939452), GPR_U32(ctx, 2));
    // 0x20059c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x20059cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_2005a0:
    // 0x2005a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2005a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2005a4: 0x24451198  addiu       $a1, $v0, 0x1198
    ctx->pc = 0x2005a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
    // 0x2005a8: 0xc0b3f80  jal         func_2CFE00
    ctx->pc = 0x2005A8u;
    SET_GPR_U32(ctx, 31, 0x2005B0u);
    ctx->pc = 0x2005ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2005A8u;
    // 0x2005ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFE00u, 0x2005A8u, 0x2005B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2005B0u;
label_2005b0:
    // 0x2005b0: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2005B0u;
    {
        const bool branch_taken_0x2005b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2005B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005B0u;
        // 0x2005b4: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2005b0) {
            ctx->pc = 0x2005A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2005a0;
        }
    }
    ctx->pc = 0x2005B8u;
    // 0x2005b8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x2005b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x2005bc: 0x0  nop
    ctx->pc = 0x2005bcu;
    // NOP
label_2005c0:
    // 0x2005c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2005c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2005c4: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x2005c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2005c8: 0xc0b3f80  jal         func_2CFE00
    ctx->pc = 0x2005C8u;
    SET_GPR_U32(ctx, 31, 0x2005D0u);
    ctx->pc = 0x2005CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2005C8u;
    // 0x2005cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFE00u, 0x2005C8u, 0x2005D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2005D0u;
label_2005d0:
    // 0x2005d0: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2005D0u;
    {
        const bool branch_taken_0x2005d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2005d0) {
            ctx->pc = 0x2005D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2005D0u;
            // 0x2005d4: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2005C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2005c0;
        }
    }
    ctx->pc = 0x2005D8u;
    // 0x2005d8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2005d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2005dc: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2005dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2005e0: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x2005e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2005e4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2005e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2005e8: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2005e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2005ec: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2005ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2005f0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2005f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2005f4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2005f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2005f8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2005f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2005fc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2005fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200600: 0x3e00008  jr          $ra
    ctx->pc = 0x200600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200600u;
        // 0x200604: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200608u;
}
