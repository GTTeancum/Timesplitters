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

// Function: gunPreload
// Address: 0x28d460 - 0x28d818
void gunPreload_0x28d460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunPreload_0x28d460");
#endif

    switch (ctx->pc) {
        case 0x28d488u: goto label_28d488;
        case 0x28d4a8u: goto label_28d4a8;
        case 0x28d4e8u: goto label_28d4e8;
        case 0x28d4f0u: goto label_28d4f0;
        case 0x28d524u: goto label_28d524;
        case 0x28d538u: goto label_28d538;
        case 0x28d550u: goto label_28d550;
        case 0x28d564u: goto label_28d564;
        case 0x28d588u: goto label_28d588;
        case 0x28d590u: goto label_28d590;
        case 0x28d5c4u: goto label_28d5c4;
        case 0x28d5d8u: goto label_28d5d8;
        case 0x28d5f0u: goto label_28d5f0;
        case 0x28d604u: goto label_28d604;
        case 0x28d620u: goto label_28d620;
        case 0x28d644u: goto label_28d644;
        case 0x28d64cu: goto label_28d64c;
        case 0x28d680u: goto label_28d680;
        case 0x28d694u: goto label_28d694;
        case 0x28d6acu: goto label_28d6ac;
        case 0x28d6c0u: goto label_28d6c0;
        case 0x28d6d8u: goto label_28d6d8;
        case 0x28d6e0u: goto label_28d6e0;
        case 0x28d714u: goto label_28d714;
        case 0x28d728u: goto label_28d728;
        case 0x28d740u: goto label_28d740;
        case 0x28d754u: goto label_28d754;
        case 0x28d76cu: goto label_28d76c;
        case 0x28d774u: goto label_28d774;
        case 0x28d77cu: goto label_28d77c;
        case 0x28d784u: goto label_28d784;
        case 0x28d78cu: goto label_28d78c;
        case 0x28d794u: goto label_28d794;
        case 0x28d79cu: goto label_28d79c;
        case 0x28d7a4u: goto label_28d7a4;
        case 0x28d7acu: goto label_28d7ac;
        case 0x28d7b4u: goto label_28d7b4;
        case 0x28d7bcu: goto label_28d7bc;
        case 0x28d7c4u: goto label_28d7c4;
        case 0x28d7ccu: goto label_28d7cc;
        case 0x28d7d4u: goto label_28d7d4;
        case 0x28d7dcu: goto label_28d7dc;
        case 0x28d7e4u: goto label_28d7e4;
        case 0x28d7ecu: goto label_28d7ec;
        default: break;
    }

    ctx->pc = 0x28d460u;

    // 0x28d460: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x28d460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x28d464: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28d464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28d468: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x28d468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x28d46c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x28d46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x28d470: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x28d470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x28d474: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x28d474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28d478: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28d478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28d47c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28d47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28d480: 0xc089de4  jal         func_227790
    ctx->pc = 0x28D480u;
    SET_GPR_U32(ctx, 31, 0x28D488u);
    ctx->pc = 0x28D484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D480u;
    // 0x28d484: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227790u, 0x28D480u, 0x28D488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D488u;
label_28d488:
    // 0x28d488: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28d488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d48c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x28d48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x28d490: 0x8c62c4f8  lw          $v0, -0x3B08($v1)
    ctx->pc = 0x28d490u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x28d494: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x28d494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x28d498: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x28D498u;
    {
        const bool branch_taken_0x28d498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D498u;
        // 0x28d49c: 0x3c160037  lui         $s6, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d498) {
            ctx->pc = 0x28D60Cu;
            goto label_28d60c;
        }
    }
    ctx->pc = 0x28D4A0u;
    // 0x28d4a0: 0xc087c18  jal         func_21F060
    ctx->pc = 0x28D4A0u;
    SET_GPR_U32(ctx, 31, 0x28D4A8u);
    ctx->pc = 0x21F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F060u, 0x28D4A0u, 0x28D4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D4A8u;
