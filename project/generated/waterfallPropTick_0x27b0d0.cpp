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

// Function: waterfallPropTick
// Address: 0x27b0d0 - 0x27b1d8
void waterfallPropTick_0x27b0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waterfallPropTick_0x27b0d0");
#endif

    switch (ctx->pc) {
        case 0x27b11cu: goto label_27b11c;
        case 0x27b134u: goto label_27b134;
        case 0x27b148u: goto label_27b148;
        default: break;
    }

    ctx->pc = 0x27b0d0u;

    // 0x27b0d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27b0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27b0d4: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x27b0d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x27b0d8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x27b0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x27b0dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27b0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b0e0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27b0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27b0e4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27b0e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b0e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27b0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27b0ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b0f0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27b0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x27b0f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27b0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b0f8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27b0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27b0fc: 0x8e110160  lw          $s1, 0x160($s0)
    ctx->pc = 0x27b0fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x27b100: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x27b100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27b104: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x27b104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x27b108: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27b108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27b10c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27b110: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x27b110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27b114: 0xc09d194  jal         func_274650
    ctx->pc = 0x27B114u;
    SET_GPR_U32(ctx, 31, 0x27B11Cu);
    ctx->pc = 0x27B118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B114u;
    // 0x27b118: 0x629023  subu        $s2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274650u, 0x27B114u, 0x27B11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B11Cu;
label_27b11c:
    // 0x27b11c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b124: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27b124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b128: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x27b128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27b12c: 0xc09d11a  jal         func_274468
    ctx->pc = 0x27B12Cu;
    SET_GPR_U32(ctx, 31, 0x27B134u);
    ctx->pc = 0x27B130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B12Cu;
    // 0x27b130: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274468u, 0x27B12Cu, 0x27B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B134u;
label_27b134:
    // 0x27b134: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27B134u;
    {
        const bool branch_taken_0x27b134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b134) {
            ctx->pc = 0x27B180u;
            goto label_27b180;
        }
    }
    ctx->pc = 0x27B13Cu;
    // 0x27b13c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x27b13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b140: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x27B140u;
    {
        const bool branch_taken_0x27b140 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x27B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B140u;
        // 0x27b144: 0x8e430034  lw          $v1, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b140) {
            ctx->pc = 0x27B180u;
            goto label_27b180;
        }
    }
    ctx->pc = 0x27B148u;
label_27b148:
    // 0x27b148: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x27b148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b14c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x27b14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x27b150: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x27b150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x27b154: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x27b154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b158: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x27b158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b15c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27b15cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27b160: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x27b160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x27b164: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x27b164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b168: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x27b168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x27b16c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x27b16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b170: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x27b170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x27b174: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x27b174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27b178: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x27B178u;
    {
        const bool branch_taken_0x27b178 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B178u;
        // 0x27b17c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b178) {
            ctx->pc = 0x27B148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27b148;
        }
    }
    ctx->pc = 0x27B180u;
label_27b180:
    // 0x27b180: 0xc7828788  lwc1        $f2, -0x7878($gp)
    ctx->pc = 0x27b180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27b184: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x27B184u;
    {
        const bool branch_taken_0x27b184 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B184u;
        // 0x27b188: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b184) {
            ctx->pc = 0x27B190u;
            goto label_27b190;
        }
    }
    ctx->pc = 0x27B18Cu;
    // 0x27b18c: 0xc782878c  lwc1        $f2, -0x7874($gp)
    ctx->pc = 0x27b18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27b190:
    // 0x27b190: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x27b190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b194: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27b194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27b198: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27b198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27b19c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27b19cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27b1a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27b1a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27b1a4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27b1a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b1a8: 0x0  nop
    ctx->pc = 0x27b1a8u;
    // NOP
    // 0x27b1ac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27B1ACu;
    {
        const bool branch_taken_0x27b1ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B1ACu;
        // 0x27b1b0: 0xe6200028  swc1        $f0, 0x28($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b1ac) {
            ctx->pc = 0x27B1BCu;
            goto label_27b1bc;
        }
    }
    ctx->pc = 0x27B1B4u;
    // 0x27b1b4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x27b1b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x27b1b8: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x27b1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_27b1bc:
    // 0x27b1bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27b1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27b1c0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x27b1c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b1c4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27b1c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b1c8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27b1c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b1cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27b1ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x27B1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B1D0u;
        // 0x27b1d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B1D8u;
}
