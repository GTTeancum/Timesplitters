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

// Function: editRotate
// Address: 0x265dc0 - 0x265eac
void editRotate_0x265dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("editRotate_0x265dc0");
#endif

    switch (ctx->pc) {
        case 0x265decu: goto label_265dec;
        case 0x265dfcu: goto label_265dfc;
        case 0x265e18u: goto label_265e18;
        case 0x265e38u: goto label_265e38;
        default: break;
    }

    ctx->pc = 0x265dc0u;

    // 0x265dc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x265dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x265dc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x265dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x265dc8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x265dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x265dcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x265dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265dd0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x265dd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x265dd4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x265dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265dd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x265dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x265ddc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x265ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x265de0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x265de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x265de4: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x265DE4u;
    SET_GPR_U32(ctx, 31, 0x265DECu);
    ctx->pc = 0x265DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265DE4u;
    // 0x265de8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x265DE4u, 0x265DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265DECu;
label_265dec:
    // 0x265dec: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265DECu;
    {
        const bool branch_taken_0x265dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265dec) {
            ctx->pc = 0x265DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265DECu;
            // 0x265df0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265E08u;
            goto label_265e08;
        }
    }
    ctx->pc = 0x265DF4u;
    // 0x265df4: 0xc080e18  jal         func_203860
    ctx->pc = 0x265DF4u;
    SET_GPR_U32(ctx, 31, 0x265DFCu);
    ctx->pc = 0x265DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265DF4u;
    // 0x265df8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x265DF4u, 0x265DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265DFCu;
label_265dfc:
    // 0x265dfc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x265dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x265e00: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x265E00u;
    {
        const bool branch_taken_0x265e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265e00) {
            ctx->pc = 0x265E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265E00u;
            // 0x265e04: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265E08u;
            goto label_265e08;
        }
    }
    ctx->pc = 0x265E08u;
label_265e08:
    // 0x265e08: 0x52200012  beql        $s1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x265E08u;
    {
        const bool branch_taken_0x265e08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x265e08) {
            ctx->pc = 0x265E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265E08u;
            // 0x265e0c: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x265E54u;
            goto label_265e54;
        }
    }
    ctx->pc = 0x265E10u;
    // 0x265e10: 0xc080e18  jal         func_203860
    ctx->pc = 0x265E10u;
    SET_GPR_U32(ctx, 31, 0x265E18u);
    ctx->pc = 0x265E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265E10u;
    // 0x265e14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x265E10u, 0x265E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E18u;
label_265e18:
    // 0x265e18: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x265e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x265e1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x265E1Cu;
    {
        const bool branch_taken_0x265e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265e1c) {
            ctx->pc = 0x265E30u;
            goto label_265e30;
        }
    }
    ctx->pc = 0x265E24u;
    // 0x265e24: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x265e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265e28: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x265e28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x265e2c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x265e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_265e30:
    // 0x265e30: 0xc080e18  jal         func_203860
    ctx->pc = 0x265E30u;
    SET_GPR_U32(ctx, 31, 0x265E38u);
    ctx->pc = 0x265E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265E30u;
    // 0x265e34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x265E30u, 0x265E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E38u;
label_265e38:
    // 0x265e38: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x265e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x265e3c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x265E3Cu;
    {
        const bool branch_taken_0x265e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265e3c) {
            ctx->pc = 0x265E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265E3Cu;
            // 0x265e40: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x265E54u;
            goto label_265e54;
        }
    }
    ctx->pc = 0x265E44u;
    // 0x265e44: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x265e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265e48: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x265e48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x265e4c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x265e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x265e50: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x265e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265e54:
    // 0x265e54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x265e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x265e58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x265e58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x265e5c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x265E5Cu;
    {
        const bool branch_taken_0x265e5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x265e5c) {
            ctx->pc = 0x265E78u;
            goto label_265e78;
        }
    }
    ctx->pc = 0x265E64u;
    // 0x265e64: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x265e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x265e68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x265e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x265e6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x265e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x265e70: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x265e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x265e74: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x265e74u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_265e78:
    // 0x265e78: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x265e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x265e7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x265e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x265e80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x265e80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x265e84: 0x0  nop
    ctx->pc = 0x265e84u;
    // NOP
    // 0x265e88: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x265E88u;
    {
        const bool branch_taken_0x265e88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x265E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E88u;
        // 0x265e8c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e88) {
            ctx->pc = 0x265E98u;
            goto label_265e98;
        }
    }
    ctx->pc = 0x265E90u;
    // 0x265e90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265e90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x265e94: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x265e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_265e98:
    // 0x265e98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x265e98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265e9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x265e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265ea0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x265ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x265ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x265EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265EA4u;
        // 0x265ea8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265EACu;
}