label_28d4a8:
    // 0x28d4a8: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x28d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x28d4ac: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x28d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28d4b0: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x28d4b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x28d4b4: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x28D4B4u;
    {
        const bool branch_taken_0x28d4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D4B4u;
        // 0x28d4b8: 0x318c0  sll         $v1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4b4) {
            ctx->pc = 0x28D60Cu;
            goto label_28d60c;
        }
    }
    ctx->pc = 0x28D4BCu;
    // 0x28d4bc: 0x26c290f8  addiu       $v0, $s6, -0x6F08
    ctx->pc = 0x28d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294938872));
    // 0x28d4c0: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x28d4c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28d4c4: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x28d4c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x28d4c8: 0x4800026  bltz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x28D4C8u;
    {
        const bool branch_taken_0x28d4c8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D4C8u;
        // 0x28d4cc: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4c8) {
            ctx->pc = 0x28D564u;
            goto label_28d564;
        }
    }
    ctx->pc = 0x28D4D0u;
    // 0x28d4d0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x28d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x28d4d4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x28d4d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28d4d8: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x28d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x28d4dc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x28d4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28d4e0: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D4E0u;
    SET_GPR_U32(ctx, 31, 0x28D4E8u);
    ctx->pc = 0x28D4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D4E0u;
    // 0x28d4e4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D4E0u, 0x28D4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D4E8u;
label_28d4e8:
    // 0x28d4e8: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D4E8u;
    SET_GPR_U32(ctx, 31, 0x28D4F0u);
    ctx->pc = 0x28D4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D4E8u;
    // 0x28d4ec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D4E8u, 0x28D4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D4F0u;
label_28d4f0:
    // 0x28d4f0: 0x8f829f54  lw          $v0, -0x60AC($gp)
    ctx->pc = 0x28d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
    // 0x28d4f4: 0x8f839f4c  lw          $v1, -0x60B4($gp)
    ctx->pc = 0x28d4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x28d4f8: 0x8f849f50  lw          $a0, -0x60B0($gp)
    ctx->pc = 0x28d4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x28d4fc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x28d4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x28d500: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x28d500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x28d504: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28d504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28d508: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x28D508u;
    {
        const bool branch_taken_0x28d508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d508) {
            ctx->pc = 0x28D50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D508u;
            // 0x28d50c: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D540u;
            goto label_28d540;
        }
    }
    ctx->pc = 0x28D510u;
    // 0x28d510: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x28d510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x28d514: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D514u;
    {
        const bool branch_taken_0x28d514 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28d514) {
            ctx->pc = 0x28D518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D514u;
            // 0x28d518: 0x8e0400ec  lw          $a0, 0xEC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D528u;
            goto label_28d528;
        }
    }
    ctx->pc = 0x28D51Cu;
    // 0x28d51c: 0xc0814ae  jal         func_2052B8
    ctx->pc = 0x28D51Cu;
    SET_GPR_U32(ctx, 31, 0x28D524u);
    ctx->pc = 0x2052B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2052B8u, 0x28D51Cu, 0x28D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D524u;
label_28d524:
    // 0x28d524: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x28d524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_28d528:
    // 0x28d528: 0x482000f  bltzl       $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x28D528u;
    {
        const bool branch_taken_0x28d528 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28d528) {
            ctx->pc = 0x28D52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D528u;
            // 0x28d52c: 0x86240004  lh          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D568u;
            goto label_28d568;
        }
    }
    ctx->pc = 0x28D530u;
    // 0x28d530: 0xc0814ae  jal         func_2052B8
    ctx->pc = 0x28D530u;
    SET_GPR_U32(ctx, 31, 0x28D538u);
    ctx->pc = 0x2052B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2052B8u, 0x28D530u, 0x28D538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D538u;
label_28d538:
    // 0x28d538: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28D538u;
    {
        const bool branch_taken_0x28d538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D538u;
        // 0x28d53c: 0x86240004  lh          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d538) {
            ctx->pc = 0x28D568u;
            goto label_28d568;
        }
    }
    ctx->pc = 0x28D540u;
