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

// Function: mmDrawRooms
// Address: 0x24aa08 - 0x24abfc
void mmDrawRooms_0x24aa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDrawRooms_0x24aa08");
#endif

    switch (ctx->pc) {
        case 0x24aa30u: goto label_24aa30;
        case 0x24aad4u: goto label_24aad4;
        case 0x24ab08u: goto label_24ab08;
        case 0x24abc8u: goto label_24abc8;
        default: break;
    }

    ctx->pc = 0x24aa08u;

    // 0x24aa08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24aa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24aa0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24aa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24aa10: 0x8f90a12c  lw          $s0, -0x5ED4($gp)
    ctx->pc = 0x24aa10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
    // 0x24aa14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24aa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24aa18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24aa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24aa1c: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x24AA1Cu;
    {
        const bool branch_taken_0x24aa1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA1Cu;
        // 0x24aa20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa1c) {
            ctx->pc = 0x24AAE4u;
            goto label_24aae4;
        }
    }
    ctx->pc = 0x24AA24u;
    // 0x24aa24: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x24aa24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24aa28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24aa2c: 0x0  nop
    ctx->pc = 0x24aa2cu;
    // NOP
label_24aa30:
    // 0x24aa30: 0x54510029  bnel        $v0, $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x24AA30u;
    {
        const bool branch_taken_0x24aa30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x24aa30) {
            ctx->pc = 0x24AA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AA30u;
            // 0x24aa34: 0x8e100038  lw          $s0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AAD8u;
            goto label_24aad8;
        }
    }
    ctx->pc = 0x24AA38u;
    // 0x24aa38: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x24aa38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x24aa3c: 0x8f82a0e0  lw          $v0, -0x5F20($gp)
    ctx->pc = 0x24aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942944)));
    // 0x24aa40: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x24aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24aa44: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x24aa44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x24aa48: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x24aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24aa4c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x24aa4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x24aa50: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x24AA50u;
    {
        const bool branch_taken_0x24aa50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA50u;
        // 0x24aa54: 0x8f8aa168  lw          $t2, -0x5E98($gp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa50) {
            ctx->pc = 0x24AAD4u;
            goto label_24aad4;
        }
    }
    ctx->pc = 0x24AA58u;
    // 0x24aa58: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x24aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x24aa5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24aa60: 0x8f84a178  lw          $a0, -0x5E88($gp)
    ctx->pc = 0x24aa60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943096)));
    // 0x24aa64: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x24aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24aa68: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x24aa68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24aa6c: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x24aa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x24aa70: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x24aa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x24aa74: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x24aa74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24aa78: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x24aa78u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x24aa7c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x24aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24aa80: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x24aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x24aa84: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x24aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x24aa88: 0x31d40  sll         $v1, $v1, 21
    ctx->pc = 0x24aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 21));
    // 0x24aa8c: 0xe24021  addu        $t0, $a3, $v0
    ctx->pc = 0x24aa8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x24aa90: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24AA90u;
    {
        const bool branch_taken_0x24aa90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA90u;
        // 0x24aa94: 0xa34821  addu        $t1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa90) {
            ctx->pc = 0x24AAD4u;
            goto label_24aad4;
        }
    }
    ctx->pc = 0x24AA98u;
    // 0x24aa98: 0x8f83a16c  lw          $v1, -0x5E94($gp)
    ctx->pc = 0x24aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x24aa9c: 0x8f82a17c  lw          $v0, -0x5E84($gp)
    ctx->pc = 0x24aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943100)));
    // 0x24aaa0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24aaa4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x24aaa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24aaa8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24AAA8u;
    {
        const bool branch_taken_0x24aaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AAA8u;
        // 0x24aaac: 0x10a102a  slt         $v0, $t0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aaa8) {
            ctx->pc = 0x24AAD4u;
            goto label_24aad4;
        }
    }
    ctx->pc = 0x24AAB0u;
    // 0x24aab0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24AAB0u;
    {
        const bool branch_taken_0x24aab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24aab0) {
            ctx->pc = 0x24AAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AAB0u;
            // 0x24aab4: 0x8e100038  lw          $s0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AAD8u;
            goto label_24aad8;
        }
    }
    ctx->pc = 0x24AAB8u;
    // 0x24aab8: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x24aab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24aabc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x24AABCu;
    {
        const bool branch_taken_0x24aabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24aabc) {
            ctx->pc = 0x24AAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AABCu;
            // 0x24aac0: 0x8e100038  lw          $s0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AAD8u;
            goto label_24aad8;
        }
    }
    ctx->pc = 0x24AAC4u;
    // 0x24aac4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x24aac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aac8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x24aac8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aacc: 0xc092802  jal         func_24A008
    ctx->pc = 0x24AACCu;
    SET_GPR_U32(ctx, 31, 0x24AAD4u);
    ctx->pc = 0x24AAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AACCu;
    // 0x24aad0: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A008u, 0x24AACCu, 0x24AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AAD4u;
