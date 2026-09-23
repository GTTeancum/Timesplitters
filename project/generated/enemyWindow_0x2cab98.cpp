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

// Function: enemyWindow
// Address: 0x2cab98 - 0x2caf74
void enemyWindow_0x2cab98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyWindow_0x2cab98");
#endif

    switch (ctx->pc) {
        case 0x2cabe0u: goto label_2cabe0;
        case 0x2cac2cu: goto label_2cac2c;
        case 0x2cac48u: goto label_2cac48;
        case 0x2cac98u: goto label_2cac98;
        case 0x2caca4u: goto label_2caca4;
        case 0x2cad34u: goto label_2cad34;
        case 0x2cad54u: goto label_2cad54;
        case 0x2cadbcu: goto label_2cadbc;
        case 0x2cadccu: goto label_2cadcc;
        case 0x2cadd4u: goto label_2cadd4;
        case 0x2cae6cu: goto label_2cae6c;
        case 0x2caebcu: goto label_2caebc;
        case 0x2caec8u: goto label_2caec8;
        case 0x2caee4u: goto label_2caee4;
        default: break;
    }

    ctx->pc = 0x2cab98u;

    // 0x2cab98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cab98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cab9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2caba0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2caba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2caba4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2caba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2caba8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2caba8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2cabac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cabacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cabb0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cabb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cabb4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2cabb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2cabb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cabb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cabbc: 0x8e300160  lw          $s0, 0x160($s1)
    ctx->pc = 0x2cabbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x2cabc0: 0xc794924c  lwc1        $f20, -0x6DB4($gp)
    ctx->pc = 0x2cabc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cabc4: 0x8e020aa8  lw          $v0, 0xAA8($s0)
    ctx->pc = 0x2cabc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2728)));
    // 0x2cabc8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CABC8u;
    {
        const bool branch_taken_0x2cabc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABC8u;
        // 0x2cabcc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cabc8) {
            ctx->pc = 0x2CABD8u;
            goto label_2cabd8;
        }
    }
    ctx->pc = 0x2CABD0u;
    // 0x2cabd0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2cabd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2cabd4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2cabd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2cabd8:
    // 0x2cabd8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CABD8u;
    SET_GPR_U32(ctx, 31, 0x2CABE0u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CABD8u, 0x2CABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CABE0u;
label_2cabe0:
    // 0x2cabe0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CABE0u;
    {
        const bool branch_taken_0x2cabe0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABE0u;
        // 0x2cabe4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cabe0) {
            ctx->pc = 0x2CABF4u;
            goto label_2cabf4;
        }
    }
    ctx->pc = 0x2CABE8u;
    // 0x2cabe8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cabe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cabec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CABECu;
    {
        const bool branch_taken_0x2cabec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABECu;
        // 0x2cabf0: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cabec) {
            ctx->pc = 0x2CAC08u;
            goto label_2cac08;
        }
    }
    ctx->pc = 0x2CABF4u;
label_2cabf4:
    // 0x2cabf4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cabf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cabf8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cabf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cabfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cabfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cac00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2cac00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2cac04: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2cac04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2cac08:
    // 0x2cac08: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2cac08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2cac0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cac0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cac10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cac10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cac14: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2cac14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cac18: 0x0  nop
    ctx->pc = 0x2cac18u;
    // NOP
    // 0x2cac1c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CAC1Cu;
    {
        const bool branch_taken_0x2cac1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC1Cu;
        // 0x2cac20: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac1c) {
            ctx->pc = 0x2CAC34u;
            goto label_2cac34;
        }
    }
    ctx->pc = 0x2CAC24u;
    // 0x2cac24: 0xc0b30e8  jal         func_2CC3A0
    ctx->pc = 0x2CAC24u;
    SET_GPR_U32(ctx, 31, 0x2CAC2Cu);
    ctx->pc = 0x2CAC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAC24u;
    // 0x2cac28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC3A0u, 0x2CAC24u, 0x2CAC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAC2Cu;
