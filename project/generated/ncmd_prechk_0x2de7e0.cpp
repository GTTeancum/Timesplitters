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

// Function: ncmd_prechk
// Address: 0x2de7e0 - 0x2de95c
void ncmd_prechk_0x2de7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ncmd_prechk_0x2de7e0");
#endif

    switch (ctx->pc) {
        case 0x2de800u: goto label_2de800;
        case 0x2de80cu: goto label_2de80c;
        case 0x2de838u: goto label_2de838;
        case 0x2de85cu: goto label_2de85c;
        case 0x2de864u: goto label_2de864;
        case 0x2de874u: goto label_2de874;
        case 0x2de884u: goto label_2de884;
        case 0x2de8a0u: goto label_2de8a0;
        case 0x2de8a8u: goto label_2de8a8;
        case 0x2de8c8u: goto label_2de8c8;
        case 0x2de8dcu: goto label_2de8dc;
        case 0x2de900u: goto label_2de900;
        case 0x2de910u: goto label_2de910;
        default: break;
    }

    ctx->pc = 0x2de7e0u;

    // 0x2de7e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2de7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2de7e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2de7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2de7e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2de7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2de7ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2de7ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de7f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2de7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2de7f4: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2de7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2de7f8: 0xc0b7860  jal         func_2DE180
    ctx->pc = 0x2DE7F8u;
    SET_GPR_U32(ctx, 31, 0x2DE800u);
    ctx->pc = 0x2DE7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE7F8u;
    // 0x2de7fc: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE180u, 0x2DE7F8u, 0x2DE800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE800u;
label_2de800:
    // 0x2de800: 0x8e042fa0  lw          $a0, 0x2FA0($s0)
    ctx->pc = 0x2de800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12192)));
    // 0x2de804: 0xc0b405c  jal         func_2D0170
    ctx->pc = 0x2DE804u;
    SET_GPR_U32(ctx, 31, 0x2DE80Cu);
    ctx->pc = 0x2D0170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0170u, 0x2DE804u, 0x2DE80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE80Cu;
label_2de80c:
    // 0x2de80c: 0x8e032fa0  lw          $v1, 0x2FA0($s0)
    ctx->pc = 0x2de80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12192)));
    // 0x2de810: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DE810u;
    {
        const bool branch_taken_0x2de810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE810u;
        // 0x2de814: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de810) {
            ctx->pc = 0x2DE840u;
            goto label_2de840;
        }
    }
    ctx->pc = 0x2DE818u;
    // 0x2de818: 0x8c432f90  lw          $v1, 0x2F90($v0)
    ctx->pc = 0x2de818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12176)));
    // 0x2de81c: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DE81Cu;
    {
        const bool branch_taken_0x2de81c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2DE820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE81Cu;
        // 0x2de820: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de81c) {
            ctx->pc = 0x2DE874u;
            goto label_2de874;
        }
    }
    ctx->pc = 0x2DE824u;
    // 0x2de824: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2de824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2de828: 0x8c462f98  lw          $a2, 0x2F98($v0)
    ctx->pc = 0x2de828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12184)));
    // 0x2de82c: 0x2484b360  addiu       $a0, $a0, -0x4CA0
    ctx->pc = 0x2de82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947680));
    // 0x2de830: 0xc0b95c8  jal         func_2E5720
    ctx->pc = 0x2DE830u;
    SET_GPR_U32(ctx, 31, 0x2DE838u);
    ctx->pc = 0x2DE834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE830u;
    // 0x2de834: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5720u, 0x2DE830u, 0x2DE838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE838u;
label_2de838:
    // 0x2de838: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2DE838u;
    {
        const bool branch_taken_0x2de838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE838u;
        // 0x2de83c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de838) {
            ctx->pc = 0x2DE944u;
            goto label_2de944;
        }
    }
    ctx->pc = 0x2DE840u;
