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

// Function: matrixVecTrans
// Address: 0x2b5660 - 0x2b5690
void matrixVecTrans_0x2b5660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixVecTrans_0x2b5660");
#endif

    switch (ctx->pc) {
        case 0x2b5668u: goto label_2b5668;
        default: break;
    }

    ctx->pc = 0x2b5660u;

    // 0x2b5660: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2b5660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2b5664: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b5664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b5668:
    // 0x2b5668: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b5668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b566c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b566cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b5670: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2b5670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5674: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2b5674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2b5678: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b5678u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b567c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2b567cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2b5680: 0x441fff9  bgez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B5680u;
    {
        const bool branch_taken_0x2b5680 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2B5684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5680u;
        // 0x2b5684: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5680) {
            ctx->pc = 0x2B5668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5668;
        }
    }
    ctx->pc = 0x2B5688u;
    // 0x2b5688: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5690u;
}
