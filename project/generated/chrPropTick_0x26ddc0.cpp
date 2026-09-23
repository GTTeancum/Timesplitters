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

// Function: chrPropTick
// Address: 0x26ddc0 - 0x26e8d8
void chrPropTick_0x26ddc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrPropTick_0x26ddc0");
#endif

    switch (ctx->pc) {
        case 0x26dee0u: goto label_26dee0;
        case 0x26df70u: goto label_26df70;
        case 0x26df8cu: goto label_26df8c;
        case 0x26dfa8u: goto label_26dfa8;
        case 0x26dfbcu: goto label_26dfbc;
        case 0x26dfdcu: goto label_26dfdc;
        case 0x26dffcu: goto label_26dffc;
        case 0x26e004u: goto label_26e004;
        case 0x26e028u: goto label_26e028;
        case 0x26e05cu: goto label_26e05c;
        case 0x26e2a8u: goto label_26e2a8;
        case 0x26e310u: goto label_26e310;
        case 0x26e39cu: goto label_26e39c;
        case 0x26e474u: goto label_26e474;
        case 0x26e50cu: goto label_26e50c;
        case 0x26e5ccu: goto label_26e5cc;
        case 0x26e63cu: goto label_26e63c;
        case 0x26e6c4u: goto label_26e6c4;
        case 0x26e748u: goto label_26e748;
        case 0x26e7d4u: goto label_26e7d4;
        case 0x26e8a4u: goto label_26e8a4;
        default: break;
    }

    ctx->pc = 0x26ddc0u;

    // 0x26ddc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26ddc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26ddc4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26ddc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26ddc8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26ddc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26ddcc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26ddccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26ddd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26ddd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ddd4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x26ddd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26ddd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26ddd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26dddc: 0x8e300160  lw          $s0, 0x160($s1)
    ctx->pc = 0x26dddcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x26dde0: 0xc6020b54  lwc1        $f2, 0xB54($s0)
    ctx->pc = 0x26dde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26dde4: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x26dde4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dde8: 0x0  nop
    ctx->pc = 0x26dde8u;
    // NOP
    // 0x26ddec: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x26DDECu;
    {
        const bool branch_taken_0x26ddec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDECu;
        // 0x26ddf0: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ddec) {
            ctx->pc = 0x26DE10u;
            goto label_26de10;
        }
    }
    ctx->pc = 0x26DDF4u;
    // 0x26ddf4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x26ddf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x26ddf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26ddf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ddfc: 0x0  nop
    ctx->pc = 0x26ddfcu;
    // NOP
    // 0x26de00: 0x0  nop
    ctx->pc = 0x26de00u;
    // NOP
    // 0x26de04: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26de04u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x26de08: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x26de08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26de0c: 0xe6000b54  swc1        $f0, 0xB54($s0)
    ctx->pc = 0x26de0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2900), bits); }
label_26de10:
    // 0x26de10: 0x8e0211a8  lw          $v0, 0x11A8($s0)
    ctx->pc = 0x26de10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4520)));
    // 0x26de14: 0x54400065  bnel        $v0, $zero, . + 4 + (0x65 << 2)
    ctx->pc = 0x26DE14u;
    {
        const bool branch_taken_0x26de14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26de14) {
            ctx->pc = 0x26DE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DE14u;
            // 0x26de18: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DFACu;
            goto label_26dfac;
        }
    }
    ctx->pc = 0x26DE1Cu;
    // 0x26de1c: 0xc6010b54  lwc1        $f1, 0xB54($s0)
    ctx->pc = 0x26de1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26de20: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x26de20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x26de24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26de24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26de28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26de28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26de2c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x26de2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x26de30: 0x0  nop
    ctx->pc = 0x26de30u;
    // NOP
    // 0x26de34: 0x0  nop
    ctx->pc = 0x26de34u;
    // NOP
    // 0x26de38: 0x46000943  div.s       $f5, $f1, $f0
    ctx->pc = 0x26de38u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[5] = ctx->f[1] / ctx->f[0];
    // 0x26de3c: 0x46053034  c.lt.s      $f6, $f5
    ctx->pc = 0x26de3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26de40: 0x0  nop
    ctx->pc = 0x26de40u;
    // NOP
    // 0x26de44: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x26DE44u;
    {
        const bool branch_taken_0x26de44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26de44) {
            ctx->pc = 0x26DE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DE44u;
            // 0x26de48: 0x46003146  mov.s       $f5, $f6 (Delay Slot)
            ctx->f[5] = FPU_MOV_S(ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DE4Cu;
            goto label_26de4c;
        }
    }
    ctx->pc = 0x26DE4Cu;
label_26de4c:
    // 0x26de4c: 0x46056034  c.lt.s      $f12, $f5
    ctx->pc = 0x26de4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26de50: 0x0  nop
    ctx->pc = 0x26de50u;
    // NOP
    // 0x26de54: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
    ctx->pc = 0x26DE54u;
    {
        const bool branch_taken_0x26de54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE54u;
        // 0x26de58: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de54) {
            ctx->pc = 0x26DF94u;
            goto label_26df94;
        }
    }
    ctx->pc = 0x26DE5Cu;
    // 0x26de5c: 0xc7809da8  lwc1        $f0, -0x6258($gp)
    ctx->pc = 0x26de5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26de60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x26de60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x26de64: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x26de64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x26de68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26de68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26de6c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x26de6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x26de70: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26de70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26de74: 0xc7848484  lwc1        $f4, -0x7B7C($gp)
    ctx->pc = 0x26de74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26de78: 0x24635c60  addiu       $v1, $v1, 0x5C60
    ctx->pc = 0x26de78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23648));
    // 0x26de7c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x26de7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x26de80: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26de80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x26de84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26de84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26de88: 0x0  nop
    ctx->pc = 0x26de88u;
    // NOP
    // 0x26de8c: 0x0  nop
    ctx->pc = 0x26de8cu;
    // NOP
    // 0x26de90: 0x46050304  c1          0x50304
    ctx->pc = 0x26de90u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[5]);
    // 0x26de94: 0x0  nop
    ctx->pc = 0x26de94u;
    // NOP
    // 0x26de98: 0x0  nop
    ctx->pc = 0x26de98u;
    // NOP
    // 0x26de9c: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x26de9cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x26dea0: 0x460c6032  c.eq.s      $f12, $f12
    ctx->pc = 0x26dea0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dea4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x26dea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x26dea8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26dea8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26deac: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26deacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x26deb0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x26deb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26deb4: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x26deb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x26deb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26debc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26debcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26dec0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26dec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26dec4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x26dec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x26dec8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26dec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26decc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26deccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26ded0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x26DED0u;
    {
        const bool branch_taken_0x26ded0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DED0u;
        // 0x26ded4: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ded0) {
            ctx->pc = 0x26DEE4u;
            goto label_26dee4;
        }
    }
    ctx->pc = 0x26DED8u;
    // 0x26ded8: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x26DED8u;
    SET_GPR_U32(ctx, 31, 0x26DEE0u);
    ctx->pc = 0x26DEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DED8u;
    // 0x26dedc: 0x46002b06  mov.s       $f12, $f5 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[5]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x26DED8u, 0x26DEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DEE0u;
label_26dee0:
    // 0x26dee0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26dee0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_26dee4:
    // 0x26dee4: 0x8e0211a4  lw          $v0, 0x11A4($s0)
    ctx->pc = 0x26dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4516)));
    // 0x26dee8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x26DEE8u;
    {
        const bool branch_taken_0x26dee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEE8u;
        // 0x26deec: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dee8) {
            ctx->pc = 0x26DF78u;
            goto label_26df78;
        }
    }
    ctx->pc = 0x26DEF0u;
    // 0x26def0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x26def0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x26def4: 0x460002c  bltz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x26DEF4u;
    {
        const bool branch_taken_0x26def4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x26DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEF4u;
        // 0x26def8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26def4) {
            ctx->pc = 0x26DFA8u;
            goto label_26dfa8;
        }
    }
    ctx->pc = 0x26DEFCu;
    // 0x26defc: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26DEFCu;
    {
        const bool branch_taken_0x26defc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEFCu;
        // 0x26df00: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26defc) {
            ctx->pc = 0x26DF44u;
            goto label_26df44;
        }
    }
    ctx->pc = 0x26DF04u;
    // 0x26df04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26DF04u;
    {
        const bool branch_taken_0x26df04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF04u;
        // 0x26df08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df04) {
            ctx->pc = 0x26DF1Cu;
            goto label_26df1c;
        }
    }
    ctx->pc = 0x26DF0Cu;
    // 0x26df0c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x26DF0Cu;
    {
        const bool branch_taken_0x26df0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF0Cu;
        // 0x26df10: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df0c) {
            ctx->pc = 0x26DF34u;
            goto label_26df34;
        }
    }
    ctx->pc = 0x26DF14u;
    // 0x26df14: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x26DF14u;
    {
        const bool branch_taken_0x26df14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF14u;
        // 0x26df18: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df14) {
            ctx->pc = 0x26DF64u;
            goto label_26df64;
        }
    }
    ctx->pc = 0x26DF1Cu;