label_2de840:
    // 0x2de840: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2de840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2de844: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2de844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2de848: 0x8c443dc0  lw          $a0, 0x3DC0($v0)
    ctx->pc = 0x2de848u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FF3DC0u));
    // 0x2de84c: 0x3c0501ff  lui         $a1, 0x1FF
    ctx->pc = 0x2de84cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)511 << 16));
    // 0x2de850: 0xac712f98  sw          $s1, 0x2F98($v1)
    ctx->pc = 0x2de850u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x382F98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x382F98u, _value); } while (0);
    // 0x2de854: 0xc0b4008  jal         func_2D0020
    ctx->pc = 0x2DE854u;
    SET_GPR_U32(ctx, 31, 0x2DE85Cu);
    ctx->pc = 0x2DE858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE854u;
    // 0x2de858: 0x24a53dc8  addiu       $a1, $a1, 0x3DC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0020u, 0x2DE854u, 0x2DE85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE85Cu;
label_2de85c:
    // 0x2de85c: 0xc0b7d6e  jal         func_2DF5B8
    ctx->pc = 0x2DE85Cu;
    SET_GPR_U32(ctx, 31, 0x2DE864u);
    ctx->pc = 0x2DE860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE85Cu;
    // 0x2de860: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF5B8u, 0x2DE85Cu, 0x2DE864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE864u;
label_2de864:
    // 0x2de864: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE864u;
    {
        const bool branch_taken_0x2de864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de864) {
            ctx->pc = 0x2DE87Cu;
            goto label_2de87c;
        }
    }
    ctx->pc = 0x2DE86Cu;
    // 0x2de86c: 0xc0b4050  jal         func_2D0140
    ctx->pc = 0x2DE86Cu;
    SET_GPR_U32(ctx, 31, 0x2DE874u);
    ctx->pc = 0x2DE870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE86Cu;
    // 0x2de870: 0x8e042fa0  lw          $a0, 0x2FA0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0140u, 0x2DE86Cu, 0x2DE874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE874u;
label_2de874:
    // 0x2de874: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2DE874u;
    {
        const bool branch_taken_0x2de874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE874u;
        // 0x2de878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de874) {
            ctx->pc = 0x2DE944u;
            goto label_2de944;
        }
    }
    ctx->pc = 0x2DE87Cu;
label_2de87c:
    // 0x2de87c: 0xc0b4948  jal         func_2D2520
    ctx->pc = 0x2DE87Cu;
    SET_GPR_U32(ctx, 31, 0x2DE884u);
    ctx->pc = 0x2DE880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE87Cu;
    // 0x2de880: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2520u, 0x2DE87Cu, 0x2DE884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE884u;
label_2de884:
    // 0x2de884: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2de884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2de888: 0x8c622fbc  lw          $v0, 0x2FBC($v1)
    ctx->pc = 0x2de888u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x382FBCu));
    // 0x2de88c: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2DE88Cu;
    {
        const bool branch_taken_0x2de88c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2DE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE88Cu;
        // 0x2de890: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de88c) {
            ctx->pc = 0x2DE940u;
            goto label_2de940;
        }
    }
    ctx->pc = 0x2DE894u;
    // 0x2de894: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DE894u;
    {
        const bool branch_taken_0x2de894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE894u;
        // 0x2de898: 0x3c1101ff  lui         $s1, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de894) {
            ctx->pc = 0x2DE8C4u;
            goto label_2de8c4;
        }
    }
    ctx->pc = 0x2DE89Cu;
    // 0x2de89c: 0x0  nop
    ctx->pc = 0x2de89cu;
    // NOP
label_2de8a0:
    // 0x2de8a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2de8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2de8a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2de8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2de8a8:
    // 0x2de8a8: 0x0  nop
    ctx->pc = 0x2de8a8u;
    // NOP
    // 0x2de8ac: 0x0  nop
    ctx->pc = 0x2de8acu;
    // NOP
    // 0x2de8b0: 0x0  nop
    ctx->pc = 0x2de8b0u;
    // NOP
    // 0x2de8b4: 0x0  nop
    ctx->pc = 0x2de8b4u;
    // NOP
    // 0x2de8b8: 0x0  nop
    ctx->pc = 0x2de8b8u;
    // NOP
    // 0x2de8bc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DE8BCu;
    {
        const bool branch_taken_0x2de8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DE8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8BCu;
        // 0x2de8c0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de8bc) {
            ctx->pc = 0x2DE8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de8a8;
        }
    }
    ctx->pc = 0x2DE8C4u;