label_2cac2c:
    // 0x2cac2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cac2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac30: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2cac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_2cac34:
    // 0x2cac34: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2cac34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cac38: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CAC38u;
    {
        const bool branch_taken_0x2cac38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cac38) {
            ctx->pc = 0x2CAC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAC38u;
            // 0x2cac3c: 0x8e030aa8  lw          $v1, 0xAA8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2728)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAC50u;
            goto label_2cac50;
        }
    }
    ctx->pc = 0x2CAC40u;
    // 0x2cac40: 0xc0b368a  jal         func_2CDA28
    ctx->pc = 0x2CAC40u;
    SET_GPR_U32(ctx, 31, 0x2CAC48u);
    ctx->pc = 0x2CAC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAC40u;
    // 0x2cac44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDA28u, 0x2CAC40u, 0x2CAC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAC48u;
label_2cac48:
    // 0x2cac48: 0xae020ae4  sw          $v0, 0xAE4($s0)
    ctx->pc = 0x2cac48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 2));
    // 0x2cac4c: 0x8e030aa8  lw          $v1, 0xAA8($s0)
    ctx->pc = 0x2cac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2728)));
label_2cac50:
    // 0x2cac50: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2cac50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cac54: 0x1073002c  beq         $v1, $s3, . + 4 + (0x2C << 2)
    ctx->pc = 0x2CAC54u;
    {
        const bool branch_taken_0x2cac54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x2CAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC54u;
        // 0x2cac58: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac54) {
            ctx->pc = 0x2CAD08u;
            goto label_2cad08;
        }
    }
    ctx->pc = 0x2CAC5Cu;
    // 0x2cac5c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CAC5Cu;
    {
        const bool branch_taken_0x2cac5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cac5c) {
            ctx->pc = 0x2CAC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAC5Cu;
            // 0x2cac60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAC74u;
            goto label_2cac74;
        }
    }
    ctx->pc = 0x2CAC64u;
    // 0x2cac64: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CAC64u;
    {
        const bool branch_taken_0x2cac64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC64u;
        // 0x2cac68: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac64) {
            ctx->pc = 0x2CAC8Cu;
            goto label_2cac8c;
        }
    }
    ctx->pc = 0x2CAC6Cu;
    // 0x2cac6c: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x2CAC6Cu;
    {
        const bool branch_taken_0x2cac6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC6Cu;
        // 0x2cac70: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac6c) {
            ctx->pc = 0x2CAF5Cu;
            goto label_2caf5c;
        }
    }
    ctx->pc = 0x2CAC74u;
label_2cac74:
    // 0x2cac74: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2CAC74u;
    {
        const bool branch_taken_0x2cac74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CAC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC74u;
        // 0x2cac78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac74) {
            ctx->pc = 0x2CADA0u;
            goto label_2cada0;
        }
    }
    ctx->pc = 0x2CAC7Cu;
    // 0x2cac7c: 0x10620073  beq         $v1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2CAC7Cu;
    {
        const bool branch_taken_0x2cac7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CAC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC7Cu;
        // 0x2cac80: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac7c) {
            ctx->pc = 0x2CAE4Cu;
            goto label_2cae4c;
        }
    }
    ctx->pc = 0x2CAC84u;
    // 0x2cac84: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x2CAC84u;
    {
        const bool branch_taken_0x2cac84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC84u;
        // 0x2cac88: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac84) {
            ctx->pc = 0x2CAF5Cu;
            goto label_2caf5c;
        }
    }
    ctx->pc = 0x2CAC8Cu;
label_2cac8c:
    // 0x2cac8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cac8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac90: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2CAC90u;
    SET_GPR_U32(ctx, 31, 0x2CAC98u);
    ctx->pc = 0x2CAC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAC90u;
    // 0x2cac94: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2CAC90u, 0x2CAC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAC98u;
