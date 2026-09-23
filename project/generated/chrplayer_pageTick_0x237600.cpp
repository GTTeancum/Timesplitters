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

// Function: chrplayer_pageTick
// Address: 0x237600 - 0x237e64
void chrplayer_pageTick_0x237600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrplayer_pageTick_0x237600");
#endif

    switch (ctx->pc) {
        case 0x237638u: goto label_237638;
        case 0x237654u: goto label_237654;
        case 0x23765cu: goto label_23765c;
        case 0x2376c8u: goto label_2376c8;
        case 0x237704u: goto label_237704;
        case 0x237710u: goto label_237710;
        case 0x2377bcu: goto label_2377bc;
        case 0x237804u: goto label_237804;
        case 0x237838u: goto label_237838;
        case 0x237888u: goto label_237888;
        case 0x237890u: goto label_237890;
        case 0x2378d4u: goto label_2378d4;
        case 0x2378dcu: goto label_2378dc;
        case 0x2378ecu: goto label_2378ec;
        case 0x237934u: goto label_237934;
        case 0x237970u: goto label_237970;
        case 0x237998u: goto label_237998;
        case 0x2379acu: goto label_2379ac;
        case 0x2379c4u: goto label_2379c4;
        case 0x237a54u: goto label_237a54;
        case 0x237a60u: goto label_237a60;
        case 0x237a80u: goto label_237a80;
        case 0x237ab8u: goto label_237ab8;
        case 0x237b08u: goto label_237b08;
        case 0x237b34u: goto label_237b34;
        case 0x237b40u: goto label_237b40;
        case 0x237b84u: goto label_237b84;
        case 0x237ba8u: goto label_237ba8;
        case 0x237bb0u: goto label_237bb0;
        case 0x237bf8u: goto label_237bf8;
        case 0x237c08u: goto label_237c08;
        case 0x237c1cu: goto label_237c1c;
        case 0x237c54u: goto label_237c54;
        case 0x237c68u: goto label_237c68;
        case 0x237c78u: goto label_237c78;
        case 0x237c90u: goto label_237c90;
        case 0x237cb4u: goto label_237cb4;
        case 0x237cd0u: goto label_237cd0;
        case 0x237cf0u: goto label_237cf0;
        case 0x237d04u: goto label_237d04;
        case 0x237d90u: goto label_237d90;
        case 0x237db8u: goto label_237db8;
        case 0x237dd0u: goto label_237dd0;
        case 0x237dd8u: goto label_237dd8;
        case 0x237de0u: goto label_237de0;
        case 0x237de8u: goto label_237de8;
        case 0x237e30u: goto label_237e30;
        case 0x237e3cu: goto label_237e3c;
        default: break;
    }

    ctx->pc = 0x237600u;

    // 0x237600: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x237600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x237604: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x237604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x237608: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x237608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x23760c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23760cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x237610: 0x2795b738  addiu       $s5, $gp, -0x48C8
    ctx->pc = 0x237610u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948664));
    // 0x237614: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x237614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x237618: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x237618u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23761c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23761cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x237620: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x237620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x237624: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x237624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237628: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x237628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x23762c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23762cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237630: 0xc08828c  jal         func_220A30
    ctx->pc = 0x237630u;
    SET_GPR_U32(ctx, 31, 0x237638u);
    ctx->pc = 0x237634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237630u;
    // 0x237634: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x237630u, 0x237638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237638u;
label_237638:
    // 0x237638: 0x24040b78  addiu       $a0, $zero, 0xB78
    ctx->pc = 0x237638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x23763c: 0x8f839dd8  lw          $v1, -0x6228($gp)
    ctx->pc = 0x23763cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x237640: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x237640u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x237644: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x237644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237648: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23764c: 0xc08e16c  jal         func_2385B0
    ctx->pc = 0x23764Cu;
    SET_GPR_U32(ctx, 31, 0x237654u);
    ctx->pc = 0x237650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23764Cu;
    // 0x237650: 0x24720020  addiu       $s2, $v1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2385B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2385B0u, 0x23764Cu, 0x237654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237654u;
label_237654:
    // 0x237654: 0xc090744  jal         func_241D10
    ctx->pc = 0x237654u;
    SET_GPR_U32(ctx, 31, 0x23765Cu);
    ctx->pc = 0x237658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237654u;
    // 0x237658: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241D10u, 0x237654u, 0x23765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23765Cu;
label_23765c:
    // 0x23765c: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x23765cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x237660: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x237660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x237664: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x237664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x237668: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x237668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23766c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x23766cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x237670: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x237670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x237674: 0x104001de  beqz        $v0, . + 4 + (0x1DE << 2)
    ctx->pc = 0x237674u;
    {
        const bool branch_taken_0x237674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237674u;
        // 0x237678: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237674) {
            ctx->pc = 0x237DF0u;
            goto label_237df0;
        }
    }
    ctx->pc = 0x23767Cu;
    // 0x23767c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x23767cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x237680: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x237680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x237684: 0x24421cd0  addiu       $v0, $v0, 0x1CD0
    ctx->pc = 0x237684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7376));
    // 0x237688: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23768c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23768cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237690: 0x800008  jr          $a0
    ctx->pc = 0x237690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x237698u: goto label_237698;
            case 0x237910u: goto label_237910;
            case 0x237AACu: goto label_237aac;
            case 0x237CC4u: goto label_237cc4;
            case 0x237DF0u: goto label_237df0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237690u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x237698u;
label_237698:
    // 0x237698: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x237698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23769c: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x23769cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x2376a0: 0x24632c88  addiu       $v1, $v1, 0x2C88
    ctx->pc = 0x2376a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11400));
    // 0x2376a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2376a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2376a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2376a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2376ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2376acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2376b0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2376b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2376b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2376b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2376b8: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2376B8u;
    {
        const bool branch_taken_0x2376b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2376b8) {
            ctx->pc = 0x2376BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2376B8u;
            // 0x2376bc: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2376FCu;
            goto label_2376fc;
        }
    }
    ctx->pc = 0x2376C0u;
    // 0x2376c0: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x2376C0u;
    SET_GPR_U32(ctx, 31, 0x2376C8u);
    ctx->pc = 0x2376C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2376C0u;
    // 0x2376c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x2376C0u, 0x2376C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2376C8u;
