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

// Function: soundTick
// Address: 0x204ec0 - 0x2052b4
void soundTick_0x204ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundTick_0x204ec0");
#endif

    switch (ctx->pc) {
        case 0x204ef4u: goto label_204ef4;
        case 0x204ef8u: goto label_204ef8;
        case 0x204fc4u: goto label_204fc4;
        case 0x204fecu: goto label_204fec;
        case 0x205030u: goto label_205030;
        case 0x205078u: goto label_205078;
        case 0x205080u: goto label_205080;
        case 0x20509cu: goto label_20509c;
        case 0x2050a8u: goto label_2050a8;
        case 0x2050f8u: goto label_2050f8;
        case 0x205108u: goto label_205108;
        case 0x205134u: goto label_205134;
        case 0x205180u: goto label_205180;
        case 0x20519cu: goto label_20519c;
        case 0x2051b0u: goto label_2051b0;
        case 0x2051e0u: goto label_2051e0;
        case 0x205208u: goto label_205208;
        case 0x205238u: goto label_205238;
        case 0x205250u: goto label_205250;
        case 0x205264u: goto label_205264;
        case 0x205280u: goto label_205280;
        case 0x205288u: goto label_205288;
        default: break;
    }

    ctx->pc = 0x204ec0u;

    // 0x204ec0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x204ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x204ec4: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x204ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x204ec8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x204ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x204ecc: 0x3c1701fb  lui         $s7, 0x1FB
    ctx->pc = 0x204eccu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)507 << 16));
    // 0x204ed0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x204ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x204ed4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x204ed4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204ed8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x204ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x204edc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x204edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x204ee0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x204ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x204ee4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x204ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x204ee8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x204ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x204eec: 0xc08131e  jal         func_204C78
    ctx->pc = 0x204EECu;
    SET_GPR_U32(ctx, 31, 0x204EF4u);
    ctx->pc = 0x204EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204EECu;
    // 0x204ef0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204C78u, 0x204EECu, 0x204EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204EF4u;
label_204ef4:
    // 0x204ef4: 0x161140  sll         $v0, $s6, 5
    ctx->pc = 0x204ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 5));
label_204ef8:
    // 0x204ef8: 0x26e31870  addiu       $v1, $s7, 0x1870
    ctx->pc = 0x204ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 6256));
    // 0x204efc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x204efcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204f00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x204f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x204f04: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x204f04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x204f08: 0x104000b6  beqz        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x204F08u;
    {
        const bool branch_taken_0x204f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F08u;
        // 0x204f0c: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f08) {
            ctx->pc = 0x2051E4u;
            goto label_2051e4;
        }
    }
    ctx->pc = 0x204F10u;
    // 0x204f10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x204f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x204f14: 0x24429030  addiu       $v0, $v0, -0x6FD0
    ctx->pc = 0x204f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938672));
    // 0x204f18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x204f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x204f1c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x204f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204f20: 0x800008  jr          $a0
    ctx->pc = 0x204F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204F28u: goto label_204f28;
            case 0x204F78u: goto label_204f78;
            case 0x20503Cu: goto label_20503c;
            case 0x205048u: goto label_205048;
            case 0x205110u: goto label_205110;
            case 0x205144u: goto label_205144;
            case 0x2051E4u: goto label_2051e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204F20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x204F28u;
label_204f28:
    // 0x204f28: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x204f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x204f2c: 0x8f82b458  lw          $v0, -0x4BA8($gp)
    ctx->pc = 0x204f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947928)));
    // 0x204f30: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x204f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x204f34: 0x1c6000ab  bgtz        $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x204F34u;
    {
        const bool branch_taken_0x204f34 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x204F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F34u;
        // 0x204f38: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f34) {
            ctx->pc = 0x2051E4u;
            goto label_2051e4;
        }
    }
    ctx->pc = 0x204F3Cu;
    // 0x204f3c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x204f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x204f40: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x204f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x204f44: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x204f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x204f48: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x204f48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x204f4c: 0x2463e180  addiu       $v1, $v1, -0x1E80
    ctx->pc = 0x204f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959488));
    // 0x204f50: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x204f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x204f54: 0x94820016  lhu         $v0, 0x16($a0)
    ctx->pc = 0x204f54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x204f58: 0x30420012  andi        $v0, $v0, 0x12
    ctx->pc = 0x204f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)18);
    // 0x204f5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204F5Cu;
    {
        const bool branch_taken_0x204f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F5Cu;
        // 0x204f60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f5c) {
            ctx->pc = 0x204F6Cu;
            goto label_204f6c;
        }
    }
    ctx->pc = 0x204F64u;
    // 0x204f64: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x204F64u;
    {
        const bool branch_taken_0x204f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F64u;
        // 0x204f68: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f64) {
            ctx->pc = 0x2051E4u;
            goto label_2051e4;
        }
    }
    ctx->pc = 0x204F6Cu;
