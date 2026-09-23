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

// Function: particleGetClosestExplosion
// Address: 0x2a1e98 - 0x2a2484
void particleGetClosestExplosion_0x2a1e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleGetClosestExplosion_0x2a1e98");
#endif

    switch (ctx->pc) {
        case 0x2a1f18u: goto label_2a1f18;
        case 0x2a2000u: goto label_2a2000;
        case 0x2a207cu: goto label_2a207c;
        case 0x2a2100u: goto label_2a2100;
        case 0x2a217cu: goto label_2a217c;
        default: break;
    }

    ctx->pc = 0x2a1e98u;

    // 0x2a1e98: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2a1e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2a1e9c: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2a1e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2a1ea0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a1ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a1ea4: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x2a1ea4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    // 0x2a1ea8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2a1ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2a1eac: 0xc68cfae4  lwc1        $f12, -0x51C($s4)
    ctx->pc = 0x2a1eacu;
    { uint32_t bits = FAST_READ32(0x3AFAE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a1eb0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2a1eb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1eb4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a1eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a1eb8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a1eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a1ebc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a1ebcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ec0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a1ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a1ec4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a1ec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ec8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a1ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a1ecc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a1eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ed0: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2a1ed0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2a1ed4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a1ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ed8: 0x8c4299f0  lw          $v0, -0x6610($v0)
    ctx->pc = 0x2a1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FE99F0u));
    // 0x2a1edc: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2a1edcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2a1ee0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a1ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a1ee4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2a1ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2a1ee8: 0xe7ba00b0  swc1        $f26, 0xB0($sp)
    ctx->pc = 0x2a1ee8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2a1eec: 0xe7b900a8  swc1        $f25, 0xA8($sp)
    ctx->pc = 0x2a1eecu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2a1ef0: 0xe7b800a0  swc1        $f24, 0xA0($sp)
    ctx->pc = 0x2a1ef0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2a1ef4: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x2a1ef4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2a1ef8: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x2a1ef8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a1efc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2A1EFCu;
    {
        const bool branch_taken_0x2a1efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1EFCu;
        // 0x2a1f00: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1efc) {
            ctx->pc = 0x2A1F94u;
            goto label_2a1f94;
        }
    }
    ctx->pc = 0x2A1F04u;
    // 0x2a1f04: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x2a1f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a1f08: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x2a1f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a1f0c: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2a1f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a1f10: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x2a1f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1f14: 0x0  nop
    ctx->pc = 0x2a1f14u;
    // NOP
label_2a1f18:
    // 0x2a1f18: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x2a1f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a1f1c: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x2a1f1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2a1f20: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2a1f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1f24: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x2a1f24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2a1f28: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x2a1f28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2a1f2c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2a1f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2a1f30: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2a1f30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2a1f34: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2a1f34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2a1f38: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a1f38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a1f3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a1f3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a1f40: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2a1f40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1f44: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2A1F44u;
    {
        const bool branch_taken_0x2a1f44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a1f44) {
            ctx->pc = 0x2A1F70u;
            goto label_2a1f70;
        }
    }
    ctx->pc = 0x2A1F4Cu;
    // 0x2a1f4c: 0x46156034  c.lt.s      $f12, $f21
    ctx->pc = 0x2a1f4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1f50: 0x0  nop
    ctx->pc = 0x2a1f50u;
    // NOP
    // 0x2a1f54: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1F54u;
    {
        const bool branch_taken_0x2a1f54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a1f54) {
            ctx->pc = 0x2A1F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1F54u;
            // 0x2a1f58: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1F68u;
            goto label_2a1f68;
        }
    }
    ctx->pc = 0x2A1F5Cu;
    // 0x2a1f5c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2a1f5cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2a1f60: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2a1f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1f64: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a1f64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2a1f68:
    // 0x2a1f68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A1F68u;
    {
        const bool branch_taken_0x2a1f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F68u;
        // 0x2a1f6c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1f68) {
            ctx->pc = 0x2A1F88u;
            goto label_2a1f88;
        }
    }
    ctx->pc = 0x2A1F70u;
