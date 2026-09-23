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

// Function: dlLabel
// Address: 0x2b7d28 - 0x2b7df0
void dlLabel_0x2b7d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dlLabel_0x2b7d28");
#endif

    switch (ctx->pc) {
        case 0x2b7d40u: goto label_2b7d40;
        default: break;
    }

    ctx->pc = 0x2b7d28u;

    // 0x2b7d28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b7d2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b7d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7d30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b7d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7d34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b7d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b7d38: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2B7D38u;
    SET_GPR_U32(ctx, 31, 0x2B7D40u);
    ctx->pc = 0x2B7D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7D38u;
    // 0x2b7d3c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2B7D38u, 0x2B7D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D40u;
label_2b7d40:
    // 0x2b7d40: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x2b7d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b7d44: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2b7d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b7d48: 0x3c036c02  lui         $v1, 0x6C02
    ctx->pc = 0x2b7d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27650 << 16));
    // 0x2b7d4c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x2b7d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x2b7d50: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x2b7d50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b7d54: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2b7d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2b7d58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b7d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b7d5c: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x2b7d5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x2b7d60: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2b7d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b7d64: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x2b7d64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b7d68: 0x240a0062  addiu       $t2, $zero, 0x62
    ctx->pc = 0x2b7d68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x2b7d6c: 0x3c051400  lui         $a1, 0x1400
    ctx->pc = 0x2b7d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5120 << 16));
    // 0x2b7d70: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2b7d70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2b7d74: 0x34a507fc  ori         $a1, $a1, 0x7FC
    ctx->pc = 0x2b7d74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2044);
    // 0x2b7d78: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7d7c: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x2b7d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b7d80: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b7d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2b7d84: 0x3c091100  lui         $t1, 0x1100
    ctx->pc = 0x2b7d84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4352 << 16));
    // 0x2b7d88: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7d8c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b7d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b7d90: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2b7d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2b7d94: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7d98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b7d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7d9c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x2b7d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x2b7da0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7da4: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x2b7da4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b7da8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b7da8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b7dac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7db0: 0xaf8693a0  sw          $a2, -0x6C60($gp)
    ctx->pc = 0x2b7db0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
    // 0x2b7db4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2b7db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2b7db8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7dbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7dc0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b7dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b7dc4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7dc8: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x2b7dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x2b7dcc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7dd0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b7dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b7dd4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7dd8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2b7dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2b7ddc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7de0: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x2b7de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x2b7de4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2b7de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2b7de8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7DE8u;
        // 0x2b7dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7DF0u;
}
