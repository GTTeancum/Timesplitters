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

// Function: tombtorchPropTick
// Address: 0x27beb0 - 0x27bfc4
void tombtorchPropTick_0x27beb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("tombtorchPropTick_0x27beb0");
#endif

    switch (ctx->pc) {
        case 0x27bef8u: goto label_27bef8;
        case 0x27bf10u: goto label_27bf10;
        case 0x27bf28u: goto label_27bf28;
        default: break;
    }

    ctx->pc = 0x27beb0u;

    // 0x27beb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27beb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27beb4: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x27beb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x27beb8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27beb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27bebc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27bebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bec0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27bec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27bec4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27bec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bec8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27bec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27becc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27beccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bed0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27bed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27bed4: 0x8e110160  lw          $s1, 0x160($s0)
    ctx->pc = 0x27bed4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x27bed8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x27bed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27bedc: 0x8e080020  lw          $t0, 0x20($s0)
    ctx->pc = 0x27bedcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x27bee0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x27bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x27bee4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27bee8: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x27bee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27beec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x27beecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27bef0: 0xc09d194  jal         func_274650
    ctx->pc = 0x27BEF0u;
    SET_GPR_U32(ctx, 31, 0x27BEF8u);
    ctx->pc = 0x27BEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BEF0u;
    // 0x27bef4: 0x24720050  addiu       $s2, $v1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274650u, 0x27BEF0u, 0x27BEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BEF8u;
label_27bef8:
    // 0x27bef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27bef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27befc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27befcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bf00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27bf00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bf04: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x27bf04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27bf08: 0xc09d11a  jal         func_274468
    ctx->pc = 0x27BF08u;
    SET_GPR_U32(ctx, 31, 0x27BF10u);
    ctx->pc = 0x27BF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BF08u;
    // 0x27bf0c: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274468u, 0x27BF08u, 0x27BF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BF10u;
label_27bf10:
    // 0x27bf10: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x27BF10u;
    {
        const bool branch_taken_0x27bf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF10u;
        // 0x27bf14: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf10) {
            ctx->pc = 0x27BF64u;
            goto label_27bf64;
        }
    }
    ctx->pc = 0x27BF18u;
    // 0x27bf18: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x27bf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bf1c: 0x18800011  blez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27BF1Cu;
    {
        const bool branch_taken_0x27bf1c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x27BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF1Cu;
        // 0x27bf20: 0x8e430034  lw          $v1, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf1c) {
            ctx->pc = 0x27BF64u;
            goto label_27bf64;
        }
    }
    ctx->pc = 0x27BF24u;
    // 0x27bf24: 0x0  nop
    ctx->pc = 0x27bf24u;
    // NOP
label_27bf28:
    // 0x27bf28: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x27bf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27bf2c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x27bf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x27bf30: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x27bf30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x27bf34: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x27bf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bf38: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x27bf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27bf3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27bf3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27bf40: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x27bf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x27bf44: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x27bf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27bf48: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x27bf48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x27bf4c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x27bf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bf50: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x27bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x27bf54: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x27bf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27bf58: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x27BF58u;
    {
        const bool branch_taken_0x27bf58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF58u;
        // 0x27bf5c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf58) {
            ctx->pc = 0x27BF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27bf28;
        }
    }
    ctx->pc = 0x27BF60u;
    // 0x27bf60: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x27bf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bf64:
    // 0x27bf64: 0xc78187ac  lwc1        $f1, -0x7854($gp)
    ctx->pc = 0x27bf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27bf68: 0xc6230028  lwc1        $f3, 0x28($s1)
    ctx->pc = 0x27bf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27bf6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27bf6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27bf70: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x27bf70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27bf74: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x27bf74u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x27bf78: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x27bf78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bf7c: 0x0  nop
    ctx->pc = 0x27bf7cu;
    // NOP
    // 0x27bf80: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27BF80u;
    {
        const bool branch_taken_0x27bf80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27BF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF80u;
        // 0x27bf84: 0xe6230028  swc1        $f3, 0x28($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf80) {
            ctx->pc = 0x27BF98u;
            goto label_27bf98;
        }
    }
    ctx->pc = 0x27BF88u;
    // 0x27bf88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27bf88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27bf8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27bf8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27bf90: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x27bf90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x27bf94: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x27bf94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_27bf98:
    // 0x27bf98: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x27bf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bf9c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27bf9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27bfa0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27bfa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27bfa4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27bfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27bfa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27bfa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27bfac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27bfacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27bfb0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27bfb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bfb4: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x27bfb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x27bfb8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27bfb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bfbc: 0x3e00008  jr          $ra
    ctx->pc = 0x27BFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFBCu;
        // 0x27bfc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BFC4u;
}
