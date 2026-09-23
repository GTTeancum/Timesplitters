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

// Function: frontmpgMake
// Address: 0x240f38 - 0x2410a0
void frontmpgMake_0x240f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontmpgMake_0x240f38");
#endif

    switch (ctx->pc) {
        case 0x240f68u: goto label_240f68;
        case 0x240f90u: goto label_240f90;
        case 0x241000u: goto label_241000;
        case 0x241060u: goto label_241060;
        case 0x241070u: goto label_241070;
        default: break;
    }

    ctx->pc = 0x240f38u;

    // 0x240f38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x240f3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240f40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x240f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x240f44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240f48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x240f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240f4c: 0x3c1101fc  lui         $s1, 0x1FC
    ctx->pc = 0x240f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)508 << 16));
    // 0x240f50: 0x263011f8  addiu       $s0, $s1, 0x11F8
    ctx->pc = 0x240f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4600));
    // 0x240f54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x240f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x240f58: 0xaf82b730  sw          $v0, -0x48D0($gp)
    ctx->pc = 0x240f58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948656), GPR_U32(ctx, 2));
    // 0x240f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240f60: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x240F60u;
    SET_GPR_U32(ctx, 31, 0x240F68u);
    ctx->pc = 0x240F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240F60u;
    // 0x240f64: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x240F60u, 0x240F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240F68u;
label_240f68:
    // 0x240f68: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x240f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x240f6c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x240f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x240f70: 0xae2011f8  sw          $zero, 0x11F8($s1)
    ctx->pc = 0x240f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4600), GPR_U32(ctx, 0));
    // 0x240f74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x240f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240f78: 0x8ca34aa0  lw          $v1, 0x4AA0($a1)
    ctx->pc = 0x240f78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x354AA0u));
    // 0x240f7c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x240f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x240f80: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x240F80u;
    {
        const bool branch_taken_0x240f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F80u;
        // 0x240f84: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f80) {
            ctx->pc = 0x240FBCu;
            goto label_240fbc;
        }
    }
    ctx->pc = 0x240F88u;
    // 0x240f88: 0x3c0a01fc  lui         $t2, 0x1FC
    ctx->pc = 0x240f88u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)508 << 16));
    // 0x240f8c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x240f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_240f90:
    // 0x240f90: 0x28c20012  slti        $v0, $a2, 0x12
    ctx->pc = 0x240f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x240f94: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x240F94u;
    {
        const bool branch_taken_0x240f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F94u;
        // 0x240f98: 0x24a24aa0  addiu       $v0, $a1, 0x4AA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 19104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f94) {
            ctx->pc = 0x240FC8u;
            goto label_240fc8;
        }
    }
    ctx->pc = 0x240F9Cu;
    // 0x240f9c: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x240f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x240fa0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x240fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x240fa4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x240fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x240fa8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x240fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240fac: 0x5464fff8  bnel        $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x240FACu;
    {
        const bool branch_taken_0x240fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x240fac) {
            ctx->pc = 0x240FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240FACu;
            // 0x240fb0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240f90;
        }
    }
    ctx->pc = 0x240FB4u;
    // 0x240fb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x240FB4u;
    {
        const bool branch_taken_0x240fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FB4u;
        // 0x240fb8: 0x24a24aa0  addiu       $v0, $a1, 0x4AA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 19104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fb4) {
            ctx->pc = 0x240FD0u;
            goto label_240fd0;
        }
    }
    ctx->pc = 0x240FBCu;
label_240fbc:
    // 0x240fbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x240fbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240fc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x240FC0u;
    {
        const bool branch_taken_0x240fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FC0u;
        // 0x240fc4: 0x3c0a01fc  lui         $t2, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fc0) {
            ctx->pc = 0x240FCCu;
            goto label_240fcc;
        }
    }
    ctx->pc = 0x240FC8u;
label_240fc8:
    // 0x240fc8: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x240fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_240fcc:
    // 0x240fcc: 0x24a24aa0  addiu       $v0, $a1, 0x4AA0
    ctx->pc = 0x240fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 19104));
