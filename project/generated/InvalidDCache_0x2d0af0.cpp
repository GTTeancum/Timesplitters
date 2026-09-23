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

// Function: InvalidDCache
// Address: 0x2d0af0 - 0x2d0b64
void InvalidDCache_0x2d0af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InvalidDCache_0x2d0af0");
#endif

    switch (ctx->pc) {
        case 0x2d0b18u: goto label_2d0b18;
        case 0x2d0b48u: goto label_2d0b48;
        default: break;
    }

    ctx->pc = 0x2d0af0u;

    // 0x2d0af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d0af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d0af4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2d0af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0af8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d0afc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d0afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0b00: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x2d0b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x2d0b04: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d0b08: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2d0b08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2d0b0c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D0B0Cu;
    {
        const bool branch_taken_0x2d0b0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B0Cu;
        // 0x2d0b10: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b0c) {
            ctx->pc = 0x2D0B34u;
            goto label_2d0b34;
        }
    }
    ctx->pc = 0x2D0B14u;
    // 0x2d0b14: 0x0  nop
    ctx->pc = 0x2d0b14u;
    // NOP
label_2d0b18:
    // 0x2d0b18: 0x42000039  di
    ctx->pc = 0x2d0b18u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x2d0b1c: 0x40f  sync.p
    ctx->pc = 0x2d0b1cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d0b20: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x2d0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x2d0b24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d0b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d0b28: 0x0  nop
    ctx->pc = 0x2d0b28u;
    // NOP
    // 0x2d0b2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D0B2Cu;
    {
        const bool branch_taken_0x2d0b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0b2c) {
            ctx->pc = 0x2D0B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0b18;
        }
    }
    ctx->pc = 0x2D0B34u;
label_2d0b34:
    // 0x2d0b34: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2d0b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2d0b38: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x2d0b38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x2d0b3c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x2d0b3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2d0b40: 0xc0b4292  jal         func_2D0A48
    ctx->pc = 0x2D0B40u;
    SET_GPR_U32(ctx, 31, 0x2D0B48u);
    ctx->pc = 0x2D0B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0B40u;
    // 0x2d0b44: 0xc42024  and         $a0, $a2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0A48u, 0x2D0B40u, 0x2D0B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0B48u;
label_2d0b48:
    // 0x2d0b48: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0B48u;
    {
        const bool branch_taken_0x2d0b48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B48u;
        // 0x2d0b4c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b48) {
            ctx->pc = 0x2D0B58u;
            goto label_2d0b58;
        }
    }
    ctx->pc = 0x2D0B50u;
    // 0x2d0b50: 0x42000038  ei
    ctx->pc = 0x2d0b50u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2d0b54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0b58:
    // 0x2d0b58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B5Cu;
        // 0x2d0b60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0B64u;
}