label_26df1c:
    // 0x26df1c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26DF1Cu;
    {
        const bool branch_taken_0x26df1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF1Cu;
        // 0x26df20: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df1c) {
            ctx->pc = 0x26DF5Cu;
            goto label_26df5c;
        }
    }
    ctx->pc = 0x26DF24u;
    // 0x26df24: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26DF24u;
    {
        const bool branch_taken_0x26df24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF24u;
        // 0x26df28: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df24) {
            ctx->pc = 0x26DF54u;
            goto label_26df54;
        }
    }
    ctx->pc = 0x26DF2Cu;
    // 0x26df2c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26DF2Cu;
    {
        const bool branch_taken_0x26df2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF2Cu;
        // 0x26df30: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df2c) {
            ctx->pc = 0x26DF64u;
            goto label_26df64;
        }
    }
    ctx->pc = 0x26DF34u;
label_26df34:
    // 0x26df34: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x26df34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26df38: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x26df38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x26df3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26DF3Cu;
    {
        const bool branch_taken_0x26df3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF3Cu;
        // 0x26df40: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df3c) {
            ctx->pc = 0x26DF68u;
            goto label_26df68;
        }
    }
    ctx->pc = 0x26DF44u;
label_26df44:
    // 0x26df44: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x26df44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26df48: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x26df48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26df4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26DF4Cu;
    {
        const bool branch_taken_0x26df4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF4Cu;
        // 0x26df50: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df4c) {
            ctx->pc = 0x26DF68u;
            goto label_26df68;
        }
    }
    ctx->pc = 0x26DF54u;
label_26df54:
    // 0x26df54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26DF54u;
    {
        const bool branch_taken_0x26df54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF54u;
        // 0x26df58: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df54) {
            ctx->pc = 0x26DF64u;
            goto label_26df64;
        }
    }
    ctx->pc = 0x26DF5Cu;
label_26df5c:
    // 0x26df5c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x26df5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x26df60: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x26df60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_26df64:
    // 0x26df64: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x26df64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_26df68:
    // 0x26df68: 0xc099002  jal         func_264008
    ctx->pc = 0x26DF68u;
    SET_GPR_U32(ctx, 31, 0x26DF70u);
    ctx->pc = 0x26DF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DF68u;
    // 0x26df6c: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264008u, 0x26DF68u, 0x26DF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DF70u;
label_26df70:
    // 0x26df70: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26DF70u;
    {
        const bool branch_taken_0x26df70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF70u;
        // 0x26df74: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df70) {
            ctx->pc = 0x26DFACu;
            goto label_26dfac;
        }
    }
    ctx->pc = 0x26DF78u;
label_26df78:
    // 0x26df78: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x26df78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26df7c: 0x8c85013c  lw          $a1, 0x13C($a0)
    ctx->pc = 0x26df7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x26df80: 0x8c860140  lw          $a2, 0x140($a0)
    ctx->pc = 0x26df80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x26df84: 0xc099002  jal         func_264008
    ctx->pc = 0x26DF84u;
    SET_GPR_U32(ctx, 31, 0x26DF8Cu);
    ctx->pc = 0x26DF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DF84u;
    // 0x26df88: 0x8c870144  lw          $a3, 0x144($a0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264008u, 0x26DF84u, 0x26DF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DF8Cu;
label_26df8c:
    // 0x26df8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26DF8Cu;
    {
        const bool branch_taken_0x26df8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF8Cu;
        // 0x26df90: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df8c) {
            ctx->pc = 0x26DFACu;
            goto label_26dfac;
        }
    }
    ctx->pc = 0x26DF94u;
label_26df94:
    // 0x26df94: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x26df94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26df98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26df98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26df9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26df9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dfa0: 0xc099002  jal         func_264008
    ctx->pc = 0x26DFA0u;
    SET_GPR_U32(ctx, 31, 0x26DFA8u);
    ctx->pc = 0x26DFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DFA0u;
    // 0x26dfa4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264008u, 0x26DFA0u, 0x26DFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DFA8u;
label_26dfa8:
    // 0x26dfa8: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x26dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_26dfac:
    // 0x26dfac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26DFACu;
    {
        const bool branch_taken_0x26dfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFACu;
        // 0x26dfb0: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfac) {
            ctx->pc = 0x26DFC4u;
            goto label_26dfc4;
        }
    }
    ctx->pc = 0x26DFB4u;
    // 0x26dfb4: 0xc0a5476  jal         func_2951D8
    ctx->pc = 0x26DFB4u;
    SET_GPR_U32(ctx, 31, 0x26DFBCu);
    ctx->pc = 0x26DFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DFB4u;
    // 0x26dfb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2951D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2951D8u, 0x26DFB4u, 0x26DFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DFBCu;
label_26dfbc:
    // 0x26dfbc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DFBCu;
    {
        const bool branch_taken_0x26dfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFBCu;
        // 0x26dfc0: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfbc) {
            ctx->pc = 0x26DFDCu;
            goto label_26dfdc;
        }
    }
    ctx->pc = 0x26DFC4u;
label_26dfc4:
    // 0x26dfc4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x26dfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26dfc8: 0xc78c8488  lwc1        $f12, -0x7B78($gp)
    ctx->pc = 0x26dfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26dfcc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x26dfccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26dfd0: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x26dfd0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x26dfd4: 0xc08906a  jal         func_2241A8
    ctx->pc = 0x26DFD4u;
    SET_GPR_U32(ctx, 31, 0x26DFDCu);
    ctx->pc = 0x26DFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DFD4u;
    // 0x26dfd8: 0x8e060104  lw          $a2, 0x104($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2241A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2241A8u, 0x26DFD4u, 0x26DFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DFDCu;
label_26dfdc:
    // 0x26dfdc: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x26dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x26dfe0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26DFE0u;
    {
        const bool branch_taken_0x26dfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFE0u;
        // 0x26dfe4: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfe0) {
            ctx->pc = 0x26DFFCu;
            goto label_26dffc;
        }
    }
    ctx->pc = 0x26DFE8u;
    // 0x26dfe8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x26dfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x26dfec: 0xc78c848c  lwc1        $f12, -0x7B74($gp)
    ctx->pc = 0x26dfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26dff0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x26dff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26dff4: 0xc088f98  jal         func_223E60
    ctx->pc = 0x26DFF4u;
    SET_GPR_U32(ctx, 31, 0x26DFFCu);
    ctx->pc = 0x26DFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DFF4u;
    // 0x26dff8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x26DFF4u, 0x26DFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DFFCu;
label_26dffc:
    // 0x26dffc: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x26DFFCu;
    SET_GPR_U32(ctx, 31, 0x26E004u);
    ctx->pc = 0x26E000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DFFCu;
    // 0x26e000: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E320u, 0x26DFFCu, 0x26E004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E004u;
label_26e004:
    // 0x26e004: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e008: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26E008u;
    {
        const bool branch_taken_0x26e008 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E008u;
        // 0x26e00c: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e008) {
            ctx->pc = 0x26E030u;
            goto label_26e030;
        }
    }
    ctx->pc = 0x26E010u;
    // 0x26e010: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x26e010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e014: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x26e014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x26e018: 0xc78c8490  lwc1        $f12, -0x7B70($gp)
    ctx->pc = 0x26e018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e01c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x26e01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e020: 0xc088f98  jal         func_223E60
    ctx->pc = 0x26E020u;
    SET_GPR_U32(ctx, 31, 0x26E028u);
    ctx->pc = 0x26E024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E020u;
    // 0x26e024: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x26E020u, 0x26E028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E028u;
label_26e028:
    // 0x26e028: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26E028u;
    {
        const bool branch_taken_0x26e028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E028u;
        // 0x26e02c: 0x8f839f70  lw          $v1, -0x6090($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e028) {
            ctx->pc = 0x26E060u;
            goto label_26e060;
        }
    }
    ctx->pc = 0x26E030u;
