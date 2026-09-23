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

// Function: challengeIsBestScore
// Address: 0x21f088 - 0x21f164
void challengeIsBestScore_0x21f088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("challengeIsBestScore_0x21f088");
#endif

    switch (ctx->pc) {
        case 0x21f0a4u: goto label_21f0a4;
        case 0x21f0d4u: goto label_21f0d4;
        case 0x21f0f0u: goto label_21f0f0;
        default: break;
    }

    ctx->pc = 0x21f088u;

    // 0x21f088: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21f088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21f08c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21f08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f090: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21f090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21f094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f098: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21f098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21f09c: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x21F09Cu;
    SET_GPR_U32(ctx, 31, 0x21F0A4u);
    ctx->pc = 0x21F0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F09Cu;
    // 0x21f0a0: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x21F09Cu, 0x21F0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F0A4u;
label_21f0a4:
    // 0x21f0a4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x21f0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x21f0a8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x21f0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x21f0ac: 0x2492c4a8  addiu       $s2, $a0, -0x3B58
    ctx->pc = 0x21f0acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952104));
    // 0x21f0b0: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x21f0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4ECu));
    // 0x21f0b4: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x21f0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x21f0b8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x21f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x21f0bc: 0x24630578  addiu       $v1, $v1, 0x578
    ctx->pc = 0x21f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1400));
    // 0x21f0c0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x21f0c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x21f0c4: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x21F0C4u;
    {
        const bool branch_taken_0x21f0c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0C4u;
        // 0x21f0c8: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0c4) {
            ctx->pc = 0x21F148u;
            goto label_21f148;
        }
    }
    ctx->pc = 0x21F0CCu;
    // 0x21f0cc: 0xc087c20  jal         func_21F080
    ctx->pc = 0x21F0CCu;
    SET_GPR_U32(ctx, 31, 0x21F0D4u);
    ctx->pc = 0x21F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F080u, 0x21F0CCu, 0x21F0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F0D4u;
label_21f0d4:
    // 0x21f0d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21f0d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f0d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21f0dc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21F0DCu;
    {
        const bool branch_taken_0x21f0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0DCu;
        // 0x21f0e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0dc) {
            ctx->pc = 0x21F14Cu;
            goto label_21f14c;
        }
    }
    ctx->pc = 0x21F0E4u;
    // 0x21f0e4: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x21f0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x21f0e8: 0xc087cac  jal         func_21F2B0
    ctx->pc = 0x21F0E8u;
    SET_GPR_U32(ctx, 31, 0x21F0F0u);
    ctx->pc = 0x21F0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F0E8u;
    // 0x21f0ec: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F2B0u, 0x21F0E8u, 0x21F0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F0F0u;
label_21f0f0:
    // 0x21f0f0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x21f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x21f0f4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x21f0f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x21f0f8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21F0F8u;
    {
        const bool branch_taken_0x21f0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0F8u;
        // 0x21f0fc: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0f8) {
            ctx->pc = 0x21F148u;
            goto label_21f148;
        }
    }
    ctx->pc = 0x21F100u;
    // 0x21f100: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21f100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21f104: 0x24420910  addiu       $v0, $v0, 0x910
    ctx->pc = 0x21f104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2320));
    // 0x21f108: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21f108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21f10c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21f10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f110: 0x800008  jr          $a0
    ctx->pc = 0x21F110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F118u: goto label_21f118;
            case 0x21F12Cu: goto label_21f12c;
            case 0x21F13Cu: goto label_21f13c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F110u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21F118u;
label_21f118:
    // 0x21f118: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x21f118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x21f11c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21F11Cu;
    {
        const bool branch_taken_0x21f11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F11Cu;
        // 0x21f120: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f11c) {
            ctx->pc = 0x21F148u;
            goto label_21f148;
        }
    }
    ctx->pc = 0x21F124u;
    // 0x21f124: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21F124u;
    {
        const bool branch_taken_0x21f124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F124u;
        // 0x21f128: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f124) {
            ctx->pc = 0x21F150u;
            goto label_21f150;
        }
    }
    ctx->pc = 0x21F12Cu;
label_21f12c:
    // 0x21f12c: 0x16300007  bne         $s1, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F12Cu;
    {
        const bool branch_taken_0x21f12c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x21F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F12Cu;
        // 0x21f130: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f12c) {
            ctx->pc = 0x21F14Cu;
            goto label_21f14c;
        }
    }
    ctx->pc = 0x21F134u;
    // 0x21f134: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21F134u;
    {
        const bool branch_taken_0x21f134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F134u;
        // 0x21f138: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f134) {
            ctx->pc = 0x21F14Cu;
            goto label_21f14c;
        }
    }
    ctx->pc = 0x21F13Cu;
label_21f13c:
    // 0x21f13c: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x21f13cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x21f140: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x21F140u;
    {
        const bool branch_taken_0x21f140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F140u;
        // 0x21f144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f140) {
            ctx->pc = 0x21F14Cu;
            goto label_21f14c;
        }
    }
    ctx->pc = 0x21F148u;
label_21f148:
    // 0x21f148: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21f148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f14c:
    // 0x21f14c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21f14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_21f150:
    // 0x21f150: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21f150u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f154: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21f154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f158: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f15c: 0x3e00008  jr          $ra
    ctx->pc = 0x21F15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F15Cu;
        // 0x21f160: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F164u;
}
