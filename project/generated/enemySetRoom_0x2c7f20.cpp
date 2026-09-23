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

// Function: enemySetRoom
// Address: 0x2c7f20 - 0x2c82f4
void enemySetRoom_0x2c7f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemySetRoom_0x2c7f20");
#endif

    switch (ctx->pc) {
        case 0x2c8000u: goto label_2c8000;
        case 0x2c8014u: goto label_2c8014;
        case 0x2c8058u: goto label_2c8058;
        case 0x2c8070u: goto label_2c8070;
        case 0x2c8110u: goto label_2c8110;
        case 0x2c8124u: goto label_2c8124;
        case 0x2c818cu: goto label_2c818c;
        case 0x2c81a8u: goto label_2c81a8;
        case 0x2c8260u: goto label_2c8260;
        case 0x2c8284u: goto label_2c8284;
        default: break;
    }

    ctx->pc = 0x2c7f20u;

    // 0x2c7f20: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2c7f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2c7f24: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x2c7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x2c7f28: 0xffb100c0  sd          $s1, 0xC0($sp)
    ctx->pc = 0x2c7f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x2c7f2c: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x2c7f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x2c7f30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c7f30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7f34: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x2c7f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x2c7f38: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c7f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7f3c: 0xffb300e0  sd          $s3, 0xE0($sp)
    ctx->pc = 0x2c7f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
    // 0x2c7f40: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x2c7f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x2c7f44: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2c7f44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2c7f48: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x2c7f48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2c7f4c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2c7f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2c7f50: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2C7F50u;
    {
        const bool branch_taken_0x2c7f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F50u;
        // 0x2c7f54: 0x8e330160  lw          $s3, 0x160($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f50) {
            ctx->pc = 0x2C8050u;
            goto label_2c8050;
        }
    }
    ctx->pc = 0x2C7F58u;
    // 0x2c7f58: 0x8e6302a8  lw          $v1, 0x2A8($s3)
    ctx->pc = 0x2c7f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 680)));
    // 0x2c7f5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c7f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c7f60: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2C7F60u;
    {
        const bool branch_taken_0x2c7f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C7F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F60u;
        // 0x2c7f64: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f60) {
            ctx->pc = 0x2C8050u;
            goto label_2c8050;
        }
    }
    ctx->pc = 0x2C7F68u;
    // 0x2c7f68: 0x8f84a2ec  lw          $a0, -0x5D14($gp)
    ctx->pc = 0x2c7f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c7f6c: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x2c7f6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c7f70: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2c7f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7f74: 0xc78491c8  lwc1        $f4, -0x6E38($gp)
    ctx->pc = 0x2c7f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c7f78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c7f78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7f7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c7f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7f80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c7f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c7f84: 0x8443000a  lh          $v1, 0xA($v0)
    ctx->pc = 0x2c7f84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2c7f88: 0xe6600af8  swc1        $f0, 0xAF8($s3)
    ctx->pc = 0x2c7f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2808), bits); }
    // 0x2c7f8c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2c7f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x2c7f90: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2c7f90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7f94: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x2c7f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7f98: 0x8e6202a8  lw          $v0, 0x2A8($s3)
    ctx->pc = 0x2c7f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 680)));
    // 0x2c7f9c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2c7f9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2c7fa0: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x2c7fa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c7fa4: 0xe6600afc  swc1        $f0, 0xAFC($s3)
    ctx->pc = 0x2c7fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2812), bits); }
    // 0x2c7fa8: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2c7fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7fac: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2c7facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c7fb0: 0xe6610b00  swc1        $f1, 0xB00($s3)
    ctx->pc = 0x2c7fb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2816), bits); }
    // 0x2c7fb4: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x2c7fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c7fb8: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2c7fb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c7fbc: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x2c7fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7fc0: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2c7fc0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2c7fc4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2c7fc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c7fc8: 0xc4440014  lwc1        $f4, 0x14($v0)
    ctx->pc = 0x2c7fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c7fcc: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x2c7fccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c7fd0: 0xc6600af8  lwc1        $f0, 0xAF8($s3)
    ctx->pc = 0x2c7fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7fd4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2c7fd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c7fd8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2c7fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c7fdc: 0xc6610afc  lwc1        $f1, 0xAFC($s3)
    ctx->pc = 0x2c7fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7fe0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2c7fe0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2c7fe4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2c7fe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c7fe8: 0xc6600b00  lwc1        $f0, 0xB00($s3)
    ctx->pc = 0x2c7fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7fec: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2c7fecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2c7ff0: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x2C7FF0u;
    {
        const bool branch_taken_0x2c7ff0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7FF0u;
        // 0x2c7ff4: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ff0) {
            ctx->pc = 0x2C8028u;
            goto label_2c8028;
        }
    }
    ctx->pc = 0x2C7FF8u;
    // 0x2c7ff8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2c7ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c7ffc: 0x0  nop
    ctx->pc = 0x2c7ffcu;
    // NOP
