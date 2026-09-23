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

// Function: _strtoul_r
// Address: 0x2ee428 - 0x2ee644
void _strtoul_r_0x2ee428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_strtoul_r_0x2ee428");
#endif

    switch (ctx->pc) {
        case 0x2ee478u: goto label_2ee478;
        case 0x2ee528u: goto label_2ee528;
        case 0x2ee53cu: goto label_2ee53c;
        case 0x2ee558u: goto label_2ee558;
        case 0x2ee598u: goto label_2ee598;
        default: break;
    }

    ctx->pc = 0x2ee428u;

    // 0x2ee428: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2ee428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2ee42c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ee42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ee430: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2ee430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2ee434: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2ee434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ee438: 0x2445c421  addiu       $a1, $v0, -0x3BDF
    ctx->pc = 0x2ee438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951969));
    // 0x2ee43c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2ee43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2ee440: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2ee440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2ee444: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2ee444u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee448: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2ee448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2ee44c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2ee44cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee450: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2ee450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2ee454: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2ee454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2ee458: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2ee458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2ee45c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2ee45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2ee460: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2ee460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2ee464: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ee464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ee468: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2ee468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2ee46c: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x2ee46cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ee470: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2ee470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2ee474: 0x0  nop
    ctx->pc = 0x2ee474u;
    // NOP
label_2ee478:
    // 0x2ee478: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x2ee478u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ee47c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ee47cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ee480: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x2ee480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2ee484: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2ee484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ee488: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2ee488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2ee48c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EE48Cu;
    {
        const bool branch_taken_0x2ee48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee48c) {
            ctx->pc = 0x2EE478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee478;
        }
    }
    ctx->pc = 0x2EE494u;
    // 0x2ee494: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2ee494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2ee498: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE498u;
    {
        const bool branch_taken_0x2ee498 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE498u;
        // 0x2ee49c: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee498) {
            ctx->pc = 0x2EE4B0u;
            goto label_2ee4b0;
        }
    }
    ctx->pc = 0x2EE4A0u;
    // 0x2ee4a0: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x2ee4a0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ee4a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ee4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee4a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE4A8u;
    {
        const bool branch_taken_0x2ee4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4A8u;
        // 0x2ee4ac: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee4a8) {
            ctx->pc = 0x2EE4BCu;
            goto label_2ee4bc;
        }
    }
    ctx->pc = 0x2EE4B0u;
label_2ee4b0:
    // 0x2ee4b0: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE4B0u;
    {
        const bool branch_taken_0x2ee4b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee4b0) {
            ctx->pc = 0x2EE4C0u;
            goto label_2ee4c0;
        }
    }
    ctx->pc = 0x2EE4B8u;
    // 0x2ee4b8: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x2ee4b8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2ee4bc:
    // 0x2ee4bc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ee4bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2ee4c0:
    // 0x2ee4c0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE4C0u;
    {
        const bool branch_taken_0x2ee4c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4C0u;
        // 0x2ee4c4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee4c0) {
            ctx->pc = 0x2EE4D0u;
            goto label_2ee4d0;
        }
    }
    ctx->pc = 0x2EE4C8u;
    // 0x2ee4c8: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EE4C8u;
    {
        const bool branch_taken_0x2ee4c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee4c8) {
            ctx->pc = 0x2EE4FCu;
            goto label_2ee4fc;
        }
    }
    ctx->pc = 0x2EE4D0u;
label_2ee4d0:
    // 0x2ee4d0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2ee4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ee4d4: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE4D4u;
    {
        const bool branch_taken_0x2ee4d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EE4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4D4u;
        // 0x2ee4d8: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee4d4) {
            ctx->pc = 0x2EE4FCu;
            goto label_2ee4fc;
        }
    }
    ctx->pc = 0x2EE4DCu;
    // 0x2ee4dc: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x2ee4dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ee4e0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE4E0u;
    {
        const bool branch_taken_0x2ee4e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EE4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4E0u;
        // 0x2ee4e4: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee4e0) {
            ctx->pc = 0x2EE4F0u;
            goto label_2ee4f0;
        }
    }
    ctx->pc = 0x2EE4E8u;
    // 0x2ee4e8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE4E8u;
    {
        const bool branch_taken_0x2ee4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee4e8) {
            ctx->pc = 0x2EE4FCu;
            goto label_2ee4fc;
        }
    }
    ctx->pc = 0x2EE4F0u;
