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

// Function: MakeCSM1Palette
// Address: 0x2b9050 - 0x2b912c
void MakeCSM1Palette_0x2b9050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeCSM1Palette_0x2b9050");
#endif

    switch (ctx->pc) {
        case 0x2b9058u: goto label_2b9058;
        case 0x2b9060u: goto label_2b9060;
        case 0x2b9090u: goto label_2b9090;
        case 0x2b90c0u: goto label_2b90c0;
        case 0x2b90f8u: goto label_2b90f8;
        default: break;
    }

    ctx->pc = 0x2b9050u;

    // 0x2b9050: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b9050u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9054: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2b9054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2b9058:
    // 0x2b9058: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2b9058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b905c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2b905cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2b9060:
    // 0x2b9060: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b9060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b9064: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2b9064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b9068: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2b9068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2b906c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2b906cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2b9070: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2b9070u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2b9074: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2b9074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2b9078: 0x4e1fff9  bgez        $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B9078u;
    {
        const bool branch_taken_0x2b9078 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x2b9078) {
            ctx->pc = 0x2B9060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9060;
        }
    }
    ctx->pc = 0x2B9080u;
    // 0x2b9080: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x2b9080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2b9084: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2b9084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b9088: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2b9088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2b908c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2b908cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2b9090:
    // 0x2b9090: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b9090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b9094: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2b9094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b9098: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2b9098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2b909c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2b909cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2b90a0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2b90a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2b90a4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2b90a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2b90a8: 0x4e1fff9  bgez        $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B90A8u;
    {
        const bool branch_taken_0x2b90a8 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x2b90a8) {
            ctx->pc = 0x2B9090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9090;
        }
    }
    ctx->pc = 0x2B90B0u;
    // 0x2b90b0: 0x2508fff0  addiu       $t0, $t0, -0x10
    ctx->pc = 0x2b90b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
    // 0x2b90b4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2b90b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b90b8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2b90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2b90bc: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x2b90bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2b90c0:
    // 0x2b90c0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2b90c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b90c4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b90c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b90c8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2b90c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2b90cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2b90ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b90d0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2b90d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2b90d4: 0x28e20018  slti        $v0, $a3, 0x18
    ctx->pc = 0x2b90d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2b90d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B90D8u;
    {
        const bool branch_taken_0x2b90d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B90DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90D8u;
        // 0x2b90dc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b90d8) {
            ctx->pc = 0x2B90C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b90c0;
        }
    }
    ctx->pc = 0x2B90E0u;
    // 0x2b90e0: 0x28e20020  slti        $v0, $a3, 0x20
    ctx->pc = 0x2b90e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2b90e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B90E4u;
    {
        const bool branch_taken_0x2b90e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B90E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90E4u;
        // 0x2b90e8: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b90e4) {
            ctx->pc = 0x2B9118u;
            goto label_2b9118;
        }
    }
    ctx->pc = 0x2B90ECu;
    // 0x2b90ec: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2b90ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2b90f0: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x2b90f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b90f4: 0x0  nop
    ctx->pc = 0x2b90f4u;
    // NOP
label_2b90f8:
    // 0x2b90f8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2b90f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b90fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b90fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b9100: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2b9100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2b9104: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2b9104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b9108: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2b9108u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2b910c: 0x28e20020  slti        $v0, $a3, 0x20
    ctx->pc = 0x2b910cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2b9110: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B9110u;
    {
        const bool branch_taken_0x2b9110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9110u;
        // 0x2b9114: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9110) {
            ctx->pc = 0x2B90F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b90f8;
        }
    }
    ctx->pc = 0x2B9118u;
label_2b9118:
    // 0x2b9118: 0x29020100  slti        $v0, $t0, 0x100
    ctx->pc = 0x2b9118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2b911c: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2B911Cu;
    {
        const bool branch_taken_0x2b911c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B911Cu;
        // 0x2b9120: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b911c) {
            ctx->pc = 0x2B9058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9058;
        }
    }
    ctx->pc = 0x2B9124u;
    // 0x2b9124: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B912Cu;
}
