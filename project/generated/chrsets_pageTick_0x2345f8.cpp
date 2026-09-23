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

// Function: chrsets_pageTick
// Address: 0x2345f8 - 0x23520c
void chrsets_pageTick_0x2345f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrsets_pageTick_0x2345f8");
#endif

    switch (ctx->pc) {
        case 0x234660u: goto label_234660;
        case 0x234668u: goto label_234668;
        case 0x2346a0u: goto label_2346a0;
        case 0x2346acu: goto label_2346ac;
        case 0x2346d0u: goto label_2346d0;
        case 0x234734u: goto label_234734;
        case 0x23476cu: goto label_23476c;
        case 0x234770u: goto label_234770;
        case 0x234778u: goto label_234778;
        case 0x2347c0u: goto label_2347c0;
        case 0x23486cu: goto label_23486c;
        case 0x2348b4u: goto label_2348b4;
        case 0x2348e0u: goto label_2348e0;
        case 0x23491cu: goto label_23491c;
        case 0x234954u: goto label_234954;
        case 0x23498cu: goto label_23498c;
        case 0x2349a8u: goto label_2349a8;
        case 0x2349d4u: goto label_2349d4;
        case 0x2349f4u: goto label_2349f4;
        case 0x234a10u: goto label_234a10;
        case 0x234b34u: goto label_234b34;
        case 0x234b4cu: goto label_234b4c;
        case 0x234b80u: goto label_234b80;
        case 0x234cd0u: goto label_234cd0;
        case 0x234cd8u: goto label_234cd8;
        case 0x234d5cu: goto label_234d5c;
        case 0x234ddcu: goto label_234ddc;
        case 0x234e20u: goto label_234e20;
        case 0x234e74u: goto label_234e74;
        case 0x234ed0u: goto label_234ed0;
        case 0x234ed8u: goto label_234ed8;
        case 0x234f00u: goto label_234f00;
        case 0x234f38u: goto label_234f38;
        case 0x234f6cu: goto label_234f6c;
        case 0x234f8cu: goto label_234f8c;
        case 0x234fe8u: goto label_234fe8;
        case 0x235028u: goto label_235028;
        case 0x2350d0u: goto label_2350d0;
        case 0x2351ccu: goto label_2351cc;
        case 0x2351d8u: goto label_2351d8;
        default: break;
    }

    ctx->pc = 0x2345f8u;

    // 0x2345f8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2345f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2345fc: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2345fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x234600: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x234600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x234604: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x234604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x234608: 0x3c1e002f  lui         $fp, 0x2F
    ctx->pc = 0x234608u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)47 << 16));
    // 0x23460c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x23460cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x234610: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x234610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x234614: 0x27c52c18  addiu       $a1, $fp, 0x2C18
    ctx->pc = 0x234614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 11288));
    // 0x234618: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x234618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x23461c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23461cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x234620: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x234620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x234624: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x234624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x234628: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x234628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x23462c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23462cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x234630: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x234630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x234634: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x234634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234638: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x234638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x23463c: 0x24a53bf8  addiu       $a1, $a1, 0x3BF8
    ctx->pc = 0x23463cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15352));
    // 0x234640: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x234640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x234644: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x234644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234648: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x234648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23464c: 0x8c773a58  lw          $s7, 0x3A58($v1)
    ctx->pc = 0x23464cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14936)));
    // 0x234650: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x234650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234654: 0x2af40008  slti        $s4, $s7, 0x8
    ctx->pc = 0x234654u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x234658: 0xc08c086  jal         func_230218
    ctx->pc = 0x234658u;
    SET_GPR_U32(ctx, 31, 0x234660u);
    ctx->pc = 0x23465Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234658u;
    // 0x23465c: 0x8cc401f8  lw          $a0, 0x1F8($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 504)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230218u, 0x234658u, 0x234660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234660u;
label_234660:
    // 0x234660: 0xc08a984  jal         func_22A610
    ctx->pc = 0x234660u;
    SET_GPR_U32(ctx, 31, 0x234668u);
    ctx->pc = 0x234664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234660u;
    // 0x234664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A610u, 0x234660u, 0x234668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234668u;
label_234668:
    // 0x234668: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x234668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x23466c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23466cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234670: 0x8c653838  lw          $a1, 0x3838($v1)
    ctx->pc = 0x234670u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x353838u));
    // 0x234674: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x234674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234678: 0x3c0601fc  lui         $a2, 0x1FC
    ctx->pc = 0x234678u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)508 << 16));
    // 0x23467c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x23467cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x234680: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x234680u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x234684: 0xaf80b760  sw          $zero, -0x48A0($gp)
    ctx->pc = 0x234684u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948704), GPR_U32(ctx, 0));
    // 0x234688: 0xaf82b77c  sw          $v0, -0x4884($gp)
    ctx->pc = 0x234688u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948732), GPR_U32(ctx, 2));
    // 0x23468c: 0x247636b0  addiu       $s6, $v1, 0x36B0
    ctx->pc = 0x23468cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 14000));
    // 0x234690: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x234690u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234694: 0x24d22b48  addiu       $s2, $a2, 0x2B48
    ctx->pc = 0x234694u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 11080));
    // 0x234698: 0x2361021  addu        $v0, $s1, $s6
    ctx->pc = 0x234698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x23469c: 0x0  nop
    ctx->pc = 0x23469cu;
    // NOP
label_2346a0:
    // 0x2346a0: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x2346a0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2346a4: 0xc089300  jal         func_224C00
    ctx->pc = 0x2346A4u;
    SET_GPR_U32(ctx, 31, 0x2346ACu);
    ctx->pc = 0x2346A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2346A4u;
    // 0x2346a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224C00u, 0x2346A4u, 0x2346ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2346ACu;
label_2346ac:
    // 0x2346ac: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2346ACu;
    {
        const bool branch_taken_0x2346ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2346B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346ACu;
        // 0x2346b0: 0x8f83b760  lw          $v1, -0x48A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346ac) {
            ctx->pc = 0x234718u;
            goto label_234718;
        }
    }
    ctx->pc = 0x2346B4u;
    // 0x2346b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2346b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2346b8: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2346B8u;
    {
        const bool branch_taken_0x2346b8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2346BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346B8u;
        // 0x2346bc: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346b8) {
            ctx->pc = 0x2346F4u;
            goto label_2346f4;
        }
    }
    ctx->pc = 0x2346C0u;
    // 0x2346c0: 0x8ea22b48  lw          $v0, 0x2B48($s5)
    ctx->pc = 0x2346c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11080)));
    // 0x2346c4: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2346C4u;
    {
        const bool branch_taken_0x2346c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2346C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346C4u;
        // 0x2346c8: 0x26250001  addiu       $a1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346c4) {
            ctx->pc = 0x2346F4u;
            goto label_2346f4;
        }
    }
    ctx->pc = 0x2346CCu;
    // 0x2346cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2346ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2346d0:
    // 0x2346d0: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x2346d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2346d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2346D4u;
    {
        const bool branch_taken_0x2346d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2346D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346D4u;
        // 0x2346d8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346d4) {
            ctx->pc = 0x2346F8u;
            goto label_2346f8;
        }
    }
    ctx->pc = 0x2346DCu;
    // 0x2346dc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2346dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2346e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2346e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2346e4: 0x5470fffa  bnel        $v1, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2346E4u;
    {
        const bool branch_taken_0x2346e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2346e4) {
            ctx->pc = 0x2346E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2346E4u;
            // 0x2346e8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2346D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2346d0;
        }
    }
    ctx->pc = 0x2346ECu;
    // 0x2346ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2346ECu;
    {
        const bool branch_taken_0x2346ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2346ec) {
            ctx->pc = 0x2346F8u;
            goto label_2346f8;
        }
    }
    ctx->pc = 0x2346F4u;
label_2346f4:
    // 0x2346f4: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x2346f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2346f8:
    // 0x2346f8: 0x14860009  bne         $a0, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2346F8u;
    {
        const bool branch_taken_0x2346f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2346FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346F8u;
        // 0x2346fc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346f8) {
            ctx->pc = 0x234720u;
            goto label_234720;
        }
    }
    ctx->pc = 0x234700u;
    // 0x234700: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x234700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x234704: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x234704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x234708: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x234708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23470c: 0xaf83b760  sw          $v1, -0x48A0($gp)
    ctx->pc = 0x23470cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948704), GPR_U32(ctx, 3));
    // 0x234710: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x234710u;
    {
        const bool branch_taken_0x234710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234710u;
        // 0x234714: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234710) {
            ctx->pc = 0x234720u;
            goto label_234720;
        }
    }
    ctx->pc = 0x234718u;
label_234718:
    // 0x234718: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x234718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23471c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23471cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_234720:
    // 0x234720: 0x2e220040  sltiu       $v0, $s1, 0x40
    ctx->pc = 0x234720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x234724: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x234724u;
    {
        const bool branch_taken_0x234724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234724u;
        // 0x234728: 0x2361021  addu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234724) {
            ctx->pc = 0x2346A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2346a0;
        }
    }
    ctx->pc = 0x23472Cu;
    // 0x23472c: 0xc08d11e  jal         func_234478
    ctx->pc = 0x23472Cu;
    SET_GPR_U32(ctx, 31, 0x234734u);
    ctx->pc = 0x234730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23472Cu;
    // 0x234730: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234478u, 0x23472Cu, 0x234734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234734u;
label_234734:
    // 0x234734: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x234734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x234738: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x234738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23473c: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x23473cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x234740: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x234740u;
    {
        const bool branch_taken_0x234740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x234744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234740u;
        // 0x234744: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234740) {
            ctx->pc = 0x2347D0u;
            goto label_2347d0;
        }
    }
    ctx->pc = 0x234748u;
    // 0x234748: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x234748u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x23474c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23474Cu;
    {
        const bool branch_taken_0x23474c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x234750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23474Cu;
        // 0x234750: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23474c) {
            ctx->pc = 0x234780u;
            goto label_234780;
        }
    }
    ctx->pc = 0x234754u;
    // 0x234754: 0x8f82b76c  lw          $v0, -0x4894($gp)
    ctx->pc = 0x234754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948716)));
    // 0x234758: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x234758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23475c: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x23475cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x234760: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x234760u;
    {
        const bool branch_taken_0x234760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x234764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234760u;
        // 0x234764: 0xaf85b76c  sw          $a1, -0x4894($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948716), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234760) {
            ctx->pc = 0x23476Cu;
            goto label_23476c;
        }
    }
    ctx->pc = 0x234768u;
    // 0x234768: 0xaf80b76c  sw          $zero, -0x4894($gp)
    ctx->pc = 0x234768u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948716), GPR_U32(ctx, 0));
