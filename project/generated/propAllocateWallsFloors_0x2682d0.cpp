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

// Function: propAllocateWallsFloors
// Address: 0x2682d0 - 0x2684b4
void propAllocateWallsFloors_0x2682d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propAllocateWallsFloors_0x2682d0");
#endif

    switch (ctx->pc) {
        case 0x268340u: goto label_268340;
        case 0x268378u: goto label_268378;
        case 0x2683d8u: goto label_2683d8;
        case 0x268408u: goto label_268408;
        case 0x268450u: goto label_268450;
        default: break;
    }

    ctx->pc = 0x2682d0u;

    // 0x2682d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2682d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2682d4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2682d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2682d8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2682d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2682dc: 0x2463ebd8  addiu       $v1, $v1, -0x1428
    ctx->pc = 0x2682dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962136));
    // 0x2682e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2682e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2682e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2682e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2682e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2682e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2682ec: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2682ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2682f0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2682f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2682f4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2682f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2682f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2682f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2682fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2682fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x268300: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x268300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x268304: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x268304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x268308: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x268308u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26830c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x26830cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x268310: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268310u;
    {
        const bool branch_taken_0x268310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x268314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268310u;
        // 0x268314: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268310) {
            ctx->pc = 0x268324u;
            goto label_268324;
        }
    }
    ctx->pc = 0x268318u;
    // 0x268318: 0x8ec80008  lw          $t0, 0x8($s6)
    ctx->pc = 0x268318u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x26831c: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26831Cu;
    {
        const bool branch_taken_0x26831c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x268320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26831Cu;
        // 0x268320: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26831c) {
            ctx->pc = 0x268330u;
            goto label_268330;
        }
    }
    ctx->pc = 0x268324u;
label_268324:
    // 0x268324: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x268324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
    // 0x268328: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x268328u;
    {
        const bool branch_taken_0x268328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268328u;
        // 0x26832c: 0xae0001e4  sw          $zero, 0x1E4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268328) {
            ctx->pc = 0x26848Cu;
            goto label_26848c;
        }
    }
    ctx->pc = 0x268330u;
label_268330:
    // 0x268330: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x268330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x268334: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x268334u;
    {
        const bool branch_taken_0x268334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268334u;
        // 0x268338: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268334) {
            ctx->pc = 0x268364u;
            goto label_268364;
        }
    }
    ctx->pc = 0x26833Cu;
    // 0x26833c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26833cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_268340:
    // 0x268340: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x268340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x268344: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x268344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x268348: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x268348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26834c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26834cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x268350: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x268350u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268354: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x268354u;
    {
        const bool branch_taken_0x268354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268354) {
            ctx->pc = 0x268340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268340;
        }
    }
    ctx->pc = 0x26835Cu;
    // 0x26835c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26835Cu;
    {
        const bool branch_taken_0x26835c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26835Cu;
        // 0x268360: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26835c) {
            ctx->pc = 0x26836Cu;
            goto label_26836c;
        }
    }
    ctx->pc = 0x268364u;
label_268364:
    // 0x268364: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x268364u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268368: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x268368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26836c:
    // 0x26836c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26836Cu;
    {
        const bool branch_taken_0x26836c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26836Cu;
        // 0x268370: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26836c) {
            ctx->pc = 0x2683A0u;
            goto label_2683a0;
        }
    }
    ctx->pc = 0x268374u;
    // 0x268374: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x268374u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_268378:
    // 0x268378: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x268378u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26837c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26837cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268380: 0x13a080  sll         $s4, $s3, 2
    ctx->pc = 0x268380u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x268384: 0x2881021  addu        $v0, $s4, $t0
    ctx->pc = 0x268384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x268388: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x268388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x26838c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26838cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268390: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x268390u;
    {
        const bool branch_taken_0x268390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268390) {
            ctx->pc = 0x268378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268378;
        }
    }
    ctx->pc = 0x268398u;
    // 0x268398: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x268398u;
    {
        const bool branch_taken_0x268398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268398u;
        // 0x26839c: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268398) {
            ctx->pc = 0x2683ACu;
            goto label_2683ac;
        }
    }
    ctx->pc = 0x2683A0u;
