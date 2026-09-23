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

// Function: enemyTimeSplitterAttack
// Address: 0x2c38f0 - 0x2c3d3c
void enemyTimeSplitterAttack_0x2c38f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyTimeSplitterAttack_0x2c38f0");
#endif

    switch (ctx->pc) {
        case 0x2c396cu: goto label_2c396c;
        case 0x2c39c0u: goto label_2c39c0;
        case 0x2c39ccu: goto label_2c39cc;
        case 0x2c3a2cu: goto label_2c3a2c;
        case 0x2c3a38u: goto label_2c3a38;
        case 0x2c3a48u: goto label_2c3a48;
        case 0x2c3a58u: goto label_2c3a58;
        case 0x2c3a68u: goto label_2c3a68;
        case 0x2c3a78u: goto label_2c3a78;
        case 0x2c3ab4u: goto label_2c3ab4;
        case 0x2c3ac8u: goto label_2c3ac8;
        case 0x2c3ae0u: goto label_2c3ae0;
        case 0x2c3af0u: goto label_2c3af0;
        case 0x2c3b10u: goto label_2c3b10;
        case 0x2c3b48u: goto label_2c3b48;
        case 0x2c3b58u: goto label_2c3b58;
        case 0x2c3bacu: goto label_2c3bac;
        case 0x2c3c30u: goto label_2c3c30;
        case 0x2c3c40u: goto label_2c3c40;
        case 0x2c3c50u: goto label_2c3c50;
        case 0x2c3c5cu: goto label_2c3c5c;
        case 0x2c3c6cu: goto label_2c3c6c;
        case 0x2c3c90u: goto label_2c3c90;
        case 0x2c3ca0u: goto label_2c3ca0;
        case 0x2c3cbcu: goto label_2c3cbc;
        case 0x2c3cccu: goto label_2c3ccc;
        case 0x2c3cdcu: goto label_2c3cdc;
        case 0x2c3ce8u: goto label_2c3ce8;
        case 0x2c3cf8u: goto label_2c3cf8;
        case 0x2c3d08u: goto label_2c3d08;
        default: break;
    }

    ctx->pc = 0x2c38f0u;

    // 0x2c38f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c38f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c38f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c38f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c38f8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2c38f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c38fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c38fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3900: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c3900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c3904: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c3904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c3908: 0x8e110160  lw          $s1, 0x160($s0)
    ctx->pc = 0x2c3908u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2c390c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x2c390cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3910: 0x8e240ae4  lw          $a0, 0xAE4($s1)
    ctx->pc = 0x2c3910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
    // 0x2c3914: 0xc6030034  lwc1        $f3, 0x34($s0)
    ctx->pc = 0x2c3914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c3918: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x2c3918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c391c: 0xc4840034  lwc1        $f4, 0x34($a0)
    ctx->pc = 0x2c391cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c3920: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c3920u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c3924: 0xc6020038  lwc1        $f2, 0x38($s0)
    ctx->pc = 0x2c3924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c3928: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x2c3928u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x2c392c: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x2c392cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3930: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c3930u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c3934: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2c3934u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2c3938: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2c3938u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2c393c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c393cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c3940: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2c3940u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2c3944: 0x46020b00  add.s       $f12, $f1, $f2
    ctx->pc = 0x2c3944u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2c3948: 0x0  nop
    ctx->pc = 0x2c3948u;
    // NOP
    // 0x2c394c: 0x0  nop
    ctx->pc = 0x2c394cu;
    // NOP
    // 0x2c3950: 0x460c0504  c1          0xC0504
    ctx->pc = 0x2c3950u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[12]);
    // 0x2c3954: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x2c3954u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3958: 0x0  nop
    ctx->pc = 0x2c3958u;
    // NOP
    // 0x2c395c: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2C395Cu;
    {
        const bool branch_taken_0x2c395c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c395c) {
            ctx->pc = 0x2C3960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C395Cu;
            // 0x2c3960: 0xc4800030  lwc1        $f0, 0x30($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3978u;
            goto label_2c3978;
        }
    }
    ctx->pc = 0x2C3964u;
    // 0x2c3964: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2C3964u;
    SET_GPR_U32(ctx, 31, 0x2C396Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2C3964u, 0x2C396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C396Cu;
label_2c396c:
    // 0x2c396c: 0x8e240ae4  lw          $a0, 0xAE4($s1)
    ctx->pc = 0x2c396cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
    // 0x2c3970: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c3970u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2c3974: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x2c3974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c3978:
    // 0x2c3978: 0x8e230aa8  lw          $v1, 0xAA8($s1)
    ctx->pc = 0x2c3978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2728)));
    // 0x2c397c: 0xe6200aec  swc1        $f0, 0xAEC($s1)
    ctx->pc = 0x2c397cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2796), bits); }
    // 0x2c3980: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2c3980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c3984: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x2c3984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3988: 0xe6200af0  swc1        $f0, 0xAF0($s1)
    ctx->pc = 0x2c3988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2800), bits); }
    // 0x2c398c: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x2c398cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3990: 0x104000e4  beqz        $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x2C3990u;
    {
        const bool branch_taken_0x2c3990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3990u;
        // 0x2c3994: 0xe6210af4  swc1        $f1, 0xAF4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2804), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3990) {
            ctx->pc = 0x2C3D24u;
            goto label_2c3d24;
        }
    }
    ctx->pc = 0x2C3998u;
    // 0x2c3998: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c3998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c399c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c399cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c39a0: 0x24429e20  addiu       $v0, $v0, -0x61E0
    ctx->pc = 0x2c39a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942240));
    // 0x2c39a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c39a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c39a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c39a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c39ac: 0x800008  jr          $a0
    ctx->pc = 0x2C39ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C39B4u: goto label_2c39b4;
            case 0x2C3A20u: goto label_2c3a20;
            case 0x2C3B78u: goto label_2c3b78;
            case 0x2C3C18u: goto label_2c3c18;
            case 0x2C3C78u: goto label_2c3c78;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C39ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C39B4u;
