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

// Function: bgGetNeighbours
// Address: 0x257520 - 0x2575ec
void bgGetNeighbours_0x257520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgGetNeighbours_0x257520");
#endif

    switch (ctx->pc) {
        case 0x257560u: goto label_257560;
        case 0x257590u: goto label_257590;
        default: break;
    }

    ctx->pc = 0x257520u;

    // 0x257520: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x257520u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257524: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x257524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x257528: 0x1e21018  mult        $v0, $t7, $v0
    ctx->pc = 0x257528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25752c: 0x8f83a240  lw          $v1, -0x5DC0($gp)
    ctx->pc = 0x25752cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x257530: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x257530u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257534: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x257534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257538: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25753c: 0x8c4e0004  lw          $t6, 0x4($v0)
    ctx->pc = 0x25753cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x257540: 0x8dcb0000  lw          $t3, 0x0($t6)
    ctx->pc = 0x257540u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x257544: 0xcb102a  slt         $v0, $a2, $t3
    ctx->pc = 0x257544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x257548: 0xc2580b  movn        $t3, $a2, $v0
    ctx->pc = 0x257548u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 6));
    // 0x25754c: 0x19600025  blez        $t3, . + 4 + (0x25 << 2)
    ctx->pc = 0x25754Cu;
    {
        const bool branch_taken_0x25754c = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x257550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25754Cu;
        // 0x257550: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25754c) {
            ctx->pc = 0x2575E4u;
            goto label_2575e4;
        }
    }
    ctx->pc = 0x257554u;
    // 0x257554: 0x8f8da244  lw          $t5, -0x5DBC($gp)
    ctx->pc = 0x257554u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943300)));
    // 0x257558: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x257558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25755c: 0x0  nop
    ctx->pc = 0x25755cu;
    // NOP
label_257560:
    // 0x257560: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x257560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x257564: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x257564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x257568: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x257568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25756c: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x25756cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x257570: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x257570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x257574: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x257574u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x257578: 0x510f0001  beql        $t0, $t7, . + 4 + (0x1 << 2)
    ctx->pc = 0x257578u;
    {
        const bool branch_taken_0x257578 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 15));
        if (branch_taken_0x257578) {
            ctx->pc = 0x25757Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257578u;
            // 0x25757c: 0x8c680004  lw          $t0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257580u;
            goto label_257580;
        }
    }
    ctx->pc = 0x257580u;
label_257580:
    // 0x257580: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x257580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257584: 0x1920000d  blez        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x257584u;
    {
        const bool branch_taken_0x257584 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x257588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257584u;
        // 0x257588: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257584) {
            ctx->pc = 0x2575BCu;
            goto label_2575bc;
        }
    }
    ctx->pc = 0x25758Cu;
    // 0x25758c: 0x248a0001  addiu       $t2, $a0, 0x1
    ctx->pc = 0x25758cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_257590:
    // 0x257590: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x257590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x257594: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x257594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257598: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x257598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x25759c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x25759cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2575a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2575a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2575a4: 0xe9202a  slt         $a0, $a3, $t1
    ctx->pc = 0x2575a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2575a8: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x2575a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x2575ac: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2575ACu;
    {
        const bool branch_taken_0x2575ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2575B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575ACu;
        // 0x2575b0: 0xa2300a  movz        $a2, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2575ac) {
            ctx->pc = 0x257590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257590;
        }
    }
    ctx->pc = 0x2575B4u;
    // 0x2575b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2575B4u;
    {
        const bool branch_taken_0x2575b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2575b4) {
            ctx->pc = 0x2575C0u;
            goto label_2575c0;
        }
    }
    ctx->pc = 0x2575BCu;
label_2575bc:
    // 0x2575bc: 0x248a0001  addiu       $t2, $a0, 0x1
    ctx->pc = 0x2575bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2575c0:
    // 0x2575c0: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2575C0u;
    {
        const bool branch_taken_0x2575c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2575C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575C0u;
        // 0x2575c4: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2575c0) {
            ctx->pc = 0x2575D8u;
            goto label_2575d8;
        }
    }
    ctx->pc = 0x2575C8u;
    // 0x2575c8: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2575c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2575cc: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2575ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2575d0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2575d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2575d4: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x2575d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_2575d8:
    // 0x2575d8: 0x8b102a  slt         $v0, $a0, $t3
    ctx->pc = 0x2575d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2575dc: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2575DCu;
    {
        const bool branch_taken_0x2575dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2575E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575DCu;
        // 0x2575e0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2575dc) {
            ctx->pc = 0x257560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257560;
        }
    }
    ctx->pc = 0x2575E4u;
label_2575e4:
    // 0x2575e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2575E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2575E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575E4u;
        // 0x2575e8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2575E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2575ECu;
}
