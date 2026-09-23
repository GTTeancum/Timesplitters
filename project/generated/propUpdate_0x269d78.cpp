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

// Function: propUpdate
// Address: 0x269d78 - 0x269ef4
void propUpdate_0x269d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propUpdate_0x269d78");
#endif

    switch (ctx->pc) {
        case 0x269dfcu: goto label_269dfc;
        case 0x269e54u: goto label_269e54;
        case 0x269e78u: goto label_269e78;
        case 0x269e80u: goto label_269e80;
        case 0x269e88u: goto label_269e88;
        case 0x269eacu: goto label_269eac;
        default: break;
    }

    ctx->pc = 0x269d78u;

    // 0x269d78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x269d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x269d7c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x269d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x269d80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x269d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x269d84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x269d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x269d88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x269d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269d8c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x269d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x269d90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x269d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x269d94: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x269D94u;
    {
        const bool branch_taken_0x269d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D94u;
        // 0x269d98: 0xc6050030  lwc1        $f5, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d94) {
            ctx->pc = 0x269E00u;
            goto label_269e00;
        }
    }
    ctx->pc = 0x269D9Cu;
    // 0x269d9c: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x269d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269da0: 0x46002832  c.eq.s      $f5, $f0
    ctx->pc = 0x269da0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269da4: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x269DA4u;
    {
        const bool branch_taken_0x269da4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x269da4) {
            ctx->pc = 0x269DF4u;
            goto label_269df4;
        }
    }
    ctx->pc = 0x269DACu;
    // 0x269dac: 0xc6040034  lwc1        $f4, 0x34($s0)
    ctx->pc = 0x269dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x269db0: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x269db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269db4: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x269db4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269db8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x269DB8u;
    {
        const bool branch_taken_0x269db8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x269db8) {
            ctx->pc = 0x269DF4u;
            goto label_269df4;
        }
    }
    ctx->pc = 0x269DC0u;
    // 0x269dc0: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x269dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x269dc4: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x269dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269dc8: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x269dc8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269dcc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x269DCCu;
    {
        const bool branch_taken_0x269dcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x269dcc) {
            ctx->pc = 0x269DF4u;
            goto label_269df4;
        }
    }
    ctx->pc = 0x269DD4u;
    // 0x269dd4: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x269dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269dd8: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x269dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269ddc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x269ddcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269de0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x269DE0u;
    {
        const bool branch_taken_0x269de0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x269de0) {
            ctx->pc = 0x269DF4u;
            goto label_269df4;
        }
    }
    ctx->pc = 0x269DE8u;
    // 0x269de8: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x269de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x269dec: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x269DECu;
    {
        const bool branch_taken_0x269dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269dec) {
            ctx->pc = 0x269DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269DECu;
            // 0x269df0: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269E0Cu;
            goto label_269e0c;
        }
    }
    ctx->pc = 0x269DF4u;
label_269df4:
    // 0x269df4: 0xc09a6cc  jal         func_269B30
    ctx->pc = 0x269DF4u;
    SET_GPR_U32(ctx, 31, 0x269DFCu);
    ctx->pc = 0x269DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269DF4u;
    // 0x269df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269B30u, 0x269DF4u, 0x269DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269DFCu;
