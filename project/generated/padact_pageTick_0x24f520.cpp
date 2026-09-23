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

// Function: padact_pageTick
// Address: 0x24f520 - 0x24fac0
void padact_pageTick_0x24f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("padact_pageTick_0x24f520");
#endif

    switch (ctx->pc) {
        case 0x24f558u: goto label_24f558;
        case 0x24f56cu: goto label_24f56c;
        case 0x24f590u: goto label_24f590;
        case 0x24f5e0u: goto label_24f5e0;
        case 0x24f608u: goto label_24f608;
        case 0x24f630u: goto label_24f630;
        case 0x24f670u: goto label_24f670;
        case 0x24f698u: goto label_24f698;
        case 0x24f6a8u: goto label_24f6a8;
        case 0x24f6d8u: goto label_24f6d8;
        case 0x24f6f8u: goto label_24f6f8;
        case 0x24f714u: goto label_24f714;
        case 0x24f7c0u: goto label_24f7c0;
        case 0x24f7dcu: goto label_24f7dc;
        case 0x24f7f8u: goto label_24f7f8;
        case 0x24f800u: goto label_24f800;
        case 0x24f814u: goto label_24f814;
        case 0x24f83cu: goto label_24f83c;
        case 0x24f850u: goto label_24f850;
        case 0x24f864u: goto label_24f864;
        case 0x24f8d0u: goto label_24f8d0;
        case 0x24f918u: goto label_24f918;
        case 0x24f92cu: goto label_24f92c;
        case 0x24f944u: goto label_24f944;
        case 0x24f980u: goto label_24f980;
        case 0x24f99cu: goto label_24f99c;
        case 0x24f9b0u: goto label_24f9b0;
        case 0x24f9c8u: goto label_24f9c8;
        case 0x24f9d8u: goto label_24f9d8;
        case 0x24fa08u: goto label_24fa08;
        case 0x24fa24u: goto label_24fa24;
        case 0x24fa3cu: goto label_24fa3c;
        case 0x24fa8cu: goto label_24fa8c;
        default: break;
    }

    ctx->pc = 0x24f520u;

    // 0x24f520: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x24f520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x24f524: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x24f524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x24f528: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x24f528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x24f52c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24f52cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f530: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x24f530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x24f534: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24f534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f538: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x24f538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x24f53c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x24f53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x24f540: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x24f540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x24f544: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x24f544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x24f548: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x24f548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x24f54c: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x24f54cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x24f550: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24F550u;
    SET_GPR_U32(ctx, 31, 0x24F558u);
    ctx->pc = 0x24F554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F550u;
    // 0x24f554: 0xa782a1e0  sh          $v0, -0x5E20($gp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294943200), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24F550u, 0x24F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F558u;
label_24f558:
    // 0x24f558: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x24f558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x24f55c: 0x1440014f  bnez        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x24F55Cu;
    {
        const bool branch_taken_0x24f55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F55Cu;
        // 0x24f560: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f55c) {
            ctx->pc = 0x24FA9Cu;
            goto label_24fa9c;
        }
    }
    ctx->pc = 0x24F564u;
    // 0x24f564: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24F564u;
    SET_GPR_U32(ctx, 31, 0x24F56Cu);
    ctx->pc = 0x24F568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F564u;
    // 0x24f568: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24F564u, 0x24F56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F56Cu;
label_24f56c:
    // 0x24f56c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x24f56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x24f570: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x24F570u;
    {
        const bool branch_taken_0x24f570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F570u;
        // 0x24f574: 0x8f82a220  lw          $v0, -0x5DE0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f570) {
            ctx->pc = 0x24F6A0u;
            goto label_24f6a0;
        }
    }
    ctx->pc = 0x24F578u;
    // 0x24f578: 0x10400125  beqz        $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x24F578u;
    {
        const bool branch_taken_0x24f578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F578u;
        // 0x24f57c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f578) {
            ctx->pc = 0x24FA10u;
            goto label_24fa10;
        }
    }
    ctx->pc = 0x24F580u;
    // 0x24f580: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24f580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f584: 0x8f84a20c  lw          $a0, -0x5DF4($gp)
    ctx->pc = 0x24f584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943244)));
    // 0x24f588: 0xc0922e6  jal         func_248B98
    ctx->pc = 0x24F588u;
    SET_GPR_U32(ctx, 31, 0x24F590u);
    ctx->pc = 0x24F58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F588u;
    // 0x24f58c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248B98u, 0x24F588u, 0x24F590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F590u;