label_2376c8:
    // 0x2376c8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2376c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2376cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2376CCu;
    {
        const bool branch_taken_0x2376cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2376D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376CCu;
        // 0x2376d0: 0x8f86a004  lw          $a2, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376cc) {
            ctx->pc = 0x2376F8u;
            goto label_2376f8;
        }
    }
    ctx->pc = 0x2376D4u;
    // 0x2376d4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2376d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2376d8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2376d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2376dc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2376dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2376e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2376e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2376e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2376e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2376e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2376e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2376ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2376ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2376f0: 0x808c052  j           func_230148
    ctx->pc = 0x2376F0u;
    ctx->pc = 0x2376F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2376F0u;
    // 0x2376f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230148u;
    pageOut_0x230148(rdram, ctx, runtime); return;
    ctx->pc = 0x2376F8u;
label_2376f8:
    // 0x2376f8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2376f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2376fc:
    // 0x2376fc: 0xc080e7a  jal         func_2039E8
    ctx->pc = 0x2376FCu;
    SET_GPR_U32(ctx, 31, 0x237704u);
    ctx->pc = 0x237700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2376FCu;
    // 0x237700: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2039E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2039E8u, 0x2376FCu, 0x237704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237704u;
label_237704:
    // 0x237704: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x237704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x237708: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x237708u;
    SET_GPR_U32(ctx, 31, 0x237710u);
    ctx->pc = 0x23770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237708u;
    // 0x23770c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x237708u, 0x237710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237710u;
label_237710:
    // 0x237710: 0x30420840  andi        $v0, $v0, 0x840
    ctx->pc = 0x237710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2112);
    // 0x237714: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x237714u;
    {
        const bool branch_taken_0x237714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237714u;
        // 0x237718: 0x8f86a004  lw          $a2, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237714) {
            ctx->pc = 0x237744u;
            goto label_237744;
        }
    }
    ctx->pc = 0x23771Cu;
    // 0x23771c: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23771cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x237720: 0x244212a8  addiu       $v0, $v0, 0x12A8
    ctx->pc = 0x237720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4776));
    // 0x237724: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x237724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x237728: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x237728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23772c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x237730: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x237730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237734: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x237734u;
    {
        const bool branch_taken_0x237734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x237738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237734u;
        // 0x237738: 0x96680004  lhu         $t0, 0x4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237734) {
            ctx->pc = 0x23780Cu;
            goto label_23780c;
        }
    }
    ctx->pc = 0x23773Cu;
    // 0x23773c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23773Cu;
    {
        const bool branch_taken_0x23773c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23773Cu;
        // 0x237740: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23773c) {
            ctx->pc = 0x23774Cu;
            goto label_23774c;
        }
    }
    ctx->pc = 0x237744u;
label_237744:
    // 0x237744: 0x96680004  lhu         $t0, 0x4($s3)
    ctx->pc = 0x237744u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x237748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23774c:
    // 0x23774c: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x23774cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x237750: 0x15220068  bne         $t1, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x237750u;
    {
        const bool branch_taken_0x237750 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x237754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237750u;
        // 0x237754: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237750) {
            ctx->pc = 0x2378F4u;
            goto label_2378f4;
        }
    }
    ctx->pc = 0x237758u;
    // 0x237758: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x237758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x23775c: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x23775cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x237760: 0x24631288  addiu       $v1, $v1, 0x1288
    ctx->pc = 0x237760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4744));
    // 0x237764: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x237764u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x237768: 0x24841298  addiu       $a0, $a0, 0x1298
    ctx->pc = 0x237768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4760));
    // 0x23776c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x23776cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x237770: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x237770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x237774: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x237774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237778: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x237778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23777c: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23777Cu;
    {
        const bool branch_taken_0x23777c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x23777c) {
            ctx->pc = 0x237780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23777Cu;
            // 0x237780: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237798u;
            goto label_237798;
        }
    }
    ctx->pc = 0x237784u;
    // 0x237784: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x237784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x237788: 0x244212a8  addiu       $v0, $v0, 0x12A8
    ctx->pc = 0x237788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4776));
    // 0x23778c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x23778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x237790: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x237790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x237794: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x237794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_237798:
    // 0x237798: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x237798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23779c: 0x24421268  addiu       $v0, $v0, 0x1268
    ctx->pc = 0x23779cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4712));
    // 0x2377a0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2377a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2377a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2377a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2377a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2377a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2377ac: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2377ACu;
    {
        const bool branch_taken_0x2377ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2377B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377ACu;
        // 0x2377b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377ac) {
            ctx->pc = 0x237810u;
            goto label_237810;
        }
    }
    ctx->pc = 0x2377B4u;
    // 0x2377b4: 0xc08e380  jal         func_238E00
    ctx->pc = 0x2377B4u;
    SET_GPR_U32(ctx, 31, 0x2377BCu);
    ctx->pc = 0x2377B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2377B4u;
    // 0x2377b8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238E00u, 0x2377B4u, 0x2377BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377BCu;
label_2377bc:
    // 0x2377bc: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x2377bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2377c0: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x2377c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x2377c4: 0x246312a8  addiu       $v1, $v1, 0x12A8
    ctx->pc = 0x2377c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4776));
    // 0x2377c8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x2377c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x2377cc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2377ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2377d0: 0x8c8539e0  lw          $a1, 0x39E0($a0)
    ctx->pc = 0x2377d0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3539E0u));
    // 0x2377d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2377d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2377d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2377d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2377dc: 0x10a00073  beqz        $a1, . + 4 + (0x73 << 2)
    ctx->pc = 0x2377DCu;
    {
        const bool branch_taken_0x2377dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2377E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377DCu;
        // 0x2377e0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377dc) {
            ctx->pc = 0x2379ACu;
            goto label_2379ac;
        }
    }
    ctx->pc = 0x2377E4u;
    // 0x2377e4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2377e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2377e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2377e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2377ec: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2377ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2377f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2377f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2377f4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2377f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2377f8: 0x24713e28  addiu       $s1, $v1, 0x3E28
    ctx->pc = 0x2377f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 15912));
    // 0x2377fc: 0xc080ea2  jal         func_203A88
    ctx->pc = 0x2377FCu;
    SET_GPR_U32(ctx, 31, 0x237804u);
    ctx->pc = 0x237800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2377FCu;
    // 0x237800: 0xa0450000  sb          $a1, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203A88u, 0x2377FCu, 0x237804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237804u;
