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

// Function: _write_r
// Address: 0x2e9a60 - 0x2e9ac0
void _write_r_0x2e9a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_write_r_0x2e9a60");
#endif

    switch (ctx->pc) {
        case 0x2e9a8cu: goto label_2e9a8c;
        default: break;
    }

    ctx->pc = 0x2e9a60u;

    // 0x2e9a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e9a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e9a64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e9a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e9a68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e9a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a6c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e9a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e9a70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e9a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a74: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x2e9a74u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x2e9a78: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2e9a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e9a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e9a80: 0xae2001f8  sw          $zero, 0x1F8($s1)
    ctx->pc = 0x2e9a80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3B01F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B01F8u, _value); } while (0);
    // 0x2e9a84: 0xc0b4188  jal         func_2D0620
    ctx->pc = 0x2E9A84u;
    SET_GPR_U32(ctx, 31, 0x2E9A8Cu);
    ctx->pc = 0x2E9A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9A84u;
    // 0x2e9a88: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0620u, 0x2E9A84u, 0x2E9A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A8Cu;
label_2e9a8c:
    // 0x2e9a8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e9a8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e9a94: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9A94u;
    {
        const bool branch_taken_0x2e9a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E9A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A94u;
        // 0x2e9a98: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a94) {
            ctx->pc = 0x2E9AACu;
            goto label_2e9aac;
        }
    }
    ctx->pc = 0x2E9A9Cu;
    // 0x2e9a9c: 0x8e2201f8  lw          $v0, 0x1F8($s1)
    ctx->pc = 0x2e9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
    // 0x2e9aa0: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9AA0u;
    {
        const bool branch_taken_0x2e9aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9aa0) {
            ctx->pc = 0x2E9AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9AA0u;
            // 0x2e9aa4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9AACu;
            goto label_2e9aac;
        }
    }
    ctx->pc = 0x2E9AA8u;
    // 0x2e9aa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e9aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e9aac:
    // 0x2e9aac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e9aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ab0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e9ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9ab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e9ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9AB8u;
        // 0x2e9abc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9AC0u;
}
