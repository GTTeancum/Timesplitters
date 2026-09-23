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

// Function: menutick
// Address: 0x2062c0 - 0x206578
void menutick_0x2062c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menutick_0x2062c0");
#endif

    switch (ctx->pc) {
        case 0x2062f4u: goto label_2062f4;
        case 0x20631cu: goto label_20631c;
        case 0x206360u: goto label_206360;
        case 0x20648cu: goto label_20648c;
        case 0x2064a4u: goto label_2064a4;
        case 0x2064ccu: goto label_2064cc;
        case 0x2064ecu: goto label_2064ec;
        case 0x206544u: goto label_206544;
        default: break;
    }

    ctx->pc = 0x2062c0u;

    // 0x2062c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2062c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2062c4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2062c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2062c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2062c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2062cc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2062ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2062d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2062d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2062d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2062d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2062d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2062dc: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x2062dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2062e0: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x2062E0u;
    {
        const bool branch_taken_0x2062e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2062E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062E0u;
        // 0x2062e4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2062e0) {
            ctx->pc = 0x20655Cu;
            goto label_20655c;
        }
    }
    ctx->pc = 0x2062E8u;
    // 0x2062e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2062e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062ec: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x2062ECu;
    SET_GPR_U32(ctx, 31, 0x2062F4u);
    ctx->pc = 0x2062F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2062ECu;
    // 0x2062f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x2062ECu, 0x2062F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2062F4u;
label_2062f4:
    // 0x2062f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2062f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062f8: 0x12200098  beqz        $s1, . + 4 + (0x98 << 2)
    ctx->pc = 0x2062F8u;
    {
        const bool branch_taken_0x2062f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2062FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062F8u;
        // 0x2062fc: 0x8f85a004  lw          $a1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2062f8) {
            ctx->pc = 0x20655Cu;
            goto label_20655c;
        }
    }
    ctx->pc = 0x206300u;
    // 0x206300: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x206300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x206304: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x206304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x206308: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x206308u;
    {
        const bool branch_taken_0x206308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206308u;
        // 0x20630c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206308) {
            ctx->pc = 0x206318u;
            goto label_206318;
        }
    }
    ctx->pc = 0x206310u;
    // 0x206310: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x206310u;
    {
        const bool branch_taken_0x206310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206310u;
        // 0x206314: 0x96220010  lhu         $v0, 0x10($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206310) {
            ctx->pc = 0x206348u;
            goto label_206348;
        }
    }
    ctx->pc = 0x206318u;
label_206318:
    // 0x206318: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x206318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20631c:
    // 0x20631c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x20631cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x206320: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x206320u;
    {
        const bool branch_taken_0x206320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206320u;
        // 0x206324: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206320) {
            ctx->pc = 0x206354u;
            goto label_206354;
        }
    }
    ctx->pc = 0x206328u;
    // 0x206328: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x206328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x20632c: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x20632cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x206330: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x206330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x206334: 0x5060fff9  beql        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x206334u;
    {
        const bool branch_taken_0x206334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x206334) {
            ctx->pc = 0x206338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206334u;
            // 0x206338: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20631Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20631c;
        }
    }
    ctx->pc = 0x20633Cu;
    // 0x20633c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x20633cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x206340: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x206340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x206344: 0x94420010  lhu         $v0, 0x10($v0)
    ctx->pc = 0x206344u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_206348:
    // 0x206348: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x206348u;
    {
        const bool branch_taken_0x206348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206348u;
        // 0x20634c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206348) {
            ctx->pc = 0x20631Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20631c;
        }
    }
    ctx->pc = 0x206350u;
    // 0x206350: 0xa6420004  sh          $v0, 0x4($s2)
    ctx->pc = 0x206350u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 2));
label_206354:
    // 0x206354: 0x96450004  lhu         $a1, 0x4($s2)
    ctx->pc = 0x206354u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x206358: 0xc08b7b2  jal         func_22DEC8
    ctx->pc = 0x206358u;
    SET_GPR_U32(ctx, 31, 0x206360u);
    ctx->pc = 0x20635Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206358u;
    // 0x20635c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DEC8u, 0x206358u, 0x206360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206360u;
label_206360:
    // 0x206360: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x206360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206364: 0x10c00026  beqz        $a2, . + 4 + (0x26 << 2)
    ctx->pc = 0x206364u;
    {
        const bool branch_taken_0x206364 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x206368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206364u;
        // 0x206368: 0x8f83b234  lw          $v1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206364) {
            ctx->pc = 0x206400u;
            goto label_206400;
        }
    }
    ctx->pc = 0x20636Cu;
    // 0x20636c: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x20636cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x206370: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x206370u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x206374: 0x24c8000c  addiu       $t0, $a2, 0xC
    ctx->pc = 0x206374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x206378: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x206378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20637c: 0x23943  sra         $a3, $v0, 5
    ctx->pc = 0x20637cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 5));
    // 0x206380: 0x1042821  addu        $a1, $t0, $a0
    ctx->pc = 0x206380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x206384: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x206384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x206388: 0xe22023  subu        $a0, $a3, $v0
    ctx->pc = 0x206388u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x20638c: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x20638cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x206390: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x206390u;
    {
        const bool branch_taken_0x206390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x206394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206390u;
        // 0x206394: 0x24e3fffe  addiu       $v1, $a3, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206390) {
            ctx->pc = 0x2063ACu;
            goto label_2063ac;
        }
    }
    ctx->pc = 0x206398u;
    // 0x206398: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x206398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20639c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x20639cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2063a0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2063a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2063a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2063A4u;
    {
        const bool branch_taken_0x2063a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2063A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063A4u;
        // 0x2063a8: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2063a4) {
            ctx->pc = 0x2063D0u;
            goto label_2063d0;
        }
    }
    ctx->pc = 0x2063ACu;
