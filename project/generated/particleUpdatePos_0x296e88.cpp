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

// Function: particleUpdatePos
// Address: 0x296e88 - 0x296eb0
void particleUpdatePos_0x296e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleUpdatePos_0x296e88");
#endif

    ctx->pc = 0x296e88u;

    // 0x296e88: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x296E88u;
    {
        const bool branch_taken_0x296e88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x296e88) {
            ctx->pc = 0x296EA8u;
            goto label_296ea8;
        }
    }
    ctx->pc = 0x296E90u;
    // 0x296e90: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x296e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296e94: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x296e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x296e98: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x296e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296e9c: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x296e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x296ea0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x296ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296ea4: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x296ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_296ea8:
    // 0x296ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x296EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296EB0u;
}
