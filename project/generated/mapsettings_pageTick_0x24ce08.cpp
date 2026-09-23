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

// Function: mapsettings_pageTick
// Address: 0x24ce08 - 0x24ce9c
void mapsettings_pageTick_0x24ce08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapsettings_pageTick_0x24ce08");
#endif

    switch (ctx->pc) {
        case 0x24ce24u: goto label_24ce24;
        case 0x24ce4cu: goto label_24ce4c;
        case 0x24ce78u: goto label_24ce78;
        case 0x24ce84u: goto label_24ce84;
        default: break;
    }

    ctx->pc = 0x24ce08u;

    // 0x24ce08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24ce08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24ce0c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24ce0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24ce10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24ce10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ce14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24ce14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24ce18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24ce18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24ce1c: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24CE1Cu;
    SET_GPR_U32(ctx, 31, 0x24CE24u);
    ctx->pc = 0x24CE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CE1Cu;
    // 0x24ce20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24CE1Cu, 0x24CE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE24u;
label_24ce24:
    // 0x24ce24: 0x30420900  andi        $v0, $v0, 0x900
    ctx->pc = 0x24ce24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2304);
    // 0x24ce28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24CE28u;
    {
        const bool branch_taken_0x24ce28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE28u;
        // 0x24ce2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce28) {
            ctx->pc = 0x24CE44u;
            goto label_24ce44;
        }
    }
    ctx->pc = 0x24CE30u;
    // 0x24ce30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24ce30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ce34: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24ce34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ce38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ce38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ce3c: 0x8092e82  j           func_24BA08
    ctx->pc = 0x24CE3Cu;
    ctx->pc = 0x24CE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CE3Cu;
    // 0x24ce40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA08u;
    mmExitMenu_0x24ba08(rdram, ctx, runtime); return;
    ctx->pc = 0x24CE44u;
label_24ce44:
    // 0x24ce44: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24CE44u;
    SET_GPR_U32(ctx, 31, 0x24CE4Cu);
    ctx->pc = 0x24CE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CE44u;
    // 0x24ce48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24CE44u, 0x24CE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE4Cu;
label_24ce4c:
    // 0x24ce4c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x24ce4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x24ce50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24CE50u;
    {
        const bool branch_taken_0x24ce50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE50u;
        // 0x24ce54: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce50) {
            ctx->pc = 0x24CE64u;
            goto label_24ce64;
        }
    }
    ctx->pc = 0x24CE58u;
    // 0x24ce58: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x24ce58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24ce5c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x24CE5Cu;
    {
        const bool branch_taken_0x24ce5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24ce5c) {
            ctx->pc = 0x24CE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CE5Cu;
            // 0x24ce60: 0xa380b848  sb          $zero, -0x47B8($gp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CE64u;
            goto label_24ce64;
        }
    }
    ctx->pc = 0x24CE64u;
label_24ce64:
    // 0x24ce64: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x24ce64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x24ce68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24ce68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ce6c: 0x261068a8  addiu       $s0, $s0, 0x68A8
    ctx->pc = 0x24ce6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26792));
    // 0x24ce70: 0xc0930ea  jal         func_24C3A8
    ctx->pc = 0x24CE70u;
    SET_GPR_U32(ctx, 31, 0x24CE78u);
    ctx->pc = 0x24CE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CE70u;
    // 0x24ce74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C3A8u, 0x24CE70u, 0x24CE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE78u;
label_24ce78:
    // 0x24ce78: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x24ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24ce7c: 0xc09309c  jal         func_24C270
    ctx->pc = 0x24CE7Cu;
    SET_GPR_U32(ctx, 31, 0x24CE84u);
    ctx->pc = 0x24CE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CE7Cu;
    // 0x24ce80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C270u, 0x24CE7Cu, 0x24CE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE84u;
label_24ce84:
    // 0x24ce84: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x24ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x24ce88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24ce88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ce8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24ce8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ce90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ce90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ce94: 0x3e00008  jr          $ra
    ctx->pc = 0x24CE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE94u;
        // 0x24ce98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CE9Cu;
}
