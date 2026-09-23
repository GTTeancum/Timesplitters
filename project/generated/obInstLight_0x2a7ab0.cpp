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

// Function: obInstLight
// Address: 0x2a7ab0 - 0x2a7cc8
void obInstLight_0x2a7ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obInstLight_0x2a7ab0");
#endif

    switch (ctx->pc) {
        case 0x2a7b00u: goto label_2a7b00;
        case 0x2a7b28u: goto label_2a7b28;
        case 0x2a7b68u: goto label_2a7b68;
        case 0x2a7bdcu: goto label_2a7bdc;
        case 0x2a7c18u: goto label_2a7c18;
        case 0x2a7c88u: goto label_2a7c88;
        default: break;
    }

    ctx->pc = 0x2a7ab0u;

    // 0x2a7ab0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a7ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a7ab4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2a7ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2a7ab8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a7ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a7abc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a7abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a7ac0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2a7ac0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ac4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a7ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a7ac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a7ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7acc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2a7accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2a7ad0: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x2a7ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2a7ad4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a7ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a7ad8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a7ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a7adc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a7adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a7ae0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2a7ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a7ae4: 0x8e0300fc  lw          $v1, 0xFC($s0)
    ctx->pc = 0x2a7ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x2a7ae8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a7aec: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2a7aecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a7af0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7AF0u;
    {
        const bool branch_taken_0x2a7af0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7AF0u;
        // 0x2a7af4: 0xc2b023  subu        $s6, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7af0) {
            ctx->pc = 0x2A7B04u;
            goto label_2a7b04;
        }
    }
    ctx->pc = 0x2A7AF8u;
    // 0x2a7af8: 0xc097f24  jal         func_25FC90
    ctx->pc = 0x2A7AF8u;
    SET_GPR_U32(ctx, 31, 0x2A7B00u);
    ctx->pc = 0x2A7AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7AF8u;
    // 0x2a7afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC90u, 0x2A7AF8u, 0x2A7B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7B00u;
label_2a7b00:
    // 0x2a7b00: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2a7b00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a7b04:
    // 0x2a7b04: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x2a7b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x2a7b08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a7b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7b0c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2a7b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a7b10: 0xae030120  sw          $v1, 0x120($s0)
    ctx->pc = 0x2a7b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 3));
    // 0x2a7b14: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a7b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a7b18: 0x18400061  blez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x2A7B18u;
    {
        const bool branch_taken_0x2a7b18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A7B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B18u;
        // 0x2a7b1c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7b18) {
            ctx->pc = 0x2A7CA0u;
            goto label_2a7ca0;
        }
    }
    ctx->pc = 0x2A7B20u;
    // 0x2a7b20: 0x24150030  addiu       $s5, $zero, 0x30
    ctx->pc = 0x2a7b20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a7b24: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2a7b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2a7b28:
    // 0x2a7b28: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x2a7b28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a7b2c: 0x769821  addu        $s3, $v1, $s6
    ctx->pc = 0x2a7b2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2a7b30: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2a7b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2a7b34: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2A7B34u;
    {
        const bool branch_taken_0x2a7b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B34u;
        // 0x2a7b38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7b34) {
            ctx->pc = 0x2A7BE4u;
            goto label_2a7be4;
        }
    }
    ctx->pc = 0x2A7B3Cu;
    // 0x2a7b3c: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2a7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2a7b40: 0x4420013  bltzl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A7B40u;
    {
        const bool branch_taken_0x2a7b40 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a7b40) {
            ctx->pc = 0x2A7B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7B40u;
            // 0x2a7b44: 0x8e060120  lw          $a2, 0x120($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7B90u;
            goto label_2a7b90;
        }
    }
    ctx->pc = 0x2A7B48u;
    // 0x2a7b48: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2a7b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2a7b4c: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A7B4Cu;
    {
        const bool branch_taken_0x2a7b4c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A7B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B4Cu;
        // 0x2a7b50: 0x2604010c  addiu       $a0, $s0, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7b4c) {
            ctx->pc = 0x2A7B8Cu;
            goto label_2a7b8c;
        }
    }
    ctx->pc = 0x2A7B54u;
    // 0x2a7b54: 0x8e060120  lw          $a2, 0x120($s0)
    ctx->pc = 0x2a7b54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x2a7b58: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x2a7b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x2a7b5c: 0x113880  sll         $a3, $s1, 2
    ctx->pc = 0x2a7b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2a7b60: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x2a7b60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a7b64: 0x0  nop
    ctx->pc = 0x2a7b64u;
    // NOP