label_24f590:
    // 0x24f590: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24f590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f594: 0x10a0011f  beqz        $a1, . + 4 + (0x11F << 2)
    ctx->pc = 0x24F594u;
    {
        const bool branch_taken_0x24f594 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F594u;
        // 0x24f598: 0x3c160035  lui         $s6, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f594) {
            ctx->pc = 0x24FA14u;
            goto label_24fa14;
        }
    }
    ctx->pc = 0x24F59Cu;
    // 0x24f59c: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x24f59cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x24f5a0: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x24f5a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x24f5a4: 0x1040011b  beqz        $v0, . + 4 + (0x11B << 2)
    ctx->pc = 0x24F5A4u;
    {
        const bool branch_taken_0x24f5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5A4u;
        // 0x24f5a8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f5a4) {
            ctx->pc = 0x24FA14u;
            goto label_24fa14;
        }
    }
    ctx->pc = 0x24F5ACu;
    // 0x24f5ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24f5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24f5b0: 0x24422260  addiu       $v0, $v0, 0x2260
    ctx->pc = 0x24f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8800));
    // 0x24f5b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f5b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24f5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f5bc: 0x800008  jr          $a0
    ctx->pc = 0x24F5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24F5C4u: goto label_24f5c4;
            case 0x24F5E8u: goto label_24f5e8;
            case 0x24F610u: goto label_24f610;
            case 0x24F638u: goto label_24f638;
            case 0x24F640u: goto label_24f640;
            case 0x24F650u: goto label_24f650;
            case 0x24F678u: goto label_24f678;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F5BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24F5C4u;
label_24f5c4:
    // 0x24f5c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24f5c8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x24f5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x24f5cc: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x24f5ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x24f5d0: 0x24846f38  addiu       $a0, $a0, 0x6F38
    ctx->pc = 0x24f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28472));
    // 0x24f5d4: 0x3c160035  lui         $s6, 0x35
    ctx->pc = 0x24f5d4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)53 << 16));
    // 0x24f5d8: 0xc08b0c2  jal         func_22C308
    ctx->pc = 0x24F5D8u;
    SET_GPR_U32(ctx, 31, 0x24F5E0u);
    ctx->pc = 0x24F5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F5D8u;
    // 0x24f5dc: 0x94a50002  lhu         $a1, 0x2($a1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C308u, 0x24F5D8u, 0x24F5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F5E0u;
label_24f5e0:
    // 0x24f5e0: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x24F5E0u;
    {
        const bool branch_taken_0x24f5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5E0u;
        // 0x24f5e4: 0x26d07040  addiu       $s0, $s6, 0x7040 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 28736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f5e0) {
            ctx->pc = 0x24FA18u;
            goto label_24fa18;
        }
    }
    ctx->pc = 0x24F5E8u;
label_24f5e8:
    // 0x24f5e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24f5ec: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x24f5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x24f5f0: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x24f5f0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x24f5f4: 0x24846f88  addiu       $a0, $a0, 0x6F88
    ctx->pc = 0x24f5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28552));
    // 0x24f5f8: 0x3c160035  lui         $s6, 0x35
    ctx->pc = 0x24f5f8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)53 << 16));
    // 0x24f5fc: 0x94a50002  lhu         $a1, 0x2($a1)
    ctx->pc = 0x24f5fcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x24f600: 0xc08b0c2  jal         func_22C308
    ctx->pc = 0x24F600u;
    SET_GPR_U32(ctx, 31, 0x24F608u);
    ctx->pc = 0x24F604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F600u;
    // 0x24f604: 0x24a5fffb  addiu       $a1, $a1, -0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C308u, 0x24F600u, 0x24F608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F608u;
label_24f608:
    // 0x24f608: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x24F608u;
    {
        const bool branch_taken_0x24f608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F608u;
        // 0x24f60c: 0x26d07040  addiu       $s0, $s6, 0x7040 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 28736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f608) {
            ctx->pc = 0x24FA18u;
            goto label_24fa18;
        }
    }
    ctx->pc = 0x24F610u;
label_24f610:
    // 0x24f610: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x24f610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24f614: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x24f614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x24f618: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x24f618u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x24f61c: 0x24846ff0  addiu       $a0, $a0, 0x6FF0
    ctx->pc = 0x24f61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28656));
    // 0x24f620: 0x3c160035  lui         $s6, 0x35
    ctx->pc = 0x24f620u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)53 << 16));
    // 0x24f624: 0x94a50002  lhu         $a1, 0x2($a1)
    ctx->pc = 0x24f624u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x24f628: 0xc08b0c2  jal         func_22C308
    ctx->pc = 0x24F628u;
    SET_GPR_U32(ctx, 31, 0x24F630u);
    ctx->pc = 0x24F62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F628u;
    // 0x24f62c: 0x24a5fff8  addiu       $a1, $a1, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C308u, 0x24F628u, 0x24F630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F630u;
label_24f630:
    // 0x24f630: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x24F630u;
    {
        const bool branch_taken_0x24f630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F630u;
        // 0x24f634: 0x26d07040  addiu       $s0, $s6, 0x7040 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 28736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f630) {
            ctx->pc = 0x24FA18u;
            goto label_24fa18;
        }
    }
    ctx->pc = 0x24F638u;
label_24f638:
    // 0x24f638: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24F638u;
    {
        const bool branch_taken_0x24f638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F638u;
        // 0x24f63c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f638) {
            ctx->pc = 0x24F644u;
            goto label_24f644;
        }
    }
    ctx->pc = 0x24F640u;
label_24f640:
    // 0x24f640: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x24f640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_24f644:
    // 0x24f644: 0x3c160035  lui         $s6, 0x35
    ctx->pc = 0x24f644u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)53 << 16));
    // 0x24f648: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x24F648u;
    {
        const bool branch_taken_0x24f648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F648u;
        // 0x24f64c: 0xa6620004  sh          $v0, 0x4($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f648) {
            ctx->pc = 0x24FA14u;
            goto label_24fa14;
        }
    }
    ctx->pc = 0x24F650u;
