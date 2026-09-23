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

// Function: timerTick
// Address: 0x2cdbc0 - 0x2cdd4c
void timerTick_0x2cdbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("timerTick_0x2cdbc0");
#endif

    switch (ctx->pc) {
        case 0x2cdbc0u: goto label_2cdbc0;
        case 0x2cdbc4u: goto label_2cdbc4;
        case 0x2cdbc8u: goto label_2cdbc8;
        case 0x2cdbccu: goto label_2cdbcc;
        case 0x2cdbd0u: goto label_2cdbd0;
        case 0x2cdbd4u: goto label_2cdbd4;
        case 0x2cdbd8u: goto label_2cdbd8;
        case 0x2cdbdcu: goto label_2cdbdc;
        case 0x2cdbe0u: goto label_2cdbe0;
        case 0x2cdbe4u: goto label_2cdbe4;
        case 0x2cdbe8u: goto label_2cdbe8;
        case 0x2cdbecu: goto label_2cdbec;
        case 0x2cdbf0u: goto label_2cdbf0;
        case 0x2cdbf4u: goto label_2cdbf4;
        case 0x2cdbf8u: goto label_2cdbf8;
        case 0x2cdbfcu: goto label_2cdbfc;
        case 0x2cdc00u: goto label_2cdc00;
        case 0x2cdc04u: goto label_2cdc04;
        case 0x2cdc08u: goto label_2cdc08;
        case 0x2cdc0cu: goto label_2cdc0c;
        case 0x2cdc10u: goto label_2cdc10;
        case 0x2cdc14u: goto label_2cdc14;
        case 0x2cdc18u: goto label_2cdc18;
        case 0x2cdc1cu: goto label_2cdc1c;
        case 0x2cdc20u: goto label_2cdc20;
        case 0x2cdc24u: goto label_2cdc24;
        case 0x2cdc28u: goto label_2cdc28;
        case 0x2cdc2cu: goto label_2cdc2c;
        case 0x2cdc30u: goto label_2cdc30;
        case 0x2cdc34u: goto label_2cdc34;
        case 0x2cdc38u: goto label_2cdc38;
        case 0x2cdc3cu: goto label_2cdc3c;
        case 0x2cdc40u: goto label_2cdc40;
        case 0x2cdc44u: goto label_2cdc44;
        case 0x2cdc48u: goto label_2cdc48;
        case 0x2cdc4cu: goto label_2cdc4c;
        case 0x2cdc50u: goto label_2cdc50;
        case 0x2cdc54u: goto label_2cdc54;
        case 0x2cdc58u: goto label_2cdc58;
        case 0x2cdc5cu: goto label_2cdc5c;
        case 0x2cdc60u: goto label_2cdc60;
        case 0x2cdc64u: goto label_2cdc64;
        case 0x2cdc68u: goto label_2cdc68;
        case 0x2cdc6cu: goto label_2cdc6c;
        case 0x2cdc70u: goto label_2cdc70;
        case 0x2cdc74u: goto label_2cdc74;
        case 0x2cdc78u: goto label_2cdc78;
        case 0x2cdc7cu: goto label_2cdc7c;
        case 0x2cdc80u: goto label_2cdc80;
        case 0x2cdc84u: goto label_2cdc84;
        case 0x2cdc88u: goto label_2cdc88;
        case 0x2cdc8cu: goto label_2cdc8c;
        case 0x2cdc90u: goto label_2cdc90;
        case 0x2cdc94u: goto label_2cdc94;
        case 0x2cdc98u: goto label_2cdc98;
        case 0x2cdc9cu: goto label_2cdc9c;
        case 0x2cdca0u: goto label_2cdca0;
        case 0x2cdca4u: goto label_2cdca4;
        case 0x2cdca8u: goto label_2cdca8;
        case 0x2cdcacu: goto label_2cdcac;
        case 0x2cdcb0u: goto label_2cdcb0;
        case 0x2cdcb4u: goto label_2cdcb4;
        case 0x2cdcb8u: goto label_2cdcb8;
        case 0x2cdcbcu: goto label_2cdcbc;
        case 0x2cdcc0u: goto label_2cdcc0;
        case 0x2cdcc4u: goto label_2cdcc4;
        case 0x2cdcc8u: goto label_2cdcc8;
        case 0x2cdcccu: goto label_2cdccc;
        case 0x2cdcd0u: goto label_2cdcd0;
        case 0x2cdcd4u: goto label_2cdcd4;
        case 0x2cdcd8u: goto label_2cdcd8;
        case 0x2cdcdcu: goto label_2cdcdc;
        case 0x2cdce0u: goto label_2cdce0;
        case 0x2cdce4u: goto label_2cdce4;
        case 0x2cdce8u: goto label_2cdce8;
        case 0x2cdcecu: goto label_2cdcec;
        case 0x2cdcf0u: goto label_2cdcf0;
        case 0x2cdcf4u: goto label_2cdcf4;
        case 0x2cdcf8u: goto label_2cdcf8;
        case 0x2cdcfcu: goto label_2cdcfc;
        case 0x2cdd00u: goto label_2cdd00;
        case 0x2cdd04u: goto label_2cdd04;
        case 0x2cdd08u: goto label_2cdd08;
        case 0x2cdd0cu: goto label_2cdd0c;
        case 0x2cdd10u: goto label_2cdd10;
        case 0x2cdd14u: goto label_2cdd14;
        case 0x2cdd18u: goto label_2cdd18;
        case 0x2cdd1cu: goto label_2cdd1c;
        case 0x2cdd20u: goto label_2cdd20;
        case 0x2cdd24u: goto label_2cdd24;
        case 0x2cdd28u: goto label_2cdd28;
        case 0x2cdd2cu: goto label_2cdd2c;
        case 0x2cdd30u: goto label_2cdd30;
        case 0x2cdd34u: goto label_2cdd34;
        case 0x2cdd38u: goto label_2cdd38;
        case 0x2cdd3cu: goto label_2cdd3c;
        case 0x2cdd40u: goto label_2cdd40;
        case 0x2cdd44u: goto label_2cdd44;
        case 0x2cdd48u: goto label_2cdd48;
        default: break;
    }

    ctx->pc = 0x2cdbc0u;

