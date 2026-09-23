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

// Function: PowerOffCB
// Address: 0x2de390 - 0x2de4f0
void PowerOffCB_0x2de390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PowerOffCB_0x2de390");
#endif

    switch (ctx->pc) {
        case 0x2de3b4u: goto label_2de3b4;
        case 0x2de3d0u: goto label_2de3d0;
        case 0x2de3e0u: goto label_2de3e0;
        case 0x2de418u: goto label_2de418;
        case 0x2de42cu: goto label_2de42c;
        case 0x2de450u: goto label_2de450;
        case 0x2de460u: goto label_2de460;
        case 0x2de4ccu: goto label_2de4cc;
        default: break;
    }

    ctx->pc = 0x2de390u;

    // 0x2de390: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2de390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2de394: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2de394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de398: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2de398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2de39c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2de39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2de3a0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2de3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2de3a4: 0x3c1201ff  lui         $s2, 0x1FF
    ctx->pc = 0x2de3a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)511 << 16));
    // 0x2de3a8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2de3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2de3ac: 0xc0b4948  jal         func_2D2520
    ctx->pc = 0x2DE3ACu;
    SET_GPR_U32(ctx, 31, 0x2DE3B4u);
    ctx->pc = 0x2DE3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE3ACu;
    // 0x2de3b0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2520u, 0x2DE3ACu, 0x2DE3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE3B4u;
label_2de3b4:
    // 0x2de3b4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2de3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2de3b8: 0x8c622fb4  lw          $v0, 0x2FB4($v1)
    ctx->pc = 0x2de3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x382FB4u));
    // 0x2de3bc: 0x4410034  bgez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2DE3BCu;
    {
        const bool branch_taken_0x2de3bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2DE3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3BCu;
        // 0x2de3c0: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3bc) {
            ctx->pc = 0x2DE490u;
            goto label_2de490;
        }
    }
    ctx->pc = 0x2DE3C4u;
    // 0x2de3c4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2DE3C4u;
    {
        const bool branch_taken_0x2de3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3C4u;
        // 0x2de3c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3c4) {
            ctx->pc = 0x2DE414u;
            goto label_2de414;
        }
    }
    ctx->pc = 0x2DE3CCu;
    // 0x2de3cc: 0x0  nop
    ctx->pc = 0x2de3ccu;
    // NOP
label_2de3d0:
    // 0x2de3d0: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x2de3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2de3d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2de3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2de3d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2de3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2de3dc: 0x0  nop
    ctx->pc = 0x2de3dcu;
    // NOP
label_2de3e0:
    // 0x2de3e0: 0x0  nop
    ctx->pc = 0x2de3e0u;
    // NOP
    // 0x2de3e4: 0x0  nop
    ctx->pc = 0x2de3e4u;
    // NOP
    // 0x2de3e8: 0x0  nop
    ctx->pc = 0x2de3e8u;
    // NOP
    // 0x2de3ec: 0x0  nop
    ctx->pc = 0x2de3ecu;
    // NOP
    // 0x2de3f0: 0x0  nop
    ctx->pc = 0x2de3f0u;
    // NOP
    // 0x2de3f4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DE3F4u;
    {
        const bool branch_taken_0x2de3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DE3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3F4u;
        // 0x2de3f8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3f4) {
            ctx->pc = 0x2DE3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de3e0;
        }
    }
    ctx->pc = 0x2DE3FCu;
    // 0x2de3fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2de3fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de400: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x2de400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2de404: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE404u;
    {
        const bool branch_taken_0x2de404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE404u;
        // 0x2de408: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de404) {
            ctx->pc = 0x2DE414u;
            goto label_2de414;
        }
    }
    ctx->pc = 0x2DE40Cu;
    // 0x2de40c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2DE40Cu;
    {
        const bool branch_taken_0x2de40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE40Cu;
        // 0x2de410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de40c) {
            ctx->pc = 0x2DE4D4u;
            goto label_2de4d4;
        }
    }
    ctx->pc = 0x2DE414u;
label_2de414:
    // 0x2de414: 0x26503ea0  addiu       $s0, $s2, 0x3EA0
    ctx->pc = 0x2de414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16032));
label_2de418:
    // 0x2de418: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2de418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2de41c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de420: 0x34a50596  ori         $a1, $a1, 0x596
    ctx->pc = 0x2de420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1430);
    // 0x2de424: 0xc0b4ad6  jal         func_2D2B58
    ctx->pc = 0x2DE424u;
    SET_GPR_U32(ctx, 31, 0x2DE42Cu);
    ctx->pc = 0x2DE428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE424u;
    // 0x2de428: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2B58u, 0x2DE424u, 0x2DE42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE42Cu;
