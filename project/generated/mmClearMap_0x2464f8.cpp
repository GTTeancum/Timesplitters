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

// Function: mmClearMap
// Address: 0x2464f8 - 0x246530
void mmClearMap_0x2464f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmClearMap_0x2464f8");
#endif

    switch (ctx->pc) {
        case 0x246508u: goto label_246508;
        default: break;
    }

    ctx->pc = 0x2464f8u;

    // 0x2464f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2464f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2464fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2464fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x246500: 0xc09216e  jal         func_2485B8
    ctx->pc = 0x246500u;
    SET_GPR_U32(ctx, 31, 0x246508u);
    ctx->pc = 0x2485B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2485B8u, 0x246500u, 0x246508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246508u;
label_246508:
    // 0x246508: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x246508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24650c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x24650cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x246510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246514: 0xa04065e8  sb          $zero, 0x65E8($v0)
    ctx->pc = 0x246514u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3565E8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3565E8u, _value); } while (0);
    // 0x246518: 0xa0606608  sb          $zero, 0x6608($v1)
    ctx->pc = 0x246518u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x356608u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x356608u, _value); } while (0);
    // 0x24651c: 0xaf80a0f4  sw          $zero, -0x5F0C($gp)
    ctx->pc = 0x24651cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942964), GPR_U32(ctx, 0));
    // 0x246520: 0xaf80a128  sw          $zero, -0x5ED8($gp)
    ctx->pc = 0x246520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943016), GPR_U32(ctx, 0));
    // 0x246524: 0xaf80a12c  sw          $zero, -0x5ED4($gp)
    ctx->pc = 0x246524u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943020), GPR_U32(ctx, 0));
    // 0x246528: 0x3e00008  jr          $ra
    ctx->pc = 0x246528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246528u;
        // 0x24652c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246530u;
}
