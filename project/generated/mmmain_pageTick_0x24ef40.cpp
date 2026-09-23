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

// Function: mmmain_pageTick
// Address: 0x24ef40 - 0x24f204
void mmmain_pageTick_0x24ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmmain_pageTick_0x24ef40");
#endif

    switch (ctx->pc) {
        case 0x24ef68u: goto label_24ef68;
        case 0x24f018u: goto label_24f018;
        case 0x24f044u: goto label_24f044;
        case 0x24f094u: goto label_24f094;
        case 0x24f0b8u: goto label_24f0b8;
        case 0x24f104u: goto label_24f104;
        case 0x24f138u: goto label_24f138;
        case 0x24f148u: goto label_24f148;
        case 0x24f160u: goto label_24f160;
        case 0x24f1bcu: goto label_24f1bc;
        case 0x24f1dcu: goto label_24f1dc;
        case 0x24f1e8u: goto label_24f1e8;
        default: break;
    }

    ctx->pc = 0x24ef40u;

    // 0x24ef40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24ef40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24ef44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24ef44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24ef48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24ef48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24ef4c: 0x3c120035  lui         $s2, 0x35
    ctx->pc = 0x24ef4cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53 << 16));
    // 0x24ef50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24ef50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24ef54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24ef54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ef58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24ef58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24ef5c: 0x26446d88  addiu       $a0, $s2, 0x6D88
    ctx->pc = 0x24ef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28040));
    // 0x24ef60: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x24EF60u;
    SET_GPR_U32(ctx, 31, 0x24EF68u);
    ctx->pc = 0x24EF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EF60u;
    // 0x24ef64: 0x96250004  lhu         $a1, 0x4($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x24EF60u, 0x24EF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EF68u;
label_24ef68:
    // 0x24ef68: 0x8f83a0d8  lw          $v1, -0x5F28($gp)
    ctx->pc = 0x24ef68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24ef6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24ef6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ef70: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x24ef70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ef74: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x24ef74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x24ef78: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24EF78u;
    {
        const bool branch_taken_0x24ef78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF78u;
        // 0x24ef7c: 0x8f82a128  lw          $v0, -0x5ED8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef78) {
            ctx->pc = 0x24EFA4u;
            goto label_24efa4;
        }
    }
    ctx->pc = 0x24EF80u;
    // 0x24ef80: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x24ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24ef84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24ef84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24ef88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24ef88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ef8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24ef8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ef90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ef90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ef94: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x24ef94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x24ef98: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x24ef98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x24ef9c: 0x8093b84  j           func_24EE10
    ctx->pc = 0x24EF9Cu;
    ctx->pc = 0x24EFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EF9Cu;
    // 0x24efa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EE10u;
    exitmapmaker_0x24ee10(rdram, ctx, runtime); return;
    ctx->pc = 0x24EFA4u;
label_24efa4:
    // 0x24efa4: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24EFA4u;
    {
        const bool branch_taken_0x24efa4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EFA4u;
        // 0x24efa8: 0x3c060035  lui         $a2, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24efa4) {
            ctx->pc = 0x24EFC4u;
            goto label_24efc4;
        }
    }
    ctx->pc = 0x24EFACu;
    // 0x24efac: 0x24c26d98  addiu       $v0, $a2, 0x6D98
    ctx->pc = 0x24efacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 28056));
    // 0x24efb0: 0x9443002a  lhu         $v1, 0x2A($v0)
    ctx->pc = 0x24efb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x24efb4: 0x944400ea  lhu         $a0, 0xEA($v0)
    ctx->pc = 0x24efb4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 234)));
    // 0x24efb8: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x24efb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x24efbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24EFBCu;
    {
        const bool branch_taken_0x24efbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EFBCu;
        // 0x24efc0: 0x3084ffbf  andi        $a0, $a0, 0xFFBF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65471);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24efbc) {
            ctx->pc = 0x24EFD8u;
            goto label_24efd8;
        }
    }
    ctx->pc = 0x24EFC4u;
