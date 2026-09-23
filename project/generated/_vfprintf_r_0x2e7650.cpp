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

// Function: _vfprintf_r
// Address: 0x2e7650 - 0x2e8b68
void _vfprintf_r_0x2e7650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_vfprintf_r_0x2e7650");
#endif

    switch (ctx->pc) {
        case 0x2e7690u: goto label_2e7690;
        case 0x2e76c4u: goto label_2e76c4;
        case 0x2e7700u: goto label_2e7700;
        case 0x2e7730u: goto label_2e7730;
        case 0x2e7738u: goto label_2e7738;
        case 0x2e7758u: goto label_2e7758;
        case 0x2e77c4u: goto label_2e77c4;
        case 0x2e7804u: goto label_2e7804;
        case 0x2e780cu: goto label_2e780c;
        case 0x2e7810u: goto label_2e7810;
        case 0x2e7814u: goto label_2e7814;
        case 0x2e7828u: goto label_2e7828;
        case 0x2e7900u: goto label_2e7900;
        case 0x2e7950u: goto label_2e7950;
        case 0x2e7aa0u: goto label_2e7aa0;
        case 0x2e7ab0u: goto label_2e7ab0;
        case 0x2e7ad8u: goto label_2e7ad8;
        case 0x2e7b14u: goto label_2e7b14;
        case 0x2e7b78u: goto label_2e7b78;
        case 0x2e7ce4u: goto label_2e7ce4;
        case 0x2e7d08u: goto label_2e7d08;
        case 0x2e7df8u: goto label_2e7df8;
        case 0x2e7e10u: goto label_2e7e10;
        case 0x2e7e60u: goto label_2e7e60;
        case 0x2e7e6cu: goto label_2e7e6c;
        case 0x2e7e88u: goto label_2e7e88;
        case 0x2e7ec8u: goto label_2e7ec8;
        case 0x2e7f90u: goto label_2e7f90;
        case 0x2e7fd4u: goto label_2e7fd4;
        case 0x2e802cu: goto label_2e802c;
        case 0x2e80dcu: goto label_2e80dc;
        case 0x2e8120u: goto label_2e8120;
        case 0x2e8160u: goto label_2e8160;
        case 0x2e81b4u: goto label_2e81b4;
        case 0x2e81e8u: goto label_2e81e8;
        case 0x2e8228u: goto label_2e8228;
        case 0x2e827cu: goto label_2e827c;
        case 0x2e82ccu: goto label_2e82cc;
        case 0x2e8318u: goto label_2e8318;
        case 0x2e837cu: goto label_2e837c;
        case 0x2e83a0u: goto label_2e83a0;
        case 0x2e83e0u: goto label_2e83e0;
        case 0x2e847cu: goto label_2e847c;
        case 0x2e84c0u: goto label_2e84c0;
        case 0x2e84e0u: goto label_2e84e0;
        case 0x2e8520u: goto label_2e8520;
        case 0x2e857cu: goto label_2e857c;
        case 0x2e8608u: goto label_2e8608;
        case 0x2e8630u: goto label_2e8630;
        case 0x2e8670u: goto label_2e8670;
        case 0x2e86ccu: goto label_2e86cc;
        case 0x2e874cu: goto label_2e874c;
        case 0x2e87a0u: goto label_2e87a0;
        case 0x2e885cu: goto label_2e885c;
        case 0x2e8870u: goto label_2e8870;
        case 0x2e88d0u: goto label_2e88d0;
        case 0x2e8910u: goto label_2e8910;
        case 0x2e899cu: goto label_2e899c;
        case 0x2e89e4u: goto label_2e89e4;
        case 0x2e8a10u: goto label_2e8a10;
        case 0x2e8a54u: goto label_2e8a54;
        case 0x2e8ab0u: goto label_2e8ab0;
        case 0x2e8aecu: goto label_2e8aec;
        case 0x2e8b14u: goto label_2e8b14;
        default: break;
    }

    ctx->pc = 0x2e7650u;

    // 0x2e7650: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x2e7650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
    // 0x2e7654: 0xffb40270  sd          $s4, 0x270($sp)
    ctx->pc = 0x2e7654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 20));
    // 0x2e7658: 0xffb00230  sd          $s0, 0x230($sp)
    ctx->pc = 0x2e7658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 16));
    // 0x2e765c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e765cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7660: 0xafa501e8  sw          $a1, 0x1E8($sp)
    ctx->pc = 0x2e7660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 5));
    // 0x2e7664: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2e7664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7668: 0xffbf02c0  sd          $ra, 0x2C0($sp)
    ctx->pc = 0x2e7668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 31));
    // 0x2e766c: 0xffbe02b0  sd          $fp, 0x2B0($sp)
    ctx->pc = 0x2e766cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 30));
    // 0x2e7670: 0xffb702a0  sd          $s7, 0x2A0($sp)
    ctx->pc = 0x2e7670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 23));
    // 0x2e7674: 0xffb60290  sd          $s6, 0x290($sp)
    ctx->pc = 0x2e7674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 22));
    // 0x2e7678: 0xffb50280  sd          $s5, 0x280($sp)
    ctx->pc = 0x2e7678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 21));
    // 0x2e767c: 0xffb30260  sd          $s3, 0x260($sp)
    ctx->pc = 0x2e767cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 19));
    // 0x2e7680: 0xffb20250  sd          $s2, 0x250($sp)
    ctx->pc = 0x2e7680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 18));
    // 0x2e7684: 0xffb10240  sd          $s1, 0x240($sp)
    ctx->pc = 0x2e7684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 17));
    // 0x2e7688: 0xc0baeea  jal         func_2EBBA8
    ctx->pc = 0x2E7688u;
    SET_GPR_U32(ctx, 31, 0x2E7690u);
    ctx->pc = 0x2E768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7688u;
    // 0x2e768c: 0xafa401e4  sw          $a0, 0x1E4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBBA8u, 0x2E7688u, 0x2E7690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7690u;
label_2e7690:
    // 0x2e7690: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e7690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e7694: 0xafa201f8  sw          $v0, 0x1F8($sp)
    ctx->pc = 0x2e7694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
    // 0x2e7698: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x2e7698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e769c: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x2e769cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e76a0: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2e76a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2e76a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E76A4u;
    {
        const bool branch_taken_0x2e76a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E76A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76A4u;
        // 0x2e76a8: 0xafa001d8  sw          $zero, 0x1D8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e76a4) {
            ctx->pc = 0x2E76BCu;
            goto label_2e76bc;
        }
    }
    ctx->pc = 0x2E76ACu;
    // 0x2e76ac: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e76acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e76b0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2e76b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2e76b4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E76B4u;
    {
        const bool branch_taken_0x2e76b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E76B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76B4u;
        // 0x2e76b8: 0x3063001a  andi        $v1, $v1, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e76b4) {
            ctx->pc = 0x2E76D8u;
            goto label_2e76d8;
        }
    }
    ctx->pc = 0x2E76BCu;
label_2e76bc:
    // 0x2e76bc: 0xc0ba6b0  jal         func_2E9AC0
    ctx->pc = 0x2E76BCu;
    SET_GPR_U32(ctx, 31, 0x2E76C4u);
    ctx->pc = 0x2E76C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E76BCu;
    // 0x2e76c0: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9AC0u, 0x2E76BCu, 0x2E76C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E76C4u;
label_2e76c4:
    // 0x2e76c4: 0x1440051c  bnez        $v0, . + 4 + (0x51C << 2)
    ctx->pc = 0x2E76C4u;
    {
        const bool branch_taken_0x2e76c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E76C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76C4u;
        // 0x2e76c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e76c4) {
            ctx->pc = 0x2E8B38u;
            goto label_2e8b38;
        }
    }
    ctx->pc = 0x2E76CCu;
    // 0x2e76cc: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x2e76ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e76d0: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x2e76d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2e76d4: 0x3063001a  andi        $v1, $v1, 0x1A
    ctx->pc = 0x2e76d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
label_2e76d8:
    // 0x2e76d8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2e76d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e76dc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E76DCu;
    {
        const bool branch_taken_0x2e76dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E76E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76DCu;
        // 0x2e76e0: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e76dc) {
            ctx->pc = 0x2E7708u;
            goto label_2e7708;
        }
    }
    ctx->pc = 0x2E76E4u;
    // 0x2e76e4: 0x8fa601e8  lw          $a2, 0x1E8($sp)
    ctx->pc = 0x2e76e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e76e8: 0x84c2000e  lh          $v0, 0xE($a2)
    ctx->pc = 0x2e76e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x2e76ec: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E76ECu;
    {
        const bool branch_taken_0x2e76ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E76F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76ECu;
        // 0x2e76f0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e76ec) {
            ctx->pc = 0x2E7708u;
            goto label_2e7708;
        }
    }
    ctx->pc = 0x2E76F4u;
    // 0x2e76f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e76f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e76f8: 0xc0b9d48  jal         func_2E7520
    ctx->pc = 0x2E76F8u;
    SET_GPR_U32(ctx, 31, 0x2E7700u);
    ctx->pc = 0x2E76FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E76F8u;
    // 0x2e76fc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7520u, 0x2E76F8u, 0x2E7700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7700u;
label_2e7700:
    // 0x2e7700: 0x1000050e  b           . + 4 + (0x50E << 2)
    ctx->pc = 0x2E7700u;
    {
        const bool branch_taken_0x2e7700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7700u;
        // 0x2e7704: 0xdfbf02c0  ld          $ra, 0x2C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7700) {
            ctx->pc = 0x2E8B3Cu;
            goto label_2e8b3c;
        }
    }
    ctx->pc = 0x2E7708u;
label_2e7708:
    // 0x2e7708: 0x27a201d4  addiu       $v0, $sp, 0x1D4
    ctx->pc = 0x2e7708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x2e770c: 0x27a301d8  addiu       $v1, $sp, 0x1D8
    ctx->pc = 0x2e770cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x2e7710: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2e7710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2e7714: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x2e7714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x2e7718: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2e7718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2e771c: 0xafb001ec  sw          $s0, 0x1EC($sp)
    ctx->pc = 0x2e771cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 16));
    // 0x2e7720: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x2e7720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x2e7724: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x2e7724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
    // 0x2e7728: 0xafa3021c  sw          $v1, 0x21C($sp)
    ctx->pc = 0x2e7728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 3));
    // 0x2e772c: 0x0  nop
    ctx->pc = 0x2e772cu;
    // NOP
label_2e7730:
    // 0x2e7730: 0x8fb301ec  lw          $s3, 0x1EC($sp)
    ctx->pc = 0x2e7730u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2e7734: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x2e7734u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_2e7738:
    // 0x2e7738: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x2e7738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x2e773c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x2e773cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x2e7740: 0x8ca4330c  lw          $a0, 0x330C($a1)
    ctx->pc = 0x2e7740u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38330Cu));
    // 0x2e7744: 0x8cc73768  lw          $a3, 0x3768($a2)
    ctx->pc = 0x2e7744u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x383768u));
    // 0x2e7748: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x2e7748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x2e774c: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x2e774cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2e7750: 0xc0baf60  jal         func_2EBD80
    ctx->pc = 0x2E7750u;
    SET_GPR_U32(ctx, 31, 0x2E7758u);
    ctx->pc = 0x2E7754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7750u;
    // 0x2e7754: 0x8fa8021c  lw          $t0, 0x21C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBD80u, 0x2E7750u, 0x2E7758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7758u;
label_2e7758:
    // 0x2e7758: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e7758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e775c: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E775Cu;
    {
        const bool branch_taken_0x2e775c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E775Cu;
        // 0x2e7760: 0x8fa301ec  lw          $v1, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e775c) {
            ctx->pc = 0x2E777Cu;
            goto label_2e777c;
        }
    }
    ctx->pc = 0x2E7764u;
    // 0x2e7764: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x2e7764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x2e7768: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2e7768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e776c: 0x1452fff2  bne         $v0, $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x2E776Cu;
    {
        const bool branch_taken_0x2e776c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2E7770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E776Cu;
        // 0x2e7770: 0xafa301ec  sw          $v1, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e776c) {
            ctx->pc = 0x2E7738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7738;
        }
    }
    ctx->pc = 0x2E7774u;
    // 0x2e7774: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e7774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e7778: 0xafa301ec  sw          $v1, 0x1EC($sp)
    ctx->pc = 0x2e7778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
label_2e777c:
    // 0x2e777c: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x2e777cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2e7780: 0x939023  subu        $s2, $a0, $s3
    ctx->pc = 0x2e7780u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2e7784: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E7784u;
    {
        const bool branch_taken_0x2e7784 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7784) {
            ctx->pc = 0x2E77D8u;
            goto label_2e77d8;
        }
    }
    ctx->pc = 0x2E778Cu;
    // 0x2e778c: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x2e778cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x2e7790: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2e7790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2e7794: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2e7794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e7798: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e7798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e779c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2e779cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e77a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2e77a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2e77a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e77a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e77a8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2e77a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2e77ac: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2e77acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e77b0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E77B0u;
    {
        const bool branch_taken_0x2e77b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E77B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E77B0u;
        // 0x2e77b4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e77b0) {
            ctx->pc = 0x2E77CCu;
            goto label_2e77cc;
        }
    }
    ctx->pc = 0x2E77B8u;
    // 0x2e77b8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e77b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e77bc: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E77BCu;
    SET_GPR_U32(ctx, 31, 0x2E77C4u);
    ctx->pc = 0x2E77C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E77BCu;
    // 0x2e77c0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E77BCu, 0x2E77C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E77C4u;
label_2e77c4:
    // 0x2e77c4: 0x144004d6  bnez        $v0, . + 4 + (0x4D6 << 2)
    ctx->pc = 0x2E77C4u;
    {
        const bool branch_taken_0x2e77c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E77C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E77C4u;
        // 0x2e77c8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e77c4) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E77CCu;
label_2e77cc:
    // 0x2e77cc: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x2e77ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2e77d0: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x2e77d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2e77d4: 0xafa501f0  sw          $a1, 0x1F0($sp)
    ctx->pc = 0x2e77d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 5));
label_2e77d8:
    // 0x2e77d8: 0x1a0004c9  blez        $s0, . + 4 + (0x4C9 << 2)
    ctx->pc = 0x2E77D8u;
    {
        const bool branch_taken_0x2e77d8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E77DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E77D8u;
        // 0x2e77dc: 0x8fa601ec  lw          $a2, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e77d8) {
            ctx->pc = 0x2E8B00u;
            goto label_2e8b00;
        }
    }
    ctx->pc = 0x2E77E0u;
    // 0x2e77e0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2e77e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e77e4: 0xafa0020c  sw          $zero, 0x20C($sp)
    ctx->pc = 0x2e77e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
    // 0x2e77e8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2e77e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e77ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e77ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e77f0: 0xafa001f4  sw          $zero, 0x1F4($sp)
    ctx->pc = 0x2e77f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
    // 0x2e77f4: 0xafa601ec  sw          $a2, 0x1EC($sp)
    ctx->pc = 0x2e77f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
    // 0x2e77f8: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x2e77f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e77fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E77FCu;
    {
        const bool branch_taken_0x2e77fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E77FCu;
        // 0x2e7800: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e77fc) {
            ctx->pc = 0x2E7814u;
            goto label_2e7814;
        }
    }
    ctx->pc = 0x2E7804u;
label_2e7804:
    // 0x2e7804: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7804u;
    {
        const bool branch_taken_0x2e7804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7804u;
        // 0x2e7808: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7804) {
            ctx->pc = 0x2E7814u;
            goto label_2e7814;
        }
    }
    ctx->pc = 0x2E780Cu;
label_2e780c:
    // 0x2e780c: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x2e780cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_2e7810:
    // 0x2e7810: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2e7810u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2e7814:
    // 0x2e7814: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x2e7814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x2e7818: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x2e7818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2e781c: 0x2be03  sra         $s7, $v0, 24
    ctx->pc = 0x2e781cu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2e7820: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e7820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e7824: 0xafa401ec  sw          $a0, 0x1EC($sp)
    ctx->pc = 0x2e7824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