label_2cdbc0:
    // 0x2cdbc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cdbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2cdbc4:
    // 0x2cdbc4: 0x8f85b5a0  lw          $a1, -0x4A60($gp)
    ctx->pc = 0x2cdbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948256)));
label_2cdbc8:
    // 0x2cdbc8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2cdbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2cdbcc:
    // 0x2cdbcc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cdbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2cdbd0:
    // 0x2cdbd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cdbd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cdbd4:
    // 0x2cdbd4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2cdbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2cdbd8:
    // 0x2cdbd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2cdbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2cdbdc:
    // 0x2cdbdc: 0x18a00044  blez        $a1, . + 4 + (0x44 << 2)
label_2cdbe0:
    if (ctx->pc == 0x2CDBE0u) {
        ctx->pc = 0x2CDBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBDCu;
        // 0x2cdbe0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDBE4u;
        goto label_2cdbe4;
    }
    ctx->pc = 0x2CDBDCu;
    {
        const bool branch_taken_0x2cdbdc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2CDBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBDCu;
        // 0x2cdbe0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdbdc) {
            ctx->pc = 0x2CDCF0u;
            goto label_2cdcf0;
        }
    }
    ctx->pc = 0x2CDBE4u;
label_2cdbe4:
    // 0x2cdbe4: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x2cdbe4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
label_2cdbe8:
    // 0x2cdbe8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2cdbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2cdbec:
    // 0x2cdbec: 0x0  nop
    ctx->pc = 0x2cdbecu;
    // NOP
label_2cdbf0:
    // 0x2cdbf0: 0x26672638  addiu       $a3, $s3, 0x2638
    ctx->pc = 0x2cdbf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 9784));
label_2cdbf4:
    // 0x2cdbf4: 0x2233018  mult        $a2, $s1, $v1
    ctx->pc = 0x2cdbf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_2cdbf8:
    // 0x2cdbf8: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x2cdbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_2cdbfc:
    // 0x2cdbfc: 0x8f849da8  lw          $a0, -0x6258($gp)
    ctx->pc = 0x2cdbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