label_24efc4:
    // 0x24efc4: 0x24c26d98  addiu       $v0, $a2, 0x6D98
    ctx->pc = 0x24efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 28056));
    // 0x24efc8: 0x9443002a  lhu         $v1, 0x2A($v0)
    ctx->pc = 0x24efc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x24efcc: 0x944400ea  lhu         $a0, 0xEA($v0)
    ctx->pc = 0x24efccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 234)));
    // 0x24efd0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x24efd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x24efd4: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x24efd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
label_24efd8:
    // 0x24efd8: 0xa443002a  sh          $v1, 0x2A($v0)
    ctx->pc = 0x24efd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x24efdc: 0xa44400ea  sh          $a0, 0xEA($v0)
    ctx->pc = 0x24efdcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 234), (uint16_t)GPR_U32(ctx, 4));
    // 0x24efe0: 0x30a20100  andi        $v0, $a1, 0x100
    ctx->pc = 0x24efe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x24efe4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24EFE4u;
    {
        const bool branch_taken_0x24efe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EFE4u;
        // 0x24efe8: 0x24c36d98  addiu       $v1, $a2, 0x6D98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24efe4) {
            ctx->pc = 0x24EFF8u;
            goto label_24eff8;
        }
    }
    ctx->pc = 0x24EFECu;
    // 0x24efec: 0x9462004a  lhu         $v0, 0x4A($v1)
    ctx->pc = 0x24efecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 74)));
    // 0x24eff0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24EFF0u;
    {
        const bool branch_taken_0x24eff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EFF0u;
        // 0x24eff4: 0x3042ffbf  andi        $v0, $v0, 0xFFBF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eff0) {
            ctx->pc = 0x24F000u;
            goto label_24f000;
        }
    }
    ctx->pc = 0x24EFF8u;
label_24eff8:
    // 0x24eff8: 0x9462004a  lhu         $v0, 0x4A($v1)
    ctx->pc = 0x24eff8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 74)));
    // 0x24effc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x24effcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_24f000:
    // 0x24f000: 0xa462004a  sh          $v0, 0x4A($v1)
    ctx->pc = 0x24f000u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 74), (uint16_t)GPR_U32(ctx, 2));
    // 0x24f004: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x24f004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x24f008: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24F008u;
    {
        const bool branch_taken_0x24f008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f008) {
            ctx->pc = 0x24F03Cu;
            goto label_24f03c;
        }
    }
    ctx->pc = 0x24F010u;
    // 0x24f010: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24F010u;
    SET_GPR_U32(ctx, 31, 0x24F018u);
    ctx->pc = 0x24F014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F010u;
    // 0x24f014: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24F010u, 0x24F018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F018u;
label_24f018:
    // 0x24f018: 0x30420910  andi        $v0, $v0, 0x910
    ctx->pc = 0x24f018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2320);
    // 0x24f01c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24F01Cu;
    {
        const bool branch_taken_0x24f01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F01Cu;
        // 0x24f020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f01c) {
            ctx->pc = 0x24F03Cu;
            goto label_24f03c;
        }
    }
    ctx->pc = 0x24F024u;
    // 0x24f024: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24f024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f028: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24f028u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f02c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24f02cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24f030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f034: 0x8092e82  j           func_24BA08
    ctx->pc = 0x24F034u;
    ctx->pc = 0x24F038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F034u;
    // 0x24f038: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA08u;
    mmExitMenu_0x24ba08(rdram, ctx, runtime); return;
    ctx->pc = 0x24F03Cu;
label_24f03c:
    // 0x24f03c: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24F03Cu;
    SET_GPR_U32(ctx, 31, 0x24F044u);
    ctx->pc = 0x24F040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F03Cu;
    // 0x24f040: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24F03Cu, 0x24F044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F044u;
