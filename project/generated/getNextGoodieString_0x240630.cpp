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

// Function: getNextGoodieString
// Address: 0x240630 - 0x240864
void getNextGoodieString_0x240630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getNextGoodieString_0x240630");
#endif

    switch (ctx->pc) {
        case 0x240650u: goto label_240650;
        case 0x240658u: goto label_240658;
        case 0x240660u: goto label_240660;
        case 0x24066cu: goto label_24066c;
        case 0x240674u: goto label_240674;
        default: break;
    }

    ctx->pc = 0x240630u;

    // 0x240630: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x240630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x240634: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x240634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x240638: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x240638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x24063c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x24063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x240640: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x240640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x240644: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x240644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x240648: 0xc0900c8  jal         func_240320
    ctx->pc = 0x240648u;
    SET_GPR_U32(ctx, 31, 0x240650u);
    ctx->pc = 0x24064Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240648u;
    // 0x24064c: 0x8f929f4c  lw          $s2, -0x60B4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240320u, 0x240648u, 0x240650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240650u;
label_240650:
    // 0x240650: 0xc0900b6  jal         func_2402D8
    ctx->pc = 0x240650u;
    SET_GPR_U32(ctx, 31, 0x240658u);
    ctx->pc = 0x240654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240650u;
    // 0x240654: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2402D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2402D8u, 0x240650u, 0x240658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240658u;
label_240658:
    // 0x240658: 0xc09012c  jal         func_2404B0
    ctx->pc = 0x240658u;
    SET_GPR_U32(ctx, 31, 0x240660u);
    ctx->pc = 0x24065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240658u;
    // 0x24065c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2404B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2404B0u, 0x240658u, 0x240660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240660u;
label_240660:
    // 0x240660: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x240660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240664: 0xc0900e0  jal         func_240380
    ctx->pc = 0x240664u;
    SET_GPR_U32(ctx, 31, 0x24066Cu);
    ctx->pc = 0x240668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240664u;
    // 0x240668: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240380u, 0x240664u, 0x24066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24066Cu;
label_24066c:
    // 0x24066c: 0xc090106  jal         func_240418
    ctx->pc = 0x24066Cu;
    SET_GPR_U32(ctx, 31, 0x240674u);
    ctx->pc = 0x240670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24066Cu;
    // 0x240670: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240418u, 0x24066Cu, 0x240674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240674u;
label_240674:
    // 0x240674: 0x9384b7bc  lbu         $a0, -0x4844($gp)
    ctx->pc = 0x240674u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948796)));
    // 0x240678: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x240678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x24067c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x24067cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x240680: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x240680u;
    {
        const bool branch_taken_0x240680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240680u;
        // 0x240684: 0x8f859354  lw          $a1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240680) {
            ctx->pc = 0x2406B0u;
            goto label_2406b0;
        }
    }
    ctx->pc = 0x240688u;
    // 0x240688: 0x308400fe  andi        $a0, $a0, 0xFE
    ctx->pc = 0x240688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)254);
    // 0x24068c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x24068cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x240690: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x240690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x240694: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x240694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x240698: 0xa384b7bc  sb          $a0, -0x4844($gp)
    ctx->pc = 0x240698u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948796), (uint8_t)GPR_U32(ctx, 4));
    // 0x24069c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x24069cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2406a0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2406a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2406a4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2406a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2406a8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2406A8u;
    {
        const bool branch_taken_0x2406a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2406ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406A8u;
        // 0x2406ac: 0x8c6206d8  lw          $v0, 0x6D8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406a8) {
            ctx->pc = 0x240848u;
            goto label_240848;
        }
    }
    ctx->pc = 0x2406B0u;