label_28d540:
    // 0x28d540: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D540u;
    {
        const bool branch_taken_0x28d540 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28d540) {
            ctx->pc = 0x28D544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D540u;
            // 0x28d544: 0x8e0400e8  lw          $a0, 0xE8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D554u;
            goto label_28d554;
        }
    }
    ctx->pc = 0x28D548u;
    // 0x28d548: 0xc0814ae  jal         func_2052B8
    ctx->pc = 0x28D548u;
    SET_GPR_U32(ctx, 31, 0x28D550u);
    ctx->pc = 0x2052B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2052B8u, 0x28D548u, 0x28D550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D550u;
label_28d550:
    // 0x28d550: 0x8e0400e8  lw          $a0, 0xE8($s0)
    ctx->pc = 0x28d550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_28d554:
    // 0x28d554: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D554u;
    {
        const bool branch_taken_0x28d554 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28d554) {
            ctx->pc = 0x28D558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D554u;
            // 0x28d558: 0x86240004  lh          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D568u;
            goto label_28d568;
        }
    }
    ctx->pc = 0x28D55Cu;
    // 0x28d55c: 0xc0814ae  jal         func_2052B8
    ctx->pc = 0x28D55Cu;
    SET_GPR_U32(ctx, 31, 0x28D564u);
    ctx->pc = 0x2052B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2052B8u, 0x28D55Cu, 0x28D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D564u;
label_28d564:
    // 0x28d564: 0x86240004  lh          $a0, 0x4($s1)
    ctx->pc = 0x28d564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_28d568:
    // 0x28d568: 0x4800028  bltz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x28D568u;
    {
        const bool branch_taken_0x28d568 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D568u;
        // 0x28d56c: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d568) {
            ctx->pc = 0x28D60Cu;
            goto label_28d60c;
        }
    }
    ctx->pc = 0x28D570u;
    // 0x28d570: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x28d570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x28d574: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x28d574u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28d578: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x28d578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x28d57c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x28d57cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28d580: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D580u;
    SET_GPR_U32(ctx, 31, 0x28D588u);
    ctx->pc = 0x28D584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D580u;
    // 0x28d584: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D580u, 0x28D588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D588u;
label_28d588:
    // 0x28d588: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D588u;
    SET_GPR_U32(ctx, 31, 0x28D590u);
    ctx->pc = 0x28D58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D588u;
    // 0x28d58c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D588u, 0x28D590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D590u;
label_28d590:
    // 0x28d590: 0x8f829f54  lw          $v0, -0x60AC($gp)
    ctx->pc = 0x28d590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
    // 0x28d594: 0x8f839f4c  lw          $v1, -0x60B4($gp)
    ctx->pc = 0x28d594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x28d598: 0x8f849f50  lw          $a0, -0x60B0($gp)
    ctx->pc = 0x28d598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x28d59c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x28d59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x28d5a0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x28d5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x28d5a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28d5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28d5a8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x28D5A8u;
    {
        const bool branch_taken_0x28d5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d5a8) {
            ctx->pc = 0x28D5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D5A8u;
            // 0x28d5ac: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D5E0u;
            goto label_28d5e0;
        }
    }
    ctx->pc = 0x28D5B0u;
    // 0x28d5b0: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x28d5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x28d5b4: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D5B4u;
    {
        const bool branch_taken_0x28d5b4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28d5b4) {
            ctx->pc = 0x28D5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D5B4u;
            // 0x28d5b8: 0x8e0400ec  lw          $a0, 0xEC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D5C8u;
            goto label_28d5c8;
        }
    }
    ctx->pc = 0x28D5BCu;
    // 0x28d5bc: 0xc0814ae  jal         func_2052B8
    ctx->pc = 0x28D5BCu;
    SET_GPR_U32(ctx, 31, 0x28D5C4u);
    ctx->pc = 0x2052B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2052B8u, 0x28D5BCu, 0x28D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D5C4u;
