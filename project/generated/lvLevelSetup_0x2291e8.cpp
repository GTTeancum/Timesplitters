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

// Function: lvLevelSetup
// Address: 0x2291e8 - 0x2298b8
void lvLevelSetup_0x2291e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvLevelSetup_0x2291e8");
#endif

    switch (ctx->pc) {
        case 0x229218u: goto label_229218;
        case 0x229264u: goto label_229264;
        case 0x229274u: goto label_229274;
        case 0x22927cu: goto label_22927c;
        case 0x229290u: goto label_229290;
        case 0x2292a4u: goto label_2292a4;
        case 0x2292b4u: goto label_2292b4;
        case 0x2292e0u: goto label_2292e0;
        case 0x2292f0u: goto label_2292f0;
        case 0x229300u: goto label_229300;
        case 0x229328u: goto label_229328;
        case 0x229340u: goto label_229340;
        case 0x229350u: goto label_229350;
        case 0x22943cu: goto label_22943c;
        case 0x229478u: goto label_229478;
        case 0x22948cu: goto label_22948c;
        case 0x2294a0u: goto label_2294a0;
        case 0x2294c8u: goto label_2294c8;
        case 0x229530u: goto label_229530;
        case 0x22953cu: goto label_22953c;
        case 0x229548u: goto label_229548;
        case 0x2295e4u: goto label_2295e4;
        case 0x229608u: goto label_229608;
        case 0x229618u: goto label_229618;
        case 0x229630u: goto label_229630;
        case 0x229688u: goto label_229688;
        case 0x229698u: goto label_229698;
        case 0x2296c0u: goto label_2296c0;
        case 0x2296e0u: goto label_2296e0;
        case 0x229708u: goto label_229708;
        case 0x229718u: goto label_229718;
        case 0x229750u: goto label_229750;
        case 0x229778u: goto label_229778;
        case 0x2297a4u: goto label_2297a4;
        case 0x2297c0u: goto label_2297c0;
        case 0x2297d8u: goto label_2297d8;
        case 0x2297e8u: goto label_2297e8;
        case 0x229800u: goto label_229800;
        case 0x229838u: goto label_229838;
        case 0x229848u: goto label_229848;
        case 0x229878u: goto label_229878;
        default: break;
    }

    ctx->pc = 0x2291e8u;

    // 0x2291e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2291e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2291ec: 0x8f849f70  lw          $a0, -0x6090($gp)
    ctx->pc = 0x2291ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2291f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2291f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2291f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2291f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2291f8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2291f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2291fc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2291fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x229200: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x229200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x229204: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x229204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x229208: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x229208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22920c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22920cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x229210: 0xc089ee4  jal         func_227B90
    ctx->pc = 0x229210u;
    SET_GPR_U32(ctx, 31, 0x229218u);
    ctx->pc = 0x229214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229210u;
    // 0x229214: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B90u, 0x229210u, 0x229218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229218u;
label_229218:
    // 0x229218: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x229218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22921c: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x22921cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x229220: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x229220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x229224: 0x10620199  beq         $v1, $v0, . + 4 + (0x199 << 2)
    ctx->pc = 0x229224u;
    {
        const bool branch_taken_0x229224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x229228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229224u;
        // 0x229228: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229224) {
            ctx->pc = 0x22988Cu;
            goto label_22988c;
        }
    }
    ctx->pc = 0x22922Cu;
    // 0x22922c: 0x10620197  beq         $v1, $v0, . + 4 + (0x197 << 2)
    ctx->pc = 0x22922Cu;
    {
        const bool branch_taken_0x22922c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x229230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22922Cu;
        // 0x229230: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22922c) {
            ctx->pc = 0x22988Cu;
            goto label_22988c;
        }
    }
    ctx->pc = 0x229234u;
    // 0x229234: 0x10620195  beq         $v1, $v0, . + 4 + (0x195 << 2)
    ctx->pc = 0x229234u;
    {
        const bool branch_taken_0x229234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x229238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229234u;
        // 0x229238: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229234) {
            ctx->pc = 0x22988Cu;
            goto label_22988c;
        }
    }
    ctx->pc = 0x22923Cu;
    // 0x22923c: 0x10620193  beq         $v1, $v0, . + 4 + (0x193 << 2)
    ctx->pc = 0x22923Cu;
    {
        const bool branch_taken_0x22923c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x229240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22923Cu;
        // 0x229240: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22923c) {
            ctx->pc = 0x22988Cu;
            goto label_22988c;
        }
    }
    ctx->pc = 0x229244u;
    // 0x229244: 0x10620191  beq         $v1, $v0, . + 4 + (0x191 << 2)
    ctx->pc = 0x229244u;
    {
        const bool branch_taken_0x229244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x229248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229244u;
        // 0x229248: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229244) {
            ctx->pc = 0x22988Cu;
            goto label_22988c;
        }
    }
    ctx->pc = 0x22924Cu;
    // 0x22924c: 0x1062018f  beq         $v1, $v0, . + 4 + (0x18F << 2)
    ctx->pc = 0x22924Cu;
    {
        const bool branch_taken_0x22924c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x229250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22924Cu;
        // 0x229250: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22924c) {
            ctx->pc = 0x22988Cu;
            goto label_22988c;
        }
    }
    ctx->pc = 0x229254u;
    // 0x229254: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229254u;
    {
        const bool branch_taken_0x229254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x229254) {
            ctx->pc = 0x229264u;
            goto label_229264;
        }
    }
    ctx->pc = 0x22925Cu;
    // 0x22925c: 0xc089c56  jal         func_227158
    ctx->pc = 0x22925Cu;
    SET_GPR_U32(ctx, 31, 0x229264u);
    ctx->pc = 0x229260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22925Cu;
    // 0x229260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227158u, 0x22925Cu, 0x229264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229264u;
