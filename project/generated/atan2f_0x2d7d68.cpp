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

// Function: atan2f
// Address: 0x2d7d68 - 0x2d7e90
void atan2f_0x2d7d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("atan2f_0x2d7d68");
#endif

    switch (ctx->pc) {
        case 0x2d7d8cu: goto label_2d7d8c;
        case 0x2d7da8u: goto label_2d7da8;
        case 0x2d7db8u: goto label_2d7db8;
        case 0x2d7decu: goto label_2d7dec;
        case 0x2d7df8u: goto label_2d7df8;
        case 0x2d7e2cu: goto label_2d7e2c;
        case 0x2d7e3cu: goto label_2d7e3c;
        case 0x2d7e58u: goto label_2d7e58;
        case 0x2d7e68u: goto label_2d7e68;
        default: break;
    }

    ctx->pc = 0x2d7d68u;

    // 0x2d7d68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d7d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d7d6c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2d7d6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2d7d70: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2d7d70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d7d74: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2d7d74u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2d7d78: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d7d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d7d7c: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x2d7d7cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2d7d80: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d7d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d7d84: 0xc0b67fa  jal         func_2D9FE8
    ctx->pc = 0x2D7D84u;
    SET_GPR_U32(ctx, 31, 0x2D7D8Cu);
    ctx->pc = 0x2D7D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7D84u;
    // 0x2d7d88: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9FE8u, 0x2D7D84u, 0x2D7D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D8Cu;
label_2d7d8c:
    // 0x2d7d8c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d7d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d7d90: 0x8c50b118  lw          $s0, -0x4EE8($v0)
    ctx->pc = 0x2d7d90u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3AB118u));
    // 0x2d7d94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d7d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d7d98: 0x12030035  beq         $s0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2D7D98u;
    {
        const bool branch_taken_0x2d7d98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D7D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D98u;
        // 0x2d7d9c: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7d98) {
            ctx->pc = 0x2D7E70u;
            goto label_2d7e70;
        }
    }
    ctx->pc = 0x2D7DA0u;
    // 0x2d7da0: 0xc0b717a  jal         func_2DC5E8
    ctx->pc = 0x2D7DA0u;
    SET_GPR_U32(ctx, 31, 0x2D7DA8u);
    ctx->pc = 0x2D7DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7DA0u;
    // 0x2d7da4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5E8u, 0x2D7DA0u, 0x2D7DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7DA8u;
label_2d7da8:
    // 0x2d7da8: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D7DA8u;
    {
        const bool branch_taken_0x2d7da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7DA8u;
        // 0x2d7dac: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7da8) {
            ctx->pc = 0x2D7E74u;
            goto label_2d7e74;
        }
    }
    ctx->pc = 0x2D7DB0u;
    // 0x2d7db0: 0xc0b717a  jal         func_2DC5E8
    ctx->pc = 0x2D7DB0u;
    SET_GPR_U32(ctx, 31, 0x2D7DB8u);
    ctx->pc = 0x2D7DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7DB0u;
    // 0x2d7db4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5E8u, 0x2D7DB0u, 0x2D7DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7DB8u;
label_2d7db8:
    // 0x2d7db8: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2D7DB8u;
    {
        const bool branch_taken_0x2d7db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7DB8u;
        // 0x2d7dbc: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7db8) {
            ctx->pc = 0x2D7E74u;
            goto label_2d7e74;
        }
    }
    ctx->pc = 0x2D7DC0u;
    // 0x2d7dc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d7dc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7dc4: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x2d7dc4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7dc8: 0x0  nop
    ctx->pc = 0x2d7dc8u;
    // NOP
    // 0x2d7dcc: 0x45020029  bc1fl       . + 4 + (0x29 << 2)
    ctx->pc = 0x2D7DCCu;
    {
        const bool branch_taken_0x2d7dcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d7dcc) {
            ctx->pc = 0x2D7DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7DCCu;
            // 0x2d7dd0: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7E74u;
            goto label_2d7e74;
        }
    }
    ctx->pc = 0x2D7DD4u;
    // 0x2d7dd4: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2d7dd4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7dd8: 0x0  nop
    ctx->pc = 0x2d7dd8u;
    // NOP
    // 0x2d7ddc: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x2D7DDCu;
    {
        const bool branch_taken_0x2d7ddc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D7DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7DDCu;
        // 0x2d7de0: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ddc) {
            ctx->pc = 0x2D7E74u;
            goto label_2d7e74;
        }
    }
    ctx->pc = 0x2D7DE4u;
    // 0x2d7de4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D7DE4u;
    SET_GPR_U32(ctx, 31, 0x2D7DECu);
    ctx->pc = 0x2D7DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7DE4u;
    // 0x2d7de8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D7DE4u, 0x2D7DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7DECu;
