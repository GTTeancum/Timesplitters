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

// Function: _strtod_r
// Address: 0x2ed4d0 - 0x2ee3d0
void _strtod_r_0x2ed4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_strtod_r_0x2ed4d0");
#endif

    switch (ctx->pc) {
        case 0x2ed518u: goto label_2ed518;
        case 0x2ed588u: goto label_2ed588;
        case 0x2ed5e0u: goto label_2ed5e0;
        case 0x2ed660u: goto label_2ed660;
        case 0x2ed6b0u: goto label_2ed6b0;
        case 0x2ed6d0u: goto label_2ed6d0;
        case 0x2ed808u: goto label_2ed808;
        case 0x2ed850u: goto label_2ed850;
        case 0x2ed900u: goto label_2ed900;
        case 0x2ed920u: goto label_2ed920;
        case 0x2ed950u: goto label_2ed950;
        case 0x2ed960u: goto label_2ed960;
        case 0x2ed978u: goto label_2ed978;
        case 0x2ed984u: goto label_2ed984;
        case 0x2ed990u: goto label_2ed990;
        case 0x2eda10u: goto label_2eda10;
        case 0x2eda30u: goto label_2eda30;
        case 0x2eda64u: goto label_2eda64;
        case 0x2eda9cu: goto label_2eda9c;
        case 0x2edab8u: goto label_2edab8;
        case 0x2edabcu: goto label_2edabc;
        case 0x2edaf0u: goto label_2edaf0;
        case 0x2edb10u: goto label_2edb10;
        case 0x2edb64u: goto label_2edb64;
        case 0x2edc04u: goto label_2edc04;
        case 0x2edc30u: goto label_2edc30;
        case 0x2edc50u: goto label_2edc50;
        case 0x2edc94u: goto label_2edc94;
        case 0x2edca4u: goto label_2edca4;
        case 0x2edcb8u: goto label_2edcb8;
        case 0x2edcc4u: goto label_2edcc4;
        case 0x2edcd4u: goto label_2edcd4;
        case 0x2edcdcu: goto label_2edcdc;
        case 0x2edce0u: goto label_2edce0;
        case 0x2edcf8u: goto label_2edcf8;
        case 0x2edd00u: goto label_2edd00;
        case 0x2edd0cu: goto label_2edd0c;
        case 0x2edd2cu: goto label_2edd2c;
        case 0x2edd48u: goto label_2edd48;
        case 0x2edd54u: goto label_2edd54;
        case 0x2edd64u: goto label_2edd64;
        case 0x2edd74u: goto label_2edd74;
        case 0x2ede28u: goto label_2ede28;
        case 0x2ede34u: goto label_2ede34;
        case 0x2ede44u: goto label_2ede44;
        case 0x2ede5cu: goto label_2ede5c;
        case 0x2ede70u: goto label_2ede70;
        case 0x2eded4u: goto label_2eded4;
        case 0x2edefcu: goto label_2edefc;
        case 0x2edf14u: goto label_2edf14;
        case 0x2edf2cu: goto label_2edf2c;
        case 0x2edf78u: goto label_2edf78;
        case 0x2edf84u: goto label_2edf84;
        case 0x2edf90u: goto label_2edf90;
        case 0x2ee028u: goto label_2ee028;
        case 0x2ee040u: goto label_2ee040;
        case 0x2ee048u: goto label_2ee048;
        case 0x2ee050u: goto label_2ee050;
        case 0x2ee064u: goto label_2ee064;
        case 0x2ee070u: goto label_2ee070;
        case 0x2ee07cu: goto label_2ee07c;
        case 0x2ee088u: goto label_2ee088;
        case 0x2ee0b4u: goto label_2ee0b4;
        case 0x2ee0bcu: goto label_2ee0bc;
        case 0x2ee0c8u: goto label_2ee0c8;
        case 0x2ee0f4u: goto label_2ee0f4;
        case 0x2ee10cu: goto label_2ee10c;
        case 0x2ee12cu: goto label_2ee12c;
        case 0x2ee140u: goto label_2ee140;
        case 0x2ee14cu: goto label_2ee14c;
        case 0x2ee158u: goto label_2ee158;
        case 0x2ee164u: goto label_2ee164;
        case 0x2ee174u: goto label_2ee174;
        case 0x2ee194u: goto label_2ee194;
        case 0x2ee1a8u: goto label_2ee1a8;
        case 0x2ee1b8u: goto label_2ee1b8;
        case 0x2ee26cu: goto label_2ee26c;
        case 0x2ee280u: goto label_2ee280;
        case 0x2ee290u: goto label_2ee290;
        case 0x2ee2a4u: goto label_2ee2a4;
        case 0x2ee2bcu: goto label_2ee2bc;
        case 0x2ee2d4u: goto label_2ee2d4;
        case 0x2ee2ecu: goto label_2ee2ec;
        case 0x2ee300u: goto label_2ee300;
        case 0x2ee318u: goto label_2ee318;
        case 0x2ee34cu: goto label_2ee34c;
        case 0x2ee358u: goto label_2ee358;
        case 0x2ee364u: goto label_2ee364;
        case 0x2ee370u: goto label_2ee370;
        case 0x2ee37cu: goto label_2ee37c;
        case 0x2ee3a0u: goto label_2ee3a0;
        default: break;
    }

    ctx->pc = 0x2ed4d0u;

    // 0x2ed4d0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2ed4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2ed4d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ed4d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4d8: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x2ed4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x2ed4dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ed4dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4e0: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x2ed4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x2ed4e4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2ed4e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4e8: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x2ed4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x2ed4ec: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2ed4ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4f0: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x2ed4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x2ed4f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ed4f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4f8: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x2ed4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x2ed4fc: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x2ed4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x2ed500: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2ed500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2ed504: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x2ed504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x2ed508: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2ed508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2ed50c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2ed50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2ed510: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2ed510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2ed514: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2ed514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2ed518:
    // 0x2ed518: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x2ed518u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ed51c: 0x2c62002e  sltiu       $v0, $v1, 0x2E
    ctx->pc = 0x2ed51cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)46) ? 1 : 0);
    // 0x2ed520: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2ED520u;
    {
        const bool branch_taken_0x2ed520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED520u;
        // 0x2ed524: 0x92a60000  lbu         $a2, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed520) {
            ctx->pc = 0x2ED56Cu;
            goto label_2ed56c;
        }
    }
    ctx->pc = 0x2ED528u;
    // 0x2ed528: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ed528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ed52c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ed52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ed530: 0x2442c700  addiu       $v0, $v0, -0x3900
    ctx->pc = 0x2ed530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952704));
    // 0x2ed534: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ed534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ed538: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ed538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ed53c: 0x800008  jr          $a0
    ctx->pc = 0x2ED53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ED544u: goto label_2ed544;
            case 0x2ED54Cu: goto label_2ed54c;
            case 0x2ED564u: goto label_2ed564;
            case 0x2ED56Cu: goto label_2ed56c;
            case 0x2ED7BCu: goto label_2ed7bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED53Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2ED544u;
label_2ed544:
    // 0x2ed544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ed544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed548: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2ed548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_2ed54c:
    // 0x2ed54c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2ed54cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2ed550: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2ed550u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ed554: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED554u;
    {
        const bool branch_taken_0x2ed554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED554u;
        // 0x2ed558: 0x92a60000  lbu         $a2, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed554) {
            ctx->pc = 0x2ED56Cu;
            goto label_2ed56c;
        }
    }
    ctx->pc = 0x2ED55Cu;
    // 0x2ed55c: 0x10000387  b           . + 4 + (0x387 << 2)
    ctx->pc = 0x2ED55Cu;
    {
        const bool branch_taken_0x2ed55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED55Cu;
        // 0x2ed560: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed55c) {
            ctx->pc = 0x2EE37Cu;
            goto label_2ee37c;
        }
    }
    ctx->pc = 0x2ED564u;
label_2ed564:
    // 0x2ed564: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x2ED564u;
    {
        const bool branch_taken_0x2ed564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED564u;
        // 0x2ed568: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed564) {
            ctx->pc = 0x2ED518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed518;
        }
    }
    ctx->pc = 0x2ED56Cu;
label_2ed56c:
    // 0x2ed56c: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x2ed56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2ed570: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2ed570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ed574: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2ed574u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2ed578: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2ED578u;
    {
        const bool branch_taken_0x2ed578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2ED57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED578u;
        // 0x2ed57c: 0x61600  sll         $v0, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed578) {
            ctx->pc = 0x2ED5ACu;
            goto label_2ed5ac;
        }
    }
    ctx->pc = 0x2ED580u;
    // 0x2ed580: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2ed580u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed584: 0x0  nop
    ctx->pc = 0x2ed584u;
    // NOP
label_2ed588:
    // 0x2ed588: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2ed588u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2ed58c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2ed58cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ed590: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x2ed590u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ed594: 0x0  nop
    ctx->pc = 0x2ed594u;
    // NOP
    // 0x2ed598: 0x0  nop
    ctx->pc = 0x2ed598u;
    // NOP
    // 0x2ed59c: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2ED59Cu;
    {
        const bool branch_taken_0x2ed59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ed59c) {
            ctx->pc = 0x2ED588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed588;
        }
    }
    ctx->pc = 0x2ED5A4u;
    // 0x2ed5a4: 0x10400375  beqz        $v0, . + 4 + (0x375 << 2)
    ctx->pc = 0x2ED5A4u;
    {
        const bool branch_taken_0x2ed5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED5A4u;
        // 0x2ed5a8: 0x61600  sll         $v0, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5a4) {
            ctx->pc = 0x2EE37Cu;
            goto label_2ee37c;
        }
    }
    ctx->pc = 0x2ED5ACu;
label_2ed5ac:
    // 0x2ed5ac: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x2ed5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x2ed5b0: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x2ed5b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2ed5b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ed5b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed5b8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2ed5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2ed5bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ed5bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed5c0: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x2ed5c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2ed5c4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2ED5C4u;
    {
        const bool branch_taken_0x2ed5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED5C4u;
        // 0x2ed5c8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5c4) {
            ctx->pc = 0x2ED638u;
            goto label_2ed638;
        }
    }
    ctx->pc = 0x2ED5CCu;
    // 0x2ed5cc: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x2ed5ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x2ed5d0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2ED5D0u;
    {
        const bool branch_taken_0x2ed5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED5D0u;
        // 0x2ed5d4: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5d0) {
            ctx->pc = 0x2ED63Cu;
            goto label_2ed63c;
        }
    }
    ctx->pc = 0x2ED5D8u;
    // 0x2ed5d8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2ed5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ed5dc: 0x2a820009  slti        $v0, $s4, 0x9
    ctx->pc = 0x2ed5dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
label_2ed5e0:
    // 0x2ed5e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED5E0u;
    {
        const bool branch_taken_0x2ed5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED5E0u;
        // 0x2ed5e4: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5e0) {
            ctx->pc = 0x2ED5FCu;
            goto label_2ed5fc;
        }
    }
    ctx->pc = 0x2ED5E8u;
    // 0x2ed5e8: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x2ed5e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2ed5ec: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x2ed5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2ed5f0: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2ed5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2ed5f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED5F4u;
    {
        const bool branch_taken_0x2ed5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED5F4u;
        // 0x2ed5f8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5f4) {
            ctx->pc = 0x2ED618u;
            goto label_2ed618;
        }
    }
    ctx->pc = 0x2ED5FCu;
label_2ed5fc:
    // 0x2ed5fc: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x2ed5fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2ed600: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED600u;
    {
        const bool branch_taken_0x2ed600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED600u;
        // 0x2ed604: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed600) {
            ctx->pc = 0x2ED618u;
            goto label_2ed618;
        }
    }
    ctx->pc = 0x2ED608u;
    // 0x2ed608: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x2ed608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x2ed60c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2ed60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2ed610: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x2ed610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2ed614: 0x6452ffd0  daddiu      $s2, $v0, -0x30
    ctx->pc = 0x2ed614u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
label_2ed618:
    // 0x2ed618: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2ed618u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2ed61c: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x2ed61cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ed620: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x2ed620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2ed624: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED624u;
    {
        const bool branch_taken_0x2ed624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED624u;
        // 0x2ed628: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed624) {
            ctx->pc = 0x2ED638u;
            goto label_2ed638;
        }
    }
    ctx->pc = 0x2ED62Cu;
    // 0x2ed62c: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x2ed62cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x2ed630: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2ED630u;
    {
        const bool branch_taken_0x2ed630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED630u;
        // 0x2ed634: 0x2a820009  slti        $v0, $s4, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed630) {
            ctx->pc = 0x2ED5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed5e0;
        }
    }
    ctx->pc = 0x2ED638u;