label_2a1f70:
    // 0x2a1f70: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2a1f70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1f74: 0x0  nop
    ctx->pc = 0x2a1f74u;
    // NOP
    // 0x2a1f78: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1F78u;
    {
        const bool branch_taken_0x2a1f78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a1f78) {
            ctx->pc = 0x2A1F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1F78u;
            // 0x2a1f7c: 0x8c420044  lw          $v0, 0x44($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1F8Cu;
            goto label_2a1f8c;
        }
    }
    ctx->pc = 0x2A1F80u;
    // 0x2a1f80: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2a1f80u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2a1f84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a1f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1f88:
    // 0x2a1f88: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2a1f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2a1f8c:
    // 0x2a1f8c: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2A1F8Cu;
    {
        const bool branch_taken_0x2a1f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1f8c) {
            ctx->pc = 0x2A1F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1F8Cu;
            // 0x2a1f90: 0xc440001c  lwc1        $f0, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1f18;
        }
    }
    ctx->pc = 0x2A1F94u;
label_2a1f94:
    // 0x2a1f94: 0xc680fae4  lwc1        $f0, -0x51C($s4)
    ctx->pc = 0x2a1f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294965988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1f98: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2a1f98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1f9c: 0x0  nop
    ctx->pc = 0x2a1f9cu;
    // NOP
    // 0x2a1fa0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1FA0u;
    {
        const bool branch_taken_0x2a1fa0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1FA0u;
        // 0x2a1fa4: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1fa0) {
            ctx->pc = 0x2A1FB8u;
            goto label_2a1fb8;
        }
    }
    ctx->pc = 0x2A1FA8u;
    // 0x2a1fa8: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2a1fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1fac: 0x0  nop
    ctx->pc = 0x2a1facu;
    // NOP
    // 0x2a1fb0: 0x45020123  bc1fl       . + 4 + (0x123 << 2)
    ctx->pc = 0x2A1FB0u;
    {
        const bool branch_taken_0x2a1fb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a1fb0) {
            ctx->pc = 0x2A1FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1FB0u;
            // 0x2a1fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2440u;
            goto label_2a2440;
        }
    }
    ctx->pc = 0x2A1FB8u;
label_2a1fb8:
    // 0x2a1fb8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2a1fb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a1fbc: 0x46176034  c.lt.s      $f12, $f23
    ctx->pc = 0x2a1fbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1fc0: 0x4600be86  mov.s       $f26, $f23
    ctx->pc = 0x2a1fc0u;
    ctx->f[26] = FPU_MOV_S(ctx->f[23]);
    // 0x2a1fc4: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x2a1fc4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
    // 0x2a1fc8: 0x4600be46  mov.s       $f25, $f23
    ctx->pc = 0x2a1fc8u;
    ctx->f[25] = FPU_MOV_S(ctx->f[23]);
    // 0x2a1fcc: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
    ctx->pc = 0x2A1FCCu;
    {
        const bool branch_taken_0x2a1fcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1FCCu;
        // 0x2a1fd0: 0x4600be06  mov.s       $f24, $f23 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1fcc) {
            ctx->pc = 0x2A20C8u;
            goto label_2a20c8;
        }
    }
    ctx->pc = 0x2A1FD4u;
    // 0x2a1fd4: 0x0  nop
    ctx->pc = 0x2a1fd4u;
    // NOP
    // 0x2a1fd8: 0x0  nop
    ctx->pc = 0x2a1fd8u;
    // NOP
    // 0x2a1fdc: 0x460c00c4  c1          0xC00C4
    ctx->pc = 0x2a1fdcu;
    ctx->f[3] = FPU_SQRT_S(ctx->f[12]);
    // 0x2a1fe0: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x2a1fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a1fe4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a1fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a1fe8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2a1fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2a1fec: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x2a1fecu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x2a1ff0: 0x4600a106  mov.s       $f4, $f20
    ctx->pc = 0x2a1ff0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[20]);
    // 0x2a1ff4: 0x26420704  addiu       $v0, $s2, 0x704
    ctx->pc = 0x2a1ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1796));
    // 0x2a1ff8: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x2a1ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2a1ffc: 0x0  nop
    ctx->pc = 0x2a1ffcu;
    // NOP
