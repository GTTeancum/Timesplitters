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

// Function: menuitemSelect
// Address: 0x22ddf8 - 0x22de68
void menuitemSelect_0x22ddf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menuitemSelect_0x22ddf8");
#endif

    switch (ctx->pc) {
        case 0x22de18u: goto label_22de18;
        case 0x22de28u: goto label_22de28;
        case 0x22de40u: goto label_22de40;
        default: break;
    }

    ctx->pc = 0x22ddf8u;

    // 0x22ddf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22ddf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22ddfc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22ddfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22de00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22de00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22de04: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x22de04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x22de08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22de08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22de0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22DE0Cu;
    {
        const bool branch_taken_0x22de0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE0Cu;
        // 0x22de10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de0c) {
            ctx->pc = 0x22DE20u;
            goto label_22de20;
        }
    }
    ctx->pc = 0x22DE14u;
    // 0x22de14: 0x0  nop
    ctx->pc = 0x22de14u;
    // NOP
label_22de18:
    // 0x22de18: 0x3042ff7f  andi        $v0, $v0, 0xFF7F
    ctx->pc = 0x22de18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65407);
    // 0x22de1c: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x22de1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
label_22de20:
    // 0x22de20: 0xc08b75a  jal         func_22DD68
    ctx->pc = 0x22DE20u;
    SET_GPR_U32(ctx, 31, 0x22DE28u);
    ctx->pc = 0x22DE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE20u;
    // 0x22de24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DD68u, 0x22DE20u, 0x22DE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE28u;
label_22de28:
    // 0x22de28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22de28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22de2c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22DE2Cu;
    {
        const bool branch_taken_0x22de2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22de2c) {
            ctx->pc = 0x22DE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DE2Cu;
            // 0x22de30: 0x9462000a  lhu         $v0, 0xA($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DE18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22de18;
        }
    }
    ctx->pc = 0x22DE34u;
    // 0x22de34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22de34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22de38: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x22DE38u;
    SET_GPR_U32(ctx, 31, 0x22DE40u);
    ctx->pc = 0x22DE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE38u;
    // 0x22de3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x22DE38u, 0x22DE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE40u;
label_22de40:
    // 0x22de40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22de40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22de44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DE44u;
    {
        const bool branch_taken_0x22de44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE44u;
        // 0x22de48: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de44) {
            ctx->pc = 0x22DE58u;
            goto label_22de58;
        }
    }
    ctx->pc = 0x22DE4Cu;
    // 0x22de4c: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x22de4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x22de50: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x22de50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x22de54: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x22de54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
label_22de58:
    // 0x22de58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22de58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22de5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22de5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22de60: 0x3e00008  jr          $ra
    ctx->pc = 0x22DE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE60u;
        // 0x22de64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DE68u;
}
