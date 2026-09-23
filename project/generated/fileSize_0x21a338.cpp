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

// Function: fileSize
// Address: 0x21a338 - 0x21a3f4
void fileSize_0x21a338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fileSize_0x21a338");
#endif

    switch (ctx->pc) {
        case 0x21a35cu: goto label_21a35c;
        case 0x21a390u: goto label_21a390;
        case 0x21a39cu: goto label_21a39c;
        case 0x21a3b4u: goto label_21a3b4;
        case 0x21a3ccu: goto label_21a3cc;
        case 0x21a3d4u: goto label_21a3d4;
        default: break;
    }

    ctx->pc = 0x21a338u;

    // 0x21a338: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21a338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21a33c: 0x8f82b6b8  lw          $v0, -0x4948($gp)
    ctx->pc = 0x21a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948536)));
    // 0x21a340: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21a344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21a348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21a348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a34c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21A34Cu;
    {
        const bool branch_taken_0x21a34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A34Cu;
        // 0x21a350: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a34c) {
            ctx->pc = 0x21A37Cu;
            goto label_21a37c;
        }
    }
    ctx->pc = 0x21A354u;
    // 0x21a354: 0xc086854  jal         func_21A150
    ctx->pc = 0x21A354u;
    SET_GPR_U32(ctx, 31, 0x21A35Cu);
    ctx->pc = 0x21A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A150u, 0x21A354u, 0x21A35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A35Cu;
label_21a35c:
    // 0x21a35c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21a35cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a360: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x21A360u;
    {
        const bool branch_taken_0x21a360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a360) {
            ctx->pc = 0x21A364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A360u;
            // 0x21a364: 0x8f829358  lw          $v0, -0x6CA8($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A380u;
            goto label_21a380;
        }
    }
    ctx->pc = 0x21A368u;
    // 0x21a368: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x21a368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x21a36c: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x21a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x21a370: 0x24430100  addiu       $v1, $v0, 0x100
    ctx->pc = 0x21a370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x21a374: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x21A374u;
    {
        const bool branch_taken_0x21a374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A374u;
        // 0x21a378: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a374) {
            ctx->pc = 0x21A3E0u;
            goto label_21a3e0;
        }
    }
    ctx->pc = 0x21A37Cu;
label_21a37c:
    // 0x21a37c: 0x8f829358  lw          $v0, -0x6CA8($gp)
    ctx->pc = 0x21a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939480)));
label_21a380:
    // 0x21a380: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A380u;
    {
        const bool branch_taken_0x21a380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A380u;
        // 0x21a384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a380) {
            ctx->pc = 0x21A394u;
            goto label_21a394;
        }
    }
    ctx->pc = 0x21A388u;
    // 0x21a388: 0xc0868bc  jal         func_21A2F0
    ctx->pc = 0x21A388u;
    SET_GPR_U32(ctx, 31, 0x21A390u);
    ctx->pc = 0x21A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A2F0u, 0x21A388u, 0x21A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A390u;
label_21a390:
    // 0x21a390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21a394:
    // 0x21a394: 0xc0b4d44  jal         func_2D3510
    ctx->pc = 0x21A394u;
    SET_GPR_U32(ctx, 31, 0x21A39Cu);
    ctx->pc = 0x21A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A394u;
    // 0x21a398: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3510u, 0x21A394u, 0x21A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A39Cu;
label_21a39c:
    // 0x21a39c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21a39cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a3a0: 0x600000e  bltz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x21A3A0u;
    {
        const bool branch_taken_0x21a3a0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x21A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3A0u;
        // 0x21a3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a3a0) {
            ctx->pc = 0x21A3DCu;
            goto label_21a3dc;
        }
    }
    ctx->pc = 0x21A3A8u;
    // 0x21a3a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21a3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a3ac: 0xc0b4dc8  jal         func_2D3720
    ctx->pc = 0x21A3ACu;
    SET_GPR_U32(ctx, 31, 0x21A3B4u);
    ctx->pc = 0x21A3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A3ACu;
    // 0x21a3b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3720u, 0x21A3ACu, 0x21A3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A3B4u;
label_21a3b4:
    // 0x21a3b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21a3b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a3b8: 0x8f829358  lw          $v0, -0x6CA8($gp)
    ctx->pc = 0x21a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939480)));
    // 0x21a3bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A3BCu;
    {
        const bool branch_taken_0x21a3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a3bc) {
            ctx->pc = 0x21A3CCu;
            goto label_21a3cc;
        }
    }
    ctx->pc = 0x21A3C4u;
    // 0x21a3c4: 0xc0868bc  jal         func_21A2F0
    ctx->pc = 0x21A3C4u;
    SET_GPR_U32(ctx, 31, 0x21A3CCu);
    ctx->pc = 0x21A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A2F0u, 0x21A3C4u, 0x21A3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A3CCu;
label_21a3cc:
    // 0x21a3cc: 0xc0b4d9a  jal         func_2D3668
    ctx->pc = 0x21A3CCu;
    SET_GPR_U32(ctx, 31, 0x21A3D4u);
    ctx->pc = 0x21A3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A3CCu;
    // 0x21a3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3668u, 0x21A3CCu, 0x21A3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A3D4u;
label_21a3d4:
    // 0x21a3d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21A3D4u;
    {
        const bool branch_taken_0x21a3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3D4u;
        // 0x21a3d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a3d4) {
            ctx->pc = 0x21A3E0u;
            goto label_21a3e0;
        }
    }
    ctx->pc = 0x21A3DCu;
label_21a3dc:
    // 0x21a3dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21a3e0:
    // 0x21a3e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21a3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a3e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21a3e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a3e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a3e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x21A3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3ECu;
        // 0x21a3f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A3F4u;
}