label_2c8000:
    // 0x2c8000: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c8000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8004: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c8004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8008: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c8008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c800c: 0xc09633c  jal         func_258CF0
    ctx->pc = 0x2C800Cu;
    SET_GPR_U32(ctx, 31, 0x2C8014u);
    ctx->pc = 0x2C8010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C800Cu;
    // 0x2c8010: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258CF0u, 0x2C800Cu, 0x2C8014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8014u;
label_2c8014:
    // 0x2c8014: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c8014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8018: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2c8018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c801c: 0x14c7fff8  bne         $a2, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2C801Cu;
    {
        const bool branch_taken_0x2c801c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x2C8020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C801Cu;
        // 0x2c8020: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c801c) {
            ctx->pc = 0x2C8000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8000;
        }
    }
    ctx->pc = 0x2C8024u;
    // 0x2c8024: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x2c8024u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2c8028:
    // 0x2c8028: 0x14c00077  bnez        $a2, . + 4 + (0x77 << 2)
    ctx->pc = 0x2C8028u;
    {
        const bool branch_taken_0x2c8028 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8028u;
        // 0x2c802c: 0xae26000c  sw          $a2, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8028) {
            ctx->pc = 0x2C8208u;
            goto label_2c8208;
        }
    }
    ctx->pc = 0x2C8030u;
    // 0x2c8030: 0x8e6202a8  lw          $v0, 0x2A8($s3)
    ctx->pc = 0x2c8030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 680)));
    // 0x2c8034: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2c8034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c8038: 0x8f84a2ec  lw          $a0, -0x5D14($gp)
    ctx->pc = 0x2c8038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c803c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2c803cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c8040: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c8040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c8044: 0x8443000a  lh          $v1, 0xA($v0)
    ctx->pc = 0x2c8044u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2c8048: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2C8048u;
    {
        const bool branch_taken_0x2c8048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8048u;
        // 0x2c804c: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8048) {
            ctx->pc = 0x2C8208u;
            goto label_2c8208;
        }
    }
    ctx->pc = 0x2C8050u;
label_2c8050:
    // 0x2c8050: 0xc09a6cc  jal         func_269B30
    ctx->pc = 0x2C8050u;
    SET_GPR_U32(ctx, 31, 0x2C8058u);
    ctx->pc = 0x2C8054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8050u;
    // 0x2c8054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269B30u, 0x2C8050u, 0x2C8058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8058u;
label_2c8058:
    // 0x2c8058: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C8058u;
    {
        const bool branch_taken_0x2c8058 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8058u;
        // 0x2c805c: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8058) {
            ctx->pc = 0x2C808Cu;
            goto label_2c808c;
        }
    }
    ctx->pc = 0x2C8060u;
    // 0x2c8060: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2c8060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2c8064: 0xc78c91cc  lwc1        $f12, -0x6E34($gp)
    ctx->pc = 0x2c8064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8068: 0xc09f21c  jal         func_27C870
    ctx->pc = 0x2C8068u;
    SET_GPR_U32(ctx, 31, 0x2C8070u);
    ctx->pc = 0x2C806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8068u;
    // 0x2c806c: 0xc44d0084  lwc1        $f13, 0x84($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C870u, 0x2C8068u, 0x2C8070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8070u;