label_2063ac:
    // 0x2063ac: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x2063acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2063b0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2063b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2063b4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2063b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2063b8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2063B8u;
    {
        const bool branch_taken_0x2063b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2063b8) {
            ctx->pc = 0x2063BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2063B8u;
            // 0x2063bc: 0x94c20000  lhu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2063D4u;
            goto label_2063d4;
        }
    }
    ctx->pc = 0x2063C0u;
    // 0x2063c0: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x2063c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2063c4: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x2063c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2063c8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2063c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2063cc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2063ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_2063d0:
    // 0x2063d0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2063d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2063d4:
    // 0x2063d4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2063d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2063d8: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x2063d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2063dc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2063DCu;
    {
        const bool branch_taken_0x2063dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2063E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063DCu;
        // 0x2063e0: 0x8f85a004  lw          $a1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2063dc) {
            ctx->pc = 0x206404u;
            goto label_206404;
        }
    }
    ctx->pc = 0x2063E4u;
    // 0x2063e4: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x2063e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2063e8: 0x90c50002  lbu         $a1, 0x2($a2)
    ctx->pc = 0x2063e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2063ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2063ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2063f0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2063f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2063f4: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2063f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2063f8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2063f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2063fc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2063fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_206400:
    // 0x206400: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x206400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_206404:
    // 0x206404: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x206404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x206408: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x206408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x20640c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x20640Cu;
    {
        const bool branch_taken_0x20640c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20640Cu;
        // 0x206410: 0x3c030044  lui         $v1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20640c) {
            ctx->pc = 0x206474u;
            goto label_206474;
        }
    }
    ctx->pc = 0x206414u;
    // 0x206414: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x206414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x206418: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x206418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x20641c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20641cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x206420: 0x54440015  bnel        $v0, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x206420u;
    {
        const bool branch_taken_0x206420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x206420) {
            ctx->pc = 0x206424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206420u;
            // 0x206424: 0x9622000a  lhu         $v0, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206478u;
            goto label_206478;
        }
    }
    ctx->pc = 0x206428u;
    // 0x206428: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x206428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x20642c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x20642cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x206430: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x206430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x206434: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x206434u;
    {
        const bool branch_taken_0x206434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206434u;
        // 0x206438: 0x8ca30010  lw          $v1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206434) {
            ctx->pc = 0x206444u;
            goto label_206444;
        }
    }
    ctx->pc = 0x20643Cu;
    // 0x20643c: 0x2402028f  addiu       $v0, $zero, 0x28F
    ctx->pc = 0x20643cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 655));
    // 0x206440: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x206440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_206444:
    // 0x206444: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x206444u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x206448: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x206448u;
    {
        const bool branch_taken_0x206448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x206448) {
            ctx->pc = 0x20644Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206448u;
            // 0x20644c: 0x9622000a  lhu         $v0, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206478u;
            goto label_206478;
        }
    }
    ctx->pc = 0x206450u;
    // 0x206450: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x206450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x206454: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x206454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x206458: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x206458u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20645c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x20645cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x206460: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x206460u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206464: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x206464u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206468: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20646c: 0x808b0c2  j           func_22C308
    ctx->pc = 0x20646Cu;
    ctx->pc = 0x206470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20646Cu;
    // 0x206470: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C308u;
    gvSetValue_0x22c308(rdram, ctx, runtime); return;
    ctx->pc = 0x206474u;
label_206474:
    // 0x206474: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x206474u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_206478:
    // 0x206478: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x206478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x20647c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x20647Cu;
    {
        const bool branch_taken_0x20647c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20647c) {
            ctx->pc = 0x20653Cu;
            goto label_20653c;
        }
    }
    ctx->pc = 0x206484u;
    // 0x206484: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x206484u;
    SET_GPR_U32(ctx, 31, 0x20648Cu);
    ctx->pc = 0x206488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206484u;
    // 0x206488: 0x8f84a008  lw          $a0, -0x5FF8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x206484u, 0x20648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20648Cu;