label_28d5c4:
    // 0x28d5c4: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x28d5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_28d5c8:
    // 0x28d5c8: 0x4800011  bltz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28D5C8u;
    {
        const bool branch_taken_0x28d5c8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5C8u;
        // 0x28d5cc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5c8) {
            ctx->pc = 0x28D610u;
            goto label_28d610;
        }
    }
    ctx->pc = 0x28D5D0u;
    // 0x28d5d0: 0xc0814ae  jal         func_2052B8
    ctx->pc = 0x28D5D0u;
    SET_GPR_U32(ctx, 31, 0x28D5D8u);
    ctx->pc = 0x2052B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2052B8u, 0x28D5D0u, 0x28D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D5D8u;
label_28d5d8:
    // 0x28d5d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28D5D8u;
    {
        const bool branch_taken_0x28d5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5D8u;
        // 0x28d5dc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5d8) {
            ctx->pc = 0x28D610u;
            goto label_28d610;
        }
    }
    ctx->pc = 0x28D5E0u;
label_28d5e0:
    // 0x28d5e0: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D5E0u;
    {
        const bool branch_taken_0x28d5e0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28d5e0) {
            ctx->pc = 0x28D5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D5E0u;
            // 0x28d5e4: 0x8e0400e8  lw          $a0, 0xE8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D5F4u;
            goto label_28d5f4;
        }
    }
    ctx->pc = 0x28D5E8u;
    // 0x28d5e8: 0xc0814ae  jal         func_2052B8
    ctx->pc = 0x28D5E8u;
    SET_GPR_U32(ctx, 31, 0x28D5F0u);
    ctx->pc = 0x2052B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2052B8u, 0x28D5E8u, 0x28D5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D5F0u;
label_28d5f0:
    // 0x28d5f0: 0x8e0400e8  lw          $a0, 0xE8($s0)
    ctx->pc = 0x28d5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_28d5f4:
    // 0x28d5f4: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28D5F4u;
    {
        const bool branch_taken_0x28d5f4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5F4u;
        // 0x28d5f8: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5f4) {
            ctx->pc = 0x28D610u;
            goto label_28d610;
        }
    }
    ctx->pc = 0x28D5FCu;
    // 0x28d5fc: 0xc0814ae  jal         func_2052B8
    ctx->pc = 0x28D5FCu;
    SET_GPR_U32(ctx, 31, 0x28D604u);
    ctx->pc = 0x2052B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2052B8u, 0x28D5FCu, 0x28D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D604u;
label_28d604:
    // 0x28d604: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28D604u;
    {
        const bool branch_taken_0x28d604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D604u;
        // 0x28d608: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d604) {
            ctx->pc = 0x28D610u;
            goto label_28d610;
        }
    }
    ctx->pc = 0x28D60Cu;
label_28d60c:
    // 0x28d60c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x28d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_28d610:
    // 0x28d610: 0x24140190  addiu       $s4, $zero, 0x190
    ctx->pc = 0x28d610u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x28d614: 0x24556218  addiu       $s5, $v0, 0x6218
    ctx->pc = 0x28d614u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x28d618: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x28d618u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28d61c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x28d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28d620:
    // 0x28d620: 0x26c390f8  addiu       $v1, $s6, -0x6F08
    ctx->pc = 0x28d620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294938872));
    // 0x28d624: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28d624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28d628: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x28d628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28d62c: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x28d62cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x28d630: 0x4800023  bltz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x28D630u;
    {
        const bool branch_taken_0x28d630 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D630u;
        // 0x28d634: 0x941018  mult        $v0, $a0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d630) {
            ctx->pc = 0x28D6C0u;
            goto label_28d6c0;
        }
    }
    ctx->pc = 0x28D638u;
    // 0x28d638: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x28d638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x28d63c: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D63Cu;
    SET_GPR_U32(ctx, 31, 0x28D644u);
    ctx->pc = 0x28D640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D63Cu;
    // 0x28d640: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D63Cu, 0x28D644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D644u;