label_2c8070:
    // 0x2c8070: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2c8070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8074: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2c8074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2c8078: 0xe6610af8  swc1        $f1, 0xAF8($s3)
    ctx->pc = 0x2c8078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2808), bits); }
    // 0x2c807c: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x2c807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8080: 0xe6600afc  swc1        $f0, 0xAFC($s3)
    ctx->pc = 0x2c8080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2812), bits); }
    // 0x2c8084: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2c8084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8088: 0xe6610b00  swc1        $f1, 0xB00($s3)
    ctx->pc = 0x2c8088u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2816), bits); }
label_2c808c:
    // 0x2c808c: 0xc6640af8  lwc1        $f4, 0xAF8($s3)
    ctx->pc = 0x2c808cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c8090: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c8090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8094: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x2c8094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8098: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c8098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c809c: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x2c809cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c80a0: 0xc78091d0  lwc1        $f0, -0x6E30($gp)
    ctx->pc = 0x2c80a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c80a4: 0xc6650afc  lwc1        $f5, 0xAFC($s3)
    ctx->pc = 0x2c80a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c80a8: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2c80a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c80ac: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2c80acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c80b0: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x2c80b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c80b4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2c80b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2c80b8: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x2c80b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c80bc: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2c80bcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2c80c0: 0xc6630b00  lwc1        $f3, 0xB00($s3)
    ctx->pc = 0x2c80c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c80c4: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2c80c4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2c80c8: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x2c80c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c80cc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2c80ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c80d0: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2c80d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c80d4: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2c80d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c80d8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2c80d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c80dc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2c80dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c80e0: 0xe6640af8  swc1        $f4, 0xAF8($s3)
    ctx->pc = 0x2c80e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2808), bits); }
    // 0x2c80e4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2c80e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c80e8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2c80e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c80ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c80ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c80f0: 0xe6600afc  swc1        $f0, 0xAFC($s3)
    ctx->pc = 0x2c80f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2812), bits); }
    // 0x2c80f4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2c80f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c80f8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2c80f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c80fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c80fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c8100: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x2C8100u;
    {
        const bool branch_taken_0x2c8100 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8100u;
        // 0x2c8104: 0xe6610b00  swc1        $f1, 0xB00($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2816), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8100) {
            ctx->pc = 0x2C8134u;
            goto label_2c8134;
        }
    }
    ctx->pc = 0x2C8108u;
    // 0x2c8108: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2c8108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c810c: 0x0  nop
    ctx->pc = 0x2c810cu;
    // NOP
label_2c8110:
    // 0x2c8110: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c8110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8114: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c8114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8118: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c8118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c811c: 0xc09633c  jal         func_258CF0
    ctx->pc = 0x2C811Cu;
    SET_GPR_U32(ctx, 31, 0x2C8124u);
    ctx->pc = 0x2C8120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C811Cu;
    // 0x2c8120: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258CF0u, 0x2C811Cu, 0x2C8124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8124u;
label_2c8124:
    // 0x2c8124: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c8124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8128: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2c8128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c812c: 0x14c7fff8  bne         $a2, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2C812Cu;
    {
        const bool branch_taken_0x2c812c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x2C8130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C812Cu;
        // 0x2c8130: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c812c) {
            ctx->pc = 0x2C8110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8110;
        }
    }
    ctx->pc = 0x2C8134u;