label_26e030:
    // 0x26e030: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x26e030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x26e034: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26e034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26e038: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26e038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26e03c: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26E03Cu;
    {
        const bool branch_taken_0x26e03c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x26E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E03Cu;
        // 0x26e040: 0x8f839f70  lw          $v1, -0x6090($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e03c) {
            ctx->pc = 0x26E060u;
            goto label_26e060;
        }
    }
    ctx->pc = 0x26E044u;
    // 0x26e044: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x26e044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e048: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x26e048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x26e04c: 0xc78c8494  lwc1        $f12, -0x7B6C($gp)
    ctx->pc = 0x26e04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e050: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x26e050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e054: 0xc088f98  jal         func_223E60
    ctx->pc = 0x26E054u;
    SET_GPR_U32(ctx, 31, 0x26E05Cu);
    ctx->pc = 0x26E058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E054u;
    // 0x26e058: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x26E054u, 0x26E05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E05Cu;
label_26e05c:
    // 0x26e05c: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x26e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
label_26e060:
    // 0x26e060: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x26e060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x26e064: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E064u;
    {
        const bool branch_taken_0x26e064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26e064) {
            ctx->pc = 0x26E068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E064u;
            // 0x26e068: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E074u;
            goto label_26e074;
        }
    }
    ctx->pc = 0x26E06Cu;
    // 0x26e06c: 0x10000214  b           . + 4 + (0x214 << 2)
    ctx->pc = 0x26E06Cu;
    {
        const bool branch_taken_0x26e06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E06Cu;
        // 0x26e070: 0xae200158  sw          $zero, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e06c) {
            ctx->pc = 0x26E8C0u;
            goto label_26e8c0;
        }
    }
    ctx->pc = 0x26E074u;
label_26e074:
    // 0x26e074: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x26E074u;
    {
        const bool branch_taken_0x26e074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e074) {
            ctx->pc = 0x26E078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E074u;
            // 0x26e078: 0x8e240158  lw          $a0, 0x158($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E098u;
            goto label_26e098;
        }
    }
    ctx->pc = 0x26E07Cu;
    // 0x26e07c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e080: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26e080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e084: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26e084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26e088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e08c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x26e08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26e090: 0x80aed1c  j           func_2BB470
    ctx->pc = 0x26E090u;
    ctx->pc = 0x26E094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E090u;
    // 0x26e094: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB470u;
    enemyTick_0x2bb470(rdram, ctx, runtime); return;
    ctx->pc = 0x26E098u;
label_26e098:
    // 0x26e098: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x26e098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x26e09c: 0xae24015c  sw          $a0, 0x15C($s1)
    ctx->pc = 0x26e09cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 4));
    // 0x26e0a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e0a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26e0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e0a8: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x26E0A8u;
    {
        const bool branch_taken_0x26e0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0A8u;
        // 0x26e0ac: 0x28820014  slti        $v0, $a0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0a8) {
            ctx->pc = 0x26E238u;
            goto label_26e238;
        }
    }
    ctx->pc = 0x26E0B0u;
    // 0x26e0b0: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x26e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x26e0b4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x26E0B4u;
    {
        const bool branch_taken_0x26e0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e0b4) {
            ctx->pc = 0x26E0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E0B4u;
            // 0x26e0b8: 0x8e02014c  lw          $v0, 0x14C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E130u;
            goto label_26e130;
        }
    }
    ctx->pc = 0x26E0BCu;
    // 0x26e0bc: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x26e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x26e0c0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x26E0C0u;
    {
        const bool branch_taken_0x26e0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0C0u;
        // 0x26e0c4: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0c0) {
            ctx->pc = 0x26E124u;
            goto label_26e124;
        }
    }
    ctx->pc = 0x26E0C8u;
    // 0x26e0c8: 0x8e030178  lw          $v1, 0x178($s0)
    ctx->pc = 0x26e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x26e0cc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x26e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x26e0d0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x26e0d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26e0d4: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x26e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x26e0d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26e0dc: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x26e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x26e0e0: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x26e0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x26e0e4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x26E0E4u;
    {
        const bool branch_taken_0x26e0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0E4u;
        // 0x26e0e8: 0x30420004  andi        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0e4) {
            ctx->pc = 0x26E10Cu;
            goto label_26e10c;
        }
    }
    ctx->pc = 0x26E0ECu;
    // 0x26e0ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26E0ECu;
    {
        const bool branch_taken_0x26e0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0ECu;
        // 0x26e0f0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0ec) {
            ctx->pc = 0x26E104u;
            goto label_26e104;
        }
    }
    ctx->pc = 0x26E0F4u;
    // 0x26e0f4: 0x8e020a94  lw          $v0, 0xA94($s0)
    ctx->pc = 0x26e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
    // 0x26e0f8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26e0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26e0fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26E0FCu;
    {
        const bool branch_taken_0x26e0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0FCu;
        // 0x26e100: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0fc) {
            ctx->pc = 0x26E124u;
            goto label_26e124;
        }
    }
    ctx->pc = 0x26E104u;
label_26e104:
    // 0x26e104: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x26E104u;
    {
        const bool branch_taken_0x26e104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E104u;
        // 0x26e108: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e104) {
            ctx->pc = 0x26E210u;
            goto label_26e210;
        }
    }
    ctx->pc = 0x26E10Cu;
label_26e10c:
    // 0x26e10c: 0x8e020a94  lw          $v0, 0xA94($s0)
    ctx->pc = 0x26e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
    // 0x26e110: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26e110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26e114: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E114u;
    {
        const bool branch_taken_0x26e114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E114u;
        // 0x26e118: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e114) {
            ctx->pc = 0x26E124u;
            goto label_26e124;
        }
    }
    ctx->pc = 0x26E11Cu;
    // 0x26e11c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x26E11Cu;
    {
        const bool branch_taken_0x26e11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E11Cu;
        // 0x26e120: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e11c) {
            ctx->pc = 0x26E210u;
            goto label_26e210;
        }
    }
    ctx->pc = 0x26E124u;
label_26e124:
    // 0x26e124: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x26e124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26e128: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x26E128u;
    {
        const bool branch_taken_0x26e128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E128u;
        // 0x26e12c: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e128) {
            ctx->pc = 0x26E210u;
            goto label_26e210;
        }
    }
    ctx->pc = 0x26E130u;
label_26e130:
    // 0x26e130: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26E130u;
    {
        const bool branch_taken_0x26e130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E130u;
        // 0x26e134: 0x8e0201b8  lw          $v0, 0x1B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e130) {
            ctx->pc = 0x26E19Cu;
            goto label_26e19c;
        }
    }
    ctx->pc = 0x26E138u;
    // 0x26e138: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26E138u;
    {
        const bool branch_taken_0x26e138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E138u;
        // 0x26e13c: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e138) {
            ctx->pc = 0x26E1A4u;
            goto label_26e1a4;
        }
    }
    ctx->pc = 0x26E140u;
    // 0x26e140: 0x8e030178  lw          $v1, 0x178($s0)
    ctx->pc = 0x26e140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x26e144: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x26e144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x26e148: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x26e148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26e14c: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x26e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x26e150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26e150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26e154: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x26e154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x26e158: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x26e158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x26e15c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x26E15Cu;
    {
        const bool branch_taken_0x26e15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E15Cu;
        // 0x26e160: 0x30420004  andi        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e15c) {
            ctx->pc = 0x26E184u;
            goto label_26e184;
        }
    }
    ctx->pc = 0x26E164u;
    // 0x26e164: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26E164u;
    {
        const bool branch_taken_0x26e164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E164u;
        // 0x26e168: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e164) {
            ctx->pc = 0x26E17Cu;
            goto label_26e17c;
        }
    }
    ctx->pc = 0x26E16Cu;
    // 0x26e16c: 0x8e020a94  lw          $v0, 0xA94($s0)
    ctx->pc = 0x26e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
    // 0x26e170: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26e170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26e174: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x26E174u;
    {
        const bool branch_taken_0x26e174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E174u;
        // 0x26e178: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e174) {
            ctx->pc = 0x26E20Cu;
            goto label_26e20c;
        }
    }
    ctx->pc = 0x26E17Cu;
label_26e17c:
    // 0x26e17c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x26E17Cu;
    {
        const bool branch_taken_0x26e17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E17Cu;
        // 0x26e180: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e17c) {
            ctx->pc = 0x26E210u;
            goto label_26e210;
        }
    }
    ctx->pc = 0x26E184u;
label_26e184:
    // 0x26e184: 0x8e020a94  lw          $v0, 0xA94($s0)
    ctx->pc = 0x26e184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
    // 0x26e188: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26e188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26e18c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x26E18Cu;
    {
        const bool branch_taken_0x26e18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E18Cu;
        // 0x26e190: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e18c) {
            ctx->pc = 0x26E20Cu;
            goto label_26e20c;
        }
    }
    ctx->pc = 0x26E194u;
    // 0x26e194: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x26E194u;
    {
        const bool branch_taken_0x26e194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E194u;
        // 0x26e198: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e194) {
            ctx->pc = 0x26E210u;
            goto label_26e210;
        }
    }
    ctx->pc = 0x26E19Cu;