label_24f044:
    // 0x24f044: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x24f044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x24f048: 0x50400061  beql        $v0, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x24F048u;
    {
        const bool branch_taken_0x24f048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f048) {
            ctx->pc = 0x24F04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F048u;
            // 0x24f04c: 0x26506d88  addiu       $s0, $s2, 0x6D88 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 28040));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F1D0u;
            goto label_24f1d0;
        }
    }
    ctx->pc = 0x24F050u;
    // 0x24f050: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x24f050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x24f054: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x24f054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x24f058: 0x5440005d  bnel        $v0, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x24F058u;
    {
        const bool branch_taken_0x24f058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f058) {
            ctx->pc = 0x24F05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F058u;
            // 0x24f05c: 0x26506d88  addiu       $s0, $s2, 0x6D88 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 28040));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F1D0u;
            goto label_24f1d0;
        }
    }
    ctx->pc = 0x24F060u;
    // 0x24f060: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x24f060u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24f064: 0x2444fffd  addiu       $a0, $v0, -0x3
    ctx->pc = 0x24f064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x24f068: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x24f068u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x24f06c: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x24F06Cu;
    {
        const bool branch_taken_0x24f06c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F06Cu;
        // 0x24f070: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f06c) {
            ctx->pc = 0x24F1CCu;
            goto label_24f1cc;
        }
    }
    ctx->pc = 0x24F074u;
    // 0x24f074: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x24f074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24f078: 0x24422220  addiu       $v0, $v0, 0x2220
    ctx->pc = 0x24f078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8736));
    // 0x24f07c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24f07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f080: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24f080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f084: 0x800008  jr          $a0
    ctx->pc = 0x24F084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24F08Cu: goto label_24f08c;
            case 0x24F0B0u: goto label_24f0b0;
            case 0x24F0D4u: goto label_24f0d4;
            case 0x24F10Cu: goto label_24f10c;
            case 0x24F140u: goto label_24f140;
            case 0x24F158u: goto label_24f158;
            case 0x24F178u: goto label_24f178;
            case 0x24F1CCu: goto label_24f1cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F084u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24F08Cu;
label_24f08c:
    // 0x24f08c: 0xc0920dc  jal         func_248370
    ctx->pc = 0x24F08Cu;
    SET_GPR_U32(ctx, 31, 0x24F094u);
    ctx->pc = 0x248370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248370u, 0x24F08Cu, 0x24F094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F094u;
label_24f094:
    // 0x24f094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24f094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f098: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24f098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f09c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24f09cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f0a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24f0a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f0a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24f0a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f0a8: 0x8092e82  j           func_24BA08
    ctx->pc = 0x24F0A8u;
    ctx->pc = 0x24F0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F0A8u;
    // 0x24f0ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA08u;
    mmExitMenu_0x24ba08(rdram, ctx, runtime); return;
    ctx->pc = 0x24F0B0u;
label_24f0b0:
    // 0x24f0b0: 0xc09258a  jal         func_249628
    ctx->pc = 0x24F0B0u;
    SET_GPR_U32(ctx, 31, 0x24F0B8u);
    ctx->pc = 0x249628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249628u, 0x24F0B0u, 0x24F0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F0B8u;
label_24f0b8:
    // 0x24f0b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24f0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f0bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24f0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f0c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24f0c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f0c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24f0c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f0c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24f0c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f0cc: 0x8092e82  j           func_24BA08
    ctx->pc = 0x24F0CCu;
    ctx->pc = 0x24F0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F0CCu;
    // 0x24f0d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA08u;
    mmExitMenu_0x24ba08(rdram, ctx, runtime); return;
    ctx->pc = 0x24F0D4u;
