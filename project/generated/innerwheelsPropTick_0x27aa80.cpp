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

// Function: innerwheelsPropTick
// Address: 0x27aa80 - 0x27ab20
void innerwheelsPropTick_0x27aa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("innerwheelsPropTick_0x27aa80");
#endif

    ctx->pc = 0x27aa80u;

    // 0x27aa80: 0xc4850028  lwc1        $f5, 0x28($a0)
    ctx->pc = 0x27aa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27aa84: 0xc7829da8  lwc1        $f2, -0x6258($gp)
    ctx->pc = 0x27aa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27aa88: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x27aa88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x27aa8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27aa8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27aa90: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x27aa90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x27aa94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27aa94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27aa98: 0x460028c6  mov.s       $f3, $f5
    ctx->pc = 0x27aa98u;
    ctx->f[3] = FPU_MOV_S(ctx->f[5]);
    // 0x27aa9c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x27aa9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27aaa0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27aaa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27aaa4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x27aaa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x27aaa8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27AAA8u;
    {
        const bool branch_taken_0x27aaa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AAA8u;
        // 0x27aaac: 0x46011082  mul.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aaa8) {
            ctx->pc = 0x27AABCu;
            goto label_27aabc;
        }
    }
    ctx->pc = 0x27AAB0u;
    // 0x27aab0: 0x460028c7  neg.s       $f3, $f5
    ctx->pc = 0x27aab0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
    // 0x27aab4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x27aab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x27aab8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x27aab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_27aabc:
    // 0x27aabc: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x27aabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x27aac0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27aac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27aac4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x27aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x27aac8: 0xc7818728  lwc1        $f1, -0x78D8($gp)
    ctx->pc = 0x27aac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27aacc: 0x24635c60  addiu       $v1, $v1, 0x5C60
    ctx->pc = 0x27aaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23648));
    // 0x27aad0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x27aad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x27aad4: 0xc784872c  lwc1        $f4, -0x78D4($gp)
    ctx->pc = 0x27aad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27aad8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x27aad8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x27aadc: 0xc7838730  lwc1        $f3, -0x78D0($gp)
    ctx->pc = 0x27aadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27aae0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27aae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27aae4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27aae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27aae8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27aae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27aaec: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x27aaecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x27aaf0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27aaf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x27aaf4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27aaf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27aaf8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27aaf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27aafc: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x27aafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x27ab00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27ab04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27ab08: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27ab08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ab0c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x27ab0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x27ab10: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x27ab10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x27ab14: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x27ab14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x27ab18: 0x3e00008  jr          $ra
    ctx->pc = 0x27AB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB18u;
        // 0x27ab1c: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AB20u;
}