label_2cac98:
    // 0x2cac98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cac98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cac9c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CAC9Cu;
    SET_GPR_U32(ctx, 31, 0x2CACA4u);
    ctx->pc = 0x2CACA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAC9Cu;
    // 0x2caca0: 0xae020aa8  sw          $v0, 0xAA8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CAC9Cu, 0x2CACA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CACA4u;
label_2caca4:
    // 0x2caca4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CACA4u;
    {
        const bool branch_taken_0x2caca4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CACA4u;
        // 0x2caca8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caca4) {
            ctx->pc = 0x2CACB8u;
            goto label_2cacb8;
        }
    }
    ctx->pc = 0x2CACACu;
    // 0x2cacac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2cacacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cacb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CACB0u;
    {
        const bool branch_taken_0x2cacb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CACB0u;
        // 0x2cacb4: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cacb0) {
            ctx->pc = 0x2CACCCu;
            goto label_2caccc;
        }
    }
    ctx->pc = 0x2CACB8u;
label_2cacb8:
    // 0x2cacb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cacb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cacbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cacbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cacc0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2cacc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cacc4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2cacc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2cacc8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2cacc8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2caccc:
    // 0x2caccc: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2cacccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2cacd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cacd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cacd4: 0xc6010b94  lwc1        $f1, 0xB94($s0)
    ctx->pc = 0x2cacd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cacd8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2cacd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2cacdc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2cacdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2cace0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2cace0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2cace4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2cace4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2cace8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2cace8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cacec: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2cacecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2cacf0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2cacf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2cacf4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2cacf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2cacf8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2cacf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2cacfc: 0xe6010b94  swc1        $f1, 0xB94($s0)
    ctx->pc = 0x2cacfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2964), bits); }
    // 0x2cad00: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x2CAD00u;
    {
        const bool branch_taken_0x2cad00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD00u;
        // 0x2cad04: 0xe6000aac  swc1        $f0, 0xAAC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2732), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad00) {
            ctx->pc = 0x2CAF54u;
            goto label_2caf54;
        }
    }
    ctx->pc = 0x2CAD08u;
label_2cad08:
    // 0x2cad08: 0x8e050a90  lw          $a1, 0xA90($s0)
    ctx->pc = 0x2cad08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2cad0c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2cad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2cad10: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x2cad10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x2cad14: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2cad14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2cad18: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x2cad18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2cad1c: 0x3463fffb  ori         $v1, $v1, 0xFFFB
    ctx->pc = 0x2cad1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65531);
    // 0x2cad20: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x2cad20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2cad24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cad24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cad28: 0xae050a90  sw          $a1, 0xA90($s0)
    ctx->pc = 0x2cad28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 5));
    // 0x2cad2c: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2CAD2Cu;
    SET_GPR_U32(ctx, 31, 0x2CAD34u);
    ctx->pc = 0x2CAD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD2Cu;
    // 0x2cad30: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2CAD2Cu, 0x2CAD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD34u;
label_2cad34:
    // 0x2cad34: 0xc6010b4c  lwc1        $f1, 0xB4C($s0)
    ctx->pc = 0x2cad34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cad38: 0xc6000aac  lwc1        $f0, 0xAAC($s0)
    ctx->pc = 0x2cad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cad3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cad3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cad40: 0x0  nop
    ctx->pc = 0x2cad40u;
    // NOP
    // 0x2cad44: 0x45000083  bc1f        . + 4 + (0x83 << 2)
    ctx->pc = 0x2CAD44u;
    {
        const bool branch_taken_0x2cad44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD44u;
        // 0x2cad48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad44) {
            ctx->pc = 0x2CAF54u;
            goto label_2caf54;
        }
    }
    ctx->pc = 0x2CAD4Cu;
    // 0x2cad4c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CAD4Cu;
    SET_GPR_U32(ctx, 31, 0x2CAD54u);
    ctx->pc = 0x2CAD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD4Cu;
    // 0x2cad50: 0xae020aa8  sw          $v0, 0xAA8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CAD4Cu, 0x2CAD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD54u;
