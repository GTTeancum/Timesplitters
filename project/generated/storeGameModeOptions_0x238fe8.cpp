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

// Function: storeGameModeOptions
// Address: 0x238fe8 - 0x23905c
void storeGameModeOptions_0x238fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("storeGameModeOptions_0x238fe8");
#endif

    ctx->pc = 0x238fe8u;

    // 0x238fe8: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x238fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x238fec: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x238fecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x238ff0: 0x8ca33838  lw          $v1, 0x3838($a1)
    ctx->pc = 0x238ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x353838u));
    // 0x238ff4: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x238ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x238ff8: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x238ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x238ffc: 0x8cca3860  lw          $t2, 0x3860($a2)
    ctx->pc = 0x238ffcu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x353860u));
    // 0x239000: 0x8ce538d8  lw          $a1, 0x38D8($a3)
    ctx->pc = 0x239000u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3538D8u));
    // 0x239004: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x239004u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x239008: 0x3c090035  lui         $t1, 0x35
    ctx->pc = 0x239008u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)53 << 16));
    // 0x23900c: 0x24422c98  addiu       $v0, $v0, 0x2C98
    ctx->pc = 0x23900cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11416));
    // 0x239010: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x239010u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x239014: 0x8d063900  lw          $a2, 0x3900($t0)
    ctx->pc = 0x239014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 14592)));
    // 0x239018: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x239018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23901c: 0x8d273928  lw          $a3, 0x3928($t1)
    ctx->pc = 0x23901cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 14632)));
    // 0x239020: 0x3c0b0035  lui         $t3, 0x35
    ctx->pc = 0x239020u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)53 << 16));
    // 0x239024: 0x3c0c0035  lui         $t4, 0x35
    ctx->pc = 0x239024u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)53 << 16));
    // 0x239028: 0x3c0d0035  lui         $t5, 0x35
    ctx->pc = 0x239028u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)53 << 16));
    // 0x23902c: 0x8d683990  lw          $t0, 0x3990($t3)
    ctx->pc = 0x23902cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x353990u));
    // 0x239030: 0x8d893968  lw          $t1, 0x3968($t4)
    ctx->pc = 0x239030u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x353968u));
    // 0x239034: 0x8da239b8  lw          $v0, 0x39B8($t5)
    ctx->pc = 0x239034u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3539B8u));
    // 0x239038: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x239038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x23903c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x23903cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x239040: 0xac8a0004  sw          $t2, 0x4($a0)
    ctx->pc = 0x239040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 10));
    // 0x239044: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x239044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x239048: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x239048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x23904c: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x23904cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x239050: 0xac880014  sw          $t0, 0x14($a0)
    ctx->pc = 0x239050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 8));
    // 0x239054: 0x3e00008  jr          $ra
    ctx->pc = 0x239054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239054u;
        // 0x239058: 0xac890018  sw          $t1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23905Cu;
}