label_2ee4f0:
    // 0x2ee4f0: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x2ee4f0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2ee4f4: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x2ee4f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ee4f8: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x2ee4f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_2ee4fc:
    // 0x2ee4fc: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE4FCu;
    {
        const bool branch_taken_0x2ee4fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4FCu;
        // 0x2ee500: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee4fc) {
            ctx->pc = 0x2EE518u;
            goto label_2ee518;
        }
    }
    ctx->pc = 0x2EE504u;
    // 0x2ee504: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x2ee504u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ee508: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2ee508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ee50c: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x2ee50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x2ee510: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x2ee510u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x2ee514: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2ee514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ee518:
    // 0x2ee518: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2ee518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ee51c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ee51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee520: 0xc0b8898  jal         func_2E2260
    ctx->pc = 0x2EE520u;
    SET_GPR_U32(ctx, 31, 0x2EE528u);
    ctx->pc = 0x2EE524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE520u;
    // 0x2ee524: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2260u, 0x2EE520u, 0x2EE528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE528u;
label_2ee528:
    // 0x2ee528: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ee528u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee52c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ee52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee530: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2ee530u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee534: 0xc0b8a0c  jal         func_2E2830
    ctx->pc = 0x2EE534u;
    SET_GPR_U32(ctx, 31, 0x2EE53Cu);
    ctx->pc = 0x2EE538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE534u;
    // 0x2ee538: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2830u, 0x2EE534u, 0x2EE53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE53Cu;
label_2ee53c:
    // 0x2ee53c: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x2ee53cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ee540: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2ee540u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2ee544: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ee544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee548: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ee548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ee54c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2EE54Cu;
    {
        const bool branch_taken_0x2ee54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE54Cu;
        // 0x2ee550: 0x2457c421  addiu       $s7, $v0, -0x3BDF (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951969));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee54c) {
            ctx->pc = 0x2EE5A4u;
            goto label_2ee5a4;
        }
    }
    ctx->pc = 0x2EE554u;
    // 0x2ee554: 0x0  nop
    ctx->pc = 0x2ee554u;
    // NOP
label_2ee558:
    // 0x2ee558: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x2ee558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2ee55c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2EE55Cu;
    {
        const bool branch_taken_0x2ee55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee55c) {
            ctx->pc = 0x2EE5D8u;
            goto label_2ee5d8;
        }
    }
    ctx->pc = 0x2EE564u;
    // 0x2ee564: 0x6800008  bltz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE564u;
    {
        const bool branch_taken_0x2ee564 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2EE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE564u;
        // 0x2ee568: 0x2a4102b  sltu        $v0, $s5, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee564) {
            ctx->pc = 0x2EE588u;
            goto label_2ee588;
        }
    }
    ctx->pc = 0x2EE56Cu;
    // 0x2ee56c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2EE56Cu;
    {
        const bool branch_taken_0x2ee56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee56c) {
            ctx->pc = 0x2EE570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE56Cu;
            // 0x2ee570: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE59Cu;
            goto label_2ee59c;
        }
    }
    ctx->pc = 0x2EE574u;
    // 0x2ee574: 0x14950006  bne         $a0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE574u;
    {
        const bool branch_taken_0x2ee574 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        ctx->pc = 0x2EE578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE574u;
        // 0x2ee578: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee574) {
            ctx->pc = 0x2EE590u;
            goto label_2ee590;
        }
    }
    ctx->pc = 0x2EE57Cu;
    // 0x2ee57c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2ee57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2ee580: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE580u;
    {
        const bool branch_taken_0x2ee580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee580) {
            ctx->pc = 0x2EE590u;
            goto label_2ee590;
        }
    }
    ctx->pc = 0x2EE588u;
label_2ee588:
    // 0x2ee588: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE588u;
    {
        const bool branch_taken_0x2ee588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE588u;
        // 0x2ee58c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee588) {
            ctx->pc = 0x2EE59Cu;
            goto label_2ee59c;
        }
    }
    ctx->pc = 0x2EE590u;