label_2406b0:
    // 0x2406b0: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x2406b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x2406b4: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x2406b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x2406b8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2406B8u;
    {
        const bool branch_taken_0x2406b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2406BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406B8u;
        // 0x2406bc: 0x308400fd  andi        $a0, $a0, 0xFD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)253);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406b8) {
            ctx->pc = 0x2406E4u;
            goto label_2406e4;
        }
    }
    ctx->pc = 0x2406C0u;
    // 0x2406c0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2406c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2406c4: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2406c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2406c8: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x2406c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x2406cc: 0xa384b7bc  sb          $a0, -0x4844($gp)
    ctx->pc = 0x2406ccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948796), (uint8_t)GPR_U32(ctx, 4));
    // 0x2406d0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2406d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2406d4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2406d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2406d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2406d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2406dc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2406DCu;
    {
        const bool branch_taken_0x2406dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2406E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406DCu;
        // 0x2406e0: 0x8c6206d4  lw          $v0, 0x6D4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406dc) {
            ctx->pc = 0x240848u;
            goto label_240848;
        }
    }
    ctx->pc = 0x2406E4u;
label_2406e4:
    // 0x2406e4: 0x8f82b7b0  lw          $v0, -0x4850($gp)
    ctx->pc = 0x2406e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948784)));
    // 0x2406e8: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2406E8u;
    {
        const bool branch_taken_0x2406e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2406ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406E8u;
        // 0x2406ec: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406e8) {
            ctx->pc = 0x240710u;
            goto label_240710;
        }
    }
    ctx->pc = 0x2406F0u;
    // 0x2406f0: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2406f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2406f4: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x2406f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x2406f8: 0xaf92b7b0  sw          $s2, -0x4850($gp)
    ctx->pc = 0x2406f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948784), GPR_U32(ctx, 18));
    // 0x2406fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2406fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x240700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x240700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x240704: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x240704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240708: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x240708u;
    {
        const bool branch_taken_0x240708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240708u;
        // 0x24070c: 0x8c8206c4  lw          $v0, 0x6C4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240708) {
            ctx->pc = 0x240848u;
            goto label_240848;
        }
    }
    ctx->pc = 0x240710u;
label_240710:
    // 0x240710: 0x8f82b7b4  lw          $v0, -0x484C($gp)
    ctx->pc = 0x240710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948788)));
    // 0x240714: 0x12620009  beq         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x240714u;
    {
        const bool branch_taken_0x240714 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x240718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240714u;
        // 0x240718: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240714) {
            ctx->pc = 0x24073Cu;
            goto label_24073c;
        }
    }
    ctx->pc = 0x24071Cu;
    // 0x24071c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x24071cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x240720: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x240720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x240724: 0xaf93b7b4  sw          $s3, -0x484C($gp)
    ctx->pc = 0x240724u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948788), GPR_U32(ctx, 19));
    // 0x240728: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x240728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24072c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24072cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x240730: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x240730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240734: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x240734u;
    {
        const bool branch_taken_0x240734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240734u;
        // 0x240738: 0x8c8206c8  lw          $v0, 0x6C8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240734) {
            ctx->pc = 0x240848u;
            goto label_240848;
        }
    }
    ctx->pc = 0x24073Cu;
label_24073c:
    // 0x24073c: 0x8f82b7b8  lw          $v0, -0x4848($gp)
    ctx->pc = 0x24073cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948792)));
    // 0x240740: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x240740u;
    {
        const bool branch_taken_0x240740 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x240744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240740u;
        // 0x240744: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240740) {
            ctx->pc = 0x240768u;
            goto label_240768;
        }
    }
    ctx->pc = 0x240748u;
    // 0x240748: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x240748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x24074c: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x24074cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x240750: 0xaf91b7b8  sw          $s1, -0x4848($gp)
    ctx->pc = 0x240750u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948792), GPR_U32(ctx, 17));
    // 0x240754: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x240754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x240758: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x240758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24075c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24075cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240760: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x240760u;
    {
        const bool branch_taken_0x240760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240760u;
        // 0x240764: 0x8c8206dc  lw          $v0, 0x6DC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240760) {
            ctx->pc = 0x240848u;
            goto label_240848;
        }
    }
    ctx->pc = 0x240768u;
