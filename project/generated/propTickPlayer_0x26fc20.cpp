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

// Function: propTickPlayer
// Address: 0x26fc20 - 0x26fd40
void propTickPlayer_0x26fc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propTickPlayer_0x26fc20");
#endif

    switch (ctx->pc) {
        case 0x26fc20u: goto label_26fc20;
        case 0x26fc24u: goto label_26fc24;
        case 0x26fc28u: goto label_26fc28;
        case 0x26fc2cu: goto label_26fc2c;
        case 0x26fc30u: goto label_26fc30;
        case 0x26fc34u: goto label_26fc34;
        case 0x26fc38u: goto label_26fc38;
        case 0x26fc3cu: goto label_26fc3c;
        case 0x26fc40u: goto label_26fc40;
        case 0x26fc44u: goto label_26fc44;
        case 0x26fc48u: goto label_26fc48;
        case 0x26fc4cu: goto label_26fc4c;
        case 0x26fc50u: goto label_26fc50;
        case 0x26fc54u: goto label_26fc54;
        case 0x26fc58u: goto label_26fc58;
        case 0x26fc5cu: goto label_26fc5c;
        case 0x26fc60u: goto label_26fc60;
        case 0x26fc64u: goto label_26fc64;
        case 0x26fc68u: goto label_26fc68;
        case 0x26fc6cu: goto label_26fc6c;
        case 0x26fc70u: goto label_26fc70;
        case 0x26fc74u: goto label_26fc74;
        case 0x26fc78u: goto label_26fc78;
        case 0x26fc7cu: goto label_26fc7c;
        case 0x26fc80u: goto label_26fc80;
        case 0x26fc84u: goto label_26fc84;
        case 0x26fc88u: goto label_26fc88;
        case 0x26fc8cu: goto label_26fc8c;
        case 0x26fc90u: goto label_26fc90;
        case 0x26fc94u: goto label_26fc94;
        case 0x26fc98u: goto label_26fc98;
        case 0x26fc9cu: goto label_26fc9c;
        case 0x26fca0u: goto label_26fca0;
        case 0x26fca4u: goto label_26fca4;
        case 0x26fca8u: goto label_26fca8;
        case 0x26fcacu: goto label_26fcac;
        case 0x26fcb0u: goto label_26fcb0;
        case 0x26fcb4u: goto label_26fcb4;
        case 0x26fcb8u: goto label_26fcb8;
        case 0x26fcbcu: goto label_26fcbc;
        case 0x26fcc0u: goto label_26fcc0;
        case 0x26fcc4u: goto label_26fcc4;
        case 0x26fcc8u: goto label_26fcc8;
        case 0x26fcccu: goto label_26fccc;
        case 0x26fcd0u: goto label_26fcd0;
        case 0x26fcd4u: goto label_26fcd4;
        case 0x26fcd8u: goto label_26fcd8;
        case 0x26fcdcu: goto label_26fcdc;
        case 0x26fce0u: goto label_26fce0;
        case 0x26fce4u: goto label_26fce4;
        case 0x26fce8u: goto label_26fce8;
        case 0x26fcecu: goto label_26fcec;
        case 0x26fcf0u: goto label_26fcf0;
        case 0x26fcf4u: goto label_26fcf4;
        case 0x26fcf8u: goto label_26fcf8;
        case 0x26fcfcu: goto label_26fcfc;
        case 0x26fd00u: goto label_26fd00;
        case 0x26fd04u: goto label_26fd04;
        case 0x26fd08u: goto label_26fd08;
        case 0x26fd0cu: goto label_26fd0c;
        case 0x26fd10u: goto label_26fd10;
        case 0x26fd14u: goto label_26fd14;
        case 0x26fd18u: goto label_26fd18;
        case 0x26fd1cu: goto label_26fd1c;
        case 0x26fd20u: goto label_26fd20;
        case 0x26fd24u: goto label_26fd24;
        case 0x26fd28u: goto label_26fd28;
        case 0x26fd2cu: goto label_26fd2c;
        case 0x26fd30u: goto label_26fd30;
        case 0x26fd34u: goto label_26fd34;
        case 0x26fd38u: goto label_26fd38;
        case 0x26fd3cu: goto label_26fd3c;
        default: break;
    }

    ctx->pc = 0x26fc20u;

label_26fc20:
    // 0x26fc20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26fc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_26fc24:
    // 0x26fc24: 0x8f84b15c  lw          $a0, -0x4EA4($gp)
    ctx->pc = 0x26fc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