label_28d644:
    // 0x28d644: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D644u;
    SET_GPR_U32(ctx, 31, 0x28D64Cu);
    ctx->pc = 0x28D648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D644u;
    // 0x28d648: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D644u, 0x28D64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D64Cu;
label_28d64c:
    // 0x28d64c: 0x8f829f54  lw          $v0, -0x60AC($gp)
    ctx->pc = 0x28d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
    // 0x28d650: 0x8f839f4c  lw          $v1, -0x60B4($gp)
    ctx->pc = 0x28d650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x28d654: 0x8f849f50  lw          $a0, -0x60B0($gp)
    ctx->pc = 0x28d654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x28d658: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x28d658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x28d65c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x28d65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x28d660: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28d660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28d664: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x28D664u;
    {
        const bool branch_taken_0x28d664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d664) {
            ctx->pc = 0x28D668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D664u;
            // 0x28d668: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D69Cu;
            goto label_28d69c;
        }
    }
    ctx->pc = 0x28D66Cu;
    // 0x28d66c: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x28d66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x28d670: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D670u;
    {
        const bool branch_taken_0x28d670 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28d670) {
            ctx->pc = 0x28D674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D670u;
            // 0x28d674: 0x8e0400ec  lw          $a0, 0xEC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D684u;
            goto label_28d684;
        }
    }
    ctx->pc = 0x28D678u;
    // 0x28d678: 0xc0814ae  jal         func_2052B8
    ctx->pc = 0x28D678u;
    SET_GPR_U32(ctx, 31, 0x28D680u);
    ctx->pc = 0x2052B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2052B8u, 0x28D678u, 0x28D680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D680u;
label_28d680:
    // 0x28d680: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x28d680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_28d684:
    // 0x28d684: 0x482000f  bltzl       $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x28D684u;
    {
        const bool branch_taken_0x28d684 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28d684) {
            ctx->pc = 0x28D688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D684u;
            // 0x28d688: 0x86220004  lh          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D6C4u;
            goto label_28d6c4;
        }
    }
    ctx->pc = 0x28D68Cu;
    // 0x28d68c: 0xc0814ae  jal         func_2052B8
    ctx->pc = 0x28D68Cu;
    SET_GPR_U32(ctx, 31, 0x28D694u);
    ctx->pc = 0x2052B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2052B8u, 0x28D68Cu, 0x28D694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D694u;
label_28d694:
    // 0x28d694: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28D694u;
    {
        const bool branch_taken_0x28d694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D694u;
        // 0x28d698: 0x86220004  lh          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d694) {
            ctx->pc = 0x28D6C4u;
            goto label_28d6c4;
        }
    }
    ctx->pc = 0x28D69Cu;
label_28d69c:
    // 0x28d69c: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D69Cu;
    {
        const bool branch_taken_0x28d69c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28d69c) {
            ctx->pc = 0x28D6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D69Cu;
            // 0x28d6a0: 0x8e0400e8  lw          $a0, 0xE8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D6B0u;
            goto label_28d6b0;
        }
    }
    ctx->pc = 0x28D6A4u;
    // 0x28d6a4: 0xc0814ae  jal         func_2052B8
    ctx->pc = 0x28D6A4u;
    SET_GPR_U32(ctx, 31, 0x28D6ACu);
    ctx->pc = 0x2052B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2052B8u, 0x28D6A4u, 0x28D6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D6ACu;
label_28d6ac:
    // 0x28d6ac: 0x8e0400e8  lw          $a0, 0xE8($s0)
    ctx->pc = 0x28d6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_28d6b0:
    // 0x28d6b0: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D6B0u;
    {
        const bool branch_taken_0x28d6b0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28d6b0) {
            ctx->pc = 0x28D6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D6B0u;
            // 0x28d6b4: 0x86220004  lh          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D6C4u;
            goto label_28d6c4;
        }
    }
    ctx->pc = 0x28D6B8u;
    // 0x28d6b8: 0xc0814ae  jal         func_2052B8
    ctx->pc = 0x28D6B8u;
    SET_GPR_U32(ctx, 31, 0x28D6C0u);
    ctx->pc = 0x2052B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2052B8u, 0x28D6B8u, 0x28D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D6C0u;