label_237804:
    // 0x237804: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x237804u;
    {
        const bool branch_taken_0x237804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237804) {
            ctx->pc = 0x237DF0u;
            goto label_237df0;
        }
    }
    ctx->pc = 0x23780Cu;
label_23780c:
    // 0x23780c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23780cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237810:
    // 0x237810: 0x55020038  bnel        $t0, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x237810u;
    {
        const bool branch_taken_0x237810 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x237810) {
            ctx->pc = 0x237814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237810u;
            // 0x237814: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2378F4u;
            goto label_2378f4;
        }
    }
    ctx->pc = 0x237818u;
    // 0x237818: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x237818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23781c: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x23781cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x237820: 0x90a236b0  lbu         $v0, 0x36B0($a1)
    ctx->pc = 0x237820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3536B0u));
    // 0x237824: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x237824u;
    {
        const bool branch_taken_0x237824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x237828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237824u;
        // 0x237828: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237824) {
            ctx->pc = 0x237850u;
            goto label_237850;
        }
    }
    ctx->pc = 0x23782Cu;
    // 0x23782c: 0x24a736b0  addiu       $a3, $a1, 0x36B0
    ctx->pc = 0x23782cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 14000));
    // 0x237830: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x237830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237834: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x237834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_237838:
    // 0x237838: 0x2c820040  sltiu       $v0, $a0, 0x40
    ctx->pc = 0x237838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x23783c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23783Cu;
    {
        const bool branch_taken_0x23783c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23783Cu;
        // 0x237840: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23783c) {
            ctx->pc = 0x237850u;
            goto label_237850;
        }
    }
    ctx->pc = 0x237844u;
    // 0x237844: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x237844u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237848: 0x5465fffb  bnel        $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x237848u;
    {
        const bool branch_taken_0x237848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x237848) {
            ctx->pc = 0x23784Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237848u;
            // 0x23784c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237838;
        }
    }
    ctx->pc = 0x237850u;
label_237850:
    // 0x237850: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x237850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x237854: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x237854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x237858: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x237858u;
    {
        const bool branch_taken_0x237858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237858u;
        // 0x23785c: 0x3c0301fc  lui         $v1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237858) {
            ctx->pc = 0x237898u;
            goto label_237898;
        }
    }
    ctx->pc = 0x237860u;
    // 0x237860: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x237860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x237864: 0x24631268  addiu       $v1, $v1, 0x1268
    ctx->pc = 0x237864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4712));
    // 0x237868: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x237868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23786c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23786cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x237870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x237870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x237874: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x237874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237878: 0x10850007  beq         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x237878u;
    {
        const bool branch_taken_0x237878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x23787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237878u;
        // 0x23787c: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237878) {
            ctx->pc = 0x237898u;
            goto label_237898;
        }
    }
    ctx->pc = 0x237880u;
    // 0x237880: 0xc081546  jal         func_205518
    ctx->pc = 0x237880u;
    SET_GPR_U32(ctx, 31, 0x237888u);
    ctx->pc = 0x237884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237880u;
    // 0x237884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x237880u, 0x237888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237888u;
label_237888:
    // 0x237888: 0xc08e09a  jal         func_238268
    ctx->pc = 0x237888u;
    SET_GPR_U32(ctx, 31, 0x237890u);
    ctx->pc = 0x23788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237888u;
    // 0x23788c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238268u, 0x237888u, 0x237890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237890u;
label_237890:
    // 0x237890: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x237890u;
    {
        const bool branch_taken_0x237890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237890u;
        // 0x237894: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237890) {
            ctx->pc = 0x2378E0u;
            goto label_2378e0;
        }
    }
    ctx->pc = 0x237898u;
label_237898:
    // 0x237898: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x237898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x23789c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x23789cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2378a0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2378A0u;
    {
        const bool branch_taken_0x2378a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2378A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378A0u;
        // 0x2378a4: 0x3c0301fc  lui         $v1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378a0) {
            ctx->pc = 0x2378F0u;
            goto label_2378f0;
        }
    }
    ctx->pc = 0x2378A8u;
    // 0x2378a8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2378a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2378ac: 0x24631268  addiu       $v1, $v1, 0x1268
    ctx->pc = 0x2378acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4712));
    // 0x2378b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2378b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2378b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2378b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2378b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2378b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2378bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2378bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2378c0: 0x5085000c  beql        $a0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2378C0u;
    {
        const bool branch_taken_0x2378c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x2378c0) {
            ctx->pc = 0x2378C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2378C0u;
            // 0x2378c4: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2378F4u;
            goto label_2378f4;
        }
    }
    ctx->pc = 0x2378C8u;
    // 0x2378c8: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x2378c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x2378cc: 0xc081546  jal         func_205518
    ctx->pc = 0x2378CCu;
    SET_GPR_U32(ctx, 31, 0x2378D4u);
    ctx->pc = 0x2378D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2378CCu;
    // 0x2378d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2378CCu, 0x2378D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2378D4u;
label_2378d4:
    // 0x2378d4: 0xc08e0e2  jal         func_238388
    ctx->pc = 0x2378D4u;
    SET_GPR_U32(ctx, 31, 0x2378DCu);
    ctx->pc = 0x2378D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2378D4u;
    // 0x2378d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238388u, 0x2378D4u, 0x2378DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2378DCu;
label_2378dc:
    // 0x2378dc: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x2378dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_2378e0:
    // 0x2378e0: 0x8e450054  lw          $a1, 0x54($s2)
    ctx->pc = 0x2378e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2378e4: 0xc08e136  jal         func_2384D8
    ctx->pc = 0x2378E4u;
    SET_GPR_U32(ctx, 31, 0x2378ECu);
    ctx->pc = 0x2378E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2378E4u;
    // 0x2378e8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2384D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2384D8u, 0x2378E4u, 0x2378ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2378ECu;