label_240768:
    // 0x240768: 0x3c0601fc  lui         $a2, 0x1FC
    ctx->pc = 0x240768u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)508 << 16));
    // 0x24076c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x24076cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240770: 0x8cc233b0  lw          $v0, 0x33B0($a2)
    ctx->pc = 0x240770u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC33B0u));
    // 0x240774: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x240774u;
    {
        const bool branch_taken_0x240774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x240778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240774u;
        // 0x240778: 0x24c433b0  addiu       $a0, $a2, 0x33B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 13232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240774) {
            ctx->pc = 0x2407A0u;
            goto label_2407a0;
        }
    }
    ctx->pc = 0x24077Cu;
    // 0x24077c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x24077cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x240780: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x240780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x240784: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x240784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x240788: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x240788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24078c: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x24078cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x240790: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x240790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x240794: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x240794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x240798: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x240798u;
    {
        const bool branch_taken_0x240798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x240798) {
            ctx->pc = 0x24079Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240798u;
            // 0x24079c: 0x3c0601fc  lui         $a2, 0x1FC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)508 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2407DCu;
            goto label_2407dc;
        }
    }
    ctx->pc = 0x2407A0u;
label_2407a0:
    // 0x2407a0: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2407a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2407a4: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2407a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2407a8: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x2407a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x2407ac: 0x24c833b0  addiu       $t0, $a2, 0x33B0
    ctx->pc = 0x2407acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 13232));
    // 0x2407b0: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x2407b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2407b4: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x2407b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2407b8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2407b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2407bc: 0xb1040007  sdl         $a0, 0x7($t0)
    ctx->pc = 0x2407bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2407c0: 0xb5040000  sdr         $a0, 0x0($t0)
    ctx->pc = 0x2407c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2407c4: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x2407c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    // 0x2407c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2407c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2407cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2407ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2407d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2407d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2407d4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2407D4u;
    {
        const bool branch_taken_0x2407d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2407D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407D4u;
        // 0x2407d8: 0x8c8206cc  lw          $v0, 0x6CC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2407d4) {
            ctx->pc = 0x240848u;
            goto label_240848;
        }
    }
    ctx->pc = 0x2407DCu;
label_2407dc:
    // 0x2407dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2407dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2407e0: 0x8cc233c0  lw          $v0, 0x33C0($a2)
    ctx->pc = 0x2407e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 13248)));
    // 0x2407e4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2407E4u;
    {
        const bool branch_taken_0x2407e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2407E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407E4u;
        // 0x2407e8: 0x24c433c0  addiu       $a0, $a2, 0x33C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 13248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2407e4) {
            ctx->pc = 0x240810u;
            goto label_240810;
        }
    }
    ctx->pc = 0x2407ECu;
    // 0x2407ec: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2407ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2407f0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2407f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2407f4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2407f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2407f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2407f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2407fc: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x2407fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x240800: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x240800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x240804: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x240804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x240808: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x240808u;
    {
        const bool branch_taken_0x240808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x240808) {
            ctx->pc = 0x24080Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240808u;
            // 0x24080c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240848u;
            goto label_240848;
        }
    }
    ctx->pc = 0x240810u;
label_240810:
    // 0x240810: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x240810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x240814: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x240814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x240818: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x240818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x24081c: 0x24c833c0  addiu       $t0, $a2, 0x33C0
    ctx->pc = 0x24081cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 13248));
    // 0x240820: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x240820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x240824: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x240824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x240828: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x240828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24082c: 0xb1040007  sdl         $a0, 0x7($t0)
    ctx->pc = 0x24082cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x240830: 0xb5040000  sdr         $a0, 0x0($t0)
    ctx->pc = 0x240830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x240834: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x240834u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    // 0x240838: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x240838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24083c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24083cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x240840: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x240840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240844: 0x8c8206d0  lw          $v0, 0x6D0($a0)
    ctx->pc = 0x240844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
label_240848:
    // 0x240848: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x240848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24084c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x24084cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x240850: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x240850u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x240854: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x240854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x240858: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x240858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24085c: 0x3e00008  jr          $ra
    ctx->pc = 0x24085Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24085Cu;
        // 0x240860: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24085Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240864u;
}