label_28d6c0:
    // 0x28d6c0: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x28d6c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_28d6c4:
    // 0x28d6c4: 0x4400023  bltz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x28D6C4u;
    {
        const bool branch_taken_0x28d6c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6C4u;
        // 0x28d6c8: 0x541818  mult        $v1, $v0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d6c4) {
            ctx->pc = 0x28D754u;
            goto label_28d754;
        }
    }
    ctx->pc = 0x28D6CCu;
    // 0x28d6cc: 0x758021  addu        $s0, $v1, $s5
    ctx->pc = 0x28d6ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x28d6d0: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D6D0u;
    SET_GPR_U32(ctx, 31, 0x28D6D8u);
    ctx->pc = 0x28D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D6D0u;
    // 0x28d6d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D6D0u, 0x28D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D6D8u;
label_28d6d8:
    // 0x28d6d8: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D6D8u;
    SET_GPR_U32(ctx, 31, 0x28D6E0u);
    ctx->pc = 0x28D6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D6D8u;
    // 0x28d6dc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D6D8u, 0x28D6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D6E0u;
label_28d6e0:
    // 0x28d6e0: 0x8f829f54  lw          $v0, -0x60AC($gp)
    ctx->pc = 0x28d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
    // 0x28d6e4: 0x8f839f4c  lw          $v1, -0x60B4($gp)
    ctx->pc = 0x28d6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x28d6e8: 0x8f849f50  lw          $a0, -0x60B0($gp)
    ctx->pc = 0x28d6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x28d6ec: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x28d6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x28d6f0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x28d6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x28d6f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28d6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28d6f8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x28D6F8u;
    {
        const bool branch_taken_0x28d6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d6f8) {
            ctx->pc = 0x28D6FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D6F8u;
            // 0x28d6fc: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D730u;
            goto label_28d730;
        }
    }
    ctx->pc = 0x28D700u;
    // 0x28d700: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x28d700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x28d704: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D704u;
    {
        const bool branch_taken_0x28d704 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28d704) {
            ctx->pc = 0x28D708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D704u;
            // 0x28d708: 0x8e0400ec  lw          $a0, 0xEC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D718u;
            goto label_28d718;
        }
    }
    ctx->pc = 0x28D70Cu;
    // 0x28d70c: 0xc0814ae  jal         func_2052B8
    ctx->pc = 0x28D70Cu;
    SET_GPR_U32(ctx, 31, 0x28D714u);
    ctx->pc = 0x2052B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2052B8u, 0x28D70Cu, 0x28D714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D714u;
label_28d714:
    // 0x28d714: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x28d714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_28d718:
    // 0x28d718: 0x480000f  bltz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x28D718u;
    {
        const bool branch_taken_0x28d718 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D718u;
        // 0x28d71c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d718) {
            ctx->pc = 0x28D758u;
            goto label_28d758;
        }
    }
    ctx->pc = 0x28D720u;
    // 0x28d720: 0xc0814ae  jal         func_2052B8
    ctx->pc = 0x28D720u;
    SET_GPR_U32(ctx, 31, 0x28D728u);
    ctx->pc = 0x2052B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2052B8u, 0x28D720u, 0x28D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D728u;
label_28d728:
    // 0x28d728: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28D728u;
    {
        const bool branch_taken_0x28d728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D728u;
        // 0x28d72c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d728) {
            ctx->pc = 0x28D75Cu;
            goto label_28d75c;
        }
    }
    ctx->pc = 0x28D730u;