label_2ed638:
    // 0x2ed638: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x2ed638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_2ed63c:
    // 0x2ed63c: 0x14820053  bne         $a0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2ED63Cu;
    {
        const bool branch_taken_0x2ed63c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ED640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED63Cu;
        // 0x2ed640: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed63c) {
            ctx->pc = 0x2ED78Cu;
            goto label_2ed78c;
        }
    }
    ctx->pc = 0x2ED644u;
    // 0x2ed644: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2ed644u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2ed648: 0x16800015  bnez        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x2ED648u;
    {
        const bool branch_taken_0x2ed648 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED648u;
        // 0x2ed64c: 0x82a40000  lb          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed648) {
            ctx->pc = 0x2ED6A0u;
            goto label_2ed6a0;
        }
    }
    ctx->pc = 0x2ED650u;
    // 0x2ed650: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2ed650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ed654: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2ED654u;
    {
        const bool branch_taken_0x2ed654 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ed654) {
            ctx->pc = 0x2ED658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED654u;
            // 0x2ed658: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED680u;
            goto label_2ed680;
        }
    }
    ctx->pc = 0x2ED65Cu;
    // 0x2ed65c: 0x0  nop
    ctx->pc = 0x2ed65cu;
    // NOP
label_2ed660:
    // 0x2ed660: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2ed660u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2ed664: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2ed664u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2ed668: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x2ed668u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ed66c: 0x0  nop
    ctx->pc = 0x2ed66cu;
    // NOP
    // 0x2ed670: 0x0  nop
    ctx->pc = 0x2ed670u;
    // NOP
    // 0x2ed674: 0x1082fffa  beq         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2ED674u;
    {
        const bool branch_taken_0x2ed674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ed674) {
            ctx->pc = 0x2ED660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed660;
        }
    }
    ctx->pc = 0x2ED67Cu;
    // 0x2ed67c: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x2ed67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_2ed680:
    // 0x2ed680: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x2ed680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2ed684: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2ED684u;
    {
        const bool branch_taken_0x2ed684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED684u;
        // 0x2ed688: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed684) {
            ctx->pc = 0x2ED790u;
            goto label_2ed790;
        }
    }
    ctx->pc = 0x2ED68Cu;
    // 0x2ed68c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2ed68cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed690: 0x2486ffd0  addiu       $a2, $a0, -0x30
    ctx->pc = 0x2ed690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x2ed694: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x2ed694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x2ed698: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED698u;
    {
        const bool branch_taken_0x2ed698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED698u;
        // 0x2ed69c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed698) {
            ctx->pc = 0x2ED6B0u;
            goto label_2ed6b0;
        }
    }
    ctx->pc = 0x2ED6A0u;
label_2ed6a0:
    // 0x2ed6a0: 0x2486ffd0  addiu       $a2, $a0, -0x30
    ctx->pc = 0x2ed6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x2ed6a4: 0x2cc2000a  sltiu       $v0, $a2, 0xA
    ctx->pc = 0x2ed6a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ed6a8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2ED6A8u;
    {
        const bool branch_taken_0x2ed6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6A8u;
        // 0x2ed6ac: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6a8) {
            ctx->pc = 0x2ED790u;
            goto label_2ed790;
        }
    }
    ctx->pc = 0x2ED6B0u;
label_2ed6b0:
    // 0x2ed6b0: 0x10c0002e  beqz        $a2, . + 4 + (0x2E << 2)
    ctx->pc = 0x2ED6B0u;
    {
        const bool branch_taken_0x2ed6b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6B0u;
        // 0x2ed6b4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6b0) {
            ctx->pc = 0x2ED76Cu;
            goto label_2ed76c;
        }
    }
    ctx->pc = 0x2ED6B8u;
    // 0x2ed6b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ed6b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed6bc: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x2ed6bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2ed6c0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2ED6C0u;
    {
        const bool branch_taken_0x2ed6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6C0u;
        // 0x2ed6c4: 0x1284821  addu        $t1, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6c0) {
            ctx->pc = 0x2ED71Cu;
            goto label_2ed71c;
        }
    }
    ctx->pc = 0x2ED6C8u;
    // 0x2ed6c8: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x2ed6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2ed6cc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2ed6ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ed6d0:
    // 0x2ed6d0: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x2ed6d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2ed6d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED6D4u;
    {
        const bool branch_taken_0x2ed6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6D4u;
        // 0x2ed6d8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6d4) {
            ctx->pc = 0x2ED6F0u;
            goto label_2ed6f0;
        }
    }
    ctx->pc = 0x2ED6DCu;
    // 0x2ed6dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2ed6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed6e0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2ed6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ed6e4: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2ed6e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ed6e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED6E8u;
    {
        const bool branch_taken_0x2ed6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6E8u;
        // 0x2ed6ec: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6e8) {
            ctx->pc = 0x2ED704u;
            goto label_2ed704;
        }
    }
    ctx->pc = 0x2ED6F0u;
label_2ed6f0:
    // 0x2ed6f0: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x2ed6f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2ed6f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED6F4u;
    {
        const bool branch_taken_0x2ed6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6F4u;
        // 0x2ed6f8: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6f4) {
            ctx->pc = 0x2ED704u;
            goto label_2ed704;
        }
    }
    ctx->pc = 0x2ED6FCu;
    // 0x2ed6fc: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x2ed6fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x2ed700: 0x29078  dsll        $s2, $v0, 1
    ctx->pc = 0x2ed700u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << 1);
label_2ed704:
    // 0x2ed704: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2ed704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2ed708: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x2ed708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2ed70c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2ED70Cu;
    {
        const bool branch_taken_0x2ed70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED70Cu;
        // 0x2ed710: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed70c) {
            ctx->pc = 0x2ED6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed6d0;
        }
    }
    ctx->pc = 0x2ED714u;
    // 0x2ed714: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED714u;
    {
        const bool branch_taken_0x2ed714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED714u;
        // 0x2ed718: 0x28420009  slti        $v0, $v0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed714) {
            ctx->pc = 0x2ED728u;
            goto label_2ed728;
        }
    }
    ctx->pc = 0x2ED71Cu;
label_2ed71c:
    // 0x2ed71c: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x2ed71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2ed720: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2ed720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed724: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x2ed724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_2ed728:
    // 0x2ed728: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED728u;
    {
        const bool branch_taken_0x2ed728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED728u;
        // 0x2ed72c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed728) {
            ctx->pc = 0x2ED74Cu;
            goto label_2ed74c;
        }
    }
    ctx->pc = 0x2ED730u;
    // 0x2ed730: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2ed730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed734: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2ed734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ed738: 0xc00013  mtlo        $a2
    ctx->pc = 0x2ed738u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x2ed73c: 0x70820000  madd        $zero, $a0, $v0
    ctx->pc = 0x2ed73cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x2ed740: 0x2012  mflo        $a0
    ctx->pc = 0x2ed740u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2ed744: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2ED744u;
    {
        const bool branch_taken_0x2ed744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED744u;
        // 0x2ed748: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed744) {
            ctx->pc = 0x2ED764u;
            goto label_2ed764;
        }
    }
    ctx->pc = 0x2ED74Cu;
label_2ed74c:
    // 0x2ed74c: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x2ed74cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2ed750: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED750u;
    {
        const bool branch_taken_0x2ed750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED750u;
        // 0x2ed754: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed750) {
            ctx->pc = 0x2ED764u;
            goto label_2ed764;
        }
    }
    ctx->pc = 0x2ED758u;
    // 0x2ed758: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x2ed758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x2ed75c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2ed75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2ed760: 0xc2902d  daddu       $s2, $a2, $v0
    ctx->pc = 0x2ed760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
label_2ed764:
    // 0x2ed764: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ED764u;
    {
        const bool branch_taken_0x2ed764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED764u;
        // 0x2ed768: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed764) {
            ctx->pc = 0x2ED770u;
            goto label_2ed770;
        }
    }
    ctx->pc = 0x2ED76Cu;
label_2ed76c:
    // 0x2ed76c: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x2ed76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2ed770:
    // 0x2ed770: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x2ed770u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed774: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x2ed774u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ed778: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x2ed778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x2ed77c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ed77cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed780: 0x2cc3000a  sltiu       $v1, $a2, 0xA
    ctx->pc = 0x2ed780u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ed784: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2ED784u;
    {
        const bool branch_taken_0x2ed784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed784) {
            ctx->pc = 0x2ED6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed6b0;
        }
    }
    ctx->pc = 0x2ED78Cu;
label_2ed78c:
    // 0x2ed78c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2ed78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_2ed790:
    // 0x2ed790: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED790u;
    {
        const bool branch_taken_0x2ed790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ED794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED790u;
        // 0x2ed794: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed790) {
            ctx->pc = 0x2ED7A4u;
            goto label_2ed7a4;
        }
    }
    ctx->pc = 0x2ED798u;
    // 0x2ed798: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x2ed798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2ed79c: 0x14820048  bne         $a0, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2ED79Cu;
    {
        const bool branch_taken_0x2ed79c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ed79c) {
            ctx->pc = 0x2ED8C0u;
            goto label_2ed8c0;
        }
    }
    ctx->pc = 0x2ED7A4u;
label_2ed7a4:
    // 0x2ed7a4: 0x56800007  bnel        $s4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ED7A4u;
    {
        const bool branch_taken_0x2ed7a4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed7a4) {
            ctx->pc = 0x2ED7A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED7A4u;
            // 0x2ed7a8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED7C4u;
            goto label_2ed7c4;
        }
    }
    ctx->pc = 0x2ED7ACu;
    // 0x2ed7ac: 0x55000005  bnel        $t0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED7ACu;
    {
        const bool branch_taken_0x2ed7ac = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed7ac) {
            ctx->pc = 0x2ED7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED7ACu;
            // 0x2ed7b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED7C4u;
            goto label_2ed7c4;
        }
    }
    ctx->pc = 0x2ED7B4u;
    // 0x2ed7b4: 0x55400003  bnel        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED7B4u;
    {
        const bool branch_taken_0x2ed7b4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed7b4) {
            ctx->pc = 0x2ED7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED7B4u;
            // 0x2ed7b8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED7C4u;
            goto label_2ed7c4;
        }
    }
    ctx->pc = 0x2ED7BCu;
label_2ed7bc:
    // 0x2ed7bc: 0x100002ef  b           . + 4 + (0x2EF << 2)
    ctx->pc = 0x2ED7BCu;
    {
        const bool branch_taken_0x2ed7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7BCu;
        // 0x2ed7c0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed7bc) {
            ctx->pc = 0x2EE37Cu;
            goto label_2ee37c;
        }
    }
    ctx->pc = 0x2ED7C4u;
label_2ed7c4:
    // 0x2ed7c4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2ed7c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2ed7c8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x2ed7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2ed7cc: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x2ed7ccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ed7d0: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED7D0u;
    {
        const bool branch_taken_0x2ed7d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ED7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7D0u;
        // 0x2ed7d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed7d0) {
            ctx->pc = 0x2ED7E8u;
            goto label_2ed7e8;
        }
    }
    ctx->pc = 0x2ED7D8u;
    // 0x2ed7d8: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2ed7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2ed7dc: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED7DCu;
    {
        const bool branch_taken_0x2ed7dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ED7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7DCu;
        // 0x2ed7e0: 0x2482ffd0  addiu       $v0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed7dc) {
            ctx->pc = 0x2ED7F4u;
            goto label_2ed7f4;
        }
    }
    ctx->pc = 0x2ED7E4u;
    // 0x2ed7e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ed7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed7e8:
    // 0x2ed7e8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2ed7e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2ed7ec: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x2ed7ecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ed7f0: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x2ed7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_2ed7f4:
    // 0x2ed7f4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2ed7f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ed7f8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2ED7F8u;
    {
        const bool branch_taken_0x2ed7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7F8u;
        // 0x2ed7fc: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed7f8) {
            ctx->pc = 0x2ED8BCu;
            goto label_2ed8bc;
        }
    }
    ctx->pc = 0x2ED800u;
    // 0x2ed800: 0x54820009  bnel        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ED800u;
    {
        const bool branch_taken_0x2ed800 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ed800) {
            ctx->pc = 0x2ED804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED800u;
            // 0x2ed804: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED828u;
            goto label_2ed828;
        }
    }
    ctx->pc = 0x2ED808u;
