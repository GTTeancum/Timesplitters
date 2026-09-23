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

// Function: propSetMtxRoll
// Address: 0x270318 - 0x270354
void propSetMtxRoll_0x270318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propSetMtxRoll_0x270318");
#endif

    ctx->pc = 0x270318u;

    // 0x270318: 0xe48c0060  swc1        $f12, 0x60($a0)
    ctx->pc = 0x270318u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x27031c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27031cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x270320: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x270320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x270324: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x270324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270328: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x270328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x27032c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x27032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270330: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x270330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270334: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x270334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x270338: 0xac85008c  sw          $a1, 0x8C($a0)
    ctx->pc = 0x270338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 5));
    // 0x27033c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x27033cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270340: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x270340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x270344: 0xe4810040  swc1        $f1, 0x40($a0)
    ctx->pc = 0x270344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x270348: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x270348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27034c: 0x3e00008  jr          $ra
    ctx->pc = 0x27034Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27034Cu;
        // 0x270350: 0xe4800044  swc1        $f0, 0x44($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27034Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270354u;
}
