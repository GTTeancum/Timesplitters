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

// Function: _request_end
// Address: 0x2d2810 - 0x2d28c0
void _request_end_0x2d2810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_request_end_0x2d2810");
#endif

    switch (ctx->pc) {
        case 0x2d2810u: goto label_2d2810;
        case 0x2d2814u: goto label_2d2814;
        case 0x2d2818u: goto label_2d2818;
        case 0x2d281cu: goto label_2d281c;
        case 0x2d2820u: goto label_2d2820;
        case 0x2d2824u: goto label_2d2824;
        case 0x2d2828u: goto label_2d2828;
        case 0x2d282cu: goto label_2d282c;
        case 0x2d2830u: goto label_2d2830;
        case 0x2d2834u: goto label_2d2834;
        case 0x2d2838u: goto label_2d2838;
        case 0x2d283cu: goto label_2d283c;
        case 0x2d2840u: goto label_2d2840;
        case 0x2d2844u: goto label_2d2844;
        case 0x2d2848u: goto label_2d2848;
        case 0x2d284cu: goto label_2d284c;
        case 0x2d2850u: goto label_2d2850;
        case 0x2d2854u: goto label_2d2854;
        case 0x2d2858u: goto label_2d2858;
        case 0x2d285cu: goto label_2d285c;
        case 0x2d2860u: goto label_2d2860;
        case 0x2d2864u: goto label_2d2864;
        case 0x2d2868u: goto label_2d2868;
        case 0x2d286cu: goto label_2d286c;
        case 0x2d2870u: goto label_2d2870;
        case 0x2d2874u: goto label_2d2874;
        case 0x2d2878u: goto label_2d2878;
        case 0x2d287cu: goto label_2d287c;
        case 0x2d2880u: goto label_2d2880;
        case 0x2d2884u: goto label_2d2884;
        case 0x2d2888u: goto label_2d2888;
        case 0x2d288cu: goto label_2d288c;
        case 0x2d2890u: goto label_2d2890;
        case 0x2d2894u: goto label_2d2894;
        case 0x2d2898u: goto label_2d2898;
        case 0x2d289cu: goto label_2d289c;
        case 0x2d28a0u: goto label_2d28a0;
        case 0x2d28a4u: goto label_2d28a4;
        case 0x2d28a8u: goto label_2d28a8;
        case 0x2d28acu: goto label_2d28ac;
        case 0x2d28b0u: goto label_2d28b0;
        case 0x2d28b4u: goto label_2d28b4;
        case 0x2d28b8u: goto label_2d28b8;
        case 0x2d28bcu: goto label_2d28bc;
        default: break;
    }

    ctx->pc = 0x2d2810u;

label_2d2810:
    // 0x2d2810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d2810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d2814:
    // 0x2d2814: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d2814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2d2818:
    // 0x2d2818: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d2818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d281c:
    // 0x2d281c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x2d281cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_2d2820:
    // 0x2d2820: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d2820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d2824:
    // 0x2d2824: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d2824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d2828:
    // 0x2d2828: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2d2828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2d282c:
    // 0x2d282c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2d2830:
    if (ctx->pc == 0x2D2830u) {
        ctx->pc = 0x2D2830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D282Cu;
        // 0x2d2830: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2834u;
        goto label_2d2834;
    }
    ctx->pc = 0x2D282Cu;
    {
        const bool branch_taken_0x2d282c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D2830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D282Cu;
        // 0x2d2830: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d282c) {
            ctx->pc = 0x2D2854u;
            goto label_2d2854;
        }
    }
    ctx->pc = 0x2D2834u;
label_2d2834:
    // 0x2d2834: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_2d2838:
    if (ctx->pc == 0x2D2838u) {
        ctx->pc = 0x2D2838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2834u;
        // 0x2d2838: 0x8e10001c  lw          $s0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D283Cu;
        goto label_2d283c;
    }
    ctx->pc = 0x2D2834u;
    {
        const bool branch_taken_0x2d2834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2834) {
            ctx->pc = 0x2D2838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2834u;
            // 0x2d2838: 0x8e10001c  lw          $s0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2890u;
            goto label_2d2890;
        }
    }
    ctx->pc = 0x2D283Cu;
label_2d283c:
    // 0x2d283c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d283cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2d2840:
    // 0x2d2840: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x2d2840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_2d2844:
    // 0x2d2844: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_2d2848:
    if (ctx->pc == 0x2D2848u) {
        ctx->pc = 0x2D2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2844u;
        // 0x2d2848: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D284Cu;
        goto label_2d284c;
    }
    ctx->pc = 0x2D2844u;
    {
        const bool branch_taken_0x2d2844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d2844) {
            ctx->pc = 0x2D2848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2844u;
            // 0x2d2848: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2874u;
            goto label_2d2874;
        }
    }
    ctx->pc = 0x2D284Cu;
label_2d284c:
    // 0x2d284c: 0x10000010  b           . + 4 + (0x10 << 2)
