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

// Function: frontfxPreload
// Address: 0x22a390 - 0x22a440
void frontfxPreload_0x22a390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontfxPreload_0x22a390");
#endif

    switch (ctx->pc) {
        case 0x22a3b0u: goto label_22a3b0;
        case 0x22a3c0u: goto label_22a3c0;
        case 0x22a3dcu: goto label_22a3dc;
        case 0x22a3ecu: goto label_22a3ec;
        case 0x22a3f8u: goto label_22a3f8;
        case 0x22a408u: goto label_22a408;
        case 0x22a420u: goto label_22a420;
        default: break;
    }

    ctx->pc = 0x22a390u;

    // 0x22a390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22a390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22a394: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22a394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22a398: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22a398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22a39c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a3a0: 0x245125b8  addiu       $s1, $v0, 0x25B8
    ctx->pc = 0x22a3a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 9656));
    // 0x22a3a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22a3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22a3a8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x22a3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a3ac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x22a3acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3525B8u));
label_22a3b0:
    // 0x22a3b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22a3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a3b4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x22a3b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x22a3b8: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x22A3B8u;
    SET_GPR_U32(ctx, 31, 0x22A3C0u);
    ctx->pc = 0x22A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A3B8u;
    // 0x22a3bc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x22A3B8u, 0x22A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3C0u;
label_22a3c0:
    // 0x22a3c0: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x22A3C0u;
    {
        const bool branch_taken_0x22a3c0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x22a3c0) {
            ctx->pc = 0x22A3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A3C0u;
            // 0x22a3c4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a3b0;
        }
    }
    ctx->pc = 0x22A3C8u;
    // 0x22a3c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x22a3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x22a3cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22a3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a3d0: 0x248417d0  addiu       $a0, $a0, 0x17D0
    ctx->pc = 0x22a3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6096));
    // 0x22a3d4: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x22A3D4u;
    SET_GPR_U32(ctx, 31, 0x22A3DCu);
    ctx->pc = 0x22A3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A3D4u;
    // 0x22a3d8: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x22A3D4u, 0x22A3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3DCu;
label_22a3dc:
    // 0x22a3dc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x22a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x22a3e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22a3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a3e4: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x22A3E4u;
    SET_GPR_U32(ctx, 31, 0x22A3ECu);
    ctx->pc = 0x22A3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A3E4u;
    // 0x22a3e8: 0x248417f8  addiu       $a0, $a0, 0x17F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x22A3E4u, 0x22A3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3ECu;
label_22a3ec:
    // 0x22a3ec: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22a3f0: 0x24502a78  addiu       $s0, $v0, 0x2A78
    ctx->pc = 0x22a3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10872));
    // 0x22a3f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22a3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x352A78u));
label_22a3f8:
    // 0x22a3f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22a3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a3fc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x22a3fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x22a400: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x22A400u;
    SET_GPR_U32(ctx, 31, 0x22A408u);
    ctx->pc = 0x22A404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A400u;
    // 0x22a404: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x22A400u, 0x22A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A408u;
label_22a408:
    // 0x22a408: 0x623fffb  bgezl       $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x22A408u;
    {
        const bool branch_taken_0x22a408 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x22a408) {
            ctx->pc = 0x22A40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A408u;
            // 0x22a40c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a3f8;
        }
    }
    ctx->pc = 0x22A410u;
    // 0x22a410: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x22a410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x22a414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22a414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a418: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x22A418u;
    SET_GPR_U32(ctx, 31, 0x22A420u);
    ctx->pc = 0x22A41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A418u;
    // 0x22a41c: 0x24841820  addiu       $a0, $a0, 0x1820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x22A418u, 0x22A420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A420u;
label_22a420:
    // 0x22a420: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x22a420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x22a424: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22a424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a428: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22a428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a42c: 0x24841840  addiu       $a0, $a0, 0x1840
    ctx->pc = 0x22a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6208));
    // 0x22a430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a434: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22a434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a438: 0x80870fa  j           func_21C3E8
    ctx->pc = 0x22A438u;
    ctx->pc = 0x22A43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A438u;
    // 0x22a43c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    preloadAddTexName_0x21c3e8(rdram, ctx, runtime); return;
    ctx->pc = 0x22A440u;
}
