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

// Function: enemyGetTargetPad
// Address: 0x2c1328 - 0x2c1408
void enemyGetTargetPad_0x2c1328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyGetTargetPad_0x2c1328");
#endif

    ctx->pc = 0x2c1328u;

    // 0x2c1328: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x2c1328u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x2c132c: 0x8c850160  lw          $a1, 0x160($a0)
    ctx->pc = 0x2c132cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2c1330: 0x24e2c4a8  addiu       $v0, $a3, -0x3B58
    ctx->pc = 0x2c1330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952104));
    // 0x2c1334: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2c1334u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2c1338: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c1338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c133c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C133Cu;
    {
        const bool branch_taken_0x2c133c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C133Cu;
        // 0x2c1340: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c133c) {
            ctx->pc = 0x2C1358u;
            goto label_2c1358;
        }
    }
    ctx->pc = 0x2C1344u;
    // 0x2c1344: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x2c1344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x2c1348: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1348u;
    {
        const bool branch_taken_0x2c1348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1348) {
            ctx->pc = 0x2C134Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1348u;
            // 0x2c134c: 0x8ca40ae4  lw          $a0, 0xAE4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C135Cu;
            goto label_2c135c;
        }
    }
    ctx->pc = 0x2C1350u;
    // 0x2c1350: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1350u;
        // 0x2c1354: 0x8ca202ac  lw          $v0, 0x2AC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 684)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1358u;
label_2c1358:
    // 0x2c1358: 0x8ca40ae4  lw          $a0, 0xAE4($a1)
    ctx->pc = 0x2c1358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2788)));
label_2c135c:
    // 0x2c135c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c135cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c1360: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2c1360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c1364: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C1364u;
    {
        const bool branch_taken_0x2c1364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1364u;
        // 0x2c1368: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1364) {
            ctx->pc = 0x2C13E8u;
            goto label_2c13e8;
        }
    }
    ctx->pc = 0x2C136Cu;
    // 0x2c136c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C136Cu;
    {
        const bool branch_taken_0x2c136c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C136Cu;
        // 0x2c1370: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c136c) {
            ctx->pc = 0x2C1384u;
            goto label_2c1384;
        }
    }
    ctx->pc = 0x2C1374u;
    // 0x2c1374: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C1374u;
    {
        const bool branch_taken_0x2c1374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1374u;
        // 0x2c1378: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1374) {
            ctx->pc = 0x2C13B8u;
            goto label_2c13b8;
        }
    }
    ctx->pc = 0x2C137Cu;
    // 0x2c137c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2C137Cu;
    {
        const bool branch_taken_0x2c137c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c137c) {
            ctx->pc = 0x2C1400u;
            goto label_2c1400;
        }
    }
    ctx->pc = 0x2C1384u;
label_2c1384:
    // 0x2c1384: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2c1384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2c1388: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1388u;
    {
        const bool branch_taken_0x2c1388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1388u;
        // 0x2c138c: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1388) {
            ctx->pc = 0x2C13A0u;
            goto label_2c13a0;
        }
    }
    ctx->pc = 0x2C1390u;
    // 0x2c1390: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C1390u;
    {
        const bool branch_taken_0x2c1390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1390u;
        // 0x2c1394: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1390) {
            ctx->pc = 0x2C13F4u;
            goto label_2c13f4;
        }
    }
    ctx->pc = 0x2C1398u;
    // 0x2c1398: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C1398u;
    {
        const bool branch_taken_0x2c1398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1398) {
            ctx->pc = 0x2C1400u;
            goto label_2c1400;
        }
    }
    ctx->pc = 0x2C13A0u;
label_2c13a0:
    // 0x2c13a0: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x2c13a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x2c13a4: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C13A4u;
    {
        const bool branch_taken_0x2c13a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c13a4) {
            ctx->pc = 0x2C13A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C13A4u;
            // 0x2c13a8: 0x8ca602ac  lw          $a2, 0x2AC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 684)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C13FCu;
            goto label_2c13fc;
        }
    }
    ctx->pc = 0x2C13ACu;
    // 0x2c13ac: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x2c13acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2c13b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C13B0u;
    {
        const bool branch_taken_0x2c13b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C13B0u;
        // 0x2c13b4: 0x8c460024  lw          $a2, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c13b0) {
            ctx->pc = 0x2C13FCu;
            goto label_2c13fc;
        }
    }
    ctx->pc = 0x2C13B8u;
label_2c13b8:
    // 0x2c13b8: 0x24e2c4a8  addiu       $v0, $a3, -0x3B58
    ctx->pc = 0x2c13b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952104));
    // 0x2c13bc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2c13bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c13c0: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2c13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2c13c4: 0x1464000e  bne         $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C13C4u;
    {
        const bool branch_taken_0x2c13c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C13C4u;
        // 0x2c13c8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c13c4) {
            ctx->pc = 0x2C1400u;
            goto label_2c1400;
        }
    }
    ctx->pc = 0x2C13CCu;
    // 0x2c13cc: 0x8f83b500  lw          $v1, -0x4B00($gp)
    ctx->pc = 0x2c13ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948096)));
    // 0x2c13d0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2c13d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2c13d4: 0x24422488  addiu       $v0, $v0, 0x2488
    ctx->pc = 0x2c13d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9352));
    // 0x2c13d8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c13d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c13dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c13dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c13e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C13E0u;
    {
        const bool branch_taken_0x2c13e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C13E0u;
        // 0x2c13e4: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c13e0) {
            ctx->pc = 0x2C13FCu;
            goto label_2c13fc;
        }
    }
    ctx->pc = 0x2C13E8u;
label_2c13e8:
    // 0x2c13e8: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x2c13e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2c13ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C13ECu;
    {
        const bool branch_taken_0x2c13ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C13F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C13ECu;
        // 0x2c13f0: 0x8c4602a8  lw          $a2, 0x2A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c13ec) {
            ctx->pc = 0x2C13FCu;
            goto label_2c13fc;
        }
    }
    ctx->pc = 0x2C13F4u;
label_2c13f4:
    // 0x2c13f4: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x2c13f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2c13f8: 0x8c460064  lw          $a2, 0x64($v0)
    ctx->pc = 0x2c13f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_2c13fc:
    // 0x2c13fc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2c13fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c1400:
    // 0x2c1400: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1408u;
}
