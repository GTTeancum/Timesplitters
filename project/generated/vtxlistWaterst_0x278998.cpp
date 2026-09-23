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

// Function: vtxlistWaterst
// Address: 0x278998 - 0x278a9c
void vtxlistWaterst_0x278998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vtxlistWaterst_0x278998");
#endif

    switch (ctx->pc) {
        case 0x2789f8u: goto label_2789f8;
        default: break;
    }

    ctx->pc = 0x278998u;

    // 0x278998: 0xc7809da8  lwc1        $f0, -0x6258($gp)
    ctx->pc = 0x278998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27899c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27899cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2789a0: 0xc7818680  lwc1        $f1, -0x7980($gp)
    ctx->pc = 0x2789a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2789a4: 0xc7838684  lwc1        $f3, -0x797C($gp)
    ctx->pc = 0x2789a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2789a8: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2789a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2789ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2789acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2789b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2789b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2789b4: 0x24635c60  addiu       $v1, $v1, 0x5C60
    ctx->pc = 0x2789b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23648));
    // 0x2789b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2789b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2789bc: 0xc7848688  lwc1        $f4, -0x7978($gp)
    ctx->pc = 0x2789bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2789c0: 0xc785b188  lwc1        $f5, -0x4E78($gp)
    ctx->pc = 0x2789c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2789c4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2789c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2789c8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2789c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2789cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2789ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2789d0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2789d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2789d4: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2789d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2789d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2789d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2789dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2789dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2789e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2789e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2789e4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2789e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2789e8: 0x18c00011  blez        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2789E8u;
    {
        const bool branch_taken_0x2789e8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2789ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2789E8u;
        // 0x2789ec: 0x460028c0  add.s       $f3, $f5, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2789e8) {
            ctx->pc = 0x278A30u;
            goto label_278a30;
        }
    }
    ctx->pc = 0x2789F0u;
    // 0x2789f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2789f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2789f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2789f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2789f8:
    // 0x2789f8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2789f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2789fc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2789fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x278a00: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x278a00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x278a04: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x278a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x278a08: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x278a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278a0c: 0xc780b18c  lwc1        $f0, -0x4E74($gp)
    ctx->pc = 0x278a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278a10: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x278a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x278a14: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x278a14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x278a18: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x278a18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x278a1c: 0xe4a2000c  swc1        $f2, 0xC($a1)
    ctx->pc = 0x278a1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x278a20: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x278a20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x278a24: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x278A24u;
    {
        const bool branch_taken_0x278a24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x278A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A24u;
        // 0x278a28: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a24) {
            ctx->pc = 0x2789F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2789f8;
        }
    }
    ctx->pc = 0x278A2Cu;
    // 0x278a2c: 0xc785b188  lwc1        $f5, -0x4E78($gp)
    ctx->pc = 0x278a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_278a30:
    // 0x278a30: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x278a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278a34: 0xc780868c  lwc1        $f0, -0x7974($gp)
    ctx->pc = 0x278a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278a38: 0xc7828690  lwc1        $f2, -0x7970($gp)
    ctx->pc = 0x278a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x278a3c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x278a3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x278a40: 0xc783b18c  lwc1        $f3, -0x4E74($gp)
    ctx->pc = 0x278a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x278a44: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x278a44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x278a48: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x278a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x278a4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x278a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x278a50: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x278a50u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x278a54: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x278a54u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x278a58: 0x46022836  c.le.s      $f5, $f2
    ctx->pc = 0x278a58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x278a5c: 0xe785b188  swc1        $f5, -0x4E78($gp)
    ctx->pc = 0x278a5cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947208), bits); }
    // 0x278a60: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x278A60u;
    {
        const bool branch_taken_0x278a60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x278A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A60u;
        // 0x278a64: 0xe783b18c  swc1        $f3, -0x4E74($gp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a60) {
            ctx->pc = 0x278A78u;
            goto label_278a78;
        }
    }
    ctx->pc = 0x278A68u;
    // 0x278a68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x278a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x278a6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278a70: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x278a70u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x278a74: 0xe785b188  swc1        $f5, -0x4E78($gp)
    ctx->pc = 0x278a74u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947208), bits); }
label_278a78:
    // 0x278a78: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x278a78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x278a7c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x278A7Cu;
    {
        const bool branch_taken_0x278a7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x278a7c) {
            ctx->pc = 0x278A94u;
            goto label_278a94;
        }
    }
    ctx->pc = 0x278A84u;
    // 0x278a84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x278a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x278a88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278a8c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x278a8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x278a90: 0xe780b18c  swc1        $f0, -0x4E74($gp)
    ctx->pc = 0x278a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947212), bits); }
label_278a94:
    // 0x278a94: 0x3e00008  jr          $ra
    ctx->pc = 0x278A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278A9Cu;
}
