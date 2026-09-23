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

// Function: HitTestDistancePointToLineSegmentSquared
// Address: 0x20add0 - 0x20af20
void HitTestDistancePointToLineSegmentSquared_0x20add0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HitTestDistancePointToLineSegmentSquared_0x20add0");
#endif

    ctx->pc = 0x20add0u;

    // 0x20add0: 0xc4ab0000  lwc1        $f11, 0x0($a1)
    ctx->pc = 0x20add0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x20add4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20add4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20add8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x20add8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20addc: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x20addcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20ade0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x20ade0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ade4: 0x460b0241  sub.s       $f9, $f0, $f11
    ctx->pc = 0x20ade4u;
    ctx->f[9] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
    // 0x20ade8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x20ade8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20adec: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x20adecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20adf0: 0x46030a81  sub.s       $f10, $f1, $f3
    ctx->pc = 0x20adf0u;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x20adf4: 0x460b11c1  sub.s       $f7, $f2, $f11
    ctx->pc = 0x20adf4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[11]);
    // 0x20adf8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x20adf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20adfc: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x20adfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20ae00: 0x46030201  sub.s       $f8, $f0, $f3
    ctx->pc = 0x20ae00u;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x20ae04: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x20ae04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20ae08: 0x46011181  sub.s       $f6, $f2, $f1
    ctx->pc = 0x20ae08u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x20ae0c: 0xe7a90000  swc1        $f9, 0x0($sp)
    ctx->pc = 0x20ae0cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20ae10: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x20ae10u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x20ae14: 0xe7aa0004  swc1        $f10, 0x4($sp)
    ctx->pc = 0x20ae14u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20ae18: 0x46074802  mul.s       $f0, $f9, $f7
    ctx->pc = 0x20ae18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x20ae1c: 0xe7a70010  swc1        $f7, 0x10($sp)
    ctx->pc = 0x20ae1cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x20ae20: 0x46085082  mul.s       $f2, $f10, $f8
    ctx->pc = 0x20ae20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
    // 0x20ae24: 0xe7a80014  swc1        $f8, 0x14($sp)
    ctx->pc = 0x20ae24u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x20ae28: 0x46062042  mul.s       $f1, $f4, $f6
    ctx->pc = 0x20ae28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x20ae2c: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x20ae2cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20ae30: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x20ae30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20ae34: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20ae34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x20ae38: 0x46010140  add.s       $f5, $f0, $f1
    ctx->pc = 0x20ae38u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20ae3c: 0x46032836  c.le.s      $f5, $f3
    ctx->pc = 0x20ae3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ae40: 0x0  nop
    ctx->pc = 0x20ae40u;
    // NOP
    // 0x20ae44: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x20AE44u;
    {
        const bool branch_taken_0x20ae44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE44u;
        // 0x20ae48: 0xe7a60018  swc1        $f6, 0x18($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae44) {
            ctx->pc = 0x20AE54u;
            goto label_20ae54;
        }
    }
    ctx->pc = 0x20AE4Cu;
    // 0x20ae4c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x20AE4Cu;
    {
        const bool branch_taken_0x20ae4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE4Cu;
        // 0x20ae50: 0x46001946  mov.s       $f5, $f3 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae4c) {
            ctx->pc = 0x20AEBCu;
            goto label_20aebc;
        }
    }
    ctx->pc = 0x20AE54u;
label_20ae54:
    // 0x20ae54: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x20ae54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x20ae58: 0x46084042  mul.s       $f1, $f8, $f8
    ctx->pc = 0x20ae58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x20ae5c: 0x46063082  mul.s       $f2, $f6, $f6
    ctx->pc = 0x20ae5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x20ae60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20ae60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20ae64: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20ae64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x20ae68: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x20ae68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ae6c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x20AE6Cu;
    {
        const bool branch_taken_0x20ae6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ae6c) {
            ctx->pc = 0x20AE8Cu;
            goto label_20ae8c;
        }
    }
    ctx->pc = 0x20AE74u;
    // 0x20ae74: 0x46074801  sub.s       $f0, $f9, $f7
    ctx->pc = 0x20ae74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[7]);
    // 0x20ae78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20ae78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20ae7c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x20ae7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x20ae80: 0x46085041  sub.s       $f1, $f10, $f8
    ctx->pc = 0x20ae80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[10], ctx->f[8]);
    // 0x20ae84: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20AE84u;
    {
        const bool branch_taken_0x20ae84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE84u;
        // 0x20ae88: 0x46062081  sub.s       $f2, $f4, $f6 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae84) {
            ctx->pc = 0x20AEB0u;
            goto label_20aeb0;
        }
    }
    ctx->pc = 0x20AE8Cu;
label_20ae8c:
    // 0x20ae8c: 0x0  nop
    ctx->pc = 0x20ae8cu;
    // NOP
    // 0x20ae90: 0x0  nop
    ctx->pc = 0x20ae90u;
    // NOP
    // 0x20ae94: 0x46002943  div.s       $f5, $f5, $f0
    ctx->pc = 0x20ae94u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[5] = ctx->f[5] / ctx->f[0];
    // 0x20ae98: 0x46072802  mul.s       $f0, $f5, $f7
    ctx->pc = 0x20ae98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x20ae9c: 0x46082842  mul.s       $f1, $f5, $f8
    ctx->pc = 0x20ae9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x20aea0: 0x46062882  mul.s       $f2, $f5, $f6
    ctx->pc = 0x20aea0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x20aea4: 0x46004801  sub.s       $f0, $f9, $f0
    ctx->pc = 0x20aea4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x20aea8: 0x46015041  sub.s       $f1, $f10, $f1
    ctx->pc = 0x20aea8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x20aeac: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x20aeacu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_20aeb0:
    // 0x20aeb0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x20aeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20aeb4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x20aeb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20aeb8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x20aeb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_20aebc:
    // 0x20aebc: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x20AEBCu;
    {
        const bool branch_taken_0x20aebc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEBCu;
        // 0x20aec0: 0xc7a10010  lwc1        $f1, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aebc) {
            ctx->pc = 0x20AEF8u;
            goto label_20aef8;
        }
    }
    ctx->pc = 0x20AEC4u;
    // 0x20aec4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x20aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20aec8: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x20aec8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x20aecc: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x20aeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20aed0: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x20aed0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x20aed4: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x20aed4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x20aed8: 0x46015840  add.s       $f1, $f11, $f1
    ctx->pc = 0x20aed8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[1]);
    // 0x20aedc: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x20aedcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x20aee0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x20aee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20aee4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20aee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x20aee8: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x20aee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x20aeec: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x20aeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20aef0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x20aef0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x20aef4: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x20aef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_20aef8:
    // 0x20aef8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x20aef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20aefc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x20aefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20af00: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x20af00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x20af04: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x20af04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20af08: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x20af08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x20af0c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x20af0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x20af10: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20af10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x20af14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20af14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20af18: 0x3e00008  jr          $ra
    ctx->pc = 0x20AF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF18u;
        // 0x20af1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AF20u;
}