label_24f0d4:
    // 0x24f0d4: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x24f0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24f0d8: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x24f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x24f0dc: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x24f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x24f0e0: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x24f0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x24f0e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24f0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24f0e8: 0x3c05647f  lui         $a1, 0x647F
    ctx->pc = 0x24f0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25727 << 16));
    // 0x24f0ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24f0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f0f0: 0x24c6ee98  addiu       $a2, $a2, -0x1168
    ctx->pc = 0x24f0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962840));
    // 0x24f0f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f0f8: 0x34a57f7f  ori         $a1, $a1, 0x7F7F
    ctx->pc = 0x24f0f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32639);
    // 0x24f0fc: 0xc0932a0  jal         func_24CA80
    ctx->pc = 0x24F0FCu;
    SET_GPR_U32(ctx, 31, 0x24F104u);
    ctx->pc = 0x24F100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F0FCu;
    // 0x24f100: 0x8c440f94  lw          $a0, 0xF94($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3988)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA80u, 0x24F0FCu, 0x24F104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F104u;
label_24f104:
    // 0x24f104: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x24F104u;
    {
        const bool branch_taken_0x24f104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F104u;
        // 0x24f108: 0x26506d88  addiu       $s0, $s2, 0x6D88 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 28040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f104) {
            ctx->pc = 0x24F1D0u;
            goto label_24f1d0;
        }
    }
    ctx->pc = 0x24F10Cu;
label_24f10c:
    // 0x24f10c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x24f10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24f110: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x24f110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x24f114: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x24f114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x24f118: 0x3c056464  lui         $a1, 0x6464
    ctx->pc = 0x24f118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25700 << 16));
    // 0x24f11c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24f11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24f120: 0x34a5647f  ori         $a1, $a1, 0x647F
    ctx->pc = 0x24f120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25727);
    // 0x24f124: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24f124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f128: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24f128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f12c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f130: 0xc0932a0  jal         func_24CA80
    ctx->pc = 0x24F130u;
    SET_GPR_U32(ctx, 31, 0x24F138u);
    ctx->pc = 0x24F134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F130u;
    // 0x24f134: 0x8c440f98  lw          $a0, 0xF98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3992)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA80u, 0x24F130u, 0x24F138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F138u;
label_24f138:
    // 0x24f138: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x24F138u;
    {
        const bool branch_taken_0x24f138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F138u;
        // 0x24f13c: 0x26506d88  addiu       $s0, $s2, 0x6D88 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 28040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f138) {
            ctx->pc = 0x24F1D0u;
            goto label_24f1d0;
        }
    }
    ctx->pc = 0x24F140u;
label_24f140:
    // 0x24f140: 0xc094e46  jal         func_253918
    ctx->pc = 0x24F140u;
    SET_GPR_U32(ctx, 31, 0x24F148u);
    ctx->pc = 0x253918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253918u, 0x24F140u, 0x24F148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F148u;
label_24f148:
    // 0x24f148: 0x8f82a0d8  lw          $v0, -0x5F28($gp)
    ctx->pc = 0x24f148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24f14c: 0xa380b848  sb          $zero, -0x47B8($gp)
    ctx->pc = 0x24f14cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 0));
    // 0x24f150: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x24F150u;
    {
        const bool branch_taken_0x24f150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F150u;
        // 0x24f154: 0x34430800  ori         $v1, $v0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f150) {
            ctx->pc = 0x24F1C8u;
            goto label_24f1c8;
        }
    }
    ctx->pc = 0x24F158u;
label_24f158:
    // 0x24f158: 0xc094e46  jal         func_253918
    ctx->pc = 0x24F158u;
    SET_GPR_U32(ctx, 31, 0x24F160u);
    ctx->pc = 0x253918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253918u, 0x24F158u, 0x24F160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F160u;
label_24f160:
    // 0x24f160: 0x8f83a0d8  lw          $v1, -0x5F28($gp)
    ctx->pc = 0x24f160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24f164: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24f164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x24f168: 0x3442f7ff  ori         $v0, $v0, 0xF7FF
    ctx->pc = 0x24f168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63487);
    // 0x24f16c: 0xa380b848  sb          $zero, -0x47B8($gp)
    ctx->pc = 0x24f16cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 0));
    // 0x24f170: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x24F170u;
    {
        const bool branch_taken_0x24f170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F170u;
        // 0x24f174: 0x621824  and         $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f170) {
            ctx->pc = 0x24F1C8u;
            goto label_24f1c8;
        }
    }
    ctx->pc = 0x24F178u;
