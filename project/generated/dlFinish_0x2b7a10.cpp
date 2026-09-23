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

// Function: dlFinish
// Address: 0x2b7a10 - 0x2b7acc
void dlFinish_0x2b7a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dlFinish_0x2b7a10");
#endif

    switch (ctx->pc) {
        case 0x2b7a20u: goto label_2b7a20;
        default: break;
    }

    ctx->pc = 0x2b7a10u;

    // 0x2b7a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b7a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b7a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b7a18: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2B7A18u;
    SET_GPR_U32(ctx, 31, 0x2B7A20u);
    ctx->pc = 0x2B7A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7A18u;
    // 0x2b7a1c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2B7A18u, 0x2B7A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7A20u;
label_2b7a20:
    // 0x2b7a20: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x2b7a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b7a24: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2b7a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b7a28: 0x3c036c02  lui         $v1, 0x6C02
    ctx->pc = 0x2b7a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27650 << 16));
    // 0x2b7a2c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x2b7a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x2b7a30: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x2b7a30u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b7a34: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2b7a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2b7a38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b7a38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b7a3c: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x2b7a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x2b7a40: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2b7a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b7a44: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x2b7a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b7a48: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x2b7a48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2b7a4c: 0x3c051400  lui         $a1, 0x1400
    ctx->pc = 0x2b7a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5120 << 16));
    // 0x2b7a50: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2b7a50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2b7a54: 0x34a507fc  ori         $a1, $a1, 0x7FC
    ctx->pc = 0x2b7a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2044);
    // 0x2b7a58: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7a5c: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x2b7a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b7a60: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b7a60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2b7a64: 0x3c091100  lui         $t1, 0x1100
    ctx->pc = 0x2b7a64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4352 << 16));
    // 0x2b7a68: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7a6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b7a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b7a70: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2b7a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2b7a74: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7a7c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x2b7a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x2b7a80: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7a84: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x2b7a84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b7a88: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b7a88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b7a8c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7a90: 0xaf8693a0  sw          $a2, -0x6C60($gp)
    ctx->pc = 0x2b7a90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
    // 0x2b7a94: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b7a94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b7a98: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7a9c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b7a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b7aa0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7aa4: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x2b7aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x2b7aa8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7aac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b7aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b7ab0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7ab4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2b7ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2b7ab8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7abc: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x2b7abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x2b7ac0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2b7ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2b7ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AC4u;
        // 0x2b7ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7ACCu;
}