label_26e19c:
    // 0x26e19c: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x26E19Cu;
    {
        const bool branch_taken_0x26e19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e19c) {
            ctx->pc = 0x26E1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E19Cu;
            // 0x26e1a0: 0xae200158  sw          $zero, 0x158($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E210u;
            goto label_26e210;
        }
    }
    ctx->pc = 0x26E1A4u;
label_26e1a4:
    // 0x26e1a4: 0x8e040178  lw          $a0, 0x178($s0)
    ctx->pc = 0x26e1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x26e1a8: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x26e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x26e1ac: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x26e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x26e1b0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x26e1b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26e1b4: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x26e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x26e1b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26e1bc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x26e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x26e1c0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x26e1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x26e1c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26E1C4u;
    {
        const bool branch_taken_0x26e1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1C4u;
        // 0x26e1c8: 0x8e020a94  lw          $v0, 0xA94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1c4) {
            ctx->pc = 0x26E1ECu;
            goto label_26e1ec;
        }
    }
    ctx->pc = 0x26E1CCu;
    // 0x26e1cc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26e1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26e1d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E1D0u;
    {
        const bool branch_taken_0x26e1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1D0u;
        // 0x26e1d4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1d0) {
            ctx->pc = 0x26E1E0u;
            goto label_26e1e0;
        }
    }
    ctx->pc = 0x26E1D8u;
    // 0x26e1d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26E1D8u;
    {
        const bool branch_taken_0x26e1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1D8u;
        // 0x26e1dc: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1d8) {
            ctx->pc = 0x26E210u;
            goto label_26e210;
        }
    }
    ctx->pc = 0x26E1E0u;
label_26e1e0:
    // 0x26e1e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26e1e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26E1E4u;
    {
        const bool branch_taken_0x26e1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1E4u;
        // 0x26e1e8: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1e4) {
            ctx->pc = 0x26E210u;
            goto label_26e210;
        }
    }
    ctx->pc = 0x26E1ECu;
label_26e1ec:
    // 0x26e1ec: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26e1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26e1f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E1F0u;
    {
        const bool branch_taken_0x26e1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1F0u;
        // 0x26e1f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1f0) {
            ctx->pc = 0x26E200u;
            goto label_26e200;
        }
    }
    ctx->pc = 0x26E1F8u;
    // 0x26e1f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26E1F8u;
    {
        const bool branch_taken_0x26e1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1F8u;
        // 0x26e1fc: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1f8) {
            ctx->pc = 0x26E210u;
            goto label_26e210;
        }
    }
    ctx->pc = 0x26E200u;
label_26e200:
    // 0x26e200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e204: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26E204u;
    {
        const bool branch_taken_0x26e204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E204u;
        // 0x26e208: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e204) {
            ctx->pc = 0x26E210u;
            goto label_26e210;
        }
    }
    ctx->pc = 0x26E20Cu;
label_26e20c:
    // 0x26e20c: 0xae200158  sw          $zero, 0x158($s1)
    ctx->pc = 0x26e20cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
label_26e210:
    // 0x26e210: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x26e210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26e214: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26e214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e218: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x26e218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x26e21c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x26e21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26e220: 0x146501a8  bne         $v1, $a1, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x26E220u;
    {
        const bool branch_taken_0x26e220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x26E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E220u;
        // 0x26e224: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e220) {
            ctx->pc = 0x26E8C4u;
            goto label_26e8c4;
        }
    }
    ctx->pc = 0x26E228u;
    // 0x26e228: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x26e228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x26e22c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x26e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x26e230: 0x100001a4  b           . + 4 + (0x1A4 << 2)
    ctx->pc = 0x26E230u;
    {
        const bool branch_taken_0x26e230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E230u;
        // 0x26e234: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e230) {
            ctx->pc = 0x26E8C4u;
            goto label_26e8c4;
        }
    }
    ctx->pc = 0x26E238u;
label_26e238:
    // 0x26e238: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E238u;
    {
        const bool branch_taken_0x26e238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e238) {
            ctx->pc = 0x26E23Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E238u;
            // 0x26e23c: 0x8e0201e4  lw          $v0, 0x1E4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E24Cu;
            goto label_26e24c;
        }
    }
    ctx->pc = 0x26E240u;
    // 0x26e240: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x26e240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x26e244: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x26e244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
    // 0x26e248: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x26e248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_26e24c:
    // 0x26e24c: 0x5040006e  beql        $v0, $zero, . + 4 + (0x6E << 2)
    ctx->pc = 0x26E24Cu;
    {
        const bool branch_taken_0x26e24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e24c) {
            ctx->pc = 0x26E250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E24Cu;
            // 0x26e250: 0x8e02014c  lw          $v0, 0x14C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E254u;
    // 0x26e254: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x26e254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x26e258: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x26E258u;
    {
        const bool branch_taken_0x26e258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E258u;
        // 0x26e25c: 0x24020190  addiu       $v0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e258) {
            ctx->pc = 0x26E3F8u;
            goto label_26e3f8;
        }
    }
    ctx->pc = 0x26E260u;
    // 0x26e260: 0x8e040178  lw          $a0, 0x178($s0)
    ctx->pc = 0x26e260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x26e264: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x26e264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x26e268: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x26e268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26e26c: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x26e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x26e270: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26e270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26e274: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x26e274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x26e278: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x26e278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x26e27c: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x26E27Cu;
    {
        const bool branch_taken_0x26e27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E27Cu;
        // 0x26e280: 0x8e020a94  lw          $v0, 0xA94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e27c) {
            ctx->pc = 0x26E374u;
            goto label_26e374;
        }
    }
    ctx->pc = 0x26E284u;
    // 0x26e284: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26e284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26e288: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x26E288u;
    {
        const bool branch_taken_0x26e288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E288u;
        // 0x26e28c: 0x8e240158  lw          $a0, 0x158($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e288) {
            ctx->pc = 0x26E2FCu;
            goto label_26e2fc;
        }
    }
    ctx->pc = 0x26E290u;
    // 0x26e290: 0x2482fff8  addiu       $v0, $a0, -0x8
    ctx->pc = 0x26e290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x26e294: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x26e294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x26e298: 0x54400167  bnel        $v0, $zero, . + 4 + (0x167 << 2)
    ctx->pc = 0x26E298u;
    {
        const bool branch_taken_0x26e298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e298) {
            ctx->pc = 0x26E29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E298u;
            // 0x26e29c: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E838u;
            goto label_26e838;
        }
    }
    ctx->pc = 0x26E2A0u;
    // 0x26e2a0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x26E2A0u;
    SET_GPR_U32(ctx, 31, 0x26E2A8u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x26E2A0u, 0x26E2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E2A8u;
label_26e2a8:
    // 0x26e2a8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E2A8u;
    {
        const bool branch_taken_0x26e2a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2A8u;
        // 0x26e2ac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2a8) {
            ctx->pc = 0x26E2BCu;
            goto label_26e2bc;
        }
    }
    ctx->pc = 0x26E2B0u;
    // 0x26e2b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26e2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26e2b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26E2B4u;
    {
        const bool branch_taken_0x26e2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2B4u;
        // 0x26e2b8: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2b4) {
            ctx->pc = 0x26E2D0u;
            goto label_26e2d0;
        }
    }
    ctx->pc = 0x26E2BCu;
label_26e2bc:
    // 0x26e2bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26e2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26e2c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26e2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26e2c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26e2c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26e2c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26e2c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x26e2cc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x26e2ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_26e2d0:
    // 0x26e2d0: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x26e2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x26e2d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e2d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e2d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26e2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x26e2dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26e2dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26e2e0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26e2e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26e2e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26e2e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e2e8: 0x0  nop
    ctx->pc = 0x26e2e8u;
    // NOP
    // 0x26e2ec: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
    ctx->pc = 0x26E2ECu;
    {
        const bool branch_taken_0x26e2ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2ECu;
        // 0x26e2f0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2ec) {
            ctx->pc = 0x26E3ECu;
            goto label_26e3ec;
        }
    }
    ctx->pc = 0x26E2F4u;
    // 0x26e2f4: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x26E2F4u;
    {
        const bool branch_taken_0x26e2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2F4u;
        // 0x26e2f8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2f4) {
            ctx->pc = 0x26E598u;
            goto label_26e598;
        }
    }
    ctx->pc = 0x26E2FCu;