label_2e7828:
    // 0x2e7828: 0x26e3ffe0  addiu       $v1, $s7, -0x20
    ctx->pc = 0x2e7828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967264));
    // 0x2e782c: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x2e782cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x2e7830: 0x104001b6  beqz        $v0, . + 4 + (0x1B6 << 2)
    ctx->pc = 0x2E7830u;
    {
        const bool branch_taken_0x2e7830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7830u;
        // 0x2e7834: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7830) {
            ctx->pc = 0x2E7F0Cu;
            goto label_2e7f0c;
        }
    }
    ctx->pc = 0x2E7838u;
    // 0x2e7838: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e7838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e783c: 0x2442be40  addiu       $v0, $v0, -0x41C0
    ctx->pc = 0x2e783cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950464));
    // 0x2e7840: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e7840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e7844: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e7844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e7848: 0x800008  jr          $a0
    ctx->pc = 0x2E7848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E7850u: goto label_2e7850;
            case 0x2E7868u: goto label_2e7868;
            case 0x2E7878u: goto label_2e7878;
            case 0x2E7890u: goto label_2e7890;
            case 0x2E789Cu: goto label_2e789c;
            case 0x2E78B0u: goto label_2e78b0;
            case 0x2E793Cu: goto label_2e793c;
            case 0x2E7948u: goto label_2e7948;
            case 0x2E7980u: goto label_2e7980;
            case 0x2E7990u: goto label_2e7990;
            case 0x2E79A0u: goto label_2e79a0;
            case 0x2E79D4u: goto label_2e79d4;
            case 0x2E79E4u: goto label_2e79e4;
            case 0x2E7A04u: goto label_2e7a04;
            case 0x2E7A08u: goto label_2e7a08;
            case 0x2E7A4Cu: goto label_2e7a4c;
            case 0x2E7C14u: goto label_2e7c14;
            case 0x2E7C60u: goto label_2e7c60;
            case 0x2E7C64u: goto label_2e7c64;
            case 0x2E7C98u: goto label_2e7c98;
            case 0x2E7CBCu: goto label_2e7cbc;
            case 0x2E7D10u: goto label_2e7d10;
            case 0x2E7D14u: goto label_2e7d14;
            case 0x2E7D48u: goto label_2e7d48;
            case 0x2E7D54u: goto label_2e7d54;
            case 0x2E7F0Cu: goto label_2e7f0c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7848u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E7850u;
label_2e7850:
    // 0x2e7850: 0x83a201d1  lb          $v0, 0x1D1($sp)
    ctx->pc = 0x2e7850u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x2e7854: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2E7854u;
    {
        const bool branch_taken_0x2e7854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7854u;
        // 0x2e7858: 0x8fa201ec  lw          $v0, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7854) {
            ctx->pc = 0x2E7804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7804;
        }
    }
    ctx->pc = 0x2E785Cu;
    // 0x2e785c: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x2e785cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2e7860: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E7860u;
    {
        const bool branch_taken_0x2e7860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7860u;
        // 0x2e7864: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7860) {
            ctx->pc = 0x2E78A4u;
            goto label_2e78a4;
        }
    }
    ctx->pc = 0x2E7868u;
label_2e7868:
    // 0x2e7868: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x2e7868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2e786c: 0x37de0001  ori         $fp, $fp, 0x1
    ctx->pc = 0x2e786cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)1);
    // 0x2e7870: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x2E7870u;
    {
        const bool branch_taken_0x2e7870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7870u;
        // 0x2e7874: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7870) {
            ctx->pc = 0x2E7814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7814;
        }
    }
    ctx->pc = 0x2E7878u;
label_2e7878:
    // 0x2e7878: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e7878u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e787c: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x2e787cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x2e7880: 0x441ffe2  bgez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2E7880u;
    {
        const bool branch_taken_0x2e7880 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E7884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7880u;
        // 0x2e7884: 0xafa201f4  sw          $v0, 0x1F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7880) {
            ctx->pc = 0x2E780Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e780c;
        }
    }
    ctx->pc = 0x2E7888u;
    // 0x2e7888: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2e7888u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2e788c: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x2e788cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
label_2e7890:
    // 0x2e7890: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x2e7890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2e7894: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x2E7894u;
    {
        const bool branch_taken_0x2e7894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7894u;
        // 0x2e7898: 0x37de0004  ori         $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7894) {
            ctx->pc = 0x2E7810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7810;
        }
    }
    ctx->pc = 0x2E789Cu;
label_2e789c:
    // 0x2e789c: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x2e789cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2e78a0: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x2e78a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_2e78a4:
    // 0x2e78a4: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x2e78a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e78a8: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x2E78A8u;
    {
        const bool branch_taken_0x2e78a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E78A8u;
        // 0x2e78ac: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e78a8) {
            ctx->pc = 0x2E7814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7814;
        }
    }
    ctx->pc = 0x2E78B0u;
label_2e78b0:
    // 0x2e78b0: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x2e78b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2e78b4: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x2e78b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2e78b8: 0x80d70000  lb          $s7, 0x0($a2)
    ctx->pc = 0x2e78b8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e78bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e78bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e78c0: 0x16e20009  bne         $s7, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E78C0u;
    {
        const bool branch_taken_0x2e78c0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E78C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E78C0u;
        // 0x2e78c4: 0xafa601ec  sw          $a2, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e78c0) {
            ctx->pc = 0x2E78E8u;
            goto label_2e78e8;
        }
    }
    ctx->pc = 0x2E78C8u;
    // 0x2e78c8: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e78c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e78cc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2e78ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2e78d0: 0x8e90fff8  lw          $s0, -0x8($s4)
    ctx->pc = 0x2e78d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x2e78d4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2e78d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e78d8: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x2e78d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e78dc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2e78dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2e78e0: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x2E78E0u;
    {
        const bool branch_taken_0x2e78e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E78E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E78E0u;
        // 0x2e78e4: 0x202900b  movn        $s2, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e78e0) {
            ctx->pc = 0x2E7814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7814;
        }
    }
    ctx->pc = 0x2E78E8u;
label_2e78e8:
    // 0x2e78e8: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x2e78e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x2e78ec: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2e78ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2e78f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E78F0u;
    {
        const bool branch_taken_0x2e78f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E78F0u;
        // 0x2e78f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e78f0) {
            ctx->pc = 0x2E7928u;
            goto label_2e7928;
        }
    }
    ctx->pc = 0x2E78F8u;
    // 0x2e78f8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e78f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e78fc: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x2e78fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2e7900:
    // 0x2e7900: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2e7900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2e7904: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x2e7904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2e7908: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x2e7908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2e790c: 0x80570000  lb          $s7, 0x0($v0)
    ctx->pc = 0x2e790cu;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e7910: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e7910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e7914: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x2e7914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
    // 0x2e7918: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x2e7918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x2e791c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2e791cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2e7920: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E7920u;
    {
        const bool branch_taken_0x2e7920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7920u;
        // 0x2e7924: 0x2031018  mult        $v0, $s0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7920) {
            ctx->pc = 0x2E7900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7900;
        }
    }
    ctx->pc = 0x2E7928u;
label_2e7928:
    // 0x2e7928: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2e7928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2e792c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2e792cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e7930: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2e7930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2e7934: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
    ctx->pc = 0x2E7934u;
    {
        const bool branch_taken_0x2e7934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7934u;
        // 0x2e7938: 0x202900b  movn        $s2, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7934) {
            ctx->pc = 0x2E7828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7828;
        }
    }
    ctx->pc = 0x2E793Cu;
label_2e793c:
    // 0x2e793c: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x2e793cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2e7940: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
    ctx->pc = 0x2E7940u;
    {
        const bool branch_taken_0x2e7940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7940u;
        // 0x2e7944: 0x37de0080  ori         $fp, $fp, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7940) {
            ctx->pc = 0x2E7810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7810;
        }
    }
    ctx->pc = 0x2E7948u;
label_2e7948:
    // 0x2e7948: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e7948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e794c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e794cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2e7950:
    // 0x2e7950: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x2e7950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e7954: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x2e7954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2e7958: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2e7958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2e795c: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x2e795cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2e7960: 0x80970000  lb          $s7, 0x0($a0)
    ctx->pc = 0x2e7960u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e7964: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e7964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e7968: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x2e7968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x2e796c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2e796cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2e7970: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E7970u;
    {
        const bool branch_taken_0x2e7970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7970u;
        // 0x2e7974: 0xafa401ec  sw          $a0, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7970) {
            ctx->pc = 0x2E7950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7950;
        }
    }
    ctx->pc = 0x2E7978u;
    // 0x2e7978: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x2E7978u;
    {
        const bool branch_taken_0x2e7978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7978u;
        // 0x2e797c: 0xafb001f4  sw          $s0, 0x1F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7978) {
            ctx->pc = 0x2E7828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7828;
        }
    }
    ctx->pc = 0x2E7980u;
label_2e7980:
    // 0x2e7980: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x2e7980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2e7984: 0x37de0008  ori         $fp, $fp, 0x8
    ctx->pc = 0x2e7984u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)8);
    // 0x2e7988: 0x1000ffa2  b           . + 4 + (-0x5E << 2)
    ctx->pc = 0x2E7988u;
    {
        const bool branch_taken_0x2e7988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7988u;
        // 0x2e798c: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7988) {
            ctx->pc = 0x2E7814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7814;
        }
    }
    ctx->pc = 0x2E7990u;
label_2e7990:
    // 0x2e7990: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x2e7990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2e7994: 0x37de0040  ori         $fp, $fp, 0x40
    ctx->pc = 0x2e7994u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)64);
    // 0x2e7998: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x2E7998u;
    {
        const bool branch_taken_0x2e7998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7998u;
        // 0x2e799c: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7998) {
            ctx->pc = 0x2E7814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7814;
        }
    }
    ctx->pc = 0x2E79A0u;
label_2e79a0:
    // 0x2e79a0: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x2e79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2e79a4: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x2e79a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2e79a8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2e79a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e79ac: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x2e79acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2e79b0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E79B0u;
    {
        const bool branch_taken_0x2e79b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E79B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79B0u;
        // 0x2e79b4: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79b0) {
            ctx->pc = 0x2E79CCu;
            goto label_2e79cc;
        }
    }
    ctx->pc = 0x2E79B8u;
    // 0x2e79b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e79b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e79bc: 0x37de0020  ori         $fp, $fp, 0x20
    ctx->pc = 0x2e79bcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)32);
    // 0x2e79c0: 0xafa501ec  sw          $a1, 0x1EC($sp)
    ctx->pc = 0x2e79c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
    // 0x2e79c4: 0x1000ff93  b           . + 4 + (-0x6D << 2)
    ctx->pc = 0x2E79C4u;
    {
        const bool branch_taken_0x2e79c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79C4u;
        // 0x2e79c8: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79c4) {
            ctx->pc = 0x2E7814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7814;
        }
    }
    ctx->pc = 0x2E79CCu;
label_2e79cc:
    // 0x2e79cc: 0x1000ff91  b           . + 4 + (-0x6F << 2)
    ctx->pc = 0x2E79CCu;
    {
        const bool branch_taken_0x2e79cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E79D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79CCu;
        // 0x2e79d0: 0x37de0010  ori         $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79cc) {
            ctx->pc = 0x2E7814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7814;
        }
    }
    ctx->pc = 0x2E79D4u;
label_2e79d4:
    // 0x2e79d4: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x2e79d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2e79d8: 0x37de0020  ori         $fp, $fp, 0x20
    ctx->pc = 0x2e79d8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)32);
    // 0x2e79dc: 0x1000ff8d  b           . + 4 + (-0x73 << 2)
    ctx->pc = 0x2E79DCu;
    {
        const bool branch_taken_0x2e79dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E79E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79DCu;
        // 0x2e79e0: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79dc) {
            ctx->pc = 0x2E7814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7814;
        }
    }
    ctx->pc = 0x2E79E4u;
label_2e79e4:
    // 0x2e79e4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e79e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e79e8: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x2e79e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e79ec: 0x9282fff8  lbu         $v0, -0x8($s4)
    ctx->pc = 0x2e79ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x2e79f0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2e79f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e79f4: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x2e79f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e79f8: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x2e79f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e79fc: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x2E79FCu;
    {
        const bool branch_taken_0x2e79fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79FCu;
        // 0x2e7a00: 0xa3a20060  sb          $v0, 0x60($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79fc) {
            ctx->pc = 0x2E7F24u;
            goto label_2e7f24;
        }
    }
    ctx->pc = 0x2E7A04u;
label_2e7a04:
    // 0x2e7a04: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x2e7a04u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
label_2e7a08:
    // 0x2e7a08: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x2e7a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x2e7a0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7A0Cu;
    {
        const bool branch_taken_0x2e7a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A0Cu;
        // 0x2e7a10: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a0c) {
            ctx->pc = 0x2E7A20u;
            goto label_2e7a20;
        }
    }
    ctx->pc = 0x2E7A14u;
    // 0x2e7a14: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e7a14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e7a18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7A18u;
    {
        const bool branch_taken_0x2e7a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A18u;
        // 0x2e7a1c: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a18) {
            ctx->pc = 0x2E7A34u;
            goto label_2e7a34;
        }
    }
    ctx->pc = 0x2E7A20u;
label_2e7a20:
    // 0x2e7a20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7A20u;
    {
        const bool branch_taken_0x2e7a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A20u;
        // 0x2e7a24: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a20) {
            ctx->pc = 0x2E7A30u;
            goto label_2e7a30;
        }
    }
    ctx->pc = 0x2E7A28u;
    // 0x2e7a28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7A28u;
    {
        const bool branch_taken_0x2e7a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A28u;
        // 0x2e7a2c: 0x8690fff8  lh          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a28) {
            ctx->pc = 0x2E7A34u;
            goto label_2e7a34;
        }
    }
    ctx->pc = 0x2E7A30u;
label_2e7a30:
    // 0x2e7a30: 0x8e90fff8  lw          $s0, -0x8($s4)
    ctx->pc = 0x2e7a30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2e7a34:
    // 0x2e7a34: 0x60100db  bgez        $s0, . + 4 + (0xDB << 2)
    ctx->pc = 0x2E7A34u;
    {
        const bool branch_taken_0x2e7a34 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2E7A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A34u;
        // 0x2e7a38: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a34) {
            ctx->pc = 0x2E7DA4u;
            goto label_2e7da4;
        }
    }
    ctx->pc = 0x2E7A3Cu;
    // 0x2e7a3c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2e7a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2e7a40: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x2e7a40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x2e7a44: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x2E7A44u;
    {
        const bool branch_taken_0x2e7a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A44u;
        // 0x2e7a48: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a44) {
            ctx->pc = 0x2E7DA4u;
            goto label_2e7da4;
        }
    }
    ctx->pc = 0x2E7A4Cu;
label_2e7a4c:
    // 0x2e7a4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e7a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e7a50: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7A50u;
    {
        const bool branch_taken_0x2e7a50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E7A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A50u;
        // 0x2e7a54: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a50) {
            ctx->pc = 0x2E7A60u;
            goto label_2e7a60;
        }
    }
    ctx->pc = 0x2E7A58u;
    // 0x2e7a58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E7A58u;
    {
        const bool branch_taken_0x2e7a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A58u;
        // 0x2e7a5c: 0x24120006  addiu       $s2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a58) {
            ctx->pc = 0x2E7A78u;
            goto label_2e7a78;
        }
    }
    ctx->pc = 0x2E7A60u;
label_2e7a60:
    // 0x2e7a60: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7A60u;
    {
        const bool branch_taken_0x2e7a60 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A60u;
        // 0x2e7a64: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a60) {
            ctx->pc = 0x2E7A70u;
            goto label_2e7a70;
        }
    }
    ctx->pc = 0x2E7A68u;
    // 0x2e7a68: 0x16e20004  bne         $s7, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7A68u;
    {
        const bool branch_taken_0x2e7a68 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E7A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A68u;
        // 0x2e7a6c: 0x33c20008  andi        $v0, $fp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a68) {
            ctx->pc = 0x2E7A7Cu;
            goto label_2e7a7c;
        }
    }
    ctx->pc = 0x2E7A70u;
label_2e7a70:
    // 0x2e7a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7a74: 0x52900a  movz        $s2, $v0, $s2
    ctx->pc = 0x2e7a74u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_2e7a78:
    // 0x2e7a78: 0x33c20008  andi        $v0, $fp, 0x8
    ctx->pc = 0x2e7a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8);