label_23476c:
    // 0x23476c: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x23476cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_234770:
    // 0x234770: 0xc081546  jal         func_205518
    ctx->pc = 0x234770u;
    SET_GPR_U32(ctx, 31, 0x234778u);
    ctx->pc = 0x234774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234770u;
    // 0x234774: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x234770u, 0x234778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234778u;
label_234778:
    // 0x234778: 0x1000024a  b           . + 4 + (0x24A << 2)
    ctx->pc = 0x234778u;
    {
        const bool branch_taken_0x234778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234778u;
        // 0x23477c: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234778) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x234780u;
label_234780:
    // 0x234780: 0x14620248  bne         $v1, $v0, . + 4 + (0x248 << 2)
    ctx->pc = 0x234780u;
    {
        const bool branch_taken_0x234780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x234784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234780u;
        // 0x234784: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234780) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x234788u;
    // 0x234788: 0x8f82b778  lw          $v0, -0x4888($gp)
    ctx->pc = 0x234788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948728)));
    // 0x23478c: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x23478cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x234790: 0x28c3000a  slti        $v1, $a2, 0xA
    ctx->pc = 0x234790u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x234794: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x234794u;
    {
        const bool branch_taken_0x234794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x234798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234794u;
        // 0x234798: 0xaf86b778  sw          $a2, -0x4888($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948728), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234794) {
            ctx->pc = 0x23476Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23476c;
        }
    }
    ctx->pc = 0x23479Cu;
    // 0x23479c: 0x8f82b760  lw          $v0, -0x48A0($gp)
    ctx->pc = 0x23479cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948704)));
    // 0x2347a0: 0x8f83b774  lw          $v1, -0x488C($gp)
    ctx->pc = 0x2347a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948724)));
    // 0x2347a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2347a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2347a8: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x2347a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2347ac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2347ACu;
    {
        const bool branch_taken_0x2347ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2347ac) {
            ctx->pc = 0x2347B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2347ACu;
            // 0x2347b0: 0xaf80b778  sw          $zero, -0x4888($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294948728), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2347C8u;
            goto label_2347c8;
        }
    }
    ctx->pc = 0x2347B4u;
    // 0x2347b4: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x2347b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2347b8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2347b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2347bc: 0xaf86b778  sw          $a2, -0x4888($gp)
    ctx->pc = 0x2347bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948728), GPR_U32(ctx, 6));
label_2347c0:
    // 0x2347c0: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x2347C0u;
    {
        const bool branch_taken_0x2347c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2347C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347C0u;
        // 0x2347c4: 0xaf87b774  sw          $a3, -0x488C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948724), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347c0) {
            ctx->pc = 0x23476Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23476c;
        }
    }
    ctx->pc = 0x2347C8u;
label_2347c8:
    // 0x2347c8: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x2347C8u;
    {
        const bool branch_taken_0x2347c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2347CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347C8u;
        // 0x2347cc: 0xaf80b774  sw          $zero, -0x488C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948724), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347c8) {
            ctx->pc = 0x23476Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23476c;
        }
    }
    ctx->pc = 0x2347D0u;
label_2347d0:
    // 0x2347d0: 0x30850004  andi        $a1, $a0, 0x4
    ctx->pc = 0x2347d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2347d4: 0x50a0001e  beql        $a1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2347D4u;
    {
        const bool branch_taken_0x2347d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2347d4) {
            ctx->pc = 0x2347D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2347D4u;
            // 0x2347d8: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x234850u;
            goto label_234850;
        }
    }
    ctx->pc = 0x2347DCu;
    // 0x2347dc: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x2347dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2347e0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2347E0u;
    {
        const bool branch_taken_0x2347e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2347E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347E0u;
        // 0x2347e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347e0) {
            ctx->pc = 0x234804u;
            goto label_234804;
        }
    }
    ctx->pc = 0x2347E8u;
    // 0x2347e8: 0x8f82b76c  lw          $v0, -0x4894($gp)
    ctx->pc = 0x2347e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948716)));
    // 0x2347ec: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x2347ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2347f0: 0x4a1ffde  bgez        $a1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2347F0u;
    {
        const bool branch_taken_0x2347f0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2347F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347F0u;
        // 0x2347f4: 0xaf85b76c  sw          $a1, -0x4894($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948716), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347f0) {
            ctx->pc = 0x23476Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23476c;
        }
    }
    ctx->pc = 0x2347F8u;
    // 0x2347f8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2347f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2347fc: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x2347FCu;
    {
        const bool branch_taken_0x2347fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347FCu;
        // 0x234800: 0xaf85b76c  sw          $a1, -0x4894($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948716), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347fc) {
            ctx->pc = 0x23476Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23476c;
        }
    }
    ctx->pc = 0x234804u;
label_234804:
    // 0x234804: 0x14620227  bne         $v1, $v0, . + 4 + (0x227 << 2)
    ctx->pc = 0x234804u;
    {
        const bool branch_taken_0x234804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x234808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234804u;
        // 0x234808: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234804) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x23480Cu;
    // 0x23480c: 0x8f82b778  lw          $v0, -0x4888($gp)
    ctx->pc = 0x23480cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948728)));
    // 0x234810: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x234810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x234814: 0x4c1ffd5  bgez        $a2, . + 4 + (-0x2B << 2)
    ctx->pc = 0x234814u;
    {
        const bool branch_taken_0x234814 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x234818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234814u;
        // 0x234818: 0xaf86b778  sw          $a2, -0x4888($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948728), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234814) {
            ctx->pc = 0x23476Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23476c;
        }
    }
    ctx->pc = 0x23481Cu;
    // 0x23481c: 0x8f82b774  lw          $v0, -0x488C($gp)
    ctx->pc = 0x23481cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948724)));
    // 0x234820: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x234820u;
    {
        const bool branch_taken_0x234820 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x234820) {
            ctx->pc = 0x234824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234820u;
            // 0x234824: 0x8f82b760  lw          $v0, -0x48A0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234834u;
            goto label_234834;
        }
    }
    ctx->pc = 0x234828u;
    // 0x234828: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x234828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23482c: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x23482Cu;
    {
        const bool branch_taken_0x23482c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23482Cu;
        // 0x234830: 0xaf80b778  sw          $zero, -0x4888($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948728), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23482c) {
            ctx->pc = 0x2347C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2347c0;
        }
    }
    ctx->pc = 0x234834u;
label_234834:
    // 0x234834: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x234834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234838: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x234838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x23483c: 0x2843000a  slti        $v1, $v0, 0xA
    ctx->pc = 0x23483cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x234840: 0xaf86b778  sw          $a2, -0x4888($gp)
    ctx->pc = 0x234840u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948728), GPR_U32(ctx, 6));
    // 0x234844: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x234844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x234848: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x234848u;
    {
        const bool branch_taken_0x234848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234848u;
        // 0x23484c: 0x43380a  movz        $a3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234848) {
            ctx->pc = 0x2347C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2347c0;
        }
    }
    ctx->pc = 0x234850u;
label_234850:
    // 0x234850: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x234850u;
    {
        const bool branch_taken_0x234850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234850u;
        // 0x234854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234850) {
            ctx->pc = 0x2348F4u;
            goto label_2348f4;
        }
    }
    ctx->pc = 0x234858u;
    // 0x234858: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x234858u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x23485c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23485Cu;
    {
        const bool branch_taken_0x23485c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x234860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23485Cu;
        // 0x234860: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23485c) {
            ctx->pc = 0x234874u;
            goto label_234874;
        }
    }
    ctx->pc = 0x234864u;
    // 0x234864: 0xc08d144  jal         func_234510
    ctx->pc = 0x234864u;
    SET_GPR_U32(ctx, 31, 0x23486Cu);
    ctx->pc = 0x234510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234510u, 0x234864u, 0x23486Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23486Cu;
label_23486c:
    // 0x23486c: 0x1000020d  b           . + 4 + (0x20D << 2)
    ctx->pc = 0x23486Cu;
    {
        const bool branch_taken_0x23486c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23486Cu;
        // 0x234870: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23486c) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x234874u;
label_234874:
    // 0x234874: 0x1462020b  bne         $v1, $v0, . + 4 + (0x20B << 2)
    ctx->pc = 0x234874u;
    {
        const bool branch_taken_0x234874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x234878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234874u;
        // 0x234878: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234874) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x23487Cu;
    // 0x23487c: 0x8f82b770  lw          $v0, -0x4890($gp)
    ctx->pc = 0x23487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948720)));
    // 0x234880: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x234880u;
    {
        const bool branch_taken_0x234880 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x234884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234880u;
        // 0x234884: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234880) {
            ctx->pc = 0x2348CCu;
            goto label_2348cc;
        }
    }
    ctx->pc = 0x234888u;
    // 0x234888: 0x8f83b77c  lw          $v1, -0x4884($gp)
    ctx->pc = 0x234888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948732)));
    // 0x23488c: 0xaf82b770  sw          $v0, -0x4890($gp)
    ctx->pc = 0x23488cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948720), GPR_U32(ctx, 2));
    // 0x234890: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x234890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x234894: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x234894u;
    {
        const bool branch_taken_0x234894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234894u;
        // 0x234898: 0xa3102a  slt         $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234894) {
            ctx->pc = 0x2348C4u;
            goto label_2348c4;
        }
    }
    ctx->pc = 0x23489Cu;
    // 0x23489c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23489Cu;
    {
        const bool branch_taken_0x23489c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2348A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23489Cu;
        // 0x2348a0: 0xaf80b770  sw          $zero, -0x4890($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948720), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23489c) {
            ctx->pc = 0x2348C4u;
            goto label_2348c4;
        }
    }
    ctx->pc = 0x2348A4u;
    // 0x2348a4: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x2348A4u;
    {
        const bool branch_taken_0x2348a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2348A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348A4u;
        // 0x2348a8: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348a4) {
            ctx->pc = 0x2348C4u;
            goto label_2348c4;
        }
    }
    ctx->pc = 0x2348ACu;
    // 0x2348ac: 0xc081546  jal         func_205518
    ctx->pc = 0x2348ACu;
    SET_GPR_U32(ctx, 31, 0x2348B4u);
    ctx->pc = 0x2348B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2348ACu;
    // 0x2348b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2348ACu, 0x2348B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2348B4u;
