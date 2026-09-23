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

// Function: stringeditTick
// Address: 0x22f820 - 0x22fd94
void stringeditTick_0x22f820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("stringeditTick_0x22f820");
#endif

    switch (ctx->pc) {
        case 0x22f840u: goto label_22f840;
        case 0x22f85cu: goto label_22f85c;
        case 0x22f8a8u: goto label_22f8a8;
        case 0x22f918u: goto label_22f918;
        case 0x22f9a4u: goto label_22f9a4;
        case 0x22f9b8u: goto label_22f9b8;
        case 0x22f9f4u: goto label_22f9f4;
        case 0x22fa28u: goto label_22fa28;
        case 0x22fa94u: goto label_22fa94;
        case 0x22faa0u: goto label_22faa0;
        case 0x22fb18u: goto label_22fb18;
        case 0x22fbb8u: goto label_22fbb8;
        case 0x22fbe8u: goto label_22fbe8;
        case 0x22fbf0u: goto label_22fbf0;
        case 0x22fc48u: goto label_22fc48;
        case 0x22fcb0u: goto label_22fcb0;
        case 0x22fcf0u: goto label_22fcf0;
        case 0x22fd48u: goto label_22fd48;
        case 0x22fd58u: goto label_22fd58;
        case 0x22fd78u: goto label_22fd78;
        default: break;
    }

    ctx->pc = 0x22f820u;

    // 0x22f820: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22f820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22f824: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22f824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22f828: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f82c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22f82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22f830: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x22f830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x22f834: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22f834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22f838: 0xc08bfb6  jal         func_22FED8
    ctx->pc = 0x22F838u;
    SET_GPR_U32(ctx, 31, 0x22F840u);
    ctx->pc = 0x22F83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F838u;
    // 0x22f83c: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FED8u, 0x22F838u, 0x22F840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F840u;
label_22f840:
    // 0x22f840: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x22f840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x22f844: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x22f844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x22f848: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x22f848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x22f84c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F84Cu;
    {
        const bool branch_taken_0x22f84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F84Cu;
        // 0x22f850: 0x2404008d  addiu       $a0, $zero, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f84c) {
            ctx->pc = 0x22F860u;
            goto label_22f860;
        }
    }
    ctx->pc = 0x22F854u;
    // 0x22f854: 0xc081546  jal         func_205518
    ctx->pc = 0x22F854u;
    SET_GPR_U32(ctx, 31, 0x22F85Cu);
    ctx->pc = 0x22F858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F854u;
    // 0x22f858: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x22F854u, 0x22F85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F85Cu;
label_22f85c:
    // 0x22f85c: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x22f85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_22f860:
    // 0x22f860: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x22f860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x22f864: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x22f864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x22f868: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x22F868u;
    {
        const bool branch_taken_0x22f868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F868u;
        // 0x22f86c: 0x8f86a034  lw          $a2, -0x5FCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f868) {
            ctx->pc = 0x22F8D8u;
            goto label_22f8d8;
        }
    }
    ctx->pc = 0x22F870u;
    // 0x22f870: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x22f870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x22f874: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x22f874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f878: 0x8ce3002c  lw          $v1, 0x2C($a3)
    ctx->pc = 0x22f878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x22f87c: 0x8ce4001c  lw          $a0, 0x1C($a3)
    ctx->pc = 0x22f87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x22f880: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x22f880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22f884: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x22f884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x22f888: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x22f888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22f88c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22f890: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x22f890u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f894: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x22f894u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f898: 0x14650138  bne         $v1, $a1, . + 4 + (0x138 << 2)
    ctx->pc = 0x22F898u;
    {
        const bool branch_taken_0x22f898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x22F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F898u;
        // 0x22f89c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f898) {
            ctx->pc = 0x22FD7Cu;
            goto label_22fd7c;
        }
    }
    ctx->pc = 0x22F8A0u;
    // 0x22f8a0: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x22f8a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22f8a4: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x22f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_22f8a8:
    // 0x22f8a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22f8ac: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F8ACu;
    {
        const bool branch_taken_0x22f8ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x22F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8ACu;
        // 0x22f8b0: 0xacc20028  sw          $v0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8ac) {
            ctx->pc = 0x22F8B8u;
            goto label_22f8b8;
        }
    }
    ctx->pc = 0x22F8B4u;
    // 0x22f8b4: 0xacc80028  sw          $t0, 0x28($a2)
    ctx->pc = 0x22f8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 8));
