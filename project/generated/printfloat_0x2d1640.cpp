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

// Function: printfloat
// Address: 0x2d1640 - 0x2d17e0
void printfloat_0x2d1640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("printfloat_0x2d1640");
#endif

    switch (ctx->pc) {
        case 0x2d1640u: goto label_2d1640;
        case 0x2d1644u: goto label_2d1644;
        case 0x2d1648u: goto label_2d1648;
        case 0x2d164cu: goto label_2d164c;
        case 0x2d1650u: goto label_2d1650;
        case 0x2d1654u: goto label_2d1654;
        case 0x2d1658u: goto label_2d1658;
        case 0x2d165cu: goto label_2d165c;
        case 0x2d1660u: goto label_2d1660;
        case 0x2d1664u: goto label_2d1664;
        case 0x2d1668u: goto label_2d1668;
        case 0x2d166cu: goto label_2d166c;
        case 0x2d1670u: goto label_2d1670;
        case 0x2d1674u: goto label_2d1674;
        case 0x2d1678u: goto label_2d1678;
        case 0x2d167cu: goto label_2d167c;
        case 0x2d1680u: goto label_2d1680;
        case 0x2d1684u: goto label_2d1684;
        case 0x2d1688u: goto label_2d1688;
        case 0x2d168cu: goto label_2d168c;
        case 0x2d1690u: goto label_2d1690;
        case 0x2d1694u: goto label_2d1694;
        case 0x2d1698u: goto label_2d1698;
        case 0x2d169cu: goto label_2d169c;
        case 0x2d16a0u: goto label_2d16a0;
        case 0x2d16a4u: goto label_2d16a4;
        case 0x2d16a8u: goto label_2d16a8;
        case 0x2d16acu: goto label_2d16ac;
        case 0x2d16b0u: goto label_2d16b0;
        case 0x2d16b4u: goto label_2d16b4;
        case 0x2d16b8u: goto label_2d16b8;
        case 0x2d16bcu: goto label_2d16bc;
        case 0x2d16c0u: goto label_2d16c0;
        case 0x2d16c4u: goto label_2d16c4;
        case 0x2d16c8u: goto label_2d16c8;
        case 0x2d16ccu: goto label_2d16cc;
        case 0x2d16d0u: goto label_2d16d0;
        case 0x2d16d4u: goto label_2d16d4;
        case 0x2d16d8u: goto label_2d16d8;
        case 0x2d16dcu: goto label_2d16dc;
        case 0x2d16e0u: goto label_2d16e0;
        case 0x2d16e4u: goto label_2d16e4;
        case 0x2d16e8u: goto label_2d16e8;
        case 0x2d16ecu: goto label_2d16ec;
        case 0x2d16f0u: goto label_2d16f0;
        case 0x2d16f4u: goto label_2d16f4;
        case 0x2d16f8u: goto label_2d16f8;
        case 0x2d16fcu: goto label_2d16fc;
        case 0x2d1700u: goto label_2d1700;
        case 0x2d1704u: goto label_2d1704;
        case 0x2d1708u: goto label_2d1708;
        case 0x2d170cu: goto label_2d170c;
        case 0x2d1710u: goto label_2d1710;
        case 0x2d1714u: goto label_2d1714;
        case 0x2d1718u: goto label_2d1718;
        case 0x2d171cu: goto label_2d171c;
        case 0x2d1720u: goto label_2d1720;
        case 0x2d1724u: goto label_2d1724;
        case 0x2d1728u: goto label_2d1728;
        case 0x2d172cu: goto label_2d172c;
        case 0x2d1730u: goto label_2d1730;
        case 0x2d1734u: goto label_2d1734;
        case 0x2d1738u: goto label_2d1738;
        case 0x2d173cu: goto label_2d173c;
        case 0x2d1740u: goto label_2d1740;
        case 0x2d1744u: goto label_2d1744;
        case 0x2d1748u: goto label_2d1748;
        case 0x2d174cu: goto label_2d174c;
        case 0x2d1750u: goto label_2d1750;
        case 0x2d1754u: goto label_2d1754;
        case 0x2d1758u: goto label_2d1758;
        case 0x2d175cu: goto label_2d175c;
        case 0x2d1760u: goto label_2d1760;
        case 0x2d1764u: goto label_2d1764;
        case 0x2d1768u: goto label_2d1768;
        case 0x2d176cu: goto label_2d176c;
        case 0x2d1770u: goto label_2d1770;
        case 0x2d1774u: goto label_2d1774;
        case 0x2d1778u: goto label_2d1778;
        case 0x2d177cu: goto label_2d177c;
        case 0x2d1780u: goto label_2d1780;
        case 0x2d1784u: goto label_2d1784;
        case 0x2d1788u: goto label_2d1788;
        case 0x2d178cu: goto label_2d178c;
        case 0x2d1790u: goto label_2d1790;
        case 0x2d1794u: goto label_2d1794;
        case 0x2d1798u: goto label_2d1798;
        case 0x2d179cu: goto label_2d179c;
        case 0x2d17a0u: goto label_2d17a0;
        case 0x2d17a4u: goto label_2d17a4;
        case 0x2d17a8u: goto label_2d17a8;
        case 0x2d17acu: goto label_2d17ac;
        case 0x2d17b0u: goto label_2d17b0;
        case 0x2d17b4u: goto label_2d17b4;
        case 0x2d17b8u: goto label_2d17b8;
        case 0x2d17bcu: goto label_2d17bc;
        case 0x2d17c0u: goto label_2d17c0;
        case 0x2d17c4u: goto label_2d17c4;
        case 0x2d17c8u: goto label_2d17c8;
        case 0x2d17ccu: goto label_2d17cc;
        case 0x2d17d0u: goto label_2d17d0;
        case 0x2d17d4u: goto label_2d17d4;
        case 0x2d17d8u: goto label_2d17d8;
        case 0x2d17dcu: goto label_2d17dc;
        default: break;
    }

    ctx->pc = 0x2d1640u;

