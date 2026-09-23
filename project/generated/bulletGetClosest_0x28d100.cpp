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

// Function: bulletGetClosest
// Address: 0x28d100 - 0x28d214
void bulletGetClosest_0x28d100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bulletGetClosest_0x28d100");
#endif

    switch (ctx->pc) {
        case 0x28d130u: goto label_28d130;
        case 0x28d1f8u: goto label_28d1f8;
        default: break;
    }

    ctx->pc = 0x28d100u;

    // 0x28d100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28d100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28d104: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28d104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28d108: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x28d108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x28d10c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x28d10cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d110: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x28d110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28d114: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28d114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d118: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28d118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28d11c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28d11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d120: 0x8f88b948  lw          $t0, -0x46B8($gp)
    ctx->pc = 0x28d120u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
    // 0x28d124: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28d124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d128: 0xc44cfa60  lwc1        $f12, -0x5A0($v0)
    ctx->pc = 0x28d128u;
    { uint32_t bits = FAST_READ32(0x3AFA60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d12c: 0x24020114  addiu       $v0, $zero, 0x114
    ctx->pc = 0x28d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
label_28d130:
    // 0x28d130: 0xe21818  mult        $v1, $a3, $v0
    ctx->pc = 0x28d130u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28d134: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x28d134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x28d138: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x28d138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28d13c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x28d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x28d140: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x28d140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x28d144: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x28D144u;
    {
        const bool branch_taken_0x28d144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D144u;
        // 0x28d148: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d144) {
            ctx->pc = 0x28D1BCu;
            goto label_28d1bc;
        }
    }
    ctx->pc = 0x28D14Cu;
    // 0x28d14c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28d150: 0x24428b60  addiu       $v0, $v0, -0x74A0
    ctx->pc = 0x28d150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937440));
    // 0x28d154: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28d154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28d158: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28d158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28d15c: 0x800008  jr          $a0
    ctx->pc = 0x28D15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28D164u: goto label_28d164;
            case 0x28D1BCu: goto label_28d1bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D15Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28D164u;
label_28d164:
    // 0x28d164: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x28d164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d168: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x28d168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d16c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x28d16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d170: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x28d170u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28d174: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x28d174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28d178: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x28d178u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28d17c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x28d17cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x28d180: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x28d180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d184: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d184u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d188: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28d188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28d18c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x28d18cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28d190: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x28d190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d194: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x28d194u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x28d198: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28d198u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28d19c: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x28d19cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x28d1a0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28d1a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28d1a4: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x28d1a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28d1a8: 0x0  nop
    ctx->pc = 0x28d1a8u;
    // NOP
    // 0x28d1ac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x28D1ACu;
    {
        const bool branch_taken_0x28d1ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1ACu;
        // 0x28d1b0: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d1ac) {
            ctx->pc = 0x28D1BCu;
            goto label_28d1bc;
        }
    }
    ctx->pc = 0x28D1B4u;
    // 0x28d1b4: 0x46001306  mov.s       $f12, $f2
    ctx->pc = 0x28d1b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
    // 0x28d1b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28d1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28d1bc:
    // 0x28d1bc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x28d1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x28d1c0: 0x28e20014  slti        $v0, $a3, 0x14
    ctx->pc = 0x28d1c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x28d1c4: 0x5440ffda  bnel        $v0, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x28D1C4u;
    {
        const bool branch_taken_0x28d1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d1c4) {
            ctx->pc = 0x28D1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D1C4u;
            // 0x28d1c8: 0x24020114  addiu       $v0, $zero, 0x114 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d130;
        }
    }
    ctx->pc = 0x28D1CCu;
    // 0x28d1cc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x28D1CCu;
    {
        const bool branch_taken_0x28d1cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1CCu;
        // 0x28d1d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d1cc) {
            ctx->pc = 0x28D200u;
            goto label_28d200;
        }
    }
    ctx->pc = 0x28D1D4u;
    // 0x28d1d4: 0x0  nop
    ctx->pc = 0x28d1d4u;
    // NOP
    // 0x28d1d8: 0x0  nop
    ctx->pc = 0x28d1d8u;
    // NOP
    // 0x28d1dc: 0x460c0004  c1          0xC0004
    ctx->pc = 0x28d1dcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x28d1e0: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x28d1e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28d1e4: 0x0  nop
    ctx->pc = 0x28d1e4u;
    // NOP
    // 0x28d1e8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x28D1E8u;
    {
        const bool branch_taken_0x28d1e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28d1e8) {
            ctx->pc = 0x28D1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D1E8u;
            // 0x28d1ec: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D200u;
            goto label_28d200;
        }
    }
    ctx->pc = 0x28D1F0u;
    // 0x28d1f0: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x28D1F0u;
    SET_GPR_U32(ctx, 31, 0x28D1F8u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x28D1F0u, 0x28D1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D1F8u;
label_28d1f8:
    // 0x28d1f8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x28d1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x28d1fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28d1fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28d200:
    // 0x28d200: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28d200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d204: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x28d204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d208: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x28d208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d20c: 0x3e00008  jr          $ra
    ctx->pc = 0x28D20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D20Cu;
        // 0x28d210: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D214u;
}