label_24f650:
    // 0x24f650: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24f650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24f654: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x24f654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x24f658: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x24f658u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x24f65c: 0x24846fc8  addiu       $a0, $a0, 0x6FC8
    ctx->pc = 0x24f65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28616));
    // 0x24f660: 0x3c160035  lui         $s6, 0x35
    ctx->pc = 0x24f660u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)53 << 16));
    // 0x24f664: 0x94a50002  lhu         $a1, 0x2($a1)
    ctx->pc = 0x24f664u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x24f668: 0xc08b0c2  jal         func_22C308
    ctx->pc = 0x24F668u;
    SET_GPR_U32(ctx, 31, 0x24F670u);
    ctx->pc = 0x24F66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F668u;
    // 0x24f66c: 0x24a5fff1  addiu       $a1, $a1, -0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967281));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C308u, 0x24F668u, 0x24F670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F670u;
label_24f670:
    // 0x24f670: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x24F670u;
    {
        const bool branch_taken_0x24f670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F670u;
        // 0x24f674: 0x26d07040  addiu       $s0, $s6, 0x7040 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 28736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f670) {
            ctx->pc = 0x24FA18u;
            goto label_24fa18;
        }
    }
    ctx->pc = 0x24F678u;
label_24f678:
    // 0x24f678: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x24f678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24f67c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x24f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x24f680: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x24f680u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x24f684: 0x24847018  addiu       $a0, $a0, 0x7018
    ctx->pc = 0x24f684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28696));
    // 0x24f688: 0x3c160035  lui         $s6, 0x35
    ctx->pc = 0x24f688u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)53 << 16));
    // 0x24f68c: 0x94a50002  lhu         $a1, 0x2($a1)
    ctx->pc = 0x24f68cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x24f690: 0xc08b0c2  jal         func_22C308
    ctx->pc = 0x24F690u;
    SET_GPR_U32(ctx, 31, 0x24F698u);
    ctx->pc = 0x24F694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F690u;
    // 0x24f694: 0x24a5ffef  addiu       $a1, $a1, -0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967279));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C308u, 0x24F690u, 0x24F698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F698u;
label_24f698:
    // 0x24f698: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x24F698u;
    {
        const bool branch_taken_0x24f698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F698u;
        // 0x24f69c: 0x26d07040  addiu       $s0, $s6, 0x7040 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 28736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f698) {
            ctx->pc = 0x24FA18u;
            goto label_24fa18;
        }
    }
    ctx->pc = 0x24F6A0u;
label_24f6a0:
    // 0x24f6a0: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24F6A0u;
    SET_GPR_U32(ctx, 31, 0x24F6A8u);
    ctx->pc = 0x24F6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F6A0u;
    // 0x24f6a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24F6A0u, 0x24F6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F6A8u;
label_24f6a8:
    // 0x24f6a8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x24f6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x24f6ac: 0x104000d8  beqz        $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x24F6ACu;
    {
        const bool branch_taken_0x24f6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F6ACu;
        // 0x24f6b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f6ac) {
            ctx->pc = 0x24FA10u;
            goto label_24fa10;
        }
    }
    ctx->pc = 0x24F6B4u;
    // 0x24f6b4: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x24f6b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x24f6b8: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x24F6B8u;
    {
        const bool branch_taken_0x24f6b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F6B8u;
        // 0x24f6bc: 0x2463fffe  addiu       $v1, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f6b8) {
            ctx->pc = 0x24F71Cu;
            goto label_24f71c;
        }
    }
    ctx->pc = 0x24F6C0u;
    // 0x24f6c0: 0x8f83a220  lw          $v1, -0x5DE0($gp)
    ctx->pc = 0x24f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
    // 0x24f6c4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x24f6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24f6c8: 0x8f84a20c  lw          $a0, -0x5DF4($gp)
    ctx->pc = 0x24f6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943244)));
    // 0x24f6cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f6d0: 0xc0922e6  jal         func_248B98
    ctx->pc = 0x24F6D0u;
    SET_GPR_U32(ctx, 31, 0x24F6D8u);
    ctx->pc = 0x24F6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F6D0u;
    // 0x24f6d4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248B98u, 0x24F6D0u, 0x24F6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F6D8u;
label_24f6d8:
    // 0x24f6d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24f6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f6dc: 0x120000cc  beqz        $s0, . + 4 + (0xCC << 2)
    ctx->pc = 0x24F6DCu;
    {
        const bool branch_taken_0x24f6dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F6DCu;
        // 0x24f6e0: 0x8f82a0d8  lw          $v0, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f6dc) {
            ctx->pc = 0x24FA10u;
            goto label_24fa10;
        }
    }
    ctx->pc = 0x24F6E4u;
    // 0x24f6e4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x24f6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x24f6e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24F6E8u;
    {
        const bool branch_taken_0x24f6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F6E8u;
        // 0x24f6ec: 0x8f84a20c  lw          $a0, -0x5DF4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f6e8) {
            ctx->pc = 0x24F708u;
            goto label_24f708;
        }
    }
    ctx->pc = 0x24F6F0u;
    // 0x24f6f0: 0xc0920ba  jal         func_2482E8
    ctx->pc = 0x24F6F0u;
    SET_GPR_U32(ctx, 31, 0x24F6F8u);
    ctx->pc = 0x2482E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2482E8u, 0x24F6F0u, 0x24F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F6F8u;
