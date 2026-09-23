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

// Function: weatherCalcWindAtTime
// Address: 0x2a80c8 - 0x2a8450
void weatherCalcWindAtTime_0x2a80c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("weatherCalcWindAtTime_0x2a80c8");
#endif

    switch (ctx->pc) {
        case 0x2a810cu: goto label_2a810c;
        case 0x2a8120u: goto label_2a8120;
        case 0x2a8140u: goto label_2a8140;
        case 0x2a814cu: goto label_2a814c;
        case 0x2a8158u: goto label_2a8158;
        case 0x2a8164u: goto label_2a8164;
        case 0x2a816cu: goto label_2a816c;
        case 0x2a8190u: goto label_2a8190;
        case 0x2a819cu: goto label_2a819c;
        case 0x2a81a8u: goto label_2a81a8;
        case 0x2a81b4u: goto label_2a81b4;
        case 0x2a81c0u: goto label_2a81c0;
        case 0x2a81ccu: goto label_2a81cc;
        case 0x2a81d4u: goto label_2a81d4;
        case 0x2a81f8u: goto label_2a81f8;
        case 0x2a8204u: goto label_2a8204;
        case 0x2a8210u: goto label_2a8210;
        case 0x2a8220u: goto label_2a8220;
        case 0x2a822cu: goto label_2a822c;
        case 0x2a8238u: goto label_2a8238;
        case 0x2a8240u: goto label_2a8240;
        case 0x2a8260u: goto label_2a8260;
        case 0x2a826cu: goto label_2a826c;
        case 0x2a8278u: goto label_2a8278;
        case 0x2a8288u: goto label_2a8288;
        case 0x2a8294u: goto label_2a8294;
        case 0x2a82a0u: goto label_2a82a0;
        case 0x2a82a8u: goto label_2a82a8;
        case 0x2a82c8u: goto label_2a82c8;
        case 0x2a82d4u: goto label_2a82d4;
        case 0x2a82e0u: goto label_2a82e0;
        case 0x2a82f0u: goto label_2a82f0;
        case 0x2a82fcu: goto label_2a82fc;
        case 0x2a8308u: goto label_2a8308;
        case 0x2a8310u: goto label_2a8310;
        case 0x2a8330u: goto label_2a8330;
        case 0x2a833cu: goto label_2a833c;
        case 0x2a8348u: goto label_2a8348;
        case 0x2a8358u: goto label_2a8358;
        case 0x2a8364u: goto label_2a8364;
        case 0x2a8370u: goto label_2a8370;
        case 0x2a8378u: goto label_2a8378;
        default: break;
    }

    ctx->pc = 0x2a80c8u;

    // 0x2a80c8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a80c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a80cc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2a80ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2a80d0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2a80d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a80d4: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x2a80d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x2a80d8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2a80d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2a80dc: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2a80dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2a80e0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2a80e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2a80e4: 0x26105c60  addiu       $s0, $s0, 0x5C60
    ctx->pc = 0x2a80e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23648));
    // 0x2a80e8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2a80e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2a80ec: 0xdc3195c8  ld          $s1, -0x6A38($at)
    ctx->pc = 0x2a80ecu;
    SET_GPR_U64(ctx, 17, FAST_READ64(0x3A95C8u));
    // 0x2a80f0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2a80f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2a80f4: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2a80f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2a80f8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2a80f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2a80fc: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2a80fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2a8100: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a8100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2a8104: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2A8104u;
    SET_GPR_U32(ctx, 31, 0x2A810Cu);
    ctx->pc = 0x2A8108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8104u;
    // 0x2a8108: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2A8104u, 0x2A810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A810Cu;
label_2a810c:
    // 0x2a810c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2a810cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2a8110: 0xdc3495d0  ld          $s4, -0x6A30($at)
    ctx->pc = 0x2a8110u;
    SET_GPR_U64(ctx, 20, FAST_READ64(0x3A95D0u));
    // 0x2a8114: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8118: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2A8118u;
    SET_GPR_U32(ctx, 31, 0x2A8120u);
    ctx->pc = 0x2A811Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8118u;
    // 0x2a811c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2A8118u, 0x2A8120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8120u;
