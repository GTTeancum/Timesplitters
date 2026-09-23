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

// Function: hologramPropTick
// Address: 0x27b1d8 - 0x27b43c
void hologramPropTick_0x27b1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hologramPropTick_0x27b1d8");
#endif

    switch (ctx->pc) {
        case 0x27b230u: goto label_27b230;
        case 0x27b294u: goto label_27b294;
        case 0x27b31cu: goto label_27b31c;
        case 0x27b350u: goto label_27b350;
        case 0x27b360u: goto label_27b360;
        case 0x27b380u: goto label_27b380;
        case 0x27b3a0u: goto label_27b3a0;
        default: break;
    }

    ctx->pc = 0x27b1d8u;

    // 0x27b1d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x27b1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x27b1dc: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x27b1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x27b1e0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27b1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27b1e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27b1e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b1e8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x27b1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x27b1ec: 0x8f84b59c  lw          $a0, -0x4A64($gp)
    ctx->pc = 0x27b1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x27b1f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27b1f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b1f4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27b1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27b1f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x27b1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x27b1fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27b1fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b200: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x27b200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x27b204: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x27b204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x27b208: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x27b208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x27b20c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x27b20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x27b210: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27b210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27b214: 0x1840002a  blez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x27B214u;
    {
        const bool branch_taken_0x27b214 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B214u;
        // 0x27b218: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b214) {
            ctx->pc = 0x27B2C0u;
            goto label_27b2c0;
        }
    }
    ctx->pc = 0x27B21Cu;
    // 0x27b21c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x27b21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x27b220: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27b220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27b224: 0x24142000  addiu       $s4, $zero, 0x2000
    ctx->pc = 0x27b224u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x27b228: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27b228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b22c: 0x0  nop
    ctx->pc = 0x27b22cu;
    // NOP
label_27b230:
    // 0x27b230: 0x8f82b238  lw          $v0, -0x4DC8($gp)
    ctx->pc = 0x27b230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x27b234: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x27b234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27b238: 0x8c620a9c  lw          $v0, 0xA9C($v1)
    ctx->pc = 0x27b238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2716)));
    // 0x27b23c: 0x5054001c  beql        $v0, $s4, . + 4 + (0x1C << 2)
    ctx->pc = 0x27B23Cu;
    {
        const bool branch_taken_0x27b23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x27b23c) {
            ctx->pc = 0x27B240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B23Cu;
            // 0x27b240: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B2B0u;
            goto label_27b2b0;
        }
    }
    ctx->pc = 0x27B244u;
    // 0x27b244: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x27B244u;
    {
        const bool branch_taken_0x27b244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b244) {
            ctx->pc = 0x27B248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B244u;
            // 0x27b248: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B2B0u;
            goto label_27b2b0;
        }
    }
    ctx->pc = 0x27B24Cu;
    // 0x27b24c: 0x8c620bcc  lw          $v0, 0xBCC($v1)
    ctx->pc = 0x27b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3020)));
    // 0x27b250: 0xc6430030  lwc1        $f3, 0x30($s2)
    ctx->pc = 0x27b250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27b254: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x27b254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b258: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x27b258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b25c: 0xc6420038  lwc1        $f2, 0x38($s2)
    ctx->pc = 0x27b25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27b260: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x27b260u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x27b264: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x27b264u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x27b268: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x27b268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x27b26c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x27b26cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x27b270: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x27b270u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27b274: 0x0  nop
    ctx->pc = 0x27b274u;
    // NOP
    // 0x27b278: 0x0  nop
    ctx->pc = 0x27b278u;
    // NOP
    // 0x27b27c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x27b27cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x27b280: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x27b280u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b284: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x27B284u;
    {
        const bool branch_taken_0x27b284 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b284) {
            ctx->pc = 0x27B29Cu;
            goto label_27b29c;
        }
    }
    ctx->pc = 0x27B28Cu;
    // 0x27b28c: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x27B28Cu;
    SET_GPR_U32(ctx, 31, 0x27B294u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x27B28Cu, 0x27B294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B294u;
label_27b294:
    // 0x27b294: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x27b294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x27b298: 0x8f84b59c  lw          $a0, -0x4A64($gp)
    ctx->pc = 0x27b298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
label_27b29c:
    // 0x27b29c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x27b29cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b2a0: 0x0  nop
    ctx->pc = 0x27b2a0u;
    // NOP
    // 0x27b2a4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x27B2A4u;
    {
        const bool branch_taken_0x27b2a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b2a4) {
            ctx->pc = 0x27B2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B2A4u;
            // 0x27b2a8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B2ACu;
            goto label_27b2ac;
        }
    }
    ctx->pc = 0x27B2ACu;
