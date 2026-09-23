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

// Function: acosf
// Address: 0x2d7b68 - 0x2d7c64
void acosf_0x2d7b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("acosf_0x2d7b68");
#endif

    switch (ctx->pc) {
        case 0x2d7b84u: goto label_2d7b84;
        case 0x2d7ba0u: goto label_2d7ba0;
        case 0x2d7bb0u: goto label_2d7bb0;
        case 0x2d7be4u: goto label_2d7be4;
        case 0x2d7c04u: goto label_2d7c04;
        case 0x2d7c14u: goto label_2d7c14;
        case 0x2d7c30u: goto label_2d7c30;
        case 0x2d7c40u: goto label_2d7c40;
        default: break;
    }

    ctx->pc = 0x2d7b68u;

    // 0x2d7b68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d7b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d7b6c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2d7b6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d7b70: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d7b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d7b74: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2d7b74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2d7b78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d7b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d7b7c: 0xc0b6606  jal         func_2D9818
    ctx->pc = 0x2D7B7Cu;
    SET_GPR_U32(ctx, 31, 0x2D7B84u);
    ctx->pc = 0x2D7B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7B7Cu;
    // 0x2d7b80: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9818u, 0x2D7B7Cu, 0x2D7B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7B84u;
label_2d7b84:
    // 0x2d7b84: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d7b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d7b88: 0x8c50b118  lw          $s0, -0x4EE8($v0)
    ctx->pc = 0x2d7b88u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3AB118u));
    // 0x2d7b8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d7b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d7b90: 0x1203002d  beq         $s0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2D7B90u;
    {
        const bool branch_taken_0x2d7b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D7B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B90u;
        // 0x2d7b94: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b90) {
            ctx->pc = 0x2D7C48u;
            goto label_2d7c48;
        }
    }
    ctx->pc = 0x2D7B98u;
    // 0x2d7b98: 0xc0b717a  jal         func_2DC5E8
    ctx->pc = 0x2D7B98u;
    SET_GPR_U32(ctx, 31, 0x2D7BA0u);
    ctx->pc = 0x2D7B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7B98u;
    // 0x2d7b9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5E8u, 0x2D7B98u, 0x2D7BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7BA0u;
label_2d7ba0:
    // 0x2d7ba0: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D7BA0u;
    {
        const bool branch_taken_0x2d7ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7BA0u;
        // 0x2d7ba4: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ba0) {
            ctx->pc = 0x2D7C4Cu;
            goto label_2d7c4c;
        }
    }
    ctx->pc = 0x2D7BA8u;
    // 0x2d7ba8: 0xc0b7168  jal         func_2DC5A0
    ctx->pc = 0x2D7BA8u;
    SET_GPR_U32(ctx, 31, 0x2D7BB0u);
    ctx->pc = 0x2D7BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7BA8u;
    // 0x2d7bac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5A0u, 0x2D7BA8u, 0x2D7BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7BB0u;
label_2d7bb0:
    // 0x2d7bb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d7bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d7bb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d7bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7bb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d7bb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7bbc: 0x0  nop
    ctx->pc = 0x2d7bbcu;
    // NOP
    // 0x2d7bc0: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x2D7BC0u;
    {
        const bool branch_taken_0x2d7bc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D7BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7BC0u;
        // 0x2d7bc4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7bc0) {
            ctx->pc = 0x2D7C48u;
            goto label_2d7c48;
        }
    }
    ctx->pc = 0x2D7BC8u;
    // 0x2d7bc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d7bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7bcc: 0x2442a888  addiu       $v0, $v0, -0x5778
    ctx->pc = 0x2d7bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944904));
    // 0x2d7bd0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2d7bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2d7bd4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d7bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d7bd8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d7bd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d7bdc: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D7BDCu;
    SET_GPR_U32(ctx, 31, 0x2D7BE4u);
    ctx->pc = 0x2D7BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7BDCu;
    // 0x2d7be0: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D7BDCu, 0x2D7BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7BE4u;
label_2d7be4:
    // 0x2d7be4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d7be4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7be8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2d7be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2d7bec: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2d7becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x2d7bf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d7bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d7bf4: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7BF4u;
    {
        const bool branch_taken_0x2d7bf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D7BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7BF4u;
        // 0x2d7bf8: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7bf4) {
            ctx->pc = 0x2D7C0Cu;
            goto label_2d7c0c;
        }
    }
    ctx->pc = 0x2D7BFCu;
    // 0x2d7bfc: 0xc0b6fc6  jal         func_2DBF18
    ctx->pc = 0x2D7BFCu;
    SET_GPR_U32(ctx, 31, 0x2D7C04u);
    ctx->pc = 0x2D7C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7BFCu;
    // 0x2d7c00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF18u, 0x2D7BFCu, 0x2D7C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7C04u;
label_2d7c04:
    // 0x2d7c04: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D7C04u;
    {
        const bool branch_taken_0x2d7c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C04u;
        // 0x2d7c08: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c04) {
            ctx->pc = 0x2D7C20u;
            goto label_2d7c20;
        }
    }
    ctx->pc = 0x2D7C0Cu;
label_2d7c0c:
    // 0x2d7c0c: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D7C0Cu;
    SET_GPR_U32(ctx, 31, 0x2D7C14u);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D7C0Cu, 0x2D7C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7C14u;
label_2d7c14:
    // 0x2d7c14: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x2d7c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2d7c18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d7c18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d7c1c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2d7c20:
    // 0x2d7c20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7C20u;
    {
        const bool branch_taken_0x2d7c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7c20) {
            ctx->pc = 0x2D7C38u;
            goto label_2d7c38;
        }
    }
    ctx->pc = 0x2D7C28u;
    // 0x2d7c28: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D7C28u;
    SET_GPR_U32(ctx, 31, 0x2D7C30u);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D7C28u, 0x2D7C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7C30u;
label_2d7c30:
    // 0x2d7c30: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2d7c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7c34: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d7c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2d7c38:
    // 0x2d7c38: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2D7C38u;
    SET_GPR_U32(ctx, 31, 0x2D7C40u);
    ctx->pc = 0x2D7C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7C38u;
    // 0x2d7c3c: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2D7C38u, 0x2D7C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7C40u;
label_2d7c40:
    // 0x2d7c40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7C40u;
    {
        const bool branch_taken_0x2d7c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C40u;
        // 0x2d7c44: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c40) {
            ctx->pc = 0x2D7C50u;
            goto label_2d7c50;
        }
    }
    ctx->pc = 0x2D7C48u;
label_2d7c48:
    // 0x2d7c48: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x2d7c48u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_2d7c4c:
    // 0x2d7c4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d7c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d7c50:
    // 0x2d7c50: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d7c50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7c54: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2d7c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d7c58: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2d7c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d7c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C5Cu;
        // 0x2d7c60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7C64u;
}