label_24f6f8:
    // 0x24f6f8: 0x8f83a0d8  lw          $v1, -0x5F28($gp)
    ctx->pc = 0x24f6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24f6fc: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x24f6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x24f700: 0xaf83a0d8  sw          $v1, -0x5F28($gp)
    ctx->pc = 0x24f700u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 3));
    // 0x24f704: 0x8f84a20c  lw          $a0, -0x5DF4($gp)
    ctx->pc = 0x24f704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943244)));
label_24f708:
    // 0x24f708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24f708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f70c: 0xc092286  jal         func_248A18
    ctx->pc = 0x24F70Cu;
    SET_GPR_U32(ctx, 31, 0x24F714u);
    ctx->pc = 0x24F710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F70Cu;
    // 0x24f710: 0x3c160035  lui         $s6, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)53 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248A18u, 0x24F70Cu, 0x24F714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F714u;
label_24f714:
    // 0x24f714: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x24F714u;
    {
        const bool branch_taken_0x24f714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f714) {
            ctx->pc = 0x24F9D0u;
            goto label_24f9d0;
        }
    }
    ctx->pc = 0x24F71Cu;
label_24f71c:
    // 0x24f71c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x24f71cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x24f720: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x24F720u;
    {
        const bool branch_taken_0x24f720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F720u;
        // 0x24f724: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f720) {
            ctx->pc = 0x24F79Cu;
            goto label_24f79c;
        }
    }
    ctx->pc = 0x24F728u;
    // 0x24f728: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24f728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24f72c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24f730: 0x244222b0  addiu       $v0, $v0, 0x22B0
    ctx->pc = 0x24f730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8880));
    // 0x24f734: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24f734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f738: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24f738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f73c: 0x800008  jr          $a0
    ctx->pc = 0x24F73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24F744u: goto label_24f744;
            case 0x24F750u: goto label_24f750;
            case 0x24F760u: goto label_24f760;
            case 0x24F770u: goto label_24f770;
            case 0x24F778u: goto label_24f778;
            case 0x24F780u: goto label_24f780;
            case 0x24F790u: goto label_24f790;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F73Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24F744u;
label_24f744:
    // 0x24f744: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24f744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24f748: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24F748u;
    {
        const bool branch_taken_0x24f748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F748u;
        // 0x24f74c: 0x8c546f38  lw          $s4, 0x6F38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f748) {
            ctx->pc = 0x24F79Cu;
            goto label_24f79c;
        }
    }
    ctx->pc = 0x24F750u;
label_24f750:
    // 0x24f750: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24f750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24f754: 0x8c436f88  lw          $v1, 0x6F88($v0)
    ctx->pc = 0x24f754u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x356F88u));
    // 0x24f758: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x24F758u;
    {
        const bool branch_taken_0x24f758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F758u;
        // 0x24f75c: 0x24740005  addiu       $s4, $v1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f758) {
            ctx->pc = 0x24F79Cu;
            goto label_24f79c;
        }
    }
    ctx->pc = 0x24F760u;
label_24f760:
    // 0x24f760: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24f760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24f764: 0x8c436fc8  lw          $v1, 0x6FC8($v0)
    ctx->pc = 0x24f764u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x356FC8u));
    // 0x24f768: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24F768u;
    {
        const bool branch_taken_0x24f768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F768u;
        // 0x24f76c: 0x2474000f  addiu       $s4, $v1, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f768) {
            ctx->pc = 0x24F79Cu;
            goto label_24f79c;
        }
    }
    ctx->pc = 0x24F770u;
label_24f770:
    // 0x24f770: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24F770u;
    {
        const bool branch_taken_0x24f770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F770u;
        // 0x24f774: 0x2414000e  addiu       $s4, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f770) {
            ctx->pc = 0x24F79Cu;
            goto label_24f79c;
        }
    }
    ctx->pc = 0x24F778u;
label_24f778:
    // 0x24f778: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24F778u;
    {
        const bool branch_taken_0x24f778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F778u;
        // 0x24f77c: 0x2414000f  addiu       $s4, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f778) {
            ctx->pc = 0x24F79Cu;
            goto label_24f79c;
        }
    }
    ctx->pc = 0x24F780u;
label_24f780:
    // 0x24f780: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24f780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24f784: 0x8c437018  lw          $v1, 0x7018($v0)
    ctx->pc = 0x24f784u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x357018u));
    // 0x24f788: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24F788u;
    {
        const bool branch_taken_0x24f788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F788u;
        // 0x24f78c: 0x24740011  addiu       $s4, $v1, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f788) {
            ctx->pc = 0x24F79Cu;
            goto label_24f79c;
        }
    }
    ctx->pc = 0x24F790u;