label_240fd0:
    // 0x240fd0: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x240fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x240fd4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x240fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x240fd8: 0x262511f8  addiu       $a1, $s1, 0x11F8
    ctx->pc = 0x240fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4600));
    // 0x240fdc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x240fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240fe0: 0x24632a88  addiu       $v1, $v1, 0x2A88
    ctx->pc = 0x240fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10888));
    // 0x240fe4: 0xaca60024  sw          $a2, 0x24($a1)
    ctx->pc = 0x240fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 6));
    // 0x240fe8: 0x2467000c  addiu       $a3, $v1, 0xC
    ctx->pc = 0x240fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x240fec: 0xaca40028  sw          $a0, 0x28($a1)
    ctx->pc = 0x240fecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 4));
    // 0x240ff0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x240ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ff4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x240ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x240ff8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x240ff8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ffc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x240ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241000:
    // 0x241000: 0x28c40006  slti        $a0, $a2, 0x6
    ctx->pc = 0x241000u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x241004: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x241004u;
    {
        const bool branch_taken_0x241004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x241008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241004u;
        // 0x241008: 0x24c2fffa  addiu       $v0, $a2, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241004) {
            ctx->pc = 0x241024u;
            goto label_241024;
        }
    }
    ctx->pc = 0x24100Cu;
    // 0x24100c: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x24100cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x241010: 0x50a90001  beql        $a1, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x241010u;
    {
        const bool branch_taken_0x241010 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        if (branch_taken_0x241010) {
            ctx->pc = 0x241014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241010u;
            // 0x241014: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x241018u;
            goto label_241018;
        }
    }
    ctx->pc = 0x241018u;
label_241018:
    // 0x241018: 0x1012  mflo        $v0
    ctx->pc = 0x241018u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x24101c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24101Cu;
    {
        const bool branch_taken_0x24101c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24101Cu;
        // 0x241020: 0xace2fff8  sw          $v0, -0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294967288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24101c) {
            ctx->pc = 0x241038u;
            goto label_241038;
        }
    }
    ctx->pc = 0x241024u;
label_241024:
    // 0x241024: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x241024u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x241028: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24102c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x24102cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x241030: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x241030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x241034: 0xace2fff8  sw          $v0, -0x8($a3)
    ctx->pc = 0x241034u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967288), GPR_U32(ctx, 2));
label_241038:
    // 0x241038: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x241038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x24103c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x24103cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x241040: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x241040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x241044: 0xace8fffc  sw          $t0, -0x4($a3)
    ctx->pc = 0x241044u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967292), GPR_U32(ctx, 8));
    // 0x241048: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x241048u;
    {
        const bool branch_taken_0x241048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241048u;
        // 0x24104c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241048) {
            ctx->pc = 0x241000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241000;
        }
    }
    ctx->pc = 0x241050u;
    // 0x241050: 0x25442b28  addiu       $a0, $t2, 0x2B28
    ctx->pc = 0x241050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 11048));
    // 0x241054: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x241054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x241058: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x241058u;
    SET_GPR_U32(ctx, 31, 0x241060u);
    ctx->pc = 0x24105Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241058u;
    // 0x24105c: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x241058u, 0x241060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241060u;
label_241060:
    // 0x241060: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x241060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x241064: 0x2782b798  addiu       $v0, $gp, -0x4868
    ctx->pc = 0x241064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948760));
    // 0x241068: 0x94636448  lhu         $v1, 0x6448($v1)
    ctx->pc = 0x241068u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x356448u));
    // 0x24106c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x24106cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_241070:
    // 0x241070: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x241070u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x241074: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x241074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x241078: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x241078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x24107c: 0x0  nop
    ctx->pc = 0x24107cu;
    // NOP
    // 0x241080: 0x0  nop
    ctx->pc = 0x241080u;
    // NOP
    // 0x241084: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x241084u;
    {
        const bool branch_taken_0x241084 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x241084) {
            ctx->pc = 0x241070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241070;
        }
    }
    ctx->pc = 0x24108Cu;
    // 0x24108c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24108cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241090: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x241090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241098: 0x808e38e  j           func_238E38
    ctx->pc = 0x241098u;
    ctx->pc = 0x24109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241098u;
    // 0x24109c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238E38u;
    gameoptionsMake_0x238e38(rdram, ctx, runtime); return;
    ctx->pc = 0x2410A0u;
}