label_2e7a7c:
    // 0x2e7a7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7A7Cu;
    {
        const bool branch_taken_0x2e7a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A7Cu;
        // 0x2e7a80: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a7c) {
            ctx->pc = 0x2E7A90u;
            goto label_2e7a90;
        }
    }
    ctx->pc = 0x2E7A84u;
    // 0x2e7a84: 0xde82fff8  ld          $v0, -0x8($s4)
    ctx->pc = 0x2e7a84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x2e7a88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7A88u;
    {
        const bool branch_taken_0x2e7a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A88u;
        // 0x2e7a8c: 0xffa20200  sd          $v0, 0x200($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a88) {
            ctx->pc = 0x2E7A98u;
            goto label_2e7a98;
        }
    }
    ctx->pc = 0x2E7A90u;
label_2e7a90:
    // 0x2e7a90: 0xde83fff8  ld          $v1, -0x8($s4)
    ctx->pc = 0x2e7a90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x2e7a94: 0xffa30200  sd          $v1, 0x200($sp)
    ctx->pc = 0x2e7a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 3));
label_2e7a98:
    // 0x2e7a98: 0xc0bb42e  jal         func_2ED0B8
    ctx->pc = 0x2E7A98u;
    SET_GPR_U32(ctx, 31, 0x2E7AA0u);
    ctx->pc = 0x2E7A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7A98u;
    // 0x2e7a9c: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED0B8u, 0x2E7A98u, 0x2E7AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7AA0u;
label_2e7aa0:
    // 0x2e7aa0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E7AA0u;
    {
        const bool branch_taken_0x2e7aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AA0u;
        // 0x2e7aa4: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7aa0) {
            ctx->pc = 0x2E7AD0u;
            goto label_2e7ad0;
        }
    }
    ctx->pc = 0x2E7AA8u;
    // 0x2e7aa8: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2E7AA8u;
    SET_GPR_U32(ctx, 31, 0x2E7AB0u);
    ctx->pc = 0x2E7AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7AA8u;
    // 0x2e7aac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2E7AA8u, 0x2E7AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7AB0u;
label_2e7ab0:
    // 0x2e7ab0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7AB0u;
    {
        const bool branch_taken_0x2e7ab0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E7AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AB0u;
        // 0x2e7ab4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ab0) {
            ctx->pc = 0x2E7AC4u;
            goto label_2e7ac4;
        }
    }
    ctx->pc = 0x2E7AB8u;
    // 0x2e7ab8: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2e7ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2e7abc: 0xa3a201d1  sb          $v0, 0x1D1($sp)
    ctx->pc = 0x2e7abcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e7ac0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e7ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2e7ac4:
    // 0x2e7ac4: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x2e7ac4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e7ac8: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x2E7AC8u;
    {
        const bool branch_taken_0x2e7ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AC8u;
        // 0x2e7acc: 0x2453bdc0  addiu       $s3, $v0, -0x4240 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ac8) {
            ctx->pc = 0x2E7F20u;
            goto label_2e7f20;
        }
    }
    ctx->pc = 0x2E7AD0u;
label_2e7ad0:
    // 0x2e7ad0: 0xc0b6fb8  jal         func_2DBEE0
    ctx->pc = 0x2E7AD0u;
    SET_GPR_U32(ctx, 31, 0x2E7AD8u);
    ctx->pc = 0x2E7AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7AD0u;
    // 0x2e7ad4: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBEE0u, 0x2E7AD0u, 0x2E7AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7AD8u;
label_2e7ad8:
    // 0x2e7ad8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7AD8u;
    {
        const bool branch_taken_0x2e7ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AD8u;
        // 0x2e7adc: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ad8) {
            ctx->pc = 0x2E7AECu;
            goto label_2e7aec;
        }
    }
    ctx->pc = 0x2E7AE0u;
    // 0x2e7ae0: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x2e7ae0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e7ae4: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x2E7AE4u;
    {
        const bool branch_taken_0x2e7ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AE4u;
        // 0x2e7ae8: 0x2453bdc8  addiu       $s3, $v0, -0x4238 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ae4) {
            ctx->pc = 0x2E7F20u;
            goto label_2e7f20;
        }
    }
    ctx->pc = 0x2E7AECu;
label_2e7aec:
    // 0x2e7aec: 0x37de0100  ori         $fp, $fp, 0x100
    ctx->pc = 0x2e7aecu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)256);
    // 0x2e7af0: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x2e7af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x2e7af4: 0xdfa50200  ld          $a1, 0x200($sp)
    ctx->pc = 0x2e7af4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2e7af8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e7af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7afc: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2e7afcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7b00: 0x27a801d0  addiu       $t0, $sp, 0x1D0
    ctx->pc = 0x2e7b00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2e7b04: 0x27a901dc  addiu       $t1, $sp, 0x1DC
    ctx->pc = 0x2e7b04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x2e7b08: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x2e7b08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7b0c: 0xc0ba2da  jal         func_2E8B68
    ctx->pc = 0x2E7B0Cu;
    SET_GPR_U32(ctx, 31, 0x2E7B14u);
    ctx->pc = 0x2E7B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7B0Cu;
    // 0x2e7b10: 0x27ab01e0  addiu       $t3, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8B68u, 0x2E7B0Cu, 0x2E7B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B14u;
label_2e7b14:
    // 0x2e7b14: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e7b14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7b18: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x2e7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x2e7b1c: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7B1Cu;
    {
        const bool branch_taken_0x2e7b1c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B1Cu;
        // 0x2e7b20: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b1c) {
            ctx->pc = 0x2E7B2Cu;
            goto label_2e7b2c;
        }
    }
    ctx->pc = 0x2E7B24u;
    // 0x2e7b24: 0x16e2000c  bne         $s7, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E7B24u;
    {
        const bool branch_taken_0x2e7b24 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E7B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B24u;
        // 0x2e7b28: 0x8fa501dc  lw          $a1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b24) {
            ctx->pc = 0x2E7B58u;
            goto label_2e7b58;
        }
    }
    ctx->pc = 0x2E7B2Cu;
label_2e7b2c:
    // 0x2e7b2c: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x2e7b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x2e7b30: 0x28a2fffd  slti        $v0, $a1, -0x3
    ctx->pc = 0x2e7b30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x2e7b34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7B34u;
    {
        const bool branch_taken_0x2e7b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B34u;
        // 0x2e7b38: 0x3ae40067  xori        $a0, $s7, 0x67 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)103);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b34) {
            ctx->pc = 0x2E7B48u;
            goto label_2e7b48;
        }
    }
    ctx->pc = 0x2E7B3Cu;
    // 0x2e7b3c: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x2e7b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2e7b40: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7B40u;
    {
        const bool branch_taken_0x2e7b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7b40) {
            ctx->pc = 0x2E7B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7B40u;
            // 0x2e7b44: 0x24170067  addiu       $s7, $zero, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7B58u;
            goto label_2e7b58;
        }
    }
    ctx->pc = 0x2E7B48u;
label_2e7b48:
    // 0x2e7b48: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2e7b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x2e7b4c: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x2e7b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2e7b50: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2e7b50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7b54: 0x64b80b  movn        $s7, $v1, $a0
    ctx->pc = 0x2e7b54u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
label_2e7b58:
    // 0x2e7b58: 0x2ae20066  slti        $v0, $s7, 0x66
    ctx->pc = 0x2e7b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)102) ? 1 : 0);
    // 0x2e7b5c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E7B5Cu;
    {
        const bool branch_taken_0x2e7b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B5Cu;
        // 0x2e7b60: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b5c) {
            ctx->pc = 0x2E7BA4u;
            goto label_2e7ba4;
        }
    }
    ctx->pc = 0x2E7B64u;
    // 0x2e7b64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e7b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7b68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e7b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7b6c: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x2e7b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
    // 0x2e7b70: 0xc0ba346  jal         func_2E8D18
    ctx->pc = 0x2E7B70u;
    SET_GPR_U32(ctx, 31, 0x2E7B78u);
    ctx->pc = 0x2E7B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7B70u;
    // 0x2e7b74: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8D18u, 0x2E7B70u, 0x2E7B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B78u;
label_2e7b78:
    // 0x2e7b78: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x2e7b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x2e7b7c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2e7b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2e7b80: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x2e7b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x2e7b84: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x2e7b84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e7b88: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7B88u;
    {
        const bool branch_taken_0x2e7b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B88u;
        // 0x2e7b8c: 0x82a821  addu        $s5, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b88) {
            ctx->pc = 0x2E7B9Cu;
            goto label_2e7b9c;
        }
    }
    ctx->pc = 0x2E7B90u;
    // 0x2e7b90: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x2e7b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x2e7b94: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E7B94u;
    {
        const bool branch_taken_0x2e7b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B94u;
        // 0x2e7b98: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b94) {
            ctx->pc = 0x2E7C00u;
            goto label_2e7c00;
        }
    }
    ctx->pc = 0x2E7B9Cu;
label_2e7b9c:
    // 0x2e7b9c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E7B9Cu;
    {
        const bool branch_taken_0x2e7b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B9Cu;
        // 0x2e7ba0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b9c) {
            ctx->pc = 0x2E7BFCu;
            goto label_2e7bfc;
        }
    }
    ctx->pc = 0x2E7BA4u;
label_2e7ba4:
    // 0x2e7ba4: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x2e7ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x2e7ba8: 0x16e2000b  bne         $s7, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E7BA8u;
    {
        const bool branch_taken_0x2e7ba8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E7BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BA8u;
        // 0x2e7bac: 0x8fa301e0  lw          $v1, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ba8) {
            ctx->pc = 0x2E7BD8u;
            goto label_2e7bd8;
        }
    }
    ctx->pc = 0x2E7BB0u;
    // 0x2e7bb0: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E7BB0u;
    {
        const bool branch_taken_0x2e7bb0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2E7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BB0u;
        // 0x2e7bb4: 0x26550002  addiu       $s5, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7bb0) {
            ctx->pc = 0x2E7BFCu;
            goto label_2e7bfc;
        }
    }
    ctx->pc = 0x2E7BB8u;
    // 0x2e7bb8: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7BB8u;
    {
        const bool branch_taken_0x2e7bb8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BB8u;
        // 0x2e7bbc: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7bb8) {
            ctx->pc = 0x2E7BCCu;
            goto label_2e7bcc;
        }
    }
    ctx->pc = 0x2E7BC0u;
    // 0x2e7bc0: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x2e7bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x2e7bc4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E7BC4u;
    {
        const bool branch_taken_0x2e7bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BC4u;
        // 0x2e7bc8: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7bc4) {
            ctx->pc = 0x2E7C00u;
            goto label_2e7c00;
        }
    }
    ctx->pc = 0x2E7BCCu;
label_2e7bcc:
    // 0x2e7bcc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2e7bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e7bd0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E7BD0u;
    {
        const bool branch_taken_0x2e7bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BD0u;
        // 0x2e7bd4: 0x52a821  addu        $s5, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7bd0) {
            ctx->pc = 0x2E7BFCu;
            goto label_2e7bfc;
        }
    }
    ctx->pc = 0x2E7BD8u;
label_2e7bd8:
    // 0x2e7bd8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2e7bd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e7bdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7BDCu;
    {
        const bool branch_taken_0x2e7bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BDCu;
        // 0x2e7be0: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7bdc) {
            ctx->pc = 0x2E7BECu;
            goto label_2e7bec;
        }
    }
    ctx->pc = 0x2E7BE4u;
    // 0x2e7be4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7BE4u;
    {
        const bool branch_taken_0x2e7be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BE4u;
        // 0x2e7be8: 0xa2a821  addu        $s5, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7be4) {
            ctx->pc = 0x2E7BFCu;
            goto label_2e7bfc;
        }
    }
    ctx->pc = 0x2E7BECu;
label_2e7bec:
    // 0x2e7bec: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7BECu;
    {
        const bool branch_taken_0x2e7bec = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2E7BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BECu;
        // 0x2e7bf0: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7bec) {
            ctx->pc = 0x2E7BFCu;
            goto label_2e7bfc;
        }
    }
    ctx->pc = 0x2E7BF4u;
    // 0x2e7bf4: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x2e7bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2e7bf8: 0x45a823  subu        $s5, $v0, $a1
    ctx->pc = 0x2e7bf8u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2e7bfc:
    // 0x2e7bfc: 0x83a201d0  lb          $v0, 0x1D0($sp)
    ctx->pc = 0x2e7bfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
label_2e7c00:
    // 0x2e7c00: 0x104000c7  beqz        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x2E7C00u;
    {
        const bool branch_taken_0x2e7c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C00u;
        // 0x2e7c04: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c00) {
            ctx->pc = 0x2E7F20u;
            goto label_2e7f20;
        }
    }
    ctx->pc = 0x2E7C08u;
    // 0x2e7c08: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x2e7c08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e7c0c: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x2E7C0Cu;
    {
        const bool branch_taken_0x2e7c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C0Cu;
        // 0x2e7c10: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c0c) {
            ctx->pc = 0x2E7F24u;
            goto label_2e7f24;
        }
    }
    ctx->pc = 0x2E7C14u;
label_2e7c14:
    // 0x2e7c14: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x2e7c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x2e7c18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7C18u;
    {
        const bool branch_taken_0x2e7c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C18u;
        // 0x2e7c1c: 0x8fa501f0  lw          $a1, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c18) {
            ctx->pc = 0x2E7C30u;
            goto label_2e7c30;
        }
    }
    ctx->pc = 0x2E7C20u;
    // 0x2e7c20: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e7c20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e7c24: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x2e7c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x2e7c28: 0x1000fec1  b           . + 4 + (-0x13F << 2)
    ctx->pc = 0x2E7C28u;
    {
        const bool branch_taken_0x2e7c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C28u;
        // 0x2e7c2c: 0xfc450000  sd          $a1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c28) {
            ctx->pc = 0x2E7730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7730;
        }
    }
    ctx->pc = 0x2E7C30u;
label_2e7c30:
    // 0x2e7c30: 0x33c20040  andi        $v0, $fp, 0x40
    ctx->pc = 0x2e7c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
    // 0x2e7c34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7C34u;
    {
        const bool branch_taken_0x2e7c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C34u;
        // 0x2e7c38: 0x8fa601f0  lw          $a2, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c34) {
            ctx->pc = 0x2E7C4Cu;
            goto label_2e7c4c;
        }
    }
    ctx->pc = 0x2E7C3Cu;
    // 0x2e7c3c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e7c3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e7c40: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x2e7c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x2e7c44: 0x1000feba  b           . + 4 + (-0x146 << 2)
    ctx->pc = 0x2E7C44u;
    {
        const bool branch_taken_0x2e7c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C44u;
        // 0x2e7c48: 0xa4460000  sh          $a2, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c44) {
            ctx->pc = 0x2E7730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7730;
        }
    }
    ctx->pc = 0x2E7C4Cu;
label_2e7c4c:
    // 0x2e7c4c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e7c4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e7c50: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x2e7c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2e7c54: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x2e7c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x2e7c58: 0x1000feb5  b           . + 4 + (-0x14B << 2)
    ctx->pc = 0x2E7C58u;
    {
        const bool branch_taken_0x2e7c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C58u;
        // 0x2e7c5c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c58) {
            ctx->pc = 0x2E7730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7730;
        }
    }
    ctx->pc = 0x2E7C60u;
label_2e7c60:
    // 0x2e7c60: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x2e7c60u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
label_2e7c64:
    // 0x2e7c64: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x2e7c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x2e7c68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7C68u;
    {
        const bool branch_taken_0x2e7c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C68u;
        // 0x2e7c6c: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c68) {
            ctx->pc = 0x2E7C7Cu;
            goto label_2e7c7c;
        }
    }
    ctx->pc = 0x2E7C70u;
    // 0x2e7c70: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e7c70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e7c74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7C74u;
    {
        const bool branch_taken_0x2e7c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C74u;
        // 0x2e7c78: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c74) {
            ctx->pc = 0x2E7C90u;
            goto label_2e7c90;
        }
    }
    ctx->pc = 0x2E7C7Cu;
label_2e7c7c:
    // 0x2e7c7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7C7Cu;
    {
        const bool branch_taken_0x2e7c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C7Cu;
        // 0x2e7c80: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c7c) {
            ctx->pc = 0x2E7C8Cu;
            goto label_2e7c8c;
        }
    }
    ctx->pc = 0x2E7C84u;
    // 0x2e7c84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7C84u;
    {
        const bool branch_taken_0x2e7c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C84u;
        // 0x2e7c88: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c84) {
            ctx->pc = 0x2E7C90u;
            goto label_2e7c90;
        }
    }
    ctx->pc = 0x2E7C8Cu;
