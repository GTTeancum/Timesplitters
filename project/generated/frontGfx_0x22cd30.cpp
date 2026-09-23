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

// Function: frontGfx
// Address: 0x22cd30 - 0x22ce74
void frontGfx_0x22cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontGfx_0x22cd30");
#endif

    switch (ctx->pc) {
        case 0x22cd30u: goto label_22cd30;
        case 0x22cd34u: goto label_22cd34;
        case 0x22cd38u: goto label_22cd38;
        case 0x22cd3cu: goto label_22cd3c;
        case 0x22cd40u: goto label_22cd40;
        case 0x22cd44u: goto label_22cd44;
        case 0x22cd48u: goto label_22cd48;
        case 0x22cd4cu: goto label_22cd4c;
        case 0x22cd50u: goto label_22cd50;
        case 0x22cd54u: goto label_22cd54;
        case 0x22cd58u: goto label_22cd58;
        case 0x22cd5cu: goto label_22cd5c;
        case 0x22cd60u: goto label_22cd60;
        case 0x22cd64u: goto label_22cd64;
        case 0x22cd68u: goto label_22cd68;
        case 0x22cd6cu: goto label_22cd6c;
        case 0x22cd70u: goto label_22cd70;
        case 0x22cd74u: goto label_22cd74;
        case 0x22cd78u: goto label_22cd78;
        case 0x22cd7cu: goto label_22cd7c;
        case 0x22cd80u: goto label_22cd80;
        case 0x22cd84u: goto label_22cd84;
        case 0x22cd88u: goto label_22cd88;
        case 0x22cd8cu: goto label_22cd8c;
        case 0x22cd90u: goto label_22cd90;
        case 0x22cd94u: goto label_22cd94;
        case 0x22cd98u: goto label_22cd98;
        case 0x22cd9cu: goto label_22cd9c;
        case 0x22cda0u: goto label_22cda0;
        case 0x22cda4u: goto label_22cda4;
        case 0x22cda8u: goto label_22cda8;
        case 0x22cdacu: goto label_22cdac;
        case 0x22cdb0u: goto label_22cdb0;
        case 0x22cdb4u: goto label_22cdb4;
        case 0x22cdb8u: goto label_22cdb8;
        case 0x22cdbcu: goto label_22cdbc;
        case 0x22cdc0u: goto label_22cdc0;
        case 0x22cdc4u: goto label_22cdc4;
        case 0x22cdc8u: goto label_22cdc8;
        case 0x22cdccu: goto label_22cdcc;
        case 0x22cdd0u: goto label_22cdd0;
        case 0x22cdd4u: goto label_22cdd4;
        case 0x22cdd8u: goto label_22cdd8;
        case 0x22cddcu: goto label_22cddc;
        case 0x22cde0u: goto label_22cde0;
        case 0x22cde4u: goto label_22cde4;
        case 0x22cde8u: goto label_22cde8;
        case 0x22cdecu: goto label_22cdec;
        case 0x22cdf0u: goto label_22cdf0;
        case 0x22cdf4u: goto label_22cdf4;
        case 0x22cdf8u: goto label_22cdf8;
        case 0x22cdfcu: goto label_22cdfc;
        case 0x22ce00u: goto label_22ce00;
        case 0x22ce04u: goto label_22ce04;
        case 0x22ce08u: goto label_22ce08;
        case 0x22ce0cu: goto label_22ce0c;
        case 0x22ce10u: goto label_22ce10;
        case 0x22ce14u: goto label_22ce14;
        case 0x22ce18u: goto label_22ce18;
        case 0x22ce1cu: goto label_22ce1c;
        case 0x22ce20u: goto label_22ce20;
        case 0x22ce24u: goto label_22ce24;
        case 0x22ce28u: goto label_22ce28;
        case 0x22ce2cu: goto label_22ce2c;
        case 0x22ce30u: goto label_22ce30;
        case 0x22ce34u: goto label_22ce34;
        case 0x22ce38u: goto label_22ce38;
        case 0x22ce3cu: goto label_22ce3c;
        case 0x22ce40u: goto label_22ce40;
        case 0x22ce44u: goto label_22ce44;
        case 0x22ce48u: goto label_22ce48;
        case 0x22ce4cu: goto label_22ce4c;
        case 0x22ce50u: goto label_22ce50;
        case 0x22ce54u: goto label_22ce54;
        case 0x22ce58u: goto label_22ce58;
        case 0x22ce5cu: goto label_22ce5c;
        case 0x22ce60u: goto label_22ce60;
        case 0x22ce64u: goto label_22ce64;
        case 0x22ce68u: goto label_22ce68;
        case 0x22ce6cu: goto label_22ce6c;
        case 0x22ce70u: goto label_22ce70;
        default: break;
    }

    ctx->pc = 0x22cd30u;