label_2a7b68:
    // 0x2a7b68: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x2a7b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x2a7b6c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2a7b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2a7b70: 0x0  nop
    ctx->pc = 0x2a7b70u;
    // NOP
    // 0x2a7b74: 0x0  nop
    ctx->pc = 0x2a7b74u;
    // NOP
    // 0x2a7b78: 0x0  nop
    ctx->pc = 0x2a7b78u;
    // NOP
    // 0x2a7b7c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A7B7Cu;
    {
        const bool branch_taken_0x2a7b7c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2a7b7c) {
            ctx->pc = 0x2A7B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7b68;
        }
    }
    ctx->pc = 0x2A7B84u;
    // 0x2a7b84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A7B84u;
    {
        const bool branch_taken_0x2a7b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B84u;
        // 0x2a7b88: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7b84) {
            ctx->pc = 0x2A7BA4u;
            goto label_2a7ba4;
        }
    }
    ctx->pc = 0x2A7B8Cu;
label_2a7b8c:
    // 0x2a7b8c: 0x8e060120  lw          $a2, 0x120($s0)
    ctx->pc = 0x2a7b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_2a7b90:
    // 0x2a7b90: 0x2604010c  addiu       $a0, $s0, 0x10C
    ctx->pc = 0x2a7b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
    // 0x2a7b94: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x2a7b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x2a7b98: 0x113880  sll         $a3, $s1, 2
    ctx->pc = 0x2a7b98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2a7b9c: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x2a7b9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a7ba0: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x2a7ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2a7ba4:
    // 0x2a7ba4: 0x8e880018  lw          $t0, 0x18($s4)
    ctx->pc = 0x2a7ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2a7ba8: 0x2353018  mult        $a2, $s1, $s5
    ctx->pc = 0x2a7ba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2a7bac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a7bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a7bb0: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x2a7bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2a7bb4: 0xc34821  addu        $t1, $a2, $v1
    ctx->pc = 0x2a7bb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a7bb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a7bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7bbc: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x2a7bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2a7bc0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2a7bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2a7bc4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a7bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a7bc8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2a7bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2a7bcc: 0x8e87000c  lw          $a3, 0xC($s4)
    ctx->pc = 0x2a7bccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2a7bd0: 0xad25000c  sw          $a1, 0xC($t1)
    ctx->pc = 0x2a7bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 5));
    // 0x2a7bd4: 0xc0a9e94  jal         func_2A7A50
    ctx->pc = 0x2A7BD4u;
    SET_GPR_U32(ctx, 31, 0x2A7BDCu);
    ctx->pc = 0x2A7BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7BD4u;
    // 0x2a7bd8: 0x8e640020  lw          $a0, 0x20($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7A50u, 0x2A7BD4u, 0x2A7BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7BDCu;
label_2a7bdc:
    // 0x2a7bdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7BDCu;
    {
        const bool branch_taken_0x2a7bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BDCu;
        // 0x2a7be0: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7bdc) {
            ctx->pc = 0x2A7BECu;
            goto label_2a7bec;
        }
    }
    ctx->pc = 0x2A7BE4u;