label_229264:
    // 0x229264: 0x12400158  beqz        $s2, . + 4 + (0x158 << 2)
    ctx->pc = 0x229264u;
    {
        const bool branch_taken_0x229264 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x229268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229264u;
        // 0x229268: 0x3c170033  lui         $s7, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229264) {
            ctx->pc = 0x2297C8u;
            goto label_2297c8;
        }
    }
    ctx->pc = 0x22926Cu;
    // 0x22926c: 0xc089de4  jal         func_227790
    ctx->pc = 0x22926Cu;
    SET_GPR_U32(ctx, 31, 0x229274u);
    ctx->pc = 0x229270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22926Cu;
    // 0x229270: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227790u, 0x22926Cu, 0x229274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229274u;
label_229274:
    // 0x229274: 0xc08a304  jal         func_228C10
    ctx->pc = 0x229274u;
    SET_GPR_U32(ctx, 31, 0x22927Cu);
    ctx->pc = 0x229278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229274u;
    // 0x229278: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228C10u, 0x229274u, 0x22927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22927Cu;
label_22927c:
    // 0x22927c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x22927cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x229280: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x229280u;
    {
        const bool branch_taken_0x229280 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x229284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229280u;
        // 0x229284: 0x3c170033  lui         $s7, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229280) {
            ctx->pc = 0x2292D0u;
            goto label_2292d0;
        }
    }
    ctx->pc = 0x229288u;
    // 0x229288: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x229288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x22928c: 0x0  nop
    ctx->pc = 0x22928cu;
    // NOP
label_229290:
    // 0x229290: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x229290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x229294: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x229294u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x229298: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x229298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22929c: 0xc08a362  jal         func_228D88
    ctx->pc = 0x22929Cu;
    SET_GPR_U32(ctx, 31, 0x2292A4u);
    ctx->pc = 0x2292A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22929Cu;
    // 0x2292a0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228D88u, 0x22929Cu, 0x2292A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2292A4u;
label_2292a4:
    // 0x2292a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2292A4u;
    {
        const bool branch_taken_0x2292a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2292a4) {
            ctx->pc = 0x2292A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2292A4u;
            // 0x2292a8: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2292B8u;
            goto label_2292b8;
        }
    }
    ctx->pc = 0x2292ACu;
    // 0x2292ac: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x2292ACu;
    SET_GPR_U32(ctx, 31, 0x2292B4u);
    ctx->pc = 0x2292B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2292ACu;
    // 0x2292b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228CE0u, 0x2292ACu, 0x2292B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2292B4u;
label_2292b4:
    // 0x2292b4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2292b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2292b8:
    // 0x2292b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2292b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2292bc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2292bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2292c0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2292C0u;
    {
        const bool branch_taken_0x2292c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2292C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292C0u;
        // 0x2292c4: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2292c0) {
            ctx->pc = 0x229290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229290;
        }
    }
    ctx->pc = 0x2292C8u;
    // 0x2292c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2292C8u;
    {
        const bool branch_taken_0x2292c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2292CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292C8u;
        // 0x2292cc: 0x8e42005c  lw          $v0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2292c8) {
            ctx->pc = 0x2292D4u;
            goto label_2292d4;
        }
    }
    ctx->pc = 0x2292D0u;
label_2292d0:
    // 0x2292d0: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x2292d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_2292d4:
    // 0x2292d4: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2292D4u;
    {
        const bool branch_taken_0x2292d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2292D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292D4u;
        // 0x2292d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2292d4) {
            ctx->pc = 0x229314u;
            goto label_229314;
        }
    }
    ctx->pc = 0x2292DCu;
    // 0x2292dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2292dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2292e0:
    // 0x2292e0: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x2292e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2292e4: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x2292e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2292e8: 0xc08a362  jal         func_228D88
    ctx->pc = 0x2292E8u;
    SET_GPR_U32(ctx, 31, 0x2292F0u);
    ctx->pc = 0x2292ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2292E8u;
    // 0x2292ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228D88u, 0x2292E8u, 0x2292F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2292F0u;
label_2292f0:
    // 0x2292f0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2292F0u;
    {
        const bool branch_taken_0x2292f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2292f0) {
            ctx->pc = 0x2292F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2292F0u;
            // 0x2292f4: 0x8e42005c  lw          $v0, 0x5C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229304u;
            goto label_229304;
        }
    }
    ctx->pc = 0x2292F8u;
    // 0x2292f8: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x2292F8u;
    SET_GPR_U32(ctx, 31, 0x229300u);
    ctx->pc = 0x2292FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2292F8u;
    // 0x2292fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228CE0u, 0x2292F8u, 0x229300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229300u;
label_229300:
    // 0x229300: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x229300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_229304:
    // 0x229304: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x229304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x229308: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x229308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22930c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x22930Cu;
    {
        const bool branch_taken_0x22930c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22930Cu;
        // 0x229310: 0x2673001c  addiu       $s3, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22930c) {
            ctx->pc = 0x2292E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2292e0;
        }
    }
    ctx->pc = 0x229314u;
