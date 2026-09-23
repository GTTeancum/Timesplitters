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

// Function: mmenterdesc_pageTick
// Address: 0x24ccb0 - 0x24ce04
void mmenterdesc_pageTick_0x24ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmenterdesc_pageTick_0x24ccb0");
#endif

    switch (ctx->pc) {
        case 0x24ccf8u: goto label_24ccf8;
        case 0x24cd28u: goto label_24cd28;
        case 0x24cd30u: goto label_24cd30;
        case 0x24cd68u: goto label_24cd68;
        case 0x24cd70u: goto label_24cd70;
        case 0x24cda4u: goto label_24cda4;
        default: break;
    }

    ctx->pc = 0x24ccb0u;

    // 0x24ccb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24ccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24ccb4: 0x9383b848  lbu         $v1, -0x47B8($gp)
    ctx->pc = 0x24ccb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948936)));
    // 0x24ccb8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24ccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24ccbc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24ccbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24ccc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24ccc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ccc4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24CCC4u;
    {
        const bool branch_taken_0x24ccc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CCC4u;
        // 0x24ccc8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ccc4) {
            ctx->pc = 0x24CCE0u;
            goto label_24cce0;
        }
    }
    ctx->pc = 0x24CCCCu;
    // 0x24cccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ccd0: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x24CCD0u;
    {
        const bool branch_taken_0x24ccd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CCD0u;
        // 0x24ccd4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ccd0) {
            ctx->pc = 0x24CD5Cu;
            goto label_24cd5c;
        }
    }
    ctx->pc = 0x24CCD8u;
    // 0x24ccd8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x24CCD8u;
    {
        const bool branch_taken_0x24ccd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CCD8u;
        // 0x24ccdc: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ccd8) {
            ctx->pc = 0x24CDF8u;
            goto label_24cdf8;
        }
    }
    ctx->pc = 0x24CCE0u;
label_24cce0:
    // 0x24cce0: 0x3c1001fc  lui         $s0, 0x1FC
    ctx->pc = 0x24cce0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
    // 0x24cce4: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x24cce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x24cce8: 0x26103e00  addiu       $s0, $s0, 0x3E00
    ctx->pc = 0x24cce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15872));
    // 0x24ccec: 0x24a56608  addiu       $a1, $a1, 0x6608
    ctx->pc = 0x24ccecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26120));
    // 0x24ccf0: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x24CCF0u;
    SET_GPR_U32(ctx, 31, 0x24CCF8u);
    ctx->pc = 0x24CCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CCF0u;
    // 0x24ccf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x24CCF0u, 0x24CCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CCF8u;
label_24ccf8:
    // 0x24ccf8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x24ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x24ccfc: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x24ccfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x24cd00: 0x244399f0  addiu       $v1, $v0, -0x6610
    ctx->pc = 0x24cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x24cd04: 0x8c4999f0  lw          $t1, -0x6610($v0)
    ctx->pc = 0x24cd04u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3299F0u));
    // 0x24cd08: 0x8c6a0014  lw          $t2, 0x14($v1)
    ctx->pc = 0x24cd08u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x329A04u));
    // 0x24cd0c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x24cd0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24cd10: 0x24080140  addiu       $t0, $zero, 0x140
    ctx->pc = 0x24cd10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x24cd14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24cd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cd18: 0x252900a0  addiu       $t1, $t1, 0xA0
    ctx->pc = 0x24cd18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 160));
    // 0x24cd1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24cd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cd20: 0xc08bf66  jal         func_22FD98
    ctx->pc = 0x24CD20u;
    SET_GPR_U32(ctx, 31, 0x24CD28u);
    ctx->pc = 0x24CD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD20u;
    // 0x24cd24: 0x254a0028  addiu       $t2, $t2, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FD98u, 0x24CD20u, 0x24CD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD28u;
label_24cd28:
    // 0x24cd28: 0xc08bfb6  jal         func_22FED8
    ctx->pc = 0x24CD28u;
    SET_GPR_U32(ctx, 31, 0x24CD30u);
    ctx->pc = 0x24CD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD28u;
    // 0x24cd2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FED8u, 0x24CD28u, 0x24CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD30u;
label_24cd30:
    // 0x24cd30: 0x8f849354  lw          $a0, -0x6CAC($gp)
    ctx->pc = 0x24cd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24cd34: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x24cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x24cd38: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x24cd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x24cd3c: 0x8f86a034  lw          $a2, -0x5FCC($gp)
    ctx->pc = 0x24cd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x24cd40: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x24cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24cd44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24cd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24cd48: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24cd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24cd4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x24cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24cd50: 0x8c43074c  lw          $v1, 0x74C($v0)
    ctx->pc = 0x24cd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1868)));
    // 0x24cd54: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x24cd54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x24cd58: 0xa385b848  sb          $a1, -0x47B8($gp)
    ctx->pc = 0x24cd58u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 5));