label_24aad4:
    // 0x24aad4: 0x8e100038  lw          $s0, 0x38($s0)
    ctx->pc = 0x24aad4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_24aad8:
    // 0x24aad8: 0x5600ffd5  bnel        $s0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x24AAD8u;
    {
        const bool branch_taken_0x24aad8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24aad8) {
            ctx->pc = 0x24AADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AAD8u;
            // 0x24aadc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24aa30;
        }
    }
    ctx->pc = 0x24AAE0u;
    // 0x24aae0: 0x8f84a12c  lw          $a0, -0x5ED4($gp)
    ctx->pc = 0x24aae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
label_24aae4:
    // 0x24aae4: 0x8f83a0d8  lw          $v1, -0x5F28($gp)
    ctx->pc = 0x24aae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24aae8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x24aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x24aaec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24aaecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aaf0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24aaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24aaf4: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x24AAF4u;
    {
        const bool branch_taken_0x24aaf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AAF4u;
        // 0x24aaf8: 0xaf83a0d8  sw          $v1, -0x5F28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aaf4) {
            ctx->pc = 0x24ABD8u;
            goto label_24abd8;
        }
    }
    ctx->pc = 0x24AAFCu;
    // 0x24aafc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x24aafcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ab00: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x24ab00u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24ab04: 0x0  nop
    ctx->pc = 0x24ab04u;
    // NOP