label_2a8120:
    // 0x2a8120: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2a8120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2a8124: 0xdc3295d8  ld          $s2, -0x6A28($at)
    ctx->pc = 0x2a8124u;
    SET_GPR_U64(ctx, 18, FAST_READ64(0x3A95D8u));
    // 0x2a8128: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a812c: 0x3413ff80  ori         $s3, $zero, 0xFF80
    ctx->pc = 0x2a812cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2a8130: 0x139bbc  dsll32      $s3, $s3, 14
    ctx->pc = 0x2a8130u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 14));
    // 0x2a8134: 0xc7958e38  lwc1        $f21, -0x71C8($gp)
    ctx->pc = 0x2a8134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a8138: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2A8138u;
    SET_GPR_U32(ctx, 31, 0x2A8140u);
    ctx->pc = 0x2A813Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8138u;
    // 0x2a813c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2A8138u, 0x2A8140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8140u;
label_2a8140:
    // 0x2a8140: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8144: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2A8144u;
    SET_GPR_U32(ctx, 31, 0x2A814Cu);
    ctx->pc = 0x2A8148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8144u;
    // 0x2a8148: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2A8144u, 0x2A814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A814Cu;
label_2a814c:
    // 0x2a814c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a814cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8150: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2A8150u;
    SET_GPR_U32(ctx, 31, 0x2A8158u);
    ctx->pc = 0x2A8154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8150u;
    // 0x2a8154: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2A8150u, 0x2A8158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8158u;
label_2a8158:
    // 0x2a8158: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a815c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2A815Cu;
    SET_GPR_U32(ctx, 31, 0x2A8164u);
    ctx->pc = 0x2A8160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A815Cu;
    // 0x2a8160: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2A815Cu, 0x2A8164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8164u;
label_2a8164:
    // 0x2a8164: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2A8164u;
    SET_GPR_U32(ctx, 31, 0x2A816Cu);
    ctx->pc = 0x2A8168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8164u;
    // 0x2a8168: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2A8164u, 0x2A816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A816Cu;
label_2a816c:
    // 0x2a816c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2a816cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2a8170: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a8170u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a8174: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a8174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a8178: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a8178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a817c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a817cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8180: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x2a8180u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x2a8184: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2a8184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2a8188: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2A8188u;
    SET_GPR_U32(ctx, 31, 0x2A8190u);
    ctx->pc = 0x2A818Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8188u;
    // 0x2a818c: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2A8188u, 0x2A8190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8190u;
label_2a8190:
    // 0x2a8190: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8194: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2A8194u;
    SET_GPR_U32(ctx, 31, 0x2A819Cu);
    ctx->pc = 0x2A8198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8194u;
    // 0x2a8198: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2A8194u, 0x2A819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A819Cu;
label_2a819c:
    // 0x2a819c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a819cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81a0: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2A81A0u;
    SET_GPR_U32(ctx, 31, 0x2A81A8u);
    ctx->pc = 0x2A81A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A81A0u;
    // 0x2a81a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2A81A0u, 0x2A81A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A81A8u;
label_2a81a8:
    // 0x2a81a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a81a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81ac: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2A81ACu;
    SET_GPR_U32(ctx, 31, 0x2A81B4u);
    ctx->pc = 0x2A81B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A81ACu;
    // 0x2a81b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2A81ACu, 0x2A81B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A81B4u;
label_2a81b4:
    // 0x2a81b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a81b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81b8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2A81B8u;
    SET_GPR_U32(ctx, 31, 0x2A81C0u);
    ctx->pc = 0x2A81BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A81B8u;
    // 0x2a81bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2A81B8u, 0x2A81C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A81C0u;
label_2a81c0:
    // 0x2a81c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a81c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81c4: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2A81C4u;
    SET_GPR_U32(ctx, 31, 0x2A81CCu);
    ctx->pc = 0x2A81C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A81C4u;
    // 0x2a81c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2A81C4u, 0x2A81CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A81CCu;
label_2a81cc:
    // 0x2a81cc: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2A81CCu;
    SET_GPR_U32(ctx, 31, 0x2A81D4u);
    ctx->pc = 0x2A81D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A81CCu;
    // 0x2a81d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2A81CCu, 0x2A81D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A81D4u;
