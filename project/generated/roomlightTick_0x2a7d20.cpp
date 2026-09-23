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

// Function: roomlightTick
// Address: 0x2a7d20 - 0x2a7fe8
void roomlightTick_0x2a7d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("roomlightTick_0x2a7d20");
#endif

    switch (ctx->pc) {
        case 0x2a7d60u: goto label_2a7d60;
        case 0x2a7e10u: goto label_2a7e10;
        case 0x2a7e80u: goto label_2a7e80;
        case 0x2a7fb0u: goto label_2a7fb0;
        default: break;
    }

    ctx->pc = 0x2a7d20u;

    // 0x2a7d20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a7d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a7d24: 0x8f82a264  lw          $v0, -0x5D9C($gp)
    ctx->pc = 0x2a7d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x2a7d28: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a7d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a7d2c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a7d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a7d30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a7d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7d34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a7d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a7d38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a7d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a7d3c: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x2a7d3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a7d40: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2a7d40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2a7d44: 0x1840009f  blez        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x2A7D44u;
    {
        const bool branch_taken_0x2a7d44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A7D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7D44u;
        // 0x2a7d48: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7d44) {
            ctx->pc = 0x2A7FC4u;
            goto label_2a7fc4;
        }
    }
    ctx->pc = 0x2A7D4Cu;
    // 0x2a7d4c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2a7d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2a7d50: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2a7d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2a7d54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a7d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a7d58: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2a7d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2a7d5c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2a7d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2a7d60:
    // 0x2a7d60: 0x8f86b32c  lw          $a2, -0x4CD4($gp)
    ctx->pc = 0x2a7d60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947628)));
    // 0x2a7d64: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x2a7d64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a7d68: 0x8f84a270  lw          $a0, -0x5D90($gp)
    ctx->pc = 0x2a7d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943344)));
    // 0x2a7d6c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2a7d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2a7d70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a7d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7d74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a7d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a7d78: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x2a7d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x2a7d7c: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x2a7d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a7d80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a7d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a7d84: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2A7D84u;
    {
        const bool branch_taken_0x2a7d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2A7D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7D84u;
        // 0x2a7d88: 0x8c520004  lw          $s2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7d84) {
            ctx->pc = 0x2A7DC0u;
            goto label_2a7dc0;
        }
    }
    ctx->pc = 0x2A7D8Cu;
    // 0x2a7d8c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2a7d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a7d90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A7D90u;
    {
        const bool branch_taken_0x2a7d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7D90u;
        // 0x2a7d94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7d90) {
            ctx->pc = 0x2A7DA8u;
            goto label_2a7da8;
        }
    }
    ctx->pc = 0x2A7D98u;
    // 0x2a7d98: 0x5060004e  beql        $v1, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x2A7D98u;
    {
        const bool branch_taken_0x2a7d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7d98) {
            ctx->pc = 0x2A7D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7D98u;
            // 0x2a7d9c: 0xc6140008  lwc1        $f20, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7ED4u;
            goto label_2a7ed4;
        }
    }
    ctx->pc = 0x2A7DA0u;
    // 0x2a7da0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2A7DA0u;
    {
        const bool branch_taken_0x2a7da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7da0) {
            ctx->pc = 0x2A7ECCu;
            goto label_2a7ecc;
        }
    }
    ctx->pc = 0x2A7DA8u;
label_2a7da8:
    // 0x2a7da8: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A7DA8u;
    {
        const bool branch_taken_0x2a7da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7DA8u;
        // 0x2a7dac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7da8) {
            ctx->pc = 0x2A7E1Cu;
            goto label_2a7e1c;
        }
    }
    ctx->pc = 0x2A7DB0u;
    // 0x2a7db0: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2A7DB0u;
    {
        const bool branch_taken_0x2a7db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7DB0u;
        // 0x2a7db4: 0x8f82b460  lw          $v0, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7db0) {
            ctx->pc = 0x2A7E70u;
            goto label_2a7e70;
        }
    }
    ctx->pc = 0x2A7DB8u;
    // 0x2a7db8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2A7DB8u;
    {
        const bool branch_taken_0x2a7db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7db8) {
            ctx->pc = 0x2A7ECCu;
            goto label_2a7ecc;
        }
    }
    ctx->pc = 0x2A7DC0u;