label_2c39b4:
    // 0x2c39b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c39b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c39b8: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C39B8u;
    SET_GPR_U32(ctx, 31, 0x2C39C0u);
    ctx->pc = 0x2C39BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C39B8u;
    // 0x2c39bc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C39B8u, 0x2C39C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C39C0u;
label_2c39c0:
    // 0x2c39c0: 0xc6200b28  lwc1        $f0, 0xB28($s1)
    ctx->pc = 0x2c39c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c39c4: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C39C4u;
    SET_GPR_U32(ctx, 31, 0x2C39CCu);
    ctx->pc = 0x2C39C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C39C4u;
    // 0x2c39c8: 0xe6200b38  swc1        $f0, 0xB38($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2872), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C39C4u, 0x2C39CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C39CCu;
label_2c39cc:
    // 0x2c39cc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C39CCu;
    {
        const bool branch_taken_0x2c39cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C39D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39CCu;
        // 0x2c39d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c39cc) {
            ctx->pc = 0x2C39E0u;
            goto label_2c39e0;
        }
    }
    ctx->pc = 0x2C39D4u;
    // 0x2c39d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c39d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c39d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C39D8u;
    {
        const bool branch_taken_0x2c39d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C39DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39D8u;
        // 0x2c39dc: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c39d8) {
            ctx->pc = 0x2C39F4u;
            goto label_2c39f4;
        }
    }
    ctx->pc = 0x2C39E0u;