label_2348b4:
    // 0x2348b4: 0x8f83b77c  lw          $v1, -0x4884($gp)
    ctx->pc = 0x2348b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948732)));
    // 0x2348b8: 0x8f869354  lw          $a2, -0x6CAC($gp)
    ctx->pc = 0x2348b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2348bc: 0x100001f9  b           . + 4 + (0x1F9 << 2)
    ctx->pc = 0x2348BCu;
    {
        const bool branch_taken_0x2348bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2348C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348BCu;
        // 0x2348c0: 0xaf83b770  sw          $v1, -0x4890($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348bc) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x2348C4u;
label_2348c4:
    // 0x2348c4: 0x1000ffaa  b           . + 4 + (-0x56 << 2)
    ctx->pc = 0x2348C4u;
    {
        const bool branch_taken_0x2348c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2348C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348C4u;
        // 0x2348c8: 0x2404008d  addiu       $a0, $zero, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348c4) {
            ctx->pc = 0x234770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234770;
        }
    }
    ctx->pc = 0x2348CCu;
label_2348cc:
    // 0x2348cc: 0x1680ffa8  bnez        $s4, . + 4 + (-0x58 << 2)
    ctx->pc = 0x2348CCu;
    {
        const bool branch_taken_0x2348cc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2348D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348CCu;
        // 0x2348d0: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348cc) {
            ctx->pc = 0x234770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234770;
        }
    }
    ctx->pc = 0x2348D4u;
    // 0x2348d4: 0x2404008d  addiu       $a0, $zero, 0x8D
    ctx->pc = 0x2348d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2348d8: 0xc081546  jal         func_205518
    ctx->pc = 0x2348D8u;
    SET_GPR_U32(ctx, 31, 0x2348E0u);
    ctx->pc = 0x2348DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2348D8u;
    // 0x2348dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2348D8u, 0x2348E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2348E0u;
label_2348e0:
    // 0x2348e0: 0x8f86b76c  lw          $a2, -0x4894($gp)
    ctx->pc = 0x2348e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948716)));
    // 0x2348e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2348e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2348e8: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x2348e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2348ec: 0x100001ec  b           . + 4 + (0x1EC << 2)
    ctx->pc = 0x2348ECu;
    {
        const bool branch_taken_0x2348ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2348F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348ECu;
        // 0x2348f0: 0xaf86b778  sw          $a2, -0x4888($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948728), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348ec) {
            ctx->pc = 0x2350A0u;
            goto label_2350a0;
        }
    }
    ctx->pc = 0x2348F4u;
label_2348f4:
    // 0x2348f4: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x2348f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x2348f8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2348F8u;
    {
        const bool branch_taken_0x2348f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2348FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348F8u;
        // 0x2348fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348f8) {
            ctx->pc = 0x2349A0u;
            goto label_2349a0;
        }
    }
    ctx->pc = 0x234900u;
    // 0x234900: 0x96670004  lhu         $a3, 0x4($s3)
    ctx->pc = 0x234900u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x234904: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x234904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234908: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x234908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x23490c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23490Cu;
    {
        const bool branch_taken_0x23490c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x234910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23490Cu;
        // 0x234910: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23490c) {
            ctx->pc = 0x234924u;
            goto label_234924;
        }
    }
    ctx->pc = 0x234914u;
    // 0x234914: 0xc08d162  jal         func_234588
    ctx->pc = 0x234914u;
    SET_GPR_U32(ctx, 31, 0x23491Cu);
    ctx->pc = 0x234588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234588u, 0x234914u, 0x23491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23491Cu;
label_23491c:
    // 0x23491c: 0x100001e1  b           . + 4 + (0x1E1 << 2)
    ctx->pc = 0x23491Cu;
    {
        const bool branch_taken_0x23491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23491Cu;
        // 0x234920: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23491c) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x234924u;
label_234924:
    // 0x234924: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x234924u;
    {
        const bool branch_taken_0x234924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x234928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234924u;
        // 0x234928: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234924) {
            ctx->pc = 0x234978u;
            goto label_234978;
        }
    }
    ctx->pc = 0x23492Cu;
    // 0x23492c: 0x8f82b770  lw          $v0, -0x4890($gp)
    ctx->pc = 0x23492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948720)));
    // 0x234930: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x234930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x234934: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x234934u;
    {
        const bool branch_taken_0x234934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234934u;
        // 0x234938: 0x8f82b780  lw          $v0, -0x4880($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234934) {
            ctx->pc = 0x234974u;
            goto label_234974;
        }
    }
    ctx->pc = 0x23493Cu;
    // 0x23493c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23493cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x234940: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x234940u;
    {
        const bool branch_taken_0x234940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234940u;
        // 0x234944: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234940) {
            ctx->pc = 0x234978u;
            goto label_234978;
        }
    }
    ctx->pc = 0x234948u;
    // 0x234948: 0x2404008d  addiu       $a0, $zero, 0x8D
    ctx->pc = 0x234948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x23494c: 0xc081546  jal         func_205518
    ctx->pc = 0x23494Cu;
    SET_GPR_U32(ctx, 31, 0x234954u);
    ctx->pc = 0x234950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23494Cu;
    // 0x234950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23494Cu, 0x234954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234954u;
label_234954:
    // 0x234954: 0x8f82b770  lw          $v0, -0x4890($gp)
    ctx->pc = 0x234954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948720)));
    // 0x234958: 0x8f84b77c  lw          $a0, -0x4884($gp)
    ctx->pc = 0x234958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948732)));
    // 0x23495c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23495cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x234960: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x234960u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x234964: 0x106001ce  beqz        $v1, . + 4 + (0x1CE << 2)
    ctx->pc = 0x234964u;
    {
        const bool branch_taken_0x234964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x234968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234964u;
        // 0x234968: 0xaf82b770  sw          $v0, -0x4890($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234964) {
            ctx->pc = 0x2350A0u;
            goto label_2350a0;
        }
    }
    ctx->pc = 0x23496Cu;
    // 0x23496c: 0x100001cc  b           . + 4 + (0x1CC << 2)
    ctx->pc = 0x23496Cu;
    {
        const bool branch_taken_0x23496c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23496Cu;
        // 0x234970: 0xaf84b770  sw          $a0, -0x4890($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948720), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23496c) {
            ctx->pc = 0x2350A0u;
            goto label_2350a0;
        }
    }
    ctx->pc = 0x234974u;
label_234974:
    // 0x234974: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x234974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_234978:
    // 0x234978: 0x1482ff7d  bne         $a0, $v0, . + 4 + (-0x83 << 2)
    ctx->pc = 0x234978u;
    {
        const bool branch_taken_0x234978 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x23497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234978u;
        // 0x23497c: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234978) {
            ctx->pc = 0x234770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234770;
        }
    }
    ctx->pc = 0x234980u;
    // 0x234980: 0x2404008d  addiu       $a0, $zero, 0x8D
    ctx->pc = 0x234980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x234984: 0xc081546  jal         func_205518
    ctx->pc = 0x234984u;
    SET_GPR_U32(ctx, 31, 0x23498Cu);
    ctx->pc = 0x234988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234984u;
    // 0x234988: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x234984u, 0x23498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23498Cu;
label_23498c:
    // 0x23498c: 0x8f85b778  lw          $a1, -0x4888($gp)
    ctx->pc = 0x23498cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948728)));
    // 0x234990: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x234990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x234994: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x234994u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x234998: 0x100001c1  b           . + 4 + (0x1C1 << 2)
    ctx->pc = 0x234998u;
    {
        const bool branch_taken_0x234998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234998u;
        // 0x23499c: 0xaf85b76c  sw          $a1, -0x4894($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948716), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234998) {
            ctx->pc = 0x2350A0u;
            goto label_2350a0;
        }
    }
    ctx->pc = 0x2349A0u;
label_2349a0:
    // 0x2349a0: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x2349A0u;
    SET_GPR_U32(ctx, 31, 0x2349A8u);
    ctx->pc = 0x2349A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2349A0u;
    // 0x2349a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x2349A0u, 0x2349A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349A8u;
label_2349a8:
    // 0x2349a8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2349a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2349ac: 0x1040012e  beqz        $v0, . + 4 + (0x12E << 2)
    ctx->pc = 0x2349ACu;
    {
        const bool branch_taken_0x2349ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2349B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349ACu;
        // 0x2349b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2349ac) {
            ctx->pc = 0x234E68u;
            goto label_234e68;
        }
    }
    ctx->pc = 0x2349B4u;
    // 0x2349b4: 0x96670004  lhu         $a3, 0x4($s3)
    ctx->pc = 0x2349b4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2349b8: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x2349b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2349bc: 0x1464002b  bne         $v1, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2349BCu;
    {
        const bool branch_taken_0x2349bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2349C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349BCu;
        // 0x2349c0: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2349bc) {
            ctx->pc = 0x234A6Cu;
            goto label_234a6c;
        }
    }
    ctx->pc = 0x2349C4u;
    // 0x2349c4: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2349C4u;
    {
        const bool branch_taken_0x2349c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2349C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349C4u;
        // 0x2349c8: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2349c4) {
            ctx->pc = 0x2349ECu;
            goto label_2349ec;
        }
    }
    ctx->pc = 0x2349CCu;
    // 0x2349cc: 0xc081546  jal         func_205518
    ctx->pc = 0x2349CCu;
    SET_GPR_U32(ctx, 31, 0x2349D4u);
    ctx->pc = 0x2349D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2349CCu;
    // 0x2349d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2349CCu, 0x2349D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349D4u;
label_2349d4:
    // 0x2349d4: 0x8f83b77c  lw          $v1, -0x4884($gp)
    ctx->pc = 0x2349d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948732)));
    // 0x2349d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2349d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2349dc: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x2349dcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2349e0: 0xaf83b770  sw          $v1, -0x4890($gp)
    ctx->pc = 0x2349e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948720), GPR_U32(ctx, 3));
    // 0x2349e4: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x2349E4u;
    {
        const bool branch_taken_0x2349e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2349E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349E4u;
        // 0x2349e8: 0xaf80b76c  sw          $zero, -0x4894($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948716), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2349e4) {
            ctx->pc = 0x2350A0u;
            goto label_2350a0;
        }
    }
    ctx->pc = 0x2349ECu;
label_2349ec:
    // 0x2349ec: 0xc081546  jal         func_205518
    ctx->pc = 0x2349ECu;
    SET_GPR_U32(ctx, 31, 0x2349F4u);
    ctx->pc = 0x2349F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2349ECu;
    // 0x2349f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2349ECu, 0x2349F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349F4u;
