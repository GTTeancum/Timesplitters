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

// Function: guiRestart
// Address: 0x22e350 - 0x22e420
void guiRestart_0x22e350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("guiRestart_0x22e350");
#endif

    switch (ctx->pc) {
        case 0x22e388u: goto label_22e388;
        case 0x22e394u: goto label_22e394;
        case 0x22e3c8u: goto label_22e3c8;
        case 0x22e3e4u: goto label_22e3e4;
        default: break;
    }

    ctx->pc = 0x22e350u;

    // 0x22e350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22e350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22e354: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x22e354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x22e358: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x22e358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x22e35c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22e35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22e360: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22e360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22e364: 0x246302d0  addiu       $v1, $v1, 0x2D0
    ctx->pc = 0x22e364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
    // 0x22e368: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22e368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22e36c: 0x24429a48  addiu       $v0, $v0, -0x65B8
    ctx->pc = 0x22e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941256));
    // 0x22e370: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22e370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22e374: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x22e374u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22e378: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22e378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22e37c: 0x24710098  addiu       $s1, $v1, 0x98
    ctx->pc = 0x22e37cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
    // 0x22e380: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x22e380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22e384: 0x0  nop
    ctx->pc = 0x22e384u;
    // NOP
label_22e388:
    // 0x22e388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22e388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e38c: 0xc08718c  jal         func_21C630
    ctx->pc = 0x22E38Cu;
    SET_GPR_U32(ctx, 31, 0x22E394u);
    ctx->pc = 0x22E390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E38Cu;
    // 0x22e390: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x22E38Cu, 0x22E394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E394u;
label_22e394:
    // 0x22e394: 0x2631ffda  addiu       $s1, $s1, -0x26
    ctx->pc = 0x22e394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967258));
    // 0x22e398: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x22e398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x22e39c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x22e39cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x22e3a0: 0x601fff9  bgez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22E3A0u;
    {
        const bool branch_taken_0x22e3a0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x22E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3A0u;
        // 0x22e3a4: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e3a0) {
            ctx->pc = 0x22E388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e388;
        }
    }
    ctx->pc = 0x22E3A8u;
    // 0x22e3a8: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x22e3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x22e3ac: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x22e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x22e3b0: 0x8f859f70  lw          $a1, -0x6090($gp)
    ctx->pc = 0x22e3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x22e3b4: 0x24520910  addiu       $s2, $v0, 0x910
    ctx->pc = 0x22e3b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2320));
    // 0x22e3b8: 0x24710390  addiu       $s1, $v1, 0x390
    ctx->pc = 0x22e3b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 912));
    // 0x22e3bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22e3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e3c0: 0x24130067  addiu       $s3, $zero, 0x67
    ctx->pc = 0x22e3c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x22e3c4: 0x0  nop
    ctx->pc = 0x22e3c4u;
    // NOP
label_22e3c8:
    // 0x22e3c8: 0x10b30004  beq         $a1, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E3C8u;
    {
        const bool branch_taken_0x22e3c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        ctx->pc = 0x22E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3C8u;
        // 0x22e3cc: 0x2602ffe8  addiu       $v0, $s0, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e3c8) {
            ctx->pc = 0x22E3DCu;
            goto label_22e3dc;
        }
    }
    ctx->pc = 0x22E3D0u;
    // 0x22e3d0: 0x2c42000c  sltiu       $v0, $v0, 0xC
    ctx->pc = 0x22e3d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x22e3d4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22E3D4u;
    {
        const bool branch_taken_0x22e3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e3d4) {
            ctx->pc = 0x22E3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E3D4u;
            // 0x22e3d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E3F4u;
            goto label_22e3f4;
        }
    }
    ctx->pc = 0x22E3DCu;
label_22e3dc:
    // 0x22e3dc: 0xc08718c  jal         func_21C630
    ctx->pc = 0x22E3DCu;
    SET_GPR_U32(ctx, 31, 0x22E3E4u);
    ctx->pc = 0x22E3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E3DCu;
    // 0x22e3e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x22E3DCu, 0x22E3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E3E4u;
label_22e3e4:
    // 0x22e3e4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x22e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x22e3e8: 0x8f859f70  lw          $a1, -0x6090($gp)
    ctx->pc = 0x22e3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x22e3ec: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x22e3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x22e3f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22e3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22e3f4:
    // 0x22e3f4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x22e3f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x22e3f8: 0x2a020025  slti        $v0, $s0, 0x25
    ctx->pc = 0x22e3f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x22e3fc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x22E3FCu;
    {
        const bool branch_taken_0x22e3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3FCu;
        // 0x22e400: 0x26310026  addiu       $s1, $s1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e3fc) {
            ctx->pc = 0x22E3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e3c8;
        }
    }
    ctx->pc = 0x22E404u;
    // 0x22e404: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22e404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e408: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22e408u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e40c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22e40cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e410: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22e410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22e414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e418: 0x3e00008  jr          $ra
    ctx->pc = 0x22E418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E418u;
        // 0x22e41c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E420u;
}
