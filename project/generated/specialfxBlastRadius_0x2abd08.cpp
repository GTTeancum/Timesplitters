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

// Function: specialfxBlastRadius
// Address: 0x2abd08 - 0x2abdf8
void specialfxBlastRadius_0x2abd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxBlastRadius_0x2abd08");
#endif

    switch (ctx->pc) {
        case 0x2abdecu: goto label_2abdec;
        default: break;
    }

    ctx->pc = 0x2abd08u;

    // 0x2abd08: 0x460c6836  c.le.s      $f13, $f12
    ctx->pc = 0x2abd08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2abd0c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2abd0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2abd10: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x2ABD10u;
    {
        const bool branch_taken_0x2abd10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ABD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD10u;
        // 0x2abd14: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd10) {
            ctx->pc = 0x2ABDECu;
            goto label_2abdec;
        }
    }
    ctx->pc = 0x2ABD18u;
    // 0x2abd18: 0x460e6800  add.s       $f0, $f13, $f14
    ctx->pc = 0x2abd18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[14]);
    // 0x2abd1c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2abd1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2abd20: 0x0  nop
    ctx->pc = 0x2abd20u;
    // NOP
    // 0x2abd24: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x2ABD24u;
    {
        const bool branch_taken_0x2abd24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ABD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD24u;
        // 0x2abd28: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd24) {
            ctx->pc = 0x2ABDECu;
            goto label_2abdec;
        }
    }
    ctx->pc = 0x2ABD2Cu;
    // 0x2abd2c: 0x460d6001  sub.s       $f0, $f12, $f13
    ctx->pc = 0x2abd2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x2abd30: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2abd30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x2abd34: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2abd34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2abd38: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2abd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2abd3c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2abd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2abd40: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2abd40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2abd44: 0x34426a7f  ori         $v0, $v0, 0x6A7F
    ctx->pc = 0x2abd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27263);
    // 0x2abd48: 0x0  nop
    ctx->pc = 0x2abd48u;
    // NOP
    // 0x2abd4c: 0x0  nop
    ctx->pc = 0x2abd4cu;
    // NOP
    // 0x2abd50: 0x460e0003  div.s       $f0, $f0, $f14
    ctx->pc = 0x2abd50u;
    if (ctx->f[14] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[14];
    // 0x2abd54: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x2abd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2abd58: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x2abd58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x2abd5c: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x2abd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2abd60: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x2abd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2abd64: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2abd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2abd68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2abd68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2abd6c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2abd6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2abd70: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2abd70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2abd74: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2abd74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2abd78: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2abd78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2abd7c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2abd7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2abd80: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x2abd80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2abd84: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2abd84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2abd88: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2abd88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2abd8c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2abd8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2abd90: 0x8f84b99c  lw          $a0, -0x4664($gp)
    ctx->pc = 0x2abd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949276)));
    // 0x2abd94: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x2abd94u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2abd98: 0x46002981  sub.s       $f6, $f5, $f0
    ctx->pc = 0x2abd98u;
    ctx->f[6] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2abd9c: 0x46002080  add.s       $f2, $f4, $f0
    ctx->pc = 0x2abd9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2abda0: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2abda0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2abda4: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x2abda4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x2abda8: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2abda8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2abdac: 0xe7a60048  swc1        $f6, 0x48($sp)
    ctx->pc = 0x2abdacu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2abdb0: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2abdb0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2abdb4: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x2abdb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2abdb8: 0x94e00  sll         $t1, $t1, 24
    ctx->pc = 0x2abdb8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x2abdbc: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2abdbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2abdc0: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x2abdc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x2abdc4: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x2abdc4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2abdc8: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x2abdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x2abdcc: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2abdccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abdd0: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x2abdd0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2abdd4: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x2abdd4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abdd8: 0x8c6506e4  lw          $a1, 0x6E4($v1)
    ctx->pc = 0x2abdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1764)));
    // 0x2abddc: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x2abddcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2abde0: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x2abde0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2abde4: 0xc0aabfe  jal         func_2AAFF8
    ctx->pc = 0x2ABDE4u;
    SET_GPR_U32(ctx, 31, 0x2ABDECu);
    ctx->pc = 0x2ABDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABDE4u;
    // 0x2abde8: 0xe7a60038  swc1        $f6, 0x38($sp) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAFF8u, 0x2ABDE4u, 0x2ABDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABDECu;
label_2abdec:
    // 0x2abdec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2abdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2abdf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABDF0u;
        // 0x2abdf4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABDF8u;
}