label_2ed808:
    // 0x2ed808: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2ed808u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2ed80c: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x2ed80cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ed810: 0x0  nop
    ctx->pc = 0x2ed810u;
    // NOP
    // 0x2ed814: 0x0  nop
    ctx->pc = 0x2ed814u;
    // NOP
    // 0x2ed818: 0x0  nop
    ctx->pc = 0x2ed818u;
    // NOP
    // 0x2ed81c: 0x1082fffa  beq         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2ED81Cu;
    {
        const bool branch_taken_0x2ed81c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ed81c) {
            ctx->pc = 0x2ED808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed808;
        }
    }
    ctx->pc = 0x2ED824u;
    // 0x2ed824: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x2ed824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_2ed828:
    // 0x2ed828: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x2ed828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2ed82c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2ED82Cu;
    {
        const bool branch_taken_0x2ed82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED82Cu;
        // 0x2ed830: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed82c) {
            ctx->pc = 0x2ED8B4u;
            goto label_2ed8b4;
        }
    }
    ctx->pc = 0x2ED834u;
    // 0x2ed834: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2ed834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed838: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x2ed838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x2ed83c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2ed83cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2ed840: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x2ed840u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ed844: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x2ed844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2ed848: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2ED848u;
    {
        const bool branch_taken_0x2ed848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED848u;
        // 0x2ed84c: 0x2a61023  subu        $v0, $s5, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed848) {
            ctx->pc = 0x2ED88Cu;
            goto label_2ed88c;
        }
    }
    ctx->pc = 0x2ED850u;
label_2ed850:
    // 0x2ed850: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x2ed850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x2ed854: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2ED854u;
    {
        const bool branch_taken_0x2ed854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED854u;
        // 0x2ed858: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed854) {
            ctx->pc = 0x2ED888u;
            goto label_2ed888;
        }
    }
    ctx->pc = 0x2ED85Cu;
    // 0x2ed85c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2ed85cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2ed860: 0x310b8  dsll        $v0, $v1, 2
    ctx->pc = 0x2ed860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 2);
    // 0x2ed864: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x2ed864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2ed868: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2ed868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2ed86c: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x2ed86cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2ed870: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x2ed870u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ed874: 0x6442ffd0  daddiu      $v0, $v0, -0x30
    ctx->pc = 0x2ed874u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
    // 0x2ed878: 0x28830030  slti        $v1, $a0, 0x30
    ctx->pc = 0x2ed878u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2ed87c: 0x1060fff4  beqz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2ED87Cu;
    {
        const bool branch_taken_0x2ed87c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED87Cu;
        // 0x2ed880: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed87c) {
            ctx->pc = 0x2ED850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed850;
        }
    }
    ctx->pc = 0x2ED884u;
    // 0x2ed884: 0x0  nop
    ctx->pc = 0x2ed884u;
    // NOP
label_2ed888:
    // 0x2ed888: 0x2a61023  subu        $v0, $s5, $a2
    ctx->pc = 0x2ed888u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
label_2ed88c:
    // 0x2ed88c: 0x3c040098  lui         $a0, 0x98
    ctx->pc = 0x2ed88cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)152 << 16));
    // 0x2ed890: 0x3484967f  ori         $a0, $a0, 0x967F
    ctx->pc = 0x2ed890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)38527);
    // 0x2ed894: 0xdfa60010  ld          $a2, 0x10($sp)
    ctx->pc = 0x2ed894u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed898: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x2ed898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2ed89c: 0x82300a  movz        $a2, $a0, $v0
    ctx->pc = 0x2ed89cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x2ed8a0: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x2ed8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x2ed8a4: 0x6182f  dsubu       $v1, $zero, $a2
    ctx->pc = 0x2ed8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x2ed8a8: 0x67300b  movn        $a2, $v1, $a3
    ctx->pc = 0x2ed8a8u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x2ed8ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED8ACu;
    {
        const bool branch_taken_0x2ed8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED8ACu;
        // 0x2ed8b0: 0xffa60010  sd          $a2, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed8ac) {
            ctx->pc = 0x2ED8C0u;
            goto label_2ed8c0;
        }
    }
    ctx->pc = 0x2ED8B4u;
label_2ed8b4:
    // 0x2ed8b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ED8B4u;
    {
        const bool branch_taken_0x2ed8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED8B4u;
        // 0x2ed8b8: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed8b4) {
            ctx->pc = 0x2ED8C0u;
            goto label_2ed8c0;
        }
    }
    ctx->pc = 0x2ED8BCu;
label_2ed8bc:
    // 0x2ed8bc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2ed8bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ed8c0:
    // 0x2ed8c0: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED8C0u;
    {
        const bool branch_taken_0x2ed8c0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED8C0u;
        // 0x2ed8c4: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed8c0) {
            ctx->pc = 0x2ED8D4u;
            goto label_2ed8d4;
        }
    }
    ctx->pc = 0x2ED8C8u;
    // 0x2ed8c8: 0x2aa280b  movn        $a1, $s5, $t2
    ctx->pc = 0x2ed8c8u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
    // 0x2ed8cc: 0x100002ab  b           . + 4 + (0x2AB << 2)
    ctx->pc = 0x2ED8CCu;
    {
        const bool branch_taken_0x2ed8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED8CCu;
        // 0x2ed8d0: 0xa8a80a  movz        $s5, $a1, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed8cc) {
            ctx->pc = 0x2EE37Cu;
            goto label_2ee37c;
        }
    }
    ctx->pc = 0x2ED8D4u;
label_2ed8d4:
    // 0x2ed8d4: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x2ed8d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2ed8d8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x2ed8d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ed8dc: 0x29ef00a  movz        $fp, $s4, $fp
    ctx->pc = 0x2ed8dcu;
    if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 20));
    // 0x2ed8e0: 0x69182f  dsubu       $v1, $v1, $t1
    ctx->pc = 0x2ed8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x2ed8e4: 0x282980b  movn        $s3, $s4, $v0
    ctx->pc = 0x2ed8e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 20));
    // 0x2ed8e8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2ed8e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ed8ec: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2ed8ecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2ed8f0: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x2ed8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x2ed8f4: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2ed8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x2ed8f8: 0xc0b8dee  jal         func_2E37B8
    ctx->pc = 0x2ED8F8u;
    SET_GPR_U32(ctx, 31, 0x2ED900u);
    ctx->pc = 0x2ED8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED8F8u;
    // 0x2ed8fc: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E37B8u, 0x2ED8F8u, 0x2ED900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED900u;
label_2ed900:
    // 0x2ed900: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2ed900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed904: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ed904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed908: 0x4c10006  bgez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED908u;
    {
        const bool branch_taken_0x2ed908 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2ED90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED908u;
        // 0x2ed90c: 0x8fb00068  lw          $s0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed908) {
            ctx->pc = 0x2ED924u;
            goto label_2ed924;
        }
    }
    ctx->pc = 0x2ED910u;
    // 0x2ed910: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x2ed910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x2ed914: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2ed914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2ed918: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2ED918u;
    SET_GPR_U32(ctx, 31, 0x2ED920u);
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2ED918u, 0x2ED920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED920u;
label_2ed920:
    // 0x2ed920: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ed920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ed924:
    // 0x2ed924: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x2ed924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ed928: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2ED928u;
    {
        const bool branch_taken_0x2ed928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED928u;
        // 0x2ed92c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed928) {
            ctx->pc = 0x2ED994u;
            goto label_2ed994;
        }
    }
    ctx->pc = 0x2ED930u;
    // 0x2ed930: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2ed930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2ed934: 0x2662fff7  addiu       $v0, $s3, -0x9
    ctx->pc = 0x2ed934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967287));
    // 0x2ed938: 0x2463c5e0  addiu       $v1, $v1, -0x3A20
    ctx->pc = 0x2ed938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952416));
    // 0x2ed93c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ed93cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ed940: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ed940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ed944: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ed944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed948: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2ED948u;
    SET_GPR_U32(ctx, 31, 0x2ED950u);
    ctx->pc = 0x2ED94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED948u;
    // 0x2ed94c: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2ED948u, 0x2ED950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED950u;
label_2ed950:
    // 0x2ed950: 0x6400005  bltz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED950u;
    {
        const bool branch_taken_0x2ed950 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2ED954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED950u;
        // 0x2ed954: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed950) {
            ctx->pc = 0x2ED968u;
            goto label_2ed968;
        }
    }
    ctx->pc = 0x2ED958u;
    // 0x2ed958: 0xc0b86d8  jal         func_2E1B60
    ctx->pc = 0x2ED958u;
    SET_GPR_U32(ctx, 31, 0x2ED960u);
    ctx->pc = 0x2ED95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED958u;
    // 0x2ed95c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1B60u, 0x2ED958u, 0x2ED960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED960u;
label_2ed960:
    // 0x2ed960: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2ED960u;
    {
        const bool branch_taken_0x2ed960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED960u;
        // 0x2ed964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed960) {
            ctx->pc = 0x2ED988u;
            goto label_2ed988;
        }
    }
    ctx->pc = 0x2ED968u;
label_2ed968:
    // 0x2ed968: 0x12107a  dsrl        $v0, $s2, 1
    ctx->pc = 0x2ed968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> 1);
    // 0x2ed96c: 0x32440001  andi        $a0, $s2, 0x1
    ctx->pc = 0x2ed96cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2ed970: 0xc0b86d8  jal         func_2E1B60
    ctx->pc = 0x2ED970u;
    SET_GPR_U32(ctx, 31, 0x2ED978u);
    ctx->pc = 0x2ED974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED970u;
    // 0x2ed974: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1B60u, 0x2ED970u, 0x2ED978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED978u;
label_2ed978:
    // 0x2ed978: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ed978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed97c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2ED97Cu;
    SET_GPR_U32(ctx, 31, 0x2ED984u);
    ctx->pc = 0x2ED980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED97Cu;
    // 0x2ed980: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2ED97Cu, 0x2ED984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED984u;
label_2ed984:
    // 0x2ed984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ed984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ed988:
    // 0x2ed988: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2ED988u;
    SET_GPR_U32(ctx, 31, 0x2ED990u);
    ctx->pc = 0x2ED98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED988u;
    // 0x2ed98c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2ED988u, 0x2ED990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED990u;
label_2ed990:
    // 0x2ed990: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ed990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ed994:
    // 0x2ed994: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x2ed994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2ed998: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2ED998u;
    {
        const bool branch_taken_0x2ed998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED998u;
        // 0x2ed99c: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed998) {
            ctx->pc = 0x2EDA6Cu;
            goto label_2eda6c;
        }
    }
    ctx->pc = 0x2ED9A0u;
    // 0x2ed9a0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x2ed9a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed9a4: 0x50400276  beql        $v0, $zero, . + 4 + (0x276 << 2)
    ctx->pc = 0x2ED9A4u;
    {
        const bool branch_taken_0x2ed9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed9a4) {
            ctx->pc = 0x2ED9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED9A4u;
            // 0x2ed9a8: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE380u;
            goto label_2ee380;
        }
    }
    ctx->pc = 0x2ED9ACu;
    // 0x2ed9ac: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2ED9ACu;
    {
        const bool branch_taken_0x2ed9ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2ED9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9ACu;
        // 0x2ed9b0: 0x28420017  slti        $v0, $v0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed9ac) {
            ctx->pc = 0x2EDA38u;
            goto label_2eda38;
        }
    }
    ctx->pc = 0x2ED9B4u;
    // 0x2ed9b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED9B4u;
    {
        const bool branch_taken_0x2ed9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9B4u;
        // 0x2ed9b8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed9b4) {
            ctx->pc = 0x2ED9D0u;
            goto label_2ed9d0;
        }
    }
    ctx->pc = 0x2ED9BCu;
    // 0x2ed9bc: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2ed9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2ed9c0: 0x2442c5e0  addiu       $v0, $v0, -0x3A20
    ctx->pc = 0x2ed9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952416));
    // 0x2ed9c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ed9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed9c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2ED9C8u;
    {
        const bool branch_taken_0x2ed9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9C8u;
        // 0x2ed9cc: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed9c8) {
            ctx->pc = 0x2EDA28u;
            goto label_2eda28;
        }
    }
    ctx->pc = 0x2ED9D0u;
label_2ed9d0:
    // 0x2ed9d0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2ed9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2ed9d4: 0x743823  subu        $a3, $v1, $s4
    ctx->pc = 0x2ed9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2ed9d8: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x2ed9d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed9dc: 0x24e20016  addiu       $v0, $a3, 0x16
    ctx->pc = 0x2ed9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 22));
    // 0x2ed9e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2ed9e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ed9e4: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2ED9E4u;
    {
        const bool branch_taken_0x2ed9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9E4u;
        // 0x2ed9e8: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed9e4) {
            ctx->pc = 0x2EDA70u;
            goto label_2eda70;
        }
    }
    ctx->pc = 0x2ED9ECu;
    // 0x2ed9ec: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x2ed9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x2ed9f0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2ed9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2ed9f4: 0x2610c5e0  addiu       $s0, $s0, -0x3A20
    ctx->pc = 0x2ed9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952416));
    // 0x2ed9f8: 0x67182f  dsubu       $v1, $v1, $a3
    ctx->pc = 0x2ed9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 7));
    // 0x2ed9fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2ed9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2eda00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2eda00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eda04: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x2eda04u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2eda08: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EDA08u;
    SET_GPR_U32(ctx, 31, 0x2EDA10u);
    ctx->pc = 0x2EDA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDA08u;
    // 0x2eda0c: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EDA08u, 0x2EDA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDA10u;