label_24f178:
    // 0x24f178: 0x8f82a128  lw          $v0, -0x5ED8($gp)
    ctx->pc = 0x24f178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943016)));
    // 0x24f17c: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24F17Cu;
    {
        const bool branch_taken_0x24f17c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F17Cu;
        // 0x24f180: 0x8f83a0d8  lw          $v1, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f17c) {
            ctx->pc = 0x24F1C4u;
            goto label_24f1c4;
        }
    }
    ctx->pc = 0x24F184u;
    // 0x24f184: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x24f184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x24f188: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24F188u;
    {
        const bool branch_taken_0x24f188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F188u;
        // 0x24f18c: 0x3c02002f  lui         $v0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f188) {
            ctx->pc = 0x24F1C4u;
            goto label_24f1c4;
        }
    }
    ctx->pc = 0x24F190u;
    // 0x24f190: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x24f190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24f194: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x24f194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x24f198: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x24f198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x24f19c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24f1a0: 0x3c05647f  lui         $a1, 0x647F
    ctx->pc = 0x24f1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25727 << 16));
    // 0x24f1a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24f1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f1a8: 0x24c6ee50  addiu       $a2, $a2, -0x11B0
    ctx->pc = 0x24f1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962768));
    // 0x24f1ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f1b0: 0x34a57f7f  ori         $a1, $a1, 0x7F7F
    ctx->pc = 0x24f1b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32639);
    // 0x24f1b4: 0xc0932a0  jal         func_24CA80
    ctx->pc = 0x24F1B4u;
    SET_GPR_U32(ctx, 31, 0x24F1BCu);
    ctx->pc = 0x24F1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F1B4u;
    // 0x24f1b8: 0x8c440f9c  lw          $a0, 0xF9C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3996)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA80u, 0x24F1B4u, 0x24F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F1BCu;
label_24f1bc:
    // 0x24f1bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24F1BCu;
    {
        const bool branch_taken_0x24f1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F1BCu;
        // 0x24f1c0: 0x26506d88  addiu       $s0, $s2, 0x6D88 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 28040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f1bc) {
            ctx->pc = 0x24F1D0u;
            goto label_24f1d0;
        }
    }
    ctx->pc = 0x24F1C4u;
label_24f1c4:
    // 0x24f1c4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x24f1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_24f1c8:
    // 0x24f1c8: 0xaf83a0d8  sw          $v1, -0x5F28($gp)
    ctx->pc = 0x24f1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 3));
label_24f1cc:
    // 0x24f1cc: 0x26506d88  addiu       $s0, $s2, 0x6D88
    ctx->pc = 0x24f1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 28040));
label_24f1d0:
    // 0x24f1d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24f1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f1d4: 0xc0930ea  jal         func_24C3A8
    ctx->pc = 0x24F1D4u;
    SET_GPR_U32(ctx, 31, 0x24F1DCu);
    ctx->pc = 0x24F1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F1D4u;
    // 0x24f1d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C3A8u, 0x24F1D4u, 0x24F1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F1DCu;
label_24f1dc:
    // 0x24f1dc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x24f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24f1e0: 0xc09309c  jal         func_24C270
    ctx->pc = 0x24F1E0u;
    SET_GPR_U32(ctx, 31, 0x24F1E8u);
    ctx->pc = 0x24F1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F1E0u;
    // 0x24f1e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C270u, 0x24F1E0u, 0x24F1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F1E8u;
label_24f1e8:
    // 0x24f1e8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x24f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x24f1ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24f1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f1f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24f1f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f1f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24f1f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f1f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24f1f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x24F1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F1FCu;
        // 0x24f200: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F204u;
}
