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

// Function: clearvram
// Address: 0x201880 - 0x201a5c
void clearvram_0x201880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("clearvram_0x201880");
#endif

    switch (ctx->pc) {
        case 0x2018b4u: goto label_2018b4;
        case 0x2018c8u: goto label_2018c8;
        case 0x2018d0u: goto label_2018d0;
        case 0x2018e4u: goto label_2018e4;
        case 0x2018f0u: goto label_2018f0;
        case 0x2018fcu: goto label_2018fc;
        case 0x201908u: goto label_201908;
        case 0x201914u: goto label_201914;
        case 0x201920u: goto label_201920;
        case 0x20192cu: goto label_20192c;
        case 0x201938u: goto label_201938;
        case 0x201950u: goto label_201950;
        case 0x20195cu: goto label_20195c;
        case 0x201968u: goto label_201968;
        case 0x201974u: goto label_201974;
        case 0x201980u: goto label_201980;
        case 0x20198cu: goto label_20198c;
        case 0x2019b8u: goto label_2019b8;
        case 0x2019c4u: goto label_2019c4;
        case 0x2019d0u: goto label_2019d0;
        case 0x2019dcu: goto label_2019dc;
        case 0x2019ecu: goto label_2019ec;
        case 0x2019f8u: goto label_2019f8;
        case 0x201a00u: goto label_201a00;
        case 0x201a08u: goto label_201a08;
        case 0x201a20u: goto label_201a20;
        case 0x201a30u: goto label_201a30;
        case 0x201a3cu: goto label_201a3c;
        default: break;
    }

    ctx->pc = 0x201880u;

    // 0x201880: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x201880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x201884: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x201884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x201888: 0x309100ff  andi        $s1, $a0, 0xFF
    ctx->pc = 0x201888u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x20188c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x20188cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x201890: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x201890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x201894: 0x30f300ff  andi        $s3, $a3, 0xFF
    ctx->pc = 0x201894u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x201898: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x201898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20189c: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x20189cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2018a0: 0x30d000ff  andi        $s0, $a2, 0xFF
    ctx->pc = 0x2018a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2018a4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2018a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2018a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2018a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2018ac: 0xc0b3c54  jal         func_2CF150
    ctx->pc = 0x2018ACu;
    SET_GPR_U32(ctx, 31, 0x2018B4u);
    ctx->pc = 0x2018B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2018ACu;
    // 0x2018b0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF150u, 0x2018ACu, 0x2018B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2018B4u;
label_2018b4:
    // 0x2018b4: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x2018b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x2018b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2018b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2018bc: 0x24a536b0  addiu       $a1, $a1, 0x36B0
    ctx->pc = 0x2018bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14000));
    // 0x2018c0: 0xc0b3f0e  jal         func_2CFC38
    ctx->pc = 0x2018C0u;
    SET_GPR_U32(ctx, 31, 0x2018C8u);
    ctx->pc = 0x2018C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2018C0u;
    // 0x2018c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC38u, 0x2018C0u, 0x2018C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2018C8u;
label_2018c8:
    // 0x2018c8: 0xc0b3f12  jal         func_2CFC48
    ctx->pc = 0x2018C8u;
    SET_GPR_U32(ctx, 31, 0x2018D0u);
    ctx->pc = 0x2018CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2018C8u;
    // 0x2018cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC48u, 0x2018C8u, 0x2018D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2018D0u;
label_2018d0:
    // 0x2018d0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2018d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2018d4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2018d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2018d8: 0x34a58009  ori         $a1, $a1, 0x8009
    ctx->pc = 0x2018d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32777);
    // 0x2018dc: 0xc0b3f36  jal         func_2CFCD8
    ctx->pc = 0x2018DCu;
    SET_GPR_U32(ctx, 31, 0x2018E4u);
    ctx->pc = 0x2018E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2018DCu;
    // 0x2018e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCD8u, 0x2018DCu, 0x2018E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2018E4u;
label_2018e4:
    // 0x2018e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2018e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2018e8: 0xc0b3f36  jal         func_2CFCD8
    ctx->pc = 0x2018E8u;
    SET_GPR_U32(ctx, 31, 0x2018F0u);
    ctx->pc = 0x2018ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2018E8u;
    // 0x2018ec: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCD8u, 0x2018E8u, 0x2018F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2018F0u;
label_2018f0:
    // 0x2018f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2018f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2018f4: 0xc0b3f36  jal         func_2CFCD8
    ctx->pc = 0x2018F4u;
    SET_GPR_U32(ctx, 31, 0x2018FCu);
    ctx->pc = 0x2018F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2018F4u;
    // 0x2018f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCD8u, 0x2018F4u, 0x2018FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2018FCu;