label_2378ec:
    // 0x2378ec: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x2378ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_2378f0:
    // 0x2378f0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2378f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2378f4:
    // 0x2378f4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2378F4u;
    {
        const bool branch_taken_0x2378f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2378F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378F4u;
        // 0x2378f8: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378f4) {
            ctx->pc = 0x237904u;
            goto label_237904;
        }
    }
    ctx->pc = 0x2378FCu;
    // 0x2378fc: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x2378FCu;
    {
        const bool branch_taken_0x2378fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378FCu;
        // 0x237900: 0x24513dd8  addiu       $s1, $v0, 0x3DD8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378fc) {
            ctx->pc = 0x237DF0u;
            goto label_237df0;
        }
    }
    ctx->pc = 0x237904u;
label_237904:
    // 0x237904: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x237904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x237908: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x237908u;
    {
        const bool branch_taken_0x237908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237908u;
        // 0x23790c: 0x24513d88  addiu       $s1, $v0, 0x3D88 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237908) {
            ctx->pc = 0x237DF0u;
            goto label_237df0;
        }
    }
    ctx->pc = 0x237910u;
label_237910:
    // 0x237910: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x237910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x237914: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x237914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x237918: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x237918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x23791c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x23791Cu;
    {
        const bool branch_taken_0x23791c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23791Cu;
        // 0x237920: 0x24713e28  addiu       $s1, $v1, 0x3E28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 15912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23791c) {
            ctx->pc = 0x237990u;
            goto label_237990;
        }
    }
    ctx->pc = 0x237924u;
    // 0x237924: 0x8e50005c  lw          $s0, 0x5C($s2)
    ctx->pc = 0x237924u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x237928: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x237928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x23792c: 0xc081546  jal         func_205518
    ctx->pc = 0x23792Cu;
    SET_GPR_U32(ctx, 31, 0x237934u);
    ctx->pc = 0x237930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23792Cu;
    // 0x237930: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23792Cu, 0x237934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237934u;
label_237934:
    // 0x237934: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x237934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x237938: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x237938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x23793c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x23793cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x237940: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x237940u;
    {
        const bool branch_taken_0x237940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237940u;
        // 0x237944: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237940) {
            ctx->pc = 0x23795Cu;
            goto label_23795c;
        }
    }
    ctx->pc = 0x237948u;
    // 0x237948: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x237948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x23794c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x23794cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x237950: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x237950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x237954: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x237954u;
    {
        const bool branch_taken_0x237954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237954u;
        // 0x237958: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237954) {
            ctx->pc = 0x23797Cu;
            goto label_23797c;
        }
    }
    ctx->pc = 0x23795Cu;
label_23795c:
    // 0x23795c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x23795cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x237960: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x237960u;
    {
        const bool branch_taken_0x237960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237960u;
        // 0x237964: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237960) {
            ctx->pc = 0x23797Cu;
            goto label_23797c;
        }
    }
    ctx->pc = 0x237968u;
    // 0x237968: 0xc081546  jal         func_205518
    ctx->pc = 0x237968u;
    SET_GPR_U32(ctx, 31, 0x237970u);
    ctx->pc = 0x23796Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237968u;
    // 0x23796c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x237968u, 0x237970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237970u;
label_237970:
    // 0x237970: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x237970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x237974: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x237974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x237978: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x237978u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_23797c:
    // 0x23797c: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x23797cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x237980: 0x5450011b  bnel        $v0, $s0, . + 4 + (0x11B << 2)
    ctx->pc = 0x237980u;
    {
        const bool branch_taken_0x237980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x237980) {
            ctx->pc = 0x237984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237980u;
            // 0x237984: 0xae50005c  sw          $s0, 0x5C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237DF0u;
            goto label_237df0;
        }
    }
    ctx->pc = 0x237988u;
    // 0x237988: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x237988u;
    {
        const bool branch_taken_0x237988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237988) {
            ctx->pc = 0x237DF0u;
            goto label_237df0;
        }
    }
    ctx->pc = 0x237990u;
label_237990:
    // 0x237990: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x237990u;
    SET_GPR_U32(ctx, 31, 0x237998u);
    ctx->pc = 0x237994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237990u;
    // 0x237994: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x237990u, 0x237998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237998u;
label_237998:
    // 0x237998: 0x30420840  andi        $v0, $v0, 0x840
    ctx->pc = 0x237998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2112);
    // 0x23799c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x23799Cu;
    {
        const bool branch_taken_0x23799c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2379A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23799Cu;
        // 0x2379a0: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23799c) {
            ctx->pc = 0x237A48u;
            goto label_237a48;
        }
    }
    ctx->pc = 0x2379A4u;
    // 0x2379a4: 0xc081546  jal         func_205518
    ctx->pc = 0x2379A4u;
    SET_GPR_U32(ctx, 31, 0x2379ACu);
    ctx->pc = 0x2379A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2379A4u;
    // 0x2379a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2379A4u, 0x2379ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2379ACu;
label_2379ac:
    // 0x2379ac: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2379acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2379b0: 0x8c433838  lw          $v1, 0x3838($v0)
    ctx->pc = 0x2379b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x353838u));
    // 0x2379b4: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2379B4u;
    {
        const bool branch_taken_0x2379b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2379B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379B4u;
        // 0x2379b8: 0x8f86a004  lw          $a2, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379b4) {
            ctx->pc = 0x237A30u;
            goto label_237a30;
        }
    }
    ctx->pc = 0x2379BCu;
    // 0x2379bc: 0xc08d5c4  jal         func_235710
    ctx->pc = 0x2379BCu;
    SET_GPR_U32(ctx, 31, 0x2379C4u);
    ctx->pc = 0x235710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235710u, 0x2379BCu, 0x2379C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2379C4u;