label_2eda10:
    // 0x2eda10: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x2eda10u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eda14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eda14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eda18: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2eda18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2eda1c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2eda1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2eda20: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2eda20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2eda24: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2eda24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2eda28:
    // 0x2eda28: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EDA28u;
    SET_GPR_U32(ctx, 31, 0x2EDA30u);
    ctx->pc = 0x2EDA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDA28u;
    // 0x2eda2c: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EDA28u, 0x2EDA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDA30u;
label_2eda30:
    // 0x2eda30: 0x10000252  b           . + 4 + (0x252 << 2)
    ctx->pc = 0x2EDA30u;
    {
        const bool branch_taken_0x2eda30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA30u;
        // 0x2eda34: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda30) {
            ctx->pc = 0x2EE37Cu;
            goto label_2ee37c;
        }
    }
    ctx->pc = 0x2EDA38u;
label_2eda38:
    // 0x2eda38: 0xdfa60010  ld          $a2, 0x10($sp)
    ctx->pc = 0x2eda38u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eda3c: 0x28c2ffea  slti        $v0, $a2, -0x16
    ctx->pc = 0x2eda3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967274) ? 1 : 0);
    // 0x2eda40: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EDA40u;
    {
        const bool branch_taken_0x2eda40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA40u;
        // 0x2eda44: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda40) {
            ctx->pc = 0x2EDA70u;
            goto label_2eda70;
        }
    }
    ctx->pc = 0x2EDA48u;
    // 0x2eda48: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2eda48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2eda4c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2eda4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2eda50: 0x2442c5e0  addiu       $v0, $v0, -0x3A20
    ctx->pc = 0x2eda50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952416));
    // 0x2eda54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eda54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eda58: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2eda58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eda5c: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2EDA5Cu;
    SET_GPR_U32(ctx, 31, 0x2EDA64u);
    ctx->pc = 0x2EDA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDA5Cu;
    // 0x2eda60: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2EDA5Cu, 0x2EDA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDA64u;
label_2eda64:
    // 0x2eda64: 0x10000245  b           . + 4 + (0x245 << 2)
    ctx->pc = 0x2EDA64u;
    {
        const bool branch_taken_0x2eda64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA64u;
        // 0x2eda68: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda64) {
            ctx->pc = 0x2EE37Cu;
            goto label_2ee37c;
        }
    }
    ctx->pc = 0x2EDA6Cu;
label_2eda6c:
    // 0x2eda6c: 0x2931023  subu        $v0, $s4, $s3
    ctx->pc = 0x2eda6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_2eda70:
    // 0x2eda70: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2eda70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2eda74: 0x1a000057  blez        $s0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2EDA74u;
    {
        const bool branch_taken_0x2eda74 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2EDA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA74u;
        // 0x2eda78: 0x3207000f  andi        $a3, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda74) {
            ctx->pc = 0x2EDBD4u;
            goto label_2edbd4;
        }
    }
    ctx->pc = 0x2EDA7Cu;
    // 0x2eda7c: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EDA7Cu;
    {
        const bool branch_taken_0x2eda7c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA7Cu;
        // 0x2eda80: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda7c) {
            ctx->pc = 0x2EDAA0u;
            goto label_2edaa0;
        }
    }
    ctx->pc = 0x2EDA84u;
    // 0x2eda84: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x2eda84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2eda88: 0x2442c5e0  addiu       $v0, $v0, -0x3A20
    ctx->pc = 0x2eda88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952416));
    // 0x2eda8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2eda8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eda90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2eda90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2eda94: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EDA94u;
    SET_GPR_U32(ctx, 31, 0x2EDA9Cu);
    ctx->pc = 0x2EDA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDA94u;
    // 0x2eda98: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EDA94u, 0x2EDA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDA9Cu;
label_2eda9c:
    // 0x2eda9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2eda9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2edaa0:
    // 0x2edaa0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2edaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2edaa4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2edaa4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2edaa8: 0x1200009a  beqz        $s0, . + 4 + (0x9A << 2)
    ctx->pc = 0x2EDAA8u;
    {
        const bool branch_taken_0x2edaa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAA8u;
        // 0x2edaac: 0x2a020135  slti        $v0, $s0, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)309) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edaa8) {
            ctx->pc = 0x2EDD14u;
            goto label_2edd14;
        }
    }
    ctx->pc = 0x2EDAB0u;
    // 0x2edab0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EDAB0u;
    {
        const bool branch_taken_0x2edab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edab0) {
            ctx->pc = 0x2EDAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDAB0u;
            // 0x2edab4: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDAD8u;
            goto label_2edad8;
        }
    }
    ctx->pc = 0x2EDAB8u;
label_2edab8:
    // 0x2edab8: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2edab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_2edabc:
    // 0x2edabc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2edabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2edac0: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x2edac0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x2edac4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2edac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2edac8: 0x1440021d  bnez        $v0, . + 4 + (0x21D << 2)
    ctx->pc = 0x2EDAC8u;
    {
        const bool branch_taken_0x2edac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAC8u;
        // 0x2edacc: 0xdc71b110  ld          $s1, -0x4EF0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294947088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edac8) {
            ctx->pc = 0x2EE340u;
            goto label_2ee340;
        }
    }
    ctx->pc = 0x2EDAD0u;
    // 0x2edad0: 0x1000022b  b           . + 4 + (0x22B << 2)
    ctx->pc = 0x2EDAD0u;
    {
        const bool branch_taken_0x2edad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAD0u;
        // 0x2edad4: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edad0) {
            ctx->pc = 0x2EE380u;
            goto label_2ee380;
        }
    }
    ctx->pc = 0x2EDAD8u;
label_2edad8:
    // 0x2edad8: 0x1200008e  beqz        $s0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2EDAD8u;
    {
        const bool branch_taken_0x2edad8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAD8u;
        // 0x2edadc: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edad8) {
            ctx->pc = 0x2EDD14u;
            goto label_2edd14;
        }
    }
    ctx->pc = 0x2EDAE0u;
    // 0x2edae0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EDAE0u;
    {
        const bool branch_taken_0x2edae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAE0u;
        // 0x2edae4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edae0) {
            ctx->pc = 0x2EDB2Cu;
            goto label_2edb2c;
        }
    }
    ctx->pc = 0x2EDAE8u;
    // 0x2edae8: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x2edae8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x2edaec: 0x0  nop
    ctx->pc = 0x2edaecu;
    // NOP
label_2edaf0:
    // 0x2edaf0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2edaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2edaf4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EDAF4u;
    {
        const bool branch_taken_0x2edaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAF4u;
        // 0x2edaf8: 0x2643c6a8  addiu       $v1, $s2, -0x3958 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edaf4) {
            ctx->pc = 0x2EDB14u;
            goto label_2edb14;
        }
    }
    ctx->pc = 0x2EDAFCu;
    // 0x2edafc: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2edafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2edb00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2edb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2edb04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2edb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edb08: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EDB08u;
    SET_GPR_U32(ctx, 31, 0x2EDB10u);
    ctx->pc = 0x2EDB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB08u;
    // 0x2edb0c: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EDB08u, 0x2EDB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB10u;
label_2edb10:
    // 0x2edb10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2edb10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2edb14:
    // 0x2edb14: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x2edb14u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x2edb18: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2edb18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2edb1c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2EDB1Cu;
    {
        const bool branch_taken_0x2edb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB1Cu;
        // 0x2edb20: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb1c) {
            ctx->pc = 0x2EDAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2edaf0;
        }
    }
    ctx->pc = 0x2EDB24u;
    // 0x2edb24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EDB24u;
    {
        const bool branch_taken_0x2edb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB24u;
        // 0x2edb28: 0x2644c6a8  addiu       $a0, $s2, -0x3958 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb24) {
            ctx->pc = 0x2EDB34u;
            goto label_2edb34;
        }
    }
    ctx->pc = 0x2EDB2Cu;
label_2edb2c:
    // 0x2edb2c: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x2edb2cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x2edb30: 0x2644c6a8  addiu       $a0, $s2, -0x3958
    ctx->pc = 0x2edb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952616));
label_2edb34:
    // 0x2edb34: 0x11283f  dsra32      $a1, $s1, 0
    ctx->pc = 0x2edb34u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x2edb38: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x2edb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x2edb3c: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x2edb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2edb40: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2edb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2edb44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2edb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2edb48: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x2edb48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x2edb4c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x2edb4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x2edb50: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2edb50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2edb54: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x2edb54u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x2edb58: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2edb58u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2edb5c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EDB5Cu;
    SET_GPR_U32(ctx, 31, 0x2EDB64u);
    ctx->pc = 0x2EDB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB5Cu;
    // 0x2edb60: 0x2252825  or          $a1, $s1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EDB5Cu, 0x2EDB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB64u;
label_2edb64:
    // 0x2edb64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2edb64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edb68: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x2edb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x2edb6c: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x2edb6cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x2edb70: 0x3c027ca0  lui         $v0, 0x7CA0
    ctx->pc = 0x2edb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31904 << 16));
    // 0x2edb74: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x2edb74u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2edb78: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x2edb78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2edb7c: 0x0  nop
    ctx->pc = 0x2edb7cu;
    // NOP
    // 0x2edb80: 0x0  nop
    ctx->pc = 0x2edb80u;
    // NOP
    // 0x2edb84: 0x0  nop
    ctx->pc = 0x2edb84u;
    // NOP
    // 0x2edb88: 0x0  nop
    ctx->pc = 0x2edb88u;
    // NOP
    // 0x2edb8c: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x2EDB8Cu;
    {
        const bool branch_taken_0x2edb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB8Cu;
        // 0x2edb90: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb8c) {
            ctx->pc = 0x2EDABCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2edabc;
        }
    }
    ctx->pc = 0x2EDB94u;
    // 0x2edb94: 0x3c027c90  lui         $v0, 0x7C90
    ctx->pc = 0x2edb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31888 << 16));
    // 0x2edb98: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x2edb98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2edb9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EDB9Cu;
    {
        const bool branch_taken_0x2edb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB9Cu;
        // 0x2edba0: 0x3c020350  lui         $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb9c) {
            ctx->pc = 0x2EDBC0u;
            goto label_2edbc0;
        }
    }
    ctx->pc = 0x2EDBA4u;
    // 0x2edba4: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x2edba4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x2edba8: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x2edba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x2edbac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2edbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2edbb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2edbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2edbb4: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2edbb4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x2edbb8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2EDBB8u;
    {
        const bool branch_taken_0x2edbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDBB8u;
        // 0x2edbbc: 0x2308825  or          $s1, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edbb8) {
            ctx->pc = 0x2EDD14u;
            goto label_2edd14;
        }
    }
    ctx->pc = 0x2EDBC0u;
label_2edbc0:
    // 0x2edbc0: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x2edbc0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x2edbc4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2edbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2edbc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2edbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2edbcc: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2EDBCCu;
    {
        const bool branch_taken_0x2edbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDBCCu;
        // 0x2edbd0: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edbcc) {
            ctx->pc = 0x2EDD14u;
            goto label_2edd14;
        }
    }
    ctx->pc = 0x2EDBD4u;
label_2edbd4:
    // 0x2edbd4: 0x6010050  bgez        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2EDBD4u;
    {
        const bool branch_taken_0x2edbd4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2EDBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDBD4u;
        // 0x2edbd8: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edbd4) {
            ctx->pc = 0x2EDD18u;
            goto label_2edd18;
        }
    }
    ctx->pc = 0x2EDBDCu;
    // 0x2edbdc: 0x108023  negu        $s0, $s0
    ctx->pc = 0x2edbdcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x2edbe0: 0x3207000f  andi        $a3, $s0, 0xF
    ctx->pc = 0x2edbe0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x2edbe4: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EDBE4u;
    {
        const bool branch_taken_0x2edbe4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDBE4u;
        // 0x2edbe8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edbe4) {
            ctx->pc = 0x2EDC08u;
            goto label_2edc08;
        }
    }
    ctx->pc = 0x2EDBECu;
    // 0x2edbec: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x2edbecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2edbf0: 0x2442c5e0  addiu       $v0, $v0, -0x3A20
    ctx->pc = 0x2edbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952416));
    // 0x2edbf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2edbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edbf8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2edbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2edbfc: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2EDBFCu;
    SET_GPR_U32(ctx, 31, 0x2EDC04u);
    ctx->pc = 0x2EDC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDBFCu;
    // 0x2edc00: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2EDBFCu, 0x2EDC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC04u;