label_24f790:
    // 0x24f790: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24f790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24f794: 0x8c436ff0  lw          $v1, 0x6FF0($v0)
    ctx->pc = 0x24f794u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x356FF0u));
    // 0x24f798: 0x24740008  addiu       $s4, $v1, 0x8
    ctx->pc = 0x24f798u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_24f79c:
    // 0x24f79c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24f7a0: 0x1282009b  beq         $s4, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x24F7A0u;
    {
        const bool branch_taken_0x24f7a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x24F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F7A0u;
        // 0x24f7a4: 0x8f83a220  lw          $v1, -0x5DE0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7a0) {
            ctx->pc = 0x24FA10u;
            goto label_24fa10;
        }
    }
    ctx->pc = 0x24F7A8u;
    // 0x24f7a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x24f7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24f7ac: 0x8f84a20c  lw          $a0, -0x5DF4($gp)
    ctx->pc = 0x24f7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943244)));
    // 0x24f7b0: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x24f7b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24f7b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f7b8: 0xc0922e6  jal         func_248B98
    ctx->pc = 0x24F7B8u;
    SET_GPR_U32(ctx, 31, 0x24F7C0u);
    ctx->pc = 0x24F7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F7B8u;
    // 0x24f7bc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248B98u, 0x24F7B8u, 0x24F7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F7C0u;
label_24f7c0:
    // 0x24f7c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24f7c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f7c4: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24F7C4u;
    {
        const bool branch_taken_0x24f7c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f7c4) {
            ctx->pc = 0x24F7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F7C4u;
            // 0x24f7c8: 0x96150002  lhu         $s5, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F7CCu;
            goto label_24f7cc;
        }
    }
    ctx->pc = 0x24F7CCu;
label_24f7cc:
    // 0x24f7cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24f7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f7d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24f7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f7d4: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x24F7D4u;
    SET_GPR_U32(ctx, 31, 0x24F7DCu);
    ctx->pc = 0x24F7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F7D4u;
    // 0x24f7d8: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x24F7D4u, 0x24F7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F7DCu;
label_24f7dc:
    // 0x24f7dc: 0x8f90a12c  lw          $s0, -0x5ED4($gp)
    ctx->pc = 0x24f7dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
    // 0x24f7e0: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x24F7E0u;
    {
        const bool branch_taken_0x24f7e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F7E0u;
        // 0x24f7e4: 0x3c120036  lui         $s2, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7e0) {
            ctx->pc = 0x24F86Cu;
            goto label_24f86c;
        }
    }
    ctx->pc = 0x24F7E8u;
    // 0x24f7e8: 0x148900  sll         $s1, $s4, 4
    ctx->pc = 0x24f7e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x24f7ec: 0x3c160035  lui         $s6, 0x35
    ctx->pc = 0x24f7ecu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)53 << 16));
    // 0x24f7f0: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x24f7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x24f7f4: 0x0  nop
    ctx->pc = 0x24f7f4u;
    // NOP
label_24f7f8:
    // 0x24f7f8: 0xc092354  jal         func_248D50
    ctx->pc = 0x24F7F8u;
    SET_GPR_U32(ctx, 31, 0x24F800u);
    ctx->pc = 0x24F7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F7F8u;
    // 0x24f7fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248D50u, 0x24F7F8u, 0x24F800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F800u;
label_24f800:
    // 0x24f800: 0x8e100038  lw          $s0, 0x38($s0)
    ctx->pc = 0x24f800u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x24f804: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x24F804u;
    {
        const bool branch_taken_0x24f804 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f804) {
            ctx->pc = 0x24F808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F804u;
            // 0x24f808: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f7f8;
        }
    }
    ctx->pc = 0x24F80Cu;
    // 0x24f80c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x24F80Cu;
    {
        const bool branch_taken_0x24f80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F80Cu;
        // 0x24f810: 0x26428320  addiu       $v0, $s2, -0x7CE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f80c) {
            ctx->pc = 0x24F878u;
            goto label_24f878;
        }
    }
    ctx->pc = 0x24F814u;
label_24f814:
    // 0x24f814: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x24f814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24f818: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x24f818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x24f81c: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x24f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x24f820: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x24f820u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x24f824: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24f824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24f828: 0x26102240  addiu       $s0, $s0, 0x2240
    ctx->pc = 0x24f828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8768));
    // 0x24f82c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f830: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x24f830u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24f834: 0xc092366  jal         func_248D98
    ctx->pc = 0x24F834u;
    SET_GPR_U32(ctx, 31, 0x24F83Cu);
    ctx->pc = 0x24F838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F834u;
    // 0x24f838: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248D98u, 0x24F834u, 0x24F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F83Cu;
label_24f83c:
    // 0x24f83c: 0x8e250da0  lw          $a1, 0xDA0($s1)
    ctx->pc = 0x24f83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
    // 0x24f840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24f840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f844: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x24f844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24f848: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x24F848u;
    SET_GPR_U32(ctx, 31, 0x24F850u);
    ctx->pc = 0x24F84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F848u;
    // 0x24f84c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x24F848u, 0x24F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F850u;