label_22cd30:
    // 0x22cd30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22cd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22cd34:
    // 0x22cd34: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x22cd34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_22cd38:
    // 0x22cd38: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22cd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_22cd3c:
    // 0x22cd3c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22cd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_22cd40:
    // 0x22cd40: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22cd40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22cd44:
    // 0x22cd44: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22cd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_22cd48:
    // 0x22cd48: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22cd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_22cd4c:
    // 0x22cd4c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22cd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_22cd50:
    // 0x22cd50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22cd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22cd54:
    // 0x22cd54: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x22cd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_22cd58:
    // 0x22cd58: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
label_22cd5c:
    if (ctx->pc == 0x22CD5Cu) {
        ctx->pc = 0x22CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD58u;
        // 0x22cd5c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD60u;
        goto label_22cd60;
    }
    ctx->pc = 0x22CD58u;
    {
        const bool branch_taken_0x22cd58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD58u;
        // 0x22cd5c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd58) {
            ctx->pc = 0x22CDF4u;
            goto label_22cdf4;
        }
    }
    ctx->pc = 0x22CD60u;
label_22cd60:
    // 0x22cd60: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x22cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_22cd64:
    // 0x22cd64: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x22cd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_22cd68:
    // 0x22cd68: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x22cd68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22cd6c:
    // 0x22cd6c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x22cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22cd70:
    // 0x22cd70: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x22cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_22cd74:
    // 0x22cd74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22cd78:
    if (ctx->pc == 0x22CD78u) {
        ctx->pc = 0x22CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD74u;
        // 0x22cd78: 0x8e54000c  lw          $s4, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD7Cu;
        goto label_22cd7c;
    }
    ctx->pc = 0x22CD74u;
    {
        const bool branch_taken_0x22cd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD74u;
        // 0x22cd78: 0x8e54000c  lw          $s4, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd74) {
            ctx->pc = 0x22CD84u;
            goto label_22cd84;
        }
    }
    ctx->pc = 0x22CD7Cu;
label_22cd7c:
    // 0x22cd7c: 0x40f809  jalr        $v0
label_22cd80:
    if (ctx->pc == 0x22CD80u) {
        ctx->pc = 0x22CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD7Cu;
        // 0x22cd80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD84u;
        goto label_22cd84;
    }
    ctx->pc = 0x22CD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22CD84u);
        ctx->pc = 0x22CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD7Cu;
        // 0x22cd80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CD7Cu, 0x22CD84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CD84u;
label_22cd84:
    // 0x22cd84: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x22cd84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_22cd88:
    // 0x22cd88: 0x1a80000e  blez        $s4, . + 4 + (0xE << 2)
label_22cd8c:
    if (ctx->pc == 0x22CD8Cu) {
        ctx->pc = 0x22CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD88u;
        // 0x22cd8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD90u;
        goto label_22cd90;
    }
    ctx->pc = 0x22CD88u;
    {
        const bool branch_taken_0x22cd88 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x22CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD88u;
        // 0x22cd8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd88) {
            ctx->pc = 0x22CDC4u;
            goto label_22cdc4;
        }
    }
    ctx->pc = 0x22CD90u;
label_22cd90:
    // 0x22cd90: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22cd90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_22cd94:
    // 0x22cd94: 0x0  nop
    ctx->pc = 0x22cd94u;
    // NOP
label_22cd98:
    // 0x22cd98: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x22cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_22cd9c:
    // 0x22cd9c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_22cda0:
    if (ctx->pc == 0x22CDA0u) {
        ctx->pc = 0x22CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD9Cu;
        // 0x22cda0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CDA4u;
        goto label_22cda4;
    }
    ctx->pc = 0x22CD9Cu;
    {
        const bool branch_taken_0x22cd9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cd9c) {
            ctx->pc = 0x22CDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CD9Cu;
            // 0x22cda0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CDB0u;
            goto label_22cdb0;
        }
    }
    ctx->pc = 0x22CDA4u;
label_22cda4:
    // 0x22cda4: 0x40f809  jalr        $v0