label_2d1640:
    // 0x2d1640: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d1640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2d1644:
    // 0x2d1644: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d1644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2d1648:
    // 0x2d1648: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d1648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d164c:
    // 0x2d164c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d164cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1650:
    // 0x2d1650: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2d1650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2d1654:
    // 0x2d1654: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d1654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d1658:
    // 0x2d1658: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d1658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2d165c:
    // 0x2d165c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d165cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1660:
    // 0x2d1660: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2d1660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2d1664:
    // 0x2d1664: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2d1664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2d1668:
    // 0x2d1668: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d1668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d166c:
    // 0x2d166c: 0xc0b8dda  jal         func_2E3768
label_2d1670:
    if (ctx->pc == 0x2D1670u) {
        ctx->pc = 0x2D1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D166Cu;
        // 0x2d1670: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1674u;
        goto label_2d1674;
    }
    ctx->pc = 0x2D166Cu;
    SET_GPR_U32(ctx, 31, 0x2D1674u);
    ctx->pc = 0x2D1670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D166Cu;
    // 0x2d1670: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D166Cu, 0x2D1674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1674u;
label_2d1674:
    // 0x2d1674: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_2d1678:
    if (ctx->pc == 0x2D1678u) {
        ctx->pc = 0x2D1678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1674u;
        // 0x2d1678: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D167Cu;
        goto label_2d167c;
    }
    ctx->pc = 0x2D1674u;
    {
        const bool branch_taken_0x2d1674 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D1678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1674u;
        // 0x2d1678: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1674) {
            ctx->pc = 0x2D1698u;
            goto label_2d1698;
        }
    }
    ctx->pc = 0x2D167Cu;
label_2d167c:
    // 0x2d167c: 0xc0b8c76  jal         func_2E31D8
label_2d1680:
    if (ctx->pc == 0x2D1680u) {
        ctx->pc = 0x2D1680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D167Cu;
        // 0x2d1680: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1684u;
        goto label_2d1684;
    }
    ctx->pc = 0x2D167Cu;
    SET_GPR_U32(ctx, 31, 0x2D1684u);
    ctx->pc = 0x2D1680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D167Cu;
    // 0x2d1680: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D167Cu, 0x2D1684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1684u;