label_24f850:
    // 0x24f850: 0x3c056464  lui         $a1, 0x6464
    ctx->pc = 0x24f850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25700 << 16));
    // 0x24f854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24f854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f858: 0x34a5647f  ori         $a1, $a1, 0x647F
    ctx->pc = 0x24f858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25727);
    // 0x24f85c: 0xc0932a0  jal         func_24CA80
    ctx->pc = 0x24F85Cu;
    SET_GPR_U32(ctx, 31, 0x24F864u);
    ctx->pc = 0x24F860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F85Cu;
    // 0x24f860: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA80u, 0x24F85Cu, 0x24F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F864u;
label_24f864:
    // 0x24f864: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x24F864u;
    {
        const bool branch_taken_0x24f864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F864u;
        // 0x24f868: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f864) {
            ctx->pc = 0x24F8FCu;
            goto label_24f8fc;
        }
    }
    ctx->pc = 0x24F86Cu;
label_24f86c:
    // 0x24f86c: 0x148900  sll         $s1, $s4, 4
    ctx->pc = 0x24f86cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x24f870: 0x3c160035  lui         $s6, 0x35
    ctx->pc = 0x24f870u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)53 << 16));
    // 0x24f874: 0x26428320  addiu       $v0, $s2, -0x7CE0
    ctx->pc = 0x24f874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935328));
label_24f878:
    // 0x24f878: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x24f878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x24f87c: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x24f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x24f880: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24f880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f884: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24f884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24f888: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x24f888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x24f88c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24f88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24f890: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24f890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24f894: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x24F894u;
    {
        const bool branch_taken_0x24f894 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F894u;
        // 0x24f898: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f894) {
            ctx->pc = 0x24F8BCu;
            goto label_24f8bc;
        }
    }
    ctx->pc = 0x24F89Cu;
    // 0x24f89c: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x24f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x24f8a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x24f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24f8a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24f8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f8a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24f8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24f8ac: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x24f8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x24f8b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x24f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24f8b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24f8b8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x24f8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_24f8bc:
    // 0x24f8bc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x24f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x24f8c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24f8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f8c4: 0x244682f8  addiu       $a2, $v0, -0x7D08
    ctx->pc = 0x24f8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935288));
    // 0x24f8c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24f8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f8cc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x24f8ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24f8d0:
    // 0x24f8d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24f8d4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x24f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24f8d8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24f8d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24f8dc: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x24F8DCu;
    {
        const bool branch_taken_0x24f8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F8DCu;
        // 0x24f8e0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f8dc) {
            ctx->pc = 0x24F814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f814;
        }
    }
    ctx->pc = 0x24F8E4u;
    // 0x24f8e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x24f8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x24f8e8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x24f8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x24f8ec: 0x2882000a  slti        $v0, $a0, 0xA
    ctx->pc = 0x24f8ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x24f8f0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x24F8F0u;
    {
        const bool branch_taken_0x24f8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F8F0u;
        // 0x24f8f4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f8f0) {
            ctx->pc = 0x24F8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f8d0;
        }
    }
    ctx->pc = 0x24F8F8u;
    // 0x24f8f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24f8fc:
    // 0x24f8fc: 0x12820045  beq         $s4, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x24F8FCu;
    {
        const bool branch_taken_0x24f8fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x24F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F8FCu;
        // 0x24f900: 0x8f82a0d8  lw          $v0, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f8fc) {
            ctx->pc = 0x24FA14u;
            goto label_24fa14;
        }
    }
    ctx->pc = 0x24F904u;
    // 0x24f904: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x24f904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x24f908: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24F908u;
    {
        const bool branch_taken_0x24f908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f908) {
            ctx->pc = 0x24F924u;
            goto label_24f924;
        }
    }
    ctx->pc = 0x24F910u;
    // 0x24f910: 0xc0920ba  jal         func_2482E8
    ctx->pc = 0x24F910u;
    SET_GPR_U32(ctx, 31, 0x24F918u);
    ctx->pc = 0x2482E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2482E8u, 0x24F910u, 0x24F918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F918u;
label_24f918:
    // 0x24f918: 0x8f83a0d8  lw          $v1, -0x5F28($gp)
    ctx->pc = 0x24f918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24f91c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x24f91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x24f920: 0xaf83a0d8  sw          $v1, -0x5F28($gp)
    ctx->pc = 0x24f920u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 3));
label_24f924:
    // 0x24f924: 0xc092308  jal         func_248C20
    ctx->pc = 0x24F924u;
    SET_GPR_U32(ctx, 31, 0x24F92Cu);
    ctx->pc = 0x248C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248C20u, 0x24F924u, 0x24F92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F92Cu;
label_24f92c:
    // 0x24f92c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24f930: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x24f930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x24f934: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24F934u;
    {
        const bool branch_taken_0x24f934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F934u;
        // 0x24f938: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f934) {
            ctx->pc = 0x24F958u;
            goto label_24f958;
        }
    }
    ctx->pc = 0x24F93Cu;
    // 0x24f93c: 0xc091f0e  jal         func_247C38
    ctx->pc = 0x24F93Cu;
    SET_GPR_U32(ctx, 31, 0x24F944u);
    ctx->pc = 0x247C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247C38u, 0x24F93Cu, 0x24F944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F944u;