label_2c39e0:
    // 0x2c39e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c39e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c39e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c39e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c39e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c39e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c39ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c39ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c39f0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c39f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c39f4:
    // 0x2c39f4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c39f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c39f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c39f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c39fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c39fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c3a00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c3a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c3a04: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c3a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c3a08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c3a08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3a0c: 0x0  nop
    ctx->pc = 0x2c3a0cu;
    // NOP
    // 0x2c3a10: 0x450100c3  bc1t        . + 4 + (0xC3 << 2)
    ctx->pc = 0x2C3A10u;
    {
        const bool branch_taken_0x2c3a10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A10u;
        // 0x2c3a14: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a10) {
            ctx->pc = 0x2C3D20u;
            goto label_2c3d20;
        }
    }
    ctx->pc = 0x2C3A18u;
    // 0x2c3a18: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x2C3A18u;
    {
        const bool branch_taken_0x2c3a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A18u;
        // 0x2c3a1c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a18) {
            ctx->pc = 0x2C3D20u;
            goto label_2c3d20;
        }
    }
    ctx->pc = 0x2C3A20u;
label_2c3a20:
    // 0x2c3a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3a24: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C3A24u;
    SET_GPR_U32(ctx, 31, 0x2C3A2Cu);
    ctx->pc = 0x2C3A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A24u;
    // 0x2c3a28: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C3A24u, 0x2C3A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A2Cu;
label_2c3a2c:
    // 0x2c3a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3a30: 0xc085608  jal         func_215820
    ctx->pc = 0x2C3A30u;
    SET_GPR_U32(ctx, 31, 0x2C3A38u);
    ctx->pc = 0x2C3A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A30u;
    // 0x2c3a34: 0x24050225  addiu       $a1, $zero, 0x225 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C3A30u, 0x2C3A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A38u;
label_2c3a38:
    // 0x2c3a38: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C3A38u;
    {
        const bool branch_taken_0x2c3a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A38u;
        // 0x2c3a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a38) {
            ctx->pc = 0x2C3AD8u;
            goto label_2c3ad8;
        }
    }
    ctx->pc = 0x2C3A40u;
    // 0x2c3a40: 0xc085608  jal         func_215820
    ctx->pc = 0x2C3A40u;
    SET_GPR_U32(ctx, 31, 0x2C3A48u);
    ctx->pc = 0x2C3A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A40u;
    // 0x2c3a44: 0x24050229  addiu       $a1, $zero, 0x229 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 553));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C3A40u, 0x2C3A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A48u;
label_2c3a48:
    // 0x2c3a48: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C3A48u;
    {
        const bool branch_taken_0x2c3a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A48u;
        // 0x2c3a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a48) {
            ctx->pc = 0x2C3AD8u;
            goto label_2c3ad8;
        }
    }
    ctx->pc = 0x2C3A50u;
    // 0x2c3a50: 0xc085608  jal         func_215820
    ctx->pc = 0x2C3A50u;
    SET_GPR_U32(ctx, 31, 0x2C3A58u);
    ctx->pc = 0x2C3A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A50u;
    // 0x2c3a54: 0x24050215  addiu       $a1, $zero, 0x215 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 533));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C3A50u, 0x2C3A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A58u;
label_2c3a58:
    // 0x2c3a58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3A58u;
    {
        const bool branch_taken_0x2c3a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A58u;
        // 0x2c3a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a58) {
            ctx->pc = 0x2C3A70u;
            goto label_2c3a70;
        }
    }
    ctx->pc = 0x2C3A60u;
    // 0x2c3a60: 0xc085608  jal         func_215820
    ctx->pc = 0x2C3A60u;
    SET_GPR_U32(ctx, 31, 0x2C3A68u);
    ctx->pc = 0x2C3A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A60u;
    // 0x2c3a64: 0x24050216  addiu       $a1, $zero, 0x216 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C3A60u, 0x2C3A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A68u;
label_2c3a68:
    // 0x2c3a68: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C3A68u;
    {
        const bool branch_taken_0x2c3a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A68u;
        // 0x2c3a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a68) {
            ctx->pc = 0x2C3AACu;
            goto label_2c3aac;
        }
    }
    ctx->pc = 0x2C3A70u;