label_2349f4:
    // 0x2349f4: 0x3c1201fc  lui         $s2, 0x1FC
    ctx->pc = 0x2349f4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
    // 0x2349f8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2349f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2349fc: 0x8ce22a88  lw          $v0, 0x2A88($a3)
    ctx->pc = 0x2349fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC2A88u));
    // 0x234a00: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x234A00u;
    {
        const bool branch_taken_0x234a00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x234A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A00u;
        // 0x234a04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a00) {
            ctx->pc = 0x234A38u;
            goto label_234a38;
        }
    }
    ctx->pc = 0x234A08u;
    // 0x234a08: 0x8f869354  lw          $a2, -0x6CAC($gp)
    ctx->pc = 0x234a08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x234a0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x234a0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_234a10:
    // 0x234a10: 0x2a25000a  slti        $a1, $s1, 0xA
    ctx->pc = 0x234a10u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x234a14: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x234A14u;
    {
        const bool branch_taken_0x234a14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x234A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A14u;
        // 0x234a18: 0x24e22a88  addiu       $v0, $a3, 0x2A88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 10888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a14) {
            ctx->pc = 0x234A50u;
            goto label_234a50;
        }
    }
    ctx->pc = 0x234A1Cu;
    // 0x234a1c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x234a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x234a20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x234a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x234a24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x234a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x234a28: 0x480fff9  bltz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x234A28u;
    {
        const bool branch_taken_0x234a28 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x234A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A28u;
        // 0x234a2c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a28) {
            ctx->pc = 0x234A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234a10;
        }
    }
    ctx->pc = 0x234A30u;
    // 0x234a30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x234A30u;
    {
        const bool branch_taken_0x234a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234a30) {
            ctx->pc = 0x234A40u;
            goto label_234a40;
        }
    }
    ctx->pc = 0x234A38u;
label_234a38:
    // 0x234a38: 0x8f869354  lw          $a2, -0x6CAC($gp)
    ctx->pc = 0x234a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x234a3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x234a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234a40:
    // 0x234a40: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x234A40u;
    {
        const bool branch_taken_0x234a40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x234A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A40u;
        // 0x234a44: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a40) {
            ctx->pc = 0x234A50u;
            goto label_234a50;
        }
    }
    ctx->pc = 0x234A48u;
    // 0x234a48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x234A48u;
    {
        const bool branch_taken_0x234a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A48u;
        // 0x234a4c: 0xa6620004  sh          $v0, 0x4($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a48) {
            ctx->pc = 0x234A60u;
            goto label_234a60;
        }
    }
    ctx->pc = 0x234A50u;
label_234a50:
    // 0x234a50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x234a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234a54: 0xaf80b778  sw          $zero, -0x4888($gp)
    ctx->pc = 0x234a54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948728), GPR_U32(ctx, 0));
    // 0x234a58: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x234a58u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x234a5c: 0xaf80b774  sw          $zero, -0x488C($gp)
    ctx->pc = 0x234a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948724), GPR_U32(ctx, 0));
label_234a60:
    // 0x234a60: 0xaf80b76c  sw          $zero, -0x4894($gp)
    ctx->pc = 0x234a60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948716), GPR_U32(ctx, 0));
    // 0x234a64: 0x1000018f  b           . + 4 + (0x18F << 2)
    ctx->pc = 0x234A64u;
    {
        const bool branch_taken_0x234a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A64u;
        // 0x234a68: 0xaf80b770  sw          $zero, -0x4890($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948720), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a64) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x234A6Cu;
label_234a6c:
    // 0x234a6c: 0x147000bd  bne         $v1, $s0, . + 4 + (0xBD << 2)
    ctx->pc = 0x234A6Cu;
    {
        const bool branch_taken_0x234a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x234A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A6Cu;
        // 0x234a70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a6c) {
            ctx->pc = 0x234D64u;
            goto label_234d64;
        }
    }
    ctx->pc = 0x234A74u;
    // 0x234a74: 0x8f83b770  lw          $v1, -0x4890($gp)
    ctx->pc = 0x234a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948720)));
    // 0x234a78: 0x14600082  bnez        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x234A78u;
    {
        const bool branch_taken_0x234a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x234A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A78u;
        // 0x234a7c: 0x8f88b780  lw          $t0, -0x4880($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a78) {
            ctx->pc = 0x234C84u;
            goto label_234c84;
        }
    }
    ctx->pc = 0x234A80u;
    // 0x234a80: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x234a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x234a84: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x234A84u;
    {
        const bool branch_taken_0x234a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A84u;
        // 0x234a88: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a84) {
            ctx->pc = 0x234C5Cu;
            goto label_234c5c;
        }
    }
    ctx->pc = 0x234A8Cu;
    // 0x234a8c: 0x8f8bb768  lw          $t3, -0x4898($gp)
    ctx->pc = 0x234a8cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948712)));
    // 0x234a90: 0x1564002a  bne         $t3, $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x234A90u;
    {
        const bool branch_taken_0x234a90 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 4));
        ctx->pc = 0x234A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A90u;
        // 0x234a94: 0x160182d  daddu       $v1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a90) {
            ctx->pc = 0x234B3Cu;
            goto label_234b3c;
        }
    }
    ctx->pc = 0x234A98u;
    // 0x234a98: 0x8f86b764  lw          $a2, -0x489C($gp)
    ctx->pc = 0x234a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948708)));
    // 0x234a9c: 0x8f82b76c  lw          $v0, -0x4894($gp)
    ctx->pc = 0x234a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948716)));
    // 0x234aa0: 0x10c20026  beq         $a2, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x234AA0u;
    {
        const bool branch_taken_0x234aa0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x234AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AA0u;
        // 0x234aa4: 0x3c1201fc  lui         $s2, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234aa0) {
            ctx->pc = 0x234B3Cu;
            goto label_234b3c;
        }
    }
    ctx->pc = 0x234AA8u;
    // 0x234aa8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x234aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x234aac: 0x26432a88  addiu       $v1, $s2, 0x2A88
    ctx->pc = 0x234aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 10888));
    // 0x234ab0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x234ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x234ab4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x234ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x234ab8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x234ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x234abc: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x234abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x234ac0: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x234ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x234ac4: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x234ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x234ac8: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x234ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x234acc: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x234accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x234ad0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x234ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x234ad4: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x234ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x234ad8: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x234ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x234adc: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x234adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x234ae0: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x234ae0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x234ae4: 0x68ca0007  ldl         $t2, 0x7($a2)
    ctx->pc = 0x234ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x234ae8: 0x6cca0000  ldr         $t2, 0x0($a2)
    ctx->pc = 0x234ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x234aec: 0x68cc000f  ldl         $t4, 0xF($a2)
    ctx->pc = 0x234aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x234af0: 0x6ccc0008  ldr         $t4, 0x8($a2)
    ctx->pc = 0x234af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x234af4: 0xb04a0007  sdl         $t2, 0x7($v0)
    ctx->pc = 0x234af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x234af8: 0xb44a0000  sdr         $t2, 0x0($v0)
    ctx->pc = 0x234af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x234afc: 0xb04c000f  sdl         $t4, 0xF($v0)
    ctx->pc = 0x234afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x234b00: 0x2404008d  addiu       $a0, $zero, 0x8D
    ctx->pc = 0x234b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x234b04: 0xb44c0008  sdr         $t4, 0x8($v0)
    ctx->pc = 0x234b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x234b08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234b0c: 0xaf88b780  sw          $t0, -0x4880($gp)
    ctx->pc = 0x234b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948736), GPR_U32(ctx, 8));
    // 0x234b10: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x234b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x234b14: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x234b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x234b18: 0x6ba8000f  ldl         $t0, 0xF($sp)
    ctx->pc = 0x234b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x234b1c: 0x6fa80008  ldr         $t0, 0x8($sp)
    ctx->pc = 0x234b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x234b20: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x234b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x234b24: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x234b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x234b28: 0xb0c8000f  sdl         $t0, 0xF($a2)
    ctx->pc = 0x234b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x234b2c: 0xc081546  jal         func_205518
    ctx->pc = 0x234B2Cu;
    SET_GPR_U32(ctx, 31, 0x234B34u);
    ctx->pc = 0x234B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234B2Cu;
    // 0x234b30: 0xb4c80008  sdr         $t0, 0x8($a2) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x234B2Cu, 0x234B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234B34u;
label_234b34:
    // 0x234b34: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x234B34u;
    {
        const bool branch_taken_0x234b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B34u;
        // 0x234b38: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b34) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x234B3Cu;
label_234b3c:
    // 0x234b3c: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x234B3Cu;
    {
        const bool branch_taken_0x234b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x234B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B3Cu;
        // 0x234b40: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b3c) {
            ctx->pc = 0x234C4Cu;
            goto label_234c4c;
        }
    }
    ctx->pc = 0x234B44u;
    // 0x234b44: 0x8f86b778  lw          $a2, -0x4888($gp)
    ctx->pc = 0x234b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948728)));
    // 0x234b48: 0x8f87b774  lw          $a3, -0x488C($gp)
    ctx->pc = 0x234b48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948724)));
label_234b4c:
    // 0x234b4c: 0x8f85b76c  lw          $a1, -0x4894($gp)
    ctx->pc = 0x234b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948716)));
    // 0x234b50: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x234b50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234b54: 0x2531ffff  addiu       $s1, $t1, -0x1
    ctx->pc = 0x234b54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x234b58: 0x6200021  bltz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x234B58u;
    {
        const bool branch_taken_0x234b58 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x234B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B58u;
        // 0x234b5c: 0x3c1201fc  lui         $s2, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b58) {
            ctx->pc = 0x234BE0u;
            goto label_234be0;
        }
    }
    ctx->pc = 0x234B60u;
    // 0x234b60: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x234b60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x234b64: 0x26422a88  addiu       $v0, $s2, 0x2A88
    ctx->pc = 0x234b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 10888));
    // 0x234b68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x234b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x234b6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x234b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234b70: 0x461000c  bgez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x234B70u;
    {
        const bool branch_taken_0x234b70 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x234B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B70u;
        // 0x234b74: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b70) {
            ctx->pc = 0x234BA4u;
            goto label_234ba4;
        }
    }
    ctx->pc = 0x234B78u;
    // 0x234b78: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x234b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x234b7c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x234b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_234b80:
    // 0x234b80: 0x6200018  bltz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x234B80u;
    {
        const bool branch_taken_0x234b80 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x234B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B80u;
        // 0x234b84: 0x112100  sll         $a0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b80) {
            ctx->pc = 0x234BE4u;
            goto label_234be4;
        }
    }
    ctx->pc = 0x234B88u;
    // 0x234b88: 0x25422a88  addiu       $v0, $t2, 0x2A88
    ctx->pc = 0x234b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 10888));
    // 0x234b8c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x234b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x234b90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x234b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234b94: 0x462fffa  bltzl       $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x234B94u;
    {
        const bool branch_taken_0x234b94 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x234b94) {
            ctx->pc = 0x234B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234B94u;
            // 0x234b98: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234b80;
        }
    }
    ctx->pc = 0x234B9Cu;
    // 0x234b9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x234B9Cu;
    {
        const bool branch_taken_0x234b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234b9c) {
            ctx->pc = 0x234BA8u;
            goto label_234ba8;
        }
    }
    ctx->pc = 0x234BA4u;
