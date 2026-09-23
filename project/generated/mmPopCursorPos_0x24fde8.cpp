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

// Function: mmPopCursorPos
// Address: 0x24fde8 - 0x24fe68
void mmPopCursorPos_0x24fde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmPopCursorPos_0x24fde8");
#endif

    ctx->pc = 0x24fde8u;

    // 0x24fde8: 0x8f88b870  lw          $t0, -0x4790($gp)
    ctx->pc = 0x24fde8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948976)));
    // 0x24fdec: 0x1900001c  blez        $t0, . + 4 + (0x1C << 2)
    ctx->pc = 0x24FDECu;
    {
        const bool branch_taken_0x24fdec = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x24FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FDECu;
        // 0x24fdf0: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fdec) {
            ctx->pc = 0x24FE60u;
            goto label_24fe60;
        }
    }
    ctx->pc = 0x24FDF4u;
    // 0x24fdf4: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x24fdf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24fdf8: 0x1032818  mult        $a1, $t0, $v1
    ctx->pc = 0x24fdf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x24fdfc: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x24fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x24fe00: 0x24424080  addiu       $v0, $v0, 0x4080
    ctx->pc = 0x24fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16512));
    // 0x24fe04: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x24fe04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x24fe08: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x24fe08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x24fe0c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x24fe0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x24fe10: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x24fe10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24fe14: 0x244a0008  addiu       $t2, $v0, 0x8
    ctx->pc = 0x24fe14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x24fe18: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x24fe18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x24fe1c: 0xaa5821  addu        $t3, $a1, $t2
    ctx->pc = 0x24fe1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x24fe20: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x24fe20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x24fe24: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x24fe24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24fe28: 0x8f89a1f4  lw          $t1, -0x5E0C($gp)
    ctx->pc = 0x24fe28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943220)));
    // 0x24fe2c: 0x8ce40024  lw          $a0, 0x24($a3)
    ctx->pc = 0x24fe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x24fe30: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x24fe30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x24fe34: 0xaf88b870  sw          $t0, -0x4790($gp)
    ctx->pc = 0x24fe34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948976), GPR_U32(ctx, 8));
    // 0x24fe38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24fe3c: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x24fe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x24fe40: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x24fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x24fe44: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x24fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x24fe48: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x24fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24fe4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x24fe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fe50: 0xace40020  sw          $a0, 0x20($a3)
    ctx->pc = 0x24fe50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 4));
    // 0x24fe54: 0xaf85a1f4  sw          $a1, -0x5E0C($gp)
    ctx->pc = 0x24fe54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943220), GPR_U32(ctx, 5));
    // 0x24fe58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24fe5c: 0xace20024  sw          $v0, 0x24($a3)
    ctx->pc = 0x24fe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 2));
label_24fe60:
    // 0x24fe60: 0x3e00008  jr          $ra
    ctx->pc = 0x24FE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FE68u;
}