label_2d7dec:
    // 0x2d7dec: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2d7decu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2d7df0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D7DF0u;
    SET_GPR_U32(ctx, 31, 0x2D7DF8u);
    ctx->pc = 0x2D7DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7DF0u;
    // 0x2d7df4: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D7DF0u, 0x2D7DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7DF8u;
label_2d7df8:
    // 0x2d7df8: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x2d7df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x2d7dfc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2d7dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2d7e00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d7e00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7e04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d7e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7e08: 0x2463a898  addiu       $v1, $v1, -0x5768
    ctx->pc = 0x2d7e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944920));
    // 0x2d7e0c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2d7e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x2d7e10: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d7e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d7e14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d7e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d7e18: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2d7e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2d7e1c: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7E1Cu;
    {
        const bool branch_taken_0x2d7e1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E1Cu;
        // 0x2d7e20: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7e1c) {
            ctx->pc = 0x2D7E34u;
            goto label_2d7e34;
        }
    }
    ctx->pc = 0x2D7E24u;
    // 0x2d7e24: 0xc0b6fc6  jal         func_2DBF18
    ctx->pc = 0x2D7E24u;
    SET_GPR_U32(ctx, 31, 0x2D7E2Cu);
    ctx->pc = 0x2D7E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7E24u;
    // 0x2d7e28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF18u, 0x2D7E24u, 0x2D7E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7E2Cu;
label_2d7e2c:
    // 0x2d7e2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D7E2Cu;
    {
        const bool branch_taken_0x2d7e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E2Cu;
        // 0x2d7e30: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7e2c) {
            ctx->pc = 0x2D7E48u;
            goto label_2d7e48;
        }
    }
    ctx->pc = 0x2D7E34u;
label_2d7e34:
    // 0x2d7e34: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D7E34u;
    SET_GPR_U32(ctx, 31, 0x2D7E3Cu);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D7E34u, 0x2D7E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7E3Cu;
label_2d7e3c:
    // 0x2d7e3c: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x2d7e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2d7e40: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d7e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d7e44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d7e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2d7e48:
    // 0x2d7e48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7E48u;
    {
        const bool branch_taken_0x2d7e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7e48) {
            ctx->pc = 0x2D7E60u;
            goto label_2d7e60;
        }
    }
    ctx->pc = 0x2D7E50u;
    // 0x2d7e50: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D7E50u;
    SET_GPR_U32(ctx, 31, 0x2D7E58u);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D7E50u, 0x2D7E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7E58u;
label_2d7e58:
    // 0x2d7e58: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2d7e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7e5c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d7e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2d7e60:
    // 0x2d7e60: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2D7E60u;
    SET_GPR_U32(ctx, 31, 0x2D7E68u);
    ctx->pc = 0x2D7E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7E60u;
    // 0x2d7e64: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2D7E60u, 0x2D7E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7E68u;
label_2d7e68:
    // 0x2d7e68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7E68u;
    {
        const bool branch_taken_0x2d7e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E68u;
        // 0x2d7e6c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7e68) {
            ctx->pc = 0x2D7E78u;
            goto label_2d7e78;
        }
    }
    ctx->pc = 0x2D7E70u;
label_2d7e70:
    // 0x2d7e70: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x2d7e70u;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
label_2d7e74:
    // 0x2d7e74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d7e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d7e78:
    // 0x2d7e78: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d7e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7e7c: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x2d7e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d7e80: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2d7e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d7e84: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2d7e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d7e88: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E88u;
        // 0x2d7e8c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7E90u;
}