label_2c3a70:
    // 0x2c3a70: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C3A70u;
    SET_GPR_U32(ctx, 31, 0x2C3A78u);
    ctx->pc = 0x2C3A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A70u;
    // 0x2c3a74: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C3A70u, 0x2C3A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A78u;
label_2c3a78:
    // 0x2c3a78: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C3A78u;
    {
        const bool branch_taken_0x2c3a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A78u;
        // 0x2c3a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a78) {
            ctx->pc = 0x2C3AACu;
            goto label_2c3aac;
        }
    }
    ctx->pc = 0x2C3A80u;
    // 0x2c3a80: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c3a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c3a84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c3a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c3a88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c3a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c3a8c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c3a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c3a90: 0x24050225  addiu       $a1, $zero, 0x225
    ctx->pc = 0x2c3a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
    // 0x2c3a94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c3a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3a98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c3a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c3a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3aa0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2c3aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c3aa4: 0x808535a  j           func_214D68
    ctx->pc = 0x2C3AA4u;
    ctx->pc = 0x2C3AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3AA4u;
    // 0x2c3aa8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    setAnim_0x214d68(rdram, ctx, runtime); return;
    ctx->pc = 0x2C3AACu;
label_2c3aac:
    // 0x2c3aac: 0xc085608  jal         func_215820
    ctx->pc = 0x2C3AACu;
    SET_GPR_U32(ctx, 31, 0x2C3AB4u);
    ctx->pc = 0x2C3AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3AACu;
    // 0x2c3ab0: 0x24050215  addiu       $a1, $zero, 0x215 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 533));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C3AACu, 0x2C3AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3AB4u;
label_2c3ab4:
    // 0x2c3ab4: 0x1440009c  bnez        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x2C3AB4u;
    {
        const bool branch_taken_0x2c3ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AB4u;
        // 0x2c3ab8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ab4) {
            ctx->pc = 0x2C3D28u;
            goto label_2c3d28;
        }
    }
    ctx->pc = 0x2C3ABCu;
    // 0x2c3abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3ac0: 0xc085608  jal         func_215820
    ctx->pc = 0x2C3AC0u;
    SET_GPR_U32(ctx, 31, 0x2C3AC8u);
    ctx->pc = 0x2C3AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3AC0u;
    // 0x2c3ac4: 0x24050216  addiu       $a1, $zero, 0x216 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C3AC0u, 0x2C3AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3AC8u;
label_2c3ac8:
    // 0x2c3ac8: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x2C3AC8u;
    {
        const bool branch_taken_0x2c3ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AC8u;
        // 0x2c3acc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ac8) {
            ctx->pc = 0x2C3D28u;
            goto label_2c3d28;
        }
    }
    ctx->pc = 0x2C3AD0u;
    // 0x2c3ad0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2C3AD0u;
    {
        const bool branch_taken_0x2c3ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AD0u;
        // 0x2c3ad4: 0x8e220a90  lw          $v0, 0xA90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ad0) {
            ctx->pc = 0x2C3B64u;
            goto label_2c3b64;
        }
    }
    ctx->pc = 0x2C3AD8u;
label_2c3ad8:
    // 0x2c3ad8: 0xc085608  jal         func_215820
    ctx->pc = 0x2C3AD8u;
    SET_GPR_U32(ctx, 31, 0x2C3AE0u);
    ctx->pc = 0x2C3ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3AD8u;
    // 0x2c3adc: 0x24050225  addiu       $a1, $zero, 0x225 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C3AD8u, 0x2C3AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3AE0u;
label_2c3ae0:
    // 0x2c3ae0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C3AE0u;
    {
        const bool branch_taken_0x2c3ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AE0u;
        // 0x2c3ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ae0) {
            ctx->pc = 0x2C3B40u;
            goto label_2c3b40;
        }
    }
    ctx->pc = 0x2C3AE8u;
    // 0x2c3ae8: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C3AE8u;
    SET_GPR_U32(ctx, 31, 0x2C3AF0u);
    ctx->pc = 0x2C3AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3AE8u;
    // 0x2c3aec: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C3AE8u, 0x2C3AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3AF0u;