label_2cdc00:
    // 0x2cdc00: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2cdc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2cdc04:
    // 0x2cdc04: 0xc78021  addu        $s0, $a2, $a3
    ctx->pc = 0x2cdc04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2cdc08:
    // 0x2cdc08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cdc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cdc0c:
    // 0x2cdc0c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2cdc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2cdc10:
    // 0x2cdc10: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2cdc10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2cdc14:
    // 0x2cdc14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cdc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cdc18:
    // 0x2cdc18: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2cdc1c:
    if (ctx->pc == 0x2CDC1Cu) {
        ctx->pc = 0x2CDC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC18u;
        // 0x2cdc1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC20u;
        goto label_2cdc20;
    }
    ctx->pc = 0x2CDC18u;
    {
        const bool branch_taken_0x2cdc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC18u;
        // 0x2cdc1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc18) {
            ctx->pc = 0x2CDC30u;
            goto label_2cdc30;
        }
    }
    ctx->pc = 0x2CDC20u;
label_2cdc20:
    // 0x2cdc20: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
label_2cdc24:
    if (ctx->pc == 0x2CDC24u) {
        ctx->pc = 0x2CDC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC20u;
        // 0x2cdc24: 0x24e20004  addiu       $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC28u;
        goto label_2cdc28;
    }
    ctx->pc = 0x2CDC20u;
    {
        const bool branch_taken_0x2cdc20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CDC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC20u;
        // 0x2cdc24: 0x24e20004  addiu       $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc20) {
            ctx->pc = 0x2CDC80u;
            goto label_2cdc80;
        }
    }
    ctx->pc = 0x2CDC28u;
label_2cdc28:
    // 0x2cdc28: 0x1000002e  b           . + 4 + (0x2E << 2)
label_2cdc2c:
    if (ctx->pc == 0x2CDC2Cu) {
        ctx->pc = 0x2CDC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC28u;
        // 0x2cdc2c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC30u;
        goto label_2cdc30;
    }
    ctx->pc = 0x2CDC28u;
    {
        const bool branch_taken_0x2cdc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC28u;
        // 0x2cdc2c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc28) {
            ctx->pc = 0x2CDCE4u;
            goto label_2cdce4;
        }
    }
    ctx->pc = 0x2CDC30u;
label_2cdc30:
    // 0x2cdc30: 0x24e30004  addiu       $v1, $a3, 0x4
    ctx->pc = 0x2cdc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2cdc34:
    // 0x2cdc34: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2cdc34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cdc38:
    // 0x2cdc38: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2cdc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2cdc3c:
    // 0x2cdc3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2cdc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cdc40:
    // 0x2cdc40: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2cdc40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2cdc44:
    // 0x2cdc44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cdc44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cdc48:
    // 0x2cdc48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cdc48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2cdc4c:
    // 0x2cdc4c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cdc4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cdc50:
    // 0x2cdc50: 0x0  nop
    ctx->pc = 0x2cdc50u;
    // NOP
label_2cdc54:
    // 0x2cdc54: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_2cdc58:
    if (ctx->pc == 0x2CDC58u) {
        ctx->pc = 0x2CDC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC54u;
        // 0x2cdc58: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC5Cu;
        goto label_2cdc5c;
    }
    ctx->pc = 0x2CDC54u;
    {
        const bool branch_taken_0x2cdc54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CDC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC54u;
        // 0x2cdc58: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc54) {
            ctx->pc = 0x2CDCE0u;
            goto label_2cdce0;
        }
    }
    ctx->pc = 0x2CDC5Cu;
label_2cdc5c:
    // 0x2cdc5c: 0xe62821  addu        $a1, $a3, $a2
    ctx->pc = 0x2cdc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2cdc60:
    // 0x2cdc60: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2cdc60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cdc64:
    // 0x2cdc64: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2cdc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2cdc68:
    // 0x2cdc68: 0x60f809  jalr        $v1
label_2cdc6c:
    if (ctx->pc == 0x2CDC6Cu) {
        ctx->pc = 0x2CDC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC68u;
        // 0x2cdc6c: 0x8ca40010  lw          $a0, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC70u;
        goto label_2cdc70;
    }
    ctx->pc = 0x2CDC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2CDC70u);
        ctx->pc = 0x2CDC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC68u;
        // 0x2cdc6c: 0x8ca40010  lw          $a0, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDC68u, 0x2CDC70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CDC70u;
