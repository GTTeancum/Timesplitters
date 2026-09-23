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

// Function: botsetInit
// Address: 0x234478 - 0x23450c
void botsetInit_0x234478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("botsetInit_0x234478");
#endif

    switch (ctx->pc) {
        case 0x2344a0u: goto label_2344a0;
        case 0x2344e8u: goto label_2344e8;
        default: break;
    }

    ctx->pc = 0x234478u;

    // 0x234478: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x234478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23447c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23447Cu;
    {
        const bool branch_taken_0x23447c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23447Cu;
        // 0x234480: 0x2403002c  addiu       $v1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23447c) {
            ctx->pc = 0x2344C4u;
            goto label_2344c4;
        }
    }
    ctx->pc = 0x234484u;
    // 0x234484: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x234484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x234488: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x234488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23448c: 0x24423f24  addiu       $v0, $v0, 0x3F24
    ctx->pc = 0x23448cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16164));
    // 0x234490: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x234490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x234494: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x234494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x234498: 0x24842a88  addiu       $a0, $a0, 0x2A88
    ctx->pc = 0x234498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10888));
    // 0x23449c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23449cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2344a0:
    // 0x2344a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2344a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2344a4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2344a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2344a8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2344a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2344ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2344acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2344b0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2344b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2344b4: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2344B4u;
    {
        const bool branch_taken_0x2344b4 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2344b4) {
            ctx->pc = 0x2344A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2344a0;
        }
    }
    ctx->pc = 0x2344BCu;
    // 0x2344bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2344BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2344BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2344C4u;
label_2344c4:
    // 0x2344c4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2344c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2344c8: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x2344c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x2344cc: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2344ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2344d0: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x2344d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x2344d4: 0x24632b28  addiu       $v1, $v1, 0x2B28
    ctx->pc = 0x2344d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11048));
    // 0x2344d8: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x2344d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x2344dc: 0x24462a88  addiu       $a2, $v0, 0x2A88
    ctx->pc = 0x2344dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10888));
    // 0x2344e0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2344e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2344e4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2344e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2344e8:
    // 0x2344e8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2344e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2344ec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2344ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2344f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2344f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2344f4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2344f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2344f8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2344f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2344fc: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2344FCu;
    {
        const bool branch_taken_0x2344fc = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2344fc) {
            ctx->pc = 0x2344E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2344e8;
        }
    }
    ctx->pc = 0x234504u;
    // 0x234504: 0x3e00008  jr          $ra
    ctx->pc = 0x234504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23450Cu;
}
