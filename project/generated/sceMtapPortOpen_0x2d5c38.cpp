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

// Function: sceMtapPortOpen
// Address: 0x2d5c38 - 0x2d5ca4
void sceMtapPortOpen_0x2d5c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMtapPortOpen_0x2d5c38");
#endif

    switch (ctx->pc) {
        case 0x2d5c7cu: goto label_2d5c7c;
        case 0x2d5c90u: goto label_2d5c90;
        default: break;
    }

    ctx->pc = 0x2d5c38u;

    // 0x2d5c38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d5c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d5c3c: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2d5c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2d5c40: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d5c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d5c44: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2d5c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2d5c48: 0x24501480  addiu       $s0, $v0, 0x1480
    ctx->pc = 0x2d5c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5248));
    // 0x2d5c4c: 0xac441480  sw          $a0, 0x1480($v0)
    ctx->pc = 0x2d5c4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1FF1480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FF1480u, _value); } while (0);
    // 0x2d5c50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d5c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d5c54: 0x24641380  addiu       $a0, $v1, 0x1380
    ctx->pc = 0x2d5c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x2d5c58: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2d5c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2d5c5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d5c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5c60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d5c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c64: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2d5c64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c68: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2d5c68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d5c6c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2d5c6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c70: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x2d5c70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d5c74: 0xc0b4b42  jal         func_2D2D08
    ctx->pc = 0x2D5C74u;
    SET_GPR_U32(ctx, 31, 0x2D5C7Cu);
    ctx->pc = 0x2D5C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5C74u;
    // 0x2d5c78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D08u, 0x2D5C74u, 0x2D5C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5C7Cu;
label_2d5c7c:
    // 0x2d5c7c: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5C7Cu;
    {
        const bool branch_taken_0x2d5c7c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2d5c7c) {
            ctx->pc = 0x2D5C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5C7Cu;
            // 0x2d5c80: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5C94u;
            goto label_2d5c94;
        }
    }
    ctx->pc = 0x2D5C84u;
    // 0x2d5c84: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2d5c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2d5c88: 0xc0b5668  jal         func_2D59A0
    ctx->pc = 0x2D5C88u;
    SET_GPR_U32(ctx, 31, 0x2D5C90u);
    ctx->pc = 0x2D5C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5C88u;
    // 0x2d5c8c: 0x2484a6d8  addiu       $a0, $a0, -0x5928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59A0u, 0x2D5C88u, 0x2D5C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5C90u;
label_2d5c90:
    // 0x2d5c90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d5c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5c94:
    // 0x2d5c94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d5c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5c98: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d5c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C9Cu;
        // 0x2d5ca0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5CA4u;
}
