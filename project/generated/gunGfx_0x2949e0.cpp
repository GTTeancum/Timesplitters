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

// Function: gunGfx
// Address: 0x2949e0 - 0x294abc
void gunGfx_0x2949e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunGfx_0x2949e0");
#endif

    switch (ctx->pc) {
        case 0x294a18u: goto label_294a18;
        case 0x294a20u: goto label_294a20;
        case 0x294a2cu: goto label_294a2c;
        case 0x294a44u: goto label_294a44;
        case 0x294a4cu: goto label_294a4c;
        case 0x294a60u: goto label_294a60;
        case 0x294a68u: goto label_294a68;
        case 0x294a70u: goto label_294a70;
        case 0x294a78u: goto label_294a78;
        case 0x294a8cu: goto label_294a8c;
        case 0x294a94u: goto label_294a94;
        default: break;
    }

    ctx->pc = 0x2949e0u;

    // 0x2949e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2949e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2949e4: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2949e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2949e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2949e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2949ec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2949ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2949f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2949f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2949f4: 0x3c014158  lui         $at, 0x4158
    ctx->pc = 0x2949f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16728 << 16));
    // 0x2949f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2949f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2949fc: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x2949fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294a00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x294a00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x294a04: 0x0  nop
    ctx->pc = 0x294a04u;
    // NOP
    // 0x294a08: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x294A08u;
    {
        const bool branch_taken_0x294a08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x294A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A08u;
        // 0x294a0c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294a08) {
            ctx->pc = 0x294AACu;
            goto label_294aac;
        }
    }
    ctx->pc = 0x294A10u;
    // 0x294a10: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x294A10u;
    SET_GPR_U32(ctx, 31, 0x294A18u);
    ctx->pc = 0x294A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294A10u;
    // 0x294a14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x294A10u, 0x294A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294A18u;
label_294a18:
    // 0x294a18: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x294A18u;
    SET_GPR_U32(ctx, 31, 0x294A20u);
    ctx->pc = 0x294A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294A18u;
    // 0x294a1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x294A18u, 0x294A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294A20u;
label_294a20:
    // 0x294a20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x294a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294a24: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x294A24u;
    SET_GPR_U32(ctx, 31, 0x294A2Cu);
    ctx->pc = 0x294A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294A24u;
    // 0x294a28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x294A24u, 0x294A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294A2Cu;
label_294a2c:
    // 0x294a2c: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x294a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x294a30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x294a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294a34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x294a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294a38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x294a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x294a3c: 0xc09bf82  jal         func_26FE08
    ctx->pc = 0x294A3Cu;
    SET_GPR_U32(ctx, 31, 0x294A44u);
    ctx->pc = 0x294A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294A3Cu;
    // 0x294a40: 0x248400c9  addiu       $a0, $a0, 0xC9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 201));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FE08u, 0x294A3Cu, 0x294A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294A44u;
label_294a44:
    // 0x294a44: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x294A44u;
    SET_GPR_U32(ctx, 31, 0x294A4Cu);
    ctx->pc = 0x294A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294A44u;
    // 0x294a48: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x294A44u, 0x294A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294A4Cu;
label_294a4c:
    // 0x294a4c: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x294a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x294a50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x294a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294a54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x294a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x294a58: 0xc09bf82  jal         func_26FE08
    ctx->pc = 0x294A58u;
    SET_GPR_U32(ctx, 31, 0x294A60u);
    ctx->pc = 0x294A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294A58u;
    // 0x294a5c: 0x248400c9  addiu       $a0, $a0, 0xC9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 201));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FE08u, 0x294A58u, 0x294A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294A60u;
label_294a60:
    // 0x294a60: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x294A60u;
    SET_GPR_U32(ctx, 31, 0x294A68u);
    ctx->pc = 0x294A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294A60u;
    // 0x294a64: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x294A60u, 0x294A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294A68u;
label_294a68:
    // 0x294a68: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x294A68u;
    SET_GPR_U32(ctx, 31, 0x294A70u);
    ctx->pc = 0x294A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294A68u;
    // 0x294a6c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x294A68u, 0x294A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294A70u;
label_294a70:
    // 0x294a70: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x294A70u;
    SET_GPR_U32(ctx, 31, 0x294A78u);
    ctx->pc = 0x294A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294A70u;
    // 0x294a74: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x294A70u, 0x294A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294A78u;
label_294a78:
    // 0x294a78: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x294a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x294a7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x294a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294a80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x294a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x294a84: 0xc09bf82  jal         func_26FE08
    ctx->pc = 0x294A84u;
    SET_GPR_U32(ctx, 31, 0x294A8Cu);
    ctx->pc = 0x294A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294A84u;
    // 0x294a88: 0x248400c9  addiu       $a0, $a0, 0xC9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 201));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FE08u, 0x294A84u, 0x294A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294A8Cu;
label_294a8c:
    // 0x294a8c: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x294A8Cu;
    SET_GPR_U32(ctx, 31, 0x294A94u);
    ctx->pc = 0x294A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294A8Cu;
    // 0x294a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x294A8Cu, 0x294A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294A94u;
label_294a94:
    // 0x294a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294a98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x294a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294a9c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x294a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294aa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294aa4: 0x80adf7c  j           func_2B7DF0
    ctx->pc = 0x294AA4u;
    ctx->pc = 0x294AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294AA4u;
    // 0x294aa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    dlSetDitherMatrix_0x2b7df0(rdram, ctx, runtime); return;
    ctx->pc = 0x294AACu;
label_294aac:
    // 0x294aac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x294aacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294ab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294ab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x294AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294AB4u;
        // 0x294ab8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294ABCu;
}