label_22f8b8:
    // 0x22f8b8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x22f8b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f8bc: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x22f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x22f8c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22f8c4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x22f8c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f8c8: 0x5065fff7  beql        $v1, $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22F8C8u;
    {
        const bool branch_taken_0x22f8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x22f8c8) {
            ctx->pc = 0x22F8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F8C8u;
            // 0x22f8cc: 0x8cc20028  lw          $v0, 0x28($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f8a8;
        }
    }
    ctx->pc = 0x22F8D0u;
    // 0x22f8d0: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x22F8D0u;
    {
        const bool branch_taken_0x22f8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8D0u;
        // 0x22f8d4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8d0) {
            ctx->pc = 0x22FD7Cu;
            goto label_22fd7c;
        }
    }
    ctx->pc = 0x22F8D8u;
label_22f8d8:
    // 0x22f8d8: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x22f8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x22f8dc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x22F8DCu;
    {
        const bool branch_taken_0x22f8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8DCu;
        // 0x22f8e0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8dc) {
            ctx->pc = 0x22F94Cu;
            goto label_22f94c;
        }
    }
    ctx->pc = 0x22F8E4u;
    // 0x22f8e4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x22f8e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f8e8: 0x8ce3002c  lw          $v1, 0x2C($a3)
    ctx->pc = 0x22f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x22f8ec: 0x8ce4001c  lw          $a0, 0x1C($a3)
    ctx->pc = 0x22f8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x22f8f0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x22f8f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22f8f4: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x22f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x22f8f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x22f8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22f8fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22f900: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x22f900u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f904: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x22f904u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f908: 0x1465011c  bne         $v1, $a1, . + 4 + (0x11C << 2)
    ctx->pc = 0x22F908u;
    {
        const bool branch_taken_0x22f908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x22F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F908u;
        // 0x22f90c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f908) {
            ctx->pc = 0x22FD7Cu;
            goto label_22fd7c;
        }
    }
    ctx->pc = 0x22F910u;
    // 0x22f910: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x22f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x22f914: 0x0  nop
    ctx->pc = 0x22f914u;
    // NOP
label_22f918:
    // 0x22f918: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22f918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22f91c: 0x2843000b  slti        $v1, $v0, 0xB
    ctx->pc = 0x22f91cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x22f920: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F920u;
    {
        const bool branch_taken_0x22f920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F920u;
        // 0x22f924: 0xacc20028  sw          $v0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f920) {
            ctx->pc = 0x22F92Cu;
            goto label_22f92c;
        }
    }
    ctx->pc = 0x22F928u;
    // 0x22f928: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x22f928u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
label_22f92c:
    // 0x22f92c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x22f92cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f930: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x22f930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x22f934: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22f934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22f938: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x22f938u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f93c: 0x5065fff6  beql        $v1, $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x22F93Cu;
    {
        const bool branch_taken_0x22f93c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x22f93c) {
            ctx->pc = 0x22F940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F93Cu;
            // 0x22f940: 0x8cc20028  lw          $v0, 0x28($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f918;
        }
    }
    ctx->pc = 0x22F944u;
    // 0x22f944: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x22F944u;
    {
        const bool branch_taken_0x22f944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F944u;
        // 0x22f948: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f944) {
            ctx->pc = 0x22FD7Cu;
            goto label_22fd7c;
        }
    }
    ctx->pc = 0x22F94Cu;
label_22f94c:
    // 0x22f94c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x22f94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x22f950: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22F950u;
    {
        const bool branch_taken_0x22f950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F950u;
        // 0x22f954: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f950) {
            ctx->pc = 0x22F978u;
            goto label_22f978;
        }
    }
    ctx->pc = 0x22F958u;
    // 0x22f958: 0x8f83a034  lw          $v1, -0x5FCC($gp)
    ctx->pc = 0x22f958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x22f95c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x22f960: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22f960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22f964: 0x4410104  bgez        $v0, . + 4 + (0x104 << 2)
    ctx->pc = 0x22F964u;
    {
        const bool branch_taken_0x22f964 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x22F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F964u;
        // 0x22f968: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f964) {
            ctx->pc = 0x22FD78u;
            goto label_22fd78;
        }
    }
    ctx->pc = 0x22F96Cu;
    // 0x22f96c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22f970: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x22F970u;
    {
        const bool branch_taken_0x22f970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F970u;
        // 0x22f974: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f970) {
            ctx->pc = 0x22FD78u;
            goto label_22fd78;
        }
    }
    ctx->pc = 0x22F978u;