label_2a2000:
    // 0x2a2000: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a2000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2004: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2a2004u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a2008: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a2008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a200c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2a200cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2010: 0x0  nop
    ctx->pc = 0x2a2010u;
    // NOP
    // 0x2a2014: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x2A2014u;
    {
        const bool branch_taken_0x2a2014 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a2014) {
            ctx->pc = 0x2A2018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2014u;
            // 0x2a2018: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2054u;
            goto label_2a2054;
        }
    }
    ctx->pc = 0x2A201Cu;
    // 0x2a201c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a201cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a2020: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a2020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a2024: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a2024u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2028: 0x0  nop
    ctx->pc = 0x2a2028u;
    // NOP
    // 0x2a202c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2A202Cu;
    {
        const bool branch_taken_0x2a202c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a202c) {
            ctx->pc = 0x2A2030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A202Cu;
            // 0x2a2030: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2054u;
            goto label_2a2054;
        }
    }
    ctx->pc = 0x2A2034u;
    // 0x2a2034: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2a2034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2038: 0x0  nop
    ctx->pc = 0x2a2038u;
    // NOP
    // 0x2a203c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2A203Cu;
    {
        const bool branch_taken_0x2a203c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a203c) {
            ctx->pc = 0x2A2040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A203Cu;
            // 0x2a2040: 0x4601a500  add.s       $f20, $f20, $f1 (Delay Slot)
            ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2050u;
            goto label_2a2050;
        }
    }
    ctx->pc = 0x2A2044u;
    // 0x2a2044: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a2044u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a2048: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a2048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a204c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2a204cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2a2050:
    // 0x2a2050: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2a2050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2a2054:
    // 0x2a2054: 0x461ffea  bgez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2A2054u;
    {
        const bool branch_taken_0x2a2054 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2A2058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2054u;
        // 0x2a2058: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2054) {
            ctx->pc = 0x2A2000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2000;
        }
    }
    ctx->pc = 0x2A205Cu;
    // 0x2a205c: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x2a205cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
    // 0x2a2060: 0xc7808dac  lwc1        $f0, -0x7254($gp)
    ctx->pc = 0x2a2060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2064: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2a2064u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2068: 0x0  nop
    ctx->pc = 0x2a2068u;
    // NOP
    // 0x2a206c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A206Cu;
    {
        const bool branch_taken_0x2a206c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A2070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A206Cu;
        // 0x2a2070: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a206c) {
            ctx->pc = 0x2A2080u;
            goto label_2a2080;
        }
    }
    ctx->pc = 0x2A2074u;
    // 0x2a2074: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2A2074u;
    SET_GPR_U32(ctx, 31, 0x2A207Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2A2074u, 0x2A207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A207Cu;
label_2a207c:
    // 0x2a207c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2a207cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2a2080:
    // 0x2a2080: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a2080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a2084: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a2084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2088: 0x46000dc6  mov.s       $f23, $f1
    ctx->pc = 0x2a2088u;
    ctx->f[23] = FPU_MOV_S(ctx->f[1]);
    // 0x2a208c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2a208cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2a2090: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a2090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a2094: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x2a2094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x2a2098: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a2098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a209c: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x2a209cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x2a20a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a20a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a20a4: 0x0  nop
    ctx->pc = 0x2a20a4u;
    // NOP
    // 0x2a20a8: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2A20A8u;
    {
        const bool branch_taken_0x2a20a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a20a8) {
            ctx->pc = 0x2A20ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A20A8u;
            // 0x2a20ac: 0xc680fae4  lwc1        $f0, -0x51C($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294965988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A20D0u;
            goto label_2a20d0;
        }
    }
    ctx->pc = 0x2A20B0u;
    // 0x2a20b0: 0x46190001  sub.s       $f0, $f0, $f25
    ctx->pc = 0x2a20b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
    // 0x2a20b4: 0x0  nop
    ctx->pc = 0x2a20b4u;
    // NOP
    // 0x2a20b8: 0x0  nop
    ctx->pc = 0x2a20b8u;
    // NOP
    // 0x2a20bc: 0x4600ce43  div.s       $f25, $f25, $f0
    ctx->pc = 0x2a20bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[25] * 0.0f); } else ctx->f[25] = ctx->f[25] / ctx->f[0];
    // 0x2a20c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A20C0u;
    {
        const bool branch_taken_0x2a20c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20C0u;
        // 0x2a20c4: 0xc680fae4  lwc1        $f0, -0x51C($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294965988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a20c0) {
            ctx->pc = 0x2A20D0u;
            goto label_2a20d0;
        }
    }
    ctx->pc = 0x2A20C8u;
