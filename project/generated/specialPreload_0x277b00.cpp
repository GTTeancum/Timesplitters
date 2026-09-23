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

// Function: specialPreload
// Address: 0x277b00 - 0x277b6c
void specialPreload_0x277b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialPreload_0x277b00");
#endif

    switch (ctx->pc) {
        case 0x277b40u: goto label_277b40;
        case 0x277b50u: goto label_277b50;
        default: break;
    }

    ctx->pc = 0x277b00u;

    // 0x277b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x277b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x277b04: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x277b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x277b08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x277b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x277b0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x277b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x277b10: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x277b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x277b14: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x277B14u;
    {
        const bool branch_taken_0x277b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x277B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B14u;
        // 0x277b18: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b14) {
            ctx->pc = 0x277B30u;
            goto label_277b30;
        }
    }
    ctx->pc = 0x277B1Cu;
    // 0x277b1c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x277b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x277b20: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277B20u;
    {
        const bool branch_taken_0x277b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x277B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B20u;
        // 0x277b24: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b20) {
            ctx->pc = 0x277B30u;
            goto label_277b30;
        }
    }
    ctx->pc = 0x277B28u;
    // 0x277b28: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x277B28u;
    {
        const bool branch_taken_0x277b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x277B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B28u;
        // 0x277b2c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b28) {
            ctx->pc = 0x277B5Cu;
            goto label_277b5c;
        }
    }
    ctx->pc = 0x277B30u;
label_277b30:
    // 0x277b30: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x277b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x277b34: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x277b34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x277b38: 0x24501868  addiu       $s0, $v0, 0x1868
    ctx->pc = 0x277b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6248));
    // 0x277b3c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x277b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x361868u));
label_277b40:
    // 0x277b40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x277b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b44: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x277b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x277b48: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x277B48u;
    SET_GPR_U32(ctx, 31, 0x277B50u);
    ctx->pc = 0x277B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277B48u;
    // 0x277b4c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x277B48u, 0x277B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B50u;
label_277b50:
    // 0x277b50: 0x623fffb  bgezl       $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x277B50u;
    {
        const bool branch_taken_0x277b50 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x277b50) {
            ctx->pc = 0x277B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277B50u;
            // 0x277b54: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277b40;
        }
    }
    ctx->pc = 0x277B58u;
    // 0x277b58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x277b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_277b5c:
    // 0x277b5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x277b5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277b60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x277b60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277b64: 0x3e00008  jr          $ra
    ctx->pc = 0x277B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B64u;
        // 0x277b68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277B6Cu;
}