label_2e7c8c:
    // 0x2e7c8c: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x2e7c8cu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2e7c90:
    // 0x2e7c90: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2E7C90u;
    {
        const bool branch_taken_0x2e7c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C90u;
        // 0x2e7c94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c90) {
            ctx->pc = 0x2E7DA0u;
            goto label_2e7da0;
        }
    }
    ctx->pc = 0x2E7C98u;
label_2e7c98:
    // 0x2e7c98: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e7c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e7c9c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e7c9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e7ca0: 0x2442bdd0  addiu       $v0, $v0, -0x4230
    ctx->pc = 0x2e7ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950352));
    // 0x2e7ca4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e7ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e7ca8: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x2e7ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x2e7cac: 0x37de0002  ori         $fp, $fp, 0x2
    ctx->pc = 0x2e7cacu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)2);
    // 0x2e7cb0: 0x24170078  addiu       $s7, $zero, 0x78
    ctx->pc = 0x2e7cb0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2e7cb4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2E7CB4u;
    {
        const bool branch_taken_0x2e7cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CB4u;
        // 0x2e7cb8: 0x8e90fff8  lw          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7cb4) {
            ctx->pc = 0x2E7DA0u;
            goto label_2e7da0;
        }
    }
    ctx->pc = 0x2E7CBCu;
label_2e7cbc:
    // 0x2e7cbc: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e7cbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e7cc0: 0x8e93fff8  lw          $s3, -0x8($s4)
    ctx->pc = 0x2e7cc0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x2e7cc4: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7CC4u;
    {
        const bool branch_taken_0x2e7cc4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CC4u;
        // 0x2e7cc8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7cc4) {
            ctx->pc = 0x2E7CD0u;
            goto label_2e7cd0;
        }
    }
    ctx->pc = 0x2E7CCCu;
    // 0x2e7ccc: 0x2453bde8  addiu       $s3, $v0, -0x4218
    ctx->pc = 0x2e7cccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950376));
label_2e7cd0:
    // 0x2e7cd0: 0x640000b  bltz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x2E7CD0u;
    {
        const bool branch_taken_0x2e7cd0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2E7CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CD0u;
        // 0x2e7cd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7cd0) {
            ctx->pc = 0x2E7D00u;
            goto label_2e7d00;
        }
    }
    ctx->pc = 0x2E7CD8u;
    // 0x2e7cd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e7cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7cdc: 0xc0baf6f  jal         func_2EBDBC
    ctx->pc = 0x2E7CDCu;
    SET_GPR_U32(ctx, 31, 0x2E7CE4u);
    ctx->pc = 0x2E7CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7CDCu;
    // 0x2e7ce0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBDBCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBDBCu, 0x2E7CDCu, 0x2E7CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7CE4u;
label_2e7ce4:
    // 0x2e7ce4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7CE4u;
    {
        const bool branch_taken_0x2e7ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CE4u;
        // 0x2e7ce8: 0x53a823  subu        $s5, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ce4) {
            ctx->pc = 0x2E7CF8u;
            goto label_2e7cf8;
        }
    }
    ctx->pc = 0x2E7CECu;
    // 0x2e7cec: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x2e7cecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2e7cf0: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x2E7CF0u;
    {
        const bool branch_taken_0x2e7cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CF0u;
        // 0x2e7cf4: 0x242a80b  movn        $s5, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7cf0) {
            ctx->pc = 0x2E7F1Cu;
            goto label_2e7f1c;
        }
    }
    ctx->pc = 0x2E7CF8u;
label_2e7cf8:
    // 0x2e7cf8: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x2E7CF8u;
    {
        const bool branch_taken_0x2e7cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CF8u;
        // 0x2e7cfc: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7cf8) {
            ctx->pc = 0x2E7F1Cu;
            goto label_2e7f1c;
        }
    }
    ctx->pc = 0x2E7D00u;
label_2e7d00:
    // 0x2e7d00: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x2E7D00u;
    SET_GPR_U32(ctx, 31, 0x2E7D08u);
    ctx->pc = 0x2E7D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7D00u;
    // 0x2e7d04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x2E7D00u, 0x2E7D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7D08u;
label_2e7d08:
    // 0x2e7d08: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x2E7D08u;
    {
        const bool branch_taken_0x2e7d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D08u;
        // 0x2e7d0c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d08) {
            ctx->pc = 0x2E7F1Cu;
            goto label_2e7f1c;
        }
    }
    ctx->pc = 0x2E7D10u;
label_2e7d10:
    // 0x2e7d10: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x2e7d10u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
label_2e7d14:
    // 0x2e7d14: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x2e7d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x2e7d18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7D18u;
    {
        const bool branch_taken_0x2e7d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D18u;
        // 0x2e7d1c: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d18) {
            ctx->pc = 0x2E7D2Cu;
            goto label_2e7d2c;
        }
    }
    ctx->pc = 0x2E7D20u;
    // 0x2e7d20: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e7d20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e7d24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7D24u;
    {
        const bool branch_taken_0x2e7d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D24u;
        // 0x2e7d28: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d24) {
            ctx->pc = 0x2E7D40u;
            goto label_2e7d40;
        }
    }
    ctx->pc = 0x2E7D2Cu;
label_2e7d2c:
    // 0x2e7d2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7D2Cu;
    {
        const bool branch_taken_0x2e7d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D2Cu;
        // 0x2e7d30: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d2c) {
            ctx->pc = 0x2E7D3Cu;
            goto label_2e7d3c;
        }
    }
    ctx->pc = 0x2E7D34u;
    // 0x2e7d34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7D34u;
    {
        const bool branch_taken_0x2e7d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D34u;
        // 0x2e7d38: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d34) {
            ctx->pc = 0x2E7D40u;
            goto label_2e7d40;
        }
    }
    ctx->pc = 0x2E7D3Cu;
label_2e7d3c:
    // 0x2e7d3c: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x2e7d3cu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2e7d40:
    // 0x2e7d40: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E7D40u;
    {
        const bool branch_taken_0x2e7d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D40u;
        // 0x2e7d44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d40) {
            ctx->pc = 0x2E7DA0u;
            goto label_2e7da0;
        }
    }
    ctx->pc = 0x2E7D48u;
label_2e7d48:
    // 0x2e7d48: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e7d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e7d4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7D4Cu;
    {
        const bool branch_taken_0x2e7d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D4Cu;
        // 0x2e7d50: 0x2442bdf0  addiu       $v0, $v0, -0x4210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d4c) {
            ctx->pc = 0x2E7D5Cu;
            goto label_2e7d5c;
        }
    }
    ctx->pc = 0x2E7D54u;
label_2e7d54:
    // 0x2e7d54: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e7d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e7d58: 0x2442bdd0  addiu       $v0, $v0, -0x4230
    ctx->pc = 0x2e7d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950352));
label_2e7d5c:
    // 0x2e7d5c: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x2e7d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x2e7d60: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x2e7d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x2e7d64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7D64u;
    {
        const bool branch_taken_0x2e7d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D64u;
        // 0x2e7d68: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d64) {
            ctx->pc = 0x2E7D78u;
            goto label_2e7d78;
        }
    }
    ctx->pc = 0x2E7D6Cu;
    // 0x2e7d6c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e7d6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e7d70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7D70u;
    {
        const bool branch_taken_0x2e7d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D70u;
        // 0x2e7d74: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d70) {
            ctx->pc = 0x2E7D8Cu;
            goto label_2e7d8c;
        }
    }
    ctx->pc = 0x2E7D78u;
label_2e7d78:
    // 0x2e7d78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7D78u;
    {
        const bool branch_taken_0x2e7d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D78u;
        // 0x2e7d7c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d78) {
            ctx->pc = 0x2E7D88u;
            goto label_2e7d88;
        }
    }
    ctx->pc = 0x2E7D80u;
    // 0x2e7d80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7D80u;
    {
        const bool branch_taken_0x2e7d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D80u;
        // 0x2e7d84: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d80) {
            ctx->pc = 0x2E7D8Cu;
            goto label_2e7d8c;
        }
    }
    ctx->pc = 0x2E7D88u;
label_2e7d88:
    // 0x2e7d88: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x2e7d88u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2e7d8c:
    // 0x2e7d8c: 0x33c30001  andi        $v1, $fp, 0x1
    ctx->pc = 0x2e7d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x2e7d90: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7D90u;
    {
        const bool branch_taken_0x2e7d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D90u;
        // 0x2e7d94: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d90) {
            ctx->pc = 0x2E7DA0u;
            goto label_2e7da0;
        }
    }
    ctx->pc = 0x2E7D98u;
    // 0x2e7d98: 0x37c20002  ori         $v0, $fp, 0x2
    ctx->pc = 0x2e7d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)2);
    // 0x2e7d9c: 0x50f00b  movn        $fp, $v0, $s0
    ctx->pc = 0x2e7d9cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
label_2e7da0:
    // 0x2e7da0: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x2e7da0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_2e7da4:
    // 0x2e7da4: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7DA4u;
    {
        const bool branch_taken_0x2e7da4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2E7DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DA4u;
        // 0x2e7da8: 0xafb2020c  sw          $s2, 0x20C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7da4) {
            ctx->pc = 0x2E7DB4u;
            goto label_2e7db4;
        }
    }
    ctx->pc = 0x2E7DACu;
    // 0x2e7dac: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x2e7dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x2e7db0: 0x3c2f024  and         $fp, $fp, $v0
    ctx->pc = 0x2e7db0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) & GPR_U64(ctx, 2));
label_2e7db4:
    // 0x2e7db4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7DB4u;
    {
        const bool branch_taken_0x2e7db4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DB4u;
        // 0x2e7db8: 0x27b301bc  addiu       $s3, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7db4) {
            ctx->pc = 0x2E7DC8u;
            goto label_2e7dc8;
        }
    }
    ctx->pc = 0x2E7DBCu;
    // 0x2e7dbc: 0x8fa5020c  lw          $a1, 0x20C($sp)
    ctx->pc = 0x2e7dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x2e7dc0: 0x10a0004d  beqz        $a1, . + 4 + (0x4D << 2)
    ctx->pc = 0x2E7DC0u;
    {
        const bool branch_taken_0x2e7dc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DC0u;
        // 0x2e7dc4: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7dc0) {
            ctx->pc = 0x2E7EF8u;
            goto label_2e7ef8;
        }
    }
    ctx->pc = 0x2E7DC8u;
label_2e7dc8:
    // 0x2e7dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7dcc: 0x1082001f  beq         $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E7DCCu;
    {
        const bool branch_taken_0x2e7dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DCCu;
        // 0x2e7dd0: 0x2e02000a  sltiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7dcc) {
            ctx->pc = 0x2E7E4Cu;
            goto label_2e7e4c;
        }
    }
    ctx->pc = 0x2E7DD4u;
    // 0x2e7dd4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E7DD4u;
    {
        const bool branch_taken_0x2e7dd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DD4u;
        // 0x2e7dd8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7dd4) {
            ctx->pc = 0x2E7E00u;
            goto label_2e7e00;
        }
    }
    ctx->pc = 0x2E7DDCu;
    // 0x2e7ddc: 0x10820037  beq         $a0, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2E7DDCu;
    {
        const bool branch_taken_0x2e7ddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DDCu;
        // 0x2e7de0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ddc) {
            ctx->pc = 0x2E7EBCu;
            goto label_2e7ebc;
        }
    }
    ctx->pc = 0x2E7DE4u;
    // 0x2e7de4: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x2e7de4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e7de8: 0x2453be08  addiu       $s3, $v0, -0x41F8
    ctx->pc = 0x2e7de8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950408));
    // 0x2e7dec: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x2e7decu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x2e7df0: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x2E7DF0u;
    SET_GPR_U32(ctx, 31, 0x2E7DF8u);
    ctx->pc = 0x2E7DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7DF0u;
    // 0x2e7df4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x2E7DF0u, 0x2E7DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7DF8u;
label_2e7df8:
    // 0x2e7df8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2E7DF8u;
    {
        const bool branch_taken_0x2e7df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DF8u;
        // 0x2e7dfc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7df8) {
            ctx->pc = 0x2E7F28u;
            goto label_2e7f28;
        }
    }
    ctx->pc = 0x2E7E00u;
label_2e7e00:
    // 0x2e7e00: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x2e7e00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e7e04: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x2e7e04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e7e08: 0x33c30001  andi        $v1, $fp, 0x1
    ctx->pc = 0x2e7e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x2e7e0c: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x2e7e0cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
label_2e7e10:
    // 0x2e7e10: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x2e7e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x2e7e14: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2e7e14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2e7e18: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x2e7e18u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x2e7e1c: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x2e7e1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x2e7e20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e7e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e7e24: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x2e7e24u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e7e28: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E7E28u;
    {
        const bool branch_taken_0x2e7e28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7e28) {
            ctx->pc = 0x2E7E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7e10;
        }
    }
    ctx->pc = 0x2E7E30u;
    // 0x2e7e30: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2E7E30u;
    {
        const bool branch_taken_0x2e7e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E30u;
        // 0x2e7e34: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e30) {
            ctx->pc = 0x2E7F00u;
            goto label_2e7f00;
        }
    }
    ctx->pc = 0x2E7E38u;
    // 0x2e7e38: 0x10430032  beq         $v0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2E7E38u;
    {
        const bool branch_taken_0x2e7e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E7E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E38u;
        // 0x2e7e3c: 0x2662fea4  addiu       $v0, $s3, -0x15C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e38) {
            ctx->pc = 0x2E7F04u;
            goto label_2e7f04;
        }
    }
    ctx->pc = 0x2E7E40u;
    // 0x2e7e40: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2e7e40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2e7e44: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2E7E44u;
    {
        const bool branch_taken_0x2e7e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E44u;
        // 0x2e7e48: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e44) {
            ctx->pc = 0x2E7F00u;
            goto label_2e7f00;
        }
    }
    ctx->pc = 0x2E7E4Cu;
label_2e7e4c:
    // 0x2e7e4c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E7E4Cu;
    {
        const bool branch_taken_0x2e7e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E4Cu;
        // 0x2e7e50: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e4c) {
            ctx->pc = 0x2E7EA0u;
            goto label_2e7ea0;
        }
    }
    ctx->pc = 0x2E7E54u;
    // 0x2e7e54: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x2e7e54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e7e58: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x2e7e58u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x2e7e5c: 0x0  nop
    ctx->pc = 0x2e7e5cu;
    // NOP
label_2e7e60:
    // 0x2e7e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e64: 0xc0b8a0c  jal         func_2E2830
    ctx->pc = 0x2E7E64u;
    SET_GPR_U32(ctx, 31, 0x2E7E6Cu);
    ctx->pc = 0x2E7E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7E64u;
    // 0x2e7e68: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2830u, 0x2E7E64u, 0x2E7E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E6Cu;
label_2e7e6c:
    // 0x2e7e6c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2e7e6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2e7e70: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x2e7e70u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x2e7e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e7e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e7e7c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2e7e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e7e80: 0xc0b8898  jal         func_2E2260
    ctx->pc = 0x2E7E80u;
    SET_GPR_U32(ctx, 31, 0x2E7E88u);
    ctx->pc = 0x2E7E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7E80u;
    // 0x2e7e84: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2260u, 0x2E7E80u, 0x2E7E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E88u;
label_2e7e88:
    // 0x2e7e88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e7e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e8c: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x2e7e8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2e7e90: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2E7E90u;
    {
        const bool branch_taken_0x2e7e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E90u;
        // 0x2e7e94: 0x66020030  daddiu      $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e90) {
            ctx->pc = 0x2E7E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7e60;
        }
    }
    ctx->pc = 0x2E7E98u;
    // 0x2e7e98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7E98u;
    {
        const bool branch_taken_0x2e7e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E98u;
        // 0x2e7e9c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e98) {
            ctx->pc = 0x2E7EB0u;
            goto label_2e7eb0;
        }
    }
    ctx->pc = 0x2E7EA0u;
label_2e7ea0:
    // 0x2e7ea0: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x2e7ea0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e7ea4: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x2e7ea4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x2e7ea8: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x2e7ea8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x2e7eac: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2e7eacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2e7eb0:
    // 0x2e7eb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e7eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e7eb4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2E7EB4u;
    {
        const bool branch_taken_0x2e7eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EB4u;
        // 0x2e7eb8: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7eb4) {
            ctx->pc = 0x2E7F00u;
            goto label_2e7f00;
        }
    }
    ctx->pc = 0x2E7EBCu;
label_2e7ebc:
    // 0x2e7ebc: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x2e7ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e7ec0: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x2e7ec0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e7ec4: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x2e7ec4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