label_2379c4:
    // 0x2379c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2379c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2379c8: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2379C8u;
    {
        const bool branch_taken_0x2379c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2379CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379C8u;
        // 0x2379cc: 0x8f86a004  lw          $a2, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379c8) {
            ctx->pc = 0x237A14u;
            goto label_237a14;
        }
    }
    ctx->pc = 0x2379D0u;
    // 0x2379d0: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x2379d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2379d4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2379d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2379d8: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2379d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2379dc: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x2379dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x2379e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2379e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2379e4: 0x24713e78  addiu       $s1, $v1, 0x3E78
    ctx->pc = 0x2379e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 15992));
    // 0x2379e8: 0x24842c88  addiu       $a0, $a0, 0x2C88
    ctx->pc = 0x2379e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11400));
    // 0x2379ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2379ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2379f0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2379f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2379f4: 0xa0470000  sb          $a3, 0x0($v0)
    ctx->pc = 0x2379f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x2379f8: 0xa6660004  sh          $a2, 0x4($s3)
    ctx->pc = 0x2379f8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x2379fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2379fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x237a00: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x237a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x237a04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x237a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x237a08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x237a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x237a0c: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x237A0Cu;
    {
        const bool branch_taken_0x237a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A0Cu;
        // 0x237a10: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a0c) {
            ctx->pc = 0x237CACu;
            goto label_237cac;
        }
    }
    ctx->pc = 0x237A14u;
label_237a14:
    // 0x237a14: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x237a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x237a18: 0x24422c88  addiu       $v0, $v0, 0x2C88
    ctx->pc = 0x237a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11400));
    // 0x237a1c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x237a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x237a20: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x237a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x237a24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x237a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x237a28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x237a2c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x237a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_237a30:
    // 0x237a30: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x237a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x237a34: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x237a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x237a38: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x237a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x237a3c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x237a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x237a40: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x237A40u;
    {
        const bool branch_taken_0x237a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A40u;
        // 0x237a44: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a40) {
            ctx->pc = 0x237C4Cu;
            goto label_237c4c;
        }
    }
    ctx->pc = 0x237A48u;
label_237a48:
    // 0x237a48: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x237a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x237a4c: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x237A4Cu;
    SET_GPR_U32(ctx, 31, 0x237A54u);
    ctx->pc = 0x237A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A4Cu;
    // 0x237a50: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x237A4Cu, 0x237A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A54u;
label_237a54:
    // 0x237a54: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x237a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x237a58: 0x104000e5  beqz        $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x237A58u;
    {
        const bool branch_taken_0x237a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A58u;
        // 0x237a5c: 0x8f85a004  lw          $a1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a58) {
            ctx->pc = 0x237DF0u;
            goto label_237df0;
        }
    }
    ctx->pc = 0x237A60u;
label_237a60:
    // 0x237a60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x237a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x237a64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x237a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237a68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x237a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x237a6c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x237a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x237a70: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x237a70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x237a74: 0xa6640004  sh          $a0, 0x4($s3)
    ctx->pc = 0x237a74u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x237a78: 0xc08e380  jal         func_238E00
    ctx->pc = 0x237A78u;
    SET_GPR_U32(ctx, 31, 0x237A80u);
    ctx->pc = 0x237A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A78u;
    // 0x237a7c: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238E00u, 0x237A78u, 0x237A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A80u;
label_237a80:
    // 0x237a80: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x237a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x237a84: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x237a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x237a88: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x237a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237a8c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x237a8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x237a90: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x237a90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x237a94: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x237a94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237a98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x237a98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237a9c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x237a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237aa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237aa4: 0x808e124  j           func_238490
    ctx->pc = 0x237AA4u;
    ctx->pc = 0x237AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237AA4u;
    // 0x237aa8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238490u;
    actingsoundStop_0x238490(rdram, ctx, runtime); return;
    ctx->pc = 0x237AACu;
label_237aac:
    // 0x237aac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x237AACu;
    {
        const bool branch_taken_0x237aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AACu;
        // 0x237ab0: 0x3c1401fc  lui         $s4, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237aac) {
            ctx->pc = 0x237AECu;
            goto label_237aec;
        }
    }
    ctx->pc = 0x237AB4u;
    // 0x237ab4: 0x0  nop
    ctx->pc = 0x237ab4u;
    // NOP
label_237ab8:
    // 0x237ab8: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x237ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x237abc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x237abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x237ac0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x237ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x237ac4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x237ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x237ac8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x237ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237acc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x237accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x237ad0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x237ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x237ad4: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x237ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x237ad8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237AD8u;
    {
        const bool branch_taken_0x237ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AD8u;
        // 0x237adc: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ad8) {
            ctx->pc = 0x237AF0u;
            goto label_237af0;
        }
    }
    ctx->pc = 0x237AE0u;
    // 0x237ae0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x237ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x237ae4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x237ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x237ae8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x237ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_237aec:
    // 0x237aec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x237aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_237af0:
    // 0x237af0: 0x26902c88  addiu       $s0, $s4, 0x2C88
    ctx->pc = 0x237af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 11400));
    // 0x237af4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x237af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x237af8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x237af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x237afc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x237afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237b00: 0xc08d582  jal         func_235608
    ctx->pc = 0x237B00u;
    SET_GPR_U32(ctx, 31, 0x237B08u);
    ctx->pc = 0x237B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237B00u;
    // 0x237b04: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235608u, 0x237B00u, 0x237B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B08u;
label_237b08:
    // 0x237b08: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x237B08u;
    {
        const bool branch_taken_0x237b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B08u;
        // 0x237b0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b08) {
            ctx->pc = 0x237AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237ab8;
        }
    }
    ctx->pc = 0x237B10u;
    // 0x237b10: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x237b10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x237b14: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x237B14u;
    {
        const bool branch_taken_0x237b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x237B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B14u;
        // 0x237b18: 0x8f86a004  lw          $a2, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b14) {
            ctx->pc = 0x237C00u;
            goto label_237c00;
        }
    }
    ctx->pc = 0x237B1Cu;
    // 0x237b1c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x237b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x237b20: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x237b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x237b24: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x237B24u;
    {
        const bool branch_taken_0x237b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B24u;
        // 0x237b28: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b24) {
            ctx->pc = 0x237B94u;
            goto label_237b94;
        }
    }
    ctx->pc = 0x237B2Cu;
    // 0x237b2c: 0xc081546  jal         func_205518
    ctx->pc = 0x237B2Cu;
    SET_GPR_U32(ctx, 31, 0x237B34u);
    ctx->pc = 0x237B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237B2Cu;
    // 0x237b30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x237B2Cu, 0x237B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B34u;
label_237b34:
    // 0x237b34: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x237b34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x237b38: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x237b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x237b3c: 0x0  nop
    ctx->pc = 0x237b3cu;
    // NOP
