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

// Function: IsT10K
// Address: 0x2e0918 - 0x2e0958
void IsT10K_0x2e0918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsT10K_0x2e0918");
#endif

    switch (ctx->pc) {
        case 0x2e093cu: goto label_2e093c;
        default: break;
    }

    ctx->pc = 0x2e0918u;

    // 0x2e0918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e091c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2e091cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2e0920: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e0920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e0924: 0x80623008  lb          $v0, 0x3008($v1)
    ctx->pc = 0x2e0924u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x383008u));
    // 0x2e0928: 0x24703008  addiu       $s0, $v1, 0x3008
    ctx->pc = 0x2e0928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12296));
    // 0x2e092c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E092Cu;
    {
        const bool branch_taken_0x2e092c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E092Cu;
        // 0x2e0930: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e092c) {
            ctx->pc = 0x2E093Cu;
            goto label_2e093c;
        }
    }
    ctx->pc = 0x2E0934u;
    // 0x2e0934: 0xc0b821e  jal         func_2E0878
    ctx->pc = 0x2E0934u;
    SET_GPR_U32(ctx, 31, 0x2E093Cu);
    ctx->pc = 0x2E0878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0878u, 0x2E0934u, 0x2E093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E093Cu;
label_2e093c:
    // 0x2e093c: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x2e093cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e0940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e0940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0944: 0x38420054  xori        $v0, $v0, 0x54
    ctx->pc = 0x2e0944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)84);
    // 0x2e0948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e0948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e094c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2e094cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e0950: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0950u;
        // 0x2e0954: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0958u;
}
