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

// Function: message_pageTick
// Address: 0x2313b0 - 0x231458
void message_pageTick_0x2313b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("message_pageTick_0x2313b0");
#endif

    switch (ctx->pc) {
        case 0x2313b0u: goto label_2313b0;
        case 0x2313b4u: goto label_2313b4;
        case 0x2313b8u: goto label_2313b8;
        case 0x2313bcu: goto label_2313bc;
        case 0x2313c0u: goto label_2313c0;
        case 0x2313c4u: goto label_2313c4;
        case 0x2313c8u: goto label_2313c8;
        case 0x2313ccu: goto label_2313cc;
        case 0x2313d0u: goto label_2313d0;
        case 0x2313d4u: goto label_2313d4;
        case 0x2313d8u: goto label_2313d8;
        case 0x2313dcu: goto label_2313dc;
        case 0x2313e0u: goto label_2313e0;
        case 0x2313e4u: goto label_2313e4;
        case 0x2313e8u: goto label_2313e8;
        case 0x2313ecu: goto label_2313ec;
        case 0x2313f0u: goto label_2313f0;
        case 0x2313f4u: goto label_2313f4;
        case 0x2313f8u: goto label_2313f8;
        case 0x2313fcu: goto label_2313fc;
        case 0x231400u: goto label_231400;
        case 0x231404u: goto label_231404;
        case 0x231408u: goto label_231408;
        case 0x23140cu: goto label_23140c;
        case 0x231410u: goto label_231410;
        case 0x231414u: goto label_231414;
        case 0x231418u: goto label_231418;
        case 0x23141cu: goto label_23141c;
        case 0x231420u: goto label_231420;
        case 0x231424u: goto label_231424;
        case 0x231428u: goto label_231428;
        case 0x23142cu: goto label_23142c;
        case 0x231430u: goto label_231430;
        case 0x231434u: goto label_231434;
        case 0x231438u: goto label_231438;
        case 0x23143cu: goto label_23143c;
        case 0x231440u: goto label_231440;
        case 0x231444u: goto label_231444;
        case 0x231448u: goto label_231448;
        case 0x23144cu: goto label_23144c;
        case 0x231450u: goto label_231450;
        case 0x231454u: goto label_231454;
        default: break;
    }

    ctx->pc = 0x2313b0u;

label_2313b0:
    // 0x2313b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2313b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2313b4:
    // 0x2313b4: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x2313b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_2313b8:
    // 0x2313b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2313b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2313bc:
    // 0x2313bc: 0x24050410  addiu       $a1, $zero, 0x410
    ctx->pc = 0x2313bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_2313c0:
    // 0x2313c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2313c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2313c4:
    // 0x2313c4: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x2313c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
label_2313c8:
    // 0x2313c8: 0x246319c0  addiu       $v1, $v1, 0x19C0
    ctx->pc = 0x2313c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6592));
label_2313cc:
    // 0x2313cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2313ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2313d0:
    // 0x2313d0: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2313d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2313d4:
    // 0x2313d4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2313d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2313d8:
    // 0x2313d8: 0x8e020400  lw          $v0, 0x400($s0)
    ctx->pc = 0x2313d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1024)));
label_2313dc:
    // 0x2313dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2313e0:
    if (ctx->pc == 0x2313E0u) {
        ctx->pc = 0x2313E4u;
        goto label_2313e4;
    }
    ctx->pc = 0x2313DCu;
    {
        const bool branch_taken_0x2313dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2313dc) {
            ctx->pc = 0x2313F4u;
            goto label_2313f4;
        }
    }
    ctx->pc = 0x2313E4u;
label_2313e4:
    // 0x2313e4: 0x40f809  jalr        $v0
label_2313e8:
    if (ctx->pc == 0x2313E8u) {
        ctx->pc = 0x2313E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313E4u;
        // 0x2313e8: 0x8e040408  lw          $a0, 0x408($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1032)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2313ECu;
        goto label_2313ec;
    }
    ctx->pc = 0x2313E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2313ECu);
        ctx->pc = 0x2313E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313E4u;
        // 0x2313e8: 0x8e040408  lw          $a0, 0x408($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1032)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2313E4u, 0x2313ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2313ECu;