label_237b40:
    // 0x237b40: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x237b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x237b44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x237b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x237b48: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x237b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x237b4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x237b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237b50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x237b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x237b54: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237B54u;
    {
        const bool branch_taken_0x237b54 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x237B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B54u;
        // 0x237b58: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b54) {
            ctx->pc = 0x237B6Cu;
            goto label_237b6c;
        }
    }
    ctx->pc = 0x237B5Cu;
    // 0x237b5c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x237b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x237b60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x237b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x237b64: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x237b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x237b68: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x237b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_237b6c:
    // 0x237b6c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x237b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x237b70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x237b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x237b74: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x237b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x237b78: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x237b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237b7c: 0xc08d582  jal         func_235608
    ctx->pc = 0x237B7Cu;
    SET_GPR_U32(ctx, 31, 0x237B84u);
    ctx->pc = 0x237B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237B7Cu;
    // 0x237b80: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235608u, 0x237B7Cu, 0x237B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B84u;
label_237b84:
    // 0x237b84: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x237B84u;
    {
        const bool branch_taken_0x237b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B84u;
        // 0x237b88: 0x8f86a004  lw          $a2, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b84) {
            ctx->pc = 0x237B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237b40;
        }
    }
    ctx->pc = 0x237B8Cu;
    // 0x237b8c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x237B8Cu;
    {
        const bool branch_taken_0x237b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237b8c) {
            ctx->pc = 0x237C00u;
            goto label_237c00;
        }
    }
    ctx->pc = 0x237B94u;
label_237b94:
    // 0x237b94: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x237b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x237b98: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x237B98u;
    {
        const bool branch_taken_0x237b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237b98) {
            ctx->pc = 0x237C00u;
            goto label_237c00;
        }
    }
    ctx->pc = 0x237BA0u;
    // 0x237ba0: 0xc081546  jal         func_205518
    ctx->pc = 0x237BA0u;
    SET_GPR_U32(ctx, 31, 0x237BA8u);
    ctx->pc = 0x237BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237BA0u;
    // 0x237ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x237BA0u, 0x237BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237BA8u;
label_237ba8:
    // 0x237ba8: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x237ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x237bac: 0x0  nop
    ctx->pc = 0x237bacu;
    // NOP
label_237bb0:
    // 0x237bb0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x237bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x237bb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x237bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x237bb8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x237bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x237bbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x237bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237bc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x237bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x237bc4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x237bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x237bc8: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x237bc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x237bcc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237BCCu;
    {
        const bool branch_taken_0x237bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BCCu;
        // 0x237bd0: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bcc) {
            ctx->pc = 0x237BE4u;
            goto label_237be4;
        }
    }
    ctx->pc = 0x237BD4u;
    // 0x237bd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x237bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x237bd8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x237bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x237bdc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x237bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x237be0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x237be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_237be4:
    // 0x237be4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x237be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x237be8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x237be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x237bec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x237becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237bf0: 0xc08d582  jal         func_235608
    ctx->pc = 0x237BF0u;
    SET_GPR_U32(ctx, 31, 0x237BF8u);
    ctx->pc = 0x237BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237BF0u;
    // 0x237bf4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235608u, 0x237BF0u, 0x237BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237BF8u;
label_237bf8:
    // 0x237bf8: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x237BF8u;
    {
        const bool branch_taken_0x237bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BF8u;
        // 0x237bfc: 0x8f86a004  lw          $a2, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bf8) {
            ctx->pc = 0x237BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237bb0;
        }
    }
    ctx->pc = 0x237C00u;
label_237c00:
    // 0x237c00: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x237C00u;
    SET_GPR_U32(ctx, 31, 0x237C08u);
    ctx->pc = 0x237C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C00u;
    // 0x237c04: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x237C00u, 0x237C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C08u;
label_237c08:
    // 0x237c08: 0x30420840  andi        $v0, $v0, 0x840
    ctx->pc = 0x237c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2112);
    // 0x237c0c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x237C0Cu;
    {
        const bool branch_taken_0x237c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C0Cu;
        // 0x237c10: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c0c) {
            ctx->pc = 0x237C5Cu;
            goto label_237c5c;
        }
    }
    ctx->pc = 0x237C14u;
    // 0x237c14: 0xc081546  jal         func_205518
    ctx->pc = 0x237C14u;
    SET_GPR_U32(ctx, 31, 0x237C1Cu);
    ctx->pc = 0x237C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C14u;
    // 0x237c18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x237C14u, 0x237C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C1Cu;
label_237c1c:
    // 0x237c1c: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x237c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x237c20: 0x26842c88  addiu       $a0, $s4, 0x2C88
    ctx->pc = 0x237c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11400));
    // 0x237c24: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x237c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x237c28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x237c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x237c2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x237c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x237c30: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x237c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x237c34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x237c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237c38: 0xae430050  sw          $v1, 0x50($s2)
    ctx->pc = 0x237c38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
    // 0x237c3c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x237c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x237c40: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x237c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x237c44: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x237c44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x237c48: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x237c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_237c4c:
    // 0x237c4c: 0xc080ea2  jal         func_203A88
    ctx->pc = 0x237C4Cu;
    SET_GPR_U32(ctx, 31, 0x237C54u);
    ctx->pc = 0x203A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203A88u, 0x237C4Cu, 0x237C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C54u;
label_237c54:
    // 0x237c54: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x237C54u;
    {
        const bool branch_taken_0x237c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C54u;
        // 0x237c58: 0x8f86a004  lw          $a2, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c54) {
            ctx->pc = 0x237CC4u;
            goto label_237cc4;
        }
    }
    ctx->pc = 0x237C5Cu;
label_237c5c:
    // 0x237c5c: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x237c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x237c60: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x237C60u;
    SET_GPR_U32(ctx, 31, 0x237C68u);
    ctx->pc = 0x237C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C60u;
    // 0x237c64: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x237C60u, 0x237C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C68u;