label_2a7dc0:
    // 0x2a7dc0: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x2a7dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7dc4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2a7dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7dc8: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2a7dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7dcc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a7dccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a7dd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a7dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7dd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a7dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a7dd8: 0x0  nop
    ctx->pc = 0x2a7dd8u;
    // NOP
    // 0x2a7ddc: 0x0  nop
    ctx->pc = 0x2a7ddcu;
    // NOP
    // 0x2a7de0: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x2a7de0u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x2a7de4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2a7de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2a7de8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a7de8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7dec: 0x0  nop
    ctx->pc = 0x2a7decu;
    // NOP
    // 0x2a7df0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7DF0u;
    {
        const bool branch_taken_0x2a7df0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7DF0u;
        // 0x2a7df4: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7df0) {
            ctx->pc = 0x2A7E00u;
            goto label_2a7e00;
        }
    }
    ctx->pc = 0x2A7DF8u;
    // 0x2a7df8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a7df8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a7dfc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2a7dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2a7e00:
    // 0x2a7e00: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x2a7e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a7e04: 0xc7808e34  lwc1        $f0, -0x71CC($gp)
    ctx->pc = 0x2a7e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7e08: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2A7E08u;
    SET_GPR_U32(ctx, 31, 0x2A7E10u);
    ctx->pc = 0x2A7E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7E08u;
    // 0x2a7e0c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2A7E08u, 0x2A7E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7E10u;
label_2a7e10:
    // 0x2a7e10: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2a7e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2a7e14: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2A7E14u;
    {
        const bool branch_taken_0x2a7e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E14u;
        // 0x2a7e18: 0x46150500  add.s       $f20, $f0, $f21 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e14) {
            ctx->pc = 0x2A7ED4u;
            goto label_2a7ed4;
        }
    }
    ctx->pc = 0x2A7E1Cu;
label_2a7e1c:
    // 0x2a7e1c: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x2a7e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7e20: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2a7e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7e24: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2a7e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7e28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a7e28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a7e2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a7e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7e30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a7e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a7e34: 0x0  nop
    ctx->pc = 0x2a7e34u;
    // NOP
    // 0x2a7e38: 0x0  nop
    ctx->pc = 0x2a7e38u;
    // NOP
    // 0x2a7e3c: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x2a7e3cu;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x2a7e40: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2a7e40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2a7e44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a7e44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7e48: 0x0  nop
    ctx->pc = 0x2a7e48u;
    // NOP
    // 0x2a7e4c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7E4Cu;
    {
        const bool branch_taken_0x2a7e4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E4Cu;
        // 0x2a7e50: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e4c) {
            ctx->pc = 0x2A7E5Cu;
            goto label_2a7e5c;
        }
    }
    ctx->pc = 0x2A7E54u;
    // 0x2a7e54: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a7e54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a7e58: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2a7e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2a7e5c:
    // 0x2a7e5c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2a7e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7e60: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2a7e60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a7e64: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x2a7e64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7e68: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2A7E68u;
    {
        const bool branch_taken_0x2a7e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7e68) {
            ctx->pc = 0x2A7EC4u;
            goto label_2a7ec4;
        }
    }
    ctx->pc = 0x2A7E70u;
label_2a7e70:
    // 0x2a7e70: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A7E70u;
    {
        const bool branch_taken_0x2a7e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7e70) {
            ctx->pc = 0x2A7E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7E70u;
            // 0x2a7e74: 0x8e080010  lw          $t0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7ED8u;
            goto label_2a7ed8;
        }
    }
    ctx->pc = 0x2A7E78u;
    // 0x2a7e78: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A7E78u;
    SET_GPR_U32(ctx, 31, 0x2A7E80u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A7E78u, 0x2A7E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7E80u;
label_2a7e80:
    // 0x2a7e80: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7E80u;
    {
        const bool branch_taken_0x2a7e80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A7E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E80u;
        // 0x2a7e84: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e80) {
            ctx->pc = 0x2A7E94u;
            goto label_2a7e94;
        }
    }
    ctx->pc = 0x2A7E88u;
    // 0x2a7e88: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2a7e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a7e8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A7E8Cu;
    {
        const bool branch_taken_0x2a7e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E8Cu;
        // 0x2a7e90: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e8c) {
            ctx->pc = 0x2A7EA8u;
            goto label_2a7ea8;
        }
    }
    ctx->pc = 0x2A7E94u;
label_2a7e94:
    // 0x2a7e94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a7e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a7e98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7e9c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2a7e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a7ea0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2a7ea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2a7ea4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2a7ea4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2a7ea8:
    // 0x2a7ea8: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2a7ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2a7eac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a7eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7eb0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2a7eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7eb4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2a7eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a7eb8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2a7eb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a7ebc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a7ebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7ec0: 0x0  nop
    ctx->pc = 0x2a7ec0u;
    // NOP
