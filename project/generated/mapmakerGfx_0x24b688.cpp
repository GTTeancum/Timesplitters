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

// Function: mapmakerGfx
// Address: 0x24b688 - 0x24b974
void mapmakerGfx_0x24b688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapmakerGfx_0x24b688");
#endif

    switch (ctx->pc) {
        case 0x24b6a4u: goto label_24b6a4;
        case 0x24b6acu: goto label_24b6ac;
        case 0x24b6d4u: goto label_24b6d4;
        case 0x24b730u: goto label_24b730;
        case 0x24b7b8u: goto label_24b7b8;
        case 0x24b82cu: goto label_24b82c;
        case 0x24b864u: goto label_24b864;
        case 0x24b86cu: goto label_24b86c;
        case 0x24b8a8u: goto label_24b8a8;
        case 0x24b8f0u: goto label_24b8f0;
        case 0x24b91cu: goto label_24b91c;
        case 0x24b928u: goto label_24b928;
        default: break;
    }

    ctx->pc = 0x24b688u;

    // 0x24b688: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24b688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24b68c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24b68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24b690: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24b690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24b694: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24b694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24b698: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24b698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24b69c: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x24B69Cu;
    SET_GPR_U32(ctx, 31, 0x24B6A4u);
    ctx->pc = 0x24B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B69Cu;
    // 0x24b6a0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x24B69Cu, 0x24B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B6A4u;
label_24b6a4:
    // 0x24b6a4: 0xc092c78  jal         func_24B1E0
    ctx->pc = 0x24B6A4u;
    SET_GPR_U32(ctx, 31, 0x24B6ACu);
    ctx->pc = 0x24B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B1E0u, 0x24B6A4u, 0x24B6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B6ACu;
label_24b6ac:
    // 0x24b6ac: 0x8f82a0d8  lw          $v0, -0x5F28($gp)
    ctx->pc = 0x24b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24b6b0: 0x30424008  andi        $v0, $v0, 0x4008
    ctx->pc = 0x24b6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16392);
    // 0x24b6b4: 0x144000aa  bnez        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x24B6B4u;
    {
        const bool branch_taken_0x24b6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6B4u;
        // 0x24b6b8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b6b4) {
            ctx->pc = 0x24B960u;
            goto label_24b960;
        }
    }
    ctx->pc = 0x24B6BCu;
    // 0x24b6bc: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x24b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24b6c0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x24b6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x24b6c4: 0x146000a7  bnez        $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x24B6C4u;
    {
        const bool branch_taken_0x24b6c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6C4u;
        // 0x24b6c8: 0xdfb20020  ld          $s2, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b6c4) {
            ctx->pc = 0x24B964u;
            goto label_24b964;
        }
    }
    ctx->pc = 0x24B6CCu;
    // 0x24b6cc: 0xc092c90  jal         func_24B240
    ctx->pc = 0x24B6CCu;
    SET_GPR_U32(ctx, 31, 0x24B6D4u);
    ctx->pc = 0x24B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B240u, 0x24B6CCu, 0x24B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B6D4u;