label_2c8134:
    // 0x2c8134: 0x14c00033  bnez        $a2, . + 4 + (0x33 << 2)
    ctx->pc = 0x2C8134u;
    {
        const bool branch_taken_0x2c8134 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8134u;
        // 0x2c8138: 0xae26000c  sw          $a2, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8134) {
            ctx->pc = 0x2C8204u;
            goto label_2c8204;
        }
    }
    ctx->pc = 0x2C813Cu;
    // 0x2c813c: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x2c813cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2c8140: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x2c8140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x2c8144: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2c8144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2c8148: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2C8148u;
    {
        const bool branch_taken_0x2c8148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8148u;
        // 0x2c814c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8148) {
            ctx->pc = 0x2C8208u;
            goto label_2c8208;
        }
    }
    ctx->pc = 0x2C8150u;
    // 0x2c8150: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2c8150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8154: 0xc78291d4  lwc1        $f2, -0x6E2C($gp)
    ctx->pc = 0x2c8154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c8158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c815c: 0xc6230030  lwc1        $f3, 0x30($s1)
    ctx->pc = 0x2c815cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c8160: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c8160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8164: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2c8164u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2c8168: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x2c8168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c816c: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x2c816cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2c8170: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2c8170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2c8174: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2c8174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2c8178: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2c8178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2c817c: 0xc79491d8  lwc1        $f20, -0x6E28($gp)
    ctx->pc = 0x2c817cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c8180: 0xc44d0084  lwc1        $f13, 0x84($v0)
    ctx->pc = 0x2c8180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c8184: 0xc09f27c  jal         func_27C9F0
    ctx->pc = 0x2C8184u;
    SET_GPR_U32(ctx, 31, 0x2C818Cu);
    ctx->pc = 0x2C8188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8184u;
    // 0x2c8188: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C9F0u, 0x2C8184u, 0x2C818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C818Cu;
label_2c818c:
    // 0x2c818c: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2c818cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2c8190: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c8190u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c8194: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2c8194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2c8198: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2c8198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2c819c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2c819cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2c81a0: 0xc09f21c  jal         func_27C870
    ctx->pc = 0x2C81A0u;
    SET_GPR_U32(ctx, 31, 0x2C81A8u);
    ctx->pc = 0x2C81A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C81A0u;
    // 0x2c81a4: 0xc44d0084  lwc1        $f13, 0x84($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C870u, 0x2C81A0u, 0x2C81A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C81A8u;
label_2c81a8:
    // 0x2c81a8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C81A8u;
    {
        const bool branch_taken_0x2c81a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C81ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C81A8u;
        // 0x2c81ac: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c81a8) {
            ctx->pc = 0x2C81E4u;
            goto label_2c81e4;
        }
    }
    ctx->pc = 0x2C81B0u;
    // 0x2c81b0: 0x8e6202a8  lw          $v0, 0x2A8($s3)
    ctx->pc = 0x2c81b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 680)));
    // 0x2c81b4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2c81b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c81b8: 0x8f84a2ec  lw          $a0, -0x5D14($gp)
    ctx->pc = 0x2c81b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c81bc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2c81bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c81c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c81c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c81c4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2c81c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c81c8: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2c81c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2c81cc: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2c81ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c81d0: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x2c81d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2c81d4: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2c81d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c81d8: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2c81d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2c81dc: 0x8443000a  lh          $v1, 0xA($v0)
    ctx->pc = 0x2c81dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2c81e0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2c81e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_2c81e4:
    // 0x2c81e4: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2c81e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c81e8: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x2c81e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2c81ec: 0xe6600af8  swc1        $f0, 0xAF8($s3)
    ctx->pc = 0x2c81ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2808), bits); }
    // 0x2c81f0: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2c81f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c81f4: 0xe6610afc  swc1        $f1, 0xAFC($s3)
    ctx->pc = 0x2c81f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2812), bits); }
    // 0x2c81f8: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x2c81f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c81fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C81FCu;
    {
        const bool branch_taken_0x2c81fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C81FCu;
        // 0x2c8200: 0xe6600b00  swc1        $f0, 0xB00($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2816), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c81fc) {
            ctx->pc = 0x2C8208u;
            goto label_2c8208;
        }
    }
    ctx->pc = 0x2C8204u;
label_2c8204:
    // 0x2c8204: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x2c8204u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2c8208:
    // 0x2c8208: 0x31020080  andi        $v0, $t0, 0x80
    ctx->pc = 0x2c8208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)128);
    // 0x2c820c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C820Cu;
    {
        const bool branch_taken_0x2c820c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C820Cu;
        // 0x2c8210: 0x3c020f00  lui         $v0, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c820c) {
            ctx->pc = 0x2C8220u;
            goto label_2c8220;
        }
    }
    ctx->pc = 0x2C8214u;
    // 0x2c8214: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2c8214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2c8218: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8218u;
    {
        const bool branch_taken_0x2c8218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8218) {
            ctx->pc = 0x2C821Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8218u;
            // 0x2c821c: 0xc62f004c  lwc1        $f15, 0x4C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C822Cu;
            goto label_2c822c;
        }
    }
    ctx->pc = 0x2C8220u;
