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

// Function: _request_rdata
// Address: 0x2d28c0 - 0x2d2920
void _request_rdata_0x2d28c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_request_rdata_0x2d28c0");
#endif

    switch (ctx->pc) {
        case 0x2d28d8u: goto label_2d28d8;
        default: break;
    }

    ctx->pc = 0x2d28c0u;

    // 0x2d28c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d28c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d28c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d28c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d28c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d28c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d28cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d28ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d28d0: 0xc0b49e8  jal         func_2D27A0
    ctx->pc = 0x2D28D0u;
    SET_GPR_U32(ctx, 31, 0x2D28D8u);
    ctx->pc = 0x2D28D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D28D0u;
    // 0x2d28d4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D27A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D27A0u, 0x2D28D0u, 0x2D28D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D28D8u;
label_2d28d8:
    // 0x2d28d8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2d28d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2d28dc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2d28dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2d28e0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2d28e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2d28e4: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x2d28e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x2d28e8: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x2d28e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x2d28ec: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2d28ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2d28f0: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x2d28f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x2d28f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d28f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d28f8: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x2d28f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x2d28fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2d28fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2d2900: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d2900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2904: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x2d2904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x2d2908: 0x8e090028  lw          $t1, 0x28($s0)
    ctx->pc = 0x2d2908u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2d290c: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x2d290cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2d2910: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x2d2910u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2d2914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d2914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2918: 0x80b48c4  j           func_2D2310
    ctx->pc = 0x2D2918u;
    ctx->pc = 0x2D291Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2918u;
    // 0x2d291c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2310u;
    isceSifSendCmd_0x2d2310(rdram, ctx, runtime); return;
    ctx->pc = 0x2D2920u;
}