label_2edc04:
    // 0x2edc04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2edc04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2edc08:
    // 0x2edc08: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2edc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2edc0c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2edc0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2edc10: 0x12000040  beqz        $s0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2EDC10u;
    {
        const bool branch_taken_0x2edc10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC10u;
        // 0x2edc14: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc10) {
            ctx->pc = 0x2EDD14u;
            goto label_2edd14;
        }
    }
    ctx->pc = 0x2EDC18u;
    // 0x2edc18: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x2edc18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2edc1c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2EDC1Cu;
    {
        const bool branch_taken_0x2edc1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC1Cu;
        // 0x2edc20: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc1c) {
            ctx->pc = 0x2EDCDCu;
            goto label_2edcdc;
        }
    }
    ctx->pc = 0x2EDC24u;
    // 0x2edc24: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EDC24u;
    {
        const bool branch_taken_0x2edc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC24u;
        // 0x2edc28: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc24) {
            ctx->pc = 0x2EDC6Cu;
            goto label_2edc6c;
        }
    }
    ctx->pc = 0x2EDC2Cu;
    // 0x2edc2c: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x2edc2cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
label_2edc30:
    // 0x2edc30: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2edc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2edc34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EDC34u;
    {
        const bool branch_taken_0x2edc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC34u;
        // 0x2edc38: 0x2643c6d0  addiu       $v1, $s2, -0x3930 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc34) {
            ctx->pc = 0x2EDC54u;
            goto label_2edc54;
        }
    }
    ctx->pc = 0x2EDC3Cu;
    // 0x2edc3c: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2edc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2edc40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2edc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2edc44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2edc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edc48: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EDC48u;
    SET_GPR_U32(ctx, 31, 0x2EDC50u);
    ctx->pc = 0x2EDC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC48u;
    // 0x2edc4c: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EDC48u, 0x2EDC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC50u;
label_2edc50:
    // 0x2edc50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2edc50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2edc54:
    // 0x2edc54: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x2edc54u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x2edc58: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2edc58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2edc5c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2EDC5Cu;
    {
        const bool branch_taken_0x2edc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC5Cu;
        // 0x2edc60: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc5c) {
            ctx->pc = 0x2EDC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2edc30;
        }
    }
    ctx->pc = 0x2EDC64u;
    // 0x2edc64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EDC64u;
    {
        const bool branch_taken_0x2edc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC64u;
        // 0x2edc68: 0x2642c6d0  addiu       $v0, $s2, -0x3930 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc64) {
            ctx->pc = 0x2EDC74u;
            goto label_2edc74;
        }
    }
    ctx->pc = 0x2EDC6Cu;
label_2edc6c:
    // 0x2edc6c: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x2edc6cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x2edc70: 0x2642c6d0  addiu       $v0, $s2, -0x3930
    ctx->pc = 0x2edc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952656));
label_2edc74:
    // 0x2edc74: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x2edc74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2edc78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2edc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2edc7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2edc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edc80: 0xdc700000  ld          $s0, 0x0($v1)
    ctx->pc = 0x2edc80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2edc84: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x2edc84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edc88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2edc88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edc8c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EDC8Cu;
    SET_GPR_U32(ctx, 31, 0x2EDC94u);
    ctx->pc = 0x2EDC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC8Cu;
    // 0x2edc90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EDC8Cu, 0x2EDC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC94u;
label_2edc94:
    // 0x2edc94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2edc94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edc98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2edc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edc9c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EDC9Cu;
    SET_GPR_U32(ctx, 31, 0x2EDCA4u);
    ctx->pc = 0x2EDCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC9Cu;
    // 0x2edca0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EDC9Cu, 0x2EDCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDCA4u;
label_2edca4:
    // 0x2edca4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2EDCA4u;
    {
        const bool branch_taken_0x2edca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCA4u;
        // 0x2edca8: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edca4) {
            ctx->pc = 0x2EDD18u;
            goto label_2edd18;
        }
    }
    ctx->pc = 0x2EDCACu;
    // 0x2edcac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2edcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edcb0: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2EDCB0u;
    SET_GPR_U32(ctx, 31, 0x2EDCB8u);
    ctx->pc = 0x2EDCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDCB0u;
    // 0x2edcb4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2EDCB0u, 0x2EDCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDCB8u;
label_2edcb8:
    // 0x2edcb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edcbc: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EDCBCu;
    SET_GPR_U32(ctx, 31, 0x2EDCC4u);
    ctx->pc = 0x2EDCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDCBCu;
    // 0x2edcc0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EDCBCu, 0x2EDCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDCC4u;
label_2edcc4:
    // 0x2edcc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2edcc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edcc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2edcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edccc: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EDCCCu;
    SET_GPR_U32(ctx, 31, 0x2EDCD4u);
    ctx->pc = 0x2EDCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDCCCu;
    // 0x2edcd0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EDCCCu, 0x2EDCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDCD4u;
label_2edcd4:
    // 0x2edcd4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EDCD4u;
    {
        const bool branch_taken_0x2edcd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCD4u;
        // 0x2edcd8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edcd4) {
            ctx->pc = 0x2EDD14u;
            goto label_2edd14;
        }
    }
    ctx->pc = 0x2EDCDCu;
label_2edcdc:
    // 0x2edcdc: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2edcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_2edce0:
    // 0x2edce0: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x2edce0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x2edce4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2edce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2edce8: 0x14600195  bnez        $v1, . + 4 + (0x195 << 2)
    ctx->pc = 0x2EDCE8u;
    {
        const bool branch_taken_0x2edce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCE8u;
        // 0x2edcec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edce8) {
            ctx->pc = 0x2EE340u;
            goto label_2ee340;
        }
    }
    ctx->pc = 0x2EDCF0u;
    // 0x2edcf0: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x2EDCF0u;
    {
        const bool branch_taken_0x2edcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCF0u;
        // 0x2edcf4: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edcf0) {
            ctx->pc = 0x2EE380u;
            goto label_2ee380;
        }
    }
    ctx->pc = 0x2EDCF8u;
label_2edcf8:
    // 0x2edcf8: 0xc0bb27e  jal         func_2EC9F8
    ctx->pc = 0x2EDCF8u;
    SET_GPR_U32(ctx, 31, 0x2EDD00u);
    ctx->pc = 0x2EDCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDCF8u;
    // 0x2edcfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC9F8u, 0x2EDCF8u, 0x2EDD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD00u;
label_2edd00:
    // 0x2edd00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2edd00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd04: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2EDD04u;
    SET_GPR_U32(ctx, 31, 0x2EDD0Cu);
    ctx->pc = 0x2EDD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD04u;
    // 0x2edd08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2EDD04u, 0x2EDD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD0Cu;
label_2edd0c:
    // 0x2edd0c: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x2EDD0Cu;
    {
        const bool branch_taken_0x2edd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD0Cu;
        // 0x2edd10: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd0c) {
            ctx->pc = 0x2EE340u;
            goto label_2ee340;
        }
    }
    ctx->pc = 0x2EDD14u;
label_2edd14:
    // 0x2edd14: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2edd14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2edd18:
    // 0x2edd18: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2edd18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd1c: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x2edd1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2edd20: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2edd20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd24: 0xc0bb024  jal         func_2EC090
    ctx->pc = 0x2EDD24u;
    SET_GPR_U32(ctx, 31, 0x2EDD2Cu);
    ctx->pc = 0x2EDD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD24u;
    // 0x2edd28: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC090u, 0x2EDD24u, 0x2EDD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD2Cu;
label_2edd2c:
    // 0x2edd2c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2edd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2edd30: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x2edd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2edd34: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x2edd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2edd38: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x2edd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
    // 0x2edd3c: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x2EDD3Cu;
    {
        const bool branch_taken_0x2edd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD3Cu;
        // 0x2edd40: 0xafa60060  sw          $a2, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd3c) {
            ctx->pc = 0x2EE164u;
            goto label_2ee164;
        }
    }
    ctx->pc = 0x2EDD44u;
    // 0x2edd44: 0x0  nop
    ctx->pc = 0x2edd44u;
    // NOP
label_2edd48:
    // 0x2edd48: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2edd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd4c: 0xc0bb1a2  jal         func_2EC688
    ctx->pc = 0x2EDD4Cu;
    SET_GPR_U32(ctx, 31, 0x2EDD54u);
    ctx->pc = 0x2EDD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD4Cu;
    // 0x2edd50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC688u, 0x2EDD4Cu, 0x2EDD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD54u;
label_2edd54:
    // 0x2edd54: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2edd54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2edd58: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x2edd58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2edd5c: 0xc0bb200  jal         func_2EC800
    ctx->pc = 0x2EDD5Cu;
    SET_GPR_U32(ctx, 31, 0x2EDD64u);
    ctx->pc = 0x2EDD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD5Cu;
    // 0x2edd60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC800u, 0x2EDD5Cu, 0x2EDD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD64u;
label_2edd64:
    // 0x2edd64: 0x1c400017  bgtz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EDD64u;
    {
        const bool branch_taken_0x2edd64 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2EDD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD64u;
        // 0x2edd68: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd64) {
            ctx->pc = 0x2EDDC4u;
            goto label_2eddc4;
        }
    }
    ctx->pc = 0x2EDD6Cu;
    // 0x2edd6c: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x2EDD6Cu;
    {
        const bool branch_taken_0x2edd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edd6c) {
            ctx->pc = 0x2EE344u;
            goto label_2ee344;
        }
    }
    ctx->pc = 0x2EDD74u;
label_2edd74:
    // 0x2edd74: 0x14e00037  bnez        $a3, . + 4 + (0x37 << 2)
    ctx->pc = 0x2EDD74u;
    {
        const bool branch_taken_0x2edd74 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD74u;
        // 0x2edd78: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd74) {
            ctx->pc = 0x2EDE54u;
            goto label_2ede54;
        }
    }
    ctx->pc = 0x2EDD7Cu;
    // 0x2edd7c: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x2EDD7Cu;
    {
        const bool branch_taken_0x2edd7c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edd7c) {
            ctx->pc = 0x2EDDB0u;
            goto label_2eddb0;
        }
    }
    ctx->pc = 0x2EDD84u;
    // 0x2edd84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2edd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2edd88: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x2edd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x2edd8c: 0x2231024  and         $v0, $s1, $v1
    ctx->pc = 0x2edd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x2edd90: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2EDD90u;
    {
        const bool branch_taken_0x2edd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EDD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD90u;
        // 0x2edd94: 0x3c037ff0  lui         $v1, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd90) {
            ctx->pc = 0x2EDE04u;
            goto label_2ede04;
        }
    }
    ctx->pc = 0x2EDD98u;
    // 0x2edd98: 0x11103f  dsra32      $v0, $s1, 0
    ctx->pc = 0x2edd98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x2edd9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2edd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2edda0: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x2edda0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x2edda4: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x2edda4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2edda8: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x2EDDA8u;
    {
        const bool branch_taken_0x2edda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDA8u;
        // 0x2eddac: 0x2883c  dsll32      $s1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edda8) {
            ctx->pc = 0x2EE340u;
            goto label_2ee340;
        }
    }
    ctx->pc = 0x2EDDB0u;
label_2eddb0:
    // 0x2eddb0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2eddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eddb4: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x2eddb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x2eddb8: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x2eddb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x2eddbc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EDDBCu;
    {
        const bool branch_taken_0x2eddbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eddbc) {
            ctx->pc = 0x2EDE04u;
            goto label_2ede04;
        }
    }
    ctx->pc = 0x2EDDC4u;
label_2eddc4:
    // 0x2eddc4: 0x11103f  dsra32      $v0, $s1, 0
    ctx->pc = 0x2eddc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x2eddc8: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x2eddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x2eddcc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eddccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2eddd0: 0x3c04fff0  lui         $a0, 0xFFF0
    ctx->pc = 0x2eddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65520 << 16));
    // 0x2eddd4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2eddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2eddd8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2eddd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2edddc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2edddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2edde0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2edde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2edde4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2edde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2edde8: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x2edde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x2eddec: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x2eddecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x2eddf0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2eddf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2eddf4: 0x2258824  and         $s1, $s1, $a1
    ctx->pc = 0x2eddf4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 5));
    // 0x2eddf8: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x2eddf8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x2eddfc: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x2EDDFCu;
    {
        const bool branch_taken_0x2eddfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDFCu;
        // 0x2ede00: 0x2258825  or          $s1, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eddfc) {
            ctx->pc = 0x2EE340u;
            goto label_2ee340;
        }
    }
    ctx->pc = 0x2EDE04u;