label_234ba4:
    // 0x234ba4: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x234ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
label_234ba8:
    // 0x234ba8: 0x620000e  bltz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x234BA8u;
    {
        const bool branch_taken_0x234ba8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x234BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BA8u;
        // 0x234bac: 0x91900  sll         $v1, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ba8) {
            ctx->pc = 0x234BE4u;
            goto label_234be4;
        }
    }
    ctx->pc = 0x234BB0u;
    // 0x234bb0: 0x25422a88  addiu       $v0, $t2, 0x2A88
    ctx->pc = 0x234bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 10888));
    // 0x234bb4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x234bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x234bb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x234bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x234bbc: 0x688c0007  ldl         $t4, 0x7($a0)
    ctx->pc = 0x234bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x234bc0: 0x6c8c0000  ldr         $t4, 0x0($a0)
    ctx->pc = 0x234bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x234bc4: 0x688d000f  ldl         $t5, 0xF($a0)
    ctx->pc = 0x234bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x234bc8: 0x6c8d0008  ldr         $t5, 0x8($a0)
    ctx->pc = 0x234bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x234bcc: 0xb06c0007  sdl         $t4, 0x7($v1)
    ctx->pc = 0x234bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x234bd0: 0xb46c0000  sdr         $t4, 0x0($v1)
    ctx->pc = 0x234bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x234bd4: 0xb06d000f  sdl         $t5, 0xF($v1)
    ctx->pc = 0x234bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x234bd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x234BD8u;
    {
        const bool branch_taken_0x234bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BD8u;
        // 0x234bdc: 0xb46d0008  sdr         $t5, 0x8($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x234bd8) {
            ctx->pc = 0x234BF8u;
            goto label_234bf8;
        }
    }
    ctx->pc = 0x234BE0u;
label_234be0:
    // 0x234be0: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x234be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
label_234be4:
    // 0x234be4: 0x26422a88  addiu       $v0, $s2, 0x2A88
    ctx->pc = 0x234be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 10888));
    // 0x234be8: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x234be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x234bec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x234becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x234bf0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x234bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234bf4: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x234bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_234bf8:
    // 0x234bf8: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x234bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x234bfc: 0x24a52b48  addiu       $a1, $a1, 0x2B48
    ctx->pc = 0x234bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11080));
    // 0x234c00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x234c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x234c04: 0x26432a88  addiu       $v1, $s2, 0x2A88
    ctx->pc = 0x234c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 10888));
    // 0x234c08: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x234c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x234c0c: 0x92100  sll         $a0, $t1, 4
    ctx->pc = 0x234c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x234c10: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x234c10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234c14: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x234c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x234c18: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x234c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x234c1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234c20: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x234c20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x234c24: 0x1064024  and         $t0, $t0, $a2
    ctx->pc = 0x234c24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x234c28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x234c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x234c2c: 0xaf88b780  sw          $t0, -0x4880($gp)
    ctx->pc = 0x234c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948736), GPR_U32(ctx, 8));
    // 0x234c30: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x234c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x234c34: 0x15600002  bnez        $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x234C34u;
    {
        const bool branch_taken_0x234c34 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x234C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C34u;
        // 0x234c38: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c34) {
            ctx->pc = 0x234C40u;
            goto label_234c40;
        }
    }
    ctx->pc = 0x234C3Cu;
    // 0x234c3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x234c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_234c40:
    // 0x234c40: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x234c40u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x234c44: 0x1000feca  b           . + 4 + (-0x136 << 2)
    ctx->pc = 0x234C44u;
    {
        const bool branch_taken_0x234c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C44u;
        // 0x234c48: 0x2404008f  addiu       $a0, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c44) {
            ctx->pc = 0x234770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234770;
        }
    }
    ctx->pc = 0x234C4Cu;
label_234c4c:
    // 0x234c4c: 0x8f869354  lw          $a2, -0x6CAC($gp)
    ctx->pc = 0x234c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x234c50: 0xa24024  and         $t0, $a1, $v0
    ctx->pc = 0x234c50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x234c54: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x234C54u;
    {
        const bool branch_taken_0x234c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C54u;
        // 0x234c58: 0xaf88b780  sw          $t0, -0x4880($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948736), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c54) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x234C5Cu;
label_234c5c:
    // 0x234c5c: 0x16800124  bnez        $s4, . + 4 + (0x124 << 2)
    ctx->pc = 0x234C5Cu;
    {
        const bool branch_taken_0x234c5c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x234C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C5Cu;
        // 0x234c60: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c5c) {
            ctx->pc = 0x2350F0u;
            goto label_2350f0;
        }
    }
    ctx->pc = 0x234C64u;
    // 0x234c64: 0x8f82b76c  lw          $v0, -0x4894($gp)
    ctx->pc = 0x234c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948716)));
    // 0x234c68: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x234c68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x234c6c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x234c6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234c70: 0xaf88b780  sw          $t0, -0x4880($gp)
    ctx->pc = 0x234c70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948736), GPR_U32(ctx, 8));
    // 0x234c74: 0xaf82b764  sw          $v0, -0x489C($gp)
    ctx->pc = 0x234c74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948708), GPR_U32(ctx, 2));
    // 0x234c78: 0x2404008d  addiu       $a0, $zero, 0x8D
    ctx->pc = 0x234c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x234c7c: 0x1000febc  b           . + 4 + (-0x144 << 2)
    ctx->pc = 0x234C7Cu;
    {
        const bool branch_taken_0x234c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C7Cu;
        // 0x234c80: 0xaf8bb768  sw          $t3, -0x4898($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948712), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c7c) {
            ctx->pc = 0x234770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234770;
        }
    }
    ctx->pc = 0x234C84u;
label_234c84:
    // 0x234c84: 0x14640016  bne         $v1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x234C84u;
    {
        const bool branch_taken_0x234c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x234C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C84u;
        // 0x234c88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c84) {
            ctx->pc = 0x234CE0u;
            goto label_234ce0;
        }
    }
    ctx->pc = 0x234C8Cu;
    // 0x234c8c: 0x8f86b76c  lw          $a2, -0x4894($gp)
    ctx->pc = 0x234c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948716)));
    // 0x234c90: 0x3c1201fc  lui         $s2, 0x1FC
    ctx->pc = 0x234c90u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
    // 0x234c94: 0x26422a88  addiu       $v0, $s2, 0x2A88
    ctx->pc = 0x234c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 10888));
    // 0x234c98: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x234c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x234c9c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x234c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x234ca0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x234ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x234ca4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x234ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x234ca8: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x234ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x234cac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x234cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x234cb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234cb4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x234cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x234cb8: 0xe3382a  slt         $a3, $a3, $v1
    ctx->pc = 0x234cb8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x234cbc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x234cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x234cc0: 0x67100b  movn        $v0, $v1, $a3
    ctx->pc = 0x234cc0u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x234cc4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x234cc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x234cc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x234cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x234ccc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x234cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_234cd0:
    // 0x234cd0: 0xc081546  jal         func_205518
    ctx->pc = 0x234CD0u;
    SET_GPR_U32(ctx, 31, 0x234CD8u);
    ctx->pc = 0x234CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234CD0u;
    // 0x234cd4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x234CD0u, 0x234CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234CD8u;
label_234cd8:
    // 0x234cd8: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x234CD8u;
    {
        const bool branch_taken_0x234cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CD8u;
        // 0x234cdc: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234cd8) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x234CE0u;
label_234ce0:
    // 0x234ce0: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x234CE0u;
    {
        const bool branch_taken_0x234ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x234CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CE0u;
        // 0x234ce4: 0x8f86b76c  lw          $a2, -0x4894($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ce0) {
            ctx->pc = 0x234D24u;
            goto label_234d24;
        }
    }
    ctx->pc = 0x234CE8u;
    // 0x234ce8: 0x3c1201fc  lui         $s2, 0x1FC
    ctx->pc = 0x234ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
    // 0x234cec: 0x26422a88  addiu       $v0, $s2, 0x2A88
    ctx->pc = 0x234cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 10888));
    // 0x234cf0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x234cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x234cf4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x234cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x234cf8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x234cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x234cfc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x234cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x234d00: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x234D00u;
    {
        const bool branch_taken_0x234d00 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x234d00) {
            ctx->pc = 0x234D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234D00u;
            // 0x234d04: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x234D08u;
            goto label_234d08;
        }
    }
    ctx->pc = 0x234D08u;
label_234d08:
    // 0x234d08: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x234d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x234d0c: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x234d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x234d10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x234d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x234d14: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x234d14u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x234d18: 0x1810  mfhi        $v1
    ctx->pc = 0x234d18u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x234d1c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x234D1Cu;
    {
        const bool branch_taken_0x234d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D1Cu;
        // 0x234d20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d1c) {
            ctx->pc = 0x234CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234cd0;
        }
    }
    ctx->pc = 0x234D24u;
label_234d24:
    // 0x234d24: 0x147000df  bne         $v1, $s0, . + 4 + (0xDF << 2)
    ctx->pc = 0x234D24u;
    {
        const bool branch_taken_0x234d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x234D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D24u;
        // 0x234d28: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d24) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x234D2Cu;
    // 0x234d2c: 0x8f83b76c  lw          $v1, -0x4894($gp)
    ctx->pc = 0x234d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948716)));
    // 0x234d30: 0x3c1201fc  lui         $s2, 0x1FC
    ctx->pc = 0x234d30u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
    // 0x234d34: 0x26422a88  addiu       $v0, $s2, 0x2A88
    ctx->pc = 0x234d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 10888));
    // 0x234d38: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x234d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x234d3c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x234d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x234d40: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x234d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x234d44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x234d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x234d48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234d4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x234d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x234d50: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x234d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x234d54: 0xc081546  jal         func_205518
    ctx->pc = 0x234D54u;
    SET_GPR_U32(ctx, 31, 0x234D5Cu);
    ctx->pc = 0x234D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234D54u;
    // 0x234d58: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x234D54u, 0x234D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234D5Cu;
