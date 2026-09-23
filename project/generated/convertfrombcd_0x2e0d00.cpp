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

// Function: convertfrombcd
// Address: 0x2e0d00 - 0x2e0d84
void convertfrombcd_0x2e0d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("convertfrombcd_0x2e0d00");
#endif

    switch (ctx->pc) {
        case 0x2e0d2cu: goto label_2e0d2c;
        case 0x2e0d34u: goto label_2e0d34;
        case 0x2e0d40u: goto label_2e0d40;
        case 0x2e0d4cu: goto label_2e0d4c;
        case 0x2e0d58u: goto label_2e0d58;
        case 0x2e0d64u: goto label_2e0d64;
        case 0x2e0d70u: goto label_2e0d70;
        default: break;
    }

    ctx->pc = 0x2e0d00u;

    // 0x2e0d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0d04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e0d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e0d08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d0c: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0D0Cu;
    {
        const bool branch_taken_0x2e0d0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D0Cu;
        // 0x2e0d10: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0d0c) {
            ctx->pc = 0x2E0D2Cu;
            goto label_2e0d2c;
        }
    }
    ctx->pc = 0x2E0D14u;
    // 0x2e0d14: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2e0d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2e0d18: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2e0d18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2e0d1c: 0x2484b708  addiu       $a0, $a0, -0x48F8
    ctx->pc = 0x2e0d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948616));
    // 0x2e0d20: 0x24c6b730  addiu       $a2, $a2, -0x48D0
    ctx->pc = 0x2e0d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948656));
    // 0x2e0d24: 0xc0b91aa  jal         func_2E46A8
    ctx->pc = 0x2E0D24u;
    SET_GPR_U32(ctx, 31, 0x2E0D2Cu);
    ctx->pc = 0x2E0D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0D24u;
    // 0x2e0d28: 0x24050134  addiu       $a1, $zero, 0x134 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E46A8u, 0x2E0D24u, 0x2E0D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D2Cu;
label_2e0d2c:
    // 0x2e0d2c: 0xc0b832a  jal         func_2E0CA8
    ctx->pc = 0x2E0D2Cu;
    SET_GPR_U32(ctx, 31, 0x2E0D34u);
    ctx->pc = 0x2E0D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0D2Cu;
    // 0x2e0d30: 0x92040007  lbu         $a0, 0x7($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0CA8u, 0x2E0D2Cu, 0x2E0D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D34u;
label_2e0d34:
    // 0x2e0d34: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x2e0d34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2e0d38: 0xc0b832a  jal         func_2E0CA8
    ctx->pc = 0x2E0D38u;
    SET_GPR_U32(ctx, 31, 0x2E0D40u);
    ctx->pc = 0x2E0D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0D38u;
    // 0x2e0d3c: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0CA8u, 0x2E0D38u, 0x2E0D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D40u;
label_2e0d40:
    // 0x2e0d40: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x2e0d40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2e0d44: 0xc0b832a  jal         func_2E0CA8
    ctx->pc = 0x2E0D44u;
    SET_GPR_U32(ctx, 31, 0x2E0D4Cu);
    ctx->pc = 0x2E0D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0D44u;
    // 0x2e0d48: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0CA8u, 0x2E0D44u, 0x2E0D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D4Cu;
label_2e0d4c:
    // 0x2e0d4c: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x2e0d4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2e0d50: 0xc0b832a  jal         func_2E0CA8
    ctx->pc = 0x2E0D50u;
    SET_GPR_U32(ctx, 31, 0x2E0D58u);
    ctx->pc = 0x2E0D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0D50u;
    // 0x2e0d54: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0CA8u, 0x2E0D50u, 0x2E0D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D58u;
label_2e0d58:
    // 0x2e0d58: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x2e0d58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2e0d5c: 0xc0b832a  jal         func_2E0CA8
    ctx->pc = 0x2E0D5Cu;
    SET_GPR_U32(ctx, 31, 0x2E0D64u);
    ctx->pc = 0x2E0D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0D5Cu;
    // 0x2e0d60: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0CA8u, 0x2E0D5Cu, 0x2E0D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D64u;
label_2e0d64:
    // 0x2e0d64: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x2e0d64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2e0d68: 0xc0b832a  jal         func_2E0CA8
    ctx->pc = 0x2E0D68u;
    SET_GPR_U32(ctx, 31, 0x2E0D70u);
    ctx->pc = 0x2E0D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0D68u;
    // 0x2e0d6c: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0CA8u, 0x2E0D68u, 0x2E0D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D70u;
label_2e0d70:
    // 0x2e0d70: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x2e0d70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e0d74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e0d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0d78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e0d78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D7Cu;
        // 0x2e0d80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0D84u;
}