label_237c68:
    // 0x237c68: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x237c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x237c6c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x237C6Cu;
    {
        const bool branch_taken_0x237c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C6Cu;
        // 0x237c70: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c6c) {
            ctx->pc = 0x237CBCu;
            goto label_237cbc;
        }
    }
    ctx->pc = 0x237C74u;
    // 0x237c74: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x237c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_237c78:
    // 0x237c78: 0x8c4339e0  lw          $v1, 0x39E0($v0)
    ctx->pc = 0x237c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14816)));
    // 0x237c7c: 0x1060ff78  beqz        $v1, . + 4 + (-0x88 << 2)
    ctx->pc = 0x237C7Cu;
    {
        const bool branch_taken_0x237c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C7Cu;
        // 0x237c80: 0x8f85a004  lw          $a1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c7c) {
            ctx->pc = 0x237A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237a60;
        }
    }
    ctx->pc = 0x237C84u;
    // 0x237c84: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x237c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x237c88: 0xc081546  jal         func_205518
    ctx->pc = 0x237C88u;
    SET_GPR_U32(ctx, 31, 0x237C90u);
    ctx->pc = 0x237C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C88u;
    // 0x237c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x237C88u, 0x237C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C90u;
label_237c90:
    // 0x237c90: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x237c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x237c94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x237c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x237c98: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x237c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x237c9c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x237c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x237ca0: 0x24713e28  addiu       $s1, $v1, 0x3E28
    ctx->pc = 0x237ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 15912));
    // 0x237ca4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x237ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x237ca8: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x237ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_237cac:
    // 0x237cac: 0xc080ea2  jal         func_203A88
    ctx->pc = 0x237CACu;
    SET_GPR_U32(ctx, 31, 0x237CB4u);
    ctx->pc = 0x237CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237CACu;
    // 0x237cb0: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203A88u, 0x237CACu, 0x237CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237CB4u;
label_237cb4:
    // 0x237cb4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x237CB4u;
    {
        const bool branch_taken_0x237cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237cb4) {
            ctx->pc = 0x237DF0u;
            goto label_237df0;
        }
    }
    ctx->pc = 0x237CBCu;
label_237cbc:
    // 0x237cbc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x237CBCu;
    {
        const bool branch_taken_0x237cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CBCu;
        // 0x237cc0: 0x24513e78  addiu       $s1, $v0, 0x3E78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cbc) {
            ctx->pc = 0x237DF0u;
            goto label_237df0;
        }
    }
    ctx->pc = 0x237CC4u;
label_237cc4:
    // 0x237cc4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x237cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x237cc8: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x237CC8u;
    SET_GPR_U32(ctx, 31, 0x237CD0u);
    ctx->pc = 0x237CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237CC8u;
    // 0x237ccc: 0xa6600004  sh          $zero, 0x4($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x237CC8u, 0x237CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237CD0u;
label_237cd0:
    // 0x237cd0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x237cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x237cd4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x237CD4u;
    {
        const bool branch_taken_0x237cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CD4u;
        // 0x237cd8: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cd4) {
            ctx->pc = 0x237D4Cu;
            goto label_237d4c;
        }
    }
    ctx->pc = 0x237CDCu;
    // 0x237cdc: 0x8c433838  lw          $v1, 0x3838($v0)
    ctx->pc = 0x237cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14392)));
    // 0x237ce0: 0x1060ffe5  beqz        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x237CE0u;
    {
        const bool branch_taken_0x237ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x237CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CE0u;
        // 0x237ce4: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ce0) {
            ctx->pc = 0x237C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237c78;
        }
    }
    ctx->pc = 0x237CE8u;
    // 0x237ce8: 0xc08d5c4  jal         func_235710
    ctx->pc = 0x237CE8u;
    SET_GPR_U32(ctx, 31, 0x237CF0u);
    ctx->pc = 0x235710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235710u, 0x237CE8u, 0x237CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237CF0u;
label_237cf0:
    // 0x237cf0: 0x1440ff5b  bnez        $v0, . + 4 + (-0xA5 << 2)
    ctx->pc = 0x237CF0u;
    {
        const bool branch_taken_0x237cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CF0u;
        // 0x237cf4: 0x8f85a004  lw          $a1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cf0) {
            ctx->pc = 0x237A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237a60;
        }
    }
    ctx->pc = 0x237CF8u;
    // 0x237cf8: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x237cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x237cfc: 0xc081546  jal         func_205518
    ctx->pc = 0x237CFCu;
    SET_GPR_U32(ctx, 31, 0x237D04u);
    ctx->pc = 0x237D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237CFCu;
    // 0x237d00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x237CFCu, 0x237D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D04u;
label_237d04:
    // 0x237d04: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x237d04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x237d08: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x237d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x237d0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x237d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237d10: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x237d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x237d14: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x237d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x237d18: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x237d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x237d1c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x237d1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x237d20: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x237d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x237d24: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x237d24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237d28: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x237d28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x237d2c: 0xa6640004  sh          $a0, 0x4($s3)
    ctx->pc = 0x237d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x237d30: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x237d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x237d34: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x237d34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x237d38: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x237d38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237d3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x237d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237d40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237d40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237d44: 0x8080e7a  j           func_2039E8
    ctx->pc = 0x237D44u;
    ctx->pc = 0x237D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D44u;
    // 0x237d48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2039E8u;
    joyClearButs_0x2039e8(rdram, ctx, runtime); return;
    ctx->pc = 0x237D4Cu;
label_237d4c:
    // 0x237d4c: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x237d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x237d50: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x237d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x237d54: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x237d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237d58: 0x14800025  bnez        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x237D58u;
    {
        const bool branch_taken_0x237d58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x237D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D58u;
        // 0x237d5c: 0x24713ce8  addiu       $s1, $v1, 0x3CE8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 15592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d58) {
            ctx->pc = 0x237DF0u;
            goto label_237df0;
        }
    }
    ctx->pc = 0x237D60u;
    // 0x237d60: 0x8f85b730  lw          $a1, -0x48D0($gp)
    ctx->pc = 0x237d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x237d64: 0x18a00010  blez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x237D64u;
    {
        const bool branch_taken_0x237d64 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x237D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D64u;
        // 0x237d68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d64) {
            ctx->pc = 0x237DA8u;
            goto label_237da8;
        }
    }
    ctx->pc = 0x237D6Cu;
    // 0x237d6c: 0x9383b738  lbu         $v1, -0x48C8($gp)
    ctx->pc = 0x237d6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948664)));
    // 0x237d70: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x237d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x237d74: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x237D74u;
    {
        const bool branch_taken_0x237d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x237d74) {
            ctx->pc = 0x237DA8u;
            goto label_237da8;
        }
    }
    ctx->pc = 0x237D7Cu;
    // 0x237d7c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x237d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237d80: 0x2788b738  addiu       $t0, $gp, -0x48C8
    ctx->pc = 0x237d80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948664));
    // 0x237d84: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x237d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x237d88: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x237d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x237d8c: 0x0  nop
    ctx->pc = 0x237d8cu;
    // NOP