label_2313ec:
    // 0x2313ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_2313f0:
    if (ctx->pc == 0x2313F0u) {
        ctx->pc = 0x2313F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313ECu;
        // 0x2313f0: 0xae02040c  sw          $v0, 0x40C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2313F4u;
        goto label_2313f4;
    }
    ctx->pc = 0x2313ECu;
    {
        const bool branch_taken_0x2313ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2313F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313ECu;
        // 0x2313f0: 0xae02040c  sw          $v0, 0x40C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313ec) {
            ctx->pc = 0x231400u;
            goto label_231400;
        }
    }
    ctx->pc = 0x2313F4u;
label_2313f4:
    // 0x2313f4: 0xc08c4e2  jal         func_231388
label_2313f8:
    if (ctx->pc == 0x2313F8u) {
        ctx->pc = 0x2313F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313F4u;
        // 0x2313f8: 0x8e040408  lw          $a0, 0x408($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1032)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2313FCu;
        goto label_2313fc;
    }
    ctx->pc = 0x2313F4u;
    SET_GPR_U32(ctx, 31, 0x2313FCu);
    ctx->pc = 0x2313F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2313F4u;
    // 0x2313f8: 0x8e040408  lw          $a0, 0x408($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1032)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231388u, 0x2313F4u, 0x2313FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2313FCu;
label_2313fc:
    // 0x2313fc: 0xae02040c  sw          $v0, 0x40C($s0)
    ctx->pc = 0x2313fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1036), GPR_U32(ctx, 2));
label_231400:
    // 0x231400: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x231400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_231404:
    // 0x231404: 0xc08c4b0  jal         func_2312C0
label_231408:
    if (ctx->pc == 0x231408u) {
        ctx->pc = 0x231408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231404u;
        // 0x231408: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23140Cu;
        goto label_23140c;
    }
    ctx->pc = 0x231404u;
    SET_GPR_U32(ctx, 31, 0x23140Cu);
    ctx->pc = 0x231408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231404u;
    // 0x231408: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2312C0u, 0x231404u, 0x23140Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23140Cu;
label_23140c:
    // 0x23140c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_231410:
    if (ctx->pc == 0x231410u) {
        ctx->pc = 0x231410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23140Cu;
        // 0x231410: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231414u;
        goto label_231414;
    }
    ctx->pc = 0x23140Cu;
    {
        const bool branch_taken_0x23140c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23140Cu;
        // 0x231410: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23140c) {
            ctx->pc = 0x231444u;
            goto label_231444;
        }
    }
    ctx->pc = 0x231414u;
label_231414:
    // 0x231414: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x231414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_231418:
    // 0x231418: 0xc081546  jal         func_205518
label_23141c:
    if (ctx->pc == 0x23141Cu) {
        ctx->pc = 0x23141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231418u;
        // 0x23141c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231420u;
        goto label_231420;
    }
    ctx->pc = 0x231418u;
    SET_GPR_U32(ctx, 31, 0x231420u);
    ctx->pc = 0x23141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231418u;
    // 0x23141c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x231418u, 0x231420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231420u;
label_231420:
    // 0x231420: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x231420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_231424:
    // 0x231424: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x231424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_231428:
    // 0x231428: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x231428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_23142c:
    // 0x23142c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23142cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_231430:
    // 0x231430: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x231430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_231434:
    // 0x231434: 0x8e040408  lw          $a0, 0x408($s0)
    ctx->pc = 0x231434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1032)));
label_231438:
    // 0x231438: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23143c:
    // 0x23143c: 0x8080ea2  j           func_203A88
label_231440:
    if (ctx->pc == 0x231440u) {
        ctx->pc = 0x231440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23143Cu;
        // 0x231440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231444u;
        goto label_231444;
    }
    ctx->pc = 0x23143Cu;
    ctx->pc = 0x231440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23143Cu;
    // 0x231440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A88u;
    joyClearAll_0x203a88(rdram, ctx, runtime); return;
    ctx->pc = 0x231444u;
label_231444:
    // 0x231444: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x231444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_231448:
    // 0x231448: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x231448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23144c:
    // 0x23144c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23144cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_231450:
    // 0x231450: 0x808bbf4  j           func_22EFD0
label_231454:
    if (ctx->pc == 0x231454u) {
        ctx->pc = 0x231454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231450u;
        // 0x231454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231458u;
        goto label_fallthrough_0x231450;
    }
    ctx->pc = 0x231450u;
    ctx->pc = 0x231454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231450u;
    // 0x231454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EFD0u;
    zoomboxTick_0x22efd0(rdram, ctx, runtime); return;
label_fallthrough_0x231450:
    ctx->pc = 0x231458u;
}