label_2e7ec8:
    // 0x2e7ec8: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x2e7ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x2e7ecc: 0x8fa60214  lw          $a2, 0x214($sp)
    ctx->pc = 0x2e7eccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x2e7ed0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e7ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e7ed4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e7ed4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e7ed8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2e7ed8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2e7edc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2e7edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2e7ee0: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x2e7ee0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x2e7ee4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e7ee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e7ee8: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E7EE8u;
    {
        const bool branch_taken_0x2e7ee8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EE8u;
        // 0x2e7eec: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ee8) {
            ctx->pc = 0x2E7EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7ec8;
        }
    }
    ctx->pc = 0x2E7EF0u;
    // 0x2e7ef0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7EF0u;
    {
        const bool branch_taken_0x2e7ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EF0u;
        // 0x2e7ef4: 0x2662fea4  addiu       $v0, $s3, -0x15C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ef0) {
            ctx->pc = 0x2E7F04u;
            goto label_2e7f04;
        }
    }
    ctx->pc = 0x2E7EF8u;
label_2e7ef8:
    // 0x2e7ef8: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x2e7ef8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e7efc: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x2e7efcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
label_2e7f00:
    // 0x2e7f00: 0x2662fea4  addiu       $v0, $s3, -0x15C
    ctx->pc = 0x2e7f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
label_2e7f04:
    // 0x2e7f04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E7F04u;
    {
        const bool branch_taken_0x2e7f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F04u;
        // 0x2e7f08: 0x2a2a823  subu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f04) {
            ctx->pc = 0x2E7F28u;
            goto label_2e7f28;
        }
    }
    ctx->pc = 0x2E7F0Cu;
label_2e7f0c:
    // 0x2e7f0c: 0x12e002fc  beqz        $s7, . + 4 + (0x2FC << 2)
    ctx->pc = 0x2E7F0Cu;
    {
        const bool branch_taken_0x2e7f0c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F0Cu;
        // 0x2e7f10: 0x27b30060  addiu       $s3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f0c) {
            ctx->pc = 0x2E8B00u;
            goto label_2e8b00;
        }
    }
    ctx->pc = 0x2E7F14u;
    // 0x2e7f14: 0xa3b70060  sb          $s7, 0x60($sp)
    ctx->pc = 0x2e7f14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 23));
    // 0x2e7f18: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2e7f18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7f1c:
    // 0x2e7f1c: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x2e7f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_2e7f20:
    // 0x2e7f20: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x2e7f20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2e7f24:
    // 0x2e7f24: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x2e7f24u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
label_2e7f28:
    // 0x2e7f28: 0xafb50210  sw          $s5, 0x210($sp)
    ctx->pc = 0x2e7f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 21));
    // 0x2e7f2c: 0x8fa4020c  lw          $a0, 0x20C($sp)
    ctx->pc = 0x2e7f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x2e7f30: 0x8fa5020c  lw          $a1, 0x20C($sp)
    ctx->pc = 0x2e7f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x2e7f34: 0x2a4102a  slt         $v0, $s5, $a0
    ctx->pc = 0x2e7f34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2e7f38: 0x83a301d1  lb          $v1, 0x1D1($sp)
    ctx->pc = 0x2e7f38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x2e7f3c: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x2e7f3cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
    // 0x2e7f40: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x2e7f40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x2e7f44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7F44u;
    {
        const bool branch_taken_0x2e7f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F44u;
        // 0x2e7f48: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f44) {
            ctx->pc = 0x2E7F58u;
            goto label_2e7f58;
        }
    }
    ctx->pc = 0x2E7F4Cu;
    // 0x2e7f4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e7f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e7f50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7F50u;
    {
        const bool branch_taken_0x2e7f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F50u;
        // 0x2e7f54: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f50) {
            ctx->pc = 0x2E7F68u;
            goto label_2e7f68;
        }
    }
    ctx->pc = 0x2E7F58u;
label_2e7f58:
    // 0x2e7f58: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x2e7f58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2e7f5c: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x2e7f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
    // 0x2e7f60: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x2e7f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2e7f64: 0xafa60210  sw          $a2, 0x210($sp)
    ctx->pc = 0x2e7f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 6));
label_2e7f68:
    // 0x2e7f68: 0x16c00037  bnez        $s6, . + 4 + (0x37 << 2)
    ctx->pc = 0x2E7F68u;
    {
        const bool branch_taken_0x2e7f68 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F68u;
        // 0x2e7f6c: 0x8fa201f4  lw          $v0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f68) {
            ctx->pc = 0x2E8048u;
            goto label_2e8048;
        }
    }
    ctx->pc = 0x2E7F70u;
    // 0x2e7f70: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2e7f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2e7f74: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x2e7f74u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7f78: 0x1a000033  blez        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2E7F78u;
    {
        const bool branch_taken_0x2e7f78 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E7F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F78u;
        // 0x2e7f7c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f78) {
            ctx->pc = 0x2E8048u;
            goto label_2e8048;
        }
    }
    ctx->pc = 0x2E7F80u;
    // 0x2e7f80: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E7F80u;
    {
        const bool branch_taken_0x2e7f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F80u;
        // 0x2e7f84: 0x3c06003b  lui         $a2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f80) {
            ctx->pc = 0x2E7FF0u;
            goto label_2e7ff0;
        }
    }
    ctx->pc = 0x2E7F88u;
    // 0x2e7f88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7F88u;
    {
        const bool branch_taken_0x2e7f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F88u;
        // 0x2e7f8c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f88) {
            ctx->pc = 0x2E7F94u;
            goto label_2e7f94;
        }
    }
    ctx->pc = 0x2E7F90u;
label_2e7f90:
    // 0x2e7f90: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e7f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e7f94:
    // 0x2e7f94: 0x24c4bda0  addiu       $a0, $a2, -0x4260
    ctx->pc = 0x2e7f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950304));
    // 0x2e7f98: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2e7f98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2e7f9c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e7f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e7fa0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2e7fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7fa4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e7fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e7fa8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e7fac: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2e7facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e7fb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e7fb4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e7fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e7fb8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e7fb8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e7fbc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E7FBCu;
    {
        const bool branch_taken_0x2e7fbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FBCu;
        // 0x2e7fc0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7fbc) {
            ctx->pc = 0x2E7FE0u;
            goto label_2e7fe0;
        }
    }
    ctx->pc = 0x2E7FC4u;
    // 0x2e7fc4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e7fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e7fc8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2e7fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e7fcc: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E7FCCu;
    SET_GPR_U32(ctx, 31, 0x2E7FD4u);
    ctx->pc = 0x2E7FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7FCCu;
    // 0x2e7fd0: 0x7fa60220  sq          $a2, 0x220($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E7FCCu, 0x2E7FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7FD4u;
label_2e7fd4:
    // 0x2e7fd4: 0x144002d2  bnez        $v0, . + 4 + (0x2D2 << 2)
    ctx->pc = 0x2E7FD4u;
    {
        const bool branch_taken_0x2e7fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FD4u;
        // 0x2e7fd8: 0x7ba60220  lq          $a2, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7fd4) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E7FDCu;
    // 0x2e7fdc: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2e7fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e7fe0:
    // 0x2e7fe0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2e7fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2e7fe4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2e7fe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2e7fe8: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2E7FE8u;
    {
        const bool branch_taken_0x2e7fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FE8u;
        // 0x2e7fec: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7fe8) {
            ctx->pc = 0x2E7F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7f90;
        }
    }
    ctx->pc = 0x2E7FF0u;
label_2e7ff0:
    // 0x2e7ff0: 0x24c2bda0  addiu       $v0, $a2, -0x4260
    ctx->pc = 0x2e7ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950304));
    // 0x2e7ff4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2e7ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2e7ff8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e7ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2e7ffc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e7ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e8000: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2e8000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8004: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e8004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e8008: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e8008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e800c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2e800cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e8010: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e8010u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e8014: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e8014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e8018: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E8018u;
    {
        const bool branch_taken_0x2e8018 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8018u;
        // 0x2e801c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8018) {
            ctx->pc = 0x2E8040u;
            goto label_2e8040;
        }
    }
    ctx->pc = 0x2E8020u;
    // 0x2e8020: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e8020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e8024: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E8024u;
    SET_GPR_U32(ctx, 31, 0x2E802Cu);
    ctx->pc = 0x2E8028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8024u;
    // 0x2e8028: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E8024u, 0x2E802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E802Cu;
label_2e802c:
    // 0x2e802c: 0x144002bc  bnez        $v0, . + 4 + (0x2BC << 2)
    ctx->pc = 0x2E802Cu;
    {
        const bool branch_taken_0x2e802c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E802Cu;
        // 0x2e8030: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e802c) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E8034u;
    // 0x2e8034: 0x27b20028  addiu       $s2, $sp, 0x28
    ctx->pc = 0x2e8034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2e8038: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8038u;
    {
        const bool branch_taken_0x2e8038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8038u;
        // 0x2e803c: 0x93a401d1  lbu         $a0, 0x1D1($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8038) {
            ctx->pc = 0x2E8048u;
            goto label_2e8048;
        }
    }
    ctx->pc = 0x2E8040u;
label_2e8040:
    // 0x2e8040: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x2e8040u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x2e8044: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x2e8044u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2e8048:
    // 0x2e8048: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E8048u;
    {
        const bool branch_taken_0x2e8048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8048u;
        // 0x2e804c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8048) {
            ctx->pc = 0x2E8088u;
            goto label_2e8088;
        }
    }
    ctx->pc = 0x2E8050u;
    // 0x2e8050: 0x27a401d1  addiu       $a0, $sp, 0x1D1
    ctx->pc = 0x2e8050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 465));
    // 0x2e8054: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2e8054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2e8058: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e8058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e805c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2e805cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8060: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e8060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e8064: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e8064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e8068: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e8068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e806c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e8070: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e8070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e8074: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e8074u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e8078: 0x1480001c  bnez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E8078u;
    {
        const bool branch_taken_0x2e8078 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8078u;
        // 0x2e807c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8078) {
            ctx->pc = 0x2E80ECu;
            goto label_2e80ec;
        }
    }
    ctx->pc = 0x2E8080u;
    // 0x2e8080: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E8080u;
    {
        const bool branch_taken_0x2e8080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8080u;
        // 0x2e8084: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8080) {
            ctx->pc = 0x2E80D4u;
            goto label_2e80d4;
        }
    }
    ctx->pc = 0x2E8088u;
label_2e8088:
    // 0x2e8088: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x2e8088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
    // 0x2e808c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E808Cu;
    {
        const bool branch_taken_0x2e808c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E808Cu;
        // 0x2e8090: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e808c) {
            ctx->pc = 0x2E80F0u;
            goto label_2e80f0;
        }
    }
    ctx->pc = 0x2E8094u;
    // 0x2e8094: 0xa3b701c1  sb          $s7, 0x1C1($sp)
    ctx->pc = 0x2e8094u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 23));
    // 0x2e8098: 0xa3a301c0  sb          $v1, 0x1C0($sp)
    ctx->pc = 0x2e8098u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e809c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e80a0: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x2e80a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2e80a4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e80a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e80a8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2e80a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2e80ac: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2e80acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e80b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2e80b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e80b4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e80b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e80b8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2e80b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2e80bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e80bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e80c0: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2e80c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2e80c4: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x2e80c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e80c8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E80C8u;
    {
        const bool branch_taken_0x2e80c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E80CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80C8u;
        // 0x2e80cc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80c8) {
            ctx->pc = 0x2E80ECu;
            goto label_2e80ec;
        }
    }
    ctx->pc = 0x2E80D0u;
    // 0x2e80d0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e80d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2e80d4:
    // 0x2e80d4: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E80D4u;
    SET_GPR_U32(ctx, 31, 0x2E80DCu);
    ctx->pc = 0x2E80D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E80D4u;
    // 0x2e80d8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E80D4u, 0x2E80DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E80DCu;
label_2e80dc:
    // 0x2e80dc: 0x14400290  bnez        $v0, . + 4 + (0x290 << 2)
    ctx->pc = 0x2E80DCu;
    {
        const bool branch_taken_0x2e80dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E80E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80DCu;
        // 0x2e80e0: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80dc) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E80E4u;
    // 0x2e80e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E80E4u;
    {
        const bool branch_taken_0x2e80e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E80E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80E4u;
        // 0x2e80e8: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80e4) {
            ctx->pc = 0x2E80F0u;
            goto label_2e80f0;
        }
    }
    ctx->pc = 0x2E80ECu;
label_2e80ec:
    // 0x2e80ec: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x2e80ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2e80f0:
    // 0x2e80f0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2e80f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e80f4: 0x16c20035  bne         $s6, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2E80F4u;
    {
        const bool branch_taken_0x2e80f4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E80F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80F4u;
        // 0x2e80f8: 0x8fa6020c  lw          $a2, 0x20C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80f4) {
            ctx->pc = 0x2E81CCu;
            goto label_2e81cc;
        }
    }
    ctx->pc = 0x2E80FCu;
    // 0x2e80fc: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x2e80fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x2e8100: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x2e8100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2e8104: 0x858023  subu        $s0, $a0, $a1
    ctx->pc = 0x2e8104u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e8108: 0x1a000030  blez        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2E8108u;
    {
        const bool branch_taken_0x2e8108 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8108u;
        // 0x2e810c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8108) {
            ctx->pc = 0x2E81CCu;
            goto label_2e81cc;
        }
    }
    ctx->pc = 0x2E8110u;
    // 0x2e8110: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E8110u;
    {
        const bool branch_taken_0x2e8110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8110u;
        // 0x2e8114: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8110) {
            ctx->pc = 0x2E8178u;
            goto label_2e8178;
        }
    }
    ctx->pc = 0x2E8118u;
    // 0x2e8118: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E8118u;
    {
        const bool branch_taken_0x2e8118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8118u;
        // 0x2e811c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8118) {
            ctx->pc = 0x2E8124u;
            goto label_2e8124;
        }
    }
    ctx->pc = 0x2E8120u;
label_2e8120:
    // 0x2e8120: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e8120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e8124:
    // 0x2e8124: 0x26c4bdb0  addiu       $a0, $s6, -0x4250
    ctx->pc = 0x2e8124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950320));
    // 0x2e8128: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2e8128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2e812c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e812cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e8130: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2e8130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8134: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e8134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e8138: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e8138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e813c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2e813cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e8140: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e8140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e8144: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e8144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e8148: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e8148u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e814c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E814Cu;
    {
        const bool branch_taken_0x2e814c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E814Cu;
        // 0x2e8150: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e814c) {
            ctx->pc = 0x2E8168u;
            goto label_2e8168;
        }
    }
    ctx->pc = 0x2E8154u;
    // 0x2e8154: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e8154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e8158: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E8158u;
    SET_GPR_U32(ctx, 31, 0x2E8160u);
    ctx->pc = 0x2E815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8158u;
    // 0x2e815c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E8158u, 0x2E8160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8160u;
label_2e8160:
    // 0x2e8160: 0x1440026f  bnez        $v0, . + 4 + (0x26F << 2)
    ctx->pc = 0x2E8160u;
    {
        const bool branch_taken_0x2e8160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8160u;
        // 0x2e8164: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8160) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E8168u;
label_2e8168:
    // 0x2e8168: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2e8168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2e816c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2e816cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2e8170: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2E8170u;
    {
        const bool branch_taken_0x2e8170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8170u;
        // 0x2e8174: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8170) {
            ctx->pc = 0x2E8120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8120;
        }
    }
    ctx->pc = 0x2E8178u;
label_2e8178:
    // 0x2e8178: 0x26c2bdb0  addiu       $v0, $s6, -0x4250
    ctx->pc = 0x2e8178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950320));
    // 0x2e817c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2e817cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2e8180: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e8180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2e8184: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e8184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e8188: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2e8188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e818c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e818cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e8190: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e8190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e8194: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2e8194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e8198: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e8198u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e819c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e819cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e81a0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E81A0u;
    {
        const bool branch_taken_0x2e81a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E81A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81A0u;
        // 0x2e81a4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81a0) {
            ctx->pc = 0x2E81C4u;
            goto label_2e81c4;
        }
    }
    ctx->pc = 0x2E81A8u;
    // 0x2e81a8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e81a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e81ac: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E81ACu;
    SET_GPR_U32(ctx, 31, 0x2E81B4u);
    ctx->pc = 0x2E81B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E81ACu;
    // 0x2e81b0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E81ACu, 0x2E81B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E81B4u;