label_26e2fc:
    // 0x26e2fc: 0x28820007  slti        $v0, $a0, 0x7
    ctx->pc = 0x26e2fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x26e300: 0x5040014d  beql        $v0, $zero, . + 4 + (0x14D << 2)
    ctx->pc = 0x26E300u;
    {
        const bool branch_taken_0x26e300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e300) {
            ctx->pc = 0x26E304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E300u;
            // 0x26e304: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E838u;
            goto label_26e838;
        }
    }
    ctx->pc = 0x26E308u;
    // 0x26e308: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x26E308u;
    SET_GPR_U32(ctx, 31, 0x26E310u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x26E308u, 0x26E310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E310u;
label_26e310:
    // 0x26e310: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E310u;
    {
        const bool branch_taken_0x26e310 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E310u;
        // 0x26e314: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e310) {
            ctx->pc = 0x26E324u;
            goto label_26e324;
        }
    }
    ctx->pc = 0x26E318u;
    // 0x26e318: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26e318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26e31c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26E31Cu;
    {
        const bool branch_taken_0x26e31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E31Cu;
        // 0x26e320: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e31c) {
            ctx->pc = 0x26E338u;
            goto label_26e338;
        }
    }
    ctx->pc = 0x26E324u;
label_26e324:
    // 0x26e324: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26e324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26e328: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26e328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26e32c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26e32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26e330: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26e330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x26e334: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x26e334u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_26e338:
    // 0x26e338: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x26e338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x26e33c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e340: 0xc7818498  lwc1        $f1, -0x7B68($gp)
    ctx->pc = 0x26e340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e344: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x26e344u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26e348: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x26e348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e34c: 0x0  nop
    ctx->pc = 0x26e34cu;
    // NOP
    // 0x26e350: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x26E350u;
    {
        const bool branch_taken_0x26e350 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E350u;
        // 0x26e354: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e350) {
            ctx->pc = 0x26E3FCu;
            goto label_26e3fc;
        }
    }
    ctx->pc = 0x26E358u;
    // 0x26e358: 0xc780849c  lwc1        $f0, -0x7B64($gp)
    ctx->pc = 0x26e358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e35c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x26e35cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e360: 0x0  nop
    ctx->pc = 0x26e360u;
    // NOP
    // 0x26e364: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x26E364u;
    {
        const bool branch_taken_0x26e364 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E364u;
        // 0x26e368: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e364) {
            ctx->pc = 0x26E3ECu;
            goto label_26e3ec;
        }
    }
    ctx->pc = 0x26E36Cu;
    // 0x26e36c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x26E36Cu;
    {
        const bool branch_taken_0x26e36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E36Cu;
        // 0x26e370: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e36c) {
            ctx->pc = 0x26E598u;
            goto label_26e598;
        }
    }
    ctx->pc = 0x26E374u;
label_26e374:
    // 0x26e374: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26e374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26e378: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x26E378u;
    {
        const bool branch_taken_0x26e378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E378u;
        // 0x26e37c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e378) {
            ctx->pc = 0x26E3ECu;
            goto label_26e3ec;
        }
    }
    ctx->pc = 0x26E380u;
    // 0x26e380: 0x8e240158  lw          $a0, 0x158($s1)
    ctx->pc = 0x26e380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x26e384: 0x2482fff9  addiu       $v0, $a0, -0x7
    ctx->pc = 0x26e384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967289));
    // 0x26e388: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x26e388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x26e38c: 0x5440012a  bnel        $v0, $zero, . + 4 + (0x12A << 2)
    ctx->pc = 0x26E38Cu;
    {
        const bool branch_taken_0x26e38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e38c) {
            ctx->pc = 0x26E390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E38Cu;
            // 0x26e390: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E838u;
            goto label_26e838;
        }
    }
    ctx->pc = 0x26E394u;
    // 0x26e394: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x26E394u;
    SET_GPR_U32(ctx, 31, 0x26E39Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x26E394u, 0x26E39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E39Cu;
label_26e39c:
    // 0x26e39c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E39Cu;
    {
        const bool branch_taken_0x26e39c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E39Cu;
        // 0x26e3a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e39c) {
            ctx->pc = 0x26E3B0u;
            goto label_26e3b0;
        }
    }
    ctx->pc = 0x26E3A4u;
    // 0x26e3a4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26e3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26e3a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26E3A8u;
    {
        const bool branch_taken_0x26e3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E3A8u;
        // 0x26e3ac: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e3a8) {
            ctx->pc = 0x26E3C4u;
            goto label_26e3c4;
        }
    }
    ctx->pc = 0x26E3B0u;
label_26e3b0:
    // 0x26e3b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26e3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26e3b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26e3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26e3b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26e3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26e3bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26e3bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x26e3c0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x26e3c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_26e3c4:
    // 0x26e3c4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x26e3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x26e3c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e3c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e3cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26e3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x26e3d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26e3d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26e3d4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26e3d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26e3d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26e3d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e3dc: 0x0  nop
    ctx->pc = 0x26e3dcu;
    // NOP
    // 0x26e3e0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x26E3E0u;
    {
        const bool branch_taken_0x26e3e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E3E0u;
        // 0x26e3e4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e3e0) {
            ctx->pc = 0x26E3FCu;
            goto label_26e3fc;
        }
    }
    ctx->pc = 0x26E3E8u;
    // 0x26e3e8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x26e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_26e3ec:
    // 0x26e3ec: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x26e3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26e3f0: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x26E3F0u;
    {
        const bool branch_taken_0x26e3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E3F0u;
        // 0x26e3f4: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e3f0) {
            ctx->pc = 0x26E834u;
            goto label_26e834;
        }
    }
    ctx->pc = 0x26E3F8u;
label_26e3f8:
    // 0x26e3f8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x26e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26e3fc:
    // 0x26e3fc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26e400: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x26E400u;
    {
        const bool branch_taken_0x26e400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E400u;
        // 0x26e404: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e400) {
            ctx->pc = 0x26E834u;
            goto label_26e834;
        }
    }
    ctx->pc = 0x26E408u;
label_26e408:
    // 0x26e408: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x26E408u;
    {
        const bool branch_taken_0x26e408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E408u;
        // 0x26e40c: 0x8e0201b8  lw          $v0, 0x1B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e408) {
            ctx->pc = 0x26E64Cu;
            goto label_26e64c;
        }
    }
    ctx->pc = 0x26E410u;
    // 0x26e410: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x26E410u;
    {
        const bool branch_taken_0x26e410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E410u;
        // 0x26e414: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e410) {
            ctx->pc = 0x26E654u;
            goto label_26e654;
        }
    }
    ctx->pc = 0x26E418u;
    // 0x26e418: 0x8e030178  lw          $v1, 0x178($s0)
    ctx->pc = 0x26e418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x26e41c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x26e41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x26e420: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x26e420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26e424: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x26e424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x26e428: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26e428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26e42c: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x26e42cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x26e430: 0x30c30002  andi        $v1, $a2, 0x2
    ctx->pc = 0x26e430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x26e434: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x26E434u;
    {
        const bool branch_taken_0x26e434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E434u;
        // 0x26e438: 0x8e020a94  lw          $v0, 0xA94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e434) {
            ctx->pc = 0x26E5A4u;
            goto label_26e5a4;
        }
    }
    ctx->pc = 0x26E43Cu;
    // 0x26e43c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26e43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26e440: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x26E440u;
    {
        const bool branch_taken_0x26e440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E440u;
        // 0x26e444: 0x30c20004  andi        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e440) {
            ctx->pc = 0x26E4D8u;
            goto label_26e4d8;
        }
    }
    ctx->pc = 0x26E448u;
    // 0x26e448: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x26E448u;
    {
        const bool branch_taken_0x26e448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E448u;
        // 0x26e44c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e448) {
            ctx->pc = 0x26E588u;
            goto label_26e588;
        }
    }
    ctx->pc = 0x26E450u;
    // 0x26e450: 0x8e240158  lw          $a0, 0x158($s1)
    ctx->pc = 0x26e450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x26e454: 0x108200f7  beq         $a0, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x26E454u;
    {
        const bool branch_taken_0x26e454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E454u;
        // 0x26e458: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e454) {
            ctx->pc = 0x26E834u;
            goto label_26e834;
        }
    }
    ctx->pc = 0x26E45Cu;
    // 0x26e45c: 0x108200f5  beq         $a0, $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x26E45Cu;
    {
        const bool branch_taken_0x26e45c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E45Cu;
        // 0x26e460: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e45c) {
            ctx->pc = 0x26E834u;
            goto label_26e834;
        }
    }
    ctx->pc = 0x26E464u;
    // 0x26e464: 0x508200f4  beql        $a0, $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x26E464u;
    {
        const bool branch_taken_0x26e464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e464) {
            ctx->pc = 0x26E468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E464u;
            // 0x26e468: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E838u;
            goto label_26e838;
        }
    }
    ctx->pc = 0x26E46Cu;
    // 0x26e46c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x26E46Cu;
    SET_GPR_U32(ctx, 31, 0x26E474u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x26E46Cu, 0x26E474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E474u;
label_26e474:
    // 0x26e474: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E474u;
    {
        const bool branch_taken_0x26e474 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E474u;
        // 0x26e478: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e474) {
            ctx->pc = 0x26E488u;
            goto label_26e488;
        }
    }
    ctx->pc = 0x26E47Cu;
    // 0x26e47c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26e47cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26e480: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26E480u;
    {
        const bool branch_taken_0x26e480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E480u;
        // 0x26e484: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e480) {
            ctx->pc = 0x26E49Cu;
            goto label_26e49c;
        }
    }
    ctx->pc = 0x26E488u;
