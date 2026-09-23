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

// Function: bgGlassLineTestRoom
// Address: 0x259eb8 - 0x25a090
void bgGlassLineTestRoom_0x259eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgGlassLineTestRoom_0x259eb8");
#endif

    switch (ctx->pc) {
        case 0x259f40u: goto label_259f40;
        case 0x259f80u: goto label_259f80;
        default: break;
    }

    ctx->pc = 0x259eb8u;

    // 0x259eb8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x259eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x259ebc: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x259ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x259ec0: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x259ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x259ec4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x259ec4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ec8: 0x8f83a240  lw          $v1, -0x5DC0($gp)
    ctx->pc = 0x259ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x259ecc: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x259eccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x259ed0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x259ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x259ed4: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x259ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x259ed8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x259ed8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259edc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x259edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x259ee0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x259ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ee4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x259ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x259ee8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x259ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x259eec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259ef0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x259ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x259ef4: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x259ef4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x259ef8: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x259ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x259efc: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x259efcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x259f00: 0x12600058  beqz        $s3, . + 4 + (0x58 << 2)
    ctx->pc = 0x259F00u;
    {
        const bool branch_taken_0x259f00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x259F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F00u;
        // 0x259f04: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f00) {
            ctx->pc = 0x25A064u;
            goto label_25a064;
        }
    }
    ctx->pc = 0x259F08u;
    // 0x259f08: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x259f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x259f0c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x259f0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f10: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x259f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259f14: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x259f14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x259f18: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x259f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259f1c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x259f1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x259f20: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x259f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x259f24: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x259f24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x259f28: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x259f28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x259f2c: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x259F2Cu;
    {
        const bool branch_taken_0x259f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F2Cu;
        // 0x259f30: 0x46001500  add.s       $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f2c) {
            ctx->pc = 0x25A064u;
            goto label_25a064;
        }
    }
    ctx->pc = 0x259F34u;
    // 0x259f34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x259f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f38: 0x939021  addu        $s2, $a0, $s3
    ctx->pc = 0x259f38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x259f3c: 0x0  nop
    ctx->pc = 0x259f3cu;
    // NOP
label_259f40:
    // 0x259f40: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x259f40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x259f44: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x259f44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x259f48: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x259f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259f4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x259f4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259f50: 0x0  nop
    ctx->pc = 0x259f50u;
    // NOP
    // 0x259f54: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x259F54u;
    {
        const bool branch_taken_0x259f54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F54u;
        // 0x259f58: 0x25090088  addiu       $t1, $t0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f54) {
            ctx->pc = 0x25A048u;
            goto label_25a048;
        }
    }
    ctx->pc = 0x259F5Cu;
    // 0x259f5c: 0x25060010  addiu       $a2, $t0, 0x10
    ctx->pc = 0x259f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x259f60: 0x25070038  addiu       $a3, $t0, 0x38
    ctx->pc = 0x259f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 56));
    // 0x259f64: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x259f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x259f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f6c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x259f6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x259f70: 0x25080060  addiu       $t0, $t0, 0x60
    ctx->pc = 0x259f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x259f74: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x259f74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f78: 0xc0964ca  jal         func_259328
    ctx->pc = 0x259F78u;
    SET_GPR_U32(ctx, 31, 0x259F80u);
    ctx->pc = 0x259F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259F78u;
    // 0x259f7c: 0x27ab0010  addiu       $t3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259328u, 0x259F78u, 0x259F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F80u;
label_259f80:
    // 0x259f80: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x259F80u;
    {
        const bool branch_taken_0x259f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259f80) {
            ctx->pc = 0x259F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259F80u;
            // 0x259f84: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A04Cu;
            goto label_25a04c;
        }
    }
    ctx->pc = 0x259F88u;
    // 0x259f88: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x259f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x259f8c: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x259f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x259f90: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x259F90u;
    {
        const bool branch_taken_0x259f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F90u;
        // 0x259f94: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f90) {
            ctx->pc = 0x25A030u;
            goto label_25a030;
        }
    }
    ctx->pc = 0x259F98u;
    // 0x259f98: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x259f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x259f9c: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x259f9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x259fa0: 0x24844748  addiu       $a0, $a0, 0x4748
    ctx->pc = 0x259fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18248));
    // 0x259fa4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x259fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259fa8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x259fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259fac: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x259facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x259fb0: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x259fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x259fb4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x259fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x259fb8: 0xac550024  sw          $s5, 0x24($v0)
    ctx->pc = 0x259fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 21));
    // 0x259fbc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x259fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x259fc0: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x259fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x259fc4: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x259fc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x259fc8: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x259fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x259fcc: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x259fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x259fd0: 0xac740028  sw          $s4, 0x28($v1)
    ctx->pc = 0x259fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 20));
    // 0x259fd4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x259fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x259fd8: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x259fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x259fdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x259fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x259fe0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x259fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x259fe4: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x259fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x259fe8: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x259fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x259fec: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x259fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x259ff0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x259ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ff4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x259ff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x259ff8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x259ff8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ffc: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x259ffcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x25a000: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x25a000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a004: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x25a004u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a008: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25a008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a00c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x25a00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a010: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x25a010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x25a014: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x25a014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a018: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x25a018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x25a01c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x25a01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a020: 0xe4e10014  swc1        $f1, 0x14($a3)
    ctx->pc = 0x25a020u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x25a024: 0xe5050018  swc1        $f5, 0x18($t0)
    ctx->pc = 0x25a024u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x25a028: 0xe4c4001c  swc1        $f4, 0x1C($a2)
    ctx->pc = 0x25a028u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x25a02c: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x25a02cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_25a030:
    // 0x25a030: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25a030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25a034: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x25a034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x25a038: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x25a038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x25a03c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25A03Cu;
    {
        const bool branch_taken_0x25a03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A03Cu;
        // 0x25a040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a03c) {
            ctx->pc = 0x25A048u;
            goto label_25a048;
        }
    }
    ctx->pc = 0x25A044u;
    // 0x25a044: 0xaf82a260  sw          $v0, -0x5DA0($gp)
    ctx->pc = 0x25a044u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943328), GPR_U32(ctx, 2));
label_25a048:
    // 0x25a048: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x25a048u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_25a04c:
    // 0x25a04c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x25a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x25a050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25a050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a054: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x25a054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x25a058: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25a058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a05c: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x25A05Cu;
    {
        const bool branch_taken_0x25a05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A05Cu;
        // 0x25a060: 0x939021  addu        $s2, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a05c) {
            ctx->pc = 0x259F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259f40;
        }
    }
    ctx->pc = 0x25A064u;
label_25a064:
    // 0x25a064: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25a064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25a068: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x25a068u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25a06c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x25a06cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25a070: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x25a070u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25a074: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x25a074u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25a078: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x25a078u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a07c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x25a07cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a080: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x25a080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a084: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x25a084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25a088: 0x3e00008  jr          $ra
    ctx->pc = 0x25A088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A088u;
        // 0x25a08c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A090u;
}