label_2e81b4:
    // 0x2e81b4: 0x1440025a  bnez        $v0, . + 4 + (0x25A << 2)
    ctx->pc = 0x2E81B4u;
    {
        const bool branch_taken_0x2e81b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E81B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81B4u;
        // 0x2e81b8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81b4) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E81BCu;
    // 0x2e81bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E81BCu;
    {
        const bool branch_taken_0x2e81bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E81C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81BCu;
        // 0x2e81c0: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81bc) {
            ctx->pc = 0x2E81C8u;
            goto label_2e81c8;
        }
    }
    ctx->pc = 0x2E81C4u;
label_2e81c4:
    // 0x2e81c4: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x2e81c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2e81c8:
    // 0x2e81c8: 0x8fa6020c  lw          $a2, 0x20C($sp)
    ctx->pc = 0x2e81c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_2e81cc:
    // 0x2e81cc: 0xd58023  subu        $s0, $a2, $s5
    ctx->pc = 0x2e81ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x2e81d0: 0x1a00002f  blez        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2E81D0u;
    {
        const bool branch_taken_0x2e81d0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E81D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81D0u;
        // 0x2e81d4: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81d0) {
            ctx->pc = 0x2E8290u;
            goto label_2e8290;
        }
    }
    ctx->pc = 0x2E81D8u;
    // 0x2e81d8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E81D8u;
    {
        const bool branch_taken_0x2e81d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E81DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81D8u;
        // 0x2e81dc: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81d8) {
            ctx->pc = 0x2E8240u;
            goto label_2e8240;
        }
    }
    ctx->pc = 0x2E81E0u;
    // 0x2e81e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E81E0u;
    {
        const bool branch_taken_0x2e81e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E81E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81E0u;
        // 0x2e81e4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81e0) {
            ctx->pc = 0x2E81ECu;
            goto label_2e81ec;
        }
    }
    ctx->pc = 0x2E81E8u;
label_2e81e8:
    // 0x2e81e8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e81e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e81ec:
    // 0x2e81ec: 0x26c4bdb0  addiu       $a0, $s6, -0x4250
    ctx->pc = 0x2e81ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950320));
    // 0x2e81f0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2e81f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2e81f4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e81f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e81f8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2e81f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e81fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e81fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e8200: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e8200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e8204: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2e8204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e8208: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e8208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e820c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e820cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e8210: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e8210u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e8214: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8214u;
    {
        const bool branch_taken_0x2e8214 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8214u;
        // 0x2e8218: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8214) {
            ctx->pc = 0x2E8230u;
            goto label_2e8230;
        }
    }
    ctx->pc = 0x2E821Cu;
    // 0x2e821c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e821cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e8220: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E8220u;
    SET_GPR_U32(ctx, 31, 0x2E8228u);
    ctx->pc = 0x2E8224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8220u;
    // 0x2e8224: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E8220u, 0x2E8228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8228u;
label_2e8228:
    // 0x2e8228: 0x1440023d  bnez        $v0, . + 4 + (0x23D << 2)
    ctx->pc = 0x2E8228u;
    {
        const bool branch_taken_0x2e8228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8228u;
        // 0x2e822c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8228) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E8230u;
label_2e8230:
    // 0x2e8230: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2e8230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2e8234: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2e8234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2e8238: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2E8238u;
    {
        const bool branch_taken_0x2e8238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8238u;
        // 0x2e823c: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8238) {
            ctx->pc = 0x2E81E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e81e8;
        }
    }
    ctx->pc = 0x2E8240u;
label_2e8240:
    // 0x2e8240: 0x26c2bdb0  addiu       $v0, $s6, -0x4250
    ctx->pc = 0x2e8240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950320));
    // 0x2e8244: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2e8244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2e8248: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e8248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2e824c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e824cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e8250: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2e8250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8254: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e8254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e8258: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e8258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e825c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2e825cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e8260: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e8260u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e8264: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e8264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e8268: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E8268u;
    {
        const bool branch_taken_0x2e8268 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8268u;
        // 0x2e826c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8268) {
            ctx->pc = 0x2E828Cu;
            goto label_2e828c;
        }
    }
    ctx->pc = 0x2E8270u;
    // 0x2e8270: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e8270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e8274: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E8274u;
    SET_GPR_U32(ctx, 31, 0x2E827Cu);
    ctx->pc = 0x2E8278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8274u;
    // 0x2e8278: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E8274u, 0x2E827Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E827Cu;
label_2e827c:
    // 0x2e827c: 0x14400228  bnez        $v0, . + 4 + (0x228 << 2)
    ctx->pc = 0x2E827Cu;
    {
        const bool branch_taken_0x2e827c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E827Cu;
        // 0x2e8280: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e827c) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E8284u;
    // 0x2e8284: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E8284u;
    {
        const bool branch_taken_0x2e8284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8284u;
        // 0x2e8288: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8284) {
            ctx->pc = 0x2E8290u;
            goto label_2e8290;
        }
    }
    ctx->pc = 0x2E828Cu;
label_2e828c:
    // 0x2e828c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x2e828cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2e8290:
    // 0x2e8290: 0x33c20100  andi        $v0, $fp, 0x100
    ctx->pc = 0x2e8290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)256);
    // 0x2e8294: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E8294u;
    {
        const bool branch_taken_0x2e8294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8294) {
            ctx->pc = 0x2E8298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8294u;
            // 0x2e8298: 0x2ae20066  slti        $v0, $s7, 0x66 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)102) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E82B8u;
            goto label_2e82b8;
        }
    }
    ctx->pc = 0x2E829Cu;
    // 0x2e829c: 0xae350004  sw          $s5, 0x4($s1)
    ctx->pc = 0x2e829cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 21));
    // 0x2e82a0: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2e82a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2e82a4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2e82a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e82a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e82ac: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2e82acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e82b0: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x2E82B0u;
    {
        const bool branch_taken_0x2e82b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E82B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82B0u;
        // 0x2e82b4: 0x551021  addu        $v0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82b0) {
            ctx->pc = 0x2E89C0u;
            goto label_2e89c0;
        }
    }
    ctx->pc = 0x2E82B8u;
label_2e82b8:
    // 0x2e82b8: 0x1440014e  bnez        $v0, . + 4 + (0x14E << 2)
    ctx->pc = 0x2E82B8u;
    {
        const bool branch_taken_0x2e82b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E82BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82B8u;
        // 0x2e82bc: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82b8) {
            ctx->pc = 0x2E87F4u;
            goto label_2e87f4;
        }
    }
    ctx->pc = 0x2E82C0u;
    // 0x2e82c0: 0xdfa40200  ld          $a0, 0x200($sp)
    ctx->pc = 0x2e82c0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2e82c4: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2E82C4u;
    SET_GPR_U32(ctx, 31, 0x2E82CCu);
    ctx->pc = 0x2E82C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E82C4u;
    // 0x2e82c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2E82C4u, 0x2E82CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E82CCu;
label_2e82cc:
    // 0x2e82cc: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2E82CCu;
    {
        const bool branch_taken_0x2e82cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E82D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82CCu;
        // 0x2e82d0: 0x8fa301dc  lw          $v1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82cc) {
            ctx->pc = 0x2E8430u;
            goto label_2e8430;
        }
    }
    ctx->pc = 0x2E82D4u;
    // 0x2e82d4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e82d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e82d8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2e82d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e82dc: 0x2442be28  addiu       $v0, $v0, -0x41D8
    ctx->pc = 0x2e82dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950440));
    // 0x2e82e0: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2e82e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2e82e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e82e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2e82e8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e82ec: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2e82ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e82f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e82f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e82f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e82f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e82f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e82fc: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e82fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e8300: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e8300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e8304: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8304u;
    {
        const bool branch_taken_0x2e8304 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8304u;
        // 0x2e8308: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8304) {
            ctx->pc = 0x2E8320u;
            goto label_2e8320;
        }
    }
    ctx->pc = 0x2E830Cu;
    // 0x2e830c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e830cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e8310: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E8310u;
    SET_GPR_U32(ctx, 31, 0x2E8318u);
    ctx->pc = 0x2E8314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8310u;
    // 0x2e8314: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E8310u, 0x2E8318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8318u;
label_2e8318:
    // 0x2e8318: 0x14400201  bnez        $v0, . + 4 + (0x201 << 2)
    ctx->pc = 0x2E8318u;
    {
        const bool branch_taken_0x2e8318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8318u;
        // 0x2e831c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8318) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E8320u;
label_2e8320:
    // 0x2e8320: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x2e8320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x2e8324: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x2e8324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2e8328: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e8328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e832c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E832Cu;
    {
        const bool branch_taken_0x2e832c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e832c) {
            ctx->pc = 0x2E8330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E832Cu;
            // 0x2e8330: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8344u;
            goto label_2e8344;
        }
    }
    ctx->pc = 0x2E8334u;
    // 0x2e8334: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x2e8334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x2e8338: 0x104001ad  beqz        $v0, . + 4 + (0x1AD << 2)
    ctx->pc = 0x2E8338u;
    {
        const bool branch_taken_0x2e8338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8338u;
        // 0x2e833c: 0x33c20004  andi        $v0, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8338) {
            ctx->pc = 0x2E89F0u;
            goto label_2e89f0;
        }
    }
    ctx->pc = 0x2E8340u;
    // 0x2e8340: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2e8340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2e8344:
    // 0x2e8344: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x2e8344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2e8348: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e8348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2e834c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e834cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e8350: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2e8350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e8354: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2e8354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e8358: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e8358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e835c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e835cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e8360: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2e8360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2e8364: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2e8364u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e8368: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8368u;
    {
        const bool branch_taken_0x2e8368 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8368u;
        // 0x2e836c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8368) {
            ctx->pc = 0x2E8384u;
            goto label_2e8384;
        }
    }
    ctx->pc = 0x2E8370u;
    // 0x2e8370: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e8370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e8374: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E8374u;
    SET_GPR_U32(ctx, 31, 0x2E837Cu);
    ctx->pc = 0x2E8378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8374u;
    // 0x2e8378: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E8374u, 0x2E837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E837Cu;
label_2e837c:
    // 0x2e837c: 0x144001e8  bnez        $v0, . + 4 + (0x1E8 << 2)
    ctx->pc = 0x2E837Cu;
    {
        const bool branch_taken_0x2e837c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E837Cu;
        // 0x2e8380: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e837c) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E8384u;
label_2e8384:
    // 0x2e8384: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2e8384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2e8388: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2e8388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e838c: 0x1a000197  blez        $s0, . + 4 + (0x197 << 2)
    ctx->pc = 0x2E838Cu;
    {
        const bool branch_taken_0x2e838c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E8390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E838Cu;
        // 0x2e8390: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e838c) {
            ctx->pc = 0x2E89ECu;
            goto label_2e89ec;
        }
    }
    ctx->pc = 0x2E8394u;
    // 0x2e8394: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E8394u;
    {
        const bool branch_taken_0x2e8394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8394u;
        // 0x2e8398: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8394) {
            ctx->pc = 0x2E8400u;
            goto label_2e8400;
        }
    }
    ctx->pc = 0x2E839Cu;
    // 0x2e839c: 0x0  nop
    ctx->pc = 0x2e839cu;
    // NOP
label_2e83a0:
    // 0x2e83a0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e83a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e83a4: 0x26c4bdb0  addiu       $a0, $s6, -0x4250
    ctx->pc = 0x2e83a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950320));
    // 0x2e83a8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2e83a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2e83ac: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e83acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e83b0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2e83b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e83b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e83b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e83b8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e83b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e83bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2e83bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e83c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e83c4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e83c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e83c8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e83c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e83cc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E83CCu;
    {
        const bool branch_taken_0x2e83cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E83D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83CCu;
        // 0x2e83d0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83cc) {
            ctx->pc = 0x2E83E8u;
            goto label_2e83e8;
        }
    }
    ctx->pc = 0x2E83D4u;
    // 0x2e83d4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e83d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e83d8: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E83D8u;
    SET_GPR_U32(ctx, 31, 0x2E83E0u);
    ctx->pc = 0x2E83DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E83D8u;
    // 0x2e83dc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E83D8u, 0x2E83E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E83E0u;
label_2e83e0:
    // 0x2e83e0: 0x144001cf  bnez        $v0, . + 4 + (0x1CF << 2)
    ctx->pc = 0x2E83E0u;
    {
        const bool branch_taken_0x2e83e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E83E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83E0u;
        // 0x2e83e4: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83e0) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E83E8u;
label_2e83e8:
    // 0x2e83e8: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2e83e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2e83ec: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2e83ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2e83f0: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2E83F0u;
    {
        const bool branch_taken_0x2e83f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E83F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83F0u;
        // 0x2e83f4: 0x26c2bdb0  addiu       $v0, $s6, -0x4250 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83f0) {
            ctx->pc = 0x2E83A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e83a0;
        }
    }
    ctx->pc = 0x2E83F8u;
    // 0x2e83f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E83F8u;
    {
        const bool branch_taken_0x2e83f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E83FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83F8u;
        // 0x2e83fc: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83f8) {
            ctx->pc = 0x2E8408u;
            goto label_2e8408;
        }
    }
    ctx->pc = 0x2E8400u;
label_2e8400:
    // 0x2e8400: 0x26c2bdb0  addiu       $v0, $s6, -0x4250
    ctx->pc = 0x2e8400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950320));
    // 0x2e8404: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2e8404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2e8408:
    // 0x2e8408: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e8408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2e840c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e840cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e8410: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2e8410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e8414: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e8414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e8418: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e8418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e841c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2e841cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e8420: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e8420u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e8424: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e8424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e8428: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x2E8428u;
    {
        const bool branch_taken_0x2e8428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8428u;
        // 0x2e842c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8428) {
            ctx->pc = 0x2E89D0u;
            goto label_2e89d0;
        }
    }
    ctx->pc = 0x2E8430u;
label_2e8430:
    // 0x2e8430: 0x1c600063  bgtz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x2E8430u;
    {
        const bool branch_taken_0x2e8430 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2E8434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8430u;
        // 0x2e8434: 0x8fa401e0  lw          $a0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8430) {
            ctx->pc = 0x2E85C0u;
            goto label_2e85c0;
        }
    }
    ctx->pc = 0x2E8438u;
    // 0x2e8438: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e8438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e843c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2e843cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8440: 0x2442be28  addiu       $v0, $v0, -0x41D8
    ctx->pc = 0x2e8440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950440));
    // 0x2e8444: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2e8444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2e8448: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e8448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2e844c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e844cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e8450: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2e8450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8454: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e8454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e8458: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e8458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e845c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e845cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e8460: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e8460u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e8464: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e8464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e8468: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8468u;
    {
        const bool branch_taken_0x2e8468 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8468u;
        // 0x2e846c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8468) {
            ctx->pc = 0x2E8484u;
            goto label_2e8484;
        }
    }
    ctx->pc = 0x2E8470u;
    // 0x2e8470: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e8470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e8474: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E8474u;
    SET_GPR_U32(ctx, 31, 0x2E847Cu);
    ctx->pc = 0x2E8478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8474u;
    // 0x2e8478: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E8474u, 0x2E847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E847Cu;
label_2e847c:
    // 0x2e847c: 0x144001a8  bnez        $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x2E847Cu;
    {
        const bool branch_taken_0x2e847c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E847Cu;
        // 0x2e8480: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e847c) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E8484u;
label_2e8484:
    // 0x2e8484: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2e8484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2e8488: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x2e8488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2e848c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2e848cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2e8490: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2e8490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e8494: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2e8494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e8498: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e8498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e849c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e849cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e84a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e84a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e84a4: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2e84a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e84a8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2e84a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2e84ac: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E84ACu;
    {
        const bool branch_taken_0x2e84ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E84B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84ACu;
        // 0x2e84b0: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84ac) {
            ctx->pc = 0x2E84C8u;
            goto label_2e84c8;
        }
    }
    ctx->pc = 0x2E84B4u;
    // 0x2e84b4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e84b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e84b8: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E84B8u;
    SET_GPR_U32(ctx, 31, 0x2E84C0u);
    ctx->pc = 0x2E84BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E84B8u;
    // 0x2e84bc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E84B8u, 0x2E84C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E84C0u;