label_24b6d4:
    // 0x24b6d4: 0x8f88a0f4  lw          $t0, -0x5F0C($gp)
    ctx->pc = 0x24b6d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942964)));
    // 0x24b6d8: 0x11000066  beqz        $t0, . + 4 + (0x66 << 2)
    ctx->pc = 0x24B6D8u;
    {
        const bool branch_taken_0x24b6d8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6D8u;
        // 0x24b6dc: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b6d8) {
            ctx->pc = 0x24B874u;
            goto label_24b874;
        }
    }
    ctx->pc = 0x24B6E0u;
    // 0x24b6e0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x24b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x24b6e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b6e8: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x24B6E8u;
    {
        const bool branch_taken_0x24b6e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6E8u;
        // 0x24b6ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b6e8) {
            ctx->pc = 0x24B7C0u;
            goto label_24b7c0;
        }
    }
    ctx->pc = 0x24B6F0u;
    // 0x24b6f0: 0x8f83a0d4  lw          $v1, -0x5F2C($gp)
    ctx->pc = 0x24b6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942932)));
    // 0x24b6f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24b6f8: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x24B6F8u;
    {
        const bool branch_taken_0x24b6f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6F8u;
        // 0x24b6fc: 0x3c11002f  lui         $s1, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b6f8) {
            ctx->pc = 0x24B7C4u;
            goto label_24b7c4;
        }
    }
    ctx->pc = 0x24B700u;
    // 0x24b700: 0x3c090036  lui         $t1, 0x36
    ctx->pc = 0x24b700u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)54 << 16));
    // 0x24b704: 0x9104001c  lbu         $a0, 0x1C($t0)
    ctx->pc = 0x24b704u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x24b708: 0x252382c8  addiu       $v1, $t1, -0x7D38
    ctx->pc = 0x24b708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294935240));
    // 0x24b70c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x24b70cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3582CAu));
    // 0x24b710: 0x10440012  beq         $v0, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x24B710u;
    {
        const bool branch_taken_0x24b710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x24B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B710u;
        // 0x24b714: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b710) {
            ctx->pc = 0x24B75Cu;
            goto label_24b75c;
        }
    }
    ctx->pc = 0x24B718u;
    // 0x24b718: 0x8f859354  lw          $a1, -0x6CAC($gp)
    ctx->pc = 0x24b718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24b71c: 0x3c0a003b  lui         $t2, 0x3B
    ctx->pc = 0x24b71cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)59 << 16));
    // 0x24b720: 0x3c11002f  lui         $s1, 0x2F
    ctx->pc = 0x24b720u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)47 << 16));
    // 0x24b724: 0x3c120035  lui         $s2, 0x35
    ctx->pc = 0x24b724u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53 << 16));
    // 0x24b728: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24b728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x24b72c: 0x0  nop
    ctx->pc = 0x24b72cu;
    // NOP
label_24b730:
    // 0x24b730: 0x28e2000b  slti        $v0, $a3, 0xB
    ctx->pc = 0x24b730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x24b734: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24B734u;
    {
        const bool branch_taken_0x24b734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B734u;
        // 0x24b738: 0x252282c8  addiu       $v0, $t1, -0x7D38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294935240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b734) {
            ctx->pc = 0x24B774u;
            goto label_24b774;
        }
    }
    ctx->pc = 0x24B73Cu;
    // 0x24b73c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x24b73cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x24b740: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x24b740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x24b744: 0x9104001c  lbu         $a0, 0x1C($t0)
    ctx->pc = 0x24b744u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x24b748: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x24b748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x24b74c: 0x5464fff8  bnel        $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24B74Cu;
    {
        const bool branch_taken_0x24b74c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x24b74c) {
            ctx->pc = 0x24B750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B74Cu;
            // 0x24b750: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b730;
        }
    }
    ctx->pc = 0x24B754u;
    // 0x24b754: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24B754u;
    {
        const bool branch_taken_0x24b754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B754u;
        // 0x24b758: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b754) {
            ctx->pc = 0x24B77Cu;
            goto label_24b77c;
        }
    }
    ctx->pc = 0x24B75Cu;
label_24b75c:
    // 0x24b75c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24b75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b760: 0x3c0a003b  lui         $t2, 0x3B
    ctx->pc = 0x24b760u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)59 << 16));
    // 0x24b764: 0x3c11002f  lui         $s1, 0x2F
    ctx->pc = 0x24b764u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)47 << 16));
    // 0x24b768: 0x8f859354  lw          $a1, -0x6CAC($gp)
    ctx->pc = 0x24b768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24b76c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24B76Cu;
    {
        const bool branch_taken_0x24b76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B76Cu;
        // 0x24b770: 0x3c120035  lui         $s2, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b76c) {
            ctx->pc = 0x24B778u;
            goto label_24b778;
        }
    }
    ctx->pc = 0x24B774u;
label_24b774:
    // 0x24b774: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x24b774u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_24b778:
    // 0x24b778: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x24b778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_24b77c:
    // 0x24b77c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24B77Cu;
    {
        const bool branch_taken_0x24b77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b77c) {
            ctx->pc = 0x24B780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B77Cu;
            // 0x24b780: 0x9110001d  lbu         $s0, 0x1D($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 29)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B784u;
            goto label_24b784;
        }
    }
    ctx->pc = 0x24B784u;
