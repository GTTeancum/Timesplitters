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

// Function: matrixLookAt
// Address: 0x2b5208 - 0x2b5254
void matrixLookAt_0x2b5208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixLookAt_0x2b5208");
#endif

    switch (ctx->pc) {
        case 0x2b5248u: goto label_2b5248;
        default: break;
    }

    ctx->pc = 0x2b5208u;

    // 0x2b5208: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b520c: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x2b520cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b5210: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b5210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b5214: 0xc4cf0000  lwc1        $f15, 0x0($a2)
    ctx->pc = 0x2b5214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2b5218: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x2b5218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2b521c: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x2b521cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2b5220: 0x460c7bc1  sub.s       $f15, $f15, $f12
    ctx->pc = 0x2b5220u;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[12]);
    // 0x2b5224: 0xc4d10008  lwc1        $f17, 0x8($a2)
    ctx->pc = 0x2b5224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2b5228: 0xc4d00004  lwc1        $f16, 0x4($a2)
    ctx->pc = 0x2b5228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2b522c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2b522cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5230: 0x460e8c41  sub.s       $f17, $f17, $f14
    ctx->pc = 0x2b5230u;
    ctx->f[17] = FPU_SUB_S(ctx->f[17], ctx->f[14]);
    // 0x2b5234: 0x460d8401  sub.s       $f16, $f16, $f13
    ctx->pc = 0x2b5234u;
    ctx->f[16] = FPU_SUB_S(ctx->f[16], ctx->f[13]);
    // 0x2b5238: 0xc4f30004  lwc1        $f19, 0x4($a3)
    ctx->pc = 0x2b5238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2b523c: 0xc4f20000  lwc1        $f18, 0x0($a3)
    ctx->pc = 0x2b523cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2b5240: 0xc0ad3de  jal         func_2B4F78
    ctx->pc = 0x2B5240u;
    SET_GPR_U32(ctx, 31, 0x2B5248u);
    ctx->pc = 0x2B5244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5240u;
    // 0x2b5244: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F78u, 0x2B5240u, 0x2B5248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5248u;
label_2b5248:
    // 0x2b5248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b5248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b524c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B524Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B524Cu;
        // 0x2b5250: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B524Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5254u;
}