label_2e84c0:
    // 0x2e84c0: 0x14400197  bnez        $v0, . + 4 + (0x197 << 2)
    ctx->pc = 0x2E84C0u;
    {
        const bool branch_taken_0x2e84c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E84C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84C0u;
        // 0x2e84c4: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84c0) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E84C8u;
label_2e84c8:
    // 0x2e84c8: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x2e84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x2e84cc: 0x28023  negu        $s0, $v0
    ctx->pc = 0x2e84ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2e84d0: 0x1a00002c  blez        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2E84D0u;
    {
        const bool branch_taken_0x2e84d0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84D0u;
        // 0x2e84d4: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84d0) {
            ctx->pc = 0x2E8584u;
            goto label_2e8584;
        }
    }
    ctx->pc = 0x2E84D8u;
    // 0x2e84d8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E84D8u;
    {
        const bool branch_taken_0x2e84d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E84DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84D8u;
        // 0x2e84dc: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84d8) {
            ctx->pc = 0x2E8540u;
            goto label_2e8540;
        }
    }
    ctx->pc = 0x2E84E0u;
label_2e84e0:
    // 0x2e84e0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e84e4: 0x26c4bdb0  addiu       $a0, $s6, -0x4250
    ctx->pc = 0x2e84e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950320));
    // 0x2e84e8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2e84e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2e84ec: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e84ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e84f0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2e84f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e84f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e84f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e84f8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e84f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e84fc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2e84fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e8500: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e8500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e8504: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e8504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e8508: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e8508u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e850c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E850Cu;
    {
        const bool branch_taken_0x2e850c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E850Cu;
        // 0x2e8510: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e850c) {
            ctx->pc = 0x2E8528u;
            goto label_2e8528;
        }
    }
    ctx->pc = 0x2E8514u;
    // 0x2e8514: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e8514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e8518: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E8518u;
    SET_GPR_U32(ctx, 31, 0x2E8520u);
    ctx->pc = 0x2E851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8518u;
    // 0x2e851c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E8518u, 0x2E8520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8520u;
label_2e8520:
    // 0x2e8520: 0x1440017f  bnez        $v0, . + 4 + (0x17F << 2)
    ctx->pc = 0x2E8520u;
    {
        const bool branch_taken_0x2e8520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8520u;
        // 0x2e8524: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8520) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E8528u;
label_2e8528:
    // 0x2e8528: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2e8528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2e852c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2e852cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2e8530: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2E8530u;
    {
        const bool branch_taken_0x2e8530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8530u;
        // 0x2e8534: 0x26c2bdb0  addiu       $v0, $s6, -0x4250 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8530) {
            ctx->pc = 0x2E84E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e84e0;
        }
    }
    ctx->pc = 0x2E8538u;
    // 0x2e8538: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8538u;
    {
        const bool branch_taken_0x2e8538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8538u;
        // 0x2e853c: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8538) {
            ctx->pc = 0x2E8548u;
            goto label_2e8548;
        }
    }
    ctx->pc = 0x2E8540u;
label_2e8540:
    // 0x2e8540: 0x26c2bdb0  addiu       $v0, $s6, -0x4250
    ctx->pc = 0x2e8540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950320));
    // 0x2e8544: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2e8544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2e8548:
    // 0x2e8548: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e8548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2e854c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e8550: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2e8550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e8554: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e8554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e8558: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e8558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e855c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2e855cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e8560: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e8560u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e8564: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e8564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e8568: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8568u;
    {
        const bool branch_taken_0x2e8568 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8568u;
        // 0x2e856c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8568) {
            ctx->pc = 0x2E8584u;
            goto label_2e8584;
        }
    }
    ctx->pc = 0x2E8570u;
    // 0x2e8570: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e8570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e8574: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E8574u;
    SET_GPR_U32(ctx, 31, 0x2E857Cu);
    ctx->pc = 0x2E8578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8574u;
    // 0x2e8578: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E8574u, 0x2E857Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E857Cu;
label_2e857c:
    // 0x2e857c: 0x14400168  bnez        $v0, . + 4 + (0x168 << 2)
    ctx->pc = 0x2E857Cu;
    {
        const bool branch_taken_0x2e857c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E857Cu;
        // 0x2e8580: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e857c) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E8584u;
label_2e8584:
    // 0x2e8584: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2e8584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2e8588: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2e8588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2e858c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e858cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e8590: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2e8590u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e8594: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e8594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e8598: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e8598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e859c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2e859cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2e85a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e85a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e85a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e85a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e85a8: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x2e85a8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e85ac: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e85acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e85b0: 0x14a0010e  bnez        $a1, . + 4 + (0x10E << 2)
    ctx->pc = 0x2E85B0u;
    {
        const bool branch_taken_0x2e85b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E85B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85B0u;
        // 0x2e85b4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e85b0) {
            ctx->pc = 0x2E89ECu;
            goto label_2e89ec;
        }
    }
    ctx->pc = 0x2E85B8u;
    // 0x2e85b8: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x2E85B8u;
    {
        const bool branch_taken_0x2e85b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E85BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85B8u;
        // 0x2e85bc: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e85b8) {
            ctx->pc = 0x2E89DCu;
            goto label_2e89dc;
        }
    }
    ctx->pc = 0x2E85C0u;
label_2e85c0:
    // 0x2e85c0: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2e85c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2e85c4: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x2E85C4u;
    {
        const bool branch_taken_0x2e85c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e85c4) {
            ctx->pc = 0x2E85C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E85C4u;
            // 0x2e85c8: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8714u;
            goto label_2e8714;
        }
    }
    ctx->pc = 0x2E85CCu;
    // 0x2e85cc: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x2e85ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x2e85d0: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2e85d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2e85d4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2e85d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e85d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e85d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e85dc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2e85dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e85e0: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x2e85e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2e85e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e85e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e85e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2e85e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e85ec: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2e85ecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e85f0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2e85f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2e85f4: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E85F4u;
    {
        const bool branch_taken_0x2e85f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E85F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85F4u;
        // 0x2e85f8: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e85f4) {
            ctx->pc = 0x2E8614u;
            goto label_2e8614;
        }
    }
    ctx->pc = 0x2E85FCu;
    // 0x2e85fc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e85fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e8600: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E8600u;
    SET_GPR_U32(ctx, 31, 0x2E8608u);
    ctx->pc = 0x2E8604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8600u;
    // 0x2e8604: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E8600u, 0x2E8608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8608u;
label_2e8608:
    // 0x2e8608: 0x14400145  bnez        $v0, . + 4 + (0x145 << 2)
    ctx->pc = 0x2E8608u;
    {
        const bool branch_taken_0x2e8608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8608u;
        // 0x2e860c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8608) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E8610u;
    // 0x2e8610: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x2e8610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2e8614:
    // 0x2e8614: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x2e8614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x2e8618: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x2e8618u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e861c: 0x1a00002d  blez        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2E861Cu;
    {
        const bool branch_taken_0x2e861c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E861Cu;
        // 0x2e8620: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e861c) {
            ctx->pc = 0x2E86D4u;
            goto label_2e86d4;
        }
    }
    ctx->pc = 0x2E8624u;
    // 0x2e8624: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E8624u;
    {
        const bool branch_taken_0x2e8624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8624u;
        // 0x2e8628: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8624) {
            ctx->pc = 0x2E8690u;
            goto label_2e8690;
        }
    }
    ctx->pc = 0x2E862Cu;
    // 0x2e862c: 0x0  nop
    ctx->pc = 0x2e862cu;
    // NOP
label_2e8630:
    // 0x2e8630: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e8630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e8634: 0x26c4bdb0  addiu       $a0, $s6, -0x4250
    ctx->pc = 0x2e8634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950320));
    // 0x2e8638: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2e8638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2e863c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e863cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e8640: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2e8640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e8644: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e8644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e8648: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e8648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e864c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2e864cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e8650: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e8650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e8654: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e8654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e8658: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e8658u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e865c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E865Cu;
    {
        const bool branch_taken_0x2e865c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E865Cu;
        // 0x2e8660: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e865c) {
            ctx->pc = 0x2E8678u;
            goto label_2e8678;
        }
    }
    ctx->pc = 0x2E8664u;
    // 0x2e8664: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e8664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e8668: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E8668u;
    SET_GPR_U32(ctx, 31, 0x2E8670u);
    ctx->pc = 0x2E866Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8668u;
    // 0x2e866c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E8668u, 0x2E8670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8670u;
label_2e8670:
    // 0x2e8670: 0x1440012b  bnez        $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x2E8670u;
    {
        const bool branch_taken_0x2e8670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8670u;
        // 0x2e8674: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8670) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E8678u;
label_2e8678:
    // 0x2e8678: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2e8678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2e867c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2e867cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2e8680: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2E8680u;
    {
        const bool branch_taken_0x2e8680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8680u;
        // 0x2e8684: 0x26c2bdb0  addiu       $v0, $s6, -0x4250 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8680) {
            ctx->pc = 0x2E8630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8630;
        }
    }
    ctx->pc = 0x2E8688u;
    // 0x2e8688: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8688u;
    {
        const bool branch_taken_0x2e8688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8688u;
        // 0x2e868c: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8688) {
            ctx->pc = 0x2E8698u;
            goto label_2e8698;
        }
    }
    ctx->pc = 0x2E8690u;
label_2e8690:
    // 0x2e8690: 0x26c2bdb0  addiu       $v0, $s6, -0x4250
    ctx->pc = 0x2e8690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950320));
    // 0x2e8694: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2e8694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2e8698:
    // 0x2e8698: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e8698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2e869c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e869cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e86a0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2e86a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e86a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e86a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e86a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e86ac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2e86acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e86b0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e86b0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e86b4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e86b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e86b8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E86B8u;
    {
        const bool branch_taken_0x2e86b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E86BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86B8u;
        // 0x2e86bc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e86b8) {
            ctx->pc = 0x2E86D4u;
            goto label_2e86d4;
        }
    }
    ctx->pc = 0x2E86C0u;
    // 0x2e86c0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e86c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e86c4: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E86C4u;
    SET_GPR_U32(ctx, 31, 0x2E86CCu);
    ctx->pc = 0x2E86C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E86C4u;
    // 0x2e86c8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E86C4u, 0x2E86CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E86CCu;
label_2e86cc:
    // 0x2e86cc: 0x14400114  bnez        $v0, . + 4 + (0x114 << 2)
    ctx->pc = 0x2E86CCu;
    {
        const bool branch_taken_0x2e86cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E86D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86CCu;
        // 0x2e86d0: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e86cc) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E86D4u;
label_2e86d4:
    // 0x2e86d4: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x2e86d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x2e86d8: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x2E86D8u;
    {
        const bool branch_taken_0x2e86d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E86DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86D8u;
        // 0x2e86dc: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e86d8) {
            ctx->pc = 0x2E89ECu;
            goto label_2e89ec;
        }
    }
    ctx->pc = 0x2E86E0u;
    // 0x2e86e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e86e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e86e4: 0x2442be30  addiu       $v0, $v0, -0x41D0
    ctx->pc = 0x2e86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950448));
    // 0x2e86e8: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2e86e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2e86ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e86ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2e86f0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e86f4: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2e86f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e86f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e86f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e86fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e86fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e8700: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e8700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e8704: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e8704u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e8708: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e8708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e870c: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x2E870Cu;
    {
        const bool branch_taken_0x2e870c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E870Cu;
        // 0x2e8710: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e870c) {
            ctx->pc = 0x2E89D0u;
            goto label_2e89d0;
        }
    }
    ctx->pc = 0x2E8714u;
label_2e8714:
    // 0x2e8714: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2e8714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2e8718: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2e8718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e871c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e8720: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2e8720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e8724: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x2e8724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x2e8728: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e8728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e872c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2e872cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e8730: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2e8730u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e8734: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2e8734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2e8738: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E8738u;
    {
        const bool branch_taken_0x2e8738 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8738u;
        // 0x2e873c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8738) {
            ctx->pc = 0x2E8758u;
            goto label_2e8758;
        }
    }
    ctx->pc = 0x2E8740u;
    // 0x2e8740: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e8740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e8744: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E8744u;
    SET_GPR_U32(ctx, 31, 0x2E874Cu);
    ctx->pc = 0x2E8748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8744u;
    // 0x2e8748: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E8744u, 0x2E874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E874Cu;
label_2e874c:
    // 0x2e874c: 0x144000f4  bnez        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x2E874Cu;
    {
        const bool branch_taken_0x2e874c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E874Cu;
        // 0x2e8750: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e874c) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E8754u;
    // 0x2e8754: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x2e8754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_2e8758:
    // 0x2e8758: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e8758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e875c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e875cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8760: 0x2442be30  addiu       $v0, $v0, -0x41D0
    ctx->pc = 0x2e8760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950448));
    // 0x2e8764: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2e8764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2e8768: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e8768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2e876c: 0x2659821  addu        $s3, $s3, $a1
    ctx->pc = 0x2e876cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2e8770: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e8770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e8774: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2e8774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e8778: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e8778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e877c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e877cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e8780: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e8780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e8784: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e8784u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e8788: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e8788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e878c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E878Cu;
    {
        const bool branch_taken_0x2e878c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E878Cu;
        // 0x2e8790: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e878c) {
            ctx->pc = 0x2E87A8u;
            goto label_2e87a8;
        }
    }
    ctx->pc = 0x2E8794u;
    // 0x2e8794: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e8794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e8798: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E8798u;
    SET_GPR_U32(ctx, 31, 0x2E87A0u);
    ctx->pc = 0x2E879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8798u;
    // 0x2e879c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E8798u, 0x2E87A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E87A0u;
label_2e87a0:
    // 0x2e87a0: 0x144000df  bnez        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x2E87A0u;
    {
        const bool branch_taken_0x2e87a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E87A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87A0u;
        // 0x2e87a4: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87a0) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E87A8u;
label_2e87a8:
    // 0x2e87a8: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x2e87a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x2e87ac: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2e87acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2e87b0: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2e87b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2e87b4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2e87b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e87b8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e87b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e87bc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2e87bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e87c0: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x2e87c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2e87c4: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x2e87c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x2e87c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2e87c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e87cc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e87ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e87d0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2e87d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e87d4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2e87d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e87d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e87d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e87dc: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2e87dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2e87e0: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x2e87e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e87e4: 0x14600081  bnez        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x2E87E4u;
    {
        const bool branch_taken_0x2e87e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E87E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87E4u;
        // 0x2e87e8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87e4) {
            ctx->pc = 0x2E89ECu;
            goto label_2e89ec;
        }
    }
    ctx->pc = 0x2E87ECu;
    // 0x2e87ec: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x2E87ECu;
    {
        const bool branch_taken_0x2e87ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E87F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87ECu;
        // 0x2e87f0: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87ec) {
            ctx->pc = 0x2E89DCu;
            goto label_2e89dc;
        }
    }
    ctx->pc = 0x2E87F4u;
label_2e87f4:
    // 0x2e87f4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2e87f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e87f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E87F8u;
    {
        const bool branch_taken_0x2e87f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E87FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87F8u;
        // 0x2e87fc: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87f8) {
            ctx->pc = 0x2E8808u;
            goto label_2e8808;
        }
    }
    ctx->pc = 0x2E8800u;
    // 0x2e8800: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2E8800u;
    {
        const bool branch_taken_0x2e8800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8800u;
        // 0x2e8804: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8800) {
            ctx->pc = 0x2E8960u;
            goto label_2e8960;
        }
    }
    ctx->pc = 0x2E8808u;
label_2e8808:
    // 0x2e8808: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x2e8808u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e880c: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x2e880cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2e8810: 0xa3a201c1  sb          $v0, 0x1C1($sp)
    ctx->pc = 0x2e8810u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e8814: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e8814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8818: 0xa3a401c0  sb          $a0, 0x1C0($sp)
    ctx->pc = 0x2e8818u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e881c: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x2e881cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2e8820: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2e8820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2e8824: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e8824u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e8828: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e8828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2e882c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e882cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e8830: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2e8830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8834: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e8834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e8838: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e8838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e883c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2e883cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2e8840: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e8840u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e8844: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e8844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e8848: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8848u;
    {
        const bool branch_taken_0x2e8848 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8848u;
        // 0x2e884c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8848) {
            ctx->pc = 0x2E8864u;
            goto label_2e8864;
        }
    }
    ctx->pc = 0x2E8850u;
    // 0x2e8850: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e8850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e8854: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E8854u;
    SET_GPR_U32(ctx, 31, 0x2E885Cu);
    ctx->pc = 0x2E8858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8854u;
    // 0x2e8858: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E8854u, 0x2E885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E885Cu;
