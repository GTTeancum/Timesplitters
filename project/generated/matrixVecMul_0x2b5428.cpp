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

// Function: matrixVecMul
// Address: 0x2b5428 - 0x2b54c4
void matrixVecMul_0x2b5428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixVecMul_0x2b5428");
#endif

    switch (ctx->pc) {
        case 0x2b5450u: goto label_2b5450;
        case 0x2b54a0u: goto label_2b54a0;
        default: break;
    }

    ctx->pc = 0x2b5428u;

    // 0x2b5428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b5428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b542c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2b542cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5430: 0x24860030  addiu       $a2, $a0, 0x30
    ctx->pc = 0x2b5430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2b5434: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x2b5434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2b5438: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x2b5438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b543c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2b543cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5440: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x2b5440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b5444: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2b5444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2b5448: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x2b5448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b544c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b544cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b5450:
    // 0x2b5450: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x2b5450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5454: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b5454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b5458: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2b5458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b545c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2b545cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2b5460: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2b5460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2b5464: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2b5464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5468: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2b5468u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2b546c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2b546cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b5470: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2b5470u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2b5474: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2b5474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2b5478: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b5478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b547c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2b547cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2b5480: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b5480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b5484: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b5484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b5488: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2b5488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2b548c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2b548cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2b5490: 0x461ffef  bgez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2B5490u;
    {
        const bool branch_taken_0x2b5490 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2B5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5490u;
        // 0x2b5494: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5490) {
            ctx->pc = 0x2B5450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5450;
        }
    }
    ctx->pc = 0x2B5498u;
    // 0x2b5498: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2b5498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b549c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b549cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b54a0:
    // 0x2b54a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b54a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b54a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b54a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b54a8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b54ac: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2b54acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2b54b0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2b54b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2b54b4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B54B4u;
    {
        const bool branch_taken_0x2b54b4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2b54b4) {
            ctx->pc = 0x2B54A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b54a0;
        }
    }
    ctx->pc = 0x2B54BCu;
    // 0x2b54bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B54BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B54C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54BCu;
        // 0x2b54c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B54BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B54C4u;
}
