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

// Function: joyUpdatePorts
// Address: 0x203030 - 0x203088
void joyUpdatePorts_0x203030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("joyUpdatePorts_0x203030");
#endif

    switch (ctx->pc) {
        case 0x203050u: goto label_203050;
        default: break;
    }

    ctx->pc = 0x203030u;

    // 0x203030: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x203030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x203034: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x203034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x203038: 0x2442c740  addiu       $v0, $v0, -0x38C0
    ctx->pc = 0x203038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952768));
    // 0x20303c: 0x2463df68  addiu       $v1, $v1, -0x2098
    ctx->pc = 0x20303cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958952));
    // 0x203040: 0x24460110  addiu       $a2, $v0, 0x110
    ctx->pc = 0x203040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x203044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203048: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x203048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20304c: 0x24070063  addiu       $a3, $zero, 0x63
    ctx->pc = 0x20304cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_203050:
    // 0x203050: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x203050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x203054: 0x54470007  bnel        $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x203054u;
    {
        const bool branch_taken_0x203054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x203054) {
            ctx->pc = 0x203058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203054u;
            // 0x203058: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203074u;
            goto label_203074;
        }
    }
    ctx->pc = 0x20305Cu;
    // 0x20305c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x20305cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x203060: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x203060u;
    {
        const bool branch_taken_0x203060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203060) {
            ctx->pc = 0x203064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203060u;
            // 0x203064: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203068u;
            goto label_203068;
        }
    }
    ctx->pc = 0x203068u;
label_203068:
    // 0x203068: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x203068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x20306c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20306cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x203070: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x203070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_203074:
    // 0x203074: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x203074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x203078: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x203078u;
    {
        const bool branch_taken_0x203078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203078u;
        // 0x20307c: 0x24c60180  addiu       $a2, $a2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203078) {
            ctx->pc = 0x203050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203050;
        }
    }
    ctx->pc = 0x203080u;
    // 0x203080: 0x3e00008  jr          $ra
    ctx->pc = 0x203080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203080u;
        // 0x203084: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203088u;
}
