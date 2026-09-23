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

// Function: closestpadinlist
// Address: 0x266c58 - 0x266d54
void closestpadinlist_0x266c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("closestpadinlist_0x266c58");
#endif

    switch (ctx->pc) {
        case 0x266ca0u: goto label_266ca0;
        case 0x266d08u: goto label_266d08;
        default: break;
    }

    ctx->pc = 0x266c58u;

    // 0x266c58: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x266c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x266c5c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x266c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x266c60: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x266c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x266c64: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x266c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x266c68: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x266c68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266c6c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x266c6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x266c70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x266c70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266c74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x266c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x266c78: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x266c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x266c7c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x266c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x266c80: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x266c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x266c84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x266c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x266c88: 0x18a00027  blez        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x266C88u;
    {
        const bool branch_taken_0x266c88 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x266C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C88u;
        // 0x266c8c: 0xc454eb34  lwc1        $f20, -0x14CC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x266c88) {
            ctx->pc = 0x266D28u;
            goto label_266d28;
        }
    }
    ctx->pc = 0x266C90u;
    // 0x266c90: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x266c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266c94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x266c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266c98: 0x2415001c  addiu       $s5, $zero, 0x1C
    ctx->pc = 0x266c98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x266c9c: 0x0  nop
    ctx->pc = 0x266c9cu;
    // NOP
label_266ca0:
    // 0x266ca0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x266ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x266ca4: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x266ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x266ca8: 0x2151018  mult        $v0, $s0, $s5
    ctx->pc = 0x266ca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x266cac: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x266cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x266cb0: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x266cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x266cb4: 0xc6650008  lwc1        $f5, 0x8($s3)
    ctx->pc = 0x266cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x266cb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266cbc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x266cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266cc0: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x266cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x266cc4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x266cc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x266cc8: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x266cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266ccc: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x266cccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x266cd0: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x266cd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x266cd4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x266cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x266cd8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x266cd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x266cdc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x266cdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x266ce0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x266ce0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x266ce4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x266ce4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x266ce8: 0x0  nop
    ctx->pc = 0x266ce8u;
    // NOP
    // 0x266cec: 0x0  nop
    ctx->pc = 0x266cecu;
    // NOP
    // 0x266cf0: 0x460c0004  c1          0xC0004
    ctx->pc = 0x266cf0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x266cf4: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x266cf4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266cf8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x266CF8u;
    {
        const bool branch_taken_0x266cf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x266cf8) {
            ctx->pc = 0x266D08u;
            goto label_266d08;
        }
    }
    ctx->pc = 0x266D00u;
    // 0x266d00: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x266D00u;
    SET_GPR_U32(ctx, 31, 0x266D08u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x266D00u, 0x266D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266D08u;
label_266d08:
    // 0x266d08: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x266d08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266d0c: 0x0  nop
    ctx->pc = 0x266d0cu;
    // NOP
    // 0x266d10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x266D10u;
    {
        const bool branch_taken_0x266d10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x266D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D10u;
        // 0x266d14: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d10) {
            ctx->pc = 0x266D20u;
            goto label_266d20;
        }
    }
    ctx->pc = 0x266D18u;
    // 0x266d18: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x266d18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x266d1c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x266d1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_266d20:
    // 0x266d20: 0x1620ffdf  bnez        $s1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x266D20u;
    {
        const bool branch_taken_0x266d20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x266D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D20u;
        // 0x266d24: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d20) {
            ctx->pc = 0x266CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266ca0;
        }
    }
    ctx->pc = 0x266D28u;
label_266d28:
    // 0x266d28: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x266d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266d2c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x266d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x266d30: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x266d30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x266d34: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x266d34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x266d38: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x266d38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266d3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x266d3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266d40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x266d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266d44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x266d44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266d48: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x266d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x266d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x266D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D4Cu;
        // 0x266d50: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266D54u;
}
