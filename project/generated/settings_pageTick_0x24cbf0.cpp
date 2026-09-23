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

// Function: settings_pageTick
// Address: 0x24cbf0 - 0x24cc64
void settings_pageTick_0x24cbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("settings_pageTick_0x24cbf0");
#endif

    switch (ctx->pc) {
        case 0x24cc0cu: goto label_24cc0c;
        case 0x24cc40u: goto label_24cc40;
        case 0x24cc4cu: goto label_24cc4c;
        default: break;
    }

    ctx->pc = 0x24cbf0u;

    // 0x24cbf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24cbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24cbf4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24cbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24cbf8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24cbf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cbfc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24cbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24cc00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24cc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24cc04: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24CC04u;
    SET_GPR_U32(ctx, 31, 0x24CC0Cu);
    ctx->pc = 0x24CC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC04u;
    // 0x24cc08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24CC04u, 0x24CC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC0Cu;
label_24cc0c:
    // 0x24cc0c: 0x30420900  andi        $v0, $v0, 0x900
    ctx->pc = 0x24cc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2304);
    // 0x24cc10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24CC10u;
    {
        const bool branch_taken_0x24cc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC10u;
        // 0x24cc14: 0x3c100035  lui         $s0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc10) {
            ctx->pc = 0x24CC30u;
            goto label_24cc30;
        }
    }
    ctx->pc = 0x24CC18u;
    // 0x24cc18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24cc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24cc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24cc20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24cc20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24cc24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24cc24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cc28: 0x8092e82  j           func_24BA08
    ctx->pc = 0x24CC28u;
    ctx->pc = 0x24CC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC28u;
    // 0x24cc2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA08u;
    mmExitMenu_0x24ba08(rdram, ctx, runtime); return;
    ctx->pc = 0x24CC30u;
label_24cc30:
    // 0x24cc30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24cc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc34: 0x26106838  addiu       $s0, $s0, 0x6838
    ctx->pc = 0x24cc34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26680));
    // 0x24cc38: 0xc0930ea  jal         func_24C3A8
    ctx->pc = 0x24CC38u;
    SET_GPR_U32(ctx, 31, 0x24CC40u);
    ctx->pc = 0x24CC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC38u;
    // 0x24cc3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C3A8u, 0x24CC38u, 0x24CC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC40u;
label_24cc40:
    // 0x24cc40: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x24cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24cc44: 0xc09309c  jal         func_24C270
    ctx->pc = 0x24CC44u;
    SET_GPR_U32(ctx, 31, 0x24CC4Cu);
    ctx->pc = 0x24CC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC44u;
    // 0x24cc48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C270u, 0x24CC44u, 0x24CC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC4Cu;
label_24cc4c:
    // 0x24cc4c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x24cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x24cc50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24cc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24cc54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24cc54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24cc58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24cc58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x24CC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC5Cu;
        // 0x24cc60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CC64u;
}
