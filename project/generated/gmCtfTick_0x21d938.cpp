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

// Function: gmCtfTick
// Address: 0x21d938 - 0x21d9b8
void gmCtfTick_0x21d938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gmCtfTick_0x21d938");
#endif

    switch (ctx->pc) {
        case 0x21d960u: goto label_21d960;
        case 0x21d974u: goto label_21d974;
        case 0x21d988u: goto label_21d988;
        case 0x21d990u: goto label_21d990;
        default: break;
    }

    ctx->pc = 0x21d938u;

    // 0x21d938: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21d93c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21d940: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21d940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21d944: 0x2442c4a8  addiu       $v0, $v0, -0x3B58
    ctx->pc = 0x21d944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x21d948: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21d948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21d94c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d950: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x21d950u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C508u));
    // 0x21d954: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x21D954u;
    {
        const bool branch_taken_0x21d954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D954u;
        // 0x21d958: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d954) {
            ctx->pc = 0x21D988u;
            goto label_21d988;
        }
    }
    ctx->pc = 0x21D95Cu;
    // 0x21d95c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21d95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d960:
    // 0x21d960: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x21d960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x21d964: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21D964u;
    {
        const bool branch_taken_0x21d964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D964u;
        // 0x21d968: 0x24900001  addiu       $s0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d964) {
            ctx->pc = 0x21D988u;
            goto label_21d988;
        }
    }
    ctx->pc = 0x21D96Cu;
    // 0x21d96c: 0xc0a241e  jal         func_289078
    ctx->pc = 0x21D96Cu;
    SET_GPR_U32(ctx, 31, 0x21D974u);
    ctx->pc = 0x21D970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D96Cu;
    // 0x21d970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289078u, 0x21D96Cu, 0x21D974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D974u;
label_21d974:
    // 0x21d974: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x21d974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x21d978: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21D978u;
    {
        const bool branch_taken_0x21d978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D978u;
        // 0x21d97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d978) {
            ctx->pc = 0x21D960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d960;
        }
    }
    ctx->pc = 0x21D980u;
    // 0x21d980: 0xc0874d2  jal         func_21D348
    ctx->pc = 0x21D980u;
    SET_GPR_U32(ctx, 31, 0x21D988u);
    ctx->pc = 0x21D348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D348u, 0x21D980u, 0x21D988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D988u;
label_21d988:
    // 0x21d988: 0xc087332  jal         func_21CCC8
    ctx->pc = 0x21D988u;
    SET_GPR_U32(ctx, 31, 0x21D990u);
    ctx->pc = 0x21CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CCC8u, 0x21D988u, 0x21D990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D990u;
label_21d990:
    // 0x21d990: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D990u;
    {
        const bool branch_taken_0x21d990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D990u;
        // 0x21d994: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d990) {
            ctx->pc = 0x21D9A8u;
            goto label_21d9a8;
        }
    }
    ctx->pc = 0x21D998u;
    // 0x21d998: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21d998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d99c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d99cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d9a0: 0x80874d2  j           func_21D348
    ctx->pc = 0x21D9A0u;
    ctx->pc = 0x21D9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D9A0u;
    // 0x21d9a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D348u;
    gameLevelCompleted_0x21d348(rdram, ctx, runtime); return;
    ctx->pc = 0x21D9A8u;
label_21d9a8:
    // 0x21d9a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21d9a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d9ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d9acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x21D9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D9B0u;
        // 0x21d9b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D9B8u;
}
