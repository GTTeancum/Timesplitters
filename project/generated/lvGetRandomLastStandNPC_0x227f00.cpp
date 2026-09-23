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

// Function: lvGetRandomLastStandNPC
// Address: 0x227f00 - 0x2280b0
void lvGetRandomLastStandNPC_0x227f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetRandomLastStandNPC_0x227f00");
#endif

    switch (ctx->pc) {
        case 0x227f30u: goto label_227f30;
        case 0x227f58u: goto label_227f58;
        case 0x227fa8u: goto label_227fa8;
        case 0x227fd8u: goto label_227fd8;
        case 0x227ff8u: goto label_227ff8;
        case 0x228008u: goto label_228008;
        case 0x228038u: goto label_228038;
        default: break;
    }

    ctx->pc = 0x227f00u;

    // 0x227f00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x227f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x227f04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x227f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x227f08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f0c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x227f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x227f10: 0x8f849f70  lw          $a0, -0x6090($gp)
    ctx->pc = 0x227f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x227f14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x227f14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f18: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x227f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x227f1c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x227f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x227f20: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x227f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x227f24: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x227f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x227f28: 0xc089ee4  jal         func_227B90
    ctx->pc = 0x227F28u;
    SET_GPR_U32(ctx, 31, 0x227F30u);
    ctx->pc = 0x227F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227F28u;
    // 0x227f2c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B90u, 0x227F28u, 0x227F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227F30u;
label_227f30:
    // 0x227f30: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x227f30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f34: 0x51200055  beql        $t1, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x227F34u;
    {
        const bool branch_taken_0x227f34 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x227f34) {
            ctx->pc = 0x227F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227F34u;
            // 0x227f38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22808Cu;
            goto label_22808c;
        }
    }
    ctx->pc = 0x227F3Cu;
    // 0x227f3c: 0x8d28002c  lw          $t0, 0x2C($t1)
    ctx->pc = 0x227f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x227f40: 0x51000052  beql        $t0, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x227F40u;
    {
        const bool branch_taken_0x227f40 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x227f40) {
            ctx->pc = 0x227F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227F40u;
            // 0x227f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22808Cu;
            goto label_22808c;
        }
    }
    ctx->pc = 0x227F48u;
    // 0x227f48: 0x1900000d  blez        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x227F48u;
    {
        const bool branch_taken_0x227f48 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x227F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F48u;
        // 0x227f4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f48) {
            ctx->pc = 0x227F80u;
            goto label_227f80;
        }
    }
    ctx->pc = 0x227F50u;
    // 0x227f50: 0x8d270028  lw          $a3, 0x28($t1)
    ctx->pc = 0x227f50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x227f54: 0x0  nop
    ctx->pc = 0x227f54u;
    // NOP
label_227f58:
    // 0x227f58: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x227f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x227f5c: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x227f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x227f60: 0xc31018  mult        $v0, $a2, $v1
    ctx->pc = 0x227f60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x227f64: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x227f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x227f68: 0xc8202a  slt         $a0, $a2, $t0
    ctx->pc = 0x227f68u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x227f6c: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x227f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x227f70: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x227f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x227f74: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x227f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x227f78: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x227F78u;
    {
        const bool branch_taken_0x227f78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x227F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F78u;
        // 0x227f7c: 0xa2900a  movz        $s2, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f78) {
            ctx->pc = 0x227F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227f58;
        }
    }
    ctx->pc = 0x227F80u;
label_227f80:
    // 0x227f80: 0x12400042  beqz        $s2, . + 4 + (0x42 << 2)
    ctx->pc = 0x227F80u;
    {
        const bool branch_taken_0x227f80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x227F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F80u;
        // 0x227f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f80) {
            ctx->pc = 0x22808Cu;
            goto label_22808c;
        }
    }
    ctx->pc = 0x227F88u;
    // 0x227f88: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x227f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x227f8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x227f8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f90: 0x1900000f  blez        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x227F90u;
    {
        const bool branch_taken_0x227f90 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x227F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F90u;
        // 0x227f94: 0x2455cc78  addiu       $s5, $v0, -0x3388 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f90) {
            ctx->pc = 0x227FD0u;
            goto label_227fd0;
        }
    }
    ctx->pc = 0x227F98u;
    // 0x227f98: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x227f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227fa0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x227fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227fa4: 0x0  nop
    ctx->pc = 0x227fa4u;
    // NOP
label_227fa8:
    // 0x227fa8: 0x8d220028  lw          $v0, 0x28($t1)
    ctx->pc = 0x227fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x227fac: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x227facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x227fb0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x227fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x227fb4: 0x14700004  bne         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227FB4u;
    {
        const bool branch_taken_0x227fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x227FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FB4u;
        // 0x227fb8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227fb4) {
            ctx->pc = 0x227FC8u;
            goto label_227fc8;
        }
    }
    ctx->pc = 0x227FBCu;
    // 0x227fbc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x227fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x227fc0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x227fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x227fc4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x227fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_227fc8:
    // 0x227fc8: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x227FC8u;
    {
        const bool branch_taken_0x227fc8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x227FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FC8u;
        // 0x227fcc: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227fc8) {
            ctx->pc = 0x227FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227fa8;
        }
    }
    ctx->pc = 0x227FD0u;
