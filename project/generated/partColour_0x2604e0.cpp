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

// Function: partColour
// Address: 0x2604e0 - 0x2606a0
void partColour_0x2604e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("partColour_0x2604e0");
#endif

    switch (ctx->pc) {
        case 0x260508u: goto label_260508;
        case 0x260548u: goto label_260548;
        case 0x260598u: goto label_260598;
        case 0x2605c8u: goto label_2605c8;
        case 0x260678u: goto label_260678;
        default: break;
    }

    ctx->pc = 0x2604e0u;

label_2604e0:
    // 0x2604e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2604e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2604e4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2604e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2604e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2604e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2604ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2604ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2604f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2604f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2604f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2604f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2604f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2604f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2604fc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2604fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260500: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x260500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x260504: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x260504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_260508:
    // 0x260508: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x260508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x26050c: 0xa32018  mult        $a0, $a1, $v1
    ctx->pc = 0x26050cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x260510: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x260510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x260514: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x260514u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x260518: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x260518u;
    {
        const bool branch_taken_0x260518 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260518u;
        // 0x26051c: 0x448821  addu        $s1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260518) {
            ctx->pc = 0x260528u;
            goto label_260528;
        }
    }
    ctx->pc = 0x260520u;
    // 0x260520: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x260520u;
    {
        const bool branch_taken_0x260520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260520u;
        // 0x260524: 0x8e2a000c  lw          $t2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260520) {
            ctx->pc = 0x26052Cu;
            goto label_26052c;
        }
    }
    ctx->pc = 0x260528u;
label_260528:
    // 0x260528: 0x8e2a0008  lw          $t2, 0x8($s1)
    ctx->pc = 0x260528u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_26052c:
    // 0x26052c: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x26052Cu;
    {
        const bool branch_taken_0x26052c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x260530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26052Cu;
        // 0x260530: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26052c) {
            ctx->pc = 0x260574u;
            goto label_260574;
        }
    }
    ctx->pc = 0x260534u;
    // 0x260534: 0x82220006  lb          $v0, 0x6($s1)
    ctx->pc = 0x260534u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x260538: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x260538u;
    {
        const bool branch_taken_0x260538 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260538u;
        // 0x26053c: 0x92240006  lbu         $a0, 0x6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260538) {
            ctx->pc = 0x26056Cu;
            goto label_26056c;
        }
    }
    ctx->pc = 0x260540u;
    // 0x260540: 0x2623002c  addiu       $v1, $s1, 0x2C
    ctx->pc = 0x260540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x260544: 0x0  nop
    ctx->pc = 0x260544u;
    // NOP
label_260548:
    // 0x260548: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x260548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x26054c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x26054cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x260550: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x260550u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x260554: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x260554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x260558: 0x0  nop
    ctx->pc = 0x260558u;
    // NOP
    // 0x26055c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26055Cu;
    {
        const bool branch_taken_0x26055c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26055c) {
            ctx->pc = 0x260548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260548;
        }
    }
    ctx->pc = 0x260564u;
    // 0x260564: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x260564u;
    {
        const bool branch_taken_0x260564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260564) {
            ctx->pc = 0x260578u;
            goto label_260578;
        }
    }
    ctx->pc = 0x26056Cu;
label_26056c:
    // 0x26056c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26056Cu;
    {
        const bool branch_taken_0x26056c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26056Cu;
        // 0x260570: 0x2623002c  addiu       $v1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26056c) {
            ctx->pc = 0x260578u;
            goto label_260578;
        }
    }
    ctx->pc = 0x260574u;
label_260574:
    // 0x260574: 0x26230014  addiu       $v1, $s1, 0x14
    ctx->pc = 0x260574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_260578:
    // 0x260578: 0x51400037  beql        $t2, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x260578u;
    {
        const bool branch_taken_0x260578 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x260578) {
            ctx->pc = 0x26057Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260578u;
            // 0x26057c: 0x82250003  lb          $a1, 0x3($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260658u;
            goto label_260658;
        }
    }
    ctx->pc = 0x260580u;
    // 0x260580: 0x8d420014  lw          $v0, 0x14($t2)
    ctx->pc = 0x260580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x260584: 0x4420034  bltzl       $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x260584u;
    {
        const bool branch_taken_0x260584 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x260584) {
            ctx->pc = 0x260588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260584u;
            // 0x260588: 0x82250003  lb          $a1, 0x3($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260658u;
            goto label_260658;
        }
    }
    ctx->pc = 0x26058Cu;
    // 0x26058c: 0x8c79000c  lw          $t9, 0xC($v1)
    ctx->pc = 0x26058cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x260590: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x260590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x260594: 0x0  nop
    ctx->pc = 0x260594u;
    // NOP