label_22f978:
    // 0x22f978: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22F978u;
    {
        const bool branch_taken_0x22f978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F978u;
        // 0x22f97c: 0x8f84a034  lw          $a0, -0x5FCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f978) {
            ctx->pc = 0x22F99Cu;
            goto label_22f99c;
        }
    }
    ctx->pc = 0x22F980u;
    // 0x22f980: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x22f980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x22f984: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22f984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22f988: 0x28430005  slti        $v1, $v0, 0x5
    ctx->pc = 0x22f988u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x22f98c: 0x146000fa  bnez        $v1, . + 4 + (0xFA << 2)
    ctx->pc = 0x22F98Cu;
    {
        const bool branch_taken_0x22f98c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F98Cu;
        // 0x22f990: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f98c) {
            ctx->pc = 0x22FD78u;
            goto label_22fd78;
        }
    }
    ctx->pc = 0x22F994u;
    // 0x22f994: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x22F994u;
    {
        const bool branch_taken_0x22f994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F994u;
        // 0x22f998: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f994) {
            ctx->pc = 0x22FD78u;
            goto label_22fd78;
        }
    }
    ctx->pc = 0x22F99Cu;
label_22f99c:
    // 0x22f99c: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x22F99Cu;
    SET_GPR_U32(ctx, 31, 0x22F9A4u);
    ctx->pc = 0x22F9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F99Cu;
    // 0x22f9a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x22F99Cu, 0x22F9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F9A4u;
label_22f9a4:
    // 0x22f9a4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x22f9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x22f9a8: 0x1440009d  bnez        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x22F9A8u;
    {
        const bool branch_taken_0x22f9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9A8u;
        // 0x22f9ac: 0x8f86a034  lw          $a2, -0x5FCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9a8) {
            ctx->pc = 0x22FC20u;
            goto label_22fc20;
        }
    }
    ctx->pc = 0x22F9B0u;
    // 0x22f9b0: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x22F9B0u;
    SET_GPR_U32(ctx, 31, 0x22F9B8u);
    ctx->pc = 0x22F9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F9B0u;
    // 0x22f9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x22F9B0u, 0x22F9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F9B8u;
label_22f9b8:
    // 0x22f9b8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x22f9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x22f9bc: 0x104000e4  beqz        $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x22F9BCu;
    {
        const bool branch_taken_0x22f9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9BCu;
        // 0x22f9c0: 0x8f86a034  lw          $a2, -0x5FCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9bc) {
            ctx->pc = 0x22FD50u;
            goto label_22fd50;
        }
    }
    ctx->pc = 0x22F9C4u;
    // 0x22f9c4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x22f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x22f9c8: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x22f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x22f9cc: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x22f9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x22f9d0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x22f9d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22f9d4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x22f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22f9d8: 0x2c83002c  sltiu       $v1, $a0, 0x2C
    ctx->pc = 0x22f9d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)44) ? 1 : 0);
    // 0x22f9dc: 0x10600088  beqz        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x22F9DCu;
    {
        const bool branch_taken_0x22f9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9DCu;
        // 0x22f9e0: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9dc) {
            ctx->pc = 0x22FC00u;
            goto label_22fc00;
        }
    }
    ctx->pc = 0x22F9E4u;
    // 0x22f9e4: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x22f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x22f9e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22f9ec: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x22f9ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f9f0: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x22f9f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
label_22f9f4:
    // 0x22f9f4: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x22f9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x22f9f8: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x22f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x22f9fc: 0x8d030034  lw          $v1, 0x34($t0)
    ctx->pc = 0x22f9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x22fa00: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x22fa00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22fa04: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x22FA04u;
    {
        const bool branch_taken_0x22fa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA04u;
        // 0x22fa08: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa04) {
            ctx->pc = 0x22FBF8u;
            goto label_22fbf8;
        }
    }
    ctx->pc = 0x22FA0Cu;
    // 0x22fa0c: 0x8cd00030  lw          $s0, 0x30($a2)
    ctx->pc = 0x22fa0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x22fa10: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x22fa10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fa14: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x22fa14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22fa18: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x22FA18u;
    {
        const bool branch_taken_0x22fa18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA18u;
        // 0x22fa1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa18) {
            ctx->pc = 0x22FA5Cu;
            goto label_22fa5c;
        }
    }
    ctx->pc = 0x22FA20u;
    // 0x22fa20: 0x93a70000  lbu         $a3, 0x0($sp)
    ctx->pc = 0x22fa20u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fa24: 0x8d050030  lw          $a1, 0x30($t0)
    ctx->pc = 0x22fa24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
