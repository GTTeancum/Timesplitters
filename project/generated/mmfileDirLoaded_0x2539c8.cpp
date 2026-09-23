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

// Function: mmfileDirLoaded
// Address: 0x2539c8 - 0x253a04
void mmfileDirLoaded_0x2539c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmfileDirLoaded_0x2539c8");
#endif

    switch (ctx->pc) {
        case 0x2539e4u: goto label_2539e4;
        default: break;
    }

    ctx->pc = 0x2539c8u;

    // 0x2539c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2539c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2539cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2539ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2539d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2539d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2539d4: 0x8f90a22c  lw          $s0, -0x5DD4($gp)
    ctx->pc = 0x2539d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x2539d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2539d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2539dc: 0xc094e3a  jal         func_2538E8
    ctx->pc = 0x2539DCu;
    SET_GPR_U32(ctx, 31, 0x2539E4u);
    ctx->pc = 0x2539E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2539DCu;
    // 0x2539e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2538E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2538E8u, 0x2539DCu, 0x2539E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2539E4u;
label_2539e4:
    // 0x2539e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2539e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2539e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2539ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2539f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2539f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2539f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2539f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2539f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2539fc: 0x80b9516  j           func_2E5458
    ctx->pc = 0x2539FCu;
    ctx->pc = 0x253A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2539FCu;
    // 0x253a00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    memcpy_0x2e5458(rdram, ctx, runtime); return;
    ctx->pc = 0x253A04u;
}