label_24cd5c:
    // 0x24cd5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24cd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cd60: 0xc08be08  jal         func_22F820
    ctx->pc = 0x24CD60u;
    SET_GPR_U32(ctx, 31, 0x24CD68u);
    ctx->pc = 0x24CD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD60u;
    // 0x24cd64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F820u, 0x24CD60u, 0x24CD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD68u;
label_24cd68:
    // 0x24cd68: 0xc08bfb6  jal         func_22FED8
    ctx->pc = 0x24CD68u;
    SET_GPR_U32(ctx, 31, 0x24CD70u);
    ctx->pc = 0x24CD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD68u;
    // 0x24cd6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FED8u, 0x24CD68u, 0x24CD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD70u;
label_24cd70:
    // 0x24cd70: 0x8f83a034  lw          $v1, -0x5FCC($gp)
    ctx->pc = 0x24cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x24cd74: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x24cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x24cd78: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x24CD78u;
    {
        const bool branch_taken_0x24cd78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cd78) {
            ctx->pc = 0x24CD7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CD78u;
            // 0x24cd7c: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CD94u;
            goto label_24cd94;
        }
    }
    ctx->pc = 0x24CD80u;
    // 0x24cd80: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x24cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x24cd84: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x24CD84u;
    {
        const bool branch_taken_0x24cd84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD84u;
        // 0x24cd88: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd84) {
            ctx->pc = 0x24CDF0u;
            goto label_24cdf0;
        }
    }
    ctx->pc = 0x24CD8Cu;
    // 0x24cd8c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x24CD8Cu;
    {
        const bool branch_taken_0x24cd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD8Cu;
        // 0x24cd90: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd8c) {
            ctx->pc = 0x24CDE8u;
            goto label_24cde8;
        }
    }
    ctx->pc = 0x24CD94u;
label_24cd94:
    // 0x24cd94: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x24cd94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x24cd98: 0x24846608  addiu       $a0, $a0, 0x6608
    ctx->pc = 0x24cd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26120));
    // 0x24cd9c: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x24CD9Cu;
    SET_GPR_U32(ctx, 31, 0x24CDA4u);
    ctx->pc = 0x24CDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD9Cu;
    // 0x24cda0: 0x24a53e00  addiu       $a1, $a1, 0x3E00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x24CD9Cu, 0x24CDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CDA4u;
label_24cda4:
    // 0x24cda4: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x24cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x24cda8: 0x906265e8  lbu         $v0, 0x65E8($v1)
    ctx->pc = 0x24cda8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3565E8u));
    // 0x24cdac: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x24CDACu;
    {
        const bool branch_taken_0x24cdac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cdac) {
            ctx->pc = 0x24CDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CDACu;
            // 0x24cdb0: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CDE4u;
            goto label_24cde4;
        }
    }
    ctx->pc = 0x24CDB4u;
    // 0x24cdb4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24cdb8: 0x244720f0  addiu       $a3, $v0, 0x20F0
    ctx->pc = 0x24cdb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 8432));
    // 0x24cdbc: 0x246665e8  addiu       $a2, $v1, 0x65E8
    ctx->pc = 0x24cdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 26088));
    // 0x24cdc0: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x24cdc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x24cdc4: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x24cdc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x24cdc8: 0x88e5000b  lwl         $a1, 0xB($a3)
    ctx->pc = 0x24cdc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x24cdcc: 0x98e50008  lwr         $a1, 0x8($a3)
    ctx->pc = 0x24cdccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x24cdd0: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x24cdd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24cdd4: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x24cdd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24cdd8: 0xa8c5000b  swl         $a1, 0xB($a2)
    ctx->pc = 0x24cdd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24cddc: 0xb8c50008  swr         $a1, 0x8($a2)
    ctx->pc = 0x24cddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24cde0: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x24cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_24cde4:
    // 0x24cde4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x24cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_24cde8:
    // 0x24cde8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24cdec: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x24cdecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_24cdf0:
    // 0x24cdf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24cdf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24cdf4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24cdf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24cdf8:
    // 0x24cdf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24cdf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cdfc: 0x3e00008  jr          $ra
    ctx->pc = 0x24CDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDFCu;
        // 0x24ce00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CE04u;
}