label_2a7ec4:
    // 0x2a7ec4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7EC4u;
    {
        const bool branch_taken_0x2a7ec4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7ec4) {
            ctx->pc = 0x2A7EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7EC4u;
            // 0x2a7ec8: 0x8e080010  lw          $t0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7ED8u;
            goto label_2a7ed8;
        }
    }
    ctx->pc = 0x2A7ECCu;
label_2a7ecc:
    // 0x2a7ecc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a7eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7ed0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a7ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2a7ed4:
    // 0x2a7ed4: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x2a7ed4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2a7ed8:
    // 0x2a7ed8: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x2a7ed8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x2a7edc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2a7edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2a7ee0: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x2a7ee0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x2a7ee4: 0x82602  srl         $a0, $t0, 24
    ctx->pc = 0x2a7ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x2a7ee8: 0x84c02  srl         $t1, $t0, 16
    ctx->pc = 0x2a7ee8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x2a7eec: 0x32c02  srl         $a1, $v1, 16
    ctx->pc = 0x2a7eecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x2a7ef0: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x2a7ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x2a7ef4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2a7ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a7ef8: 0x83202  srl         $a2, $t0, 8
    ctx->pc = 0x2a7ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x2a7efc: 0x33a02  srl         $a3, $v1, 8
    ctx->pc = 0x2a7efcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2a7f00: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x2a7f00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2a7f04: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2a7f04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a7f08: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2a7f08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2a7f0c: 0xa92823  subu        $a1, $a1, $t1
    ctx->pc = 0x2a7f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2a7f10: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2a7f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a7f14: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2a7f14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2a7f18: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x2a7f18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2a7f1c: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x2a7f1cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a7f20: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2a7f20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2a7f24: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x2a7f24u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2a7f28: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x2a7f28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2a7f2c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2a7f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a7f30: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a7f30u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7f34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a7f34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a7f38: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x2a7f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2a7f3c: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x2a7f3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2a7f40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a7f40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a7f44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a7f44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a7f48: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x2a7f48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x2a7f4c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2a7f4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a7f50: 0x46001124  .word       0x46001124                   # cvt.w.s     $f4, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a7f50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x2a7f54: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x2a7f54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2a7f58: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2a7f58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2a7f5c: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a7f5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2a7f60: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2a7f60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a7f64: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a7f64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2a7f68: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x2a7f68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2a7f6c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2a7f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a7f70: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a7f70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a7f74: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2a7f74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2a7f78: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x2a7f78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x2a7f7c: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x2a7f7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2a7f80: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2a7f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2a7f84: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x2a7f84u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x2a7f88: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x2a7f88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2a7f8c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x2a7f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2a7f90: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x2a7f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x2a7f94: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x2a7f94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x2a7f98: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x2a7f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x2a7f9c: 0x108a0004  beq         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7F9Cu;
    {
        const bool branch_taken_0x2a7f9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 10));
        ctx->pc = 0x2A7FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F9Cu;
        // 0x2a7fa0: 0xae040018  sw          $a0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f9c) {
            ctx->pc = 0x2A7FB0u;
            goto label_2a7fb0;
        }
    }
    ctx->pc = 0x2A7FA4u;
    // 0x2a7fa4: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x2a7fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2a7fa8: 0xc0a9eac  jal         func_2A7AB0
    ctx->pc = 0x2A7FA8u;
    SET_GPR_U32(ctx, 31, 0x2A7FB0u);
    ctx->pc = 0x2A7FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7FA8u;
    // 0x2a7fac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7AB0u, 0x2A7FA8u, 0x2A7FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7FB0u;
label_2a7fb0:
    // 0x2a7fb0: 0x8f82a264  lw          $v0, -0x5D9C($gp)
    ctx->pc = 0x2a7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x2a7fb4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a7fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a7fb8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2a7fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a7fbc: 0x1440ff68  bnez        $v0, . + 4 + (-0x98 << 2)
    ctx->pc = 0x2A7FBCu;
    {
        const bool branch_taken_0x2a7fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7FBCu;
        // 0x2a7fc0: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7fbc) {
            ctx->pc = 0x2A7D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7d60;
        }
    }
    ctx->pc = 0x2A7FC4u;
label_2a7fc4:
    // 0x2a7fc4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a7fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a7fc8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a7fc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a7fcc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a7fccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7fd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a7fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7fd4: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x2a7fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a7fd8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2a7fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a7fdc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2a7fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a7fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7FE0u;
        // 0x2a7fe4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7FE8u;
}