label_27b2ac:
    // 0x27b2ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x27b2acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_27b2b0:
    // 0x27b2b0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x27b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x27b2b4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x27b2b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27b2b8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x27B2B8u;
    {
        const bool branch_taken_0x27b2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B2B8u;
        // 0x27b2bc: 0x26101210  addiu       $s0, $s0, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b2b8) {
            ctx->pc = 0x27B230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27b230;
        }
    }
    ctx->pc = 0x27B2C0u;
label_27b2c0:
    // 0x27b2c0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27B2C0u;
    {
        const bool branch_taken_0x27b2c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B2C0u;
        // 0x27b2c4: 0xc781b190  lwc1        $f1, -0x4E70($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b2c0) {
            ctx->pc = 0x27B2E4u;
            goto label_27b2e4;
        }
    }
    ctx->pc = 0x27B2C8u;
    // 0x27b2c8: 0xc7808790  lwc1        $f0, -0x7870($gp)
    ctx->pc = 0x27b2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b2cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27b2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27b2d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27b2d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27b2d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27b2d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27b2d8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x27b2d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b2dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27B2DCu;
    {
        const bool branch_taken_0x27b2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B2DCu;
        // 0x27b2e0: 0xe781b190  swc1        $f1, -0x4E70($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b2dc) {
            ctx->pc = 0x27B2F8u;
            goto label_27b2f8;
        }
    }
    ctx->pc = 0x27B2E4u;
label_27b2e4:
    // 0x27b2e4: 0xc7808794  lwc1        $f0, -0x786C($gp)
    ctx->pc = 0x27b2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b2e8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x27b2e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27b2ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27b2ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27b2f0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x27b2f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b2f4: 0xe781b190  swc1        $f1, -0x4E70($gp)
    ctx->pc = 0x27b2f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947216), bits); }
label_27b2f8:
    // 0x27b2f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27B2F8u;
    {
        const bool branch_taken_0x27b2f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b2f8) {
            ctx->pc = 0x27B308u;
            goto label_27b308;
        }
    }
    ctx->pc = 0x27B300u;
    // 0x27b300: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x27b300u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x27b304: 0xe782b190  swc1        $f2, -0x4E70($gp)
    ctx->pc = 0x27b304u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947216), bits); }
label_27b308:
    // 0x27b308: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x27b308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x27b30c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27b30cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27b310: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27b310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b314: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x27B314u;
    SET_GPR_U32(ctx, 31, 0x27B31Cu);
    ctx->pc = 0x27B318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B314u;
    // 0x27b318: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x27B314u, 0x27B31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B31Cu;
label_27b31c:
    // 0x27b31c: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x27b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x27b320: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27b320u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b324: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x27b324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x27b328: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27b328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27b32c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x27b32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27b330: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x27b330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27b334: 0x18a00030  blez        $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x27B334u;
    {
        const bool branch_taken_0x27b334 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x27B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B334u;
        // 0x27b338: 0x82a823  subu        $s5, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b334) {
            ctx->pc = 0x27B3F8u;
            goto label_27b3f8;
        }
    }
    ctx->pc = 0x27B33Cu;
    // 0x27b33c: 0x3c1300ff  lui         $s3, 0xFF
    ctx->pc = 0x27b33cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)255 << 16));
    // 0x27b340: 0x24160050  addiu       $s6, $zero, 0x50
    ctx->pc = 0x27b340u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x27b344: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x27b344u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x27b348: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27b348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b34c: 0x0  nop
    ctx->pc = 0x27b34cu;
    // NOP