label_2d2850:
    if (ctx->pc == 0x2D2850u) {
        ctx->pc = 0x2D2850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D284Cu;
        // 0x2d2850: 0x8e10001c  lw          $s0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2854u;
        goto label_2d2854;
    }
    ctx->pc = 0x2D284Cu;
    {
        const bool branch_taken_0x2d284c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D284Cu;
        // 0x2d2850: 0x8e10001c  lw          $s0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d284c) {
            ctx->pc = 0x2D2890u;
            goto label_2d2890;
        }
    }
    ctx->pc = 0x2D2854u;
label_2d2854:
    // 0x2d2854: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2d2854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d2858:
    // 0x2d2858: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2d2858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2d285c:
    // 0x2d285c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_2d2860:
    if (ctx->pc == 0x2D2860u) {
        ctx->pc = 0x2D2860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D285Cu;
        // 0x2d2860: 0x8e10001c  lw          $s0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2864u;
        goto label_2d2864;
    }
    ctx->pc = 0x2D285Cu;
    {
        const bool branch_taken_0x2d285c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d285c) {
            ctx->pc = 0x2D2860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D285Cu;
            // 0x2d2860: 0x8e10001c  lw          $s0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2890u;
            goto label_2d2890;
        }
    }
    ctx->pc = 0x2D2864u;
label_2d2864:
    // 0x2d2864: 0x40f809  jalr        $v0
label_2d2868:
    if (ctx->pc == 0x2D2868u) {
        ctx->pc = 0x2D2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2864u;
        // 0x2d2868: 0x8c840020  lw          $a0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D286Cu;
        goto label_2d286c;
    }
    ctx->pc = 0x2D2864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D286Cu);
        ctx->pc = 0x2D2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2864u;
        // 0x2d2868: 0x8c840020  lw          $a0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2864u, 0x2D286Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D286Cu;
label_2d286c:
    // 0x2d286c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2d2870:
    if (ctx->pc == 0x2D2870u) {
        ctx->pc = 0x2D2870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D286Cu;
        // 0x2d2870: 0x8e10001c  lw          $s0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2874u;
        goto label_2d2874;
    }
    ctx->pc = 0x2D286Cu;
    {
        const bool branch_taken_0x2d286c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D286Cu;
        // 0x2d2870: 0x8e10001c  lw          $s0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d286c) {
            ctx->pc = 0x2D2890u;
            goto label_2d2890;
        }
    }
    ctx->pc = 0x2D2874u;
label_2d2874:
    // 0x2d2874: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2d2874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d2878:
    // 0x2d2878: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x2d2878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
label_2d287c:
    // 0x2d287c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2d287cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2d2880:
    // 0x2d2880: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2d2880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_2d2884:
    // 0x2d2884: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2d2884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2d2888:
    // 0x2d2888: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x2d2888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_2d288c:
    // 0x2d288c: 0x8e10001c  lw          $s0, 0x1C($s0)
    ctx->pc = 0x2d288cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d2890:
    // 0x2d2890: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2d2890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d2894:
    // 0x2d2894: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_2d2898:
    if (ctx->pc == 0x2D2898u) {
        ctx->pc = 0x2D289Cu;
        goto label_2d289c;
    }
    ctx->pc = 0x2D2894u;
    {
        const bool branch_taken_0x2d2894 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2d2894) {
            ctx->pc = 0x2D28A4u;
            goto label_2d28a4;
        }
    }
    ctx->pc = 0x2D289Cu;
label_2d289c:
    // 0x2d289c: 0xc0b4054  jal         func_2D0150
label_2d28a0:
    if (ctx->pc == 0x2D28A0u) {
        ctx->pc = 0x2D28A4u;
        goto label_2d28a4;
    }
    ctx->pc = 0x2D289Cu;
    SET_GPR_U32(ctx, 31, 0x2D28A4u);
    ctx->pc = 0x2D0150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0150u, 0x2D289Cu, 0x2D28A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D28A4u;
label_2d28a4:
    // 0x2d28a4: 0xc0b49e0  jal         func_2D2780
label_2d28a8:
    if (ctx->pc == 0x2D28A8u) {
        ctx->pc = 0x2D28A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28A4u;
        // 0x2d28a8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D28ACu;
        goto label_2d28ac;
    }
    ctx->pc = 0x2D28A4u;
    SET_GPR_U32(ctx, 31, 0x2D28ACu);
    ctx->pc = 0x2D28A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D28A4u;
    // 0x2d28a8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2780u, 0x2D28A4u, 0x2D28ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D28ACu;
label_2d28ac:
    // 0x2d28ac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d28acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2d28b0:
    // 0x2d28b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d28b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d28b4:
    // 0x2d28b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d28b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d28b8:
    // 0x2d28b8: 0x3e00008  jr          $ra
label_2d28bc:
    if (ctx->pc == 0x2D28BCu) {
        ctx->pc = 0x2D28BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28B8u;
        // 0x2d28bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D28C0u;
        goto label_fallthrough_0x2d28b8;
    }
    ctx->pc = 0x2D28B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D28BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28B8u;
        // 0x2d28bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D28B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d28b8:
    ctx->pc = 0x2D28C0u;
}