label_24b784:
    // 0x24b784: 0x252482c8  addiu       $a0, $t1, -0x7D38
    ctx->pc = 0x24b784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294935240));
    // 0x24b788: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x24b788u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x24b78c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x24b78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x24b790: 0x26222c18  addiu       $v0, $s1, 0x2C18
    ctx->pc = 0x24b790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 11288));
    // 0x24b794: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x24b794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24b798: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x24b798u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24b79c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24b7a0: 0x2544e940  addiu       $a0, $t2, -0x16C0
    ctx->pc = 0x24b7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961472));
    // 0x24b7a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24b7a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24b7ac: 0x8c450e00  lw          $a1, 0xE00($v0)
    ctx->pc = 0x24b7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3584)));
    // 0x24b7b0: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x24B7B0u;
    SET_GPR_U32(ctx, 31, 0x24B7B8u);
    ctx->pc = 0x24B7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B7B0u;
    // 0x24b7b4: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x24B7B0u, 0x24B7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B7B8u;
label_24b7b8:
    // 0x24b7b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24B7B8u;
    {
        const bool branch_taken_0x24b7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7B8u;
        // 0x24b7bc: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b7b8) {
            ctx->pc = 0x24B7C8u;
            goto label_24b7c8;
        }
    }
    ctx->pc = 0x24B7C0u;
label_24b7c0:
    // 0x24b7c0: 0x3c11002f  lui         $s1, 0x2F
    ctx->pc = 0x24b7c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)47 << 16));
label_24b7c4:
    // 0x24b7c4: 0x3c120035  lui         $s2, 0x35
    ctx->pc = 0x24b7c4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53 << 16));
label_24b7c8:
    // 0x24b7c8: 0x11200018  beqz        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x24B7C8u;
    {
        const bool branch_taken_0x24b7c8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7C8u;
        // 0x24b7cc: 0x8f83a158  lw          $v1, -0x5EA8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b7c8) {
            ctx->pc = 0x24B82Cu;
            goto label_24b82c;
        }
    }
    ctx->pc = 0x24B7D0u;
    // 0x24b7d0: 0x8f82a15c  lw          $v0, -0x5EA4($gp)
    ctx->pc = 0x24b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
    // 0x24b7d4: 0x8f85a164  lw          $a1, -0x5E9C($gp)
    ctx->pc = 0x24b7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943076)));
    // 0x24b7d8: 0x24680028  addiu       $t0, $v1, 0x28
    ctx->pc = 0x24b7d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x24b7dc: 0x8f84a160  lw          $a0, -0x5EA0($gp)
    ctx->pc = 0x24b7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943072)));
    // 0x24b7e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x24b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24b7e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24b7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24b7e8: 0x2446ffe4  addiu       $a2, $v0, -0x1C
    ctx->pc = 0x24b7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x24b7ec: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24B7ECu;
    {
        const bool branch_taken_0x24b7ec = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x24B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7ECu;
        // 0x24b7f0: 0x2467ff24  addiu       $a3, $v1, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967076));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b7ec) {
            ctx->pc = 0x24B810u;
            goto label_24b810;
        }
    }
    ctx->pc = 0x24B7F4u;
    // 0x24b7f4: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x24b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24b7f8: 0x26242c18  addiu       $a0, $s1, 0x2C18
    ctx->pc = 0x24b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11288));
    // 0x24b7fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24b800: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24b800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24b804: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24b804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24b808: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24B808u;
    {
        const bool branch_taken_0x24b808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B808u;
        // 0x24b80c: 0x8c6a0e04  lw          $t2, 0xE04($v1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b808) {
            ctx->pc = 0x24B814u;
            goto label_24b814;
        }
    }
    ctx->pc = 0x24B810u;