label_22fa28:
    // 0x22fa28: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x22fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22fa2c: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x22fa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x22fa30: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x22fa30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22fa34: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22FA34u;
    {
        const bool branch_taken_0x22fa34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA34u;
        // 0x22fa38: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa34) {
            ctx->pc = 0x22FA44u;
            goto label_22fa44;
        }
    }
    ctx->pc = 0x22FA3Cu;
    // 0x22fa3c: 0x24900001  addiu       $s0, $a0, 0x1
    ctx->pc = 0x22fa3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22fa40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22fa40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22fa44:
    // 0x22fa44: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x22fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x22fa48: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x22fa48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22fa4c: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x22FA4Cu;
    {
        const bool branch_taken_0x22fa4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fa4c) {
            ctx->pc = 0x22FA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FA4Cu;
            // 0x22fa50: 0x8d050030  lw          $a1, 0x30($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22fa28;
        }
    }
    ctx->pc = 0x22FA54u;
    // 0x22fa54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22FA54u;
    {
        const bool branch_taken_0x22fa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA54u;
        // 0x22fa58: 0x8d030018  lw          $v1, 0x18($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa54) {
            ctx->pc = 0x22FA64u;
            goto label_22fa64;
        }
    }
    ctx->pc = 0x22FA5Cu;
label_22fa5c:
    // 0x22fa5c: 0x93a70000  lbu         $a3, 0x0($sp)
    ctx->pc = 0x22fa5cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fa60: 0x8d030018  lw          $v1, 0x18($t0)
    ctx->pc = 0x22fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_22fa64:
    // 0x22fa64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22fa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fa68: 0x8d020030  lw          $v0, 0x30($t0)
    ctx->pc = 0x22fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x22fa6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22fa70: 0xa0470000  sb          $a3, 0x0($v0)
    ctx->pc = 0x22fa70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x22fa74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22fa78: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x22fa78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
    // 0x22fa7c: 0x8f85a034  lw          $a1, -0x5FCC($gp)
    ctx->pc = 0x22fa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x22fa80: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x22fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x22fa84: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x22fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22fa88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22fa8c: 0xc08089c  jal         func_202270
    ctx->pc = 0x22FA8Cu;
    SET_GPR_U32(ctx, 31, 0x22FA94u);
    ctx->pc = 0x22FA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FA8Cu;
    // 0x22fa90: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x22FA8Cu, 0x22FA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA94u;
label_22fa94:
    // 0x22fa94: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22fa94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa98: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x22FA98u;
    SET_GPR_U32(ctx, 31, 0x22FAA0u);
    ctx->pc = 0x22FA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FA98u;
    // 0x22fa9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x22FA98u, 0x22FAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FAA0u;
label_22faa0:
    // 0x22faa0: 0x8f86a034  lw          $a2, -0x5FCC($gp)
    ctx->pc = 0x22faa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x22faa4: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x22faa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x22faa8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x22faa8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22faac: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x22FAACu;
    {
        const bool branch_taken_0x22faac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAACu;
        // 0x22fab0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22faac) {
            ctx->pc = 0x22FBA8u;
            goto label_22fba8;
        }
    }
    ctx->pc = 0x22FAB4u;
    // 0x22fab4: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x22fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x22fab8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x22fab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22fabc: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x22FABCu;
    {
        const bool branch_taken_0x22fabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FABCu;
        // 0x22fac0: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fabc) {
            ctx->pc = 0x22FB9Cu;
            goto label_22fb9c;
        }
    }
    ctx->pc = 0x22FAC4u;
    // 0x22fac4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x22fac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x22fac8: 0x54450007  bnel        $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22FAC8u;
    {
        const bool branch_taken_0x22fac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x22fac8) {
            ctx->pc = 0x22FACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FAC8u;
            // 0x22facc: 0x8cc20018  lw          $v0, 0x18($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FAE8u;
            goto label_22fae8;
        }
    }
    ctx->pc = 0x22FAD0u;
    // 0x22fad0: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x22fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x22fad4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22fad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22fad8: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x22fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x22fadc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22fadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fae0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x22FAE0u;
    {
        const bool branch_taken_0x22fae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAE0u;
        // 0x22fae4: 0xa064ffff  sb          $a0, -0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fae0) {
            ctx->pc = 0x22FBA8u;
            goto label_22fba8;
        }
    }
    ctx->pc = 0x22FAE8u;