label_2cad54:
    // 0x2cad54: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAD54u;
    {
        const bool branch_taken_0x2cad54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CAD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD54u;
        // 0x2cad58: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad54) {
            ctx->pc = 0x2CAD68u;
            goto label_2cad68;
        }
    }
    ctx->pc = 0x2CAD5Cu;
    // 0x2cad5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cad5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cad60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CAD60u;
    {
        const bool branch_taken_0x2cad60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD60u;
        // 0x2cad64: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad60) {
            ctx->pc = 0x2CAD7Cu;
            goto label_2cad7c;
        }
    }
    ctx->pc = 0x2CAD68u;
label_2cad68:
    // 0x2cad68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cad68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cad6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cad6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cad70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cad70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cad74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2cad74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2cad78: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2cad78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2cad7c:
    // 0x2cad7c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2cad7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2cad80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cad80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cad84: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2cad84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2cad88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2cad88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cad8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cad8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cad90: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2cad90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2cad94: 0xc7819250  lwc1        $f1, -0x6DB0($gp)
    ctx->pc = 0x2cad94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cad98: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2CAD98u;
    {
        const bool branch_taken_0x2cad98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD98u;
        // 0x2cad9c: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad98) {
            ctx->pc = 0x2CAF28u;
            goto label_2caf28;
        }
    }
    ctx->pc = 0x2CADA0u;
label_2cada0:
    // 0x2cada0: 0x8e020a94  lw          $v0, 0xA94($s0)
    ctx->pc = 0x2cada0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
    // 0x2cada4: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2cada4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2cada8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cada8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cadac: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2cadacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cadb0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cadb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cadb4: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2CADB4u;
    SET_GPR_U32(ctx, 31, 0x2CADBCu);
    ctx->pc = 0x2CADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CADB4u;
    // 0x2cadb8: 0xae020a94  sw          $v0, 0xA94($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2708), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2CADB4u, 0x2CADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CADBCu;
label_2cadbc:
    // 0x2cadbc: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x2CADBCu;
    {
        const bool branch_taken_0x2cadbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CADBCu;
        // 0x2cadc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cadbc) {
            ctx->pc = 0x2CAE20u;
            goto label_2cae20;
        }
    }
    ctx->pc = 0x2CADC4u;
    // 0x2cadc4: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2CADC4u;
    SET_GPR_U32(ctx, 31, 0x2CADCCu);
    ctx->pc = 0x2CADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CADC4u;
    // 0x2cadc8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2CADC4u, 0x2CADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CADCCu;
label_2cadcc:
    // 0x2cadcc: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CADCCu;
    SET_GPR_U32(ctx, 31, 0x2CADD4u);
    ctx->pc = 0x2CADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CADCCu;
    // 0x2cadd0: 0xae130aa8  sw          $s3, 0xAA8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CADCCu, 0x2CADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CADD4u;
label_2cadd4:
    // 0x2cadd4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CADD4u;
    {
        const bool branch_taken_0x2cadd4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CADD4u;
        // 0x2cadd8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cadd4) {
            ctx->pc = 0x2CADE8u;
            goto label_2cade8;
        }
    }
    ctx->pc = 0x2CADDCu;
    // 0x2caddc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2caddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cade0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CADE0u;
    {
        const bool branch_taken_0x2cade0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CADE0u;
        // 0x2cade4: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cade0) {
            ctx->pc = 0x2CADFCu;
            goto label_2cadfc;
        }
    }
    ctx->pc = 0x2CADE8u;
