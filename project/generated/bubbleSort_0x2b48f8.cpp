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

// Function: bubbleSort
// Address: 0x2b48f8 - 0x2b49f4
void bubbleSort_0x2b48f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bubbleSort_0x2b48f8");
#endif

    switch (ctx->pc) {
        case 0x2b4930u: goto label_2b4930;
        case 0x2b4958u: goto label_2b4958;
        case 0x2b4978u: goto label_2b4978;
        default: break;
    }

    ctx->pc = 0x2b48f8u;

    // 0x2b48f8: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x2b48f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2b48fc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b48fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4900: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x2b4900u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2b4904: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x2b4904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x2b4908: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2b4908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2b490c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x2b490cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4910: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2b4910u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2b4914: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2b4914u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4918: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b4918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b491c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b491cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4920: 0x3a2e823  subu        $sp, $sp, $v0
    ctx->pc = 0x2b4920u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2b4924: 0x18c00009  blez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B4924u;
    {
        const bool branch_taken_0x2b4924 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2B4928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4924u;
        // 0x2b4928: 0x3a0582d  daddu       $t3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4924) {
            ctx->pc = 0x2B494Cu;
            goto label_2b494c;
        }
    }
    ctx->pc = 0x2B492Cu;
    // 0x2b492c: 0x0  nop
    ctx->pc = 0x2b492cu;
    // NOP
label_2b4930:
    // 0x2b4930: 0x1671821  addu        $v1, $t3, $a3
    ctx->pc = 0x2b4930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x2b4934: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b4934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b4938: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2b4938u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b493c: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x2b493cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2b4940: 0x0  nop
    ctx->pc = 0x2b4940u;
    // NOP
    // 0x2b4944: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B4944u;
    {
        const bool branch_taken_0x2b4944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4944) {
            ctx->pc = 0x2B4930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4930;
        }
    }
    ctx->pc = 0x2B494Cu;
label_2b494c:
    // 0x2b494c: 0x18c00025  blez        $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B494Cu;
    {
        const bool branch_taken_0x2b494c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2B4950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B494Cu;
        // 0x2b4950: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b494c) {
            ctx->pc = 0x2B49E4u;
            goto label_2b49e4;
        }
    }
    ctx->pc = 0x2B4954u;
    // 0x2b4954: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x2b4954u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4958:
    // 0x2b4958: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x2b4958u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x2b495c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b495cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4960: 0x18c00016  blez        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B4960u;
    {
        const bool branch_taken_0x2b4960 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2B4964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4960u;
        // 0x2b4964: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4960) {
            ctx->pc = 0x2B49BCu;
            goto label_2b49bc;
        }
    }
    ctx->pc = 0x2B4968u;
    // 0x2b4968: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x2b4968u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2b496c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b496cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b4970: 0x1681021  addu        $v0, $t3, $t0
    ctx->pc = 0x2b4970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x2b4974: 0x0  nop
    ctx->pc = 0x2b4974u;
    // NOP
label_2b4978:
    // 0x2b4978: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2b4978u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b497c: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2B497Cu;
    {
        const bool branch_taken_0x2b497c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b497c) {
            ctx->pc = 0x2B4980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B497Cu;
            // 0x2b4980: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B49A8u;
            goto label_2b49a8;
        }
    }
    ctx->pc = 0x2B4984u;
    // 0x2b4984: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x2b4984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2b4988: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2b4988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2b498c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b498cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b4990: 0x142182a  slt         $v1, $t2, $v0
    ctx->pc = 0x2b4990u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b4994: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4994u;
    {
        const bool branch_taken_0x2b4994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4994) {
            ctx->pc = 0x2B4998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4994u;
            // 0x2b4998: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B49A8u;
            goto label_2b49a8;
        }
    }
    ctx->pc = 0x2B499Cu;
    // 0x2b499c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2b499cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b49a0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2b49a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b49a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2b49a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2b49a8:
    // 0x2b49a8: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x2b49a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2b49ac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2B49ACu;
    {
        const bool branch_taken_0x2b49ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B49B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49ACu;
        // 0x2b49b0: 0x1681021  addu        $v0, $t3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b49ac) {
            ctx->pc = 0x2B4978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4978;
        }
    }
    ctx->pc = 0x2B49B4u;
    // 0x2b49b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B49B4u;
    {
        const bool branch_taken_0x2b49b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B49B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49B4u;
        // 0x2b49b8: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b49b4) {
            ctx->pc = 0x2B49C8u;
            goto label_2b49c8;
        }
    }
    ctx->pc = 0x2B49BCu;
label_2b49bc:
    // 0x2b49bc: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x2b49bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2b49c0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b49c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b49c4: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x2b49c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2b49c8:
    // 0x2b49c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2b49c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b49cc: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x2b49ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2b49d0: 0x1691821  addu        $v1, $t3, $t1
    ctx->pc = 0x2b49d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2b49d4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2b49d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2b49d8: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x2b49d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2b49dc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2B49DCu;
    {
        const bool branch_taken_0x2b49dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49DCu;
        // 0x2b49e0: 0xa06d0000  sb          $t5, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b49dc) {
            ctx->pc = 0x2B4958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4958;
        }
    }
    ctx->pc = 0x2B49E4u;
label_2b49e4:
    // 0x2b49e4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x2b49e4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b49e8: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x2b49e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b49ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B49ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B49F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49ECu;
        // 0x2b49f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B49ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B49F4u;
}
