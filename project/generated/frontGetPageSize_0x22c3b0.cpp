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

// Function: frontGetPageSize
// Address: 0x22c3b0 - 0x22c46c
void frontGetPageSize_0x22c3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontGetPageSize_0x22c3b0");
#endif

    switch (ctx->pc) {
        case 0x22c3e8u: goto label_22c3e8;
        default: break;
    }

    ctx->pc = 0x22c3b0u;

    // 0x22c3b0: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x22c3b0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c3b4: 0x240207d0  addiu       $v0, $zero, 0x7D0
    ctx->pc = 0x22c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x22c3b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x22c3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22c3bc: 0xadc20004  sw          $v0, 0x4($t6)
    ctx->pc = 0x22c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 2));
    // 0x22c3c0: 0xadc3000c  sw          $v1, 0xC($t6)
    ctx->pc = 0x22c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 3));
    // 0x22c3c4: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x22c3c4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c3c8: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x22c3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x22c3cc: 0xadc30008  sw          $v1, 0x8($t6)
    ctx->pc = 0x22c3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 3));
    // 0x22c3d0: 0x8f02000c  lw          $v0, 0xC($t8)
    ctx->pc = 0x22c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 12)));
    // 0x22c3d4: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x22C3D4u;
    {
        const bool branch_taken_0x22c3d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3D4u;
        // 0x22c3d8: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c3d4) {
            ctx->pc = 0x22C464u;
            goto label_22c464;
        }
    }
    ctx->pc = 0x22C3DCu;
    // 0x22c3dc: 0x8f190008  lw          $t9, 0x8($t8)
    ctx->pc = 0x22c3dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x22c3e0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x22c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x22c3e4: 0x0  nop
    ctx->pc = 0x22c3e4u;
    // NOP
label_22c3e8:
    // 0x22c3e8: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x22c3e8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x22c3ec: 0x1e21818  mult        $v1, $t7, $v0
    ctx->pc = 0x22c3ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22c3f0: 0x8dcb0008  lw          $t3, 0x8($t6)
    ctx->pc = 0x22c3f0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x22c3f4: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x22c3f4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x22c3f8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x22c3f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x22c3fc: 0x8dca000c  lw          $t2, 0xC($t6)
    ctx->pc = 0x22c3fcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x22c400: 0x791021  addu        $v0, $v1, $t9
    ctx->pc = 0x22c400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x22c404: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x22c404u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c408: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x22c408u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x22c40c: 0x94480006  lhu         $t0, 0x6($v0)
    ctx->pc = 0x22c40cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x22c410: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x22c410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c414: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x22c414u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22c418: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x22c418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c41c: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x22c41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x22c420: 0x1a6102a  slt         $v0, $t5, $a2
    ctx->pc = 0x22c420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22c424: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x22c424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22c428: 0x187402a  slt         $t0, $t4, $a3
    ctx->pc = 0x22c428u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x22c42c: 0x8b182a  slt         $v1, $a0, $t3
    ctx->pc = 0x22c42cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x22c430: 0xaa482a  slt         $t1, $a1, $t2
    ctx->pc = 0x22c430u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x22c434: 0x1a2300b  movn        $a2, $t5, $v0
    ctx->pc = 0x22c434u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x22c438: 0x163200b  movn        $a0, $t3, $v1
    ctx->pc = 0x22c438u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 11));
    // 0x22c43c: 0x188380b  movn        $a3, $t4, $t0
    ctx->pc = 0x22c43cu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 12));
    // 0x22c440: 0x149280b  movn        $a1, $t2, $t1
    ctx->pc = 0x22c440u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 10));
    // 0x22c444: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x22c444u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x22c448: 0xadc40008  sw          $a0, 0x8($t6)
    ctx->pc = 0x22c448u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 4));
    // 0x22c44c: 0xadc70004  sw          $a3, 0x4($t6)
    ctx->pc = 0x22c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 7));
    // 0x22c450: 0xadc5000c  sw          $a1, 0xC($t6)
    ctx->pc = 0x22c450u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 5));
    // 0x22c454: 0x8f02000c  lw          $v0, 0xC($t8)
    ctx->pc = 0x22c454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 12)));
    // 0x22c458: 0x1e2102a  slt         $v0, $t7, $v0
    ctx->pc = 0x22c458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22c45c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x22C45Cu;
    {
        const bool branch_taken_0x22c45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C45Cu;
        // 0x22c460: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c45c) {
            ctx->pc = 0x22C3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c3e8;
        }
    }
    ctx->pc = 0x22C464u;
label_22c464:
    // 0x22c464: 0x3e00008  jr          $ra
    ctx->pc = 0x22C464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C46Cu;
}