label_227fd0:
    // 0x227fd0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x227FD0u;
    SET_GPR_U32(ctx, 31, 0x227FD8u);
    ctx->pc = 0x227FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227FD0u;
    // 0x227fd4: 0x24141210  addiu       $s4, $zero, 0x1210 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x227FD0u, 0x227FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FD8u;
label_227fd8:
    // 0x227fd8: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x227fd8u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x227fdc: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x227FDCu;
    {
        const bool branch_taken_0x227fdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x227fdc) {
            ctx->pc = 0x227FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227FDCu;
            // 0x227fe0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x227FE4u;
            goto label_227fe4;
        }
    }
    ctx->pc = 0x227FE4u;
label_227fe4:
    // 0x227fe4: 0x1810  mfhi        $v1
    ctx->pc = 0x227fe4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x227fe8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x227fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227fec: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x227fecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ff0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x227ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x227ff4: 0x0  nop
    ctx->pc = 0x227ff4u;
    // NOP
label_227ff8:
    // 0x227ff8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x227ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x227ffc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x227ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x228000: 0xc099380  jal         func_264E00
    ctx->pc = 0x228000u;
    SET_GPR_U32(ctx, 31, 0x228008u);
    ctx->pc = 0x228004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228000u;
    // 0x228004: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x228000u, 0x228008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228008u;
label_228008:
    // 0x228008: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x228008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x22800c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x22800cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228010: 0x8f84b59c  lw          $a0, -0x4A64($gp)
    ctx->pc = 0x228010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x228014: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x228014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x228018: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x228018u;
    {
        const bool branch_taken_0x228018 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228018u;
        // 0x22801c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228018) {
            ctx->pc = 0x228080u;
            goto label_228080;
        }
    }
    ctx->pc = 0x228020u;
    // 0x228020: 0x8f88b238  lw          $t0, -0x4DC8($gp)
    ctx->pc = 0x228020u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x228024: 0x8d020a9c  lw          $v0, 0xA9C($t0)
    ctx->pc = 0x228024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2716)));
    // 0x228028: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x228028u;
    {
        const bool branch_taken_0x228028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228028) {
            ctx->pc = 0x22802Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228028u;
            // 0x22802c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228038u;
            goto label_228038;
        }
    }
    ctx->pc = 0x228030u;
    // 0x228030: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x228030u;
    {
        const bool branch_taken_0x228030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228030u;
        // 0x228034: 0x8d0202a8  lw          $v0, 0x2A8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228030) {
            ctx->pc = 0x22805Cu;
            goto label_22805c;
        }
    }
    ctx->pc = 0x228038u;
label_228038:
    // 0x228038: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x228038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x22803c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x22803cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x228040: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x228040u;
    {
        const bool branch_taken_0x228040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228040u;
        // 0x228044: 0xd41018  mult        $v0, $a2, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228040) {
            ctx->pc = 0x228080u;
            goto label_228080;
        }
    }
    ctx->pc = 0x228048u;
    // 0x228048: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x228048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x22804c: 0x8c620a9c  lw          $v0, 0xA9C($v1)
    ctx->pc = 0x22804cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2716)));
    // 0x228050: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x228050u;
    {
        const bool branch_taken_0x228050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228050) {
            ctx->pc = 0x228054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228050u;
            // 0x228054: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228038;
        }
    }
    ctx->pc = 0x228058u;
    // 0x228058: 0x8c6202a8  lw          $v0, 0x2A8($v1)
    ctx->pc = 0x228058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 680)));
label_22805c:
    // 0x22805c: 0x5447fff6  bnel        $v0, $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x22805Cu;
    {
        const bool branch_taken_0x22805c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x22805c) {
            ctx->pc = 0x228060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22805Cu;
            // 0x228060: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228038;
        }
    }
    ctx->pc = 0x228064u;
    // 0x228064: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x228064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x228068: 0x2121026  xor         $v0, $s0, $s2
    ctx->pc = 0x228068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 18));
    // 0x22806c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x22806cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x228070: 0x16130003  bne         $s0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x228070u;
    {
        const bool branch_taken_0x228070 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x228074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228070u;
        // 0x228074: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228070) {
            ctx->pc = 0x228080u;
            goto label_228080;
        }
    }
    ctx->pc = 0x228078u;
    // 0x228078: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x228078u;
    {
        const bool branch_taken_0x228078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228078u;
        // 0x22807c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228078) {
            ctx->pc = 0x22808Cu;
            goto label_22808c;
        }
    }
    ctx->pc = 0x228080u;
label_228080:
    // 0x228080: 0x1220ffdd  beqz        $s1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x228080u;
    {
        const bool branch_taken_0x228080 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x228084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228080u;
        // 0x228084: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228080) {
            ctx->pc = 0x227FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227ff8;
        }
    }
    ctx->pc = 0x228088u;
    // 0x228088: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x228088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22808c:
    // 0x22808c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22808cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x228090: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x228090u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228094: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x228094u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228098: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x228098u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22809c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22809cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2280a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2280a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2280a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2280a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2280a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2280A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2280ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2280A8u;
        // 0x2280ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2280A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2280B0u;
}