label_2c3af0:
    // 0x2c3af0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C3AF0u;
    {
        const bool branch_taken_0x2c3af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AF0u;
        // 0x2c3af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3af0) {
            ctx->pc = 0x2C3B40u;
            goto label_2c3b40;
        }
    }
    ctx->pc = 0x2C3AF8u;
    // 0x2c3af8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c3af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c3afc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c3afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c3b00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c3b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c3b04: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c3b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c3b08: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C3B08u;
    SET_GPR_U32(ctx, 31, 0x2C3B10u);
    ctx->pc = 0x2C3B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3B08u;
    // 0x2c3b0c: 0x24050229  addiu       $a1, $zero, 0x229 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 553));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C3B08u, 0x2C3B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B10u;
label_2c3b10:
    // 0x2c3b10: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2c3b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2c3b14: 0x18400084  blez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x2C3B14u;
    {
        const bool branch_taken_0x2c3b14 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B14u;
        // 0x2c3b18: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b14) {
            ctx->pc = 0x2C3D28u;
            goto label_2c3d28;
        }
    }
    ctx->pc = 0x2C3B1Cu;
    // 0x2c3b1c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2c3b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2c3b20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c3b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3b24: 0x240400aa  addiu       $a0, $zero, 0xAA
    ctx->pc = 0x2c3b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x2c3b28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c3b28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3b2c: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x2c3b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2c3b30: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2c3b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c3b34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c3b34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b38: 0x8081602  j           func_205808
    ctx->pc = 0x2C3B38u;
    ctx->pc = 0x2C3B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3B38u;
    // 0x2c3b3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205808u;
    soundDelayStartEx_0x205808(rdram, ctx, runtime); return;
    ctx->pc = 0x2C3B40u;
label_2c3b40:
    // 0x2c3b40: 0xc085608  jal         func_215820
    ctx->pc = 0x2C3B40u;
    SET_GPR_U32(ctx, 31, 0x2C3B48u);
    ctx->pc = 0x2C3B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3B40u;
    // 0x2c3b44: 0x24050229  addiu       $a1, $zero, 0x229 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 553));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C3B40u, 0x2C3B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B48u;
label_2c3b48:
    // 0x2c3b48: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2C3B48u;
    {
        const bool branch_taken_0x2c3b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B48u;
        // 0x2c3b4c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b48) {
            ctx->pc = 0x2C3D28u;
            goto label_2c3d28;
        }
    }
    ctx->pc = 0x2C3B50u;
    // 0x2c3b50: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C3B50u;
    SET_GPR_U32(ctx, 31, 0x2C3B58u);
    ctx->pc = 0x2C3B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3B50u;
    // 0x2c3b54: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C3B50u, 0x2C3B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B58u;
label_2c3b58:
    // 0x2c3b58: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2C3B58u;
    {
        const bool branch_taken_0x2c3b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B58u;
        // 0x2c3b5c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b58) {
            ctx->pc = 0x2C3D28u;
            goto label_2c3d28;
        }
    }
    ctx->pc = 0x2C3B60u;
    // 0x2c3b60: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2c3b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
label_2c3b64:
    // 0x2c3b64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c3b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c3b68: 0xae230aa8  sw          $v1, 0xAA8($s1)
    ctx->pc = 0x2c3b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 3));
    // 0x2c3b6c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2c3b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2c3b70: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2C3B70u;
    {
        const bool branch_taken_0x2c3b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B70u;
        // 0x2c3b74: 0xae220a90  sw          $v0, 0xA90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b70) {
            ctx->pc = 0x2C3D24u;
            goto label_2c3d24;
        }
    }
    ctx->pc = 0x2C3B78u;