label_2cade8:
    // 0x2cade8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cade8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cadec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cadecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cadf0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2cadf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cadf4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2cadf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2cadf8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2cadf8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2cadfc:
    // 0x2cadfc: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2cadfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2cae00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cae00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cae04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cae04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cae08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cae08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cae0c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2cae0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2cae10: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2cae10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2cae14: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2cae14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2cae18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cae18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cae1c: 0xe6000aac  swc1        $f0, 0xAAC($s0)
    ctx->pc = 0x2cae1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2732), bits); }
label_2cae20:
    // 0x2cae20: 0xc6010b4c  lwc1        $f1, 0xB4C($s0)
    ctx->pc = 0x2cae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cae24: 0xc6000aac  lwc1        $f0, 0xAAC($s0)
    ctx->pc = 0x2cae24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cae28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cae28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cae2c: 0x0  nop
    ctx->pc = 0x2cae2cu;
    // NOP
    // 0x2cae30: 0x45000048  bc1f        . + 4 + (0x48 << 2)
    ctx->pc = 0x2CAE30u;
    {
        const bool branch_taken_0x2cae30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE30u;
        // 0x2cae34: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae30) {
            ctx->pc = 0x2CAF54u;
            goto label_2caf54;
        }
    }
    ctx->pc = 0x2CAE38u;
    // 0x2cae38: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2cae38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2cae3c: 0xae030aa8  sw          $v1, 0xAA8($s0)
    ctx->pc = 0x2cae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 3));
    // 0x2cae40: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2cae40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2cae44: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2CAE44u;
    {
        const bool branch_taken_0x2cae44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE44u;
        // 0x2cae48: 0xae020a90  sw          $v0, 0xA90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae44) {
            ctx->pc = 0x2CAF54u;
            goto label_2caf54;
        }
    }
    ctx->pc = 0x2CAE4Cu;
label_2cae4c:
    // 0x2cae4c: 0x16400019  bnez        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x2CAE4Cu;
    {
        const bool branch_taken_0x2cae4c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE4Cu;
        // 0x2cae50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae4c) {
            ctx->pc = 0x2CAEB4u;
            goto label_2caeb4;
        }
    }
    ctx->pc = 0x2CAE54u;
    // 0x2cae54: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2cae54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2cae58: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2cae58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2cae5c: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2CAE5Cu;
    {
        const bool branch_taken_0x2cae5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE5Cu;
        // 0x2cae60: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae5c) {
            ctx->pc = 0x2CAF34u;
            goto label_2caf34;
        }
    }
    ctx->pc = 0x2CAE64u;
    // 0x2cae64: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CAE64u;
    SET_GPR_U32(ctx, 31, 0x2CAE6Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CAE64u, 0x2CAE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE6Cu;
label_2cae6c:
    // 0x2cae6c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAE6Cu;
    {
        const bool branch_taken_0x2cae6c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CAE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE6Cu;
        // 0x2cae70: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae6c) {
            ctx->pc = 0x2CAE80u;
            goto label_2cae80;
        }
    }
    ctx->pc = 0x2CAE74u;
    // 0x2cae74: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2cae74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cae78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CAE78u;
    {
        const bool branch_taken_0x2cae78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE78u;
        // 0x2cae7c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae78) {
            ctx->pc = 0x2CAE94u;
            goto label_2cae94;
        }
    }
    ctx->pc = 0x2CAE80u;
label_2cae80:
    // 0x2cae80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cae80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cae84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cae84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cae88: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2cae88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cae8c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2cae8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2cae90: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2cae90u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2cae94:
    // 0x2cae94: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2cae94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2cae98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cae98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cae9c: 0xc7819254  lwc1        $f1, -0x6DAC($gp)
    ctx->pc = 0x2cae9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2caea0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2caea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2caea4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2caea4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2caea8: 0x0  nop
    ctx->pc = 0x2caea8u;
    // NOP
    // 0x2caeac: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2CAEACu;
    {
        const bool branch_taken_0x2caeac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEACu;
        // 0x2caeb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caeac) {
            ctx->pc = 0x2CAED8u;
            goto label_2caed8;
        }
    }
    ctx->pc = 0x2CAEB4u;
