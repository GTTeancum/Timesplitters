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

// Function: mmFindBoundaries
// Address: 0x249530 - 0x249628
void mmFindBoundaries_0x249530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmFindBoundaries_0x249530");
#endif

    switch (ctx->pc) {
        case 0x249560u: goto label_249560;
        default: break;
    }

    ctx->pc = 0x249530u;

    // 0x249530: 0x3c077fff  lui         $a3, 0x7FFF
    ctx->pc = 0x249530u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32767 << 16));
    // 0x249534: 0x3c0c8000  lui         $t4, 0x8000
    ctx->pc = 0x249534u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
    // 0x249538: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x249538u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x24953c: 0x8f85a12c  lw          $a1, -0x5ED4($gp)
    ctx->pc = 0x24953cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
    // 0x249540: 0xaf87a198  sw          $a3, -0x5E68($gp)
    ctx->pc = 0x249540u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943128), GPR_U32(ctx, 7));
    // 0x249544: 0xaf87a194  sw          $a3, -0x5E6C($gp)
    ctx->pc = 0x249544u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943124), GPR_U32(ctx, 7));
    // 0x249548: 0xaf8ca1a0  sw          $t4, -0x5E60($gp)
    ctx->pc = 0x249548u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943136), GPR_U32(ctx, 12));
    // 0x24954c: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x24954Cu;
    {
        const bool branch_taken_0x24954c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x249550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24954Cu;
        // 0x249550: 0xaf8ca19c  sw          $t4, -0x5E64($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943132), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24954c) {
            ctx->pc = 0x2495FCu;
            goto label_2495fc;
        }
    }
    ctx->pc = 0x249554u;
    // 0x249554: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x249554u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249558: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x249558u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24955c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x24955cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_249560:
    // 0x249560: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x249560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249564: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x249564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x249568: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x249568u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24956c: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x24956Cu;
    {
        const bool branch_taken_0x24956c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x249570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24956Cu;
        // 0x249570: 0x8ca80010  lw          $t0, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24956c) {
            ctx->pc = 0x24959Cu;
            goto label_24959c;
        }
    }
    ctx->pc = 0x249574u;
    // 0x249574: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x249574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x249578: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x249578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24957c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x24957cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x249580: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x249580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x249584: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x249584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x249588: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x249588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24958c: 0x42540  sll         $a0, $a0, 21
    ctx->pc = 0x24958cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 21));
    // 0x249590: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x249590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x249594: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x249594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x249598: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x249598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_24959c:
    // 0x24959c: 0x12a102a  slt         $v0, $t1, $t2
    ctx->pc = 0x24959cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2495a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2495A0u;
    {
        const bool branch_taken_0x2495a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2495A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495A0u;
        // 0x2495a4: 0x166102a  slt         $v0, $t3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495a0) {
            ctx->pc = 0x2495B0u;
            goto label_2495b0;
        }
    }
    ctx->pc = 0x2495A8u;
    // 0x2495a8: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2495a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2495ac: 0xaf89a194  sw          $t1, -0x5E6C($gp)
    ctx->pc = 0x2495acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943124), GPR_U32(ctx, 9));
label_2495b0:
    // 0x2495b0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2495B0u;
    {
        const bool branch_taken_0x2495b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2495b0) {
            ctx->pc = 0x2495B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2495B0u;
            // 0x2495b4: 0x8ca30010  lw          $v1, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2495C4u;
            goto label_2495c4;
        }
    }
    ctx->pc = 0x2495B8u;
    // 0x2495b8: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2495b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2495bc: 0xaf86a19c  sw          $a2, -0x5E64($gp)
    ctx->pc = 0x2495bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943132), GPR_U32(ctx, 6));
    // 0x2495c0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2495c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2495c4:
    // 0x2495c4: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x2495c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2495c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2495C8u;
    {
        const bool branch_taken_0x2495c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2495CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495C8u;
        // 0x2495cc: 0x188102a  slt         $v0, $t4, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495c8) {
            ctx->pc = 0x2495D8u;
            goto label_2495d8;
        }
    }
    ctx->pc = 0x2495D0u;
    // 0x2495d0: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2495d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2495d4: 0xaf83a198  sw          $v1, -0x5E68($gp)
    ctx->pc = 0x2495d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943128), GPR_U32(ctx, 3));
label_2495d8:
    // 0x2495d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2495D8u;
    {
        const bool branch_taken_0x2495d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2495d8) {
            ctx->pc = 0x2495DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2495D8u;
            // 0x2495dc: 0x8ca50038  lw          $a1, 0x38($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2495ECu;
            goto label_2495ec;
        }
    }
    ctx->pc = 0x2495E0u;
    // 0x2495e0: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x2495e0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2495e4: 0xaf88a1a0  sw          $t0, -0x5E60($gp)
    ctx->pc = 0x2495e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943136), GPR_U32(ctx, 8));
    // 0x2495e8: 0x8ca50038  lw          $a1, 0x38($a1)
    ctx->pc = 0x2495e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_2495ec:
    // 0x2495ec: 0x54a0ffdc  bnel        $a1, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2495ECu;
    {
        const bool branch_taken_0x2495ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2495ec) {
            ctx->pc = 0x2495F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2495ECu;
            // 0x2495f0: 0x8ca6000c  lw          $a2, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249560;
        }
    }
    ctx->pc = 0x2495F4u;
    // 0x2495f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2495F4u;
    {
        const bool branch_taken_0x2495f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2495F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495F4u;
        // 0x2495f8: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495f4) {
            ctx->pc = 0x24960Cu;
            goto label_24960c;
        }
    }
    ctx->pc = 0x2495FCu;
label_2495fc:
    // 0x2495fc: 0x3c0a7fff  lui         $t2, 0x7FFF
    ctx->pc = 0x2495fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32767 << 16));
    // 0x249600: 0x3c0b8000  lui         $t3, 0x8000
    ctx->pc = 0x249600u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32768 << 16));
    // 0x249604: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x249604u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x249608: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x249608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_24960c:
    // 0x24960c: 0x16a1023  subu        $v0, $t3, $t2
    ctx->pc = 0x24960cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x249610: 0x1872023  subu        $a0, $t4, $a3
    ctx->pc = 0x249610u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x249614: 0xaf82a1ac  sw          $v0, -0x5E54($gp)
    ctx->pc = 0x249614u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943148), GPR_U32(ctx, 2));
    // 0x249618: 0xaf84a1b0  sw          $a0, -0x5E50($gp)
    ctx->pc = 0x249618u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943152), GPR_U32(ctx, 4));
    // 0x24961c: 0xaf83a1a8  sw          $v1, -0x5E58($gp)
    ctx->pc = 0x24961cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943144), GPR_U32(ctx, 3));
    // 0x249620: 0x3e00008  jr          $ra
    ctx->pc = 0x249620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249620u;
        // 0x249624: 0xaf83a1a4  sw          $v1, -0x5E5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249628u;
}