label_26e488:
    // 0x26e488: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26e488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26e48c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26e48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26e490: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26e490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26e494: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26e494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x26e498: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x26e498u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_26e49c:
    // 0x26e49c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x26e49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x26e4a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e4a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e4a4: 0xc78184a0  lwc1        $f1, -0x7B60($gp)
    ctx->pc = 0x26e4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e4a8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x26e4a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26e4ac: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x26e4acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e4b0: 0x0  nop
    ctx->pc = 0x26e4b0u;
    // NOP
    // 0x26e4b4: 0x45010034  bc1t        . + 4 + (0x34 << 2)
    ctx->pc = 0x26E4B4u;
    {
        const bool branch_taken_0x26e4b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E4B4u;
        // 0x26e4b8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e4b4) {
            ctx->pc = 0x26E588u;
            goto label_26e588;
        }
    }
    ctx->pc = 0x26E4BCu;
    // 0x26e4bc: 0xc78084a4  lwc1        $f0, -0x7B5C($gp)
    ctx->pc = 0x26e4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e4c0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x26e4c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e4c4: 0x0  nop
    ctx->pc = 0x26e4c4u;
    // NOP
    // 0x26e4c8: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x26E4C8u;
    {
        const bool branch_taken_0x26e4c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E4C8u;
        // 0x26e4cc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e4c8) {
            ctx->pc = 0x26E598u;
            goto label_26e598;
        }
    }
    ctx->pc = 0x26E4D0u;
    // 0x26e4d0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x26E4D0u;
    {
        const bool branch_taken_0x26e4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E4D0u;
        // 0x26e4d4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e4d0) {
            ctx->pc = 0x26E618u;
            goto label_26e618;
        }
    }
    ctx->pc = 0x26E4D8u;
label_26e4d8:
    // 0x26e4d8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x26E4D8u;
    {
        const bool branch_taken_0x26e4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E4D8u;
        // 0x26e4dc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e4d8) {
            ctx->pc = 0x26E588u;
            goto label_26e588;
        }
    }
    ctx->pc = 0x26E4E0u;
    // 0x26e4e0: 0x8e240158  lw          $a0, 0x158($s1)
    ctx->pc = 0x26e4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x26e4e4: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x26e4e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x26e4e8: 0x544000d3  bnel        $v0, $zero, . + 4 + (0xD3 << 2)
    ctx->pc = 0x26E4E8u;
    {
        const bool branch_taken_0x26e4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e4e8) {
            ctx->pc = 0x26E4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E4E8u;
            // 0x26e4ec: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E838u;
            goto label_26e838;
        }
    }
    ctx->pc = 0x26E4F0u;
    // 0x26e4f0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x26e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26e4f4: 0x108200cf  beq         $a0, $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x26E4F4u;
    {
        const bool branch_taken_0x26e4f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E4F4u;
        // 0x26e4f8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e4f4) {
            ctx->pc = 0x26E834u;
            goto label_26e834;
        }
    }
    ctx->pc = 0x26E4FCu;
    // 0x26e4fc: 0x508200ce  beql        $a0, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x26E4FCu;
    {
        const bool branch_taken_0x26e4fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e4fc) {
            ctx->pc = 0x26E500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E4FCu;
            // 0x26e500: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E838u;
            goto label_26e838;
        }
    }
    ctx->pc = 0x26E504u;
    // 0x26e504: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x26E504u;
    SET_GPR_U32(ctx, 31, 0x26E50Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x26E504u, 0x26E50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E50Cu;
label_26e50c:
    // 0x26e50c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E50Cu;
    {
        const bool branch_taken_0x26e50c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E50Cu;
        // 0x26e510: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e50c) {
            ctx->pc = 0x26E520u;
            goto label_26e520;
        }
    }
    ctx->pc = 0x26E514u;
    // 0x26e514: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26e514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26e518: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26E518u;
    {
        const bool branch_taken_0x26e518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E518u;
        // 0x26e51c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e518) {
            ctx->pc = 0x26E534u;
            goto label_26e534;
        }
    }
    ctx->pc = 0x26E520u;
label_26e520:
    // 0x26e520: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26e520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26e524: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26e524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26e528: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26e528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26e52c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26e52cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x26e530: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x26e530u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_26e534:
    // 0x26e534: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x26e534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x26e538: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e53c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x26e53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x26e540: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26e540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26e544: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x26e544u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26e548: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x26e548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e54c: 0x0  nop
    ctx->pc = 0x26e54cu;
    // NOP
    // 0x26e550: 0x450300b7  bc1tl       . + 4 + (0xB7 << 2)
    ctx->pc = 0x26E550u;
    {
        const bool branch_taken_0x26e550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e550) {
            ctx->pc = 0x26E554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E550u;
            // 0x26e554: 0xae200158  sw          $zero, 0x158($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E830u;
            goto label_26e830;
        }
    }
    ctx->pc = 0x26E558u;
    // 0x26e558: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26e558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x26e55c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e55cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e560: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x26e560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e564: 0x0  nop
    ctx->pc = 0x26e564u;
    // NOP
    // 0x26e568: 0x450100ae  bc1t        . + 4 + (0xAE << 2)
    ctx->pc = 0x26E568u;
    {
        const bool branch_taken_0x26e568 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E568u;
        // 0x26e56c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e568) {
            ctx->pc = 0x26E824u;
            goto label_26e824;
        }
    }
    ctx->pc = 0x26E570u;
    // 0x26e570: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x26e570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x26e574: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e578: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x26e578u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e57c: 0x0  nop
    ctx->pc = 0x26e57cu;
    // NOP
    // 0x26e580: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26E580u;
    {
        const bool branch_taken_0x26e580 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E580u;
        // 0x26e584: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e580) {
            ctx->pc = 0x26E594u;
            goto label_26e594;
        }
    }
    ctx->pc = 0x26E588u;
label_26e588:
    // 0x26e588: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x26e588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26e58c: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x26E58Cu;
    {
        const bool branch_taken_0x26e58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E58Cu;
        // 0x26e590: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e58c) {
            ctx->pc = 0x26E834u;
            goto label_26e834;
        }
    }
    ctx->pc = 0x26E594u;
label_26e594:
    // 0x26e594: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x26e594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_26e598:
    // 0x26e598: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x26e598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x26e59c: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x26E59Cu;
    {
        const bool branch_taken_0x26e59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E59Cu;
        // 0x26e5a0: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e59c) {
            ctx->pc = 0x26E834u;
            goto label_26e834;
        }
    }
    ctx->pc = 0x26E5A4u;
label_26e5a4:
    // 0x26e5a4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26e5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26e5a8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x26E5A8u;
    {
        const bool branch_taken_0x26e5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E5A8u;
        // 0x26e5ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e5a8) {
            ctx->pc = 0x26E624u;
            goto label_26e624;
        }
    }
    ctx->pc = 0x26E5B0u;
    // 0x26e5b0: 0x8e240158  lw          $a0, 0x158($s1)
    ctx->pc = 0x26e5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x26e5b4: 0x1082009f  beq         $a0, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x26E5B4u;
    {
        const bool branch_taken_0x26e5b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E5B4u;
        // 0x26e5b8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e5b4) {
            ctx->pc = 0x26E834u;
            goto label_26e834;
        }
    }
    ctx->pc = 0x26E5BCu;
    // 0x26e5bc: 0x5082009e  beql        $a0, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x26E5BCu;
    {
        const bool branch_taken_0x26e5bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e5bc) {
            ctx->pc = 0x26E5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E5BCu;
            // 0x26e5c0: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E838u;
            goto label_26e838;
        }
    }
    ctx->pc = 0x26E5C4u;
    // 0x26e5c4: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x26E5C4u;
    SET_GPR_U32(ctx, 31, 0x26E5CCu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x26E5C4u, 0x26E5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E5CCu;
label_26e5cc:
    // 0x26e5cc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E5CCu;
    {
        const bool branch_taken_0x26e5cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E5CCu;
        // 0x26e5d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e5cc) {
            ctx->pc = 0x26E5E0u;
            goto label_26e5e0;
        }
    }
    ctx->pc = 0x26E5D4u;
    // 0x26e5d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26e5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26e5d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26E5D8u;
    {
        const bool branch_taken_0x26e5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E5D8u;
        // 0x26e5dc: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e5d8) {
            ctx->pc = 0x26E5F4u;
            goto label_26e5f4;
        }
    }
    ctx->pc = 0x26E5E0u;