label_24b810:
    // 0x24b810: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24b810u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24b814:
    // 0x24b814: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x24b814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b818: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x24b818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b81c: 0x260b0018  addiu       $t3, $s0, 0x18
    ctx->pc = 0x24b81cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x24b820: 0x240800db  addiu       $t0, $zero, 0xDB
    ctx->pc = 0x24b820u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    // 0x24b824: 0xc092ce6  jal         func_24B398
    ctx->pc = 0x24B824u;
    SET_GPR_U32(ctx, 31, 0x24B82Cu);
    ctx->pc = 0x24B828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B824u;
    // 0x24b828: 0x24092850  addiu       $t1, $zero, 0x2850 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B398u, 0x24B824u, 0x24B82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B82Cu;
label_24b82c:
    // 0x24b82c: 0x8f83a0f4  lw          $v1, -0x5F0C($gp)
    ctx->pc = 0x24b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942964)));
    // 0x24b830: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x24B830u;
    {
        const bool branch_taken_0x24b830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B830u;
        // 0x24b834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b830) {
            ctx->pc = 0x24B87Cu;
            goto label_24b87c;
        }
    }
    ctx->pc = 0x24B838u;
    // 0x24b838: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24b838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24b83c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24B83Cu;
    {
        const bool branch_taken_0x24b83c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B83Cu;
        // 0x24b840: 0x8f82a0f8  lw          $v0, -0x5F08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b83c) {
            ctx->pc = 0x24B880u;
            goto label_24b880;
        }
    }
    ctx->pc = 0x24B844u;
    // 0x24b844: 0x3c097f7f  lui         $t1, 0x7F7F
    ctx->pc = 0x24b844u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32639 << 16));
    // 0x24b848: 0x240401ca  addiu       $a0, $zero, 0x1CA
    ctx->pc = 0x24b848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 458));
    // 0x24b84c: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x24b84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x24b850: 0x24060275  addiu       $a2, $zero, 0x275
    ctx->pc = 0x24b850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 629));
    // 0x24b854: 0x240700db  addiu       $a3, $zero, 0xDB
    ctx->pc = 0x24b854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    // 0x24b858: 0x24081e64  addiu       $t0, $zero, 0x1E64
    ctx->pc = 0x24b858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7780));
    // 0x24b85c: 0xc08bb46  jal         func_22ED18
    ctx->pc = 0x24B85Cu;
    SET_GPR_U32(ctx, 31, 0x24B864u);
    ctx->pc = 0x24B860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B85Cu;
    // 0x24b860: 0x35297f7f  ori         $t1, $t1, 0x7F7F (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32639);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED18u, 0x24B85Cu, 0x24B864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B864u;
label_24b864:
    // 0x24b864: 0xc094362  jal         func_250D88
    ctx->pc = 0x24B864u;
    SET_GPR_U32(ctx, 31, 0x24B86Cu);
    ctx->pc = 0x250D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250D88u, 0x24B864u, 0x24B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B86Cu;
label_24b86c:
    // 0x24b86c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24B86Cu;
    {
        const bool branch_taken_0x24b86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B86Cu;
        // 0x24b870: 0x8f82a0f8  lw          $v0, -0x5F08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b86c) {
            ctx->pc = 0x24B880u;
            goto label_24b880;
        }
    }
    ctx->pc = 0x24B874u;
label_24b874:
    // 0x24b874: 0x3c11002f  lui         $s1, 0x2F
    ctx->pc = 0x24b874u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)47 << 16));
    // 0x24b878: 0x3c120035  lui         $s2, 0x35
    ctx->pc = 0x24b878u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53 << 16));
label_24b87c:
    // 0x24b87c: 0x8f82a0f8  lw          $v0, -0x5F08($gp)
    ctx->pc = 0x24b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
label_24b880:
    // 0x24b880: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24B880u;
    {
        const bool branch_taken_0x24b880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B880u;
        // 0x24b884: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b880) {
            ctx->pc = 0x24B8A8u;
            goto label_24b8a8;
        }
    }
    ctx->pc = 0x24B888u;
    // 0x24b888: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x24b888u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24b88c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x24b88cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x24b890: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x24b890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x24b894: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x24b894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x24b898: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x24b898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24b89c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x24b89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x24b8a0: 0xc08b952  jal         func_22E548
    ctx->pc = 0x24B8A0u;
    SET_GPR_U32(ctx, 31, 0x24B8A8u);
    ctx->pc = 0x24B8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B8A0u;
    // 0x24b8a4: 0x34a50080  ori         $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x24B8A0u, 0x24B8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B8A8u;
