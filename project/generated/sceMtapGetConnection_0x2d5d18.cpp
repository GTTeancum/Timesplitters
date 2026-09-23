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

// Function: sceMtapGetConnection
// Address: 0x2d5d18 - 0x2d5d84
void sceMtapGetConnection_0x2d5d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMtapGetConnection_0x2d5d18");
#endif

    switch (ctx->pc) {
        case 0x2d5d5cu: goto label_2d5d5c;
        case 0x2d5d70u: goto label_2d5d70;
        default: break;
    }

    ctx->pc = 0x2d5d18u;

    // 0x2d5d18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d5d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d5d1c: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2d5d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2d5d20: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d5d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d5d24: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2d5d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2d5d28: 0x24501480  addiu       $s0, $v0, 0x1480
    ctx->pc = 0x2d5d28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5248));
    // 0x2d5d2c: 0xac441480  sw          $a0, 0x1480($v0)
    ctx->pc = 0x2d5d2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1FF1480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FF1480u, _value); } while (0);
    // 0x2d5d30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d5d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d5d34: 0x246413d0  addiu       $a0, $v1, 0x13D0
    ctx->pc = 0x2d5d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5072));
    // 0x2d5d38: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2d5d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2d5d3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d5d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5d40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d5d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d44: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2d5d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d48: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2d5d48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d5d4c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2d5d4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d50: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x2d5d50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d5d54: 0xc0b4b42  jal         func_2D2D08
    ctx->pc = 0x2D5D54u;
    SET_GPR_U32(ctx, 31, 0x2D5D5Cu);
    ctx->pc = 0x2D5D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5D54u;
    // 0x2d5d58: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D08u, 0x2D5D54u, 0x2D5D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D5Cu;
label_2d5d5c:
    // 0x2d5d5c: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5D5Cu;
    {
        const bool branch_taken_0x2d5d5c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2d5d5c) {
            ctx->pc = 0x2D5D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5D5Cu;
            // 0x2d5d60: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5D74u;
            goto label_2d5d74;
        }
    }
    ctx->pc = 0x2D5D64u;
    // 0x2d5d64: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2d5d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2d5d68: 0xc0b5668  jal         func_2D59A0
    ctx->pc = 0x2D5D68u;
    SET_GPR_U32(ctx, 31, 0x2D5D70u);
    ctx->pc = 0x2D5D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5D68u;
    // 0x2d5d6c: 0x2484a718  addiu       $a0, $a0, -0x58E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59A0u, 0x2D5D68u, 0x2D5D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D70u;
label_2d5d70:
    // 0x2d5d70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d5d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5d74:
    // 0x2d5d74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d5d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5d78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d5d78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D7Cu;
        // 0x2d5d80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5D84u;
}