label_269dfc:
    // 0x269dfc: 0xc6050030  lwc1        $f5, 0x30($s0)
    ctx->pc = 0x269dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_269e00:
    // 0x269e00: 0xc6040034  lwc1        $f4, 0x34($s0)
    ctx->pc = 0x269e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x269e04: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x269e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x269e08: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x269e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_269e0c:
    // 0x269e0c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x269e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x269e10: 0x5462002a  bnel        $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x269E10u;
    {
        const bool branch_taken_0x269e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x269e10) {
            ctx->pc = 0x269E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269E10u;
            // 0x269e14: 0xc6000048  lwc1        $f0, 0x48($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x269EBCu;
            goto label_269ebc;
        }
    }
    ctx->pc = 0x269E18u;
    // 0x269e18: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x269e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269e1c: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x269e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269e20: 0xc6020078  lwc1        $f2, 0x78($s0)
    ctx->pc = 0x269e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269e24: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x269e24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x269e28: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x269e28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x269e2c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x269e2cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x269e30: 0x46000302  mul.s       $f12, $f0, $f0
    ctx->pc = 0x269e30u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x269e34: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x269e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x269e38: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x269e38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x269e3c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x269e3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x269e40: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x269e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x269e44: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x269e44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x269e48: 0x46036300  add.s       $f12, $f12, $f3
    ctx->pc = 0x269e48u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
    // 0x269e4c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x269E4Cu;
    SET_GPR_U32(ctx, 31, 0x269E54u);
    ctx->pc = 0x269E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269E4Cu;
    // 0x269e50: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x269E4Cu, 0x269E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269E54u;
label_269e54:
    // 0x269e54: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x269e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269e58: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x269e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269e5c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x269e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x269e60: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x269e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x269e64: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x269e64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x269e68: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x269e68u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x269e6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x269e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x269e70: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x269E70u;
    SET_GPR_U32(ctx, 31, 0x269E78u);
    ctx->pc = 0x269E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269E70u;
    // 0x269e74: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x269E70u, 0x269E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269E78u;
label_269e78:
    // 0x269e78: 0xc0b5e96  jal         func_2D7A58
    ctx->pc = 0x269E78u;
    SET_GPR_U32(ctx, 31, 0x269E80u);
    ctx->pc = 0x269E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269E78u;
    // 0x269e7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7A58u, 0x269E78u, 0x269E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269E80u;
label_269e80:
    // 0x269e80: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x269E80u;
    SET_GPR_U32(ctx, 31, 0x269E88u);
    ctx->pc = 0x269E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269E80u;
    // 0x269e84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x269E80u, 0x269E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269E88u;
label_269e88:
    // 0x269e88: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x269e88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x269e8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x269e8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269e90: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x269e90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269e94: 0x0  nop
    ctx->pc = 0x269e94u;
    // NOP
    // 0x269e98: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x269E98u;
    {
        const bool branch_taken_0x269e98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E98u;
        // 0x269e9c: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e98) {
            ctx->pc = 0x269EACu;
            goto label_269eac;
        }
    }
    ctx->pc = 0x269EA0u;
    // 0x269ea0: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x269ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x269ea4: 0xc088f98  jal         func_223E60
    ctx->pc = 0x269EA4u;
    SET_GPR_U32(ctx, 31, 0x269EACu);
    ctx->pc = 0x269EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269EA4u;
    // 0x269ea8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x269EA4u, 0x269EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269EACu;
label_269eac:
    // 0x269eac: 0xc6050030  lwc1        $f5, 0x30($s0)
    ctx->pc = 0x269eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x269eb0: 0xc6040034  lwc1        $f4, 0x34($s0)
    ctx->pc = 0x269eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x269eb4: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x269eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x269eb8: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x269eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_269ebc:
    // 0x269ebc: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x269ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269ec0: 0xc6020058  lwc1        $f2, 0x58($s0)
    ctx->pc = 0x269ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269ec4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x269ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x269ec8: 0xe6050070  swc1        $f5, 0x70($s0)
    ctx->pc = 0x269ec8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x269ecc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x269eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x269ed0: 0xe6040074  swc1        $f4, 0x74($s0)
    ctx->pc = 0x269ed0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x269ed4: 0xe6030078  swc1        $f3, 0x78($s0)
    ctx->pc = 0x269ed4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x269ed8: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x269ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x269edc: 0xe6010080  swc1        $f1, 0x80($s0)
    ctx->pc = 0x269edcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x269ee0: 0xe6020084  swc1        $f2, 0x84($s0)
    ctx->pc = 0x269ee0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x269ee4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x269ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269ee8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x269ee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269eec: 0x3e00008  jr          $ra
    ctx->pc = 0x269EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269EECu;
        // 0x269ef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269EF4u;
}
