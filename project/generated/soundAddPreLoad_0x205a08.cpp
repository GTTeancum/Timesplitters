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

// Function: soundAddPreLoad
// Address: 0x205a08 - 0x205a50
void soundAddPreLoad_0x205a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundAddPreLoad_0x205a08");
#endif

    switch (ctx->pc) {
        case 0x205a34u: goto label_205a34;
        default: break;
    }

    ctx->pc = 0x205a08u;

    // 0x205a08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x205a0c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x205a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x205a10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205a14: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x205a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x205a18: 0x838018  mult        $s0, $a0, $v1
    ctx->pc = 0x205a18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x205a1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x205a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x205a20: 0x2442e180  addiu       $v0, $v0, -0x1E80
    ctx->pc = 0x205a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959488));
    // 0x205a24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x205a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205a28: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x205a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x205a2c: 0xc0870b6  jal         func_21C2D8
    ctx->pc = 0x205A2Cu;
    SET_GPR_U32(ctx, 31, 0x205A34u);
    ctx->pc = 0x205A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A2Cu;
    // 0x205a30: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C2D8u, 0x205A2Cu, 0x205A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205A34u;
label_205a34:
    // 0x205a34: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x205a34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x205a38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x205a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205a3c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x205a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x205a40: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x205a40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x205a44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205a44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205a48: 0x3e00008  jr          $ra
    ctx->pc = 0x205A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A48u;
        // 0x205a4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205A50u;
}