label_234d5c:
    // 0x234d5c: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x234D5Cu;
    {
        const bool branch_taken_0x234d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D5Cu;
        // 0x234d60: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d5c) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x234D64u;
label_234d64:
    // 0x234d64: 0x146200cf  bne         $v1, $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x234D64u;
    {
        const bool branch_taken_0x234d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x234D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D64u;
        // 0x234d68: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d64) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x234D6Cu;
    // 0x234d6c: 0x8f88b780  lw          $t0, -0x4880($gp)
    ctx->pc = 0x234d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948736)));
    // 0x234d70: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x234d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x234d74: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x234D74u;
    {
        const bool branch_taken_0x234d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D74u;
        // 0x234d78: 0x8f82b774  lw          $v0, -0x488C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d74) {
            ctx->pc = 0x234DB4u;
            goto label_234db4;
        }
    }
    ctx->pc = 0x234D7Cu;
    // 0x234d7c: 0x8f86b778  lw          $a2, -0x4888($gp)
    ctx->pc = 0x234d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948728)));
    // 0x234d80: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x234d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234d84: 0x8f83b760  lw          $v1, -0x48A0($gp)
    ctx->pc = 0x234d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948704)));
    // 0x234d88: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x234d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x234d8c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x234d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x234d90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x234D90u;
    {
        const bool branch_taken_0x234d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D90u;
        // 0x234d94: 0x8f85b764  lw          $a1, -0x489C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d90) {
            ctx->pc = 0x234DACu;
            goto label_234dac;
        }
    }
    ctx->pc = 0x234D98u;
    // 0x234d98: 0xa6700004  sh          $s0, 0x4($s3)
    ctx->pc = 0x234d98u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x234d9c: 0xaf85b76c  sw          $a1, -0x4894($gp)
    ctx->pc = 0x234d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948716), GPR_U32(ctx, 5));
    // 0x234da0: 0xaf80b770  sw          $zero, -0x4890($gp)
    ctx->pc = 0x234da0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948720), GPR_U32(ctx, 0));
    // 0x234da4: 0x1000ff69  b           . + 4 + (-0x97 << 2)
    ctx->pc = 0x234DA4u;
    {
        const bool branch_taken_0x234da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DA4u;
        // 0x234da8: 0x8f8bb768  lw          $t3, -0x4898($gp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234da4) {
            ctx->pc = 0x234B4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234b4c;
        }
    }
    ctx->pc = 0x234DACu;
label_234dac:
    // 0x234dac: 0x1000fe70  b           . + 4 + (-0x190 << 2)
    ctx->pc = 0x234DACu;
    {
        const bool branch_taken_0x234dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DACu;
        // 0x234db0: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234dac) {
            ctx->pc = 0x234770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234770;
        }
    }
    ctx->pc = 0x234DB4u;
label_234db4:
    // 0x234db4: 0x8f83b778  lw          $v1, -0x4888($gp)
    ctx->pc = 0x234db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948728)));
    // 0x234db8: 0x8f84b760  lw          $a0, -0x48A0($gp)
    ctx->pc = 0x234db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948704)));
    // 0x234dbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x234dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x234dc0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x234dc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x234dc4: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x234DC4u;
    {
        const bool branch_taken_0x234dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DC4u;
        // 0x234dc8: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234dc4) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x234DCCu;
    // 0x234dcc: 0x168000c8  bnez        $s4, . + 4 + (0xC8 << 2)
    ctx->pc = 0x234DCCu;
    {
        const bool branch_taken_0x234dcc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x234DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DCCu;
        // 0x234dd0: 0x2404008f  addiu       $a0, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234dcc) {
            ctx->pc = 0x2350F0u;
            goto label_2350f0;
        }
    }
    ctx->pc = 0x234DD4u;
    // 0x234dd4: 0xc081546  jal         func_205518
    ctx->pc = 0x234DD4u;
    SET_GPR_U32(ctx, 31, 0x234DDCu);
    ctx->pc = 0x234DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234DD4u;
    // 0x234dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x234DD4u, 0x234DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DDCu;
label_234ddc:
    // 0x234ddc: 0x3c1201fc  lui         $s2, 0x1FC
    ctx->pc = 0x234ddcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
    // 0x234de0: 0x8f82b780  lw          $v0, -0x4880($gp)
    ctx->pc = 0x234de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948736)));
    // 0x234de4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x234de4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234de8: 0x8f86b778  lw          $a2, -0x4888($gp)
    ctx->pc = 0x234de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948728)));
    // 0x234dec: 0x34480001  ori         $t0, $v0, 0x1
    ctx->pc = 0x234decu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x234df0: 0x8ce32a88  lw          $v1, 0x2A88($a3)
    ctx->pc = 0x234df0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FC2A88u));
    // 0x234df4: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x234df4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234df8: 0xaf88b780  sw          $t0, -0x4880($gp)
    ctx->pc = 0x234df8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948736), GPR_U32(ctx, 8));
    // 0x234dfc: 0xa6700004  sh          $s0, 0x4($s3)
    ctx->pc = 0x234dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x234e00: 0xaf89b764  sw          $t1, -0x489C($gp)
    ctx->pc = 0x234e00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948708), GPR_U32(ctx, 9));
    // 0x234e04: 0xaf80b768  sw          $zero, -0x4898($gp)
    ctx->pc = 0x234e04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948712), GPR_U32(ctx, 0));
    // 0x234e08: 0x4600010  bltz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x234E08u;
    {
        const bool branch_taken_0x234e08 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x234E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E08u;
        // 0x234e0c: 0xaf80b76c  sw          $zero, -0x4894($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948716), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e08) {
            ctx->pc = 0x234E4Cu;
            goto label_234e4c;
        }
    }
    ctx->pc = 0x234E10u;
    // 0x234e10: 0x8f869354  lw          $a2, -0x6CAC($gp)
    ctx->pc = 0x234e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x234e14: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x234e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x234e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x234e1c: 0x0  nop
    ctx->pc = 0x234e1cu;
    // NOP
label_234e20:
    // 0x234e20: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x234e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x234e24: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x234E24u;
    {
        const bool branch_taken_0x234e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E24u;
        // 0x234e28: 0xaf85b76c  sw          $a1, -0x4894($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948716), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e24) {
            ctx->pc = 0x234E54u;
            goto label_234e54;
        }
    }
    ctx->pc = 0x234E2Cu;
    // 0x234e2c: 0x24e22a88  addiu       $v0, $a3, 0x2A88
    ctx->pc = 0x234e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 10888));
    // 0x234e30: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x234e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x234e34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x234e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x234e38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x234e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x234e3c: 0x483fff8  bgezl       $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x234E3Cu;
    {
        const bool branch_taken_0x234e3c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x234e3c) {
            ctx->pc = 0x234E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234E3Cu;
            // 0x234e40: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234e20;
        }
    }
    ctx->pc = 0x234E44u;
    // 0x234e44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x234E44u;
    {
        const bool branch_taken_0x234e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E44u;
        // 0x234e48: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e44) {
            ctx->pc = 0x234E58u;
            goto label_234e58;
        }
    }
    ctx->pc = 0x234E4Cu;
label_234e4c:
    // 0x234e4c: 0x8f869354  lw          $a2, -0x6CAC($gp)
    ctx->pc = 0x234e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x234e50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234e54:
    // 0x234e54: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x234e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_234e58:
    // 0x234e58: 0x50a20092  beql        $a1, $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x234E58u;
    {
        const bool branch_taken_0x234e58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x234e58) {
            ctx->pc = 0x234E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234E58u;
            // 0x234e5c: 0xaf89b76c  sw          $t1, -0x4894($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294948716), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x234E60u;
    // 0x234e60: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x234E60u;
    {
        const bool branch_taken_0x234e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234e60) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x234E68u;
label_234e68:
    // 0x234e68: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x234e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x234e6c: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x234E6Cu;
    SET_GPR_U32(ctx, 31, 0x234E74u);
    ctx->pc = 0x234E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E6Cu;
    // 0x234e70: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x234E6Cu, 0x234E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E74u;
label_234e74:
    // 0x234e74: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x234e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x234e78: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x234E78u;
    {
        const bool branch_taken_0x234e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E78u;
        // 0x234e7c: 0x8f88b780  lw          $t0, -0x4880($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e78) {
            ctx->pc = 0x234EF8u;
            goto label_234ef8;
        }
    }
    ctx->pc = 0x234E80u;
    // 0x234e80: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x234e80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e84: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x234e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x234e88: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x234E88u;
    {
        const bool branch_taken_0x234e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E88u;
        // 0x234e8c: 0x8f82b768  lw          $v0, -0x4898($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e88) {
            ctx->pc = 0x234EE0u;
            goto label_234ee0;
        }
    }
    ctx->pc = 0x234E90u;
    // 0x234e90: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x234E90u;
    {
        const bool branch_taken_0x234e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E90u;
        // 0x234e94: 0x8f85b764  lw          $a1, -0x489C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e90) {
            ctx->pc = 0x234EACu;
            goto label_234eac;
        }
    }
    ctx->pc = 0x234E98u;
    // 0x234e98: 0x8f86b764  lw          $a2, -0x489C($gp)
    ctx->pc = 0x234e98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948708)));
    // 0x234e9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x234e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234ea0: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x234ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x234ea4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x234EA4u;
    {
        const bool branch_taken_0x234ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EA4u;
        // 0x234ea8: 0xaf86b778  sw          $a2, -0x4888($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948728), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ea4) {
            ctx->pc = 0x234EB8u;
            goto label_234eb8;
        }
    }
    ctx->pc = 0x234EACu;
label_234eac:
    // 0x234eac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x234eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x234eb0: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x234eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x234eb4: 0xaf85b76c  sw          $a1, -0x4894($gp)
    ctx->pc = 0x234eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948716), GPR_U32(ctx, 5));
label_234eb8:
    // 0x234eb8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x234eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x234ebc: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x234ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x234ec0: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x234ec0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x234ec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234ec8: 0xc081546  jal         func_205518
    ctx->pc = 0x234EC8u;
    SET_GPR_U32(ctx, 31, 0x234ED0u);
    ctx->pc = 0x234ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234EC8u;
    // 0x234ecc: 0xaf88b780  sw          $t0, -0x4880($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948736), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x234EC8u, 0x234ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234ED0u;