label_2cdc70:
    // 0x2cdc70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cdc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cdc74:
    // 0x2cdc74: 0x8f85b5a0  lw          $a1, -0x4A60($gp)
    ctx->pc = 0x2cdc74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948256)));
label_2cdc78:
    // 0x2cdc78: 0x10000019  b           . + 4 + (0x19 << 2)
label_2cdc7c:
    if (ctx->pc == 0x2CDC7Cu) {
        ctx->pc = 0x2CDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC78u;
        // 0x2cdc7c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC80u;
        goto label_2cdc80;
    }
    ctx->pc = 0x2CDC78u;
    {
        const bool branch_taken_0x2cdc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC78u;
        // 0x2cdc7c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc78) {
            ctx->pc = 0x2CDCE0u;
            goto label_2cdce0;
        }
    }
    ctx->pc = 0x2CDC80u;
label_2cdc80:
    // 0x2cdc80: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x2cdc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_2cdc84:
    // 0x2cdc84: 0xc28021  addu        $s0, $a2, $v0
    ctx->pc = 0x2cdc84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2cdc88:
    // 0x2cdc88: 0xc39021  addu        $s2, $a2, $v1
    ctx->pc = 0x2cdc88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2cdc8c:
    // 0x2cdc8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cdc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cdc90:
    // 0x2cdc90: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2cdc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cdc94:
    // 0x2cdc94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cdc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2cdc98:
    // 0x2cdc98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cdc98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cdc9c:
    // 0x2cdc9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cdc9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2cdca0:
    // 0x2cdca0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2cdca0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cdca4:
    // 0x2cdca4: 0x0  nop
    ctx->pc = 0x2cdca4u;
    // NOP
label_2cdca8:
    // 0x2cdca8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_2cdcac:
    if (ctx->pc == 0x2CDCACu) {
        ctx->pc = 0x2CDCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCA8u;
        // 0x2cdcac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDCB0u;
        goto label_2cdcb0;
    }
    ctx->pc = 0x2CDCA8u;
    {
        const bool branch_taken_0x2cdca8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CDCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCA8u;
        // 0x2cdcac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdca8) {
            ctx->pc = 0x2CDCE0u;
            goto label_2cdce0;
        }
    }
    ctx->pc = 0x2CDCB0u;
label_2cdcb0:
    // 0x2cdcb0: 0xe62821  addu        $a1, $a3, $a2
    ctx->pc = 0x2cdcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2cdcb4:
    // 0x2cdcb4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2cdcb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cdcb8:
    // 0x2cdcb8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2cdcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2cdcbc:
    // 0x2cdcbc: 0x60f809  jalr        $v1
label_2cdcc0:
    if (ctx->pc == 0x2CDCC0u) {
        ctx->pc = 0x2CDCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCBCu;
        // 0x2cdcc0: 0x8ca40010  lw          $a0, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDCC4u;
        goto label_2cdcc4;
    }
    ctx->pc = 0x2CDCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2CDCC4u);
        ctx->pc = 0x2CDCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCBCu;
        // 0x2cdcc0: 0x8ca40010  lw          $a0, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDCBCu, 0x2CDCC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CDCC4u;
label_2cdcc4:
    // 0x2cdcc4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2cdcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cdcc8:
    // 0x2cdcc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cdcc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2cdccc:
    // 0x2cdccc: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2cdcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cdcd0:
    // 0x2cdcd0: 0x8f85b5a0  lw          $a1, -0x4A60($gp)
    ctx->pc = 0x2cdcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948256)));
label_2cdcd4:
    // 0x2cdcd4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cdcd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2cdcd8:
    // 0x2cdcd8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cdcd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2cdcdc:
    // 0x2cdcdc: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2cdcdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2cdce0:
    // 0x2cdce0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cdce0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2cdce4:
    // 0x2cdce4: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x2cdce4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2cdce8:
    // 0x2cdce8: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
label_2cdcec:
    if (ctx->pc == 0x2CDCECu) {
        ctx->pc = 0x2CDCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCE8u;
        // 0x2cdcec: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDCF0u;
        goto label_2cdcf0;
    }
    ctx->pc = 0x2CDCE8u;
    {
        const bool branch_taken_0x2cdce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCE8u;
        // 0x2cdcec: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdce8) {
            ctx->pc = 0x2CDBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cdbf0;
        }
    }
    ctx->pc = 0x2CDCF0u;