label_2e885c:
    // 0x2e885c: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x2E885Cu;
    {
        const bool branch_taken_0x2e885c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E885Cu;
        // 0x2e8860: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e885c) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E8864u;
label_2e8864:
    // 0x2e8864: 0xdfa40200  ld          $a0, 0x200($sp)
    ctx->pc = 0x2e8864u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2e8868: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2E8868u;
    SET_GPR_U32(ctx, 31, 0x2E8870u);
    ctx->pc = 0x2E886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8868u;
    // 0x2e886c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2E8868u, 0x2E8870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8870u;
label_2e8870:
    // 0x2e8870: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E8870u;
    {
        const bool branch_taken_0x2e8870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8870u;
        // 0x2e8874: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8870) {
            ctx->pc = 0x2E88B8u;
            goto label_2e88b8;
        }
    }
    ctx->pc = 0x2E8878u;
    // 0x2e8878: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2e8878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2e887c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e887cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e8880: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e8880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e8884: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2e8884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e8888: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e8888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e888c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2e888cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e8890: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2e8890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2e8894: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e8894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e8898: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e8898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e889c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e889cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e88a0: 0x28650008  slti        $a1, $v1, 0x8
    ctx->pc = 0x2e88a0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e88a4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2e88a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2e88a8: 0x14a0003e  bnez        $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2E88A8u;
    {
        const bool branch_taken_0x2e88a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E88ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88A8u;
        // 0x2e88ac: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88a8) {
            ctx->pc = 0x2E89A4u;
            goto label_2e89a4;
        }
    }
    ctx->pc = 0x2E88B0u;
    // 0x2e88b0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2E88B0u;
    {
        const bool branch_taken_0x2e88b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E88B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88B0u;
        // 0x2e88b4: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88b0) {
            ctx->pc = 0x2E8994u;
            goto label_2e8994;
        }
    }
    ctx->pc = 0x2E88B8u;
label_2e88b8:
    // 0x2e88b8: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2e88b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e88bc: 0x1a000039  blez        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2E88BCu;
    {
        const bool branch_taken_0x2e88bc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E88C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88BCu;
        // 0x2e88c0: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88bc) {
            ctx->pc = 0x2E89A4u;
            goto label_2e89a4;
        }
    }
    ctx->pc = 0x2E88C4u;
    // 0x2e88c4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E88C4u;
    {
        const bool branch_taken_0x2e88c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E88C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88C4u;
        // 0x2e88c8: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88c4) {
            ctx->pc = 0x2E8930u;
            goto label_2e8930;
        }
    }
    ctx->pc = 0x2E88CCu;
    // 0x2e88cc: 0x0  nop
    ctx->pc = 0x2e88ccu;
    // NOP
label_2e88d0:
    // 0x2e88d0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e88d4: 0x26c4bdb0  addiu       $a0, $s6, -0x4250
    ctx->pc = 0x2e88d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950320));
    // 0x2e88d8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2e88d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2e88dc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e88dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e88e0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2e88e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e88e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e88e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e88e8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e88e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e88ec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2e88ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e88f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e88f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e88f4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e88f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e88f8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e88f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e88fc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E88FCu;
    {
        const bool branch_taken_0x2e88fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88FCu;
        // 0x2e8900: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88fc) {
            ctx->pc = 0x2E8918u;
            goto label_2e8918;
        }
    }
    ctx->pc = 0x2E8904u;
    // 0x2e8904: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e8904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e8908: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E8908u;
    SET_GPR_U32(ctx, 31, 0x2E8910u);
    ctx->pc = 0x2E890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8908u;
    // 0x2e890c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E8908u, 0x2E8910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8910u;
label_2e8910:
    // 0x2e8910: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x2E8910u;
    {
        const bool branch_taken_0x2e8910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8910u;
        // 0x2e8914: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8910) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E8918u;
label_2e8918:
    // 0x2e8918: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2e8918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2e891c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2e891cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2e8920: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2E8920u;
    {
        const bool branch_taken_0x2e8920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8920u;
        // 0x2e8924: 0x26c2bdb0  addiu       $v0, $s6, -0x4250 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8920) {
            ctx->pc = 0x2E88D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e88d0;
        }
    }
    ctx->pc = 0x2E8928u;
    // 0x2e8928: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8928u;
    {
        const bool branch_taken_0x2e8928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8928u;
        // 0x2e892c: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8928) {
            ctx->pc = 0x2E8938u;
            goto label_2e8938;
        }
    }
    ctx->pc = 0x2E8930u;
label_2e8930:
    // 0x2e8930: 0x26c2bdb0  addiu       $v0, $s6, -0x4250
    ctx->pc = 0x2e8930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950320));
    // 0x2e8934: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2e8934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2e8938:
    // 0x2e8938: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e8938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2e893c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e893cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e8940: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2e8940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e8944: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e8944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e8948: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e8948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e894c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2e894cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e8950: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e8950u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e8954: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e8954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e8958: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E8958u;
    {
        const bool branch_taken_0x2e8958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8958u;
        // 0x2e895c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8958) {
            ctx->pc = 0x2E8988u;
            goto label_2e8988;
        }
    }
    ctx->pc = 0x2E8960u;
label_2e8960:
    // 0x2e8960: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2e8960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2e8964: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e8964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e8968: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2e8968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e896c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e8970: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2e8970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e8974: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e8974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e8978: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e8978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e897c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2e897cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2e8980: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2e8980u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e8984: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2e8984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_2e8988:
    // 0x2e8988: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E8988u;
    {
        const bool branch_taken_0x2e8988 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8988u;
        // 0x2e898c: 0x8fa40208  lw          $a0, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8988) {
            ctx->pc = 0x2E89A8u;
            goto label_2e89a8;
        }
    }
    ctx->pc = 0x2E8990u;
    // 0x2e8990: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e8990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2e8994:
    // 0x2e8994: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E8994u;
    SET_GPR_U32(ctx, 31, 0x2E899Cu);
    ctx->pc = 0x2E8998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8994u;
    // 0x2e8998: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E8994u, 0x2E899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E899Cu;
label_2e899c:
    // 0x2e899c: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x2E899Cu;
    {
        const bool branch_taken_0x2e899c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E899Cu;
        // 0x2e89a0: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e899c) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E89A4u;
label_2e89a4:
    // 0x2e89a4: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x2e89a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_2e89a8:
    // 0x2e89a8: 0xae3d0000  sw          $sp, 0x0($s1)
    ctx->pc = 0x2e89a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 29));
    // 0x2e89ac: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x2e89acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x2e89b0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2e89b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e89b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e89b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e89b8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2e89b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e89bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2e89c0:
    // 0x2e89c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e89c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e89c4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2e89c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2e89c8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2e89c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e89cc: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2e89ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_2e89d0:
    // 0x2e89d0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E89D0u;
    {
        const bool branch_taken_0x2e89d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E89D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89D0u;
        // 0x2e89d4: 0x33c20004  andi        $v0, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e89d0) {
            ctx->pc = 0x2E89F0u;
            goto label_2e89f0;
        }
    }
    ctx->pc = 0x2E89D8u;
    // 0x2e89d8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e89d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2e89dc:
    // 0x2e89dc: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E89DCu;
    SET_GPR_U32(ctx, 31, 0x2E89E4u);
    ctx->pc = 0x2E89E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E89DCu;
    // 0x2e89e0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E89DCu, 0x2E89E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E89E4u;
label_2e89e4:
    // 0x2e89e4: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2E89E4u;
    {
        const bool branch_taken_0x2e89e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E89E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89E4u;
        // 0x2e89e8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e89e4) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E89ECu;
label_2e89ec:
    // 0x2e89ec: 0x33c20004  andi        $v0, $fp, 0x4
    ctx->pc = 0x2e89ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
label_2e89f0:
    // 0x2e89f0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2E89F0u;
    {
        const bool branch_taken_0x2e89f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E89F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89F0u;
        // 0x2e89f4: 0x8fa501f4  lw          $a1, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e89f0) {
            ctx->pc = 0x2E8AB8u;
            goto label_2e8ab8;
        }
    }
    ctx->pc = 0x2E89F8u;
    // 0x2e89f8: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x2e89f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2e89fc: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x2e89fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2e8a00: 0x1a00002d  blez        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2E8A00u;
    {
        const bool branch_taken_0x2e8a00 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E8A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A00u;
        // 0x2e8a04: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a00) {
            ctx->pc = 0x2E8AB8u;
            goto label_2e8ab8;
        }
    }
    ctx->pc = 0x2E8A08u;
    // 0x2e8a08: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E8A08u;
    {
        const bool branch_taken_0x2e8a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A08u;
        // 0x2e8a0c: 0x3c06003b  lui         $a2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a08) {
            ctx->pc = 0x2E8A78u;
            goto label_2e8a78;
        }
    }
    ctx->pc = 0x2E8A10u;
label_2e8a10:
    // 0x2e8a10: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e8a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e8a14: 0x24c4bda0  addiu       $a0, $a2, -0x4260
    ctx->pc = 0x2e8a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950304));
    // 0x2e8a18: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2e8a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2e8a1c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e8a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e8a20: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2e8a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2e8a24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e8a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e8a28: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e8a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e8a2c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2e8a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e8a30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e8a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e8a34: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e8a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e8a38: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e8a38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e8a3c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E8A3Cu;
    {
        const bool branch_taken_0x2e8a3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A3Cu;
        // 0x2e8a40: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a3c) {
            ctx->pc = 0x2E8A60u;
            goto label_2e8a60;
        }
    }
    ctx->pc = 0x2E8A44u;
    // 0x2e8a44: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e8a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e8a48: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2e8a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e8a4c: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E8A4Cu;
    SET_GPR_U32(ctx, 31, 0x2E8A54u);
    ctx->pc = 0x2E8A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8A4Cu;
    // 0x2e8a50: 0x7fa60220  sq          $a2, 0x220($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E8A4Cu, 0x2E8A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8A54u;
label_2e8a54:
    // 0x2e8a54: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2E8A54u;
    {
        const bool branch_taken_0x2e8a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A54u;
        // 0x2e8a58: 0x7ba60220  lq          $a2, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a54) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E8A5Cu;
    // 0x2e8a5c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2e8a5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e8a60:
    // 0x2e8a60: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2e8a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2e8a64: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2e8a64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2e8a68: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2E8A68u;
    {
        const bool branch_taken_0x2e8a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A68u;
        // 0x2e8a6c: 0x24c2bda0  addiu       $v0, $a2, -0x4260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a68) {
            ctx->pc = 0x2E8A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8a10;
        }
    }
    ctx->pc = 0x2E8A70u;
    // 0x2e8a70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8A70u;
    {
        const bool branch_taken_0x2e8a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A70u;
        // 0x2e8a74: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a70) {
            ctx->pc = 0x2E8A80u;
            goto label_2e8a80;
        }
    }
    ctx->pc = 0x2E8A78u;
label_2e8a78:
    // 0x2e8a78: 0x24c2bda0  addiu       $v0, $a2, -0x4260
    ctx->pc = 0x2e8a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950304));
    // 0x2e8a7c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2e8a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2e8a80:
    // 0x2e8a80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2e8a84: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e8a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e8a88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e8a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e8a8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e8a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e8a90: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2e8a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e8a94: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e8a94u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e8a98: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e8a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e8a9c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8A9Cu;
    {
        const bool branch_taken_0x2e8a9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A9Cu;
        // 0x2e8aa0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a9c) {
            ctx->pc = 0x2E8AB8u;
            goto label_2e8ab8;
        }
    }
    ctx->pc = 0x2E8AA4u;
    // 0x2e8aa4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e8aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e8aa8: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E8AA8u;
    SET_GPR_U32(ctx, 31, 0x2E8AB0u);
    ctx->pc = 0x2E8AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8AA8u;
    // 0x2e8aac: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E8AA8u, 0x2E8AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8AB0u;
label_2e8ab0:
    // 0x2e8ab0: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E8AB0u;
    {
        const bool branch_taken_0x2e8ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AB0u;
        // 0x2e8ab4: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ab0) {
            ctx->pc = 0x2E8B24u;
            goto label_2e8b24;
        }
    }
    ctx->pc = 0x2E8AB8u;
label_2e8ab8:
    // 0x2e8ab8: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2e8ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2e8abc: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x2e8abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x2e8ac0: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x2e8ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2e8ac4: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2e8ac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2e8ac8: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x2e8ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2e8acc: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x2e8accu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x2e8ad0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e8ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e8ad4: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2e8ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2e8ad8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8AD8u;
    {
        const bool branch_taken_0x2e8ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AD8u;
        // 0x2e8adc: 0xafa601f0  sw          $a2, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ad8) {
            ctx->pc = 0x2E8AF4u;
            goto label_2e8af4;
        }
    }
    ctx->pc = 0x2E8AE0u;
    // 0x2e8ae0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2e8ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2e8ae4: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E8AE4u;
    SET_GPR_U32(ctx, 31, 0x2E8AECu);
    ctx->pc = 0x2E8AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8AE4u;
    // 0x2e8ae8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E8AE4u, 0x2E8AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8AECu;
label_2e8aec:
    // 0x2e8aec: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E8AECu;
    {
        const bool branch_taken_0x2e8aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AECu;
        // 0x2e8af0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8aec) {
            ctx->pc = 0x2E8B24u;
            goto label_2e8b24;
        }
    }
    ctx->pc = 0x2E8AF4u;
label_2e8af4:
    // 0x2e8af4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2e8af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2e8af8: 0x1000fb0d  b           . + 4 + (-0x4F3 << 2)
    ctx->pc = 0x2E8AF8u;
    {
        const bool branch_taken_0x2e8af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AF8u;
        // 0x2e8afc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8af8) {
            ctx->pc = 0x2E7730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7730;
        }
    }
    ctx->pc = 0x2E8B00u;
label_2e8b00:
    // 0x2e8b00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e8b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e8b04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8B04u;
    {
        const bool branch_taken_0x2e8b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B04u;
        // 0x2e8b08: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b04) {
            ctx->pc = 0x2E8B1Cu;
            goto label_2e8b1c;
        }
    }
    ctx->pc = 0x2E8B0Cu;
    // 0x2e8b0c: 0xc0b9d36  jal         func_2E74D8
    ctx->pc = 0x2E8B0Cu;
    SET_GPR_U32(ctx, 31, 0x2E8B14u);
    ctx->pc = 0x2E8B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B0Cu;
    // 0x2e8b10: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E74D8u, 0x2E8B0Cu, 0x2E8B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8B14u;
label_2e8b14:
    // 0x2e8b14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8B14u;
    {
        const bool branch_taken_0x2e8b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B14u;
        // 0x2e8b18: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b14) {
            ctx->pc = 0x2E8B24u;
            goto label_2e8b24;
        }
    }
    ctx->pc = 0x2E8B1Cu;
label_2e8b1c:
    // 0x2e8b1c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2e8b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_2e8b20:
    // 0x2e8b20: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x2e8b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2e8b24:
    // 0x2e8b24: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x2e8b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2e8b28: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x2e8b28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e8b2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e8b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e8b30: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2e8b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2e8b34: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x2e8b34u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2e8b38:
    // 0x2e8b38: 0xdfbf02c0  ld          $ra, 0x2C0($sp)
    ctx->pc = 0x2e8b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_2e8b3c:
    // 0x2e8b3c: 0xdfbe02b0  ld          $fp, 0x2B0($sp)
    ctx->pc = 0x2e8b3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2e8b40: 0xdfb702a0  ld          $s7, 0x2A0($sp)
    ctx->pc = 0x2e8b40u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2e8b44: 0xdfb60290  ld          $s6, 0x290($sp)
    ctx->pc = 0x2e8b44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2e8b48: 0xdfb50280  ld          $s5, 0x280($sp)
    ctx->pc = 0x2e8b48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2e8b4c: 0xdfb40270  ld          $s4, 0x270($sp)
    ctx->pc = 0x2e8b4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2e8b50: 0xdfb30260  ld          $s3, 0x260($sp)
    ctx->pc = 0x2e8b50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2e8b54: 0xdfb20250  ld          $s2, 0x250($sp)
    ctx->pc = 0x2e8b54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2e8b58: 0xdfb10240  ld          $s1, 0x240($sp)
    ctx->pc = 0x2e8b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2e8b5c: 0xdfb00230  ld          $s0, 0x230($sp)
    ctx->pc = 0x2e8b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2e8b60: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B60u;
        // 0x2e8b64: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8B68u;
}