label_237d90:
    // 0x237d90: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x237d90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x237d94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x237D94u;
    {
        const bool branch_taken_0x237d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D94u;
        // 0x237d98: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d94) {
            ctx->pc = 0x237DA8u;
            goto label_237da8;
        }
    }
    ctx->pc = 0x237D9Cu;
    // 0x237d9c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x237d9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237da0: 0x5067fffb  beql        $v1, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x237DA0u;
    {
        const bool branch_taken_0x237da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x237da0) {
            ctx->pc = 0x237DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237DA0u;
            // 0x237da4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237d90;
        }
    }
    ctx->pc = 0x237DA8u;
label_237da8:
    // 0x237da8: 0x14850011  bne         $a0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x237DA8u;
    {
        const bool branch_taken_0x237da8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x237da8) {
            ctx->pc = 0x237DF0u;
            goto label_237df0;
        }
    }
    ctx->pc = 0x237DB0u;
    // 0x237db0: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x237DB0u;
    SET_GPR_U32(ctx, 31, 0x237DB8u);
    ctx->pc = 0x237DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237DB0u;
    // 0x237db4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x237DB0u, 0x237DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237DB8u;
label_237db8:
    // 0x237db8: 0x30420840  andi        $v0, $v0, 0x840
    ctx->pc = 0x237db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2112);
    // 0x237dbc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x237DBCu;
    {
        const bool branch_taken_0x237dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DBCu;
        // 0x237dc0: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237dbc) {
            ctx->pc = 0x237DECu;
            goto label_237dec;
        }
    }
    ctx->pc = 0x237DC4u;
    // 0x237dc4: 0x2404008f  addiu       $a0, $zero, 0x8F
    ctx->pc = 0x237dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x237dc8: 0xc081546  jal         func_205518
    ctx->pc = 0x237DC8u;
    SET_GPR_U32(ctx, 31, 0x237DD0u);
    ctx->pc = 0x237DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237DC8u;
    // 0x237dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x237DC8u, 0x237DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237DD0u;
label_237dd0:
    // 0x237dd0: 0xc09071a  jal         func_241C68
    ctx->pc = 0x237DD0u;
    SET_GPR_U32(ctx, 31, 0x237DD8u);
    ctx->pc = 0x241C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241C68u, 0x237DD0u, 0x237DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237DD8u;
label_237dd8:
    // 0x237dd8: 0xc09056a  jal         func_2415A8
    ctx->pc = 0x237DD8u;
    SET_GPR_U32(ctx, 31, 0x237DE0u);
    ctx->pc = 0x2415A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2415A8u, 0x237DD8u, 0x237DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237DE0u;
label_237de0:
    // 0x237de0: 0xc08c02a  jal         func_2300A8
    ctx->pc = 0x237DE0u;
    SET_GPR_U32(ctx, 31, 0x237DE8u);
    ctx->pc = 0x237DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237DE0u;
    // 0x237de4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2300A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300A8u, 0x237DE0u, 0x237DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237DE8u;
label_237de8:
    // 0x237de8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x237de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_237dec:
    // 0x237dec: 0x24513d38  addiu       $s1, $v0, 0x3D38
    ctx->pc = 0x237decu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15672));
label_237df0:
    // 0x237df0: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x237DF0u;
    {
        const bool branch_taken_0x237df0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x237DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DF0u;
        // 0x237df4: 0x8f83b730  lw          $v1, -0x48D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237df0) {
            ctx->pc = 0x237E40u;
            goto label_237e40;
        }
    }
    ctx->pc = 0x237DF8u;
    // 0x237df8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237dfc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237DFCu;
    {
        const bool branch_taken_0x237dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DFCu;
        // 0x237e00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237dfc) {
            ctx->pc = 0x237E14u;
            goto label_237e14;
        }
    }
    ctx->pc = 0x237E04u;
    // 0x237e04: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237E04u;
    {
        const bool branch_taken_0x237e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E04u;
        // 0x237e08: 0x24020096  addiu       $v0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e04) {
            ctx->pc = 0x237E1Cu;
            goto label_237e1c;
        }
    }
    ctx->pc = 0x237E0Cu;
    // 0x237e0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x237E0Cu;
    {
        const bool branch_taken_0x237e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E0Cu;
        // 0x237e10: 0xa6220006  sh          $v0, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e0c) {
            ctx->pc = 0x237E24u;
            goto label_237e24;
        }
    }
    ctx->pc = 0x237E14u;
label_237e14:
    // 0x237e14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x237E14u;
    {
        const bool branch_taken_0x237e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E14u;
        // 0x237e18: 0x240200aa  addiu       $v0, $zero, 0xAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e14) {
            ctx->pc = 0x237E20u;
            goto label_237e20;
        }
    }
    ctx->pc = 0x237E1Cu;
label_237e1c:
    // 0x237e1c: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x237e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_237e20:
    // 0x237e20: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x237e20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_237e24:
    // 0x237e24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x237e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e28: 0xc08c08e  jal         func_230238
    ctx->pc = 0x237E28u;
    SET_GPR_U32(ctx, 31, 0x237E30u);
    ctx->pc = 0x237E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E28u;
    // 0x237e2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230238u, 0x237E28u, 0x237E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E30u;
label_237e30:
    // 0x237e30: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x237e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x237e34: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x237E34u;
    SET_GPR_U32(ctx, 31, 0x237E3Cu);
    ctx->pc = 0x237E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E34u;
    // 0x237e38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x237E34u, 0x237E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E3Cu;
label_237e3c:
    // 0x237e3c: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x237e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_237e40:
    // 0x237e40: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x237e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x237e44: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x237e44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x237e48: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x237e48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x237e4c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x237e4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237e50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x237e50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237e54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x237e54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237e58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x237E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E5Cu;
        // 0x237e60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237E64u;
}
