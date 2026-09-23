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

// Function: cd_read
// Address: 0x2b35a0 - 0x2b35e8
void cd_read_0x2b35a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cd_read_0x2b35a0");
#endif

    switch (ctx->pc) {
        case 0x2b35d8u: goto label_2b35d8;
        default: break;
    }

    ctx->pc = 0x2b35a0u;

    // 0x2b35a0: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2b35a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2b35a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b35a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2b35a8: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x2b35a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b35ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b35acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b35b0: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x2b35b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2b35b4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2b35b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2b35b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b35b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b35bc: 0xa387b438  sb          $a3, -0x4BC8($gp)
    ctx->pc = 0x2b35bcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294947896), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b35c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b35c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b35c4: 0xa383b439  sb          $v1, -0x4BC7($gp)
    ctx->pc = 0x2b35c4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294947897), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b35c8: 0x2787b438  addiu       $a3, $gp, -0x4BC8
    ctx->pc = 0x2b35c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947896));
    // 0x2b35cc: 0xa380b43a  sb          $zero, -0x4BC6($gp)
    ctx->pc = 0x2b35ccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294947898), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b35d0: 0xc0b7b40  jal         func_2DED00
    ctx->pc = 0x2B35D0u;
    SET_GPR_U32(ctx, 31, 0x2B35D8u);
    ctx->pc = 0x2B35D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B35D0u;
    // 0x2b35d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DED00u, 0x2B35D0u, 0x2B35D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B35D8u;
label_2b35d8:
    // 0x2b35d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b35d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b35dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b35dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b35e0: 0x80b7d6e  j           func_2DF5B8
    ctx->pc = 0x2B35E0u;
    ctx->pc = 0x2B35E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B35E0u;
    // 0x2b35e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5B8u;
    sceCdSync_0x2df5b8(rdram, ctx, runtime); return;
    ctx->pc = 0x2B35E8u;
}
