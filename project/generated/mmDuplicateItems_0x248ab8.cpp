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

// Function: mmDuplicateItems
// Address: 0x248ab8 - 0x248b30
void mmDuplicateItems_0x248ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDuplicateItems_0x248ab8");
#endif

    switch (ctx->pc) {
        case 0x248ae0u: goto label_248ae0;
        case 0x248b08u: goto label_248b08;
        default: break;
    }

    ctx->pc = 0x248ab8u;

    // 0x248ab8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x248ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x248abc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x248abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x248ac0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x248ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x248ac4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x248ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248ac8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x248ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x248acc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248ad0: 0x8c900034  lw          $s0, 0x34($a0)
    ctx->pc = 0x248ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x248ad4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x248AD4u;
    {
        const bool branch_taken_0x248ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248AD4u;
        // 0x248ad8: 0x8e510034  lw          $s1, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ad4) {
            ctx->pc = 0x248AF8u;
            goto label_248af8;
        }
    }
    ctx->pc = 0x248ADCu;
    // 0x248adc: 0x0  nop
    ctx->pc = 0x248adcu;
    // NOP
label_248ae0:
    // 0x248ae0: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x248ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x248ae4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x248ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x248ae8: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x248ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248aec: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x248aecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x248af0: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x248af0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x248af4: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x248af4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
label_248af8:
    // 0x248af8: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x248AF8u;
    {
        const bool branch_taken_0x248af8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x248af8) {
            ctx->pc = 0x248AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248AF8u;
            // 0x248afc: 0xae510034  sw          $s1, 0x34($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248B18u;
            goto label_248b18;
        }
    }
    ctx->pc = 0x248B00u;
    // 0x248b00: 0xc092278  jal         func_2489E0
    ctx->pc = 0x248B00u;
    SET_GPR_U32(ctx, 31, 0x248B08u);
    ctx->pc = 0x2489E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2489E0u, 0x248B00u, 0x248B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B08u;
label_248b08:
    // 0x248b08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x248b08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248b0c: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x248B0Cu;
    {
        const bool branch_taken_0x248b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x248b0c) {
            ctx->pc = 0x248B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248B0Cu;
            // 0x248b10: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248ae0;
        }
    }
    ctx->pc = 0x248B14u;
    // 0x248b14: 0xae510034  sw          $s1, 0x34($s2)
    ctx->pc = 0x248b14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 17));
label_248b18:
    // 0x248b18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x248b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x248b1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x248b1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248b20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x248b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248b24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248b28: 0x3e00008  jr          $ra
    ctx->pc = 0x248B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B28u;
        // 0x248b2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248B30u;
}