label_2ede04:
    // 0x2ede04: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x2ede04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2ede08: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ede08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ede0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ede0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ede10: 0x1040014c  beqz        $v0, . + 4 + (0x14C << 2)
    ctx->pc = 0x2EDE10u;
    {
        const bool branch_taken_0x2ede10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE10u;
        // 0x2ede14: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede10) {
            ctx->pc = 0x2EE344u;
            goto label_2ee344;
        }
    }
    ctx->pc = 0x2EDE18u;
    // 0x2ede18: 0x1680ffb7  bnez        $s4, . + 4 + (-0x49 << 2)
    ctx->pc = 0x2EDE18u;
    {
        const bool branch_taken_0x2ede18 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ede18) {
            ctx->pc = 0x2EDCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2edcf8;
        }
    }
    ctx->pc = 0x2EDE20u;
    // 0x2ede20: 0xc0bb27e  jal         func_2EC9F8
    ctx->pc = 0x2EDE20u;
    SET_GPR_U32(ctx, 31, 0x2EDE28u);
    ctx->pc = 0x2EDE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDE20u;
    // 0x2ede24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC9F8u, 0x2EDE20u, 0x2EDE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDE28u;
label_2ede28:
    // 0x2ede28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ede28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede2c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2EDE2Cu;
    SET_GPR_U32(ctx, 31, 0x2EDE34u);
    ctx->pc = 0x2EDE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDE2Cu;
    // 0x2ede30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2EDE2Cu, 0x2EDE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDE34u;
label_2ede34:
    // 0x2ede34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ede34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ede38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede3c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EDE3Cu;
    SET_GPR_U32(ctx, 31, 0x2EDE44u);
    ctx->pc = 0x2EDE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDE3Cu;
    // 0x2ede40: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EDE3Cu, 0x2EDE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDE44u;
label_2ede44:
    // 0x2ede44: 0x1040ffa5  beqz        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x2EDE44u;
    {
        const bool branch_taken_0x2ede44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE44u;
        // 0x2ede48: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede44) {
            ctx->pc = 0x2EDCDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2edcdc;
        }
    }
    ctx->pc = 0x2EDE4Cu;
    // 0x2ede4c: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x2EDE4Cu;
    {
        const bool branch_taken_0x2ede4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ede4c) {
            ctx->pc = 0x2EE344u;
            goto label_2ee344;
        }
    }
    ctx->pc = 0x2EDE54u;
label_2ede54:
    // 0x2ede54: 0xc0bb364  jal         func_2ECD90
    ctx->pc = 0x2EDE54u;
    SET_GPR_U32(ctx, 31, 0x2EDE5Cu);
    ctx->pc = 0x2EDE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDE54u;
    // 0x2ede58: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECD90u, 0x2EDE54u, 0x2EDE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDE5Cu;
label_2ede5c:
    // 0x2ede5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ede5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede60: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2ede60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ede64: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2ede64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2ede68: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EDE68u;
    SET_GPR_U32(ctx, 31, 0x2EDE70u);
    ctx->pc = 0x2EDE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDE68u;
    // 0x2ede6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EDE68u, 0x2EDE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDE70u;
label_2ede70:
    // 0x2ede70: 0x1c400024  bgtz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2EDE70u;
    {
        const bool branch_taken_0x2ede70 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2ede70) {
            ctx->pc = 0x2EDF04u;
            goto label_2edf04;
        }
    }
    ctx->pc = 0x2EDE78u;
    // 0x2ede78: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDE78u;
    {
        const bool branch_taken_0x2ede78 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ede78) {
            ctx->pc = 0x2EDE90u;
            goto label_2ede90;
        }
    }
    ctx->pc = 0x2EDE80u;
    // 0x2ede80: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x2ede80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2ede84: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x2ede84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x2ede88: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2EDE88u;
    {
        const bool branch_taken_0x2ede88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE88u;
        // 0x2ede8c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede88) {
            ctx->pc = 0x2EDF30u;
            goto label_2edf30;
        }
    }
    ctx->pc = 0x2EDE90u;
label_2ede90:
    // 0x2ede90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ede90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ede94: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x2ede94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x2ede98: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x2ede98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x2ede9c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EDE9Cu;
    {
        const bool branch_taken_0x2ede9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE9Cu;
        // 0x2edea0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede9c) {
            ctx->pc = 0x2EDEC4u;
            goto label_2edec4;
        }
    }
    ctx->pc = 0x2EDEA4u;
    // 0x2edea4: 0x1222ff8e  beq         $s1, $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x2EDEA4u;
    {
        const bool branch_taken_0x2edea4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EDEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEA4u;
        // 0x2edea8: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edea4) {
            ctx->pc = 0x2EDCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2edce0;
        }
    }
    ctx->pc = 0x2EDEACu;
    // 0x2edeac: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x2edeacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2edeb0: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x2edeb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x2edeb4: 0x3412bff0  ori         $s2, $zero, 0xBFF0
    ctx->pc = 0x2edeb4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x2edeb8: 0x12943c  dsll32      $s2, $s2, 16
    ctx->pc = 0x2edeb8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2edebc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2EDEBCu;
    {
        const bool branch_taken_0x2edebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edebc) {
            ctx->pc = 0x2EDF30u;
            goto label_2edf30;
        }
    }
    ctx->pc = 0x2EDEC4u;
label_2edec4:
    // 0x2edec4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2edec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2edec8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2edec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2edecc: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EDECCu;
    SET_GPR_U32(ctx, 31, 0x2EDED4u);
    ctx->pc = 0x2EDED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDECCu;
    // 0x2eded0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EDECCu, 0x2EDED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDED4u;
label_2eded4:
    // 0x2eded4: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDED4u;
    {
        const bool branch_taken_0x2eded4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EDED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDED4u;
        // 0x2eded8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eded4) {
            ctx->pc = 0x2EDEECu;
            goto label_2edeec;
        }
    }
    ctx->pc = 0x2EDEDCu;
    // 0x2ededc: 0x3410ff80  ori         $s0, $zero, 0xFF80
    ctx->pc = 0x2ededcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2edee0: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x2edee0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x2edee4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2EDEE4u;
    {
        const bool branch_taken_0x2edee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edee4) {
            ctx->pc = 0x2EDF24u;
            goto label_2edf24;
        }
    }
    ctx->pc = 0x2EDEECu;
label_2edeec:
    // 0x2edeec: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2edeecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2edef0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2edef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2edef4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EDEF4u;
    SET_GPR_U32(ctx, 31, 0x2EDEFCu);
    ctx->pc = 0x2EDEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDEF4u;
    // 0x2edef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EDEF4u, 0x2EDEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDEFCu;
label_2edefc:
    // 0x2edefc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EDEFCu;
    {
        const bool branch_taken_0x2edefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEFCu;
        // 0x2edf00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edefc) {
            ctx->pc = 0x2EDF20u;
            goto label_2edf20;
        }
    }
    ctx->pc = 0x2EDF04u;
label_2edf04:
    // 0x2edf04: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2edf04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2edf08: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2edf08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2edf0c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EDF0Cu;
    SET_GPR_U32(ctx, 31, 0x2EDF14u);
    ctx->pc = 0x2EDF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF0Cu;
    // 0x2edf10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EDF0Cu, 0x2EDF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF14u;
label_2edf14:
    // 0x2edf14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2edf14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf18: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDF18u;
    {
        const bool branch_taken_0x2edf18 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF18u;
        // 0x2edf1c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf18) {
            ctx->pc = 0x2EDF30u;
            goto label_2edf30;
        }
    }
    ctx->pc = 0x2EDF20u;
label_2edf20:
    // 0x2edf20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2edf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2edf24:
    // 0x2edf24: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2EDF24u;
    SET_GPR_U32(ctx, 31, 0x2EDF2Cu);
    ctx->pc = 0x2EDF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF24u;
    // 0x2edf28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2EDF24u, 0x2EDF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF2Cu;
label_2edf2c:
    // 0x2edf2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2edf2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2edf30:
    // 0x2edf30: 0x11183f  dsra32      $v1, $s1, 0
    ctx->pc = 0x2edf30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x2edf34: 0x3c1e7ff0  lui         $fp, 0x7FF0
    ctx->pc = 0x2edf34u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32752 << 16));
    // 0x2edf38: 0x7e1024  and         $v0, $v1, $fp
    ctx->pc = 0x2edf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x2edf3c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2edf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2edf40: 0x3c027fe0  lui         $v0, 0x7FE0
    ctx->pc = 0x2edf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32736 << 16));
    // 0x2edf44: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2edf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2edf48: 0x1482002f  bne         $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2EDF48u;
    {
        const bool branch_taken_0x2edf48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EDF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF48u;
        // 0x2edf4c: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf48) {
            ctx->pc = 0x2EE008u;
            goto label_2ee008;
        }
    }
    ctx->pc = 0x2EDF50u;
    // 0x2edf50: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x2edf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x2edf54: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x2edf54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2edf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2edf5c: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x2edf5cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x2edf60: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x2edf60u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x2edf64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2edf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2edf68: 0x2338824  and         $s1, $s1, $s3
    ctx->pc = 0x2edf68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x2edf6c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2edf6cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x2edf70: 0xc0bb27e  jal         func_2EC9F8
    ctx->pc = 0x2EDF70u;
    SET_GPR_U32(ctx, 31, 0x2EDF78u);
    ctx->pc = 0x2EDF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF70u;
    // 0x2edf74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC9F8u, 0x2EDF70u, 0x2EDF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF78u;
label_2edf78:
    // 0x2edf78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2edf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf7c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EDF7Cu;
    SET_GPR_U32(ctx, 31, 0x2EDF84u);
    ctx->pc = 0x2EDF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF7Cu;
    // 0x2edf80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EDF7Cu, 0x2EDF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF84u;
label_2edf84:
    // 0x2edf84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2edf84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf88: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2EDF88u;
    SET_GPR_U32(ctx, 31, 0x2EDF90u);
    ctx->pc = 0x2EDF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF88u;
    // 0x2edf8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2EDF88u, 0x2EDF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF90u;
label_2edf90:
    // 0x2edf90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2edf90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf94: 0x3c037c9f  lui         $v1, 0x7C9F
    ctx->pc = 0x2edf94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31903 << 16));
    // 0x2edf98: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x2edf98u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x2edf9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2edf9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2edfa0: 0x9e1024  and         $v0, $a0, $fp
    ctx->pc = 0x2edfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
    // 0x2edfa4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2edfa4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2edfa8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EDFA8u;
    {
        const bool branch_taken_0x2edfa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFA8u;
        // 0x2edfac: 0x3c020350  lui         $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edfa8) {
            ctx->pc = 0x2EDFF4u;
            goto label_2edff4;
        }
    }
    ctx->pc = 0x2EDFB0u;
    // 0x2edfb0: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x2edfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x2edfb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2edfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2edfb8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2edfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2edfbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2edfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2edfc0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2edfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2edfc4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2edfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2edfc8: 0x0  nop
    ctx->pc = 0x2edfc8u;
    // NOP
    // 0x2edfcc: 0x0  nop
    ctx->pc = 0x2edfccu;
    // NOP
    // 0x2edfd0: 0x0  nop
    ctx->pc = 0x2edfd0u;
    // NOP
    // 0x2edfd4: 0x12c2feb8  beq         $s6, $v0, . + 4 + (-0x148 << 2)
    ctx->pc = 0x2EDFD4u;
    {
        const bool branch_taken_0x2edfd4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EDFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFD4u;
        // 0x2edfd8: 0x2338824  and         $s1, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edfd4) {
            ctx->pc = 0x2EDAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2edab8;
        }
    }
    ctx->pc = 0x2EDFDCu;
    // 0x2edfdc: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x2edfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x2edfe0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2edfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2edfe4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2edfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2edfe8: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2edfe8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x2edfec: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2EDFECu;
    {
        const bool branch_taken_0x2edfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFECu;
        // 0x2edff0: 0x2338825  or          $s1, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edfec) {
            ctx->pc = 0x2EE134u;
            goto label_2ee134;
        }
    }
    ctx->pc = 0x2EDFF4u;
label_2edff4:
    // 0x2edff4: 0x2338824  and         $s1, $s1, $s3
    ctx->pc = 0x2edff4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x2edff8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2edff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2edffc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2edffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ee000: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2EE000u;
    {
        const bool branch_taken_0x2ee000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE000u;
        // 0x2ee004: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee000) {
            ctx->pc = 0x2EE08Cu;
            goto label_2ee08c;
        }
    }
    ctx->pc = 0x2EE008u;
label_2ee008:
    // 0x2ee008: 0x3c020340  lui         $v0, 0x340
    ctx->pc = 0x2ee008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)832 << 16));
    // 0x2ee00c: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x2ee00cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2ee010: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EE010u;
    {
        const bool branch_taken_0x2ee010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee010) {
            ctx->pc = 0x2EE068u;
            goto label_2ee068;
        }
    }
    ctx->pc = 0x2EE018u;
    // 0x2ee018: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2ee018u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2ee01c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2ee01cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2ee020: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EE020u;
    SET_GPR_U32(ctx, 31, 0x2EE028u);
    ctx->pc = 0x2EE024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE020u;
    // 0x2ee024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EE020u, 0x2EE028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE028u;
