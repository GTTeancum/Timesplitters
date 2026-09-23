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

// Function: converttobcd
// Address: 0x2e0d88 - 0x2e0e0c
void converttobcd_0x2e0d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("converttobcd_0x2e0d88");
#endif

    switch (ctx->pc) {
        case 0x2e0db4u: goto label_2e0db4;
        case 0x2e0dbcu: goto label_2e0dbc;
        case 0x2e0dc8u: goto label_2e0dc8;
        case 0x2e0dd4u: goto label_2e0dd4;
        case 0x2e0de0u: goto label_2e0de0;
        case 0x2e0decu: goto label_2e0dec;
        case 0x2e0df8u: goto label_2e0df8;
        default: break;
    }

    ctx->pc = 0x2e0d88u;

    // 0x2e0d88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e0d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e0d90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d94: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0D94u;
    {
        const bool branch_taken_0x2e0d94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D94u;
        // 0x2e0d98: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0d94) {
            ctx->pc = 0x2E0DB4u;
            goto label_2e0db4;
        }
    }
    ctx->pc = 0x2E0D9Cu;
    // 0x2e0d9c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2e0d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2e0da0: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2e0da0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2e0da4: 0x2484b708  addiu       $a0, $a0, -0x48F8
    ctx->pc = 0x2e0da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948616));
    // 0x2e0da8: 0x24c6b730  addiu       $a2, $a2, -0x48D0
    ctx->pc = 0x2e0da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948656));
    // 0x2e0dac: 0xc0b91aa  jal         func_2E46A8
    ctx->pc = 0x2E0DACu;
    SET_GPR_U32(ctx, 31, 0x2E0DB4u);
    ctx->pc = 0x2E0DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0DACu;
    // 0x2e0db0: 0x24050143  addiu       $a1, $zero, 0x143 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 323));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E46A8u, 0x2E0DACu, 0x2E0DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0DB4u;
label_2e0db4:
    // 0x2e0db4: 0xc0b8310  jal         func_2E0C40
    ctx->pc = 0x2E0DB4u;
    SET_GPR_U32(ctx, 31, 0x2E0DBCu);
    ctx->pc = 0x2E0DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0DB4u;
    // 0x2e0db8: 0x92040007  lbu         $a0, 0x7($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C40u, 0x2E0DB4u, 0x2E0DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0DBCu;
label_2e0dbc:
    // 0x2e0dbc: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x2e0dbcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2e0dc0: 0xc0b8310  jal         func_2E0C40
    ctx->pc = 0x2E0DC0u;
    SET_GPR_U32(ctx, 31, 0x2E0DC8u);
    ctx->pc = 0x2E0DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0DC0u;
    // 0x2e0dc4: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C40u, 0x2E0DC0u, 0x2E0DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0DC8u;
label_2e0dc8:
    // 0x2e0dc8: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x2e0dc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2e0dcc: 0xc0b8310  jal         func_2E0C40
    ctx->pc = 0x2E0DCCu;
    SET_GPR_U32(ctx, 31, 0x2E0DD4u);
    ctx->pc = 0x2E0DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0DCCu;
    // 0x2e0dd0: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C40u, 0x2E0DCCu, 0x2E0DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0DD4u;
label_2e0dd4:
    // 0x2e0dd4: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x2e0dd4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2e0dd8: 0xc0b8310  jal         func_2E0C40
    ctx->pc = 0x2E0DD8u;
    SET_GPR_U32(ctx, 31, 0x2E0DE0u);
    ctx->pc = 0x2E0DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0DD8u;
    // 0x2e0ddc: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C40u, 0x2E0DD8u, 0x2E0DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0DE0u;
label_2e0de0:
    // 0x2e0de0: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x2e0de0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2e0de4: 0xc0b8310  jal         func_2E0C40
    ctx->pc = 0x2E0DE4u;
    SET_GPR_U32(ctx, 31, 0x2E0DECu);
    ctx->pc = 0x2E0DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0DE4u;
    // 0x2e0de8: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C40u, 0x2E0DE4u, 0x2E0DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0DECu;
label_2e0dec:
    // 0x2e0dec: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x2e0decu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2e0df0: 0xc0b8310  jal         func_2E0C40
    ctx->pc = 0x2E0DF0u;
    SET_GPR_U32(ctx, 31, 0x2E0DF8u);
    ctx->pc = 0x2E0DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0DF0u;
    // 0x2e0df4: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C40u, 0x2E0DF0u, 0x2E0DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0DF8u;
label_2e0df8:
    // 0x2e0df8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x2e0df8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e0dfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e0dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0e00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e0e00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0e04: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E04u;
        // 0x2e0e08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0E0Cu;
}