label_24f944:
    // 0x24f944: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x24f944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x24f948: 0x2c421ffd  sltiu       $v0, $v0, 0x1FFD
    ctx->pc = 0x24f948u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8189) ? 1 : 0);
    // 0x24f94c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24F94Cu;
    {
        const bool branch_taken_0x24f94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F94Cu;
        // 0x24f950: 0x8f83a220  lw          $v1, -0x5DE0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f94c) {
            ctx->pc = 0x24F988u;
            goto label_24f988;
        }
    }
    ctx->pc = 0x24F954u;
    // 0x24f954: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x24f954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
label_24f958:
    // 0x24f958: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x24f958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x24f95c: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x24f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x24f960: 0x3c057f7f  lui         $a1, 0x7F7F
    ctx->pc = 0x24f960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32639 << 16));
    // 0x24f964: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24f964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24f968: 0x34a53c7f  ori         $a1, $a1, 0x3C7F
    ctx->pc = 0x24f968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15487);
    // 0x24f96c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f970: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24f970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f974: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24f974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f978: 0xc0932a0  jal         func_24CA80
    ctx->pc = 0x24F978u;
    SET_GPR_U32(ctx, 31, 0x24F980u);
    ctx->pc = 0x24F97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F978u;
    // 0x24f97c: 0x8c440d9c  lw          $a0, 0xD9C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA80u, 0x24F978u, 0x24F980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F980u;
label_24f980:
    // 0x24f980: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x24F980u;
    {
        const bool branch_taken_0x24f980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F980u;
        // 0x24f984: 0x26d07040  addiu       $s0, $s6, 0x7040 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 28736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f980) {
            ctx->pc = 0x24FA18u;
            goto label_24fa18;
        }
    }
    ctx->pc = 0x24F988u;
label_24f988:
    // 0x24f988: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x24f988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24f98c: 0x8f84a20c  lw          $a0, -0x5DF4($gp)
    ctx->pc = 0x24f98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943244)));
    // 0x24f990: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24f990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f994: 0xc0922e6  jal         func_248B98
    ctx->pc = 0x24F994u;
    SET_GPR_U32(ctx, 31, 0x24F99Cu);
    ctx->pc = 0x24F998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F994u;
    // 0x24f998: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248B98u, 0x24F994u, 0x24F99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F99Cu;
label_24f99c:
    // 0x24f99c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24f99cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f9a0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F9A0u;
    {
        const bool branch_taken_0x24f9a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F9A0u;
        // 0x24f9a4: 0x8f84a20c  lw          $a0, -0x5DF4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f9a0) {
            ctx->pc = 0x24F9B0u;
            goto label_24f9b0;
        }
    }
    ctx->pc = 0x24F9A8u;
    // 0x24f9a8: 0xc092286  jal         func_248A18
    ctx->pc = 0x24F9A8u;
    SET_GPR_U32(ctx, 31, 0x24F9B0u);
    ctx->pc = 0x24F9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F9A8u;
    // 0x24f9ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248A18u, 0x24F9A8u, 0x24F9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F9B0u;
label_24f9b0:
    // 0x24f9b0: 0x8f83a220  lw          $v1, -0x5DE0($gp)
    ctx->pc = 0x24f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
    // 0x24f9b4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x24f9b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f9b8: 0x8f84a20c  lw          $a0, -0x5DF4($gp)
    ctx->pc = 0x24f9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943244)));
    // 0x24f9bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f9c0: 0xc0922cc  jal         func_248B30
    ctx->pc = 0x24F9C0u;
    SET_GPR_U32(ctx, 31, 0x24F9C8u);
    ctx->pc = 0x24F9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F9C0u;
    // 0x24f9c4: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248B30u, 0x24F9C0u, 0x24F9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F9C8u;
label_24f9c8:
    // 0x24f9c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F9C8u;
    {
        const bool branch_taken_0x24f9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F9C8u;
        // 0x24f9cc: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f9c8) {
            ctx->pc = 0x24F9E0u;
            goto label_24f9e0;
        }
    }
    ctx->pc = 0x24F9D0u;
label_24f9d0:
    // 0x24f9d0: 0xc09410e  jal         func_250438
    ctx->pc = 0x24F9D0u;
    SET_GPR_U32(ctx, 31, 0x24F9D8u);
    ctx->pc = 0x24F9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F9D0u;
    // 0x24f9d4: 0x8f84a220  lw          $a0, -0x5DE0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250438u, 0x24F9D0u, 0x24F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F9D8u;
label_24f9d8:
    // 0x24f9d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x24F9D8u;
    {
        const bool branch_taken_0x24f9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F9D8u;
        // 0x24f9dc: 0x26d07040  addiu       $s0, $s6, 0x7040 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 28736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f9d8) {
            ctx->pc = 0x24FA18u;
            goto label_24fa18;
        }
    }
    ctx->pc = 0x24F9E0u;