label_2c8220:
    // 0x2c8220: 0xc78291dc  lwc1        $f2, -0x6E24($gp)
    ctx->pc = 0x2c8220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8224: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2C8224u;
    {
        const bool branch_taken_0x2c8224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8224u;
        // 0x2c8228: 0xc6210030  lwc1        $f1, 0x30($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8224) {
            ctx->pc = 0x2C82BCu;
            goto label_2c82bc;
        }
    }
    ctx->pc = 0x2C822Cu;
label_2c822c:
    // 0x2c822c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2c822cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c8230: 0xc78091e0  lwc1        $f0, -0x6E20($gp)
    ctx->pc = 0x2c8230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8238: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2c8238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2c823c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c823cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c8240: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x2c8240u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x2c8244: 0xc62c0030  lwc1        $f12, 0x30($s1)
    ctx->pc = 0x2c8244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8248: 0xc62d0034  lwc1        $f13, 0x34($s1)
    ctx->pc = 0x2c8248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c824c: 0x0  nop
    ctx->pc = 0x2c824cu;
    // NOP
    // 0x2c8250: 0x0  nop
    ctx->pc = 0x2c8250u;
    // NOP
    // 0x2c8254: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x2c8254u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x2c8258: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x2C8258u;
    SET_GPR_U32(ctx, 31, 0x2C8260u);
    ctx->pc = 0x2C825Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8258u;
    // 0x2c825c: 0xc62e0038  lwc1        $f14, 0x38($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x2C8258u, 0x2C8260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8260u;
label_2c8260:
    // 0x2c8260: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2c8260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2c8264: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c8264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8268: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c8268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c826c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x2c826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2c8270: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x2c8270u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c8274: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x2c8274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2c8278: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x2c8278u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2c827c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2C827Cu;
    SET_GPR_U32(ctx, 31, 0x2C8284u);
    ctx->pc = 0x2C8280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C827Cu;
    // 0x2c8280: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2C827Cu, 0x2C8284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8284u;
label_2c8284:
    // 0x2c8284: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2c8284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8288: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c8288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c828c: 0xc78191e4  lwc1        $f1, -0x6E1C($gp)
    ctx->pc = 0x2c828cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8290: 0xe6600bc0  swc1        $f0, 0xBC0($s3)
    ctx->pc = 0x2c8290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3008), bits); }
    // 0x2c8294: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2c8294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2c8298: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2c8298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c829c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c829cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c82a0: 0xe6600bc4  swc1        $f0, 0xBC4($s3)
    ctx->pc = 0x2c82a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3012), bits); }
    // 0x2c82a4: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x2c82a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c82a8: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C82A8u;
    {
        const bool branch_taken_0x2c82a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C82ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82A8u;
        // 0x2c82ac: 0xe6610bc8  swc1        $f1, 0xBC8($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3016), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c82a8) {
            ctx->pc = 0x2C82D4u;
            goto label_2c82d4;
        }
    }
    ctx->pc = 0x2C82B0u;
    // 0x2c82b0: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2c82b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c82b4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2c82b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2c82b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c82b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2c82bc:
    // 0x2c82bc: 0xe6610bc0  swc1        $f1, 0xBC0($s3)
    ctx->pc = 0x2c82bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3008), bits); }
    // 0x2c82c0: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x2c82c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c82c4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c82c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c82c8: 0xe6600bc4  swc1        $f0, 0xBC4($s3)
    ctx->pc = 0x2c82c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3012), bits); }
    // 0x2c82cc: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2c82ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c82d0: 0xe6610bc8  swc1        $f1, 0xBC8($s3)
    ctx->pc = 0x2c82d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3016), bits); }
label_2c82d4:
    // 0x2c82d4: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x2c82d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2c82d8: 0xdfb300e0  ld          $s3, 0xE0($sp)
    ctx->pc = 0x2c82d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c82dc: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x2c82dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c82e0: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x2c82e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c82e4: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x2c82e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c82e8: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2c82e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c82ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2C82ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82ECu;
        // 0x2c82f0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C82ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C82F4u;
}