label_2c3b78:
    // 0x2c3b78: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2c3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c3b7c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c3b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c3b80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C3B80u;
    {
        const bool branch_taken_0x2c3b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B80u;
        // 0x2c3b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b80) {
            ctx->pc = 0x2C3BA4u;
            goto label_2c3ba4;
        }
    }
    ctx->pc = 0x2C3B88u;
    // 0x2c3b88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c3b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3b8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c3b8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3b90: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c3b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c3b94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c3b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3b98: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2c3b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c3b9c: 0x80b20be  j           func_2C82F8
    ctx->pc = 0x2C3B9Cu;
    ctx->pc = 0x2C3BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3B9Cu;
    // 0x2c3ba0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    enemySetMoveMode_0x2c82f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2C3BA4u;
label_2c3ba4:
    // 0x2c3ba4: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C3BA4u;
    SET_GPR_U32(ctx, 31, 0x2C3BACu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C3BA4u, 0x2C3BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3BACu;
label_2c3bac:
    // 0x2c3bac: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3BACu;
    {
        const bool branch_taken_0x2c3bac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BACu;
        // 0x2c3bb0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bac) {
            ctx->pc = 0x2C3BC0u;
            goto label_2c3bc0;
        }
    }
    ctx->pc = 0x2C3BB4u;
    // 0x2c3bb4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c3bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c3bb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C3BB8u;
    {
        const bool branch_taken_0x2c3bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BB8u;
        // 0x2c3bbc: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bb8) {
            ctx->pc = 0x2C3BD4u;
            goto label_2c3bd4;
        }
    }
    ctx->pc = 0x2C3BC0u;
label_2c3bc0:
    // 0x2c3bc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c3bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c3bc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c3bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c3bc8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c3bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c3bcc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c3bccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c3bd0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c3bd0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c3bd4:
    // 0x2c3bd4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c3bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c3bd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c3bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3bdc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c3bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c3be0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c3be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c3be4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c3be4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c3be8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c3be8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3bec: 0x0  nop
    ctx->pc = 0x2c3becu;
    // NOP
    // 0x2c3bf0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3BF0u;
    {
        const bool branch_taken_0x2c3bf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BF0u;
        // 0x2c3bf4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bf0) {
            ctx->pc = 0x2C3BFCu;
            goto label_2c3bfc;
        }
    }
    ctx->pc = 0x2C3BF8u;
    // 0x2c3bf8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c3bfc:
    // 0x2c3bfc: 0xae220aa8  sw          $v0, 0xAA8($s1)
    ctx->pc = 0x2c3bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
    // 0x2c3c00: 0x8e230a90  lw          $v1, 0xA90($s1)
    ctx->pc = 0x2c3c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c3c04: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c3c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c3c08: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x2c3c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x2c3c0c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c3c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c3c10: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2C3C10u;
    {
        const bool branch_taken_0x2c3c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C10u;
        // 0x2c3c14: 0xae230a90  sw          $v1, 0xA90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c10) {
            ctx->pc = 0x2C3D24u;
            goto label_2c3d24;
        }
    }
    ctx->pc = 0x2C3C18u;
label_2c3c18:
    // 0x2c3c18: 0x8e220a94  lw          $v0, 0xA94($s1)
    ctx->pc = 0x2c3c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2708)));
    // 0x2c3c1c: 0x30420804  andi        $v0, $v0, 0x804
    ctx->pc = 0x2c3c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2052);
    // 0x2c3c20: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C3C20u;
    {
        const bool branch_taken_0x2c3c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C20u;
        // 0x2c3c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c20) {
            ctx->pc = 0x2C3C64u;
            goto label_2c3c64;
        }
    }
    ctx->pc = 0x2C3C28u;
    // 0x2c3c28: 0xc085608  jal         func_215820
    ctx->pc = 0x2C3C28u;
    SET_GPR_U32(ctx, 31, 0x2C3C30u);
    ctx->pc = 0x2C3C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C28u;
    // 0x2c3c2c: 0x2405022f  addiu       $a1, $zero, 0x22F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C3C28u, 0x2C3C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C30u;