label_229314:
    // 0x229314: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x229314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x229318: 0x184000b7  blez        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x229318u;
    {
        const bool branch_taken_0x229318 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229318u;
        // 0x22931c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229318) {
            ctx->pc = 0x2295F8u;
            goto label_2295f8;
        }
    }
    ctx->pc = 0x229320u;
    // 0x229320: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x229320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x229324: 0x0  nop
    ctx->pc = 0x229324u;
    // NOP
label_229328:
    // 0x229328: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x229328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x22932c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x22932cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x229330: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x229330u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229334: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x229334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229338: 0xc08a362  jal         func_228D88
    ctx->pc = 0x229338u;
    SET_GPR_U32(ctx, 31, 0x229340u);
    ctx->pc = 0x22933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229338u;
    // 0x22933c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228D88u, 0x229338u, 0x229340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229340u;
label_229340:
    // 0x229340: 0x504000a9  beql        $v0, $zero, . + 4 + (0xA9 << 2)
    ctx->pc = 0x229340u;
    {
        const bool branch_taken_0x229340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229340) {
            ctx->pc = 0x229344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229340u;
            // 0x229344: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2295E8u;
            goto label_2295e8;
        }
    }
    ctx->pc = 0x229348u;
    // 0x229348: 0xc089f08  jal         func_227C20
    ctx->pc = 0x229348u;
    SET_GPR_U32(ctx, 31, 0x229350u);
    ctx->pc = 0x22934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229348u;
    // 0x22934c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C20u, 0x229348u, 0x229350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229350u;
label_229350:
    // 0x229350: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x229350u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229354: 0x500007e  bltz        $t0, . + 4 + (0x7E << 2)
    ctx->pc = 0x229354u;
    {
        const bool branch_taken_0x229354 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x229358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229354u;
        // 0x229358: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229354) {
            ctx->pc = 0x229550u;
            goto label_229550;
        }
    }
    ctx->pc = 0x22935Cu;
    // 0x22935c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x22935cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x229360: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x229360u;
    {
        const bool branch_taken_0x229360 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x229364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229360u;
        // 0x229364: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229360) {
            ctx->pc = 0x229370u;
            goto label_229370;
        }
    }
    ctx->pc = 0x229368u;
    // 0x229368: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x229368u;
    {
        const bool branch_taken_0x229368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229368u;
        // 0x22936c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229368) {
            ctx->pc = 0x229388u;
            goto label_229388;
        }
    }
    ctx->pc = 0x229370u;
label_229370:
    // 0x229370: 0x28c2fffb  slti        $v0, $a2, -0x5
    ctx->pc = 0x229370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967291) ? 1 : 0);
    // 0x229374: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x229374u;
    {
        const bool branch_taken_0x229374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229374u;
        // 0x229378: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229374) {
            ctx->pc = 0x229388u;
            goto label_229388;
        }
    }
    ctx->pc = 0x22937Cu;
    // 0x22937c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x22937cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x229380: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x229380u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x229384: 0x8c54fffc  lw          $s4, -0x4($v0)
    ctx->pc = 0x229384u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_229388:
    // 0x229388: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x229388u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22938c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22938cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229390: 0x14e20018  bne         $a3, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x229390u;
    {
        const bool branch_taken_0x229390 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x229394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229390u;
        // 0x229394: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229390) {
            ctx->pc = 0x2293F4u;
            goto label_2293f4;
        }
    }
    ctx->pc = 0x229398u;
    // 0x229398: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x229398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x22939c: 0x1430c0  sll         $a2, $s4, 3
    ctx->pc = 0x22939cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2293a0: 0x244290f8  addiu       $v0, $v0, -0x6F08
    ctx->pc = 0x2293a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938872));
    // 0x2293a4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x2293a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x2293a8: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x2293a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2293ac: 0x24a56218  addiu       $a1, $a1, 0x6218
    ctx->pc = 0x2293acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25112));
    // 0x2293b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2293b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2293b4: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x2293b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2293b8: 0x84460002  lh          $a2, 0x2($v0)
    ctx->pc = 0x2293b8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2293bc: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x2293bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2293c0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2293c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2293c4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x2293c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2293c8: 0xc44818  mult        $t1, $a2, $a0
    ctx->pc = 0x2293c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2293cc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2293ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2293d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2293d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2293d4: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x2293d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2293d8: 0x8caa0018  lw          $t2, 0x18($a1)
    ctx->pc = 0x2293d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2293dc: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x2293dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2293e0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2293e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2293e4: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x2293e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x2293e8: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x2293e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x2293ec: 0x62500a  movz        $t2, $v1, $v0
    ctx->pc = 0x2293ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
    // 0x2293f0: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58
    ctx->pc = 0x2293f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
label_2293f4:
    // 0x2293f4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2293f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2293f8: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2293f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2293fc: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2293FCu;
    {
        const bool branch_taken_0x2293fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x229400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293FCu;
        // 0x229400: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293fc) {
            ctx->pc = 0x229410u;
            goto label_229410;
        }
    }
    ctx->pc = 0x229404u;
    // 0x229404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229408: 0x10e2000f  beq         $a3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x229408u;
    {
        const bool branch_taken_0x229408 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x22940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229408u;
        // 0x22940c: 0x24e3ffff  addiu       $v1, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229408) {
            ctx->pc = 0x229448u;
            goto label_229448;
        }
    }
    ctx->pc = 0x229410u;
