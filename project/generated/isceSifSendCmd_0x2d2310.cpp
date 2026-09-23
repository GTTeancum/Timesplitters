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

// Function: isceSifSendCmd
// Address: 0x2d2310 - 0x2d234c
void isceSifSendCmd_0x2d2310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isceSifSendCmd_0x2d2310");
#endif

    switch (ctx->pc) {
        case 0x2d2340u: goto label_2d2340;
        default: break;
    }

    ctx->pc = 0x2d2310u;

    // 0x2d2310: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2d2310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2314: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2d2314u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2318: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x2d2318u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d231c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d231cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d2320: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2d2320u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2324: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d2324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d232c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2d232cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2330: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2d2330u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2334: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x2d2334u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2338: 0xc0b4864  jal         func_2D2190
    ctx->pc = 0x2D2338u;
    SET_GPR_U32(ctx, 31, 0x2D2340u);
    ctx->pc = 0x2D233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2338u;
    // 0x2d233c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2190u, 0x2D2338u, 0x2D2340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2340u;
label_2d2340:
    // 0x2d2340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d2340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2344: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2344u;
        // 0x2d2348: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D234Cu;
}
