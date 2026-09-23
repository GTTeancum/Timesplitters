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

// Function: memdbRestart
// Address: 0x201e98 - 0x201ef4
void memdbRestart_0x201e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memdbRestart_0x201e98");
#endif

    ctx->pc = 0x201e98u;

    // 0x201e98: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x201e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x201e9c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x201e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x201ea0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x201EA0u;
    {
        const bool branch_taken_0x201ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EA0u;
        // 0x201ea4: 0x3c0201fb  lui         $v0, 0x1FB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)507 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ea0) {
            ctx->pc = 0x201ED4u;
            goto label_201ed4;
        }
    }
    ctx->pc = 0x201EA8u;
    // 0x201ea8: 0x38850002  xori        $a1, $a0, 0x2
    ctx->pc = 0x201ea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x201eac: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x201eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x201eb0: 0x8f849a8c  lw          $a0, -0x6574($gp)
    ctx->pc = 0x201eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941324)));
    // 0x201eb4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x201eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x201eb8: 0x65100a  movz        $v0, $v1, $a1
    ctx->pc = 0x201eb8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x201ebc: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x201ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x201ec0: 0xaf84b624  sw          $a0, -0x49DC($gp)
    ctx->pc = 0x201ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948388), GPR_U32(ctx, 4));
    // 0x201ec4: 0xaf829a88  sw          $v0, -0x6578($gp)
    ctx->pc = 0x201ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941320), GPR_U32(ctx, 2));
    // 0x201ec8: 0xaf83b620  sw          $v1, -0x49E0($gp)
    ctx->pc = 0x201ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948384), GPR_U32(ctx, 3));
    // 0x201ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x201ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201ECCu;
        // 0x201ed0: 0xaf84b61c  sw          $a0, -0x49E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948380), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201ED4u;
label_201ed4:
    // 0x201ed4: 0x24032800  addiu       $v1, $zero, 0x2800
    ctx->pc = 0x201ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x201ed8: 0x2442c5f0  addiu       $v0, $v0, -0x3A10
    ctx->pc = 0x201ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952432));
    // 0x201edc: 0xaf839a88  sw          $v1, -0x6578($gp)
    ctx->pc = 0x201edcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941320), GPR_U32(ctx, 3));
    // 0x201ee0: 0x24442800  addiu       $a0, $v0, 0x2800
    ctx->pc = 0x201ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10240));
    // 0x201ee4: 0xaf82b624  sw          $v0, -0x49DC($gp)
    ctx->pc = 0x201ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948388), GPR_U32(ctx, 2));
    // 0x201ee8: 0xaf84b620  sw          $a0, -0x49E0($gp)
    ctx->pc = 0x201ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948384), GPR_U32(ctx, 4));
    // 0x201eec: 0x3e00008  jr          $ra
    ctx->pc = 0x201EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EECu;
        // 0x201ef0: 0xaf82b61c  sw          $v0, -0x49E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201EF4u;
}