label_204f6c:
    // 0x204f6c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x204f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x204f70: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x204F70u;
    {
        const bool branch_taken_0x204f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F70u;
        // 0x204f74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f70) {
            ctx->pc = 0x2051E4u;
            goto label_2051e4;
        }
    }
    ctx->pc = 0x204F78u;
label_204f78:
    // 0x204f78: 0x8f829af8  lw          $v0, -0x6508($gp)
    ctx->pc = 0x204f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941432)));
    // 0x204f7c: 0x5440009a  bnel        $v0, $zero, . + 4 + (0x9A << 2)
    ctx->pc = 0x204F7Cu;
    {
        const bool branch_taken_0x204f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204f7c) {
            ctx->pc = 0x204F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204F7Cu;
            // 0x204f80: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2051E8u;
            goto label_2051e8;
        }
    }
    ctx->pc = 0x204F84u;
    // 0x204f84: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x204f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x204f88: 0x24130024  addiu       $s3, $zero, 0x24
    ctx->pc = 0x204f88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x204f8c: 0x3c150032  lui         $s5, 0x32
    ctx->pc = 0x204f8cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)50 << 16));
    // 0x204f90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204f94: 0x932818  mult        $a1, $a0, $s3
    ctx->pc = 0x204f94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x204f98: 0x26b2e180  addiu       $s2, $s5, -0x1E80
    ctx->pc = 0x204f98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294959488));
    // 0x204f9c: 0x2654001c  addiu       $s4, $s2, 0x1C
    ctx->pc = 0x204f9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x204fa0: 0xaf839af8  sw          $v1, -0x6508($gp)
    ctx->pc = 0x204fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941432), GPR_U32(ctx, 3));
    // 0x204fa4: 0xb41021  addu        $v0, $a1, $s4
    ctx->pc = 0x204fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x204fa8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x204fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204fac: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x204FACu;
    {
        const bool branch_taken_0x204fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204FACu;
        // 0x204fb0: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204fac) {
            ctx->pc = 0x205008u;
            goto label_205008;
        }
    }
    ctx->pc = 0x204FB4u;
    // 0x204fb4: 0x26510004  addiu       $s1, $s2, 0x4
    ctx->pc = 0x204fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x204fb8: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x204fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x204fbc: 0xc0868a2  jal         func_21A288
    ctx->pc = 0x204FBCu;
    SET_GPR_U32(ctx, 31, 0x204FC4u);
    ctx->pc = 0x204FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204FBCu;
    // 0x204fc0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A288u, 0x204FBCu, 0x204FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204FC4u;
label_204fc4:
    // 0x204fc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x204fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204fc8: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x204FC8u;
    {
        const bool branch_taken_0x204fc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x204fc8) {
            ctx->pc = 0x204FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204FC8u;
            // 0x204fcc: 0xa600000a  sh          $zero, 0xA($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205000u;
            goto label_205000;
        }
    }
    ctx->pc = 0x204FD0u;
    // 0x204fd0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x204fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x204fd4: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x204fd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x204fd8: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x204fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x204fdc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x204fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x204fe0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x204fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204fe4: 0xc0868ce  jal         func_21A338
    ctx->pc = 0x204FE4u;
    SET_GPR_U32(ctx, 31, 0x204FECu);
    ctx->pc = 0x204FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204FE4u;
    // 0x204fe8: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A338u, 0x204FE4u, 0x204FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204FECu;