label_2a81d4:
    // 0x2a81d4: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x2a81d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2a81d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a81d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a81dc: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2a81dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2a81e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a81e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a81e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a81e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a81e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a81e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a81ec: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2a81ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2a81f0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2A81F0u;
    SET_GPR_U32(ctx, 31, 0x2A81F8u);
    ctx->pc = 0x2A81F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A81F0u;
    // 0x2a81f4: 0xe6a00008  swc1        $f0, 0x8($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2A81F0u, 0x2A81F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A81F8u;
label_2a81f8:
    // 0x2a81f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a81f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81fc: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2A81FCu;
    SET_GPR_U32(ctx, 31, 0x2A8204u);
    ctx->pc = 0x2A8200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A81FCu;
    // 0x2a8200: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2A81FCu, 0x2A8204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8204u;
label_2a8204:
    // 0x2a8204: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8208: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2A8208u;
    SET_GPR_U32(ctx, 31, 0x2A8210u);
    ctx->pc = 0x2A820Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8208u;
    // 0x2a820c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2A8208u, 0x2A8210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8210u;
label_2a8210:
    // 0x2a8210: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2a8210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2a8214: 0xdc2595e0  ld          $a1, -0x6A20($at)
    ctx->pc = 0x2a8214u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A95E0u));
    // 0x2a8218: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2A8218u;
    SET_GPR_U32(ctx, 31, 0x2A8220u);
    ctx->pc = 0x2A821Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8218u;
    // 0x2a821c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2A8218u, 0x2A8220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8220u;
label_2a8220:
    // 0x2a8220: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8224: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2A8224u;
    SET_GPR_U32(ctx, 31, 0x2A822Cu);
    ctx->pc = 0x2A8228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8224u;
    // 0x2a8228: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2A8224u, 0x2A822Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A822Cu;
label_2a822c:
    // 0x2a822c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a822cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8230: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2A8230u;
    SET_GPR_U32(ctx, 31, 0x2A8238u);
    ctx->pc = 0x2A8234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8230u;
    // 0x2a8234: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2A8230u, 0x2A8238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8238u;
label_2a8238:
    // 0x2a8238: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2A8238u;
    SET_GPR_U32(ctx, 31, 0x2A8240u);
    ctx->pc = 0x2A823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8238u;
    // 0x2a823c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2A8238u, 0x2A8240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8240u;
label_2a8240:
    // 0x2a8240: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2a8240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2a8244: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2a8244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2a8248: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a8248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a824c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a824cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a8250: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a8250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a8254: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a8254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8258: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2A8258u;
    SET_GPR_U32(ctx, 31, 0x2A8260u);
    ctx->pc = 0x2A825Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8258u;
    // 0x2a825c: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2A8258u, 0x2A8260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8260u;
label_2a8260:
    // 0x2a8260: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8264: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2A8264u;
    SET_GPR_U32(ctx, 31, 0x2A826Cu);
    ctx->pc = 0x2A8268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8264u;
    // 0x2a8268: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2A8264u, 0x2A826Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A826Cu;
label_2a826c:
    // 0x2a826c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a826cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8270: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2A8270u;
    SET_GPR_U32(ctx, 31, 0x2A8278u);
    ctx->pc = 0x2A8274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8270u;
    // 0x2a8274: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2A8270u, 0x2A8278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8278u;
label_2a8278:
    // 0x2a8278: 0x3405ff40  ori         $a1, $zero, 0xFF40
    ctx->pc = 0x2a8278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65344);
    // 0x2a827c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2a827cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2a8280: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2A8280u;
    SET_GPR_U32(ctx, 31, 0x2A8288u);
    ctx->pc = 0x2A8284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8280u;
    // 0x2a8284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2A8280u, 0x2A8288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8288u;
label_2a8288:
    // 0x2a8288: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a828c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2A828Cu;
    SET_GPR_U32(ctx, 31, 0x2A8294u);
    ctx->pc = 0x2A8290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A828Cu;
    // 0x2a8290: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2A828Cu, 0x2A8294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8294u;
label_2a8294:
    // 0x2a8294: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8298: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2A8298u;
    SET_GPR_U32(ctx, 31, 0x2A82A0u);
    ctx->pc = 0x2A829Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8298u;
    // 0x2a829c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2A8298u, 0x2A82A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A82A0u;
label_2a82a0:
    // 0x2a82a0: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2A82A0u;
    SET_GPR_U32(ctx, 31, 0x2A82A8u);
    ctx->pc = 0x2A82A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A82A0u;
    // 0x2a82a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2A82A0u, 0x2A82A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A82A8u;