label_2c3c30:
    // 0x2c3c30: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C3C30u;
    {
        const bool branch_taken_0x2c3c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C30u;
        // 0x2c3c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c30) {
            ctx->pc = 0x2C3C98u;
            goto label_2c3c98;
        }
    }
    ctx->pc = 0x2C3C38u;
    // 0x2c3c38: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C3C38u;
    SET_GPR_U32(ctx, 31, 0x2C3C40u);
    ctx->pc = 0x2C3C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C38u;
    // 0x2c3c3c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C3C38u, 0x2C3C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C40u;
label_2c3c40:
    // 0x2c3c40: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2C3C40u;
    {
        const bool branch_taken_0x2c3c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C40u;
        // 0x2c3c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c40) {
            ctx->pc = 0x2C3D08u;
            goto label_2c3d08;
        }
    }
    ctx->pc = 0x2C3C48u;
    // 0x2c3c48: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C3C48u;
    SET_GPR_U32(ctx, 31, 0x2C3C50u);
    ctx->pc = 0x2C3C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C48u;
    // 0x2c3c4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C3C48u, 0x2C3C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C50u;
label_2c3c50:
    // 0x2c3c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3c54: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C3C54u;
    SET_GPR_U32(ctx, 31, 0x2C3C5Cu);
    ctx->pc = 0x2C3C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C54u;
    // 0x2c3c58: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C3C54u, 0x2C3C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C5Cu;
label_2c3c5c:
    // 0x2c3c5c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2C3C5Cu;
    {
        const bool branch_taken_0x2c3c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3c5c) {
            ctx->pc = 0x2C3D08u;
            goto label_2c3d08;
        }
    }
    ctx->pc = 0x2C3C64u;
label_2c3c64:
    // 0x2c3c64: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C3C64u;
    SET_GPR_U32(ctx, 31, 0x2C3C6Cu);
    ctx->pc = 0x2C3C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C64u;
    // 0x2c3c68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C3C64u, 0x2C3C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C6Cu;
label_2c3c6c:
    // 0x2c3c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3c70: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C3C70u;
    {
        const bool branch_taken_0x2c3c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C70u;
        // 0x2c3c74: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c70) {
            ctx->pc = 0x2C3D00u;
            goto label_2c3d00;
        }
    }
    ctx->pc = 0x2C3C78u;
label_2c3c78:
    // 0x2c3c78: 0x8e220a94  lw          $v0, 0xA94($s1)
    ctx->pc = 0x2c3c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2708)));
    // 0x2c3c7c: 0x30420804  andi        $v0, $v0, 0x804
    ctx->pc = 0x2c3c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2052);
    // 0x2c3c80: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C3C80u;
    {
        const bool branch_taken_0x2c3c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C80u;
        // 0x2c3c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c80) {
            ctx->pc = 0x2C3CF0u;
            goto label_2c3cf0;
        }
    }
    ctx->pc = 0x2C3C88u;
    // 0x2c3c88: 0xc085608  jal         func_215820
    ctx->pc = 0x2C3C88u;
    SET_GPR_U32(ctx, 31, 0x2C3C90u);
    ctx->pc = 0x2C3C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C88u;
    // 0x2c3c8c: 0x2405022f  addiu       $a1, $zero, 0x22F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C3C88u, 0x2C3C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C90u;
label_2c3c90:
    // 0x2c3c90: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C3C90u;
    {
        const bool branch_taken_0x2c3c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C90u;
        // 0x2c3c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c90) {
            ctx->pc = 0x2C3CC4u;
            goto label_2c3cc4;
        }
    }
    ctx->pc = 0x2C3C98u;