label_22fae8:
    // 0x22fae8: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x22fae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x22faec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22faecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22faf0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22faf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22faf4: 0x70202b  sltu        $a0, $v1, $s0
    ctx->pc = 0x22faf4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x22faf8: 0x54800010  bnel        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x22FAF8u;
    {
        const bool branch_taken_0x22faf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22faf8) {
            ctx->pc = 0x22FAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FAF8u;
            // 0x22fafc: 0x8ce20034  lw          $v0, 0x34($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FB3Cu;
            goto label_22fb3c;
        }
    }
    ctx->pc = 0x22FB00u;
    // 0x22fb00: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x22fb00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fb04: 0x1045000a  beq         $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x22FB04u;
    {
        const bool branch_taken_0x22fb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x22fb04) {
            ctx->pc = 0x22FB30u;
            goto label_22fb30;
        }
    }
    ctx->pc = 0x22FB0Cu;
    // 0x22fb0c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x22fb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x22fb10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22fb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22fb14: 0x0  nop
    ctx->pc = 0x22fb14u;
    // NOP
label_22fb18:
    // 0x22fb18: 0x70202b  sltu        $a0, $v1, $s0
    ctx->pc = 0x22fb18u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x22fb1c: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22FB1Cu;
    {
        const bool branch_taken_0x22fb1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fb1c) {
            ctx->pc = 0x22FB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FB1Cu;
            // 0x22fb20: 0x8ce20034  lw          $v0, 0x34($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FB3Cu;
            goto label_22fb3c;
        }
    }
    ctx->pc = 0x22FB24u;
    // 0x22fb24: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x22fb24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fb28: 0x5445fffb  bnel        $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x22FB28u;
    {
        const bool branch_taken_0x22fb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x22fb28) {
            ctx->pc = 0x22FB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FB28u;
            // 0x22fb2c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22fb18;
        }
    }
    ctx->pc = 0x22FB30u;
label_22fb30:
    // 0x22fb30: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x22FB30u;
    {
        const bool branch_taken_0x22fb30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB30u;
        // 0x22fb34: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb30) {
            ctx->pc = 0x22FBA4u;
            goto label_22fba4;
        }
    }
    ctx->pc = 0x22FB38u;
    // 0x22fb38: 0x8ce20034  lw          $v0, 0x34($a3)
    ctx->pc = 0x22fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_22fb3c:
    // 0x22fb3c: 0x8ce50018  lw          $a1, 0x18($a3)
    ctx->pc = 0x22fb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x22fb40: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x22fb40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22fb44: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x22FB44u;
    {
        const bool branch_taken_0x22fb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fb44) {
            ctx->pc = 0x22FB94u;
            goto label_22fb94;
        }
    }
    ctx->pc = 0x22FB4Cu;
    // 0x22fb4c: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x22fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x22fb50: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x22fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22fb54: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22fb58: 0xa043ffff  sb          $v1, -0x1($v0)
    ctx->pc = 0x22fb58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 3));
    // 0x22fb5c: 0x8f85a034  lw          $a1, -0x5FCC($gp)
    ctx->pc = 0x22fb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x22fb60: 0x93a40000  lbu         $a0, 0x0($sp)
    ctx->pc = 0x22fb60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fb64: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x22fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x22fb68: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x22fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22fb6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22fb70: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x22fb70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x22fb74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22fb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22fb78: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x22fb78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x22fb7c: 0x8f84a034  lw          $a0, -0x5FCC($gp)
    ctx->pc = 0x22fb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x22fb80: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x22fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x22fb84: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x22fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22fb88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22fb8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22FB8Cu;
    {
        const bool branch_taken_0x22fb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB8Cu;
        // 0x22fb90: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb8c) {
            ctx->pc = 0x22FBA8u;
            goto label_22fba8;
        }
    }
    ctx->pc = 0x22FB94u;
label_22fb94:
    // 0x22fb94: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22FB94u;
    {
        const bool branch_taken_0x22fb94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB94u;
        // 0x22fb98: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb94) {
            ctx->pc = 0x22FBA4u;
            goto label_22fba4;
        }
    }
    ctx->pc = 0x22FB9Cu;
label_22fb9c:
    // 0x22fb9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22FB9Cu;
    {
        const bool branch_taken_0x22fb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB9Cu;
        // 0x22fba0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb9c) {
            ctx->pc = 0x22FBA8u;
            goto label_22fba8;
        }
    }
    ctx->pc = 0x22FBA4u;