label_28d730:
    // 0x28d730: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D730u;
    {
        const bool branch_taken_0x28d730 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28d730) {
            ctx->pc = 0x28D734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D730u;
            // 0x28d734: 0x8e0400e8  lw          $a0, 0xE8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D744u;
            goto label_28d744;
        }
    }
    ctx->pc = 0x28D738u;
    // 0x28d738: 0xc0814ae  jal         func_2052B8
    ctx->pc = 0x28D738u;
    SET_GPR_U32(ctx, 31, 0x28D740u);
    ctx->pc = 0x2052B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2052B8u, 0x28D738u, 0x28D740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D740u;
label_28d740:
    // 0x28d740: 0x8e0400e8  lw          $a0, 0xE8($s0)
    ctx->pc = 0x28d740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_28d744:
    // 0x28d744: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D744u;
    {
        const bool branch_taken_0x28d744 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28d744) {
            ctx->pc = 0x28D748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D744u;
            // 0x28d748: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D758u;
            goto label_28d758;
        }
    }
    ctx->pc = 0x28D74Cu;
    // 0x28d74c: 0xc0814ae  jal         func_2052B8
    ctx->pc = 0x28D74Cu;
    SET_GPR_U32(ctx, 31, 0x28D754u);
    ctx->pc = 0x2052B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2052B8u, 0x28D74Cu, 0x28D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D754u;
label_28d754:
    // 0x28d754: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x28d754u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_28d758:
    // 0x28d758: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x28d758u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_28d75c:
    // 0x28d75c: 0x663ffb0  bgezl       $s3, . + 4 + (-0x50 << 2)
    ctx->pc = 0x28D75Cu;
    {
        const bool branch_taken_0x28d75c = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x28d75c) {
            ctx->pc = 0x28D760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D75Cu;
            // 0x28d760: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d620;
        }
    }
    ctx->pc = 0x28D764u;
    // 0x28d764: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D764u;
    SET_GPR_U32(ctx, 31, 0x28D76Cu);
    ctx->pc = 0x28D768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D764u;
    // 0x28d768: 0x240400da  addiu       $a0, $zero, 0xDA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D764u, 0x28D76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D76Cu;
label_28d76c:
    // 0x28d76c: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D76Cu;
    SET_GPR_U32(ctx, 31, 0x28D774u);
    ctx->pc = 0x28D770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D76Cu;
    // 0x28d770: 0x240400db  addiu       $a0, $zero, 0xDB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D76Cu, 0x28D774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D774u;
label_28d774:
    // 0x28d774: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D774u;
    SET_GPR_U32(ctx, 31, 0x28D77Cu);
    ctx->pc = 0x28D778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D774u;
    // 0x28d778: 0x240400dc  addiu       $a0, $zero, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D774u, 0x28D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D77Cu;
label_28d77c:
    // 0x28d77c: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D77Cu;
    SET_GPR_U32(ctx, 31, 0x28D784u);
    ctx->pc = 0x28D780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D77Cu;
    // 0x28d780: 0x240400dd  addiu       $a0, $zero, 0xDD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D77Cu, 0x28D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D784u;
label_28d784:
    // 0x28d784: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D784u;
    SET_GPR_U32(ctx, 31, 0x28D78Cu);
    ctx->pc = 0x28D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D784u;
    // 0x28d788: 0x240400de  addiu       $a0, $zero, 0xDE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D784u, 0x28D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D78Cu;
label_28d78c:
    // 0x28d78c: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D78Cu;
    SET_GPR_U32(ctx, 31, 0x28D794u);
    ctx->pc = 0x28D790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D78Cu;
    // 0x28d790: 0x240400df  addiu       $a0, $zero, 0xDF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D78Cu, 0x28D794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D794u;
label_28d794:
    // 0x28d794: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D794u;
    SET_GPR_U32(ctx, 31, 0x28D79Cu);
    ctx->pc = 0x28D798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D794u;
    // 0x28d798: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D794u, 0x28D79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D79Cu;
