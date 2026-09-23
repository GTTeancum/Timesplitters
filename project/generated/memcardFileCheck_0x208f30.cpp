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

// Function: memcardFileCheck
// Address: 0x208f30 - 0x208f6c
void memcardFileCheck_0x208f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memcardFileCheck_0x208f30");
#endif

    switch (ctx->pc) {
        case 0x208f60u: goto label_208f60;
        default: break;
    }

    ctx->pc = 0x208f30u;

    // 0x208f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x208f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208f38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x208f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x208f3c: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x208F3Cu;
    {
        const bool branch_taken_0x208f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x208F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F3Cu;
        // 0x208f40: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f3c) {
            ctx->pc = 0x208F4Cu;
            goto label_208f4c;
        }
    }
    ctx->pc = 0x208F44u;
    // 0x208f44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x208F44u;
    {
        const bool branch_taken_0x208f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F44u;
        // 0x208f48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f44) {
            ctx->pc = 0x208F60u;
            goto label_208f60;
        }
    }
    ctx->pc = 0x208F4Cu;
label_208f4c:
    // 0x208f4c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x208f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x208f50: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x208f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f54: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x208f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x208f58: 0xc0acf54  jal         func_2B3D50
    ctx->pc = 0x208F58u;
    SET_GPR_U32(ctx, 31, 0x208F60u);
    ctx->pc = 0x208F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208F58u;
    // 0x208f5c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3D50u, 0x208F58u, 0x208F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F60u;
label_208f60:
    // 0x208f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208f64: 0x3e00008  jr          $ra
    ctx->pc = 0x208F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F64u;
        // 0x208f68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208F6Cu;
}