label_22fba4:
    // 0x22fba4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x22fba4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_22fba8:
    // 0x22fba8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x22FBA8u;
    {
        const bool branch_taken_0x22fba8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBA8u;
        // 0x22fbac: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fba8) {
            ctx->pc = 0x22FBC0u;
            goto label_22fbc0;
        }
    }
    ctx->pc = 0x22FBB0u;
    // 0x22fbb0: 0xc081546  jal         func_205518
    ctx->pc = 0x22FBB0u;
    SET_GPR_U32(ctx, 31, 0x22FBB8u);
    ctx->pc = 0x22FBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FBB0u;
    // 0x22fbb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x22FBB0u, 0x22FBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FBB8u;
label_22fbb8:
    // 0x22fbb8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22FBB8u;
    {
        const bool branch_taken_0x22fbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fbb8) {
            ctx->pc = 0x22FBE8u;
            goto label_22fbe8;
        }
    }
    ctx->pc = 0x22FBC0u;
label_22fbc0:
    // 0x22fbc0: 0x8f82a034  lw          $v0, -0x5FCC($gp)
    ctx->pc = 0x22fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x22fbc4: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x22fbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x22fbc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22fbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fbcc: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x22fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x22fbd0: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x22fbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22fbd4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22fbd8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x22fbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22fbdc: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x22fbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x22fbe0: 0xc081546  jal         func_205518
    ctx->pc = 0x22FBE0u;
    SET_GPR_U32(ctx, 31, 0x22FBE8u);
    ctx->pc = 0x22FBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FBE0u;
    // 0x22fbe4: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x22FBE0u, 0x22FBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FBE8u;
label_22fbe8:
    // 0x22fbe8: 0xc08089c  jal         func_202270
    ctx->pc = 0x22FBE8u;
    SET_GPR_U32(ctx, 31, 0x22FBF0u);
    ctx->pc = 0x22FBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FBE8u;
    // 0x22fbec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x22FBE8u, 0x22FBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FBF0u;
label_22fbf0:
    // 0x22fbf0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x22FBF0u;
    {
        const bool branch_taken_0x22fbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBF0u;
        // 0x22fbf4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbf0) {
            ctx->pc = 0x22FD7Cu;
            goto label_22fd7c;
        }
    }
    ctx->pc = 0x22FBF8u;
label_22fbf8:
    // 0x22fbf8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x22FBF8u;
    {
        const bool branch_taken_0x22fbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBF8u;
        // 0x22fbfc: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbf8) {
            ctx->pc = 0x22FD40u;
            goto label_22fd40;
        }
    }
    ctx->pc = 0x22FC00u;
label_22fc00:
    // 0x22fc00: 0x8cc5001c  lw          $a1, 0x1C($a2)
    ctx->pc = 0x22fc00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x22fc04: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x22fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x22fc08: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x22fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x22fc0c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x22fc0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22fc10: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x22FC10u;
    {
        const bool branch_taken_0x22fc10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x22FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC10u;
        // 0x22fc14: 0x240200fd  addiu       $v0, $zero, 0xFD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc10) {
            ctx->pc = 0x22FC50u;
            goto label_22fc50;
        }
    }
    ctx->pc = 0x22FC18u;
    // 0x22fc18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22FC18u;
    {
        const bool branch_taken_0x22fc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC18u;
        // 0x22fc1c: 0x8cc30018  lw          $v1, 0x18($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc18) {
            ctx->pc = 0x22FC24u;
            goto label_22fc24;
        }
    }
    ctx->pc = 0x22FC20u;
label_22fc20:
    // 0x22fc20: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x22fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_22fc24:
    // 0x22fc24: 0x18600054  blez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x22FC24u;
    {
        const bool branch_taken_0x22fc24 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC24u;
        // 0x22fc28: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc24) {
            ctx->pc = 0x22FD78u;
            goto label_22fd78;
        }
    }
    ctx->pc = 0x22FC2Cu;
    // 0x22fc2c: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x22fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x22fc30: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x22fc30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x22fc34: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x22fc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x22fc38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22fc3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22fc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc40: 0xc081546  jal         func_205518
    ctx->pc = 0x22FC40u;
    SET_GPR_U32(ctx, 31, 0x22FC48u);
    ctx->pc = 0x22FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC40u;
    // 0x22fc44: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x22FC40u, 0x22FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC48u;
label_22fc48:
    // 0x22fc48: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x22FC48u;
    {
        const bool branch_taken_0x22fc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC48u;
        // 0x22fc4c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc48) {
            ctx->pc = 0x22FD7Cu;
            goto label_22fd7c;
        }
    }
    ctx->pc = 0x22FC50u;