label_22cda8:
    if (ctx->pc == 0x22CDA8u) {
        ctx->pc = 0x22CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDA4u;
        // 0x22cda8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CDACu;
        goto label_22cdac;
    }
    ctx->pc = 0x22CDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22CDACu);
        ctx->pc = 0x22CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDA4u;
        // 0x22cda8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CDA4u, 0x22CDACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CDACu;
label_22cdac:
    // 0x22cdac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22cdacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22cdb0:
    // 0x22cdb0: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x22cdb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_22cdb4:
    // 0x22cdb4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_22cdb8:
    if (ctx->pc == 0x22CDB8u) {
        ctx->pc = 0x22CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDB4u;
        // 0x22cdb8: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CDBCu;
        goto label_22cdbc;
    }
    ctx->pc = 0x22CDB4u;
    {
        const bool branch_taken_0x22cdb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDB4u;
        // 0x22cdb8: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cdb4) {
            ctx->pc = 0x22CD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cd98;
        }
    }
    ctx->pc = 0x22CDBCu;
label_22cdbc:
    // 0x22cdbc: 0x10000003  b           . + 4 + (0x3 << 2)
label_22cdc0:
    if (ctx->pc == 0x22CDC0u) {
        ctx->pc = 0x22CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDBCu;
        // 0x22cdc0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CDC4u;
        goto label_22cdc4;
    }
    ctx->pc = 0x22CDBCu;
    {
        const bool branch_taken_0x22cdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDBCu;
        // 0x22cdc0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cdbc) {
            ctx->pc = 0x22CDCCu;
            goto label_22cdcc;
        }
    }
    ctx->pc = 0x22CDC4u;
label_22cdc4:
    // 0x22cdc4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22cdc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_22cdc8:
    // 0x22cdc8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x22cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22cdcc:
    // 0x22cdcc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x22cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_22cdd0:
    // 0x22cdd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22cdd4:
    if (ctx->pc == 0x22CDD4u) {
        ctx->pc = 0x22CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDD0u;
        // 0x22cdd4: 0x8f85a004  lw          $a1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CDD8u;
        goto label_22cdd8;
    }
    ctx->pc = 0x22CDD0u;
    {
        const bool branch_taken_0x22cdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDD0u;
        // 0x22cdd4: 0x8f85a004  lw          $a1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cdd0) {
            ctx->pc = 0x22CDE4u;
            goto label_22cde4;
        }
    }
    ctx->pc = 0x22CDD8u;
label_22cdd8:
    // 0x22cdd8: 0x40f809  jalr        $v0
label_22cddc:
    if (ctx->pc == 0x22CDDCu) {
        ctx->pc = 0x22CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDD8u;
        // 0x22cddc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CDE0u;
        goto label_22cde0;
    }
    ctx->pc = 0x22CDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22CDE0u);
        ctx->pc = 0x22CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDD8u;
        // 0x22cddc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CDD8u, 0x22CDE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CDE0u;
label_22cde0:
    // 0x22cde0: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x22cde0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_22cde4:
    // 0x22cde4: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x22cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_22cde8:
    // 0x22cde8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x22cde8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22cdec:
    // 0x22cdec: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_22cdf0:
    if (ctx->pc == 0x22CDF0u) {
        ctx->pc = 0x22CDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDECu;
        // 0x22cdf0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CDF4u;
        goto label_22cdf4;
    }
    ctx->pc = 0x22CDECu;
    {
        const bool branch_taken_0x22cdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDECu;
        // 0x22cdf0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cdec) {
            ctx->pc = 0x22CD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cd60;
        }
    }
    ctx->pc = 0x22CDF4u;
label_22cdf4:
    // 0x22cdf4: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x22cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_22cdf8:
    // 0x22cdf8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_22cdfc:
    if (ctx->pc == 0x22CDFCu) {
        ctx->pc = 0x22CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDF8u;
        // 0x22cdfc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CE00u;
        goto label_22ce00;
    }
    ctx->pc = 0x22CDF8u;
    {
        const bool branch_taken_0x22cdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDF8u;
        // 0x22cdfc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cdf8) {
            ctx->pc = 0x22CE58u;
            goto label_22ce58;
        }
    }
    ctx->pc = 0x22CE00u;