label_2683a0:
    // 0x2683a0: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x2683a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2683a4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2683a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2683a8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2683a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2683ac:
    // 0x2683ac: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x2683acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2683b0: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x2683b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2683b4: 0x72252818  mult1       $a1, $s1, $a1
    ctx->pc = 0x2683b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2683b8: 0x26640002  addiu       $a0, $s3, 0x2
    ctx->pc = 0x2683b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x2683bc: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2683bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2683c0: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x2683c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2683c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2683c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2683c8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2683c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2683cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2683ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2683d0: 0xc099b6a  jal         func_266DA8
    ctx->pc = 0x2683D0u;
    SET_GPR_U32(ctx, 31, 0x2683D8u);
    ctx->pc = 0x2683D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2683D0u;
    // 0x2683d4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266DA8u, 0x2683D0u, 0x2683D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2683D8u;
label_2683d8:
    // 0x2683d8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2683d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2683dc: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x2683dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2683e0: 0xae0701e4  sw          $a3, 0x1E4($s0)
    ctx->pc = 0x2683e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 7));
    // 0x2683e4: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x2683e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2683e8: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x2683e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2683ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2683ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2683f0: 0xae0701e0  sw          $a3, 0x1E0($s0)
    ctx->pc = 0x2683f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 7));
    // 0x2683f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2683f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2683f8: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2683F8u;
    {
        const bool branch_taken_0x2683f8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2683FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2683F8u;
        // 0x2683fc: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2683f8) {
            ctx->pc = 0x268430u;
            goto label_268430;
        }
    }
    ctx->pc = 0x268400u;
    // 0x268400: 0x8e0901e0  lw          $t1, 0x1E0($s0)
    ctx->pc = 0x268400u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x268404: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x268404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268408:
    // 0x268408: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x268408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x26840c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26840cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x268410: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x268410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x268414: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x268414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x268418: 0xd1182a  slt         $v1, $a2, $s1
    ctx->pc = 0x268418u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x26841c: 0x24e70024  addiu       $a3, $a3, 0x24
    ctx->pc = 0x26841cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
    // 0x268420: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x268420u;
    {
        const bool branch_taken_0x268420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x268420) {
            ctx->pc = 0x268408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268408;
        }
    }
    ctx->pc = 0x268428u;
    // 0x268428: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x268428u;
    {
        const bool branch_taken_0x268428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268428u;
        // 0x26842c: 0x2a41021  addu        $v0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268428) {
            ctx->pc = 0x26843Cu;
            goto label_26843c;
        }
    }
    ctx->pc = 0x268430u;
label_268430:
    // 0x268430: 0x8e0901e0  lw          $t1, 0x1E0($s0)
    ctx->pc = 0x268430u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x268434: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x268434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268438: 0x2a41021  addu        $v0, $s5, $a0
    ctx->pc = 0x268438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_26843c:
    // 0x26843c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26843cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268440: 0x1a600010  blez        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x268440u;
    {
        const bool branch_taken_0x268440 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x268444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268440u;
        // 0x268444: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268440) {
            ctx->pc = 0x268484u;
            goto label_268484;
        }
    }
    ctx->pc = 0x268448u;
    // 0x268448: 0x8ec80008  lw          $t0, 0x8($s6)
    ctx->pc = 0x268448u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x26844c: 0x0  nop
    ctx->pc = 0x26844cu;
    // NOP
label_268450:
    // 0x268450: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x268450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x268454: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x268454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x268458: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x268458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x26845c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x26845cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x268460: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x268460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x268464: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x268464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x268468: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x268468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x26846c: 0xd3182a  slt         $v1, $a2, $s3
    ctx->pc = 0x26846cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x268470: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x268470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x268474: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x268474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x268478: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x268478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x26847c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x26847Cu;
    {
        const bool branch_taken_0x26847c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x268480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26847Cu;
        // 0x268480: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26847c) {
            ctx->pc = 0x268450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268450;
        }
    }
    ctx->pc = 0x268484u;
label_268484:
    // 0x268484: 0x2891021  addu        $v0, $s4, $t1
    ctx->pc = 0x268484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x268488: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x268488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_26848c:
    // 0x26848c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x26848cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x268490: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x268490u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x268494: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x268494u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x268498: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x268498u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26849c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26849cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2684a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2684a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2684a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2684a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2684a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2684a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2684ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2684ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2684B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684ACu;
        // 0x2684b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2684ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2684B4u;
}