label_26fc28:
    // 0x26fc28: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26fc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_26fc2c:
    // 0x26fc2c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x26fc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_26fc30:
    // 0x26fc30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26fc30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26fc34:
    // 0x26fc34: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x26fc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_26fc38:
    // 0x26fc38: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26fc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_26fc3c:
    // 0x26fc3c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26fc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_26fc40:
    // 0x26fc40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26fc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_26fc44:
    // 0x26fc44: 0x18800035  blez        $a0, . + 4 + (0x35 << 2)
label_26fc48:
    if (ctx->pc == 0x26FC48u) {
        ctx->pc = 0x26FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC44u;
        // 0x26fc48: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FC4Cu;
        goto label_26fc4c;
    }
    ctx->pc = 0x26FC44u;
    {
        const bool branch_taken_0x26fc44 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x26FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC44u;
        // 0x26fc48: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc44) {
            ctx->pc = 0x26FD1Cu;
            goto label_26fd1c;
        }
    }
    ctx->pc = 0x26FC4Cu;
label_26fc4c:
    // 0x26fc4c: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x26fc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
label_26fc50:
    // 0x26fc50: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26fc50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26fc54:
    // 0x26fc54: 0x34148000  ori         $s4, $zero, 0x8000
    ctx->pc = 0x26fc54u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_26fc58:
    // 0x26fc58: 0x14a438  dsll        $s4, $s4, 16
    ctx->pc = 0x26fc58u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << 16);
label_26fc5c:
    // 0x26fc5c: 0x36940004  ori         $s4, $s4, 0x4
    ctx->pc = 0x26fc5cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4);
label_26fc60:
    // 0x26fc60: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x26fc60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26fc64:
    // 0x26fc64: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26fc64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26fc68:
    // 0x26fc68: 0x8f83b07c  lw          $v1, -0x4F84($gp)
    ctx->pc = 0x26fc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
label_26fc6c:
    // 0x26fc6c: 0x728021  addu        $s0, $v1, $s2
    ctx->pc = 0x26fc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_26fc70:
    // 0x26fc70: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x26fc70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_26fc74:
    // 0x26fc74: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x26fc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_26fc78:
    // 0x26fc78: 0x54530025  bnel        $v0, $s3, . + 4 + (0x25 << 2)
label_26fc7c:
    if (ctx->pc == 0x26FC7Cu) {
        ctx->pc = 0x26FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC78u;
        // 0x26fc7c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FC80u;
        goto label_26fc80;
    }
    ctx->pc = 0x26FC78u;
    {
        const bool branch_taken_0x26fc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x26fc78) {
            ctx->pc = 0x26FC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FC78u;
            // 0x26fc7c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FD10u;
            goto label_26fd10;
        }
    }
    ctx->pc = 0x26FC80u;
label_26fc80:
    // 0x26fc80: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x26fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_26fc84:
    // 0x26fc84: 0xc080e3a  jal         func_2038E8
label_26fc88:
    if (ctx->pc == 0x26FC88u) {
        ctx->pc = 0x26FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC84u;
        // 0x26fc88: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FC8Cu;
        goto label_26fc8c;
    }
    ctx->pc = 0x26FC84u;
    SET_GPR_U32(ctx, 31, 0x26FC8Cu);
    ctx->pc = 0x26FC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FC84u;
    // 0x26fc88: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x26FC84u, 0x26FC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC8Cu;
label_26fc8c:
    // 0x26fc8c: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x26fc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_26fc90:
    // 0x26fc90: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x26fc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_26fc94:
    // 0x26fc94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26fc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26fc98:
    // 0x26fc98: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_26fc9c:
    if (ctx->pc == 0x26FC9Cu) {
        ctx->pc = 0x26FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC98u;
        // 0x26fc9c: 0x8f84b15c  lw          $a0, -0x4EA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FCA0u;
        goto label_26fca0;
    }
    ctx->pc = 0x26FC98u;
    {
        const bool branch_taken_0x26fc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fc98) {
            ctx->pc = 0x26FC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FC98u;
            // 0x26fc9c: 0x8f84b15c  lw          $a0, -0x4EA4($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FD0Cu;
            goto label_26fd0c;
        }
    }
    ctx->pc = 0x26FCA0u;