label_26e5e0:
    // 0x26e5e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26e5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26e5e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26e5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26e5e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26e5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26e5ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26e5ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x26e5f0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x26e5f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_26e5f4:
    // 0x26e5f4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x26e5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x26e5f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e5f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e5fc: 0xc78184a8  lwc1        $f1, -0x7B58($gp)
    ctx->pc = 0x26e5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e600: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26e600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26e604: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26e604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e608: 0x0  nop
    ctx->pc = 0x26e608u;
    // NOP
    // 0x26e60c: 0x45010068  bc1t        . + 4 + (0x68 << 2)
    ctx->pc = 0x26E60Cu;
    {
        const bool branch_taken_0x26e60c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E60Cu;
        // 0x26e610: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e60c) {
            ctx->pc = 0x26E7B0u;
            goto label_26e7b0;
        }
    }
    ctx->pc = 0x26E614u;
    // 0x26e614: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x26e614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26e618:
    // 0x26e618: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x26e618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26e61c: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x26E61Cu;
    {
        const bool branch_taken_0x26e61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E61Cu;
        // 0x26e620: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e61c) {
            ctx->pc = 0x26E834u;
            goto label_26e834;
        }
    }
    ctx->pc = 0x26E624u;
label_26e624:
    // 0x26e624: 0x8e240158  lw          $a0, 0x158($s1)
    ctx->pc = 0x26e624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x26e628: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x26e628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26e62c: 0x54400082  bnel        $v0, $zero, . + 4 + (0x82 << 2)
    ctx->pc = 0x26E62Cu;
    {
        const bool branch_taken_0x26e62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e62c) {
            ctx->pc = 0x26E630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E62Cu;
            // 0x26e630: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E838u;
            goto label_26e838;
        }
    }
    ctx->pc = 0x26E634u;
    // 0x26e634: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x26E634u;
    SET_GPR_U32(ctx, 31, 0x26E63Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x26E634u, 0x26E63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E63Cu;
label_26e63c:
    // 0x26e63c: 0x4410067  bgez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x26E63Cu;
    {
        const bool branch_taken_0x26e63c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E63Cu;
        // 0x26e640: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e63c) {
            ctx->pc = 0x26E7DCu;
            goto label_26e7dc;
        }
    }
    ctx->pc = 0x26E644u;
    // 0x26e644: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x26E644u;
    {
        const bool branch_taken_0x26e644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E644u;
        // 0x26e648: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e644) {
            ctx->pc = 0x26E7ECu;
            goto label_26e7ec;
        }
    }
    ctx->pc = 0x26E64Cu;
label_26e64c:
    // 0x26e64c: 0x50400078  beql        $v0, $zero, . + 4 + (0x78 << 2)
    ctx->pc = 0x26E64Cu;
    {
        const bool branch_taken_0x26e64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e64c) {
            ctx->pc = 0x26E650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E64Cu;
            // 0x26e650: 0xae200158  sw          $zero, 0x158($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E830u;
            goto label_26e830;
        }
    }
    ctx->pc = 0x26E654u;
label_26e654:
    // 0x26e654: 0x8e030178  lw          $v1, 0x178($s0)
    ctx->pc = 0x26e654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x26e658: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x26e658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x26e65c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x26e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x26e660: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x26e660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26e664: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x26e664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x26e668: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26e668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26e66c: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x26e66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x26e670: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x26e670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x26e674: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x26E674u;
    {
        const bool branch_taken_0x26e674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E674u;
        // 0x26e678: 0x8e020a94  lw          $v0, 0xA94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e674) {
            ctx->pc = 0x26E7A4u;
            goto label_26e7a4;
        }
    }
    ctx->pc = 0x26E67Cu;
    // 0x26e67c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26e67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26e680: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x26E680u;
    {
        const bool branch_taken_0x26e680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E680u;
        // 0x26e684: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e680) {
            ctx->pc = 0x26E720u;
            goto label_26e720;
        }
    }
    ctx->pc = 0x26E688u;
    // 0x26e688: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x26E688u;
    {
        const bool branch_taken_0x26e688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E688u;
        // 0x26e68c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e688) {
            ctx->pc = 0x26E714u;
            goto label_26e714;
        }
    }
    ctx->pc = 0x26E690u;
    // 0x26e690: 0x8e240158  lw          $a0, 0x158($s1)
    ctx->pc = 0x26e690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x26e694: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26e694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26e698: 0x10820066  beq         $a0, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x26E698u;
    {
        const bool branch_taken_0x26e698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E698u;
        // 0x26e69c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e698) {
            ctx->pc = 0x26E834u;
            goto label_26e834;
        }
    }
    ctx->pc = 0x26E6A0u;
    // 0x26e6a0: 0x10850064  beq         $a0, $a1, . + 4 + (0x64 << 2)
    ctx->pc = 0x26E6A0u;
    {
        const bool branch_taken_0x26e6a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x26E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6A0u;
        // 0x26e6a4: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e6a0) {
            ctx->pc = 0x26E834u;
            goto label_26e834;
        }
    }
    ctx->pc = 0x26E6A8u;
    // 0x26e6a8: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x26e6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x26e6ac: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E6ACu;
    {
        const bool branch_taken_0x26e6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6ACu;
        // 0x26e6b0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e6ac) {
            ctx->pc = 0x26E6BCu;
            goto label_26e6bc;
        }
    }
    ctx->pc = 0x26E6B4u;
    // 0x26e6b4: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x26E6B4u;
    {
        const bool branch_taken_0x26e6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6B4u;
        // 0x26e6b8: 0xae250158  sw          $a1, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e6b4) {
            ctx->pc = 0x26E834u;
            goto label_26e834;
        }
    }
    ctx->pc = 0x26E6BCu;
label_26e6bc:
    // 0x26e6bc: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x26E6BCu;
    SET_GPR_U32(ctx, 31, 0x26E6C4u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x26E6BCu, 0x26E6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E6C4u;
label_26e6c4:
    // 0x26e6c4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E6C4u;
    {
        const bool branch_taken_0x26e6c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6C4u;
        // 0x26e6c8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e6c4) {
            ctx->pc = 0x26E6D8u;
            goto label_26e6d8;
        }
    }
    ctx->pc = 0x26E6CCu;
    // 0x26e6cc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26e6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26e6d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26E6D0u;
    {
        const bool branch_taken_0x26e6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6D0u;
        // 0x26e6d4: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e6d0) {
            ctx->pc = 0x26E6ECu;
            goto label_26e6ec;
        }
    }
    ctx->pc = 0x26E6D8u;
label_26e6d8:
    // 0x26e6d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26e6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26e6dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26e6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26e6e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26e6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26e6e4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26e6e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x26e6e8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x26e6e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_26e6ec:
    // 0x26e6ec: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x26e6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x26e6f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e6f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e6f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26e6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x26e6f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26e6f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26e6fc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26e6fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26e700: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26e700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e704: 0x0  nop
    ctx->pc = 0x26e704u;
    // NOP
    // 0x26e708: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x26E708u;
    {
        const bool branch_taken_0x26e708 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E708u;
        // 0x26e70c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e708) {
            ctx->pc = 0x26E7B0u;
            goto label_26e7b0;
        }
    }
    ctx->pc = 0x26E710u;
    // 0x26e710: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26e710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26e714:
    // 0x26e714: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x26e714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26e718: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x26E718u;
    {
        const bool branch_taken_0x26e718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E718u;
        // 0x26e71c: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e718) {
            ctx->pc = 0x26E834u;
            goto label_26e834;
        }
    }
    ctx->pc = 0x26E720u;
