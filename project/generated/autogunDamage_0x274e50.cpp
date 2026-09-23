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

// Function: autogunDamage
// Address: 0x274e50 - 0x274fe0
void autogunDamage_0x274e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("autogunDamage_0x274e50");
#endif

    switch (ctx->pc) {
        case 0x274ee8u: goto label_274ee8;
        case 0x274ef8u: goto label_274ef8;
        case 0x274f4cu: goto label_274f4c;
        case 0x274f64u: goto label_274f64;
        case 0x274f90u: goto label_274f90;
        case 0x274f98u: goto label_274f98;
        case 0x274fb8u: goto label_274fb8;
        default: break;
    }

    ctx->pc = 0x274e50u;

    // 0x274e50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x274e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x274e54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x274e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x274e58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x274e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x274e5c: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x274e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x274e60: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x274e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x274e64: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x274e64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e68: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x274e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x274e6c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x274e6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e70: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x274e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x274e74: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x274e74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e78: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x274e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x274e7c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x274e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x274e80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x274e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e84: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x274e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x274e88: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x274e88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x274e8c: 0xc6200214  lwc1        $f0, 0x214($s1)
    ctx->pc = 0x274e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274e90: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x274e90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274e94: 0x0  nop
    ctx->pc = 0x274e94u;
    // NOP
    // 0x274e98: 0x45000047  bc1f        . + 4 + (0x47 << 2)
    ctx->pc = 0x274E98u;
    {
        const bool branch_taken_0x274e98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x274E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E98u;
        // 0x274e9c: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e98) {
            ctx->pc = 0x274FB8u;
            goto label_274fb8;
        }
    }
    ctx->pc = 0x274EA0u;
    // 0x274ea0: 0xc62d004c  lwc1        $f13, 0x4C($s1)
    ctx->pc = 0x274ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x274ea4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x274ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ea8: 0xc78085b8  lwc1        $f0, -0x7A48($gp)
    ctx->pc = 0x274ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274eac: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x274eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x274eb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x274eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274eb4: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x274eb4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x274eb8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x274eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x274ebc: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x274ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x274ec0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x274ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274ec4: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x274ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x274ec8: 0x0  nop
    ctx->pc = 0x274ec8u;
    // NOP
    // 0x274ecc: 0x0  nop
    ctx->pc = 0x274eccu;
    // NOP
    // 0x274ed0: 0x46016b43  div.s       $f13, $f13, $f1
    ctx->pc = 0x274ed0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[1];
    // 0x274ed4: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x274ed4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x274ed8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x274ed8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x274edc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x274edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x274ee0: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x274EE0u;
    SET_GPR_U32(ctx, 31, 0x274EE8u);
    ctx->pc = 0x274EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274EE0u;
    // 0x274ee4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x274EE0u, 0x274EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274EE8u;
label_274ee8:
    // 0x274ee8: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x274ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x274eec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x274eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ef0: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x274EF0u;
    SET_GPR_U32(ctx, 31, 0x274EF8u);
    ctx->pc = 0x274EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274EF0u;
    // 0x274ef4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x274EF0u, 0x274EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274EF8u;
label_274ef8:
    // 0x274ef8: 0xc6250030  lwc1        $f5, 0x30($s1)
    ctx->pc = 0x274ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x274efc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x274efcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f00: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x274f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x274f04: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x274f04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f08: 0xc6230038  lwc1        $f3, 0x38($s1)
    ctx->pc = 0x274f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x274f0c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x274f0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f10: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x274f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x274f14: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x274f14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f18: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x274f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274f1c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x274f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f20: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x274f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274f24: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x274f24u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x274f28: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x274f28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x274f2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x274f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f30: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x274f30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x274f34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x274f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274f38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x274f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f3c: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x274f3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x274f40: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x274f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x274f44: 0xc0a5e30  jal         func_2978C0
    ctx->pc = 0x274F44u;
    SET_GPR_U32(ctx, 31, 0x274F4Cu);
    ctx->pc = 0x274F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274F44u;
    // 0x274f48: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2978C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2978C0u, 0x274F44u, 0x274F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274F4Cu;
label_274f4c:
    // 0x274f4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x274f4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x274f50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x274f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f54: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x274f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x274f58: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x274f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f5c: 0xc0a60f8  jal         func_2983E0
    ctx->pc = 0x274F5Cu;
    SET_GPR_U32(ctx, 31, 0x274F64u);
    ctx->pc = 0x274F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274F5Cu;
    // 0x274f60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2983E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2983E0u, 0x274F5Cu, 0x274F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274F64u;
label_274f64:
    // 0x274f64: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x274f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x274f68: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x274f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x274f6c: 0x3442ffde  ori         $v0, $v0, 0xFFDE
    ctx->pc = 0x274f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65502);
    // 0x274f70: 0x8e250218  lw          $a1, 0x218($s1)
    ctx->pc = 0x274f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
    // 0x274f74: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x274f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x274f78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f7c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x274f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x274f80: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x274f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x274f84: 0x34420021  ori         $v0, $v0, 0x21
    ctx->pc = 0x274f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
    // 0x274f88: 0xc0a92c4  jal         func_2A4B10
    ctx->pc = 0x274F88u;
    SET_GPR_U32(ctx, 31, 0x274F90u);
    ctx->pc = 0x274F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274F88u;
    // 0x274f8c: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4B10u, 0x274F88u, 0x274F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274F90u;
label_274f90:
    // 0x274f90: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x274F90u;
    SET_GPR_U32(ctx, 31, 0x274F98u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x274F90u, 0x274F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274F98u;
label_274f98:
    // 0x274f98: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x274f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x274f9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x274f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274fa0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x274fa0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x274fa4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x274FA4u;
    {
        const bool branch_taken_0x274fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274fa4) {
            ctx->pc = 0x274FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274FA4u;
            // 0x274fa8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x274FACu;
            goto label_274fac;
        }
    }
    ctx->pc = 0x274FACu;
label_274fac:
    // 0x274fac: 0x2010  mfhi        $a0
    ctx->pc = 0x274facu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x274fb0: 0xc081546  jal         func_205518
    ctx->pc = 0x274FB0u;
    SET_GPR_U32(ctx, 31, 0x274FB8u);
    ctx->pc = 0x274FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274FB0u;
    // 0x274fb4: 0x24840062  addiu       $a0, $a0, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x274FB0u, 0x274FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274FB8u;
label_274fb8:
    // 0x274fb8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x274fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x274fbc: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x274fbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x274fc0: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x274fc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x274fc4: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x274fc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x274fc8: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x274fc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x274fcc: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x274fccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x274fd0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x274fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x274fd4: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x274fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x274fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x274FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FD8u;
        // 0x274fdc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274FE0u;
}
