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

// Function: propPutPropInCollisionList
// Address: 0x268538 - 0x268674
void propPutPropInCollisionList_0x268538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propPutPropInCollisionList_0x268538");
#endif

    switch (ctx->pc) {
        case 0x268550u: goto label_268550;
        case 0x2685a8u: goto label_2685a8;
        case 0x2685e0u: goto label_2685e0;
        case 0x268638u: goto label_268638;
        default: break;
    }

    ctx->pc = 0x268538u;

    // 0x268538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x268538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26853c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26853cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x268540: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x268540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x268544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x268544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268548: 0xc09a146  jal         func_268518
    ctx->pc = 0x268548u;
    SET_GPR_U32(ctx, 31, 0x268550u);
    ctx->pc = 0x26854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268548u;
    // 0x26854c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268518u, 0x268548u, 0x268550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268550u;
label_268550:
    // 0x268550: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x268550u;
    {
        const bool branch_taken_0x268550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268550u;
        // 0x268554: 0x8f82b904  lw          $v0, -0x46FC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268550) {
            ctx->pc = 0x2685D8u;
            goto label_2685d8;
        }
    }
    ctx->pc = 0x268558u;
    // 0x268558: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x268558u;
    {
        const bool branch_taken_0x268558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268558u;
        // 0x26855c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268558) {
            ctx->pc = 0x268584u;
            goto label_268584;
        }
    }
    ctx->pc = 0x268560u;
    // 0x268560: 0x8f82b8fc  lw          $v0, -0x4704($gp)
    ctx->pc = 0x268560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949116)));
    // 0x268564: 0x3c0301fd  lui         $v1, 0x1FD
    ctx->pc = 0x268564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)509 << 16));
    // 0x268568: 0x24633410  addiu       $v1, $v1, 0x3410
    ctx->pc = 0x268568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13328));
    // 0x26856c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x26856cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x268570: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x268570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x268574: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x268574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x268578: 0xaf82b8fc  sw          $v0, -0x4704($gp)
    ctx->pc = 0x268578u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949116), GPR_U32(ctx, 2));
    // 0x26857c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x26857Cu;
    {
        const bool branch_taken_0x26857c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26857Cu;
        // 0x268580: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26857c) {
            ctx->pc = 0x268664u;
            goto label_268664;
        }
    }
    ctx->pc = 0x268584u;
label_268584:
    // 0x268584: 0x8f86b8fc  lw          $a2, -0x4704($gp)
    ctx->pc = 0x268584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949116)));
    // 0x268588: 0x18c00010  blez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x268588u;
    {
        const bool branch_taken_0x268588 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x26858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268588u;
        // 0x26858c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268588) {
            ctx->pc = 0x2685CCu;
            goto label_2685cc;
        }
    }
    ctx->pc = 0x268590u;
    // 0x268590: 0x3c0701fd  lui         $a3, 0x1FD
    ctx->pc = 0x268590u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)509 << 16));
    // 0x268594: 0x8ce23410  lw          $v0, 0x3410($a3)
    ctx->pc = 0x268594u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FD3410u));
    // 0x268598: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x268598u;
    {
        const bool branch_taken_0x268598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268598) {
            ctx->pc = 0x26859Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268598u;
            // 0x26859c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2685A8u;
            goto label_2685a8;
        }
    }
    ctx->pc = 0x2685A0u;
    // 0x2685a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2685A0u;
    {
        const bool branch_taken_0x2685a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2685A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685A0u;
        // 0x2685a4: 0xacf03410  sw          $s0, 0x3410($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 13328), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2685a0) {
            ctx->pc = 0x2685CCu;
            goto label_2685cc;
        }
    }
    ctx->pc = 0x2685A8u;
label_2685a8:
    // 0x2685a8: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x2685a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2685ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2685ACu;
    {
        const bool branch_taken_0x2685ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2685B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685ACu;
        // 0x2685b0: 0x24e23410  addiu       $v0, $a3, 0x3410 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 13328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2685ac) {
            ctx->pc = 0x2685CCu;
            goto label_2685cc;
        }
    }
    ctx->pc = 0x2685B4u;
    // 0x2685b4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2685b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2685b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2685b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2685bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2685bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2685c0: 0x5480fff9  bnel        $a0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2685C0u;
    {
        const bool branch_taken_0x2685c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2685c0) {
            ctx->pc = 0x2685C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2685C0u;
            // 0x2685c4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2685A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2685a8;
        }
    }
    ctx->pc = 0x2685C8u;
    // 0x2685c8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2685c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_2685cc:
    // 0x2685cc: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x2685ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2685d0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2685D0u;
    {
        const bool branch_taken_0x2685d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2685D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685D0u;
        // 0x2685d4: 0xaf82b904  sw          $v0, -0x46FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2685d0) {
            ctx->pc = 0x268664u;
            goto label_268664;
        }
    }
    ctx->pc = 0x2685D8u;