label_20648c:
    // 0x20648c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x20648cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x206490: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x206490u;
    {
        const bool branch_taken_0x206490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206490) {
            ctx->pc = 0x206494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206490u;
            // 0x206494: 0x9622000a  lhu         $v0, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2064D8u;
            goto label_2064d8;
        }
    }
    ctx->pc = 0x206498u;
    // 0x206498: 0x96450004  lhu         $a1, 0x4($s2)
    ctx->pc = 0x206498u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x20649c: 0xc08b7b2  jal         func_22DEC8
    ctx->pc = 0x20649Cu;
    SET_GPR_U32(ctx, 31, 0x2064A4u);
    ctx->pc = 0x2064A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20649Cu;
    // 0x2064a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DEC8u, 0x20649Cu, 0x2064A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064A4u;
label_2064a4:
    // 0x2064a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2064a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2064a8: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2064A8u;
    {
        const bool branch_taken_0x2064a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2064a8) {
            ctx->pc = 0x2064ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2064A8u;
            // 0x2064ac: 0x9622000a  lhu         $v0, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2064D8u;
            goto label_2064d8;
        }
    }
    ctx->pc = 0x2064B0u;
    // 0x2064b0: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x2064b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2064b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2064b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2064b8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2064B8u;
    {
        const bool branch_taken_0x2064b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2064b8) {
            ctx->pc = 0x2064BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2064B8u;
            // 0x2064bc: 0x9622000a  lhu         $v0, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2064D8u;
            goto label_2064d8;
        }
    }
    ctx->pc = 0x2064C0u;
    // 0x2064c0: 0x96450004  lhu         $a1, 0x4($s2)
    ctx->pc = 0x2064c0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2064c4: 0xc08b77e  jal         func_22DDF8
    ctx->pc = 0x2064C4u;
    SET_GPR_U32(ctx, 31, 0x2064CCu);
    ctx->pc = 0x2064C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2064C4u;
    // 0x2064c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DDF8u, 0x2064C4u, 0x2064CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064CCu;
label_2064cc:
    // 0x2064cc: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x2064ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2064d0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2064D0u;
    {
        const bool branch_taken_0x2064d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2064D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064D0u;
        // 0x2064d4: 0xa602000a  sh          $v0, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2064d0) {
            ctx->pc = 0x20655Cu;
            goto label_20655c;
        }
    }
    ctx->pc = 0x2064D8u;
label_2064d8:
    // 0x2064d8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2064d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2064dc: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2064DCu;
    {
        const bool branch_taken_0x2064dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2064dc) {
            ctx->pc = 0x20653Cu;
            goto label_20653c;
        }
    }
    ctx->pc = 0x2064E4u;
    // 0x2064e4: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x2064E4u;
    SET_GPR_U32(ctx, 31, 0x2064ECu);
    ctx->pc = 0x2064E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2064E4u;
    // 0x2064e8: 0x8f84a008  lw          $a0, -0x5FF8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x2064E4u, 0x2064ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064ECu;
label_2064ec:
    // 0x2064ec: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2064ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2064f0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2064F0u;
    {
        const bool branch_taken_0x2064f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2064f0) {
            ctx->pc = 0x20653Cu;
            goto label_20653c;
        }
    }
    ctx->pc = 0x2064F8u;
    // 0x2064f8: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x2064f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2064fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2064fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x206500: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x206500u;
    {
        const bool branch_taken_0x206500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206500u;
        // 0x206504: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206500) {
            ctx->pc = 0x20653Cu;
            goto label_20653c;
        }
    }
    ctx->pc = 0x206508u;
    // 0x206508: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x206508u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20650c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20650Cu;
    {
        const bool branch_taken_0x20650c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x206510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20650Cu;
        // 0x206510: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20650c) {
            ctx->pc = 0x206550u;
            goto label_206550;
        }
    }
    ctx->pc = 0x206514u;
    // 0x206514: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x206514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x206518: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x206518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x20651c: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x20651cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x206520: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x206520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x206524: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x206524u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x206528: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x206528u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20652c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20652cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206530: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206534: 0x808b3ac  j           func_22CEB0
    ctx->pc = 0x206534u;
    ctx->pc = 0x206538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206534u;
    // 0x206538: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    frontPageSet_0x22ceb0(rdram, ctx, runtime); return;
    ctx->pc = 0x20653Cu;
label_20653c:
    // 0x20653c: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x20653Cu;
    SET_GPR_U32(ctx, 31, 0x206544u);
    ctx->pc = 0x206540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20653Cu;
    // 0x206540: 0x8f84a008  lw          $a0, -0x5FF8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x20653Cu, 0x206544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206544u;
label_206544:
    // 0x206544: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x206544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x206548: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x206548u;
    {
        const bool branch_taken_0x206548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206548u;
        // 0x20654c: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206548) {
            ctx->pc = 0x20655Cu;
            goto label_20655c;
        }
    }
    ctx->pc = 0x206550u;
label_206550:
    // 0x206550: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x206550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x206554: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x206554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x206558: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x206558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_20655c:
    // 0x20655c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20655cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x206560: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x206560u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x206564: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x206564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206568: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x206568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20656c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20656cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206570: 0x3e00008  jr          $ra
    ctx->pc = 0x206570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206570u;
        // 0x206574: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206578u;
}
