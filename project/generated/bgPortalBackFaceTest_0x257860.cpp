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

// Function: bgPortalBackFaceTest
// Address: 0x257860 - 0x2578ec
void bgPortalBackFaceTest_0x257860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgPortalBackFaceTest_0x257860");
#endif

    ctx->pc = 0x257860u;

    // 0x257860: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x257860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257864: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x257864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x257868: 0xc4c1001c  lwc1        $f1, 0x1C($a2)
    ctx->pc = 0x257868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25786c: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x25786cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x257870: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x257870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x257874: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x257874u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x257878: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x257878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25787c: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x25787cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x257880: 0xc4c50020  lwc1        $f5, 0x20($a2)
    ctx->pc = 0x257880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x257884: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x257884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257888: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x257888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25788c: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x25788cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x257890: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x257890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x257894: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x257894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257898: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x257898u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x25789c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x25789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2578a0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2578a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2578a4: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x2578a4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2578a8: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x2578a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2578ac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2578acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2578b0: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2578b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2578b4: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2578B4u;
    {
        const bool branch_taken_0x2578b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2578B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578B4u;
        // 0x2578b8: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2578b4) {
            ctx->pc = 0x2578CCu;
            goto label_2578cc;
        }
    }
    ctx->pc = 0x2578BCu;
    // 0x2578bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2578bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2578c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2578c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2578c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2578C4u;
    {
        const bool branch_taken_0x2578c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2578C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578C4u;
        // 0x2578c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2578c4) {
            ctx->pc = 0x2578DCu;
            goto label_2578dc;
        }
    }
    ctx->pc = 0x2578CCu;
label_2578cc:
    // 0x2578cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2578ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2578d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2578d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2578d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2578d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2578d8: 0x0  nop
    ctx->pc = 0x2578d8u;
    // NOP
label_2578dc:
    // 0x2578dc: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2578DCu;
    {
        const bool branch_taken_0x2578dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2578dc) {
            ctx->pc = 0x2578E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2578DCu;
            // 0x2578e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2578E4u;
            goto label_2578e4;
        }
    }
    ctx->pc = 0x2578E4u;
label_2578e4:
    // 0x2578e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2578E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2578E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578E4u;
        // 0x2578e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2578E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2578ECu;
}