label_22ce00:
    // 0x22ce00: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x22ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_22ce04:
    // 0x22ce04: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_22ce08:
    if (ctx->pc == 0x22CE08u) {
        ctx->pc = 0x22CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE04u;
        // 0x22ce08: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CE0Cu;
        goto label_22ce0c;
    }
    ctx->pc = 0x22CE04u;
    {
        const bool branch_taken_0x22ce04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE04u;
        // 0x22ce08: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce04) {
            ctx->pc = 0x22CE44u;
            goto label_22ce44;
        }
    }
    ctx->pc = 0x22CE0Cu;
label_22ce0c:
    // 0x22ce0c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x22ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_22ce10:
    // 0x22ce10: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x22ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_22ce14:
    // 0x22ce14: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22ce14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22ce18:
    // 0x22ce18: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_22ce1c:
    if (ctx->pc == 0x22CE1Cu) {
        ctx->pc = 0x22CE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE18u;
        // 0x22ce1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CE20u;
        goto label_22ce20;
    }
    ctx->pc = 0x22CE18u;
    {
        const bool branch_taken_0x22ce18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE18u;
        // 0x22ce1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce18) {
            ctx->pc = 0x22CE48u;
            goto label_22ce48;
        }
    }
    ctx->pc = 0x22CE20u;
label_22ce20:
    // 0x22ce20: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x22ce20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_22ce24:
    // 0x22ce24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22ce24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22ce28:
    // 0x22ce28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_22ce2c:
    if (ctx->pc == 0x22CE2Cu) {
        ctx->pc = 0x22CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE28u;
        // 0x22ce2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CE30u;
        goto label_22ce30;
    }
    ctx->pc = 0x22CE28u;
    {
        const bool branch_taken_0x22ce28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE28u;
        // 0x22ce2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce28) {
            ctx->pc = 0x22CE48u;
            goto label_22ce48;
        }
    }
    ctx->pc = 0x22CE30u;
label_22ce30:
    // 0x22ce30: 0xc08b11c  jal         func_22C470
label_22ce34:
    if (ctx->pc == 0x22CE34u) {
        ctx->pc = 0x22CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE30u;
        // 0x22ce34: 0x94850004  lhu         $a1, 0x4($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CE38u;
        goto label_22ce38;
    }
    ctx->pc = 0x22CE30u;
    SET_GPR_U32(ctx, 31, 0x22CE38u);
    ctx->pc = 0x22CE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CE30u;
    // 0x22ce34: 0x94850004  lhu         $a1, 0x4($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x22CE30u, 0x22CE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE38u;
label_22ce38:
    // 0x22ce38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22ce38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22ce3c:
    // 0x22ce3c: 0x10000002  b           . + 4 + (0x2 << 2)
label_22ce40:
    if (ctx->pc == 0x22CE40u) {
        ctx->pc = 0x22CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE3Cu;
        // 0x22ce40: 0x8f85a004  lw          $a1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CE44u;
        goto label_22ce44;
    }
    ctx->pc = 0x22CE3Cu;
    {
        const bool branch_taken_0x22ce3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE3Cu;
        // 0x22ce40: 0x8f85a004  lw          $a1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce3c) {
            ctx->pc = 0x22CE48u;
            goto label_22ce48;
        }
    }
    ctx->pc = 0x22CE44u;
label_22ce44:
    // 0x22ce44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22ce44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ce48:
    // 0x22ce48: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x22ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_22ce4c:
    // 0x22ce4c: 0x40f809  jalr        $v0
label_22ce50:
    if (ctx->pc == 0x22CE50u) {
        ctx->pc = 0x22CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE4Cu;
        // 0x22ce50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CE54u;
        goto label_22ce54;
    }
    ctx->pc = 0x22CE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22CE54u);
        ctx->pc = 0x22CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE4Cu;
        // 0x22ce50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CE4Cu, 0x22CE54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CE54u;
label_22ce54:
    // 0x22ce54: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22ce54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22ce58:
    // 0x22ce58: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22ce58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22ce5c:
    // 0x22ce5c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22ce5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22ce60:
    // 0x22ce60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22ce60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22ce64:
    // 0x22ce64: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22ce64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22ce68:
    // 0x22ce68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22ce68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22ce6c:
    // 0x22ce6c: 0x3e00008  jr          $ra
label_22ce70:
    if (ctx->pc == 0x22CE70u) {
        ctx->pc = 0x22CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE6Cu;
        // 0x22ce70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CE74u;
        goto label_fallthrough_0x22ce6c;
    }
    ctx->pc = 0x22CE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE6Cu;
        // 0x22ce70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22ce6c:
    ctx->pc = 0x22CE74u;
}