label_2d1684:
    // 0x2d1684: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2d1684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_2d1688:
    // 0x2d1688: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d168c:
    // 0x2d168c: 0x8c622e5c  lw          $v0, 0x2E5C($v1)
    ctx->pc = 0x2d168cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11868)));
label_2d1690:
    // 0x2d1690: 0x40f809  jalr        $v0
label_2d1694:
    if (ctx->pc == 0x2D1694u) {
        ctx->pc = 0x2D1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1690u;
        // 0x2d1694: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1698u;
        goto label_2d1698;
    }
    ctx->pc = 0x2D1690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D1698u);
        ctx->pc = 0x2D1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1690u;
        // 0x2d1694: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1690u, 0x2D1698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D1698u;
label_2d1698:
    // 0x2d1698: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d1698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_2d169c:
    // 0x2d169c: 0xdc25a438  ld          $a1, -0x5BC8($at)
    ctx->pc = 0x2d169cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294943800)));
label_2d16a0:
    // 0x2d16a0: 0xc0b8dda  jal         func_2E3768
label_2d16a4:
    if (ctx->pc == 0x2D16A4u) {
        ctx->pc = 0x2D16A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16A0u;
        // 0x2d16a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D16A8u;
        goto label_2d16a8;
    }
    ctx->pc = 0x2D16A0u;
    SET_GPR_U32(ctx, 31, 0x2D16A8u);
    ctx->pc = 0x2D16A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D16A0u;
    // 0x2d16a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D16A0u, 0x2D16A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D16A8u;
label_2d16a8:
    // 0x2d16a8: 0x4410015  bgez        $v0, . + 4 + (0x15 << 2)
label_2d16ac:
    if (ctx->pc == 0x2D16ACu) {
        ctx->pc = 0x2D16ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16A8u;
        // 0x2d16ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D16B0u;
        goto label_2d16b0;
    }
    ctx->pc = 0x2D16A8u;
    {
        const bool branch_taken_0x2d16a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D16ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16A8u;
        // 0x2d16ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d16a8) {
            ctx->pc = 0x2D1700u;
            goto label_2d1700;
        }
    }
    ctx->pc = 0x2D16B0u;
label_2d16b0:
    // 0x2d16b0: 0x34128048  ori         $s2, $zero, 0x8048
    ctx->pc = 0x2d16b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_2d16b4:
    // 0x2d16b4: 0x1293fc  dsll32      $s2, $s2, 15
    ctx->pc = 0x2d16b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 15));
label_2d16b8:
    // 0x2d16b8: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x2d16b8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
label_2d16bc:
    // 0x2d16bc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d16bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_2d16c0:
    // 0x2d16c0: 0xdc33a440  ld          $s3, -0x5BC0($at)
    ctx->pc = 0x2d16c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 1), 4294943808)));
label_2d16c4:
    // 0x2d16c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2d16c8:
    if (ctx->pc == 0x2D16C8u) {
        ctx->pc = 0x2D16C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16C4u;
        // 0x2d16c8: 0x3c14003b  lui         $s4, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D16CCu;
        goto label_2d16cc;
    }
    ctx->pc = 0x2D16C4u;
    {
        const bool branch_taken_0x2d16c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D16C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16C4u;
        // 0x2d16c8: 0x3c14003b  lui         $s4, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d16c4) {
            ctx->pc = 0x2D16E0u;
            goto label_2d16e0;
        }
    }
    ctx->pc = 0x2D16CCu;
label_2d16cc:
    // 0x2d16cc: 0x0  nop
    ctx->pc = 0x2d16ccu;
    // NOP
label_2d16d0:
    // 0x2d16d0: 0xc0b8c90  jal         func_2E3240
