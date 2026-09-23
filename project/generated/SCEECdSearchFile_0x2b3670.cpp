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

// Function: SCEECdSearchFile
// Address: 0x2b3670 - 0x2b37ac
void SCEECdSearchFile_0x2b3670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SCEECdSearchFile_0x2b3670");
#endif

    switch (ctx->pc) {
        case 0x2b36acu: goto label_2b36ac;
        case 0x2b36c0u: goto label_2b36c0;
        case 0x2b36dcu: goto label_2b36dc;
        case 0x2b36e8u: goto label_2b36e8;
        case 0x2b3710u: goto label_2b3710;
        case 0x2b374cu: goto label_2b374c;
        case 0x2b3770u: goto label_2b3770;
        default: break;
    }

    ctx->pc = 0x2b3670u;

    // 0x2b3670: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2b3670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2b3674: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2b3674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2b3678: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2b3678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2b367c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2b367cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2b3680: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2b3680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2b3684: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b3684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3688: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2b3688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2b368c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2b368cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2b3690: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2b3690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2b3694: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2b3694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2b3698: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2b3698u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b369c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B369Cu;
    {
        const bool branch_taken_0x2b369c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B369Cu;
        // 0x2b36a0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b369c) {
            ctx->pc = 0x2B36C8u;
            goto label_2b36c8;
        }
    }
    ctx->pc = 0x2B36A4u;
    // 0x2b36a4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2B36A4u;
    {
        const bool branch_taken_0x2b36a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B36A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36A4u;
        // 0x2b36a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36a4) {
            ctx->pc = 0x2B3788u;
            goto label_2b3788;
        }
    }
    ctx->pc = 0x2B36ACu;
label_2b36ac:
    // 0x2b36ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b36acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b36b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b36b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b36b4: 0xae840004  sw          $a0, 0x4($s4)
    ctx->pc = 0x2b36b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 4));
    // 0x2b36b8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2B36B8u;
    {
        const bool branch_taken_0x2b36b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36B8u;
        // 0x2b36bc: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36b8) {
            ctx->pc = 0x2B3788u;
            goto label_2b3788;
        }
    }
    ctx->pc = 0x2B36C0u;
label_2b36c0:
    // 0x2b36c0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2B36C0u;
    {
        const bool branch_taken_0x2b36c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B36C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36C0u;
        // 0x2b36c4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36c0) {
            ctx->pc = 0x2B3788u;
            goto label_2b3788;
        }
    }
    ctx->pc = 0x2B36C8u;
label_2b36c8:
    // 0x2b36c8: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2b36c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b36cc: 0x27b20014  addiu       $s2, $sp, 0x14
    ctx->pc = 0x2b36ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2b36d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b36d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b36d4: 0xc0acd7a  jal         func_2B35E8
    ctx->pc = 0x2B36D4u;
    SET_GPR_U32(ctx, 31, 0x2B36DCu);
    ctx->pc = 0x2B36D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B36D4u;
    // 0x2b36d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B35E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B35E8u, 0x2B36D4u, 0x2B36DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B36DCu;
label_2b36dc:
    // 0x2b36dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b36dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b36e0: 0x2415005c  addiu       $s5, $zero, 0x5C
    ctx->pc = 0x2b36e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2b36e4: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x2b36e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_2b36e8:
    // 0x2b36e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b36e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b36ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b36ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b36f0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2b36f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b36f4: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2b36f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b36f8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2b36f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2b36fc: 0x1055000d  beq         $v0, $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x2B36FCu;
    {
        const bool branch_taken_0x2b36fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2B3700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36FCu;
        // 0x2b3700: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36fc) {
            ctx->pc = 0x2B3734u;
            goto label_2b3734;
        }
    }
    ctx->pc = 0x2B3704u;
    // 0x2b3704: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B3704u;
    {
        const bool branch_taken_0x2b3704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3704u;
        // 0x2b3708: 0x2406005c  addiu       $a2, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3704) {
            ctx->pc = 0x2B3734u;
            goto label_2b3734;
        }
    }
    ctx->pc = 0x2B370Cu;
    // 0x2b370c: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x2b370cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_2b3710:
    // 0x2b3710: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b3710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b3714: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2b3714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b3718: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2b3718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b371c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2b371cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b3720: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2b3720u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2b3724: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3724u;
    {
        const bool branch_taken_0x2b3724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B3728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3724u;
        // 0x2b3728: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3724) {
            ctx->pc = 0x2B3734u;
            goto label_2b3734;
        }
    }
    ctx->pc = 0x2B372Cu;
    // 0x2b372c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2B372Cu;
    {
        const bool branch_taken_0x2b372c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b372c) {
            ctx->pc = 0x2B3730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B372Cu;
            // 0x2b3730: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3710;
        }
    }
    ctx->pc = 0x2B3734u;
label_2b3734:
    // 0x2b3734: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B3734u;
    {
        const bool branch_taken_0x2b3734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3734u;
        // 0x2b3738: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3734) {
            ctx->pc = 0x2B3760u;
            goto label_2b3760;
        }
    }
    ctx->pc = 0x2B373Cu;
    // 0x2b373c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b373cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3740: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b3740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3744: 0xc0acdec  jal         func_2B37B0
    ctx->pc = 0x2B3744u;
    SET_GPR_U32(ctx, 31, 0x2B374Cu);
    ctx->pc = 0x2B3748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3744u;
    // 0x2b3748: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B37B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B37B0u, 0x2B3744u, 0x2B374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B374Cu;
label_2b374c:
    // 0x2b374c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b374cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3750: 0x1480ffd6  bnez        $a0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2B3750u;
    {
        const bool branch_taken_0x2b3750 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3750u;
        // 0x2b3754: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3750) {
            ctx->pc = 0x2B36ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b36ac;
        }
    }
    ctx->pc = 0x2B3758u;
    // 0x2b3758: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B3758u;
    {
        const bool branch_taken_0x2b3758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3758u;
        // 0x2b375c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3758) {
            ctx->pc = 0x2B378Cu;
            goto label_2b378c;
        }
    }
    ctx->pc = 0x2B3760u;
label_2b3760:
    // 0x2b3760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b3760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3764: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b3764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3768: 0xc0acdec  jal         func_2B37B0
    ctx->pc = 0x2B3768u;
    SET_GPR_U32(ctx, 31, 0x2B3770u);
    ctx->pc = 0x2B376Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3768u;
    // 0x2b376c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B37B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B37B0u, 0x2B3768u, 0x2B3770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3770u;
label_2b3770:
    // 0x2b3770: 0x1040ffd3  beqz        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2B3770u;
    {
        const bool branch_taken_0x2b3770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3770u;
        // 0x2b3774: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3770) {
            ctx->pc = 0x2B36C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b36c0;
        }
    }
    ctx->pc = 0x2B3778u;
    // 0x2b3778: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x2b3778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2b377c: 0x5440ffda  bnel        $v0, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2B377Cu;
    {
        const bool branch_taken_0x2b377c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b377c) {
            ctx->pc = 0x2B3780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B377Cu;
            // 0x2b3780: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B36E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b36e8;
        }
    }
    ctx->pc = 0x2B3784u;
    // 0x2b3784: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2b3784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2b3788:
    // 0x2b3788: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2b3788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2b378c:
    // 0x2b378c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2b378cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b3790: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2b3790u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b3794: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2b3794u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b3798: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2b3798u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b379c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2b379cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b37a0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2b37a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b37a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B37A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B37A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B37A4u;
        // 0x2b37a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B37A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B37ACu;
}