label_2de8c4:
    // 0x2de8c4: 0x263040c0  addiu       $s0, $s1, 0x40C0
    ctx->pc = 0x2de8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16576));
label_2de8c8:
    // 0x2de8c8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2de8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2de8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de8d0: 0x34a50595  ori         $a1, $a1, 0x595
    ctx->pc = 0x2de8d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1429);
    // 0x2de8d4: 0xc0b4ad6  jal         func_2D2B58
    ctx->pc = 0x2DE8D4u;
    SET_GPR_U32(ctx, 31, 0x2DE8DCu);
    ctx->pc = 0x2DE8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE8D4u;
    // 0x2de8d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2B58u, 0x2DE8D4u, 0x2DE8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE8DCu;
label_2de8dc:
    // 0x2de8dc: 0x4430015  bgezl       $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DE8DCu;
    {
        const bool branch_taken_0x2de8dc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2de8dc) {
            ctx->pc = 0x2DE8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE8DCu;
            // 0x2de8e0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE934u;
            goto label_2de934;
        }
    }
    ctx->pc = 0x2DE8E4u;
    // 0x2de8e4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2de8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2de8e8: 0x8c432f90  lw          $v1, 0x2F90($v0)
    ctx->pc = 0x2de8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x382F90u));
    // 0x2de8ec: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE8ECu;
    {
        const bool branch_taken_0x2de8ec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2DE8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8ECu;
        // 0x2de8f0: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de8ec) {
            ctx->pc = 0x2DE904u;
            goto label_2de904;
        }
    }
    ctx->pc = 0x2DE8F4u;
    // 0x2de8f4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2de8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2de8f8: 0xc0b95c8  jal         func_2E5720
    ctx->pc = 0x2DE8F8u;
    SET_GPR_U32(ctx, 31, 0x2DE900u);
    ctx->pc = 0x2DE8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE8F8u;
    // 0x2de8fc: 0x2484b388  addiu       $a0, $a0, -0x4C78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5720u, 0x2DE8F8u, 0x2DE900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE900u;
label_2de900:
    // 0x2de900: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2de900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_2de904:
    // 0x2de904: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2de904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2de908: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2de908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2de90c: 0x0  nop
    ctx->pc = 0x2de90cu;
    // NOP
label_2de910:
    // 0x2de910: 0x0  nop
    ctx->pc = 0x2de910u;
    // NOP
    // 0x2de914: 0x0  nop
    ctx->pc = 0x2de914u;
    // NOP
    // 0x2de918: 0x0  nop
    ctx->pc = 0x2de918u;
    // NOP
    // 0x2de91c: 0x0  nop
    ctx->pc = 0x2de91cu;
    // NOP
    // 0x2de920: 0x0  nop
    ctx->pc = 0x2de920u;
    // NOP
    // 0x2de924: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DE924u;
    {
        const bool branch_taken_0x2de924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DE928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE924u;
        // 0x2de928: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de924) {
            ctx->pc = 0x2DE910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de910;
        }
    }
    ctx->pc = 0x2DE92Cu;
    // 0x2de92c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x2DE92Cu;
    {
        const bool branch_taken_0x2de92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE92Cu;
        // 0x2de930: 0x263040c0  addiu       $s0, $s1, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de92c) {
            ctx->pc = 0x2DE8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de8c8;
        }
    }
    ctx->pc = 0x2DE934u;
label_2de934:
    // 0x2de934: 0x1040ffda  beqz        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2DE934u;
    {
        const bool branch_taken_0x2de934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE934u;
        // 0x2de938: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de934) {
            ctx->pc = 0x2DE8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de8a0;
        }
    }
    ctx->pc = 0x2DE93Cu;
    // 0x2de93c: 0xae402fbc  sw          $zero, 0x2FBC($s2)
    ctx->pc = 0x2de93cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12220), GPR_U32(ctx, 0));
label_2de940:
    // 0x2de940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2de940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de944:
    // 0x2de944: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2de944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de948: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2de948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de94c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2de94cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de950: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2de950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de954: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE954u;
        // 0x2de958: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE95Cu;
}