label_204fec:
    // 0x204fec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x204fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x204ff0: 0x932818  mult        $a1, $a0, $s3
    ctx->pc = 0x204ff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x204ff4: 0xb21821  addu        $v1, $a1, $s2
    ctx->pc = 0x204ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x204ff8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x204FF8u;
    {
        const bool branch_taken_0x204ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204FF8u;
        // 0x204ffc: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ff8) {
            ctx->pc = 0x205004u;
            goto label_205004;
        }
    }
    ctx->pc = 0x205000u;
label_205000:
    // 0x205000: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x205000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_205004:
    // 0x205004: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x205004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_205008:
    // 0x205008: 0x26a3e180  addiu       $v1, $s5, -0x1E80
    ctx->pc = 0x205008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294959488));
    // 0x20500c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x20500cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x205010: 0x8f85b630  lw          $a1, -0x49D0($gp)
    ctx->pc = 0x205010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948400)));
    // 0x205014: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x205014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205018: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x205018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20501c: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x20501cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x205020: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x205020u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205024: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x205024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x205028: 0xc0b7664  jal         func_2DD990
    ctx->pc = 0x205028u;
    SET_GPR_U32(ctx, 31, 0x205030u);
    ctx->pc = 0x20502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205028u;
    // 0x20502c: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD990u, 0x205028u, 0x205030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205030u;
label_205030:
    // 0x205030: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x205030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x205034: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x205034u;
    {
        const bool branch_taken_0x205034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205034u;
        // 0x205038: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205034) {
            ctx->pc = 0x2051E4u;
            goto label_2051e4;
        }
    }
    ctx->pc = 0x20503Cu;
label_20503c:
    // 0x20503c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20503cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x205040: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x205040u;
    {
        const bool branch_taken_0x205040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205040u;
        // 0x205044: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205040) {
            ctx->pc = 0x2051E4u;
            goto label_2051e4;
        }
    }
    ctx->pc = 0x205048u;
label_205048:
    // 0x205048: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x205048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20504c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x20504cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x205050: 0x3c110032  lui         $s1, 0x32
    ctx->pc = 0x205050u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)50 << 16));
    // 0x205054: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x205054u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x205058: 0x2623e180  addiu       $v1, $s1, -0x1E80
    ctx->pc = 0x205058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294959488));
    // 0x20505c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x20505cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x205060: 0x94820016  lhu         $v0, 0x16($a0)
    ctx->pc = 0x205060u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x205064: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x205064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x205068: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x205068u;
    {
        const bool branch_taken_0x205068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205068u;
        // 0x20506c: 0x8f829b14  lw          $v0, -0x64EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205068) {
            ctx->pc = 0x205088u;
            goto label_205088;
        }
    }
    ctx->pc = 0x205070u;
    // 0x205070: 0xc081118  jal         func_204460
    ctx->pc = 0x205070u;
    SET_GPR_U32(ctx, 31, 0x205078u);
    ctx->pc = 0x205074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205070u;
    // 0x205074: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204460u, 0x205070u, 0x205078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205078u;
label_205078:
    // 0x205078: 0xc08111e  jal         func_204478
    ctx->pc = 0x205078u;
    SET_GPR_U32(ctx, 31, 0x205080u);
    ctx->pc = 0x20507Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205078u;
    // 0x20507c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204478u, 0x205078u, 0x205080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205080u;
label_205080:
    // 0x205080: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x205080u;
    {
        const bool branch_taken_0x205080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205080u;
        // 0x205084: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205080) {
            ctx->pc = 0x2050ACu;
            goto label_2050ac;
        }
    }
    ctx->pc = 0x205088u;
label_205088:
    // 0x205088: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x205088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20508c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x20508cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x205090: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x205090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x205094: 0xc081118  jal         func_204460
    ctx->pc = 0x205094u;
    SET_GPR_U32(ctx, 31, 0x20509Cu);
    ctx->pc = 0x205098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205094u;
    // 0x205098: 0xaf839b14  sw          $v1, -0x64EC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941460), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204460u, 0x205094u, 0x20509Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20509Cu;
label_20509c:
    // 0x20509c: 0x8f849b14  lw          $a0, -0x64EC($gp)
    ctx->pc = 0x20509cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941460)));
    // 0x2050a0: 0xc08111e  jal         func_204478
    ctx->pc = 0x2050A0u;
    SET_GPR_U32(ctx, 31, 0x2050A8u);
    ctx->pc = 0x2050A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2050A0u;
    // 0x2050a4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204478u, 0x2050A0u, 0x2050A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2050A8u;
