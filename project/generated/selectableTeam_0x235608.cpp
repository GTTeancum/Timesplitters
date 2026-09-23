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

// Function: selectableTeam
// Address: 0x235608 - 0x23570c
void selectableTeam_0x235608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("selectableTeam_0x235608");
#endif

    switch (ctx->pc) {
        case 0x235620u: goto label_235620;
        case 0x235668u: goto label_235668;
        case 0x2356c0u: goto label_2356c0;
        default: break;
    }

    ctx->pc = 0x235608u;

    // 0x235608: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x235608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23560c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x23560cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x235610: 0x244611f8  addiu       $a2, $v0, 0x11F8
    ctx->pc = 0x235610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4600));
    // 0x235614: 0x8cc50030  lw          $a1, 0x30($a2)
    ctx->pc = 0x235614u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FC1228u));
    // 0x235618: 0x54a30004  bnel        $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x235618u;
    {
        const bool branch_taken_0x235618 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x235618) {
            ctx->pc = 0x23561Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235618u;
            // 0x23561c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23562Cu;
            goto label_23562c;
        }
    }
    ctx->pc = 0x235620u;
label_235620:
    // 0x235620: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x235620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x235624: 0x3e00008  jr          $ra
    ctx->pc = 0x235624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235624u;
        // 0x235628: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23562Cu;
label_23562c:
    // 0x23562c: 0x10a2fffc  beq         $a1, $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x23562Cu;
    {
        const bool branch_taken_0x23562c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x235630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23562Cu;
        // 0x235630: 0x24c5003c  addiu       $a1, $a2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23562c) {
            ctx->pc = 0x235620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235620;
        }
    }
    ctx->pc = 0x235634u;
    // 0x235634: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x235634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x235638: 0x9043ffff  lbu         $v1, -0x1($v0)
    ctx->pc = 0x235638u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x23563c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23563Cu;
    {
        const bool branch_taken_0x23563c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x235640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23563Cu;
        // 0x235640: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23563c) {
            ctx->pc = 0x23564Cu;
            goto label_23564c;
        }
    }
    ctx->pc = 0x235644u;
    // 0x235644: 0x3e00008  jr          $ra
    ctx->pc = 0x235644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235644u;
        // 0x235648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23564Cu;
label_23564c:
    // 0x23564c: 0x8f89b730  lw          $t1, -0x48D0($gp)
    ctx->pc = 0x23564cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x235650: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x235650u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235654: 0x24472a88  addiu       $a3, $v0, 0x2A88
    ctx->pc = 0x235654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 10888));
    // 0x235658: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x235658u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23565c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x23565cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235660: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x235660u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235664: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x235664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_235668:
    // 0x235668: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x235668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x23566c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x23566Cu;
    {
        const bool branch_taken_0x23566c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23566c) {
            ctx->pc = 0x235670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23566Cu;
            // 0x235670: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2356A4u;
            goto label_2356a4;
        }
    }
    ctx->pc = 0x235674u;
    // 0x235674: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x235674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x235678: 0x442000a  bltzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x235678u;
    {
        const bool branch_taken_0x235678 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x235678) {
            ctx->pc = 0x23567Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235678u;
            // 0x23567c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2356A4u;
            goto label_2356a4;
        }
    }
    ctx->pc = 0x235680u;
    // 0x235680: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x235680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x235684: 0xac1021  addu        $v0, $a1, $t4
    ctx->pc = 0x235684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x235688: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x235688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23568c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23568Cu;
    {
        const bool branch_taken_0x23568c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x235690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23568Cu;
        // 0x235690: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23568c) {
            ctx->pc = 0x2356A0u;
            goto label_2356a0;
        }
    }
    ctx->pc = 0x235694u;
    // 0x235694: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x235694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x235698: 0x4a1026  xor         $v0, $v0, $t2
    ctx->pc = 0x235698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 10));
    // 0x23569c: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x23569cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_2356a0:
    // 0x2356a0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2356a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_2356a4:
    // 0x2356a4: 0x4c1fff0  bgez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2356A4u;
    {
        const bool branch_taken_0x2356a4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2356A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356A4u;
        // 0x2356a8: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356a4) {
            ctx->pc = 0x235668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235668;
        }
    }
    ctx->pc = 0x2356ACu;
    // 0x2356ac: 0x19200012  blez        $t1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2356ACu;
    {
        const bool branch_taken_0x2356ac = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x2356B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356ACu;
        // 0x2356b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356ac) {
            ctx->pc = 0x2356F8u;
            goto label_2356f8;
        }
    }
    ctx->pc = 0x2356B4u;
    // 0x2356b4: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x2356b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x2356b8: 0x24a32c88  addiu       $v1, $a1, 0x2C88
    ctx->pc = 0x2356b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 11400));
    // 0x2356bc: 0x0  nop
    ctx->pc = 0x2356bcu;
    // NOP
label_2356c0:
    // 0x2356c0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2356c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2356c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2356c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2356c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2356c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2356cc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2356CCu;
    {
        const bool branch_taken_0x2356cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2356D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356CCu;
        // 0x2356d0: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356cc) {
            ctx->pc = 0x2356E4u;
            goto label_2356e4;
        }
    }
    ctx->pc = 0x2356D4u;
    // 0x2356d4: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x2356d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2356d8: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2356d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2356dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2356DCu;
    {
        const bool branch_taken_0x2356dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2356E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356DCu;
        // 0x2356e0: 0x62400b  movn        $t0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356dc) {
            ctx->pc = 0x2356E8u;
            goto label_2356e8;
        }
    }
    ctx->pc = 0x2356E4u;
label_2356e4:
    // 0x2356e4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2356e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_2356e8:
    // 0x2356e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2356e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2356ec: 0xc9102a  slt         $v0, $a2, $t1
    ctx->pc = 0x2356ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2356f0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2356F0u;
    {
        const bool branch_taken_0x2356f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2356F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356F0u;
        // 0x2356f4: 0x24a32c88  addiu       $v1, $a1, 0x2C88 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 11400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356f0) {
            ctx->pc = 0x2356C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2356c0;
        }
    }
    ctx->pc = 0x2356F8u;
label_2356f8:
    // 0x2356f8: 0x15600002  bnez        $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2356F8u;
    {
        const bool branch_taken_0x2356f8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x2356FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356F8u;
        // 0x2356fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356f8) {
            ctx->pc = 0x235704u;
            goto label_235704;
        }
    }
    ctx->pc = 0x235700u;
    // 0x235700: 0x8102b  sltu        $v0, $zero, $t0
    ctx->pc = 0x235700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_235704:
    // 0x235704: 0x3e00008  jr          $ra
    ctx->pc = 0x235704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23570Cu;
}
