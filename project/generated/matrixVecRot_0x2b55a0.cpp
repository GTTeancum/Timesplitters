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

// Function: matrixVecRot
// Address: 0x2b55a0 - 0x2b5634
void matrixVecRot_0x2b55a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixVecRot_0x2b55a0");
#endif

    switch (ctx->pc) {
        case 0x2b55c8u: goto label_2b55c8;
        case 0x2b5610u: goto label_2b5610;
        default: break;
    }

    ctx->pc = 0x2b55a0u;

    // 0x2b55a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b55a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b55a4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2b55a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b55a8: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x2b55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2b55ac: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x2b55acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b55b0: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x2b55b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b55b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2b55b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b55b8: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2b55b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b55bc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2b55bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2b55c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b55c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b55c4: 0x0  nop
    ctx->pc = 0x2b55c4u;
    // NOP
label_2b55c8:
    // 0x2b55c8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2b55c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b55cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b55ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b55d0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2b55d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b55d4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2b55d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b55d8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2b55d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2b55dc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2b55dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b55e0: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x2b55e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2b55e4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b55e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b55e8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2b55e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2b55ec: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2b55ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2b55f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b55f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b55f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b55f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b55f8: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2b55f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2b55fc: 0x461fff2  bgez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2B55FCu;
    {
        const bool branch_taken_0x2b55fc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2B5600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B55FCu;
        // 0x2b5600: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b55fc) {
            ctx->pc = 0x2B55C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b55c8;
        }
    }
    ctx->pc = 0x2B5604u;
    // 0x2b5604: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2b5604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5608: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b5608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b560c: 0x0  nop
    ctx->pc = 0x2b560cu;
    // NOP
label_2b5610:
    // 0x2b5610: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b5610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5614: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b5614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b5618: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b5618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b561c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2b561cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2b5620: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2b5620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2b5624: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B5624u;
    {
        const bool branch_taken_0x2b5624 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2b5624) {
            ctx->pc = 0x2B5610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5610;
        }
    }
    ctx->pc = 0x2B562Cu;
    // 0x2b562c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B562Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B562Cu;
        // 0x2b5630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B562Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5634u;
}