label_2d16d4:
    if (ctx->pc == 0x2D16D4u) {
        ctx->pc = 0x2D16D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16D0u;
        // 0x2d16d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D16D8u;
        goto label_2d16d8;
    }
    ctx->pc = 0x2D16D0u;
    SET_GPR_U32(ctx, 31, 0x2D16D8u);
    ctx->pc = 0x2D16D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D16D0u;
    // 0x2d16d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D16D0u, 0x2D16D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D16D8u;
label_2d16d8:
    // 0x2d16d8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2d16d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2d16dc:
    // 0x2d16dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d16dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d16e0:
    // 0x2d16e0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d16e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_2d16e4:
    // 0x2d16e4: 0xdc25a448  ld          $a1, -0x5BB8($at)
    ctx->pc = 0x2d16e4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294943816)));
label_2d16e8:
    // 0x2d16e8: 0xc0b8dda  jal         func_2E3768
label_2d16ec:
    if (ctx->pc == 0x2D16ECu) {
        ctx->pc = 0x2D16ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16E8u;
        // 0x2d16ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D16F0u;
        goto label_2d16f0;
    }
    ctx->pc = 0x2D16E8u;
    SET_GPR_U32(ctx, 31, 0x2D16F0u);
    ctx->pc = 0x2D16ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D16E8u;
    // 0x2d16ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D16E8u, 0x2D16F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D16F0u;
label_2d16f0:
    // 0x2d16f0: 0x440fff7  bltz        $v0, . + 4 + (-0x9 << 2)
label_2d16f4:
    if (ctx->pc == 0x2D16F4u) {
        ctx->pc = 0x2D16F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16F0u;
        // 0x2d16f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D16F8u;
        goto label_2d16f8;
    }
    ctx->pc = 0x2D16F0u;
    {
        const bool branch_taken_0x2d16f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D16F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16F0u;
        // 0x2d16f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d16f0) {
            ctx->pc = 0x2D16D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d16d0;
        }
    }
    ctx->pc = 0x2D16F8u;
label_2d16f8:
    // 0x2d16f8: 0x10000018  b           . + 4 + (0x18 << 2)
label_2d16fc:
    if (ctx->pc == 0x2D16FCu) {
        ctx->pc = 0x2D1700u;
        goto label_2d1700;
    }
    ctx->pc = 0x2D16F8u;
    {
        const bool branch_taken_0x2d16f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d16f8) {
            ctx->pc = 0x2D175Cu;
            goto label_2d175c;
        }
    }
    ctx->pc = 0x2D1700u;
label_2d1700:
    // 0x2d1700: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2d1700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_2d1704:
    // 0x2d1704: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2d1704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_2d1708:
    // 0x2d1708: 0x34128048  ori         $s2, $zero, 0x8048
    ctx->pc = 0x2d1708u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_2d170c:
    // 0x2d170c: 0x1293fc  dsll32      $s2, $s2, 15
    ctx->pc = 0x2d170cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 15));
label_2d1710:
    // 0x2d1710: 0xc0b8dda  jal         func_2E3768
label_2d1714:
    if (ctx->pc == 0x2D1714u) {
        ctx->pc = 0x2D1714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1710u;
        // 0x2d1714: 0x3c15003b  lui         $s5, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1718u;
        goto label_2d1718;
    }
    ctx->pc = 0x2D1710u;
    SET_GPR_U32(ctx, 31, 0x2D1718u);
    ctx->pc = 0x2D1714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1710u;
    // 0x2d1714: 0x3c15003b  lui         $s5, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D1710u, 0x2D1718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1718u;
label_2d1718:
    // 0x2d1718: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d1718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_2d171c:
    // 0x2d171c: 0xdc33a450  ld          $s3, -0x5BB0($at)
    ctx->pc = 0x2d171cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 1), 4294943824)));
label_2d1720:
    // 0x2d1720: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
label_2d1724:
    if (ctx->pc == 0x2D1724u) {
        ctx->pc = 0x2D1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1720u;
        // 0x2d1724: 0x3c14003b  lui         $s4, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1728u;
        goto label_2d1728;
    }
    ctx->pc = 0x2D1720u;
    {
        const bool branch_taken_0x2d1720 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1720u;
        // 0x2d1724: 0x3c14003b  lui         $s4, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1720) {
            ctx->pc = 0x2D1758u;
            goto label_2d1758;
        }
    }
    ctx->pc = 0x2D1728u;