label_2a20c8:
    // 0x2a20c8: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x2a20c8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x2a20cc: 0xc680fae4  lwc1        $f0, -0x51C($s4)
    ctx->pc = 0x2a20ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294965988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a20d0:
    // 0x2a20d0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2a20d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a20d4: 0x0  nop
    ctx->pc = 0x2a20d4u;
    // NOP
    // 0x2a20d8: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x2A20D8u;
    {
        const bool branch_taken_0x2a20d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A20DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20D8u;
        // 0x2a20dc: 0x26220704  addiu       $v0, $s1, 0x704 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1796));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a20d8) {
            ctx->pc = 0x2A21C0u;
            goto label_2a21c0;
        }
    }
    ctx->pc = 0x2A20E0u;
    // 0x2a20e0: 0x0  nop
    ctx->pc = 0x2a20e0u;
    // NOP
    // 0x2a20e4: 0x0  nop
    ctx->pc = 0x2a20e4u;
    // NOP
    // 0x2a20e8: 0x461500c4  c1          0x1500C4
    ctx->pc = 0x2a20e8u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[21]);
    // 0x2a20ec: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x2a20ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a20f0: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2a20f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2a20f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a20f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a20f8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2a20f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2a20fc: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x2a20fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_2a2100:
    // 0x2a2100: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a2100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2104: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2a2104u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a2108: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a2108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a210c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2a210cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2110: 0x0  nop
    ctx->pc = 0x2a2110u;
    // NOP
    // 0x2a2114: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x2A2114u;
    {
        const bool branch_taken_0x2a2114 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a2114) {
            ctx->pc = 0x2A2118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2114u;
            // 0x2a2118: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2154u;
            goto label_2a2154;
        }
    }
    ctx->pc = 0x2A211Cu;
    // 0x2a211c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a211cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a2120: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a2120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a2124: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a2124u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2128: 0x0  nop
    ctx->pc = 0x2a2128u;
    // NOP
    // 0x2a212c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2A212Cu;
    {
        const bool branch_taken_0x2a212c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a212c) {
            ctx->pc = 0x2A2130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A212Cu;
            // 0x2a2130: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2154u;
            goto label_2a2154;
        }
    }
    ctx->pc = 0x2A2134u;
    // 0x2a2134: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2a2134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2138: 0x0  nop
    ctx->pc = 0x2a2138u;
    // NOP
    // 0x2a213c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2A213Cu;
    {
        const bool branch_taken_0x2a213c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a213c) {
            ctx->pc = 0x2A2140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A213Cu;
            // 0x2a2140: 0x4601b580  add.s       $f22, $f22, $f1 (Delay Slot)
            ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2150u;
            goto label_2a2150;
        }
    }
    ctx->pc = 0x2A2144u;
    // 0x2a2144: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a2144u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a2148: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a2148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a214c: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x2a214cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_2a2150:
    // 0x2a2150: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2a2150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2a2154:
    // 0x2a2154: 0x461ffea  bgez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2A2154u;
    {
        const bool branch_taken_0x2a2154 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2A2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2154u;
        // 0x2a2158: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2154) {
            ctx->pc = 0x2A2100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2100;
        }
    }
    ctx->pc = 0x2A215Cu;
    // 0x2a215c: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x2a215cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
    // 0x2a2160: 0xc7808db0  lwc1        $f0, -0x7250($gp)
    ctx->pc = 0x2a2160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2164: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2a2164u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2168: 0x0  nop
    ctx->pc = 0x2a2168u;
    // NOP
    // 0x2a216c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A216Cu;
    {
        const bool branch_taken_0x2a216c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A216Cu;
        // 0x2a2170: 0x4600b582  mul.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a216c) {
            ctx->pc = 0x2A2180u;
            goto label_2a2180;
        }
    }
    ctx->pc = 0x2A2174u;
    // 0x2a2174: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2A2174u;
    SET_GPR_U32(ctx, 31, 0x2A217Cu);
    ctx->pc = 0x2A2178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2174u;
    // 0x2a2178: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2A2174u, 0x2A217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A217Cu;
