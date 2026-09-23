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

// Function: enemyFromSleepToAwake
// Address: 0x2cb308 - 0x2cb3e0
void enemyFromSleepToAwake_0x2cb308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyFromSleepToAwake_0x2cb308");
#endif

    switch (ctx->pc) {
        case 0x2cb378u: goto label_2cb378;
        default: break;
    }

    ctx->pc = 0x2cb308u;

    // 0x2cb308: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb30c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2cb30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2cb310: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2cb310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cb314: 0x2443c4a8  addiu       $v1, $v0, -0x3B58
    ctx->pc = 0x2cb314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x2cb318: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cb318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cb31c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cb31cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb320: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cb320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cb324: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2cb324u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x2cb328: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2cb328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2cb32c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CB32Cu;
    {
        const bool branch_taken_0x2cb32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB32Cu;
        // 0x2cb330: 0x8e300160  lw          $s0, 0x160($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb32c) {
            ctx->pc = 0x2CB364u;
            goto label_2cb364;
        }
    }
    ctx->pc = 0x2CB334u;
    // 0x2cb334: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x2cb334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2cb338: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2cb338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2cb33c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CB33Cu;
    {
        const bool branch_taken_0x2cb33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB33Cu;
        // 0x2cb340: 0x8f82b230  lw          $v0, -0x4DD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb33c) {
            ctx->pc = 0x2CB368u;
            goto label_2cb368;
        }
    }
    ctx->pc = 0x2CB344u;
    // 0x2cb344: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x2cb344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2cb348: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2cb348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cb34c: 0x8e050a9c  lw          $a1, 0xA9C($s0)
    ctx->pc = 0x2cb34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x2cb350: 0x8c620bcc  lw          $v0, 0xBCC($v1)
    ctx->pc = 0x2cb350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3020)));
    // 0x2cb354: 0xae040a9c  sw          $a0, 0xA9C($s0)
    ctx->pc = 0x2cb354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 4));
    // 0x2cb358: 0xae020ae4  sw          $v0, 0xAE4($s0)
    ctx->pc = 0x2cb358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 2));
    // 0x2cb35c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2CB35Cu;
    {
        const bool branch_taken_0x2cb35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB35Cu;
        // 0x2cb360: 0xae050aa0  sw          $a1, 0xAA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb35c) {
            ctx->pc = 0x2CB3C8u;
            goto label_2cb3c8;
        }
    }
    ctx->pc = 0x2CB364u;
label_2cb364:
    // 0x2cb364: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x2cb364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
label_2cb368:
    // 0x2cb368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cb368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb36c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cb36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb370: 0xc0b179a  jal         func_2C5E68
    ctx->pc = 0x2CB370u;
    SET_GPR_U32(ctx, 31, 0x2CB378u);
    ctx->pc = 0x2CB374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB370u;
    // 0x2cb374: 0x8c450180  lw          $a1, 0x180($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5E68u, 0x2CB370u, 0x2CB378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB378u;
label_2cb378:
    // 0x2cb378: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2cb378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2cb37c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2cb37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2cb380: 0x3463ff7f  ori         $v1, $v1, 0xFF7F
    ctx->pc = 0x2cb380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65407);
    // 0x2cb384: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x2cb384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x2cb388: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x2cb388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2cb38c: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x2cb38cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x2cb390: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x2cb390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x2cb394: 0xae020ae4  sw          $v0, 0xAE4($s0)
    ctx->pc = 0x2cb394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 2));
    // 0x2cb398: 0x8e030aa4  lw          $v1, 0xAA4($s0)
    ctx->pc = 0x2cb398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2724)));
    // 0x2cb39c: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x2cb39cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2cb3a0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CB3A0u;
    {
        const bool branch_taken_0x2cb3a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb3a0) {
            ctx->pc = 0x2CB3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB3A0u;
            // 0x2cb3a4: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB3BCu;
            goto label_2cb3bc;
        }
    }
    ctx->pc = 0x2CB3A8u;
    // 0x2cb3a8: 0x8e020a9c  lw          $v0, 0xA9C($s0)
    ctx->pc = 0x2cb3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x2cb3ac: 0xae030a9c  sw          $v1, 0xA9C($s0)
    ctx->pc = 0x2cb3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 3));
    // 0x2cb3b0: 0xae020aa0  sw          $v0, 0xAA0($s0)
    ctx->pc = 0x2cb3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 2));
    // 0x2cb3b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB3B4u;
    {
        const bool branch_taken_0x2cb3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3B4u;
        // 0x2cb3b8: 0xae000aa4  sw          $zero, 0xAA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2724), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb3b4) {
            ctx->pc = 0x2CB3C8u;
            goto label_2cb3c8;
        }
    }
    ctx->pc = 0x2CB3BCu;
label_2cb3bc:
    // 0x2cb3bc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2cb3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2cb3c0: 0xae020a9c  sw          $v0, 0xA9C($s0)
    ctx->pc = 0x2cb3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 2));
    // 0x2cb3c4: 0xae030aa0  sw          $v1, 0xAA0($s0)
    ctx->pc = 0x2cb3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 3));
label_2cb3c8:
    // 0x2cb3c8: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2cb3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2cb3cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cb3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb3d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2cb3d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb3d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cb3d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3D8u;
        // 0x2cb3dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB3E0u;
}