label_2685d8:
    // 0x2685d8: 0xc09a13e  jal         func_2684F8
    ctx->pc = 0x2685D8u;
    SET_GPR_U32(ctx, 31, 0x2685E0u);
    ctx->pc = 0x2685DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2685D8u;
    // 0x2685dc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2684F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2684F8u, 0x2685D8u, 0x2685E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2685E0u;
label_2685e0:
    // 0x2685e0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2685E0u;
    {
        const bool branch_taken_0x2685e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2685E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685E0u;
        // 0x2685e4: 0x8f82b900  lw          $v0, -0x4700($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2685e0) {
            ctx->pc = 0x268664u;
            goto label_268664;
        }
    }
    ctx->pc = 0x2685E8u;
    // 0x2685e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2685E8u;
    {
        const bool branch_taken_0x2685e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2685ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685E8u;
        // 0x2685ec: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2685e8) {
            ctx->pc = 0x268614u;
            goto label_268614;
        }
    }
    ctx->pc = 0x2685F0u;
    // 0x2685f0: 0x8f82b8f8  lw          $v0, -0x4708($gp)
    ctx->pc = 0x2685f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949112)));
    // 0x2685f4: 0x3c0301fd  lui         $v1, 0x1FD
    ctx->pc = 0x2685f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)509 << 16));
    // 0x2685f8: 0x24632f60  addiu       $v1, $v1, 0x2F60
    ctx->pc = 0x2685f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12128));
    // 0x2685fc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2685fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x268600: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x268600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x268604: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x268604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x268608: 0xaf82b8f8  sw          $v0, -0x4708($gp)
    ctx->pc = 0x268608u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949112), GPR_U32(ctx, 2));
    // 0x26860c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26860Cu;
    {
        const bool branch_taken_0x26860c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26860Cu;
        // 0x268610: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26860c) {
            ctx->pc = 0x268664u;
            goto label_268664;
        }
    }
    ctx->pc = 0x268614u;
label_268614:
    // 0x268614: 0x8f86b8f8  lw          $a2, -0x4708($gp)
    ctx->pc = 0x268614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949112)));
    // 0x268618: 0x18c00010  blez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x268618u;
    {
        const bool branch_taken_0x268618 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x26861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268618u;
        // 0x26861c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268618) {
            ctx->pc = 0x26865Cu;
            goto label_26865c;
        }
    }
    ctx->pc = 0x268620u;
    // 0x268620: 0x3c0701fd  lui         $a3, 0x1FD
    ctx->pc = 0x268620u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)509 << 16));
    // 0x268624: 0x8ce22f60  lw          $v0, 0x2F60($a3)
    ctx->pc = 0x268624u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FD2F60u));
    // 0x268628: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x268628u;
    {
        const bool branch_taken_0x268628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268628) {
            ctx->pc = 0x26862Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268628u;
            // 0x26862c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268638u;
            goto label_268638;
        }
    }
    ctx->pc = 0x268630u;
    // 0x268630: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x268630u;
    {
        const bool branch_taken_0x268630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268630u;
        // 0x268634: 0xacf02f60  sw          $s0, 0x2F60($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12128), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268630) {
            ctx->pc = 0x26865Cu;
            goto label_26865c;
        }
    }
    ctx->pc = 0x268638u;
label_268638:
    // 0x268638: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x268638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x26863c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26863Cu;
    {
        const bool branch_taken_0x26863c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26863Cu;
        // 0x268640: 0x24e22f60  addiu       $v0, $a3, 0x2F60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 12128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26863c) {
            ctx->pc = 0x26865Cu;
            goto label_26865c;
        }
    }
    ctx->pc = 0x268644u;
    // 0x268644: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x268644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x268648: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x268648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26864c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26864cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x268650: 0x5480fff9  bnel        $a0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x268650u;
    {
        const bool branch_taken_0x268650 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x268650) {
            ctx->pc = 0x268654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268650u;
            // 0x268654: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268638;
        }
    }
    ctx->pc = 0x268658u;
    // 0x268658: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x268658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_26865c:
    // 0x26865c: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x26865cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x268660: 0xaf82b900  sw          $v0, -0x4700($gp)
    ctx->pc = 0x268660u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949120), GPR_U32(ctx, 2));
label_268664:
    // 0x268664: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x268664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x268668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26866c: 0x3e00008  jr          $ra
    ctx->pc = 0x26866Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26866Cu;
        // 0x268670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26866Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268674u;
}