label_2050a8:
    // 0x2050a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2050a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2050ac:
    // 0x2050ac: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x2050acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2050b0: 0x8f859af4  lw          $a1, -0x650C($gp)
    ctx->pc = 0x2050b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941428)));
    // 0x2050b4: 0x2622e180  addiu       $v0, $s1, -0x1E80
    ctx->pc = 0x2050b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294959488));
    // 0x2050b8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2050b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2050bc: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x2050bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2050c0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2050c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2050c4: 0xac890018  sw          $t1, 0x18($a0)
    ctx->pc = 0x2050c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 9));
    // 0x2050c8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2050c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2050cc: 0x8c4a0020  lw          $t2, 0x20($v0)
    ctx->pc = 0x2050ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2050d0: 0x1d400003  bgtz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2050D0u;
    {
        const bool branch_taken_0x2050d0 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x2050D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050D0u;
        // 0x2050d4: 0x8f88b630  lw          $t0, -0x49D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2050d0) {
            ctx->pc = 0x2050E0u;
            goto label_2050e0;
        }
    }
    ctx->pc = 0x2050D8u;
    // 0x2050d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2050D8u;
    {
        const bool branch_taken_0x2050d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2050DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050D8u;
        // 0x2050dc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2050d8) {
            ctx->pc = 0x205100u;
            goto label_205100;
        }
    }
    ctx->pc = 0x2050E0u;
label_2050e0:
    // 0x2050e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2050e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2050e4: 0x340580d0  ori         $a1, $zero, 0x80D0
    ctx->pc = 0x2050e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32976);
    // 0x2050e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2050e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2050ec: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x2050ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x2050f0: 0xc0b7684  jal         func_2DDA10
    ctx->pc = 0x2050F0u;
    SET_GPR_U32(ctx, 31, 0x2050F8u);
    ctx->pc = 0x2050F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2050F0u;
    // 0x2050f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA10u, 0x2050F0u, 0x2050F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2050F8u;
label_2050f8:
    // 0x2050f8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2050f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2050fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2050fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_205100:
    // 0x205100: 0xc081118  jal         func_204460
    ctx->pc = 0x205100u;
    SET_GPR_U32(ctx, 31, 0x205108u);
    ctx->pc = 0x205104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205100u;
    // 0x205104: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204460u, 0x205100u, 0x205108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205108u;
label_205108:
    // 0x205108: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x205108u;
    {
        const bool branch_taken_0x205108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205108u;
        // 0x20510c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205108) {
            ctx->pc = 0x2051E8u;
            goto label_2051e8;
        }
    }
    ctx->pc = 0x205110u;
label_205110:
    // 0x205110: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x205110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x205114: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x205114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x205118: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x205118u;
    {
        const bool branch_taken_0x205118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205118u;
        // 0x20511c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205118) {
            ctx->pc = 0x205138u;
            goto label_205138;
        }
    }
    ctx->pc = 0x205120u;
    // 0x205120: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x205120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205124: 0x340580f0  ori         $a1, $zero, 0x80F0
    ctx->pc = 0x205124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x205128: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x205128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20512c: 0xc0b7684  jal         func_2DDA10
    ctx->pc = 0x20512Cu;
    SET_GPR_U32(ctx, 31, 0x205134u);
    ctx->pc = 0x205130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20512Cu;
    // 0x205130: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA10u, 0x20512Cu, 0x205134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205134u;
label_205134:
    // 0x205134: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x205134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_205138:
    // 0x205138: 0xaf809af8  sw          $zero, -0x6508($gp)
    ctx->pc = 0x205138u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941432), GPR_U32(ctx, 0));
    // 0x20513c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x20513Cu;
    {
        const bool branch_taken_0x20513c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20513Cu;
        // 0x205140: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20513c) {
            ctx->pc = 0x2051E4u;
            goto label_2051e4;
        }
    }
    ctx->pc = 0x205144u;