label_2a217c:
    // 0x2a217c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2a217cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2a2180:
    // 0x2a2180: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a2180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a2184: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a2184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2188: 0x46000e86  mov.s       $f26, $f1
    ctx->pc = 0x2a2188u;
    ctx->f[26] = FPU_MOV_S(ctx->f[1]);
    // 0x2a218c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2a218cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2a2190: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a2190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a2194: 0x4600d002  mul.s       $f0, $f26, $f0
    ctx->pc = 0x2a2194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x2a2198: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a2198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a219c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2a219cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2a21a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a21a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a21a4: 0x0  nop
    ctx->pc = 0x2a21a4u;
    // NOP
    // 0x2a21a8: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2A21A8u;
    {
        const bool branch_taken_0x2a21a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a21a8) {
            ctx->pc = 0x2A21ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A21A8u;
            // 0x2a21ac: 0xc680fae4  lwc1        $f0, -0x51C($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294965988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A21C4u;
            goto label_2a21c4;
        }
    }
    ctx->pc = 0x2A21B0u;
    // 0x2a21b0: 0x46180001  sub.s       $f0, $f0, $f24
    ctx->pc = 0x2a21b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x2a21b4: 0x0  nop
    ctx->pc = 0x2a21b4u;
    // NOP
    // 0x2a21b8: 0x0  nop
    ctx->pc = 0x2a21b8u;
    // NOP
    // 0x2a21bc: 0x4600c603  div.s       $f24, $f24, $f0
    ctx->pc = 0x2a21bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = copysignf(INFINITY, ctx->f[24] * 0.0f); } else ctx->f[24] = ctx->f[24] / ctx->f[0];
