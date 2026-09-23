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

// Function: BuffAddu16
// Address: 0x204088 - 0x2040b8
void BuffAddu16_0x204088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuffAddu16_0x204088");
#endif

    ctx->pc = 0x204088u;

    // 0x204088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20408c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20408cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x204090: 0xa7a50000  sh          $a1, 0x0($sp)
    ctx->pc = 0x204090u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x204094: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x204094u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204098: 0x83a50001  lb          $a1, 0x1($sp)
    ctx->pc = 0x204098u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x20409c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x20409cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2040a0: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x2040a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2040a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2040a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2040a8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2040a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2040ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2040acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2040b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2040B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2040B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040B0u;
        // 0x2040b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2040B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2040B8u;
}