label_28d79c:
    // 0x28d79c: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D79Cu;
    SET_GPR_U32(ctx, 31, 0x28D7A4u);
    ctx->pc = 0x28D7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D79Cu;
    // 0x28d7a0: 0x240400e1  addiu       $a0, $zero, 0xE1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D79Cu, 0x28D7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7A4u;
label_28d7a4:
    // 0x28d7a4: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D7A4u;
    SET_GPR_U32(ctx, 31, 0x28D7ACu);
    ctx->pc = 0x28D7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D7A4u;
    // 0x28d7a8: 0x240400e6  addiu       $a0, $zero, 0xE6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D7A4u, 0x28D7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7ACu;
label_28d7ac:
    // 0x28d7ac: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D7ACu;
    SET_GPR_U32(ctx, 31, 0x28D7B4u);
    ctx->pc = 0x28D7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D7ACu;
    // 0x28d7b0: 0x240400e7  addiu       $a0, $zero, 0xE7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D7ACu, 0x28D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7B4u;
label_28d7b4:
    // 0x28d7b4: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D7B4u;
    SET_GPR_U32(ctx, 31, 0x28D7BCu);
    ctx->pc = 0x28D7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D7B4u;
    // 0x28d7b8: 0x240400e2  addiu       $a0, $zero, 0xE2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D7B4u, 0x28D7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7BCu;
label_28d7bc:
    // 0x28d7bc: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D7BCu;
    SET_GPR_U32(ctx, 31, 0x28D7C4u);
    ctx->pc = 0x28D7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D7BCu;
    // 0x28d7c0: 0x240400e3  addiu       $a0, $zero, 0xE3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D7BCu, 0x28D7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7C4u;
label_28d7c4:
    // 0x28d7c4: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D7C4u;
    SET_GPR_U32(ctx, 31, 0x28D7CCu);
    ctx->pc = 0x28D7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D7C4u;
    // 0x28d7c8: 0x240400e4  addiu       $a0, $zero, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D7C4u, 0x28D7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7CCu;
label_28d7cc:
    // 0x28d7cc: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D7CCu;
    SET_GPR_U32(ctx, 31, 0x28D7D4u);
    ctx->pc = 0x28D7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D7CCu;
    // 0x28d7d0: 0x240400e5  addiu       $a0, $zero, 0xE5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D7CCu, 0x28D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7D4u;
label_28d7d4:
    // 0x28d7d4: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D7D4u;
    SET_GPR_U32(ctx, 31, 0x28D7DCu);
    ctx->pc = 0x28D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D7D4u;
    // 0x28d7d8: 0x240400e8  addiu       $a0, $zero, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D7D4u, 0x28D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7DCu;
label_28d7dc:
    // 0x28d7dc: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D7DCu;
    SET_GPR_U32(ctx, 31, 0x28D7E4u);
    ctx->pc = 0x28D7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D7DCu;
    // 0x28d7e0: 0x240401a5  addiu       $a0, $zero, 0x1A5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 421));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D7DCu, 0x28D7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7E4u;
label_28d7e4:
    // 0x28d7e4: 0xc099c88  jal         func_267220
    ctx->pc = 0x28D7E4u;
    SET_GPR_U32(ctx, 31, 0x28D7ECu);
    ctx->pc = 0x28D7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D7E4u;
    // 0x28d7e8: 0x240401a8  addiu       $a0, $zero, 0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28D7E4u, 0x28D7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7ECu;
label_28d7ec:
    // 0x28d7ec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28d7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28d7f0: 0x240400e9  addiu       $a0, $zero, 0xE9
    ctx->pc = 0x28d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
    // 0x28d7f4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x28d7f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d7f8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x28d7f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d7fc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28d7fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d800: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28d800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d804: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28d804u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d808: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28d808u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d80c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28d80cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d810: 0x8099c88  j           func_267220
    ctx->pc = 0x28D810u;
    ctx->pc = 0x28D814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D810u;
    // 0x28d814: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    propAddPreLoad_0x267220(rdram, ctx, runtime); return;
    ctx->pc = 0x28D818u;
}
