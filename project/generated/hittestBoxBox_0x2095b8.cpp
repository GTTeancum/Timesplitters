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

// Function: hittestBoxBox
// Address: 0x2095b8 - 0x209640
void hittestBoxBox_0x2095b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hittestBoxBox_0x2095b8");
#endif

    ctx->pc = 0x2095b8u;

    // 0x2095b8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2095b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2095bc: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2095bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2095c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2095c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2095c4: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x2095C4u;
    {
        const bool branch_taken_0x2095c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2095c4) {
            ctx->pc = 0x209630u;
            goto label_209630;
        }
    }
    ctx->pc = 0x2095CCu;
    // 0x2095cc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2095ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2095d0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2095d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2095d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2095d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2095d8: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x2095D8u;
    {
        const bool branch_taken_0x2095d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2095d8) {
            ctx->pc = 0x209630u;
            goto label_209630;
        }
    }
    ctx->pc = 0x2095E0u;
    // 0x2095e0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2095e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2095e4: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2095e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2095e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2095e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2095ec: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x2095ECu;
    {
        const bool branch_taken_0x2095ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2095ec) {
            ctx->pc = 0x209630u;
            goto label_209630;
        }
    }
    ctx->pc = 0x2095F4u;
    // 0x2095f4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2095f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2095f8: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2095f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2095fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2095fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209600: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x209600u;
    {
        const bool branch_taken_0x209600 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x209600) {
            ctx->pc = 0x209630u;
            goto label_209630;
        }
    }
    ctx->pc = 0x209608u;
    // 0x209608: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x209608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20960c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x20960cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209610: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x209610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209614: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x209614u;
    {
        const bool branch_taken_0x209614 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x209614) {
            ctx->pc = 0x209630u;
            goto label_209630;
        }
    }
    ctx->pc = 0x20961Cu;
    // 0x20961c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x20961cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209620: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x209620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209624: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x209624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209628: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x209628u;
    {
        const bool branch_taken_0x209628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209628) {
            ctx->pc = 0x209638u;
            goto label_209638;
        }
    }
    ctx->pc = 0x209630u;
label_209630:
    // 0x209630: 0x3e00008  jr          $ra
    ctx->pc = 0x209630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209630u;
        // 0x209634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209638u;
label_209638:
    // 0x209638: 0x3e00008  jr          $ra
    ctx->pc = 0x209638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209638u;
        // 0x20963c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209640u;
}