label_260598:
    // 0x260598: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x260598u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26059c: 0x8d430010  lw          $v1, 0x10($t2)
    ctx->pc = 0x26059cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x2605a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2605a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2605a4: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2605A4u;
    {
        const bool branch_taken_0x2605a4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2605A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2605A4u;
        // 0x2605a8: 0x322c021  addu        $t8, $t9, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2605a4) {
            ctx->pc = 0x260640u;
            goto label_260640;
        }
    }
    ctx->pc = 0x2605ACu;
    // 0x2605ac: 0x107e02  srl         $t7, $s0, 24
    ctx->pc = 0x2605acu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x2605b0: 0x107402  srl         $t6, $s0, 16
    ctx->pc = 0x2605b0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x2605b4: 0x106a02  srl         $t5, $s0, 8
    ctx->pc = 0x2605b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x2605b8: 0x320c00ff  andi        $t4, $s0, 0xFF
    ctx->pc = 0x2605b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2605bc: 0x254b0018  addiu       $t3, $t2, 0x18
    ctx->pc = 0x2605bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 24));
    // 0x2605c0: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x2605c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2605c4: 0x31a700ff  andi        $a3, $t5, 0xFF
    ctx->pc = 0x2605c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
label_2605c8:
    // 0x2605c8: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x2605c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x2605cc: 0x31c800ff  andi        $t0, $t6, 0xFF
    ctx->pc = 0x2605ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x2605d0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2605d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2605d4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2605d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2605d8: 0x31402  srl         $v0, $v1, 16
    ctx->pc = 0x2605d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x2605dc: 0x32e02  srl         $a1, $v1, 24
    ctx->pc = 0x2605dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x2605e0: 0x32202  srl         $a0, $v1, 8
    ctx->pc = 0x2605e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2605e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2605e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2605e8: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x2605e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2605ec: 0x70ac2818  mult1       $a1, $a1, $t4
    ctx->pc = 0x2605ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2605f0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2605f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2605f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2605f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2605f8: 0x882018  mult        $a0, $a0, $t0
    ctx->pc = 0x2605f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2605fc: 0x706f1818  mult1       $v1, $v1, $t7
    ctx->pc = 0x2605fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x260600: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x260600u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x260604: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x260604u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x260608: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x260608u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x26060c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x26060cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x260610: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x260610u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x260614: 0x3084ff00  andi        $a0, $a0, 0xFF00
    ctx->pc = 0x260614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x260618: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x260618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x26061c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x26061cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x260620: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x260620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x260624: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x260624u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x260628: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x260628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x26062c: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x26062cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x260630: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x260630u;
    {
        const bool branch_taken_0x260630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260630u;
        // 0x260634: 0x93080  sll         $a2, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260630) {
            ctx->pc = 0x2605C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2605c8;
        }
    }
    ctx->pc = 0x260638u;
    // 0x260638: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x260638u;
    {
        const bool branch_taken_0x260638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260638u;
        // 0x26063c: 0x160502d  daddu       $t2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260638) {
            ctx->pc = 0x260648u;
            goto label_260648;
        }
    }
    ctx->pc = 0x260640u;
label_260640:
    // 0x260640: 0x254b0018  addiu       $t3, $t2, 0x18
    ctx->pc = 0x260640u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 24));
    // 0x260644: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x260644u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_260648:
    // 0x260648: 0x8d420014  lw          $v0, 0x14($t2)
    ctx->pc = 0x260648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x26064c: 0x443ffd2  bgezl       $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x26064Cu;
    {
        const bool branch_taken_0x26064c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26064c) {
            ctx->pc = 0x260650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26064Cu;
            // 0x260650: 0x8d42000c  lw          $v0, 0xC($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260598;
        }
    }
    ctx->pc = 0x260654u;
    // 0x260654: 0x82250003  lb          $a1, 0x3($s1)
    ctx->pc = 0x260654u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_260658:
    // 0x260658: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x260658u;
    {
        const bool branch_taken_0x260658 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x26065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260658u;
        // 0x26065c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260658) {
            ctx->pc = 0x260678u;
            goto label_260678;
        }
    }
    ctx->pc = 0x260660u;
    // 0x260660: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x260660u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x260664: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260664u;
    {
        const bool branch_taken_0x260664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x260668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260664u;
        // 0x260668: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260664) {
            ctx->pc = 0x260678u;
            goto label_260678;
        }
    }
    ctx->pc = 0x26066Cu;
    // 0x26066c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x26066cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260670: 0xc098138  jal         func_2604E0
    ctx->pc = 0x260670u;
    SET_GPR_U32(ctx, 31, 0x260678u);
    ctx->pc = 0x260674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260670u;
    // 0x260674: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2604E0u;
    goto label_2604e0;
    ctx->pc = 0x260678u;
label_260678:
    // 0x260678: 0x82250004  lb          $a1, 0x4($s1)
    ctx->pc = 0x260678u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26067c: 0x4a3ffa2  bgezl       $a1, . + 4 + (-0x5E << 2)
    ctx->pc = 0x26067Cu;
    {
        const bool branch_taken_0x26067c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x26067c) {
            ctx->pc = 0x260680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26067Cu;
            // 0x260680: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260508;
        }
    }
    ctx->pc = 0x260684u;
    // 0x260684: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x260684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x260688: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x260688u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26068c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26068cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260690: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x260690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260698: 0x3e00008  jr          $ra
    ctx->pc = 0x260698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260698u;
        // 0x26069c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2606A0u;
}
