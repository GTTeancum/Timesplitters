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

// Function: asinf
// Address: 0x2d7c68 - 0x2d7d64
void asinf_0x2d7c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("asinf_0x2d7c68");
#endif

    switch (ctx->pc) {
        case 0x2d7c84u: goto label_2d7c84;
        case 0x2d7ca0u: goto label_2d7ca0;
        case 0x2d7cb0u: goto label_2d7cb0;
        case 0x2d7ce4u: goto label_2d7ce4;
        case 0x2d7d04u: goto label_2d7d04;
        case 0x2d7d14u: goto label_2d7d14;
        case 0x2d7d30u: goto label_2d7d30;
        case 0x2d7d40u: goto label_2d7d40;
        default: break;
    }

    ctx->pc = 0x2d7c68u;

    // 0x2d7c68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d7c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d7c6c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2d7c6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d7c70: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d7c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d7c74: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2d7c74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2d7c78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d7c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d7c7c: 0xc0b6712  jal         func_2D9C48
    ctx->pc = 0x2D7C7Cu;
    SET_GPR_U32(ctx, 31, 0x2D7C84u);
    ctx->pc = 0x2D7C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7C7Cu;
    // 0x2d7c80: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9C48u, 0x2D7C7Cu, 0x2D7C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7C84u;
label_2d7c84:
    // 0x2d7c84: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d7c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d7c88: 0x8c50b118  lw          $s0, -0x4EE8($v0)
    ctx->pc = 0x2d7c88u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3AB118u));
    // 0x2d7c8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d7c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d7c90: 0x1203002d  beq         $s0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2D7C90u;
    {
        const bool branch_taken_0x2d7c90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D7C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C90u;
        // 0x2d7c94: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c90) {
            ctx->pc = 0x2D7D48u;
            goto label_2d7d48;
        }
    }
    ctx->pc = 0x2D7C98u;
    // 0x2d7c98: 0xc0b717a  jal         func_2DC5E8
    ctx->pc = 0x2D7C98u;
    SET_GPR_U32(ctx, 31, 0x2D7CA0u);
    ctx->pc = 0x2D7C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7C98u;
    // 0x2d7c9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5E8u, 0x2D7C98u, 0x2D7CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7CA0u;
label_2d7ca0:
    // 0x2d7ca0: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D7CA0u;
    {
        const bool branch_taken_0x2d7ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7CA0u;
        // 0x2d7ca4: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ca0) {
            ctx->pc = 0x2D7D4Cu;
            goto label_2d7d4c;
        }
    }
    ctx->pc = 0x2D7CA8u;
    // 0x2d7ca8: 0xc0b7168  jal         func_2DC5A0
    ctx->pc = 0x2D7CA8u;
    SET_GPR_U32(ctx, 31, 0x2D7CB0u);
    ctx->pc = 0x2D7CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7CA8u;
    // 0x2d7cac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5A0u, 0x2D7CA8u, 0x2D7CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7CB0u;
label_2d7cb0:
    // 0x2d7cb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d7cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d7cb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d7cb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7cb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d7cb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7cbc: 0x0  nop
    ctx->pc = 0x2d7cbcu;
    // NOP
    // 0x2d7cc0: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x2D7CC0u;
    {
        const bool branch_taken_0x2d7cc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D7CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7CC0u;
        // 0x2d7cc4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7cc0) {
            ctx->pc = 0x2D7D48u;
            goto label_2d7d48;
        }
    }
    ctx->pc = 0x2D7CC8u;
    // 0x2d7cc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d7cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7ccc: 0x2442a890  addiu       $v0, $v0, -0x5770
    ctx->pc = 0x2d7cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944912));
    // 0x2d7cd0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2d7cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2d7cd4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d7cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d7cd8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d7cd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d7cdc: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D7CDCu;
    SET_GPR_U32(ctx, 31, 0x2D7CE4u);
    ctx->pc = 0x2D7CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7CDCu;
    // 0x2d7ce0: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D7CDCu, 0x2D7CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7CE4u;
label_2d7ce4:
    // 0x2d7ce4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d7ce4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ce8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2d7ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2d7cec: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2d7cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x2d7cf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d7cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d7cf4: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7CF4u;
    {
        const bool branch_taken_0x2d7cf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D7CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7CF4u;
        // 0x2d7cf8: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7cf4) {
            ctx->pc = 0x2D7D0Cu;
            goto label_2d7d0c;
        }
    }
    ctx->pc = 0x2D7CFCu;
    // 0x2d7cfc: 0xc0b6fc6  jal         func_2DBF18
    ctx->pc = 0x2D7CFCu;
    SET_GPR_U32(ctx, 31, 0x2D7D04u);
    ctx->pc = 0x2D7D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7CFCu;
    // 0x2d7d00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF18u, 0x2D7CFCu, 0x2D7D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D04u;
label_2d7d04:
    // 0x2d7d04: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D7D04u;
    {
        const bool branch_taken_0x2d7d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D04u;
        // 0x2d7d08: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7d04) {
            ctx->pc = 0x2D7D20u;
            goto label_2d7d20;
        }
    }
    ctx->pc = 0x2D7D0Cu;
label_2d7d0c:
    // 0x2d7d0c: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D7D0Cu;
    SET_GPR_U32(ctx, 31, 0x2D7D14u);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D7D0Cu, 0x2D7D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D14u;
label_2d7d14:
    // 0x2d7d14: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x2d7d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2d7d18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d7d18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d7d1c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d7d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2d7d20:
    // 0x2d7d20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7D20u;
    {
        const bool branch_taken_0x2d7d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7d20) {
            ctx->pc = 0x2D7D38u;
            goto label_2d7d38;
        }
    }
    ctx->pc = 0x2D7D28u;
    // 0x2d7d28: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D7D28u;
    SET_GPR_U32(ctx, 31, 0x2D7D30u);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D7D28u, 0x2D7D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D30u;
label_2d7d30:
    // 0x2d7d30: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2d7d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7d34: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d7d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2d7d38:
    // 0x2d7d38: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2D7D38u;
    SET_GPR_U32(ctx, 31, 0x2D7D40u);
    ctx->pc = 0x2D7D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7D38u;
    // 0x2d7d3c: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2D7D38u, 0x2D7D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D40u;
label_2d7d40:
    // 0x2d7d40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7D40u;
    {
        const bool branch_taken_0x2d7d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D40u;
        // 0x2d7d44: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7d40) {
            ctx->pc = 0x2D7D50u;
            goto label_2d7d50;
        }
    }
    ctx->pc = 0x2D7D48u;
label_2d7d48:
    // 0x2d7d48: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x2d7d48u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_2d7d4c:
    // 0x2d7d4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d7d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d7d50:
    // 0x2d7d50: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d7d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7d54: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2d7d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d7d58: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2d7d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d7d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D5Cu;
        // 0x2d7d60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7D64u;
}