label_229410:
    // 0x229410: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x229410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229414: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x229414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229418: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x229418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22941c: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x22941cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x229420: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x229420u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229424: 0x8e080018  lw          $t0, 0x18($s0)
    ctx->pc = 0x229424u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x229428: 0xc60d001c  lwc1        $f13, 0x1C($s0)
    ctx->pc = 0x229428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22942c: 0xc60e0020  lwc1        $f14, 0x20($s0)
    ctx->pc = 0x22942cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x229430: 0xc60f0024  lwc1        $f15, 0x24($s0)
    ctx->pc = 0x229430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x229434: 0xc09ca58  jal         func_272960
    ctx->pc = 0x229434u;
    SET_GPR_U32(ctx, 31, 0x22943Cu);
    ctx->pc = 0x229438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229434u;
    // 0x229438: 0xc6100028  lwc1        $f16, 0x28($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x272960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272960u, 0x229434u, 0x22943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22943Cu;
label_22943c:
    // 0x22943c: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x22943cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x229440: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x229440u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229444: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x229444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_229448:
    // 0x229448: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x229448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x22944c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x22944Cu;
    {
        const bool branch_taken_0x22944c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22944Cu;
        // 0x229450: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22944c) {
            ctx->pc = 0x2294C8u;
            goto label_2294c8;
        }
    }
    ctx->pc = 0x229454u;
    // 0x229454: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x229454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x229458: 0x244215f0  addiu       $v0, $v0, 0x15F0
    ctx->pc = 0x229458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5616));
    // 0x22945c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22945cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229460: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x229460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x229464: 0x800008  jr          $a0
    ctx->pc = 0x229464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22946Cu: goto label_22946c;
            case 0x229480u: goto label_229480;
            case 0x229494u: goto label_229494;
            case 0x2294A8u: goto label_2294a8;
            case 0x2294C8u: goto label_2294c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229464u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22946Cu;
label_22946c:
    // 0x22946c: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x22946cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x229470: 0xc0b1f5e  jal         func_2C7D78
    ctx->pc = 0x229470u;
    SET_GPR_U32(ctx, 31, 0x229478u);
    ctx->pc = 0x229474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229470u;
    // 0x229474: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7D78u, 0x229470u, 0x229478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229478u;
label_229478:
    // 0x229478: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x229478u;
    {
        const bool branch_taken_0x229478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229478u;
        // 0x22947c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229478) {
            ctx->pc = 0x2294CCu;
            goto label_2294cc;
        }
    }
    ctx->pc = 0x229480u;
label_229480:
    // 0x229480: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x229480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x229484: 0xc0b1f7a  jal         func_2C7DE8
    ctx->pc = 0x229484u;
    SET_GPR_U32(ctx, 31, 0x22948Cu);
    ctx->pc = 0x229488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229484u;
    // 0x229488: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7DE8u, 0x229484u, 0x22948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22948Cu;
label_22948c:
    // 0x22948c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22948Cu;
    {
        const bool branch_taken_0x22948c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22948Cu;
        // 0x229490: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22948c) {
            ctx->pc = 0x2294CCu;
            goto label_2294cc;
        }
    }
    ctx->pc = 0x229494u;
label_229494:
    // 0x229494: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x229494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x229498: 0xc0b1f88  jal         func_2C7E20
    ctx->pc = 0x229498u;
    SET_GPR_U32(ctx, 31, 0x2294A0u);
    ctx->pc = 0x22949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229498u;
    // 0x22949c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7E20u, 0x229498u, 0x2294A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2294A0u;
label_2294a0:
    // 0x2294a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2294A0u;
    {
        const bool branch_taken_0x2294a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2294A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294A0u;
        // 0x2294a4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2294a0) {
            ctx->pc = 0x2294CCu;
            goto label_2294cc;
        }
    }
    ctx->pc = 0x2294A8u;
label_2294a8:
    // 0x2294a8: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58
    ctx->pc = 0x2294a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x2294ac: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2294acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2294b0: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2294b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2294b4: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2294B4u;
    {
        const bool branch_taken_0x2294b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2294b4) {
            ctx->pc = 0x2294B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2294B4u;
            // 0x2294b8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2294CCu;
            goto label_2294cc;
        }
    }
    ctx->pc = 0x2294BCu;
    // 0x2294bc: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x2294bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2294c0: 0xc0b1f6c  jal         func_2C7DB0
    ctx->pc = 0x2294C0u;
    SET_GPR_U32(ctx, 31, 0x2294C8u);
    ctx->pc = 0x2294C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2294C0u;
    // 0x2294c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7DB0u, 0x2294C0u, 0x2294C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2294C8u;