label_2a21c0:
    // 0x2a21c0: 0xc680fae4  lwc1        $f0, -0x51C($s4)
    ctx->pc = 0x2a21c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294965988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a21c4:
    // 0x2a21c4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2a21c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a21c8: 0x0  nop
    ctx->pc = 0x2a21c8u;
    // NOP
    // 0x2a21cc: 0x45020044  bc1fl       . + 4 + (0x44 << 2)
    ctx->pc = 0x2A21CCu;
    {
        const bool branch_taken_0x2a21cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a21cc) {
            ctx->pc = 0x2A21D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A21CCu;
            // 0x2a21d0: 0xc640001c  lwc1        $f0, 0x1C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A22E0u;
            goto label_2a22e0;
        }
    }
    ctx->pc = 0x2A21D4u;
    // 0x2a21d4: 0x4618b042  mul.s       $f1, $f22, $f24
    ctx->pc = 0x2a21d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[24]);
    // 0x2a21d8: 0x4619a002  mul.s       $f0, $f20, $f25
    ctx->pc = 0x2a21d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x2a21dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a21dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a21e0: 0x0  nop
    ctx->pc = 0x2a21e0u;
    // NOP
    // 0x2a21e4: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x2A21E4u;
    {
        const bool branch_taken_0x2a21e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A21E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A21E4u;
        // 0x2a21e8: 0x26a3a1c8  addiu       $v1, $s5, -0x5E38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294943176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a21e4) {
            ctx->pc = 0x2A22DCu;
            goto label_2a22dc;
        }
    }
    ctx->pc = 0x2A21ECu;
    // 0x2a21ec: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2a21ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a21f0: 0xc7818db4  lwc1        $f1, -0x724C($gp)
    ctx->pc = 0x2a21f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a21f4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2a21f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2a21f8: 0x4601b082  mul.s       $f2, $f22, $f1
    ctx->pc = 0x2a21f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x2a21fc: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2a21fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2200: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x2a2200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x2a2204: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x2a2204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2208: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x2a2208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2a220c: 0xe6da0000  swc1        $f26, 0x0($s6)
    ctx->pc = 0x2a220cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x2a2210: 0x8e2203a0  lw          $v0, 0x3A0($s1)
    ctx->pc = 0x2a2210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 928)));
    // 0x2a2214: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a2214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a2218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a2218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a221c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a221cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2220: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a2220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a2224: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2224u;
    {
        const bool branch_taken_0x2a2224 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2A2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2224u;
        // 0x2a2228: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2224) {
            ctx->pc = 0x2A223Cu;
            goto label_2a223c;
        }
    }
    ctx->pc = 0x2A222Cu;
    // 0x2a222c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a222cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a2230: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a2230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a2234: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2234u;
    {
        const bool branch_taken_0x2a2234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2234u;
        // 0x2a2238: 0x46011042  mul.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2234) {
            ctx->pc = 0x2A2254u;
            goto label_2a2254;
        }
    }
    ctx->pc = 0x2A223Cu;
label_2a223c:
    // 0x2a223c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2a223cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2a2240: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a2240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a2244: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a2244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a2248: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a2248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a224c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a224cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2a2250: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2a2250u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2a2254:
    // 0x2a2254: 0x26a4a1c8  addiu       $a0, $s5, -0x5E38
    ctx->pc = 0x2a2254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294943176));
    // 0x2a2258: 0xc7808db8  lwc1        $f0, -0x7248($gp)
    ctx->pc = 0x2a2258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a225c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2a225cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2a2260: 0x8e2203a0  lw          $v0, 0x3A0($s1)
    ctx->pc = 0x2a2260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 928)));
    // 0x2a2264: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a2264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a2268: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a2268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a226c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a226cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2270: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x2a2270u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2a2274: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a2274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a2278: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2278u;
    {
        const bool branch_taken_0x2a2278 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2A227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2278u;
        // 0x2a227c: 0x4600b002  mul.s       $f0, $f22, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2278) {
            ctx->pc = 0x2A2290u;
            goto label_2a2290;
        }
    }
    ctx->pc = 0x2A2280u;
    // 0x2a2280: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a2280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a2284: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a2284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a2288: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A2288u;
    {
        const bool branch_taken_0x2a2288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2288u;
        // 0x2a228c: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2288) {
            ctx->pc = 0x2A22ACu;
            goto label_2a22ac;
        }
    }
    ctx->pc = 0x2A2290u;