label_2ee028:
    // 0x2ee028: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EE028u;
    {
        const bool branch_taken_0x2ee028 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ee028) {
            ctx->pc = 0x2EE068u;
            goto label_2ee068;
        }
    }
    ctx->pc = 0x2EE030u;
    // 0x2ee030: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2ee030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2ee034: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2ee034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2ee038: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2EE038u;
    SET_GPR_U32(ctx, 31, 0x2EE040u);
    ctx->pc = 0x2EE03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE038u;
    // 0x2ee03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2EE038u, 0x2EE040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE040u;
label_2ee040:
    // 0x2ee040: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2EE040u;
    SET_GPR_U32(ctx, 31, 0x2EE048u);
    ctx->pc = 0x2EE044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE040u;
    // 0x2ee044: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2EE040u, 0x2EE048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE048u;
label_2ee048:
    // 0x2ee048: 0xc0b8dee  jal         func_2E37B8
    ctx->pc = 0x2EE048u;
    SET_GPR_U32(ctx, 31, 0x2EE050u);
    ctx->pc = 0x2EE04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE048u;
    // 0x2ee04c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E37B8u, 0x2EE048u, 0x2EE050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE050u;
label_2ee050:
    // 0x2ee050: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE050u;
    {
        const bool branch_taken_0x2ee050 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE050u;
        // 0x2ee054: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee050) {
            ctx->pc = 0x2EE068u;
            goto label_2ee068;
        }
    }
    ctx->pc = 0x2EE058u;
    // 0x2ee058: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ee058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee05c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2EE05Cu;
    SET_GPR_U32(ctx, 31, 0x2EE064u);
    ctx->pc = 0x2EE060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE05Cu;
    // 0x2ee060: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2EE05Cu, 0x2EE064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE064u;
label_2ee064:
    // 0x2ee064: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ee064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee068:
    // 0x2ee068: 0xc0bb27e  jal         func_2EC9F8
    ctx->pc = 0x2EE068u;
    SET_GPR_U32(ctx, 31, 0x2EE070u);
    ctx->pc = 0x2EE06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE068u;
    // 0x2ee06c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC9F8u, 0x2EE068u, 0x2EE070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE070u;
label_2ee070:
    // 0x2ee070: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ee070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee074: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EE074u;
    SET_GPR_U32(ctx, 31, 0x2EE07Cu);
    ctx->pc = 0x2EE078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE074u;
    // 0x2ee078: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EE074u, 0x2EE07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE07Cu;
label_2ee07c:
    // 0x2ee07c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ee07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee080: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2EE080u;
    SET_GPR_U32(ctx, 31, 0x2EE088u);
    ctx->pc = 0x2EE084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE080u;
    // 0x2ee084: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2EE080u, 0x2EE088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE088u;
label_2ee088:
    // 0x2ee088: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ee088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee08c:
    // 0x2ee08c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2ee08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee090: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x2ee090u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x2ee094: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2ee094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ee098: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x2ee098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x2ee09c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ee09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2ee0a0: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x2ee0a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ee0a4: 0x14520024  bne         $v0, $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x2EE0A4u;
    {
        const bool branch_taken_0x2ee0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2EE0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0A4u;
        // 0x2ee0a8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee0a4) {
            ctx->pc = 0x2EE138u;
            goto label_2ee138;
        }
    }
    ctx->pc = 0x2EE0ACu;
    // 0x2ee0ac: 0xc0bbbe2  jal         func_2EEF88
    ctx->pc = 0x2EE0ACu;
    SET_GPR_U32(ctx, 31, 0x2EE0B4u);
    ctx->pc = 0x2EE0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE0ACu;
    // 0x2ee0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEF88u, 0x2EE0ACu, 0x2EE0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE0B4u;
label_2ee0b4:
    // 0x2ee0b4: 0xc0b86d8  jal         func_2E1B60
    ctx->pc = 0x2EE0B4u;
    SET_GPR_U32(ctx, 31, 0x2EE0BCu);
    ctx->pc = 0x2EE0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE0B4u;
    // 0x2ee0b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1B60u, 0x2EE0B4u, 0x2EE0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE0BCu;
label_2ee0bc:
    // 0x2ee0bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee0c0: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2EE0C0u;
    SET_GPR_U32(ctx, 31, 0x2EE0C8u);
    ctx->pc = 0x2EE0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE0C0u;
    // 0x2ee0c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2EE0C0u, 0x2EE0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE0C8u;
label_2ee0c8:
    // 0x2ee0c8: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE0C8u;
    {
        const bool branch_taken_0x2ee0c8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0C8u;
        // 0x2ee0cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee0c8) {
            ctx->pc = 0x2EE0E4u;
            goto label_2ee0e4;
        }
    }
    ctx->pc = 0x2EE0D0u;
    // 0x2ee0d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ee0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ee0d4: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x2ee0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x2ee0d8: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x2ee0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x2ee0dc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EE0DCu;
    {
        const bool branch_taken_0x2ee0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee0dc) {
            ctx->pc = 0x2EE11Cu;
            goto label_2ee11c;
        }
    }
    ctx->pc = 0x2EE0E4u;
label_2ee0e4:
    // 0x2ee0e4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2ee0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2ee0e8: 0xdc25c7b8  ld          $a1, -0x3848($at)
    ctx->pc = 0x2ee0e8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AC7B8u));
    // 0x2ee0ec: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EE0ECu;
    SET_GPR_U32(ctx, 31, 0x2EE0F4u);
    ctx->pc = 0x2EE0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE0ECu;
    // 0x2ee0f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EE0ECu, 0x2EE0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE0F4u;
label_2ee0f4:
    // 0x2ee0f4: 0x4400093  bltz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x2EE0F4u;
    {
        const bool branch_taken_0x2ee0f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EE0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0F4u;
        // 0x2ee0f8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee0f4) {
            ctx->pc = 0x2EE344u;
            goto label_2ee344;
        }
    }
    ctx->pc = 0x2EE0FCu;
    // 0x2ee0fc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2ee0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2ee100: 0xdc25c7c0  ld          $a1, -0x3840($at)
    ctx->pc = 0x2ee100u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AC7C0u));
    // 0x2ee104: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EE104u;
    SET_GPR_U32(ctx, 31, 0x2EE10Cu);
    ctx->pc = 0x2EE108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE104u;
    // 0x2ee108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EE104u, 0x2EE10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE10Cu;
label_2ee10c:
    // 0x2ee10c: 0x1c40008c  bgtz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x2EE10Cu;
    {
        const bool branch_taken_0x2ee10c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2EE110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE10Cu;
        // 0x2ee110: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee10c) {
            ctx->pc = 0x2EE340u;
            goto label_2ee340;
        }
    }
    ctx->pc = 0x2EE114u;
    // 0x2ee114: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE114u;
    {
        const bool branch_taken_0x2ee114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee114) {
            ctx->pc = 0x2EE138u;
            goto label_2ee138;
        }
    }
    ctx->pc = 0x2EE11Cu;
label_2ee11c:
    // 0x2ee11c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2ee11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2ee120: 0xdc25c7c8  ld          $a1, -0x3838($at)
    ctx->pc = 0x2ee120u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AC7C8u));
    // 0x2ee124: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EE124u;
    SET_GPR_U32(ctx, 31, 0x2EE12Cu);
    ctx->pc = 0x2EE128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE124u;
    // 0x2ee128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EE124u, 0x2EE12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE12Cu;
label_2ee12c:
    // 0x2ee12c: 0x4420085  bltzl       $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x2EE12Cu;
    {
        const bool branch_taken_0x2ee12c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ee12c) {
            ctx->pc = 0x2EE130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE12Cu;
            // 0x2ee130: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE344u;
            goto label_2ee344;
        }
    }
    ctx->pc = 0x2EE134u;
label_2ee134:
    // 0x2ee134: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2ee134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2ee138:
    // 0x2ee138: 0xc0bafd2  jal         func_2EBF48
    ctx->pc = 0x2EE138u;
    SET_GPR_U32(ctx, 31, 0x2EE140u);
    ctx->pc = 0x2EE13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE138u;
    // 0x2ee13c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF48u, 0x2EE138u, 0x2EE140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE140u;
label_2ee140:
    // 0x2ee140: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x2ee140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2ee144: 0xc0bafd2  jal         func_2EBF48
    ctx->pc = 0x2EE144u;
    SET_GPR_U32(ctx, 31, 0x2EE14Cu);
    ctx->pc = 0x2EE148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE144u;
    // 0x2ee148: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF48u, 0x2EE144u, 0x2EE14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE14Cu;
label_2ee14c:
    // 0x2ee14c: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x2ee14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2ee150: 0xc0bafd2  jal         func_2EBF48
    ctx->pc = 0x2EE150u;
    SET_GPR_U32(ctx, 31, 0x2EE158u);
    ctx->pc = 0x2EE154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE150u;
    // 0x2ee154: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF48u, 0x2EE150u, 0x2EE158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE158u;
label_2ee158:
    // 0x2ee158: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2ee158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ee15c: 0xc0bafd2  jal         func_2EBF48
    ctx->pc = 0x2EE15Cu;
    SET_GPR_U32(ctx, 31, 0x2EE164u);
    ctx->pc = 0x2EE160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE15Cu;
    // 0x2ee160: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF48u, 0x2EE15Cu, 0x2EE164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE164u;
label_2ee164:
    // 0x2ee164: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2ee164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ee168: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2ee168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ee16c: 0xc0bafa8  jal         func_2EBEA0
    ctx->pc = 0x2EE16Cu;
    SET_GPR_U32(ctx, 31, 0x2EE174u);
    ctx->pc = 0x2EE170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE16Cu;
    // 0x2ee170: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBEA0u, 0x2EE16Cu, 0x2EE174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE174u;
label_2ee174:
    // 0x2ee174: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2ee174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ee178: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x2ee178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2ee17c: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x2ee17cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2ee180: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x2ee180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x2ee184: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2ee184u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ee188: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x2ee188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2ee18c: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x2EE18Cu;
    SET_GPR_U32(ctx, 31, 0x2EE194u);
    ctx->pc = 0x2EE190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE18Cu;
    // 0x2ee190: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x2EE18Cu, 0x2EE194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE194u;
label_2ee194:
    // 0x2ee194: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x2ee194u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ee198: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2ee198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee19c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ee19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee1a0: 0xc0bb304  jal         func_2ECC10
    ctx->pc = 0x2EE1A0u;
    SET_GPR_U32(ctx, 31, 0x2EE1A8u);
    ctx->pc = 0x2EE1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE1A0u;
    // 0x2ee1a4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECC10u, 0x2EE1A0u, 0x2EE1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE1A8u;
label_2ee1a8:
    // 0x2ee1a8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2ee1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2ee1ac: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2ee1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee1b0: 0xc0bb0c8  jal         func_2EC320
    ctx->pc = 0x2EE1B0u;
    SET_GPR_U32(ctx, 31, 0x2EE1B8u);
    ctx->pc = 0x2EE1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE1B0u;
    // 0x2ee1b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC320u, 0x2EE1B0u, 0x2EE1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE1B8u;
label_2ee1b8:
    // 0x2ee1b8: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x2ee1b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee1bc: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE1BCu;
    {
        const bool branch_taken_0x2ee1bc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2EE1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE1BCu;
        // 0x2ee1c0: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee1bc) {
            ctx->pc = 0x2EE1D8u;
            goto label_2ee1d8;
        }
    }
    ctx->pc = 0x2EE1C4u;
    // 0x2ee1c4: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x2ee1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ee1c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ee1c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee1cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ee1ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee1d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE1D0u;
    {
        const bool branch_taken_0x2ee1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE1D0u;
        // 0x2ee1d4: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee1d0) {
            ctx->pc = 0x2EE1ECu;
            goto label_2ee1ec;
        }
    }
    ctx->pc = 0x2EE1D8u;
label_2ee1d8:
    // 0x2ee1d8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x2ee1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ee1dc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2ee1dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee1e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ee1e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee1e4: 0x69023  negu        $s2, $a2
    ctx->pc = 0x2ee1e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x2ee1e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ee1e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ee1ec:
    // 0x2ee1ec: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2ee1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee1f0: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE1F0u;
    {
        const bool branch_taken_0x2ee1f0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2EE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE1F0u;
        // 0x2ee1f4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee1f0) {
            ctx->pc = 0x2EE200u;
            goto label_2ee200;
        }
    }
    ctx->pc = 0x2EE1F8u;
    // 0x2ee1f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE1F8u;
    {
        const bool branch_taken_0x2ee1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE1F8u;
        // 0x2ee1fc: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee1f8) {
            ctx->pc = 0x2EE204u;
            goto label_2ee204;
        }
    }
    ctx->pc = 0x2EE200u;
