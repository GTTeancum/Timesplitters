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

// Function: matrix2Euler
// Address: 0x2b5f10 - 0x2b5fe0
void matrix2Euler_0x2b5f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrix2Euler_0x2b5f10");
#endif

    switch (ctx->pc) {
        case 0x2b5f3cu: goto label_2b5f3c;
        case 0x2b5f64u: goto label_2b5f64;
        case 0x2b5f6cu: goto label_2b5f6c;
        case 0x2b5f74u: goto label_2b5f74;
        case 0x2b5f84u: goto label_2b5f84;
        case 0x2b5f8cu: goto label_2b5f8c;
        case 0x2b5f9cu: goto label_2b5f9c;
        case 0x2b5facu: goto label_2b5fac;
        case 0x2b5fc0u: goto label_2b5fc0;
        default: break;
    }

    ctx->pc = 0x2b5f10u;

    // 0x2b5f10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b5f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b5f14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b5f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b5f18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b5f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b5f1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b5f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f20: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2b5f20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b5f24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b5f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b5f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b5f2c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2b5f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5f30: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x2b5f30u;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
    // 0x2b5f34: 0xc0b5f1a  jal         func_2D7C68
    ctx->pc = 0x2B5F34u;
    SET_GPR_U32(ctx, 31, 0x2B5F3Cu);
    ctx->pc = 0x2B5F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5F34u;
    // 0x2b5f38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C68u, 0x2B5F34u, 0x2B5F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5F3Cu;
label_2b5f3c:
    // 0x2b5f3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b5f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b5f40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b5f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b5f44: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x2b5f44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5f48: 0x0  nop
    ctx->pc = 0x2b5f48u;
    // NOP
    // 0x2b5f4c: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x2B5F4Cu;
    {
        const bool branch_taken_0x2b5f4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B5F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F4Cu;
        // 0x2b5f50: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f4c) {
            ctx->pc = 0x2B5FB4u;
            goto label_2b5fb4;
        }
    }
    ctx->pc = 0x2B5F54u;
    // 0x2b5f54: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x2b5f54u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2b5f58: 0x46140d01  sub.s       $f20, $f1, $f20
    ctx->pc = 0x2b5f58u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x2b5f5c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2B5F5Cu;
    SET_GPR_U32(ctx, 31, 0x2B5F64u);
    ctx->pc = 0x2B5F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5F5Cu;
    // 0x2b5f60: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2B5F5Cu, 0x2B5F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5F64u;
label_2b5f64:
    // 0x2b5f64: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2B5F64u;
    SET_GPR_U32(ctx, 31, 0x2B5F6Cu);
    ctx->pc = 0x2B5F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5F64u;
    // 0x2b5f68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2B5F64u, 0x2B5F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5F6Cu;
label_2b5f6c:
    // 0x2b5f6c: 0xc0b5e96  jal         func_2D7A58
    ctx->pc = 0x2B5F6Cu;
    SET_GPR_U32(ctx, 31, 0x2B5F74u);
    ctx->pc = 0x2B5F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5F6Cu;
    // 0x2b5f70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7A58u, 0x2B5F6Cu, 0x2B5F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5F74u;
label_2b5f74:
    // 0x2b5f74: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x2b5f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2b5f78: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2b5f78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2b5f7c: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2B5F7Cu;
    SET_GPR_U32(ctx, 31, 0x2B5F84u);
    ctx->pc = 0x2B5F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5F7Cu;
    // 0x2b5f80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2B5F7Cu, 0x2B5F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5F84u;
label_2b5f84:
    // 0x2b5f84: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2B5F84u;
    SET_GPR_U32(ctx, 31, 0x2B5F8Cu);
    ctx->pc = 0x2B5F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5F84u;
    // 0x2b5f88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2B5F84u, 0x2B5F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5F8Cu;
label_2b5f8c:
    // 0x2b5f8c: 0xc60c002c  lwc1        $f12, 0x2C($s0)
    ctx->pc = 0x2b5f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b5f90: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b5f90u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2b5f94: 0xc0b5f1a  jal         func_2D7C68
    ctx->pc = 0x2B5F94u;
    SET_GPR_U32(ctx, 31, 0x2B5F9Cu);
    ctx->pc = 0x2B5F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5F94u;
    // 0x2b5f98: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C68u, 0x2B5F94u, 0x2B5F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5F9Cu;
label_2b5f9c:
    // 0x2b5f9c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2b5f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2b5fa0: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x2b5fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b5fa4: 0xc0b5f1a  jal         func_2D7C68
    ctx->pc = 0x2B5FA4u;
    SET_GPR_U32(ctx, 31, 0x2B5FACu);
    ctx->pc = 0x2B5FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5FA4u;
    // 0x2b5fa8: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C68u, 0x2B5FA4u, 0x2B5FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5FACu;
label_2b5fac:
    // 0x2b5fac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5FACu;
    {
        const bool branch_taken_0x2b5fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FACu;
        // 0x2b5fb0: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5fac) {
            ctx->pc = 0x2B5FC8u;
            goto label_2b5fc8;
        }
    }
    ctx->pc = 0x2B5FB4u;
label_2b5fb4:
    // 0x2b5fb4: 0xc60c0038  lwc1        $f12, 0x38($s0)
    ctx->pc = 0x2b5fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b5fb8: 0xc0b5f1a  jal         func_2D7C68
    ctx->pc = 0x2B5FB8u;
    SET_GPR_U32(ctx, 31, 0x2B5FC0u);
    ctx->pc = 0x2B5FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5FB8u;
    // 0x2b5fbc: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C68u, 0x2B5FB8u, 0x2B5FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5FC0u;
label_2b5fc0:
    // 0x2b5fc0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2b5fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2b5fc4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2b5fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2b5fc8:
    // 0x2b5fc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b5fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5fcc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b5fccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5fd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b5fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5fd4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2b5fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b5fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FD8u;
        // 0x2b5fdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5FE0u;
}
