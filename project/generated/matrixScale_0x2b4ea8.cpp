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

// Function: matrixScale
// Address: 0x2b4ea8 - 0x2b4ee4
void matrixScale_0x2b4ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixScale_0x2b4ea8");
#endif

    switch (ctx->pc) {
        case 0x2b4ec4u: goto label_2b4ec4;
        default: break;
    }

    ctx->pc = 0x2b4ea8u;

    // 0x2b4ea8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b4eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b4eb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4eb4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2b4eb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b4eb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b4eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b4ebc: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x2B4EBCu;
    SET_GPR_U32(ctx, 31, 0x2B4EC4u);
    ctx->pc = 0x2B4EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4EBCu;
    // 0x2b4ec0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x2B4EBCu, 0x2B4EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4EC4u;
label_2b4ec4:
    // 0x2b4ec4: 0xe6140028  swc1        $f20, 0x28($s0)
    ctx->pc = 0x2b4ec4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2b4ec8: 0xe6140000  swc1        $f20, 0x0($s0)
    ctx->pc = 0x2b4ec8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2b4ecc: 0xe6140014  swc1        $f20, 0x14($s0)
    ctx->pc = 0x2b4eccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2b4ed0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b4ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4ed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b4ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4ed8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2b4ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b4edc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4EDCu;
        // 0x2b4ee0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4EE4u;
}