label_2a82a8:
    // 0x2a82a8: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x2a82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2a82ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a82acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a82b0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2a82b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2a82b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a82b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a82b8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a82bc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a82bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a82c0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2A82C0u;
    SET_GPR_U32(ctx, 31, 0x2A82C8u);
    ctx->pc = 0x2A82C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A82C0u;
    // 0x2a82c4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2A82C0u, 0x2A82C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A82C8u;
label_2a82c8:
    // 0x2a82c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a82c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82cc: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2A82CCu;
    SET_GPR_U32(ctx, 31, 0x2A82D4u);
    ctx->pc = 0x2A82D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A82CCu;
    // 0x2a82d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2A82CCu, 0x2A82D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A82D4u;
label_2a82d4:
    // 0x2a82d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a82d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82d8: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2A82D8u;
    SET_GPR_U32(ctx, 31, 0x2A82E0u);
    ctx->pc = 0x2A82DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A82D8u;
    // 0x2a82dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2A82D8u, 0x2A82E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A82E0u;
label_2a82e0:
    // 0x2a82e0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2a82e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2a82e4: 0xdc2595e8  ld          $a1, -0x6A18($at)
    ctx->pc = 0x2a82e4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A95E8u));
    // 0x2a82e8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2A82E8u;
    SET_GPR_U32(ctx, 31, 0x2A82F0u);
    ctx->pc = 0x2A82ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A82E8u;
    // 0x2a82ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2A82E8u, 0x2A82F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A82F0u;
label_2a82f0:
    // 0x2a82f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a82f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82f4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2A82F4u;
    SET_GPR_U32(ctx, 31, 0x2A82FCu);
    ctx->pc = 0x2A82F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A82F4u;
    // 0x2a82f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2A82F4u, 0x2A82FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A82FCu;
label_2a82fc:
    // 0x2a82fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a82fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8300: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2A8300u;
    SET_GPR_U32(ctx, 31, 0x2A8308u);
    ctx->pc = 0x2A8304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8300u;
    // 0x2a8304: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2A8300u, 0x2A8308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8308u;
label_2a8308:
    // 0x2a8308: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2A8308u;
    SET_GPR_U32(ctx, 31, 0x2A8310u);
    ctx->pc = 0x2A830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8308u;
    // 0x2a830c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2A8308u, 0x2A8310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8310u;
label_2a8310:
    // 0x2a8310: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2a8310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2a8314: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2a8314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2a8318: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a8318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a831c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a831cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a8320: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a8320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a8324: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a8324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8328: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2A8328u;
    SET_GPR_U32(ctx, 31, 0x2A8330u);
    ctx->pc = 0x2A832Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8328u;
    // 0x2a832c: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2A8328u, 0x2A8330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8330u;
label_2a8330:
    // 0x2a8330: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8334: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2A8334u;
    SET_GPR_U32(ctx, 31, 0x2A833Cu);
    ctx->pc = 0x2A8338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8334u;
    // 0x2a8338: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2A8334u, 0x2A833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A833Cu;
label_2a833c:
    // 0x2a833c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a833cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8340: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2A8340u;
    SET_GPR_U32(ctx, 31, 0x2A8348u);
    ctx->pc = 0x2A8344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8340u;
    // 0x2a8344: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2A8340u, 0x2A8348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8348u;
label_2a8348:
    // 0x2a8348: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2a8348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2a834c: 0xdc2595f0  ld          $a1, -0x6A10($at)
    ctx->pc = 0x2a834cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A95F0u));
    // 0x2a8350: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2A8350u;
    SET_GPR_U32(ctx, 31, 0x2A8358u);
    ctx->pc = 0x2A8354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8350u;
    // 0x2a8354: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2A8350u, 0x2A8358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8358u;
label_2a8358:
    // 0x2a8358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a835c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2A835Cu;
    SET_GPR_U32(ctx, 31, 0x2A8364u);
    ctx->pc = 0x2A8360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A835Cu;
    // 0x2a8360: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2A835Cu, 0x2A8364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8364u;
label_2a8364:
    // 0x2a8364: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8368: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2A8368u;
    SET_GPR_U32(ctx, 31, 0x2A8370u);
    ctx->pc = 0x2A836Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8368u;
    // 0x2a836c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2A8368u, 0x2A8370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8370u;
