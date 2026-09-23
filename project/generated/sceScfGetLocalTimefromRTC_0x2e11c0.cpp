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

// Function: sceScfGetLocalTimefromRTC
// Address: 0x2e11c0 - 0x2e1228
void sceScfGetLocalTimefromRTC_0x2e11c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceScfGetLocalTimefromRTC_0x2e11c0");
#endif

    switch (ctx->pc) {
        case 0x2e11d8u: goto label_2e11d8;
        case 0x2e11e0u: goto label_2e11e0;
        case 0x2e120cu: goto label_2e120c;
        default: break;
    }

    ctx->pc = 0x2e11c0u;

    // 0x2e11c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e11c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e11c4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e11c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e11c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e11c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e11cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e11ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e11d0: 0xc0b8296  jal         func_2E0A58
    ctx->pc = 0x2E11D0u;
    SET_GPR_U32(ctx, 31, 0x2E11D8u);
    ctx->pc = 0x2E11D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E11D0u;
    // 0x2e11d4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0A58u, 0x2E11D0u, 0x2E11D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E11D8u;
label_2e11d8:
    // 0x2e11d8: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x2E11D8u;
    SET_GPR_U32(ctx, 31, 0x2E11E0u);
    ctx->pc = 0x2E11DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E11D8u;
    // 0x2e11dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0B40u, 0x2E11D8u, 0x2E11E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E11E0u;
label_2e11e0:
    // 0x2e11e0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2e11e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2e11e4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2e11e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e11e8: 0x2442fde4  addiu       $v0, $v0, -0x21C
    ctx->pc = 0x2e11e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966756));
    // 0x2e11ec: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E11ECu;
    {
        const bool branch_taken_0x2e11ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E11F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E11ECu;
        // 0x2e11f0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e11ec) {
            ctx->pc = 0x2E120Cu;
            goto label_2e120c;
        }
    }
    ctx->pc = 0x2E11F4u;
    // 0x2e11f4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2e11f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2e11f8: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2e11f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2e11fc: 0x2484b708  addiu       $a0, $a0, -0x48F8
    ctx->pc = 0x2e11fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948616));
    // 0x2e1200: 0x24c6b730  addiu       $a2, $a2, -0x48D0
    ctx->pc = 0x2e1200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948656));
    // 0x2e1204: 0xc0b91aa  jal         func_2E46A8
    ctx->pc = 0x2E1204u;
    SET_GPR_U32(ctx, 31, 0x2E120Cu);
    ctx->pc = 0x2E1208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1204u;
    // 0x2e1208: 0x240501c9  addiu       $a1, $zero, 0x1C9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 457));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E46A8u, 0x2E1204u, 0x2E120Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E120Cu;
label_2e120c:
    // 0x2e120c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e120cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1210: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e1210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1214: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e1214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1218: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e1218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e121c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e121cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1220: 0x80b842a  j           func_2E10A8
    ctx->pc = 0x2E1220u;
    ctx->pc = 0x2E1224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1220u;
    // 0x2e1224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E10A8u;
    AdjustTime_0x2e10a8(rdram, ctx, runtime); return;
    ctx->pc = 0x2E1228u;
}