label_2c3c98:
    // 0x2c3c98: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C3C98u;
    SET_GPR_U32(ctx, 31, 0x2C3CA0u);
    ctx->pc = 0x2C3C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C98u;
    // 0x2c3c9c: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C3C98u, 0x2C3CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3CA0u;
label_2c3ca0:
    // 0x2c3ca0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c3ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c3ca4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c3ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c3ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3cac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c3cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c3cb0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c3cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c3cb4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C3CB4u;
    SET_GPR_U32(ctx, 31, 0x2C3CBCu);
    ctx->pc = 0x2C3CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3CB4u;
    // 0x2c3cb8: 0x2405022f  addiu       $a1, $zero, 0x22F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C3CB4u, 0x2C3CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3CBCu;
label_2c3cbc:
    // 0x2c3cbc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C3CBCu;
    {
        const bool branch_taken_0x2c3cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3cbc) {
            ctx->pc = 0x2C3D08u;
            goto label_2c3d08;
        }
    }
    ctx->pc = 0x2C3CC4u;
label_2c3cc4:
    // 0x2c3cc4: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C3CC4u;
    SET_GPR_U32(ctx, 31, 0x2C3CCCu);
    ctx->pc = 0x2C3CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3CC4u;
    // 0x2c3cc8: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C3CC4u, 0x2C3CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3CCCu;
label_2c3ccc:
    // 0x2c3ccc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C3CCCu;
    {
        const bool branch_taken_0x2c3ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3CCCu;
        // 0x2c3cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ccc) {
            ctx->pc = 0x2C3D08u;
            goto label_2c3d08;
        }
    }
    ctx->pc = 0x2C3CD4u;
    // 0x2c3cd4: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C3CD4u;
    SET_GPR_U32(ctx, 31, 0x2C3CDCu);
    ctx->pc = 0x2C3CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3CD4u;
    // 0x2c3cd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C3CD4u, 0x2C3CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3CDCu;
label_2c3cdc:
    // 0x2c3cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3ce0: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C3CE0u;
    SET_GPR_U32(ctx, 31, 0x2C3CE8u);
    ctx->pc = 0x2C3CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3CE0u;
    // 0x2c3ce4: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C3CE0u, 0x2C3CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3CE8u;
label_2c3ce8:
    // 0x2c3ce8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3CE8u;
    {
        const bool branch_taken_0x2c3ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3ce8) {
            ctx->pc = 0x2C3D08u;
            goto label_2c3d08;
        }
    }
    ctx->pc = 0x2C3CF0u;
label_2c3cf0:
    // 0x2c3cf0: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C3CF0u;
    SET_GPR_U32(ctx, 31, 0x2C3CF8u);
    ctx->pc = 0x2C3CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3CF0u;
    // 0x2c3cf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C3CF0u, 0x2C3CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3CF8u;
label_2c3cf8:
    // 0x2c3cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3cfc: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2c3cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2c3d00:
    // 0x2c3d00: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C3D00u;
    SET_GPR_U32(ctx, 31, 0x2C3D08u);
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C3D00u, 0x2C3D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D08u;
label_2c3d08:
    // 0x2c3d08: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2c3d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x2c3d0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c3d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3d10: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c3d10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3d14: 0x0  nop
    ctx->pc = 0x2c3d14u;
    // NOP
    // 0x2c3d18: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3D18u;
    {
        const bool branch_taken_0x2c3d18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D18u;
        // 0x2c3d1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d18) {
            ctx->pc = 0x2C3D24u;
            goto label_2c3d24;
        }
    }
    ctx->pc = 0x2C3D20u;
label_2c3d20:
    // 0x2c3d20: 0xae220aa8  sw          $v0, 0xAA8($s1)
    ctx->pc = 0x2c3d20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
label_2c3d24:
    // 0x2c3d24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c3d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c3d28:
    // 0x2c3d28: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c3d28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3d2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c3d2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3d30: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2c3d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c3d34: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D34u;
        // 0x2c3d38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3D3Cu;
}