label_2294c8:
    // 0x2294c8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2294c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2294cc:
    // 0x2294cc: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x2294ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x2294d0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2294d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2294d4: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2294d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2294d8: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2294D8u;
    {
        const bool branch_taken_0x2294d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2294DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294D8u;
        // 0x2294dc: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2294d8) {
            ctx->pc = 0x2295E4u;
            goto label_2295e4;
        }
    }
    ctx->pc = 0x2294E0u;
    // 0x2294e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2294e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2294e4: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2294e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2294e8: 0x5464003f  bnel        $v1, $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2294E8u;
    {
        const bool branch_taken_0x2294e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2294e8) {
            ctx->pc = 0x2294ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2294E8u;
            // 0x2294ec: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2295E8u;
            goto label_2295e8;
        }
    }
    ctx->pc = 0x2294F0u;
    // 0x2294f0: 0x2404013a  addiu       $a0, $zero, 0x13A
    ctx->pc = 0x2294f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 314));
    // 0x2294f4: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x2294f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2294f8: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x2294f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2294fc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2294fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x229500: 0x8e080018  lw          $t0, 0x18($s0)
    ctx->pc = 0x229500u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x229504: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x229504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229508: 0xc60d001c  lwc1        $f13, 0x1C($s0)
    ctx->pc = 0x229508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22950c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22950cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229510: 0xc60e0020  lwc1        $f14, 0x20($s0)
    ctx->pc = 0x229510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x229514: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x229514u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229518: 0xc60f0024  lwc1        $f15, 0x24($s0)
    ctx->pc = 0x229518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x22951c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x22951cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229520: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x229520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x229524: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x229524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x229528: 0xc09ca58  jal         func_272960
    ctx->pc = 0x229528u;
    SET_GPR_U32(ctx, 31, 0x229530u);
    ctx->pc = 0x22952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229528u;
    // 0x22952c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272960u, 0x229528u, 0x229530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229530u;
label_229530:
    // 0x229530: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x229530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x229534: 0xc099380  jal         func_264E00
    ctx->pc = 0x229534u;
    SET_GPR_U32(ctx, 31, 0x22953Cu);
    ctx->pc = 0x229538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229534u;
    // 0x229538: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x229534u, 0x22953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22953Cu;
label_22953c:
    // 0x22953c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22953cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229540: 0xc0b1f6c  jal         func_2C7DB0
    ctx->pc = 0x229540u;
    SET_GPR_U32(ctx, 31, 0x229548u);
    ctx->pc = 0x229544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229540u;
    // 0x229544: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7DB0u, 0x229540u, 0x229548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229548u;
label_229548:
    // 0x229548: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x229548u;
    {
        const bool branch_taken_0x229548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229548u;
        // 0x22954c: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229548) {
            ctx->pc = 0x2295E8u;
            goto label_2295e8;
        }
    }
    ctx->pc = 0x229550u;
label_229550:
    // 0x229550: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x229550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x229554: 0x2862ffec  slti        $v0, $v1, -0x14
    ctx->pc = 0x229554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967276) ? 1 : 0);
    // 0x229558: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x229558u;
    {
        const bool branch_taken_0x229558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229558u;
        // 0x22955c: 0x2862ffe7  slti        $v0, $v1, -0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x229558) {
            ctx->pc = 0x2295E4u;
            goto label_2295e4;
        }
    }
    ctx->pc = 0x229560u;
    // 0x229560: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x229560u;
    {
        const bool branch_taken_0x229560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229560) {
            ctx->pc = 0x229564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229560u;
            // 0x229564: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2295E8u;
            goto label_2295e8;
        }
    }
    ctx->pc = 0x229568u;
    // 0x229568: 0x24620014  addiu       $v0, $v1, 0x14
    ctx->pc = 0x229568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x22956c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x22956cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x229570: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x229570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x229574: 0x248490f8  addiu       $a0, $a0, -0x6F08
    ctx->pc = 0x229574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938872));
    // 0x229578: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x229578u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x22957c: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x22957cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x229580: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x229580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x229584: 0x3c0c0036  lui         $t4, 0x36
    ctx->pc = 0x229584u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)54 << 16));
    // 0x229588: 0x258c6218  addiu       $t4, $t4, 0x6218
    ctx->pc = 0x229588u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 25112));
    // 0x22958c: 0xc6100028  lwc1        $f16, 0x28($s0)
    ctx->pc = 0x22958cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x229590: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x229590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x229594: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x229594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x229598: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x229598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22959c: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x22959cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2295a0: 0x84640004  lh          $a0, 0x4($v1)
    ctx->pc = 0x2295a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2295a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2295a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2295a8: 0x8e080018  lw          $t0, 0x18($s0)
    ctx->pc = 0x2295a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2295ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2295acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2295b0: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x2295b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2295b4: 0xc60d001c  lwc1        $f13, 0x1C($s0)
    ctx->pc = 0x2295b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2295b8: 0xc60e0020  lwc1        $f14, 0x20($s0)
    ctx->pc = 0x2295b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2295bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2295bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2295c0: 0xc60f0024  lwc1        $f15, 0x24($s0)
    ctx->pc = 0x2295c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2295c4: 0x1841021  addu        $v0, $t4, $a0
    ctx->pc = 0x2295c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x2295c8: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x2295c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2295cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2295ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2295d0: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x2295d0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2295d4: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x2295d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
    // 0x2295d8: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2295d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2295dc: 0xc09ca58  jal         func_272960
    ctx->pc = 0x2295DCu;
    SET_GPR_U32(ctx, 31, 0x2295E4u);
    ctx->pc = 0x2295E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2295DCu;
    // 0x2295e0: 0x8d860018  lw          $a2, 0x18($t4) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272960u, 0x2295DCu, 0x2295E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2295E4u;