label_24ab08:
    // 0x24ab08: 0x55710030  bnel        $t3, $s1, . + 4 + (0x30 << 2)
    ctx->pc = 0x24AB08u;
    {
        const bool branch_taken_0x24ab08 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 17));
        if (branch_taken_0x24ab08) {
            ctx->pc = 0x24AB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AB08u;
            // 0x24ab0c: 0x8e100038  lw          $s0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ABCCu;
            goto label_24abcc;
        }
    }
    ctx->pc = 0x24AB10u;
    // 0x24ab10: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x24ab10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x24ab14: 0x8f82a0dc  lw          $v0, -0x5F24($gp)
    ctx->pc = 0x24ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
    // 0x24ab18: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x24ab18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24ab1c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x24ab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x24ab20: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x24ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24ab24: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x24ab24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x24ab28: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x24AB28u;
    {
        const bool branch_taken_0x24ab28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB28u;
        // 0x24ab2c: 0x8f8aa168  lw          $t2, -0x5E98($gp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab28) {
            ctx->pc = 0x24ABC8u;
            goto label_24abc8;
        }
    }
    ctx->pc = 0x24AB30u;
    // 0x24ab30: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x24ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x24ab34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24ab38: 0x8f84a178  lw          $a0, -0x5E88($gp)
    ctx->pc = 0x24ab38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943096)));
    // 0x24ab3c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x24ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24ab40: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x24ab40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24ab44: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x24ab44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x24ab48: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x24ab48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x24ab4c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x24ab4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24ab50: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x24ab50u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x24ab54: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x24ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24ab58: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x24ab58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x24ab5c: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x24ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x24ab60: 0x31d40  sll         $v1, $v1, 21
    ctx->pc = 0x24ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 21));
    // 0x24ab64: 0xe24021  addu        $t0, $a3, $v0
    ctx->pc = 0x24ab64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x24ab68: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x24AB68u;
    {
        const bool branch_taken_0x24ab68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB68u;
        // 0x24ab6c: 0xa34821  addu        $t1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab68) {
            ctx->pc = 0x24ABC8u;
            goto label_24abc8;
        }
    }
    ctx->pc = 0x24AB70u;
    // 0x24ab70: 0x8f83a16c  lw          $v1, -0x5E94($gp)
    ctx->pc = 0x24ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x24ab74: 0x8f82a17c  lw          $v0, -0x5E84($gp)
    ctx->pc = 0x24ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943100)));
    // 0x24ab78: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24ab7c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x24ab7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24ab80: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24AB80u;
    {
        const bool branch_taken_0x24ab80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB80u;
        // 0x24ab84: 0x10a102a  slt         $v0, $t0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab80) {
            ctx->pc = 0x24ABC8u;
            goto label_24abc8;
        }
    }
    ctx->pc = 0x24AB88u;
    // 0x24ab88: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x24AB88u;
    {
        const bool branch_taken_0x24ab88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ab88) {
            ctx->pc = 0x24AB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AB88u;
            // 0x24ab8c: 0x8e100038  lw          $s0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ABCCu;
            goto label_24abcc;
        }
    }
    ctx->pc = 0x24AB90u;
    // 0x24ab90: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x24ab90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24ab94: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x24AB94u;
    {
        const bool branch_taken_0x24ab94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ab94) {
            ctx->pc = 0x24AB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AB94u;
            // 0x24ab98: 0x8e100038  lw          $s0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ABCCu;
            goto label_24abcc;
        }
    }
    ctx->pc = 0x24AB9Cu;
    // 0x24ab9c: 0x8f82a0f4  lw          $v0, -0x5F0C($gp)
    ctx->pc = 0x24ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942964)));
    // 0x24aba0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24aba0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aba4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x24aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24aba8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x24aba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24abac: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x24abacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x24abb0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x24abb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24abb4: 0x162480a  movz        $t1, $t3, $v0
    ctx->pc = 0x24abb4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 11));
    // 0x24abb8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x24abb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x24abbc: 0x35270004  ori         $a3, $t1, 0x4
    ctx->pc = 0x24abbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4);
    // 0x24abc0: 0xc092802  jal         func_24A008
    ctx->pc = 0x24ABC0u;
    SET_GPR_U32(ctx, 31, 0x24ABC8u);
    ctx->pc = 0x24ABC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ABC0u;
    // 0x24abc4: 0x123380a  movz        $a3, $t1, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A008u, 0x24ABC0u, 0x24ABC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ABC8u;
label_24abc8:
    // 0x24abc8: 0x8e100038  lw          $s0, 0x38($s0)
    ctx->pc = 0x24abc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_24abcc:
    // 0x24abcc: 0x5600ffce  bnel        $s0, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x24ABCCu;
    {
        const bool branch_taken_0x24abcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24abcc) {
            ctx->pc = 0x24ABD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24ABCCu;
            // 0x24abd0: 0x8e0b0000  lw          $t3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ab08;
        }
    }
    ctx->pc = 0x24ABD4u;
    // 0x24abd4: 0x8f83a0d8  lw          $v1, -0x5F28($gp)
    ctx->pc = 0x24abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
label_24abd8:
    // 0x24abd8: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x24abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x24abdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24abdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24abe0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24abe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24abe4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24abe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24abe8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24abe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24abec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24abecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24abf0: 0xaf83a0d8  sw          $v1, -0x5F28($gp)
    ctx->pc = 0x24abf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 3));
    // 0x24abf4: 0x3e00008  jr          $ra
    ctx->pc = 0x24ABF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ABF4u;
        // 0x24abf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ABF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24ABFCu;
}
