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

// Function: StatsLifeReset
// Address: 0x224428 - 0x2244cc
void StatsLifeReset_0x224428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsLifeReset_0x224428");
#endif

    switch (ctx->pc) {
        case 0x224478u: goto label_224478;
        case 0x2244a8u: goto label_2244a8;
        default: break;
    }

    ctx->pc = 0x224428u;

    // 0x224428: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x224428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x22442c: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x22442cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x224430: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x224430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x224434: 0x2485015c  addiu       $a1, $a0, 0x15C
    ctx->pc = 0x224434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 348));
    // 0x224438: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x224438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x22443c: 0x248200c4  addiu       $v0, $a0, 0xC4
    ctx->pc = 0x22443cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 196));
    // 0x224440: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x224440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x224444: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x224444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x224448: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x224448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x22444c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x22444cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x224450: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x224450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x224454: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x224454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x224458: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x224458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x22445c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x22445cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x224460: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x224460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x224464: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x224464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x224468: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x224468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x22446c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x22446cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x224470: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x224470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x224474: 0x0  nop
    ctx->pc = 0x224474u;
    // NOP
label_224478:
    // 0x224478: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x224478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x22447c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22447cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x224480: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x224480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x224484: 0x0  nop
    ctx->pc = 0x224484u;
    // NOP
    // 0x224488: 0x0  nop
    ctx->pc = 0x224488u;
    // NOP
    // 0x22448c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22448Cu;
    {
        const bool branch_taken_0x22448c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x22448c) {
            ctx->pc = 0x224478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224478;
        }
    }
    ctx->pc = 0x224494u;
    // 0x224494: 0xac800158  sw          $zero, 0x158($a0)
    ctx->pc = 0x224494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 0));
    // 0x224498: 0x24a2002f  addiu       $v0, $a1, 0x2F
    ctx->pc = 0x224498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 47));
    // 0x22449c: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x22449cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x2244a0: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x2244a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2244a4: 0xac800154  sw          $zero, 0x154($a0)
    ctx->pc = 0x2244a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 0));
label_2244a8:
    // 0x2244a8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2244a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2244ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2244acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2244b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2244b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2244b4: 0x0  nop
    ctx->pc = 0x2244b4u;
    // NOP
    // 0x2244b8: 0x0  nop
    ctx->pc = 0x2244b8u;
    // NOP
    // 0x2244bc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2244BCu;
    {
        const bool branch_taken_0x2244bc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2244bc) {
            ctx->pc = 0x2244A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2244a8;
        }
    }
    ctx->pc = 0x2244C4u;
    // 0x2244c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2244C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2244C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2244CCu;
}