label_22fc50:
    // 0x22fc50: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22FC50u;
    {
        const bool branch_taken_0x22fc50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x22FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC50u;
        // 0x22fc54: 0x240200fc  addiu       $v0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc50) {
            ctx->pc = 0x22FC64u;
            goto label_22fc64;
        }
    }
    ctx->pc = 0x22FC58u;
    // 0x22fc58: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x22fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x22fc5c: 0x1000ff65  b           . + 4 + (-0x9B << 2)
    ctx->pc = 0x22FC5Cu;
    {
        const bool branch_taken_0x22fc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC5Cu;
        // 0x22fc60: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc5c) {
            ctx->pc = 0x22F9F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f9f4;
        }
    }
    ctx->pc = 0x22FC64u;
label_22fc64:
    // 0x22fc64: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22FC64u;
    {
        const bool branch_taken_0x22fc64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x22FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC64u;
        // 0x22fc68: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc64) {
            ctx->pc = 0x22FC90u;
            goto label_22fc90;
        }
    }
    ctx->pc = 0x22FC6Cu;
    // 0x22fc6c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22fc70: 0x24422f40  addiu       $v0, $v0, 0x2F40
    ctx->pc = 0x22fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12096));
    // 0x22fc74: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22FC74u;
    {
        const bool branch_taken_0x22fc74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x22fc74) {
            ctx->pc = 0x22FC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FC74u;
            // 0x22fc78: 0xad02001c  sw          $v0, 0x1C($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FC88u;
            goto label_22fc88;
        }
    }
    ctx->pc = 0x22FC7Cu;
    // 0x22fc7c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22fc80: 0x24422f78  addiu       $v0, $v0, 0x2F78
    ctx->pc = 0x22fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12152));
    // 0x22fc84: 0xad02001c  sw          $v0, 0x1C($t0)
    ctx->pc = 0x22fc84u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 2));
label_22fc88:
    // 0x22fc88: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x22FC88u;
    {
        const bool branch_taken_0x22fc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC88u;
        // 0x22fc8c: 0x2404008d  addiu       $a0, $zero, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc88) {
            ctx->pc = 0x22FD40u;
            goto label_22fd40;
        }
    }
    ctx->pc = 0x22FC90u;
label_22fc90:
    // 0x22fc90: 0x1482003a  bne         $a0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x22FC90u;
    {
        const bool branch_taken_0x22fc90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x22FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC90u;
        // 0x22fc94: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc90) {
            ctx->pc = 0x22FD7Cu;
            goto label_22fd7c;
        }
    }
    ctx->pc = 0x22FC98u;
    // 0x22fc98: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x22fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x22fc9c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x22fc9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fca0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22FCA0u;
    {
        const bool branch_taken_0x22fca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCA0u;
        // 0x22fca4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fca0) {
            ctx->pc = 0x22FCCCu;
            goto label_22fccc;
        }
    }
    ctx->pc = 0x22FCA8u;
    // 0x22fca8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x22fca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fcac: 0x0  nop
    ctx->pc = 0x22fcacu;
    // NOP
label_22fcb0:
    // 0x22fcb0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22fcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x22fcb4: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x22fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22fcb8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x22fcb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22fcbc: 0x0  nop
    ctx->pc = 0x22fcbcu;
    // NOP
    // 0x22fcc0: 0x0  nop
    ctx->pc = 0x22fcc0u;
    // NOP
    // 0x22fcc4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22FCC4u;
    {
        const bool branch_taken_0x22fcc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fcc4) {
            ctx->pc = 0x22FCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22fcb0;
        }
    }
    ctx->pc = 0x22FCCCu;
label_22fccc:
    // 0x22fccc: 0x18a00016  blez        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x22FCCCu;
    {
        const bool branch_taken_0x22fccc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x22FCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCCCu;
        // 0x22fcd0: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fccc) {
            ctx->pc = 0x22FD28u;
            goto label_22fd28;
        }
    }
    ctx->pc = 0x22FCD4u;
    // 0x22fcd4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x22fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x22fcd8: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x22fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x22fcdc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x22fcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22fce0: 0x9064ffff  lbu         $a0, -0x1($v1)
    ctx->pc = 0x22fce0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
    // 0x22fce4: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x22FCE4u;
    {
        const bool branch_taken_0x22fce4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x22FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCE4u;
        // 0x22fce8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fce4) {
            ctx->pc = 0x22FD28u;
            goto label_22fd28;
        }
    }
    ctx->pc = 0x22FCECu;
    // 0x22fcec: 0x0  nop
    ctx->pc = 0x22fcecu;
    // NOP
