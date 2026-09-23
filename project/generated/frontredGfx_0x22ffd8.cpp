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

// Function: frontredGfx
// Address: 0x22ffd8 - 0x2300a8
void frontredGfx_0x22ffd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontredGfx_0x22ffd8");
#endif

    switch (ctx->pc) {
        case 0x22fff8u: goto label_22fff8;
        case 0x230038u: goto label_230038;
        case 0x230048u: goto label_230048;
        case 0x230080u: goto label_230080;
        default: break;
    }

    ctx->pc = 0x22ffd8u;

    // 0x22ffd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22ffd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22ffdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22ffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ffe0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x22ffe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x22ffe4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22ffe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22ffe8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22ffe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22ffec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22ffecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fff0: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x22FFF0u;
    SET_GPR_U32(ctx, 31, 0x22FFF8u);
    ctx->pc = 0x22FFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FFF0u;
    // 0x22fff4: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x22FFF0u, 0x22FFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFF8u;
label_22fff8:
    // 0x22fff8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x22fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x22fffc: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x22fffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x230000: 0x244599f0  addiu       $a1, $v0, -0x6610
    ctx->pc = 0x230000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x230004: 0x8c4399f0  lw          $v1, -0x6610($v0)
    ctx->pc = 0x230004u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3299F0u));
    // 0x230008: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x230008u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x329A04u));
    // 0x23000c: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x23000cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x230010: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x230010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x230014: 0x3c07407f  lui         $a3, 0x407F
    ctx->pc = 0x230014u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16511 << 16));
    // 0x230018: 0x24840032  addiu       $a0, $a0, 0x32
    ctx->pc = 0x230018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
    // 0x23001c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x23001cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x230020: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x230020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x230024: 0x24c6e830  addiu       $a2, $a2, -0x17D0
    ctx->pc = 0x230024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961200));
    // 0x230028: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x230028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23002c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23002cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230030: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x230030u;
    SET_GPR_U32(ctx, 31, 0x230038u);
    ctx->pc = 0x230034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230030u;
    // 0x230034: 0x34e77f7f  ori         $a3, $a3, 0x7F7F (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32639);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x230030u, 0x230038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230038u;
label_230038:
    // 0x230038: 0x8f82b72c  lw          $v0, -0x48D4($gp)
    ctx->pc = 0x230038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948652)));
    // 0x23003c: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x23003Cu;
    {
        const bool branch_taken_0x23003c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x230040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23003Cu;
        // 0x230040: 0x3c120035  lui         $s2, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23003c) {
            ctx->pc = 0x230090u;
            goto label_230090;
        }
    }
    ctx->pc = 0x230044u;
    // 0x230044: 0x8f85a03c  lw          $a1, -0x5FC4($gp)
    ctx->pc = 0x230044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942780)));
label_230048:
    // 0x230048: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x230048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x23004c: 0x26422fb0  addiu       $v0, $s2, 0x2FB0
    ctx->pc = 0x23004cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 12208));
    // 0x230050: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x230050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x230054: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x230054u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x230058: 0x2052826  xor         $a1, $s0, $a1
    ctx->pc = 0x230058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 5));
    // 0x23005c: 0x3484407f  ori         $a0, $a0, 0x407F
    ctx->pc = 0x23005cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16511);
    // 0x230060: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x230060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230064: 0x34e77f7f  ori         $a3, $a3, 0x7F7F
    ctx->pc = 0x230064u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32639);
    // 0x230068: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x230068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23006c: 0x85380b  movn        $a3, $a0, $a1
    ctx->pc = 0x23006cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x230070: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x230070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x230074: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x230074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230078: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x230078u;
    SET_GPR_U32(ctx, 31, 0x230080u);
    ctx->pc = 0x23007Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230078u;
    // 0x23007c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x230078u, 0x230080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230080u;
label_230080:
    // 0x230080: 0x8f82b72c  lw          $v0, -0x48D4($gp)
    ctx->pc = 0x230080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948652)));
    // 0x230084: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x230084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x230088: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x230088u;
    {
        const bool branch_taken_0x230088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230088) {
            ctx->pc = 0x23008Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230088u;
            // 0x23008c: 0x8f85a03c  lw          $a1, -0x5FC4($gp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942780)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230048;
        }
    }
    ctx->pc = 0x230090u;
label_230090:
    // 0x230090: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x230090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x230094: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x230094u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x230098: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x230098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23009c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23009cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2300a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2300A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2300A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2300A0u;
        // 0x2300a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2300A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2300A8u;
}