label_2d1728:
    // 0x2d1728: 0x10000005  b           . + 4 + (0x5 << 2)
label_2d172c:
    if (ctx->pc == 0x2D172Cu) {
        ctx->pc = 0x2D1730u;
        goto label_2d1730;
    }
    ctx->pc = 0x2D1728u;
    {
        const bool branch_taken_0x2d1728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1728) {
            ctx->pc = 0x2D1740u;
            goto label_2d1740;
        }
    }
    ctx->pc = 0x2D1730u;
label_2d1730:
    // 0x2d1730: 0xc0b8d3a  jal         func_2E34E8
label_2d1734:
    if (ctx->pc == 0x2D1734u) {
        ctx->pc = 0x2D1734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1730u;
        // 0x2d1734: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1738u;
        goto label_2d1738;
    }
    ctx->pc = 0x2D1730u;
    SET_GPR_U32(ctx, 31, 0x2D1738u);
    ctx->pc = 0x2D1734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1730u;
    // 0x2d1734: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2D1730u, 0x2D1738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1738u;
label_2d1738:
    // 0x2d1738: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d1738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2d173c:
    // 0x2d173c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d173cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1740:
    // 0x2d1740: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2d1740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_2d1744:
    // 0x2d1744: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2d1744u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_2d1748:
    // 0x2d1748: 0xc0b8dda  jal         func_2E3768
label_2d174c:
    if (ctx->pc == 0x2D174Cu) {
        ctx->pc = 0x2D174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1748u;
        // 0x2d174c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1750u;
        goto label_2d1750;
    }
    ctx->pc = 0x2D1748u;
    SET_GPR_U32(ctx, 31, 0x2D1750u);
    ctx->pc = 0x2D174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1748u;
    // 0x2d174c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D1748u, 0x2D1750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1750u;
label_2d1750:
    // 0x2d1750: 0x443fff7  bgezl       $v0, . + 4 + (-0x9 << 2)
label_2d1754:
    if (ctx->pc == 0x2D1754u) {
        ctx->pc = 0x2D1754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1750u;
        // 0x2d1754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1758u;
        goto label_2d1758;
    }
    ctx->pc = 0x2D1750u;
    {
        const bool branch_taken_0x2d1750 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2d1750) {
            ctx->pc = 0x2D1754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1750u;
            // 0x2d1754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1730;
        }
    }
    ctx->pc = 0x2D1758u;
label_2d1758:
    // 0x2d1758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d175c:
    // 0x2d175c: 0xc0b8c90  jal         func_2E3240
label_2d1760:
    if (ctx->pc == 0x2D1760u) {
        ctx->pc = 0x2D1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D175Cu;
        // 0x2d1760: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1764u;
        goto label_2d1764;
    }
    ctx->pc = 0x2D175Cu;
    SET_GPR_U32(ctx, 31, 0x2D1764u);
    ctx->pc = 0x2D1760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D175Cu;
    // 0x2d1760: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D175Cu, 0x2D1764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1764u;
label_2d1764:
    // 0x2d1764: 0xc0b869c  jal         func_2E1A70
label_2d1768:
    if (ctx->pc == 0x2D1768u) {
        ctx->pc = 0x2D1768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1764u;
        // 0x2d1768: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D176Cu;
        goto label_2d176c;
    }
    ctx->pc = 0x2D1764u;
    SET_GPR_U32(ctx, 31, 0x2D176Cu);
    ctx->pc = 0x2D1768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1764u;
    // 0x2d1768: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A70u, 0x2D1764u, 0x2D176Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D176Cu;
label_2d176c:
    // 0x2d176c: 0xc0b453a  jal         func_2D14E8