label_205144:
    // 0x205144: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x205144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x205148: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x205148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x20514c: 0x3c110032  lui         $s1, 0x32
    ctx->pc = 0x20514cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)50 << 16));
    // 0x205150: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x205150u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x205154: 0x2622e180  addiu       $v0, $s1, -0x1E80
    ctx->pc = 0x205154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294959488));
    // 0x205158: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x205158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20515c: 0x94630016  lhu         $v1, 0x16($v1)
    ctx->pc = 0x20515cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x205160: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x205160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x205164: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x205164u;
    {
        const bool branch_taken_0x205164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205164u;
        // 0x205168: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205164) {
            ctx->pc = 0x205188u;
            goto label_205188;
        }
    }
    ctx->pc = 0x20516Cu;
    // 0x20516c: 0x8f839b14  lw          $v1, -0x64EC($gp)
    ctx->pc = 0x20516cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941460)));
    // 0x205170: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x205170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x205174: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x205174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205178: 0xc08123e  jal         func_2048F8
    ctx->pc = 0x205178u;
    SET_GPR_U32(ctx, 31, 0x205180u);
    ctx->pc = 0x20517Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205178u;
    // 0x20517c: 0x43280a  movz        $a1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2048F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2048F8u, 0x205178u, 0x205180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205180u;
label_205180:
    // 0x205180: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x205180u;
    {
        const bool branch_taken_0x205180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205180u;
        // 0x205184: 0x96020008  lhu         $v0, 0x8($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205180) {
            ctx->pc = 0x2051A0u;
            goto label_2051a0;
        }
    }
    ctx->pc = 0x205188u;
label_205188:
    // 0x205188: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x205188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x20518c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20518Cu;
    {
        const bool branch_taken_0x20518c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20518Cu;
        // 0x205190: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20518c) {
            ctx->pc = 0x20519Cu;
            goto label_20519c;
        }
    }
    ctx->pc = 0x205194u;
    // 0x205194: 0xc08123e  jal         func_2048F8
    ctx->pc = 0x205194u;
    SET_GPR_U32(ctx, 31, 0x20519Cu);
    ctx->pc = 0x205198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205194u;
    // 0x205198: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2048F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2048F8u, 0x205194u, 0x20519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20519Cu;
label_20519c:
    // 0x20519c: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x20519cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_2051a0:
    // 0x2051a0: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x2051a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2051a4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2051a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2051a8: 0xc081546  jal         func_205518
    ctx->pc = 0x2051A8u;
    SET_GPR_U32(ctx, 31, 0x2051B0u);
    ctx->pc = 0x2051ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2051A8u;
    // 0x2051ac: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2051A8u, 0x2051B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2051B0u;
label_2051b0:
    // 0x2051b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2051b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2051b4: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x2051b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2051b8: 0x2625e180  addiu       $a1, $s1, -0x1E80
    ctx->pc = 0x2051b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294959488));
    // 0x2051bc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2051bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2051c0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2051c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2051c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2051c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2051c8: 0x94620016  lhu         $v0, 0x16($v1)
    ctx->pc = 0x2051c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x2051cc: 0x30420012  andi        $v0, $v0, 0x12
    ctx->pc = 0x2051ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)18);
    // 0x2051d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2051D0u;
    {
        const bool branch_taken_0x2051d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2051D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051D0u;
        // 0x2051d4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051d0) {
            ctx->pc = 0x2051E0u;
            goto label_2051e0;
        }
    }
    ctx->pc = 0x2051D8u;
    // 0x2051d8: 0xc08123e  jal         func_2048F8
    ctx->pc = 0x2051D8u;
    SET_GPR_U32(ctx, 31, 0x2051E0u);
    ctx->pc = 0x2051DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2051D8u;
    // 0x2051dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2048F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2048F8u, 0x2051D8u, 0x2051E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2051E0u;