label_2295e4:
    // 0x2295e4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2295e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2295e8:
    // 0x2295e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2295e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2295ec: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2295ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2295f0: 0x1440ff4d  bnez        $v0, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x2295F0u;
    {
        const bool branch_taken_0x2295f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2295F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295F0u;
        // 0x2295f4: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295f0) {
            ctx->pc = 0x229328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229328;
        }
    }
    ctx->pc = 0x2295F8u;
label_2295f8:
    // 0x2295f8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2295f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2295fc: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2295FCu;
    {
        const bool branch_taken_0x2295fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x229600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295FCu;
        // 0x229600: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295fc) {
            ctx->pc = 0x229644u;
            goto label_229644;
        }
    }
    ctx->pc = 0x229604u;
    // 0x229604: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x229604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_229608:
    // 0x229608: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x229608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x22960c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x22960cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229610: 0xc08a362  jal         func_228D88
    ctx->pc = 0x229610u;
    SET_GPR_U32(ctx, 31, 0x229618u);
    ctx->pc = 0x229614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229610u;
    // 0x229614: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228D88u, 0x229610u, 0x229618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229618u;
label_229618:
    // 0x229618: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x229618u;
    {
        const bool branch_taken_0x229618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229618) {
            ctx->pc = 0x22961Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229618u;
            // 0x22961c: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229634u;
            goto label_229634;
        }
    }
    ctx->pc = 0x229620u;
    // 0x229620: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x229620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x229624: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x229624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x229628: 0xc09a622  jal         func_269888
    ctx->pc = 0x229628u;
    SET_GPR_U32(ctx, 31, 0x229630u);
    ctx->pc = 0x22962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229628u;
    // 0x22962c: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269888u, 0x229628u, 0x229630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229630u;
label_229630:
    // 0x229630: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x229630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_229634:
    // 0x229634: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x229634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x229638: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x229638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22963c: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x22963Cu;
    {
        const bool branch_taken_0x22963c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22963c) {
            ctx->pc = 0x229640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22963Cu;
            // 0x229640: 0x8e430018  lw          $v1, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229608;
        }
    }
    ctx->pc = 0x229644u;
label_229644:
    // 0x229644: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x229644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x229648: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x229648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x22964c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22964Cu;
    {
        const bool branch_taken_0x22964c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22964c) {
            ctx->pc = 0x229650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22964Cu;
            // 0x229650: 0x8e42004c  lw          $v0, 0x4C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22966Cu;
            goto label_22966c;
        }
    }
    ctx->pc = 0x229654u;
    // 0x229654: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58
    ctx->pc = 0x229654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x229658: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x229658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22965c: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x22965cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x229660: 0x54640025  bnel        $v1, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x229660u;
    {
        const bool branch_taken_0x229660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x229660) {
            ctx->pc = 0x229664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229660u;
            // 0x229664: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2296F8u;
            goto label_2296f8;
        }
    }
    ctx->pc = 0x229668u;
    // 0x229668: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x229668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_22966c:
    // 0x22966c: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x22966Cu;
    {
        const bool branch_taken_0x22966c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x229670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22966Cu;
        // 0x229670: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22966c) {
            ctx->pc = 0x2296F4u;
            goto label_2296f4;
        }
    }
    ctx->pc = 0x229674u;
    // 0x229674: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x229674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x229678: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x229678u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22967c: 0x2455c4a8  addiu       $s5, $v0, -0x3B58
    ctx->pc = 0x22967cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x229680: 0x2414000b  addiu       $s4, $zero, 0xB
    ctx->pc = 0x229680u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x229684: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x229684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_229688:
    // 0x229688: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x229688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x22968c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x22968cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229690: 0xc08a362  jal         func_228D88
    ctx->pc = 0x229690u;
    SET_GPR_U32(ctx, 31, 0x229698u);
    ctx->pc = 0x229694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229690u;
    // 0x229694: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228D88u, 0x229690u, 0x229698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229698u;
label_229698:
    // 0x229698: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x229698u;
    {
        const bool branch_taken_0x229698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229698) {
            ctx->pc = 0x22969Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229698u;
            // 0x22969c: 0x8e42004c  lw          $v0, 0x4C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2296E4u;
            goto label_2296e4;
        }
    }
    ctx->pc = 0x2296A0u;
    // 0x2296a0: 0x8e0a001c  lw          $t2, 0x1C($s0)
    ctx->pc = 0x2296a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2296a4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2296a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2296a8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2296a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2296ac: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2296acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2296b0: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x2296b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2296b4: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x2296b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2296b8: 0xc09d92c  jal         func_2764B0
    ctx->pc = 0x2296B8u;
    SET_GPR_U32(ctx, 31, 0x2296C0u);
    ctx->pc = 0x2296BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2296B8u;
    // 0x2296bc: 0x8e090018  lw          $t1, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2764B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2764B0u, 0x2296B8u, 0x2296C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2296C0u;