label_2a2290:
    // 0x2a2290: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a2290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a2294: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2a2294u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2a2298: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a2298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a229c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a229cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a22a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a22a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a22a4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a22a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2a22a8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a22a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a22ac:
    // 0x2a22ac: 0x26a3a1c8  addiu       $v1, $s5, -0x5E38
    ctx->pc = 0x2a22acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294943176));
    // 0x2a22b0: 0xc7808dbc  lwc1        $f0, -0x7244($gp)
    ctx->pc = 0x2a22b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a22b4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2a22b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2a22b8: 0x8e2203a0  lw          $v0, 0x3A0($s1)
    ctx->pc = 0x2a22b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 928)));
    // 0x2a22bc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a22c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a22c4: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x2a22c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2a22c8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a22c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a22cc: 0x461003e  bgez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2A22CCu;
    {
        const bool branch_taken_0x2a22cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2A22D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22CCu;
        // 0x2a22d0: 0x4600b042  mul.s       $f1, $f22, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a22cc) {
            ctx->pc = 0x2A23C8u;
            goto label_2a23c8;
        }
    }
    ctx->pc = 0x2A22D4u;
    // 0x2a22d4: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2A22D4u;
    {
        const bool branch_taken_0x2a22d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A22D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22D4u;
        // 0x2a22d8: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a22d4) {
            ctx->pc = 0x2A23DCu;
            goto label_2a23dc;
        }
    }
    ctx->pc = 0x2A22DCu;
label_2a22dc:
    // 0x2a22dc: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x2a22dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a22e0:
    // 0x2a22e0: 0x26a3a1c8  addiu       $v1, $s5, -0x5E38
    ctx->pc = 0x2a22e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294943176));
    // 0x2a22e4: 0xc7818dc0  lwc1        $f1, -0x7240($gp)
    ctx->pc = 0x2a22e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a22e8: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2a22e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2a22ec: 0x4601a082  mul.s       $f2, $f20, $f1
    ctx->pc = 0x2a22ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2a22f0: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x2a22f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a22f4: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x2a22f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x2a22f8: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x2a22f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a22fc: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x2a22fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2a2300: 0xe6d70000  swc1        $f23, 0x0($s6)
    ctx->pc = 0x2a2300u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x2a2304: 0x8e4203a0  lw          $v0, 0x3A0($s2)
    ctx->pc = 0x2a2304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 928)));
    // 0x2a2308: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a2308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a230c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a2310: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a2310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2314: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a2314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a2318: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2318u;
    {
        const bool branch_taken_0x2a2318 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2A231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2318u;
        // 0x2a231c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2318) {
            ctx->pc = 0x2A2330u;
            goto label_2a2330;
        }
    }
    ctx->pc = 0x2A2320u;
    // 0x2a2320: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a2320u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a2324: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a2324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a2328: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2328u;
    {
        const bool branch_taken_0x2a2328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2328u;
        // 0x2a232c: 0x46011042  mul.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2328) {
            ctx->pc = 0x2A2348u;
            goto label_2a2348;
        }
    }
    ctx->pc = 0x2A2330u;
label_2a2330:
    // 0x2a2330: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2a2330u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2a2334: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a2334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a2338: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a2338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a233c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a233cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a2340: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a2340u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2a2344: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2a2344u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2a2348:
    // 0x2a2348: 0x26a4a1c8  addiu       $a0, $s5, -0x5E38
    ctx->pc = 0x2a2348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294943176));
    // 0x2a234c: 0xc7808dc4  lwc1        $f0, -0x723C($gp)
    ctx->pc = 0x2a234cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2350: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2a2350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2a2354: 0x8e4203a0  lw          $v0, 0x3A0($s2)
    ctx->pc = 0x2a2354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 928)));
    // 0x2a2358: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a2358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a235c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a235cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a2360: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a2360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2364: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x2a2364u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2a2368: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a2368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a236c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A236Cu;
    {
        const bool branch_taken_0x2a236c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2A2370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A236Cu;
        // 0x2a2370: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a236c) {
            ctx->pc = 0x2A2384u;
            goto label_2a2384;
        }
    }
    ctx->pc = 0x2A2374u;
    // 0x2a2374: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a2374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a2378: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a2378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a237c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A237Cu;
    {
        const bool branch_taken_0x2a237c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A237Cu;
        // 0x2a2380: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a237c) {
            ctx->pc = 0x2A23A0u;
            goto label_2a23a0;
        }
    }
    ctx->pc = 0x2A2384u;
