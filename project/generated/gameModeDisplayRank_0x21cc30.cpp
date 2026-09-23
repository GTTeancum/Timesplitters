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

// Function: gameModeDisplayRank
// Address: 0x21cc30 - 0x21ccc4
void gameModeDisplayRank_0x21cc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gameModeDisplayRank_0x21cc30");
#endif

    switch (ctx->pc) {
        case 0x21cc5cu: goto label_21cc5c;
        default: break;
    }

    ctx->pc = 0x21cc30u;

    // 0x21cc30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21cc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21cc34: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21cc38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21cc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21cc3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21cc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21cc40: 0x2470c4a8  addiu       $s0, $v1, -0x3B58
    ctx->pc = 0x21cc40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x21cc44: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x21cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x21cc48: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x21cc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x21cc4c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x21CC4Cu;
    {
        const bool branch_taken_0x21cc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cc4c) {
            ctx->pc = 0x21CC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CC4Cu;
            // 0x21cc50: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CCACu;
            goto label_21ccac;
        }
    }
    ctx->pc = 0x21CC54u;
    // 0x21cc54: 0xc087c18  jal         func_21F060
    ctx->pc = 0x21CC54u;
    SET_GPR_U32(ctx, 31, 0x21CC5Cu);
    ctx->pc = 0x21F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F060u, 0x21CC54u, 0x21CC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CC5Cu;
label_21cc5c:
    // 0x21cc5c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x21cc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x21cc60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21cc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc64: 0x2c62001b  sltiu       $v0, $v1, 0x1B
    ctx->pc = 0x21cc64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x21cc68: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21CC68u;
    {
        const bool branch_taken_0x21cc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC68u;
        // 0x21cc6c: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc68) {
            ctx->pc = 0x21CC98u;
            goto label_21cc98;
        }
    }
    ctx->pc = 0x21CC70u;
    // 0x21cc70: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x21cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x21cc74: 0x244207a0  addiu       $v0, $v0, 0x7A0
    ctx->pc = 0x21cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1952));
    // 0x21cc78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21cc7c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21cc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21cc80: 0x800008  jr          $a0
    ctx->pc = 0x21CC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21CC88u: goto label_21cc88;
            case 0x21CC90u: goto label_21cc90;
            case 0x21CC98u: goto label_21cc98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CC80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21CC88u;
label_21cc88:
    // 0x21cc88: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21CC88u;
    {
        const bool branch_taken_0x21cc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC88u;
        // 0x21cc8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc88) {
            ctx->pc = 0x21CCB4u;
            goto label_21ccb4;
        }
    }
    ctx->pc = 0x21CC90u;
label_21cc90:
    // 0x21cc90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21CC90u;
    {
        const bool branch_taken_0x21cc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC90u;
        // 0x21cc94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc90) {
            ctx->pc = 0x21CCB4u;
            goto label_21ccb4;
        }
    }
    ctx->pc = 0x21CC98u;
label_21cc98:
    // 0x21cc98: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x21cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x21cc9c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x21cc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21cca0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x21cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21cca4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21CCA4u;
    {
        const bool branch_taken_0x21cca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCA4u;
        // 0x21cca8: 0x82102a  slt         $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cca4) {
            ctx->pc = 0x21CCB4u;
            goto label_21ccb4;
        }
    }
    ctx->pc = 0x21CCACu;
label_21ccac:
    // 0x21ccac: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x21ccacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x21ccb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x21ccb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21ccb4:
    // 0x21ccb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21ccb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ccb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ccb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ccbc: 0x3e00008  jr          $ra
    ctx->pc = 0x21CCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCBCu;
        // 0x21ccc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CCBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CCC4u;
}
