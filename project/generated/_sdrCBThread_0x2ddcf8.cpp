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

// Function: _sdrCBThread
// Address: 0x2ddcf8 - 0x2ddd5c
void _sdrCBThread_0x2ddcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sdrCBThread_0x2ddcf8");
#endif

    switch (ctx->pc) {
        case 0x2ddd08u: goto label_2ddd08;
        case 0x2ddd10u: goto label_2ddd10;
        case 0x2ddd1cu: goto label_2ddd1c;
        case 0x2ddd48u: goto label_2ddd48;
        case 0x2ddd50u: goto label_2ddd50;
        default: break;
    }

    ctx->pc = 0x2ddcf8u;

    // 0x2ddcf8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ddcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ddcfc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ddcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ddd00: 0xc0b4948  jal         func_2D2520
    ctx->pc = 0x2DDD00u;
    SET_GPR_U32(ctx, 31, 0x2DDD08u);
    ctx->pc = 0x2DDD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDD00u;
    // 0x2ddd04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2520u, 0x2DDD00u, 0x2DDD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD08u;
label_2ddd08:
    // 0x2ddd08: 0xc0b4004  jal         func_2D0010
    ctx->pc = 0x2DDD08u;
    SET_GPR_U32(ctx, 31, 0x2DDD10u);
    ctx->pc = 0x2D0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0010u, 0x2DDD08u, 0x2DDD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD10u;
label_2ddd10:
    // 0x2ddd10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ddd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddd14: 0xc0b4bc0  jal         func_2D2F00
    ctx->pc = 0x2DDD14u;
    SET_GPR_U32(ctx, 31, 0x2DDD1Cu);
    ctx->pc = 0x2DDD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDD14u;
    // 0x2ddd18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2F00u, 0x2DDD14u, 0x2DDD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD1Cu;
label_2ddd1c:
    // 0x2ddd1c: 0x3c06002e  lui         $a2, 0x2E
    ctx->pc = 0x2ddd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)46 << 16));
    // 0x2ddd20: 0x3c0701ff  lui         $a3, 0x1FF
    ctx->pc = 0x2ddd20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)511 << 16));
    // 0x2ddd24: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2ddd24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2ddd28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ddd28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddd2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ddd2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddd30: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x2ddd30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddd34: 0x24c6dd60  addiu       $a2, $a2, -0x22A0
    ctx->pc = 0x2ddd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958432));
    // 0x2ddd38: 0x24e73d80  addiu       $a3, $a3, 0x3D80
    ctx->pc = 0x2ddd38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15744));
    // 0x2ddd3c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2ddd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ddd40: 0xc0b4bde  jal         func_2D2F78
    ctx->pc = 0x2DDD40u;
    SET_GPR_U32(ctx, 31, 0x2DDD48u);
    ctx->pc = 0x2DDD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDD40u;
    // 0x2ddd44: 0x34a50704  ori         $a1, $a1, 0x704 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1796);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2F78u, 0x2DDD40u, 0x2DDD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD48u;
label_2ddd48:
    // 0x2ddd48: 0xc0b4cd0  jal         func_2D3340
    ctx->pc = 0x2DDD48u;
    SET_GPR_U32(ctx, 31, 0x2DDD50u);
    ctx->pc = 0x2DDD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDD48u;
    // 0x2ddd4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3340u, 0x2DDD48u, 0x2DDD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD50u;
label_2ddd50:
    // 0x2ddd50: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ddd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ddd54: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD54u;
        // 0x2ddd58: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDD5Cu;
}