label_234ed0:
    // 0x234ed0: 0xc080ea2  jal         func_203A88
    ctx->pc = 0x234ED0u;
    SET_GPR_U32(ctx, 31, 0x234ED8u);
    ctx->pc = 0x234ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234ED0u;
    // 0x234ed4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203A88u, 0x234ED0u, 0x234ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234ED8u;
label_234ed8:
    // 0x234ed8: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x234ED8u;
    {
        const bool branch_taken_0x234ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234ED8u;
        // 0x234edc: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ed8) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x234EE0u;
label_234ee0:
    // 0x234ee0: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x234ee0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x234ee4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x234ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234ee8: 0x1043006e  beq         $v0, $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x234EE8u;
    {
        const bool branch_taken_0x234ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x234EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EE8u;
        // 0x234eec: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ee8) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x234EF0u;
    // 0x234ef0: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x234EF0u;
    {
        const bool branch_taken_0x234ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EF0u;
        // 0x234ef4: 0xa6630004  sh          $v1, 0x4($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ef0) {
            ctx->pc = 0x234ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234ed0;
        }
    }
    ctx->pc = 0x234EF8u;
label_234ef8:
    // 0x234ef8: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x234EF8u;
    SET_GPR_U32(ctx, 31, 0x234F00u);
    ctx->pc = 0x234EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234EF8u;
    // 0x234efc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x234EF8u, 0x234F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234F00u;
label_234f00:
    // 0x234f00: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x234f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x234f04: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x234F04u;
    {
        const bool branch_taken_0x234f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F04u;
        // 0x234f08: 0x8f82b780  lw          $v0, -0x4880($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f04) {
            ctx->pc = 0x234F84u;
            goto label_234f84;
        }
    }
    ctx->pc = 0x234F0Cu;
    // 0x234f0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x234f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x234f10: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x234F10u;
    {
        const bool branch_taken_0x234f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F10u;
        // 0x234f14: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f10) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x234F18u;
    // 0x234f18: 0x96670004  lhu         $a3, 0x4($s3)
    ctx->pc = 0x234f18u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x234f1c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x234f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x234f20: 0x14e20060  bne         $a3, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x234F20u;
    {
        const bool branch_taken_0x234f20 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x234f20) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x234F28u;
    // 0x234f28: 0x16800071  bnez        $s4, . + 4 + (0x71 << 2)
    ctx->pc = 0x234F28u;
    {
        const bool branch_taken_0x234f28 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x234F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F28u;
        // 0x234f2c: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f28) {
            ctx->pc = 0x2350F0u;
            goto label_2350f0;
        }
    }
    ctx->pc = 0x234F30u;
    // 0x234f30: 0xc081546  jal         func_205518
    ctx->pc = 0x234F30u;
    SET_GPR_U32(ctx, 31, 0x234F38u);
    ctx->pc = 0x234F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F30u;
    // 0x234f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x234F30u, 0x234F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234F38u;
label_234f38:
    // 0x234f38: 0x8f83b76c  lw          $v1, -0x4894($gp)
    ctx->pc = 0x234f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948716)));
    // 0x234f3c: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x234f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x234f40: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x234F40u;
    {
        const bool branch_taken_0x234f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F40u;
        // 0x234f44: 0x3c1201fc  lui         $s2, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f40) {
            ctx->pc = 0x234F74u;
            goto label_234f74;
        }
    }
    ctx->pc = 0x234F48u;
    // 0x234f48: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x234f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x234f4c: 0x26442a88  addiu       $a0, $s2, 0x2A88
    ctx->pc = 0x234f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 10888));
    // 0x234f50: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x234f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x234f54: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x234f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x234f58: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x234f58u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x234f5c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x234f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x234f60: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x234f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x234f64: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x234F64u;
    SET_GPR_U32(ctx, 31, 0x234F6Cu);
    ctx->pc = 0x234F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F64u;
    // 0x234f68: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x234F64u, 0x234F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234F6Cu;
label_234f6c:
    // 0x234f6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x234F6Cu;
    {
        const bool branch_taken_0x234f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F6Cu;
        // 0x234f70: 0x26432a88  addiu       $v1, $s2, 0x2A88 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 10888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f6c) {
            ctx->pc = 0x234F78u;
            goto label_234f78;
        }
    }
    ctx->pc = 0x234F74u;
label_234f74:
    // 0x234f74: 0x26432a88  addiu       $v1, $s2, 0x2A88
    ctx->pc = 0x234f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 10888));
label_234f78:
    // 0x234f78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x234f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x234f7c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x234F7Cu;
    {
        const bool branch_taken_0x234f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F7Cu;
        // 0x234f80: 0xac620090  sw          $v0, 0x90($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f7c) {
            ctx->pc = 0x2350A0u;
            goto label_2350a0;
        }
    }
    ctx->pc = 0x234F84u;
label_234f84:
    // 0x234f84: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x234F84u;
    SET_GPR_U32(ctx, 31, 0x234F8Cu);
    ctx->pc = 0x234F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F84u;
    // 0x234f88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x234F84u, 0x234F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234F8Cu;
label_234f8c:
    // 0x234f8c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x234f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x234f90: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x234F90u;
    {
        const bool branch_taken_0x234f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F90u;
        // 0x234f94: 0x8f82b780  lw          $v0, -0x4880($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f90) {
            ctx->pc = 0x2350A0u;
            goto label_2350a0;
        }
    }
    ctx->pc = 0x234F98u;
    // 0x234f98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x234f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x234f9c: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x234F9Cu;
    {
        const bool branch_taken_0x234f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F9Cu;
        // 0x234fa0: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f9c) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x234FA4u;
    // 0x234fa4: 0x96670004  lhu         $a3, 0x4($s3)
    ctx->pc = 0x234fa4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x234fa8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x234fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x234fac: 0x14e2003d  bne         $a3, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x234FACu;
    {
        const bool branch_taken_0x234fac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x234FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FACu;
        // 0x234fb0: 0x8f82b770  lw          $v0, -0x4890($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234fac) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x234FB4u;
    // 0x234fb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x234FB4u;
    {
        const bool branch_taken_0x234fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FB4u;
        // 0x234fb8: 0x8f82b76c  lw          $v0, -0x4894($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234fb4) {
            ctx->pc = 0x234FC4u;
            goto label_234fc4;
        }
    }
    ctx->pc = 0x234FBCu;
    // 0x234fbc: 0x1680004d  bnez        $s4, . + 4 + (0x4D << 2)
    ctx->pc = 0x234FBCu;
    {
        const bool branch_taken_0x234fbc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x234FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FBCu;
        // 0x234fc0: 0x27c32c18  addiu       $v1, $fp, 0x2C18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 11288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234fbc) {
            ctx->pc = 0x2350F4u;
            goto label_2350f4;
        }
    }
    ctx->pc = 0x234FC4u;
label_234fc4:
    // 0x234fc4: 0x3c1201fc  lui         $s2, 0x1FC
    ctx->pc = 0x234fc4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
    // 0x234fc8: 0x26502a88  addiu       $s0, $s2, 0x2A88
    ctx->pc = 0x234fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 10888));
    // 0x234fcc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x234fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x234fd0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x234fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x234fd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x234fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234fd8: 0x4600031  bltz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x234FD8u;
    {
        const bool branch_taken_0x234fd8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x234FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FD8u;
        // 0x234fdc: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234fd8) {
            ctx->pc = 0x2350A0u;
            goto label_2350a0;
        }
    }
    ctx->pc = 0x234FE0u;
    // 0x234fe0: 0xc081546  jal         func_205518
    ctx->pc = 0x234FE0u;
    SET_GPR_U32(ctx, 31, 0x234FE8u);
    ctx->pc = 0x234FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234FE0u;
    // 0x234fe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x234FE0u, 0x234FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234FE8u;
label_234fe8:
    // 0x234fe8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x234fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234fec: 0x8f87b76c  lw          $a3, -0x4894($gp)
    ctx->pc = 0x234fecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948716)));
    // 0x234ff0: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x234ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x234ff4: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x234ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x234ff8: 0x8f869354  lw          $a2, -0x6CAC($gp)
    ctx->pc = 0x234ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x234ffc: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x234ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x235000: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x235000u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235004: 0x825021  addu        $t2, $a0, $v0
    ctx->pc = 0x235004u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x235008: 0x834821  addu        $t1, $a0, $v1
    ctx->pc = 0x235008u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x23500c: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x23500cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x235010: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x235010u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x235014: 0x824021  addu        $t0, $a0, $v0
    ctx->pc = 0x235014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x235018: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x235018u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23501c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x23501cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x235020: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x235020u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235024: 0x0  nop
    ctx->pc = 0x235024u;
    // NOP
label_235028:
    // 0x235028: 0x12270017  beq         $s1, $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x235028u;
    {
        const bool branch_taken_0x235028 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 7));
        ctx->pc = 0x23502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235028u;
        // 0x23502c: 0x8f85b770  lw          $a1, -0x4890($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235028) {
            ctx->pc = 0x235088u;
            goto label_235088;
        }
    }
    ctx->pc = 0x235030u;
    // 0x235030: 0x10ad000f  beq         $a1, $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x235030u;
    {
        const bool branch_taken_0x235030 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 13));
        ctx->pc = 0x235034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235030u;
        // 0x235034: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235030) {
            ctx->pc = 0x235070u;
            goto label_235070;
        }
    }
    ctx->pc = 0x235038u;
    // 0x235038: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x235038u;
    {
        const bool branch_taken_0x235038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235038) {
            ctx->pc = 0x235050u;
            goto label_235050;
        }
    }
    ctx->pc = 0x235040u;
    // 0x235040: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x235040u;
    {
        const bool branch_taken_0x235040 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x235040) {
            ctx->pc = 0x235044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235040u;
            // 0x235044: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235068u;
            goto label_235068;
        }
    }
    ctx->pc = 0x235048u;
    // 0x235048: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x235048u;
    {
        const bool branch_taken_0x235048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235048u;
        // 0x23504c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235048) {
            ctx->pc = 0x23508Cu;
            goto label_23508c;
        }
    }
    ctx->pc = 0x235050u;
