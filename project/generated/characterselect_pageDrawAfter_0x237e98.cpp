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

// Function: characterselect_pageDrawAfter
// Address: 0x237e98 - 0x237ee4
void characterselect_pageDrawAfter_0x237e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("characterselect_pageDrawAfter_0x237e98");
#endif

    switch (ctx->pc) {
        case 0x237eb4u: goto label_237eb4;
        case 0x237ed0u: goto label_237ed0;
        case 0x237ed8u: goto label_237ed8;
        default: break;
    }

    ctx->pc = 0x237e98u;

    // 0x237e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x237e9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x237e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ea4: 0x2406027f  addiu       $a2, $zero, 0x27F
    ctx->pc = 0x237ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x237ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x237ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x237eac: 0xc083108  jal         func_20C420
    ctx->pc = 0x237EACu;
    SET_GPR_U32(ctx, 31, 0x237EB4u);
    ctx->pc = 0x237EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237EACu;
    // 0x237eb0: 0x240700df  addiu       $a3, $zero, 0xDF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x237EACu, 0x237EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237EB4u;
label_237eb4:
    // 0x237eb4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x237eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x237eb8: 0x246299f0  addiu       $v0, $v1, -0x6610
    ctx->pc = 0x237eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x237ebc: 0x8c6499f0  lw          $a0, -0x6610($v1)
    ctx->pc = 0x237ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3299F0u));
    // 0x237ec0: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x237ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x329A08u));
    // 0x237ec4: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x237ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x329A04u));
    // 0x237ec8: 0xc0ae014  jal         func_2B8050
    ctx->pc = 0x237EC8u;
    SET_GPR_U32(ctx, 31, 0x237ED0u);
    ctx->pc = 0x237ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237EC8u;
    // 0x237ecc: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8050u, 0x237EC8u, 0x237ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237ED0u;
label_237ed0:
    // 0x237ed0: 0xc0831fa  jal         func_20C7E8
    ctx->pc = 0x237ED0u;
    SET_GPR_U32(ctx, 31, 0x237ED8u);
    ctx->pc = 0x20C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C7E8u, 0x237ED0u, 0x237ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237ED8u;
label_237ed8:
    // 0x237ed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x237ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237edc: 0x808d778  j           func_235DE0
    ctx->pc = 0x237EDCu;
    ctx->pc = 0x237EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237EDCu;
    // 0x237ee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235DE0u;
    drawLittleGuys_0x235de0(rdram, ctx, runtime); return;
    ctx->pc = 0x237EE4u;
}
