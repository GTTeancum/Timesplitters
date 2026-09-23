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

// Function: challengechr_pageDraw
// Address: 0x23c308 - 0x23c3cc
void challengechr_pageDraw_0x23c308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("challengechr_pageDraw_0x23c308");
#endif

    switch (ctx->pc) {
        case 0x23c32cu: goto label_23c32c;
        case 0x23c33cu: goto label_23c33c;
        case 0x23c344u: goto label_23c344;
        default: break;
    }

    ctx->pc = 0x23c308u;

    // 0x23c308: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23c308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23c30c: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23c310: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23c310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23c314: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23c314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c318: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c31c: 0x8c441224  lw          $a0, 0x1224($v0)
    ctx->pc = 0x23c31cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FC1224u));
    // 0x23c320: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23c320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23c324: 0xc087c12  jal         func_21F048
    ctx->pc = 0x23C324u;
    SET_GPR_U32(ctx, 31, 0x23C32Cu);
    ctx->pc = 0x21F048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F048u, 0x23C324u, 0x23C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C32Cu;
label_23c32c:
    // 0x23c32c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x23c32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x23c330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c334: 0xc08c1a2  jal         func_230688
    ctx->pc = 0x23C334u;
    SET_GPR_U32(ctx, 31, 0x23C33Cu);
    ctx->pc = 0x23C338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C334u;
    // 0x23c338: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230688u, 0x23C334u, 0x23C33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C33Cu;
label_23c33c:
    // 0x23c33c: 0xc08e318  jal         func_238C60
    ctx->pc = 0x23C33Cu;
    SET_GPR_U32(ctx, 31, 0x23C344u);
    ctx->pc = 0x238C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238C60u, 0x23C33Cu, 0x23C344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C344u;
label_23c344:
    // 0x23c344: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23c344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23c348: 0x2784b738  addiu       $a0, $gp, -0x48C8
    ctx->pc = 0x23c348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948664));
    // 0x23c34c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23c34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23c350: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23c350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23c354: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23c354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23c358: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23c358u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c35c: 0x14650017  bne         $v1, $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x23C35Cu;
    {
        const bool branch_taken_0x23c35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x23C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C35Cu;
        // 0x23c360: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c35c) {
            ctx->pc = 0x23C3BCu;
            goto label_23c3bc;
        }
    }
    ctx->pc = 0x23C364u;
    // 0x23c364: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x23c364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x23c368: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23c368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23c36c: 0x2063018  mult        $a2, $s0, $a2
    ctx->pc = 0x23c36cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x23c370: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x23c370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x23c374: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x23c374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x23c378: 0x24a550e0  addiu       $a1, $a1, 0x50E0
    ctx->pc = 0x23c378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20704));
    // 0x23c37c: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x23c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x23c380: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23c380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23c384: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23c384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c38c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x23c38cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x23c390: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x23c390u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23c394: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x23c394u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23c398: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23c398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c39c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23c39cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c3a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23c3a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23c3a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c3a8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x23c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x23c3ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c3b0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x23c3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c3b4: 0x808dbd0  j           func_236F40
    ctx->pc = 0x23C3B4u;
    ctx->pc = 0x23C3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C3B4u;
    // 0x23c3b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236F40u;
    drawCharName_0x236f40(rdram, ctx, runtime); return;
    ctx->pc = 0x23C3BCu;
label_23c3bc:
    // 0x23c3bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23c3bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c3c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c3c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x23C3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3C4u;
        // 0x23c3c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C3CCu;
}
