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

// Function: crcCalc
// Address: 0x2b3d00 - 0x2b3d50
void crcCalc_0x2b3d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("crcCalc_0x2b3d00");
#endif

    switch (ctx->pc) {
        case 0x2b3d18u: goto label_2b3d18;
        default: break;
    }

    ctx->pc = 0x2b3d00u;

    // 0x2b3d00: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2b3d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2b3d04: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2b3d04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3d08: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2b3d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3d0c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2B3D0Cu;
    {
        const bool branch_taken_0x2b3d0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D0Cu;
        // 0x2b3d10: 0x3463ffff  ori         $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d0c) {
            ctx->pc = 0x2B3D48u;
            goto label_2b3d48;
        }
    }
    ctx->pc = 0x2B3D14u;
    // 0x2b3d14: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x2b3d14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
label_2b3d18:
    // 0x2b3d18: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2b3d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b3d1c: 0x250455c0  addiu       $a0, $t0, 0x55C0
    ctx->pc = 0x2b3d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 21952));
    // 0x2b3d20: 0x32a02  srl         $a1, $v1, 8
    ctx->pc = 0x2b3d20u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b3d24: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b3d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b3d28: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x2b3d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2b3d2c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2b3d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2b3d30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b3d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b3d34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b3d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b3d38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b3d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b3d3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b3d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b3d40: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x2B3D40u;
    {
        const bool branch_taken_0x2b3d40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D40u;
        // 0x2b3d44: 0x651826  xor         $v1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d40) {
            ctx->pc = 0x2B3D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3d18;
        }
    }
    ctx->pc = 0x2B3D48u;
label_2b3d48:
    // 0x2b3d48: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D48u;
        // 0x2b3d4c: 0x31027  nor         $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3D50u;
}