label_2a2384:
    // 0x2a2384: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a2384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a2388: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2a2388u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2a238c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a238cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a2390: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a2390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a2394: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a2394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a2398: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a2398u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2a239c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a239cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a23a0:
    // 0x2a23a0: 0x26a3a1c8  addiu       $v1, $s5, -0x5E38
    ctx->pc = 0x2a23a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294943176));
    // 0x2a23a4: 0xc7808dc8  lwc1        $f0, -0x7238($gp)
    ctx->pc = 0x2a23a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a23a8: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2a23a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2a23ac: 0x8e4203a0  lw          $v0, 0x3A0($s2)
    ctx->pc = 0x2a23acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 928)));
    // 0x2a23b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a23b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a23b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a23b8: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x2a23b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2a23bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a23bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a23c0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A23C0u;
    {
        const bool branch_taken_0x2a23c0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2A23C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A23C0u;
        // 0x2a23c4: 0x4600a042  mul.s       $f1, $f20, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a23c0) {
            ctx->pc = 0x2A23D8u;
            goto label_2a23d8;
        }
    }
    ctx->pc = 0x2A23C8u;
label_2a23c8:
    // 0x2a23c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a23c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a23cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a23ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a23d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A23D0u;
    {
        const bool branch_taken_0x2a23d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A23D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A23D0u;
        // 0x2a23d4: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a23d0) {
            ctx->pc = 0x2A23F4u;
            goto label_2a23f4;
        }
    }
    ctx->pc = 0x2A23D8u;
label_2a23d8:
    // 0x2a23d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a23d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a23dc:
    // 0x2a23dc: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2a23dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2a23e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a23e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a23e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a23e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a23e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a23e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a23ec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a23ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a23f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a23f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a23f4:
    // 0x2a23f4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2a23f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2a23f8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2a23f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a23fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a23fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a2400: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a2400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a2404: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a2404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2408: 0x0  nop
    ctx->pc = 0x2a2408u;
    // NOP
    // 0x2a240c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A240Cu;
    {
        const bool branch_taken_0x2a240c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a240c) {
            ctx->pc = 0x2A2410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A240Cu;
            // 0x2a2410: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2414u;
            goto label_2a2414;
        }
    }
    ctx->pc = 0x2A2414u;
label_2a2414:
    // 0x2a2414: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2a2414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2418: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a2418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a241c: 0x0  nop
    ctx->pc = 0x2a241cu;
    // NOP
    // 0x2a2420: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A2420u;
    {
        const bool branch_taken_0x2a2420 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a2420) {
            ctx->pc = 0x2A2424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2420u;
            // 0x2a2424: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2428u;
            goto label_2a2428;
        }
    }
    ctx->pc = 0x2A2428u;
label_2a2428:
    // 0x2a2428: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2a2428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a242c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a242cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2430: 0x0  nop
    ctx->pc = 0x2a2430u;
    // NOP
    // 0x2a2434: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A2434u;
    {
        const bool branch_taken_0x2a2434 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a2434) {
            ctx->pc = 0x2A2438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2434u;
            // 0x2a2438: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A243Cu;
            goto label_2a243c;
        }
    }
    ctx->pc = 0x2A243Cu;
label_2a243c:
    // 0x2a243c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a243cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a2440:
    // 0x2a2440: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a2440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a2444: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2a2444u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a2448: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2a2448u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a244c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a244cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2450: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a2450u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2454: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a2454u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2458: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a2458u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a245c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a245cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2460: 0xc7ba00b0  lwc1        $f26, 0xB0($sp)
    ctx->pc = 0x2a2460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2a2464: 0xc7b900a8  lwc1        $f25, 0xA8($sp)
    ctx->pc = 0x2a2464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2a2468: 0xc7b800a0  lwc1        $f24, 0xA0($sp)
    ctx->pc = 0x2a2468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2a246c: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x2a246cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a2470: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x2a2470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a2474: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2a2474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a2478: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2a2478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a247c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A247Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A247Cu;
        // 0x2a2480: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A247Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2484u;
}