label_2ee200:
    // 0x2ee200: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x2ee200u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_2ee204:
    // 0x2ee204: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2ee204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ee208: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ee208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ee20c: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x2ee20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ee210: 0x28e3fc02  slti        $v1, $a3, -0x3FE
    ctx->pc = 0x2ee210u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x2ee214: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE214u;
    {
        const bool branch_taken_0x2ee214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE214u;
        // 0x2ee218: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee214) {
            ctx->pc = 0x2EE224u;
            goto label_2ee224;
        }
    }
    ctx->pc = 0x2EE21Cu;
    // 0x2ee21c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE21Cu;
    {
        const bool branch_taken_0x2ee21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE21Cu;
        // 0x2ee220: 0x24930433  addiu       $s3, $a0, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee21c) {
            ctx->pc = 0x2EE22Cu;
            goto label_2ee22c;
        }
    }
    ctx->pc = 0x2EE224u;
label_2ee224:
    // 0x2ee224: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x2ee224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2ee228: 0x459823  subu        $s3, $v0, $a1
    ctx->pc = 0x2ee228u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2ee22c:
    // 0x2ee22c: 0x2133821  addu        $a3, $s0, $s3
    ctx->pc = 0x2ee22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2ee230: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x2ee230u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2ee234: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2ee234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee238: 0x247102a  slt         $v0, $s2, $a3
    ctx->pc = 0x2ee238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2ee23c: 0x242380b  movn        $a3, $s2, $v0
    ctx->pc = 0x2ee23cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 18));
    // 0x2ee240: 0x287182a  slt         $v1, $s4, $a3
    ctx->pc = 0x2ee240u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2ee244: 0x283380b  movn        $a3, $s4, $v1
    ctx->pc = 0x2ee244u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 20));
    // 0x2ee248: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE248u;
    {
        const bool branch_taken_0x2ee248 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x2ee248) {
            ctx->pc = 0x2EE25Cu;
            goto label_2ee25c;
        }
    }
    ctx->pc = 0x2EE250u;
    // 0x2ee250: 0x287a023  subu        $s4, $s4, $a3
    ctx->pc = 0x2ee250u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x2ee254: 0x2479023  subu        $s2, $s2, $a3
    ctx->pc = 0x2ee254u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x2ee258: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x2ee258u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_2ee25c:
    // 0x2ee25c: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x2EE25Cu;
    {
        const bool branch_taken_0x2ee25c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2EE260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE25Cu;
        // 0x2ee260: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee25c) {
            ctx->pc = 0x2EE290u;
            goto label_2ee290;
        }
    }
    ctx->pc = 0x2EE264u;
    // 0x2ee264: 0xc0bb162  jal         func_2EC588
    ctx->pc = 0x2EE264u;
    SET_GPR_U32(ctx, 31, 0x2EE26Cu);
    ctx->pc = 0x2EE268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE264u;
    // 0x2ee268: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC588u, 0x2EE264u, 0x2EE26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE26Cu;
label_2ee26c:
    // 0x2ee26c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2ee26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x2ee270: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2ee270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee274: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2ee274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ee278: 0xc0bb0d6  jal         func_2EC358
    ctx->pc = 0x2EE278u;
    SET_GPR_U32(ctx, 31, 0x2EE280u);
    ctx->pc = 0x2EE27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE278u;
    // 0x2ee27c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC358u, 0x2EE278u, 0x2EE280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE280u;
label_2ee280:
    // 0x2ee280: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2ee280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ee284: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2ee284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee288: 0xc0bafd2  jal         func_2EBF48
    ctx->pc = 0x2EE288u;
    SET_GPR_U32(ctx, 31, 0x2EE290u);
    ctx->pc = 0x2EE28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE288u;
    // 0x2ee28c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF48u, 0x2EE288u, 0x2EE290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE290u;
label_2ee290:
    // 0x2ee290: 0x1a400005  blez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE290u;
    {
        const bool branch_taken_0x2ee290 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2EE294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE290u;
        // 0x2ee294: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee290) {
            ctx->pc = 0x2EE2A8u;
            goto label_2ee2a8;
        }
    }
    ctx->pc = 0x2EE298u;
    // 0x2ee298: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ee298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee29c: 0xc0bb1a2  jal         func_2EC688
    ctx->pc = 0x2EE29Cu;
    SET_GPR_U32(ctx, 31, 0x2EE2A4u);
    ctx->pc = 0x2EE2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE29Cu;
    // 0x2ee2a0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC688u, 0x2EE29Cu, 0x2EE2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE2A4u;
label_2ee2a4:
    // 0x2ee2a4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2ee2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_2ee2a8:
    // 0x2ee2a8: 0x1ac00005  blez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE2A8u;
    {
        const bool branch_taken_0x2ee2a8 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x2EE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE2A8u;
        // 0x2ee2ac: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee2a8) {
            ctx->pc = 0x2EE2C0u;
            goto label_2ee2c0;
        }
    }
    ctx->pc = 0x2EE2B0u;
    // 0x2ee2b0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2ee2b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee2b4: 0xc0bb162  jal         func_2EC588
    ctx->pc = 0x2EE2B4u;
    SET_GPR_U32(ctx, 31, 0x2EE2BCu);
    ctx->pc = 0x2EE2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE2B4u;
    // 0x2ee2b8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC588u, 0x2EE2B4u, 0x2EE2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE2BCu;
label_2ee2bc:
    // 0x2ee2bc: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x2ee2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_2ee2c0:
    // 0x2ee2c0: 0x1a000005  blez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE2C0u;
    {
        const bool branch_taken_0x2ee2c0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2EE2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE2C0u;
        // 0x2ee2c4: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee2c0) {
            ctx->pc = 0x2EE2D8u;
            goto label_2ee2d8;
        }
    }
    ctx->pc = 0x2EE2C8u;
    // 0x2ee2c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ee2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee2cc: 0xc0bb1a2  jal         func_2EC688
    ctx->pc = 0x2EE2CCu;
    SET_GPR_U32(ctx, 31, 0x2EE2D4u);
    ctx->pc = 0x2EE2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE2CCu;
    // 0x2ee2d0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC688u, 0x2EE2CCu, 0x2EE2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE2D4u;
label_2ee2d4:
    // 0x2ee2d4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x2ee2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_2ee2d8:
    // 0x2ee2d8: 0x1a800005  blez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE2D8u;
    {
        const bool branch_taken_0x2ee2d8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2EE2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE2D8u;
        // 0x2ee2dc: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee2d8) {
            ctx->pc = 0x2EE2F0u;
            goto label_2ee2f0;
        }
    }
    ctx->pc = 0x2EE2E0u;
    // 0x2ee2e0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ee2e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee2e4: 0xc0bb1a2  jal         func_2EC688
    ctx->pc = 0x2EE2E4u;
    SET_GPR_U32(ctx, 31, 0x2EE2ECu);
    ctx->pc = 0x2EE2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE2E4u;
    // 0x2ee2e8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC688u, 0x2EE2E4u, 0x2EE2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE2ECu;
label_2ee2ec:
    // 0x2ee2ec: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2ee2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_2ee2f0:
    // 0x2ee2f0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2ee2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ee2f4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2ee2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee2f8: 0xc0bb21a  jal         func_2EC868
    ctx->pc = 0x2EE2F8u;
    SET_GPR_U32(ctx, 31, 0x2EE300u);
    ctx->pc = 0x2EE2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE2F8u;
    // 0x2ee2fc: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC868u, 0x2EE2F8u, 0x2EE300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE300u;
label_2ee300:
    // 0x2ee300: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2ee300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2ee304: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x2ee304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2ee308: 0x8c54000c  lw          $s4, 0xC($v0)
    ctx->pc = 0x2ee308u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ee30c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ee30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee310: 0xc0bb200  jal         func_2EC800
    ctx->pc = 0x2EE310u;
    SET_GPR_U32(ctx, 31, 0x2EE318u);
    ctx->pc = 0x2EE314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE310u;
    // 0x2ee314: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC800u, 0x2EE310u, 0x2EE318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE318u;
label_2ee318:
    // 0x2ee318: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ee318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee31c: 0x4e1fe95  bgez        $a3, . + 4 + (-0x16B << 2)
    ctx->pc = 0x2EE31Cu;
    {
        const bool branch_taken_0x2ee31c = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x2ee31c) {
            ctx->pc = 0x2EDD74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2edd74;
        }
    }
    ctx->pc = 0x2EE324u;
    // 0x2ee324: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EE324u;
    {
        const bool branch_taken_0x2ee324 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE324u;
        // 0x2ee328: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee324) {
            ctx->pc = 0x2EE344u;
            goto label_2ee344;
        }
    }
    ctx->pc = 0x2EE32Cu;
    // 0x2ee32c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ee32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ee330: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x2ee330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x2ee334: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x2ee334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x2ee338: 0x1040fe83  beqz        $v0, . + 4 + (-0x17D << 2)
    ctx->pc = 0x2EE338u;
    {
        const bool branch_taken_0x2ee338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE338u;
        // 0x2ee33c: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee338) {
            ctx->pc = 0x2EDD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2edd48;
        }
    }
    ctx->pc = 0x2EE340u;
label_2ee340:
    // 0x2ee340: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2ee340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2ee344:
    // 0x2ee344: 0xc0bafd2  jal         func_2EBF48
    ctx->pc = 0x2EE344u;
    SET_GPR_U32(ctx, 31, 0x2EE34Cu);
    ctx->pc = 0x2EE348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE344u;
    // 0x2ee348: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF48u, 0x2EE344u, 0x2EE34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE34Cu;
label_2ee34c:
    // 0x2ee34c: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x2ee34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2ee350: 0xc0bafd2  jal         func_2EBF48
    ctx->pc = 0x2EE350u;
    SET_GPR_U32(ctx, 31, 0x2EE358u);
    ctx->pc = 0x2EE354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE350u;
    // 0x2ee354: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF48u, 0x2EE350u, 0x2EE358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE358u;
label_2ee358:
    // 0x2ee358: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x2ee358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2ee35c: 0xc0bafd2  jal         func_2EBF48
    ctx->pc = 0x2EE35Cu;
    SET_GPR_U32(ctx, 31, 0x2EE364u);
    ctx->pc = 0x2EE360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE35Cu;
    // 0x2ee360: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF48u, 0x2EE35Cu, 0x2EE364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE364u;
label_2ee364:
    // 0x2ee364: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2ee364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ee368: 0xc0bafd2  jal         func_2EBF48
    ctx->pc = 0x2EE368u;
    SET_GPR_U32(ctx, 31, 0x2EE370u);
    ctx->pc = 0x2EE36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE368u;
    // 0x2ee36c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF48u, 0x2EE368u, 0x2EE370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE370u;
label_2ee370:
    // 0x2ee370: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2ee370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ee374: 0xc0bafd2  jal         func_2EBF48
    ctx->pc = 0x2EE374u;
    SET_GPR_U32(ctx, 31, 0x2EE37Cu);
    ctx->pc = 0x2EE378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE374u;
    // 0x2ee378: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF48u, 0x2EE374u, 0x2EE37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE37Cu;
label_2ee37c:
    // 0x2ee37c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2ee37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2ee380:
    // 0x2ee380: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EE380u;
    {
        const bool branch_taken_0x2ee380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee380) {
            ctx->pc = 0x2EE384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE380u;
            // 0x2ee384: 0xac550000  sw          $s5, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE388u;
            goto label_2ee388;
        }
    }
    ctx->pc = 0x2EE388u;
label_2ee388:
    // 0x2ee388: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2ee388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2ee38c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE38Cu;
    {
        const bool branch_taken_0x2ee38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE38Cu;
        // 0x2ee390: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee38c) {
            ctx->pc = 0x2EE3A0u;
            goto label_2ee3a0;
        }
    }
    ctx->pc = 0x2EE394u;
    // 0x2ee394: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ee394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee398: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2EE398u;
    SET_GPR_U32(ctx, 31, 0x2EE3A0u);
    ctx->pc = 0x2EE39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE398u;
    // 0x2ee39c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2EE398u, 0x2EE3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE3A0u;
label_2ee3a0:
    // 0x2ee3a0: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x2ee3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2ee3a4: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x2ee3a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2ee3a8: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x2ee3a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2ee3ac: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x2ee3acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ee3b0: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x2ee3b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ee3b4: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2ee3b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ee3b8: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x2ee3b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ee3bc: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2ee3bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ee3c0: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x2ee3c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ee3c4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2ee3c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ee3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE3C8u;
        // 0x2ee3cc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE3D0u;
}