label_2a8370:
    // 0x2a8370: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2A8370u;
    SET_GPR_U32(ctx, 31, 0x2A8378u);
    ctx->pc = 0x2A8374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8370u;
    // 0x2a8374: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2A8370u, 0x2A8378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8378u;
label_2a8378:
    // 0x2a8378: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x2a8378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2a837c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2a837cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8380: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2a8380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2a8384: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2a8384u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a8388: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a8388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a838c: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x2a838cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8390: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a8390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a8394: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2a8394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8398: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a8398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a839c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A839Cu;
    {
        const bool branch_taken_0x2a839c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A83A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A839Cu;
        // 0x2a83a0: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a839c) {
            ctx->pc = 0x2A83ACu;
            goto label_2a83ac;
        }
    }
    ctx->pc = 0x2A83A4u;
    // 0x2a83a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A83A4u;
    {
        const bool branch_taken_0x2a83a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A83A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A83A4u;
        // 0x2a83a8: 0x46020802  mul.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a83a4) {
            ctx->pc = 0x2A83B0u;
            goto label_2a83b0;
        }
    }
    ctx->pc = 0x2A83ACu;
label_2a83ac:
    // 0x2a83ac: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x2a83acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2a83b0:
    // 0x2a83b0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2a83b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a83b4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2a83b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a83b8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2a83b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a83bc: 0x0  nop
    ctx->pc = 0x2a83bcu;
    // NOP
    // 0x2a83c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A83C0u;
    {
        const bool branch_taken_0x2a83c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A83C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A83C0u;
        // 0x2a83c4: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a83c0) {
            ctx->pc = 0x2A83D0u;
            goto label_2a83d0;
        }
    }
    ctx->pc = 0x2A83C8u;
    // 0x2a83c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A83C8u;
    {
        const bool branch_taken_0x2a83c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A83CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A83C8u;
        // 0x2a83cc: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a83c8) {
            ctx->pc = 0x2A83D4u;
            goto label_2a83d4;
        }
    }
    ctx->pc = 0x2A83D0u;
label_2a83d0:
    // 0x2a83d0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a83d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2a83d4:
    // 0x2a83d4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2a83d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a83d8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2a83d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a83dc: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x2a83dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x2a83e0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2a83e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a83e4: 0x0  nop
    ctx->pc = 0x2a83e4u;
    // NOP
    // 0x2a83e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A83E8u;
    {
        const bool branch_taken_0x2a83e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A83ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A83E8u;
        // 0x2a83ec: 0xc6a00008  lwc1        $f0, 0x8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a83e8) {
            ctx->pc = 0x2A83F8u;
            goto label_2a83f8;
        }
    }
    ctx->pc = 0x2A83F0u;
    // 0x2a83f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A83F0u;
    {
        const bool branch_taken_0x2a83f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A83F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A83F0u;
        // 0x2a83f4: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a83f0) {
            ctx->pc = 0x2A83FCu;
            goto label_2a83fc;
        }
    }
    ctx->pc = 0x2A83F8u;
label_2a83f8:
    // 0x2a83f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a83f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2a83fc:
    // 0x2a83fc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2a83fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8400: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2a8400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a8404: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2a8404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8408: 0x0  nop
    ctx->pc = 0x2a8408u;
    // NOP
    // 0x2a840c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A840Cu;
    {
        const bool branch_taken_0x2a840c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A840Cu;
        // 0x2a8410: 0xe6a00008  swc1        $f0, 0x8($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a840c) {
            ctx->pc = 0x2A841Cu;
            goto label_2a841c;
        }
    }
    ctx->pc = 0x2A8414u;
    // 0x2a8414: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8414u;
    {
        const bool branch_taken_0x2a8414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8414u;
        // 0x2a8418: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8414) {
            ctx->pc = 0x2A8420u;
            goto label_2a8420;
        }
    }
    ctx->pc = 0x2A841Cu;
label_2a841c:
    // 0x2a841c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a841cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2a8420:
    // 0x2a8420: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x2a8420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x2a8424: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a8424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a8428: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2a8428u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a842c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2a842cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a8430: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2a8430u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a8434: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2a8434u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a8438: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2a8438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a843c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2a843cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8440: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2a8440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a8444: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2a8444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a8448: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8448u;
        // 0x2a844c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8450u;
}