label_2296c0:
    // 0x2296c0: 0x8ea30048  lw          $v1, 0x48($s5)
    ctx->pc = 0x2296c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x2296c4: 0x14760006  bne         $v1, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2296C4u;
    {
        const bool branch_taken_0x2296c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        ctx->pc = 0x2296C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296C4u;
        // 0x2296c8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2296c4) {
            ctx->pc = 0x2296E0u;
            goto label_2296e0;
        }
    }
    ctx->pc = 0x2296CCu;
    // 0x2296cc: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x2296ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2296d0: 0x54540004  bnel        $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2296D0u;
    {
        const bool branch_taken_0x2296d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2296d0) {
            ctx->pc = 0x2296D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2296D0u;
            // 0x2296d4: 0x8e42004c  lw          $v0, 0x4C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2296E4u;
            goto label_2296e4;
        }
    }
    ctx->pc = 0x2296D8u;
    // 0x2296d8: 0xc0b1fbc  jal         func_2C7EF0
    ctx->pc = 0x2296D8u;
    SET_GPR_U32(ctx, 31, 0x2296E0u);
    ctx->pc = 0x2296DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2296D8u;
    // 0x2296dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7EF0u, 0x2296D8u, 0x2296E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2296E0u;
label_2296e0:
    // 0x2296e0: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2296e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_2296e4:
    // 0x2296e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2296e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2296e8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2296e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2296ec: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2296ECu;
    {
        const bool branch_taken_0x2296ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2296ec) {
            ctx->pc = 0x2296F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2296ECu;
            // 0x2296f0: 0x8e430048  lw          $v1, 0x48($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229688;
        }
    }
    ctx->pc = 0x2296F4u;
label_2296f4:
    // 0x2296f4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x2296f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2296f8:
    // 0x2296f8: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2296F8u;
    {
        const bool branch_taken_0x2296f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2296FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296F8u;
        // 0x2296fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2296f8) {
            ctx->pc = 0x229764u;
            goto label_229764;
        }
    }
    ctx->pc = 0x229700u;
    // 0x229700: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x229700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x229704: 0x0  nop
    ctx->pc = 0x229704u;
    // NOP
label_229708:
    // 0x229708: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x229708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x22970c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x22970cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229710: 0xc08a362  jal         func_228D88
    ctx->pc = 0x229710u;
    SET_GPR_U32(ctx, 31, 0x229718u);
    ctx->pc = 0x229714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229710u;
    // 0x229714: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228D88u, 0x229710u, 0x229718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229718u;
label_229718:
    // 0x229718: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x229718u;
    {
        const bool branch_taken_0x229718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229718u;
        // 0x22971c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229718) {
            ctx->pc = 0x229750u;
            goto label_229750;
        }
    }
    ctx->pc = 0x229720u;
    // 0x229720: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x229720u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x229724: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x229724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x229728: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x229728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x22972c: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x22972cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229730: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x229730u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229734: 0xc60d002c  lwc1        $f13, 0x2C($s0)
    ctx->pc = 0x229734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x229738: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x229738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22973c: 0xc60e0030  lwc1        $f14, 0x30($s0)
    ctx->pc = 0x22973cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x229740: 0xc60f0034  lwc1        $f15, 0x34($s0)
    ctx->pc = 0x229740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x229744: 0xc6100038  lwc1        $f16, 0x38($s0)
    ctx->pc = 0x229744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x229748: 0xc09a570  jal         func_2695C0
    ctx->pc = 0x229748u;
    SET_GPR_U32(ctx, 31, 0x229750u);
    ctx->pc = 0x22974Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229748u;
    // 0x22974c: 0xc611003c  lwc1        $f17, 0x3C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2695C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2695C0u, 0x229748u, 0x229750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229750u;
label_229750:
    // 0x229750: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x229750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x229754: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x229754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x229758: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x229758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22975c: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x22975Cu;
    {
        const bool branch_taken_0x22975c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22975c) {
            ctx->pc = 0x229760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22975Cu;
            // 0x229760: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229708;
        }
    }
    ctx->pc = 0x229764u;
label_229764:
    // 0x229764: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x229764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x229768: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x229768u;
    {
        const bool branch_taken_0x229768 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229768u;
        // 0x22976c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229768) {
            ctx->pc = 0x2297B4u;
            goto label_2297b4;
        }
    }
    ctx->pc = 0x229770u;
    // 0x229770: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x229770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229774: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x229774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_229778:
    // 0x229778: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x229778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22977c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22977cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229780: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x229780u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x229784: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x229784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x229788: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x229788u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22978c: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x22978cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x229790: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x229790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x229794: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x229794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229798: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x229798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22979c: 0xc0aab64  jal         func_2AAD90
    ctx->pc = 0x22979Cu;
    SET_GPR_U32(ctx, 31, 0x2297A4u);
    ctx->pc = 0x2297A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22979Cu;
    // 0x2297a0: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAD90u, 0x22979Cu, 0x2297A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2297A4u;
label_2297a4:
    // 0x2297a4: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x2297a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x2297a8: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2297a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2297ac: 0x5460fff2  bnel        $v1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2297ACu;
    {
        const bool branch_taken_0x2297ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2297ac) {
            ctx->pc = 0x2297B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2297ACu;
            // 0x2297b0: 0x8e420060  lw          $v0, 0x60($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229778;
        }
    }
    ctx->pc = 0x2297B4u;
label_2297b4:
    // 0x2297b4: 0x8e450068  lw          $a1, 0x68($s2)
    ctx->pc = 0x2297b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x2297b8: 0xc0aa00e  jal         func_2A8038
    ctx->pc = 0x2297B8u;
    SET_GPR_U32(ctx, 31, 0x2297C0u);
    ctx->pc = 0x2297BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2297B8u;
    // 0x2297bc: 0x8e44006c  lw          $a0, 0x6C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8038u, 0x2297B8u, 0x2297C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2297C0u;