label_27b350:
    // 0x27b350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b354: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27b354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b358: 0xc09d194  jal         func_274650
    ctx->pc = 0x27B358u;
    SET_GPR_U32(ctx, 31, 0x27B360u);
    ctx->pc = 0x27B35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B358u;
    // 0x27b35c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274650u, 0x27B358u, 0x27B360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B360u;
label_27b360:
    // 0x27b360: 0x2361018  mult        $v0, $s1, $s6
    ctx->pc = 0x27b360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27b364: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27b364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b368: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b36c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27b36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b370: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x27b370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27b374: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x27b374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b378: 0xc09d11a  jal         func_274468
    ctx->pc = 0x27B378u;
    SET_GPR_U32(ctx, 31, 0x27B380u);
    ctx->pc = 0x27B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B378u;
    // 0x27b37c: 0x558021  addu        $s0, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274468u, 0x27B378u, 0x27B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B380u;
label_27b380:
    // 0x27b380: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27b380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b384: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27b384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b388: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x27b388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x27b38c: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x27B38Cu;
    {
        const bool branch_taken_0x27b38c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B38Cu;
        // 0x27b390: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b38c) {
            ctx->pc = 0x27B3D8u;
            goto label_27b3d8;
        }
    }
    ctx->pc = 0x27B394u;
    // 0x27b394: 0x8e490020  lw          $t1, 0x20($s2)
    ctx->pc = 0x27b394u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x27b398: 0x26280001  addiu       $t0, $s1, 0x1
    ctx->pc = 0x27b398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27b39c: 0x143e00  sll         $a3, $s4, 24
    ctx->pc = 0x27b39cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 20), 24));
label_27b3a0:
    // 0x27b3a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x27b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27b3a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27b3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27b3a8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x27b3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x27b3ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27b3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27b3b0: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x27b3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x27b3b4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x27b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x27b3b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27b3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27b3bc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x27b3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x27b3c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b3c4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x27b3c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27b3c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x27B3C8u;
    {
        const bool branch_taken_0x27b3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B3C8u;
        // 0x27b3cc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b3c8) {
            ctx->pc = 0x27B3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27b3a0;
        }
    }
    ctx->pc = 0x27B3D0u;
    // 0x27b3d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27B3D0u;
    {
        const bool branch_taken_0x27b3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B3D0u;
        // 0x27b3d4: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b3d0) {
            ctx->pc = 0x27B3E4u;
            goto label_27b3e4;
        }
    }
    ctx->pc = 0x27B3D8u;
label_27b3d8:
    // 0x27b3d8: 0x8e490020  lw          $t1, 0x20($s2)
    ctx->pc = 0x27b3d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x27b3dc: 0x26280001  addiu       $t0, $s1, 0x1
    ctx->pc = 0x27b3dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27b3e0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x27b3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_27b3e4:
    // 0x27b3e4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x27b3e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b3e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27b3ec: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x27b3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27b3f0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x27B3F0u;
    {
        const bool branch_taken_0x27b3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B3F0u;
        // 0x27b3f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b3f0) {
            ctx->pc = 0x27B350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27b350;
        }
    }
    ctx->pc = 0x27B3F8u;
label_27b3f8:
    // 0x27b3f8: 0xc7809da8  lwc1        $f0, -0x6258($gp)
    ctx->pc = 0x27b3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b3fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27b3fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27b400: 0xc7818798  lwc1        $f1, -0x7868($gp)
    ctx->pc = 0x27b400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b404: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x27b404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27b408: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x27b408u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27b40c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27b40cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27b410: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x27b410u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27b414: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x27b414u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27b418: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x27b418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b41c: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x27b41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x27b420: 0xe6400048  swc1        $f0, 0x48($s2)
    ctx->pc = 0x27b420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x27b424: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27b424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b428: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27b428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b42c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27b42cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b430: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x27b430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27b434: 0x3e00008  jr          $ra
    ctx->pc = 0x27B434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B434u;
        // 0x27b438: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B43Cu;
}
