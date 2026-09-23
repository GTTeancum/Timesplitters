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

// Function: dptofp
// Address: 0x2e3a10 - 0x2e3a64
void dptofp_0x2e3a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptofp_0x2e3a10");
#endif

    switch (ctx->pc) {
        case 0x2e3a28u: goto label_2e3a28;
        case 0x2e3a58u: goto label_2e3a58;
        default: break;
    }

    ctx->pc = 0x2e3a10u;

    // 0x2e3a10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e3a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e3a14: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x2e3a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x2e3a18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e3a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3a1c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e3a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e3a20: 0xc0b8ba8  jal         func_2E2EA0
    ctx->pc = 0x2E3A20u;
    SET_GPR_U32(ctx, 31, 0x2E3A28u);
    ctx->pc = 0x2E3A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3A20u;
    // 0x2e3a24: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2EA0u, 0x2E3A20u, 0x2E3A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3A28u;
label_2e3a28:
    // 0x2e3a28: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x2e3a28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3a2c: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x2e3a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x2e3a30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e3a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e3a34: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2e3a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3a38: 0x240b8  dsll        $t0, $v0, 2
    ctx->pc = 0x2e3a38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 2);
    // 0x2e3a3c: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2e3a3cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2e3a40: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2e3a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e3a44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e3a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e3a48: 0x35070001  ori         $a3, $t0, 0x1
    ctx->pc = 0x2e3a48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x2e3a4c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2e3a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e3a50: 0xc0b9176  jal         func_2E45D8
    ctx->pc = 0x2E3A50u;
    SET_GPR_U32(ctx, 31, 0x2E3A58u);
    ctx->pc = 0x2E3A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3A50u;
    // 0x2e3a54: 0x102380a  movz        $a3, $t0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E45D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E45D8u, 0x2E3A50u, 0x2E3A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3A58u;
label_2e3a58:
    // 0x2e3a58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e3a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A5Cu;
        // 0x2e3a60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3A64u;
}