label_2018fc:
    // 0x2018fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2018fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201900: 0xc0b3f36  jal         func_2CFCD8
    ctx->pc = 0x201900u;
    SET_GPR_U32(ctx, 31, 0x201908u);
    ctx->pc = 0x201904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201900u;
    // 0x201904: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCD8u, 0x201900u, 0x201908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201908u;
label_201908:
    // 0x201908: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x201908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20190c: 0xc0b3f36  jal         func_2CFCD8
    ctx->pc = 0x20190Cu;
    SET_GPR_U32(ctx, 31, 0x201914u);
    ctx->pc = 0x201910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20190Cu;
    // 0x201910: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCD8u, 0x20190Cu, 0x201914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201914u;
label_201914:
    // 0x201914: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x201914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201918: 0xc0b3f36  jal         func_2CFCD8
    ctx->pc = 0x201918u;
    SET_GPR_U32(ctx, 31, 0x201920u);
    ctx->pc = 0x20191Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201918u;
    // 0x20191c: 0x2405004c  addiu       $a1, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCD8u, 0x201918u, 0x201920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201920u;
label_201920:
    // 0x201920: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x201920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201924: 0xc0b3f36  jal         func_2CFCD8
    ctx->pc = 0x201924u;
    SET_GPR_U32(ctx, 31, 0x20192Cu);
    ctx->pc = 0x201928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201924u;
    // 0x201928: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCD8u, 0x201924u, 0x20192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20192Cu;
label_20192c:
    // 0x20192c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20192cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201930: 0xc0b3f36  jal         func_2CFCD8
    ctx->pc = 0x201930u;
    SET_GPR_U32(ctx, 31, 0x201938u);
    ctx->pc = 0x201934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201930u;
    // 0x201934: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCD8u, 0x201930u, 0x201938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201938u;
label_201938:
    // 0x201938: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x201938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x20193c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x20193cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x201940: 0x34a50400  ori         $a1, $a1, 0x400
    ctx->pc = 0x201940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1024);
    // 0x201944: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x201944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x201948: 0xc0b3f36  jal         func_2CFCD8
    ctx->pc = 0x201948u;
    SET_GPR_U32(ctx, 31, 0x201950u);
    ctx->pc = 0x20194Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201948u;
    // 0x20194c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCD8u, 0x201948u, 0x201950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201950u;
label_201950:
    // 0x201950: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x201950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201954: 0xc0b3f36  jal         func_2CFCD8
    ctx->pc = 0x201954u;
    SET_GPR_U32(ctx, 31, 0x20195Cu);
    ctx->pc = 0x201958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201954u;
    // 0x201958: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCD8u, 0x201954u, 0x20195Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20195Cu;
label_20195c:
    // 0x20195c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20195cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201960: 0xc0b3f36  jal         func_2CFCD8
    ctx->pc = 0x201960u;
    SET_GPR_U32(ctx, 31, 0x201968u);
    ctx->pc = 0x201964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201960u;
    // 0x201964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCD8u, 0x201960u, 0x201968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201968u;
label_201968:
    // 0x201968: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x201968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20196c: 0xc0b3f36  jal         func_2CFCD8
    ctx->pc = 0x20196Cu;
    SET_GPR_U32(ctx, 31, 0x201974u);
    ctx->pc = 0x201970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20196Cu;
    // 0x201970: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCD8u, 0x20196Cu, 0x201974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201974u;
label_201974:
    // 0x201974: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x201974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201978: 0xc0b3f36  jal         func_2CFCD8
    ctx->pc = 0x201978u;
    SET_GPR_U32(ctx, 31, 0x201980u);
    ctx->pc = 0x20197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201978u;
    // 0x20197c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCD8u, 0x201978u, 0x201980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201980u;
label_201980:
    // 0x201980: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x201980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201984: 0xc0b3f36  jal         func_2CFCD8
    ctx->pc = 0x201984u;
    SET_GPR_U32(ctx, 31, 0x20198Cu);
    ctx->pc = 0x201988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201984u;
    // 0x201988: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCD8u, 0x201984u, 0x20198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20198Cu;
label_20198c:
    // 0x20198c: 0x129238  dsll        $s2, $s2, 8
    ctx->pc = 0x20198cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 8);
    // 0x201990: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x201990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x201994: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x201994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x201998: 0x108438  dsll        $s0, $s0, 16
    ctx->pc = 0x201998u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 16);
    // 0x20199c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x20199cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x2019a0: 0x2128025  or          $s0, $s0, $s2
    ctx->pc = 0x2019a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 18));
    // 0x2019a4: 0x139e38  dsll        $s3, $s3, 24
    ctx->pc = 0x2019a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 24);
    // 0x2019a8: 0x2308825  or          $s1, $s1, $s0
    ctx->pc = 0x2019a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
    // 0x2019ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2019acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2019b0: 0xc0b3f36  jal         func_2CFCD8
    ctx->pc = 0x2019B0u;
    SET_GPR_U32(ctx, 31, 0x2019B8u);
    ctx->pc = 0x2019B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2019B0u;
    // 0x2019b4: 0x2332825  or          $a1, $s1, $s3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCD8u, 0x2019B0u, 0x2019B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2019B8u;