label_24b8a8:
    // 0x24b8a8: 0x8f84a0d4  lw          $a0, -0x5F2C($gp)
    ctx->pc = 0x24b8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942932)));
    // 0x24b8ac: 0x264265e0  addiu       $v0, $s2, 0x65E0
    ctx->pc = 0x24b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 26080));
    // 0x24b8b0: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x24b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24b8b4: 0x26252c18  addiu       $a1, $s1, 0x2C18
    ctx->pc = 0x24b8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 11288));
    // 0x24b8b8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x24b8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x24b8bc: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x24b8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x24b8c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x24b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24b8c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24b8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24b8c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24b8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x24b8cc: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x24b8ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24b8d0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x24b8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24b8d4: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x24b8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x24b8d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24b8dc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x24b8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24b8e0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x24b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x24b8e4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x24b8e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24b8e8: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x24B8E8u;
    SET_GPR_U32(ctx, 31, 0x24B8F0u);
    ctx->pc = 0x24B8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B8E8u;
    // 0x24b8ec: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x24B8E8u, 0x24B8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B8F0u;
label_24b8f0:
    // 0x24b8f0: 0x8f82a0f8  lw          $v0, -0x5F08($gp)
    ctx->pc = 0x24b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    // 0x24b8f4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24B8F4u;
    {
        const bool branch_taken_0x24b8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B8F4u;
        // 0x24b8f8: 0x240300ac  addiu       $v1, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b8f4) {
            ctx->pc = 0x24B91Cu;
            goto label_24b91c;
        }
    }
    ctx->pc = 0x24B8FCu;
    // 0x24b8fc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x24b8fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24b900: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x24b900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x24b904: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x24b904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x24b908: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x24b908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x24b90c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x24b90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24b910: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x24b910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x24b914: 0xc08b952  jal         func_22E548
    ctx->pc = 0x24B914u;
    SET_GPR_U32(ctx, 31, 0x24B91Cu);
    ctx->pc = 0x24B918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B914u;
    // 0x24b918: 0x34a50080  ori         $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x24B914u, 0x24B91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B91Cu;
label_24b91c:
    // 0x24b91c: 0x24040110  addiu       $a0, $zero, 0x110
    ctx->pc = 0x24b91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x24b920: 0xc092d42  jal         func_24B508
    ctx->pc = 0x24B920u;
    SET_GPR_U32(ctx, 31, 0x24B928u);
    ctx->pc = 0x24B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B920u;
    // 0x24b924: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B508u, 0x24B920u, 0x24B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B928u;
label_24b928:
    // 0x24b928: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x24b928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24b92c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x24b92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x24b930: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x24B930u;
    {
        const bool branch_taken_0x24b930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B930u;
        // 0x24b934: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b930) {
            ctx->pc = 0x24B960u;
            goto label_24b960;
        }
    }
    ctx->pc = 0x24B938u;
    // 0x24b938: 0x8f84a158  lw          $a0, -0x5EA8($gp)
    ctx->pc = 0x24b938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x24b93c: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x24b93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x24b940: 0x8f82a160  lw          $v0, -0x5EA0($gp)
    ctx->pc = 0x24b940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943072)));
    // 0x24b944: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x24b944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24b948: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24b948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b94c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24b94cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b950: 0x2484ff80  addiu       $a0, $a0, -0x80
    ctx->pc = 0x24b950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x24b954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b958: 0x8092b7a  j           func_24ADE8
    ctx->pc = 0x24B958u;
    ctx->pc = 0x24B95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B958u;
    // 0x24b95c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24ADE8u;
    mmDrawPad_0x24ade8(rdram, ctx, runtime); return;
    ctx->pc = 0x24B960u;
label_24b960:
    // 0x24b960: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24b960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24b964:
    // 0x24b964: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24b964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b96c: 0x3e00008  jr          $ra
    ctx->pc = 0x24B96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B96Cu;
        // 0x24b970: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B974u;
}