label_2cdcf0:
    // 0x2cdcf0: 0x24b1ffff  addiu       $s1, $a1, -0x1
    ctx->pc = 0x2cdcf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2cdcf4:
    // 0x2cdcf4: 0x620000e  bltz        $s1, . + 4 + (0xE << 2)
label_2cdcf8:
    if (ctx->pc == 0x2CDCF8u) {
        ctx->pc = 0x2CDCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCF4u;
        // 0x2cdcf8: 0x3c130038  lui         $s3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDCFCu;
        goto label_2cdcfc;
    }
    ctx->pc = 0x2CDCF4u;
    {
        const bool branch_taken_0x2cdcf4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2CDCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCF4u;
        // 0x2cdcf8: 0x3c130038  lui         $s3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdcf4) {
            ctx->pc = 0x2CDD30u;
            goto label_2cdd30;
        }
    }
    ctx->pc = 0x2CDCFCu;
label_2cdcfc:
    // 0x2cdcfc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2cdcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2cdd00:
    // 0x2cdd00: 0x26642638  addiu       $a0, $s3, 0x2638
    ctx->pc = 0x2cdd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 9784));
label_2cdd04:
    // 0x2cdd04: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x2cdd04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2cdd08:
    // 0x2cdd08: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2cdd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cdd0c:
    // 0x2cdd0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cdd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cdd10:
    // 0x2cdd10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2cdd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cdd14:
    // 0x2cdd14: 0x54450004  bnel        $v0, $a1, . + 4 + (0x4 << 2)
label_2cdd18:
    if (ctx->pc == 0x2CDD18u) {
        ctx->pc = 0x2CDD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD14u;
        // 0x2cdd18: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDD1Cu;
        goto label_2cdd1c;
    }
    ctx->pc = 0x2CDD14u;
    {
        const bool branch_taken_0x2cdd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2cdd14) {
            ctx->pc = 0x2CDD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDD14u;
            // 0x2cdd18: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDD28u;
            goto label_2cdd28;
        }
    }
    ctx->pc = 0x2CDD1Cu;
label_2cdd1c:
    // 0x2cdd1c: 0xc0b3756  jal         func_2CDD58
label_2cdd20:
    if (ctx->pc == 0x2CDD20u) {
        ctx->pc = 0x2CDD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD1Cu;
        // 0x2cdd20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDD24u;
        goto label_2cdd24;
    }
    ctx->pc = 0x2CDD1Cu;
    SET_GPR_U32(ctx, 31, 0x2CDD24u);
    ctx->pc = 0x2CDD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDD1Cu;
    // 0x2cdd20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD58u, 0x2CDD1Cu, 0x2CDD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDD24u;
label_2cdd24:
    // 0x2cdd24: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2cdd24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2cdd28:
    // 0x2cdd28: 0x621fff5  bgez        $s1, . + 4 + (-0xB << 2)
label_2cdd2c:
    if (ctx->pc == 0x2CDD2Cu) {
        ctx->pc = 0x2CDD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD28u;
        // 0x2cdd2c: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDD30u;
        goto label_2cdd30;
    }
    ctx->pc = 0x2CDD28u;
    {
        const bool branch_taken_0x2cdd28 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2CDD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD28u;
        // 0x2cdd2c: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd28) {
            ctx->pc = 0x2CDD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cdd00;
        }
    }
    ctx->pc = 0x2CDD30u;
label_2cdd30:
    // 0x2cdd30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cdd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2cdd34:
    // 0x2cdd34: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2cdd34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2cdd38:
    // 0x2cdd38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2cdd38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cdd3c:
    // 0x2cdd3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2cdd3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cdd40:
    // 0x2cdd40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cdd40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cdd44:
    // 0x2cdd44: 0x3e00008  jr          $ra
label_2cdd48:
    if (ctx->pc == 0x2CDD48u) {
        ctx->pc = 0x2CDD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD44u;
        // 0x2cdd48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDD4Cu;
        goto label_fallthrough_0x2cdd44;
    }
    ctx->pc = 0x2CDD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD44u;
        // 0x2cdd48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cdd44:
    ctx->pc = 0x2CDD4Cu;
}