label_22fcf0:
    // 0x22fcf0: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x22fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x22fcf4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22fcf8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x22fcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x22fcfc: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x22FCFCu;
    {
        const bool branch_taken_0x22fcfc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x22FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCFCu;
        // 0x22fd00: 0xa040ffff  sb          $zero, -0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fcfc) {
            ctx->pc = 0x22FD24u;
            goto label_22fd24;
        }
    }
    ctx->pc = 0x22FD04u;
    // 0x22fd04: 0x8f86a034  lw          $a2, -0x5FCC($gp)
    ctx->pc = 0x22fd04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x22fd08: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x22fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x22fd0c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22fd10: 0x9043ffff  lbu         $v1, -0x1($v0)
    ctx->pc = 0x22fd10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x22fd14: 0x1064fff6  beq         $v1, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x22FD14u;
    {
        const bool branch_taken_0x22fd14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x22FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD14u;
        // 0x22fd18: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd14) {
            ctx->pc = 0x22FCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22fcf0;
        }
    }
    ctx->pc = 0x22FD1Cu;
    // 0x22fd1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22FD1Cu;
    {
        const bool branch_taken_0x22fd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fd1c) {
            ctx->pc = 0x22FD28u;
            goto label_22fd28;
        }
    }
    ctx->pc = 0x22FD24u;
label_22fd24:
    // 0x22fd24: 0x8f86a034  lw          $a2, -0x5FCC($gp)
    ctx->pc = 0x22fd24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
label_22fd28:
    // 0x22fd28: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22FD28u;
    {
        const bool branch_taken_0x22fd28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD28u;
        // 0x22fd2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd28) {
            ctx->pc = 0x22FD38u;
            goto label_22fd38;
        }
    }
    ctx->pc = 0x22FD30u;
    // 0x22fd30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22FD30u;
    {
        const bool branch_taken_0x22fd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD30u;
        // 0x22fd34: 0xacc20024  sw          $v0, 0x24($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd30) {
            ctx->pc = 0x22FD3Cu;
            goto label_22fd3c;
        }
    }
    ctx->pc = 0x22FD38u;
label_22fd38:
    // 0x22fd38: 0xacc20020  sw          $v0, 0x20($a2)
    ctx->pc = 0x22fd38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 2));
label_22fd3c:
    // 0x22fd3c: 0x2404008f  addiu       $a0, $zero, 0x8F
    ctx->pc = 0x22fd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_22fd40:
    // 0x22fd40: 0xc081546  jal         func_205518
    ctx->pc = 0x22FD40u;
    SET_GPR_U32(ctx, 31, 0x22FD48u);
    ctx->pc = 0x22FD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD40u;
    // 0x22fd44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x22FD40u, 0x22FD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD48u;
label_22fd48:
    // 0x22fd48: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22FD48u;
    {
        const bool branch_taken_0x22fd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD48u;
        // 0x22fd4c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd48) {
            ctx->pc = 0x22FD7Cu;
            goto label_22fd7c;
        }
    }
    ctx->pc = 0x22FD50u;
label_22fd50:
    // 0x22fd50: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x22FD50u;
    SET_GPR_U32(ctx, 31, 0x22FD58u);
    ctx->pc = 0x22FD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD50u;
    // 0x22fd54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x22FD50u, 0x22FD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD58u;
label_22fd58:
    // 0x22fd58: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x22fd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x22fd5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22FD5Cu;
    {
        const bool branch_taken_0x22fd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD5Cu;
        // 0x22fd60: 0x8f83a034  lw          $v1, -0x5FCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd5c) {
            ctx->pc = 0x22FD78u;
            goto label_22fd78;
        }
    }
    ctx->pc = 0x22FD64u;
    // 0x22fd64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fd68: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x22fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x22fd6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22fd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fd70: 0xc081546  jal         func_205518
    ctx->pc = 0x22FD70u;
    SET_GPR_U32(ctx, 31, 0x22FD78u);
    ctx->pc = 0x22FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD70u;
    // 0x22fd74: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x22FD70u, 0x22FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD78u;
label_22fd78:
    // 0x22fd78: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22fd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22fd7c:
    // 0x22fd7c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x22fd7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22fd80: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22fd80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22fd84: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x22fd84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22fd88: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22fd88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x22FD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD8Cu;
        // 0x22fd90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FD94u;
}