label_24f9e0:
    // 0x24f9e0: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x24f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x24f9e4: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x24f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x24f9e8: 0x3c057f7f  lui         $a1, 0x7F7F
    ctx->pc = 0x24f9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32639 << 16));
    // 0x24f9ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24f9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24f9f0: 0x34a53c7f  ori         $a1, $a1, 0x3C7F
    ctx->pc = 0x24f9f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15487);
    // 0x24f9f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f9f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24f9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f9fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24fa00: 0xc0932a0  jal         func_24CA80
    ctx->pc = 0x24FA00u;
    SET_GPR_U32(ctx, 31, 0x24FA08u);
    ctx->pc = 0x24FA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FA00u;
    // 0x24fa04: 0x8c440d9c  lw          $a0, 0xD9C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA80u, 0x24FA00u, 0x24FA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FA08u;
label_24fa08:
    // 0x24fa08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24FA08u;
    {
        const bool branch_taken_0x24fa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA08u;
        // 0x24fa0c: 0x26d07040  addiu       $s0, $s6, 0x7040 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 28736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa08) {
            ctx->pc = 0x24FA18u;
            goto label_24fa18;
        }
    }
    ctx->pc = 0x24FA10u;
label_24fa10:
    // 0x24fa10: 0x3c160035  lui         $s6, 0x35
    ctx->pc = 0x24fa10u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)53 << 16));
label_24fa14:
    // 0x24fa14: 0x26d07040  addiu       $s0, $s6, 0x7040
    ctx->pc = 0x24fa14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 28736));
label_24fa18:
    // 0x24fa18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24fa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fa1c: 0xc0930ea  jal         func_24C3A8
    ctx->pc = 0x24FA1Cu;
    SET_GPR_U32(ctx, 31, 0x24FA24u);
    ctx->pc = 0x24FA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FA1Cu;
    // 0x24fa20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C3A8u, 0x24FA1Cu, 0x24FA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FA24u;
label_24fa24:
    // 0x24fa24: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x24fa24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x24fa28: 0x9782a1e0  lhu         $v0, -0x5E20($gp)
    ctx->pc = 0x24fa28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294943200)));
    // 0x24fa2c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24FA2Cu;
    {
        const bool branch_taken_0x24fa2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24FA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA2Cu;
        // 0x24fa30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa2c) {
            ctx->pc = 0x24FA68u;
            goto label_24fa68;
        }
    }
    ctx->pc = 0x24FA34u;
    // 0x24fa34: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x24FA34u;
    SET_GPR_U32(ctx, 31, 0x24FA3Cu);
    ctx->pc = 0x24FA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FA34u;
    // 0x24fa38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x24FA34u, 0x24FA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FA3Cu;
label_24fa3c:
    // 0x24fa3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24fa3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fa40: 0x96640004  lhu         $a0, 0x4($s3)
    ctx->pc = 0x24fa40u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x24fa44: 0x94620010  lhu         $v0, 0x10($v1)
    ctx->pc = 0x24fa44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x24fa48: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24FA48u;
    {
        const bool branch_taken_0x24fa48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x24fa48) {
            ctx->pc = 0x24FA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FA48u;
            // 0x24fa4c: 0x94620012  lhu         $v0, 0x12($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FA58u;
            goto label_24fa58;
        }
    }
    ctx->pc = 0x24FA50u;
    // 0x24fa50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24FA50u;
    {
        const bool branch_taken_0x24fa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA50u;
        // 0x24fa54: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa50) {
            ctx->pc = 0x24FA64u;
            goto label_24fa64;
        }
    }
    ctx->pc = 0x24FA58u;
label_24fa58:
    // 0x24fa58: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24FA58u;
    {
        const bool branch_taken_0x24fa58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x24fa58) {
            ctx->pc = 0x24FA5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FA58u;
            // 0x24fa5c: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FA6Cu;
            goto label_24fa6c;
        }
    }
    ctx->pc = 0x24FA60u;
    // 0x24fa60: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x24fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_24fa64:
    // 0x24fa64: 0xaf82a1dc  sw          $v0, -0x5E24($gp)
    ctx->pc = 0x24fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943196), GPR_U32(ctx, 2));
label_24fa68:
    // 0x24fa68: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x24fa68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_24fa6c:
    // 0x24fa6c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x24fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x24fa70: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x24fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x24fa74: 0x26c57040  addiu       $a1, $s6, 0x7040
    ctx->pc = 0x24fa74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 28736));
    // 0x24fa78: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x24fa78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x24fa7c: 0x96660004  lhu         $a2, 0x4($s3)
    ctx->pc = 0x24fa7cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x24fa80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24fa80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fa84: 0xc093c82  jal         func_24F208
    ctx->pc = 0x24FA84u;
    SET_GPR_U32(ctx, 31, 0x24FA8Cu);
    ctx->pc = 0x24FA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FA84u;
    // 0x24fa88: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F208u, 0x24FA84u, 0x24FA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FA8Cu;
label_24fa8c:
    // 0x24fa8c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x24fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x24fa90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24fa94: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x24fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x24fa98: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24fa98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_24fa9c:
    // 0x24fa9c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x24fa9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24faa0: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x24faa0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24faa4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x24faa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24faa8: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x24faa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24faac: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x24faacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24fab0: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x24fab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24fab4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x24fab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24fab8: 0x3e00008  jr          $ra
    ctx->pc = 0x24FAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FAB8u;
        // 0x24fabc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FAC0u;
}
