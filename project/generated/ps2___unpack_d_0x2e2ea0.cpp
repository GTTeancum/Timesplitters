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

// Function: __unpack_d
// Address: 0x2e2ea0 - 0x2e2f3c
void ps2___unpack_d_0x2e2ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___unpack_d_0x2e2ea0");
#endif

    ctx->pc = 0x2e2ea0u;

    // 0x2e2ea0: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2e2ea0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2ea4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e2ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e2ea8: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x2e2ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x2e2eac: 0x227fe  dsrl32      $a0, $v0, 31
    ctx->pc = 0x2e2eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x2e2eb0: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x2e2eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e2eb4: 0x2153e  dsrl32      $v0, $v0, 20
    ctx->pc = 0x2e2eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 20));
    // 0x2e2eb8: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x2e2eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x2e2ebc: 0x304407ff  andi        $a0, $v0, 0x7FF
    ctx->pc = 0x2e2ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2e2ec0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2EC0u;
    {
        const bool branch_taken_0x2e2ec0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2EC0u;
        // 0x2e2ec4: 0x240207ff  addiu       $v0, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ec0) {
            ctx->pc = 0x2E2ED8u;
            goto label_2e2ed8;
        }
    }
    ctx->pc = 0x2E2EC8u;
    // 0x2e2ec8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2ECCu;
        // 0x2e2ed0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2ED4u;
    // 0x2e2ed4: 0x0  nop
    ctx->pc = 0x2e2ed4u;
    // NOP
label_2e2ed8:
    // 0x2e2ed8: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E2ED8u;
    {
        const bool branch_taken_0x2e2ed8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e2ed8) {
            ctx->pc = 0x2E2EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2ED8u;
            // 0x2e2edc: 0x31a38  dsll        $v1, $v1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2F18u;
            goto label_2e2f18;
        }
    }
    ctx->pc = 0x2E2EE0u;
    // 0x2e2ee0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2EE0u;
    {
        const bool branch_taken_0x2e2ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2EE0u;
        // 0x2e2ee4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ee0) {
            ctx->pc = 0x2E2EF0u;
            goto label_2e2ef0;
        }
    }
    ctx->pc = 0x2E2EE8u;
    // 0x2e2ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2EE8u;
        // 0x2e2eec: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2EF0u;
label_2e2ef0:
    // 0x2e2ef0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e2ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e2ef4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x2e2ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2e2ef8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e2ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e2efc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2EFCu;
    {
        const bool branch_taken_0x2e2efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2EFCu;
        // 0x2e2f00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2efc) {
            ctx->pc = 0x2E2F0Cu;
            goto label_2e2f0c;
        }
    }
    ctx->pc = 0x2E2F04u;
    // 0x2e2f04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E2F04u;
    {
        const bool branch_taken_0x2e2f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F04u;
        // 0x2e2f08: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2f04) {
            ctx->pc = 0x2E2F10u;
            goto label_2e2f10;
        }
    }
    ctx->pc = 0x2E2F0Cu;
label_2e2f0c:
    // 0x2e2f0c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e2f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2e2f10:
    // 0x2e2f10: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F10u;
        // 0x2e2f14: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2F18u;
label_2e2f18:
    // 0x2e2f18: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e2f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e2f1c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x2e2f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x2e2f20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e2f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e2f24: 0x2484fc01  addiu       $a0, $a0, -0x3FF
    ctx->pc = 0x2e2f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966273));
    // 0x2e2f28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e2f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e2f2c: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x2e2f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x2e2f30: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x2e2f30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x2e2f34: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F34u;
        // 0x2e2f38: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2F3Cu;
}