label_2297c0:
    // 0x2297c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2297C0u;
    {
        const bool branch_taken_0x2297c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2297C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2297C0u;
        // 0x2297c4: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2297c0) {
            ctx->pc = 0x2297CCu;
            goto label_2297cc;
        }
    }
    ctx->pc = 0x2297C8u;
label_2297c8:
    // 0x2297c8: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2297c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_2297cc:
    // 0x2297cc: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2297CCu;
    {
        const bool branch_taken_0x2297cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2297D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2297CCu;
        // 0x2297d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2297cc) {
            ctx->pc = 0x2297F8u;
            goto label_2297f8;
        }
    }
    ctx->pc = 0x2297D4u;
    // 0x2297d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2297d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2297d8:
    // 0x2297d8: 0x8f84b230  lw          $a0, -0x4DD0($gp)
    ctx->pc = 0x2297d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2297dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2297dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2297e0: 0xc09fc4e  jal         func_27F138
    ctx->pc = 0x2297E0u;
    SET_GPR_U32(ctx, 31, 0x2297E8u);
    ctx->pc = 0x2297E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2297E0u;
    // 0x2297e4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F138u, 0x2297E0u, 0x2297E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2297E8u;
label_2297e8:
    // 0x2297e8: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2297e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2297ec: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2297ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2297f0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2297F0u;
    {
        const bool branch_taken_0x2297f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2297F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2297F0u;
        // 0x2297f4: 0x2610071c  addiu       $s0, $s0, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2297f0) {
            ctx->pc = 0x2297D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2297d8;
        }
    }
    ctx->pc = 0x2297F8u;
label_2297f8:
    // 0x2297f8: 0xc0ae850  jal         func_2BA140
    ctx->pc = 0x2297F8u;
    SET_GPR_U32(ctx, 31, 0x229800u);
    ctx->pc = 0x2BA140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA140u, 0x2297F8u, 0x229800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229800u;
label_229800:
    // 0x229800: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x229800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x229804: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x229804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x229808: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x229808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x22980c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x22980Cu;
    {
        const bool branch_taken_0x22980c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22980Cu;
        // 0x229810: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22980c) {
            ctx->pc = 0x22988Cu;
            goto label_22988c;
        }
    }
    ctx->pc = 0x229814u;
    // 0x229814: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x229814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x229818: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x229818u;
    {
        const bool branch_taken_0x229818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229818u;
        // 0x22981c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229818) {
            ctx->pc = 0x229890u;
            goto label_229890;
        }
    }
    ctx->pc = 0x229820u;
    // 0x229820: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x229820u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    // 0x229824: 0x8e42b470  lw          $v0, -0x4B90($s2)
    ctx->pc = 0x229824u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33B470u));
    // 0x229828: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x229828u;
    {
        const bool branch_taken_0x229828 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229828u;
        // 0x22982c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229828) {
            ctx->pc = 0x229890u;
            goto label_229890;
        }
    }
    ctx->pc = 0x229830u;
    // 0x229830: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x229830u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229834: 0x2650b470  addiu       $s0, $s2, -0x4B90
    ctx->pc = 0x229834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294947952));
label_229838:
    // 0x229838: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x229838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22983c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x22983cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x229840: 0xc099380  jal         func_264E00
    ctx->pc = 0x229840u;
    SET_GPR_U32(ctx, 31, 0x229848u);
    ctx->pc = 0x229844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229840u;
    // 0x229844: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x229840u, 0x229848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229848u;
label_229848:
    // 0x229848: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x229848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x22984c: 0x8f85a2ec  lw          $a1, -0x5D14($gp)
    ctx->pc = 0x22984cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x229850: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x229850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x229854: 0xc78080e8  lwc1        $f0, -0x7F18($gp)
    ctx->pc = 0x229854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229858: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x229858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x22985c: 0x240400ca  addiu       $a0, $zero, 0xCA
    ctx->pc = 0x22985cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x229860: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x229860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x229864: 0xc4ad0010  lwc1        $f13, 0x10($a1)
    ctx->pc = 0x229864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x229868: 0xc4ae0014  lwc1        $f14, 0x14($a1)
    ctx->pc = 0x229868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x22986c: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x22986cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x229870: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x229870u;
    SET_GPR_U32(ctx, 31, 0x229878u);
    ctx->pc = 0x229874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229870u;
    // 0x229874: 0xc4ac000c  lwc1        $f12, 0xC($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x229870u, 0x229878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229878u;
label_229878:
    // 0x229878: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x229878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22987c: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x22987cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x229880: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x229880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x229884: 0x441ffec  bgez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x229884u;
    {
        const bool branch_taken_0x229884 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x229888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229884u;
        // 0x229888: 0x2650b470  addiu       $s0, $s2, -0x4B90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294947952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229884) {
            ctx->pc = 0x229838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229838;
        }
    }
    ctx->pc = 0x22988Cu;
label_22988c:
    // 0x22988c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x22988cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_229890:
    // 0x229890: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x229890u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x229894: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x229894u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x229898: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x229898u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22989c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22989cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2298a0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2298a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2298a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2298a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2298a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2298a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2298ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2298acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2298b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2298B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2298B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298B0u;
        // 0x2298b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2298B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2298B8u;
}
