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

// Function: bgPortalCalcOutCode
// Address: 0x257e38 - 0x257f20
void bgPortalCalcOutCode_0x257e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgPortalCalcOutCode_0x257e38");
#endif

    switch (ctx->pc) {
        case 0x257e54u: goto label_257e54;
        case 0x257e60u: goto label_257e60;
        default: break;
    }

    ctx->pc = 0x257e38u;

    // 0x257e38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x257e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x257e3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x257e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x257e40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x257e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x257e44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x257e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e48: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x257e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x257e4c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x257E4Cu;
    SET_GPR_U32(ctx, 31, 0x257E54u);
    ctx->pc = 0x257E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E4Cu;
    // 0x257e50: 0xc60c000c  lwc1        $f12, 0xC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x257E4Cu, 0x257E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E54u;
label_257e54:
    // 0x257e54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x257e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e58: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x257E58u;
    SET_GPR_U32(ctx, 31, 0x257E60u);
    ctx->pc = 0x257E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E58u;
    // 0x257e5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x257E58u, 0x257E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E60u;
label_257e60:
    // 0x257e60: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x257E60u;
    {
        const bool branch_taken_0x257e60 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x257e60) {
            ctx->pc = 0x257E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257E60u;
            // 0x257e64: 0xc602000c  lwc1        $f2, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x257E78u;
            goto label_257e78;
        }
    }
    ctx->pc = 0x257E68u;
    // 0x257e68: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x257e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x257e6c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x257e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x257e70: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x257e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x257e74: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x257e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_257e78:
    // 0x257e78: 0xc780b898  lwc1        $f0, -0x4768($gp)
    ctx->pc = 0x257e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257e7c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x257e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257e80: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x257e80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x257e84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257e84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257e88: 0x0  nop
    ctx->pc = 0x257e88u;
    // NOP
    // 0x257e8c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x257E8Cu;
    {
        const bool branch_taken_0x257e8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E8Cu;
        // 0x257e90: 0xc780b89c  lwc1        $f0, -0x4764($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e8c) {
            ctx->pc = 0x257EA4u;
            goto label_257ea4;
        }
    }
    ctx->pc = 0x257E94u;
    // 0x257e94: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x257e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x257e98: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x257e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x257e9c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x257e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x257ea0: 0xc780b89c  lwc1        $f0, -0x4764($gp)
    ctx->pc = 0x257ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257ea4:
    // 0x257ea4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x257ea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x257ea8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x257ea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257eac: 0x0  nop
    ctx->pc = 0x257eacu;
    // NOP
    // 0x257eb0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x257EB0u;
    {
        const bool branch_taken_0x257eb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x257eb0) {
            ctx->pc = 0x257EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257EB0u;
            // 0x257eb4: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x257EC8u;
            goto label_257ec8;
        }
    }
    ctx->pc = 0x257EB8u;
    // 0x257eb8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x257eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x257ebc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x257ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x257ec0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x257ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x257ec4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x257ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257ec8:
    // 0x257ec8: 0xc780b8a0  lwc1        $f0, -0x4760($gp)
    ctx->pc = 0x257ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257ecc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x257eccu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x257ed0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x257ed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x257ed4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257ed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257ed8: 0x0  nop
    ctx->pc = 0x257ed8u;
    // NOP
    // 0x257edc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x257EDCu;
    {
        const bool branch_taken_0x257edc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257EDCu;
        // 0x257ee0: 0xc780b8a4  lwc1        $f0, -0x475C($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257edc) {
            ctx->pc = 0x257EF4u;
            goto label_257ef4;
        }
    }
    ctx->pc = 0x257EE4u;
    // 0x257ee4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x257ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x257ee8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x257ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x257eec: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x257eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x257ef0: 0xc780b8a4  lwc1        $f0, -0x475C($gp)
    ctx->pc = 0x257ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257ef4:
    // 0x257ef4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x257ef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x257ef8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x257ef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257efc: 0x0  nop
    ctx->pc = 0x257efcu;
    // NOP
    // 0x257f00: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x257F00u;
    {
        const bool branch_taken_0x257f00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F00u;
        // 0x257f04: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f00) {
            ctx->pc = 0x257F14u;
            goto label_257f14;
        }
    }
    ctx->pc = 0x257F08u;
    // 0x257f08: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x257f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x257f0c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x257f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x257f10: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x257f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_257f14:
    // 0x257f14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x257f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257f18: 0x3e00008  jr          $ra
    ctx->pc = 0x257F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F18u;
        // 0x257f1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257F20u;
}
