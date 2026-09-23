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

// Function: updatePlayerPadPos
// Address: 0x2bf830 - 0x2bf920
void updatePlayerPadPos_0x2bf830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("updatePlayerPadPos_0x2bf830");
#endif

    switch (ctx->pc) {
        case 0x2bf860u: goto label_2bf860;
        case 0x2bf884u: goto label_2bf884;
        case 0x2bf8a4u: goto label_2bf8a4;
        case 0x2bf8e4u: goto label_2bf8e4;
        default: break;
    }

    ctx->pc = 0x2bf830u;

    // 0x2bf830: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2bf830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2bf834: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2bf834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2bf838: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2bf838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2bf83c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2bf83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2bf840: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2bf840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf844: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2bf844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2bf848: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2bf848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2bf84c: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2BF84Cu;
    {
        const bool branch_taken_0x2bf84c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BF850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF84Cu;
        // 0x2bf850: 0xffb00050  sd          $s0, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf84c) {
            ctx->pc = 0x2BF8C8u;
            goto label_2bf8c8;
        }
    }
    ctx->pc = 0x2BF854u;
    // 0x2bf854: 0x27b30004  addiu       $s3, $sp, 0x4
    ctx->pc = 0x2bf854u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2bf858: 0x2410071c  addiu       $s0, $zero, 0x71C
    ctx->pc = 0x2bf858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x2bf85c: 0x0  nop
    ctx->pc = 0x2bf85cu;
    // NOP
label_2bf860:
    // 0x2bf860: 0x8f83b230  lw          $v1, -0x4DD0($gp)
    ctx->pc = 0x2bf860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2bf864: 0x2508018  mult        $s0, $s2, $s0
    ctx->pc = 0x2bf864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2bf868: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bf868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf86c: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x2bf86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2bf870: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2bf870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2bf874: 0x8c620180  lw          $v0, 0x180($v1)
    ctx->pc = 0x2bf874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x2bf878: 0x8c510160  lw          $s1, 0x160($v0)
    ctx->pc = 0x2bf878u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2bf87c: 0xc099286  jal         func_264A18
    ctx->pc = 0x2BF87Cu;
    SET_GPR_U32(ctx, 31, 0x2BF884u);
    ctx->pc = 0x2BF880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF87Cu;
    // 0x2bf880: 0x8e2402a8  lw          $a0, 0x2A8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264A18u, 0x2BF87Cu, 0x2BF884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF884u;
label_2bf884:
    // 0x2bf884: 0x8f84b230  lw          $a0, -0x4DD0($gp)
    ctx->pc = 0x2bf884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2bf888: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2bf888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bf88c: 0x8e2202a8  lw          $v0, 0x2A8($s1)
    ctx->pc = 0x2bf88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x2bf890: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2bf890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf894: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2bf894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2bf898: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2bf898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2bf89c: 0xc099b16  jal         func_266C58
    ctx->pc = 0x2BF89Cu;
    SET_GPR_U32(ctx, 31, 0x2BF8A4u);
    ctx->pc = 0x2BF8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF89Cu;
    // 0x2bf8a0: 0x2484008c  addiu       $a0, $a0, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C58u, 0x2BF89Cu, 0x2BF8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF8A4u;
label_2bf8a4:
    // 0x2bf8a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bf8a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf8a8: 0x8e2202a8  lw          $v0, 0x2A8($s1)
    ctx->pc = 0x2bf8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x2bf8ac: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BF8ACu;
    {
        const bool branch_taken_0x2bf8ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf8ac) {
            ctx->pc = 0x2BF8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF8ACu;
            // 0x2bf8b0: 0xae2302a8  sw          $v1, 0x2A8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF8B4u;
            goto label_2bf8b4;
        }
    }
    ctx->pc = 0x2BF8B4u;
label_2bf8b4:
    // 0x2bf8b4: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2bf8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2bf8b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2bf8b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2bf8bc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2bf8bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2bf8c0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2BF8C0u;
    {
        const bool branch_taken_0x2bf8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8C0u;
        // 0x2bf8c4: 0x2410071c  addiu       $s0, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8c0) {
            ctx->pc = 0x2BF860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf860;
        }
    }
    ctx->pc = 0x2BF8C8u;
label_2bf8c8:
    // 0x2bf8c8: 0x8f82b504  lw          $v0, -0x4AFC($gp)
    ctx->pc = 0x2bf8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948100)));
    // 0x2bf8cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bf8d0: 0x28430007  slti        $v1, $v0, 0x7
    ctx->pc = 0x2bf8d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2bf8d4: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2BF8D4u;
    {
        const bool branch_taken_0x2bf8d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8D4u;
        // 0x2bf8d8: 0xaf82b504  sw          $v0, -0x4AFC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8d4) {
            ctx->pc = 0x2BF904u;
            goto label_2bf904;
        }
    }
    ctx->pc = 0x2BF8DCu;
    // 0x2bf8dc: 0xc0afe48  jal         func_2BF920
    ctx->pc = 0x2BF8DCu;
    SET_GPR_U32(ctx, 31, 0x2BF8E4u);
    ctx->pc = 0x2BF8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF8DCu;
    // 0x2bf8e0: 0x8f84b508  lw          $a0, -0x4AF8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF920u, 0x2BF8DCu, 0x2BF8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF8E4u;
label_2bf8e4:
    // 0x2bf8e4: 0x8f82b508  lw          $v0, -0x4AF8($gp)
    ctx->pc = 0x2bf8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948104)));
    // 0x2bf8e8: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x2bf8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2bf8ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bf8f0: 0xaf80b504  sw          $zero, -0x4AFC($gp)
    ctx->pc = 0x2bf8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948100), GPR_U32(ctx, 0));
    // 0x2bf8f4: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x2bf8f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2bf8f8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BF8F8u;
    {
        const bool branch_taken_0x2bf8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8F8u;
        // 0x2bf8fc: 0xaf82b508  sw          $v0, -0x4AF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8f8) {
            ctx->pc = 0x2BF904u;
            goto label_2bf904;
        }
    }
    ctx->pc = 0x2BF900u;
    // 0x2bf900: 0xaf80b508  sw          $zero, -0x4AF8($gp)
    ctx->pc = 0x2bf900u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948104), GPR_U32(ctx, 0));
label_2bf904:
    // 0x2bf904: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2bf904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bf908: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x2bf908u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bf90c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2bf90cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bf910: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2bf910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bf914: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2bf914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bf918: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF918u;
        // 0x2bf91c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF920u;
}
