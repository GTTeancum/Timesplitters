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

// Function: sscanf
// Address: 0x2e58b0 - 0x2e5938
void sscanf_0x2e58b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sscanf_0x2e58b0");
#endif

    switch (ctx->pc) {
        case 0x2e58f0u: goto label_2e58f0;
        case 0x2e5928u: goto label_2e5928;
        default: break;
    }

    ctx->pc = 0x2e58b0u;

    // 0x2e58b0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2e58b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2e58b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e58b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e58b8: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2e58b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2e58bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e58bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e58c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e58c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e58c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2e58c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2e58c8: 0xffa600c0  sd          $a2, 0xC0($sp)
    ctx->pc = 0x2e58c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 6));
    // 0x2e58cc: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x2e58ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
    // 0x2e58d0: 0xffa800d0  sd          $t0, 0xD0($sp)
    ctx->pc = 0x2e58d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x2e58d4: 0xffa900d8  sd          $t1, 0xD8($sp)
    ctx->pc = 0x2e58d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x2e58d8: 0xffaa00e0  sd          $t2, 0xE0($sp)
    ctx->pc = 0x2e58d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x2e58dc: 0xffab00e8  sd          $t3, 0xE8($sp)
    ctx->pc = 0x2e58dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x2e58e0: 0xa7a3000c  sh          $v1, 0xC($sp)
    ctx->pc = 0x2e58e0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e58e4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e58e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e58e8: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x2E58E8u;
    SET_GPR_U32(ctx, 31, 0x2E58F0u);
    ctx->pc = 0x2E58ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E58E8u;
    // 0x2e58ec: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x2E58E8u, 0x2E58F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E58F0u;
label_2e58f0:
    // 0x2e58f0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2e58f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2e58f4: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e58f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e58f8: 0x8c86330c  lw          $a2, 0x330C($a0)
    ctx->pc = 0x2e58f8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x38330Cu));
    // 0x2e58fc: 0x246358a8  addiu       $v1, $v1, 0x58A8
    ctx->pc = 0x2e58fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22696));
    // 0x2e5900: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e5900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5904: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2e5904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2e5908: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x2e5908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x2e590c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e590cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5910: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x2e5910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x2e5914: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2e5914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e5918: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2e5918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2e591c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2e591cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2e5920: 0xc0ba37e  jal         func_2E8DF8
    ctx->pc = 0x2E5920u;
    SET_GPR_U32(ctx, 31, 0x2E5928u);
    ctx->pc = 0x2E5924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5920u;
    // 0x2e5924: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8DF8u, 0x2E5920u, 0x2E5928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5928u;
label_2e5928:
    // 0x2e5928: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2e5928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e592c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2e592cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e5930: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5930u;
        // 0x2e5934: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5938u;
}