label_2051e0:
    // 0x2051e0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2051e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2051e4:
    // 0x2051e4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2051e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2051e8:
    // 0x2051e8: 0x2ac2000a  slti        $v0, $s6, 0xA
    ctx->pc = 0x2051e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2051ec: 0x1440ff42  bnez        $v0, . + 4 + (-0xBE << 2)
    ctx->pc = 0x2051ECu;
    {
        const bool branch_taken_0x2051ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2051F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051ECu;
        // 0x2051f0: 0x161140  sll         $v0, $s6, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051ec) {
            ctx->pc = 0x204EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204ef8;
        }
    }
    ctx->pc = 0x2051F4u;
    // 0x2051f4: 0x8f85b638  lw          $a1, -0x49C8($gp)
    ctx->pc = 0x2051f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948408)));
    // 0x2051f8: 0x18a0001f  blez        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2051F8u;
    {
        const bool branch_taken_0x2051f8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2051FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051F8u;
        // 0x2051fc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051f8) {
            ctx->pc = 0x205278u;
            goto label_205278;
        }
    }
    ctx->pc = 0x205200u;
    // 0x205200: 0x3c1101fb  lui         $s1, 0x1FB
    ctx->pc = 0x205200u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)507 << 16));
    // 0x205204: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x205204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_205208:
    // 0x205208: 0x262417e0  addiu       $a0, $s1, 0x17E0
    ctx->pc = 0x205208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6112));
    // 0x20520c: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x20520cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x205210: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x205210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x205214: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x205214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x205218: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x205218u;
    {
        const bool branch_taken_0x205218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205218u;
        // 0x20521c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205218) {
            ctx->pc = 0x205268u;
            goto label_205268;
        }
    }
    ctx->pc = 0x205220u;
    // 0x205220: 0xc44c0014  lwc1        $f12, 0x14($v0)
    ctx->pc = 0x205220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x205224: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x205224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x205228: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x205228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20522c: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x20522cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x205230: 0xc081270  jal         func_2049C0
    ctx->pc = 0x205230u;
    SET_GPR_U32(ctx, 31, 0x205238u);
    ctx->pc = 0x205234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205230u;
    // 0x205234: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2049C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2049C0u, 0x205230u, 0x205238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205238u;
label_205238:
    // 0x205238: 0x26d00005  addiu       $s0, $s6, 0x5
    ctx->pc = 0x205238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 5));
    // 0x20523c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x20523cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205240: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x205240u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x205244: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x205244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205248: 0xc081242  jal         func_204908
    ctx->pc = 0x205248u;
    SET_GPR_U32(ctx, 31, 0x205250u);
    ctx->pc = 0x20524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205248u;
    // 0x20524c: 0x3205fffe  andi        $a1, $s0, 0xFFFE (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65534);
    ctx->in_delay_slot = false;
    ctx->pc = 0x204908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204908u, 0x205248u, 0x205250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205250u;
label_205250:
    // 0x205250: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x205250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x205254: 0x36100100  ori         $s0, $s0, 0x100
    ctx->pc = 0x205254u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)256);
    // 0x205258: 0x3205fffe  andi        $a1, $s0, 0xFFFE
    ctx->pc = 0x205258u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65534);
    // 0x20525c: 0xc081242  jal         func_204908
    ctx->pc = 0x20525Cu;
    SET_GPR_U32(ctx, 31, 0x205264u);
    ctx->pc = 0x205260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20525Cu;
    // 0x205260: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204908u, 0x20525Cu, 0x205264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205264u;
label_205264:
    // 0x205264: 0x8f85b638  lw          $a1, -0x49C8($gp)
    ctx->pc = 0x205264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948408)));
label_205268:
    // 0x205268: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x205268u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x20526c: 0x2c5102a  slt         $v0, $s6, $a1
    ctx->pc = 0x20526cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x205270: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x205270u;
    {
        const bool branch_taken_0x205270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205270u;
        // 0x205274: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205270) {
            ctx->pc = 0x205208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205208;
        }
    }
    ctx->pc = 0x205278u;
label_205278:
    // 0x205278: 0xc081254  jal         func_204950
    ctx->pc = 0x205278u;
    SET_GPR_U32(ctx, 31, 0x205280u);
    ctx->pc = 0x204950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204950u, 0x205278u, 0x205280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205280u;
label_205280:
    // 0x205280: 0xc08126e  jal         func_2049B8
    ctx->pc = 0x205280u;
    SET_GPR_U32(ctx, 31, 0x205288u);
    ctx->pc = 0x2049B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2049B8u, 0x205280u, 0x205288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205288u;
label_205288:
    // 0x205288: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x205288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20528c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x20528cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x205290: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x205290u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x205294: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x205294u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x205298: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x205298u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20529c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x20529cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2052a0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2052a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2052a4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2052a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2052a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2052a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2052ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2052ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2052B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052ACu;
        // 0x2052b0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2052ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2052B4u;
}