label_2d1770:
    if (ctx->pc == 0x2D1770u) {
        ctx->pc = 0x2D1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D176Cu;
        // 0x2d1770: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1774u;
        goto label_2d1774;
    }
    ctx->pc = 0x2D176Cu;
    SET_GPR_U32(ctx, 31, 0x2D1774u);
    ctx->pc = 0x2D1770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D176Cu;
    // 0x2d1770: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D14E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D14E8u, 0x2D176Cu, 0x2D1774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1774u;
label_2d1774:
    // 0x2d1774: 0x26a4a420  addiu       $a0, $s5, -0x5BE0
    ctx->pc = 0x2d1774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294943776));
label_2d1778:
    // 0x2d1778: 0xc0b474e  jal         func_2D1D38
label_2d177c:
    if (ctx->pc == 0x2D177Cu) {
        ctx->pc = 0x2D177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1778u;
        // 0x2d177c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1780u;
        goto label_2d1780;
    }
    ctx->pc = 0x2D1778u;
    SET_GPR_U32(ctx, 31, 0x2D1780u);
    ctx->pc = 0x2D177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1778u;
    // 0x2d177c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1D38u, 0x2D1778u, 0x2D1780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1780u;
label_2d1780:
    // 0x2d1780: 0x620000d  bltz        $s1, . + 4 + (0xD << 2)
label_2d1784:
    if (ctx->pc == 0x2D1784u) {
        ctx->pc = 0x2D1784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1780u;
        // 0x2d1784: 0x2684a430  addiu       $a0, $s4, -0x5BD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1788u;
        goto label_2d1788;
    }
    ctx->pc = 0x2D1780u;
    {
        const bool branch_taken_0x2d1780 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2D1784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1780u;
        // 0x2d1784: 0x2684a430  addiu       $a0, $s4, -0x5BD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1780) {
            ctx->pc = 0x2D17B8u;
            goto label_2d17b8;
        }
    }
    ctx->pc = 0x2D1788u;
label_2d1788:
    // 0x2d1788: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d1788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d178c:
    // 0x2d178c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2d178cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_2d1790:
    // 0x2d1790: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d1790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2d1794:
    // 0x2d1794: 0x2484a428  addiu       $a0, $a0, -0x5BD8
    ctx->pc = 0x2d1794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943784));
label_2d1798:
    // 0x2d1798: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2d1798u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2d179c:
    // 0x2d179c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2d179cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d17a0:
    // 0x2d17a0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2d17a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d17a4:
    // 0x2d17a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d17a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d17a8:
    // 0x2d17a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2d17a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d17ac:
    // 0x2d17ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d17acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d17b0:
    // 0x2d17b0: 0x80b474e  j           func_2D1D38
label_2d17b4:
    if (ctx->pc == 0x2D17B4u) {
        ctx->pc = 0x2D17B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D17B0u;
        // 0x2d17b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D17B8u;
        goto label_2d17b8;
    }
    ctx->pc = 0x2D17B0u;
    ctx->pc = 0x2D17B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D17B0u;
    // 0x2d17b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D38u;
    kprintf_0x2d1d38(rdram, ctx, runtime); return;
    ctx->pc = 0x2D17B8u;
label_2d17b8:
    // 0x2d17b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d17b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d17bc:
    // 0x2d17bc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d17bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2d17c0:
    // 0x2d17c0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2d17c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2d17c4:
    // 0x2d17c4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2d17c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d17c8:
    // 0x2d17c8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2d17c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d17cc:
    // 0x2d17cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d17ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d17d0:
    // 0x2d17d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2d17d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d17d4:
    // 0x2d17d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d17d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d17d8:
    // 0x2d17d8: 0x80b474e  j           func_2D1D38
label_2d17dc:
    if (ctx->pc == 0x2D17DCu) {
        ctx->pc = 0x2D17DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D17D8u;
        // 0x2d17dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D17E0u;
        goto label_fallthrough_0x2d17d8;
    }
    ctx->pc = 0x2D17D8u;
    ctx->pc = 0x2D17DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D17D8u;
    // 0x2d17dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D38u;
    kprintf_0x2d1d38(rdram, ctx, runtime); return;
label_fallthrough_0x2d17d8:
    ctx->pc = 0x2D17E0u;
}