label_2de42c:
    // 0x2de42c: 0x4430015  bgezl       $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DE42Cu;
    {
        const bool branch_taken_0x2de42c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2de42c) {
            ctx->pc = 0x2DE430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE42Cu;
            // 0x2de430: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE484u;
            goto label_2de484;
        }
    }
    ctx->pc = 0x2DE434u;
    // 0x2de434: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2de434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2de438: 0x8c432f90  lw          $v1, 0x2F90($v0)
    ctx->pc = 0x2de438u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x382F90u));
    // 0x2de43c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE43Cu;
    {
        const bool branch_taken_0x2de43c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2DE440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE43Cu;
        // 0x2de440: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de43c) {
            ctx->pc = 0x2DE454u;
            goto label_2de454;
        }
    }
    ctx->pc = 0x2DE444u;
    // 0x2de444: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2de444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2de448: 0xc0b95c8  jal         func_2E5720
    ctx->pc = 0x2DE448u;
    SET_GPR_U32(ctx, 31, 0x2DE450u);
    ctx->pc = 0x2DE44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE448u;
    // 0x2de44c: 0x2484b2d0  addiu       $a0, $a0, -0x4D30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5720u, 0x2DE448u, 0x2DE450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE450u;
label_2de450:
    // 0x2de450: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2de450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_2de454:
    // 0x2de454: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2de454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2de458: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2de458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2de45c: 0x0  nop
    ctx->pc = 0x2de45cu;
    // NOP
label_2de460:
    // 0x2de460: 0x0  nop
    ctx->pc = 0x2de460u;
    // NOP
    // 0x2de464: 0x0  nop
    ctx->pc = 0x2de464u;
    // NOP
    // 0x2de468: 0x0  nop
    ctx->pc = 0x2de468u;
    // NOP
    // 0x2de46c: 0x0  nop
    ctx->pc = 0x2de46cu;
    // NOP
    // 0x2de470: 0x0  nop
    ctx->pc = 0x2de470u;
    // NOP
    // 0x2de474: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DE474u;
    {
        const bool branch_taken_0x2de474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE474u;
        // 0x2de478: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de474) {
            ctx->pc = 0x2DE460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de460;
        }
    }
    ctx->pc = 0x2DE47Cu;
    // 0x2de47c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x2DE47Cu;
    {
        const bool branch_taken_0x2de47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE47Cu;
        // 0x2de480: 0x26503ea0  addiu       $s0, $s2, 0x3EA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de47c) {
            ctx->pc = 0x2DE418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de418;
        }
    }
    ctx->pc = 0x2DE484u;
label_2de484:
    // 0x2de484: 0x1040ffd2  beqz        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2DE484u;
    {
        const bool branch_taken_0x2de484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE484u;
        // 0x2de488: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de484) {
            ctx->pc = 0x2DE3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de3d0;
        }
    }
    ctx->pc = 0x2DE48Cu;
    // 0x2de48c: 0xae602fb4  sw          $zero, 0x2FB4($s3)
    ctx->pc = 0x2de48cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12212), GPR_U32(ctx, 0));
label_2de490:
    // 0x2de490: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2de490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2de494: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2de494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2de498: 0x24453ec8  addiu       $a1, $v0, 0x3EC8
    ctx->pc = 0x2de498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16072));
    // 0x2de49c: 0x3c0b002e  lui         $t3, 0x2E
    ctx->pc = 0x2de49cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)46 << 16));
    // 0x2de4a0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2de4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2de4a4: 0x26443ea0  addiu       $a0, $s2, 0x3EA0
    ctx->pc = 0x2de4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16032));
    // 0x2de4a8: 0xac433ec8  sw          $v1, 0x3EC8($v0)
    ctx->pc = 0x2de4a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1FF3EC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FF3EC8u, _value); } while (0);
    // 0x2de4ac: 0x256bde80  addiu       $t3, $t3, -0x2180
    ctx->pc = 0x2de4acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294958720));
    // 0x2de4b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2de4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de4b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2de4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de4b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2de4b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de4bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2de4bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de4c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2de4c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de4c4: 0xc0b4b42  jal         func_2D2D08
    ctx->pc = 0x2DE4C4u;
    SET_GPR_U32(ctx, 31, 0x2DE4CCu);
    ctx->pc = 0x2DE4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE4C4u;
    // 0x2de4c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D08u, 0x2DE4C4u, 0x2DE4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE4CCu;
label_2de4cc:
    // 0x2de4cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2de4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2de4d0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2de4d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2de4d4:
    // 0x2de4d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2de4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2de4d8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2de4d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2de4dc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2de4dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de4e0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2de4e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de4e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2de4e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4E8u;
        // 0x2de4ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE4F0u;
}