label_26fca0:
    // 0x26fca0: 0xc6030030  lwc1        $f3, 0x30($s0)
    ctx->pc = 0x26fca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26fca4:
    // 0x26fca4: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x26fca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26fca8:
    // 0x26fca8: 0xc4820090  lwc1        $f2, 0x90($a0)
    ctx->pc = 0x26fca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26fcac:
    // 0x26fcac: 0xc6040034  lwc1        $f4, 0x34($s0)
    ctx->pc = 0x26fcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26fcb0:
    // 0x26fcb0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x26fcb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_26fcb4:
    // 0x26fcb4: 0xc4810094  lwc1        $f1, 0x94($a0)
    ctx->pc = 0x26fcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26fcb8:
    // 0x26fcb8: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x26fcb8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_26fcbc:
    // 0x26fcbc: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x26fcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26fcc0:
    // 0x26fcc0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x26fcc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_26fcc4:
    // 0x26fcc4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x26fcc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_26fcc8:
    // 0x26fcc8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x26fcc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_26fccc:
    // 0x26fccc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x26fcccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_26fcd0:
    // 0x26fcd0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x26fcd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_26fcd4:
    // 0x26fcd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26fcd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_26fcd8:
    // 0x26fcd8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x26fcd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26fcdc:
    // 0x26fcdc: 0x0  nop
    ctx->pc = 0x26fcdcu;
    // NOP
label_26fce0:
    // 0x26fce0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_26fce4:
    if (ctx->pc == 0x26FCE4u) {
        ctx->pc = 0x26FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCE0u;
        // 0x26fce4: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FCE8u;
        goto label_26fce8;
    }
    ctx->pc = 0x26FCE0u;
    {
        const bool branch_taken_0x26fce0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCE0u;
        // 0x26fce4: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fce0) {
            ctx->pc = 0x26FD08u;
            goto label_26fd08;
        }
    }
    ctx->pc = 0x26FCE8u;
label_26fce8:
    // 0x26fce8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x26fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_26fcec:
    // 0x26fcec: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x26fcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_26fcf0:
    // 0x26fcf0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x26fcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_26fcf4:
    // 0x26fcf4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_26fcf8:
    if (ctx->pc == 0x26FCF8u) {
        ctx->pc = 0x26FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCF4u;
        // 0x26fcf8: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FCFCu;
        goto label_26fcfc;
    }
    ctx->pc = 0x26FCF4u;
    {
        const bool branch_taken_0x26fcf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCF4u;
        // 0x26fcf8: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fcf4) {
            ctx->pc = 0x26FD08u;
            goto label_26fd08;
        }
    }
    ctx->pc = 0x26FCFCu;
label_26fcfc:
    // 0x26fcfc: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x26fcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_26fd00:
    // 0x26fd00: 0x60f809  jalr        $v1
label_26fd04:
    if (ctx->pc == 0x26FD04u) {
        ctx->pc = 0x26FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD00u;
        // 0x26fd04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FD08u;
        goto label_26fd08;
    }
    ctx->pc = 0x26FD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26FD08u);
        ctx->pc = 0x26FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD00u;
        // 0x26fd04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FD00u, 0x26FD08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FD08u;
label_26fd08:
    // 0x26fd08: 0x8f84b15c  lw          $a0, -0x4EA4($gp)
    ctx->pc = 0x26fd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
label_26fd0c:
    // 0x26fd0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26fd0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_26fd10:
    // 0x26fd10: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x26fd10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_26fd14:
    // 0x26fd14: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_26fd18:
    if (ctx->pc == 0x26FD18u) {
        ctx->pc = 0x26FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD14u;
        // 0x26fd18: 0x26520250  addiu       $s2, $s2, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FD1Cu;
        goto label_26fd1c;
    }
    ctx->pc = 0x26FD14u;
    {
        const bool branch_taken_0x26fd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD14u;
        // 0x26fd18: 0x26520250  addiu       $s2, $s2, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd14) {
            ctx->pc = 0x26FC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26fc68;
        }
    }
    ctx->pc = 0x26FD1Cu;
label_26fd1c:
    // 0x26fd1c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x26fd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_26fd20:
    // 0x26fd20: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x26fd20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26fd24:
    // 0x26fd24: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26fd24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26fd28:
    // 0x26fd28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26fd28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26fd2c:
    // 0x26fd2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26fd2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26fd30:
    // 0x26fd30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26fd30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26fd34:
    // 0x26fd34: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x26fd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26fd38:
    // 0x26fd38: 0x3e00008  jr          $ra
label_26fd3c:
    if (ctx->pc == 0x26FD3Cu) {
        ctx->pc = 0x26FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD38u;
        // 0x26fd3c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FD40u;
        goto label_fallthrough_0x26fd38;
    }
    ctx->pc = 0x26FD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD38u;
        // 0x26fd3c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26fd38:
    ctx->pc = 0x26FD40u;
}