label_26e720:
    // 0x26e720: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x26E720u;
    {
        const bool branch_taken_0x26e720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E720u;
        // 0x26e724: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e720) {
            ctx->pc = 0x26E798u;
            goto label_26e798;
        }
    }
    ctx->pc = 0x26E728u;
    // 0x26e728: 0x8e240158  lw          $a0, 0x158($s1)
    ctx->pc = 0x26e728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x26e72c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e730: 0x10820040  beq         $a0, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x26E730u;
    {
        const bool branch_taken_0x26e730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E730u;
        // 0x26e734: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e730) {
            ctx->pc = 0x26E834u;
            goto label_26e834;
        }
    }
    ctx->pc = 0x26E738u;
    // 0x26e738: 0x5082003f  beql        $a0, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x26E738u;
    {
        const bool branch_taken_0x26e738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e738) {
            ctx->pc = 0x26E73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E738u;
            // 0x26e73c: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E838u;
            goto label_26e838;
        }
    }
    ctx->pc = 0x26E740u;
    // 0x26e740: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x26E740u;
    SET_GPR_U32(ctx, 31, 0x26E748u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x26E740u, 0x26E748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E748u;
label_26e748:
    // 0x26e748: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E748u;
    {
        const bool branch_taken_0x26e748 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E748u;
        // 0x26e74c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e748) {
            ctx->pc = 0x26E75Cu;
            goto label_26e75c;
        }
    }
    ctx->pc = 0x26E750u;
    // 0x26e750: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26e750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26e754: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26E754u;
    {
        const bool branch_taken_0x26e754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E754u;
        // 0x26e758: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e754) {
            ctx->pc = 0x26E770u;
            goto label_26e770;
        }
    }
    ctx->pc = 0x26E75Cu;
label_26e75c:
    // 0x26e75c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26e75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26e760: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26e760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26e764: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26e764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26e768: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26e768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x26e76c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x26e76cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_26e770:
    // 0x26e770: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x26e770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x26e774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e778: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26e778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x26e77c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26e77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26e780: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x26e780u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26e784: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x26e784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e788: 0x0  nop
    ctx->pc = 0x26e788u;
    // NOP
    // 0x26e78c: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x26E78Cu;
    {
        const bool branch_taken_0x26e78c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E78Cu;
        // 0x26e790: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e78c) {
            ctx->pc = 0x26E824u;
            goto label_26e824;
        }
    }
    ctx->pc = 0x26E794u;
    // 0x26e794: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26e794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26e798:
    // 0x26e798: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x26e798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26e79c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x26E79Cu;
    {
        const bool branch_taken_0x26e79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E79Cu;
        // 0x26e7a0: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e79c) {
            ctx->pc = 0x26E834u;
            goto label_26e834;
        }
    }
    ctx->pc = 0x26E7A4u;
label_26e7a4:
    // 0x26e7a4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26e7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26e7a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E7A8u;
    {
        const bool branch_taken_0x26e7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7A8u;
        // 0x26e7ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e7a8) {
            ctx->pc = 0x26E7BCu;
            goto label_26e7bc;
        }
    }
    ctx->pc = 0x26E7B0u;
label_26e7b0:
    // 0x26e7b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26e7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26e7b4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x26E7B4u;
    {
        const bool branch_taken_0x26e7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7B4u;
        // 0x26e7b8: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e7b4) {
            ctx->pc = 0x26E834u;
            goto label_26e834;
        }
    }
    ctx->pc = 0x26E7BCu;
label_26e7bc:
    // 0x26e7bc: 0x8e240158  lw          $a0, 0x158($s1)
    ctx->pc = 0x26e7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x26e7c0: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x26e7c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x26e7c4: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x26E7C4u;
    {
        const bool branch_taken_0x26e7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e7c4) {
            ctx->pc = 0x26E7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E7C4u;
            // 0x26e7c8: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E838u;
            goto label_26e838;
        }
    }
    ctx->pc = 0x26E7CCu;
    // 0x26e7cc: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x26E7CCu;
    SET_GPR_U32(ctx, 31, 0x26E7D4u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x26E7CCu, 0x26E7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E7D4u;
label_26e7d4:
    // 0x26e7d4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E7D4u;
    {
        const bool branch_taken_0x26e7d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7D4u;
        // 0x26e7d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e7d4) {
            ctx->pc = 0x26E7E8u;
            goto label_26e7e8;
        }
    }
    ctx->pc = 0x26E7DCu;
label_26e7dc:
    // 0x26e7dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26e7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26e7e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26E7E0u;
    {
        const bool branch_taken_0x26e7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7E0u;
        // 0x26e7e4: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e7e0) {
            ctx->pc = 0x26E7FCu;
            goto label_26e7fc;
        }
    }
    ctx->pc = 0x26E7E8u;
label_26e7e8:
    // 0x26e7e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26e7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_26e7ec:
    // 0x26e7ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26e7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26e7f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26e7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26e7f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26e7f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x26e7f8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x26e7f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_26e7fc:
    // 0x26e7fc: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x26e7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x26e800: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e804: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26e804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x26e808: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26e808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26e80c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26e80cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26e810: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26e810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e814: 0x0  nop
    ctx->pc = 0x26e814u;
    // NOP
    // 0x26e818: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x26E818u;
    {
        const bool branch_taken_0x26e818 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e818) {
            ctx->pc = 0x26E81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E818u;
            // 0x26e81c: 0xae200158  sw          $zero, 0x158($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E830u;
            goto label_26e830;
        }
    }
    ctx->pc = 0x26E820u;
    // 0x26e820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26e824:
    // 0x26e824: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26e824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e828: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26E828u;
    {
        const bool branch_taken_0x26e828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E828u;
        // 0x26e82c: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e828) {
            ctx->pc = 0x26E834u;
            goto label_26e834;
        }
    }
    ctx->pc = 0x26E830u;
label_26e830:
    // 0x26e830: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26e830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26e834:
    // 0x26e834: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x26e834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_26e838:
    // 0x26e838: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x26e838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x26e83c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26E83Cu;
    {
        const bool branch_taken_0x26e83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E83Cu;
        // 0x26e840: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e83c) {
            ctx->pc = 0x26E860u;
            goto label_26e860;
        }
    }
    ctx->pc = 0x26E844u;
    // 0x26e844: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x26e844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26e848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e84c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26E84Cu;
    {
        const bool branch_taken_0x26e84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26e84c) {
            ctx->pc = 0x26E850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E84Cu;
            // 0x26e850: 0x8e22015c  lw          $v0, 0x15C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E864u;
            goto label_26e864;
        }
    }
    ctx->pc = 0x26E854u;
    // 0x26e854: 0x24820014  addiu       $v0, $a0, 0x14
    ctx->pc = 0x26e854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x26e858: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x26e858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
    // 0x26e85c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26e860:
    // 0x26e860: 0x8e22015c  lw          $v0, 0x15C($s1)
    ctx->pc = 0x26e860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
label_26e864:
    // 0x26e864: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26E864u;
    {
        const bool branch_taken_0x26e864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E864u;
        // 0x26e868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e864) {
            ctx->pc = 0x26E8A8u;
            goto label_26e8a8;
        }
    }
    ctx->pc = 0x26E86Cu;
    // 0x26e86c: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x26e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x26e870: 0x2445fffd  addiu       $a1, $v0, -0x3
    ctx->pc = 0x26e870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x26e874: 0x2ca301b8  sltiu       $v1, $a1, 0x1B8
    ctx->pc = 0x26e874u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)440) ? 1 : 0);
    // 0x26e878: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26E878u;
    {
        const bool branch_taken_0x26e878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E878u;
        // 0x26e87c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e878) {
            ctx->pc = 0x26E8A8u;
            goto label_26e8a8;
        }
    }
    ctx->pc = 0x26E880u;
    // 0x26e880: 0xc78c84ac  lwc1        $f12, -0x7B54($gp)
    ctx->pc = 0x26e880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e884: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x26e884u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x26e888: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26E888u;
    {
        const bool branch_taken_0x26e888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e888) {
            ctx->pc = 0x26E88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E888u;
            // 0x26e88c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E890u;
            goto label_26e890;
        }
    }
    ctx->pc = 0x26E890u;
label_26e890:
    // 0x26e890: 0xc4cd008c  lwc1        $f13, 0x8C($a2)
    ctx->pc = 0x26e890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26e894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e898: 0x2810  mfhi        $a1
    ctx->pc = 0x26e898u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x26e89c: 0xc08535a  jal         func_214D68
    ctx->pc = 0x26E89Cu;
    SET_GPR_U32(ctx, 31, 0x26E8A4u);
    ctx->pc = 0x26E8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E89Cu;
    // 0x26e8a0: 0x24a50003  addiu       $a1, $a1, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x26E89Cu, 0x26E8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E8A4u;
label_26e8a4:
    // 0x26e8a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26e8a8:
    // 0x26e8a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26e8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e8ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26e8acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e8b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26e8b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e8b4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x26e8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26e8b8: 0x80aed1c  j           func_2BB470
    ctx->pc = 0x26E8B8u;
    ctx->pc = 0x26E8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E8B8u;
    // 0x26e8bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB470u;
    enemyTick_0x2bb470(rdram, ctx, runtime); return;
    ctx->pc = 0x26E8C0u;
label_26e8c0:
    // 0x26e8c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26e8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26e8c4:
    // 0x26e8c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26e8c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e8c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26e8c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e8cc: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x26e8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26e8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x26E8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8D0u;
        // 0x26e8d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E8D8u;
}