label_2ee590:
    // 0x2ee590: 0xc0b9192  jal         func_2E4648
    ctx->pc = 0x2EE590u;
    SET_GPR_U32(ctx, 31, 0x2EE598u);
    ctx->pc = 0x2EE594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE590u;
    // 0x2ee594: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4648u, 0x2EE590u, 0x2EE598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE598u;
label_2ee598:
    // 0x2ee598: 0x222202d  daddu       $a0, $s1, $v0
    ctx->pc = 0x2ee598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_2ee59c:
    // 0x2ee59c: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x2ee59cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ee5a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ee5a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2ee5a4:
    // 0x2ee5a4: 0x2371021  addu        $v0, $s1, $s7
    ctx->pc = 0x2ee5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x2ee5a8: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x2ee5a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ee5ac: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x2ee5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x2ee5b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE5B0u;
    {
        const bool branch_taken_0x2ee5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5B0u;
        // 0x2ee5b4: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5b0) {
            ctx->pc = 0x2EE5C0u;
            goto label_2ee5c0;
        }
    }
    ctx->pc = 0x2EE5B8u;
    // 0x2ee5b8: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x2EE5B8u;
    {
        const bool branch_taken_0x2ee5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5B8u;
        // 0x2ee5bc: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5b8) {
            ctx->pc = 0x2EE558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee558;
        }
    }
    ctx->pc = 0x2EE5C0u;
label_2ee5c0:
    // 0x2ee5c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE5C0u;
    {
        const bool branch_taken_0x2ee5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5C0u;
        // 0x2ee5c4: 0x2623ffa9  addiu       $v1, $s1, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5c0) {
            ctx->pc = 0x2EE5D8u;
            goto label_2ee5d8;
        }
    }
    ctx->pc = 0x2EE5C8u;
    // 0x2ee5c8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2ee5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2ee5cc: 0x2631ffc9  addiu       $s1, $s1, -0x37
    ctx->pc = 0x2ee5ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
    // 0x2ee5d0: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x2EE5D0u;
    {
        const bool branch_taken_0x2ee5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5D0u;
        // 0x2ee5d4: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5d0) {
            ctx->pc = 0x2EE558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee558;
        }
    }
    ctx->pc = 0x2EE5D8u;
label_2ee5d8:
    // 0x2ee5d8: 0x6810006  bgez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE5D8u;
    {
        const bool branch_taken_0x2ee5d8 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x2EE5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5D8u;
        // 0x2ee5dc: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5d8) {
            ctx->pc = 0x2EE5F4u;
            goto label_2ee5f4;
        }
    }
    ctx->pc = 0x2EE5E0u;
    // 0x2ee5e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2ee5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee5e4: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2ee5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2ee5e8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2ee5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ee5ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE5ECu;
    {
        const bool branch_taken_0x2ee5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5ECu;
        // 0x2ee5f0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5ec) {
            ctx->pc = 0x2EE5FCu;
            goto label_2ee5fc;
        }
    }
    ctx->pc = 0x2EE5F4u;
label_2ee5f4:
    // 0x2ee5f4: 0x4102f  dsubu       $v0, $zero, $a0
    ctx->pc = 0x2ee5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
    // 0x2ee5f8: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x2ee5f8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_2ee5fc:
    // 0x2ee5fc: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE5FCu;
    {
        const bool branch_taken_0x2ee5fc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5FCu;
        // 0x2ee600: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5fc) {
            ctx->pc = 0x2EE610u;
            goto label_2ee610;
        }
    }
    ctx->pc = 0x2EE604u;
    // 0x2ee604: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x2ee604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2ee608: 0x74100a  movz        $v0, $v1, $s4
    ctx->pc = 0x2ee608u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2ee60c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2ee60cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2ee610:
    // 0x2ee610: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2ee610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ee614: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ee614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee618: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2ee618u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ee61c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2ee61cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ee620: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2ee620u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ee624: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2ee624u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ee628: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2ee628u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ee62c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2ee62cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ee630: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ee630u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ee634: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2ee634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee638: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ee638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee63c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE63Cu;
        // 0x2ee640: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE644u;
}