label_2caeb4:
    // 0x2caeb4: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2CAEB4u;
    SET_GPR_U32(ctx, 31, 0x2CAEBCu);
    ctx->pc = 0x2CAEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAEB4u;
    // 0x2caeb8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2CAEB4u, 0x2CAEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAEBCu;
label_2caebc:
    // 0x2caebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2caebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2caec0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CAEC0u;
    SET_GPR_U32(ctx, 31, 0x2CAEC8u);
    ctx->pc = 0x2CAEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAEC0u;
    // 0x2caec4: 0xae020aa8  sw          $v0, 0xAA8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CAEC0u, 0x2CAEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAEC8u;
label_2caec8:
    // 0x2caec8: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CAEC8u;
    {
        const bool branch_taken_0x2caec8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2CAECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEC8u;
        // 0x2caecc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caec8) {
            ctx->pc = 0x2CAEECu;
            goto label_2caeec;
        }
    }
    ctx->pc = 0x2CAED0u;
    // 0x2caed0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2CAED0u;
    {
        const bool branch_taken_0x2caed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAED0u;
        // 0x2caed4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caed0) {
            ctx->pc = 0x2CAEFCu;
            goto label_2caefc;
        }
    }
    ctx->pc = 0x2CAED8u;
label_2caed8:
    // 0x2caed8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2caed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2caedc: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CAEDCu;
    SET_GPR_U32(ctx, 31, 0x2CAEE4u);
    ctx->pc = 0x2CAEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAEDCu;
    // 0x2caee0: 0xae020aa8  sw          $v0, 0xAA8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CAEDCu, 0x2CAEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAEE4u;
label_2caee4:
    // 0x2caee4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAEE4u;
    {
        const bool branch_taken_0x2caee4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CAEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEE4u;
        // 0x2caee8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caee4) {
            ctx->pc = 0x2CAEF8u;
            goto label_2caef8;
        }
    }
    ctx->pc = 0x2CAEECu;
label_2caeec:
    // 0x2caeec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2caeecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2caef0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CAEF0u;
    {
        const bool branch_taken_0x2caef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEF0u;
        // 0x2caef4: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caef0) {
            ctx->pc = 0x2CAF0Cu;
            goto label_2caf0c;
        }
    }
    ctx->pc = 0x2CAEF8u;
label_2caef8:
    // 0x2caef8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2caef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2caefc:
    // 0x2caefc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2caefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2caf00: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2caf00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2caf04: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2caf04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2caf08: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2caf08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2caf0c:
    // 0x2caf0c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2caf0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2caf10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2caf10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2caf14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2caf14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2caf18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2caf18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2caf1c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2caf1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2caf20: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2caf20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2caf24: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2caf24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2caf28:
    // 0x2caf28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2caf28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2caf2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CAF2Cu;
    {
        const bool branch_taken_0x2caf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF2Cu;
        // 0x2caf30: 0xe6000aac  swc1        $f0, 0xAAC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2732), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caf2c) {
            ctx->pc = 0x2CAF54u;
            goto label_2caf54;
        }
    }
    ctx->pc = 0x2CAF34u;
label_2caf34:
    // 0x2caf34: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2caf34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2caf38: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2caf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2caf3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2caf3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2caf40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2caf40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caf44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2caf44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caf48: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2caf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2caf4c: 0x80b20be  j           func_2C82F8
    ctx->pc = 0x2CAF4Cu;
    ctx->pc = 0x2CAF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAF4Cu;
    // 0x2caf50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    enemySetMoveMode_0x2c82f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2CAF54u;
label_2caf54:
    // 0x2caf54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2caf54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2caf58: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2caf58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2caf5c:
    // 0x2caf5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2caf5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2caf60: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2caf60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caf64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2caf64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caf68: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2caf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2caf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF6Cu;
        // 0x2caf70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAF74u;
}