label_2019b8:
    // 0x2019b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2019b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2019bc: 0xc0b3f36  jal         func_2CFCD8
    ctx->pc = 0x2019BCu;
    SET_GPR_U32(ctx, 31, 0x2019C4u);
    ctx->pc = 0x2019C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2019BCu;
    // 0x2019c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCD8u, 0x2019BCu, 0x2019C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2019C4u;
label_2019c4:
    // 0x2019c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2019c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2019c8: 0xc0b3f36  jal         func_2CFCD8
    ctx->pc = 0x2019C8u;
    SET_GPR_U32(ctx, 31, 0x2019D0u);
    ctx->pc = 0x2019CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2019C8u;
    // 0x2019cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCD8u, 0x2019C8u, 0x2019D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2019D0u;
label_2019d0:
    // 0x2019d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2019d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2019d4: 0xc0b3f36  jal         func_2CFCD8
    ctx->pc = 0x2019D4u;
    SET_GPR_U32(ctx, 31, 0x2019DCu);
    ctx->pc = 0x2019D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2019D4u;
    // 0x2019d8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCD8u, 0x2019D4u, 0x2019DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2019DCu;
label_2019dc:
    // 0x2019dc: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x2019dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x2019e0: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x2019e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x2019e4: 0xc0b3f36  jal         func_2CFCD8
    ctx->pc = 0x2019E4u;
    SET_GPR_U32(ctx, 31, 0x2019ECu);
    ctx->pc = 0x2019E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2019E4u;
    // 0x2019e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCD8u, 0x2019E4u, 0x2019ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2019ECu;
label_2019ec:
    // 0x2019ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2019ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2019f0: 0xc0b3f36  jal         func_2CFCD8
    ctx->pc = 0x2019F0u;
    SET_GPR_U32(ctx, 31, 0x2019F8u);
    ctx->pc = 0x2019F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2019F0u;
    // 0x2019f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCD8u, 0x2019F0u, 0x2019F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2019F8u;
label_2019f8:
    // 0x2019f8: 0xc0b3f16  jal         func_2CFC58
    ctx->pc = 0x2019F8u;
    SET_GPR_U32(ctx, 31, 0x201A00u);
    ctx->pc = 0x2019FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2019F8u;
    // 0x2019fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC58u, 0x2019F8u, 0x201A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201A00u;
label_201a00:
    // 0x201a00: 0xc0b40e8  jal         func_2D03A0
    ctx->pc = 0x201A00u;
    SET_GPR_U32(ctx, 31, 0x201A08u);
    ctx->pc = 0x201A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201A00u;
    // 0x201a04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D03A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D03A0u, 0x201A00u, 0x201A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201A08u;
label_201a08:
    // 0x201a08: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x201a08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x201a0c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x201a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x201a10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x201a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x201a14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x201a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a18: 0xc0b3f30  jal         func_2CFCC0
    ctx->pc = 0x201A18u;
    SET_GPR_U32(ctx, 31, 0x201A20u);
    ctx->pc = 0x201A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201A18u;
    // 0x201a1c: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCC0u, 0x201A18u, 0x201A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201A20u;
label_201a20:
    // 0x201a20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x201a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x201a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a28: 0xc0b3d5e  jal         func_2CF578
    ctx->pc = 0x201A28u;
    SET_GPR_U32(ctx, 31, 0x201A30u);
    ctx->pc = 0x201A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201A28u;
    // 0x201a2c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF578u, 0x201A28u, 0x201A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201A30u;
label_201a30:
    // 0x201a30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x201a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a34: 0xc0b38dc  jal         func_2CE370
    ctx->pc = 0x201A34u;
    SET_GPR_U32(ctx, 31, 0x201A3Cu);
    ctx->pc = 0x201A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201A34u;
    // 0x201a38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE370u, 0x201A34u, 0x201A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201A3Cu;
label_201a3c:
    // 0x201a3c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x201a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x201a40: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x201a40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x201a44: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x201a44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201a48: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x201a48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201a4c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x201a4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201a50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x201a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201a54: 0x3e00008  jr          $ra
    ctx->pc = 0x201A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A54u;
        // 0x201a58: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201A5Cu;
}