label_235050:
    // 0x235050: 0x50ac000a  beql        $a1, $t4, . + 4 + (0xA << 2)
    ctx->pc = 0x235050u;
    {
        const bool branch_taken_0x235050 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 12));
        if (branch_taken_0x235050) {
            ctx->pc = 0x235054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235050u;
            // 0x235054: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23507Cu;
            goto label_23507c;
        }
    }
    ctx->pc = 0x235058u;
    // 0x235058: 0x50ab000a  beql        $a1, $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x235058u;
    {
        const bool branch_taken_0x235058 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 11));
        if (branch_taken_0x235058) {
            ctx->pc = 0x23505Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235058u;
            // 0x23505c: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235084u;
            goto label_235084;
        }
    }
    ctx->pc = 0x235060u;
    // 0x235060: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x235060u;
    {
        const bool branch_taken_0x235060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235060u;
        // 0x235064: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235060) {
            ctx->pc = 0x23508Cu;
            goto label_23508c;
        }
    }
    ctx->pc = 0x235068u;
label_235068:
    // 0x235068: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x235068u;
    {
        const bool branch_taken_0x235068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235068u;
        // 0x23506c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235068) {
            ctx->pc = 0x235088u;
            goto label_235088;
        }
    }
    ctx->pc = 0x235070u;
label_235070:
    // 0x235070: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x235070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x235074: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x235074u;
    {
        const bool branch_taken_0x235074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235074u;
        // 0x235078: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235074) {
            ctx->pc = 0x235088u;
            goto label_235088;
        }
    }
    ctx->pc = 0x23507Cu;
label_23507c:
    // 0x23507c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23507Cu;
    {
        const bool branch_taken_0x23507c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23507Cu;
        // 0x235080: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23507c) {
            ctx->pc = 0x235088u;
            goto label_235088;
        }
    }
    ctx->pc = 0x235084u;
label_235084:
    // 0x235084: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x235084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_235088:
    // 0x235088: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x235088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_23508c:
    // 0x23508c: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x23508cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x235090: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x235090u;
    {
        const bool branch_taken_0x235090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235090u;
        // 0x235094: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235090) {
            ctx->pc = 0x235028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235028;
        }
    }
    ctx->pc = 0x235098u;
    // 0x235098: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x235098u;
    {
        const bool branch_taken_0x235098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x235098) {
            ctx->pc = 0x2350A4u;
            goto label_2350a4;
        }
    }
    ctx->pc = 0x2350A0u;
label_2350a0:
    // 0x2350a0: 0x8f869354  lw          $a2, -0x6CAC($gp)
    ctx->pc = 0x2350a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
label_2350a4:
    // 0x2350a4: 0x56800012  bnel        $s4, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2350A4u;
    {
        const bool branch_taken_0x2350a4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2350a4) {
            ctx->pc = 0x2350A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2350A4u;
            // 0x2350a8: 0x96670004  lhu         $a3, 0x4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2350F0u;
            goto label_2350f0;
        }
    }
    ctx->pc = 0x2350ACu;
    // 0x2350ac: 0x26e4fff8  addiu       $a0, $s7, -0x8
    ctx->pc = 0x2350acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967288));
    // 0x2350b0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2350b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2350b4: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2350b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2350b8: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x2350b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x2350bc: 0x24632b28  addiu       $v1, $v1, 0x2B28
    ctx->pc = 0x2350bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11048));
    // 0x2350c0: 0x3c1201fc  lui         $s2, 0x1FC
    ctx->pc = 0x2350c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
    // 0x2350c4: 0x26452a88  addiu       $a1, $s2, 0x2A88
    ctx->pc = 0x2350c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 10888));
    // 0x2350c8: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x2350c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2350cc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2350ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2350d0:
    // 0x2350d0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2350d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2350d4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2350d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2350d8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2350d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2350dc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2350dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2350e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2350e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2350e4: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2350E4u;
    {
        const bool branch_taken_0x2350e4 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2350e4) {
            ctx->pc = 0x2350D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2350d0;
        }
    }
    ctx->pc = 0x2350ECu;
    // 0x2350ec: 0x96670004  lhu         $a3, 0x4($s3)
    ctx->pc = 0x2350ecu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_2350f0:
    // 0x2350f0: 0x27c32c18  addiu       $v1, $fp, 0x2C18
    ctx->pc = 0x2350f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 11288));
label_2350f4:
    // 0x2350f4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2350f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2350f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2350f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2350fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2350fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235100: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x235100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235104: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x235104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x235108: 0x24683b58  addiu       $t0, $v1, 0x3B58
    ctx->pc = 0x235108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 15192));
    // 0x23510c: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x23510cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x235110: 0x8ca202a0  lw          $v0, 0x2A0($a1)
    ctx->pc = 0x235110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 672)));
    // 0x235114: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x235114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235118: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x235118u;
    {
        const bool branch_taken_0x235118 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x23511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235118u;
        // 0x23511c: 0xad020080  sw          $v0, 0x80($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235118) {
            ctx->pc = 0x235128u;
            goto label_235128;
        }
    }
    ctx->pc = 0x235120u;
    // 0x235120: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x235120u;
    {
        const bool branch_taken_0x235120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235120u;
        // 0x235124: 0x8ca60690  lw          $a2, 0x690($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235120) {
            ctx->pc = 0x235190u;
            goto label_235190;
        }
    }
    ctx->pc = 0x235128u;
label_235128:
    // 0x235128: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x235128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23512c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23512Cu;
    {
        const bool branch_taken_0x23512c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x235130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23512Cu;
        // 0x235130: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23512c) {
            ctx->pc = 0x23513Cu;
            goto label_23513c;
        }
    }
    ctx->pc = 0x235134u;
    // 0x235134: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x235134u;
    {
        const bool branch_taken_0x235134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235134u;
        // 0x235138: 0x8ca602a4  lw          $a2, 0x2A4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235134) {
            ctx->pc = 0x235190u;
            goto label_235190;
        }
    }
    ctx->pc = 0x23513Cu;
label_23513c:
    // 0x23513c: 0x14820015  bne         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23513Cu;
    {
        const bool branch_taken_0x23513c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x235140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23513Cu;
        // 0x235140: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23513c) {
            ctx->pc = 0x235194u;
            goto label_235194;
        }
    }
    ctx->pc = 0x235144u;
    // 0x235144: 0x8f82b780  lw          $v0, -0x4880($gp)
    ctx->pc = 0x235144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948736)));
    // 0x235148: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x235148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23514c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23514Cu;
    {
        const bool branch_taken_0x23514c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23514Cu;
        // 0x235150: 0x8f82b770  lw          $v0, -0x4890($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23514c) {
            ctx->pc = 0x235160u;
            goto label_235160;
        }
    }
    ctx->pc = 0x235154u;
    // 0x235154: 0x8ca602a8  lw          $a2, 0x2A8($a1)
    ctx->pc = 0x235154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 680)));
    // 0x235158: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x235158u;
    {
        const bool branch_taken_0x235158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235158u;
        // 0x23515c: 0xad000080  sw          $zero, 0x80($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235158) {
            ctx->pc = 0x235194u;
            goto label_235194;
        }
    }
    ctx->pc = 0x235160u;
label_235160:
    // 0x235160: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x235160u;
    {
        const bool branch_taken_0x235160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235160) {
            ctx->pc = 0x235178u;
            goto label_235178;
        }
    }
    ctx->pc = 0x235168u;
    // 0x235168: 0x52800009  beql        $s4, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x235168u;
    {
        const bool branch_taken_0x235168 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x235168) {
            ctx->pc = 0x23516Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235168u;
            // 0x23516c: 0x8ca602ac  lw          $a2, 0x2AC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 684)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235190u;
            goto label_235190;
        }
    }
    ctx->pc = 0x235170u;
    // 0x235170: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x235170u;
    {
        const bool branch_taken_0x235170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235170u;
        // 0x235174: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235170) {
            ctx->pc = 0x235194u;
            goto label_235194;
        }
    }
    ctx->pc = 0x235178u;
label_235178:
    // 0x235178: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x235178u;
    {
        const bool branch_taken_0x235178 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235178u;
        // 0x23517c: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235178) {
            ctx->pc = 0x235194u;
            goto label_235194;
        }
    }
    ctx->pc = 0x235180u;
    // 0x235180: 0x52800004  beql        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x235180u;
    {
        const bool branch_taken_0x235180 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x235180) {
            ctx->pc = 0x235184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235180u;
            // 0x235184: 0x8ca602b4  lw          $a2, 0x2B4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235194u;
            goto label_235194;
        }
    }
    ctx->pc = 0x235188u;
    // 0x235188: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x235188u;
    {
        const bool branch_taken_0x235188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235188u;
        // 0x23518c: 0x8ca602b0  lw          $a2, 0x2B0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235188) {
            ctx->pc = 0x235194u;
            goto label_235194;
        }
    }
    ctx->pc = 0x235190u;
label_235190:
    // 0x235190: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x235190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_235194:
    // 0x235194: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x235194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235198: 0x24823b58  addiu       $v0, $a0, 0x3B58
    ctx->pc = 0x235198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15192));
    // 0x23519c: 0x14e30006  bne         $a3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23519Cu;
    {
        const bool branch_taken_0x23519c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x2351A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23519Cu;
        // 0x2351a0: 0xac460060  sw          $a2, 0x60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23519c) {
            ctx->pc = 0x2351B8u;
            goto label_2351b8;
        }
    }
    ctx->pc = 0x2351A4u;
    // 0x2351a4: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x2351a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2351a8: 0x2403ffcf  addiu       $v1, $zero, -0x31
    ctx->pc = 0x2351a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x2351ac: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2351acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2351b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2351b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2351b4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2351b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_2351b8:
    // 0x2351b8: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x2351b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x2351bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2351bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2351c0: 0x26103b48  addiu       $s0, $s0, 0x3B48
    ctx->pc = 0x2351c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15176));
    // 0x2351c4: 0xc08c08e  jal         func_230238
    ctx->pc = 0x2351C4u;
    SET_GPR_U32(ctx, 31, 0x2351CCu);
    ctx->pc = 0x2351C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2351C4u;
    // 0x2351c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230238u, 0x2351C4u, 0x2351CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2351CCu;
label_2351cc:
    // 0x2351cc: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2351ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2351d0: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x2351D0u;
    SET_GPR_U32(ctx, 31, 0x2351D8u);
    ctx->pc = 0x2351D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2351D0u;
    // 0x2351d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x2351D0u, 0x2351D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2351D8u;
label_2351d8:
    // 0x2351d8: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x2351d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x2351dc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2351dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2351e0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2351e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2351e4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2351e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2351e8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2351e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2351ec: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2351ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2351f0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2351f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2351f4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2351f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2351f8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2351f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2351fc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2351fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235200: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x235200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235204: 0x3e00008  jr          $ra
    ctx->pc = 0x235204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235204u;
        // 0x235208: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23520Cu;
}
