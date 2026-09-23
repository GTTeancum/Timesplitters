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

// Function: _sceRpcGetPacket
// Address: 0x2d26d8 - 0x2d277c
void _sceRpcGetPacket_0x2d26d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceRpcGetPacket_0x2d26d8");
#endif

    switch (ctx->pc) {
        case 0x2d26e0u: goto label_2d26e0;
        case 0x2d2718u: goto label_2d2718;
        default: break;
    }

    ctx->pc = 0x2d26d8u;

    // 0x2d26d8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2d26d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2d26dc: 0x0  nop
    ctx->pc = 0x2d26dcu;
    // NOP
label_2d26e0:
    // 0x2d26e0: 0x42000039  di
    ctx->pc = 0x2d26e0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x2d26e4: 0x40f  sync.p
    ctx->pc = 0x2d26e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d26e8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x2d26e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x2d26ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d26ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d26f0: 0x0  nop
    ctx->pc = 0x2d26f0u;
    // NOP
    // 0x2d26f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D26F4u;
    {
        const bool branch_taken_0x2d26f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d26f4) {
            ctx->pc = 0x2D26E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d26e0;
        }
    }
    ctx->pc = 0x2D26FCu;
    // 0x2d26fc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2d26fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d2700: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d2700u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2704: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D2704u;
    {
        const bool branch_taken_0x2d2704 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D2708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2704u;
        // 0x2d2708: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2704) {
            ctx->pc = 0x2D2770u;
            goto label_2d2770;
        }
    }
    ctx->pc = 0x2D270Cu;
    // 0x2d270c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d270cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2710: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d2710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2714: 0x0  nop
    ctx->pc = 0x2d2714u;
    // NOP
label_2d2718:
    // 0x2d2718: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2d2718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d271c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d271cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d2720: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D2720u;
    {
        const bool branch_taken_0x2d2720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2720) {
            ctx->pc = 0x2D2724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2720u;
            // 0x2d2724: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2764u;
            goto label_2d2764;
        }
    }
    ctx->pc = 0x2D2728u;
    // 0x2d2728: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x2d2728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2d272c: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x2d272cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x2d2730: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x2d2730u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x2d2734: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d2734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d2738: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2d2738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d273c: 0x14670004  bne         $v1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D273Cu;
    {
        const bool branch_taken_0x2d273c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x2D2740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D273Cu;
        // 0x2d2740: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d273c) {
            ctx->pc = 0x2D2750u;
            goto label_2d2750;
        }
    }
    ctx->pc = 0x2D2744u;
    // 0x2d2744: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2d2744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2d2748: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d2748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d274c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2d274cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2d2750:
    // 0x2d2750: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x2d2750u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x2d2754: 0xaca50014  sw          $a1, 0x14($a1)
    ctx->pc = 0x2d2754u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 5));
    // 0x2d2758: 0x42000038  ei
    ctx->pc = 0x2d2758u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2d275c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D275Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D275Cu;
        // 0x2d2760: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D275Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2764u;
label_2d2764:
    // 0x2d2764: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x2d2764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d2768: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2D2768u;
    {
        const bool branch_taken_0x2d2768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2768u;
        // 0x2d276c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2768) {
            ctx->pc = 0x2D2718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2718;
        }
    }
    ctx->pc = 0x2D2770u;
label_2d2770:
    // 0x2d2770: 0x42000038  ei
    ctx->pc = 0x2d2770u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2d2774: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2774u;
        // 0x2d2778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D277Cu;
}
