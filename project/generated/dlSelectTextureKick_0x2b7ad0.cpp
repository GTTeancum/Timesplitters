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

// Function: dlSelectTextureKick
// Address: 0x2b7ad0 - 0x2b7b40
void dlSelectTextureKick_0x2b7ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dlSelectTextureKick_0x2b7ad0");
#endif

    ctx->pc = 0x2b7ad0u;

    // 0x2b7ad0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b7ad4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2b7ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b7ad8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2b7ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2b7adc: 0x8f83b498  lw          $v1, -0x4B68($gp)
    ctx->pc = 0x2b7adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x2b7ae0: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x2b7ae0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x2b7ae4: 0x8f8893a0  lw          $t0, -0x6C60($gp)
    ctx->pc = 0x2b7ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b7ae8: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x2b7ae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b7aec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b7aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2b7af0: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x2b7af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b7af4: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2b7af4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b7af8: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x2b7af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x2b7afc: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x2b7afcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b7b00: 0x24a505b0  addiu       $a1, $a1, 0x5B0
    ctx->pc = 0x2b7b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1456));
    // 0x2b7b04: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b7b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b7b08: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x2b7b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2b7b0c: 0xa1070003  sb          $a3, 0x3($t0)
    ctx->pc = 0x2b7b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b7b10: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2b7b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b7b14: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2b7b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b7b18: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x2b7b18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x2b7b1c: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2b7b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2b7b20: 0xa4490000  sh          $t1, 0x0($v0)
    ctx->pc = 0x2b7b20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x2b7b24: 0xa0670003  sb          $a3, 0x3($v1)
    ctx->pc = 0x2b7b24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b7b28: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2b7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b7b2c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2b7b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b7b30: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2b7b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x2b7b34: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x2b7b34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x2b7b38: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B38u;
        // 0x2b7b3c: 0xaf8393a0  sw          $v1, -0x6C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7B40u;
}
