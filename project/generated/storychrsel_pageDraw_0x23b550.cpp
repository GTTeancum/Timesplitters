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

// Function: storychrsel_pageDraw
// Address: 0x23b550 - 0x23b62c
void storychrsel_pageDraw_0x23b550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("storychrsel_pageDraw_0x23b550");
#endif

    switch (ctx->pc) {
        case 0x23b570u: goto label_23b570;
        case 0x23b598u: goto label_23b598;
        case 0x23b5a0u: goto label_23b5a0;
        default: break;
    }

    ctx->pc = 0x23b550u;

    // 0x23b550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23b554: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23b554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23b558: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23b558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23b55c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23b560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23b560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23b564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23b568: 0xc08828c  jal         func_220A30
    ctx->pc = 0x23B568u;
    SET_GPR_U32(ctx, 31, 0x23B570u);
    ctx->pc = 0x23B56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B568u;
    // 0x23b56c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x23B568u, 0x23B570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B570u;
label_23b570:
    // 0x23b570: 0x24050b78  addiu       $a1, $zero, 0xB78
    ctx->pc = 0x23b570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x23b574: 0x8f849dd8  lw          $a0, -0x6228($gp)
    ctx->pc = 0x23b574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x23b578: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x23b578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23b57c: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23b580: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23b580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23b584: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23b584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23b588: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B588u;
    {
        const bool branch_taken_0x23b588 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x23B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B588u;
        // 0x23b58c: 0x24900020  addiu       $s0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b588) {
            ctx->pc = 0x23B598u;
            goto label_23b598;
        }
    }
    ctx->pc = 0x23B590u;
    // 0x23b590: 0xc08b79a  jal         func_22DE68
    ctx->pc = 0x23B590u;
    SET_GPR_U32(ctx, 31, 0x23B598u);
    ctx->pc = 0x23B594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B590u;
    // 0x23b594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DE68u, 0x23B590u, 0x23B598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B598u;
label_23b598:
    // 0x23b598: 0xc08e318  jal         func_238C60
    ctx->pc = 0x23B598u;
    SET_GPR_U32(ctx, 31, 0x23B5A0u);
    ctx->pc = 0x238C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238C60u, 0x23B598u, 0x23B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B5A0u;
label_23b5a0:
    // 0x23b5a0: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23b5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23b5a4: 0x2784b738  addiu       $a0, $gp, -0x48C8
    ctx->pc = 0x23b5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948664));
    // 0x23b5a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23b5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b5ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23b5b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23b5b4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23b5b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23b5b8: 0x14650018  bne         $v1, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x23B5B8u;
    {
        const bool branch_taken_0x23b5b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x23B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5B8u;
        // 0x23b5bc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b5b8) {
            ctx->pc = 0x23B61Cu;
            goto label_23b61c;
        }
    }
    ctx->pc = 0x23B5C0u;
    // 0x23b5c0: 0x8e070054  lw          $a3, 0x54($s0)
    ctx->pc = 0x23b5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x23b5c4: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x23b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x23b5c8: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23b5cc: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x23b5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x23b5d0: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x23b5d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x23b5d4: 0x24c650e0  addiu       $a2, $a2, 0x50E0
    ctx->pc = 0x23b5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20704));
    // 0x23b5d8: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x23b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x23b5dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23b5e0: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x23b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x23b5e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23b5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b5e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23b5ec: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x23b5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x23b5f0: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x23b5f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23b5f4: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x23b5f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23b5f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23b5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b5fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23b5fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b600: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23b600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b604: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23b608: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b60c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x23b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x23b610: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x23b610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23b614: 0x808dbd0  j           func_236F40
    ctx->pc = 0x23B614u;
    ctx->pc = 0x23B618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B614u;
    // 0x23b618: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236F40u;
    drawCharName_0x236f40(rdram, ctx, runtime); return;
    ctx->pc = 0x23B61Cu;
label_23b61c:
    // 0x23b61c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23b61cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b624: 0x3e00008  jr          $ra
    ctx->pc = 0x23B624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B624u;
        // 0x23b628: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B62Cu;
}
