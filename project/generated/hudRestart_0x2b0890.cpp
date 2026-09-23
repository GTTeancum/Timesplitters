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

// Function: hudRestart
// Address: 0x2b0890 - 0x2b0988
void hudRestart_0x2b0890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudRestart_0x2b0890");
#endif

    switch (ctx->pc) {
        case 0x2b08bcu: goto label_2b08bc;
        case 0x2b08c8u: goto label_2b08c8;
        case 0x2b08dcu: goto label_2b08dc;
        case 0x2b08f4u: goto label_2b08f4;
        case 0x2b08fcu: goto label_2b08fc;
        case 0x2b0928u: goto label_2b0928;
        case 0x2b093cu: goto label_2b093c;
        default: break;
    }

    ctx->pc = 0x2b0890u;

    // 0x2b0890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b0890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b0894: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2b0894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2b0898: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b0898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b089c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b089cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b08a0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b08a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b08a4: 0x2484f838  addiu       $a0, $a0, -0x7C8
    ctx->pc = 0x2b08a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965304));
    // 0x2b08a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b08a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b08ac: 0x24060580  addiu       $a2, $zero, 0x580
    ctx->pc = 0x2b08acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1408));
    // 0x2b08b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b08b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b08b4: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2B08B4u;
    SET_GPR_U32(ctx, 31, 0x2B08BCu);
    ctx->pc = 0x2B08B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B08B4u;
    // 0x2b08b8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2B08B4u, 0x2B08BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B08BCu;
label_2b08bc:
    // 0x2b08bc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2b08bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2b08c0: 0xc08718c  jal         func_21C630
    ctx->pc = 0x2B08C0u;
    SET_GPR_U32(ctx, 31, 0x2B08C8u);
    ctx->pc = 0x2B08C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B08C0u;
    // 0x2b08c4: 0x24849920  addiu       $a0, $a0, -0x66E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x2B08C0u, 0x2B08C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B08C8u;
label_2b08c8:
    // 0x2b08c8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b08c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b08cc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2b08ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2b08d0: 0x24849940  addiu       $a0, $a0, -0x66C0
    ctx->pc = 0x2b08d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940992));
    // 0x2b08d4: 0xc08718c  jal         func_21C630
    ctx->pc = 0x2B08D4u;
    SET_GPR_U32(ctx, 31, 0x2B08DCu);
    ctx->pc = 0x2B08D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B08D4u;
    // 0x2b08d8: 0xaf83b9a8  sw          $v1, -0x4658($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949288), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x2B08D4u, 0x2B08DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B08DCu;
label_2b08dc:
    // 0x2b08dc: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b08dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b08e0: 0x8f84b9b0  lw          $a0, -0x4650($gp)
    ctx->pc = 0x2b08e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949296)));
    // 0x2b08e4: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B08E4u;
    {
        const bool branch_taken_0x2b08e4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2B08E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B08E4u;
        // 0x2b08e8: 0xaf83b9a4  sw          $v1, -0x465C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b08e4) {
            ctx->pc = 0x2B0908u;
            goto label_2b0908;
        }
    }
    ctx->pc = 0x2B08ECu;
    // 0x2b08ec: 0xc0ac13e  jal         func_2B04F8
    ctx->pc = 0x2B08ECu;
    SET_GPR_U32(ctx, 31, 0x2B08F4u);
    ctx->pc = 0x2B08F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B08ECu;
    // 0x2b08f0: 0x3c1301ff  lui         $s3, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)511 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B04F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F8u, 0x2B08ECu, 0x2B08F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B08F4u;
label_2b08f4:
    // 0x2b08f4: 0xc08718c  jal         func_21C630
    ctx->pc = 0x2B08F4u;
    SET_GPR_U32(ctx, 31, 0x2B08FCu);
    ctx->pc = 0x2B08F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B08F4u;
    // 0x2b08f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x2B08F4u, 0x2B08FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B08FCu;
label_2b08fc:
    // 0x2b08fc: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b08fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b0900: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0900u;
    {
        const bool branch_taken_0x2b0900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0900u;
        // 0x2b0904: 0xaf83b9ac  sw          $v1, -0x4654($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0900) {
            ctx->pc = 0x2B0914u;
            goto label_2b0914;
        }
    }
    ctx->pc = 0x2B0908u;
label_2b0908:
    // 0x2b0908: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b0908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b090c: 0xaf82b9ac  sw          $v0, -0x4654($gp)
    ctx->pc = 0x2b090cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949292), GPR_U32(ctx, 2));
    // 0x2b0910: 0x3c1301ff  lui         $s3, 0x1FF
    ctx->pc = 0x2b0910u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)511 << 16));
label_2b0914:
    // 0x2b0914: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2b0914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2b0918: 0x2452af80  addiu       $s2, $v0, -0x5080
    ctx->pc = 0x2b0918u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946688));
    // 0x2b091c: 0x2671af40  addiu       $s1, $s3, -0x50C0
    ctx->pc = 0x2b091cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946624));
    // 0x2b0920: 0x2410000e  addiu       $s0, $zero, 0xE
    ctx->pc = 0x2b0920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b0924: 0x0  nop
    ctx->pc = 0x2b0924u;
    // NOP
label_2b0928:
    // 0x2b0928: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b0928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b092c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B092Cu;
    {
        const bool branch_taken_0x2b092c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b092c) {
            ctx->pc = 0x2B0930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B092Cu;
            // 0x2b0930: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0948u;
            goto label_2b0948;
        }
    }
    ctx->pc = 0x2B0934u;
    // 0x2b0934: 0xc08718c  jal         func_21C630
    ctx->pc = 0x2B0934u;
    SET_GPR_U32(ctx, 31, 0x2B093Cu);
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x2B0934u, 0x2B093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B093Cu;
label_2b093c:
    // 0x2b093c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b093cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b0940: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b0940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2b0944: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b0944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2b0948:
    // 0x2b0948: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2b0948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2b094c: 0x601fff6  bgez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B094Cu;
    {
        const bool branch_taken_0x2b094c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2B0950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B094Cu;
        // 0x2b0950: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b094c) {
            ctx->pc = 0x2B0928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0928;
        }
    }
    ctx->pc = 0x2B0954u;
    // 0x2b0954: 0x2663af40  addiu       $v1, $s3, -0x50C0
    ctx->pc = 0x2b0954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946624));
    // 0x2b0958: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b0958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b095c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2b095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2b0960: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b0960u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0964: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b0964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0968: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b0968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b096c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b096cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0970: 0xaf80b9a0  sw          $zero, -0x4660($gp)
    ctx->pc = 0x2b0970u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949280), GPR_U32(ctx, 0));
    // 0x2b0974: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x2b0974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x2b0978: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2b0978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2b097c: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x2b097cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x2b0980: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0980u;
        // 0x2b0984: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0988u;
}