label_2a7be4:
    // 0x2a7be4: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x2a7be4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a7be8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2a7be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2a7bec:
    // 0x2a7bec: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2A7BECu;
    {
        const bool branch_taken_0x2a7bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BECu;
        // 0x2a7bf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7bec) {
            ctx->pc = 0x2A7C88u;
            goto label_2a7c88;
        }
    }
    ctx->pc = 0x2A7BF4u;
    // 0x2a7bf4: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2a7bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2a7bf8: 0x4420011  bltzl       $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A7BF8u;
    {
        const bool branch_taken_0x2a7bf8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a7bf8) {
            ctx->pc = 0x2A7BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7BF8u;
            // 0x2a7bfc: 0x8e060120  lw          $a2, 0x120($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7C40u;
            goto label_2a7c40;
        }
    }
    ctx->pc = 0x2A7C00u;
    // 0x2a7c00: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2a7c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2a7c04: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A7C04u;
    {
        const bool branch_taken_0x2a7c04 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A7C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7C04u;
        // 0x2a7c08: 0x113880  sll         $a3, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7c04) {
            ctx->pc = 0x2A7C3Cu;
            goto label_2a7c3c;
        }
    }
    ctx->pc = 0x2A7C0Cu;
    // 0x2a7c0c: 0x8e060120  lw          $a2, 0x120($s0)
    ctx->pc = 0x2a7c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x2a7c10: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x2a7c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x2a7c14: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x2a7c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_2a7c18:
    // 0x2a7c18: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x2a7c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x2a7c1c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2a7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2a7c20: 0x0  nop
    ctx->pc = 0x2a7c20u;
    // NOP
    // 0x2a7c24: 0x0  nop
    ctx->pc = 0x2a7c24u;
    // NOP
    // 0x2a7c28: 0x0  nop
    ctx->pc = 0x2a7c28u;
    // NOP
    // 0x2a7c2c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A7C2Cu;
    {
        const bool branch_taken_0x2a7c2c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2a7c2c) {
            ctx->pc = 0x2A7C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7c18;
        }
    }
    ctx->pc = 0x2A7C34u;
    // 0x2a7c34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A7C34u;
    {
        const bool branch_taken_0x2a7c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7C34u;
        // 0x2a7c38: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7c34) {
            ctx->pc = 0x2A7C50u;
            goto label_2a7c50;
        }
    }
    ctx->pc = 0x2A7C3Cu;
label_2a7c3c:
    // 0x2a7c3c: 0x8e060120  lw          $a2, 0x120($s0)
    ctx->pc = 0x2a7c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_2a7c40:
    // 0x2a7c40: 0x113880  sll         $a3, $s1, 2
    ctx->pc = 0x2a7c40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2a7c44: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x2a7c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x2a7c48: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x2a7c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x2a7c4c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x2a7c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2a7c50:
    // 0x2a7c50: 0x8e880018  lw          $t0, 0x18($s4)
    ctx->pc = 0x2a7c50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2a7c54: 0x2353018  mult        $a2, $s1, $s5
    ctx->pc = 0x2a7c54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2a7c58: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a7c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a7c5c: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x2a7c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2a7c60: 0xc34821  addu        $t1, $a2, $v1
    ctx->pc = 0x2a7c60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a7c64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a7c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7c68: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x2a7c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2a7c6c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2a7c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2a7c70: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a7c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a7c74: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2a7c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2a7c78: 0x8e87000c  lw          $a3, 0xC($s4)
    ctx->pc = 0x2a7c78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2a7c7c: 0xad250024  sw          $a1, 0x24($t1)
    ctx->pc = 0x2a7c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 5));
    // 0x2a7c80: 0xc0a9e94  jal         func_2A7A50
    ctx->pc = 0x2A7C80u;
    SET_GPR_U32(ctx, 31, 0x2A7C88u);
    ctx->pc = 0x2A7C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7C80u;
    // 0x2a7c84: 0x8e640038  lw          $a0, 0x38($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7A50u, 0x2A7C80u, 0x2A7C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C88u;
label_2a7c88:
    // 0x2a7c88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a7c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a7c8c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2a7c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a7c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a7c94: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2a7c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a7c98: 0x1440ffa3  bnez        $v0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x2A7C98u;
    {
        const bool branch_taken_0x2a7c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7C98u;
        // 0x2a7c9c: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7c98) {
            ctx->pc = 0x2A7B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7b28;
        }
    }
    ctx->pc = 0x2A7CA0u;
label_2a7ca0:
    // 0x2a7ca0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a7ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a7ca4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2a7ca4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a7ca8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2a7ca8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7cac: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a7cacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a7cb0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a7cb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a7cb4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a7cb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a7cb8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a7cb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7cbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a7cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7CC0u;
        // 0x2a7cc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7CC8u;
}
