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

// Function: textOutline
// Address: 0x2023b0 - 0x2024f0
void textOutline_0x2023b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("textOutline_0x2023b0");
#endif

    switch (ctx->pc) {
        case 0x2023f8u: goto label_2023f8;
        case 0x20242cu: goto label_20242c;
        case 0x20244cu: goto label_20244c;
        case 0x20246cu: goto label_20246c;
        case 0x20248cu: goto label_20248c;
        case 0x2024b4u: goto label_2024b4;
        case 0x2024bcu: goto label_2024bc;
        default: break;
    }

    ctx->pc = 0x2023b0u;

    // 0x2023b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2023b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2023b4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2023b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2023b8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2023b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2023bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2023bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2023c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023c4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2023c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2023c8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2023c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2023cc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2023ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023d0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2023d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2023d4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2023d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023d8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2023d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023dc: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2023dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2023e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2023e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2023e4: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x2023e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x2023e8: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x2023e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x2023ec: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2023ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2023f0: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2023F0u;
    SET_GPR_U32(ctx, 31, 0x2023F8u);
    ctx->pc = 0x2023F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2023F0u;
    // 0x2023f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2023F0u, 0x2023F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2023F8u;
label_2023f8:
    // 0x2023f8: 0x93839ab5  lbu         $v1, -0x654B($gp)
    ctx->pc = 0x2023f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x2023fc: 0x2624fffe  addiu       $a0, $s1, -0x2
    ctx->pc = 0x2023fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x202400: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x202400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x202404: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x202404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x202408: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x202408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x20240c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x20240cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202410: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x202410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x202414: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x202414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202418: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x202418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20241c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x20241cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202420: 0xa3839ab5  sb          $v1, -0x654B($gp)
    ctx->pc = 0x202420u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 3));
    // 0x202424: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x202424u;
    SET_GPR_U32(ctx, 31, 0x20242Cu);
    ctx->pc = 0x202428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202424u;
    // 0x202428: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x202424u, 0x20242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20242Cu;
label_20242c:
    // 0x20242c: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x20242cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x202430: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x202430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x202434: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x202434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202438: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x202438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20243c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x20243cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202440: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x202440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x202444: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x202444u;
    SET_GPR_U32(ctx, 31, 0x20244Cu);
    ctx->pc = 0x202448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202444u;
    // 0x202448: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x202444u, 0x20244Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20244Cu;
label_20244c:
    // 0x20244c: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x20244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x202450: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x202450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x202454: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x202454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202458: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x202458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20245c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x20245cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202460: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x202460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x202464: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x202464u;
    SET_GPR_U32(ctx, 31, 0x20246Cu);
    ctx->pc = 0x202468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202464u;
    // 0x202468: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x202464u, 0x20246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20246Cu;
label_20246c:
    // 0x20246c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x20246cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x202470: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x202470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202474: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x202474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x202478: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x202478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20247c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x20247cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202480: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x202480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x202484: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x202484u;
    SET_GPR_U32(ctx, 31, 0x20248Cu);
    ctx->pc = 0x202488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202484u;
    // 0x202488: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x202484u, 0x20248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20248Cu;
label_20248c:
    // 0x20248c: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x20248cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x202490: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x202490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202494: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x202494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x202498: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x202498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20249c: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x20249cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x2024a0: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x2024a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x2024a4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2024a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2024a8: 0xa3829ab5  sb          $v0, -0x654B($gp)
    ctx->pc = 0x2024a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
    // 0x2024ac: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x2024ACu;
    SET_GPR_U32(ctx, 31, 0x2024B4u);
    ctx->pc = 0x2024B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2024ACu;
    // 0x2024b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x2024ACu, 0x2024B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2024B4u;
label_2024b4:
    // 0x2024b4: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2024B4u;
    SET_GPR_U32(ctx, 31, 0x2024BCu);
    ctx->pc = 0x2024B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2024B4u;
    // 0x2024b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2024B4u, 0x2024BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2024BCu;
label_2024bc:
    // 0x2024bc: 0x93839ab5  lbu         $v1, -0x654B($gp)
    ctx->pc = 0x2024bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x2024c0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2024c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2024c4: 0x306300f7  andi        $v1, $v1, 0xF7
    ctx->pc = 0x2024c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)247);
    // 0x2024c8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2024c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2024cc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2024ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2024d0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2024d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2024d4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2024d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2024d8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2024d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2024dc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2024dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2024e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2024e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2024e4: 0xa3839ab5  sb          $v1, -0x654B($gp)
    ctx->pc = 0x2024e4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 3));
    // 0x2024e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2024E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2024ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024E8u;
        // 0x2024ec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2024E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2024F0u;
}
